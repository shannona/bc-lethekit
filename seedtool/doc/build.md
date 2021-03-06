## Seedtool Application Instructions

### One Time Setup

The `gitrevision.h` file is generated with git hooks and contains the
latest version information so it can be built into the application and
reported to the user.  It is not critical, but is very helpful when
reporting bugs, requesting features etc.

Enable the generation of the `gitrevision.h` file.  This only needs to
be done once, but is safe to do anytime you like.

    # Must be run in the seedtool directory
    ./enable-gitrevision-hooks.sh

You may disable `gitrevision.h` generation with:

    ./disable-gitrevision-hooks.sh

### Install LetheKit in your Arduino Sketchbook

[LetheKit Installation Instructions](../../doc/installation.md)

### Add Libraries

Launch the Arduino IDE in the `seedtool` subdirectory:

    arduino ./
    
Open `Tools` -> `Manage Libraries...`, install the following:
* `GxEPD2`
* `Adafruit GFX Library`
* `Keypad`

### Build and Upload *seedtool*

Launch the Arduino IDE in the `seedtool` subdirectory:

    arduino ./

Connect a LetheKit hardware device to an appropriate USB port.

To upload code to the SAMD51 module you will need to manually enter
bootloader mode. There are two approaches, the first involves opening
the case and pressing the reset button twice in rapid succession.  It
is also possible to enter bootloader mode by power cycling with the
external power switch.  Here are the steps for the external power
switch method:

1. Connect the LetheKit to a USB port on you computer. Turn the
   LetheKit on and wait a few seconds.

2. Turn off, on, off, on rapidly.

3. If the device is in bootloader mode the blue power light will not
   be on, even though it is plugged in and the switch is left in the
   "on" position.

A description of using the internal reset button can be found at the
[SAMD51 Thing Plus Hookup Guide](https://learn.sparkfun.com/tutorials/samd51-thing-plus-hookup-guide/setting-up-the-arduino-ide),
search for "Don't Forget to Launch the Bootloader".

Press the "Upload" button on the Arduino IDE. The *seedtool*
application will be built and uploaded to your device.
