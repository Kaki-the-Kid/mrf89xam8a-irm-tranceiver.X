/*
 * F�rste byte f�r skrevet counter, n�r man er f�rdig med at skrive de fire data
 * Derfor vil man altid f� den sidste valide chunk af byte dat
 * 
 * Der er ogs� mulighed for at fylde EEPROMens hukommelse med 0xFF, fordi hvis 
 * man skriver de r� data fra termostaten og s�rger for at de 
 */

#include "mcc_generated_files/mcc.h"
uint8_t STATUS = 0;
