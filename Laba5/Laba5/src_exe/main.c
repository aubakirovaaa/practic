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
			printf("������� ������: \n");
			gets(str);
			printf("����� ������ %d\n", strlen(str));
			break;
		case'2':
			system("cls");
			printf("������� ������: \n");
			gets(str);
			printf("������� ���������: \n");
			gets(substr);
			char* p = find(str, substr);
			if (p == 0) {
				printf("������� ��������� �� �������\n");
			}
			else {
				printf("������� ��������� � ������ '%c', ����� %p\n", *p, p);
			}
			break;
		case'3':
			system("cls");
			printf("������� ������: \n");
			gets(str);
			printf("������� ���������: \n");
			gets(substr);
			delete(str, substr);
			printf("����� ��������: %s '%s'\n", str, substr);
			break;
		case'4':
			system("cls");
			printf("������� ������: \n");
			gets(str);
			printf("������� ���������� ��������: \n");
			scanf_s("%d", &len);
			strcpy(dest, len, str);
			printf("��������� = %s\n", dest);
			break;
		case'5':
			system("cls");
			printf("������� ������: \n");
			gets(str);
			printf("������� ���������: \n");
			gets(substr);
			printf("������� ������ ������: \n");
			scanf_s("%d", &lendest);
			strcat(dest, lendest, str, substr);
			printf("��������� ������������ = %s\n", dest);
			break;
		case '6':
			system("cls");
			printf("������� ������: \n");
			gets(str);
			printf("������� ���������: \n");
			gets(substr);
			printf("������� ������ ������: \n");
			scanf_s("%d", &lendest);
			printf("������� ������: \n");
			scanf_s("%d", &index);
			if (insert(str, substr, index, dest, lendest))
			{
				printf("dest = %s\n", dest);
			}
			else
			{
				printf("ERROR: C���� ���� �������� ������ � ������ ��� ������� ������ ������� ������ ��� ������ ��������� �� ��������� ������\n");
			}
			break;
		case'7':

			exit(0);
		}
		system("pause");
		system("cls");
	} while (1);
}