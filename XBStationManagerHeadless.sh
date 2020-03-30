#!/bin/bash
sudo modprobe bcm2835-v4l2
sudo chmod +x -R /home/pi/XBStationManagerHeadless
sudo LD_LIBRARY_PATH=/home/pi/XBStationManagerHeadless/libs /home/pi/XBStationManagerHeadless/XBStationManagerHeadless $1 $2 $3 $4 $1 $2 $3 $4 $5 $6 $7 $8 $9 $10
