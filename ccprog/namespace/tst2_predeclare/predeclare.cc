/* predeclare.cc */
#include <iostream>
#include "pre1.h"

namespace webrtc {
  class WebrtcA;
}

int main()
{
  webrtc::WebrtcA * webrtc_a = new webrtc::WebrtcA();
  webrtc_a->aw = 10;
  webrtc_a->aj = 11;
 

  
  return 0;
}
