// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGraphCore
// Functions: 2

// FNodePrunedError @ 14ad3b900

FNodePrunedError * __thiscall
Metasound::FNodePrunedError::FNodePrunedError(FNodePrunedError *this,INode *param_1)

{
  ITextData *pIVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  FText *pFVar5;
  FNodePrunedError *pFVar6;
  FText local_18;
  
  pFVar5 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"MetasoundBuildError",L"NodePrunedError",
                      L"Unreachable node pruned from graph.");
  *(undefined ***)this = &___7FBuildErrorBase_Metasound__6B_;
  uVar3 = ErrorType.Number;
  *(uint *)&this->field_0x8 = ErrorType.ComparisonIndex.Value;
  *(uint *)&this->field_0xc = uVar3;
  *(undefined8 *)&this->field_0x10 = 0;
  pIVar1 = (pFVar5->TextData).Reference;
  *(ITextData **)&this->field_0x10 = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))();
  }
  *(uint *)&this->field_0x18 = pFVar5->Flags;
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
  *(undefined ***)this = &___7FNodePrunedError_Metasound__6B_;
  if (param_1 == (INode *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<9106125219289890973>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundBuildError.cpp"
                       ,0x9d,"nullptr != InNode");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FNodePrunedError *)(*pcVar2)();
      return pFVar6;
    }
  }
  else {
    FBuildErrorBase::AddNode((FBuildErrorBase *)this,param_1);
  }
  return this;
}

// ~FNodePrunedError @ 14ad3df90

void __thiscall Metasound::FNodePrunedError::~FNodePrunedError(FNodePrunedError *this)

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

