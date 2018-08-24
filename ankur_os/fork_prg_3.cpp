#include<iostream>
#include<unistd.h>

using namespace std;

int main(){
	int pid = 100;

	cout<<"\n LINE 1";
	cout<<"\n PID  "<<pid;

	pid = fork();
	cout<<"\n\t LINE 2";
	cout<<"\n\t PID  "<<pid;

	pid = fork();
	cout<<"\n\t\t LINE 3";
	cout<<"\n\t\t PID  "<<pid;

	cout<<endl;
}
