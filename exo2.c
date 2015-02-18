void afficheTab (float tableau[], int Taille) {
    int i; //index
    for (i = 0; i < Taille; i++ )
   {
      printf("tableau[%d] = %f\n", i, tableau[i] );
   }
}
void solution_1() {
    int Taille=7;
    float tableau[Taille];
    int j; //index

    tableau[0] = 180.19;
    tableau[1] = 167.65;
    tableau[2] = 59.14;
    tableau[3] = 171.00;
    tableau[4] = 553.00;
    tableau[5] = 72.44;
    tableau[6] = 221.13;
    // ....
    
    afficheTab (tableau, 7);
}


void main()
{
   solution_1();
}
