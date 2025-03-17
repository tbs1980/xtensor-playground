add_executable(initialisations initialisations.cpp)
target_link_libraries(initialisations xtensor xtensor::optimize xtensor::use_xsimd)
