/* 	***Autubus Grafico***
	***Desarrollador: KillerFerd
	***Curso: Programación III						*/
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

char asiento[4][12];
int x,i,j, butaca;
char a, fila;

void iniciar(void);
void reserva(void);
void cancelar (void);
void mostrar (void);

int main (){
	int op1;
	iniciar ();
	for(;;){
		mostrar();
	cout<<"\n\t  .:SELECCIONE UNA OPCION:."<<endl;
	cout<<"\t  1- reservar asiento\n";
	cout<<"\t  2- cancelar\n";
	cout<<"\t  3- salir\n";
	cout<<"\t  Opcion [1-3]: ";
	cin>>op1;
	switch (op1){
		case 1:
			reserva();
			break;
		case 2:
			cancelar();
			break;
		case 3:
			exit(1);
			break;
		default:break;

	}
}
}

void iniciar(void){
	x=0;
	for(i=0;i<4;i++){
		for (j=0;j<12;j++){
			asiento [i][j]='0';
		}
	}	
}
void reserva(void){
	
	do{
		cout<<"Solo letras mayuscuals A o B o C o D\n";
		cout<<"Ingrese la Letra de la fila :\n";
		cin>>fila;
		
	while(getchar() != '\n');
	} while(fila < 'A' || fila > 'D' );
	
	do{
		cout<<"Solo numeros de 1 a 12\n";
		cout<<"Ingrese numero asiento :\n";
		cin>>butaca;
	while(getchar() != '\n');
	}while(butaca < 1 || butaca > 12) ;
	if(fila =='A')
		x=0;
	if(fila =='B')
		x=1;
	if(fila =='C')
		x=2;
	if(fila =='D')
		x=3;
		system("cls");
	if(asiento[x][butaca-1]=='X'){ 
		cout<<"El asiento "<<fila<<butaca<<" Ya esta reservado\n vuelva a ingresar su reserva\n";
		reserva();
	}else{
		cout<<"Usted eligio la fila "<<fila<<" numero "<<butaca<<endl;
		asiento [x][butaca-1]= 'X'; 

	}

}
void cancelar (void){
	do{
		cout<<"Solo letras mayuscuals A o B o C o D\n";
		cout<<"Ingrese la Letra de la fila :";
		cin>>fila;
	while(getchar() != '\n');
	} while(fila < 'A' || fila > 'D' );
	
	do{
		cout<<"solo numeros de 1 a 12\n";
		cout<<"Ingrese numero asiento :";
		cin>>butaca;
	while(getchar() != '\n');
	}while(butaca < 1 || butaca > 12) ;
	if(fila =='A')
		x=0;
	if(fila =='B')
		x=1;
	if(fila =='C')
		x=2;
	if(fila =='D')
		x=3;
		system("cls");
	if(asiento[x][butaca-1]!='X'){
		cout<<"El asiento "<<fila<<butaca<<" No esta reservado\n vuealva a ingresar su asiento\n";	
	}else{
		cout<<"Usted elimino el asiento de la fila "<<fila<<" numero "<<butaca<<endl;
		asiento [x][butaca-1]= '0';
		
	}
	
}
void mostrar (void){
	cout<<"\t  .:AUTOBUS ELIZARDO:."<<endl;
	a='A';
	cout<<"\t";
	for (j=1;j<13;j++){
			cout<<j<<" ";
		}
		cout<<endl;
    for(i=0;i<4;i++){
		cout<<a<<"\t";
		a= a+1;	
		for (j=0;j<12;j++){
			if (j<10)
				cout<<asiento[i][j]<<" ";
			else
				cout<<" "<<asiento[i][j]<<" ";
		}
	cout<<endl;
	}
	
}
