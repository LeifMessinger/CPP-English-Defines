CXX = g++
#Literally doesn't work with std=c++11 or greater. WTF
CXXFLAGS = -Wall -Wextra -std=gnu++17
DEPS = english_boilerplate.h english_functions.h english_input.h english_logic.h english_output.h english_flavor.h english_io.h english_numbers.h english_types.h

#I gotta compile my own damn header because it throws an error when reading #define equals =
#Typically it works with -std=gnu++17, but it probably uses the standard c++17 when compiling headers
english_compiled.h: english.h compiler.out $(DEPS)
	cat english.h $(DEPS) | ./compiler.out > $@

compiler.out: compiler.cpp
	$(CXX) $(CXXFLAGS) -g $< -o $@

test.out: test.cpp
	g++ -g $< -o $@

test: test.out
	./test.out
