factures = [180.19, 167.65, 59.14, 171.00, 553.00, 72.44, 221.13]
//payees = [true, true, true, false, true, false, true] // WRONG
payees = [false, true, true, false, true, false, false]

// utilisation : 
// filtrer_factures(factures, payees)

function filtrer_factures(tableau_factures, tableau_paiments) {
   // console.dir(tableau1); // pour afficher le contenu
   // console.dir(tableau2);
   
  result=[]; // initialisation : tableau à zero elements
  
  for (var i = 0 ; i < tableau_factures.length ; i++) {
     var value;
     if (!tableau_paiments[i]) {
         result.push(tableau_factures[i]);   
     }
   }
   
   return result;
}

// test
filtrer_factures(factures, payees)

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
