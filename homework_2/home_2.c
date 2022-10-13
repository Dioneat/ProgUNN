//// #1
////#include <stdio.h>
////// Отсутствие библиотеки локализации
////#include <locale.h>
////int main() {
////	// Не подключен русский язык
////	setlocale(LC_ALL, "rus");
////
////	int age;
////	// Отсутствие & для указания адреса, использование небезопасного ввода
////	scanf_s("%d", &age);
////	if (age <= 13)
////		// Отсутствие точки с запятой в строке 7
////		printf("%d - детство", age);
////	else if (14 <= age < 25)
////		printf("%f - молодость", age);
////		// Присутствие точки запятой в условном операторе
////	else if (25 <= age && age < 60)
////	printf("%f - зрелость", age);
////	else
////		printf("%d - старость", age);
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
////			printf("все переменные равны");
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
////	printf("Выберете фигуру (1 - король, 2 - ферзь, 3 - ладья, 4 - слон, 5 - конь): ");
////	scanf_s("%d\n", &figure);
////
////	printf("Введите позиции фигуры:");
////	printf("- старт: \n");
////	scanf_s("%c\n", &c1);
////	printf("- финиш: \n");
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
////	printf("Введите ваши оценки: ");
////	scanf_s("%d %d %d", &a, &b, &c);
////
////	if (a + b + c == 15)
////	{
////		printf("Вы отличник");
////	}
////	else if ((a == 2 || b == 2 || c == 2) || (a == -1 || b == -1 || c == -1))
////	{
////		printf("Не сдал");
////	}
////	else if ((a == 3 || b == 3 || c == 3))
////	{
////		printf("Вы троечник");
////	}
////	
////	else
////	{
////		printf("Вы хорошист");
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
//	printf("Введите стороны треугольника: ");
//	scanf_s("%d %d %d", &a, &b, &c);
//
//	if (a == b && a == c)
//	{
//		printf("Треугольник равносторонний");
//	}
//	else if ((a == b || b == c || c == a))
//	{
//		printf("Треугольник равнобедренный");
//	}
//	else if (a <= b + c || b <= a + c || c <= b + c)
//	{
//		printf("Треугольник произвольный");
//	}
//	else if ((a * a == (b*b) + (c * c) || b * b == a * a + c * c || c == a * a + b * b))
//	{
//		printf("Треугольник прямоугольный");
//	}
//	else
//	{
//		printf("Это не треугольник");
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
