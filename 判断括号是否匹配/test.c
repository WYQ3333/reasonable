#include"reasonable.h"

void test()
{
	Stack s;
	StackInit(&s);
	char c=getchar();
	while (c != EOF)
	{
		if ((c == '{') || (c == '[') || (c == '('))
		{
			StackPush(&s, c);
		}
		else 
		{
			if (((StackTop(&s) == '{') && (c == '}')) || ((StackTop(&s) == '[') && (c == ']')) || ((StackTop(&s) == '(')&&(c == ')')))
			{
				StackPop(&s);
			}
		}
		c = getchar();
	}
	if (StackIsEmpty(&s) == 0)
	{
		printf("¿®∫≈≤ª∆•≈‰\n");
	}
	else
	{
		printf("∆•≈‰\n");
	}
}

int main()
{
	test();
	system("pause");
	return 0;
}