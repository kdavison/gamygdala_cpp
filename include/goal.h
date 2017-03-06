#ifndef __file__
#define __file__

#include <string>

class Goal
{
public:
  Goal(std::string name, float utility, bool isMaintenance);
  std::string Name() const;
  float Utility() const;
  double calculateDeltaLikelihood(double congruence, double likelihood) = 0;
protected:
  std::string _name;
  float _likelihood;
  float _utility;
};

class AcheivementGoal
  : public Goal
{
public:
  double calculateDeltaLikelihood(double congruence, double likelihood)
  {
    double newLikelihood;
    if(_likelihood >= 1 || _likelihood <= -1) return 0;
    return belief.calculateLikelihood(_likelihood, likelihood, congruence);
  }
private:
  
};

class MaintenanceGoal
  : public Goal
{
public:
  double calculateDeltaLikelihood(double congruence, double likelihood)
  {
    
  }
private:

};

#endif
