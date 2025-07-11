################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

# Each subdirectory must supply rules for building sources it contributes
lwip/ports/hdk/%.obj: ../lwip/ports/hdk/%.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: ARM Compiler'
	"C:/ti/ccs930/ccs/tools/compiler/ti-cgt-arm_18.12.4.LTS/bin/armcl" -mv7R4 --code_state=32 --float_support=VFPv3D16 --include_path="C:/Users/mbda/Desktop/Scade_prova/CP_TRMB_SCADE_TMS570_CCS_project_prova" --include_path="C:/Users/mbda/Desktop/Scade_prova/CP_TRMB_SCADE_TMS570_CCS_project_prova/SCADE_GeneratedCode/KCG" --include_path="C:/Users/mbda/Desktop/Scade_prova/CP_TRMB_SCADE_TMS570_CCS_project_prova/SCADE_Includes" --include_path="../../CP_TRMB_SCADE_Top_Level/KCG" --include_path="C:/Users/mbda/Desktop/Scade_prova/CP_TRMB_SCADE_TMS570_CCS_project/SCADE_GeneratedCode/KCG" --include_path="C:/Users/mbda/Desktop/Scade_prova/CP_TRMB_SCADE_TMS570_CCS_project_prova/lwip" --include_path="C:/Users/mbda/Desktop/Scade_prova/CP_TRMB_SCADE_TMS570_CCS_project_prova/lwip/src/include" --include_path="C:/Users/mbda/Desktop/Scade_prova/CP_TRMB_SCADE_TMS570_CCS_project_prova/lwip/src/include/ipv4" --include_path="C:/Users/mbda/Desktop/Scade_prova/CP_TRMB_SCADE_TMS570_CCS_project_prova/lwip/ports/hdk/include" --include_path="C:/Users/mbda/Desktop/Scade_prova/CP_TRMB_SCADE_TMS570_CCS_project_prova/HALCoGen/include" --include_path="C:/ti/ccs930/ccs/tools/compiler/ti-cgt-arm_18.12.4.LTS/include" --define=_TMS570LC43x_ -g --diag_warning=225 --enum_type=packed --abi=eabi --preproc_with_compile --preproc_dependency="lwip/ports/hdk/$(basename $(<F)).d_raw" --obj_directory="lwip/ports/hdk" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '


