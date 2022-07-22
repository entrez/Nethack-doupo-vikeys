#include "setting.h"
#include <string.h>
Setting::Setting(void){
  ChangeNumberPad(1);
}
Setting::~Setting(){
}
void Setting::ChangeNumberPad(int setted){
  if(setted == -1) setted = !number_pad_;
  if(setted == 0){
    number_pad_ = 0;
    (void) strcpy(keys_, "ykuh.lbjn");
  }
  else {
    number_pad_ = 1;
    (void) strcpy(keys_, "789456123");
  }
}
char * Setting::GetKeys(void) {
  return keys_;
}
