//
//  main.c
//  Task6
//
//  Created by Pavel iPro on 28.12.2023.
//

/* Задача 1
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
 */

/* Задача 2

#include <stdio.h>
void print_ab(int a, int b)
{
    if (a == b) 
    {
        printf("%d", a);
    } 
    else
    {
        (a < b) ? printf("%d ", a++) : printf("%d ", a--);
        print_ab(a, b);
    }
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    print_ab(a, b);
    printf("\n");
    return 0;
}
*/

/* Задача 3 */

#include <stdio.h>
int sumBinDigits(int n)
{
    if (n / 2 == 0)
        return n % 2;
    return n % 2 + sumBinDigits(n / 2);
}

int main()
{
int n;
    scanf("%d", &n);
    printf("%d\n", sumBinDigits(n));
    printf("\n");
    return 0;
}


