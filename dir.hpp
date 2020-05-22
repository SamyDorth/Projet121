#include <iostream>
#include <vector>
using namespace std;
#ifndef DIR_HPP_INCLUDED
#define DIR_HPP_INCLUDED

enum Direction
{nord_ouest, nord, nord_est, est, sud_est, sud, sud_ouest, ouest};

/*
*@param une Direction d
*affiche la direction sur le terminal
* */
void afficheDirection(Direction d);

/*
*@param une Direction d
*renvoie la direction à sa gauche
* */
Direction aGauche(Direction d);

/*
*@param une Direction d
*renvoie la direction à sa droite
* */
Direction aDroite(Direction d);

/*
*permet de tester que aDroite et aGauche fonctionnent
* */
void testAGAD();

int dirToInt(Direction d);

Direction intToDir(int I);
#endif
