
//
// função recursiva
//
var recursiva = function () {
    console.log("Se passaram 1 segundo!");
    setTimeout(recursiva, 1000);
}

//
// executando
//
recursiva();