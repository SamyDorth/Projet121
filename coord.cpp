#include <iostream>
#include <vector>
using namespace std;
#include "coord.hpp"
#include "dir.hpp"

#define ASSERT(test) if (!(test)) cout << "Test failed in file " << __FILE__ \
                                       << " line " << __LINE__ << ": " #test << endl



Coord creeCoord(int lig,int col,Direction dir){
  Coord C;
  C.abs=lig;
  C.ord=col;
  C.dir=dir;
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

void testEgalCoord(){
  Coord c1={1,1}; Coord c2={1,1};
  ASSERT(egalCoord(c1,c2));
  c1={4,5}; c2={4,5};
  ASSERT(egalCoord(c1,c2));

}

Coord devantCoord(Coord c){
  Coord res=c;
  switch(c.dir){
    case nord_ouest:  res.abs--; res.ord--; break;
    case ouest :      res.abs--; break;
    case sud_ouest :  res.abs--; res.ord++; break;
    case sud :        res.ord++; break;
    case sud_est :    res.abs++; res.ord++; break;
    case est :        res.abs++; break;
    case nord_est :   res.abs++; res.ord--; break;
    case nord:        res.ord--; break;
    }
    return res;
}
