#include <iostream>
#include <string>
using namespace std;

int main() {
	double nose1, nose2, nose3, ch1, ch2, ch3, img12, img13, img32, mark = 0.0;
	cout << "Enter eye distance from nose and chin distance for image 1:" << endl;
	cin >> nose1;
	cin >> ch1;
	cout << "Enter eye distance from nose and chin distance for image 2:" << endl;
	cin >> nose2;
	cin >> ch2;
	cout << "Enter eye distance from nose and chin distance for image 3:" << endl;
	cin >> nose3;
	cin >> ch3;

	img12 = ((nose1 + nose2) / 2) - ((ch1 + ch2) / 2);
	if (img12 < 0)
		img12 = img12 * -1;
	img13 = ((nose1 + nose3) / 2) - ((ch1 + ch3) / 2);
	if (img13 < 0)
		img13 = img13 * -1;
	img32 = ((nose3 + nose2) / 2) - ((ch3 + ch2) / 2);
	if (img32 < 0)
		img32 = img32 * -1;
	
	if (img12 < img13 && img12 < img32)
		cout << "Best matches is between image 1 and image 2";
	if (img13 < img12 && img13 < img32)
		cout << "Best matches is between image 1 and image 3";
	if (img32 < img12 && img32 < img13)
		cout << "Best matches is between image 3 and image 2";

	return 0;
}