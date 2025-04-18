cmake_minimum_required(VERSION 3.14)
project(Spicy_HTTP)

# GoogleTest requires at least C++14 (Spicy needs at least C++17)
set(CMAKE_CXX_STANDARD 17)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)

# Get CXXFLAGS from spicy-config
execute_process(
  COMMAND spicy-config --cxxflags
  OUTPUT_VARIABLE SPICY_CXXFLAGS
  OUTPUT_STRIP_TRAILING_WHITESPACE
)
separate_arguments(SPICY_CXXFLAGS)
add_compile_options(${SPICY_CXXFLAGS})

# Get LDFLAGS from spicy-config
execute_process(
  COMMAND spicy-config --ldflags
  OUTPUT_VARIABLE SPICY_LDFLAGS
  OUTPUT_STRIP_TRAILING_WHITESPACE
)
separate_arguments(SPICY_LDFLAGS)

# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)
add_executable(${PROJECT_NAME}-googletest src/spicy_http.cc src/my_http___linker__.cc src/my_http_MyHTTP.cc test/test.cpp)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)
target_link_libraries(${PROJECT_NAME}-googletest gtest_main ${SPICY_LDFLAGS})
add_test(NAME test COMMAND ${PROJECT_NAME}-googletest)
# target_compile_definitions(${PROJECT_NAME}-googletest PRIVATE TEST) # To avoid including main() when testing.
enable_testing()