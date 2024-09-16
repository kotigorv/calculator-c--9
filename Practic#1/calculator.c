#include <stdio.h>
#include <math.h>

int main() {
	float a, b, x;

	printf("Enter a, b, x:");
	int ret = scanf("%f, %f, %f", &a, &b, &x);

	if (ret < 3) {
		printf("Error input\n");
		return -1;
	}

	float y = pow(x, a * 2) - b / tan(1 - exp((a + x) / b));
	printf("Result: %.3f\n", y);
	return 0;
}