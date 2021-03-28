CXX = clang++
CXXFLAGS = -Wall -std=c++11

main: main.o Item.o Market.o
	$(CXX) -o $@ $^

execs = main a.out

clean:
	rm -f $(execs) *.o