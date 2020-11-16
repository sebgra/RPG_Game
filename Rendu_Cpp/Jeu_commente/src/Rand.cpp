#include "Rand.h" 
#include <stdio.h>
#include <stdlib.h> // inclusion des classes, fonctions et bibliotheques necessaires
#include <time.h>



int rand_a_b(int a, int b) // fonction retournant un nombre aleatoire entre a et b  

{
	srand(time(NULL));

	return rand()%(b-a)+a;
}

