#define _CRT_SECURE_NO_WARNINGS 1
#include "Queue.h"
int main(){
	Queue q;
	int data = 0;
	int output = 0;
	scanf("%d", &data);
	Init(&q);
	Push(&q, data);
	int result = Pop(&q, output);
	printf("%d", result);
	system("pause");
	return 0;
}