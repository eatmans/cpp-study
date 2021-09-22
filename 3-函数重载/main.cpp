#include <iostream>

using namespace std;

int Point(int a){
	cout << a << endl;
} 

int Point(int a, int b){
	cout << a << " " << b << endl;
} 

int main(int argc, char const *argv[])
{
    cout << "КЏЪ§жиди" << endl;
    Point(1);
    Point(1,2); 
    return 0;
}
