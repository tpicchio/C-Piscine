#!/bin/sh
ip link | grep ether | cut -d "/" -f 2 | cut -d " " -f 2 
