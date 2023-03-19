/*
 * Team.h
 *
 *  Created on: Mar 17, 2017
 *      Author: Robert Larson
 */

#ifndef TEAM_H_
#define TEAM_H_

#include <string>
#include <vector>

class Team {
 public:
  Team(std::string name, unsigned int seed, unsigned int wins,
       unsigned int losses, double oddsToMakeNextRound1,
       double oddsToMakeNextRound2, double oddsToMakeNextRound3,
       double oddsToMakeNextRound4, double oddsToMakeNextRound5,
       double oddsToMakeNextRound6);
  virtual ~Team();

  const std::string & GetName() { return m_name; }
  const unsigned int &GetSeed() { return m_seed; }
  const unsigned int &GetWins() { return m_wins; }
  const unsigned int &GetLosses() { return m_losses; }
  double              GetOddsToMakeRound(unsigned long round);
  void                Display();

 private:
  std::string         m_name;
  unsigned int        m_seed;
  unsigned int        m_wins;
  unsigned int        m_losses;
  std::vector<double> m_oddsToMakeNextRound;
};

#endif /* TEAM_H_ */
