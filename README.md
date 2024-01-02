# godot-cpp
Example how to use c++ in godot

## Dependencies
```bash
sudo apt-get install build-essential scons pkg-config\
  libx11-dev libxcursor-dev libxinerama-dev libgl1-mesa-dev\
  libglu-dev libasound2-dev libpulse-dev libudev-dev libxi-dev\
  libxrandr-dev
python3 -m pip install --user scons
# git clone -b 4.2 https://github.com/godotengine/godot-cpp
```


## build

### build submodules 
```bash
git submodule update --init
```

### build godot-cpp for PLATFORM
```bash
cd godot-cpp
git submodule update --init
scons platform=<PLATFORM>
cd ..
```

### build gdexample from ./src
```bash
scons platform=linux
```