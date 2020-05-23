#include <iostream>
#include <vector>
using namespace std;
#include "dir.hpp"
#include "coord.hpp"
#include "grille.hpp"
#include "termites.hpp"

 Direction directionTermite(Termite T){
  return T.C.dir;
}

Coord devantTermite(Termite T){
return devantCoord(T.C);
}

bool porteBrindille(Termite T){
  return T.brindille;
}

void tourneADroite(Termite &T){
  /*
  DirecTion d1, d2;
  d1 = T.C.dir;
  d2 = aDroite(d1);
  T.C.dir = d2;
  */
  T.C.dir=aDroite(T.C.dir);
}

void tourneAGauche(Termite &T){
  /*
  Direction d1, d2;
  d1 = T.C.dir;
  d2 = aGauche(d1);
  */
  T.C.dir = aGauche(T.C.dir);


}

void tourneAleat(Termite &T){
  int max = 2;
  int min = 1;
  int randNum = rand()%(max-min + 1) + min;
  if(randNum == 1){
    tourneAGauche(T);
  }
  else if (randNum == 2){
    tourneADroite(T);
  }
}

//foncTions pour l'environnemenT

bool laVoieEsTLibre(Grille G, Termite T){
  return estVide(G,devantTermite(T));
}

bool brindilleEnFace(Grille G, Termite T){
  return contientBrindille(G,devantTermite(T));
}

bool pasEnferme(Grille G, Termite T){
  Coord C1,C2;
  C1=C2=T.C;
  C1.dir=aDroite(T.C.dir); C2.dir=aGauche(T.C.dir);
  return estVide(G,devantCoord(C2)) and estVide(G,devantCoord(C2));
}

//procédures pour le Termite eT l'environnemenT

void avanceTermite(Grille &G, Termite &T){
  if(estVide(G,T.C)){
    enleveTermite(G,T.C);
    T.C=devantTermite(T);
    poseTermite(G,T.C,T.numeroTermite);
  }
}

void dechargeTermite(Grille &G, Termite &T){
  Coord DT=devantTermite(T);
  if(T.brindille and pasEnferme(G,T) and not contientBrindille(G,DT)){
    poseBrindille(G,DT);
    T.brindille=false;
  }
}

void chargeTermite(Grille &G, Termite &T){
  Coord DT=devantTermite(T);
  if(contientBrindille(G,DT) and not T.brindille){
    enleveBrindille(G,DT);
    T.brindille=true;
  }
}

void marcheAleatoire(Grille &G, Termite &T){
  if(pasEnferme(G,T)){
    avanceTermite(G,T);
  }
  else if(laVoieEsTLibre(G,T)){
    tourneAleat(T);
    avanceTermite(G,T);
  }
  avanceTermite(G,T);
}
