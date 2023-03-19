/*
 * ChampionshipGameWinner.cpp
 *
 *  Created on: Mar 16, 2017
 *      Author: Robert Larson
 */

#include "ChampionshipGameWinner.h"

#include "Team.h"

#include <iostream>

#define UNUSED(value) ((value) = (value))

ChampionshipGameWinner::ChampionshipGameWinner(Game *nextRoundGame)
    : Game(nextRoundGame) {}

ChampionshipGameWinner::~ChampionshipGameWinner() {}

void ChampionshipGameWinner::Play(unsigned long roundId) {
  UNUSED(roundId); // exception to unused variable compiler warning/error.
  Display(0);
}

void ChampionshipGameWinner::Display(unsigned int gameId) {
  UNUSED(gameId); // exception to unused variable compiler warning/error.

  std::cout << "Winner : ";

  if (m_pTeamOne)
    m_pTeamOne->Display();
}
