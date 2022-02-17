#include "shapes.h"
#include "shapeFuncs.h"
#include "tddFuncs.h"




int main() {

  struct Box b1,b2;

  initBox(&b1,3.0,4.0,6.0,7.0);  
  assertEquals("ul=(3,4),w=6,h=7", boxToString(b1), "boxToString(b1)");

  initBox(&b2,3.14159,6.2831853071,4.81213,5.79261);
  assertEquals("ul=(3.14,6.28),w=4.81,h=5.79", boxToString(b2), "boxToString(b2)");
  assertEquals("ul=(3,6),w=5,h=6", boxToString(b2,1), "boxToString(b2,1)");
  assertEquals("ul=(3.142,6.283),w=4.812,h=5.793", boxToString(b2,4), "boxToString(b2,4)");
  assertEquals("ul=(3.1416,6.2832),w=4.8121,h=5.7926", boxToString(b2,5), "boxToString(b2,5)");

		   
  return 0;
}
