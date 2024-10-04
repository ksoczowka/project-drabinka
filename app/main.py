import sys
sys.path.append('./lokalny_katalog/lib/python3.4/site-packages')
import ProjectDrabinka as PD

path = "DATA.tsv"

data = PD.getDataFromFile(path)

print(data[int(input("Wpisz numer: "))])