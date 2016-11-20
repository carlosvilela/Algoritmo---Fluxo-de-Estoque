program Maior_Menor_inteiro;

uses crt; {usar o delay, clrscr, }

var N : integer;
var Max,Min : integer;
var i : integer;

begin

write ('Insira um numero inteiro: ');
read (N);

Max := N;
Min := N;


clrscr;
i:=1;
while (i=1) do
begin

write ('Insira um numero inteiro: ');
read (N);

if (N = 0) then begin i:=0; end;

if ( N > Min) and ( N > Max) then
begin

Max := N;

end

else
begin

if (N < Min) and ( N <> 0) then begin Min := N; end;

end;

clrscr;

end;

writeln ('Maior Numero: ', Max);
writeln ('Menor Numero: ', Min);

delay (6000);


end.
