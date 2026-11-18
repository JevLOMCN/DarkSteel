// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// StaticStruct @ 14907a8d0

UScriptStruct * __cdecl FNDCAccessContext_MapBase::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNDCAccessContext_MapBase.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNDCAccessContext_MapBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNDCAccessContext_MapBase,(UObject *)pUVar1,
                         L"NDCAccessContext_MapBase");
  }
  return Z_Registration_Info_UScriptStruct_FNDCAccessContext_MapBase.OuterSingleton;
}

