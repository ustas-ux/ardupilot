#!/bin/sh

file="$1"
shift
set -x

mavgraph.py --marker=. "$file" IMU.AccX IMU.AccY IMU.AccZ IMU2.AccX IMU2.AccY IMU2.AccZ "$@"

