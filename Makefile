env := nano-every

ifdef DEBUG
env := $(env)-debug
endif

build:
	pio run -e $(env)

upload:
	pio run -e $(env) -t upload

monitor:
	pio device monitor -e $(env)

list:
	pio device list

clean:
	pio run -t clean
