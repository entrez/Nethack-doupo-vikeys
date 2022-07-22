#ifndef SETTING_H_
#define SETTING_H_
enum movekeys{
    KEY_NW, KEY_N, KEY_NE,
    KEY_W, KEY_REST, KEY_E,
    KEY_SW, KEY_S, KEY_SE
};
class Setting{
private:
  int number_pad_;
  char keys_[10];
public:
  Setting(void);
  ~Setting();
  void ChangeNumberPad(int);
  int GetNumberPad(void) { return number_pad_; };
  char * GetKeys(void);
};
#endif
