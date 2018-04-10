import java.io.IOException;
import java.util.Scanner;
public class  Main {
    public static void main(String[] args) throws IOException {
    Scanner ler = new Scanner(System.in);
    double mat[][] = new double[12][12];
    double soma, med;
    int i, j;
	j = 0;
    String usu, media, som;
    som = ("S"); media = ("M"); med = 0.0; soma = 0.0;

	usu = ler.next();
    for (i = 0; i <= 11; i++){
	   for(j = 0; j <= 11; j++){
	     mat[i][j] = ler.nextDouble();
        }
	}
    for (i = 0; i <= 11; i++){
	   for(j = 11; j > 11 - i; j--){
	      if (usu.equals(som)){
	       soma = soma + mat[i][j];
	       }
	      if (usu.equals(media)){
	       soma = soma + mat[i][j];
	       med = soma/66.0;
	       }
	   }
	}

	if (usu.equals(som)){
	System.out.printf("%.1f\n",soma);
	}
	if (usu.equals(media)){
	System.out.printf("%.1f\n",med);
	}


  }
}