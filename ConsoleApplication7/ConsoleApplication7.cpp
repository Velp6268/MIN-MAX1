// ConsoleApplication7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int* mass;

int length;
void init();
void print();
int min(int* mass);
int max(int* mass);
int main()
{
	setlocale(LC_ALL, "RUS");
	init();
	print();

	cout << endl << "min: " << min(mass);
	cout << endl << "max: " << max(mass);
}
int min(int* mass)
{
	int min = 0;
	for (int i = 0; i < length; i++)
	{
		if (mass[i] < min)
		{
			min = mass[i];
		}
	}
	return min;

}
int max(int* mass)
{

	int max = 0;
	for (int i = 0; i < length; i++)
	{
		if (mass[i] > max)
		{
			max = mass[i];
		}
	}
	return max;

}







void init()
{
	cout << "Введите длину массива: ";
	cin >> length;

	mass = new int[length];

	for (int i = 0; i < length; i++)
	{
		mass[i] = -100 + rand();
	}
}

void print()
{
	for (int i = 0; i < length; i++)
	{
		cout << mass[i] << " ";
	}

}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
