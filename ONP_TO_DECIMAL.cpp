#include <iostream>

using namespace std;


int main()
{
    string wejscie = "23+5*";
    int tab[10] = {};
    int counter = 0;

    for(int i = 0; i < wejscie.size(); i++)
    {
        if(wejscie[i] >= '0' && wejscie[i] <= '9')
        {
            tab[counter] = wejscie[i] - '0';
            counter++;
        }
        else
        {
            counter = counter - 2;
            switch(wejscie[i])
            {
                case '+':
                    tab[counter] = tab[counter] + tab[counter + 1];
                    break;
                case '-':
                    tab[counter] = tab[counter] - tab[counter + 1];
                    break;
                case '*':
                    tab[counter] = tab[counter] * tab[counter + 1];
                    break;
                case '/':
                    tab[counter] = tab[counter] / tab[counter + 1];
                    break;
            }
            tab[++counter] = 0;
        }
    }
    cout << "Wynik: " << tab[0];

    return 0;
}
