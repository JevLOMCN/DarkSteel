// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// StaticStruct @ 14727b9d0

UScriptStruct * __cdecl FPredictProjectilePathPointData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPredictProjectilePathPointData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FPredictProjectilePathPointData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPredictProjectilePathPointData,(UObject *)pUVar1
                         ,L"PredictProjectilePathPointData");
  }
  return Z_Registration_Info_UScriptStruct_FPredictProjectilePathPointData.OuterSingleton;
}

