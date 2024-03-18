#pragma once
#define MAX 100
class Matriz
{
private:
	int M[MAX][MAX];
	int fil;
	int col;
public:
	Matriz();
	~Matriz();
	void set_fil(int _fil);
	int get_fil();
	void set_col(int _col);
	int get_col();
	void mostrarmat(int MAT[MAX][MAX]);
	void cargarmat(int MAT[MAX][MAX]);
	float promedio(int MAT[MAX][MAX], int m, int n);
	int mayor(int MAT[MAX][MAX], int m, int n);

};
