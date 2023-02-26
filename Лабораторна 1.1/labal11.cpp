/*
    Створіть програму, яка складає та виводить множину символів, що входять у заданий текстовий рядок.
    Приклад:
        Input:
        колобок
        Output:
        {к, о, л, б}
*/

#include <iostream>
#include <string>
using namespace std;

bool in (char value, char arr[], int len)
{
    bool in_arr = false;

    for (int i = 0; i < len; i++)
        if (arr[i] == value)
        {
            in_arr = true;
            break;
        }
    
    return in_arr;   
}

void print_arr(char arr[], int len)
{
    for (int i = 0; i < len; i++)
        cout << arr[i] << " ";
    cout << endl;
}


int main()
{
    int len = 0;
    string str;
    char *array = new char[len];
    cout << "Input string: ";
    getline(cin, str);
    for (int i = 0; i < str.size(); i++)
    {
        if (!in(str[i], array, len))
        {
            char *buffer = new char[len];
            for (int i = 0; i < len; i++)
                buffer[i] = array[i];
            
            len++;
            array = new char[len];
            for (int i = 0; i < len-1; i++)
                array[i] = buffer[i];
            array[len-1] = str[i];
        }
            
    }

    print_arr(array, len);
}