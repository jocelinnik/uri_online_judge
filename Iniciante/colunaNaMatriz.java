import java.io.IOException;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) throws IOException {
    Scanner ler = new Scanner(System.in);
    double mat[][] = new double[12][12];
    int  C;
    double soma, med;
    String usu, media, som;
    som = ("S"); media = ("M"); med = 0.0; soma = 0.0;

	C = ler.nextInt();
	usu = ler.next();

	if ((C >= 0) && (C <= 11)){
	for (int i = 0; i <= 11; i++){
	   for(int j = 0; j <= 11; j++){
	     mat[i][j] = ler.nextDouble();
            }
	}

	
	for (int i = 0; i <= 11; i++){
	    if (usu.equals(som)){
	     soma = soma + mat[i][C];
	     }
	     if (usu.equals(media)){
	      soma = soma + mat[i][C];
	       med = soma/12.0;
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
}