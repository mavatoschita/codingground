#include <stdio.h>



void afficher_tableau(int tableau[], int SIZE) {
    int j; //index
    printf("Result: {");
    for (j = 0; j < SIZE; j++ )
   {
      if (j==SIZE-1){
       printf("%d}\n", tableau[j]);
      } else {
        printf("%d, ", tableau[j] );
      }
   }
}


int main(int argc, char** argv)
{
    int SIZE;;      // Le paramètre de l'algorithme : 10 dans l'exemple de l'énoncé
    
    printf("Combien d'elements doit avoir le tableau? : "); 
    scanf("%d", &SIZE);
    
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

return 0;
}
