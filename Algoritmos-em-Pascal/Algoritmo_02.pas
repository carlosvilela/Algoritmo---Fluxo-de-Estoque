program Cadastro_Bois;

uses crt; {usar dalay, clrscr}


const num_Cadastro = 90;


var codigo : array of integer; {array infinito}
var peso : array [0..num_Cadastro] of integer; {array limitado}
var Max, Min : integer;
var i : integer;


begin

write ('Insira o Codigo: ');
read (codigo[0]);

write ('Insira o Peso: ');
read (peso[0]);

Max := peso[0];
Min := peso[0];


i:=1;

while (i<=num_Cadastro) do
begin

write ('Insira o Codigo: ');
read (codigo[i]);

write ('Insira o Peso: ');
read (peso[i]);


if (peso[i] > Min) and (peso[i] > Max) then
begin

Max := peso[i];

end
else
begin

if (peso[i] < Min) then
begin

Min := peso[i];

end;

end;

i := i + 1;

end;


writeln ('Peso Maximo: ',MAx);

writeln ('Peso Minimo: ', Min);

delay (6000);



end.
