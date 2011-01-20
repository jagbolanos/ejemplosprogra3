#include<iostream>
using namespace std;

void copiar_cadena(char *dest,char *origen, int n,int m){
	cout<<"destino= "<<dest<<" origen= "<<origen<<endl;
	if(n>=m){
	for(int i=0;i<n;i++){
		dest[i]=origen[i];
		if(origen[i]==0){
			break;
		}
	}
	cout<<dest<<endl;
	}
}

void agregar_cadena(char *dest,char *origen, int n,int m){
	cout<<"destino= "<<dest<<" origen= "<<origen<<endl;
	int num=0,num2=0,cont=0;
	for(int i=0;i<n;i++){
		if(dest[i]==0){
			num=i;
			break;
		}
	}

	for(int i=0;i<m;i++){
		if(origen[i]==0){
			num2=i;
			break;
		}
	}
	
	if(n>=(num+num2)){
	for(int i=num;i<num+num2;i++){
		dest[i]=origen[cont];
		cont++;
	}
	cout<<dest<<endl;
	}
}

int main(){
char mander[20]="hola";
char izard[20]="mundo";
int p=20,r=20;
cout<<"copiar"<<endl;
copiar_cadena(mander,izard,p,r);
cout<<"agregar"<<endl;
agregar_cadena(mander,izard,p,r);

return 0;
}

