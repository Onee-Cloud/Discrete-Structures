/*
    Є
    множина K
    цілих
    чисел. Створіть програму, яка складає і виводить усі можливі підмножини цієї множини.
    Приклад:
        Input:
            {1, 2, 3}
        Output
            {}
            {1}
            {2}
            {3}
            {1, 2}
            {1, 3}
            {2, 3}
            {1, 2, 3}
*/

#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Input array size: ";
    cin >> n;

    int *arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Input array[" << i << "] value: ";
        cin >> arr[i];
    }

    int i, mx, j;
    cout << " " << endl;
    for(i=0, mx=1; i < n; i++) 
        mx *= 2;  
        for(i=0; i < mx; i++) 
        {
            for(j=0; j < n; j++)
                if ((i >> j) & 1) 
                    cout << arr[j] << " ";
                cout << endl;
        }
}