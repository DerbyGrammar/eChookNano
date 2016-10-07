#Documentation
###Variable Names
All of these are custom, so don't go complaining to the weChookTeam. Complain to Chris N  
  
`TEMP_FAN_ON` is the temperature on when you would like the fan to come on, in celsius  
`TEMP_FAN_PIN` is the pin where the (hopefully mosfet) will turn on when the `TEMP_FAN_ON` temperature is reached
`LCD_FIRSTLINE_STRING` is the string at the top of the display, you can modify this for your all team
###The LCD itself
It is a 20x4 LCD and the code that I have written will show what it will looks like below
```
DGS Racing
VLT: 20 | CUR: 20
TMP: 20 | SPD: 20
TMP: 20 | FAN: ON/OFF
```
This is what the LCD will look like, but all of the values will change. The list of abbreviations are as follows:
- VLT is voltage.
- CUR is current.
- TMP on line 3 is temperatureOne (motor temperature)
- SPD is speed.
- TMP on line 4 is temperatureTwo (unassigned)
- FAN tells the driver if the fan is on or off
