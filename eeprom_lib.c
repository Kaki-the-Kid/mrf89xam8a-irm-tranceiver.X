/*
 * Første byte får skrevet counter, når man er færdig med at skrive de fire data
 * Derfor vil man altid få den sidste valide chunk af byte dat
 * 
 * Der er også mulighed for at fylde EEPROMens hukommelse med 0xFF, fordi hvis 
 * man skriver de rå data fra termostaten og sørger for at de 
 */

#include "mcc_generated_files/mcc.h"
uint8_t STATUS = 0;
