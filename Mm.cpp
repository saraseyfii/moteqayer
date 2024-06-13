#include,iostream
using namespace std;

{
	int n1, n2, n3, n4, n5;
	cout << "N1,N2,N3,N4,N5";
	cin >> n1 >> n2 >> n3 >> n4 >> n5;
	int max = n1, min = m;
	if (n2 > max) {
		max = n2;
	}
	if (n3 > max) {
		max = n3;
	}
	if (n4>max) {
		max = n4;
	}
	if (n5 > max) {
		max = n5;
	}
	if (min > n2) {
		min = n2;
	}
	if (min > n3) {
		min = n3;
	}
	if (min > n4) {
		min = n4;
	}
	if (min > n5) {
		min = n5;
	}
	cout << "Max:" << max;
	cout << "Min:" << min;
	return 0;
}
