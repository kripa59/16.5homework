#include <iostream>

int **Create(size_t n, size_t m) {
	int **M = new int *[n];
	for (size_t i = 0; i < n; ++i) {
		M[i] = new int[m];
	}
	return M;
}

void Free(int **M, size_t n) {
	for (size_t i = 0; i < n; ++i) {
		delete[] M[i];
	}
	delete[] M;
}

void Input(int **M, size_t n, size_t m) {
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			M[i][j] = i + j;
		}
	}
}


void Print(int **M, size_t n, size_t m) {
	for (size_t i = 0; i < n; ++i) {
		for (size_t j = 0; j < m; ++j) {
			std::cout << M[i][j] << ' ';
		}
		std::cout << std::endl;
	}
}

int main() {

	size_t n;

	std::cout << "size of matrix:";
	std::cin >> n;

	int **A = Create(n, n);
	Input(A, n, n);

	Print(A, n, n);

	Free(A, n);

	return 0;
}
