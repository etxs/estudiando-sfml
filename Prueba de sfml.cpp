#include "SFML/Graphics.hpp"
#include <iostream>
#include "juego.h"

using namespace sf;
using namespace std;

int main(int argc, char* args[])
{
	juego* partida1;
	partida1 = new juego(800, 600, "hola"); //pasara estos parametros el constructor

	return 0;
}
