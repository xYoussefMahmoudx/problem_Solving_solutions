 #include <iostream>
  
 using namespace std;
  
 int main(){
 	long long  n;
 	cin >> n;
 	long long  count = 0;
 	while (true) {
 		count++;
 		if (n - count > 0)n -= count;
 		else break;
 		
 	}
 	cout << n << "\n";
 }
 
