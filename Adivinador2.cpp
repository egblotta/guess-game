#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main(){

    int m=0,d=0,c=0,u=0,num_j;
    char am, ac, ad, au,res;


    srand(time(NULL));		//generacion numero random entre 1 y 9
    m=0+rand()%(9-0);
    d=0+rand()%(9-0);
    c=0+rand()%(9-0);
    u=0+rand()%(9-0);

    cout<<"Ingresa un numero de 4 cifras para que la computadora adivine.. "<<endl;
    cin>>num_j;

    cout<<"Ahora voy a adivinar el numero que estas pensando"<<endl;
    cout<<"----------------------------------------"<<endl;
    do{
        cout<<"Este es tu numero? "<< m << c << d << u <<" Contesta con Y(si) o N(no) "<<endl;
        cin>>res;
        if(res=='n') {

                cout << "Ingresa G, R o B segun las posiciones del numero "<<endl;
                cin >> am>>ac>>ad>>au;  // respuestas segun la posicion

                switch (am) {   //unidades de mil
                    case 'g':
                        m = m;
                        break;
                    case 'r':
                        m = c;
                        break;
                    case 'b':
                        if(m>8) //si el numero supera 9, vuelve a 0
                            m=0;
                        else
                            m++;
                        break;
                }


                switch (ac) {   //centenas
                    case 'g':
                        c = c;
                        break;
                    case 'r':
                        c = d;
                        break;
                    case 'b':
                        if(c>8)
                            c=0;
                        else
                        c++;
                        break;
                }

                switch (ad) {      //decenas
                    case 'g':
                        d = d;
                        break;
                    case 'r':
                        d = u;
                        break;
                    case 'b':
                        if(d>8)
                            d=0;
                        else
                        d++;
                        break;
                }

                switch (au) {   //unidades
                    case 'g':
                        u = u;
                        break;
                    case 'r':
                        u = m;
                        break;
                    case 'b':
                        if(u>8)
                            u=0;
                        else
                        u++;
                        break;
                }

        }
    }while(res!='y');
    cout<<"Gracias por jugar! :)"<<endl<<"Juego terminado";
}