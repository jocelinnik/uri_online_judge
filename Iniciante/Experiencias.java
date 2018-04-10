import java.io.IOException;
import java.util.Scanner;
public class Experiencias{
	public static void main(String[] args)throws Exception {
		int entrada, entradaExp, totalCoelhos, totalRatos, totalSapos, cont;
		double totalCobaias, percentCoelhos, percentRatos, percentSapos;
		String tipo;
		Scanner leitor = new Scanner(System.in);

		totalCobaias = 0.0;
		totalCoelhos = 0;
		totalRatos = 0;
		totalSapos = 0;
		percentCoelhos = 0.0;
		percentRatos = 0.0;
		percentSapos = 0.0;

		entrada = leitor.nextInt();
		for(cont=0;cont<entrada;cont++){
			entradaExp = leitor.nextInt();
			tipo = leitor.next();

			if(tipo.equals("C")){
				totalCoelhos = totalCoelhos+entradaExp;
			}else{
				if(tipo.equals("R")){
					totalRatos = totalRatos+entradaExp;
				}else{
					if(tipo.equals("S")){
						totalSapos = totalSapos+entradaExp;
					}
				}
			}
			totalCobaias = totalCobaias+entradaExp;
			entradaExp = 0;
		}

		percentCoelhos = (totalCoelhos*100)/totalCobaias;
		percentRatos = (totalRatos*100)/totalCobaias;
		percentSapos = (totalSapos*100)/totalCobaias;

		System.out.print("Total: "); System.out.printf("%.0f", totalCobaias); System.out.println(" cobaias");
		System.out.print("Total de coelhos: "); System.out.println(totalCoelhos);
		System.out.print("Total de ratos: "); System.out.println(totalRatos);
		System.out.print("Total de sapos: "); System.out.println(totalSapos);
		System.out.print("Percentual de coelhos: "); System.out.printf("%.2f", percentCoelhos); System.out.println(" %");
		System.out.print("Percentual de ratos: "); System.out.printf("%.2f", percentRatos); System.out.println(" %");
		System.out.print("Percentual de sapos: "); System.out.printf("%.2f", percentSapos); System.out.println(" %");
	}
}