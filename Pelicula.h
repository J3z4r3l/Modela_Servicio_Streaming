#ifndef PELICULA_H
#define PELICULA_H
#include <string>
#include "Video.h"
using namespace std;

class Pelicula : public Video {
	
  public:
		void changeCalificacion(int);
};

#endif