// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 2

// StaticStruct @ 146dca6f0

UScriptStruct * __cdecl FNavMeshResolutionParam::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNavMeshResolutionParam.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_NavigationSystem();
    Z_Registration_Info_UScriptStruct_FNavMeshResolutionParam.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNavMeshResolutionParam,(UObject *)pUVar1,
                         L"NavMeshResolutionParam");
  }
  return Z_Registration_Info_UScriptStruct_FNavMeshResolutionParam.OuterSingleton;
}

// FNavMeshResolutionParam @ 146dd4e60

FNavMeshResolutionParam * __thiscall
FNavMeshResolutionParam::FNavMeshResolutionParam(FNavMeshResolutionParam *this)

{
  this->CellSize = 25.0;
  this->CellHeight = 10.0;
  this->AgentMaxStepHeight = 35.0;
  return this;
}

