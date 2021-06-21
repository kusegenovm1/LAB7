#include <cmath>
#include <iostream>

using namespace std;

void invert(int& r) { //Функция инвертирования числа (Начинается с 20-ой степени двойки)
	int k = 20; //степень
	long int dv = 0; //31-ая степень двойки (максимальный long int)
	long int rezult = 0;
	long int dlsr = r;

	while (k > -1) { //перевод в двоичный вид
		dv = pow(2, k);
		if (dv <= r) {
			r -= dv;
			rezult += pow(10, k);
		}
		k = k - 1;
	}
	cout << "двоичное число (" << rezult << ") десятичное (";
	long int rez = 0;
	k = 0;
	while (rezult > 0) { //инвертирование
		dv = rezult % 10;
		rezult /= 10;
		if (dv == 1) {

		}
		else
		{
			rez = rez + pow(2, k);
		}
		k++;
	}
	r = rez;
}

void srgar(int r1, int r2) { //Функция среднего гармонического
	if (r1 != 0 && r2 != 0)
	{
		double r3 = (2 * r1 * r2) / (r1 + r2);
		cout << r3 << endl;
	}
	else
		cout << "(нет) Одно из значений содержит 0";
}

void sort(double* c1, double* c2, double* c3) { // принимает адреса чисел и сортирует их.
	double a1 = *c1, a2 = *c2, a3 = *c3;
	if (a1 < a2) {
		if (a1 < a3) {
			if (a2 < a3) {
				*c1 = a1;
				*c2 = a2;
				*c3 = a3;
			}
			else
			{
				*c1 = a1;
				*c2 = a3;
				*c3 = a2;
			}
		}
		else
		{
			*c1 = a3;
			*c2 = a1;
			*c3 = a2;
		}
	}
	else
	{
		if (a2 < a3) {
			if (a1 > a3) {
				*c1 = a2;
				*c2 = a3;
				*c3 = a1;
			}
			else {
				*c1 = a2;
				*c2 = a1;
				*c3 = a3;
			}
		}
		else {
			*c1 = a3;
			*c2 = a2;
			*c3 = a1;
		}
	}
}

int main()
{
	setlocale(LC_ALL, "ru");
	int a, b;
	cout << "Введите два числа" << endl;
	cout << "Введите первое число - " << endl;
	cin >> a;
	cout << "Введите второе число - " << endl;
	cin >> b;
	cout << "Инвертирование первого числа = ";
	invert(a);
	cout << a << ")" << endl;
	cout << "Инвертирование второго числа = ";
	invert(b);
	cout << b << ")" << endl;
	cout << "Среднее значение инверсий: " << (a + b) / 2 << endl;
	cout << "Среднее гармоническое двух инвертированных чисел : " << endl;
	srgar(a, b);

	double a1, a2, a3;
	cout << "Введите три числа" << endl;
	cout << "Введите первое число - " << endl;
	cin >> a1;
	cout << "Введите второе число - " << endl;
	cin >> a2;
	cout << "Введите третье число - " << endl;
	cin >> a3;
	sort(&a1, &a2, &a3);
	cout << "Отсортированные числа " << endl;
	cout << "1 число - " << a1 << endl;
	cout << "2 число - " << a2 << endl;
	cout << "3 число - " << a3 << endl;
}

