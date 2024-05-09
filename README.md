# MIDI Percussion Kit

Arduino sketch to manage and play MIDI percussion instruments.

The interface is designed around a piezo sensor, but any digital inputs can be used to trigger the instrument.

Described int the blog article at the [Arduino++ Blog](https://arduinoplusplus.wordpress.com/)

If you like and use this code please consider making a small donation using [PayPal](https://paypal.me/MajicDesigns/4USD)

## Build

### arduino-cli

* find board
```
arduino-cli board list
```

* compile
```
arduino-cli compile --fqbn arduino:megaavr:nona4809 MIDI_PercussionKit.ino
```

* upload
```
arduino-cli upload -p /dev/ttyACM0 --fqbn arduino:megaavr:nona4809
```

* monitor
```
arduino-cli monitor -p /dev/ttyACM0 --config baudrate=31250
# debug
arduino-cli monitor -p /dev/ttyACM0 --config baudrate=57600
```

### platform io

* install
```
  pip install platformio
```

* use make targets
