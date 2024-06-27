#include <stdio.h>
#define MAX 10
void fnTopological(int a[MAX][MAX], int n);
int main(void) {
    int n = 6;
    int a[MAX][MAX] = {
        {0, 1, 1, 0, 0, 0},
        {0, 0, 0, 1, 1, 0},
        {0, 0, 0, 0, 1, 0},
        {0, 0, 0, 0, 0, 1},
        {0, 0, 0, 0, 0, 1},
        {0, 0, 0, 0, 0, 0}
    };
    printf("Topological Sorting Algorithm -\n");
    fnTopological(a, n);
    printf("\n");
    return 0;
}
void fnTopological(int a[MAX][MAX], int n) {
    int in[MAX] = {0};
    int out[MAX];
    int stack[MAX];
    int top = -1;
    int i, j, k = 0;

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (a[j][i] != 0) {
                in[i]++;
            }
        }
    }

    while (1) {
        for (i = 0; i < n; i++) {
            if (in[i] == 0) {
                stack[++top] = i;
                in[i] = -1;
                }
                }
                if (top == -1)
            break;

        out[k] = stack[top--];
        for (i = 0; i < n; i++) {
            if (a[out[k]][i] != 0) {
                in[i]--;
            }
            }
            k++;
            }
            printf("Topological Sorting (JOB SEQUENCE) is:- \n");
            for (i = 0; i < k; i++) {
                    printf("%d ", out[i]);
            }
            printf("\n");
            }
