program Untitled1;

var S1: string;
var S2: string;
var Troca: array [1..11] of char;
var x: integer;
var i: integer;

begin

S1 := 'INFORMATICA';
S2 := 'TECNOLOGIAS';

x := length(S1);

for i:=1 to x do
begin

if (i mod 2 = 0) then
begin
Troca[i] := S2[i];
end
else
begin
Troca[i] := S1[i];
end;

end;


writeln('S1 = ', S1);
writeln('S2 = ', S2);
writeln('Troca S1[i] para S2[i] se i for par: ', Troca);


end.
