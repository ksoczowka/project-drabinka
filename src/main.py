import ProjectDrabinka as PD

path = "DATA.tsv"

data = PD.getDataFromFile(path)

print(data[int(input("Wpisz numer: "))])