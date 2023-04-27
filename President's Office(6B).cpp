#include <iostream>
#include <vector>
#include <set>
using namespace std;
int main(){
vector <int> row, col;
set<char> adj;
char arr[105][105];
int n, m;
char c;
cin >> n >> m >> c;
for (int i = 0;i < n;i++) {
for (int j = 0;j < m;j++) {
cin >> arr[i][j];
if (arr[i][j] == c) {
row.push_back(i);
col.push_back(j);
}
}
}
for (int i = 0;i < row.size();i++) {
if (arr[row.at(i) + 1][col.at(i)] != '.' && row.at(i) + 1 < n&& arr[row.at(i) + 1][col.at(i)] != c) {
adj.insert(arr[row.at(i) + 1][col.at(i)]);
}
if (arr[row.at(i) - 1][col.at(i)] != '.' && row.at(i) - 1 >= 0&& arr[row.at(i) - 1][col.at(i)] != c) {
adj.insert(arr[row.at(i) - 1][col.at(i)]);
}
if (arr[row.at(i)][col.at(i) + 1] != '.' && col.at(i) + 1 < m && arr[row.at(i)][col.at(i) + 1] != c) {
adj.insert(arr[row.at(i)][col.at(i) + 1]);
}
if (arr[row.at(i)][col.at(i) - 1] != '.' && col.at(i) - 1 >= 0 && arr[row.at(i)][col.at(i) - 1] !=c ) {
adj.insert(arr[row.at(i)][col.at(i) - 1]);
}
}
cout << adj.size() << "\n";
}
