#!/bin/env python

# Auther Vishal Biswas a.k.a CyberKnight00 
# https://twitter.com/CyberKnight00

from func import *
import sys
import time

def Flag(t):
    print "Wait {} seconds".format(t)

    for i in range(t,0,-1):
        print i
        time.sleep(1)
    
    flag('404 Flag Not Found',t)

if (len(sys.argv) < 2 ) : Flag(31337)
