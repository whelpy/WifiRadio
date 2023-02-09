1. Connection:

SCLK (SCK) - 23
MOSI (SDA) - 19
MISO - 21 (probably not used)
CS - 24
DC (AO) - 13
RST - 11
VCC - 4
GND - 25
LED - 15

2. Enable spi-spidev.in armbian-config
3. Install kernel headers in armbian-config
4. Run:

# armbian-add-overlay spi-ili9341.dts

5. For framebuffer console check /boot/armbianEnv.txt:

extraargs="fbcon=map:0"

Number 0 means /dev/fb0 is mapped to all tty consoles.
For disabling the feature use 
extraargs="fbcon=map:1"
or any other number of non-existing framebuffer.

