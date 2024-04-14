/* Написать только одну функцию, которая сортирует 
 * массив по возрастанию. Необходимо реализовать 
 * только одну функцию, всю программу составлять не надо. */
#include <stdio.h>
int Input(int arr[], int n);
void Print(int arr[], int len);
void sort_array(int size, int a[]);

int main() {
	enum {BUFFER_SIZE = 20}; // длина массива
	int buffer[BUFFER_SIZE]; // создаём массив длиной BUFFER_SIZE
	Input(buffer, BUFFER_SIZE); 	// вызов функции ввод массива
	sort_array(BUFFER_SIZE, buffer);
	Print(buffer, BUFFER_SIZE); // печать сдвинутого массива
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

void sort_array(int size, int a[]) { //сортировка пузырьком
	int i= 0, j = 0, temp = 0;
	for(i = 0; i < size; ++i) { // проходим все i
		for(j = i; j < size; ++j) { // проходим все i+1
			if(a[i] > a[j]) { //если i больше i+1
				temp = a[i];
				a[i] = a[j]; // меняем их местами
				a[j] = temp;
			}
		}
	}
}	
