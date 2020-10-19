#include "bicicleta.h"
#include "color.h"
#include "tipo.h"
#include "servicio.h"
#include "trabajo.h"
#include "validaciones.h"
#include "trabajo.h"
#include "fecha.h"
char menu()
{
    printf("------------MENU DE OPCIONES-----------\n\n");
    printf("1.Alta bicicleta.\n");
    printf("2.Modificar bicibleta.\n");
    printf("3.Baja bicicleta.\n");
    printf("4.Listar bicicletas.\n");
    printf("5.Listar tipos.\n");
    printf("6.Listar colores.\n");
    printf("7.Listar servicios.\n");
    printf("8.Alta trabajo.\n");
    printf("9.Listar trabajos.\n");
    printf("10.Salir");
}
int alta_bicicleta(eBicicleta Bicis[],eTipo tipos,eColor colores,int len,int id)
{
    int error=-1;
    int indice;
    eBicicleta Nuevabici;
    indice=Lugar_Libre(Bicis,len);
    if(Bicis!=NULL && len>0 && id>0)
    {
        printf("----------Alta de bicicletas----------\n\n");
        if(indice!=-1)
        {
        Nuevabici.id=id;
        printf("ingrese marca: \n");
        fflush(stdin);
        scanf("%c", &Nuevabici.marca);
        mostrar_TipoS(tipos,TAMc);
        printf("ingrese el id del Tipo:\n");
        scanf("%c",&Nuevabici.TipoBici);
        while(validacion_Tipo(tipos,Bicis,TAMT)!=1)
        {
            printf("el tipo no existe. reingrese otro id: \n");
            scanf("%c",&Nuevabici.TipoBici);
        }
        mostrar_Colores(colores,len);
        printf("ingrese el id del Color:\n");
        scanf("%c",&Nuevabici.ColorBici);
        while(validacion_Color(tipos,Bicis,TAMC)!=1)
        {
            printf("el color no existe. reingrese otro id: \n");
            scanf("%c",&Nuevabici.ColorBici);
        }
        printf("ingrese el rodado: \n");
        scanf("%.2f", &Nuevabici.rodados);
        while(Validacion_Rodados(Nuevabici)!=1)
        {
            printf("Rodados no disponibles!\n. Ingrese uno valido: ");
            scanf("%.2f",&Nuevabici.rodados);
        }
        Nuevabici.isEmpty=1;
        Bicis[id]=Nuevabici;
        }
        else
        {
            printf("no hay memoria.\n")
        }
        error=0;
    }
    return error;
}
int modificar_bicicleta(eBicicleta Bicis[],eTipo tipos,int len,int id)
{
    int auxopcion;
    if(Bicis[id].isEmpty==True)
    {
        switch()
        {
        case 1:

            break;
        case 2:

            break;
        default:
            printf("opcion incorrecta.");
            break;
        }
    }


}
void iniciar_Bicis(eBicicleta Bicis,int len)
{
    for(int i=0; i<len; i++)
    {
        Bicis[i].isEmpty=0;
    }
}
int Lugar_Libre(eBicicleta Bicis,int len)//pone true en la bandera isEmpty
{
    int ver=-1;

    for(int i=0;i<len;i++)
    {
        if(Bicis¨[i].isEmpty==0)
        {
            ver=i;
        }
    }
    return ver;
}
int encontrar_Bici(eBicicleta Bicis,int len,int id)
{
    int idBici;
       for(int i=0;i<len;i++)
        {
            if(Bicis[i].idBici==id)
            {
                if(Bicis[i].isEmpty!=1)
                {
                    idBici=i;
                }
            }
        }
    return idBici;
}
void mostrar_BicicletaS(eBicicleta Bicis,int len)
{
    printf("----------- BICIS-------------\n\n")
    for(int i=0;i<len;i++)
    {
        mostrar_Bicicleta(Bicis,len);
    }
}
void mostrar_Bicicleta(eBicicleta Bicis,int len)
{
    printf("%d      %s        %s       %s         %.2f\n",Bicis.idBici,Bicis.marca,Bicis.ColorBici,Bicis.TipoBici,Bicis.rodados);
}
