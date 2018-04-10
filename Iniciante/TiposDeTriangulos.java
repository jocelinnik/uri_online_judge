import java.util.Scanner;
public class TiposDeTriangulos{
	public static void main(String[] args) {
		Scanner leitor = new Scanner(System.in);
		float ladoA, ladoB, ladoC, maior, meio, menor;

		ladoA = leitor.nextFloat();
		ladoB = leitor.nextFloat();
		ladoC = leitor.nextFloat();
		maior = ladoA;
		menor = ladoA;

		if(ladoB>=maior){
			maior = ladoB;
		}else{
			if(ladoB<menor){
				menor = ladoB;
			}
		}
		if(ladoC>=maior){
			maior = ladoC;
		}else{
			if(ladoC<menor){
				menor = ladoC;
			}
		}

		meio = ((ladoA + ladoB + ladoC) - menor) - maior;
		ladoA = maior;
		ladoB = meio;
		ladoC = menor;

		if(ladoA>=(ladoB+ladoC)){
			System.out.println("NAO FORMA TRIANGULO");
		}else{
			if((ladoA*ladoA)==((ladoB*ladoB)+(ladoC*ladoC))){
				System.out.println("TRIANGULO RETANGULO");
			}else{
				if((ladoA*ladoA)>((ladoB*ladoB)+(ladoC*ladoC))){
					System.out.println("TRIANGULO OBTUSANGULO");
				}else{
					if((ladoA*ladoA)<((ladoB*ladoB)+(ladoC*ladoC))){
						System.out.println("TRIANGULO ACUTANGULO");
					}
				}
			}
		}

		if(((ladoA==ladoB)&&(ladoB==ladoC))&&(ladoA==ladoC)){
			System.out.println("TRIANGULO EQUILATERO");
		}else{
			if(((ladoA==ladoB)||(ladoB==ladoC))||(ladoA==ladoC)){
				System.out.println("TRIANGULO ISOSCELES");
			}
		}
	}
}