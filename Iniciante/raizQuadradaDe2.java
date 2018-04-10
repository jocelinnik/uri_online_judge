import java.util.Scanner;
public class raizQuadradaDe2{
	public static void main(String[] args) {
		int cont, repeticoes;
		double fracao, raiz;
		Scanner leitor = new Scanner(System.in);

		repeticoes = leitor.nextInt();
		fracao = 1.0/2.0;
		if(repeticoes==0){
			raiz = 1.0;
		}else if(repeticoes==1){
			raiz = 1.0 + fracao;
		}else{
			for(cont=2;cont<=repeticoes;cont++){
				fracao = 1/(2 + fracao);
			}
			raiz = 1.0 + fracao;
		}

		System.out.printf("%.10f", raiz);
		System.out.println();

	}
}