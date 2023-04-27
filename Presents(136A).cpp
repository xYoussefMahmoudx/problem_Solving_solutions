#include <iostream>
using namespace std;
int main()
{
int n;
cin >> n;
int arr[110];
int p;
for (int i = 1;i <= n;i++) {
cin >> p;
arr[p] = i;
}
for (int i = 1;i <= n;i++) {
cout << arr[i] << endl;
}
return 0;
} 
