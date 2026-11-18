// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 3

// FWeakWidgetPath @ 1426a9980

/* WARNING: Enum "Type": Some values do not have unique names */

FWeakWidgetPath * __thiscall
FWeakWidgetPath::FWeakWidgetPath(FWeakWidgetPath *this,FWeakWidgetPath *param_1)

{
  int *piVar1;
  int iVar2;
  TWeakPtr<SWidget,1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  (this->Widgets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Widgets).ArrayMax;
  iVar2 = (param_1->Widgets).ArrayNum;
  pTVar3 = (TWeakPtr<SWidget,1> *)(param_1->Widgets).AllocatorInstance.Data;
  (this->Widgets).ArrayNum = iVar2;
  if (iVar2 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar2,0,(ForAnyElementType *)this,iVar2,piVar1);
    ConstructItems<TWeakPtr<SWidget,1>,TWeakPtr<SWidget,1>,int>
              ((this->Widgets).AllocatorInstance.Data,pTVar3,iVar2);
  }
  (this->Window).Object = (param_1->Window).Object;
  pTVar4 = (param_1->Window).WeakReferenceCount.ReferenceController;
  (this->Window).WeakReferenceCount.ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// operator= @ 1426ac610

/* WARNING: Enum "Type": Some values do not have unique names */

FWeakWidgetPath * __thiscall
FWeakWidgetPath::operator=(FWeakWidgetPath *this,FWeakWidgetPath *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FScriptContainerElement *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  TWeakPtr<SWindow,1> *pTVar6;
  
  if (this != param_1) {
    DestructItems<TWeakPtr<SWidget,1>,int>
              ((TWeakPtr<SWidget,1> *)(this->Widgets).AllocatorInstance.Data,
               (this->Widgets).ArrayNum);
    pFVar3 = (this->Widgets).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (this->Widgets).AllocatorInstance.Data = (param_1->Widgets).AllocatorInstance.Data;
    (param_1->Widgets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->Widgets).ArrayNum = (param_1->Widgets).ArrayNum;
    (this->Widgets).ArrayMax = (param_1->Widgets).ArrayMax;
    (param_1->Widgets).ArrayNum = 0;
    (param_1->Widgets).ArrayMax = 0;
  }
  pTVar6 = &param_1->Window;
  if (&this->Window != pTVar6) {
    (this->Window).Object = pTVar6->Object;
    pTVar4 = (param_1->Window).WeakReferenceCount.ReferenceController;
    pTVar6->Object = (SWindow *)0x0;
    pTVar5 = (this->Window).WeakReferenceCount.ReferenceController;
    (this->Window).WeakReferenceCount.ReferenceController = pTVar4;
    (param_1->Window).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar5->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
      }
    }
  }
  return this;
}

// GetLastWidget @ 1426bda20

/* WARNING: Enum "Type": Some values do not have unique names */

TWeakPtr<SWidget,1> * __thiscall
FWeakWidgetPath::GetLastWidget(FWeakWidgetPath *this,TWeakPtr<SWidget,1> *__return_storage_ptr__)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TWeakPtr<SWidget,1> *pTVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  
  if ((this->Widgets).ArrayNum < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\WidgetPath.h"
                       ,0x11a,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TWeakPtr<SWidget,1> *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar1 = (this->Widgets).ArrayNum;
  uVar8 = iVar1 - 1;
  uVar5 = 0;
  if ((int)uVar8 < iVar1) {
    uVar5 = ~uVar8 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TWeakPtr<SWidget,1> *)(*pcVar3)();
      return pTVar6;
    }
  }
  pFVar7 = (this->Widgets).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x10;
  __return_storage_ptr__->Object = *(SWidget **)pFVar7;
  pTVar2 = *(TReferenceControllerBase<1> **)(pFVar7 + 8);
  (__return_storage_ptr__->WeakReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->WeakReferenceCount = (atomic<int>)((int)pTVar2->WeakReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

