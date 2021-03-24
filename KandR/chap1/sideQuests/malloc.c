#include <stdio.h>
#include <stdlib.h>

typedef struct list_node{
	void* data;
	struct list_node* next;
}list_node;

void* next_widget();
int more_widgets();
list_node* insert(void* d, list_node* L);
list_node* reverse(list_node* L);
void delete_list(list_node* L);
#define MAX 10
int main(){
	list_node* L=0;
	void* t = 0;
	int i=0;
	while(more_widgets() && i<MAX){
		L= insert(next_widget(),L);
		i++;
	}
	//Case 1
	L = reverse(L);

	//Case 2
/*	list_node* T = reverse(L);
	delete_list(L);
	L=T;*/

	return 0;
}

list_node* insert(void* d, list_node* L){
	list_node* t = (list_node*) malloc(sizeof(list_node));
	t->data = d;
	t->next = L;
	return t;
}
list_node* reverse(list_node* L){
	list_node* ret = 0;
	while(L){
		ret = insert(L->data, ret);
		L = L->next;
	}
	return ret;
}
void delete_list(list_node* L){
	while(L){
	list_node* t = L;
	L = L->next;
	free(t->data);
	free(t);
	}
}

int more_widgets(){
	return 1;
}
void* next_widget(){
	void* t=20;
	return t;
}
