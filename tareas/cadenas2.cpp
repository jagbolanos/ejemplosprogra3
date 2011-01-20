#include <iostream>
#include <cstring>
using namespace std;

void copiar_cadena(char *dest, char *ori, int td, int to)
{
    for(int i=0; i < td; i++){
        dest[i]=0;
    }
    
    for (int j = 0; j < to; j++){
        dest[j] = ori[j];
    }
    
}

int longitud(char *dest)
{
   int i=0;
   while(dest[i] !='\0')
   {
      i++;
   }
   return i;
}

int longitud1(char *ori)
{
   int i=0;
   while(ori[i] !='\0')
   {
      i++;
   }
   return i;
}

void agregar_cadena(char *dest, char *ori, int td, int to)
{
    
   int i, l_dest=0, l_ori=0;

   l_dest = longitud(dest);
   l_ori = longitud(ori);

   
   for(i=0; i<l_ori; i++)
       dest[l_dest+i]=ori[i];

   dest[l_dest+l_ori]='\0';
        
}

int main(){
    char dest[20] = "hola";
    char ori [20] = "hello";
    copiar_cadena(dest,ori,20,20);
    cout<<dest<<endl;
    agregar_cadena(dest,ori,20,20);
    cout<<dest<<endl;
}

