#ifdef _WIN32
#include <windows.h>
#include <stdio.h>
#include <tchar.h>
#define DIV 1048576
#define WIDTH 7
#endif

#ifdef linux
#include <iostream>
#include <string>
#include "string.h"
#include <sstream>
#include "stdio.h"
#include <cstdlib>
#endif
using namespace std;

/* ---------------- Outpút ---------------- */
void printCustomPoster(string poster)
{
    cout << poster;
}

void printCustomPosterWithEndLine(string poster)
{
    cout << poster << '\n';
}

void printEndLine()
{
    cout << '\n';
}

void printTab(){
    cout<<'\t';
}

void printNumberWithEndl(float number)
{
    ostringstream ss;
    ss << number;
    string s(ss.str());
    cout << s << '\n';
}

void printNumberWithEndl(int number)
{
    ostringstream ss;
    ss << number;
    string s(ss.str());
    cout << s << '\n';
}

void printNumberWithEndl(double number)
{
    ostringstream ss;
    ss << number;
    string s(ss.str());
    cout << s << '\n';
}

void printNumber(double number)
{
    ostringstream ss;
    ss << number;
    string s(ss.str());
    cout << s;
}

void printNumber(float number)
{
    ostringstream ss;
    ss << number;
    string s(ss.str());
    cout << s;
}

void printNumber(int number)
{
    ostringstream ss;
    ss << number;
    string s(ss.str());
    cout << s;
}

void printVector(int vector[],int elementsQuantity){
    int cont=0;
    while(cont<elementsQuantity){
        printNumber(vector[cont]);
        printEndLine();
        cont++;
    }
}
/* ---------------- ****** ---------------- */

/* ---------------- Input ---------------- */
int inputValue(string poster)
{
    int value;
    printCustomPoster(poster);
    cin >> value;
    return value;
}

string inputString(string poster) {
    string value;
    printCustomPoster(poster);
    cin >> value;
    return value;
}

char inputChar(string poster) {
    char value;
    printCustomPoster(poster);
    cin >> value;
    return value;
}

void inputVector(float vector[], int positions) {
    int cont = 0;
    while (cont < positions) {
        vector[cont] = inputValue("Ingrese un valor: ");
        cont++;
    }
}
/* ---------------- ***** ---------------- */


/* ---------------- Screen options ---------------- */
int clearScreen()
{
#ifdef _WIN32
    system("cls");
#endif
#ifdef linux
    system("clear");
#endif
    return 0;
}

int pauseScreen()
{
#ifdef _WIN32
    printCustomPosterWithEndLine("Presione enter para continuar...");
        printEndLine();
        system("pause");
#endif
#ifdef linux
    printCustomPosterWithEndLine("Presione enter para continuar...");
    printEndLine();
    system("read");
#endif
    return 0;
}

char continueScreen() {
    char c;
    printCustomPosterWithEndLine("¿Desea continuar?[S/N]");
    cin >> c;
    return c;
}
/* ---------------- ************** ---------------- */
