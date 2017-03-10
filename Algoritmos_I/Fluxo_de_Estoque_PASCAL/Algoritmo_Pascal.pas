program Fluxo_Estoque;

uses crt;

const produtos = 2;

const max = produtos-1;
var codigo, quantidade : array[0..max] of integer;
var descricao : array[0..max] of string;
var valor : array[0..max] of real;

var buffer : string;
var i,x,z,quant,cod : integer;
var opt : char;


procedure exibir_produtos( n:integer );
begin

i:=0;

clrscr;
writeln ('>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>');

while i<=n do
begin

write ('<CODIGO> ', codigo[i], '; ');
write ('<DESCRICAO> ', descricao[i], '; ');
writeln ('<QUANTIDADE> ', quantidade[i], '; ');

i:=i+1;
end;

writeln ('<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<');

end;




procedure exibir_total_produtos( n:integer );
begin

i:=0;
quant:=0;

clrscr;
writeln ('>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>');

while i<=n do
begin

write ('<CODIGO> ', codigo[i], '; ');
write ('<DESCRICAO> ', descricao[i], '; ');
writeln ('<QUANTIDADE> ', quantidade[i], '; ');

quant:= quant + quantidade[i];

i:=i+1;
end;

writeln ('<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<');

writeln ('Estoque Total: ', quant, ' Produtos em estoque ... ');


end;






function estoque (opcao,quant,vetor:integer) :real;
begin

if opcao=1 then
begin
quantidade[vetor]:= quantidade[vetor] + quant;
end

else
begin

if opcao=2 then
begin

if quant>quantidade[vetor] then
begin
writeln;
writeln ('Estoque Insuficiente...');

delay (5000);

clrscr;

exibir_total_produtos (max);

delay (5000);


end
else
begin
quantidade[vetor]:= quantidade[vetor] - quant;
end;

end;
end;

end;


begin {inicio do programa}


i:=0;

while i<=max do
begin

write ('Insira o Codigo do Produto ', i+1 ,': ');
read (codigo[i]);
readln (buffer, buffer); {soluciona problema de buffer}
write ('Insira a Descricao do Produto ', i+1 ,': ');
read (descricao[i]);
write ('Insira a Quantidade do Produto ', i+1 ,': ');
read (quantidade[i]);
write ('Insira o Valor Unitario do Produto ', i+1 ,': ');
read (valor[i]);
clrscr; {Clear Screen - Limpar Tela - uses crt}
i:=i+1;
end;


x:=0;

while x=0 do
begin

exibir_produtos(max);

readln (buffer, buffer);

write ('Digite I para incluir, R para retirar do estoque (R/I): ');
read(opt);

if (opt = 'R') or (opt = 'r') then
begin

write ('Insira o Codigo do Produto: ');
read (cod);

i:=0;
while (i<=max)do
begin
if (cod = codigo[i]) then
begin

writeln ('Produto: ', descricao[i]);
writeln;


write ('Insira a quantidade a ser Retirada: ');
read (quant);
estoque (2,quant, i);
end;
i:= i + 1;
end;



end

else
begin

if (opt = 'I') or (opt = 'i') then
begin

write ('Insira o Codigo do Produto: ');
read (cod);

i:=0;
while (i<=max)do
begin
if (cod = codigo[i]) then
begin

writeln ('Produto: ', descricao[i]);
writeln;

write ('Insira a quantidade a ser Incluida: ');
read (quant);
estoque (1,quant, i);
end;
i:= i + 1;
end;

end
else
begin

x:=1;

end;
end;


end;


end.
