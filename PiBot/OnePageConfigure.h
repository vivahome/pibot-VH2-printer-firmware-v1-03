/************************************************************************************
**   finished configure all basic parameter for your printer in this page   **
************************************************************************************/
#ifndef ONEPAGECONFIGURE_H
#define ONEPAGECONFIGURE_H
//#################### Board Select #######################################
// PiBot for Repetier V1.0-1.3    = 314   // PiBot for Repetier V1.4-1.6    = 315   // PiBot Controller   Rev2.0       = 316  
#define MOTHERBOARD                    316 
//############### Controller Rev2.0 Channel Select ###############################
// 0(decade)=000(binary): A4 A2 A0(physical); 1=001: A4 A2 A1; 2=010: A4 A3 A0; 3=011: A4 A3 A1; /
// 4(decade)=100(binary): A5 A2 A0(physical); 5=101: A5 A2 A1; 6=110: A5 A3 A0; 7=111: A5 A3 A1; Other integer=0.
#define Thermistor_Solution            0                ///***PiBot Controller Rev2.0 sensor channel choose, skip this for other boards.
//#################### axis max length ####################################
#define X_MAX_LENGTH                   220              ///***X Axis Size mm
#define Y_MAX_LENGTH                   200              ///***Y Axis Size mm
#define Z_MAX_LENGTH                   165              ///***Z Axis Size mm
//#################### steps /mm ########################################
#define XAXIS_STEPS_PER_MM             64          ///***X steps/mm
#define YAXIS_STEPS_PER_MM             64           ///***Y steps/mm
#define ZAXIS_STEPS_PER_MM             2133.333         ///***Z steps/mm
//#################### direction invert #####################################
#define INVERT_X_DIR                   false            ///***Change the direction by false or true
#define INVERT_Y_DIR                   false            ///***Change the direction by false or true
#define INVERT_Z_DIR                   false            ///***Change the direction by false or true
//#################### Endstop option #####################################
#define X_MODEL_ENDSTOP                mechanical          ///***Endstop Type: mechanical or optical (X min max)
#define Y_MODEL_ENDSTOP                mechanical          ///***Endstop Type: mechanical or optical (Y min max)
#define Z_MODEL_ENDSTOP                mechanical          ///***Endstop Type: mechanical or optical (Z min max)
#define NUM_ENDSTOP                    Six            ///***Endstop Number: six  or  three  
//#################### home direction invert #####################################
#define X_HOME_DIR                     -1               ///***Change the direction by -1 (min) or 1 (max)
#define Y_HOME_DIR                     -1               ///***Change the direction by -1 (min) or 1 (max)
#define Z_HOME_DIR                     -1               ///***Change the direction by -1 (min) or 1 (max)
//#################### extruder options ####################################
#define NUM_EXTRUDER                   1                ///****extruder number
#define EXT0_STEPS_PER_MM              120              ///***E1 steps/mm
#define EXT1_STEPS_PER_MM              120              ///***E2 steps/mm (if none, E2 copy the E1 data)
#define EXT0_INVERSE                   true             ///***E1 direction          
#define EXT1_INVERSE                   false            ///***E1 direction  (if none, copy the E1 data)
//########################double extruder distance#################################
#define EXT0_EXT1_DistanceX            55.4             ////****   Relative to the distance of the Extruder1 (0,0)
#define EXT0_EXT1_DistanceY            0                ////****   Set When use double extruder
//#################### heated bed options ###################################
#define HAVE_HEATED_BED                true             ///****Heated Bed 
//#################### LCD options ########################################
#define UI_PRINTER_NAME                "PiBot3DPrinter" ///****input your Logo string
#define UI_PRINTER_COMPANY             "BanDao"         ///****input your company name
#define DispReady                      "PiBot ready"    ///****input your machine ready string
#define DispIdel                       "PiBot idle"     ///****input your machine Idle string
//## Delta options (skip this,if your don't building the delta printer)############################
#define DELTA                          false            ///***define Delta printer                      
#define DELTA_AXIS_STEPS_PER_MM        80               ///***steps/mm for Delta Stepper Motor(three motor with same parameters)
#define DELTA_MAX_RADIUS               200              ///***Max. radius the printer should be able to reach. 
#define DELTA_RADIUS                   174              ///***Delta's round Build platform Radius mm (safty zone )
//## Build platform correction options (skip this,if your don't with Z-Probing)########################
#define PLATFORM_AUTOMATICALLY_CORRECT false             ///*** Z-min-Probing and auto correct your build platform (Pin:64)
#define Z_PROBE_X1                     40   			 //   Probing point  (make sure them within your build platform, and near the edge)        
#define Z_PROBE_Y1                     40    			 //   * P1(X1,Y1)   
#define Z_PROBE_X2                     40   			 //                                        
#define Z_PROBE_Y2                     180   			 //                        *  P3(X3,Y3)
#define Z_PROBE_X3                     190    			 //                                        
#define Z_PROBE_Y3                     110   			 //   * P2(X2,Y2)
#define Z_PROBE_X_OFFSET               35 	             ///******distance of senser and extruder in X axis    extr1(0,0) * -------| X_Offset
#define Z_PROBE_Y_OFFSET               -15                ///******distance of senser and extruder in Y axis                  Y_Offset  * (X_Offset,Y_Offset)

#endif


