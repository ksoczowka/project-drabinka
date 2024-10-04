import ProjectDrabinka as PD

path = "DATA.tsv"

tournament = PD.Tournament(path)

print(tournament.getAllParticipants())