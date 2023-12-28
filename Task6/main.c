//
//  main.c
//  Task6
//
//  Created by Pavel iPro on 28.12.2023.
//

/* Задача 1 */
#include <stdio.h>

void print_num(int n)
{
    if (n >= 10)
        print_num(n / 10);
    printf("%d ", n % 10);
}

int main()
{
    int n;
    scanf("%d", &n);
    print_num(n);
    printf("\n");
    return 0;
}
