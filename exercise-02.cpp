#include <iostream>
using namespace std;
struct List{
	char info;
	List* next;
};
typedef List* pointer;
typedef pointer Stack;
void createStack(Stack& Top){
	Top=NULL;
}
void createElmt(pointer& pBaru){
	pBaru=new List;
	cout<<"Masukan Info : "; cin>>pBaru->info;
	pBaru->next=NULL;
}
void Pop(Stack& Top, pointer& pHapus){ 
	if (Top==NULL){ 
		cout<<"Stack kosong "<<endl; 
		pHapus=NULL; 
	} 
	else if (Top->next==NULL){ 
		pHapus=Top; 
		Top=NULL; 
	} 
	else { 
		pHapus=Top; 
		Top=Top->next; 
		pHapus->next=NULL; 
	} 
}

void push(Stack& Top, pointer pBaru){ 
	if (Top==NULL) 
		Top=pBaru; 
		
	else { 
		pBaru->next=Top; 
		Top=pBaru; 
	} 
}
void traversal(Stack Top){
	pointer pBantu;
	if(Top==NULL){
		cout<<"Stack was Empty"<<endl;
	}
	else{
		pBantu=Top;
		do{
			cout<<pBantu->info<<" ";
			pBantu=pBantu->next;
		}
		while(pBantu != NULL);
	}
}
/*
void tukar(Stack Top, pointer a, pointer b){
	char temp= b->info;
	b->info=a->info;
	a->info=temp;
}
void reverse(Stack Top, int& n){
	pointer pBantu;
	if(Top==NULL){
		cout<<"Stack was Empty"<<endl;
	}
	else{
		for(int i=0; i<n; i++){
			for(int j=n-1; j>0; j--){
				tukar()
			}
		}
	}
}
*/
main(){
	Stack S;
	int n;
	pointer p, h;
	createStack(S);
	cout<<"Masukan banyak data : "; cin>>n;
	for(int i=0; i<n; i++){
		createElmt(p);
		push(S, p);
	}
	for(int i=0; i<n; i++){
		Pop(S, h);
		cout<<h->info<<" ";
	}
	
	//traversal(S);
}
