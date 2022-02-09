//Part 1///////////////
///////////////////////////////////////////////////

//music.cpp
#include <iostream>
#include "song.hpp"

int main() {
	Song electric_relaxation;
	electric_relaxation.add_title("electric relaxation");
	std::cout << electric_relaxation.get_title();
}


//song.hpp
#include <string>

class Song {
	std::string title;
public:
	void add_title(std::string new_title);
	std::string get_title();
};


//song.cpp
#include "song.hpp"

void Song::add_title(std::string new_title) {
	title = new_title;
}
std::string Song::get_title() {
	return title;
}