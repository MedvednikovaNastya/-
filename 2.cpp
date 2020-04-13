#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>

using namespace std;

struct man{
public:
string Surname ;
string Name;
int score;

};
bool comp(const man &a, const man &b){
int tmp1 = a.score;
int tmp2 = b.score;
return tmp1 > tmp2 ? true : false;
}

int main()
{
int n,x,b,c;
cin>> n;
vector <man> a(n);
for (int i = 0; i < n; i++) {
cin >> a[i].Name>> a[i].Surname;
cin>> x >> b >> c;
a[i].score = x+b+c;
    }

    sort(a.begin(), a.end(), comp);
    for (int i = 0; i < n; i++) {
    cout<< a[i].Name << " " << a[i].Surname << endl;
    }
return 0;
}
