// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 2

// StaticStruct @ 14ad75a70

UScriptStruct * __cdecl FMetasoundFrontendVertex::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMetasoundFrontendVertex.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MetasoundFrontend();
    Z_Registration_Info_UScriptStruct_FMetasoundFrontendVertex.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMetasoundFrontendVertex,(UObject *)pUVar1,
                         L"MetasoundFrontendVertex");
  }
  return Z_Registration_Info_UScriptStruct_FMetasoundFrontendVertex.OuterSingleton;
}

// IsFunctionalEquivalent @ 14adc7310

bool __cdecl
FMetasoundFrontendVertex::IsFunctionalEquivalent
          (FMetasoundFrontendVertex *param_1,FMetasoundFrontendVertex *param_2)

{
  if ((param_1->Name == param_2->Name) && (param_1->TypeName == param_2->TypeName)) {
    return true;
  }
  return false;
}

