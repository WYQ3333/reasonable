#pragma once

#include<stdio.h>
#include<Windows.h>

#define MAXSIZE 100
typedef char KeyType;

typedef struct Stack
{
	KeyType array[MAXSIZE];
	int top;
	int size;
}Stack, *pStack;

void StackInit(pStack ps);//��ʼ��ջ
void StackPush(pStack ps, KeyType data);//��ջ
void StackPop(pStack ps);//��ջ
int StackIsEmpty(pStack ps);//�ж��Ƿ�ջΪ��
KeyType StackTop(pStack ps);//����ջ��Ԫ��
int StackSize(pStack ps);//ջ��Ԫ��
void StackPrint(pStack ps);//��ӡջ