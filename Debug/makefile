################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir.mk
-include objects.mk

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
ARCHIVES += \
libUSER_OBJS.a \


# All Target
all: tru2air-onboard-i2c-slave.elf

# Tool invocations
tru2air-onboard-i2c-slave.elf: $(OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: MSP430 Linker'
	/home/blaise/Programs/msp430-toolchain-linux-amd64-3.0/bin/msp430-gcc-wrapper $(OBJS) -mmcu=msp430g2553 -o "tru2air-onboard-i2c-slave.elf"
	@echo 'Finished building target: $@'
	@echo ' '

libUSER_OBJS.a: $(OBJS) $(USER_OBJS)
	@echo 'Invoking: MSP430 Archiver'
	/home/blaise/Programs/msp430-toolchain-linux-amd64-3.0/bin/msp430-ar-wrapper rcs  "libUSER_OBJS.a" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(ELFS)$(OBJS)$(ARCHIVES) tru2air-onboard-i2c-slave.elf
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
