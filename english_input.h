#ifndef ENGLISH_INPUT_H
#define ENGLISH_INPUT_H

#include <iostream>
#include <istream>

namespace english{
	std::istream& in = std::cin;
}

#define reading english::in =
#define read english::in <<

#endif
