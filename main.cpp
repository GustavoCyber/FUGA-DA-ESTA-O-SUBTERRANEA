#include <iostream>
#include <string>

/* * ============================================================
 * TRABALHO DE ALGORITMOS E PROGRAMAÇÃO - RPG DE TEXTO
 * AUTORES: Gustavo de Lima Moraes
 * CURSO: Ciências da Computação - 1º Semestre
 * ============================================================
 */

using namespace std;

int main() {
    // Declaração de variáveis
    int oxigenio = 100;
    char escolha1, escolha2, escolhaFinal;

    // Início da história e apresentação do recurso
    cout << "--- BEM-VINDO A FUGA DA ESTACAO SUBTERRANEA ---" << endl;
    cout << "Status inicial de Oxigenio: " << oxigenio << "%" << endl;
    cout << "A estacao esta entrando em colapso. Suas decisoes afetam seu suprimento de ar!" << endl;
    cout << "------------------------------------------------" << endl;

    // --- PRIMEIRA DECISÃO ---
    cout << "\n[FASE 1: O ALARME]" << endl;
    cout << "O corredor principal esta em chamas, bloqueando a saida rapida." << endl;
    cout << "A) Ir pelo duto de ventilacao (Caminho longo e seguro)." << endl;
    cout << "B) Correr pelo fogo (Caminho rapido, mas perigoso)." << endl;
    cout << "Sua escolha: ";
    cin >> escolha1;

    // Lógica de cálculo: Caminho A gasta mais oxigênio pelo tempo, B gasta menos tempo
    if (escolha1 == 'A' || escolha1 == 'a') {
        oxigenio = oxigenio - 20; 
        cout << ">> Voce rastejou pelo duto. Demorou muito e voce perdeu 20% de oxigenio." << endl;
    } else {
        oxigenio = oxigenio - 10;
        cout << ">> Voce atravessou o fogo! Foi rapido, mas o calor danificou a vedacao do traje." << endl;
    }
    cout << "STATUS ATUAL: " << oxigenio << "% de oxigenio restante." << endl;

    // --- SEGUNDA DECISÃO ---
    cout << "\n[FASE 2: O BLOQUEIO]" << endl;
    cout << "Voce chegou a sala de controle. A porta eletronica esta travada." << endl;
    cout << "A) Tentar hackear o sistema (Exige calma e tempo)." << endl;
    cout << "B) Forcar a porta com uma alavanca (Exige esforco fisico intenso)." << endl;
    cout << "Sua escolha: ";
    cin >> escolha2;

    // Lógica de esforço físico vs tempo
    if (escolha2 == 'A' || escolha2 == 'a') {
        oxigenio = oxigenio - 15;
        cout << ">> Voce hackeou o sistema. Perda de 15% de oxigenio pela espera." << endl;
    } else {
        oxigenio = oxigenio - 25;
        cout << ">> Voce forcou a porta! O esforço fisico acelerou seu batimento e gastou 25% de ar." << endl;
    }
    cout << "STATUS ATUAL: " << oxigenio << "% de oxigenio restante." << endl;

    // --- TERCEIRA DECISÃO (FINAIS) ---
    cout << "\n[FASE 3: A CAPSULA DE ESCAPE]" << endl;
    cout << "Voce esta dentro da capsula, mas precisa de um comando final para lancar." << endl;

    // Ramificação baseada na ESCOLHA 1 (O estado do seu traje/tempo)
    if (escolha1 == 'A' || escolha1 == 'a') {
        // Se escolheu o Duto no início, tem oxigênio mais baixo, mas o traje está bom
        cout << "Seu traje esta integro, mas o nivel de ar esta critico." << endl;
        cout << "A) Iniciar calibragem manual dos motores." << endl;
        cout << "B) Procurar por cilindros de oxigenio extras na sala antes de ir." << endl;
        cin >> escolhaFinal;

        if (escolhaFinal == 'A' || escolhaFinal == 'a') {
            cout << "\n*** MENTE BOA: O ESPECIALISTA ***" << endl;
            cout << "Voce foi preciso e decolou a tempo. Voce sobreviveu com " << oxigenio << "% de ar!" << endl;
        } else {
            oxigenio = oxigenio - 50; // Penalidade fatal por demora
            cout << "\n*** OXIGENIO ZERADO: ASFIXIA ***" << endl;
            cout << "Sua ganancia foi fatal. O oxigenio chegou a 0% enquanto voce procurava itens." << endl;
        }
    } 
    else {
        // Se escolheu o Fogo no início, chegou rápido, mas o traje está falhando
        cout << "Seu traje esta apitando! O calor do inicio causou uma rachadura no vidro." << endl;
        cout << "[A] Lancamento imediato (Ignorar protocolos de seguranca)." << endl;
        cout << "[B] Tentar selar a rachadura com resina antes de decolar." << endl;
        cin >> escolhaFinal;

        if (escolhaFinal == 'A' || escolhaFinal == 'a') {
            cout << "\n*** EXPERTISE É TUDO: SOBREVIVENTE VELOZ ***" << endl;
            cout << "Voce saiu antes que o traje quebrasse! Oxigenio final: " << oxigenio << "%" << endl;
        } else {
            oxigenio = 0; // Morte súbita por falha do equipamento
            cout << "\n*** GAME OVER: DESCOMPRESSAO ***" << endl;
            cout << "O tempo que voce perdeu tentando consertar fez o traje explodir. Voce morreu." << endl;
        }
    }

    cout << "\n--- FIM DE JOGO ---" << endl;

    return 0;
}
