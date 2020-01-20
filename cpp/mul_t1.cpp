#include <thread>
#include <iostream>

class bar {
public:
void foo() {
    std::cout << "hello from member function" << std::endl;
  }
};

int main()
{
bar *b=new bar();
 std::thread t(&bar::foo, b);
  t.join();
}
