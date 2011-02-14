bool validar(bool tablero[][20], int n, int fila)
{
     for(int i=0;i<fila;i++)
     {
         for(int j=0;j<n;j++)
         {
                 if (tablero[i][j])
                 {
                     //Encontro la pieza
                     //Arriba
                     for(int k=i-1;k>=0;k--)
                         if (tablero[k][j])
                             return false;
                     //Abajo
                     for(int k=i+1;k<=fila;k++)
                         if (tablero[k][j])
                             return false;
                     //Izquierda
                     for(int k=j-1;k>=0;k--)
                         if (tablero[i][k])
                             return false;
                     //Derecha
                     for(int k=j+1;k<n;k++)
                         if (tablero[i][k])
                             return false;
                     //AD
                     for(int k=1;i+k<n && j+k<n;k++)
                         if (tablero[i+k][j+k])
                            return false;
                     //AI
                     for(int k=1;i+k<n && j-k>=0;k++)
                         if (tablero[i+k][j-k])
                            return false;
                     //aI
                     for(int k=1;i-k>=0 && j-k>=0;k++)
                         if (tablero[i-k][j-k])
                            return false;
                     //aD
                     for(int k=1;i-k>=0 && j+k<n;k++)
                         if (tablero[i-k][j+k])
                            return false;
                 }
         }
     }
     return true;
}
