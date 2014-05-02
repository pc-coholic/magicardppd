VPATH = src:ppd:bin

ppds = authentys.ppd.gz authentysplus.ppd.gz authentyspro.ppd.gz enduro.ppd.gz endurop.ppd.gz fagoop310e.ppd.gz idmadv.ppd.gz idmadvplus.ppd.gz idmaker.ppd.gz idmsec.ppd.gz idmvalue.ppd.gz jke160c.ppd.gz jke700c.ppd.gz mc200.ppd.gz p2500s.ppd.gz p4500s.ppd.gz p4500splus.ppd.gz ppcid2000.ppd.gz ppcid2100.ppd.gz ppcid2300.ppd.gz ppcid3100.ppd.gz ppcid3300.ppd.gz pro.ppd.gz pronto.ppd.gz proxtd.ppd.gz pridento.ppd.gz pridentop.ppd.gz secs200.ppd.gz

DEFS=
LIBS=-lcupsimage -lcups 
INC=-I/ultracupsdrv/src

ifdef RPMBUILD
DEFS=-DRPMBUILD
LIBS=-ldl 
endif

define dependencies
@if [ ! -e /usr/include/cups ]; then echo "CUPS headers not available - install cups-devel for the distribution in use - #exiting"; exit 1; fi
endef

define init
@if [ ! -e bin ]; then echo "mkdir bin"; mkdir bin; fi
endef

define sweep
@if [ -e bin ]; then echo "rm -f bin/*"; rm -f bin/*; rmdir bin; fi
@if [ -e install ]; then echo "rm -f install/*"; rm -f install/*; rmdir install; fi
endef

install/setup: rastertoultra $(ppds) setup
	# packaging
	@if [ -e install ]; then rm -f install/*; rmdir install; fi
	mkdir install
	cp bin/rastertoultra install
	cp bin/*.ppd install
	cp bin/setup install

.PHONY: install
install:
	@if [ ! -e install ]; then echo "Please run make package first."; exit 1; fi
	# installing
	cd install; exec ./setup

.PHONY: remove
remove:
	#removing from default location (other locations require manual removal)
	@if [ -e /usr/lib/cups/filter/rastertoultra ]; then echo "Removing rastertoultra"; rm -f /usr/lib/cups/filter/rastertoultra; fi
	@if [ -d /usr/share/cups/model/ultra ]; then echo "Removing dir .../cups/model/ultra"; rm -rf /usr/share/cups/model/ultra; fi

.PHONY: rpmbuild
rpmbuild:
	@if [ ! -e install ]; then echo "Please run make package first."; exit 1; fi
	# installing
	RPMBUILD="true"; export RPMBUILD; cd install; exec ./setup

.PHONY: help
help:
	# Help for ultracupsdrv make file usage
	#
	# command          purpose
	# ------------------------------------
	# make              compile all sources and create the install directory
	# make install      execute the setup shell script from the install directory [require root user permissions]
	# make remove       removes installed files from your system (assumes default install location) [requires root user permissions]
	# make clean        deletes all compiles files and their folders

rastertoultra: rastertoultra.c
	$(dependencies)
	$(init)
	# compiling rastertoultra filter
	gcc -Wl,-rpath,/usr/lib -Wall -fPIC -O2 -o bin/rastertoultra src/rastertoultra.c -lcupsimage -lcups -lm
#	gcc -Wl,-rpath,/usr/lib64 -Wall -fPIC -O2 -o bin/rastertoultra src/rastertoultra.c -lcupsimage -lcups -lm

$(ppds): %.ppd.gz: %.ppd
	# copy ppd file
	cp $< bin

setup: setup.sh
	$(dependencies)
	$(init)
	# create setup shell script
	cp src/setup.sh bin/setup
	chmod +x bin/setup

.PHONY: clean
clean:
	# cleaning
	$(sweep)

