void insertfirst(list *l, address p){
  next(p)=first(l);
  first(l)=p;}
  
void insertlast(list *l, address p){
  q=first(l);
  while (next(q) != 0){
    q=next(q);}
    }
