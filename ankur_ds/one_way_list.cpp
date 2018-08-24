#include<iostream>
// #include<string>

using namespace std;

class node{
public:
	int data;
	node *prev;

	node(int val){
		data = val;
		prev = NULL;
	}
};

class list{
public:
	int pos;
	node *top;

	list(){
		pos = -1;
		top = NULL;
	}

	void push(int val);
	int pop();
	int peek();
	void traverse();
};

void list::push(int val){
	node temp = new node(val);
	if(top == NULL){
		top = temp;
	}
	else{
		temp->prev = top;
		top = temp;
	}
	pos++;
}

int list::pop(){
	if(top == NULL){
		return 0;
	}
	else{
		int val = top->data;
		top = top->prev;
		return val;
		pos--;
	}
}

int list::peek(){
	if(top == NULL){
		return 0;
	}
	else{
		return top->data;
	}
}

void list::traverse(){
	node temp = top;
	while(pos>=0){
		cout<<"\n Val : "<<temp->data;
		temp = temp->prev;
	}
}


