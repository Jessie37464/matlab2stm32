# 
# File    : stm32.tmf
#
# $ stm32.tmf 2011-10-03 dlange $
#
#
# Abstract:
#       Real-Time Workshop template makefile for building a PC-based
#       stand-alone embedded real-time version of Simulink model using
#       generated C code and IAR (EWARM) Compiler for ARM

#------------------------- Path Information -------------------------------

# Project and application specific tools and directories:
#Target is STM32F30x ARM M4_Core based 
#TARGET      = STM32F30x

#Use mex extention to know if 32 or 64bit installed
MEXEXT = mexw64

#TARGET_PATH is PATH of STM32 distrib repository. 
#All path are based on it.
TARGET_PATH = "E:\MATLAB\STM32-~1\STM32"

#Path for PIL sources, includes, STM32 and CMSIS libraries
SRC         = $(TARGET_PATH)\src
PIL_RTIO	= $(TARGET_PATH)\pil\stm32F30xSerialRtiostream

#CMSISINC    = $(TARGET_PATH)\lib\CMSIS\Device\ST\STM32F30x\Include
#CMSISDSPINC = $(TARGET_PATH)\lib\CMSIS\Include
#LIBINC      = $(TARGET_PATH)\lib\$(TARGET)_StdPeriph_Driver\inc
#LIBSRC      = $(TARGET_PATH)\lib\$(TARGET)_StdPeriph_Driver\src
#PATHSETUP   = $(TARGET_PATH)\lib\CMSIS\Device\ST\STM32F30x\Source\Templates
#CMSISDSPSRC = $(TARGET_PATH)\lib\CMSIS\DSP_Lib\Source\BasicMathFunctions
#CMSISDSPSRC1 = $(TARGET_PATH)\lib\CMSIS\DSP_Lib\Source\CommonTables
#CMSISDSPSRC2 = $(TARGET_PATH)\lib\CMSIS\DSP_Lib\Source\ControllerFunctions
#CMSISDSPSRC3 = $(TARGET_PATH)\lib\CMSIS\DSP_Lib\Source\FastMathFunctions
#CMSISDSPSRC4 = $(TARGET_PATH)\lib\CMSIS\DSP_Lib\Source\FilteringFunctions
#CMSISDSPSRC5 = $(TARGET_PATH)\lib\CMSIS\DSP_Lib\Source\MatrixFunctions
#CMSISDSPSRC6 = $(TARGET_PATH)\lib\CMSIS\DSP_Lib\Source\StatisticsFunctions
#CMSISDSPSRC7 = $(TARGET_PATH)\lib\CMSIS\DSP_Lib\Source\SupportFunctions
#CMSISDSPSRC8 = $(TARGET_PATH)\lib\CMSIS\DSP_Lib\Source\TransformFunctions


#------------------------ Macros read by make_rtw ------------------------------
#
# The following macros are read by the Real-Time Workshop build procedure:
#
#  MAKECMD         - This is the command used to invoke the make utility
#  HOST            - What platform this template makefile is targeted for
#                    (i.e. PC or UNIX)
#  BUILD           - Invoke make from the Real-Time Workshop build procedure
#                    (yes/no)?
#  SYS_TARGET_FILE - Name of system target file.


ifeq ($(MEXEXT),mexw64)
MAKECMD         = "%MATLAB%\bin\%MATLAB_WIN_VER%\gmake"
else ifeq ($(MEXEXT),mexw32)
MAKECMD         = "%MATLAB%\bin\%MATLAB_WIN_VER%\gmake"
else
   $(error ERROR NOT SUPPORTED OS VERSION!!! )
endif

SHELL           = cmd
HOST            = PC
BUILD           = yes
SYS_TARGET_FILE = stm32.tlc
COMPILER_TOOL_CHAIN = default
MAKEFILE_FILESEP = /

#source file extension
SRC_FILE_EXT = .c
#object file extension
OBJ_EXT = .o
#File extention is .out for IAR exec file
PROGRAM_FILE_EXT = .out
#File extension is .lib for library file
BINARY_FILE_EXT = .lib
#File extension is .s for startup assembler file
ASM_FILE_EXT = .s
#---------------------- Tokens expanded by make_rtw ----------------------------
#
# The following tokens, when wrapped with "|>" and "<|" are expanded by the
# Real-Time Workshop build procedure.
#
#  MODEL_NAME          - Name of the Simulink block diagram
#  MODEL_MODULES       - Any additional generated source modules
#  MAKEFILE_NAME       - Name of makefile created from template makefile <model>.mk
#  MATLAB_ROOT         - Path to were MATLAB is installed.
#  MATLAB_BIN          - Path to MATLAB executable.
#  S_FUNCTIONS         - List of additional S-function modules.
#  S_FUNCTIONS_LIB     - List of S-functions libraries to link. 
#  NUMST               - Number of sample times
#  NCSTATES            - Number of continuous states
#  BUILDARGS           - Options passed in at the command line.
#  MULTITASKING        - yes (1) or no (0): Is solver mode multitasking
#  INTEGER_CODE        - yes (1) or no (0): Is generated code purely integer
#  MAT_FILE            - yes (1) or no (0): Should mat file logging be done,
#                        if 0, the generated code runs indefinitely
#  EXT_MODE            - yes (1) or no (0): Build for external mode
#  TMW_EXTMODE_TESTING - yes (1) or no (0): Build ext_test.c for external mode
#                        testing.
#  EXTMODE_TRANSPORT   - Index of transport mechanism (e.g. tcpip, serial) for extmode
#  EXTMODE_STATIC      - yes (1) or no (0): Use static instead of dynamic mem alloc.
#  EXTMODE_STATIC_SIZE - Size of static memory allocation buffer.
#  MULTI_INSTANCE_CODE - Is the generated code multi instantiable (1/0)?
#  PORTABLE_WORDSIZES  - Is this build intented for SIL simulation with portable word sizes (1/0)?
#  SHRLIBTARGET        - Is this build intended for generation of a shared library instead 
#                        of executable (1/0)?
MODEL                = moving
MODULES              = main.c moving_TIM.c
MODULES_OBJ          = main.obj moving_TIM.obj 
MAKEFILE             = moving.mk
TOOLPATH             = "|>COMPILERPATH<|"
MATLAB_ROOT          = "F:/matlab/install"
ALT_MATLAB_ROOT      = "F:/matlab/install"
MATLAB_BIN           = "F:/matlab/install/bin"
ALT_MATLAB_BIN       = "F:/matlab/install/bin"
S_FUNCTIONS          = 
S_FUNCTIONS_LIB      = 
NUMST                = 1
NCSTATES             = 0
BUILDARGS            =  GENERATE_ASAP2=0 DOWNLOADAPPLICATION=1 STM32CUBEMXPATHUPDATE=1 STM32CUBEMXPATH="E:\stm32_hal\install" TARGET_INST_FULLPATH="E:\MATLAB\STM32-MAT\STM32" IOC_FULLPATH="C:\Users\zqx\Desktop\encoder\mat_motor\move\move.ioc" IT_HANDLER_OPTIM=1 ISPROTECTINGMODEL=NOTPROTECTING
MULTITASKING         = 0
INTEGER_CODE         = 0
MAT_FILE             = 0
ONESTEPFCN           = 1
TERMFCN              = 0
B_ERTSFCN            = 0
#MEXEXT               = mexw64
EXT_MODE             = 0
TMW_EXTMODE_TESTING  = 0
EXTMODE_TRANSPORT    = 0
EXTMODE_STATIC       = 0
EXTMODE_STATIC_SIZE  = 256
MULTI_INSTANCE_CODE  = 0
MODELREFS            = 
TARGET_LANG_EXT      = c
SHARED_SRC           = 
SHARED_SRC_DIR       = 
SHARED_BIN_DIR       = 
SHARED_LIB           = 
MEX_OPT_FILE         = -f 
PORTABLE_WORDSIZES   = 0
SHRLIBTARGET         = 0
OPTIMIZATION_FLAGS   = 
ADDITIONAL_LDFLAGS   = 
MAKEFILEBUILDER_TGT  = 0
STANDALONE_SUPPRESS_EXE = 0

#--------------------------- Model and reference models -----------------------
MODELLIB             = movinglib.lib
MODELREF_LINK_LIBS   = 
MODELREF_LINK_RSPFILE     = moving_ref.rsp
MODELREF_INC_PATH         =  
RELATIVE_PATH_TO_ANCHOR   = ..
MODELREF_TARGET_TYPE      = NONE

#Matlab Path checking
ifneq ($(MATLAB_ROOT),$(ALT_MATLAB_ROOT))
MATLAB_ROOT = $(ALT_MATLAB_ROOT)
endif
MATLAB_ROOT := $(subst \,/,$(MATLAB_ROOT))
MATLAB_ROOT := $(subst Program Files,Program\ Files,$(MATLAB_ROOT))
ifneq ($(MATLAB_BIN),$(ALT_MATLAB_BIN))
MATLAB_BIN = $(ALT_MATLAB_BIN)
endif
MATLAB_BIN := $(subst Program Files,Program\ Files,$(MATLAB_BIN))
MATLAB_BIN := $(subst ~,\~,$(MATLAB_BIN))


# Place -I options here
MATLAB_INCLUDES = \
	-I$(MATLAB_ROOT)/rtw/c/ert \
	-I$(MATLAB_ROOT)/extern/include \
	-I$(MATLAB_ROOT)/simulink/include \
	-I$(MATLAB_ROOT)/rtw/c/src \
	-I$(MATLAB_ROOT)/rtw/c/src/ext_mode/common \
	-I$(MATLAB_ROOT)/toolbox/rtw/targets/pil/c 

# Additional includes 
ADD_INCLUDES = \
	-IC:/Users/zqx/Desktop/motor_simulation \
	-IC:/Users/zqx/Desktop/motor_simulation/moving_stm32 \
	-IC:/Users/zqx/Desktop/encoder/mat_motor/move \
	-IE:/MATLAB/STM32-MAT/STM32/addSrc/inc \


SHARED_INCLUDES =
ifneq ($(SHARED_SRC_DIR),)
SHARED_INCLUDES = -I$(SHARED_SRC_DIR) 
endif

#------------------------------ Includes -------------------------------------
INCLUDES = -I. -I$(RELATIVE_PATH_TO_ANCHOR) $(MATLAB_INCLUDES) \
           $(ADD_INCLUDES) $(MODELREF_INC_PATH) $(SHARED_INCLUDES) \
		   -I$(SRC) -I$(PIL_RTIO)
		   
	
#-------------------------------- Flags --------------------------------------

#-------------------------------- Target application --------------------------------------
# Define the target file

ifeq ($(MODELREF_TARGET_TYPE), NONE)
ifeq ($(MAKEFILEBUILDER_TGT), 0)
ifeq ($(STANDALONE_SUPPRESS_EXE), 1)
# Build object code only for top level model (preliminary step for building
# PIL application)
BUILD_MODE=pil_prebuild
PRODUCT=ObjectModules
BUILD_PRODUCT_TYPE = object modules
else
# Building executable for real-time deployment
BUILD_MODE=real_time
PRODUCT = $(MODEL)$(PROGRAM_FILE_EXT)
BUILD_PRODUCT_TYPE = executable
endif
else
# Building executable for deployment as PIL application (non-real-time 
# simulation)
BUILD_MODE=pil_application
PRODUCT = $(MODEL)$(PROGRAM_FILE_EXT)
BUILD_PRODUCT_TYPE = executable
endif
else
# Building a library for a referenced model
BUILD_MODE = model_reference
PRODUCT = $(MODELLIB)
BUILD_PRODUCT_TYPE = library
endif


$(info  ###BuildMode : $(BUILD_MODE) MODELREF_TARGET_TYPE=$(MODELREF_TARGET_TYPE) SIMULATION_MODE_RP=$(SIMULATION_MODE_RP) MAKEFILEBUILDER_TGT=$(MAKEFILEBUILDER_TGT) STANDALONE_SUPPRESS_EXE=$(STANDALONE_SUPPRESS_EXE))

#-------------- Source Files, Object Files and Dependency Files -----------
# Target specific sources:
# Provided through variable TARGET_SRCS from hook file
# System specific sources:
# Provided through variable SYSTEM_SRCS from hook file

#EXT_SRC = stm32f30x_usart.c
#EXT_SRC += stm32f30x_rcc.c 
#EXT_SRC += stm32f30x_gpio.c 
#EXT_SRC += stm32f30x_misc.c 

SRCS = $(MODULES) $(S_FUNCTIONS) 

ifeq ($(BUILD_MODE), pil_prebuild)
#  SRCS += $(MODULES) $(MODEL).$(TARGET_LANG_EXT) $(EXT_SRC)
  SRCS += $(MODULES) $(MODEL).$(TARGET_LANG_EXT)
endif

ifeq ($(BUILD_MODE), pil_application)
# FOR F30x SRCS += $(TARGET_SRCS) $(TARGET_BLOCK_SRCS) $(SYSTEM_SRCS) $(EXT_SRC) RCC_Configuration.c
  SRCS += $(TARGET_SRCS) $(TARGET_BLOCK_SRCS) $(SYSTEM_SRCS)
  PREBUILT_SRCS      = $(subst \,/,$(MODULES))
  PREBUILT_OBJS      = $(addsuffix $(OBJ_EXT), $(basename $(PREBUILT_SRCS)))
endif

ifeq ($(BUILD_MODE), real_time)
# FOR F30x   SRCS += $(MODEL).$(TARGET_LANG_EXT) $(EXT_SRC) main.c RCC_Configuration.c
  SRCS += $(MODEL).$(TARGET_LANG_EXT) $(EXT_SRC) main.c 
  SRCS += $(TARGET_BLOCK_SRCS) $(TARGET_SRCS) $(SYSTEM_SRCS)
endif



ifeq ($(BUILD_MODE), model_reference)
ifeq ($(SIMULATION_MODE_RP),NO_PIL) 
  SRCS = $(S_FUNCTIONS)
  testIsNotMain = $(if $(findstring main.c, $(testFile)), $(info main.c not built for model_reference),$(testFile) )
  files := $(foreach testFile,$(MODULES),$(testIsNotMain))
  SRCS += $(files)
endif
endif

LIBS = $(S_FUNCTIONS_LIB)

SHARED_SRC := $(subst \,/,$(SHARED_SRC))
SHARED_SRC := $(wildcard $(SHARED_SRC))
SHARED_OBJS = $(addsuffix $(OBJ_EXT), $(basename $(SHARED_SRC)))
SHARED_OBJS := $(subst \,/,$(SHARED_OBJS))
SHARED_LIB := $(subst \,/,$(SHARED_LIB))
MODELLIB := $(subst \,/,$(MODELLIB))


#-------------- Default target -----------
OBJS  = $(SRCS:$(SRC_FILE_EXT)=$(OBJ_EXT)) 
OBJS  := $(subst \,/,$(OBJS))

STM32STARTUP = $(STARTUP_SRCS:$(ASM_FILE_EXT)=$(OBJ_EXT))
STM32STARTUP := $(subst \,/,$(STM32STARTUP))

$(info  ###Startup file: $(STM32STARTUP) )
$(info  ###Startup path: $(PATHSTARTUP))

TARGETS = $(PRODUCT)

all: $(TARGETS)
	@echo "### Created $(PRODUCT) successfully (or it was already up to date)"

clean :
	@del *.o
	echo ###All .o files deleted.
 
mrproper : clean
	@del $(PRODUCT)
	echo ###Project clean.
	
.PHONY : clean mrproper
	@echo "### Created $(PRODUCT) successfully (or it was already up to date)"

#----------------------------- Dependencies ------------------------------------
##$(OBJS) : $(MAKEFILE) rtw_proj.tmw
$(OBJS) : $(MAKEFILE)

$(SHARED_LIB) : $(SHARED_OBJS)
	@echo "### Creating $@ "
ifneq (,$(findstring $(SHARED_LIB),$(wildcard $(SHARED_LIB))))
	@echo "### $(AR) $(ARFLAGS) Lib:$@ Inputs:$(notdir $(SHARED_OBJS))"
	@echo "### Library: $@ Replaced "
	@echo "Dumy file" > $@	
else
	@echo "### Library: $@ Created "
	@echo "Dumy file" > $@	
endif
	

##-------------------------- Support for building modules ----------------------
ifeq ($(BUILD_MODE), pil_prebuild)
$(PRODUCT) : $(OBJS) $(STM32STARTUP)
	@echo "### BUILD_MODE $(BUILD_MODE)"
	@echo "### Created $(PRODUCT)"
endif

ifeq ($(BUILD_MODE), model_reference)
$(PRODUCT) : $(STM32STARTUP) $(OBJS) $(SHARED_LIB) $(LIBS) 
	@echo "### BUILD_MODE $(BUILD_MODE)"
ifneq (,$(findstring $(PRODUCT),$(wildcard $(PRODUCT))))
	@echo "### Replaced $@ model_reference"
else
	@echo "### Generated $@ model_reference"
	@echo "Dumy file" > $@	
endif
endif

ifeq ($(BUILD_MODE), pil_application)
$(MODEL)$(PROGRAM_FILE_EXT): $(PREBUILT_OBJS) $(OBJS) $(STM32STARTUP) $(MODELLIB) $(MODELREF_LINK_LIBS) $(SHARED_LIB) $(LIBS)
	@echo "### BUILD_MODE $(BUILD_MODE)"
	@echo "### CMD: @$(LNK) $^ $(LFLAGS) --output $@"	
	@echo "### Generated $@ pil_application"
	@echo "Dumy file" > $@		
endif

ifeq ($(BUILD_MODE), real_time)
$(MODEL)$(PROGRAM_FILE_EXT): $(OBJS) $(STM32STARTUP) $(MODELREF_LINK_LIBS) $(SHARED_LIB) $(LIBS)
	@echo "### BUILD_MODE $(BUILD_MODE)"
	@echo "### Generated $@ real_time"
	@echo "Dumy file" > $@		
endif


#--------------------------------- Rules -------------------------------------
%.o: $(subst \,/,$(RELATIVE_PATH_TO_ANCHOR))/%$(SRC_FILE_EXT)
	@echo ### Start compile $(SRC_FILE_EXT) source $<
	@echo ### Successfully compiled source $<

%.o: $(subst \,/,$(RELATIVE_PATH_TO_ANCHOR))/%.cpp
	@echo ### Start compile cpp source $<
	@echo ### Successfully compiled source $<

%.o: %.cpp
	@echo ### Start compile cpp source $<
	@echo ### Successfully compiled source $<

%.o: %$(SRC_FILE_EXT)
	@echo ### Start compile $(SRC_FILE_EXT) source $<
	@echo ### Successfully compiled source $<

%.o: %$(ASM_FILE_EXT)
	@echo ### Start compile $(ASM_FILE_EXT) source $<
	@echo ### Successfully compiled source $<

%.o: $(subst ",,$(PATHSTARTUP))/%$(ASM_FILE_EXT)
	@echo ### Start compile $(ASM_FILE_EXT) source $<
	@echo ### Successfully compiled source $<
	
		
%.o: $(subst ",,$(PATHSETUP))/%$(SRC_FILE_EXT)
	@echo ### Start compile $(SRC_FILE_EXT) source $<
	@echo ### Successfully compiled source $<

%.o: $(subst ",,$(SRC))/%$(SRC_FILE_EXT)
	@echo ### Start compile $(SRC_FILE_EXT) source $<
	@echo ### Successfully compiled source $<	

%.o: $(subst ",,$(LIBSRC))/%$(SRC_FILE_EXT)
	@echo ### Start compile $(SRC_FILE_EXT) source $<
	@echo ### Successfully compiled source $<		
	
%.o: $(subst ",,$(PIL_RTIO))/%$(SRC_FILE_EXT)
	@echo ### Start compile $(SRC_FILE_EXT) source $<
	@echo ### Successfully compiled source $<	

%.o: $(subst ",,$(CMSISDSPSRC))/%$(SRC_FILE_EXT)
	@echo ### Start compile $(SRC_FILE_EXT) source $<
	@echo ### Successfully compiled source $<	

%.o: $(subst ",,$(CMSISDSPSRC1))/%$(SRC_FILE_EXT)
	@echo ### Start compile $(SRC_FILE_EXT) source $<
	@echo ### Successfully compiled source $<	

%.o: $(subst ",,$(CMSISDSPSRC2))/%$(SRC_FILE_EXT)
	@echo ### Start compile $(SRC_FILE_EXT) source $<
	@echo ### Successfully compiled source $<	

%.o: $(subst ",,$(CMSISDSPSRC3))/%$(SRC_FILE_EXT)
	@echo ### Start compile $(SRC_FILE_EXT) source $<
	@echo ### Successfully compiled source $<	

%.o: $(subst ",,$(CMSISDSPSRC4))/%$(SRC_FILE_EXT)
	@echo ### Start compile $(SRC_FILE_EXT) source $<
	@echo ### Successfully compiled source $<	

%.o: $(subst ",,$(CMSISDSPSRC5))/%$(SRC_FILE_EXT)
	@echo ### Start compile $(SRC_FILE_EXT) source $<
	@echo ### Successfully compiled source $<	

%.o: $(subst ",,$(CMSISDSPSRC6))/%$(SRC_FILE_EXT)
	@echo ### Start compile $(SRC_FILE_EXT) source $<
	@echo ### Successfully compiled source $<	

%.o: $(subst ",,$(CMSISDSPSRC7))/%$(SRC_FILE_EXT)
	@echo ### Start compile $(SRC_FILE_EXT) source $<
	@echo ### Successfully compiled source $<	

%.o: $(subst ",,$(CMSISDSPSRC8))/%$(SRC_FILE_EXT)
	@echo ### Start compile $(SRC_FILE_EXT) source $<
	@echo ### Successfully compiled source $<	
	

%.o: $(subst ",,E:/MATLAB/STM32-MAT/STM32/addSrc/src)/%.cpp
	@$(CC) $(CFLAGS) $< 
	@echo ### Successfully compiled source $<

%.o: $(subst ",,$(MATLAB_ROOT)/rtw/c/src)/%.cpp
	@$(CC) $(CFLAGS) $< 
	@echo ### Successfully compiled source $<

%.o: $(subst ",,$(MATLAB_ROOT)/simulink/src)/%.cpp
	@$(CC) $(CFLAGS) $< 
	@echo ### Successfully compiled source $<



%.o: $(subst ",,E:/MATLAB/STM32-MAT/STM32/addSrc/src)/%$(SRC_FILE_EXT)
	@echo ### Start compile EXPAND $(SRC_FILE_EXT) source $<
	@echo ### Successfully compiled source $<

%.o: $(subst ",,$(MATLAB_ROOT)/rtw/c/src)/%$(SRC_FILE_EXT)
	@echo ### Start compile EXPAND $(SRC_FILE_EXT) source $<
	@echo ### Successfully compiled source $<

%.o: $(subst ",,$(MATLAB_ROOT)/simulink/src)/%$(SRC_FILE_EXT)
	@echo ### Start compile EXPAND $(SRC_FILE_EXT) source $<
	@echo ### Successfully compiled source $<



%.o: $(subst ",,E:/MATLAB/STM32-MAT/STM32/addSrc/src)/%$(ASM_FILE_EXT)
	@echo ### Start compile EXPAND $(ASM_FILE_EXT) source $<
	@echo ### Successfully compiled source $<

%.o: $(subst ",,$(MATLAB_ROOT)/rtw/c/src)/%$(ASM_FILE_EXT)
	@echo ### Start compile EXPAND $(ASM_FILE_EXT) source $<
	@echo ### Successfully compiled source $<

%.o: $(subst ",,$(MATLAB_ROOT)/simulink/src)/%$(ASM_FILE_EXT)
	@echo ### Start compile EXPAND $(ASM_FILE_EXT) source $<
	@echo ### Successfully compiled source $<


# EOF: stm32F30x.tmf