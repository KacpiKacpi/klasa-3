#include <iostream>
#include <string>
#include <stack>
#include <sstream>
using namespace std;

int main()
{
    string wejscie;
    stack <float> stos;
    stringstream ss;
    float number;

    while(true)
    {
        cin >> wejscie;
        if(wejscie == "=")
            break;
        ss.str("");
        ss.clear();
        ss << wejscie;

        if(ss >> number)
            stos.push(number);
        else
        {
            int a = stos.top();
            stos.pop();
            int b = stos.top();
            stos.pop();

            switch(wejscie[0])
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
