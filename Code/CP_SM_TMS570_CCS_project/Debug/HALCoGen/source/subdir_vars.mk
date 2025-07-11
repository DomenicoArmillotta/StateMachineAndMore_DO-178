################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

# Add inputs and outputs from these tool invocations to the build variables 
CMD_SRCS += \
../HALCoGen/source/HL_sys_link.cmd 

ASM_SRCS += \
../HALCoGen/source/HL_sys_core.asm \
../HALCoGen/source/HL_sys_intvecs.asm \
../HALCoGen/source/HL_sys_mpu.asm \
../HALCoGen/source/HL_sys_pmu.asm 

C_SRCS += \
../HALCoGen/source/HL_emac.c \
../HALCoGen/source/HL_epc.c \
../HALCoGen/source/HL_errata.c \
../HALCoGen/source/HL_errata_SSWF021_45.c \
../HALCoGen/source/HL_esm.c \
../HALCoGen/source/HL_mdio.c \
../HALCoGen/source/HL_nmpu.c \
../HALCoGen/source/HL_notification.c \
../HALCoGen/source/HL_phy_dp83640.c \
../HALCoGen/source/HL_phy_tlk111.c \
../HALCoGen/source/HL_pinmux.c \
../HALCoGen/source/HL_sci.c \
../HALCoGen/source/HL_sys_dma.c \
../HALCoGen/source/HL_sys_main.c \
../HALCoGen/source/HL_sys_pcr.c \
../HALCoGen/source/HL_sys_phantom.c \
../HALCoGen/source/HL_sys_pmm.c \
../HALCoGen/source/HL_sys_selftest.c \
../HALCoGen/source/HL_sys_startup.c \
../HALCoGen/source/HL_sys_vim.c \
../HALCoGen/source/HL_system.c 

C_DEPS += \
./HALCoGen/source/HL_emac.d \
./HALCoGen/source/HL_epc.d \
./HALCoGen/source/HL_errata.d \
./HALCoGen/source/HL_errata_SSWF021_45.d \
./HALCoGen/source/HL_esm.d \
./HALCoGen/source/HL_mdio.d \
./HALCoGen/source/HL_nmpu.d \
./HALCoGen/source/HL_notification.d \
./HALCoGen/source/HL_phy_dp83640.d \
./HALCoGen/source/HL_phy_tlk111.d \
./HALCoGen/source/HL_pinmux.d \
./HALCoGen/source/HL_sci.d \
./HALCoGen/source/HL_sys_dma.d \
./HALCoGen/source/HL_sys_main.d \
./HALCoGen/source/HL_sys_pcr.d \
./HALCoGen/source/HL_sys_phantom.d \
./HALCoGen/source/HL_sys_pmm.d \
./HALCoGen/source/HL_sys_selftest.d \
./HALCoGen/source/HL_sys_startup.d \
./HALCoGen/source/HL_sys_vim.d \
./HALCoGen/source/HL_system.d 

OBJS += \
./HALCoGen/source/HL_emac.obj \
./HALCoGen/source/HL_epc.obj \
./HALCoGen/source/HL_errata.obj \
./HALCoGen/source/HL_errata_SSWF021_45.obj \
./HALCoGen/source/HL_esm.obj \
./HALCoGen/source/HL_mdio.obj \
./HALCoGen/source/HL_nmpu.obj \
./HALCoGen/source/HL_notification.obj \
./HALCoGen/source/HL_phy_dp83640.obj \
./HALCoGen/source/HL_phy_tlk111.obj \
./HALCoGen/source/HL_pinmux.obj \
./HALCoGen/source/HL_sci.obj \
./HALCoGen/source/HL_sys_core.obj \
./HALCoGen/source/HL_sys_dma.obj \
./HALCoGen/source/HL_sys_intvecs.obj \
./HALCoGen/source/HL_sys_main.obj \
./HALCoGen/source/HL_sys_mpu.obj \
./HALCoGen/source/HL_sys_pcr.obj \
./HALCoGen/source/HL_sys_phantom.obj \
./HALCoGen/source/HL_sys_pmm.obj \
./HALCoGen/source/HL_sys_pmu.obj \
./HALCoGen/source/HL_sys_selftest.obj \
./HALCoGen/source/HL_sys_startup.obj \
./HALCoGen/source/HL_sys_vim.obj \
./HALCoGen/source/HL_system.obj 

ASM_DEPS += \
./HALCoGen/source/HL_sys_core.d \
./HALCoGen/source/HL_sys_intvecs.d \
./HALCoGen/source/HL_sys_mpu.d \
./HALCoGen/source/HL_sys_pmu.d 

OBJS__QUOTED += \
"HALCoGen\source\HL_emac.obj" \
"HALCoGen\source\HL_epc.obj" \
"HALCoGen\source\HL_errata.obj" \
"HALCoGen\source\HL_errata_SSWF021_45.obj" \
"HALCoGen\source\HL_esm.obj" \
"HALCoGen\source\HL_mdio.obj" \
"HALCoGen\source\HL_nmpu.obj" \
"HALCoGen\source\HL_notification.obj" \
"HALCoGen\source\HL_phy_dp83640.obj" \
"HALCoGen\source\HL_phy_tlk111.obj" \
"HALCoGen\source\HL_pinmux.obj" \
"HALCoGen\source\HL_sci.obj" \
"HALCoGen\source\HL_sys_core.obj" \
"HALCoGen\source\HL_sys_dma.obj" \
"HALCoGen\source\HL_sys_intvecs.obj" \
"HALCoGen\source\HL_sys_main.obj" \
"HALCoGen\source\HL_sys_mpu.obj" \
"HALCoGen\source\HL_sys_pcr.obj" \
"HALCoGen\source\HL_sys_phantom.obj" \
"HALCoGen\source\HL_sys_pmm.obj" \
"HALCoGen\source\HL_sys_pmu.obj" \
"HALCoGen\source\HL_sys_selftest.obj" \
"HALCoGen\source\HL_sys_startup.obj" \
"HALCoGen\source\HL_sys_vim.obj" \
"HALCoGen\source\HL_system.obj" 

C_DEPS__QUOTED += \
"HALCoGen\source\HL_emac.d" \
"HALCoGen\source\HL_epc.d" \
"HALCoGen\source\HL_errata.d" \
"HALCoGen\source\HL_errata_SSWF021_45.d" \
"HALCoGen\source\HL_esm.d" \
"HALCoGen\source\HL_mdio.d" \
"HALCoGen\source\HL_nmpu.d" \
"HALCoGen\source\HL_notification.d" \
"HALCoGen\source\HL_phy_dp83640.d" \
"HALCoGen\source\HL_phy_tlk111.d" \
"HALCoGen\source\HL_pinmux.d" \
"HALCoGen\source\HL_sci.d" \
"HALCoGen\source\HL_sys_dma.d" \
"HALCoGen\source\HL_sys_main.d" \
"HALCoGen\source\HL_sys_pcr.d" \
"HALCoGen\source\HL_sys_phantom.d" \
"HALCoGen\source\HL_sys_pmm.d" \
"HALCoGen\source\HL_sys_selftest.d" \
"HALCoGen\source\HL_sys_startup.d" \
"HALCoGen\source\HL_sys_vim.d" \
"HALCoGen\source\HL_system.d" 

ASM_DEPS__QUOTED += \
"HALCoGen\source\HL_sys_core.d" \
"HALCoGen\source\HL_sys_intvecs.d" \
"HALCoGen\source\HL_sys_mpu.d" \
"HALCoGen\source\HL_sys_pmu.d" 

C_SRCS__QUOTED += \
"../HALCoGen/source/HL_emac.c" \
"../HALCoGen/source/HL_epc.c" \
"../HALCoGen/source/HL_errata.c" \
"../HALCoGen/source/HL_errata_SSWF021_45.c" \
"../HALCoGen/source/HL_esm.c" \
"../HALCoGen/source/HL_mdio.c" \
"../HALCoGen/source/HL_nmpu.c" \
"../HALCoGen/source/HL_notification.c" \
"../HALCoGen/source/HL_phy_dp83640.c" \
"../HALCoGen/source/HL_phy_tlk111.c" \
"../HALCoGen/source/HL_pinmux.c" \
"../HALCoGen/source/HL_sci.c" \
"../HALCoGen/source/HL_sys_dma.c" \
"../HALCoGen/source/HL_sys_main.c" \
"../HALCoGen/source/HL_sys_pcr.c" \
"../HALCoGen/source/HL_sys_phantom.c" \
"../HALCoGen/source/HL_sys_pmm.c" \
"../HALCoGen/source/HL_sys_selftest.c" \
"../HALCoGen/source/HL_sys_startup.c" \
"../HALCoGen/source/HL_sys_vim.c" \
"../HALCoGen/source/HL_system.c" 

ASM_SRCS__QUOTED += \
"../HALCoGen/source/HL_sys_core.asm" \
"../HALCoGen/source/HL_sys_intvecs.asm" \
"../HALCoGen/source/HL_sys_mpu.asm" \
"../HALCoGen/source/HL_sys_pmu.asm" 


