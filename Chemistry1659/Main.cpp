#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;
int main() {
	float a;
	cin >> a;
	vector <float> b;
	while (a != 999) {
		b.push_back(a);
		cin >> a;
	}
	for (int i =1; i < b.size(); i++) {
		float f = b[i] - b[i - 1];
		printf("%.02f\n", f);
	}
	cout << "End of Output" << endl;
}
