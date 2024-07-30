#include <iostream>
#include <fstream>
#include <time.h>
#include <string>
#include <vector>
#include "Video.h"
#include "Pelicula.h"
#include "Serie.h"

using namespace std;

int main(){
	bool running=true;
	int opcion=0;
	string peli[61];
	string serie[46];
	int i;
	int z;
	int temp;
	float id;
	srand(time(NULL));
	Pelicula obj_p[15];
	Serie obj_s[3];
	Serie obj_e[9];
	
	//ID y calificacion de pelicula
	for(int i=1;i<16;i++){
		int s = rand() % 5+1;
		  	obj_p[i].setId(i);
		  	obj_p[i].setCalif(s);
		  }
		
	//ID de serie  
	for(int i=0;i<3;i++){
		obj_s[i].setId(i+1);
		  }
		  
	//Calificacion de un episodio
	for(int i=0;i<9;i++){
		int s = rand() % 5+1;
		obj_e[i].setCalif(s);
		  }
	
	while(running==true){
		cout<<"\n\nBienvenido usuario\n";
		cout<<"---Menu---\n";
		cout<<"1. Mostar Peliculas\n";
		cout<<"2. Mostrar Series\n";
		cout<<"3. Buscar Peliculas\n";
		cout<<"4. Buscar Series\n";
		cout<<"5. Cambiar Calificacion(Pelicula)\n";
		cout<<"6. Cambiar Calificacion(Serie)\n";
		cout<<"7. Terminar\n";
		cin>>opcion;
		
		while(opcion>7||opcion<1){
			cout<<"OPCION INVALIDA";
			cout<<"\n\nBienvenido usuario\n";
			cout<<"---Menu---\n";
			cout<<"1. Mostar Peliculas\n";
			cout<<"2. Mostrar Series\n";
			cout<<"3. Buscar Peliculas\n";
			cout<<"4. Buscar Series\n";
			cout<<"5. Cambiar calificacion(Pelicula)\n";
			cout<<"6. Cambiar calificacion(Serie)\n";
			cout<<"7. Terminar\n";
			cin>>opcion;
		}
		
		//cargar peliculas
		if(opcion==1){
			std::ifstream file ("Pelicula.txt");
			int i=0;
			string c;
  			while (file>>c) {
 	   		peli[i+1]=c;
 	   		i+=1;
 	   		if(i==60){
 	   			break;
				}

  		}

  		for(int i=0;i<60;i++){
  			cout<<peli[i]<<" ";
  			if(i%4==0){
  				cout<<"\n";
			  }
		  }
		  z=-2;
		  //Nombre de pelicula
		  	for(int i=0;i<15;i++){
		  		obj_p[i].setNombre(peli[z+4]);
		  		//cout<<peli[z+4];
		  		z+=4;
		  }
		  
		  z=-1;
		  //Genero de pelicula
		  for(int i=0;i<15;i++){
		  		obj_p[i].setGenero(peli[z+4]);
		  		//cout<<peli[z+4]<<" Genero\n";
		  		z+=4;
		  }

		}
		
		//cargar series
		if(opcion==2){
			std::ifstream file ("Serie.txt");
			int i=0;
			string c;
  			while (file>>c) {
 	   		serie[i+1]=c;
 	   		i+=1;
 	   		if(i==45){
 	   			break;
				}

  		}
  		
  		

  		for(int i=1;i<45;i++){
  			cout<<serie[i]<<" ";
  			if(i%3==0){
  				cout<<"\n";
			  }
		  }
		  
		z=2;
		//Nombre de serie
		for(int i=0;i<3;i++){
			obj_s[i].setNombre(serie[z]);
			//cout<<"Nombre"<<serie[z];
			z+=12;
		}
		  
		z=3;
		  //Genero de serie
		  for(int i=0;i<3;i++){
		  		obj_s[i].setGenero(serie[z]);
		  		z+=12;
		  }
		  
		  z=5;
		  //Nombre episodio
		  for(int i=0;i<9;i++){
		  	if(z==14||z==26){
		  		z+=3;
			  }
		  		obj_e[i].nombreEpisodio(serie[z]);
		  		//cout<<serie[z]<<" NomEp\n";
		  		z+=3;
		  }
		  
		  //ID episodio
		  for(int i=0;i<9;i++){
		  	if(i==0||i==3||i==6){
		  		id=1.1;
			  }
			if(i==1||i==4||i==7){
				id=1.2;
			}
			if(i==2||i==5||i==8){
				id=2.1;
			}
			if(i!=1||i!=13||i!=25){
		  	obj_e[i].setId(id);
		  	}
		  	if(i==1||i==13||i==25){
		  	obj_e[i].setId(i);
		  	}
		  	
		  }
		  
		  
		  
		}
			
		//buscar peliculas	
		if(opcion==3){
			cout<<"Como quiere buscar peliculas\n";
			cout<<"1. ID\n";
			cout<<"2. Genero\n";
			cout<<"3. Calificaion(1-5)\n";
			cin>>opcion;
      try
    {
        if (opcion<1 || opcion>3)
          throw "Esta opción no es valida (1-3)";
        if(opcion==1){
				cout<<"Que ID quiere ver?(1-15)\n";
				cin>>opcion;
				cout<<obj_p[opcion-1].nombre;
				opcion=0;
			}
			
			if(opcion==2){
				cout<<"Que genero quiere ver?\n";
				cout<<"1. Accion\n";
				cout<<"2. Drama\n";
				cout<<"3. Misterio\n";
				cin>>opcion;
					if(opcion==1){
						for(int i=0;i<5;i++){
							cout<<obj_p[i].nombre<<" ";
						}	
					}	
					
					if(opcion==2){
						for(int i=5;i<10;i++){
							cout<<obj_p[i].nombre<<" ";
						}
						opcion=0;	
					}
					
					if(opcion==3){
						for(int i=10;i<15;i++){
							cout<<obj_p[i].nombre<<" ";
						}	
					}			
			}
			
			if(opcion==3){
				cout<<"Que calificacion quiere buscar?";
				cin>>z;
				
				for(int i=0;i<15;i++){
					temp=obj_p[i].calificacion;
					if(temp==z){
						cout<<obj_p[i].nombre<<" tiene claificacion "<<z<<"\n";
					}	
				} 
			}
    }
    catch(const char* e1)
    {
        cout << "Error: " << e1;
        opcion=0;
    }
    
			
						
		}
		
		//buscar series
		if(opcion==4){
			cout<<"Como quiere buscar series\n";
			cout<<"1. ID\n";
			cout<<"2. Genero\n";
			cout<<"3. Calificaion(1-5)";
			cin>>opcion;

          try
    {
         if(opcion<1||opcion>3)
          throw "Esta opcion no es valida (1-3)";
    }
    catch(const char *serie1){
        cout << "Error: " << serie1;
    }
			
      //buscar por ID
			if(opcion==1){
				cout<<"Que ID quiere ver?(1-3)\n";
				cin>>opcion;
				cout<<obj_s[opcion-1].nombre<<"\n";
				opcion=0;
			}
			
      //buscar por genero
			if(opcion==2){
				cout<<"Que genero quiere ver?\n";
				cout<<"1. Accion\n";
				cout<<"2. Drama\n";
				cout<<"3. Misterio\n";
				cin>>opcion;
					if(opcion==1){
						cout<<obj_s[0].nombre<<"\n";
						for(int i=0;i<3;i++){
							cout<<obj_e[i].nomEp<<" ";
						}	
            opcion=0;	
					}	
					
					if(opcion==2){
						cout<<obj_s[1].nombre<<"\n";
						for(int i=3;i<6;i++){
							cout<<obj_e[i].nomEp<<" ";
						}
						opcion=0;	
					}
					
					if(opcion==3){
						cout<<obj_s[2].nombre<<"\n";
						for(int i=6;i<9;i++){
							cout<<obj_e[i].nomEp<<" ";
						}	
            opcion=0;	
					}			}
			
			
      //buscar calificacion
			if(opcion==3){
				cout<<"Que calificacion quiere buscar?";
				cin>>z;
				
				for(int i=0;i<9;i++){
					temp=obj_e[i].calificacion;
					if(temp==z){
						cout<<obj_e[i].nomEp<<" tiene claificacion "<<z<<"\n";
					}	
				} 
			}
			
			
		}
  
    //calificar peiculas
		if(opcion==5){
			cout<<"De que pelicula quiere cambiar calificacion? (ID)(1-15)\n";
			cin>>opcion;
			cout<<obj_p[opcion-1].nombre<<"\n";	
			cout<<"A que calificaion lo quiere cambiar?\n";
			cin>>z;
    try
    {
         if(z<1||z>5)
          throw "Esta opcion no esta dentro del rango de valores (1-5)";
    }
    catch(const char *e){
        cout << "Error: " << e;
    }
      

      
			
				obj_p[opcion-1].changeCalificacion(z);
		}
		
    //calificar series
		if(opcion==6){
			cout<<"De que serie quiere cambiar calificacion? (ID)(1-3)\n";
			cin>>opcion;
			cout<<"Eligio cambiar la calificacion de "<<obj_s[opcion-1].nombre;
			cout<<"\nQue episodio quiere cambiar? (1-3)\n";
			cin>>temp;
			if(opcion==2){
				temp+=3;
			}
			if(opcion==3){
				temp+=6;
			}
			cout<<"Va a cambiar la calificacion de "<<obj_e[temp-1].nomEp;
			cout<<"\nA que lo quieres cambiar?(1-5)";
			cin>>z;

          try
    {
         if(z<1||z>5)
          throw "Esta opcion no esta dentro del rango de valores (1-5)";
    }
    catch(const char *e){
        cout << "Error: " << e;
    }
				
				obj_e[temp-1].changeCalificacion(z);
			
		}
	
	
		if(opcion==7){
			cout<<"\n GRACIAS!! :)";
			
			running=false;
		}
	}

		

}
