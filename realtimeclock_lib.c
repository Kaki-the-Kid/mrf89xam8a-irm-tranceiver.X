#include "mcc_generated_files/mcc.h"

/* 
 * Registre i Real-time clock
 */

// 00H: |      0    | 10 Seconds (3) | Seconds (4) |                          Function: Seconds, range: 00?59
// 01H: |      0    | 10 Minutes (3) | Minutes (4) |                          Function: Minutes, range: 00?59
// 02H: |      0    | 12/n24 | AM/PM / 10 Hour | Hour |                       Function: Hours, range 1-12 +AM/PM 00-23
// 03H: |      0    | 0 | 0 | 0 | 0 | 0 | Day (3)) |                          Function: Day, range: 1-7
// 04H: |      0    | 0 | 10 Date (2) | Date (4) |                                    Function: Date, range: 01-31
// 05H: |   Century | 0 | 0 | 10 Month | Month |                        Function: Month/ Century, range: 01-12 + Century
// 06H: | 10Year(4) | Year (4) |                                    Function: Year, range: 00?99
// 07H: |    A1M1   | 10 Seconds (3) | Seconds (4) |                       Function: Alarm 1 Seconds, range: 00?59
// 08H: |    A1M2   | 10 Minutes (3) | Minutes (4) |                       Function: Alarm 1 Minutes, range: 00?59
// 09H: |    A1M3   | 12/n24 | AM/PM / 10 Hour | Hour |                    Function: Alarm 1 Hours, range: 1?12 + AM/PM 00?23range: 10 Hour
// 0AH: |    A1M4   | DY/DT | 10 Date | Day | Alarm 1 Day | 1?7 | Date |   Function: Alarm 1 Date, range: 1?31
// 0BH; |    A2M2   | 10 Minutes | Minutes |                               Function: Alarm 2 Minutes, range: 00?59
// 0CH; |    A2M3   | 12/24 | AM/PM / 10 Hour | Hour |                     Function: Alarm 2 Hours, range: 1?12 + AM/PM, 00?23, range: 10 Hour
// 0DH: |    A2M4   | DY/nDT | 10 Date / Day | Alarm 2 Day | 1?7 | Date |  Function: Alarm 2 Date, range: 01?31
// 0EH: |    EOSC   | 0 | 0 | RS2 | RS1 | INTCN | A2IE | A1IE |            Function: Control, range: ?
// 0FH: |    OSF    | 0 | 0 | 0 | 0 | 0 | A2F | A1F |                       Funtion: Status, range: ?

// Intern buffer som holder data, der er modtaget fra Real-time clock
uint8_t _clockData[] {0x00, 0x01, 0x2, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0E, 0x0F};

// Formatteret ASCII tegn for værdierne
uint8_t _clockDataString[] = {"hh:mm:ss - "}; //HH:MM:SS - 

/*
 * Funktion som returnerer alle data fra real-time clocken, og returnerer en 
 * pointer til de hentede data
 * 
 * Vi er så heldige at real-time har en addresse ponter med autoincremenet,
 * så det er bar at sætte adresse pointer til adresse 0x00 og derefter læse
 * 0x0F bytes. Alle bytes er i BCD format, så de er nemme at konvertere
 */
uint8_t getTimeAll(void) {
    

}

void setTimeAll(void) {}

uint8_t convertBCD2Bytes(uint8_t bcdByte) {}

uint8_t convertBytes2BCD(uint8_t *bytesPtr) {}

void testRealTimeClockStart(void) {}

void testRealTimeClockStop(void) {}

void getSeconds(void) {}

void setSeconds(void) {}

void setMinutes(void) {}

void getMinutes(void) {}

void getHour(void) {}

void setHour(void) {}

void getAMPM(void) {}

void setAMPM(void) {}

void getDay(void) {}

void setDay(uint8_t data) {}

void getMonth(void) {}

void setMonth(void) {}

void getYear(void) {}

void setYear(void) {}

/*
 * Alarm 1 can be set by writing to registers 07h?0Ah.
 */
void setAlarm1(void) {}

void getAlarm1Seconds(void) {}

void setAlarm1Seconds(void) {}

void getAlarm1Minutes(void) {}

void setAlarm1Minutes(void) {}

void getAlarm1Hours(void) {}

void setAlarm1Hours(void) {}

void setAlarm1AMPM(void) {}

/*
 * Alarm 2 can be set by writing to registers 0Bh?0Dh.
 */
void setAlarm2(void) {}

void getAlarm2Seconds(void) {}

void setAlarm2Seconds(void) {}

void getAlarm2Minutes(void) {}

void setAlarm2Minutes(void) {}

void getAlarm2Hours(void) {}

void setAlarm2Hours(void) {}

void setAlarm2AMPM(void) {}