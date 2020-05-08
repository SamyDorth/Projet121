#include <iostream>
#include <vector>
using namespace std;

struct Coord{
  int abs;
  int ord;
};

Coord creeCoord(int lig,int col){
  Coord C;
  C.abs=lig;
  C.ord=col;
  return C;
}

void afficheCoord(Coord C){
  cout<<"("<<C.abs<<","<<C.ord<<")"<<endl;
}

int getX(Coord C){
  return C.abs;
}

int getY(Coord C){
  return C.ord;
}

bool egalCoord(Coord C1, Coord C2){
  if(getX(C1)!=getX(C2)){
    return false;
  }
  if(getY(C1)!=getY(C2)){
    return false;
  }
  return true;
}

int main(){
Coord c1 = creeCoord(2,1); afficheCoord(c1);
cout << endl;
return 0;
}
