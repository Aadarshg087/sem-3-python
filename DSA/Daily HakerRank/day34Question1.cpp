#include <cmath>
#include <cstdio>
#include <vector>
#include <stack>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    stack<char> s;
    string str;
    cin >> str;
    int size = str.size();
    for (int i = 0; i < size; i++)
    {
        if (str[i] == '(' || str[i] == '{' || str[i] == '[')
        {
            
        }
        
    }
    
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '(' || str[i] == '{' || str[i] == '[')
        {
            s.push(str[i]);
        }
    }
    for (int i = size; i >= 0; i--)
    {
        if (str[i] == ')' || str[i] == '}' || str[i] == ']')
        {
            s.pop();
        }
    }

    if (s.empty() && size % 2 == 0)
    {
        cout << "Balanced" << endl;
    }
    else
    {
        cout << "Not Balanced" << endl;
    }

    return 0;
}
