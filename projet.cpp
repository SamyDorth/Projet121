#include <iostream>
#include <vector>
using namespace std;
#include "dir.hpp"
#include "coord.hpp"
#include "grille.hpp"
#include "termites.hpp"

int nbPasses=10; const int nbTermites=15; int nbBr = 30;
struct TabTer{
Termite Term[nbTermites];
};

Grille G; TabTer ListT; Termite T;

void afficheGrille(Grille G,TabTer TabT){
  Coord Case; string br,tr; Direction D;
  br=tr=" ";
  for(int i=0;i<MAX_GRILLE;i++){
      Case.abs=i;
      for(int j=0;j<MAX_GRILLE;j++){
        Case.ord=j;

        if(G.grille[i][j].brindille){
          cout<<"* ";

        }
        else if(G.grille[i][j].numter!=-1){
          cout<<"je suis dedans"<<endl;
          D=TabT.Term[G.grille[i][j].numter].C.dir;
          afficheDirection(TabT.Term[G.grille[i][j].numter].C.dir);
          if(D==nord or D==sud) tr="| ";
          if(D==nord_est or D==sud_ouest) tr="/ ";
          if(D==nord_ouest or D==sud_est) cout<<" \ ";
          if(D==ouest or D==est) tr="– ";
            cout<<"tr : "<<tr;
          }
          else{
            cout<<" ";
          }
      cout<<"  ";
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
  int x; Coord c;
  for(int i=0; i<nbBr;i++){
    do{x=rand()%(MAX_GRILLE-0)+0;
      c=creeCoord(x,x,nord);
    }while(G.grille[x][x].numter != -1 and not dansGrille(G,c));

    G.grille[x][x].brindille=true;
  }
}
int main(){
  initialiseGrilleVide(G);
  initTerm(ListT);
  initBrind(G);
  //afficheGrille(G,ListT);
  afficheGrilleTest(G);
  int compte = 0; int nbrTours=0;
  string a;
  do{
    do{
      for(int i =0; i<nbTermites;i++){
        T=ListT.Term[i];
        if(brindilleEnFace(G,T) and T.pas>0 and not T.brindille){
          chargeTermite(G,T);
          T.pas=6;
        }
        while(T.pas<0 and brindilleEnFace(G,T)){
          tourneAleat(T);
        }
        if(pasEnferme(G,T) and T.pas<0){
          dechargeTermite(G,T);
          T.pas=-6;
        }
        marcheAleatoire(G,T);
      }
      compte++;
    }while(compte<nbPasses);
    compte=0;
    nbrTours++;
    //afficheGrille(G,ListT);
    afficheGrilleTest(G);
    cout<<"voulez vous continuer? oui ou non"<<endl;
    cin>>a;
    cout<<nbrTours<<endl;
}while(a!="non");

}
