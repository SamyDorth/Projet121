#include <iostream>
#include <vector>
using namespace std;
#include "dir.hpp"
#include "coord.hpp"
#ifndef GRILLE_HPP
#define GRILLE_HPP

struct Case{
  bool brindille;
  int numter;
};

const int MAX_GRILLE=8;

struct Grille{
  Case grille[MAX_GRILLE][MAX_GRILLE];
};

void initialiseGrilleVide(Grille &G);


bool estVide(Grille G,Coord C);


bool dansGrille(Grille G,Coord C);


bool contientBrindille(Grille G, Coord C);

int numerotermite(Grille G, Coord C);

void poseBrindille(Grille &G, Coord C);

void enleveBrindille(Grille &G, Coord C);

void enleveTermite(Grille &G, Coord C);

void poseTermite(Grille &G, Coord C, int nT);

void afficheGrille(Grille G);


#endif
