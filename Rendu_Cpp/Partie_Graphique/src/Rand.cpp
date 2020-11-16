#include "Rand.h" // permet de faire le lien avec le .h 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int rand_a_b(int a, int b) // Definition classique de fonction 

{
	srand(time(NULL));

	return rand()%(b-a)+a;
}

