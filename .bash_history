sudo apt-get update
sudo apt-get install mosquitto mosquitto-clients
ls
sudo vim /etc/mosquitto/conf.d/default.conf
nano /etc/mosquitto/conf.d/default.conf
sudo nano /etc/mosquitto/conf.d/default.conf
sudo systemctl restart mosquitto
ls
sudo yum -y install nfs-utils
sudo apt-get install nfs-utils
mount -a
sudo mount -a
ls
mkdir test
ls
rm test
rm -r test
ls
mkdir home
ls
cd home
ls
cd ..
ls
cd ..
ls
cd ubuntu
ls
rm -r home
ls
cd ..
ls
cd ..
ls
cd home/ubuntu
ls
touch mosquitto_restart.h
ls
sudo nano mosquitto_restart.h
ls
chmod +x mosquitto_restart.h
sudo -i
sudo apt-get-repository ppa:certbot/certbot
sudo apt-get install certbot
sudo crontab -e
sudo nano /etc/mosquitto/conf.d/default.conf
$ sudo mosquitto_passwd -c /etc/mosquitto/passwd server
$ sudo mosquitto_passwd -c /etc/mosquitto/passwd <user>
$ sudo mosquitto_passwd -c /etc/mosquitto/passwd <user> server
$ sudo mosquitto_passwd -c /etc/mosquitto/passwd ubuntu
$ sudo mosquitto_passwd -c /etc/mosquitto/passwd <ubuntu>
$ sudo mosquitto_passwd -c /etc/mosquitto/passwd <user>
$ sudo mosquitto_passwd -c /etc/mosquitto/passwd ubuntu
whoami
$ sudo mosquitto_passwd -c /etc/mosquitto/config/passwd ubuntu
$ sudo mosquitto_passwd -c ~/etc/mosquitto/config/passwd ubuntu
wget http://repo.mosquitto.org/debian/mosquitto-repo.gpg.key
sudo apt-key add mosquitto-repo.gpg.key
cd /etc/apt/sources.list.d/
sudo wget http://repo.mosquitto.org/debian/mosquitto-wheezy.list
sudo apt-get update
sudo apt-get install mosquitto
sudo stop mosquitto
sudo mosquitto_passwd -c /etc/mosquitto/passwd ubuntu
sudo gedit /etc/mosquitto/mosquitto.conf
sudo nano /etc/mosquitto/mosquitto.conf
mosquitto -c /etc/mosquitto/mosquitto.conf
sudo nano /etc/mosquitto/mosquitto.conf
ls
ls /etc/mosquitto/
cd ../..
cd mosquitto
ls
sudo nano mosquitto.conf
sudo nano conf.d
cd conf.d
ls
sudo nano default.conf
mosquitto -c /etc/mosquitto/mosquitto.conf
ls
sudo nano default.conf
cd ..
ls
sudo nano mosquitto.conf
cd conf.d
ls
sudo nano default.conf
mosquitto -c /etc/mosquitto/mosquitto.conf
ls /var/log/mosquitto/
sudo mosquitto -c /etc/mosquitto/mosquitto.conf
ls
sudo nano default.conf
ls
cd ..
ls
sudo nano mosquitto.conf
mosquitto -c /etc/mosquitto/mosquitto.conf
sudo mosquitto -c /etc/mosquitto/mosquitto.conf
ls /tmp/dlt
ls /tmp/
touch/tmp/dlt
touch /tmp/dlt
ls /tmp/
sudo mosquitto -c /etc/mosquitto/mosquitto.conf
$ mosquitto_sub -h localhost -t test -u ubuntu -P password
mosquitto_sub
mosquitto_sub --help
mosquitto_pub -h localhost -t "test" -m "hello world" -u ubuntu -P password
mosquitto_sub -h localhost -t test -u ubuntu -P password
mosquitto_pub -h localhost -t "test" -m "hello world" -u ubuntu -P password
mosquitto_sub -h localhost -t test -u ubuntu -P password
ls
cd ..
ls
cd ..
ls
cd etc
ls
cd mosquitto/
ls
nano passwd
clear
ls
cd ../..
ls
cd etc
ls
cd mosquitto/
ls
nano passwd
mosquitto-clients
mosquitto-client
mosquitto
mosquitto_sub -t /#
sudo vim /etc/mosquitto/conf.d/default.conf
sudo nano /etc/mosquitto/conf.d/default.conf
mosquitto_sub -t /#
systemctl status mosquitto.service
end
sudo mosquitto
restart
sudo reboot
systemctl status mosquitto.service
ls
cd /etc/mosquitto
ls
cd conf.d
ls
sudo nano default.conf 
cd ..
ls
sudo nano mosquitto.conf 
systemctl status mosquitto.service
sudo nano mosquitto.conf 
nano /var/log/mosquitto/mosquitto.log 
sudo nano /var/log/mosquitto/mosquitto.log 
sudo apt-install certbot
sudo apt-get certbot
sudo apt install certbot
certbot renew --noninteractive --post-hook
certbot renew
sudo certbot renew
ls
cd conf.d
ls
sudo nano default.conf
systemctl status mosquitto.service
systemctl restart mosquitto.service
sudo su -
systemctl restart mosquitto.service
systemctl status mosquitto.service
sudo nano default.conf 
systemctl restart mosquitto.service
systemctl status mosquitto.service
mosquitto_sub -v -h broker_ip -p 1883 -t '#'
mosquitto_sub -v -h localhost -p 1883 -t '#'
mosquitto_sub -h 52.11.206.32:1883 -t "testServer" -v
mosquitto_sub -h 52.11.206.32 -t "testServer" -v
ls
mkdir ChrisServer
cd ChrisServer
c:\Users\jungl\Documents\OPCUA\open62541\build\ARCOServer.exe
ARCOServer.exe
ARCOServer
ls
sudo apt-get install wine
wine ARCOServer.exe
ls
wine ARCOServer.exe
ls
cd ChrisServer
ls
./ArcoServer.exe
./ArcoServer
ArcoServer
ArcoServer.exe
wine run ArcoServer
wine run ArcoServer.exe
wine ARCOServer.exe
cd ..
ls
cd ChrisServer
git init
git add README.txt
git add ARCOServer.exe
git commit
git remote add origin https://github.com/poresky/ChrisServer.git
git branch -M main
git remote add origin https://github.com/poresky/ChrisServer.git
git push -u origin main
python --version
deb python3 --version
python3 --version
pip --version
pip3 --version
sudo apt install python3-pip
pip3 --version
pip --version
pip3 install opcua-modeler
git clone https://github.com/open62541/open62541.git
cd open62541
git submodule update --init --recursive
cd /tools/nodeset_compiler
cd tools/nodeset_compiler
python ./nodeset_compiler.py --types-array=UA_TYPES --existing ../../deps/ua-nodeset/Schema/Opc.Ua.NodeSet2.xml --xml ARCOModel.xml ARCOModel
python3 ./nodeset_compiler.py --types-array=UA_TYPES --existing ../../deps/ua-nodeset/Schema/Opc.Ua.NodeSet2.xml --xml ARCOModel.xml ARCOModel
cd open62541
cd .. ..
cd ..
mkdir build
cd build
cmake ..
sudo snap install cmake
sudo apt install cmake
cmake ..
cmake-gui ..
sudo apt install cmake-qt-gui
cmake-gui ..
cmake .. -DUA_BUILD_SELFSIGNED_CERTIFICATE -DUA_ENABLE_AMALGAMATION -DUA_BUILD_EXAMPLES
cmake .. -UA_BUILD_SELFSIGNED_CERTIFICATE -UA_ENABLE_AMALGAMATION -UA_BUILD_EXAMPLES
gcc ARCOModel.c open62541.c myServer.c -DUA_ENABLE_AMALGAMATION=true -DUA_BUILD_SELFSIGNED_CERTIFICATE=true -o ARCOServer

cmake .. -DUA_BUILD_SELFSIGNED_CERTIFICATE=true -DUA_ENABLE_AMALGAMATION=true -DUA_BUILD_EXAMPLES=true
cmake .. -DUA_BUILD_SELFSIGNED_CERTIFICATE=true -DUA_ENABLE_AMALGAMATION=true
cmake .. -DUA_ENABLE_AMALGAMATION=true
make
install
cmake install
cmake ..
make
build
ccmake ..
make doc
cmake .. -DUA_BUILD_SELFSIGNED_CERTIFICATE=true -DUA_ENABLE_AMALGAMATION=true -DUA_BUILD_EXAMPLES=false
make
gcc ARCOModel.c open62541.c myServer.c -DUA_ENABLE_AMALGAMATION=true -DUA_BUILD_SELFSIGNED_CERTIFICATE=true -o ARCOServer
./ARCOServer
cd ..
cd open62541
python3 create_self-signed.py
ls
cd tools
ls
cd certs
python3 create_self-signed.py
ls
cd ChrisServer
ls
./ARCOServer
cd open62541
cd build
./ARCOServer
ls
cd ChrisServer
ls
cd open62541
cd
cd ChrisServer/open62541/build
ls
./ARCOServer
ls
rm ARCOServer.exe
ls
cd open62541
cd tools
cd nodeset_compiler
python3 ./nodeset_compiler.py --types-array=UA_TYPES --existing ../../deps/ua-nodeset/Schema/Opc.Ua.NodeSet2.xml --xml ARCOModel.xml ARCOModel
cd ../../build
gcc ARCOModel.c open62541.c myServer.c -DUA_ENABLE_AMALGAMATION=true -DUA_BUILD_SELFSIGNED_CERTIFICATE=true -o ARCOServer
./ARCOServer
ls
cd open62541
ls
cd build
ls
./ARCOServer
python3 ./nodeset_compiler.py --types-array=UA_TYPES --existing ../../deps/ua-nodeset/Schema/Opc.Ua.NodeSet2.xml --xml ARCOModel.xml ARCOModel
cd open62541/tools/nodeset_compiler
python3 ./nodeset_compiler.py --types-array=UA_TYPES --existing ../../deps/ua-nodeset/Schema/Opc.Ua.NodeSet2.xml --xml ARCOModel.xml ARCOModel
cd ../../build
gcc ARCOModel.c open62541.c myServer.c -DUA_ENABLE_AMALGAMATION=true -DUA_BUILD_SELFSIGNED_CERTIFICATE=true -o ARCOServer
./ARCOServer
ls
cd open62541
ls
cd build
ls
./ARCOServer
ld
ls
cd open62541/build
./ARCOServer
ls
cd open62541
ls
cd build
ls
gcc ARCOModel.c open62541.c authenticationServer.c -DUA_ENABLE_AMALGAMATION=true -DUA_BUILD_SELFSIGNED_CERTIFICATE=true -o authARCOServer
./authARCOServer
cd build
gcc ARCOModel.c open62541.c authenticationServer.c -DUA_ENABLE_AMALGAMATION=true -DUA_BUILD_SELFSIGNED_CERTIFICATE=true -o authARCOServer
cd build
gcc ARCOModel.c open62541.c authenticationServer.c -DUA_ENABLE_AMALGAMATION=true -DUA_BUILD_SELFSIGNED_CERTIFICATE=true -o authARCOServer
#include <open62541/plugin/accesscontrol_default.h>
gcc ARCOModel.c open62541.c authenticationServer.c -DUA_ENABLE_AMALGAMATION=true -DUA_BUILD_SELFSIGNED_CERTIFICATE=true -o authARCOServer
C_INCLUDE_PATH
cpp -v /dev/null -o /dev/null
gcc-I /home/ubuntu/ChrisServer/open62541/include/open62541  ARCOModel.c open62541.c authenticationServer.c -DUA_ENABLE_AMALGAMATION=true -DUA_BUILD_SELFSIGNED_CERTIFICATE=true -o authARCOServer
gcc -I /home/ubuntu/ChrisServer/open62541/include/open62541  ARCOModel.c open62541.c authenticationServer.c -DUA_ENABLE_AMALGAMATION=true -DUA_BUILD_SELFSIGNED_CERTIFICATE=true -o authARCOServer
cpp -v /dev/null -o /dev/null
cd /user/include
cd /usr/include
ls
clear
ls
cd ChrisServer
ls
cd open62541
ls
cd build
ls
cd ChrisServer
ls
cd open62541
ls
cd build
ls
./ARCOServer
ls
cd build
gcc ARCOModel.c open62541.c authenticationServer.c -DUA_ENABLE_AMALGAMATION=true -DUA_BUILD_SELFSIGNED_CERTIFICATE=true -o authARCOServer
gcc -I /home/ubuntu/ChrisServer/open62541/include/open62541  ARCOModel.c open62541.c authenticationServer.c -DUA_ENABLE_AMALGAMATION=true -DUA_BUILD_SELFSIGNED_CERTIFICATE=true -o authARCOServer
gcc ARCOModel.c open62541.c authenticationServer.c -DUA_ENABLE_AMALGAMATION=true -DUA_BUILD_SELFSIGNED_CERTIFICATE=true -o authARCOServer
ls
cd ChrisServer
ls open62541
ls build
cd build
ls
cd open62541
cd build
ls
./ARCOServer
ls
cd build
ls
./ARCOServer
ls
cd ..
ls
cd ..
ls
cd usr/include
ls
cd misc
ls
cd ..
ls
cd open62541
ls
cd build
ls
gcc ARCOModel.c open62541.c authenticationServer.c -DUA_ENABLE_AMALGAMATION=true -DUA_BUILD_SELFSIGNED_CERTIFICATE=true -o authARCOServer
ls
cd include
ls
gcc ARCOModel.c open62541.c authenticationServer.c -DUA_ENABLE_AMALGAMATION=true -DUA_BUILD_SELFSIGNED_CERTIFICATE=true -o authARCOServer
cd build
cd open62541
cd build
gcc ARCOModel.c open62541.c authenticationServer.c -DUA_ENABLE_AMALGAMATION=true -DUA_BUILD_SELFSIGNED_CERTIFICATE=true -o authARCOServer
gcc ARCOModel.c open62541.c authenticationServer.c -DUA_BUILD_SELFSIGNED_CERTIFICATE=true -o authARCOServer
gcc ARCOModel.c open62541.c authenticationServer.c -DUA_ENABLE_AMALGAMATION=true -DUA_BUILD_SELFSIGNED_CERTIFICATE=true -o authARCOServer
echo | gcc -E -Wp,-v -
gcc ARCOModel.c open62541.c authenticationServer.c -DUA_ENABLE_AMALGAMATION=true -DUA_BUILD_SELFSIGNED_CERTIFICATE=true -o authARCOServer
ls
git remote add origin https://github.com/poresky/OPCUA.git
git branch -M main
git push -u origin mainecho "# OPCUA" >> README.md
git init
git add README.md
git commit -m "first commit"
git branch -M main
git remote add origin https://github.com/poresky/OPCUA.git
git push -u origin main
ls
git push -u origin main
git add .
git submodule add ChrisServer
ls
git commit
git push -u origin main
git diff
git diff --cached
git diff
git push
cd ChrisServer
ls
cd open62541
ls
cd build
ls
