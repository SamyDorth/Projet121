#include <iostream>
#include <vector>
using namespace std;
#include "dir.hpp"
#include "coord.hpp"
#include "grille.hpp"
#include "termites.hpp"

int main(){
  Termite T; Coord C;
  
  T.C=creeCoord(3,5,nord);
  ASSERT(directionTermite(T)==nord);

  C=creeCoord(3,4,nord);
  ASSERT(egalCoord(devantTermite(T),C));

  T.brindille=true;
  ASSERT(porteBrindille(T));

  C=creeCoord(3,5,nord_est);
  tourneADroite(T);
  ASSERT(egalCoord(T.C,C));

  C=creeCoord(3,5,nord_ouest);
  tourneAGauche(T);
  ASSERT(egalCoord(T.C,C));
}
