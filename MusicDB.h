#pragma once
#include <iostream>
#include <string>
#include "Song.h"

using namespace std;

void programLoad(string fileName);

void addSong();

void saveSong(metadata::Song& s, string fileName);

void listSong();

void clearSong(string fileName);

void sortYear();

void sortArtist();

void sortTitle();

void importSong();

void playSong();
//void findSong();

//bool songSearch(metadata::Song& search, string s);

void menu();
