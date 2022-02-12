
//Part 2
/////////////////////////////////


//music.cpp

#include <iostream>
#include "song.hpp"

int main() {
	Song electric_relaxation;
	electric_relaxation.add_artist("A Tribe Called Quest");
	std::cout << electric_relaxation.get_artist();
}

//song.hpp

#include <string>

class Song {
	std::string title;
	std::string artist;

public:
	void add_title(std::string new_title);
	std::string get_title();
	void add_artist(std::string new_artist);
	std::string get_artist();
};

//song.cpp

#include "song.hpp"

void Song::add_title(std::string new_title) {
	title = new_title;
}
std::string Song::get_title() {
	return title;
}


void Song::add_artist(std::string new_artist) {
	artist = new_artist;
}
std::string Song::get_artist() {
	return artist;
}