#include <stdio.h>
#include <stdlib.h>

void swap(int *array, int left, int right) {
    int temp = array[left];
    array[left] = array[right];
    array[right] = temp;
}

void fun1(int *array, int left, int right) {
    if (left < right) {
        swap(array, left, right);
        fun1(array, left + 1, right - 1);
    }
}

int main() {
    int student_number[15];
    int i = 0, k;
    printf("Please enter your student number then press the button.");

    while (1) {
        int read_num = getchar();

        if (read_num == '\n') break;

        putchar(read_num);
        student_number[i] = (int)(read_num - '0');
        i++;
    }

    fun1(student_number, 0, i - 1);

    printf("\nThe Array After Fun 1 \n");

    for (k = 0; k < i; k++) {
        printf("%d", student_number[k]);
    }

    getchar();
    return 0;
}
