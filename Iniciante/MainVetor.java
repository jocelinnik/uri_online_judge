import java.util.Scanner;
import java.util.Random;
public class MainVetor{
	public static void main(String[] args) {
		Vetor myvet, myvet2, myvet3;
		int cont, tam;
		System.out.println("Testando myvet!");
		myvet = new Vetor(10);
		myvet2 = new Vetor(10);
		myvet3 = new Vetor(10);

		myvet.imprime();
		myvet.inicializaComValor(7);
		myvet.imprime();


		/*System.out.print("|");
		for(cont=0;cont<myvet.getTamanho();cont++){
			System.out.print(myvet.getValor(cont));
			System.out.print("|");
		}
		System.out.println();*/

		System.out.println("Testando myvet2!");
		myvet2.inicializaRandomico();
		myvet2.imprime();
		myvet2.clonaVetor(myvet2,myvet3);
		System.out.println("Clonando myvet2 para myvet3!");
		myvet3.imprime();
	}
}