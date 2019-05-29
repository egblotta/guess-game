#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int comp(int num_r);	//funciones
int m(int num_r);
int mil(int num_j);

main()
{
	int num_r, num_j;
	
	srand(time(NULL));		//generacion numero random entre 1000 y 9999
	num_r=1000+rand()%(9999-1000);	
		
	int	mi=m(num_r)*1000;		//unidades de mil
	int	c=(num_r-mi)/100;		//centenas
	int	d=(num_r-(mi+c*100))/10;	//decenas
	int	u=(num_r-(mi+c*100+d*10));	//unidades
			
		do{
			do{
				cout<<endl;
				cout<<"Ingrese un numero de 4 cifras y adivine que numero piensa la computadora "<<endl;
				cout<<"---------------------------"<<endl;
				cin>>num_j;
			}while(comp(num_j)!=4);	
		
			int mili=mil(num_j)*1000;
			int	ce=(num_j-mili)/100;
			int	de=(num_j-(mili+ce*100))/10;
			int	un=(num_j-(mili+ce*100+de*10));			
			
	
			cout<<"---------------------------"<<endl;
		
			
			if(m(num_r)==mil(num_j)){				
				cout<<"1G ";
			}
				else if(u==mil(num_j))
				{
				cout<<"1R ";
				}
				else if(c==mil(num_j))
				{
				cout<<"1R ";
				}
				else if(d==mil(num_j))
				{
				cout<<"1R ";
			 	}else 
				cout<<"1B ";		
					
			if(c==ce){
				cout<<"1G ";
			}
				else if(u==ce)
				{
				cout<<"1R ";
				}
				else if(d==ce)
				{
				cout<<"1R ";
				}
				else if(m(num_r)==ce)
				{
				cout<<"1R ";
			 	}else 
				cout<<"1B ";
					
			if(d==de){
				cout<<"1G ";
				}
				else if(u==de)
				{
				cout<<"1R ";
				}
				else if(c==de)
				{
				cout<<"1R ";
				}
				else if(m(num_r)==de)
				{
				cout<<"1R ";
			 	}else 
				cout<<"1B ";
			if(u==un){
				cout<<"1G ";
				}
				else if(d==un)
				{
				cout<<"1R ";
				}
				else if(c==un)
				{
				cout<<"1R ";
				}
				else if(m(num_r)==un)
				{
				cout<<"1R ";
			 	}else 
				cout<<"1B ";			
				
		}while(num_r!=num_j);
		cout<<"El numero es correcto!"<<endl;
		cout<<"Ganaste! :)"<<endl;
}

int comp(int num_j){
	int comp=0;
	
	do{
		num_j=num_j/10;
		comp++;
	}while(num_j>0);
	
return comp;
}

int mil(int num_j){
	int mil;
	mil=num_j/1000;
	return mil;
}

int m(int num_r){
	int m;
	m=num_r/1000;
	return m;
}
