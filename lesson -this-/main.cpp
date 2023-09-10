#include<iostream>
using namespace std;
#include "Car.h"



int main()
{
	Car a("BMW X5", "Grey", 2021, 65000);
	a.SetModel("BMW e60(f90)");
	char* model = a.GetModel();
	cout << model<<endl;

	a.SetColor("White");
	char* color = a.GetColor();
	cout << color << endl;

	a.SetYear(2020);
	int year = a.GetYear();
	cout << year << endl;

	a.SetPrice(111000);
	double price = a.GetPrice();
	cout << price << endl;

	a.Input();
	a.Print();
}