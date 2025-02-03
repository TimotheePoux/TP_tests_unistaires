#ifndef TP_TESTS
#define TP_TESTS

#include<stdio.h>
#include<string.h>

struct Note {
	int frequence;
	int duree;
};

struct Note* creerNote(int hrtz, int sec);
void simulerPiano(struct Note** notes, int nbr_notes);

#endif
