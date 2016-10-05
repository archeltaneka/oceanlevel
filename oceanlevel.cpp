#include <iostream>
using namespace std;

int main(){
	
	// declare variables of ocean level and increment each year
	float levelRising =	1.5;
	float oceanLevel = 0.0;
	int years;
	
	// increment of 1.5 each year on ocean level and print out
	for(years = 1; years <= 25; years++)
	{
		oceanLevel = oceanLevel + levelRising;
		cout << years << " year(s)" << " ocean level: " << oceanLevel << endl;
	}
	
}

//test fork
