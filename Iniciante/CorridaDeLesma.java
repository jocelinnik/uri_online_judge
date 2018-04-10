import java.util.Scanner;

public class CorridaDeLesma{
	public static void main(String[] args)throws Exception {
		int maior, valor, casos, cont;
		Scanner leitor = new Scanner(System.in);

		while(leitor.hasNext()){
			casos = leitor.nextInt();
			maior = 0;
			for(cont=0;cont<10;cont++){
				valor = (int)System.in.read();
				if(valor>maior){
					maior = valor;
				}
			}
			if(maior<10){
				System.out.println(1);
			}else if((maior>=10)&&(maior<20)){
				System.out.println(2);
			}else if(maior>=20){
				System.out.println(3);
			}
		}
	}
}