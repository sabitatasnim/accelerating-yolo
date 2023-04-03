# always run source /tools/Xilinx/Vitis/2022.1/settings64.sh before running the makefile

# compiler tools
XILINX_VITIS ?= /tools/Xilinx/Vitis/2022.1

HOST_CXX ?= aarch64-linux-gnu-g++
RM = rm -f
RMDIR = rm -rf

VITIS_PLATFORM = kv260_custom
VITIS_PLATFORM_DIR = /home/davendra/kv260_custom_pkg/kv260_custom/export/kv260_custom
VITIS_PLATFORM_PATH = $(VITIS_PLATFORM_DIR)/kv260_custom.xpfm
SYSROOT = /home/davendra/kv260_custom_pkg/sysroots/cortexa72-cortexa53-xilinx-linux

# host compiler global settings
CXXFLAGS += -std=c++1y -DVITIS_PLATFORM=$(VITIS_PLATFORM) -D__USE_XOPEN2K8 -I$(SYSROOT)/usr/include -I$(SYSROOT)/usr/include/glog/ -I$(SYSROOT)/usr/include/opencv4/ -I$(SYSROOT)/usr/include/google/ -I${SYSROOT}/usr/include/vitis/ai/ -I/tools/Xilinx/Vitis_HLS/2022.1/include/ -I$(SYSROOT)/usr/include/xrt/ -O2 -g -Wall -std=c++17 -c -fmessage-length=0 --sysroot=$(SYSROOT)

LDFLAGS += -lglog -lvitis_ai_library-xnnpp -lvitis_ai_library-model_config -lprotobuf -lvitis_ai_library-dpu_task -lvart-mem-manager -lxir -lunilog -lvart-buffer-object -lvart-runner -lvart-util -lvart-xrt-device-handle -lopencv_core -lopencv_video -lopencv_videoio -lopencv_imgproc -lopencv_imgcodecs -lopencv_highgui -lvart-dpu-runner -lvart-dpu-controller -lvart-runner-assistant -lvart-trace -lxilinxopencl -lpthread -lrt -ldl -lcrypt -lstdc++ -L/home/davendra/Documents/uoft/capstone/DPUCZDX8G/app/samples/lib -L$(SYSROOT)/usr/lib/ --sysroot=$(SYSROOT)

#
# host files
#

HOST_OBJECTS += src/lib/yolo_app.o src/lib/yoloRunner.o

HOST_EXE = yolo_app

BUILD_SUBDIRS += src/

#
# primary build targets
#

.PHONY: all clean
all:  $(HOST_EXE)

clean:
	-$(RM) $(HOST_EXE) $(HOST_OBJECTS)

.PHONY: incremental
incremental: all


nothing:

#
# host rules
#
src/lib/yoloRunner.o: src/yoloRunner.cpp
	-@mkdir -p $(@D)
	$(HOST_CXX) $(CXXFLAGS) -o "$@" "$<"

src/lib/yolo_app.o: src/demo_yolov5.cpp src/yoloRunner.cpp 
	-@mkdir -p $(@D)
	$(HOST_CXX) $(CXXFLAGS) -o "$@" "$<"

$(HOST_EXE): $(HOST_OBJECTS)
	$(HOST_CXX) -o "$@" $(+) $(LDFLAGS)
