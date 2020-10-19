#include <stdio.h>
#include <stdlib.h>
#include "color.h"
#include "tipo.h"
#include "servicio.h"
#include "trabajo.h"
#include "validaciones.h"
#include "trabajo.h"
#include "fecha.h"
#define TAMT 4
#define TAMC 5
#define TAMS 4
#define TAMB 5
int main()
{
    eTipo TiposBicis[TAMT];
    eColor ColoresBicis[TAMC][20];
    eBicicleta Bicis[TAMB];
    char seguir;
    int idBicis=100;
    int id=1000;
    int auxid;
    int flag;

    iniciar_Bicis(Bicis,TAMB);
    if(hardcoreo_Tipo(TiposBicis,TAMT)!=-1)
    {
        printf("error en inicializacion de  tipos!\n");
    }
    else
    {
        printf("inicializacion correcta de tipos\n");
    }
    if(hardcoreo_Color(ColoresBicis,TAMC)!=-1)
    {
        printf("error en inicializacion de color!\n");
    }
    else
    {
        printf("inicializacion correcta de color.\n");
    }
    if(hardcoreo_Servicios!=-1)
    {
        printf("error en inicializacion de servicios!\n");
    }
    else
    {
        printf("inicializacion correcta de servicios.\n");
    }

    do
    {
        switch(menu())
        {
        case 1:
            if(alta_bicicleta(Bicis,TiposBicis,ColoresBicis,TAMB,idBicis)=-1)
            {
                printf("error en el alta!\n");
            }
            else
            {
                printf("alta existosa!!\n");
                flag=1;
            }
            break;
        case 2:
            if(flag==1)
            {
                mostrar_BicicletaS(Bicis,len);
                printf("Ingrese ID de la bici a modificar.\n");
                scanf("%d",&auxid);
                auxid=encontrar_Bici(Bicis,TAMB,auxid);
                modificar_bicicleta(Bicis,TiposBicis,TAMB,auxid);
            }
            break;
        case 3:
            break;
        case 41.
            break;
        case 5:
            break;
        case 6:
            break;
        case 7:
            break;
        case 8:
            break;
        case 9:
           break;
        case 10:
            break;
        default:


        system("pause");

    }
    while( seguir == 's');
    return 0;
}
