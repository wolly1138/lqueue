#include <stdio.h>

#include "lqueue.h"

lqueue LoopQ;

int main(int argc, char** argv)
{
	int i;
	int data;
	int stat;

	//初始化循环队列
	stat = init_queue(&LoopQ);
	
	if(stat != OK)
			return stat;

	for(i=0; i<24; i++)
	{
		stat = enqueue(&LoopQ, i);
		
		if(stat != OK)
			return stat;
	}
	printf("There are %d elements in Queue.\n",queue_length(LoopQ));

	for(i=0; i<16; i++)
	{
		stat = dequeue(&LoopQ, &data);

		if(stat != OK)
			return stat;

		printf("NO.%d data = %d\n", i, data);
	}
	printf("There are %d elements in Queue.\n",queue_length(LoopQ));

	for(i=0; i<8; i++)
	{
		stat = enqueue(&LoopQ, i);
		
		if(stat != OK)
			return stat;
	}
	printf("There are %d elements in Queue.\n",queue_length(LoopQ));
	
	for(i=0; i<16; i++)
	{
		stat = dequeue(&LoopQ, &data);

		if(stat != OK)
			return stat;

		printf("NO.%d data = %d\n", i, data);
	}
	printf("There are %d elements in Queue.\n",queue_length(LoopQ));

	return OK;
}

