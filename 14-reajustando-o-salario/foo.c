#include <stdio.h>
#include <assert.h>

//
// Reajusta o salário
//
float reajustar_salario(float salario, float reajuste) {
    return salario * reajuste;
}

int main (){
    // Este é o nosso teste.
    // Sabemos que 1000 * 0.15 = 150, logo
    // a função `reajustar_salario` deve retornar valor igual a 150.
    assert(150.0f == reajustar_salario(1000, 0.15));

    return 0;
}
