// stack::push/pop
#include "Evaluador.h"
#include <iostream>       // std::cin, std::cout
#include <stack>          // std::stack
using namespace std;


//devuelve el primer elemento de "mi_pila"
string getTope(stack<string> mi_pila)
{
    return mi_pila.top();//aqui uso la funcion top para que me de el primer numero
}

//devuelve la cantidad de elementos de "mi_pila"
int getTamano(stack<string> mi_pila)
{
    return mi_pila.size();//uso la funcion para ver el tamaño de mi pila
}

//devuelve true si "str" esta dentro de "mi_pila" de lo contrario devuelve false
bool existeEnPila(stack<string> mi_pila, string str)
{
    while(!mi_pila.empty())//reviso si esta vacia mi pila o si tiene elementos
        {
        if(mi_pila.top()==str)//veo si el primer elemento de mi pila es igual a str
            {
            return true;
            }
        mi_pila.pop();//para que vaya quitando el primer elemento para que vaya revisando todos los elementos hasta que terminen el ciclo
        }
    return false;
}

//devuelve el elemento mayor de "mi_pila"
int getMayor(stack<int> mi_pila)
{
    int mayor = 0;//declaro mi variable

    while(!mi_pila.empty())//revisar si tiene elementos mi pila
        {
        if(mi_pila.top()> mayor)//viendo la condicion que si el primer elemetno es el mayor de mi pila
            {

            mayor = mi_pila.top();//haciendo iguales mi variable con el pirmer variable de mi pila
            }
            mi_pila.pop();// que vaya sacando el primer elemento mientras termine el ciclo

        }
    return mayor;
}

//devuelve el elemento menor de "mi_pila"
int getMenor(stack<int> mi_pila)
{
    int menor = mi_pila.top();//declarando variables
    while(!mi_pila.empty())// viendo si tengo elementos en mi pila
        {
        if(mi_pila.top()==0)//igualando mi primer elemento
            {
                menor=mi_pila.top();// mi variable que sea igual al primer elemento de mi pila
            }
        if( mi_pila.top() < menor)//viendo que si mi primer elemento es el menor
            {
                menor=mi_pila.top(); // mi variable que sea igual al primer elemento de mi pila
            }
        mi_pila.pop();// que vaya sacando el primer elemento mientras termine el ciclo

        }
    return menor;
}

//devuelve el promedio de todos los elementos de "mi_pila"
float getPromedio(stack<float> mi_pila)
{
       //declatando variables
    int suma = 0;
    int cantidad = mi_pila.size();
    int promedio = 0;

    while(!mi_pila.empty())//viendo si tengo elementos en mi pila
        {
            suma += mi_pila.top();//esto es para que vaya sumando cada elemento de mi pila hasta que termine el ciclo
            mi_pila.pop();//que vaya quitando el primer elemento para sumar
        }
        promedio = suma/cantidad;//este proceso es para sacar el promedio

    return promedio;
}

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}
