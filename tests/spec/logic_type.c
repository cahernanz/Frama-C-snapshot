/*@ type t; */
/*@ logic t create(int x); */
/*@ logic t1 create(int y); // error: type does not exist
*/

/*@ type t2 = t2; */
//@ logic t2 foo;
//@ predicate p(t2 x) = foo == x;

typedef struct { int x ; int y ; } Point ;
/*@ axiomatic A {
    type point = Point;
    predicate Q(point * tt) reads tt[0..1], tt[2].x, tt[2].y;
    type triangle = point[3];
    predicate P(triangle tt) = tt[1].x == tt[2].y;
    } */

/*@ ensures Q(q);
  @ ensures P((triangle) q); */
void f(Point *q);

Point tab[3];

/*@ ensures Q(&tab[0]);
  @ ensures P(tab); */
void h(void) {
  f(tab) ;
}
