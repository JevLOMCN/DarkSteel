// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// StaticStruct @ 1472841c0

UScriptStruct * __cdecl FUniqueNetIdReplNetSerializerStringStruct::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FUniqueNetIdReplNetSerializerStringStruct.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FUniqueNetIdReplNetSerializerStringStruct.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FUniqueNetIdReplNetSerializerStringStruct,
                         (UObject *)pUVar1,L"UniqueNetIdReplNetSerializerStringStruct");
  }
  return Z_Registration_Info_UScriptStruct_FUniqueNetIdReplNetSerializerStringStruct.OuterSingleton;
}

