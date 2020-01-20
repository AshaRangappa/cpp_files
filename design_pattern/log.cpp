#include<iostream>
#include<string.h>
#include<string>
using namespace std;
FILE *fo;
class singleton{
private:
	static singleton* instance;
	singleton(){
	fo=fopen("log.txt","w+");
	};
public:
	static singleton* getinstace(){
		if(instance==NULL)
			instance=new singleton();
		return instance;
	}
	void writelog(std::string text){
		cout <<"In log file" <<endl;
//		fo=fopen("log.txt","w+");
		fputs(text.c_str(),fo);
		
	}
};
singleton* singleton::instance=NULL;

int main(){
singleton *s1=singleton::getinstace();
s1->writelog("Asha ia a gud gal \n");
singleton *s2=singleton::getinstace();
s2->writelog("chweet heart");
}
