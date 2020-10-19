#ifndef SERVICIO_H_INCLUDED
#define SERVICIO_H_INCLUDED
#define TAMS 4
typedef struct
{
    int idServicio[TAMS];
    char descripcion[TAMS][25];
    float precios[TAMS];

}eServicios;


int hardcoreo_Servicios(eServicios Servicios[],int len);
void mostrar_Servicio(eServicios Servicios[],int len);
void mostrar_ServicioS(eServicios Servicios[],int len);
#endif // SERVICIO_H_INCLUDED
