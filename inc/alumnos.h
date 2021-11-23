/*=====[Module Name]===========================================================
 * Copyright 2019 Esteban Daniel VOLENTINI <evolentini@gmail.com>
 * All rights reserved.
 * License: BSD-3-Clause <https://opensource.org/licenses/BSD-3-Clause>)
 *
 * Version: 0.1.0
 * Creation Date: 2019/03/01
 */

/*=====[Avoid multiple inclusion - begin]====================================*/

#ifndef _ALUMNOS_H_
#define _ALUMNOS_H_

/*=====[Inclusions of public function dependencies]==========================*/

#include <stdbool.h>
#include <stddef.h>

/*=====[C++ - begin]=========================================================*/

#ifdef __cplusplus
extern "C" {
#endif

/*=====[Definition macros of public constants]===============================*/

/*=====[Public function-like macros]=========================================*/

/*=====[Definitions of public data types]====================================*/
/** 
 * @brief Estructura para guardar los datos del alumno
 * @param apellidos Cadena para guardar los apellidos
 * @param nombres Cadena para guardar los nombres
 * @param documento Cadena para guardar el DNI
 */
typedef struct alumno_s {
    char apellidos[30];
    char nombres[30];
    char documento[11];
} const * alumno_t;

/*=====[Definitions of public global variables]==============================*/

/*=====[Prototypes (declarations) of public functions]=======================*/
/**
 * @brief Función para dar formato a los datos del alumno para imprimirlos por 
 * pantalla
 * 
 * @param cadena Cadena a serializar
 * @param espacio Cantidad de caracteres de la cadena
 * @param alumno Estructura con los datos del alumno
 * @return true Si no hubo un error en la conversión
 * @return false Si hubo un error en la conversión
 */
bool SerializarAlumno(char * cadena, size_t espacio, const alumno_t alumno);
/**
 * @brief Recibe un arreglo de caracteres vacio y la longitud del mismo, luego arma 
 * una cadena con todos los alumnos.
 * 
 * @param cadena Cadena a serializar
 * @param espacio Cantidad de caracteres del arreglo
 * @return true Devuelve si no hubo error
 * @return false Devuelve si hubo error
 */
bool SerializarAlumnos(char * cadena, size_t espacio);

/*=====[Prototypes (declarations) of public interrupt functions]=============*/

/*=====[C++ - end]===========================================================*/

#ifdef __cplusplus
}
#endif

/*=====[Avoid multiple inclusion - end]======================================*/

#endif /* _ALUMNOS_H_ */
