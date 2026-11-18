// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Serialization
// Functions: 1

// StaticStruct @ 148b87030

UScriptStruct * __cdecl FStructSerializerBooleanTestStruct::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStructSerializerBooleanTestStruct.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Serialization();
    Z_Registration_Info_UScriptStruct_FStructSerializerBooleanTestStruct.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct,
                         (UObject *)pUVar1,L"StructSerializerBooleanTestStruct");
  }
  return Z_Registration_Info_UScriptStruct_FStructSerializerBooleanTestStruct.OuterSingleton;
}

