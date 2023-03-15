/*
 * TourneyBracket2023.cpp
 *
 *  Created on: Mar 17, 2023
 *      Author: Robert Larson
 */

#include "TourneyBracket2023.h"

#include "Round.h"
#include "Game.h"
#include "Team.h"

#include <vector>
#include <utility>
#include <iostream>

TourneyBracket2023::TourneyBracket2023() {
	Round * firstRound = GetRound(0);

	if(firstRound && firstRound->GetNumberOfGames() == 32) {

//		std::vector< std::pair<Team*, Team *> > teams = {
		std::pair<Team*, Team *> teams[32] =
		{	std::make_pair(new Team("Alabama",
						            1, 29, 5,
						            98.8, 79.7, 65.9, 49.9, 32.7, 17.5),
						   new Team("Texas A&M CC/SE Missouri St.",
								    16, 0, 0,
								    1.2, 0.0, 0.0, 0.0, 0.0, 0.0)),
			std::make_pair(new Team("Maryland",
									8, 21, 12,
									51.0, 10.5, 6.0, 2.8, 0.9, 0.2),
						   new Team("West Virginia",
								    9, 19, 14,
									49.0, 9.7, 5.4, 2.5, 0.8, 0.2)),
			std::make_pair(new Team("San Diego St.",
									5, 27, 6,
									65.5, 34.4, 7.9, 3.1, 1.0, 0.2),
						   new Team("Charleston",
									12, 31, 3,
									34.5, 13.7, 2.0, 0.6, 0.1, 0.0)),
			std::make_pair(new Team("Virginia",
									4, 25, 7,
									78.4, 46.3, 12.2, 5.5, 1.8, 0.4),
						   new Team("Furman",
									13, 27, 7,
									21.6, 5.7, 0.5, 0.1, 0.0, 0.0)),
			std::make_pair(new Team("Creighton",
									6, 21, 12,
									73.9, 40.8, 23.8, 9.0, 3.8, 1.2),
						   new Team("NC State",
									11, 23, 10,
									26.1, 8.4, 3.2, 0.7, 0.2, 0.0)),
			std::make_pair(new Team("Baylor",
									3, 22, 10,
									90.4, 49.6, 28.4, 10.5, 4.7, 1.5),
						   new Team("UC Santa Barbara",
									14, 27, 7,
									9.6, 1.2, 0.1, 0.0, 0.0, 0.0)),
			std::make_pair(new Team("Missouri",
									7, 24, 9,
									39.1, 10.0, 2.9, 0.6, 0.1, 0.0),
						   new Team("Utah St.",
									10, 26, 8,
									60.9, 20.8, 6.4, 1.4, 0.3, 0.1)),
			std::make_pair(new Team("Arizona",
									2, 28, 6,
									91.2, 67.4, 34.8, 13.2, 5.9, 2.0),
						   new Team("Princeton",
									15, 21, 8,
									8.8, 1.9, 0.2, 0.0, 0.0, 0.0)),

			std::make_pair(new Team("Purdue",
									1, 29, 5,
									98.8, 72.9, 31.7, 21.7, 10.4, 4.0),
						   new Team("Texas Southern/FDU",
									16, 0, 0,
									1.2, 0.0, 0.0, 0.0, 0.0, 0.0)),
			std::make_pair(new Team("Memphis",
									8, 26, 8,
									57.2, 17.0, 4.3, 2.0, 0.6, 0.2),
						   new Team("Florida Atlantic",
									9, 31, 3,
									42.8, 10.1, 2.2, 0.9, 0.2, 0.0)),
			std::make_pair(new Team("Duke",
									5, 26, 8,
									79.8, 20.8, 8.8, 4.8, 1.6, 0.4),
						   new Team("Oral Roberts",
									12, 30, 4,
									20.2, 2.1, 0.3, 0.1, 0.0, 0.0)),
			std::make_pair(new Team("Tennessee",
									4, 23, 10,
									94.6, 76.0, 52.5, 41.7, 25.5, 13.2),
						   new Team("Louisiana",
									13, 26, 7,
									5.4, 1.1, 0.1, 0.0, 0.0, 0.0)),
			std::make_pair(new Team("Kentucky",
									6, 21, 11,
									62.7, 41.8, 23.3, 7.5, 2.6, 0.7),
						   new Team("Providence",
									11, 21, 11,
									37.3, 18.6, 8.3, 2.0, 0.5, 0.1)),
			std::make_pair(new Team("Kansas St.",
									3, 23, 9,
									83.9, 37.2, 17.2, 4.1, 1.2, 0.3),
						   new Team("Montana St.",
									14, 25, 9,
									16.1, 2.4, 0.4, 0.0, 0.0, 0.0)),
	        std::make_pair(new Team("Michigan St.",
			    			 	    7, 19, 12,
							        59.6, 25.2, 11.4, 2.7, 0.7, 0.1),
				           new Team("USC",
							        10, 22, 10,
							        40.4, 13.2, 4.6, 0.8, 0.2, 0.0)),
			std::make_pair(new Team("Marquette",
									2, 28, 6,
									85.4, 57.7, 33.9, 11.5, 4.1, 1.2),
						   new Team("Vermont",
									15, 23, 10,
									14.6, 4.0, 0.9, 0.1, 0.0, 0.0)),

			std::make_pair(new Team("Houston",
									1, 31, 3,
									97.9, 84.7, 74.3, 58.1, 44.2, 31.6),
						   new Team("Northern Kentucky",
									16, 22, 12,
									2.1, 0.2, 0.0, 0.0, 0.0, 0.0)),
			std::make_pair(new Team("Iowa",
									8, 19, 13,
									42.5, 5.6, 2.9, 1.1, 0.3, 0.1),
						   new Team("Auburn",
									9, 20, 12,
									57.5, 9.4, 5.1, 2.0, 0.7, 0.2)),
			std::make_pair(new Team("Miami",
									5, 25, 7,
									55.8, 24.5, 3.6, 1.1, 0.3, 0.1),
						   new Team("Drake",
									12, 27, 7,
									44.2, 16.5, 2.3, 0.7, 0.2, 0.0)),
			std::make_pair(new Team("Indiana",
									4, 22, 11,
									72.2, 47.3, 10.6, 4.6, 1.7, 0.5),
						   new Team("Kent St.",
									13, 28, 6,
									27.8, 11.7, 1.2, 0.3, 0.0, 0.0)),
			std::make_pair(new Team("Iowa St.",
									6, 19, 13,
									62.2, 31.0, 11.9, 3.0, 1.0, 0.3),
						   new Team("Mississippi St./Pitt",
									11, 0, 0,
									37.8, 14.4, 3.7, 0.6, 0.1, 0.0)),
			std::make_pair(new Team("Xavier",
									3, 25, 9,
									88.7, 52.9, 20.5, 5.3, 1.9, 0.6),
						   new Team("Kennesaw St.",
									14, 26, 8,
									11.3, 1.7, 0.1, 0.0, 0.0, 0.0)),
			std::make_pair(new Team("Texas A&M",
									7, 25, 9,
									66.3, 22.4, 11.9, 3.1, 1.2, 0.4),
						   new Team("Penn St.",
									10, 22, 13,
									33.7, 8.7, 3.3, 0.6, 0.1, 0.0)),
			std::make_pair(new Team("Texas",
									2, 26, 8,
									91.7, 67.2, 48.1, 19.6, 11.3, 5.9),
						   new Team("Colgate",
									15, 20, 14,
									8.3, 1.7, 0.3, 0.0, 0.0, 0.0)),

			std::make_pair(new Team("Kansas",
									1, 27, 7,
									97.2, 60.1, 32.0, 13.0, 4.2, 1.7),
						   new Team("Howard",
									16, 22, 12,
									2.8, 0.1, 0.0, 0.0, 0.0, 0.0)),
			std::make_pair(new Team("Arkansas",
									8, 22, 13,
									57.4, 24.6, 11.2, 3.7, 1.0, 0.4),
						   new Team("Illinois",
									9, 20, 12,
									42.6, 15.2, 5.7, 1.5, 0.3, 0.1)),
			std::make_pair(new Team("Saint Mary's",
									5, 26, 7,
									65.1, 24.5, 11.8, 4.1, 1.0, 3.0),
						   new Team("VCU",
									12, 27, 7,
									34.9, 8.4, 2.2, 0.4, 0.1, 0.0)),
			std::make_pair(new Team("UConn",
									4, 25, 8,
									80.8, 59.3, 35.1, 17.3, 6.7, 3.0),
						   new Team("Iona",
									13, 27, 7,
									19.2, 7.8, 2.0, 0.4, 0.1, 0.0)),
			std::make_pair(new Team("TCU",
									6, 21, 12,
									69.0, 26.7, 7.5, 2.9, 0.7, 0.2),
						   new Team("Arizona St./Nevada",
									11, 0, 0,
									30.9, 7.1, 1.2, 0.2, 0.0, 0.0)),
			std::make_pair(new Team("Gonzaga",
									3, 28, 5,
									89.7, 62.8, 27.6, 15.8, 5.5, 2.2),
						   new Team("Grand Canyon",
									14, 24, 11,
									10.3, 3.3, 0.4, 0.1, 0.0, 0.0)),
			std::make_pair(new Team("Northwestern",
									7, 21, 11,
									48.5, 8.7, 2.8, 0.8, 0.1, 0.0),
						   new Team("Boise St.",
									10, 24, 9,
									51.5, 9.7, 3.3, 1.0, 0.2, 0.0)),
			std::make_pair(new Team("UCLA",
									2, 29, 5,
									96.9, 81.1, 57.2, 38.7, 17.0, 8.7),
						   new Team("UNC Asheville",
									15, 27, 7,
									3.1, 0.5, 0.0, 0.0, 0.0, 0.0)),
		};

		std::vector< std::pair<Team*, Team *> >::iterator teamsIter;

		unsigned long gameId = 0;
		while(gameId < firstRound->GetNumberOfGames())
		//for(teamsIter = teams.begin(); teamsIter != teams.end(); ++teamsIter)
		{
			if(gameId < firstRound->GetNumberOfGames())
			{
				Game * game = firstRound->GetGame(gameId);
				if(game)
				{
					//Team * team1 = teamsIter->first;
					//Team * team2 = teamsIter->second;
					Team * team1 = teams[gameId].first;
					Team * team2 = teams[gameId].second;

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

TourneyBracket2023::~TourneyBracket2023() {
}

