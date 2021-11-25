#include <iostream>
int main(){
	long long int a[5], n, j = 0;
	std::cin >> n;
	for (int i = 0; i < 5; i++) {
		std::cin >> a[i];
	}
	if (n > 0) {
		for (int i = 0; i < n; i++) {
			for (int i = 0; i < 4; i++) {
				j = a[i];
				a[i] = a[i + 1];
				a[i + 1] = j;
			}
		}
	}
	else {
		n = n * (-1);
		for (int i = n; i > 0; i--) {
			for (int i = 4; i > 0; i--) {
				j = a[i];
				a[i] = a[i - 1];
				a[i - 1] = j;
				std::cout << j << " ";
			}
		}
		std::cout << std::endl;
	}
	for (int i = 0; i < 5; i++) {
		std::cout << a[i] << " ";
	}
}