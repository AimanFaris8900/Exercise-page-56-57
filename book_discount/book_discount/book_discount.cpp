#include <iostream>
#include <string>
using namespace std;

const double PRICE = 20.0;

int main(){
	int num;
	char count = 'T';
	double total;
	while (count!='F') {
		cout << "Enter numbers of units sold: ";
		cin >> num;
		if (num < 10&&num>=0) {
			total = PRICE * num;
			count = 'F';
		}
		else if (num >= 10 && num <= 19) {
			total = (PRICE * 0.8) * num;
			count = 'F';
		}
		else if (num >= 20 && num <= 49) {
			total = (PRICE * 0.7) * num;
			count = 'F';
		}
		else if (num >= 50 && num <= 99) {
			total = (PRICE * 0.6) * num;
			count = 'F';
		}
		else if (num >= 100) {
			total = (PRICE * 0.5) * num;
			count = 'F';
		}
		else {
			cout << "[ERROR] You have entered a negative value. Enter again";
		}
		
	}
	cout << "The total is " << total <<endl;
	return 0;
}