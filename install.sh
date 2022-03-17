echo "Installing packages for Debian or derivative (apt)"
# Add i386 arch for wine32
dpkg --add-architecture i386
apt update
apt install -y curl git python3 python3-pip python3-setuptools build-essential binutils-mips-linux-gnu dos2unix less libglib2.0-0 wine wine32 wine64 libwine libwine:i386 fonts-wine|| exit 1
python3 -m pip install -r /requirements.txt --no-cache-dir