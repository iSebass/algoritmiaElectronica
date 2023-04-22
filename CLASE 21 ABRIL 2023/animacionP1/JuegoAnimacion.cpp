#include "juegoAnimacion.h"

void gotoxy(int x, int y){
	HANDLE hCon;
	//Recupera el control de la consola
	hCon = GetStdHandle(STD_OUTPUT_HANDLE);
	//Son coodenadas
	COORD dwPos;
	dwPos.X = x;
	dwPos.Y = y;
	SetConsoleCursorPosition(hCon, dwPos);
}
void ocultar_cursor(void){
	HANDLE hCon;
	//Recupera el control de la consola
	hCon = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO cci;
	cci.dwSize = 50;
	cci.bVisible = FALSE;
	SetConsoleCursorInfo(hCon, &cci);	
}
