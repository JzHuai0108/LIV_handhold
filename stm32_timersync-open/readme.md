
This program is largely developed based on the tutorial series at [here](https://www.bilibili.com/video/BV1th411z7sn).

To build the program on windows
1. install keil uvision v5.24 following the instructions [here](https://www.bilibili.com/video/BV1th411z7sn?vd_source=e6eb99ae0bd5151a3b4872da248780f2&p=3&spm_id_from=333.788.videopod.episodes)

2. open the project

3. remove the old build
```
# in windows powershell
.\keilkilll.bat
```

4. hit the build and download icon in Keil5.

Note you may need a ST-Link V2 to connect the STM32 board to the computer via the USB A port.

5. Check the GPRMC output with tera term on windows.

First check the COM number on device manager of windows which can be started by Win+X and then device manager. say COM7 identified as the "Prolific USB to serial COMM port(COM7)"

second in tera term, setup tab > serial port...
Port COM7
Speed 9600

Then leave other options intact, and hit New Open button,

You should be able to see the GPRMC outputs in the terminal.



