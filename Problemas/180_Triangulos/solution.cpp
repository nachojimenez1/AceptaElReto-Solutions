import java.util.Scanner;

public class triangulos {
    
    public static void main(String[] args){

        Scanner s = new Scanner(System.in);

        int numTriangulos = s.nextInt();

        for(int i = 0; i<numTriangulos ; i++){
            // Leemos a, b, c
            long a = s.nextLong(); // Usamos long para evitar desbordamiento al elevar al cuadrado
            long b = s.nextLong();
            long c = s.nextLong();

            // 1. Buscamos el mayor manualmente (es rapidísimo)
            long max = a;
            if (b > max) max = b;
            if (c > max) max = c;

            // 2. Calculamos la suma de los otros dos lados
            // (Suma total menos el mayor)
            long sumaOtros = (a + b + c) - max;

            // 3. Comprobación de triángulo IMPOSIBLE
            if (sumaOtros <= max) {
                System.out.println("IMPOSIBLE");
            } else {
                // 4. Pitágoras
                // Calculamos a^2 + b^2 + c^2 y le restamos max^2 para tener la suma de los catetos al cuadrado
                long sumaCuadradosTodos = (a * a) + (b * b) + (c * c);
                long cuadradosCatetos = sumaCuadradosTodos - (max * max);
                long cuadradoHipotenusa = max * max;
                
                if (cuadradosCatetos == cuadradoHipotenusa) {
                    System.out.println("RECTANGULO");
                } else if (cuadradosCatetos < cuadradoHipotenusa) {
                    System.out.println("OBTUSANGULO");
                } else {
                    System.out.println("ACUTANGULO");
                }
            }
        
        }
        
        s.close();

    }

}$