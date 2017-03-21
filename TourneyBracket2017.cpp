/*
 * TourneyBracket2017.cpp
 *
 *  Created on: Mar 17, 2017
 *      Author: Robert Larson
 */

#include "TourneyBracket2017.h"

#include "Round.h"
#include "Game.h"
#include "Team.h"

#include <vector>
#include <utility>
#include <iostream>

TourneyBracket2017::TourneyBracket2017() {
	Round * firstRound = GetRound(0);

	if(firstRound && firstRound->GetNumberOfGames() == 32) {
		std::vector< std::pair<Team*, Team *> > teams = {
			std::make_pair(new Team("Villanova",
						            1, 31, 3,
						            {100.0, 0.0, 0.0, 0.0, 0.0, 0.0}),
						   new Team("Mt. St. Mary's",
								    16, 20, 16,
								    {0.0, 0.0, 0.0, 0.0, 0.0, 0.0})),
			std::make_pair(new Team("Wisconsin",
									8, 25, 9,
									{100.0, 100.0, 34.0, 19.1, 7.0, 2.6}),
						   new Team("Virginia Tech",
								    9, 22, 10,
									{0.0, 0.0, 0.0, 0.0, 0.0, 0.0})),
			std::make_pair(new Team("Virginia",
									5, 22, 10,
									{100.0, 0.0, 0.0, 0.0, 0.0, 0.0}),
						   new Team("UNCW",
									12, 29, 5,
									{0.0, 0.0, 0.0, 0.0, 0.0, 0.0})),
			std::make_pair(new Team("Florida",
									4, 24, 8,
									{100.0, 100.0, 66.0, 46.7, 23.4, 11.9}),
						   new Team("ETSU",
									13, 27, 7,
									{0.0, 0.0, 0.0, 0.0, 0.0, 0.0})),
			std::make_pair(new Team("SMU",
									6, 30, 4,
									{0.0, 0.0, 0.0, 0.0, 0.0, 0.0}),
						   new Team("USC",
									11, 26, 10,
									{100.0, 0.0, 0.0, 0.0, 0.0, 0.0})),
			std::make_pair(new Team("Baylor",
									3, 25, 7,
									{100.0, 100.0, 70.4, 27.9, 11.3, 4.9}),
						   new Team("New Mexico State",
									14, 28, 5,
									{0.0, 0.0, 0.0, 0.0, 0.0, 0.0})),
			std::make_pair(new Team("South Carolina",
									7, 22, 10,
									{100.0, 100.0, 29.6, 6.3, 1.0, 0.2}),
						   new Team("Marquette",
									10, 19, 11,
									{0.0, 0.0, 0.0, 0.0, 0.0, 0.0})),
			std::make_pair(new Team("Duke",
									2, 27, 8,
									{100.0, 0.0, 0.0, 0.0, 0.0, 0.0}),
						   new Team("Troy",
									15, 22, 14,
									{0.0, 0.0, 0.0, 0.0, 0.0, 0.0})),
			std::make_pair(new Team("Gonzaga",
									1, 32, 1,
									{100.0, 100.0, 63.1, 48.3, 31.5, 19.4}),
						   new Team("South Dakota State",
									16, 18, 16,
									{0.0, 0.0, 0.0, 0.0, 0.0, 0.0})),
			std::make_pair(new Team("Northwestern",
									8, 23, 11,
									{100.0, 0.0, 0.0, 0.0, 0.0, 0.0}),
						   new Team("Vanderbilt",
									9, 19, 15,
									{0.0, 0.0, 0.0, 0.0, 0.0, 0.0})),
			std::make_pair(new Team("Notre Dame",
									5, 25, 9,
									{100.0, 0.0, 0.0, 0.0, 0.0, 0.0}),
						   new Team("Princeton",
									12, 23, 6,
									{0.0, 0.0, 0.0, 0.0, 0.0, 0.0})),
			std::make_pair(new Team("West Virginia",
									4, 26, 8,
									{100.0, 100.0, 36.9, 24.8, 12.2, 6.0}),
						   new Team("Bucknell",
									13, 26, 8,
									{0.0, 0.0, 0.0, 0.0, 0.0, 0.0})),
			std::make_pair(new Team("Maryland",
									6, 24, 8,
									{0.0, 0.0, 0.0, 0.0, 0.0, 0.0}),
						   new Team("Xavier",
									11, 21, 13,
									{100.0, 100.0, 28.6, 4.5, 1.3, 0.2})),
			std::make_pair(new Team("Florida State",
									3, 25, 8,
									{100.0, 0.0, 0.0, 0.0, 0.0, 0.0}),
						   new Team("FGCU",
									14, 26, 7,
									{0.0, 0.0, 0.0, 0.0, 0.0, 0.0})),
	        std::make_pair(new Team("St. Mary's",
			    			 	    7, 28, 4,
							        {100.0, 0.0, 0.0, 0.0, 0.0, 0.0}),
				           new Team("VCU",
							        10, 26, 8,
							        {0.0, 0.0, 0.0, 0.0, 0.0, 0.0})),
			std::make_pair(new Team("Arizona",
									2, 30, 4,
									{100.0, 100.0, 71.4, 22.4, 10.7, 4.1}),
						   new Team("North Dakota",
									15, 22, 9,
									{0.0, 0.0, 0.0, 0.0, 0.0, 0.0})),

			std::make_pair(new Team("Kansas",
									1, 28, 4,
									{100.0, 100.0, 56.3, 32.9, 16.2, 8.2}),
						   new Team("UC Davis",
									16, 23, 13,
									{0.0, 0.0, 0.0, 0.0, 0.0, 0.0})),
			std::make_pair(new Team("Miami (FL)",
									8, 21, 11,
									{0.0, 0.0, 0.0, 0.0, 0.0, 0.0}),
						   new Team("Michigan St.",
									9, 19, 14,
									{100.0, 0.0, 0.0, 0.0, 0.0, 0.0})),
			std::make_pair(new Team("Iowa St.",
									5, 23, 10,
									{100.0, 0.0, 0.0, 0.0, 0.0, 0.0}),
						   new Team("Nevada",
									12, 28, 6,
									{0.0, 0.0, 0.0, 0.0, 0.0, 0.0})),
			std::make_pair(new Team("Purdue",
									4, 25, 7,
									{100.0, 100.0, 43.7, 23.8, 10.8, 4.9}),
						   new Team("Vermont",
									13, 29, 5,
									{0.0, 0.0, 0.0, 0.0, 0.0, 0.0})),
			std::make_pair(new Team("Creighton",
									6, 25, 9,
									{0.0, 0.0, 0.0, 0.0, 0.0, 0.0}),
						   new Team("Rhode Island",
									11, 26, 10,
									{100.0, 0.0, 0.0, 0.0, 0.0, 0.0})),
			std::make_pair(new Team("Oregon",
									3, 29, 5,
									{100.0, 100.0, 55.8, 26.2, 13.4, 6.8}),
						   new Team("Iona",
									14, 22, 12,
									{0.0, 0.0, 0.0, 0.0, 0.0, 0.0})),
			std::make_pair(new Team("Michigan",
									7, 24, 11,
									{100.0, 100.0, 44.2, 17.1, 6.6, 2.6}),
						   new Team("Oklahoma St.",
									10, 20, 11,
									{0.0, 0.0, 0.0, 0.0, 0.0, 0.0})),
			std::make_pair(new Team("Louisville",
									2, 24, 8,
									{100.0, 0.0, 0.0, 0.0, 0.0, 0.0}),
						   new Team("Jacksonville St.",
									15, 20, 14,
									{0.0, 0.0, 0.0, 0.0, 0.0, 0.0})),
			std::make_pair(new Team("UNC",
									1, 27, 7,
									{100.0, 100.0, 76.0, 49.1, 28.6, 15.8}),
						   new Team("Texas Southern",
									16, 23, 11,
									{0.0, 0.0, 0.0, 0.0, 0.0, 0.0})),
			std::make_pair(new Team("Arkansas",
									8, 25, 9,
									{100.0, 0.0, 0.0, 0.0, 0.0, 0.0}),
						   new Team("Seton Hall",
									9, 21, 11,
									{0.0, 0.0, 0.0, 0.0, 0.0, 0.0})),
			std::make_pair(new Team("Minnesota",
									5, 24, 9,
									{0.0, 0.0, 0.0, 0.0, 0.0, 0.0}),
						   new Team("Middle Tenn.",
									12, 30, 4,
									{100.0, 0.0, 0.0, 0.0, 0.0, 0.0})),
			std::make_pair(new Team("Butler",
									4, 23, 8,
									{100.0, 100.0, 24.0, 8.2, 2.6, 0.8}),
						   new Team("Winthrop",
									13, 26, 6,
									{0.0, 0.0, 0.0, 0.0, 0.0, 0.0})),
			std::make_pair(new Team("Cincinnati",
									6, 29, 5,
									{100.0, 0.0, 0.0, 0.0, 0.0, 0.0}),
						   new Team("Kansas St.",
									11, 21, 14,
									{0.0, 0.0, 0.0, 0.0, 0.0, 0.0})),
			std::make_pair(new Team("UCLA",
									3, 29, 4,
									{100.0, 100.0, 44.7, 17.8, 9.6, 4.9}),
						   new Team("Kent St.",
									14, 22, 13,
									{0.0, 0.0, 0.0, 0.0, 0.0, 0.0})),
			std::make_pair(new Team("Dayton",
									7, 24, 7,
									{0.0, 0.0, 0.0, 0.0, 0.0, 0.0}),
						   new Team("Wichita St.",
									10, 30, 4,
									{100.0, 0.0, 0.0, 0.0, 0.0, 0.0})),
			std::make_pair(new Team("Kentucky",
									2, 29, 5,
									{100.0, 100.0, 55.3, 24.8, 12.2, 6.0}),
						   new Team("Northern Kentucky",
									15, 24, 10,
									{0.0, 0.0, 0.0, 0.0, 0.0, 0.0})),
		};

		std::vector< std::pair<Team*, Team *> >::iterator teamsIter;

		unsigned long gameId = 0;
		for(teamsIter = teams.begin(); teamsIter != teams.end(); ++teamsIter)
		{
			if(gameId < firstRound->GetNumberOfGames())
			{
				Game * game = firstRound->GetGame(gameId);
				if(game)
				{
					Team * team1 = teamsIter->first;
					Team * team2 = teamsIter->second;

					game->AddTeam(team1);
					game->AddTeam(team2);
				}
				else
				{
					std::cout << "game is null\n";
				}
			}
			gameId++;
		}



	}
	else if(!firstRound) {
		std::cout << "firstRound is NULL\n";
	}
	else if(firstRound->GetNumberOfGames() != 32) {
		std::cout << "unexpected number of games : "
				<< firstRound->GetNumberOfGames() << "\n";
	}
}

TourneyBracket2017::~TourneyBracket2017() {
}

