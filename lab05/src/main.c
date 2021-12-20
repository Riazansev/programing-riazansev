int main()
{
	int n = 8;
	int x = 8;
	for (int d = 1; d < x; d++) {
		n = n * (x - d);
	}
	n = n * 10;
	return 0;
}
