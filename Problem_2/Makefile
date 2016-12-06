#File to make linked list object oriented C++ practice project
COMPILER=g++
CPPFILE=templatePractice.cpp
MAINFILE=main.cpp
HEADERFILE=templatePractice.h

debug: $(MAINFILE) $(CPPFILE) $(HEADERFILE)
	$(COMPILER) -g -Wall $(MAINFILE) $(CPPFILE) -o debug

production: $(MAINFILE) $(CPPFILE) $(HEADERFILE)
	$(COMPILER) -O3 $(MAINFILE) $(CPPFILE) -o final

clean:
	rm debug
	rm final
