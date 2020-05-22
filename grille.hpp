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
/*
*@param[out] G une Grille
*Initialise la grille en la rendant vides
* */
void initialiseGrilleVide(Grille &G);

/*
*@param[in] G une grille et C des coordonnées
*renvoie si la grille est vide ou non
* */
bool estVide(Grille G,Coord C);

/*
*@param[in] une grille G et des coordonnées C
*renvoie si les coordonnées sont bien dans la grille
* */
bool dansGrille(Grille G,Coord C);

/*
*@param[in] une grille G et des coordonnées C
*renvoie si la case continent une brindille
* */
bool contientBrindille(Grille G, Coord C);

/*
*@param[in] une grille G et des coordonnées C
*renvoie le numéro du termite présent dans la case, et -1 si elle est vide
* */
int numerotermite(Grille G, Coord C);

/*
*@param[out] une grille G
*@param[in] des coordonnées C
*ajoute une brindille dans la case C
* */
void poseBrindille(Grille &G, Coord C);

/*
*@param[out] une grille G
*@param[in] des coordonnées C
*retire une brindille dans la case C
* */
void enleveBrindille(Grille &G, Coord C);

/*
*@param[out] une grille G
*@param[in] des coordonnées C
*retire un termite dans la case C
* */
void enleveTermite(Grille &G, Coord C);

/*
*@param[out] une grille G
*@param[in] des coordonnées C et le numéro du termite nT
*ajoute un termite dans la case C, avec son numéro
* */
void poseTermite(Grille &G, Coord C, int nT);

/*
*@param[in] une grille G
*affiche la grille dans le terminal
* */

void afficheGrilleTest(Grille G);



#endif
