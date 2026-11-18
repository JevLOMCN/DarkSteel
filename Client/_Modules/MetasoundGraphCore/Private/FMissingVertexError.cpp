// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGraphCore
// Functions: 3

// FMissingVertexError @ 14ad3afa0

FMissingVertexError * __thiscall
Metasound::FMissingVertexError::FMissingVertexError
          (FMissingVertexError *this,FInputDataDestination *param_1)

{
  ITextData *pIVar1;
  uint uVar2;
  FText *pFVar3;
  undefined1 local_res8 [8];
  FText local_18;
  
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"MetasoundBuildError",L"MissingVertexError",
                      L"Node is missing a vertex");
  *(undefined ***)this = &___7FBuildErrorBase_Metasound__6B_;
  uVar2 = ErrorType.Number;
  *(uint *)&this->field_0x8 = ErrorType.ComparisonIndex.Value;
  *(uint *)&this->field_0xc = uVar2;
  *(undefined8 *)&this->field_0x10 = 0;
  pIVar1 = (pFVar3->TextData).Reference;
  *(ITextData **)&this->field_0x10 = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  *(uint *)&this->field_0x18 = pFVar3->Flags;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined8 *)&this->field_0x48 = 0;
  *(undefined8 *)&this->field_0x50 = 0;
  *(undefined8 *)&this->field_0x58 = 0;
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  *(undefined ***)this = &___7FMissingVertexError_Metasound__6B_;
  FBuildErrorBase::AddInputDataDestination((FBuildErrorBase *)this,param_1);
  return this;
}

// FMissingVertexError @ 14ad3b080

FMissingVertexError * __thiscall
Metasound::FMissingVertexError::FMissingVertexError
          (FMissingVertexError *this,FOutputDataSource *param_1)

{
  ITextData *pIVar1;
  uint uVar2;
  FText *pFVar3;
  undefined1 local_res8 [8];
  FText local_18;
  
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"MetasoundBuildError",L"MissingVertexError",
                      L"Node is missing a vertex");
  *(undefined ***)this = &___7FBuildErrorBase_Metasound__6B_;
  uVar2 = ErrorType.Number;
  *(uint *)&this->field_0x8 = ErrorType.ComparisonIndex.Value;
  *(uint *)&this->field_0xc = uVar2;
  *(undefined8 *)&this->field_0x10 = 0;
  pIVar1 = (pFVar3->TextData).Reference;
  *(ITextData **)&this->field_0x10 = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  *(uint *)&this->field_0x18 = pFVar3->Flags;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined8 *)&this->field_0x48 = 0;
  *(undefined8 *)&this->field_0x50 = 0;
  *(undefined8 *)&this->field_0x58 = 0;
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  *(undefined ***)this = &___7FMissingVertexError_Metasound__6B_;
  FBuildErrorBase::AddOutputDataSource((FBuildErrorBase *)this,param_1);
  return this;
}

// ~FMissingVertexError @ 14ad3de60

void __thiscall Metasound::FMissingVertexError::~FMissingVertexError(FMissingVertexError *this)

{
  if (*(void **)&this->field_0x50 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x50);
  }
  DestructItems<Metasound::FInputDataDestination,int>
            (*(FInputDataDestination **)&this->field_0x40,*(int *)&this->field_0x48);
  if (*(void **)&this->field_0x40 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x40);
  }
  DestructItems<Metasound::FDataEdge,int>
            (*(FDataEdge **)&this->field_0x30,*(int *)&this->field_0x38);
  if (*(void **)&this->field_0x30 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x30);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(longlong **)&this->field_0x10 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014ad3d87a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)&this->field_0x10 + 0x10))();
    return;
  }
  return;
}

