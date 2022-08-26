#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    getline(cin, str);

    string c[8];
    int count = 0;
    for (int i = 0; i < 8; i++)
    {
        cin >> c[i];
    }

    for (int i = 0; i < 8; i++)
    {
        if (c[i] == "JAVA")
        {
            count++;
        }
    }

    cout << "JAVA lecture is repeating " << count << " times";
    return 0;
}