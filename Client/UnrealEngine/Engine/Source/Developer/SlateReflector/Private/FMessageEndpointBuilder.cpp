// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateReflector
// Functions: 1

// Build @ 142e2ce50

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FMessageEndpoint,1> * __thiscall
FMessageEndpointBuilder::Build
          (FMessageEndpointBuilder *this,TSharedPtr<FMessageEndpoint,1> *__return_storage_ptr__)

{
  int *piVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  IMessageBus *pIVar4;
  longlong *plVar5;
  code *pcVar6;
  atomic<int> aVar7;
  char cVar8;
  atomic<int> aVar9;
  Type TVar10;
  TReferenceControllerBase<1> *pTVar11;
  TDelegate<void___cdecl(FMessageBusNotification_const_&),FDefaultDelegateUserPolicy> *pTVar12;
  TSharedPtr<FMessageEndpoint,1> *pTVar13;
  Type TVar14;
  TReferenceControllerBase<1> *pTVar15;
  FMessageEndpoint *pFVar16;
  bool bVar17;
  TSharedPtr<FMessageEndpoint,1> local_98;
  longlong *local_88;
  TReferenceControllerBase<1> *local_80;
  TSharedRef<IMessageBus,1> local_78;
  FMessageEndpoint *local_68;
  TReferenceControllerBase<1> *local_60;
  FReadAccessScope local_58;
  TDelegate<void___cdecl(FMessageBusNotification_const_&),FDefaultDelegateUserPolicy> local_40;
  
  pTVar15 = (TReferenceControllerBase<1> *)0x0;
  __return_storage_ptr__->Object = (FMessageEndpoint *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar3 = (this->BusPtr).WeakReferenceCount.ReferenceController;
  pTVar11 = pTVar3;
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) goto LAB_142e2ce93;
  aVar7 = pTVar3->SharedReferenceCount;
  do {
    pTVar11 = pTVar15;
    if (aVar7 == (atomic<int>)0x0) goto LAB_142e2ce93;
    LOCK();
    aVar9 = pTVar3->SharedReferenceCount;
    bVar17 = aVar7 == aVar9;
    if (bVar17) {
      pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar7 + 1);
      aVar9 = aVar7;
    }
    UNLOCK();
    aVar7 = aVar9;
  } while (!bVar17);
  pIVar4 = (this->BusPtr).Object;
  pTVar11 = pTVar3;
  if (pIVar4 == (IMessageBus *)0x0) goto LAB_142e2ce93;
  LOCK();
  pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
  UNLOCK();
  local_78.Object = pIVar4;
  local_78.SharedReferenceCount.ReferenceController = pTVar3;
  pTVar11 = ::operator_new(0x100);
  if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
    pFVar16 = (FMessageEndpoint *)&DAT_00000010;
LAB_142e2cf7e:
    if (((pFVar16->_padding_ == 0) || (pFVar16->_padding_ == 0)) ||
       (*(int *)(pFVar16->_padding_ + 8) < 1)) {
      if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar16->_padding_ = (longlong)pFVar16;
      if (pTVar15 != (TReferenceControllerBase<1> *)pFVar16->_padding_) {
        if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar15->WeakReferenceCount = (atomic<int>)((int)pTVar15->WeakReferenceCount + 1);
          UNLOCK();
        }
        plVar5 = (longlong *)pFVar16->_padding_;
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
        pFVar16->_padding_ = (longlong)pTVar15;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
    }
  }
  else {
    pTVar11->SharedReferenceCount = (atomic<int>)0x1;
    pTVar11->WeakReferenceCount = (atomic<int>)0x1;
    pTVar11->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFMessageEndpoint___00_SharedPointerInternals__6B_;
    pTVar12 = TDelegate<void___cdecl(FMessageBusNotification_const_&),FDefaultDelegateUserPolicy>::
              TDelegate<void___cdecl(FMessageBusNotification_const_&),FDefaultDelegateUserPolicy>
                        (&local_40,&this->OnNotification);
    FMessageEndpoint::FMessageEndpoint
              ((FMessageEndpoint *)(pTVar11 + 1),&this->Name,&local_78,&this->Handlers,pTVar12);
    pFVar16 = (FMessageEndpoint *)(pTVar11 + 1);
    pTVar15 = pTVar11;
    if (pFVar16 != (FMessageEndpoint *)0x0) goto LAB_142e2cf7e;
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("InObject != nullptr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x246,L"");
    if (bVar17) {
      pcVar6 = (code *)swi(3);
      pTVar13 = (TSharedPtr<FMessageEndpoint,1> *)(*pcVar6)();
      return pTVar13;
    }
  }
  if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_98.Object = pFVar16;
  local_98.SharedReferenceCount.ReferenceController = pTVar15;
  if (__return_storage_ptr__ != &local_98) {
    __return_storage_ptr__->Object = pFVar16;
    local_98.Object = (FMessageEndpoint *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&__return_storage_ptr__->SharedReferenceCount,&local_98.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  pcVar6 = *(code **)((longlong)*pIVar4 + 0x28);
  if ((__return_storage_ptr__->Object == (FMessageEndpoint *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x408,L""), bVar17)) {
    pcVar6 = (code *)swi(3);
    pTVar13 = (TSharedPtr<FMessageEndpoint,1> *)(*pcVar6)();
    return pTVar13;
  }
  pTVar11 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  pFVar16 = __return_storage_ptr__->Object;
  if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pFVar16 == (FMessageEndpoint *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x25d,L""), bVar17)) {
    pcVar6 = (code *)swi(3);
    pTVar13 = (TSharedPtr<FMessageEndpoint,1> *)(*pcVar6)();
    return pTVar13;
  }
  if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_68 = pFVar16;
  local_60 = pTVar11;
  if ((__return_storage_ptr__->Object == (FMessageEndpoint *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar17)) {
    pcVar6 = (code *)swi(3);
    pTVar13 = (TSharedPtr<FMessageEndpoint,1> *)(*pcVar6)();
    return pTVar13;
  }
  (*pcVar6)(pIVar4,&__return_storage_ptr__->Object->Address,&local_68);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_60);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnNotification,
             &local_58);
  if (((*(int *)&(this->OnNotification).field_0x10 == 0) ||
      (plVar5 = *(longlong **)&(this->OnNotification).field_0x8, plVar5 == (longlong *)0x0)) ||
     (cVar8 = (**(code **)(*plVar5 + 0x38))(), cVar8 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_58);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_58);
    pcVar6 = *(code **)((longlong)*pIVar4 + 0x78);
    if ((__return_storage_ptr__->Object == (FMessageEndpoint *)0x0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x408,L""), bVar17)) {
      pcVar6 = (code *)swi(3);
      pTVar13 = (TSharedPtr<FMessageEndpoint,1> *)(*pcVar6)();
      return pTVar13;
    }
    pTVar11 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
    pFVar16 = __return_storage_ptr__->Object;
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pFVar16 == (FMessageEndpoint *)0x0) {
      bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x25d,L"");
      if (bVar17) {
        pcVar6 = (code *)swi(3);
        pTVar13 = (TSharedPtr<FMessageEndpoint,1> *)(*pcVar6)();
        return pTVar13;
      }
      local_88 = (longlong *)0x0;
    }
    else {
      local_88 = &pFVar16->_padding_;
    }
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_80 = pTVar11;
    (*pcVar6)(pIVar4,&local_88);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_80);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  }
  if (this->Disabled != false) {
    if ((__return_storage_ptr__->Object == (FMessageEndpoint *)0x0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar17)) {
      pcVar6 = (code *)swi(3);
      pTVar13 = (TSharedPtr<FMessageEndpoint,1> *)(*pcVar6)();
      return pTVar13;
    }
    __return_storage_ptr__->Object->Enabled = false;
  }
  if (this->InboxEnabled == false) {
    if ((__return_storage_ptr__->Object == (FMessageEndpoint *)0x0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar17)) {
      pcVar6 = (code *)swi(3);
      pTVar13 = (TSharedPtr<FMessageEndpoint,1> *)(*pcVar6)();
      return pTVar13;
    }
    TVar10 = this->RecipientThread & AnyNormalThreadNormalTask;
    TVar14 = AnyNormalThreadNormalTask;
    if (TVar10 != AnyNormalThreadNormalTask) {
      TVar14 = TVar10;
    }
    __return_storage_ptr__->Object->RecipientThread = TVar14;
    pTVar11 = pTVar3;
  }
  else {
    if ((__return_storage_ptr__->Object == (FMessageEndpoint *)0x0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar17)) {
      pcVar6 = (code *)swi(3);
      pTVar13 = (TSharedPtr<FMessageEndpoint,1> *)(*pcVar6)();
      return pTVar13;
    }
    __return_storage_ptr__->Object->InboxEnabled = true;
    if ((__return_storage_ptr__->Object == (FMessageEndpoint *)0x0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar17)) {
      pcVar6 = (code *)swi(3);
      pTVar13 = (TSharedPtr<FMessageEndpoint,1> *)(*pcVar6)();
      return pTVar13;
    }
    __return_storage_ptr__->Object->RecipientThread = AnyNormalThreadNormalTask;
    pTVar11 = pTVar3;
  }
LAB_142e2ce93:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  return __return_storage_ptr__;
}

