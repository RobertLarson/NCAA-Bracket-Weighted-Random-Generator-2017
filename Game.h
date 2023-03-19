/*
 * Game.h
 *
 *  Created on: Mar 16, 2017
 *      Author: Robert Larson
 */

#ifndef GAME_H_
#define GAME_H_

class Team;

class Game {
 public:
  Game(Game *nextRoundGame);
  virtual ~Game();

  virtual void AddTeam(Team *team);

  virtual void Play(unsigned long roundId);

  virtual void Display(unsigned int gameId);

 protected:
  Game *m_pNextRoundGame;
  Team *m_pTeamOne;
  Team *m_pTeamTwo;
};

#endif /* GAME_H_ */
