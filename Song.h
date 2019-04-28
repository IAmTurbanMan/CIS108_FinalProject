#pragma once
#include <iostream>
#include <string>


namespace metadata
{

	struct Song
	{
		char title [64];
		char artist [32];
		char album [64];
		int track;
		int releaseYear;
		enum genre
		{
			Unknown = 0,
			Blues,
			Country,
			Electronic,
			Folk,
			HipHop,
			Jazz,
			Latin,
			Pop,
			Rock
		} genre;
	};
}