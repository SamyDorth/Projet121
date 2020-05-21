#include <iostream>
#include <vector>
using namespace std;
#include "dir.hpp"
#include "coord.hpp"
#include "grille.hpp"

int main(){
  Grille G;
  initialiseGrille(G);
  for(int i = 0; i<MAX_GRILLE;i++){
    for(int j = 0; j<MAX_GRILLE;j++){
      cout<<G.grille[i][j]<<" ";
    }
    cout<<endl;
  }
}
