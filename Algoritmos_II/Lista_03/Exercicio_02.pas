{
 Elabore um algoritmo que leia um conjunto de 10 dados numéricos e gere dois vetores, o
primeiro (vetor X) com os elementos de ordem par, e o segundo (vetor Y) com os elementos de
ordem ímpar.
}

program Untitled1;

var i: integer;
var x: array [1..5] of integer;
var y: array [1..5] of integer;
var index_x: integer;
var index_y: integer;

begin

index_x:=0;
index_y:=0;

for i:=1 to 10 do
begin

if (i mod 2 = 0) then
begin

index_y := index_y + 1;

read(y[index_y]);

end
else
begin

index_x := index_x + 1;

read(x[index_x]);

end;

end;


i:= 1;
while (i<=5) do
begin
writeln('X[',i,'] = ', x[i]);

i:= i + 1;
end;

i:=1;
while (i<=5) do
begin
writeln('Y[',i,'] = ', y[i]);

i:= i + 1;
end;


end.
