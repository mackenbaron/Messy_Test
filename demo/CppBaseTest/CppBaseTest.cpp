#include <iostream>
#include "common.hpp"

int main()
{
	int ret = algorithm_::test_algorithm_swap();

	if (ret == 0) fprintf(stderr, "========== test success ==========\n");
	else fprintf(stderr, "########## test fail ##########\n");

	return 0;
}
