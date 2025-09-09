import java.util.Scanner;

public class programa2 {

    public static void main(String[] args) {
        var scanner = new Scanner(System.in);
        System.out.println("Informe seu nome.");
        var nome = scanner.next();
        System.out.println("Informa sua idade.");
        var idade = scanner.nextInt();
        System.out.println("Você é emancipado? (responder com S para sim ou N para não)");
        var Emancipado = scanner.next().equalsIgnoreCase("S");

    if(idade >= 18){
        System.out.printf("Olá, %s! Você tem mais de 18 anos e está habilitado a dirigir!\n", nome); 
    } else if (idade >= 16 && Emancipado) {
        System.out.printf("Olá, %s! Você é emancipado, tem %s anos e está habilitado a dirigir!\n", nome, idade);
    } else {
        System.out.printf("Olá, %s! Você tem menos de 18 anos e não está habilitado a dirigir!\n", nome);
    }  
    
    
    


      
    }
}



