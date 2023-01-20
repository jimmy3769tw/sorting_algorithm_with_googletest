all: test.exe
test.exe: test.cc bubble_sort.h insert_sort.h quick_sort.h selection_sort.h
	g++ $< -std=c++17 -lgtest  -o $@

run: test.exe
	./text.exe

clean:
	rm -r *.o
	rm -f *.exe