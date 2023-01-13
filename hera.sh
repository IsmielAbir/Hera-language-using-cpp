git clone https://github.com/IsmielAbir/Hera-language-using-cpp.git

# Navigate into the repository's directory
cd Hera-language-using-cpp

# check if requirements.txt file exist then install dependencies
if [ -f "requirements.txt" ];
then
    pip install -r requirements.txt
fi

# check if setup.py file exist then install dependencies
if [ -f "setup.py" ];
then
    python setup.py install
fi

# check if myscript.py file exist then run the script
if [ -f "myscript.py" ];
then
    python myscript.py
fi