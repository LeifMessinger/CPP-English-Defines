#ifndef ENGLISH_OUTPUT_H
#define ENGLISH_OUTPUT_H

#include <iostream>
#include <ostream>

namespace english{
	std::ostream& out = std::cout;
}

#define writing english::out =
#define write english::out <<
#define print write

#define endline << std::endl;
#define newline << std::endl;


#endif
