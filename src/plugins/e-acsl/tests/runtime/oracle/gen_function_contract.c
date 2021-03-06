/* Generated by Frama-C */
#include "stdio.h"
#include "stdlib.h"
int X = 0;
int Y = 2;
/*@ ensures X ≡ 1; */
void __gen_e_acsl_f(void);

void f(void)
{
  X = 1;
  return;
}

/*@ ensures X ≡ 2;
    ensures Y ≡ 2; */
void __gen_e_acsl_g(void);

void g(void)
{
  X = 2;
  return;
}

/*@ requires X ≡ 2; */
void __gen_e_acsl_h(void);

void h(void)
{
  X ++;
  return;
}

/*@ requires X ≡ 3;
    requires Y ≡ 2; */
void __gen_e_acsl_i(void);

void i(void)
{
  X += Y;
  return;
}

/*@ behavior b1:
      requires X ≡ 5;
      ensures X ≡ 3;
    
    behavior b2:
      requires X ≡ 3 + Y;
      requires Y ≡ 2;
      ensures X ≡ Y + 1;
 */
void __gen_e_acsl_j(void);

void j(void)
{
  X = 3;
  return;
}

/*@ behavior b1:
      assumes X ≡ 1;
      requires X ≡ 0;
    
    behavior b2:
      assumes X ≡ 3;
      assumes Y ≡ 2;
      requires X ≡ 3;
      requires X + Y ≡ 5;
 */
void __gen_e_acsl_k(void);

void k(void)
{
  X += Y;
  return;
}

/*@ ensures X ≡ 5; */
int __gen_e_acsl_l(void);

int l(void)
{
  /*@ assert Y ≡ 2; */
  __e_acsl_assert(Y == 2,(char *)"Assertion",(char *)"l",(char *)"Y == 2",49);
  return X;
}

/*@ behavior b1:
      assumes X ≡ 7;
      ensures X ≡ 95;
    
    behavior b2:
      assumes X ≡ 5;
      assumes Y ≡ 2;
      ensures X ≡ 7;
      ensures X ≡ \old(X) + Y;
 */
void __gen_e_acsl_m(void);

void m(void)
{
  X += Y;
  return;
}

/*@ requires X > 0;
    requires X < 10;
    
    behavior b1:
      assumes X ≡ 7;
      ensures X ≡ 8;
    
    behavior b2:
      assumes X ≡ 5;
      ensures X ≡ 98;
 */
void __gen_e_acsl_n(void);

void n(void)
{
  X ++;
  return;
}

int main(void)
{
  int __retres;
  __e_acsl_memory_init((int *)0,(char ***)0,(size_t)8);
  __gen_e_acsl_f();
  __gen_e_acsl_g();
  __gen_e_acsl_h();
  __gen_e_acsl_i();
  __gen_e_acsl_j();
  __gen_e_acsl_k();
  __gen_e_acsl_l();
  __gen_e_acsl_m();
  __gen_e_acsl_n();
  __retres = 0;
  return __retres;
}

/*@ requires X > 0;
    requires X < 10;
    
    behavior b1:
      assumes X ≡ 7;
      ensures X ≡ 8;
    
    behavior b2:
      assumes X ≡ 5;
      ensures X ≡ 98;
 */
void __gen_e_acsl_n(void)
{
  int __gen_e_acsl_at_2;
  int __gen_e_acsl_at;
  __gen_e_acsl_at_2 = X == 5;
  __gen_e_acsl_at = X == 7;
  __e_acsl_assert(X > 0,(char *)"Precondition",(char *)"n",(char *)"X > 0",
                  65);
  __e_acsl_assert(X < 10,(char *)"Precondition",(char *)"n",(char *)"X < 10",
                  66);
  n();
  {
    int __gen_e_acsl_implies;
    int __gen_e_acsl_implies_2;
    if (! __gen_e_acsl_at) __gen_e_acsl_implies = 1;
    else __gen_e_acsl_implies = X == 8;
    __e_acsl_assert(__gen_e_acsl_implies,(char *)"Postcondition",(char *)"n",
                    (char *)"\\old(X == 7) ==> X == 8",69);
    if (! __gen_e_acsl_at_2) __gen_e_acsl_implies_2 = 1;
    else __gen_e_acsl_implies_2 = X == 98;
    __e_acsl_assert(__gen_e_acsl_implies_2,(char *)"Postcondition",
                    (char *)"n",(char *)"\\old(X == 5) ==> X == 98",72);
    return;
  }
}

/*@ behavior b1:
      assumes X ≡ 7;
      ensures X ≡ 95;
    
    behavior b2:
      assumes X ≡ 5;
      assumes Y ≡ 2;
      ensures X ≡ 7;
      ensures X ≡ \old(X) + Y;
 */
void __gen_e_acsl_m(void)
{
  long __gen_e_acsl_at_4;
  int __gen_e_acsl_at_3;
  int __gen_e_acsl_at_2;
  int __gen_e_acsl_at;
  __gen_e_acsl_at_4 = (long)X;
  {
    int __gen_e_acsl_and_2;
    if (X == 5) __gen_e_acsl_and_2 = Y == 2; else __gen_e_acsl_and_2 = 0;
    __gen_e_acsl_at_3 = __gen_e_acsl_and_2;
  }
  {
    int __gen_e_acsl_and;
    if (X == 5) __gen_e_acsl_and = Y == 2; else __gen_e_acsl_and = 0;
    __gen_e_acsl_at_2 = __gen_e_acsl_and;
  }
  __gen_e_acsl_at = X == 7;
  m();
  {
    int __gen_e_acsl_implies;
    int __gen_e_acsl_implies_2;
    int __gen_e_acsl_implies_3;
    if (! __gen_e_acsl_at) __gen_e_acsl_implies = 1;
    else __gen_e_acsl_implies = X == 95;
    __e_acsl_assert(__gen_e_acsl_implies,(char *)"Postcondition",(char *)"m",
                    (char *)"\\old(X == 7) ==> X == 95",56);
    if (! __gen_e_acsl_at_2) __gen_e_acsl_implies_2 = 1;
    else __gen_e_acsl_implies_2 = X == 7;
    __e_acsl_assert(__gen_e_acsl_implies_2,(char *)"Postcondition",
                    (char *)"m",(char *)"\\old(X == 5 && Y == 2) ==> X == 7",
                    60);
    if (! __gen_e_acsl_at_3) __gen_e_acsl_implies_3 = 1;
    else __gen_e_acsl_implies_3 = (long)X == __gen_e_acsl_at_4 + Y;
    __e_acsl_assert(__gen_e_acsl_implies_3,(char *)"Postcondition",
                    (char *)"m",
                    (char *)"\\old(X == 5 && Y == 2) ==> X == \\old(X) + Y",
                    61);
    return;
  }
}

/*@ ensures X ≡ 5; */
int __gen_e_acsl_l(void)
{
  int __retres;
  __retres = l();
  __e_acsl_assert(X == 5,(char *)"Postcondition",(char *)"l",
                  (char *)"X == 5",47);
  return __retres;
}

/*@ behavior b1:
      assumes X ≡ 1;
      requires X ≡ 0;
    
    behavior b2:
      assumes X ≡ 3;
      assumes Y ≡ 2;
      requires X ≡ 3;
      requires X + Y ≡ 5;
 */
void __gen_e_acsl_k(void)
{
  {
    int __gen_e_acsl_implies;
    int __gen_e_acsl_and;
    int __gen_e_acsl_implies_2;
    int __gen_e_acsl_and_2;
    int __gen_e_acsl_implies_3;
    if (! (X == 1)) __gen_e_acsl_implies = 1;
    else __gen_e_acsl_implies = X == 0;
    __e_acsl_assert(__gen_e_acsl_implies,(char *)"Precondition",(char *)"k",
                    (char *)"X == 1 ==> X == 0",38);
    if (X == 3) __gen_e_acsl_and = Y == 2; else __gen_e_acsl_and = 0;
    if (! __gen_e_acsl_and) __gen_e_acsl_implies_2 = 1;
    else __gen_e_acsl_implies_2 = X == 3;
    __e_acsl_assert(__gen_e_acsl_implies_2,(char *)"Precondition",
                    (char *)"k",(char *)"X == 3 && Y == 2 ==> X == 3",42);
    if (X == 3) __gen_e_acsl_and_2 = Y == 2; else __gen_e_acsl_and_2 = 0;
    if (! __gen_e_acsl_and_2) __gen_e_acsl_implies_3 = 1;
    else __gen_e_acsl_implies_3 = X + (long)Y == 5L;
    __e_acsl_assert(__gen_e_acsl_implies_3,(char *)"Precondition",
                    (char *)"k",(char *)"X == 3 && Y == 2 ==> X + Y == 5",43);
  }
  k();
  return;
}

/*@ behavior b1:
      requires X ≡ 5;
      ensures X ≡ 3;
    
    behavior b2:
      requires X ≡ 3 + Y;
      requires Y ≡ 2;
      ensures X ≡ Y + 1;
 */
void __gen_e_acsl_j(void)
{
  __e_acsl_assert(X == 5,(char *)"Precondition",(char *)"j",(char *)"X == 5",
                  27);
  __e_acsl_assert((long)X == 3L + Y,(char *)"Precondition",(char *)"j",
                  (char *)"X == 3 + Y",30);
  __e_acsl_assert(Y == 2,(char *)"Precondition",(char *)"j",(char *)"Y == 2",
                  31);
  j();
  __e_acsl_assert(X == 3,(char *)"Postcondition",(char *)"j",
                  (char *)"X == 3",28);
  __e_acsl_assert((long)X == Y + 1L,(char *)"Postcondition",(char *)"j",
                  (char *)"X == Y + 1",32);
  return;
}

/*@ requires X ≡ 3;
    requires Y ≡ 2; */
void __gen_e_acsl_i(void)
{
  __e_acsl_assert(X == 3,(char *)"Precondition",(char *)"i",(char *)"X == 3",
                  21);
  __e_acsl_assert(Y == 2,(char *)"Precondition",(char *)"i",(char *)"Y == 2",
                  22);
  i();
  return;
}

/*@ requires X ≡ 2; */
void __gen_e_acsl_h(void)
{
  __e_acsl_assert(X == 2,(char *)"Precondition",(char *)"h",(char *)"X == 2",
                  17);
  h();
  return;
}

/*@ ensures X ≡ 2;
    ensures Y ≡ 2; */
void __gen_e_acsl_g(void)
{
  g();
  __e_acsl_assert(X == 2,(char *)"Postcondition",(char *)"g",
                  (char *)"X == 2",12);
  __e_acsl_assert(Y == 2,(char *)"Postcondition",(char *)"g",
                  (char *)"Y == 2",13);
  return;
}

/*@ ensures X ≡ 1; */
void __gen_e_acsl_f(void)
{
  f();
  __e_acsl_assert(X == 1,(char *)"Postcondition",(char *)"f",
                  (char *)"X == 1",8);
  return;
}


