#ifndef VIDEO_H
#define VIDEO_H
#include <string>
using namespace std;

class Video
{
	public:
		int id;
		string nombre;
		int duracion;
		string genero;
		int calificacion;
		
		Video();
		void setId(int);
		void setCalif(int);
		void setNombre(string);
		void setGenero(string);
		virtual void changeCalificacion(int);
		

};

#endif