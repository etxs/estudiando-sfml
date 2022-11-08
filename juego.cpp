#include "juego.h"

juego::juego(int resolucion_x, int resolucion_y, std::string titulo)
{
	fps = 60;

	ventana1 = new RenderWindow(VideoMode(resolucion_x, resolucion_y), titulo); //el usuario podra escoger la resolucion y titulo a la ventana
	
	ventana1->setFramerateLimit(fps); //velocidad de imagen
	
	gameLoop();//producir el programa
}

void juego::dibujar()
{
	ventana1->clear(); //limpiar pantalla

	ventana1->display(); //significa mostrar
}

void juego::gameLoop()
{
	while (ventana1->isOpen())//mientras ventana este abierta, imprimir
	{
		dibujar();
	}
}