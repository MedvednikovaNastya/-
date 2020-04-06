#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool cmp(long long a,long long b){ 
return a>b; //описываем компаратор
}
int main()
{
int n;
cin » n;
vector <int> a(n);
for (int i=0;i<n;i++){
cin » a[i];
}
sort(a.begin(),a.end(),cmp); //сортировка
for (int i=0;i<n;i++){
cout « a[i];
}
return 0;
}
