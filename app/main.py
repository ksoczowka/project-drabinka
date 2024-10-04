import ProjectDrabinka as PD
import sys
sys.path.append('./lokalny_katalog/lib/python3.4/site-packages')

path = "DATA.tsv"

data = PD.getDataFromFile(path)

print(data[int(input("Wpisz numer: "))])