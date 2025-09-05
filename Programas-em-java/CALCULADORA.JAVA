// Importa a classe Scanner para permitir a leitura de dados via teclado
import java.util.Scanner;

// Define a classe principal do programa
public class programa2 {

    // Método principal: ponto de entrada da aplicação
    public static void main(String[] args) {

        // Cria um objeto Scanner para capturar a entrada do usuário
        var scanner = new Scanner(System.in);

        // Solicita ao usuário que informe o primeiro número inteiro
        System.out.println("Informe o primeiro numero!");
        var value1 = scanner.nextInt(); // Lê o primeiro número digitado

        // Solicita ao usuário que informe o segundo número inteiro
        System.out.println("Informe o segundo numero!");
        var value2 = scanner.nextInt(); // Lê o segundo número digitado

        // Exibe o resultado da soma dos dois números com formatação
        System.out.printf("%s + %s = %s\n", value1, value2, value1 + value2);

        // Encerra o scanner para liberar recursos
        scanner.close();
    }
}

