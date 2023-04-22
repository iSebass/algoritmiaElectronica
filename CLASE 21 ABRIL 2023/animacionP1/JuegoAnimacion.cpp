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
	
void pintarFigura1(int x, int y){
	
 gotoxy(x,y+0);	cout<<"  @  ";
 gotoxy(x,y+1);	cout<<"@@@@@";
 gotoxy(x,y+2);	cout<<"  @  ";
 gotoxy(x,y+3);	cout<<"  @  ";
	
}
	
	
