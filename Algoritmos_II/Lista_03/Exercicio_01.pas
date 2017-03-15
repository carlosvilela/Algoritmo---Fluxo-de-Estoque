{
Elabore um algoritmo que leia um conjunto de 10 dados numéricos inteiros e gere dois vetores,
o primeiro (vetor X) contendo os elementos pares e o segundo (vetor Y) contendo os elementos
ímpares.
}


program Untitled1;

var num: integer;
var x: array [1..10] of integer;
var y: array [1..10] of integer;
var index_x: integer;
var index_y: integer;
var i: integer;

begin

    index_x:=0;
    index_y:=0;

    for i:=1 to 10 do
    begin

      read(num);

      if (num mod 2 = 0) then
      begin
      index_x:= index_x + 1;
      x[index_x] := num;
      end
      else
      begin
      index_y:= index_y +1;
      y[index_y] := num;
      end;

    end;

    i:=1;
    while (i<=10) do
    begin

     writeln('X[',i,'] = ', X[i]);

    i:= i + 1;
    end;

    i:=1;
    while (i<=10) do
    begin

     writeln('Y[',i,'] = ', y[i]);

    i:= i + 1;

    end;



end.
