//
// main.cpp for main in /home/magrin_j//Math/Yams
// 
// Made by jeremy magrin
// Login   <magrin_j@epitech.net>
// 
// Started on  Tue Feb 12 11:58:05 2013 jeremy magrin
// Last update Tue Feb 12 12:13:30 2013 jeremy magrin
//

#include	<iostream>
#include	"yamsProb.hh"

int		main(void)
{
  YamsProb	prob;
  Dice		dice[5];

  dice[0].setValue(0);
  dice[1].setValue(0);
  dice[2].setValue(0);
  dice[3].setValue(0);
  dice[4].setValue(0);
  std::cout << "Prob : " << prob.calc_prob(dice, "yams_4") << std::endl;
  return (0);
}
