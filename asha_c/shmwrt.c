#include <sys/ipc.h> 
#include <iostream>
#include <sys/shm.h> 
#include <stdio.h> 
using namespace std; 
  
int main() 
{ 
    // ftok to generate unique key 
    key_t key = ftok("shmfile2",5); 
	printf("key %d\n",key);  
    // shmget returns an identifier in shmid 
    int shmid = shmget(key,100,IPC_CREAT|0655); 
  
    // shmat to attach to shared memory 
    char *str = (char*) shmat(shmid,(void*)0,0); 
  
    cout<<"Write Data : "; 
    gets(str); 
  
    printf("Data written in memory: %s\n",str); 
      
    //detach from shared memory  
    shmdt(str); 
  
    return 0; 
} 
