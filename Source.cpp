//Плоткин Роман
#include <iostream>
#include <cmath>
#include <ctime>
#include <iomanip>
using namespace std;
/*Proc4◦
. Описать процедуру TrianglePS(a, P, S), вычисляющую по стороне a
равностороннего треугольника его периметр P = 3·a и площадь S = a
2
·
√
3/4
(a — входной, P и S — выходные параметры; все параметры являются вещественными). С помощью этой процедуры найти периметры и площади
трех равносторонних треугольников с данными сторонами.*/
double p(double a) {
	return 3 * a;
}
double s(double a) {
	return a * a * sqrt(3.0) / 4;
}
int main() {
	int a;
	for (int i = 0; i <= 3; i++) {
		cin >> a;
		cout << p(a) << ' ' << s(a);
	}
}
/*double a_mean(int x, int y) {
	double am = (x + y) / 2.0;
	return am;
}
double g_mean(int x, int y) {
	return sqrt(x * y);
}
int main() {
	Proc3. Описать процедуру Mean(X, Y, AMean, GMean), вычисляющую
среднее арифметическое AMean = (X+Y)/2 и среднее геометрическое
GMean =
√
X·Y двух положительных чисел X и Y (X и Y — входные,
AMean и GMean — выходные параметры вещественного типа). С помощью
этой процедуры найти среднее арифметическое и среднее геометрическое
для пар (A, B), (A, C), (A, D), если даны A, B, C, D.
	int a, b;
	for (int i = 0; i < 3; i++) {
		cin >> a >> b;
		cout << a_mean(a, b) << ' ' << g_mean(a, b) << endl;
	}

}*/