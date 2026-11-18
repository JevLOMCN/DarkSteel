// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// StaticStruct @ 147b970a0

UScriptStruct * __cdecl FLightmassDebugOptions::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FLightmassDebugOptions.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FLightmassDebugOptions.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLightmassDebugOptions,(UObject *)pUVar1,
                         L"LightmassDebugOptions");
  }
  return Z_Registration_Info_UScriptStruct_FLightmassDebugOptions.OuterSingleton;
}

// FLightmassDebugOptions @ 147bb9340

FLightmassDebugOptions * __thiscall
FLightmassDebugOptions::FLightmassDebugOptions(FLightmassDebugOptions *this)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  this->bDebugMode = 0;
  this->bStatsEnabled = 0;
  this->bGatherBSPSurfacesAcrossComponents = 1;
  puVar2 = &this->field_0x8;
  this->bUseImmediateImport = 1;
  this->bColorByExecutionTime = 0;
  this->bColorBordersGreen = 0;
  this->bUseRandomColors = 0;
  this->bOnlyCalcDebugTexelMappings = 0;
  this->bDebugPaddings = 0;
  this->bPadMappings = 1;
  this->bDebugMaterials = 0;
  this->bDumpBinaryFiles = 0;
  this->bSortMappings = 1;
  this->bImmediateProcessMappings = 1;
  this->CoplanarTolerance = 0.001;
  this->ExecutionTimeDivisor = 15.0;
  return this;
}

