/* 
	Editor: http://www.visualmicro.com
	        visual micro and the arduino ide ignore this code during compilation. this code is automatically maintained by visualmicro, manual changes to this file will be overwritten
	        the contents of the Visual Micro sketch sub folder can be deleted prior to publishing a project
	        all non-arduino files created by visual micro and all visual studio project or solution files can be freely deleted and are not required to compile a sketch (do not delete your own code!).
	        note: debugger breakpoints are stored in '.sln' or '.asln' files, knowledge of last uploaded breakpoints is stored in the upload.vmps.xml file. Both files are required to continue a previous debug session without needing to compile and upload again
	
	Hardware: PiBot Controller Rev2.x, Platform=avr, Package=arduino
*/

#define __AVR_ATmega2560__
#define ARDUINO 105
#define ARDUINO_MAIN
#define F_CPU 16000000L
#define __AVR__
extern "C" void __cxa_pure_virtual() {;}

//
//

#include "C:\Users\Administrator\Desktop\working file\pibot-firmware-upload-tool-141204\hardware\arduino\variants\mega\pins_arduino.h" 
#include "C:\Users\Administrator\Desktop\working file\pibot-firmware-upload-tool-141204\hardware\arduino\cores\arduino\arduino.h"
#include "C:\Users\Administrator\Desktop\测试和发货相关文件14-12-26\PiBot客户定制固件\pibot-3d-printer-firmware-v1.02\PiBot\PiBot.ino"
#include "C:\Users\Administrator\Desktop\测试和发货相关文件14-12-26\PiBot客户定制固件\pibot-3d-printer-firmware-v1.02\PiBot\Commands.cpp"
#include "C:\Users\Administrator\Desktop\测试和发货相关文件14-12-26\PiBot客户定制固件\pibot-3d-printer-firmware-v1.02\PiBot\Commands.h"
#include "C:\Users\Administrator\Desktop\测试和发货相关文件14-12-26\PiBot客户定制固件\pibot-3d-printer-firmware-v1.02\PiBot\Communication.cpp"
#include "C:\Users\Administrator\Desktop\测试和发货相关文件14-12-26\PiBot客户定制固件\pibot-3d-printer-firmware-v1.02\PiBot\Communication.h"
#include "C:\Users\Administrator\Desktop\测试和发货相关文件14-12-26\PiBot客户定制固件\pibot-3d-printer-firmware-v1.02\PiBot\Configuration.h"
#include "C:\Users\Administrator\Desktop\测试和发货相关文件14-12-26\PiBot客户定制固件\pibot-3d-printer-firmware-v1.02\PiBot\Eeprom.cpp"
#include "C:\Users\Administrator\Desktop\测试和发货相关文件14-12-26\PiBot客户定制固件\pibot-3d-printer-firmware-v1.02\PiBot\Eeprom.h"
#include "C:\Users\Administrator\Desktop\测试和发货相关文件14-12-26\PiBot客户定制固件\pibot-3d-printer-firmware-v1.02\PiBot\Extruder.cpp"
#include "C:\Users\Administrator\Desktop\测试和发货相关文件14-12-26\PiBot客户定制固件\pibot-3d-printer-firmware-v1.02\PiBot\Extruder.h"
#include "C:\Users\Administrator\Desktop\测试和发货相关文件14-12-26\PiBot客户定制固件\pibot-3d-printer-firmware-v1.02\PiBot\FatStructs.h"
#include "C:\Users\Administrator\Desktop\测试和发货相关文件14-12-26\PiBot客户定制固件\pibot-3d-printer-firmware-v1.02\PiBot\HAL.cpp"
#include "C:\Users\Administrator\Desktop\测试和发货相关文件14-12-26\PiBot客户定制固件\pibot-3d-printer-firmware-v1.02\PiBot\HAL.h"
#include "C:\Users\Administrator\Desktop\测试和发货相关文件14-12-26\PiBot客户定制固件\pibot-3d-printer-firmware-v1.02\PiBot\OnePageConfigure.h"
#include "C:\Users\Administrator\Desktop\测试和发货相关文件14-12-26\PiBot客户定制固件\pibot-3d-printer-firmware-v1.02\PiBot\PiBot.h"
#include "C:\Users\Administrator\Desktop\测试和发货相关文件14-12-26\PiBot客户定制固件\pibot-3d-printer-firmware-v1.02\PiBot\Printer.cpp"
#include "C:\Users\Administrator\Desktop\测试和发货相关文件14-12-26\PiBot客户定制固件\pibot-3d-printer-firmware-v1.02\PiBot\Printer.h"
#include "C:\Users\Administrator\Desktop\测试和发货相关文件14-12-26\PiBot客户定制固件\pibot-3d-printer-firmware-v1.02\PiBot\SDCard.cpp"
#include "C:\Users\Administrator\Desktop\测试和发货相关文件14-12-26\PiBot客户定制固件\pibot-3d-printer-firmware-v1.02\PiBot\SdFat.cpp"
#include "C:\Users\Administrator\Desktop\测试和发货相关文件14-12-26\PiBot客户定制固件\pibot-3d-printer-firmware-v1.02\PiBot\SdFat.h"
#include "C:\Users\Administrator\Desktop\测试和发货相关文件14-12-26\PiBot客户定制固件\pibot-3d-printer-firmware-v1.02\PiBot\fastio.h"
#include "C:\Users\Administrator\Desktop\测试和发货相关文件14-12-26\PiBot客户定制固件\pibot-3d-printer-firmware-v1.02\PiBot\gcode.cpp"
#include "C:\Users\Administrator\Desktop\测试和发货相关文件14-12-26\PiBot客户定制固件\pibot-3d-printer-firmware-v1.02\PiBot\gcode.h"
#include "C:\Users\Administrator\Desktop\测试和发货相关文件14-12-26\PiBot客户定制固件\pibot-3d-printer-firmware-v1.02\PiBot\motion.cpp"
#include "C:\Users\Administrator\Desktop\测试和发货相关文件14-12-26\PiBot客户定制固件\pibot-3d-printer-firmware-v1.02\PiBot\motion.h"
#include "C:\Users\Administrator\Desktop\测试和发货相关文件14-12-26\PiBot客户定制固件\pibot-3d-printer-firmware-v1.02\PiBot\pins.h"
#include "C:\Users\Administrator\Desktop\测试和发货相关文件14-12-26\PiBot客户定制固件\pibot-3d-printer-firmware-v1.02\PiBot\u8glib_ex.h"
#include "C:\Users\Administrator\Desktop\测试和发货相关文件14-12-26\PiBot客户定制固件\pibot-3d-printer-firmware-v1.02\PiBot\ui.cpp"
#include "C:\Users\Administrator\Desktop\测试和发货相关文件14-12-26\PiBot客户定制固件\pibot-3d-printer-firmware-v1.02\PiBot\ui.h"
#include "C:\Users\Administrator\Desktop\测试和发货相关文件14-12-26\PiBot客户定制固件\pibot-3d-printer-firmware-v1.02\PiBot\uiconfig.h"
#include "C:\Users\Administrator\Desktop\测试和发货相关文件14-12-26\PiBot客户定制固件\pibot-3d-printer-firmware-v1.02\PiBot\uilang.h"
#include "C:\Users\Administrator\Desktop\测试和发货相关文件14-12-26\PiBot客户定制固件\pibot-3d-printer-firmware-v1.02\PiBot\uimenu.h"
