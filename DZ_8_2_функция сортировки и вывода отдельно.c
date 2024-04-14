/* Написать только одну функцию, которая ставит 
 * в начало массива все четные
элементы, а в конец – все нечетные. 
Не нарушайте порядок следования чисел
между собой. Строго согласно прототипу:
void sort_even_odd(int n, int a[]) */

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

