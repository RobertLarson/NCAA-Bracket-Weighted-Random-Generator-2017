/*
 * ChampionshipGameWinner.h
 *
 *  Created on: Mar 16, 2017
 *      Author: Robert Larson
 */

#ifndef CHAMPIONSHIPGAMEWINNER_H_
#define CHAMPIONSHIPGAMEWINNER_H_

#include "Game.h"

class ChampionshipGameWinner: public Game {
public:
	ChampionshipGameWinner(Game * nextRoundGame);
	virtual ~ChampionshipGameWinner();
	virtual void Play(unsigned long roundId);
	virtual void Display(unsigned int gameId);
};

#endif /* CHAMPIONSHIPGAMEWINNER_H_ */
