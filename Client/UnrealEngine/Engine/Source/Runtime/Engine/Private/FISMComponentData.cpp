// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// StaticStruct @ 147d42470

UScriptStruct * __cdecl FISMComponentData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FISMComponentData.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FISMComponentData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FISMComponentData,(UObject *)pUVar1,
                         L"ISMComponentData");
  }
  return Z_Registration_Info_UScriptStruct_FISMComponentData.OuterSingleton;
}

// FISMComponentData @ 147d77b40

FISMComponentData * __thiscall FISMComponentData::FISMComponentData(FISMComponentData *this)

{
  return this;
}

