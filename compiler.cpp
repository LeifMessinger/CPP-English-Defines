//So I gotta compile my own damn headers because no header compiler wants to have #define equal =

#include <iostream>
#include <ostream>
#include <istream>
#include <fstream>
#include <set>
#include <regex>

void pruneComments(std::string& str){
	//I'd have to work to do /* */ comments, so I just won't use them in this project anywhere.
	//The line below also sucks because that implies I'd have to check for quotation marks, which I won't do lol
	size_t commentStartIndex = str.find("//");
	if(commentStartIndex == std::string::npos) return;
	try{
		str = str.substr(commentStartIndex, str.length()-commentStartIndex);
	}catch(const std::exception& ex){
		std::cerr << "Prune comments failed. commentStartIndex: " << commentStartIndex << " stringLength: " << str.length() << std::endl;
		throw commentStartIndex;
	}
}

int main(int argc, char* argv[]){
	std::ifstream inputFile;
	std::istream& in = ((argc == 2) ? inputFile : std::cin);
	if(argc < 2){
		std::cerr << "Reading from stdin" << std::endl;
	}else if(argc > 2){
		std::cerr << "Idk how to compile more than one file." << std::endl;
		return 2;
	}else{ //There is exactly 2 args (this program's name and the first argument)
		//argv 1 is the second arg, which is the first arg. EZ
		inputFile.open(argv[1], std::ifstream::in);
	}

	std::string line;
	while(getline(in, line)){ //For every line
		pruneComments(line);
		//If it finds an include line
		if(line.find("#include\"") != std::string::npos || line.find("#include \"") != std::string::npos) continue;
		std::cout << line << std::endl;	//Just prune the comments cause I'm lazy
	}

	inputFile.close();

	return 0;
}
