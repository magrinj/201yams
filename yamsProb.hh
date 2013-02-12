//
// yams.hh for yams in /home/magrin_j//Math/Yams
// 
// Made by jeremy magrin
// Login   <magrin_j@epitech.net>
// 
// Started on  Mon Feb 11 09:45:03 2013 jeremy magrin
// Last update Tue Feb 12 12:26:46 2013 jeremy magrin
//

#ifndef		YAMS_HH_
#define		YAMS_HH_

#define		NB_DICE		5

#include	<cstdlib>
#include	<cmath>
#include	<map>
#include	<string>
#include	"dice.hh"

class YamsProb {
public:
  YamsProb();
  ~YamsProb();

public:
  double	calc_prob(Dice *dice, std::string comb);

private:
  double	paire(Dice *dice, std::string comb);
  double	brelan(Dice *dice, std::string comb);
  double	carre(Dice *dice, std::string comb);
  double	full(Dice *dice, std::string comb);
  double	suite(Dice *dice, std::string comb);
  double	yams(Dice *dice, std::string comb);

private:
  typedef double	(*t_func)(Dice *dice, std::string comb);

private:
  std::map<std::string comb, t_func func>	m_func;
  Dice						m_dice;
};

#endif
