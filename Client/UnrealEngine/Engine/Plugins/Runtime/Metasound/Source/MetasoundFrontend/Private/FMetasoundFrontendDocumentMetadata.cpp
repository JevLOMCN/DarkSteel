// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 1

// StaticStruct @ 14ad79d20

UScriptStruct * __cdecl FMetasoundFrontendDocumentMetadata::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMetasoundFrontendDocumentMetadata.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MetasoundFrontend();
    Z_Registration_Info_UScriptStruct_FMetasoundFrontendDocumentMetadata.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMetasoundFrontendDocumentMetadata,
                         (UObject *)pUVar1,L"MetasoundFrontendDocumentMetadata");
  }
  return Z_Registration_Info_UScriptStruct_FMetasoundFrontendDocumentMetadata.OuterSingleton;
}

