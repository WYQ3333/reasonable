#include"reasonable.h"

void StackInit(pStack ps)//初始化栈
{
	ps->size = 0;
	ps->top = 0;
}
void StackPush(pStack ps, KeyType data)//入栈
{
	if (StackSize(ps) < MAXSIZE)
	{
		ps->array[ps->top] = data;
		ps->size++;
		ps->top++;
	}
}
void StackPop(pStack ps)//出栈
{
	ps->size--;
	ps->top--;
}
int StackIsEmpty(pStack ps)//判断是否栈为空
{
	return ps->size == 0 ? 1 : 0;//是空返回1，否则返回0；
}
KeyType StackTop(pStack ps)//返回栈顶元素
{
	return ps->array[ps->top - 1];
}
int StackSize(pStack ps)//栈中元素
{
	return ps->size;
}
void StackPrint(pStack ps)//打印栈
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->array[i]);
	}
}