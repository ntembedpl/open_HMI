#!/bin/bash

xrandr --output DP-1 --left-of DP-2
xinput map-to-output "Elo Touch Solutions Elo Touch Solutions Pcap USB Interface" DP-1

cd /home/sfi/tulip
sudo ./operator_HMI