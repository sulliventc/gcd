//	===================
	#include <iostream>
//	===================	

//	====================
	using namespace std;
//	====================	

//	==================
	int gcd(int, int);
//	==================	

//	===============
//	function main()
//	============
	int main() {
		bool goAgain = true;

//		====		
		do {
			int x;
			int y;
			char input;

			cout << "Enter first number: ";
			cin >> x;
			cout << endl << "Enter second number: ";
			cin >> y;
			cout << endl << "GCD is " << gcd(x, y) << "." << endl;

			cout << "Go again? (y/n)" << endl;
			cin >> input;

//			===================			
			if (input == 'n') {
				goAgain = false;
			} // if
//			=======

		} while (goAgain);
		
		return 0;
		
	} // function main()
//	====================	

//	======================
//	function gcd(int, int)
//	=======================
	int gcd(int x, int y) {
		
		if (y == 0) {
			return x;
		} else {
			return gcd(y, x%y);
		} // if/else
			
	} // function gcd(int, int)
//	===========================