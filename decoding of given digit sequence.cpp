#include <iostream>
using namespace std;

string str(string arr[], string k)
{
string j = "";

int n = k.length();
for (int i = 0; i < n; i++)
{
if (k[i] == ' ')
{
j = j + "0";
}
else
{
int position = k[i] - 'A';
j = j + arr[position];
}
}

return j;
}
int main()
{
string str1[]
= { "2", "22", "222", "3", "33", "333", "4",
"44", "444", "5", "55", "555", "6", "66",
"666", "7", "77", "777", "7777", "8", "88",
"888", "9", "99", "999", "9999" };

string k = "SCIENCE";
cout << str(str1, k);
return 0;
}


