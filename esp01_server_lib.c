/*
 *  Webserver som man logge på f.eks fra mobilen.
 *  Serveren skal kunne levere en hjemmeside til klienten
 * og vise loggen som er gemt i EEPROM
 */


#include "mcc_generated_files/mcc.h" // Ellers kløjs compiler og/eller IDE


/*
 * SSID:	SSID-JRzcM4
 * Protokol:	802.11n
 * Sikkerhedstype:	WPA2-Personal
 * Netværksbånd:	2,4 GHz
 * Netværkskanal:	11
 * Link til lokal IPv6-adresse:	fe80::f890:1bd1:3f52:d781%3
 * IPv4-adresse:	192.168.0.54
 * IPv4-DNS-servere:	192.168.0.1
 * Producent:	Intel Corporation
 * Beskrivelse:	Intel(R) Dual Band Wireless-AC 8260
 * Driverversion:	20.70.3.3
 * Fysisk adresse (MAC):	14-AB-C5-1B-43-7E
 */

char *SSID[]   = {"SSID-JRzcM4"};
char *PASSWORD = {""};


/*
 * HTTP header starter  altid med en response kode med status kode
 * f.eks. HTTP/1.1 200 OK.
 * Derefter angiver man en content type, i vores tilfældde sender
 * vi en webside. Derefter lukker man forbindelsen og sender en tom
 * linje.
 */
void writeHTTPheader(void) {
    ///printf("HTTP/1.1 200 OK");
    //printf("Content-type:text/html");
    //printf("Connection: close");
    //printf(); // ndfjkhadækljhsDKLJ
}




/*
 * HTML 
 */




/*
 * Udprint linie
 * 
 * Data til udprint skal beregnes udfra den rå data som blive dumpet fra EEPROM
 */
