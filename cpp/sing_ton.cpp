#include <iostream>

class Singleton
{
    private:
        static Singleton* instance;
        Singleton(){
	}

    public:
        static Singleton* getInstance();
};

Singleton* Singleton::instance = 0;

Singleton* Singleton::getInstance()
{
    if (instance == 0)
    {
        instance = new Singleton();
    }

    return instance;
}

int main()
{
    Singleton* one = Singleton::getInstance(); 
    Singleton* two = Singleton::getInstance();

    if(one == two)
    std::cout<<"Both pointers hold same object " <<one <<" " <<two <<std::endl;
    else
    std::cout<<"They don't hold same object";
    
    return 0;
}
