bool set_alarm(const bool& employed,const bool& vacation){
  if (employed && vacation == false)
  {
  return true;
  }
  else return false;
}
