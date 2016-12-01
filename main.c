#include <stdio.h>
#include <stdlib.h>

int Fib(int n_el);

int main()
{

    int n_el;
    do{
        printf("Introduce number of elements to show: ");
        scanf("%i", &n_el);
    }while(n_el<1);

    Fib(n_el);

    return 0;
}

int Fib(int n_el) {

    float prev = 0;
    float pen_ul = 0;
    float n = 1;
    int i = 0;

    do {
        pen_ul = prev;
        prev = n;
        n = prev + pen_ul;

        printf("%.0f ", n);

        i++;
    }while(i<n_el);

    if(i==n_el) return 0;
    else return 1;


}
