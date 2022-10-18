main: main.o unindent.o
	g++ -o main main.o unindent.o

tests: tests.o unindent.o
	g++ -o tests tests.o unindent.o


unindent.o: unindent.cpp unindent.h

main.o: main.cpp unindent.h

tests.o: tests.cpp doctest.h unindent.h
	g++ -c -std=c++11 tests.cpp

clean:
	rm -f main.o unindent.o tests.o
