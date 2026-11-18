// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Serialization
// Functions: 1

// StaticStruct @ 148b86ff0

UScriptStruct * __cdecl FStructSerializerNumericTestStruct::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStructSerializerNumericTestStruct.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Serialization();
    Z_Registration_Info_UScriptStruct_FStructSerializerNumericTestStruct.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct,
                         (UObject *)pUVar1,L"StructSerializerNumericTestStruct");
  }
  return Z_Registration_Info_UScriptStruct_FStructSerializerNumericTestStruct.OuterSingleton;
}

