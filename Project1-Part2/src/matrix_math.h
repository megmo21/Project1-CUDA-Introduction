#pragma once

#include <stdio.h>
#include <thrust/random.h>
#include <cuda.h>
#include <cmath>

namespace MatMath {
	void initSimulation(int N);
	void mat_add(float * A, float * B, float * C);
	void mat_sub(float * A, float * B, float * C);
	void mat_mul(float * A, float * B, float * C);

	void testFunc(int test);
}