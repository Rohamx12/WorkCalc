#include <iostream>

using namespace std;

int main()
{
	int hoursWorked, hourlyRate, exhoursWorked;
	double sum{}, exsum;
	cout << "How many hours did you work this week?(from 0 to 40) \n";
	cin >> hoursWorked;
	cout << "How much do you get paid for an hour? \n";
	cin >> hourlyRate;
	sum = (hoursWorked * hourlyRate);

	if (hoursWorked >= 40)
	{
		cout << "how much more did you work this week? \n";
		cin >> exhoursWorked;
		exsum = (hourlyRate * 1.5);
		exsum = (exhoursWorked * exsum);
		sum = (exsum + sum);
	}
	
	cout << "You're expected to receive " << sum << " for this week\n";

	return 0;
}
