#File to make linked list object oriented C++ practice project
COMPILER=g++
CPPFILE=linked.cpp
MAINFILE=main.cpp
HEADERFILE=linked.h

debug: $(MAINFILE) $(CPPFILE) $(HEADERFILE)
	$(COMPILER) -g -Wall $(MAINFILE) $(CPPFILE) -o debug

production: $(MAINFILE) $(CPPFILE) $(HEADERFILE)
	$(COMPILER) -O3 $(MAINFILE) $(CPPFILE)-o final

clean:
	rm debug
	rm final
