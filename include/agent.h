#ifndef AGENT_H
#define AGENT_H

#include <string>
#include <memory>
#include <map>
#include <vector>
#include <unordered_map>

namespace GAMYGDALA
{

class Goal;

class Agent
{
public:
/** Pleasure Arousal Dominance **/
  struct PAD
  {
    
    float Pleasure;
    float Arousal;
    float Dominance;
  };
/*
  static std::unordered_map<std::string, PAD> EMOTIONS =
  {
    {"distress", {-0.61,0.28,-0.36} },
    {"fear", {-0.64,0.6,-0.43} },
    {"hope", {0.51,0.23,0.14} },
    {"joy", {0.76,.48,0.35} },
    {"satisfaction", {0.87,0.2,0.62} },
    {"fear-confirmed", {-0.61,0.06,-0.32} },//defeated
    {"disappointment", {-0.61,-0.15,-0.29} },
    {"relief", {0.29,-0.19,-0.28} },
    {"happy-for", {0.64,0.35,0.25} },
    {"resentment", {-0.35,0.35,0.29} },
    {"pity", {-0.52,0.02,-0.21} },//regretful
    {"gloating", {-0.45,0.48,0.42} },//cruel
    {"gratitude", {0.64,0.16,-0.21} },//grateful
    {"anger", {-0.51,0.59,0.25} },
    {"gratification", {0.69,0.57,0.63} },//triumphant
    {"remorse", {-0.57,0.28,-0.34} }//guilty
  };
*/
public:
  Agent(std::string name);
private:
  std::vector<std::shared_ptr<Goal>> _goals;
  std::string _name;
};

} //GAMYGDALA::
#endif //#ifndef AGENT_H
