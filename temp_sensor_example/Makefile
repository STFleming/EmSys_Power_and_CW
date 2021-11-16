PORT=/dev/ttyUSB0
EMSYS_COMP=~/EmSys/arduino-cli compile --fqbn esp32:esp32:tinypico
EMSYS_UPLOAD=~/EmSys/arduino-cli upload --fqbn esp32:esp32:tinypico

.PHONY: serial_example full 

serial_example: serial_example/serial_example.ino
		$(EMSYS_COMP) serial_example 
		$(EMSYS_UPLOAD) -p $(PORT) serial_example 

full: full/full.ino
		$(EMSYS_COMP) full 
		$(EMSYS_UPLOAD) -p $(PORT) full 

