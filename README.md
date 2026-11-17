# Atividades — estados, funções e temporização

O objetivo é praticar:

- estados de funcionamento;
- transições entre estados;
- organização do código em funções;
- leitura de botões;
- temporização com `millis()`;
- testes e explicação do protótipo.

## Organização da entrega

Cada atividade deverá ficar em sua própria pasta.

Exemplo:

```text
aula-1/
└── atividade-1/
    ├── atividade-1.ino
    ├── README.md
    └── prototipo.png
```

Cada pasta deverá possuir:

1. o código com o nome `atividade-x.ino`, substituindo `x` pelo número da atividade;
2. o link do projeto no Tinkercad, Wokwi ou em outra plataforma utilizada;
3. uma imagem ou captura de tela mostrando a estrutura do protótipo;
4. um `README.md` explicando como o sistema funciona.

O projeto precisa estar compartilhado de forma que o professor consiga abrir o link.

## Modelo do README de cada atividade

```md
# Atividade X — Nome da atividade

## Plataforma e link

- Plataforma: Tinkercad, Wokwi ou outra
- Link: COLE_O_LINK_AQUI

## Imagem do protótipo

![Estrutura do protótipo](prototipo.png)

## Componentes utilizados

- Arduino Uno
- Liste os demais componentes

## Como funciona

Explique os estados do sistema, o que provoca cada mudança de estado e o comportamento dos componentes.

## Testes realizados

1. Descreva uma entrada ou condição testada.
2. Informe o resultado esperado.
3. Informe o resultado observado.
```

---

# Aula 1 — Estados e transições

Utilize uma variável para representar o estado atual e apresente o estado no Monitor Serial ou no LCD.

## Atividade 1 — Semáforo controlado por botão

Desenvolva um semáforo com três LEDs.

Requisitos:

- possuir os estados `VERMELHO`, `VERDE` e `AMARELO`;
- iniciar no vermelho;
- utilizar um botão para avançar para o próximo estado;
- retornar ao vermelho depois do amarelo;
- permitir somente uma mudança por acionamento;
- mostrar o estado atual no Monitor Serial.
- Plataforma: Tinkercad
- Link: https://www.tinkercad.com/things/2S6YrkmJKwb/editel

Código: `atividade-1.ino`

## Atividade 2 — Sistema de alarme

Desenvolva um alarme com botão, LED e buzzer.

Requisitos:

- possuir os estados `DESATIVADO`, `ATIVADO` e `ALERTA`;
- utilizar um botão para ativar o sistema;
- utilizar outro botão ou sensor para representar uma detecção;
- acionar o buzzer somente no estado de alerta;
- permitir o retorno ao estado desativado;
- informar cada transição no Monitor Serial.

Código: `atividade-2.ino`

## Atividade 3 — Cancela de estacionamento

Desenvolva uma cancela utilizando servo e botão.

Requisitos:

- possuir os estados `FECHADA`, `ABRINDO`, `ABERTA` e `FECHANDO`;
- iniciar fechada;
- utilizar o botão para solicitar a abertura;
- movimentar o servo para representar a cancela;
- permanecer aberta por um tempo determinado;
- retornar automaticamente ao estado fechado.

Código: `atividade-3.ino`

## Atividade 4 — Painel de atendimento

Desenvolva um painel que represente um atendimento.

Requisitos:

- possuir os estados `AGUARDANDO`, `ATENDENDO` e `FINALIZADO`;
- utilizar um botão para iniciar o atendimento;
- utilizar outro acionamento para finalizar;
- apresentar o estado no LCD ou Monitor Serial;
- acender um LED diferente para cada estado;
- retornar ao estado inicial depois da finalização.

Código: `atividade-4.ino`

## Atividade 5 — Controle de acesso

Desenvolva um sistema que represente a liberação de acesso.

Requisitos:

- possuir os estados `BLOQUEADO`, `LIBERADO` e `ENCERRANDO`;
- utilizar um botão para liberar o acesso;
- acender o LED verde quando o acesso estiver liberado;
- manter o LED vermelho ligado quando estiver bloqueado;
- encerrar o acesso depois de um tempo determinado;
- apresentar as mudanças no Monitor Serial ou LCD.

Código: `atividade-5.ino`

---

# Aula 2 — Organização em funções

Organize o programa em funções. Evite colocar todo o funcionamento diretamente dentro de `loop()`.

## Atividade 6 — Alerta de temperatura

Desenvolva um painel com sensor de temperatura e LEDs.

Requisitos:

- possuir os estados `NORMAL`, `ATENCAO` e `ALERTA`;
- separar a leitura do sensor em uma função;
- manter a conversão para temperatura em uma função;
- criar uma função para atualizar os LEDs;
- apresentar temperatura e estado no Monitor Serial;
- acionar o buzzer somente no estado de alerta.

Código: `atividade-6.ino`

## Atividade 7 — Temporizador ajustável

Desenvolva um temporizador cujo tempo seja escolhido com um potenciômetro.

Requisitos:

- possuir os estados `CONFIGURANDO`, `CONTANDO` e `FINALIZADO`;
- utilizar uma função para ler o potenciômetro;
- utilizar uma função para iniciar a contagem;
- apresentar o tempo selecionado no LCD ou Monitor Serial;
- iniciar por botão;
- acionar um LED ou buzzer ao finalizar.

Código: `atividade-7.ino`

## Atividade 8 — Alimentador automático

Desenvolva uma simulação de alimentador utilizando servo.

Requisitos:

- possuir os estados `AGUARDANDO`, `AVISANDO`, `ABRINDO` e `FECHANDO`;
- iniciar o ciclo por botão;
- criar uma função para o aviso sonoro;
- criar funções para abrir e fechar o servo;
- apresentar o estado atual no Monitor Serial;
- impedir um novo ciclo enquanto o anterior estiver em execução.

Código: `atividade-8.ino`

## Atividade 9 — Alerta de luminosidade

Desenvolva um sistema utilizando LDR, LEDs e buzzer.

Requisitos:

- possuir os estados `CLARO`, `ESCURO` e `ALERTA_SILENCIADO`;
- criar uma função para ler o LDR;
- criar uma função para atualizar as saídas;
- utilizar um botão para silenciar temporariamente o buzzer;
- manter a leitura funcionando enquanto o alerta estiver silenciado;
- apresentar leitura e estado no Monitor Serial.

Código: `atividade-9.ino`

## Atividade 10 — Menu de mensagens

Desenvolva um menu com LCD e dois botões.

Requisitos:

- armazenar pelo menos quatro mensagens em um array;
- utilizar um botão para avançar;
- utilizar outro botão para selecionar;
- criar uma função para apresentar o item atual;
- criar uma função para confirmar a seleção;
- retornar ao início depois da confirmação.

Código: `atividade-10.ino`

---

# Aula 3 — Temporização não bloqueante

Utilize `millis()` para controlar o tempo. As ações principais não deverão depender de longos `delay()`.

## Atividade 11 — Temporizador de cozinha

Desenvolva um temporizador com botão, LCD e buzzer.

Requisitos:

- possuir os estados `AGUARDANDO`, `CONTANDO` e `PRONTO`;
- iniciar uma contagem de 10 segundos por botão;
- atualizar o tempo no LCD a cada segundo;
- utilizar `millis()`;
- acionar o buzzer ao terminar;
- retornar ao início depois da confirmação do usuário.

Código: `atividade-11.ino`

## Atividade 12 — Preparo de pedido

Desenvolva um painel que represente o preparo de um pedido.

Requisitos:

- possuir os estados `PEDIDO_RECEBIDO`, `PREPARANDO`, `PRONTO` e `ENTREGUE`;
- iniciar o preparo por botão;
- apresentar uma contagem regressiva;
- manter o botão sendo verificado durante a contagem;
- permitir a confirmação da entrega;
- retornar ao estado inicial para um novo atendimento.

Código: `atividade-12.ino`

## Atividade 13 — Travessia de pedestres

Desenvolva um semáforo com solicitação de travessia.

Requisitos:

- manter o trânsito normalmente no estado verde;
- registrar a solicitação quando o botão for pressionado;
- executar a sequência amarelo, vermelho e travessia;
- utilizar `millis()` para controlar os intervalos;
- não iniciar duas sequências ao mesmo tempo;
- retornar automaticamente ao funcionamento normal.

Código: `atividade-13.ino`

## Atividade 14 — Jogo de reação

Desenvolva um jogo que meça o tempo de reação do usuário.

Requisitos:

- possuir os estados `AGUARDANDO`, `PREPARANDO`, `LIBERADO` e `RESULTADO`;
- aguardar um tempo antes de acender o LED;
- utilizar `millis()` para medir a reação;
- registrar o instante em que o LED acende;
- registrar o instante em que o botão é pressionado;
- apresentar o resultado no Monitor Serial ou LCD.

Código: `atividade-14.ino`

## Atividade 15 — Painel de embarque

Desenvolva um painel que represente a chamada para embarque em um transporte.

Requisitos:

- possuir os estados `AGUARDANDO`, `EMBARQUE`, `ENCERRANDO` e `ENCERRADO`;
- iniciar a chamada por botão;
- apresentar uma contagem regressiva;
- fazer um LED piscar sem utilizar `delay()`;
- acionar o buzzer nos segundos finais;
- apresentar o encerramento e retornar ao início.

Código: `atividade-15.ino`

---

# Verificação antes da entrega

- [ ] Cada atividade está em uma pasta própria.
- [ ] O arquivo `.ino` possui o mesmo número da atividade.
- [ ] O link do protótipo está no `README.md` da atividade.
- [ ] A imagem do protótipo foi adicionada à pasta.
- [ ] A imagem aparece corretamente no `README.md`.
- [ ] O funcionamento foi explicado com palavras próprias.
- [ ] Os estados e as transições foram identificados.
- [ ] Os testes realizados foram registrados.
- [ ] O link compartilhado pode ser aberto pelo professor.
