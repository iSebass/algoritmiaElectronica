#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <conio.h>
#include "juegoAnimacion.h"

using namespace std;

bool gameOver = false;
int ch;
int x=10,y=10;
int main(void){
	ocultar_cursor();
	while(gameOver == false){
		pintarFigura1(x,y);
		if(  kbhit() ){
			ch = getch();
			switch(ch){
				case 'a': x--;  break;
				case 'd': x++;  break;
				case 's': y++;  break;
				case 'w': y--;  break;
			}
			system("cls");
		}
		
	}
	
	return 0;
}
