#ifndef COLOR_H_INCLUDED
#define COLOR_H_INCLUDED
#define TAMC 5

typedef struct
{
    int idColor[TAMC];
    char nombreColor[TAMC][20];
}eColor;
#endif // COLOR_H_INCLUDED



int hardcoreo_Color(eColor Colores[],int len);
void mostrar_Color(eColor Colores[],int len);
void mostrar_Colores(eColor Colores[],int len);

