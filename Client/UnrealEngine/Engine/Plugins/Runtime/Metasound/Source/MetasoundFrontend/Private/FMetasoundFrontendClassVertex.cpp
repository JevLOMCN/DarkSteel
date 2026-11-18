// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 4

// StaticStruct @ 14ad790e0

UScriptStruct * __cdecl FMetasoundFrontendClassVertex::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMetasoundFrontendClassVertex.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MetasoundFrontend();
    Z_Registration_Info_UScriptStruct_FMetasoundFrontendClassVertex.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMetasoundFrontendClassVertex,(UObject *)pUVar1,
                         L"MetasoundFrontendClassVertex");
  }
  return Z_Registration_Info_UScriptStruct_FMetasoundFrontendClassVertex.OuterSingleton;
}

// CanConnectVertexAccessTypes @ 14ada7600

bool __cdecl
FMetasoundFrontendClassVertex::CanConnectVertexAccessTypes
          (EMetasoundFrontendVertexAccessType param_1,EMetasoundFrontendVertexAccessType param_2)

{
  if ((param_1 != Unset) && (param_2 == Value)) {
    return param_1 == Value;
  }
  return true;
}

// IsFunctionalEquivalent @ 14adc72e0

bool __cdecl
FMetasoundFrontendClassVertex::IsFunctionalEquivalent
          (FMetasoundFrontendClassVertex *param_1,FMetasoundFrontendClassVertex *param_2)

{
  if (((*(longlong *)param_1 == *(longlong *)param_2) &&
      (*(longlong *)&param_1->field_0x8 == *(longlong *)&param_2->field_0x8)) &&
     (param_1->AccessType == param_2->AccessType)) {
    return true;
  }
  return false;
}

// SplitName @ 14add11a0

void __thiscall
FMetasoundFrontendClassVertex::SplitName
          (FMetasoundFrontendClassVertex *this,FName *param_1,FName *param_2)

{
  FName FVar1;
  
  FVar1.ComparisonIndex.Value = *(uint *)&this->field_0x0;
  FVar1.Number = *(uint *)&this->field_0x4;
  Audio::FParameterPath::SplitName(FVar1,param_1,param_2);
  return;
}

