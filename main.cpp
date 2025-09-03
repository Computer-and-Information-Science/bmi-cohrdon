#include <iostream>
using namespace std;

int main() {
 int height = 61; 
 int weight =130;

double  kg = weight * .453592;
double m = height * 0.0254;
double BMI = kg / (m * m); 

cout << "the BMI for this person is:  = " << BMI << endl;
}
