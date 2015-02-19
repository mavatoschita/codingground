factures = [180.19, 167.65, 59.14, 171.00, 553.00, 72.44, 221.13]
payees = [true, true, true, false, true, false, true]

function filtrer_factures(tableau1, tableau2) {
   console.dir(tableau1);
   console.dir(tableau2);
}

function somme(tableau) {
   somme = 0; // initialisation
   
   // boucle
   for (var i = 0 ; i < tableau.length ; i++) {
     somme = somme + tableau[i];
   }
   
   return somme; // resultat
}



/****  algorithme en francais

Algorithme filtrer_facture
  Paramètres :
    Factures, un tableau de n éléments (n quelconque)
    Payees, un tableau de n booléns (même taille que Factures)
  Retourne
   Un tableau de factures
   
  Corps de l'algorithme 
    result = tableau vide    // initialisation
    
    // boucle
    pour index de 1 à n
           si payees[i] est faux  // filtre
               ajouter factures[i] à result
    
    retourner result 

**/
