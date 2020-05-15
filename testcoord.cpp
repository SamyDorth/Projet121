#include <iostream>
#include <vector>
#include "coord.hpp"
using namespace std;

bool testDevantCoord(){
  Coord c,d;
  c=creeCoord(10,10,nord);
  d=creeCoord(10,9,nord);
  if (not(egalCoord(devantCoord(c),d))){
    cout<<"TestDvnT_1"<<endl;
    return false;
  }
  c=creeCoord(10,10,sud);
  d=creeCoord(10,11,sud);
  if(not(egalCoord(devantCoord(c),d))){
    cout<<"TestDvnT_2"<<endl;
    return false;
  }
  c=creeCoord(10,10,sud_est);
  d=creeCoord(11,11,sud_est);
  if (not(egalCoord(devantCoord(c),d))){
    cout<<"TestDvnT_3"<<endl;
    return false;
  }
  return true;

}
int main(){
Coord c1 = creeCoord(2,1,nord); afficheCoord(c1);
cout << endl;
testEgalCoord();
testDevantCoord();
return 0;
}
