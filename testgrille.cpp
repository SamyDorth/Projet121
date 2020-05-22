#include <iostream>
#include <vector>
using namespace std;
#include "dir.hpp"
#include "coord.hpp"
#include "grille.hpp"



int main(){
  Grille G; Coord c;
  initialiseGrilleVide(G);
  afficheGrille(G);
  c=creeCoord(3,5,nord);
  poseBrindille(G,c);
  if(not contientBrindille(G,c)){
    cout<<"pose ou contientBrindille ne foncitonne pas"<<endl;
  }
  enleveBrindille(G,c);
  if(contientBrindille(G,c)){
    cout<<"enleveBrindille ou contientBrindille ne foncitonne pas"<<endl;
  }
  afficheCoord(c);
  poseTermite(G,c,5);
  cout<<estVide(G,c)<<endl;
  afficheCoord(c);

  afficheGrilleTest(G);

  if(estVide(G,c)){
    cout<<"poseTermite ou estVide ne foncitonne pas"<<endl;
  }
  enleveTermite(G,c);
  afficheGrille(G);

  if(not estVide(G,c)){
    cout<<"enleveTermite ou estVide ne foncitonne pas"<<endl;
  }

}
