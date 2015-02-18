#include <stdio.h>



void afficher_tableau(int tableau[], int SIZE) {
    int j; //index
    for (j = 0; j < SIZE; j++ )
   {
      printf("tableau[%d] = %d\n", j, tableau[j] );
   }
}
void solution_1() {
    int SIZE=10;
    int tableau[SIZE];
    int j; //index

    tableau[0] = 20;
    tableau[1] = 18;
    tableau[2] = 16;
    // ....
    
    afficher_tableau(tableau, 10);
}


void main()
{
   solution_1();
}


