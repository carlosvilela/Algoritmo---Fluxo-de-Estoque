program Fludo_de_Estoque; {nome do programa}

uses dos,crt;   {usar funções para adicionar cores na letra e no fundo}

const
max = 9; {numero máximo de cadastro de produtos 10 - 0 a 9}

var {Variáveis com vetores / array}
codigo, quantidade:array [0..max] of integer; {Variaveis com numeros inteiros}
valor: array [0..max] of real; {Variaveis com numeros reais}
descricao: array [0..max] of string[20]; {Variavel com caracteres}
IR: char;
quebralinha: Text;

estoque, valor_estoque, quant, cod, i, x, contador: integer;

begin {inicio do programa}

{muda cor de fundo}
textbackground(white);
clrscr; 

{atribui valor a variavel contador}
contador := 0;

while contador<=max do {Enquanto i <= 9 faça}
begin {inicio While}
clrscr;
textcolor(red); {Cor do titulo}
writeln('<Fluxo de Estoque (CADASTRO) >===============================================');
writeln;

textcolor(blue);  {cor do texto do formulario}
write ('Insira o Codigo do produto: ');
textcolor(black);  {cor do texto de entrada}
read (codigo[contador]);
readln; {corrigir erro de quebra de linha no buffer}

textcolor(blue);  {cor do texto do formulario}
write ('Insira a Descricao do produto: ');
textcolor(black);  {cor do texto de entrada}
read (descricao[contador]);

textcolor(blue);  {cor do texto do formulario}
write ('Insira a Quantidade do produto: ');
textcolor(black);  {cor do texto de entrada}
read (quantidade[contador]);

textcolor(blue);  {cor do texto do formulario}
write ('Insira o Valor Unitario do produto: ');
textcolor(black);  {cor do texto de entrada}
read (valor[contador]);

contador:= contador+1;
end; {Fim While}

clrscr;   {Limpa a Tela}


contador :=0;
while  contador=0 do {Enquanto i = 0 - loop com flag}
begin  {inicio Enquanto}
i:=0; {contador para mostrar itens}
clrscr;
textcolor(red); {Cor do titulo}
writeln('<Fluxo de Estoque (ITENS) >===============================================');
writeln;


While i<=max do
begin
textcolor(blue);
write ('CODIGO: ');

textcolor(black);
write(codigo[i]);

textcolor(blue);
write (' // DESCRICAO: ');

textcolor(black);
write(descricao[i]);

textcolor(blue);
write (' // QUANTIDADE: ');

textcolor(black);
write(quantidade[i]);

writeln;

textcolor(black);  {cor do texto de entrada}
i:= i+1;
end;




writeln('--------------------------------------------------------------------------');
writeln;
readln;
write ('Digite I para Incluir, R para Retirar quantidade de Estoque (I/R): ');
read(IR);


if ((IR <> 'i') and (IR <> 'I') and (IR <> 'R') and (IR <> 'r')) then
begin

i:=0; {contador para mostrar itens}
clrscr;
textcolor(red); {Cor do titulo}
writeln('<Fluxo de Estoque (ITENS) >===============================================');
writeln;


While i<=max do
begin
textcolor(blue);
write ('CODIGO: ');

textcolor(black);
write(codigo[i]);

textcolor(blue);
write (' // DESCRICAO: ');

textcolor(black);
write(descricao[i]);

textcolor(blue);
write (' // QUANTIDADE: ');

textcolor(black);
write(quantidade[i]);

writeln;

textcolor(black);  {cor do texto de entrada}

estoque:= estoque + quantidade[i];
valor_estoque = valor_estoque + valor[i];

i:= i+1;
end;




writeln('--------------------------------------------------------------------------');
writeln;

writeln ('Quantidade Total em Estoque: ', estoque);
writeln ('Valor Total em Estoque: ', valor_estoque);

readln;
readln;

exit;
end;

writeln;
readln;
write ('Digite o Codigo do produto: ');
read(cod);



x:= 0;

while x<=max do
begin

if (cod = codigo[x]) then
begin

if (IR = 'I') or (IR = 'i') then
begin
write ('Quantidade que deseja Incluir: ');
read(quant);

quantidade[x]:= quantidade[x] + quant;
end;


if (IR = 'R') or (IR = 'r') then
begin

write ('Quantidade que deseja Retirar: ');
read(quant);


if (quant > quantidade[x]) then
begin
writeln;
writeln ('Estoque Insuficiente...');
readln;
readln;

end

else
begin

quantidade[x]:= quantidade[x] - quant;
end;

end;




end;

x:= x+1;
end;


end;    {Fim Enquanto}

readln;
end. {fim do programa}
