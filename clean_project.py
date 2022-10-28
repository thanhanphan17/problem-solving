import os

main_dir = os.path.dirname(os.path.realpath(__file__))

folders = os.listdir(main_dir)

for (dirname, dirs, files) in os.walk(main_dir):
    for file in files:
        if file.endswith('.exe'):
            source_file = os.path.join(dirname, file)
            os.remove(source_file)
