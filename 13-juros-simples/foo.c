#include <stdio.h>
#include <assert.h>

//
// Calcula o juros simples
//
float juros_simples(float capital, float taxa, int n_periodos) {
    return capital * taxa * n_periodos;
}

int main (){
    // Este é o nosso teste.
    // Sabemos que 16000 * 0.04 * 4 = 2560, logo
    // a variável `juros` deve ter o valor igual a 2560.
    assert(2560 == juros_simples(16000, 0.04, 4));
    return 0;
}
