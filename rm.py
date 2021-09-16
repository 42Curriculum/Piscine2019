import os
import shutil

dirs = [shutil.rmtree(x[0]) for x in os.walk(".") if x[0].endswith(".vscode")]

print(dirs)
