#include <stdio.h>
#include <stdlib.h>
#include "header.h"

/*
#define mu_assert(message, test) do {if (!(test)) return message;} while (0)

#define mu_run_test(test) do {char *message = test(); tests_run++; if (message) return message; } while (0)

int tests_run = 0;

int carre(int a) {
	return a * a;
}

static char* test_carre_positif() {
	int c = carre(3);
	mu_assert("Assert fail: le carre de 3 est 9\n", c == 3 * 3);
}

static char* test_carre_negatif() {
	int c = carre(-5);
	mu_assert("Assert fail: le carre de -5 est 25\n", c == 25);
}

static char* test_carre_zero() {
	int c = carre(0);
	mu_assert("Assert fail: le carre de 0 est 0\n", c == 0);
}

static char* all_tests() {
	mu_run_test(test_carre_positif); //lister tous les tests ici quand il y en aura d'autres
	mu_run_test(test_carre_negatif);
	mu_run_test(test_carre_zero);

	return 0;
}

int main() {
	char* result = all_tests(); //On lance tous les tests
	if (result != 0) { //il y a eu une erreur
		printf("%s\n", result); //On affiche le message d'erreur
	}
	else {
		printf("All tests passed.\n");
	}
	printf("Test run: %d\n", tests_run); //On affiche le nombre de tests lances return !=0;
}
*/

int main() {
	float frequencies[12] = { 261.63f, 277.18f, 293.66f, 311.13f, 329.63f, 349.23f, 369.99f, 392.00f, 415.30f, 440.00f, 466.16f, 493.88f };
	float time = 400.0f;
	struct Note** tabNotes = malloc(sizeof(struct Note*)*12);
	for (int i = 0; i < 12; i++) {
		tabNotes[i] = creerNote(frequencies[i], time);
	}
	simulerPiano(tabNotes, 12);
	libererNotes(tabNotes,12);
	return 0;
}
