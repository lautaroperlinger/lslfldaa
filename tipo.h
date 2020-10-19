#ifndef TIPO_H_INCLUDED
#define TIPO_H_INCLUDED
#define TAMT 4

typedef struct
{
    int idTipo[TAMT];
    char descripcion[TAMT][20];
}eTipo;
#endif // TIPO_H_INCLUDED


int hardcoreo_Tipo(eTipo Tipos[],int len);
void mostrar_Tipo(eTipo Tipos[],int len);
void mostrar_TipoS(eTipo Tipos[],int len);

