/*
#include <stdio.h>

#define mu_assert(message, test) do {if (!(test)) return message;} while (0)

#define mu_run_test(test) do {char *message = test(); tests_run++; if (message) return message; } while (0)

int tests_run = 0;

const char* categorize_age(int age){
	if (age < 0) {
		return "Invalid age";
	}
	else if (age < 13) {
		return "Child";
	}
	else if (age < 20) {
		return "Teenager";
	}
	else if (age < 65) {
		return "Adult";
	}
	else {
		return "Senior";
	}
}

static char* test_age_negatif() {
	char* t = categorize_age(-2);
	mu_assert("Assert fail: Un age inferieur a 0 doit renvoyer \"Invalid Age\"\n", t == "Invalid age");
}

static char* test_age_enfant() {
	char* t = categorize_age(5);
	mu_assert("Assert fail: Un age entre 0 et 12 doit renvoyer \"Child\"\n",t == "Child");
}

static char* test_age_ado() {
	char* t = categorize_age(18);
	mu_assert("Assert fail: Un age entre 13 et 19 doit renvoyer \"Teenager\"\n", t == "Teenager");
}

static char* test_age_adulte() {
	char* t = categorize_age(30);
	mu_assert("Assert fail: Un age entre 20 et 64 doit renvoyer \"Adult\"\n", t == "Adult");
}

static char* test_age_senior() {
	char* t = categorize_age(300);
	mu_assert("Assert fail:Un age superieur a 65 doit renvoyer \"Senior\"\n", t == "Senior");
}

static char* all_tests(){
	mu_run_test(test_age_negatif); //lister tous les tests ici quand il y en aura d'autres
	mu_run_test(test_age_enfant);
	mu_run_test(test_age_adulte);
	mu_run_test(test_age_senior);

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