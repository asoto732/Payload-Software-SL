# Payload-Software-SL
### Objectives
#### Data logging & Temp control
1. Connect temperature sensor to Pico
2. Read temperature data to the SD card 
3. Connect Sampling and data logging rate using the RTC
4. Using steps 1 2 and 3 for the PWM fan temperature control system
#### Experiment recording (Fluorometer)
1. Make routine for LED blinking (lol)
2. Read color data to color sensor   
#### Altimeter 
1. Record data
2. Store data
3. Use altimeter to correlate second injection 

#### Open source Software: 
##### PWM fan pico 
https://github.com/tjko/fanpico
##### Fluorometer 
https://github.com/traulab/DIYNAFLUOR?tab=readme-ov-file

### Testing 
While you may not always have access to the PICO you can still write code using emulators!
Wokwi has a good emulator for the PICO

### VS Code set up 
If developing in vsCode (recommended). Download the Raspberry Pi Pico extension, and after pulling CMake files into your project it should work. Might have some issues with windows, so drop a message in slack if there are any issues.