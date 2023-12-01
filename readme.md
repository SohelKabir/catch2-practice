## single file
g++ -std=c++11 -o test_runner  tests/my_tests.cpp -I . 

## multi File 

g++ -std=c++11 -o test_runner tests/test_main.cpp tests/my_tests.cpp -I . 

