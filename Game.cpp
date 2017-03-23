/*
 * Game.cpp
 *
 *  Created on: Mar 16, 2017
 *      Author: Robert Larson
 */

#include "Game.h"

#include "Team.h"

#include <iostream>
#include <cstdlib>
#include <time.h>
#include <cmath>

Game::Game(Game* nextRoundGame)
  : m_pNextRoundGame(nextRoundGame),
    m_pTeamOne(0),
    m_pTeamTwo(0)
{
	srand((unsigned int)time(0));
}

Game::~Game() {
}

void Game::AddTeam(Team * team)
{
	if(m_pTeamOne == 0) {
		m_pTeamOne = team;
	}
	else if(m_pTeamTwo == 0) {
		m_pTeamTwo = team;
	}
	else {
        std::cout << "Teams have already been added.\n";
	}
}

void Game::Play(unsigned long roundId){
	double team1OddsToAdvance = 0.0;
	if(m_pTeamOne != 0) team1OddsToAdvance = m_pTeamOne->GetOddsToMakeRound(roundId);
	else return;
	double team2OddsToAdvance = 0.0;
	if(m_pTeamTwo != 0) team2OddsToAdvance = m_pTeamTwo->GetOddsToMakeRound(roundId);
	else return;

	if(team1OddsToAdvance != 0.0 &&
	   team2OddsToAdvance != 0.0 ) {
		// total will typically be 100 percent if match is known.
        double total = team1OddsToAdvance + team2OddsToAdvance;

        unsigned long totalRounded = (unsigned long)floor(total + 0.5);
        unsigned long team1OddsToAdvanceRounded =
            (unsigned long)floor(team1OddsToAdvance + 0.5);

        if((rand() % totalRounded) <= team1OddsToAdvanceRounded)
        {
    		m_pNextRoundGame->AddTeam(m_pTeamOne);
        }
        else
        {
       		m_pNextRoundGame->AddTeam(m_pTeamTwo);
        }
	}
	else if(team1OddsToAdvance != 0.0 &&
	        team2OddsToAdvance == 0.0)
	{
		m_pNextRoundGame->AddTeam(m_pTeamOne);
	}
	else if(team1OddsToAdvance == 0.0 &&
	        team2OddsToAdvance != 0.0)
	{
		m_pNextRoundGame->AddTeam(m_pTeamTwo);
	}
	else
	{
		std::cout << "odds are both 0s\n";
	}
}

void Game::Display(unsigned int gameId)
{
    std::cout << "Game " << gameId << " : ";
	if(m_pTeamOne != 0) {
		m_pTeamOne->Display();
	}
	std::cout << " vs. ";
	if(m_pTeamTwo != 0) {
		m_pTeamTwo->Display();
	}
    std::cout << "\n";
}

