#include <iostream>
#include <vector>
using namespace std;
#include "dir.hpp"
#include "coord.hpp"
#include "grille.hpp"
#ifndef TERMITES_HPP
#define TERMITES_HPP

struct Termite{
  Coord C;
  int numeroTermite;
  bool brindille;
  int pas;
};
// fonction et procédures pour le termite:

/*
*@param[in] Termite T
*renvoie la direction du termite T
* */
Direction directionTermite(Termite T);

/*
*@param[in] Termite T
*renvoie les coordonnées de la case devant le termite T
* */
Coord devantTermite(Termite T);

/*
*@param[in] Termite T
*renvoie true si le termite porte une brindille
*/
bool porteBrindille(Termite T);

/*
*@param[in] Termite T
*fait tourner le termite vers la droite
**/
void tourneADroite(Termite &T);

/*
*@param[in] Termite T
*fait tourner le termite vers la gauche
**/
void tourneAGauche(Termite &T);

/*
*@param[in] Termite T
*fait tourner le termite vers la droite ou la gauche
**/
void tourneAleat(Termite &T);

/*
*@param[in] la Grille et le Termite
*renvoie si la case devant le termite est vide
* */
bool lavoieEstLibre(Grille G, Termite T);

/*
*@param[in] la Grille et le Termite
*renvoie si la case devant le termite contient une brindille
* */
bool brindilleEnFace(Grille G, Termite T);

/*
*@param[in] la Grille et le Termite
*renvoie si la case à droite ou à gauche du termite est libre
* */
bool pasEnferme(Grille G, Termite T);

/*
*@param[in] Grille g et Termite t
*déplace le termite sur la case devant lui
* */
void avanceTermite(Grille &G,Termite &T);

/*la termite pose la brindille dans la case devant lui supposé libre
*@param[in] la grille g, une termite t
* */
void dechargeTermite(Grille &G, Termite &T);

/*le termite prend la brindille qui se situe devant lui
*@param[in] la grille g, une termite t
* */
void chargeTermite(Grille &G, Termite &T);

/*le termite se déplace aléatoirement sur la Grille
*@param[in] la grille g, une termite t
* */
void marcheAleatoire(Grille &G, Termite &T);

#endif
