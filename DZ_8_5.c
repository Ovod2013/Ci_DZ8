/* Составить функцию, которая меняет в массиве 
 * минимальный и максимальный
элемент местами. Прототип функции
void change_max_min(int size, int a[])
Данные на входе: Функция принимает на вход размер массива и
массив чисел типа int
Данные на выходе: Функция не возвращает значения, измененный
массив сохраняется на месте исходного. */

#include <stdio.h>
int Input(int arr[], int n);
void Print(int arr[], int len);
int is_two_same(int size, int a[]);
void change_max_min(int size, int a[]);

int main() {
	enum {SIZE = 10}; // длина массива
	int buffer[SIZE]; // создаём массив buffer длиной SIZE
	Input(buffer, SIZE); 	// вызов функции ввод массива
	change_max_min(SIZE, buffer);
	Print(buffer,SIZE);
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

void Print(int arr[], int len) { // печать элементов массива
	for (int i = 0; i < len; i++)
		printf("%d ",arr[i]); // печать [i] элемента и пробела
	printf("\n"); // перевод строки
}

void change_max_min(int size, int a[]) {
	int min=a[0];
	int max=min;
	int i;
	int PosMin=0;
	int PosMax=PosMin;
	for (i = 1; i < size; i++) {
		if (min > a[i]) {
			min = a[i];
			PosMin = i;
		}
		if (max < a[i]) {
			max = a[i];
			PosMax = i; 
		}
	}
	int temp = a[PosMin];
	a[PosMin] = a[PosMax];
	a[PosMax] = temp;
	
	
	
}
