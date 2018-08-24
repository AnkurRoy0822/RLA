#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<iostream>

using namespace std;

int main(){
	int pid = 100;
        pid = fork();
	if(pid==0){
		cout<<"\n Child Process ";
		cout<<"\n PID No. : "<<pid<<endl;
	}
	else if(pid <0){
		cout<<"\n Error";
		cout<<" PID No. : "<<pid<<endl;
	}else{
		cout<<"\n Hello, I am parent process";
		cout<<"\n PID No. : "<<pid<<endl;
	}

}	
