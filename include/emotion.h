#ifndef EMOTION_H
#define EMOTION_H

class Emotion
{
public:
  Emotion(std::string name, double intensity)
    : _name(name)
    , _intensity(intensity)
  {
  }
  std::string Name() const { return _name; }
  double Intensity() const { return _intensity; }
private:
  std::string _name;
  double _intensity;
};

#endif
