#include <iostream>
using namespace std;
const int maxElement= 255;
struct Stack{
	char isi[maxElement];
	int TOP;
};
Stack S;
void createStack(Stack& S){
	S.TOP=-1;
}
void createElmt(char& elemenBaru){
	cout<<"Input your number : "; cin>>elemenBaru;
}
void push(Stack& S, char& elemenBaru){
	if(S.TOP==maxElement-1){
		cout<<"Stack is full"<<endl;
	}
	else{
		S.TOP=S.TOP+1;
		S.isi[S.TOP]=elemenBaru;
	}
}
void pop(Stack& S, char& elemenHsl){
	if(S.TOP<0){
		cout<<"Stack was Empty"<<endl;
	}
	else{
		elemenHsl=S.isi[S.TOP];
		S.TOP=S.TOP-1;
	}
}
void traversal(Stack S, int& n){
	if(S.TOP==-1){
		cout<<"Stack was empty"<<endl;
	}
	else{
		for(int i=0; i<n; i++){
			cout<<S.isi[i]<<" ";
		}
	}
}
main(){
	int n;
	char c, h;
	
	cout<<"input how many data you want : "; cin>>n;
	createStack(S);
	for(int i=0; i<n; i++){
		cout<<"Masukan char : "; cin>>c;
		push(S, c);
	}
	//traversal(S, n);
	for(int i=0; i<n; i++){
		pop(S, h);
		cout<<h<<" ";
	}
}
