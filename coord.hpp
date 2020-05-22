#include <iostream>
#include <vector>
using namespace std;
#include "dir.hpp"
#ifndef COORD_HPP
#define COORD_HPP
#define ASSERT(test) if (!(test)) cout << "Test failed in file " << __FILE__ \
                                       << " line " << __LINE__ << ": " #test << endl

struct Coord{
  int abs;
  int ord;
  Direction dir;
};

/*
*@param[in] une ligne lig, une colonne col et une Direction dir
*renvoie des coordonnées avec les paramètres entrés
* */
Coord creeCoord(int lig,int col,Direction dir);

/*
*@param[in] des coordonnées C
*affiche les coordonnées sur le terminal
* */
void afficheCoord(Coord C);

/*
*@param[in] des coordonnées C
*renvoie l'abscisse des coordonnées
* */
int getX(Coord C);

/*
*@param[in] des coordonnées C
*renvoie l'ordonnée des coordonnées
* */
int getY(Coord C);

/*
*@param[in] des coordonnées C1 et C2
*renvoie si deux coordonnées sont égales
* */
bool egalCoord(Coord C1, Coord C2);

/*
*permet de vérifer le foncitonnement de egalCoord
*/
void testEgalCoord();

/*@param[in] des coordonnées c
*renvoie la coordonnée devant c
* */
Coord devantCoord(Coord c);

#endif
