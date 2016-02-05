################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Book.cpp \
../src/Item.cpp \
../src/ItemProcessor.cpp \
../src/SupermarketProduct.cpp \
../src/Toy.cpp \
../src/main.cpp 

OBJS += \
./src/Book.o \
./src/Item.o \
./src/ItemProcessor.o \
./src/SupermarketProduct.o \
./src/Toy.o \
./src/main.o 

CPP_DEPS += \
./src/Book.d \
./src/Item.d \
./src/ItemProcessor.d \
./src/SupermarketProduct.d \
./src/Toy.d \
./src/main.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


