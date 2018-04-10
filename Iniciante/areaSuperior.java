import java.util.Scanner;
import java.util.Random;

public class Main{
	public static void aleatorio(double[][] matriz,int linha,int coluna){//Gera números aleatórios
		int i,j;
		Random gera = new Random();
		for(i = 0; i < linha; i++){
			for(j= 0; j < coluna; j++){
				matriz[i][j] = (5.0 - 1.0) * gera.nextDouble() + 1.0; //Entre 10 e 1 guarda isso
			}
		}
	}

	public static void imprime(double[][] matriz, int linha,int coluna){
		int i,j;
		for(i = 0; i < linha; i++){
			for(j= 0; j < coluna; j++){
				System.out.printf("| %.1f",matriz[i][j]);
			}
			System.out.println();
		}
	}

	public static void main(String[] args) {
		Scanner leia = new Scanner(System.in);
		int i,j,k,cont=0,inicio,fim,linha = 12,coluna = 12;
		double[][] matriz;
		String escolha;
		
		matriz = new double[linha][coluna];
		
		double soma=0.0,media =0.0;
		
		escolha = leia.next();
		for(i = 0; i < linha; i++){
			for(j= 0; j < coluna; j++){
				matriz[i][j] = leia.nextDouble();
			}
		}
		
		
		fim= linha-1;
		inicio = 1;
		i = 0;
		while(inicio<fim){
			for(j = inicio; j < fim; j++){
					soma = soma + matriz[i][j];
					cont++;
			}
			fim--;
			inicio++;
			i++;
		}
		media = soma/cont;

			if(escolha.equals("S")){
				System.out.printf("%.1f\n",soma);	
			}
			if(escolha.equals("M")){
				System.out.printf("%.1f\n",media);	
			}	
	}
}
