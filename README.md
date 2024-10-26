# 🤖 Projeto Robô - Olimpíada Brasileira de Robótica

Este repositório contém os códigos, vídeos e detalhes do desenvolvimento do robô que participou da **Olimpíada Brasileira de Robótica**, nas fases **Estadual** e **Nacional**. O robô foi desenvolvido para uma arena que simula um cenário pós-apocalíptico, onde ele deve resgatar vítimas (bolinhas) em uma cidade destruída, desviando de obstáculos e superando desafios.

---

## 📝 Resumo do Projeto

### Objetivo do Robô:
O robô foi projetado para seguir uma linha preta em uma arena, passando por obstáculos como:
- **Detritos** e obstáculos.
- **Encruzilhadas**.
- **Gaps** (lacunas na linha).
- **Curvas de 90º** quando detecta a cor verde.
- **Resgate de vítimas**: Na área final da arena, ele coleta as bolinhas (vítimas) espalhadas e as deposita em uma região específica que varia de arena para arena.

O robô deve completar todas essas tarefas de forma autônoma, simulando um cenário de resgate em uma cidade destruída.

---

## ⚙️ Etapas de Desenvolvimento

O desenvolvimento foi dividido em duas fases principais:

### 🏅 Fase Estadual (inclui a Regional)
- **Processador Utilizado**: Mindstorms EV3.
- **Sensores**: Utilizamos 4 sensores:
  - **Sensores de cor** para seguir a linha.
  - **Sensores de distância** para detectar obstáculos.
- **Motores**: 4 motores foram usados para movimentação e manipulação das bolinhas (vítimas).
- **Programação**: A linguagem utilizada foi **RobotC**, uma derivação do C++.
- **Desafios**: Durante o processo, foram feitos vários testes e ajustes para otimizar a performance do robô na arena.
- **Montagem**:
  - Utilizamos peças de Lego combinadas com peças feitas em **impressão 3D** e **corte a laser**, todas modeladas no software **Fusion 360**.

### 🏆 Fase Nacional
- **Extensão do EV3 com Arduino**: Para superar as limitações de entradas do EV3 (apenas 4 portas), adicionamos um **Arduino** ao sistema.
- **Protocolo de Comunicação**: Para integrar o EV3 e o Arduino, utilizamos o protocolo **Master/Slave**, onde os dados dos sensores adicionais conectados ao Arduino eram enviados ao EV3.
- **Programação**: Nesta etapa, usamos **C++** no Arduino para trabalhar com sensores adicionais.

---

## 📁 Estrutura do Repositório

Aqui está uma visão geral da organização dos arquivos neste repositório:

```plaintext
├── Fase-Estadual/
│   ├── Codigo-RobotC/
│   ├── Modelos-3D/
│   ├── Videos-Estadual/
├── Fase-Nacional/
│   ├── Codigo-Arduino/
│   ├── Codigo-RobotC-EV3/
│   ├── Modelos-3D-Atualizados/
│   ├── Videos-Nacional/

Fase-Estadual: Contém os códigos, modelos 3D e vídeos das competições Estadual e Regional.
Fase-Nacional: Contém os códigos de integração EV3-Arduino, atualizações nos modelos 3D e vídeos da fase Nacional.
```

## 🚀 Tecnologias Utilizadas

### Hardware:
- **Mindstorms EV3 para controle do robô.**
- **Arduino para expandir o número de sensores conectados.**
- **Sensores de cor e distância.**
- **Motores para movimentação e manipulação.**

### Software:
- **RobotC para programação do EV3.**
- **C++ para programação do Arduino.**
- **Fusion 360 para modelagem de peças customizadas em 3D.**
- **Impressão 3D e corte a laser para fabricação de componentes.**

## 📹 Demonstrações em Vídeo
### Confira as execuções do robô nas diferentes fases:

- **Execução na Fase Estadual:**

- **Execução na Fase Nacional:**

## 🔧 Como Executar o Código
- **Para a Fase Estadual:**

Use a IDE RobotC para carregar os códigos do robô.
Conecte o EV3 ao seu computador e faça o upload do código.

- **Para a Fase Nacional:**

Use a IDE Arduino para carregar o código no Arduino.
Use o RobotC para carregar o código no EV3.
Certifique-se de que o protocolo de comunicação entre EV3 e Arduino esteja configurado corretamente.

## 👨‍💻 Colaboradores
- **Nicolas Laredo** - Desenvolvedor principal e responsável pela montagem e programação do robô.
- **Henrique Passoni** - Montador principal do robo e desenvolvedor secundário.
