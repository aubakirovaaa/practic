#include "func.h"
#include "stdio.h"
#include "locale.h"

void main(void)
{
	setlocale(LC_ALL, "Rus");
	const char str[20];
	const char substr[20];
	char dest[] = "";
	int len;
	int lendest;
	int index;

	do
	{
		printf("press to select:\n1 - strlen\n2 - find\n3 - delete\n4 - strcpy\n5 - strcat\n6 - insert\n7 - exit\n");
		switch (_getch())
		{
		case'1':
			system("cls");
			printf("Введите строку: \n");
			gets(str);
			printf("Длина строки %d\n", strlen(str));
			break;
		case'2':
			system("cls");
			printf("Введите строку: \n");
			gets(str);
			printf("Введите подстроку: \n");
			gets(substr);
			char* p = find(str, substr);
			if (p == 0) {
				printf("Позиция подстроки не найдена\n");
			}
			else {
				printf("Позиция подстроки в строке '%c', адрес %p\n", *p, p);
			}
			break;
		case'3':
			system("cls");
			printf("Введите строку: \n");
			gets(str);
			printf("Введите подстроку: \n");
			gets(substr);
			delete(str, substr);
			printf("После удаления: %s '%s'\n", str, substr);
			break;
		case'4':
			system("cls");
			printf("Введите строку: \n");
			gets(str);
			printf("Введите количество символов: \n");
			scanf_s("%d", &len);
			strcpy(dest, len, str);
			printf("Результат = %s\n", dest);
			break;
		case'5':
			system("cls");
			printf("Введите строку: \n");
			gets(str);
			printf("Введите подстроку: \n");
			gets(substr);
			printf("Введите размер буфера: \n");
			scanf_s("%d", &lendest);
			strcat(dest, lendest, str, substr);
			printf("Результат конкатенации = %s\n", dest);
			break;
		case '6':
			system("cls");
			printf("Введите строку: \n");
			gets(str);
			printf("Введите подстроку: \n");
			gets(substr);
			printf("Введите размер буфера: \n");
			scanf_s("%d", &lendest);
			printf("Введите индекс: \n");
			scanf_s("%d", &index);
			if (insert(str, substr, index, dest, lendest))
			{
				printf("dest = %s\n", dest);
			}
			else
			{
				printf("ERROR: Cумма длин исходной строки и строки для вставки больше размера буфера или индекс находился за пределами строки\n");
			}
			break;
		case'7':

			exit(0);
		}
		system("pause");
		system("cls");
	} while (1);
}