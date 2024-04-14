/* Написать только одну функцию, которая ставит 
 * в начало массива все четные
элементы, а в конец – все нечетные. 
Не нарушайте порядок следования чисел
между собой. Строго согласно прототипу:
void sort_even_odd(int n, int a[]) */

#include <stdio.h>
int Input(int arr[], int n);
void sort_even_odd(int n, int a[]);

int main() {
	enum {SIZE = 20}; // длина массива
	int buffer[SIZE]; // создаём массив buffer длиной SIZE
	Input(buffer, SIZE); 	// вызов функции ввод массива
	sort_even_odd(SIZE, buffer);
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

void sort_even_odd(int n, int a[]) {
	int odd[n];
	int even[n];
	int cntrOdd=0;
	int cntrEven=0;
	for(int i = 0; i < n; ++i) {
		if(a[i] % 2)
			odd[cntrOdd++] = a[i];
		else
			even[cntrEven++] = a[i];
	}
	
	for (int i = 0; i < cntrEven; i++)
		printf("%d ",even[i]); // печать [i] элемента и пробела
	
	for (int i = 0; i < cntrOdd; i++)
		printf("%d ",odd[i]); // печать [i] элемента и пробела
}
