#! /bin/sh

#exec slstatus &
exec dwmblocks &
pkill -RTMIN+15 dwmblocks &
