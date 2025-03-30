from cpf_cnpj import Documento

ex_cpf = "10487974140"
ex_cnpj = "92283290000146"

documento = Documento.cria_documento(ex_cnpj)
print(documento)