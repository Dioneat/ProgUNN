//// #1
////#include <stdio.h>
////// ���������� ���������� �����������
////#include <locale.h>
////int main() {
////	// �� ��������� ������� ����
////	setlocale(LC_ALL, "rus");
////
////	int age;
////	// ���������� & ��� �������� ������, ������������� ������������� �����
////	scanf_s("%d", &age);
////	if (age <= 13)
////		// ���������� ����� � ������� � ������ 7
////		printf("%d - �������", age);
////	else if (14 <= age < 25)
////		printf("%f - ���������", age);
////		// ����������� ����� ������� � �������� ���������
////	else if (25 <= age && age < 60)
////	printf("%f - ��������", age);
////	else
////		printf("%d - ��������", age);
////	return 0;
////}
//
////
////#include <stdio.h>
////#include <locale.h>
////#include <math.h>
////
////void main()
////{
////	setlocale(LC_ALL, "rus");
////	int x, y, z;
////	scanf_s("%d", &x);
////	scanf_s("%d", &y);
////	scanf_s("%d", &z);
////
////	if (x != y && y != z)
////	{
////		if (x > y && x > z)
////		{
////			z += x;
////		}
////		else if (y > x && y > z)
////		{
////			z += y;
////		}
////		else
////		{
////			z = pow(z, 2);
////		}
////		printf("%d", z);
////	}
////	else
////	{
////		if (x == y && y == z && z == x)
////		{
////			printf("��� ���������� �����");
////
////		}
////		else
////		{
////			if (x == y)
////			{
////				printf("x = y");
////			}
////			else if (x == z)
////			{
////				printf("x = z");
////			}
////			else if (y == z)
////			{
////				printf("y = z");
////			}
////		}
////	}
////
////}
//
////#include <stdio.h>
////#include <locale.h>
////#include <math.h>
////
////void main()
////{
////	setlocale(LC_ALL, "rus");
////	int figure, x1, y1, x2, y2;
////	char c1, c2;
////	printf("�������� ������ (1 - ������, 2 - �����, 3 - �����, 4 - ����, 5 - ����): ");
////	scanf_s("%d\n", &figure);
////
////	printf("������� ������� ������:");
////	printf("- �����: \n");
////	scanf_s("%c\n", &c1);
////	printf("- �����: \n");
////	scanf_s("%c", &c2);
////	
////	x1 = (int)c1 - 96;
////	x2 = (int)c2 - 96;
////	switch (figure)
////	{
////	case 1:
////		break;
////	case 2:
////		break;
////	case 3:
////		break;
////	case 4:
////		break;
////	case 5:
////		break;
////	default:
////		break;
////	}
//
//
////#include <stdio.h>
////#include <locale.h>
////
////void main()
////{
////	setlocale(LC_ALL, "rus");
////	int a, b, c;
////
////	printf("������� ���� ������: ");
////	scanf_s("%d %d %d", &a, &b, &c);
////
////	if (a + b + c == 15)
////	{
////		printf("�� ��������");
////	}
////	else if ((a == 2 || b == 2 || c == 2) || (a == -1 || b == -1 || c == -1))
////	{
////		printf("�� ����");
////	}
////	else if ((a == 3 || b == 3 || c == 3))
////	{
////		printf("�� ��������");
////	}
////	
////	else
////	{
////		printf("�� ��������");
////	}
////	
////
////}
//
//
//#include <stdio.h>
//#include <locale.h>
//
//void main()
//{
//	setlocale(LC_ALL, "rus");
//	int a, b, c;
//
//	printf("������� ������� ������������: ");
//	scanf_s("%d %d %d", &a, &b, &c);
//
//	if (a == b && a == c)
//	{
//		printf("����������� ��������������");
//	}
//	else if ((a == b || b == c || c == a))
//	{
//		printf("����������� ��������������");
//	}
//	else if (a <= b + c || b <= a + c || c <= b + c)
//	{
//		printf("����������� ������������");
//	}
//	else if ((a * a == (b*b) + (c * c) || b * b == a * a + c * c || c == a * a + b * b))
//	{
//		printf("����������� �������������");
//	}
//	else
//	{
//		printf("��� �� �����������");
//	}
//
//
//}


void main() {
	int a;
	double d, rem;
	a = 3;
	d = 8.32;
	rem = d - (int)(d / a) * a;
}
