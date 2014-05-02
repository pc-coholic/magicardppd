#!/usr/bin/perl
use IO::Socket::INET;
$myport=12000;
$pserve=IO::Socket::INET->new(LocalPort => $myport,Type=>SOCK_STREAM,Reuse=>1,Listen=>1) or die "can't do that $!\n";
while ($pjob=$pserve->accept()) {
  open(J,">>/tmp/x") or print "having issues $!\n";
  while (<$pjob>) {
  print J "$_";
  }
  close J;
  close $pjob;
}

