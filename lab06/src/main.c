int main()
{
        const int size = 8;
        int arr[size];
        int fib1 = 0, fib2 = 1, fib=0, n, i;
        fib = 1;
        for (i = 1; i <= size; i++)
        {
        fib = fib2 + fib1;
        fib2 = fib1;
        fib1 = fib;
        arr[i] = fib;
        }
        return 0;
}
