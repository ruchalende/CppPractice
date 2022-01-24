//displaying a linked list in reverse order

#include<iostream>

using namespace std;

class linked_list{
	int data;
	linked_list* next;
	
	public:
		linked_list* create(int);
		linked_list* insert(linked_list*);
		void reverse(linked_list *);
		void display(linked_list *);
};

linked_list* linked_list::create(int key){
	linked_list* newnode;
	newnode=new linked_list;
	newnode->data=key;
	newnode->next=NULL;
	return newnode;
}

linked_list* linked_list::insert(linked_list* head){
	int z;
	cout<<"\ndata: ";
	cin>>z;
	linked_list *ptr, *newnode;
	newnode=create(z);
	if(head==NULL){
		head=newnode;
	}
	else{
		while(ptr->next!=NULL){
			ptr=ptr->next;
		}
		ptr->next=newnode;
	}
}

void linked_list::display(linked_list* newnode){
	if(newnode==NULL){
		cout<<"\nlinked list is empty";
	}
	else{
		linked_list* head=newnode;
		cout<<"\nlinked list is:\n";
		while(newnode!=NULL){
			cout<<newnode->data<<" ---> ";
			newnode=newnode->next;
		}
		cout<<endl;
	}
}

void linked_list::reverse(linked_list* newnode){
	linked_list *prevnode, *currnode;
	cout<<"\nreversed linked list is:\n";
	if(newnode!=NULL){
		prevnode=newnode;
		currnode=prevnode->next;
		newnode=newnode->next;
		prevnode->next=NULL;
	}
	while(newnode!=NULL){
		newnode=newnode->next;
		currnode->next=prevnode;
		prevnode=currnode;
		currnode=newnode;
	}
	newnode=prevnode;
	while(newnode!=NULL){
			cout<<newnode->data<<" <--- ";
			newnode=newnode->next;
		}
		cout<<endl;
}

int main(){
	linked_list l;
	int i, key, z, n;
	linked_list* head=NULL;
	cout<<"enter number of data: ";
	cin>>n;
	
	cout<<"\nenter first element: ";
	cin>>key;
	head=l.create(key);
	
	for(i=0; i<n-1; i++){
		l.insert(head);
	}
	l.display(head);
	l.reverse(head);
//	l.display(head);
	return 0;
}
