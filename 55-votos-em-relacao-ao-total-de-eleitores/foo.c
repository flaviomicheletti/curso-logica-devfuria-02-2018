#include <stdio.h>
#include <assert.h>

//
// Classe Votos
//
class Votos {
public:
    float total_eleitores,
          validos,
          brancos,
          nulos;

    Votos(int total){
        total_eleitores = total;
    }

    float percValidos() {
        return validos / total_eleitores;
    }

    float percBrancos() {
        return brancos / total_eleitores;
    }

    float percNulos() {
        return nulos  / total_eleitores;
    }
};



//
// Teste de unidade
//
void testVotos (){

    Votos votos(1000);
    votos.validos = 800;
    votos.brancos = 150;
    votos.nulos   = 50;

    assert(0.8f  == votos.percValidos());
    assert(0.15f == votos.percBrancos());
    assert(0.05f == votos.percNulos());

}

//
// Início do programa
//
int main() {
    // Chamamos o teste unitário
    testVotos();
    return 0;
}
