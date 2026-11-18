// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 5

// StaticStruct @ 14ad793f0

UScriptStruct * __cdecl FMetasoundFrontendClassInputDefault::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMetasoundFrontendClassInputDefault.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MetasoundFrontend();
    Z_Registration_Info_UScriptStruct_FMetasoundFrontendClassInputDefault.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMetasoundFrontendClassInputDefault,
                         (UObject *)pUVar1,L"MetasoundFrontendClassInputDefault");
  }
  return Z_Registration_Info_UScriptStruct_FMetasoundFrontendClassInputDefault.OuterSingleton;
}

// FMetasoundFrontendClassInputDefault @ 14ad9a390

FMetasoundFrontendClassInputDefault * __thiscall
FMetasoundFrontendClassInputDefault::FMetasoundFrontendClassInputDefault
          (FMetasoundFrontendClassInputDefault *this,FAudioParameter *param_1)

{
  FMetasoundFrontendLiteral::FMetasoundFrontendLiteral(&this->Literal,param_1);
  this->PageID = Metasound::Frontend::DefaultPageID;
  return this;
}

// FMetasoundFrontendClassInputDefault @ 14ad9a3c0

FMetasoundFrontendClassInputDefault * __thiscall
FMetasoundFrontendClassInputDefault::FMetasoundFrontendClassInputDefault
          (FMetasoundFrontendClassInputDefault *this,FGuid *param_1,
          FMetasoundFrontendLiteral *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  FMetasoundFrontendLiteral::FMetasoundFrontendLiteral(&this->Literal,param_2);
  uVar1 = param_1->B;
  uVar2 = param_1->C;
  uVar3 = param_1->D;
  (this->PageID).A = param_1->A;
  (this->PageID).B = uVar1;
  (this->PageID).C = uVar2;
  (this->PageID).D = uVar3;
  FMetasoundFrontendLiteral::~FMetasoundFrontendLiteral(param_2);
  return this;
}

// FMetasoundFrontendClassInputDefault @ 14ad9a410

FMetasoundFrontendClassInputDefault * __thiscall
FMetasoundFrontendClassInputDefault::FMetasoundFrontendClassInputDefault
          (FMetasoundFrontendClassInputDefault *this,FMetasoundFrontendLiteral *param_1)

{
  FMetasoundFrontendLiteral::FMetasoundFrontendLiteral(&this->Literal,param_1);
  this->PageID = Metasound::Frontend::DefaultPageID;
  FMetasoundFrontendLiteral::~FMetasoundFrontendLiteral(param_1);
  return this;
}

// IsFunctionalEquivalent @ 14adc72a0

bool __cdecl
FMetasoundFrontendClassInputDefault::IsFunctionalEquivalent
          (FMetasoundFrontendClassInputDefault *param_1,FMetasoundFrontendClassInputDefault *param_2
          )

{
  bool bVar1;
  
  if ((((param_1->PageID).D != (param_2->PageID).D || (param_1->PageID).C != (param_2->PageID).C) ||
      (param_1->PageID).B != (param_2->PageID).B) || (param_1->PageID).A != (param_2->PageID).A) {
    return false;
  }
  bVar1 = FMetasoundFrontendLiteral::IsEqual(&param_1->Literal,&param_2->Literal);
  return bVar1;
}

