#include <iostream>
using namespace std;
int main() {
	/*int HP;
	cin >> HP;
	if (HP >  0) {
		cout << "true" << endl;
		}
	else { cout << "false" << endl; }*/
	/*int t;
	cin >> t;
	if (t > 20) {
		cout << "on" << endl;
	}
	else  if (t <= 20) { cout << "of" << endl; }*/
	/*int tt;
	int t;
	int v;
	cin >> tt;
	cin >> t;
	cin >> v;
	if (t > 20 && tt < t && v > 20); {
		cout << "on" << endl;
	}
	else { cout << "of" << endl; }
	system("pause");*/
	/*int x;
	int y;
	cin >> x;
	if (x > 0) {
		y = (sqrt(x - 2));
	}
	else if (x < 0){
		y = abs(x);
	}
	else if (x == 0) {
		y = 0;
	}
	cout << y << endl;*/
	setlocale(LC_ALL, "russian");
	int k;
	cin >> k;
	switch (k) {
	case 1: cout << "�������" << endl; break;
	case 2: cout << "������������" << endl; break;
	case 3: cout << "�������" << endl; break;
	case 4: cout << "����������" << endl; break;
	case 5: cout << "�������" << endl; break;
	default: cout << "������" << endl;
	}
	system("pause");
}