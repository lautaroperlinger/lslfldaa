#include "tipo.h"
#include "string.h"
#include "datastore.h"
#include "color.h"
#include "tipo.h"
#include "servicio.h"
#include "trabajo.h"
#include "validaciones.h"
#include "trabajo.h"
#include "fecha.h"
int hardcoreo_Tipo(eTipo tipos[],int len)
{
    int iddtipo=1000;
    int retorno = -1;
    if(Tipos != NULL && len > 0)
    {
        retorno=0;
        for(int i =0; i< len; i++)
        {
            tipos.idTipo[i]=iddtipo;
            tipos.descripcion[i][20]=Tipos_data[i];
            iddtipo++;
        }
    }
    return retorno;
}
void mostrar_TipoS(eTipo Tipos[],int len)
{
    printf("---------TIPOS DE BICIS---------\n\n")
    for(int i=0;i<len;i++)
    {
        mostrar_Tipo(Tipos,len);
    }
}
void mostrar_Tipo(eTipo tipos[],int len)
{
    printf("%d        %5c\n",tipos.idTipo,tipos.descripcion);
}
