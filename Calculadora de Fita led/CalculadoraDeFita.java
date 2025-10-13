import java.util.Scanner;

public class CalculadoraDeFita{

    public static void main(String[] args){

        //cria um objeto que ler dados inseridos pelo usuario no console
        Scanner scanner = new Scanner(System.in);

        //parametros iniciais
        int fontes = 5;
        int tamanhoRolo = 0;
        int fonte24w = 0;
        int fonte36w = 0;
        int fonte48w = 0;
        int fonte60w = 0;
        int fonte72w = 0;
        int fonte96w = 0;
        int fonte150w = 0;


        //parametros de acumulação
        double totalMetros = 0.00; 
        
        //especificação do tamanho do rolo de fitas
        while (true) {
        System.out.println("Digite 1 se deseja trabalhar como rolos de 3.00 metros.");
        System.out.println("Digite 2 se deseja trabalhar como rolos de 5.00 metros.");
        int tamanhoEscolhido = scanner.nextInt();  
        System.out.print("\n");//espeço entre linhas      
        if (tamanhoEscolhido == 1) {
            tamanhoRolo = 3;
            break;
        } else if (tamanhoEscolhido == 2) {
            tamanhoRolo = 5;
            break;
        } else {
            System.out.println("INSIRA UM VALOR VALIDO!\n");
        }
    } 

        //especifique a potencia da fita em W ou watts
        System.out.println("Digite a potencia da fita. (exemplo: 12.00)");
        double potenciaFita = scanner.nextDouble();
        System.out.print("\n"); //espaço entre linhas

          

        //estrutura de repetição
        for(double i = 1; i > 0; i++){

        //especificação do tamanho da fita para calculo de rolos totais e parciais e de fontes totais e paciais
        System.out.println("Digite o tamanho da fita. (exemplo: 12.00)");
        System.out.println("Digita 0 Caso não queira adicionar mais nenhuma fita led.");
        double tamanhoFita = scanner.nextDouble();
        //condição para continuar ou parar a repetição do codigo
        if (tamanhoFita > 0) {
            i = 1;
        } else if (tamanhoFita == 0) {            
            break;
        } 

        //calculos   
        double quantidadefontes = tamanhoFita / fontes;     
        int qtdFontes = (int) Math.ceil(quantidadefontes);
        double potenciaFontes = ((tamanhoFita * potenciaFita) / qtdFontes) * 1.2;
        double qtdrolos = tamanhoFita / tamanhoRolo;
          
        //potencia da fonte sem arredondamentos  
        System.out.printf("\n");
        int potenciaFonteArredondada = 0;

        //Arrendondando potencia de fonte para os padrões de mercado
        if (potenciaFontes < 24) {
            potenciaFonteArredondada = 24;
        } else if (potenciaFontes >= 24 && potenciaFontes < 36) {
            potenciaFonteArredondada = 36;
        } else if (potenciaFontes >= 36 && potenciaFontes < 48) {
            potenciaFonteArredondada = 48;
        } else if (potenciaFontes >= 48 && potenciaFontes < 60) {
            potenciaFonteArredondada = 60;
        } else if (potenciaFontes >= 60 && potenciaFontes < 72) {
            potenciaFonteArredondada = 72;
        } else if (potenciaFontes >= 72 && potenciaFontes < 96) {
            potenciaFonteArredondada = 96;
        } else if (potenciaFontes >= 96 && potenciaFontes < 150) {
            potenciaFonteArredondada = 150;
        } 

        //resultado
        System.out.printf("Especificação de rolos e fontes para %.2f metros de fita led, com %.2f watts.\n", tamanhoFita, potenciaFita);
        System.out.printf("%.2f rolos de 3.00 metros.\n", qtdrolos);
        System.out.printf("%s fontes de %s watts.\n\n", qtdFontes, potenciaFonteArredondada);

        //acumulo para calculo do total de fontes utilizadas
        totalMetros += tamanhoFita;
        if (potenciaFonteArredondada == 24) {
           fonte24w += qtdFontes; 
        } else if (potenciaFonteArredondada == 36) {
            fonte36w += qtdFontes;
        } else if (potenciaFonteArredondada == 48) {
            fonte48w += qtdFontes;
        } else if (potenciaFonteArredondada == 60) {
            fonte60w += qtdFontes;
        } else if (potenciaFonteArredondada == 72) {
            fonte72w += qtdFontes;
        } else if (potenciaFonteArredondada == 96) {
            fonte96w += qtdFontes;
        } else if (potenciaFonteArredondada == 150) {
            fonte150w += qtdFontes;
        }

        }

        System.out.printf("\n"); // linha de espaço
        
        //Variavel para calcular quantos rolos de fita serão necessarios
        double rolosUsadosReal = totalMetros / tamanhoRolo;
        int totalRolos = (int) Math.ceil(rolosUsadosReal);

        //saida com o total de fita led a ser usado
        System.out.println("****METRAGEM TOTAL DE FITA LED E QUANTIDADE DE ROLOS****");
        System.out.printf("%.2f metros e serão necessarios %s rolos.\n\n", totalMetros, totalRolos);

        //saida com o total de pontes utilizadas
        System.out.printf("****FONTES UTILIZADAS****\n");
        if (fonte24w > 0) {
            System.out.printf("%s fontes 24w\n", fonte24w);
        } else {
            System.out.print("");
        }
        if (fonte36w > 0) {
            System.out.printf("%s fontes 36w\n", fonte36w);
        } else {
            System.out.print("");
        }
        if (fonte48w > 0) {
            System.out.printf("%s fontes 48w\n", fonte48w);
        } else {
            System.out.print("");
        }
        if (fonte60w > 0) {
            System.out.printf("%s fontes 60w\n", fonte60w);
        } else {
            System.out.print("");
        }
        if (fonte72w > 0) {
            System.out.printf("%s fontes 72w\n", fonte72w);
        } else {
            System.out.print("");
        }
        if (fonte96w > 0) {
            System.out.printf("%s fontes 96w\n", fonte96w);
        } else {
            System.out.print("");
        }
        if (fonte150w > 0) {
            System.out.printf("%s fontes 150w\n", fonte150w);
        } else {
            System.out.print("");
        }

    }
}

