    /*
    turmas = [{nome: "turma[0].nome"}]
    window.alert(turmas[0].nome)
    */

    let turma =
        [
            {
                nome: "Turma A", // turma[0].nome
                alunos: //turma[0].alunos
                    [
                        { nome: "Jão", idade: 15 }, //turma[0].alunos[0]
                        { nome: "Maria", idade: 14 } //turma[0].alunos[1]
                    ]
            }, // turma[0]
            {
                nome: "Turma B",
                alunos:
                [
                    {nome: "jose", idade: 99 },
                    {nome: "adolfo", idade: 1945}
                ] 
            }
        ]

    for (index in turma) { //para cada unidade em turma
        turma[index].alunos.sort((b, a) => a.idade - b.idade) //organizar cada aluno por nota, do maior ao menos

        for (i in turma[index].alunos) { // para cada unidade em "alunos"
            window.alert("NOME: " + turma[index].alunos[i].nome + "\nNOTA: " + turma[index].alunos[i].idade) //mostrar nome e nota
        }

    }



