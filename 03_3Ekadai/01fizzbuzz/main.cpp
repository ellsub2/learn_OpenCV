#include <iostream>

using namespace std;

int main(){
	for( int count=1; count <= 30; count++){
		if(count%3 == 0 && count%5 == 0)
			cout << "count: " << count << "Fizz Buzz" << endl;
		else if(count%3 == 0)
			cout << "count: " << count << "Fizz" << endl;
		else if(count%5 == 0)
			cout << "count: " << count << "Buzz" << endl;
		else
			cout << "count: " << count << endl;
	}

	return 0;
}
