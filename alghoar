#include <stdio.h>

void qs(int* s_arr, int first, int last)
{
    int i = first, j = last, x = s_arr[(first + last) / 2];
    int k;
    do {
        while (s_arr[i] < x) i++;
        while (s_arr[j] > x) j--;

        if(i <= j) {
            if (s_arr[i] > s_arr[j]) {
                    k = s_arr[i];
                    s_arr[i] = s_arr[j];
                    s_arr[j] = k;
            }
            i++;
            j--;
        }
    } while (i <= j);

    if (i < last)
        qs(s_arr, i, last);
    if (first < j)
        qs(s_arr, first, j);
}

int main(){

    int n;
    scanf_s("%d", &n);
    int* mass;
    mass = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
        scanf_s("%d", &mass[i]);
    qs(mass, 0, n-1);
    for (int i = 0; i < n; i++)
        printf("%d ", mass[i]);
    printf("\n");
    return 0;
}
