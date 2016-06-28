#ifndef __LQUEUE_H
#define __LQUEUE_H

#define MAX_SIZE	32

#define OK			0
#define ERROR		1

typedef int QElemType;
typedef int status;

typedef struct lqueue_st
{
	QElemType data[MAX_SIZE];
	int front;
	int rear;
}lqueue;

status init_queue(lqueue *q);
int queue_length(lqueue q);
status enqueue(lqueue *q, QElemType e);
status dequeue(lqueue *q, QElemType *e);

#endif

