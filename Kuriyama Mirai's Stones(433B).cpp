#include <iostream>
#include <algorithm>
using namespace std;
int arrs[100000];
long long orgs[100000], unorgs[100000];
int main()
{
int n;
cin >> n;
cin >> arrs[0];
unorgs[0] = arrs[0];
for (int i = 1;i < n;i++)
{
cin >> arrs[i];
unorgs[i] = unorgs[i - 1] + arrs[i];
}
sort(arrs, arrs + n);
orgs[0] = arrs[0];
for (int i = 1;i < n;i++)
{
orgs[i] = orgs[i - 1] + arrs[i];
}
int m;
cin >> m;
while (m--)
{
int type, l, r;
cin >> type >> l >> r;
if (type == 1)
{
if (l - 2 < 0)
cout << unorgs[r - 1] << "\n";
else cout << unorgs[r - 1] - unorgs[l - 2] << "\n";
}
if (type == 2)
{
if (l - 2 < 0)
cout << orgs[r - 1] << "\n";
else cout << orgs[r - 1] - orgs[l - 2] << "\n";
}
}
}
