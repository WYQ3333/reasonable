#include"reasonable.h"

void StackInit(pStack ps)//��ʼ��ջ
{
	ps->size = 0;
	ps->top = 0;
}
void StackPush(pStack ps, KeyType data)//��ջ
{
	if (StackSize(ps) < MAXSIZE)
	{
		ps->array[ps->top] = data;
		ps->size++;
		ps->top++;
	}
}
void StackPop(pStack ps)//��ջ
{
	ps->size--;
	ps->top--;
}
int StackIsEmpty(pStack ps)//�ж��Ƿ�ջΪ��
{
	return ps->size == 0 ? 1 : 0;//�ǿշ���1�����򷵻�0��
}
KeyType StackTop(pStack ps)//����ջ��Ԫ��
{
	return ps->array[ps->top - 1];
}
int StackSize(pStack ps)//ջ��Ԫ��
{
	return ps->size;
}
void StackPrint(pStack ps)//��ӡջ
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->array[i]);
	}
}