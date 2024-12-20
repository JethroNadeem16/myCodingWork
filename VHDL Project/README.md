I've added a link to where you can access and download the folder for the VHDL Project.
The entire VHDL folder is for both the Pong and Brick Breaker Project. If you wish to run one or the other simply replace the main module code with the code you wish from the txt files in this folder.
Ignore the module name in the brick breaker code being Pong. It started out that way and it breaks everything if you try to change it. 
In the website link provided if you hover over the area of the file, you can see a square and northeast facing arrow in the top-right section. Click that to go to a google drive page to download the file. You can click on the file itself but will have to go back one directory to download the whole folder.
This project was made based on a Zybo Z7-10 fpga. The constraints file was set for that.

File path to access project: Pong & Brick Breaker -> Pong and Brick Breaker -> Vivado -> Pong

This was made using Vivado 2022.3. It can be run on nearly any version of Vivado as long as the IP is updated.

To Update IP: 1) Upgrade the project to your version of Vivado
2) Click IP Catalog (In left panel), delete the User Repository (it points to the wrong directory) -- right click and 'Remove from project'
3) Click Setting, expand IP, click Repository, click the '+' sign, and navigate to
   <path>/VivadoHDMIAndGPIO/z7_hdmi_driver/ip
   and click select
4) Click IP Status tab along bottom, click 'Upgrade Selected'
5) Run synthesis, implementation and generate bitstream
