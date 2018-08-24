//Factorial - Recursion

#include<iostream>

using namespsace std;

void fact(int val){
	if(val > 1){
		val = fact(val - 1)*val;
	}
	else{
		return val;
	}
}

void fab(int pos,int fir_var = 0,int sec_var = 1){
	int third_var = fir_var + sec_var;
	if(pos > 0){
		cout<<"\n "<<third;
		fab(pos-1,sec_var,third_var);
	}
	else{
		break;
	}
}