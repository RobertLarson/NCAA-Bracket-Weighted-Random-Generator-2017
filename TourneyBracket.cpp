/*
 * TourneyBracket.cpp
 *
 *  Created on: Mar 16, 2017
 *      Author: Robert Larson
 */

#include "TourneyBracket.h"

#include <cmath>
#include <iostream>

#include "ChampionshipGameWinner.h"
#include "Round.h"

TourneyBracket::TourneyBracket() {
  m_rounds.push_back(new Round("Round of 64", 0));
  m_rounds.push_back(new Round("Round of 32", 1));
  m_rounds.push_back(new Round("Sweet 16", 2));
  m_rounds.push_back(new Round("Elite 8", 3));
  m_rounds.push_back(new Round("Final Four", 4));
  m_rounds.push_back(new Round("Championship Round", 5));
  m_rounds.push_back(new Round("Championship Winner", 6));

  Round *championshipWinner = m_rounds.at(m_rounds.size() - 1);
  Game * gameWinner         = new ChampionshipGameWinner(0);

  championshipWinner->AddGame(gameWinner);

  long startRound = m_rounds.size() - 2;

  for (long roundId = startRound; roundId >= 0; roundId--) {
    for (unsigned long gameId = 0;
         gameId <
         (unsigned long)pow(2.0, (double)(m_rounds.size() - roundId - 2));
         gameId++) {
      Round *       nextRound     = m_rounds.at(roundId + 1);
      unsigned long nextGameId    = (unsigned long)floor((double)gameId / 2.0);
      Game *        nextRoundGame = nextRound->GetGame(nextGameId);
      Game *        currentGame   = new Game(nextRoundGame);
      Round *       currentRound  = m_rounds.at(roundId);

      currentRound->AddGame(currentGame);
    }
  }
}

TourneyBracket::~TourneyBracket() {}

Round *TourneyBracket::GetRound(unsigned int roundNumber) {
  Round *round = 0;

  if (roundNumber < m_rounds.size()) {
    round = m_rounds.at(roundNumber);
  }
  return round;
}

unsigned long int TourneyBracket::GetNumberOfRounds() {
  return m_rounds.size();
}

void TourneyBracket::PlayRoundOf64() {
  Round *round = GetRound(0);
  if (round != 0) {
    round->Play();
  }
}

void TourneyBracket::PlayRoundOf32() {
  Round *round = GetRound(1);
  if (round != 0) {
    round->Play();
  }
}

void TourneyBracket::PlaySweet16() {
  Round *round = GetRound(2);
  if (round != 0) {
    round->Play();
  }
}

void TourneyBracket::PlayElite8() {
  Round *round = GetRound(3);
  if (round != 0) {
    round->Play();
  }
}

void TourneyBracket::PlayFinalFour() {
  Round *round = GetRound(4);
  if (round != 0) {
    round->Play();
  }
}

void TourneyBracket::PlayChampionship() {
  Round *round = GetRound(5);
  if (round != 0) {
    round->Play();
  }
}

void TourneyBracket::Display() {
  std::vector<Round *>::iterator roundsIter;

  for (roundsIter = m_rounds.begin(); roundsIter != m_rounds.end();
       ++roundsIter) {
    Round *round = *roundsIter;
    round->Display();
  }
}
