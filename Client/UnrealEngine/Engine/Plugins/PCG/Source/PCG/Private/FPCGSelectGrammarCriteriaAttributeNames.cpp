// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 2

// StaticStruct @ 1499036b0

UScriptStruct * __cdecl FPCGSelectGrammarCriteriaAttributeNames::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPCGSelectGrammarCriteriaAttributeNames.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGSelectGrammarCriteriaAttributeNames.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGSelectGrammarCriteriaAttributeNames,
                         (UObject *)pUVar1,L"PCGSelectGrammarCriteriaAttributeNames");
  }
  return Z_Registration_Info_UScriptStruct_FPCGSelectGrammarCriteriaAttributeNames.OuterSingleton;
}

// FPCGSelectGrammarCriteriaAttributeNames @ 1499c2df0

FPCGSelectGrammarCriteriaAttributeNames * __thiscall
FPCGSelectGrammarCriteriaAttributeNames::FPCGSelectGrammarCriteriaAttributeNames
          (FPCGSelectGrammarCriteriaAttributeNames *this)

{
  ::FName::FName(&this->KeyAttributeName,L"Key");
  ::FName::FName(&this->ComparatorAttributeName,L"Comparator");
  ::FName::FName(&this->FirstValueAttributeName,L"FirstValue");
  ::FName::FName(&this->SecondValueAttributeName,L"SecondValue");
  ::FName::FName(&this->GrammarAttributeName,L"Grammar");
  return this;
}

