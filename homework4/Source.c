#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h> 
#include <locale.h> 

void option16(); 

int main() { 
    SetConsoleCP(1251); 
    SetConsoleOutputCP(1251); 
    setlocale(LC_ALL, "RUS"); 
    option16(); 
} 

void option16() { 
    int A, B, C; 
    printf("Введите три параметра кислотности (A, B, C): "); 
    scanf("%d %d %d", &A, &B, &C); 
    
    if (A % 3 == 0 && B % 3 == 0 && C % 3 == 0) { 
        printf("Лунка идеальная для посадки.\n"); 
    } else { 
        printf("Лунка не идеальная.\n"); 
    } 
}
