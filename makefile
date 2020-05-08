// Fichier makefile pour projet termite
//##
//Tout ce qui est après un //sur une ligne est en commentaire.
//##

// Quelques variables de configuration du compilateur
//####################################################
// Le compilateur Ã  utiliser
CXX = g++

// Les options du compilateur
CXXFLAGS = -Wall -std=c++11 -g


// Les programmes principaux
//###########################
//On donne le fichier .cpp et la liste des fichiers .o qu'ils utilisent

projet: projet.cpp coord.o grille.o termite.o //Ã  complÃ©ter...
testcoord: testcoord.cpp coord.o
testgrille: testgrille.cpp grille.o coord.o
//Ã  complÃ©ter...

//Les diffÃ©rents composants
//###########################
//on donne le fichier .cpp ainsi que la liste
//des fichiers .hpp dont ils dÃ©pendent

coord.o: coord.cpp coord.hpp
grille.o: grille.cpp grille.hpp coord.hpp
//Ã  complÃ©ter...

//Pour faire le mÃ©nage
clean:
	rm -f projet testgrille testcoord *.o
//Attention dans la ligne ci-dessus il faut Ã©crire
//un seul caractÃ¨re de tabulation et pas 8 espaces.
