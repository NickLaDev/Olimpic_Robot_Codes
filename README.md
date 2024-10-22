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
