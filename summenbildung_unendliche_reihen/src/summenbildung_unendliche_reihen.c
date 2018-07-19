 //============================================================================
 //Name        : summenbildung_unendliche_reihen.c
 // Author      : Samuel Bergen
 // Version     : 1.0
 // Copyright   : Copyright 2018 Samuel Bergen
 // Description : Programm zur Summation unendlicher Reihen
 //============================================================================

#include <stdio.h>
#include <stdlib.h>

int main() {
	// Ausgabevariable deklarieren
	float ergebnis = 10, summe = 0, si = 1;
	int summanden = 0;

	printf("Summierung der geometrischen Reihe, bis sich die Summe nicht mehr ändert:\n\n");
	while(ergebnis != summe)
	{
		ergebnis = summe;
		summe = summe + (1 / si);
		si *= 2;
		summanden++;
	}
	printf("Summe der geometrische Reihe: %.16f\n", ergebnis);
	printf("Anzahl der Summanden: %i\n", summanden);

	return 0;
}
