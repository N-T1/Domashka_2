#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include "dom_2.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    vector <int> mass;
    int n = 0;
    cout << "Введите количество элементов в массиве: ";
    cin >> n;
    srand(time(0));
    /*for (auto i : mass)
    {
        mass.push_back((int)rand() % 100);
    }*/
    for (int i = 0; i < n; i++)
    {
        mass.push_back(rand() % 100 - rand() % 150);
       
        //if (i == 0) { mass.push_back(-9000); }          // для Ubiv
        //else {
        //    mass.push_back((0 - i)*1000);
        //}

        //if (i == 0)                    // для Invert
        //{ 
        //    mass.push_back(3000); 
        //}
        //else if (i % 2 != 0)
        //{
        //    mass.push_back(1000);
        //}
        //else
        //{
        //    mass.push_back(-1000);
        //}

        //mass.push_back((int)rand() % 100);       //  для Vozrast
        
    }

    cout << "Рандомно сгенерированный массив: ";
    copy(mass.begin(), mass.end(), ostream_iterator<int>(cout, " "));

    //void (*Function())(vector <int>*);
    void (*p)(vector <int>*);
    p = Function(&mass);
    p(&mass);
    // Function(&mass);
 
    //Invert(&mass);
    //Ubiv(&mass);
    //Vozrast(&mass);

    cout << endl;
    cout << "Преобразованный массив : ";
    copy(mass.begin(), mass.end(), ostream_iterator<int>(cout, " "));
    cout << endl;
}