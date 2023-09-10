#include "Car.h"   // Файл реализации
#include <iostream>
using namespace std;





Car::Car()
{
	model = nullptr;
	color = nullptr;
	year = 0;
	price = 0.0;
}

Car::Car(const char* m, const char* c, int y, double pr)
{
	this->model = new char[strlen(m) + 1];
	strcpy_s(model, strlen(m) + 1, m);

	this->color = new char[strlen(c) + 1];
	strcpy_s(color, strlen(c) + 1, c);

	this->year = y;
	this->price = pr;

}

Car::~Car()
{
	delete[] model;
	delete[] color;
}

void Car::Input()
{
	char buff[50];
	cout << "Enter model: ";
	cin.getline(buff, sizeof(buff));
	if (this->model != nullptr) {
		cout << this->model << " deleted\n";
		delete[] this->model;
	}
	this->model = new char[strlen(buff) + 1];
	strcpy_s(this->model, strlen(buff) + 1, buff);

	cout << "Enter color: ";
	cin.getline(buff, sizeof(buff));

	if (this->color != nullptr) {
		cout << this->color << " deleted\n";
		delete[] this->color;
	}
	this->color = new char[strlen(buff) + 1];
	strcpy_s(this->color, strlen(buff) + 1, buff);

	cout << "Enter year: ";
	cin >> this->year;

	do {
		cout << "Enter price: ";
		cin >> this->price;
		if (this->price <= 0) {
			cout << "Write price higher than 0!" << endl;
		}
	} while (this->price <= 0);
}

void Car::Print()
{
	cout << "Car Model: " << GetModel() << endl;
	cout << "Car Color: " << GetColor() << endl;
	cout << "Car Year: " << GetYear() << endl;
	cout << "Car Price: " << GetPrice() << endl;
}

char* Car::GetModel()
{
	return model;
}
char* Car::GetColor()
{
	return color;
}
int Car::GetYear()
{
	return year;
}
double Car::GetPrice()
{
	return price;
}

void Car::SetModel(const char* m) // audi a5
{
	if (model != nullptr)
	{
		cout << "This model " << model << " deleted" << endl;
		delete[] model;
	}
	this->model = new char[strlen(m) + 1];
	strcpy_s(model, strlen(m) + 1, m);
}
void Car::SetColor(const char* c)  //white
{
	if (color != nullptr)
	{
		cout << "This color " << color << " deleted" << endl;
		delete[] color;
	}
	this->color = new char[strlen(c) + 1];
	strcpy_s(color, strlen(c) + 1, c);
}
void Car::SetYear(int y)
{
	this->year = y;
}
void Car::SetPrice(double pr)
{
	this->price = pr;
}
