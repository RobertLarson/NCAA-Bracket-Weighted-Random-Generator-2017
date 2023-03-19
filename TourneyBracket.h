/*
 * TourneyBracket.h
 *
 *  Created on: Mar 16, 2017
 *      Author: Robert Larson
 */

#ifndef TOURNEYBRACKET_H_
#define TOURNEYBRACKET_H_

#include <vector>

class Round;

class TourneyBracket {
 public:
  typedef std::vector<Round *> Rounds;

  TourneyBracket();
  virtual ~TourneyBracket();

  void PlayRoundOf64();
  void PlayRoundOf32();
  void PlaySweet16();
  void PlayElite8();
  void PlayFinalFour();
  void PlayChampionship();

  void Display();

 protected:
  Round *           GetRound(unsigned int roundNumber);
  unsigned long int GetNumberOfRounds();

 private:
  Rounds m_rounds;
};

#endif /* TOURNEYBRACKET_H_ */
