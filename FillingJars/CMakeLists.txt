project (FillingJars)
cmake_minimum_required (VERSION 2.6)

add_executable ( ${PROJECT_NAME} main.cpp )

add_executable ( bigint bigint-4-0-src/main.cpp )
target_link_libraries( bigint bigint-4-0-src/bigInt.cpp )
