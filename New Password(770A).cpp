#include<bits/stdc++.h>
using namespace std;
int main()
{
int n, k;
cin >> n >> k;
char s[110] ;
int start = 97;
int alpha[26];
for (int i = 0;i < k;i++)
{
alpha[i] = start;
start++;
}
int p = 0;
for (int i = 0;i < n;i++) {
s[i] = alpha[p];
if (p < k-1)p++;
else
p = 0;
}
for (int i = 0;i < n;i++)
cout << s[i];
cout << endl;
}
