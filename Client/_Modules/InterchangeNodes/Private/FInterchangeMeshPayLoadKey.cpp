// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeNodes
// Functions: 1

// StaticStruct @ 14e474d70

UScriptStruct * __cdecl FInterchangeMeshPayLoadKey::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FInterchangeMeshPayLoadKey.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_InterchangeNodes();
    Z_Registration_Info_UScriptStruct_FInterchangeMeshPayLoadKey.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FInterchangeMeshPayLoadKey,(UObject *)pUVar1,
                         L"InterchangeMeshPayLoadKey");
  }
  return Z_Registration_Info_UScriptStruct_FInterchangeMeshPayLoadKey.OuterSingleton;
}

