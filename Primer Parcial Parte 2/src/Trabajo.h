/*
 * Trabajo.h
 *
 *  Created on: 12 may. 2021
 *      Author: celes
 */

#ifndef TRABAJO_H_
#define TRABAJO_H_
#define T 1000
#define VACIO 0
#define OCUPADO 1

typedef struct
{
	int dia;
	int mes;
	int anio;
}eFecha;

typedef struct
{
	int id;
    int idBicicleta;
	int idServicio;
	eFecha fecha;
	int isEmpty;
}eTrabajo;

void HardcodeoTrabajo(eTrabajo listaT[]);
void ObtenerId (int* idAutoIncremental);
void Inicializar(eTrabajo lista[], int tam);
int BuscarLibre(eTrabajo lista[], int tam);
int BuscarTrabajoPorId(eTrabajo lista[], int tam, int id);


#endif /* TRABAJO_H_ */
