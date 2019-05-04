#define _CRT_SECURE_NO_WARNINGS 1
#include "Queue.h"
void Init(Queue *q){
	q->front = 0;
	q->rear = 0;
}
int Push(Queue *q, int elem){
	if ((q->rear + 1) % MAX == q->front){
		printf("EORRO");
		return 0;
	}
	else{
		q->data[q->rear] = elem;
		q->rear = (q->rear + 1) % MAX;
	}
	return 1;
}
int Pop(Queue *q, int elem){
	if (q->front == q->rear){
		printf("Eorro");
		return 0;
	}
	else{
		elem = q->data[q->front];
		q->front = (q->front +1) % MAX;
	}
	return elem;
}