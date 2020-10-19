#include "color.h"
#include "datastore.h"

int hardcoreo_Color(eColor Colores,int len)
{
    int iddcolor=5000;
    int retorno = -1;
    if(Tipos != NULL && len > 0)
    {
        retorno=0;
        for(int i =0; i< len; i++)
        {
            Colores.idColor[i]=iddcolor;
            Colores.nombreColor[i][20]=Colores_data[i];
            iddcolor++;
        }
    }
    return retorno;
}
void mostrar_Colores(eColor Colores[],int len)
{
    printf("---------COLOR DE BICICLETAS---------\n\n")
    for(int i=0;i<len;i++)
    {
        mostrar_Color(Colores,len);
    }

}
void mostrar_Color(eColor Colores[],int len)
{
    printf("%d        %5c\n",Colores.idColor,Colores.nombreColor);
}
