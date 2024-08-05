#include<stdio.h>
int main ()
{
  int size;
  printf ("Enter size of array : ");
  scanf ("%d", &size);

  int arr[size], pos, element;
  printf ("Enter %d number : \n", size);
  for (int i = 0; i < size; i++){
      scanf ("%d", &arr[i]);
    }

  printf ("Enter position : ");
  scanf ("%d", &pos);

  printf ("Enter element : ");
  scanf ("%d", &element);

  size++;
  for (int i = size; i >= pos; i--){
      arr[i] = arr[i - 1];
      if (i == pos)	{
	  arr[pos] = element;
      }
    }

  for (int i = 0; i < size; i++){
      printf ("%d ", arr[i]);
    }
  return 0;
}