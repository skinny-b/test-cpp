all: test_exec

test_exec: main.cpp
	g++ -o test_exec main.cpp

clean:
	rm -f test_exec
