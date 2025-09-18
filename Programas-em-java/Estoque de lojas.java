import java.util.LinkedHashMap;
import java.util.Map;
import java.util.Scanner;

public class OrganizandoEstoque {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // 📝 Mensagem explicando o formato da entrada
        System.out.println("Digite os dados de estoque no formato 'codigo:quantidade', separados por vírgulas.");
        System.out.println("Exemplo: LOJA1:10,LOJA2:5,LOJA1:3");

        // 📥 Entrada do usuário
        String entrada = scanner.nextLine();

        // 🔄 Processamento
        String saida = organizarEstoque(entrada);

        // 📤 Saída formatada
        System.out.println("Resumo do estoque consolidado por loja:");
        System.out.println(saida);

        scanner.close();
    }

    public static String organizarEstoque(String entrada) {
        // 1. Criar o mapa que mantém a ordem de inserção
        Map<String, Integer> estoque = new LinkedHashMap<>();

        // 2. Separar os pares usando vírgula
        String[] lojas = entrada.split(",");

        for (String loja : lojas) {
            // 3. Separar código e quantidade
            String[] partes = loja.split(":");
            String codigo = partes[0].trim();
            int quantidade = Integer.parseInt(partes[1].trim());

            // 4. Atualizar o mapa: somar se já existir, ou adicionar novo
            estoque.put(codigo, estoque.getOrDefault(codigo, 0) + quantidade);
        }

        // 5. Montar a string de saída
        StringBuilder sb = new StringBuilder();
        for (Map.Entry<String, Integer> entry : estoque.entrySet()) {
            sb.append(entry.getKey()).append(":").append(entry.getValue()).append(",");
        }

        // 6. Remover a última vírgula
        if (sb.length() > 0) {
            sb.setLength(sb.length() - 1);
        }

        return sb.toString();
    }
}

