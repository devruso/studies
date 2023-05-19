from PyPDF2 import PdfMerger

def fundir_pdfs(pdfs_entrada, pdf_saida):
    merger = PdfMerger()

    for pdf in pdfs_entrada:
        merger.append(pdf)

    merger.write(pdf_saida)
    merger.close()

pdfs_entrada = ["files/certificado-java1.pdf","files/certificado_capes.pdf","files/certificado_congresso_ufba_2021.pdf","files/certificado_hackinrio_2022.pdf","files/certificado_logica_programacao.pdf","files/certificado_pibic_2021-2022.pdf","files/Certificado_PROFICI_Inglês_Jamilson Prazeres Pestana Junior.pdf","files/congresso_virtual_ufba_2020.pdf","files/certficado_MKTLAB.pdf","files/certificado_SNCT.pdf","files/certificado_hackathon_cidades_sustentaveis.pdf","files/certificado_capes.pdf"]

pdf_saida = "files/certificados_unificados.pdf"

fundir_pdfs(pdfs_entrada, pdf_saida)
