#include <iostream>
//implantación recursiva del número combinatorio
int numero_combinatorio(int n, int k) {
	if (n == k || k == 0) {
		return 1;
	}
	n -= 1;
	return numero_combinatorio(n,k-1)+numero_combinatorio(n,k);
}
int main()
{
	std::cout << numero_combinatorio(20,2) << std::endl;
	return 0;
}
