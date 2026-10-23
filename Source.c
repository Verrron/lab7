#define _CRT_SECURE_NO_DEPRECATE
#include <locale.h>
#include <stdio.h>
#include <math.h>

int task_1();
int task_2();
int task_3();

int main()
{
	//task_1();
	//task_2();
	task_3();
}

int task_1()
{
	setlocale(LC_ALL, "ru_RU.UTF-8");
    char c;
    printf("Введите символ : ");
    scanf(" %c", &c);
    switch (c)
    {
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
            printf("Введенный символ '%c' — это цифра.\n", c);
            break;

    default:
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))

        {
            printf("Введенный символ '%c' — это буква.\n", c);
        }
        else
        {
            printf("Введенный символ '%c' — неизвестный.\n", c);
        }
    }

}

int task_2()
{
    setlocale(LC_ALL, "ru_RU.UTF-8");
    char c;
    float x, y;
    printf("Введите выражение (цифры и между ними символ) состоящее из - x,c,y: ");
    scanf("%f%c%f", &x, &c, &y);
    switch (c)
    {
        case '+':
            printf("%f%c%f = %f\n", x, c, y, x + y);
            break;
        case '-':
            printf("%f%c%f = %f\n", x, c, y, x - y);
            break;
        case '*':
            printf("%f%c%f = %f\n", x, c, y, x * y);
            break;
        case '/':
            printf("%f%c%f = %f\n", x, c, y, x / y);
            break;
        case '^':
            printf("%f%c%f = %f\n", x, c, y, pow(x,y));
            break;

    default:
       
            printf("Неизвестная операция.\n");
    }

}
// вариант 8
int task_3()
{
    setlocale(LC_ALL, "ru_RU.UTF-8");
    int Y;
    printf("Введите любой год XXI века (2001-2100): ");
    scanf("%d", &Y);
    int K = Y % 100;
    int J = Y / 100;
    //формула Целлера
    int h = (1 + 26 + K + K/4 + J/4 + 5*J) % 7;
    switch (h)
    {
    case 0:
        printf("1 сентября %d - суббота.\n", Y);
        break;
    case 1:
        printf("1 сентября %d - воскресенье.\n", Y);
        break;
    case 2:
        printf("1 сентября %d - понедельник.\n", Y);
        break;
    case 3:
        printf("1 сентября %d - вторник.\n", Y);
        break;
    case 4:
        printf("1 сентября %d - среда.\n", Y);
        break;
    case 5:
        printf("1 сентября %d - четверг.\n", Y);
        break;
    case 6:
        printf("1 сентября %d - пятница.\n", Y);
        break;  
    }
}

