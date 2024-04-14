/* Написать только одну функцию, 
 * которая находит максимальный элемент в
массиве. Всю программу загружать не надо.
Прототип функции: 
int find_max_array(int size, int a[]) */

#include <stdio.h>
int Input(int arr[], int n);
void find_max_array(int size, int a[]);

int main() {
	enum {SIZE = 99}; // длина массива
	int buffer[SIZE]; // создаём массив buffer длиной SIZE
	Input(buffer, SIZE); 	// вызов функции ввод массива
	find_max_array(SIZE, buffer);
	return 0; // выход
}

int Input(int arr[], int n) { // ввод элементов массива пользователем
	int i;
	printf("Vvedite %d", n); // печать приглашения ввести элементы
	printf(" elementov massiva cherez probel\n");
		for(i = 0; i < n; i++)
			scanf("%d",&arr[i]); // ввод элементов
		return arr[i];
}

void find_max_array(int size, int a[]) {
	int max=a[0];
	for (int i=1; i<size; i++) {
		if (max < a[i])
			max=a[i];
	}
	printf("%d", max);
}
