#ifndef _QUEUE_H_
#define _QUEUE_H_

#include <stdio.h>
#include <windows.h>
#define MAX 100

typedef struct{
	int data[MAX];
	int front;
	int rear;
}Queue;

void Init(Queue *q);
int Push(Queue *q, int elem);
int Pop(Queue *q, int elem);

#endif