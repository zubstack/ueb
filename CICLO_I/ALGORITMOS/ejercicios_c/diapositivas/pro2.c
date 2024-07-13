#include <stdio.h>
#include <windows.h>
void gotoxy(int x, int y) 
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void recuadro(int Col1, int Col2, int Fil1, int Fil2);


int main(int argc, char** argv) { 
	recuadro(0,60,0,23); 
	return 0; 
}


void recuadro(int Col1, int Col2, int Fil1, int Fil2) 
{
for (int Cols=Col1;Cols<=Col2;Cols++) 
{
   for (int Fils=Fil1;Fils<=Fil2;Fils++)
     {
   gotoxy(Cols,Fils);
   if ((Cols == Col1 || Cols == Col2) && (Fils != Fil1 && Fils != Fil2))
			
	printf("%c",186); 
  else if ((Fils==Fil1 || Fils == Fil2) && (Cols != Col1 && Cols != Col2))
	printf("%c",205);
}
 }
    gotoxy(5,8); printf("Universidad Estatal de Bolivar"); 
    gotoxy(5,10); printf("Carrera: Software"); 
    gotoxy(5,12); printf("Profesora: Monica Bonilla"); 
    gotoxy(5,14); printf("Asignatura: Algoritmos y Logica de Programacion"); 
    gotoxy(5,16); printf("Alumno: Ariel Alejandro Calderon"); 

    	
	gotoxy(Col1,Fil1); 
	printf("%c",201);
	gotoxy(Col1,Fil2);
	printf("%c",200);
	gotoxy(Col2,Fil1);
	printf("%c",187);
	gotoxy(Col2,Fil2);
	printf("%c",188);   
	
}