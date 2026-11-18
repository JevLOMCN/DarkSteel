// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 2

// FMissingOutputNodeInputReferenceError @ 14af3d070

FMissingOutputNodeInputReferenceError * __thiscall
Metasound::FMissingOutputNodeInputReferenceError::FMissingOutputNodeInputReferenceError
          (FMissingOutputNodeInputReferenceError *this,INode *param_1)

{
  FText *pFVar1;
  FName local_res8;
  FText local_18;
  
  pFVar1 = FText::FText(&local_18);
  ::FName::FName(&local_res8,"MetasoundMissingOutputDataReferenceError");
  FBuildErrorBase::FBuildErrorBase((FBuildErrorBase *)this,&local_res8,pFVar1);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  *(undefined ***)this = &___7FMissingOutputNodeInputReferenceError_Metasound__6B_;
  FBuildErrorBase::AddNode((FBuildErrorBase *)this,param_1);
  return this;
}

// ~FMissingOutputNodeInputReferenceError @ 14af42d50

void __thiscall
Metasound::FMissingOutputNodeInputReferenceError::~FMissingOutputNodeInputReferenceError
          (FMissingOutputNodeInputReferenceError *this)

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

