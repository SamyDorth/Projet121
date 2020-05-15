#include <iostream>
#include <vector>
using namespace std;
#include "dir.hpp"
#include "coord.hpp"
#include "grille.hpp"

void initialiseGrilleVide(Grille &G){
  for(int i=0;i<MAX_GRILLE;i++){
    for(int j=0;j<MAX_GRILLE;j++)
      G[i][j].brindille=false;
      G[i][j].numter=-1;
  }
}

bool estVide(Grille G,Coord C){
  if(G[C.abs][C.ord].brindille or G[C.abs][C.ord].numter!=-1){
    return false;
  }
  return true;
}

bool dansGrille(Grille G,Coord C){
  return C.abs<=MAX_GRILLE and C.ord<=MAX_GRILLE;
}

bool contientBrindille(Grille G, Coord C){
  return G[C.abs][C.ord].brindille;
}

int numerotermite(Grille G, Coord C){
  return G[C.abs][C.ord].numter;
}

void poseBrindille(Grille &G, Coord C){
  G[C.abs][C.ord].brindille=true;
}

void enleveBrindille(Grille &G, Coord C){
  G[C.abs][C.ord].brindille=true;
}

void enleveTermite(Grille &G, Coord C){
  G[C.abs][C.ord].numter=-1;
}

void poseTermite(Grille &G, Coord C, int nT){
  G[C.abs][C.ord].numter=nT;
}
