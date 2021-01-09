cmake_minimum_required(VERSION 3.10)

project(Project64-core CXX)

set(CORE_SRC_DIR ${PROJECT_SOURCE_DIR}/../../Source/Project64-core)

set(CORE_FILES
  ${CORE_SRC_DIR}/AppInit.cpp
  ${CORE_SRC_DIR}/logging.cpp
  ${CORE_SRC_DIR}/Settings.cpp
  ${CORE_SRC_DIR}/MemoryExceptionFilter.cpp
  ${CORE_SRC_DIR}/Multilanguage/LanguageClass.cpp
  ${CORE_SRC_DIR}/Settings/LoggingSettings.cpp
  ${CORE_SRC_DIR}/Settings/RecompilerSettings.cpp
  ${CORE_SRC_DIR}/N64System/Interpreter/InterpreterCPU.cpp
  ${CORE_SRC_DIR}/N64System/Interpreter/InterpreterOps.cpp
  ${CORE_SRC_DIR}/N64System/Interpreter/InterpreterOps32.cpp
  ${CORE_SRC_DIR}/N64System/Enhancement/Enhancement.cpp
  ${CORE_SRC_DIR}/N64System/Enhancement/EnhancementFile.cpp
  ${CORE_SRC_DIR}/N64System/Enhancement/EnhancementList.cpp
  ${CORE_SRC_DIR}/N64System/Enhancement/Enhancements.cpp
  ${CORE_SRC_DIR}/N64System/Mips/Audio.cpp
  ${CORE_SRC_DIR}/N64System/Mips/Dma.cpp
  ${CORE_SRC_DIR}/N64System/Mips/Disk.cpp
  ${CORE_SRC_DIR}/N64System/Mips/Eeprom.cpp
  ${CORE_SRC_DIR}/N64System/Mips/FlashRam.cpp
  ${CORE_SRC_DIR}/N64System/Mips/GBCart.cpp
  ${CORE_SRC_DIR}/N64System/Mips/MemoryVirtualMem.cpp
  ${CORE_SRC_DIR}/N64System/Mips/Mempak.cpp
  ${CORE_SRC_DIR}/N64System/Mips/OpcodeName.cpp
  ${CORE_SRC_DIR}/N64System/Mips/PifRam.cpp
  ${CORE_SRC_DIR}/N64System/Mips/RegisterClass.cpp
  ${CORE_SRC_DIR}/N64System/Mips/Rumblepak.cpp
  ${CORE_SRC_DIR}/N64System/Mips/Transferpak.cpp
  ${CORE_SRC_DIR}/N64System/Mips/Sram.cpp
  ${CORE_SRC_DIR}/N64System/Mips/SystemEvents.cpp
  ${CORE_SRC_DIR}/N64System/Mips/SystemTiming.cpp
  ${CORE_SRC_DIR}/N64System/Mips/TLBclass.cpp
  ${CORE_SRC_DIR}/N64System/Recompiler/CodeBlock.cpp
  ${CORE_SRC_DIR}/N64System/Recompiler/CodeSection.cpp
  ${CORE_SRC_DIR}/N64System/Recompiler/SectionInfo.cpp
  ${CORE_SRC_DIR}/N64System/Recompiler/FunctionInfo.cpp
  ${CORE_SRC_DIR}/N64System/Recompiler/FunctionMapClass.cpp
  ${CORE_SRC_DIR}/N64System/Recompiler/LoopAnalysis.cpp
  ${CORE_SRC_DIR}/N64System/Recompiler/RecompilerClass.cpp
  ${CORE_SRC_DIR}/N64System/Recompiler/RecompilerCodeLog.cpp
  ${CORE_SRC_DIR}/N64System/Recompiler/RecompilerMemory.cpp
  ${CORE_SRC_DIR}/N64System/Recompiler/RegBase.cpp
  ${CORE_SRC_DIR}/N64System/Recompiler/x86/x86ops.cpp
  ${CORE_SRC_DIR}/N64System/Recompiler/x86/x86RecompilerOps.cpp
  ${CORE_SRC_DIR}/N64System/Recompiler/x86/x86RegInfo.cpp
  ${CORE_SRC_DIR}/N64System/FramePerSecondClass.cpp
  ${CORE_SRC_DIR}/N64System/N64Class.cpp
  ${CORE_SRC_DIR}/N64System/N64RomClass.cpp
  ${CORE_SRC_DIR}/N64System/ProfilingClass.cpp
  ${CORE_SRC_DIR}/N64System/SpeedLimiterClass.cpp
  ${CORE_SRC_DIR}/N64System/SystemGlobals.cpp
  ${CORE_SRC_DIR}/N64System/EmulationThread.cpp
  ${CORE_SRC_DIR}/N64System/N64DiskClass.cpp
  ${CORE_SRC_DIR}/Plugins/AudioPlugin.cpp
  ${CORE_SRC_DIR}/Plugins/GFXplugin.cpp
  ${CORE_SRC_DIR}/Plugins/ControllerPlugin.cpp
  ${CORE_SRC_DIR}/Plugins/RSPPlugin.cpp
  ${CORE_SRC_DIR}/Plugins/PluginBase.cpp
  ${CORE_SRC_DIR}/Plugins/PluginClass.cpp
  ${CORE_SRC_DIR}/RomList/RomList.cpp
  ${CORE_SRC_DIR}/Settings/SettingType/SettingsType-Application.cpp
  ${CORE_SRC_DIR}/Settings/SettingType/SettingsType-ApplicationIndex.cpp
  ${CORE_SRC_DIR}/Settings/SettingType/SettingsType-ApplicationPath.cpp
  ${CORE_SRC_DIR}/Settings/SettingType/SettingsType-Enhancements.cpp
  ${CORE_SRC_DIR}/Settings/SettingType/SettingsType-GameSetting.cpp
  ${CORE_SRC_DIR}/Settings/SettingType/SettingsType-GameSettingIndex.cpp
  ${CORE_SRC_DIR}/Settings/SettingType/SettingsType-RelativePath.cpp
  ${CORE_SRC_DIR}/Settings/SettingType/SettingsType-RDBCpuType.cpp
  ${CORE_SRC_DIR}/Settings/SettingType/SettingsType-RDBOnOff.cpp
  ${CORE_SRC_DIR}/Settings/SettingType/SettingsType-RDBRamSize.cpp
  ${CORE_SRC_DIR}/Settings/SettingType/SettingsType-RDBSaveChip.cpp
  ${CORE_SRC_DIR}/Settings/SettingType/SettingsType-RDBYesNo.cpp
  ${CORE_SRC_DIR}/Settings/SettingType/SettingsType-RomDatabase.cpp
  ${CORE_SRC_DIR}/Settings/SettingType/SettingsType-RomDatabaseIndex.cpp
  ${CORE_SRC_DIR}/Settings/SettingType/SettingsType-RomDatabaseSetting.cpp
  ${CORE_SRC_DIR}/Settings/SettingType/SettingsType-SelectedDirectory.cpp
  ${CORE_SRC_DIR}/Settings/SettingType/SettingsType-TempBool.cpp
  ${CORE_SRC_DIR}/Settings/SettingType/SettingsType-TempNumber.cpp
  ${CORE_SRC_DIR}/Settings/SettingType/SettingsType-TempString.cpp
  ${CORE_SRC_DIR}/Settings/DebugSettings.cpp
  ${CORE_SRC_DIR}/Settings/GameSettings.cpp
  ${CORE_SRC_DIR}/Settings/N64SystemSettings.cpp)

include_directories(${PROJECT64_INCLUDE_DIRS}
  ${CMAKE_CURRENT_BINARY_DIR})

configure_file(${PROJECT_SOURCE_DIR}/../../Source/Project64-core/Version.h.in Version.h COPYONLY)

add_library(Project64-core_libs SHARED ${CORE_FILES})

target_link_libraries(Project64-core_libs
  Common_libs
  zlib_libs)
