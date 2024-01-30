#include <iostream>
#include <bits/stdc++.h>
#include <cstring>

using namespace std;

/*
 * Complete the 'camelcase' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING s as parameter.
 */

int camelcase(string s)
{
    int index = sizeof(s);
    int counter = 1;
    for (int i = 0; i < index; i++)
    {
        if ((s[i]) >= 'A' && s[i] <= 'Z')
        {
            counter++;
        }
    }
    return counter;
}

int main()
{
    string s;
    getline(cin, s);
    int result = camelcase(s);
    cout << result;
    return 0;
}