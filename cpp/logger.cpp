#include<iostream>
#include<stdio.h>
FILE *fo;
using namespace std;

/*this program writes log file using sington design pattern*/

class singleton{
private:
	static singleton *instance;
	singleton(){
	}
	//singleton(const singleton &s);
	//singleton& operator=(const singleton &s); 
public:
	static singleton* getInstance(){
		if(instance == NULL){
			instance = new singleton;}
		return instance;
	}
	void logfile(){
	fo=fopen("asha","a+");
	fprintf(fo,"%s","correct log file");
	cout <<"correct log file" <<endl;
	}
};

singleton* singleton::instance=NULL;
int main(){
singleton *obj1=obj1->getInstance();
singleton *obj2=obj2->getInstance();
obj1->logfile();
obj2->logfile();
cout <<obj1 <<" " <<obj2 <<endl;	
fclose(fo);
}
