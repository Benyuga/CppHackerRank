#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
	int T; cin >> T;
	cout << setiosflags(ios::uppercase);
	cout << setw(0xf) << internal;
	while(T--) {
		double A; cin >> A;
		double B; cin >> B;
		double C; cin >> C;
        cout<<showbase;
        cout<<nouppercase<<hex<<left<<(long long) A<<endl;
        cout<<right<<setw(15)<<setfill('_')<<showpos;
		cout<<B<<endl;
        cout<<uppercase<<noshowpos<<scientific<<setprecision(9)<<C<<endl;
	}
	return 0;

}
