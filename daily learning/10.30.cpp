#include<bits/stdc++.h>
using namespace std;
string a, b;
int Strcmp(string a, string b)
{
int len = min(a.length(), b.length());
for (int i = 0;i <= len;i++)
if (a[i] != b[i])
return (int)(a[i] - b[i]);
for (int i = len;i < a.length();i++)
return (int)a[i];
for (int i = len;i < b.length();i++)
return -(int)b[i];
return 0;
}
int main()
{
cin >> a >> b;
//cout << (a > b) << endl;
cout << Strcmp(a, b) << endl;
return 0;
}

