#include <iostream>

using namespace std;


extern "C" int Point(int a, int b){
	cout << a << " " << b << endl;
} 

int main(int argc, char const *argv[])
{
    cout << "extern C" << endl;
    Point(1,2); 
    return 0;
}
