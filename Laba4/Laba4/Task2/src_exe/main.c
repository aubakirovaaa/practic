#include <f.h>

void main(void)
{
	do
	{
		printf("Press to select task:\n1 - Task2\n2 - EXIT");
		switch (_getch())
		{
		case '1':
			system("cls");
			sortStackArray();
			break;
		case '2':
			exit(0);
		} system("pause");
	} while (1);
}