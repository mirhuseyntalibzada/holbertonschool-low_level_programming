/**
 *
 * swap_int - swaps the values of two variables by eachother
 *
 * Description: by the help pointers this program changes values.
 */

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
