		#include "Video.h"

    Video::Video(){
			
		}
		
		void Video::setId(int i){
			id=i;
		}
		
		void Video::setCalif(int c){
			calificacion=c;
		}
		
		void Video::setNombre(string n){
			nombre=n;
		}
		
		void Video::setGenero(string g){
			genero=g;
		}
		
		void Video::changeCalificacion(int v){
			calificacion=v;
	}