/* run.config
   OPT: -memory-footprint 1 -print -journal-disable tests/misc/mergestruct1.i tests/misc/mergestruct2.i
   OPT: -memory-footprint 1 -print -journal-disable tests/misc/mergestruct2.i tests/misc/mergestruct1.i
*/
struct s { float a; } s2;

void f(void)
{
  s2.a = 1.0;
}
