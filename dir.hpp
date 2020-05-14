#include <iostream>
#include <vector>
using namespace std;
#ifndef DIR_HPP_INCLUDED
#define DIR_HPP_INCLUDED

enum Direction
{nord_ouest, nord, nord_est, est, sud_est, sud, sud_ouest, ouest};

void afficheDirection(Direction d);

Direction aGauche(Direction d);

Direction aDroite(Direction d);

void testAGAD();

#endif
