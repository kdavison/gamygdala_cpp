#ifndef GAMYGDALA_H
#define GAMYGDALA_H

#include <string>
#include <memory>

namespace GAMYGDALA
{

class Agent;
class Goal;

class Gamygdala
{
public:
  std::shared_ptr<Agent> createAgent(std::string name);
  Goal createGoal(std::string agentName, std::string goalName, double goalUtility, bool isMaintenanceGoal = false);
  void createRelation(std::string sourceAgent, targetAgent, double relation);
  void appraiseBelief(  double likelihood,
                        std::string agentName,
                        std::vector<std::string> goals,
                        std::vector<double> goalCongruences,
                        bool isIncremental = true);
  void decayAll(double decay);
  
  
private:
  std::vector<std::shared_ptr<Agent>> _agents;
  std::vector<std::shared_ptr<Goal>> _goals;
};

} //GAMYGDALA::

#endif //#ifndef GAMYGDALA_H
