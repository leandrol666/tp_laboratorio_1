#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

/** \brief Obtiene un numero ingresado por el usuario
* \param texto Recibe una cadena de texto, de esta manera utilizarla como mensaje para el usuario
* \return Devuelve el numero a utilizar
*/
float pedirNumero(char texto[]);

/** \brief Realiza la suma de dos numeros
*
*  \param numero1 recibe el primero numero
*  \param numero2 recibe el segundo numero
*  \return Devuelve el resultado de la suma de numero1 y numero2
*/

float suma(float numero1, float numero2);

/** \brief Realiza la resta de dos numeros
*
*  \param numero1 recibe el primero numero
*  \param numero2 recibe el segundo numero
*  \return Devuelve el resultado de la resta de numero1 y numero2
*/

float resta(float numero1, float numero2);

/** \brief Realiza la division de dos numeros
*
*  \param numero1 recibe el dividendo(flotante/entero)
*  \param numero2 recibe el divisor(flotante/entero)
*  \return Devuelve el resultado de division de numero1 y numero2
*/
float division(float numero1, float numero2);

/** \brief Realiza la multiplicacion de dos numeros
*
*  \param numero1 Recibe el primer numero
*  \param numero2 Recibe el segundo numero
*  \return Devuelve el resultado de la multiplicacion
*/

float multiplicacion(float numero1, float numero2);

/** \brief realiza el factorial de un numero
*
*  \param numero Recibe un numero maximo a multiplicar
*  \return Devuelve el resultado del factorial
*/

int factorial(int numero1);

/** \brief Muestra en pantalla el resultado de un calculo
*
*  \param numero Recibe el numero a mostrar
*  \param texto Recibe una cadena de texto, de esta manera utilizarla como mensaje para el usuario
*/

void mostrar(char texto[], float numero);

#endif // FUNCIONES_H_INCLUDED
