#include <iostream>
#include <vector>
#include "coord.hpp"
using namespace std;

bool testDevantCoord(){
  Coord c,d;
  c=creeCoord(10,10,nord);
  d=creeCoord(10,11,nord);
  if (not(egalCoord(devantCoord(c),d))){
    return false;
  }
  c=creeCoord(10,10,sud);
  d=creeCoord(10,9,sud);
  if(not(egalCoord(devantCoord(c),d))){
    return false;
  }
  c=creeCoord(10,10,sud_est);
  d=creeCoord(11,9,sud_est);
  if (not(egalCoord(devantCoord(c),d))){
    return false;
  }
  return true;

}
int main(){
Coord c1 = creeCoord(2,1,nord); afficheCoord(c1);
cout << endl;
testEgalCoord();
ASSERT(testDevantCoord());
return 0;
}
