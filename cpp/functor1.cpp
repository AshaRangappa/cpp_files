#include <iostream>

using namespace std; 

class myFunctorClass
{
    public:
        myFunctorClass (int x) : _x( x ) {
	cout <<"am here factor " <<_x <<endl;
	}
        int operator() (int y) { 
	cout <<"am here " <<y <<endl;
	return _x + y; }
    private:
        int _x;
};
 
int main()
{
    myFunctorClass addFive( 5 );
//    std::cout << addFive( 6 );
 
    return 0;
}
