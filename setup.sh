#!/bin/bash
sudo chmod +x -R *
sudo LD_LIBRARY_PATH=./libs ./XBStationManagerHeadless $1
