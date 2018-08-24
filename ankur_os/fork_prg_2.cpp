#include<iostream>
#include<stdlib.h>
#include<stdio.h>

using namespace std;

int main(){
	cout<<"\nKernel Version ";
	cout<<"\n";
	system(" cat /proc/sys/kernel/osrelease");

	cout<<"\nCPU space ";
	cout<<"\n";
	system(" cat /proc/cpuinfo |awk 'NR==3,NR==4{print}'");

	cout<<"\nCPU active period ";
	cout<<"\n";
	system(" cat /proc/uptime");

	cout<<"\nConfigured Memory";
	cout<<"\n";
	system(" cat /proc/meminfo |awk 'NR==1{print $2}'");

	cout<<"\nFree Memory";
	cout<<"\n";
	system(" cat /proc/meminfo |awk 'NR==2{print $2}'");

	cout<<"\nUsed Memory";
	cout<<"\n";
	system(" cat /proc/meminfo |awk '{if (NR==1) a=$2;if(NR==2) b=$2}END\
		{print a-b}'");

}
