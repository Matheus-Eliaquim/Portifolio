import java.util.Scanner;

public class CalculadoraDeSalario {   

    public static void main(String[] args) {
    //leitura dos arquivos de entrada    
    Scanner entrada01  = new Scanner (System.in); //criar um leitor para os dados de entrada. Também pode ser usado  "var scanner = new Scanner(System.in);"

    //entrada para o valor do salario bruto
    System.out.println("Digite o valor do salario bruto");
    float SalarioBruto = entrada01.nextFloat(); 

    //entrada para o valor dos beneficios
    System.out.println("Digite o valor dos beneficios");
    float Beneficios = entrada01.nextFloat();//lê o valor dos beneficios

    //calculo de impostos
    float Impostos = 0;
    if (SalarioBruto >= 0 && SalarioBruto <= 1100.00) {
        Impostos = 0.05f * SalarioBruto;
    } else if (SalarioBruto > 1100.00 && SalarioBruto <= 2500.00){
        Impostos = 0.10f * SalarioBruto;
    } else if (SalarioBruto > 2500){
        Impostos = 0.15f * SalarioBruto;
    }
    
    //Variaveis para saida de dados corretos
    float SalarioLiquido = SalarioBruto - Impostos;
    float Total = SalarioLiquido + Beneficios;

    //saida de dados
    System.out.printf("O valor a ser pago em imposto é %.2f\n", Impostos);  
    System.out.printf("O valor a ser pago no salario é é %.2f\n", SalarioLiquido);
    System.out.printf("O valor a ser pago em Beneficios é é %.2f\n", Beneficios);
    System.out.printf("O valor total a ser pago é %.2f\n", Total);

    }

}









