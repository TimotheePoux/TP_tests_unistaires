#include"header.h"

struct Note* creerNote(int hrtz, int sec) {
	struct Note* note = malloc(sizeof(struct Note));
	note->frequence = hrtz;
	note->duree = sec;
	return note;
}

void simulerPiano(struct Note** notes, int nbr_notes) {
	printf("J'AI OUBLIE DE FAIRE L'EXO 2");
}