##
var maxs := |2,3,5,7,9|.combinations(3).where(t->t.sum<=15).select(t->t.Select(u->u=2?10:u=3?15:u=5?20:u=7?25:u=9?30:u)).Select(t->t.sum).max;
var  s:= new list<array of integer>;
s+=|2,3,5,7,9|.combinations(3).where(t->t.sum<=15).where(t->t.Select(u->u=2?10:u=3?15:u=5?20:u=7?25:u=9?30:u).Sum = maxs).tolist;
println('максимальная price',maxs);
s.Select(t->t.Select(u->u.Tostring)).select(t->t.Select(u->u='2'?'предм1':u='3'?'предм2':u='5'?'предм3':u='7'?'предм4':u='9'?'предм5':u)).print