// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 2

// StaticStruct @ 14ad75c40

UScriptStruct * __cdecl FMetasoundFrontendVertexLiteral::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMetasoundFrontendVertexLiteral.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MetasoundFrontend();
    Z_Registration_Info_UScriptStruct_FMetasoundFrontendVertexLiteral.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMetasoundFrontendVertexLiteral,(UObject *)pUVar1
                         ,L"MetasoundFrontendVertexLiteral");
  }
  return Z_Registration_Info_UScriptStruct_FMetasoundFrontendVertexLiteral.OuterSingleton;
}

// ~FMetasoundFrontendVertexLiteral @ 14addf3b0

void __thiscall
FMetasoundFrontendVertexLiteral::~FMetasoundFrontendVertexLiteral
          (FMetasoundFrontendVertexLiteral *this)

{
  FMetasoundFrontendLiteral::~FMetasoundFrontendLiteral(&this->Value);
  return;
}

