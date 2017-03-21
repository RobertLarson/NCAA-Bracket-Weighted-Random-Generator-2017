/*
 * Round.cpp
 *
 *  Created on: Mar 16, 2017
 *      Author: Robert Larson
 */

#include "Round.h"

#include "Game.h"

#include <iostream>

Round::Round(std::string name, unsigned long roundId)
: m_name(name),
  m_roundId(roundId) {
}

Round::~Round() {
}

void Round::AddGame(Game * game)
{
	m_games.push_back(game);
}

Game * Round::GetGame(unsigned long gameId)
{
   if(gameId < m_games.size())
   {
	   return m_games.at(gameId);
   }

   std::cout << "Round::GetGame() : gameId " << gameId << " not found\n";
   return 0;
}

unsigned long  Round::GetNumberOfGames()
{
	return m_games.size();
}

void Round::Play()
{
    std::vector<Game*>::iterator gamesIter;

    for(gamesIter = m_games.begin(); gamesIter != m_games.end(); ++gamesIter)
    {
    	Game * game = *gamesIter;

    	game->Play(m_roundId);
    }
}

void Round::Display() {
	std::cout << "Round : " << m_name << "\n";

	for(unsigned int gameId = 0; gameId < m_games.size(); gameId++) {
       Game * game = m_games.at(gameId);
       game->Display(gameId + 1);
	}

	std::cout << "\n";
}
