#include <iostream>
#include <string>
#include <stack>
using namespace std;
// https://en.cppreference.com/w/cpp/container/stack
int main()
{
    string wejscie = "23+5*";
    stack <int> stos;

    for(int i = 0; i < wejscie.size(); i++)
    {
        if(wejscie[i] >= '0' && wejscie[i] <= '9')
            stos.push(wejscie[i] - '0');
        else
        {
            int a = stos.top();
            stos.pop();
            int b = stos.top();
            stos.pop();

            switch(wejscie[i])
            {
            case '+':
                stos.push(b + a);
                break;
            case '-':
                stos.push(b - a);
                break;
            case '*':
                stos.push(b * a);
                break;
            case '/':
                stos.push(b / a);
                break;
            }
        }
    }
    cout << "Wynik: " << stos.top();

    return 0;
}
