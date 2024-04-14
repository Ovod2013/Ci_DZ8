/* Написать только одну функцию, 
 * которая находит максимальный элемент в
массиве. Всю программу загружать не надо.
Прототип функции: 
int find_max_array(int size, int a[]) */


void find_max_array(int size, int a[]) {
	int max=a[0];
	for (int i=1; i<size; i++) {
		if (max < a[i])
			max=a[i];
	}
	printf("%d", max);
}
