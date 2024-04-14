/* Составить функцию, которая меняет в массиве 
 * минимальный и максимальный
элемент местами. Прототип функции
void change_max_min(int size, int a[])*/


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
