#ifndef SERIE_H
#define SERIE_H
#include "Video.h"
#include <string>
using namespace std;

class Serie : public Video{
	public:
		string nomEp;
		float idEp;
		
    Serie();
    void changeCalificacion(int);
    void nombreEpisodio(string);
    void setId(float);

};

#endif