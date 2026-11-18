// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 2

// ~FDS_LinkTextData @ 14b42b610

void __thiscall FDS_LinkTextData::~FDS_LinkTextData(FDS_LinkTextData *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  ITextData *pIVar3;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnClick);
  pvVar1 = *(void **)&(this->OnClick).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnClick);
  FTextBlockStyle::~FTextBlockStyle(&this->Style);
  pFVar2 = (this->LinkData).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pIVar3 = (this->LinkText).TextData.Reference;
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 0x10))();
  }
  return;
}

// operator= @ 14b42b8a0

FDS_LinkTextData * __thiscall
FDS_LinkTextData::operator=(FDS_LinkTextData *this,FDS_LinkTextData *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  undefined8 uVar3;
  undefined1 local_res8 [8];
  
  pIVar1 = (param_1->LinkText).TextData.Reference;
  pIVar2 = (this->LinkText).TextData.Reference;
  if (pIVar2 != pIVar1) {
    (this->LinkText).TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (this->LinkText).Flags = (param_1->LinkText).Flags;
  ::FString::operator=(&this->LinkData,&param_1->LinkData);
  FTextBlockStyle::operator=(&this->Style,&param_1->Style);
  uVar3 = *(undefined8 *)((longlong)&(param_1->OverrideColor).field0_0x0 + 8);
  *(undefined8 *)&(this->OverrideColor).field0_0x0 =
       *(undefined8 *)&(param_1->OverrideColor).field0_0x0;
  *(undefined8 *)((longlong)&(this->OverrideColor).field0_0x0 + 8) = uVar3;
  TDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&this->OnClick,&param_1->OnClick);
  this->Underline = param_1->Underline;
  return this;
}

