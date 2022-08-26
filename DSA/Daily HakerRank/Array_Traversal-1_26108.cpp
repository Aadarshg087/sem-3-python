#include <iostream>
using namespace std;

int main()
{
    string language[] = {};
    int n = sizeof(language) / sizeof(string);
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> language[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (language[i] == "JAVA")
        {
            count++;
        }
    }
    cout << "JAVA lecture is repeating " << count << " times";

    return 0;
}