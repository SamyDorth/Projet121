#include <iostream>
#include <vector>
using namespace std;
#include "dir.hpp"
#include "coord.hpp"
#include "grille.hpp"

void initialiseGrilleVide(Grille &G){
  for(int i=0;i<MAX_GRILLE;i++){
    for(int j=0;j<MAX_GRILLE;j++){
      G.grille[i][j].brindille=false;
      G.grille[i][j].numter=-1;
    }
  }
}

bool estVide(Grille G,Coord C){
  if(G.grille[C.abs][C.ord].brindille){
    return false;
  }
  if(G.grille[C.abs][C.ord].numter!=-1){
    return false;
  }
  return true;
}

bool dansGrille(Grille G,Coord C){
  return C.abs<=MAX_GRILLE and C.ord<=MAX_GRILLE;
}

bool contientBrindille(Grille G, Coord C){
  return G.grille[C.abs][C.ord].brindille;
}

int numerotermite(Grille G, Coord C){
  return G.grille[C.abs][C.ord].numter;
}

void poseBrindille(Grille &G, Coord C){
  G.grille[C.abs][C.ord].brindille=true;
}

void enleveBrindille(Grille &G, Coord C){
  G.grille[C.abs][C.ord].brindille=false;
}

void enleveTermite(Grille &G, Coord C){
  G.grille[C.abs][C.ord].numter=-1;
}

void poseTermite(Grille &G, Coord C, int nT){
  G.grille[C.abs][C.ord].numter=nT;
}
void afficheGrille(Grille G){
  Coord Case; int vide;
  for(int i=0;i<MAX_GRILLE;i++){
    Case.abs=i; vide=0;
    for(int j=0;j<MAX_GRILLE;j++){
      Case.ord=j;
      cout<<G.grille[i][j].brindille<<" "<<G.grille[i][j].numter<<"   ";
      if(not estVide(G,Case)){
        vide++;
      }
    }
    if(vide>0){
      cout<<"   vérifier estVide";
      vide=0;
    }
    cout<<endl<<endl;
  }
  cout<<endl<<endl;
}
