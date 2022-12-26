#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double S, s;
	int i, k;
	s = 1;
	i = 1;
	while (i <= 12)
	{
		S = 0;
		k = 1;
		while (k <= i)
		{
			S += 2 * sin(k);
			k++;
		}
		s+= (1+ S) / (cos(i)+S);
		i++;
	}
	cout << s << endl;
	s = 1;
	i = 1;
	do
	{
		S = 0;
		k = 1;
		do
		{
			S += 2 * sin(k);
			k++;
		} 
		while (k <= i);
		s += (1 + S) / (cos(i) + S);
		i++;
	} 
	while (i <= 12);
	cout << s << endl;
	s = 1;
	for (i = 1; i <= 12; i++)
	{
		S = 0;
		for (k = 1; k <= i; k++)
		{
			S += 2 * sin(k);
		}
		s += (1 + S) / (cos(i) + S);
	}
	cout << s << endl;
	s = 1;
	for (i = 12; i >= 1; i--
		)

	{
		S = 0;
		for (k = i; k >= 1; k--
			)

		{
			S += 2 * sin(k);
		}
		s += (1 + S) / (cos(i) + S);
	}
	cout << s << endl;
	return 0;
}
