// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// StaticStruct @ 147aa4840

UScriptStruct * __cdecl FDebugCameraControllerSettingsViewModeIndex::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDebugCameraControllerSettingsViewModeIndex.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FDebugCameraControllerSettingsViewModeIndex.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDebugCameraControllerSettingsViewModeIndex,
                         (UObject *)pUVar1,L"DebugCameraControllerSettingsViewModeIndex");
  }
  return Z_Registration_Info_UScriptStruct_FDebugCameraControllerSettingsViewModeIndex.
         OuterSingleton;
}

// ~FDebugCameraControllerSettingsViewModeIndex @ 147abedb0

void __thiscall
FDebugCameraControllerSettingsViewModeIndex::~FDebugCameraControllerSettingsViewModeIndex
          (FDebugCameraControllerSettingsViewModeIndex *this)

{
  this->_padding_ = (longlong)&___7FDebugCameraControllerSettingsViewModeIndex__6B_;
  return;
}

