
mkdir Zephyr
sudo apt install --no-install-recommends git cmake ninja-build gperf \
  ccache dfu-util device-tree-compiler wget \
  python3-dev python3-pip python3-setuptools python3-tk python3-wheel xz-utils file \
  make gcc gcc-multilib g++-multilib libsdl2-dev libmagic1

INstall virtual enviroment
  	python3 -m venv ~/Zephyr/.venv
	source ~/Zephyr/.venv/bin/activate

	pip install west
	west init ~/Zephyr/
 	cd Zephyr/
	west update
	west packages pip --install

	west zephyr-export
	cd zephyr/
	west packages pip --install

wget https://raw.githubusercontent.com/raspberrypi/pico-setup/master/pico_setup.sh
chmod +x pico_setup.sh
./pico_setup.sh

git clone https://github.com/kboko/KLightModule.git
cd KLightModule
west build -b rpi_pico_w  -- -DOPENOCD=/usr/local/bin/openocd -DOPENOCD_DEFAULT_PATH=/usr/local/share/openocd/scripts -DRPI_PICO_DEBUG_ADAPTER=cmsis-dap
