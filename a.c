#include<stdio.h>
#include<stdlib.h>

typedef struct listNode {
	int Val;
	struct listNode* Next;
} listNode;

void hello(listNode* ptr){
	listNode node={100,NULL};
	ptr->Next = &node;
}

/*void hello2(){
	listNode node={200,NULL};
}*/

int main(){
	listNode* ptr = (listNode*)malloc(sizeof(listNode));
	hello(ptr);
//	hello2();
	printf("%d",ptr->Next->Val);
	return 0;
}
