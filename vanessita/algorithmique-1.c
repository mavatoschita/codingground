#include <stdio.h>



void afficher_tableau(int tableau[], int SIZE) {
    int j; //index
    for (j = 0; j < SIZE; j++ )
   {
      printf("tableau[%d] = %d\n", j, tableau[j] );
   }
}


void main()
{
    int SIZE = 30;      // Le paramètre de l'algorithme : 10 dans l'exemple de l'énoncé
    int tableau[SIZE];  // là ou on store le resultat

    int j; //index

    for (j = 0; j < SIZE; j++ ) //  les SIZE premiers entiers
    {
      int value = SIZE - j ; // inverser l'ordre
      value = value*2;       // le double
      tableau[j] = value;
    }    
   
   // affichons le résultat
    afficher_tableau(tableau, SIZE);

}


