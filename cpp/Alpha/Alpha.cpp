// Recursive program
#include <iostream>

void myFunction(int myNumbers[5])

{
	using namespace std;
	
	for (int i = 0; i < 5; i++) 
	{
		cout << myNumbers[i] << "\n";
	}
}

int main()
{
	int myNumbers[5] = { 10, 20, 30, 40, 50 };
	myFunction(myNumbers);
	return 0;
}
