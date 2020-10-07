#include <stdio.h>
#include <stdlib.h>
#define MAX 1024

int main() {
	float moyenne;
	float longueur = 0;
	float denominateur = 1;
	char mot[MAX];
	int taille;
	printf("entrez une phrase\n");
	gets_s(mot, MAX - 1);
	taille = strlen(mot);
	for (int i = 0; i < taille; i++) {
		if (mot[i] == ' ') {
			denominateur++;
		}
	}
	printf("ici %d", taille);
	moyenne = (taille - (denominateur - 1)) / denominateur;
	printf("nombre de mots: %f, longueur moyenne: %f\n", denominateur, moyenne);
	
}