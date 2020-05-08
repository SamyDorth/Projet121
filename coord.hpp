#include <iostream>
#include <vector>
using namespace std;
#include "dir.hpp"

#define ASSERT(test) if (!(test)) cout << "Test failed in file " << __FILE__ \
                                       << " line " << __LINE__ << ": " #test << endl

struct Coord{
  int abs;
  int ord;
  Direction dir;
};

Coord creeCoord(int lig,int col);

void afficheCoord(Coord C);

int getX(Coord C);

int getY(Coord C);

bool egalCoord(Coord C1, Coord C2);

void testEgalCoord();
