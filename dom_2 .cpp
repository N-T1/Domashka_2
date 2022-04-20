#include "dom_2.h"
#include <algorithm>
#include <iterator>
#include <vector>
#include <numeric>
using namespace std;


void Invert(vector <int>*a)
{
	reverse(a->begin(), a->end());
}


void Ubiv(vector <int>*a)
{
	sort(a->begin(), a->end(), [](int a, int b)
		{
			return a > b;
		});
}


void Vozrast(vector <int>* a)
{
	sort(a->begin(), a->end());
}


void (*Function(vector <int>*a))(vector <int>*)
{
	int k = a->front();
	int sum = accumulate(a->begin(), a->end(), 0);
	cout << endl << k << endl << sum ;
	if (sum == k)
	{
		return Invert;
	}
	else if (sum > k)
	{
		return Vozrast;
	}
	else if (sum < k)
	{
		return Ubiv;
	}
}