// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 4

// ~IMessageToken @ 1417a7aa0

void __thiscall IMessageToken::~IMessageToken(IMessageToken *this)

{
  int *piVar1;
  int iVar2;
  ITextData *pIVar3;
  void *pvVar4;
  longlong *plVar5;
  
  this->_padding_ = (longlong)&___7IMessageToken__6B_;
  pIVar3 = (this->CachedText).TextData.Reference;
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->MessageTokenActivated);
  pvVar4 = *(void **)&(this->MessageTokenActivated).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->MessageTokenActivated);
  plVar5 = (longlong *)this->_padding_;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar5 + 8))(plVar5,1);
    }
  }
  return;
}

// GetOnMessageTokenActivated @ 1417d4dc0

TDelegate<void___cdecl(TSharedRef<IMessageToken,1>_const_&),FDefaultDelegateUserPolicy> * __thiscall
IMessageToken::GetOnMessageTokenActivated(IMessageToken *this)

{
  return &this->MessageTokenActivated;
}

// OnMessageTokenActivated @ 1417e7c80

TSharedRef<IMessageToken,1> * __thiscall
IMessageToken::OnMessageTokenActivated
          (IMessageToken *this,TSharedRef<IMessageToken,1> *__return_storage_ptr__,
          TDelegate<void___cdecl(TSharedRef<IMessageToken,1>_const_&),FDefaultDelegateUserPolicy>
          *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  IMessageToken *pIVar5;
  TSharedRef<IMessageToken,1> *pTVar6;
  IMessageToken *pIVar7;
  IMessageToken *pIVar8;
  IMessageToken *pIVar9;
  bool bVar10;
  undefined1 local_58 [8];
  ForAnyElementType local_50;
  int local_48;
  FDestructionSentinel local_40;
  FReadAccessScope local_28;
  
  pIVar8 = (IMessageToken *)0x0;
  if (param_1 != &this->MessageTokenActivated) {
    local_58 = (undefined1  [8])0x0;
    local_50.Data = (FScriptContainerElement *)0x0;
    local_48 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,&local_28);
    if ((*(int *)&param_1->field_0x10 != 0) &&
       (plVar1 = *(longlong **)&param_1->field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x50))(plVar1,local_58);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->MessageTokenActivated,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_58);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    if ((local_48 != 0) && (local_50.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_50.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_50,0,0,0x10);
      local_48 = 0;
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    if (local_50.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_58);
  }
  pIVar5 = (IMessageToken *)this->_padding_;
  pIVar7 = pIVar5;
  pIVar9 = pIVar8;
  if (pIVar5 != (IMessageToken *)0x0) {
    iVar3 = (int)pIVar5->_padding_;
    do {
      pIVar7 = pIVar8;
      if (iVar3 == 0) goto LAB_1417e7d93;
      LOCK();
      iVar4 = (int)pIVar5->_padding_;
      bVar10 = iVar3 == iVar4;
      if (bVar10) {
        *(int *)&pIVar5->_padding_ = iVar3 + 1;
        iVar4 = iVar3;
      }
      UNLOCK();
      iVar3 = iVar4;
    } while (!bVar10);
    pIVar7 = pIVar5;
    pIVar9 = (IMessageToken *)this->_padding_;
  }
LAB_1417e7d93:
  pIVar5 = (IMessageToken *)&pIVar9->_padding_;
  if (pIVar9 == (IMessageToken *)0x0) {
    pIVar5 = pIVar8;
  }
  if ((pIVar5 != (IMessageToken *)&this->_padding_) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("SharedThis.Get() == this",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x67f,L""), bVar10)) {
    pcVar2 = (code *)swi(3);
    pTVar6 = (TSharedRef<IMessageToken,1> *)(*pcVar2)();
    return pTVar6;
  }
  if ((pIVar9 == (IMessageToken *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar10)) {
    pcVar2 = (code *)swi(3);
    pTVar6 = (TSharedRef<IMessageToken,1> *)(*pcVar2)();
    return pTVar6;
  }
  __return_storage_ptr__->Object = pIVar9;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pIVar7;
  if ((pIVar9 == (IMessageToken *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar10)) {
    pcVar2 = (code *)swi(3);
    pTVar6 = (TSharedRef<IMessageToken,1> *)(*pcVar2)();
    return pTVar6;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
  if (*(void **)&param_1->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_1->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_1);
  return __return_storage_ptr__;
}

// ToText @ 141808450

FText * __thiscall IMessageToken::ToText(IMessageToken *this)

{
  return &this->CachedText;
}

