/*
 * ChampionshipGameWinner.cpp
 *
 *  Created on: Mar 16, 2017
 *      Author: Robert Larson
 */

#include "ChampionshipGameWinner.h"

#include <iostream>

#include "Team.h"

ChampionshipGameWinner::ChampionshipGameWinner(Game *nextRoundGame)
    : Game(nextRoundGame) {}

ChampionshipGameWinner::~ChampionshipGameWinner() {}

void ChampionshipGameWinner::Play(unsigned long) { Display(0); }

void ChampionshipGameWinner::Display(unsigned int) {
  std::cout << "Winner : ";

  if (m_pTeamOne) m_pTeamOne->Display();
}
