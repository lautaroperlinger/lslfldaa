#include "servicio.h"
#include "datastore.h"

int hardcoreo_Servicios(eServicios Servicios[],int len)
{
    int iddServicios=20000;
    int retorno = -1;
    if(Servicios != NULL && len > 0)
    {
        retorno=0;
        for(int i =0; i< len; i++)
        {
            Servicios.idServicio[i]=iddServicios;
            Servicios.servicios[i]=Servicios_data;
            Servicios.precios[i]=precios;
        }
    }
    return retorno;
}
void mostrar_Servicio(eServicios Servicios[],int len)
{
    printf("%d        %5c        %5f\n",Servicios.idServicio,Servicios.servicios,Servicios.precios);
}
void mostrar_ServicioS(eServicios Servicios[],int len)
{
    printf("---------SERVICIOS PARA BICICLETAS---------\n\n")
    for(int i=0;i<len;i++)
    {
        mostrar_Servicio(Servicios,len);
    }
}
