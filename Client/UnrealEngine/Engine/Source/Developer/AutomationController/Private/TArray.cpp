// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AutomationController
// Functions: 7

// operator= @ 148c54310

TArray<FAutomatedTestFilter,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FAutomatedTestFilter,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FAutomatedTestFilter,TSizedDefaultAllocator<32>_> *this,
          TArray<FAutomatedTestFilter,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FAutomatedTestFilter *pFVar3;
  
  if (this != param_1) {
    DestructItems<FAutomatedTestFilter,int>
              ((FAutomatedTestFilter *)(this->AllocatorInstance).Data,this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pFVar3 = (FAutomatedTestFilter *)(param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<FAutomatedTestFilter,FAutomatedTestFilter,int>
              ((this->AllocatorInstance).Data,pFVar3,iVar2);
  }
  return this;
}

// operator= @ 148c543b0

TArray<FAutomatedTestTagFilter,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FAutomatedTestTagFilter,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FAutomatedTestTagFilter,TSizedDefaultAllocator<32>_> *this,
          TArray<FAutomatedTestTagFilter,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FAutomatedTestTagFilter *pFVar3;
  
  if (this != param_1) {
    DestructItems<FAutomatedTestTagFilter,int>
              ((FAutomatedTestTagFilter *)(this->AllocatorInstance).Data,this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pFVar3 = (FAutomatedTestTagFilter *)(param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<FAutomatedTestTagFilter,FAutomatedTestTagFilter,int>
              ((this->AllocatorInstance).Data,pFVar3,iVar2);
  }
  return this;
}

// operator= @ 148c54450

TArray<FAutomationArtifact,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FAutomationArtifact,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FAutomationArtifact,TSizedDefaultAllocator<32>_> *this,
          TArray<FAutomationArtifact,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FAutomationArtifact *pFVar3;
  
  if (this != param_1) {
    DestructItems<FAutomationArtifact,int>
              ((FAutomationArtifact *)(this->AllocatorInstance).Data,this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pFVar3 = (FAutomationArtifact *)(param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (200,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<FAutomationArtifact,FAutomationArtifact,int>
              ((this->AllocatorInstance).Data,pFVar3,iVar2);
  }
  return this;
}

// operator= @ 148c544f0

TArray<FAutomationExecutionEntry,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FAutomationExecutionEntry,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FAutomationExecutionEntry,TSizedDefaultAllocator<32>_> *this,
          TArray<FAutomationExecutionEntry,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FAutomationExecutionEntry *pFVar3;
  
  if (this != param_1) {
    DestructItems<FAutomationExecutionEntry,int>
              ((FAutomationExecutionEntry *)(this->AllocatorInstance).Data,this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pFVar3 = (FAutomationExecutionEntry *)(param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x58,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<FAutomationExecutionEntry,FAutomationExecutionEntry,int>
              ((this->AllocatorInstance).Data,pFVar3,iVar2);
  }
  return this;
}

// RemoveAt @ 148c67210

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FAutomationControllerManager::FTestRunningInfo,TSizedDefaultAllocator<32>_>::RemoveAt
          (TArray<FAutomationControllerManager::FTestRunningInfo,TSizedDefaultAllocator<32>_> *this,
          int param_1,EAllowShrinking param_2)

{
  FScriptContainerElement *_Dst;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x28;
  iVar4 = this->ArrayNum + ~param_1;
  if (iVar4 != 0) {
    memmove(_Dst,_Dst + 0x28,(longlong)iVar4 * 0x28);
  }
  iVar4 = this->ArrayNum + -1;
  this->ArrayNum = iVar4;
  if (param_2 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,&this->AllocatorInstance,iVar4,&this->ArrayMax);
  }
  return;
}

// RemoveAtImpl @ 148c672f0

void __thiscall
TArray<FAutomationTestResults,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FAutomationTestResults,TSizedDefaultAllocator<32>_> *this,int param_1,int param_2)

{
  int iVar1;
  FAutomationTestResults *_Dst;
  
  _Dst = (FAutomationTestResults *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x40);
  DestructItems<FAutomationTestResults,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 << 6);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 148c67370

void __thiscall
TArray<TArray<FAutomationTestResults,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
RemoveAtImpl(TArray<TArray<FAutomationTestResults,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
             *this,int param_1,int param_2)

{
  int iVar1;
  TArray<FAutomationTestResults,TSizedDefaultAllocator<32>_> *_Dst;
  
  _Dst = (TArray<FAutomationTestResults,TSizedDefaultAllocator<32>_> *)
         ((this->AllocatorInstance).Data + (longlong)param_1 * 0x10);
  DestructItems<TArray<FAutomationTestResults,TSizedDefaultAllocator<32>_>,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 << 4);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

