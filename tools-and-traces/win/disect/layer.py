#!/bin/bash

for i in range(1, 4):
  with open("file" + str(i) + ".txt") as f:
      content = f.readlines()

  allbytes = []
  for line in content:
    allbytes += line.split(":")

  print len(allbytes)
