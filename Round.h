/*
 * Round.h
 *
 *  Created on: Mar 16, 2017
 *      Author: Robert Larson
 */

#ifndef ROUND_H_
#define ROUND_H_

#include <string>
#include <vector>
class Game;

class Round {
public:
  Round(std::string name, unsigned long roundId);
  virtual ~Round();

  void AddGame(Game *game);

  Game *GetGame(unsigned long gameId);

  unsigned long GetNumberOfGames();

  void Play();

  void Display();

private:
  std::string m_name;
  unsigned long m_roundId;
  std::vector<Game *> m_games;
};

#endif /* ROUND_H_ */
