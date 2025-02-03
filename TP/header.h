#ifndef TP_TESTS
#define TP_TESTS

#include<stdio.h>
#include<string.h>

struct Note {
	float frequence;
	float duree;
};

struct Note* creerNote(float hrtz, float time);
void simulerPiano(struct Note** notes, int nbr_notes);

#endif
