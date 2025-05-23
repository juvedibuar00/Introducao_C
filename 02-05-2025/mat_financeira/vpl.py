# Cálculo do VPL para o projeto da Michelle Consultoria

# Dados do projeto
investimento_inicial = -1000000  # R$1.000.000 (negativo porque é saída de caixa)
fluxo_anual = 200000             # R$200.000 por ano
tma = 0.15                       # 15% ao ano
vida_util = 10                   # 10 anos

# Função para calcular VPL
def calcular_vpl(investimento, fluxo, taxa, periodos):
    vpl = investimento
    for ano in range(1, periodos + 1):
        vpl += fluxo / ((1 + taxa) ** ano)
    return vpl

# Cálculo do VPL
vpl_projeto = calcular_vpl(investimento_inicial, fluxo_anual, tma, vida_util)

# Resultado formatado
print("\n" + "="*50)
print("ANÁLISE DE VIABILIDADE - MICHELLE CONSULTORIA")
print("="*50)
print(f"Investimento Inicial: R${-investimento_inicial:,.2f}")
print(f"Fluxo de Caixa Anual: R${fluxo_anual:,.2f}")
print(f"Vida Útil do Projeto: {vida_util} anos")
print(f"Taxa Mínima de Atratividade: {tma*100:.0f}% a.a.")
print("-"*50)
print(f"Valor Presente Líquido (VPL): R${vpl_projeto:,.2f}")

# Análise de decisão
if vpl_projeto > 0:
    print("\nRECOMENDAÇÃO: O projeto é VIÁVEL (VPL positivo)")
    print("Justificativa: O retorno supera a TMA de 15% a.a.")
elif vpl_projeto == 0:
    print("\nRECOMENDAÇÃO: Projeto INDIFERENTE (VPL = 0)")
    print("Justificativa: O retorno equivale exatamente à TMA")
else:
    print("\nRECOMENDAÇÃO: O projeto é INVIÁVEL (VPL negativo)")
    print("Justificativa: O retorno não atinge a TMA mínima")

# Detalhamento dos fluxos descontados
print("\n" + "-"*50)
print("DETALHAMENTO DOS FLUXOS DESCONTADOS")
print("-"*50)
print("Ano | Fluxo Anual | Fator Desc. | Valor Presente")
print("-"*50)

for ano in range(1, vida_util + 1):
    fator_desconto = (1 + tma) ** ano
    vp_fluxo = fluxo_anual / fator_desconto
    print(f"{ano:3} | R${fluxo_anual:>9,.2f} | {1/fator_desconto:.4f}  | R${vp_fluxo:>10,.2f}")

print("="*50 + "\n")