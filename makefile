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
testcoord: coord.o testcoord.cpp
					g++ -Wall -std=c++11 -g -o testcoord
testgrille: testgrille.cpp grille.o
					g++ -Wall -std=c++11 -g -o testgrille
testdir: testdir.cpp dir.o
				g++ -Wall -std=c++11 -g -o testdir
//Ã  complÃ©ter...

//Les diffÃ©rents composants
//###########################
//on donne le fichier .cpp ainsi que la liste
//des fichiers .hpp dont ils dÃ©pendent

coord.o: coord.cpp coord.hpp dir.o
grille.o: grille.cpp grille.hpp coord.o
dir.o: dir.cpp dir.hpp
//Ã  complÃ©ter...

//Pour faire le mÃ©nage
clean:
	rm -f	projet	testgrille	testcoord	testdir *.o
//Attention dans la ligne ci-dessus il faut écrire
//un seul caractère de tabulation et pas 8 espaces.
