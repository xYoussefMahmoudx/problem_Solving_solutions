 #include<bits/stdc++.h>
 using namespace std;
  
  
 int main()
 {
 	int t;
 	cin >> t;
 	int a, b ,n;
 	while (t--) {
 		cin >> a >> b >> n;
 		
 		if (n % 3 == 0) cout << a << "\n";
 		else if (n % 3 == 1)cout << b << "\n";
 		else cout << (a ^ b )<< "\n";
  
 	}
 }
