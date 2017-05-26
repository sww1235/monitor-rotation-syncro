# Monitor Rotation Sync Device

This device is a combination of a tilt sensor and an Arduino Micro that detects
the orientation of your monitor and changes the orientation of your monitor in
software in order to match it.

The primary content of this repository is the code needed to read the digital
inputs of the tilt sensor and send keystrokes through the usb connection of the
Micro.

The tilt sensor this is designed for is [this Parallax
one](https://www.digikey.com/short/3d3vzc). If you prefer an alternate, the code
should be fairly easy to adapt.

State diagram of tilt sensor documented here for ease of access. This is from
the sensor datasheet.

|Position|Output 1|Output 2|
|--------|--------|--------|
|A|0|0|
|B|1|0|
|C|1|1|
|D|0|1|

Only windows is currently supported out of the box due to the lack of default
keyboard shortcuts on macOS and the wide variety of desktop environments on
Linux.
