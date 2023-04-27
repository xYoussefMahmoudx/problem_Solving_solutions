#include <iostream>
using namespace std;
int main()
{
int n, h;
cin >> n >> h;
int sum = 0;
int a;
for (int i = 0;i < n;i++) {
cin >> a;
if (a <= h)sum += 1;
else sum += 2;
}
cout << sum << endl;
return 0;
}
