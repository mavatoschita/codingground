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
    int MAX;;      // Le paramètre de l'algorithme : 10 dans l'exemple de l'énoncé
    
    printf("Quel doit etre la valeur maximale du tableau? : "); 
    scanf("%d", &MAX);
    
    int tableau[10];  // là ou on store le resultat

    int j; //index

    for (j = 0; j < 10; j++ ) //  10 elements
    {
      tableau[j] = MAX;
      MAX = MAX - 2;
    }    
   
   // affichons le résultat
    afficher_tableau(tableau, 10);

return 0;
}
