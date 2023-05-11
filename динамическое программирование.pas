function changes(x: array of integer):array of integer;
begin
  for var j:= 0 to length(x)-1 do
    begin
  if x[j] = 2 then x[j]:=10 ;
  if x[j] = 3 then x[j]:=15 ;
  if x[j] = 5 then x[j]:=20 ;
  if x[j] = 7 then x[j]:=25 ;
  if x[j] = 9 then x[j]:=30 ;
   end;
   result := x;
end;
function unchanges(x: array of integer):string;
begin
  var l:string;
  for var j:= 0 to length(x)-1 do
    begin
  if  x[j]=10 then l:=l+' predmet 1 ';
  if  x[j]=15 then l:=l+' predmet 2 ';
  if  x[j]=20 then l:=l+' predmet 3 ';
  if  x[j]=25 then l:=l+' predmet 4 ';
  if x[j]= 30 then l:=l+' predmit 5 ';
   end;
   result := l;
end;

begin
 var s := new list<array of integer>;
   for var i:=2 to 5 do
    begin
     s += |2,3,5,7,9|.combinations(i).where(t->t.sum<=15).select(t->changes(t)).tolist;
    end;
 s.select(t->t.sum).max.Println;
 s.where(t->t.sum = s.select(t->t.sum).max).Select(t->unchanges(t)).print;
end.
