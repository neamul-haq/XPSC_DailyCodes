#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    int a,b,c;
	cin >> a >> b >> c; 
	if(a+b+c<2) cout << "Water filling time" << "\n";
	else cout << "Not now" << "\n";
	}
	return 0;
}
