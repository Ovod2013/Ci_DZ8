/* Написать только одну логическую функцию, 
 * которая определяет, верно ли, что
среди элементов массива есть два одинаковых. 
Если ответ «да», функция
возвращает 1; если ответ «нет», то 0. 
Строго согласно прототипу:
int is_two_same(int size, int a[]); */

#include <stdio.h>
int Input(int arr[], int n);
int is_two_same(int size, int a[]);

int main() {
	enum {SIZE = 100}; // длина массива
	int buffer[SIZE]; // создаём массив buffer длиной SIZE
	Input(buffer, SIZE); 	// вызов функции ввод массива
	printf(is_two_same(SIZE, buffer) == 1 ? "YES" : "NO");
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

int is_two_same(int size, int a[]) {
	for(int i = 0; i < size; i++)
		for(int j = i + 1; j < size; j++)
			if (a[i] == a[j])
				return 1;
	return 0;
}
