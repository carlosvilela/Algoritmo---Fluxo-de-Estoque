import java.util.Scanner;
import java.io.FileWriter;
import java.io.PrintWriter;

class test {
	public static void main(String args[]){
	
	try{
	
	String nome, extencao, texto, buffer;
	
	Scanner in = new Scanner(System.in);
	
	System.out.print("Insira o nome do arquivo (nome_arquivo): ");
	nome = in.next();
	
	System.out.print("Insira a extenção (txt): ");
	extencao = in.next();
	
	FileWriter arquivo = new FileWriter(nome+"."+extencao);
	
	System.out.println("Arquivo criado com sucesso....; arquivo: "+nome+"."+extencao);
	
	System.out.print("Insira o Texto que será escrito no arquivo (Texto com espaço): ");
	buffer = in.nextLine(); // pega o /n do enter
	texto = in.nextLine();
	
	
	PrintWriter escrever = new PrintWriter (arquivo);
	
	escrever.print(texto);
	
	arquivo.close();
	
	
	}catch(Exception e){System.out.print("ERRO: "+e);}
	
	
			
		
		
	}
}
