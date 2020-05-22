#include <iostream>
#include <vector>
using namespace std;
#include "dir.hpp"
#include "coord.hpp"
#include "grille.hpp"
#include "termites.hpp"

int nbPasses=10; const int nbTermites=15; int nbBr = 20;
struct TabTer{
Termite Term[nbTermites];
};

Grille G; TabTer ListT;

void afficheGrille(Grille G,TabTer TabT){
  Coord Case; int vide; string br,tr;
  br=tr=" ";
  for(int i=0;i<MAX_GRILLE;i++){
      Case.abs=i; vide=0;
      for(int j=0;j<MAX_GRILLE;j++){
        Case.ord=j;

        if(G.grille[i][j].brindille){
          br="* ";
        }
        if(G.grille[i][j].numter!=-1){
          switch(TabT.Term[G.grille[i][j].numter].C.dir){
            case nord:           tr = "| "; break;
            case nord_ouest :    tr = " \ "; break;
            case ouest :         tr = "– "; break;
            case sud_ouest :     tr = "/ "; break;
            case sud :           tr = "| "; break;
            case sud_est :       tr = " \ "; break;
            case est :           tr = "– "; break;
            case nord_est :      tr = "/ "; break;
            }
          }
      cout<<br<<" "<< tr<<"  ";
      tr=br=" ";
      cout<<endl<<endl;
    }
    cout<<endl<<endl;
  }
}

void initTerm(TabTer T){
  for(int i=0;i<nbTermites;i++){
    T.Term[i].numeroTermite=i;
    T.Term[i].C=creeCoord(rand()%(MAX_GRILLE-0+1)+0,rand()%(MAX_GRILLE-0+1)+0,intToDir(rand()%(7-0+1)+0));
    poseTermite(G,T.Term[i].C,i);
  }
}
void initBrind(Grille &G){
  int x;
  for(int i=0; i<nbBr;i++){
    x=rand()%(MAX_GRILLE-0+1)+0;

    if(G.grille[x][x].numter == -1){
      G.grille[x][x].brindille=true;
    }
  }
}
int main(){
  initialiseGrilleVide(G);
  initTerm(ListT);
  initBrind(G);
  afficheGrille(G,ListT);
  afficheGrilleTest(G);

}
