#ifndef BICICLETA_H_INCLUDED
#define BICICLETA_H_INCLUDED
#define TAMT 4
#define TAMC 5
#include "fecha.h"
#include "color.h"
#include "tipo.h"
#include "servicio.h"
#include "trabajo.h"
#include "validaciones.h"
#include "trabajo.h"


#endif // BICICLETA_H_INCLUDED
typedef struct
{
    int idBici;
    char marca[20];
    eTipo TipoBici[TAMT];
    eColor ColorBici[TAMC][20];
    float rodados;
    int isEmpty;

}eBicicleta;
int alta_bicicleta(eBicicleta Bicis[],eTipo tipos,eColor colores,int len,int id);
int modificar_bicicleta(eBicicleta Bicis[],eTipo tipos,int len,int id);
int Lugar_Libre(eBicicleta Bicis,int len);
void iniciar_Bicis(eBicicleta Bicis,int len);
char menu();
