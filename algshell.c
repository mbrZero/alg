#include <stdio.h>
void ShellSort(int n, int mass[])
{
    int i, j, step;
    int tmp;
    for (step = n / 2; step > 0; step /= 2)
        for (i = step; i < n; i++)
        {
            tmp = mass[i];
            for (j = i; j >= step; j -= step)
            {
                if (tmp < mass[j - step])
                    mass[j] = mass[j - step];
                else
                    break;
            }
            mass[j] = tmp;
        }
}

int main()
{
    int N;
    scanf_s("%d", &N);
    int* mass;
    mass = (int *)malloc(N * sizeof(int));
    for (int i = 0; i < N; i++)
        scanf_s("%d", &mass[i]);
    ShellSort(N, mass);
    for (int i = 0; i < N; i++)
        printf("%d ", mass[i]);
    printf("\n");
    return 0;
}
