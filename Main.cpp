#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include "Song.h"
#include "MusicDB.h"

using namespace std;
using namespace metadata;

const string fileName = "MusicDatabase.txt";

int main()
{	
	programLoad(fileName);									//call function at program start to add load txt file into databse

	Song aSong;												//initialize Song structure, called aSong

	menu();

	while (true)
	{
		cout << "\n" << "enter selection: ";
		string selection;
		cin >> selection;
		transform(selection.begin(), selection.end(), selection.begin(), ::tolower);

		cout << "\n";
		cin.ignore();

		if (selection == "add")
		{
			addSong();
			cout << "\n";
			cout << "Song added to the database. Don't forget to save!";
			cout << "\n";
		}

		if (selection == "save")
		{
			saveSong(aSong, fileName);
			cout << "Database saved.\n";
		}

		if (selection == "list")
		{
			listSong();
		}

		if (selection == "sort")
		{
			cout << "How do you want to sort? title/artist/year: ";
			string sortBy;
			cin >> sortBy;
			transform(sortBy.begin(), sortBy.end(), sortBy.begin(), ::tolower);

			if (sortBy == "year")
			{
				sortYear();
				listSong();
			}

			if (sortBy == "artist")
			{
				sortArtist();
				listSong();
			}

			if (sortBy == "title")
			{
				sortTitle();
				listSong();
			}
		}

		if (selection == "import")
		{
			importSong();
		}

		if (selection == "play")
		{
			playSong();
		}

		if (selection == "help")
		{
			menu();
		}

		if (selection == "clear")
		{
			cout << "Are you sure you want to clear the database? Y/N: ";
			string yesOrNo;
			cin >> yesOrNo;
			transform(yesOrNo.begin(), yesOrNo.end(), yesOrNo.begin(), ::tolower);

			if (yesOrNo == "y")
			{
				clearSong(fileName);
				cout << "Database cleared.\n";
			}

			else if (yesOrNo == "n")
			{
				continue;
			}
		}

		if (selection == "x" || selection == "exit")
		{
			break;
		}
	}
}

