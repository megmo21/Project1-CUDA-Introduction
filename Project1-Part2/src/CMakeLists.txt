set(SOURCE_FILES
    "main.cpp"
    "matrix_math.h"
    "matrix_math.cu"
    )

cuda_add_library(src
    ${SOURCE_FILES}
    OPTIONS -arch=sm_20
    )
