// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 1

// StaticStruct @ 1422abcb0

UScriptStruct * __cdecl FSolarisProfilingData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSolarisProfilingData.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_CoreUObject();
    Z_Registration_Info_UScriptStruct_FSolarisProfilingData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSolarisProfilingData,(UObject *)pUVar1,
                         L"SolarisProfilingData");
  }
  return Z_Registration_Info_UScriptStruct_FSolarisProfilingData.OuterSingleton;
}

