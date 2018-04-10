import java.util.Random;
public class Vetor{
	
	private int[] vet;
	private int tamanho;

	Vetor(){
		vet = new int[10];
		this.setTamanho(10);
	}

	Vetor(int tam){
		vet = new int[10];
		this.setTamanho(tam);
	}

	public int getTamanho(){
		return this.tamanho;
	}

	private void setTamanho(int novoTam){
		this.tamanho = novoTam;
	}

	public int getValor(int index){
		return this.vet[index];
	}

	public void setValor(int index, int novoValor){
		this.vet[index] = novoValor;
	}

	public void imprime(){
		int cont;

		System.out.print("|");
		for(cont=0;cont<this.getTamanho();cont++){
			System.out.print(this.getValor(cont));
			System.out.print("|");
		}
		System.out.println();
	}

	public void inicializaComValor(int valor){
		int cont;

		for(cont=0;cont<this.getTamanho();cont++){
			this.setValor(cont,valor);
		}
	}

	public void copiaValoresDe(Vetor origem){
		int cont;

		for(cont=0;cont<this.getTamanho();cont++){
			this.setValor(cont,origem.getValor(cont));
		}
	}

	public void clonaVetor(Vetor origem, Vetor destino){
		int cont;

		for(cont=0;cont<destino.getTamanho();cont++){
			destino.setValor(cont,origem.getValor(cont));
		}
	}

	public void inicializaRandomico(){
    int cont, tamVetor = this.getTamanho();
    Random gerador = new Random();

    for(cont=0;cont<tamVetor;cont++){
        this.setValor(cont,gerador.nextInt(3*tamVetor));
    }
  }

}