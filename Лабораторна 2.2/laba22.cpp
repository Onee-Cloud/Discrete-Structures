#include <iostream>
#include <string>

using namespace std;

int power(int end)
{
    int pow = 1;

    for (int i = 0; i < end; i++)
    {
        pow *= 2;
    }

    return pow;
}

int main()
{
    int iceCreamAmount, topingsAmount, topingsCombinationsAmount;

    cout << "Input ice-cream amount: ";
    cin >> iceCreamAmount;

    cout << "Input topings amount: ";
    cin >> topingsAmount;

    topingsCombinationsAmount = power(topingsAmount);
    
    string *iceCream = new string[iceCreamAmount];
    string *topings = new string[topingsAmount];
    string *topingsCombinations = new string[topingsCombinationsAmount];

    cin.ignore();

    for (int i = 0; i < iceCreamAmount; i++)
    {
        cout << "Input ice-cream article: ";
        getline(cin, iceCream[i]);
    }

    for (int i = 0; i < topingsAmount; i++)
    {
        cout << "Input toping article: ";
        getline(cin, topings[i]);
    }

    for (int i = 0; i < topingsCombinationsAmount; i++) {
        string currentCombination = "";
        for (int j = 0; j < topingsAmount; j++) {
            if ((i >> j) & 1) {
                currentCombination += (topings[j] + " ");
            }
        }

        topingsCombinations[i] = currentCombination;
        
    }

    cout << "Menu: " << endl;

    for (int iceCreamArticle = 0; iceCreamArticle < iceCreamAmount; iceCreamArticle++)
    {
        for (int topingComBination = 0; topingComBination < topingsCombinationsAmount; topingComBination++)
        {
            cout << iceCream[iceCreamArticle] << " : " << topingsCombinations[topingComBination] << endl;
        }
    }
}