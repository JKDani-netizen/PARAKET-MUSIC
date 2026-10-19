
.SUFFIXES:

ifeq ($(strip $(DEVKITARM)),)
$(error DEVKITARM no esta configurado)
endif

TOPDIR ?= $(CURDIR)

include $(DEVKITARM)/3ds_rules

TARGET := BLUE_MUSIC_3DS
BUILD := build
SOURCES := source
DATA :=
INCLUDES :=

APP_TITLE := BLUE MUSIC 3DS
APP_DESCRIPTION := Reproductor de musica
APP_AUTHOR := Blue Music

ARCH := -march=armv6k -mtune=mpcore -mfloat-abi=hard -mtp=soft
CFLAGS := -g -Wall -O2 -mword-relocations -ffunction-sections $(ARCH)
CFLAGS += $(INCLUDE) -D__3DS__
LDFLAGS = -specs=3dsx.specs -g $(ARCH)
LIBS := -lctru -lm
LIBDIRS := $(CTRULIB)

include $(DEVKITARM)/base_rules
