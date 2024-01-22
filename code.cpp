#include <iostream>
#include <cmath>
using namespace std;

int main() {
	cout << "PEHYANBIN'S Pearson's Product Moment, R calculator" << endl;
	cout << " \n";
	cout << "-----------------------------------------------------------------------------------" << "\n";
	cout << " \n";

	cout << "Now, we are going to calculate the sum(x)." << endl;
	cout << " \n";
	cout << " \n";

	cout << "Enter your X value here. Enter \"-404\" to stop." << "\n";
	int xvalue;
	cin >> xvalue;

	int sumx = 0;
	while (xvalue != -404)
	{
		sumx += xvalue;
		cout << "Enter your X value here. Enter \"-404\" to stop." << "\n";
		cin >> xvalue;
	}
	cout << " \n";
	cout << "Sum of X = " << sumx << "\n";
	cout << " \n";
	cout << " \n";
	cout << " \n";

	cout << " \n";
	cout << "-----------------------------------------------------------------------------------" << "\n";
	cout << " \n";

	cout << "Now, we are going to calculate the sum(y)." << endl;
	cout << " \n";
	cout << " \n";

	cout << "Enter your Y value here. Enter \"-404\" to stop." << "\n";
	int yvalue;
	cin >> yvalue;

	int sumy = 0;
	while (yvalue != -404)
	{
		sumy += yvalue;
		cout << "Enter your Y value here. Enter \"-404\" to stop." << "\n";
		cin >> yvalue;
	}
	cout << " \n";
	cout << "Sum of Y = " << sumy << "\n";
	cout << " \n";
	cout << " \n";
	cout << " \n";

	cout << " \n";
	cout << "-----------------------------------------------------------------------------------" << "\n";
	cout << " \n";

	cout << "Now, we are going to calculate the sum(xy)." << endl;
	cout << "Enter carefully. It will ask you to input x, and then y." << endl;
	cout << "Enter like this : x1 -> y1 -> x2 -> y2 ... " << endl;
	cout << "Don't : x1 -> x2 -> x3 ... " << endl;
	cout << " \n";
	cout << " \n";
	
	cout << "Enter your X value here again. Enter \"-404\" to stop." << "\n";
	int xvalue2;
	cin >> xvalue2;
	cout << " \n";
	cout << " \n";
	cout << "Enter your Y value here again. Enter \"-404\" to stop." << "\n";
	int yvalue2;
	cin >> yvalue2;

	int xyvalue;
	int sumxy = 0;
	while (xvalue2 != -404 || yvalue2 != -404)
	{
		xyvalue = xvalue2 * yvalue2;
		sumxy += xyvalue;
		cout << "Enter your X value here again. Enter \"-404\" to stop." << "\n";
		cin >> xvalue2;
		cout << " \n";
		cout << " \n";
		cout << "Enter your Y value here again. Enter \"-404\" to stop." << "\n";
		cin >> yvalue2;
	}
	cout << " \n";
	cout << "Sum of XY = " << sumxy << "\n";
	cout << " \n";
	cout << " \n";
	cout << " \n";

	cout << " \n";
	cout << "-----------------------------------------------------------------------------------" << "\n";
	cout << " \n";

	cout << "Now we need to calculate the sum(x^2)." << endl;
	cout << " \n";

	cout << "Enter your X value here. Enter \"-404\" to stop." << "\n";
	int xvalue3;
	cin >> xvalue3;

	int xsquare;
	int sumxsquare = 0;
	while (xvalue3 != -404)
	{
		xsquare = pow(xvalue3, 2);
		sumxsquare += xsquare;
		cout << "Enter your X value here. Enter \"-404\" to stop." << "\n";
		cin >> xvalue3;
	}
	cout << " \n";
	cout << "Sum of X^2 = " << sumxsquare << "\n";
	cout << " \n";
	cout << " \n";
	cout << " \n";

	cout << " \n";
	cout << "-----------------------------------------------------------------------------------" << "\n";
	cout << " \n";

	cout << "Now we need to calculate the sum(y^2)." << endl;
	cout << " \n";
	cout << " \n";

	cout << "Enter your Y value here. Enter \"-404\" to stop." << "\n";
	int yvalue3;
	cin >> yvalue3;

	int ysquare;
	int sumysquare = 0;
	while (yvalue3 != -404)
	{
		ysquare = pow(yvalue3, 2);
		sumysquare += ysquare;
		cout << "Enter your Y value here. Enter \"-404\" to stop." << "\n";
		cin >> yvalue3;
	}
	cout << " \n";
	cout << "Sum of Y^2 = " << sumysquare << "\n";
	cout << " \n";
	cout << " \n";
	cout << " \n";

	cout << " \n";
	cout << "-----------------------------------------------------------------------------------" << "\n";
	cout << " \n";

	int n;
	cout << "Enter the number of observations here. " << "\n";
	cin >> n;
	double upper_r = (n * sumxy - (sumx * sumy));
	double lower_r_1 = ((n * sumxsquare - pow(sumx, 2))) * (n * sumysquare - pow(sumy, 2));
	double lower_r_2 = pow(lower_r_1, 0.5);
	double r = upper_r / lower_r_2;
	cout << "Pearson's Product moment, r = " << r << endl;
	cout << " \n";
	cout << "Assumption : ";
	
	if (r >= 0.8) {
		cout << "Very strong positive correlation." << endl;
	}
	else if (r >= 0.6) {
		cout << "Strong positive correlation." << endl;
	}
	else if (r >= 0.4) {
		cout << "Medium positive correlation." << endl; 
	}
	else if (r >= 0.2) {
		cout << "Weak positive correlation." << endl;
	}
	else if (r >= 0) {
		cout << "Very weak correlation." << endl; 
	}
	else if (r >= -0.2) {
		cout << "Very weak negative correlation." << endl;
	}
	else if (r >= -0.4) {
		cout << "Weak negative correlation." << endl; 
	}
	else if (r >= -0.6) {
		cout << "Medium negative correlation." << endl; 
	}
	else if (r >= -0.8) {
		cout << "Strong negative correlation." << endl;
	}
	else if (r >= -1.0) {
		cout << "Very strong negative correlation." << endl;
	}
	else {
		cout << "Limit reached." << endl;
	}

	cout << " \n";
	cout << " \n";
	cout << " \n";

	system("pause");
	return 0;
}
