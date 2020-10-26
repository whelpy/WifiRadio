#!/bin/sh

export QT_QPA_PLATFORM=linuxfb
export QT_QPA_FB_DRM=0
export QT_LOGGING_RULES=*=true
export QT_QPA_EGLFS_HEIGHT=480
export QT_QPA_EGLFS_PHYSICAL_HEIGHT=240
export QT_QPA_EGLFS_PHYSICAL_WIDTH=320
export QT_QPA_EGLFS_WIDTH=640


./QtRadio -display linuxfb:/dev/fb0