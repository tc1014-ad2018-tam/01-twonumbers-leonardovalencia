/*
 * Este programa nos ayudara a calcular la multiplicación
 * división, suma y resta de dos numeros cualesquiera
 *
 * Autor:Leonardo Valencia
 * Fecha: 23 de Agosto del 2018
 * Correo: a01412017@itesm.mx
 */

int main() {
    printf("Hello, World!\n");

    //declaración de variables
    float num1;
    float num2;
    float Resultado1;
    float Resultado2;
    float Resultado3;
    float Resultado5;

    //aquí le pido los dos numeros al usuario
    printf("Bienvenido, te ayduare a calcular la suma, resta, mulipliación y división de dos numeros cualqesquiera\n");
    printf("Dime un numero");
    scanf("%f", &num1);
    printf("Dime otro numero ");
    scanf("%f", &num2);

    //aqui calculo la suma
    Resultado1 = (num1 + num2);
    printf("Suma = ""%f \n", Resultado1);

    //aqui calculo la multipliacion
    Resultado2 = (num1 * num2);
    printf("Multiplicacion = ""%f \n", Resultado2);

    //aquí calculo la division
    Resultado3 = (num1 / num2);
    printf("Division = ""%f \n", Resultado3);

    //aqui calculo la resta
    Resultado5 = (num1 - num2);
    printf("Resta = ""%f \n", Resultado5);


    return 0;
}
