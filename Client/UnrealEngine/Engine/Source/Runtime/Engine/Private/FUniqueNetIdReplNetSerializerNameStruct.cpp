// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// StaticStruct @ 147284200

UScriptStruct * __cdecl FUniqueNetIdReplNetSerializerNameStruct::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FUniqueNetIdReplNetSerializerNameStruct.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FUniqueNetIdReplNetSerializerNameStruct.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FUniqueNetIdReplNetSerializerNameStruct,
                         (UObject *)pUVar1,L"UniqueNetIdReplNetSerializerNameStruct");
  }
  return Z_Registration_Info_UScriptStruct_FUniqueNetIdReplNetSerializerNameStruct.OuterSingleton;
}

