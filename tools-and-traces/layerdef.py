#!/bin/bash

with open("file1def.txt") as f:
    content = f.readlines()

allbytes = []
for line in content:
  n = 2
  allbytes += [line[i:i+n] for i in range(0, len(line), n)] 

allbytes = filter(lambda a: a != '\n', allbytes)

print len(allbytes)
