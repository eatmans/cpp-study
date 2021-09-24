#include <iostream>

using namespace std;


inline int Point(int a, int b){
	cout << a << " " << b << endl;
} 

int main(int argc, char const *argv[])
{
    cout << "inline funcation" << endl;
    Point(1,2); 
    return 0;
}
