//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-
//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+JOSE JOAQUIN ESCOBAR GOMEZ-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-
//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-
//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-FILE: DFA.cpp+-+-+-+-+-+-+-+-++-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-
//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-
//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+Practica 4 CYA +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-
//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-
#include<iostream>
#include<fstream>
#include"DFA.h"



using namespace std;



DFA :: DFA ()//constructor DFA
{
        menu();
        
}

void DFA::menu()
{
char nombreFichero[30];
char opcion=' ';
int err=1;

    while(opcion !='q')
    {
                cout << "+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-"   << endl;
		cout << "+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+- "  << endl;
		cout << "Actividad I, CYA : Implementacion Algoritmos Automata finito definido  "  << endl;
		cout << "OPCIONES :                                                             "  << endl;
		cout << "c. [c]argar un automata desde el fichero                               "  << endl;
		cout << "m. [m]ostrar automata definido                                         "  << endl;
                cout << "i. [i]ndicar estados de muerte                                         "  << endl;
                cout << "a. [a]nalizar cadena                                                   "  << endl;
                cout << "q. Finalizar el programa                                               "  << endl;
	        cout << "Introduzca la opcion                                                   "  << endl;
            cin >> opcion;   


    
   switch(opcion)
    { 
          case 'c': cout << "Introduzca el nombre del fichero a cargar:                         "  << endl; 
                    cin >>nombreFichero;
                    leerFichero(nombreFichero,err);

          break;


          case 'm':

          break;


          case 'i':

          break;


          case 'a':

          break;


          case 'q':

          break;


          default :  cout << "Opcion incorrecta, ingrese las opciones validas, c,m,i,a,q       "  << endl;
	  break;
    }


}


}


void DFA::leerFichero(char nombreFichero[], int &errorApertura)
{
   


}

