/*
5�.
�� �� ������ ����� �� ����������� f(x) = 0 � ��������� (0, 10), ������ f(x) = x5 - ax - F%100, � F � ������� �� ����������� �� �����. 
�� �� �������� ������ �� ��������������� � ������� 10-20 �� ��������� � �� ���������� �� ��������� (��� Bisection method).

Bxo�:
�� ����������� ���� �� ������ ������ �� ��������� �� ������� a.

�����:
�� ����� �������� �� �������  a ���������� (��������� �� �����������) �� �� ������ �� ������� ��� � ������� 20 ������� �����.
��� ����������� ���� �������, �� �� ������ NO SOLUTION.

������ (� ���. ����� F123456):
5

������� �� �������:
2.3227751229355622988
*/
#include<iostream>
#include<cmath>
#include<math.h>
#include<iomanip>
using namespace std;
double f(double x, int a);
int F = 80739 % 100;
double f(double x, int a)
{
	double sum = pow(x, 5) - a*x - F;
	return sum;
}
int main()
{
	//cout << "F= " << F << endl;
	cout.setf(ios::fixed);
	double a, b, c, fa, fb, fc;
	long double e;
	int aa;
	bool flag = true;
	while (cin >> aa)
	{
		cout.precision(19);
		flag = true;
		a = 0;
		b = 10;
		e = 0.000000000000000001L;
		if (f(a, aa)*f(b, aa)>0)
		{
			flag = false;

		}
		else
		{
			for (size_t i = 0; i < 10000; i++)

			{
				c = (a + b) / 2.0;
				fa = f(a, aa);
				fb = f(b, aa);
				fc = f(c, aa);
				if (fc == 0)
				{
					break;
				}

				if (fa*fc>0)
				{
					a = c;
				}
				else if (fa*fc<0)
				{
					b = c;
				}
			}
		}
		if (flag == true)
		{
			cout << std::setprecision(19) << c << endl;
		}
		else {
			cout << "NO SOLUTION" << endl;
		}

	}

	return 0;
}

