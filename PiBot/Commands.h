/*
    This file is part of PiBot-Firmware.

    PiBot-Firmware is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version. 
	
	At the same time you have to follow the rules of PiBot.

    PiBot-Firmware is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of both the GNU General Public License 
    and PiBot License along with PiBot-Firmware.  
	If not, see <http://www.gnu.org/licenses/> and <http://www.pibot.com/>.
	
    Repetier firmware is a nearly complete rewrite of the sprinter firmware
    by kliment which based on Tonokip RepRap firmware rewrite based off of 
	Hydra-mmm firmware. This firmware is based on Repetier firmware, rewrite 
	it to suitable PiBot hardwares.
*/


#ifndef COMMANDS_H_INCLUDED
#define COMMANDS_H_INCLUDED

class Commands
{
public:
    static void commandLoop();
    static void checkForPeriodicalActions();
    static void executeGCode(GCode *com);
    static void waitUntilEndOfAllMoves();
    static void waitUntilEndOfAllBuffers();
    static void printCurrentPosition();
    static void printTemperatures(bool showRaw = false);
    static void setFanSpeed(int speed,bool wait); /// Set fan speed 0..255
    static void changeFeedrateMultiply(int factorInPercent);
    static void changeFlowateMultiply(int factorInPercent);
    static void reportPrinterUsage();
    static void emergencyStop();
    static void checkFreeMemory();
    static void writeLowestFreeRAM();
private:
    static int lowestRAMValue;
    static int lowestRAMValueSend;
};

#endif // COMMANDS_H_INCLUDED
