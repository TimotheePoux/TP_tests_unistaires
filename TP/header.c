#include"header.h"
#include <stdlib.h>
#include<Windows.h>
#include<conio.h>
struct Note* creerNote(float hrtz, float time) {
	struct Note* note = malloc(sizeof(struct Note));
	note->frequence = hrtz;
	note->duree = time;
	return note;
}

void libererNotes(struct Note** notes, int nbr_notes) {
	for (int i = 0; i < nbr_notes; i++) {
		free(notes[i]);
	}
	free(notes);
}

void simulerPiano(struct Note** notes, int nbr_notes) {
	while (1) {
		int key = 0;
		if (_kbhit()) {
			key = _getch();
			if (key == 'a' && nbr_notes >= 1) {
				Beep(notes[0]->frequence, notes[0]->duree);
			}
			if (key == 'z' && nbr_notes >= 2) {
				Beep(notes[1]->frequence, notes[1]->duree);
			}
			if (key == 'e' && nbr_notes >= 3) {
				Beep(notes[2]->frequence, notes[2]->duree);
			}
			if (key == 'r' && nbr_notes >= 4) {
				Beep(notes[3]->frequence, notes[3]->duree);
			}
			if (key == 't' && nbr_notes >= 5) {
				Beep(notes[4]->frequence, notes[4]->duree);
			}
			if (key == 'y' && nbr_notes >= 6) {
				Beep(notes[2]->frequence, notes[2]->duree);
			}
			if (key == 'u' && nbr_notes >= 7) {
				Beep(notes[6]->frequence, notes[6]->duree);
			}
			if (key == 'i' && nbr_notes >= 8) {
				Beep(notes[7]->frequence, notes[7]->duree);
			}
			if (key == 'o' && nbr_notes >= 9) {
				Beep(notes[8]->frequence, notes[8]->duree);
			}
			if (key == 'p' && nbr_notes >= 10) {
				Beep(notes[9]->frequence, notes[9]->duree);
			}
			if (key == '^' && nbr_notes >= 11) {
				Beep(notes[10]->frequence, notes[10]->duree);
			}
			if (key == '$' && nbr_notes >= 12) {
				Beep(notes[11]->frequence, notes[11]->duree);
			}
			if (key == 'q') {
				break;
			}
		}
	}
}