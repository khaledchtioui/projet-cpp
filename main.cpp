#include <iostream>
#include "Etudiant.h"
#include "Ecole.h"

using namespace std;

int main()
{
string c(11,'+') ;
Etudiant et("khaled","187 avenu habib bourgiba ","2A18","12/11/2001",9)  ;
Ecole ec ;
ec.ajouter_etudiant(et) ;
Etudiant ett("chtioui","187  ","2A18","12/11/2001",9)  ;
ec.ajouter_etudiant(ett) ; 
cout <<c <<endl;
ec.afficher_etudiant() ;
cout<<ec.rechercher_un_etudiant(29)  <<endl  ;
//uhih
//jyg
    return 0;
}
