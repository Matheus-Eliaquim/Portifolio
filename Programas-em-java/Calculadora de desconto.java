import java.math.BigDecimal; // Importa a classe para operações precisas com números decimais
import java.util.Scanner;    // Importa a classe para leitura de dados do usuário via console

public class PromocaoRelampago {

    public static void main(String[] args) {
        // Cria um objeto Scanner para capturar a entrada do usuário
        Scanner scanner = new Scanner(System.in);
        System.out.println("Insira o valor da compra:");
        
        // Lê o valor da compra como uma string
        String valorCompra = scanner.nextLine();
        
        // Encerra o Scanner para liberar recursos
        scanner.close();

        // Chama o método que calcula o desconto e exibe o resultado
        String percentual = obterDescontoPercentual(valorCompra);
        System.out.println("Desconto aplicado: " + percentual);
    }

    /**
     * Método que calcula o percentual de desconto com base no valor da compra.
     * 
     * @param valorCompra Valor da compra em formato String
     * @return Percentual de desconto como String (ex: "10%")
     */
    public static String obterDescontoPercentual(String valorCompra) {
        // Converte a string para BigDecimal para garantir precisão nos cálculos
        BigDecimal valor = new BigDecimal(valorCompra);
        BigDecimal descontoPercentual;

        // Faixa 1: até R$50,00 → sem desconto
        if (valor.compareTo(new BigDecimal("0")) > 0 && valor.compareTo(new BigDecimal("50.00")) <= 0) {
            descontoPercentual = BigDecimal.ZERO;
        
        // Faixa 2: entre R$50,01 e R$100,00 → 10% de desconto
        } else if (valor.compareTo(new BigDecimal("50.00")) > 0 && valor.compareTo(new BigDecimal("100.00")) <= 0) {
            descontoPercentual = new BigDecimal("0.10");
        
        // Faixa 3: acima de R$100,00 → 20% de desconto
        } else if (valor.compareTo(new BigDecimal("100.00")) > 0) {
            descontoPercentual = new BigDecimal("0.20");
        
        // Valor inválido (zero ou negativo)
        } else {
            return "Valor inválido";
        }

        // Converte o valor decimal do desconto para porcentagem (ex: 0.10 → 10%)
        BigDecimal porcentagem = descontoPercentual.multiply(new BigDecimal("100"));
        
        // Arredonda para o inteiro mais próximo e retorna como string com símbolo de porcentagem
        return porcentagem.setScale(0, BigDecimal.ROUND_HALF_UP) + "%";
    }
}

