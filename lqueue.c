#include "lqueue.h"

status init_queue(lqueue *q)
{
	q->front	= 0;
	q->rear	= 0;
	return OK;
}

int queue_length(lqueue q)
{
	return (q.rear - q.front + MAX_SIZE) % MAX_SIZE;
}

status enqueue(lqueue *q, QElemType e)
{
	//full or not
	if((q->rear + 1) % MAX_SIZE == q->front)
		return ERROR;

	q->data[q->rear] = e;
	q->rear = (q->rear + 1) % MAX_SIZE;

	return OK;
}

status dequeue(lqueue *q, QElemType *e)
{
	//empty or not
	if(q->front == q->rear)
		return ERROR;

	*e = q->data[q->front];
	q->front = (q->front + 1) % MAX_SIZE;
	
	return OK;
}

