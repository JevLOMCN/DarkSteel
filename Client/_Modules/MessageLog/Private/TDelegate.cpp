// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MessageLog
// Functions: 60

// CopyFrom<FDefaultDelegateUserPolicy> @ 142bbcb70

void __thiscall
TDelegate<FString___cdecl(TSharedPtr<IMessageLogListing,1>),FDefaultDelegateUserPolicy>::
CopyFrom<FDefaultDelegateUserPolicy>
          (TDelegate<FString___cdecl(TSharedPtr<IMessageLogListing,1>),FDefaultDelegateUserPolicy>
           *this,TDelegate<FString___cdecl(TSharedPtr<IMessageLogListing,1>),FDefaultDelegateUserPolicy>
                 *param_1)

{
  longlong *plVar1;
  TDelegateBase<FNotThreadSafeDelegateMode> local_38;
  FReadAccessScope local_20;
  
  if (param_1 != this) {
    local_38._0_8_ = 0;
    local_38._8_8_ = 0;
    local_38._16_4_ = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,&local_20);
    if ((*(int *)&param_1->field_0x10 != 0) &&
       (plVar1 = *(longlong **)&param_1->field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x50))(plVar1,&local_38);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_20);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)this,&local_38);
    ~TDelegate<FString___cdecl(TSharedPtr<IMessageLogListing,1>),FDefaultDelegateUserPolicy>
              ((TDelegate<FString___cdecl(TSharedPtr<IMessageLogListing,1>),FDefaultDelegateUserPolicy>
                *)&local_38);
  }
  return;
}

// CopyFrom<FDefaultDelegateUserPolicy> @ 142bbcbf0

void __thiscall
TDelegate<FString___cdecl(TSharedRef<FMessageFilter,1>),FDefaultDelegateUserPolicy>::
CopyFrom<FDefaultDelegateUserPolicy>
          (TDelegate<FString___cdecl(TSharedRef<FMessageFilter,1>),FDefaultDelegateUserPolicy> *this
          ,TDelegate<FString___cdecl(TSharedRef<FMessageFilter,1>),FDefaultDelegateUserPolicy>
           *param_1)

{
  longlong *plVar1;
  undefined1 local_38 [8];
  ForAnyElementType local_30;
  int local_28;
  FDestructionSentinel local_20;
  
  if (param_1 != this) {
    local_38 = (undefined1  [8])0x0;
    local_30.Data = (FScriptContainerElement *)0x0;
    local_28 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
               (FReadAccessScope *)&local_20);
    if ((*(int *)&param_1->field_0x10 != 0) &&
       (plVar1 = *(longlong **)&param_1->field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x50))(plVar1,local_38);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_20);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)this,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_38);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_38,
               (FWriteAccessScope *)&local_20);
    if ((local_28 != 0) && (local_30.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_30.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
      local_28 = 0;
    }
    if (local_20.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_20.Accessor,&local_20);
    }
    if (local_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_38);
  }
  return;
}

// CopyFrom<FDefaultDelegateUserPolicy> @ 142bbccf0

void __thiscall
TDelegate<FString___cdecl(TSharedRef<FTokenizedMessage,1>),FDefaultDelegateUserPolicy>::
CopyFrom<FDefaultDelegateUserPolicy>
          (TDelegate<FString___cdecl(TSharedRef<FTokenizedMessage,1>),FDefaultDelegateUserPolicy>
           *this,TDelegate<FString___cdecl(TSharedRef<FTokenizedMessage,1>),FDefaultDelegateUserPolicy>
                 *param_1)

{
  longlong *plVar1;
  undefined1 local_38 [8];
  ForAnyElementType local_30;
  int local_28;
  FDestructionSentinel local_20;
  
  if (param_1 != this) {
    local_38 = (undefined1  [8])0x0;
    local_30.Data = (FScriptContainerElement *)0x0;
    local_28 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
               (FReadAccessScope *)&local_20);
    if ((*(int *)&param_1->field_0x10 != 0) &&
       (plVar1 = *(longlong **)&param_1->field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x50))(plVar1,local_38);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_20);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)this,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_38);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_38,
               (FWriteAccessScope *)&local_20);
    if ((local_28 != 0) && (local_30.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_30.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
      local_28 = 0;
    }
    if (local_20.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_20.Accessor,&local_20);
    }
    if (local_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_38);
  }
  return;
}

// CreateRaw<SMessageLogListing> @ 142bbcdf0

TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> * __cdecl
TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CreateRaw<SMessageLogListing>
          (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *__return_storage_ptr__,
          SMessageLogListing *param_1,pmf_459a2357 *param_2)

{
  undefined1 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *pTVar8;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
             (FWriteAccessScope *)&local_28);
  local_10 = puVar1;
  puVar6 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)puVar1);
  if (puVar6 != (undefined8 *)0x0) {
    uVar3 = *(undefined8 *)param_2;
    uVar4 = *(undefined8 *)&param_2->field_0x8;
    *puVar6 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &
              ___7__TBaseRawMethodDelegateInstance__00__CBVSMessageLogListing____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[3] = param_1;
    puVar6[4] = uVar3;
    puVar6[5] = uVar4;
    if ((param_1 == (SMessageLogListing *)0x0) || (puVar6[4] == 0)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && MethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                         ,0x1d8,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(*pcVar2)();
        return pTVar8;
      }
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return __return_storage_ptr__;
}

// CreateRaw<SMessageLogListing,wchar_t_const_*> @ 142bbcee0

TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> * __cdecl
TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
CreateRaw<SMessageLogListing,wchar_t_const_*>
          (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *__return_storage_ptr__,
          SMessageLogListing *param_1,pmf_2fb07b08 *param_2,wchar_t **param_3)

{
  undefined1 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *pTVar8;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
             (FWriteAccessScope *)&local_28);
  local_10 = puVar1;
  puVar6 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)puVar1);
  if (puVar6 != (undefined8 *)0x0) {
    uVar3 = *(undefined8 *)param_2;
    uVar4 = *(undefined8 *)&param_2->field_0x8;
    *puVar6 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__PEB_W__6B_;
    puVar6[1] = *param_3;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &
              ___7__TBaseRawMethodDelegateInstance__00__CBVSMessageLogListing____A6AXXZUFDefaultDelegateUserPolicy__PEB_W__6B_
    ;
    puVar6[3] = param_1;
    puVar6[4] = uVar3;
    puVar6[5] = uVar4;
    if ((param_1 == (SMessageLogListing *)0x0) || (puVar6[4] == 0)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && MethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                         ,0x1d8,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(*pcVar2)();
        return pTVar8;
      }
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return __return_storage_ptr__;
}

// CreateSP<FMessageLogListingViewModel> @ 142bbcfe0

TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> * __cdecl
TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CreateSP<FMessageLogListingViewModel>
          (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *__return_storage_ptr__,
          FMessageLogListingViewModel *param_1,pmf_2ceabe0f *param_2)

{
  undefined1 *puVar1;
  FMessageLogListingViewModel *pFVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined8 *puVar8;
  TSharedRef<FMessageLogListingViewModel,1> *pTVar9;
  ulong64 uVar10;
  TReferenceControllerBase<1> *pTVar11;
  uint uStackX_c;
  TSharedRef<FMessageLogListingViewModel,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  bVar7 = false;
  bVar6 = false;
  bVar5 = false;
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
             (FWriteAccessScope *)&local_38);
  local_20 = puVar1;
  puVar8 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)puVar1);
  if (puVar8 == (undefined8 *)0x0) {
    pTVar11 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    uVar3 = *(undefined8 *)param_2;
    uVar4 = *(undefined8 *)&param_2->field_0x8;
    pTVar9 = TSharedFromThis<FMessageLogListingViewModel,1>::AsShared
                       ((TSharedFromThis<FMessageLogListingViewModel,1> *)&param_1->_padding_,
                        &local_48);
    pTVar11 = (pTVar9->SharedReferenceCount).ReferenceController;
    pFVar2 = pTVar9->Object;
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar8 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar8[2] = uVar10;
    *puVar8 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFMessageLogListingViewModel___00__A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar8[3] = pFVar2;
    puVar8[4] = pTVar11;
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar11->WeakReferenceCount = (atomic<int>)((int)pTVar11->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar7 = true;
    bVar6 = true;
    bVar5 = true;
    puVar8[5] = uVar3;
    puVar8[6] = uVar4;
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  }
  if (bVar7) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return __return_storage_ptr__;
}

// CreateSP<FMessageLogListingViewModel,int_&> @ 142bbd120

TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> * __cdecl
TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
CreateSP<FMessageLogListingViewModel,int_&>
          (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *__return_storage_ptr__,
          FMessageLogListingViewModel *param_1,pmf_d021734f *param_2,int *param_3)

{
  undefined1 *puVar1;
  FMessageLogListingViewModel *pFVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined8 *puVar8;
  TSharedRef<FMessageLogListingViewModel,1> *pTVar9;
  ulong64 uVar10;
  TReferenceControllerBase<1> *pTVar11;
  uint uStackX_c;
  TSharedRef<FMessageLogListingViewModel,1> local_58;
  FDestructionSentinel local_48;
  undefined1 *local_30;
  
  bVar7 = false;
  bVar6 = false;
  bVar5 = false;
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
             (FWriteAccessScope *)&local_48);
  local_30 = puVar1;
  puVar8 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)puVar1);
  if (puVar8 == (undefined8 *)0x0) {
    pTVar11 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    uVar3 = *(undefined8 *)param_2;
    uVar4 = *(undefined8 *)&param_2->field_0x8;
    pTVar9 = TSharedFromThis<FMessageLogListingViewModel,1>::AsShared
                       ((TSharedFromThis<FMessageLogListingViewModel,1> *)&param_1->_padding_,
                        &local_58);
    pTVar11 = (pTVar9->SharedReferenceCount).ReferenceController;
    pFVar2 = pTVar9->Object;
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar8 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__H__6B_;
    *(int *)(puVar8 + 1) = *param_3;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar8[2] = uVar10;
    *puVar8 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFMessageLogListingViewModel___00__A6AXXZUFDefaultDelegateUserPolicy__H__6B_
    ;
    puVar8[3] = pFVar2;
    puVar8[4] = pTVar11;
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar11->WeakReferenceCount = (atomic<int>)((int)pTVar11->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar7 = true;
    bVar6 = true;
    bVar5 = true;
    puVar8[5] = uVar3;
    puVar8[6] = uVar4;
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  }
  if (bVar7) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  return __return_storage_ptr__;
}

// CreateSP<FMessageLogViewModel> @ 142bbd270

TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> * __cdecl
TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CreateSP<FMessageLogViewModel>
          (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *__return_storage_ptr__,
          FMessageLogViewModel *param_1,pmf_095e5dfb *param_2)

{
  undefined1 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  atomic<int> aVar5;
  atomic<int> aVar6;
  undefined8 *puVar7;
  TReferenceControllerBase<1> *pTVar8;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *pTVar9;
  ulong64 uVar10;
  TReferenceControllerBase<1> *pTVar11;
  TReferenceControllerBase<1> *pTVar12;
  TReferenceControllerBase<1> *pTVar13;
  bool bVar14;
  uint uStackX_c;
  FDestructionSentinel local_48;
  undefined1 *local_30;
  
  puVar1 = &__return_storage_ptr__->field_0x8;
  pTVar12 = (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
             (FWriteAccessScope *)&local_48);
  local_30 = puVar1;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)puVar1);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar11 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar8 = (TReferenceControllerBase<1> *)param_1->_padding_;
    uVar3 = *(undefined8 *)param_2;
    uVar4 = *(undefined8 *)&param_2->field_0x8;
    pTVar13 = pTVar12;
    pTVar11 = pTVar8;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      aVar5 = pTVar8->SharedReferenceCount;
      do {
        pTVar11 = pTVar12;
        if (aVar5 == (atomic<int>)0x0) goto LAB_142bbd325;
        LOCK();
        aVar6 = pTVar8->SharedReferenceCount;
        bVar14 = aVar5 == aVar6;
        if (bVar14) {
          pTVar8->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
          aVar6 = aVar5;
        }
        UNLOCK();
        aVar5 = aVar6;
      } while (!bVar14);
      pTVar13 = (TReferenceControllerBase<1> *)param_1->_padding_;
      pTVar11 = pTVar8;
    }
LAB_142bbd325:
    pTVar8 = (TReferenceControllerBase<1> *)&pTVar13->SharedReferenceCount;
    if (pTVar13 == (TReferenceControllerBase<1> *)0x0) {
      pTVar8 = pTVar12;
    }
    if ((pTVar8 != (TReferenceControllerBase<1> *)&param_1->_padding_) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("SharedThis.Get() == this",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x67f,L""), bVar14)) {
      pcVar2 = (code *)swi(3);
      pTVar9 = (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(*pcVar2)();
      return pTVar9;
    }
    if (pTVar13 == (TReferenceControllerBase<1> *)0x0) {
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L"");
      if (bVar14) {
        pcVar2 = (code *)swi(3);
        pTVar9 = (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(*pcVar2)();
        return pTVar9;
      }
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L"");
      if (bVar14) {
        pcVar2 = (code *)swi(3);
        pTVar9 = (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(*pcVar2)();
        return pTVar9;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar7 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar10;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFMessageLogViewModel___00__A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = pTVar13;
    puVar7[4] = pTVar11;
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar11->WeakReferenceCount = (atomic<int>)((int)pTVar11->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar12 = (TReferenceControllerBase<1> *)&DAT_00000007;
    puVar7[5] = uVar3;
    puVar7[6] = uVar4;
  }
  if (((ulonglong)pTVar12 & 4) != 0) {
    pTVar12 = (TReferenceControllerBase<1> *)(ulonglong)((uint)pTVar12 & 0xfffffffb);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  }
  if (((ulonglong)pTVar12 & 2) != 0) {
    pTVar12 = (TReferenceControllerBase<1> *)(ulonglong)((uint)pTVar12 & 0xfffffffd);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  }
  if (((ulonglong)pTVar12 & 1) != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  return __return_storage_ptr__;
}

// CreateSP<SMessageLogListing> @ 142bbd490

TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> * __cdecl
TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CreateSP<SMessageLogListing>
          (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *__return_storage_ptr__,
          SMessageLogListing *param_1,pmf_459a2357 *param_2)

{
  undefined1 *puVar1;
  SWidget *pSVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined8 *puVar8;
  TSharedRef<SWidget_const_,1> *pTVar9;
  ulong64 uVar10;
  TReferenceControllerBase<1> *pTVar11;
  uint uStackX_c;
  TSharedRef<SWidget_const_,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  bVar7 = false;
  bVar6 = false;
  bVar5 = false;
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
             (FWriteAccessScope *)&local_38);
  local_20 = puVar1;
  puVar8 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)puVar1);
  if (puVar8 == (undefined8 *)0x0) {
    pTVar11 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    uVar3 = *(undefined8 *)param_2;
    uVar4 = *(undefined8 *)&param_2->field_0x8;
    pTVar9 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_48);
    pTVar11 = (pTVar9->SharedReferenceCount).ReferenceController;
    pSVar2 = pTVar9->Object;
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar8 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar8[2] = uVar10;
    *puVar8 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSMessageLogListing___00__A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar8[3] = pSVar2;
    puVar8[4] = pTVar11;
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar11->WeakReferenceCount = (atomic<int>)((int)pTVar11->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar7 = true;
    bVar6 = true;
    bVar5 = true;
    puVar8[5] = uVar3;
    puVar8[6] = uVar4;
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  }
  if (bVar7) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return __return_storage_ptr__;
}

// TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> @ 142bc45d0

TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> * __thiscall
TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
          (TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined4 *)&this->field_0x10 = 0;
  return this;
}

// TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy> @ 142bc45f0

TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy> * __thiscall
TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>::
TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
          (TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy> *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined4 *)&this->field_0x10 = 0;
  return this;
}

// TDelegate<enum_EColumnSortMode::Type___cdecl(void),FDefaultDelegateUserPolicy> @ 142bc4610

TDelegate<EColumnSortMode::Type___cdecl(void),FDefaultDelegateUserPolicy> * __thiscall
TDelegate<enum_EColumnSortMode::Type___cdecl(void),FDefaultDelegateUserPolicy>::
TDelegate<enum_EColumnSortMode::Type___cdecl(void),FDefaultDelegateUserPolicy>
          (void *this,
          TDelegate<EColumnSortMode::Type___cdecl(void),FDefaultDelegateUserPolicy> *param_1)

{
  longlong *plVar1;
  ForAnyElementType FVar2;
  int iVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_48;
  ForAnyElementType local_40;
  int local_38;
  FDestructionSentinel local_30;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)((longlong)this + 8) = 0;
  *(undefined4 *)((longlong)this + 0x10) = 0;
  if (param_1 != this) {
    local_48.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_40.Data = (FScriptContainerElement *)0x0;
    local_38 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
               (FReadAccessScope *)&local_30);
    if ((*(int *)&param_1->field_0x10 != 0) &&
       (plVar1 = *(longlong **)&param_1->field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x50))(plVar1,&local_48);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_30);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_48,(FWriteAccessScope *)&local_30);
    iVar3 = local_38;
    FVar2.Data = local_40.Data;
    local_40.Data = (FScriptContainerElement *)0x0;
    local_38 = 0;
    if (local_30.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (this,(FWriteAccessScope *)&local_30);
    if ((*(int *)((longlong)this + 0x10) != 0) &&
       (*(undefined8 **)((longlong)this + 8) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)((longlong)this + 8))();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)((longlong)this + 8),0,0,0x10);
      *(undefined4 *)((longlong)this + 0x10) = 0;
    }
    if (*(void **)((longlong)this + 8) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)this + 8));
    }
    *(FScriptContainerElement **)((longlong)this + 8) = FVar2.Data;
    *(int *)((longlong)this + 0x10) = iVar3;
    if (local_30.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_48,(FWriteAccessScope *)&local_30);
    if ((local_38 != 0) && (local_40.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_40.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_40,0,0,0x10);
      local_38 = 0;
    }
    if (local_30.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
    }
    if (local_40.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_48.AccessDetector);
  }
  return this;
}

// TDelegate<enum_EColumnSortPriority::Type___cdecl(void),FDefaultDelegateUserPolicy> @ 142bc47b0

TDelegate<EColumnSortPriority::Type___cdecl(void),FDefaultDelegateUserPolicy> * __thiscall
TDelegate<enum_EColumnSortPriority::Type___cdecl(void),FDefaultDelegateUserPolicy>::
TDelegate<enum_EColumnSortPriority::Type___cdecl(void),FDefaultDelegateUserPolicy>
          (void *this,
          TDelegate<EColumnSortPriority::Type___cdecl(void),FDefaultDelegateUserPolicy> *param_1)

{
  longlong *plVar1;
  ForAnyElementType FVar2;
  int iVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_48;
  ForAnyElementType local_40;
  int local_38;
  FDestructionSentinel local_30;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)((longlong)this + 8) = 0;
  *(undefined4 *)((longlong)this + 0x10) = 0;
  if (param_1 != this) {
    local_48.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_40.Data = (FScriptContainerElement *)0x0;
    local_38 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
               (FReadAccessScope *)&local_30);
    if ((*(int *)&param_1->field_0x10 != 0) &&
       (plVar1 = *(longlong **)&param_1->field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x50))(plVar1,&local_48);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_30);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_48,(FWriteAccessScope *)&local_30);
    iVar3 = local_38;
    FVar2.Data = local_40.Data;
    local_40.Data = (FScriptContainerElement *)0x0;
    local_38 = 0;
    if (local_30.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (this,(FWriteAccessScope *)&local_30);
    if ((*(int *)((longlong)this + 0x10) != 0) &&
       (*(undefined8 **)((longlong)this + 8) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)((longlong)this + 8))();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)((longlong)this + 8),0,0,0x10);
      *(undefined4 *)((longlong)this + 0x10) = 0;
    }
    if (*(void **)((longlong)this + 8) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)this + 8));
    }
    *(FScriptContainerElement **)((longlong)this + 8) = FVar2.Data;
    *(int *)((longlong)this + 0x10) = iVar3;
    if (local_30.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_48,(FWriteAccessScope *)&local_30);
    if ((local_38 != 0) && (local_40.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_40.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_40,0,0,0x10);
      local_38 = 0;
    }
    if (local_30.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
    }
    if (local_40.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_48.AccessDetector);
  }
  return this;
}

// TDelegate<void___cdecl(enum_EColumnSortPriority::Type,FName_const_&,enum_EColumnSortMode::Type),FDefaultDelegateUserPolicy> @ 142bc4950

TDelegate<void___cdecl(EColumnSortPriority::Type,FName_const_&,EColumnSortMode::Type),FDefaultDelegateUserPolicy>
* __thiscall
TDelegate<void___cdecl(enum_EColumnSortPriority::Type,FName_const_&,enum_EColumnSortMode::Type),FDefaultDelegateUserPolicy>
::
TDelegate<void___cdecl(enum_EColumnSortPriority::Type,FName_const_&,enum_EColumnSortMode::Type),FDefaultDelegateUserPolicy>
          (void *this,
          TDelegate<void___cdecl(EColumnSortPriority::Type,FName_const_&,EColumnSortMode::Type),FDefaultDelegateUserPolicy>
          *param_1)

{
  longlong *plVar1;
  ForAnyElementType FVar2;
  int iVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_48;
  ForAnyElementType local_40;
  int local_38;
  FDestructionSentinel local_30;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)((longlong)this + 8) = 0;
  *(undefined4 *)((longlong)this + 0x10) = 0;
  if (param_1 != this) {
    local_48.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_40.Data = (FScriptContainerElement *)0x0;
    local_38 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
               (FReadAccessScope *)&local_30);
    if ((*(int *)&param_1->field_0x10 != 0) &&
       (plVar1 = *(longlong **)&param_1->field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x50))(plVar1,&local_48);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_30);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_48,(FWriteAccessScope *)&local_30);
    iVar3 = local_38;
    FVar2.Data = local_40.Data;
    local_40.Data = (FScriptContainerElement *)0x0;
    local_38 = 0;
    if (local_30.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (this,(FWriteAccessScope *)&local_30);
    if ((*(int *)((longlong)this + 0x10) != 0) &&
       (*(undefined8 **)((longlong)this + 8) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)((longlong)this + 8))();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)((longlong)this + 8),0,0,0x10);
      *(undefined4 *)((longlong)this + 0x10) = 0;
    }
    if (*(void **)((longlong)this + 8) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)this + 8));
    }
    *(FScriptContainerElement **)((longlong)this + 8) = FVar2.Data;
    *(int *)((longlong)this + 0x10) = iVar3;
    if (local_30.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_48,(FWriteAccessScope *)&local_30);
    if ((local_38 != 0) && (local_40.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_40.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_40,0,0,0x10);
      local_38 = 0;
    }
    if (local_30.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
    }
    if (local_40.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_48.AccessDetector);
  }
  return this;
}

// TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> @ 142bc4af0

TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> * __thiscall
TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::
TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>
          (TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined4 *)&this->field_0x10 = 0;
  return this;
}

// ~TDelegate<UE::Math::TVector2<double>___cdecl(FName_const_&,enum_EOrientation),FDefaultDelegateUserPolicy> @ 142bca5b0

void __thiscall
TDelegate<UE::Math::TVector2<double>___cdecl(FName_const_&,enum_EOrientation),FDefaultDelegateUserPolicy>
::
~TDelegate<UE::Math::TVector2<double>___cdecl(FName_const_&,enum_EOrientation),FDefaultDelegateUserPolicy>
          (void *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind(this);
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this);
  return;
}

// ~TDelegate<UE::Math::TVector2<double>___cdecl(int),FDefaultDelegateUserPolicy> @ 142bca5e0

void __thiscall
TDelegate<UE::Math::TVector2<double>___cdecl(int),FDefaultDelegateUserPolicy>::
~TDelegate<UE::Math::TVector2<double>___cdecl(int),FDefaultDelegateUserPolicy>
          (TDelegate<UE::Math::TVector2<double>___cdecl(int),FDefaultDelegateUserPolicy> *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this);
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector((FMRSWRecursiveAccessDetector *)this);
  return;
}

// ~TDelegate<TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy> @ 142bca610

void __thiscall
TDelegate<TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>::
~TDelegate<TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
          (TDelegate<TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy> *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this);
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector((FMRSWRecursiveAccessDetector *)this);
  return;
}

// ~TDelegate<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<IMessageLogListing,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy> @ 142bca640

void __thiscall
TDelegate<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<IMessageLogListing,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::
~TDelegate<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<IMessageLogListing,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
          (TDelegate<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<IMessageLogListing,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this);
  return;
}

// ~TDelegate<FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy> @ 142bca660

void __thiscall
TDelegate<FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>::
~TDelegate<FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>
          (TDelegate<FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this);
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector((FMRSWRecursiveAccessDetector *)this);
  return;
}

// ~TDelegate<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy> @ 142bca690

void __thiscall
TDelegate<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>::
~TDelegate<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
          (TDelegate<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this);
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector((FMRSWRecursiveAccessDetector *)this);
  return;
}

// ~TDelegate<FString___cdecl(TSharedPtr<IMessageLogListing,1>),FDefaultDelegateUserPolicy> @ 142bca6c0

void __thiscall
TDelegate<FString___cdecl(TSharedPtr<IMessageLogListing,1>),FDefaultDelegateUserPolicy>::
~TDelegate<FString___cdecl(TSharedPtr<IMessageLogListing,1>),FDefaultDelegateUserPolicy>
          (TDelegate<FString___cdecl(TSharedPtr<IMessageLogListing,1>),FDefaultDelegateUserPolicy>
           *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this);
  return;
}

// ~TDelegate<enum_ESelectionMode::Type___cdecl(void),FDefaultDelegateUserPolicy> @ 142bca6e0

void __thiscall
TDelegate<enum_ESelectionMode::Type___cdecl(void),FDefaultDelegateUserPolicy>::
~TDelegate<enum_ESelectionMode::Type___cdecl(void),FDefaultDelegateUserPolicy>(void *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(this);
  return;
}

// ~TDelegate<void___cdecl(TSharedRef<ITableRow,1>_const_&),FDefaultDelegateUserPolicy> @ 142bca700

void __thiscall
TDelegate<void___cdecl(TSharedRef<ITableRow,1>_const_&),FDefaultDelegateUserPolicy>::
~TDelegate<void___cdecl(TSharedRef<ITableRow,1>_const_&),FDefaultDelegateUserPolicy>
          (TDelegate<void___cdecl(TSharedRef<ITableRow,1>_const_&),FDefaultDelegateUserPolicy> *this
          )

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this);
  return;
}

// ~TDelegate<void___cdecl(TSharedRef<SHeaderRow,1>_const_&),FDefaultDelegateUserPolicy> @ 142bca720

void __thiscall
TDelegate<void___cdecl(TSharedRef<SHeaderRow,1>_const_&),FDefaultDelegateUserPolicy>::
~TDelegate<void___cdecl(TSharedRef<SHeaderRow,1>_const_&),FDefaultDelegateUserPolicy>
          (TDelegate<void___cdecl(TSharedRef<SHeaderRow,1>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this);
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector((FMRSWRecursiveAccessDetector *)this);
  return;
}

// ~TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy> @ 142bca750

void __thiscall
TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::
~TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>
          (TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy> *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this);
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector((FMRSWRecursiveAccessDetector *)this);
  return;
}

// ~TDelegate<void___cdecl(double),FDefaultDelegateUserPolicy> @ 142bca780

void __thiscall
TDelegate<void___cdecl(double),FDefaultDelegateUserPolicy>::
~TDelegate<void___cdecl(double),FDefaultDelegateUserPolicy>
          (TDelegate<void___cdecl(double),FDefaultDelegateUserPolicy> *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this);
  return;
}

// ~TDelegate<void___cdecl(TSharedPtr<IMessageLogListing,1>),FDefaultDelegateUserPolicy> @ 142bca7a0

void __thiscall
TDelegate<void___cdecl(TSharedPtr<IMessageLogListing,1>),FDefaultDelegateUserPolicy>::
~TDelegate<void___cdecl(TSharedPtr<IMessageLogListing,1>),FDefaultDelegateUserPolicy>
          (TDelegate<void___cdecl(TSharedPtr<IMessageLogListing,1>),FDefaultDelegateUserPolicy>
           *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this);
  return;
}

// ~TDelegate<void___cdecl(TSharedPtr<IMessageLogListing,1>,TSharedPtr<ITableRow,1>_const_&),FDefaultDelegateUserPolicy> @ 142bca7c0

void __thiscall
TDelegate<void___cdecl(TSharedPtr<IMessageLogListing,1>,TSharedPtr<ITableRow,1>_const_&),FDefaultDelegateUserPolicy>
::
~TDelegate<void___cdecl(TSharedPtr<IMessageLogListing,1>,TSharedPtr<ITableRow,1>_const_&),FDefaultDelegateUserPolicy>
          (TDelegate<void___cdecl(TSharedPtr<IMessageLogListing,1>,TSharedPtr<ITableRow,1>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this);
  return;
}

// ~TDelegate<void___cdecl(TSharedPtr<IMessageLogListing,1>,TSharedRef<ITableRow,1>_const_&),FDefaultDelegateUserPolicy> @ 142bca7e0

void __thiscall
TDelegate<void___cdecl(TSharedPtr<IMessageLogListing,1>,TSharedRef<ITableRow,1>_const_&),FDefaultDelegateUserPolicy>
::
~TDelegate<void___cdecl(TSharedPtr<IMessageLogListing,1>,TSharedRef<ITableRow,1>_const_&),FDefaultDelegateUserPolicy>
          (TDelegate<void___cdecl(TSharedPtr<IMessageLogListing,1>,TSharedRef<ITableRow,1>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this);
  return;
}

// ~TDelegate<void___cdecl(TSharedPtr<IMessageLogListing,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy> @ 142bca800

void __thiscall
TDelegate<void___cdecl(TSharedPtr<IMessageLogListing,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::
~TDelegate<void___cdecl(TSharedPtr<IMessageLogListing,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
          (void *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(this);
  return;
}

// ~TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> @ 142bca820

void __thiscall
TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
~TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
          (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this);
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector((FMRSWRecursiveAccessDetector *)this);
  return;
}

// ~TDelegate<bool___cdecl(TSharedPtr<IMessageLogListing,1>),FDefaultDelegateUserPolicy> @ 142bca850

void __thiscall
TDelegate<bool___cdecl(TSharedPtr<IMessageLogListing,1>),FDefaultDelegateUserPolicy>::
~TDelegate<bool___cdecl(TSharedPtr<IMessageLogListing,1>),FDefaultDelegateUserPolicy>
          (TDelegate<bool___cdecl(TSharedPtr<IMessageLogListing,1>),FDefaultDelegateUserPolicy>
           *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this);
  return;
}

// operator= @ 142bcd560

TDelegate<TOptional<EItemDropZone>___cdecl(FDragDropEvent_const_&,EItemDropZone,TSharedPtr<IMessageLogListing,1>),FDefaultDelegateUserPolicy>
* __thiscall
TDelegate<TOptional<enum_EItemDropZone>___cdecl(FDragDropEvent_const_&,enum_EItemDropZone,TSharedPtr<IMessageLogListing,1>),FDefaultDelegateUserPolicy>
::operator=(void *this,
           TDelegate<TOptional<EItemDropZone>___cdecl(FDragDropEvent_const_&,EItemDropZone,TSharedPtr<IMessageLogListing,1>),FDefaultDelegateUserPolicy>
           *param_1)

{
  longlong *plVar1;
  undefined1 local_38 [8];
  ForAnyElementType local_30;
  int local_28;
  FDestructionSentinel local_20;
  
  if (param_1 != this) {
    local_38 = (undefined1  [8])0x0;
    local_30.Data = (FScriptContainerElement *)0x0;
    local_28 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
               (FReadAccessScope *)&local_20);
    if ((*(int *)&param_1->field_0x10 != 0) &&
       (plVar1 = *(longlong **)&param_1->field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x50))(plVar1,local_38);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_20);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              (this,(TDelegateBase<FNotThreadSafeDelegateMode> *)local_38);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_38,
               (FWriteAccessScope *)&local_20);
    if ((local_28 != 0) && (local_30.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_30.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
      local_28 = 0;
    }
    if (local_20.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_20.Accessor,&local_20);
    }
    if (local_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_38);
  }
  return this;
}

// operator= @ 142bcd660

TDelegate<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<IMessageLogListing,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
* __thiscall
TDelegate<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<IMessageLogListing,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::operator=(TDelegate<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<IMessageLogListing,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
            *this,TDelegate<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<IMessageLogListing,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
                  *param_1)

{
  longlong *plVar1;
  TDelegateBase<FNotThreadSafeDelegateMode> local_38;
  FReadAccessScope local_20;
  
  if (param_1 != this) {
    local_38._0_8_ = 0;
    local_38._8_8_ = 0;
    local_38._16_4_ = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,&local_20);
    if ((*(int *)&param_1->field_0x10 != 0) &&
       (plVar1 = *(longlong **)&param_1->field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x50))(plVar1,&local_38);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_20);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)this,&local_38);
    ~TDelegate<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<IMessageLogListing,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
              ((TDelegate<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<IMessageLogListing,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
                *)&local_38);
  }
  return this;
}

// operator= @ 142bcd6f0

TDelegate<TSharedRef<ITableRow,1>___cdecl(TSharedRef<FMessageFilter,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
* __thiscall
TDelegate<TSharedRef<ITableRow,1>___cdecl(TSharedRef<FMessageFilter,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::operator=(TDelegate<TSharedRef<ITableRow,1>___cdecl(TSharedRef<FMessageFilter,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
            *this,TDelegate<TSharedRef<ITableRow,1>___cdecl(TSharedRef<FMessageFilter,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
                  *param_1)

{
  longlong *plVar1;
  undefined1 local_38 [8];
  ForAnyElementType local_30;
  int local_28;
  FDestructionSentinel local_20;
  
  if (param_1 != this) {
    local_38 = (undefined1  [8])0x0;
    local_30.Data = (FScriptContainerElement *)0x0;
    local_28 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
               (FReadAccessScope *)&local_20);
    if ((*(int *)&param_1->field_0x10 != 0) &&
       (plVar1 = *(longlong **)&param_1->field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x50))(plVar1,local_38);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_20);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)this,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_38);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_38,
               (FWriteAccessScope *)&local_20);
    if ((local_28 != 0) && (local_30.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_30.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
      local_28 = 0;
    }
    if (local_20.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_20.Accessor,&local_20);
    }
    if (local_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_38);
  }
  return this;
}

// operator= @ 142bcd7f0

TDelegate<TSharedRef<ITableRow,1>___cdecl(TSharedRef<FTokenizedMessage,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
* __thiscall
TDelegate<TSharedRef<ITableRow,1>___cdecl(TSharedRef<FTokenizedMessage,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::operator=(TDelegate<TSharedRef<ITableRow,1>___cdecl(TSharedRef<FTokenizedMessage,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
            *this,TDelegate<TSharedRef<ITableRow,1>___cdecl(TSharedRef<FTokenizedMessage,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
                  *param_1)

{
  longlong *plVar1;
  undefined1 local_38 [8];
  ForAnyElementType local_30;
  int local_28;
  FDestructionSentinel local_20;
  
  if (param_1 != this) {
    local_38 = (undefined1  [8])0x0;
    local_30.Data = (FScriptContainerElement *)0x0;
    local_28 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
               (FReadAccessScope *)&local_20);
    if ((*(int *)&param_1->field_0x10 != 0) &&
       (plVar1 = *(longlong **)&param_1->field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x50))(plVar1,local_38);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_20);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)this,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_38);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_38,
               (FWriteAccessScope *)&local_20);
    if ((local_28 != 0) && (local_30.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_30.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
      local_28 = 0;
    }
    if (local_20.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_20.Accessor,&local_20);
    }
    if (local_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_38);
  }
  return this;
}

// operator= @ 142bcd8f0

TDelegate<FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy> *
__thiscall
TDelegate<FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>::operator=
          (TDelegate<FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>
           *this,TDelegate<FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>
                 *param_1)

{
  longlong *plVar1;
  undefined1 local_38 [8];
  ForAnyElementType local_30;
  int local_28;
  FDestructionSentinel local_20;
  
  if (param_1 != this) {
    local_38 = (undefined1  [8])0x0;
    local_30.Data = (FScriptContainerElement *)0x0;
    local_28 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
               (FReadAccessScope *)&local_20);
    if ((*(int *)&param_1->field_0x10 != 0) &&
       (plVar1 = *(longlong **)&param_1->field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x50))(plVar1,local_38);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_20);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)this,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_38);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_38,
               (FWriteAccessScope *)&local_20);
    if ((local_28 != 0) && (local_30.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_30.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
      local_28 = 0;
    }
    if (local_20.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_20.Accessor,&local_20);
    }
    if (local_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_38);
  }
  return this;
}

// operator= @ 142bcd9f0

TDelegate<FReply___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy> * __thiscall
TDelegate<FReply___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy>::operator=
          (TDelegate<FReply___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy> *this,
          TDelegate<FReply___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy> *param_1)

{
  longlong *plVar1;
  undefined1 local_38 [8];
  ForAnyElementType local_30;
  int local_28;
  FDestructionSentinel local_20;
  
  if (param_1 != this) {
    local_38 = (undefined1  [8])0x0;
    local_30.Data = (FScriptContainerElement *)0x0;
    local_28 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
               (FReadAccessScope *)&local_20);
    if ((*(int *)&param_1->field_0x10 != 0) &&
       (plVar1 = *(longlong **)&param_1->field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x50))(plVar1,local_38);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_20);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)this,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_38);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_38,
               (FWriteAccessScope *)&local_20);
    if ((local_28 != 0) && (local_30.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_30.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
      local_28 = 0;
    }
    if (local_20.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_20.Accessor,&local_20);
    }
    if (local_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_38);
  }
  return this;
}

// operator= @ 142bcdaf0

TDelegate<FReply___cdecl(FDragDropEvent_const_&,EItemDropZone,TSharedPtr<IMessageLogListing,1>),FDefaultDelegateUserPolicy>
* __thiscall
TDelegate<FReply___cdecl(FDragDropEvent_const_&,enum_EItemDropZone,TSharedPtr<IMessageLogListing,1>),FDefaultDelegateUserPolicy>
::operator=(void *this,
           TDelegate<FReply___cdecl(FDragDropEvent_const_&,EItemDropZone,TSharedPtr<IMessageLogListing,1>),FDefaultDelegateUserPolicy>
           *param_1)

{
  longlong *plVar1;
  undefined1 local_38 [8];
  ForAnyElementType local_30;
  int local_28;
  FDestructionSentinel local_20;
  
  if (param_1 != this) {
    local_38 = (undefined1  [8])0x0;
    local_30.Data = (FScriptContainerElement *)0x0;
    local_28 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
               (FReadAccessScope *)&local_20);
    if ((*(int *)&param_1->field_0x10 != 0) &&
       (plVar1 = *(longlong **)&param_1->field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x50))(plVar1,local_38);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_20);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              (this,(TDelegateBase<FNotThreadSafeDelegateMode> *)local_38);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_38,
               (FWriteAccessScope *)&local_20);
    if ((local_28 != 0) && (local_30.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_30.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
      local_28 = 0;
    }
    if (local_20.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_20.Accessor,&local_20);
    }
    if (local_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_38);
  }
  return this;
}

// operator= @ 142bcdbf0

TDelegate<void___cdecl(TSharedRef<ITableRow,1>_const_&),FDefaultDelegateUserPolicy> * __thiscall
TDelegate<void___cdecl(TSharedRef<ITableRow,1>_const_&),FDefaultDelegateUserPolicy>::operator=
          (TDelegate<void___cdecl(TSharedRef<ITableRow,1>_const_&),FDefaultDelegateUserPolicy> *this
          ,TDelegate<void___cdecl(TSharedRef<ITableRow,1>_const_&),FDefaultDelegateUserPolicy>
           *param_1)

{
  longlong *plVar1;
  TDelegateBase<FNotThreadSafeDelegateMode> local_38;
  FReadAccessScope local_20;
  
  if (param_1 != this) {
    local_38._0_8_ = 0;
    local_38._8_8_ = 0;
    local_38._16_4_ = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,&local_20);
    if ((*(int *)&param_1->field_0x10 != 0) &&
       (plVar1 = *(longlong **)&param_1->field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x50))(plVar1,&local_38);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_20);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)this,&local_38);
    ~TDelegate<void___cdecl(TSharedRef<ITableRow,1>_const_&),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(TSharedRef<ITableRow,1>_const_&),FDefaultDelegateUserPolicy>
                *)&local_38);
  }
  return this;
}

// operator= @ 142bcdc80

TDelegate<void___cdecl(TSharedPtr<IMessageLogListing,1>),FDefaultDelegateUserPolicy> * __thiscall
TDelegate<void___cdecl(TSharedPtr<IMessageLogListing,1>),FDefaultDelegateUserPolicy>::operator=
          (TDelegate<void___cdecl(TSharedPtr<IMessageLogListing,1>),FDefaultDelegateUserPolicy>
           *this,TDelegate<void___cdecl(TSharedPtr<IMessageLogListing,1>),FDefaultDelegateUserPolicy>
                 *param_1)

{
  longlong *plVar1;
  TDelegateBase<FNotThreadSafeDelegateMode> local_38;
  FReadAccessScope local_20;
  
  if (param_1 != this) {
    local_38._0_8_ = 0;
    local_38._8_8_ = 0;
    local_38._16_4_ = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,&local_20);
    if ((*(int *)&param_1->field_0x10 != 0) &&
       (plVar1 = *(longlong **)&param_1->field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x50))(plVar1,&local_38);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_20);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)this,&local_38);
    ~TDelegate<void___cdecl(TSharedPtr<IMessageLogListing,1>),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(TSharedPtr<IMessageLogListing,1>),FDefaultDelegateUserPolicy>
                *)&local_38);
  }
  return this;
}

// operator= @ 142bcdd10

TDelegate<void___cdecl(TSharedRef<FMessageFilter,1>),FDefaultDelegateUserPolicy> * __thiscall
TDelegate<void___cdecl(TSharedRef<FMessageFilter,1>),FDefaultDelegateUserPolicy>::operator=
          (TDelegate<void___cdecl(TSharedRef<FMessageFilter,1>),FDefaultDelegateUserPolicy> *this,
          TDelegate<void___cdecl(TSharedRef<FMessageFilter,1>),FDefaultDelegateUserPolicy> *param_1)

{
  longlong *plVar1;
  undefined1 local_38 [8];
  ForAnyElementType local_30;
  int local_28;
  FDestructionSentinel local_20;
  
  if (param_1 != this) {
    local_38 = (undefined1  [8])0x0;
    local_30.Data = (FScriptContainerElement *)0x0;
    local_28 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
               (FReadAccessScope *)&local_20);
    if ((*(int *)&param_1->field_0x10 != 0) &&
       (plVar1 = *(longlong **)&param_1->field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x50))(plVar1,local_38);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_20);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)this,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_38);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_38,
               (FWriteAccessScope *)&local_20);
    if ((local_28 != 0) && (local_30.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_30.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
      local_28 = 0;
    }
    if (local_20.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_20.Accessor,&local_20);
    }
    if (local_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_38);
  }
  return this;
}

// operator= @ 142bcde10

TDelegate<void___cdecl(TSharedRef<FTokenizedMessage,1>),FDefaultDelegateUserPolicy> * __thiscall
TDelegate<void___cdecl(TSharedRef<FTokenizedMessage,1>),FDefaultDelegateUserPolicy>::operator=
          (TDelegate<void___cdecl(TSharedRef<FTokenizedMessage,1>),FDefaultDelegateUserPolicy> *this
          ,TDelegate<void___cdecl(TSharedRef<FTokenizedMessage,1>),FDefaultDelegateUserPolicy>
           *param_1)

{
  longlong *plVar1;
  undefined1 local_38 [8];
  ForAnyElementType local_30;
  int local_28;
  FDestructionSentinel local_20;
  
  if (param_1 != this) {
    local_38 = (undefined1  [8])0x0;
    local_30.Data = (FScriptContainerElement *)0x0;
    local_28 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
               (FReadAccessScope *)&local_20);
    if ((*(int *)&param_1->field_0x10 != 0) &&
       (plVar1 = *(longlong **)&param_1->field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x50))(plVar1,local_38);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_20);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)this,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_38);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_38,
               (FWriteAccessScope *)&local_20);
    if ((local_28 != 0) && (local_30.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_30.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
      local_28 = 0;
    }
    if (local_20.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_20.Accessor,&local_20);
    }
    if (local_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_38);
  }
  return this;
}

// Execute @ 142bf1930

/* WARNING: Enum "Type": Some values do not have unique names */

TOptional<EItemDropZone> __thiscall
TDelegate<TOptional<enum_EItemDropZone>___cdecl(FDragDropEvent_const_&,enum_EItemDropZone,TSharedPtr<FTokenizedMessage,1>),FDefaultDelegateUserPolicy>
::Execute(void *this,FDragDropEvent *param_1,EItemDropZone param_2,
         TSharedPtr<FTokenizedMessage,1> *param_3)

{
  code *pcVar1;
  longlong *plVar2;
  undefined4 in_register_00000084;
  undefined8 *in_stack_00000028;
  undefined8 local_38;
  undefined8 local_30;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(this,&local_28);
  plVar2 = (longlong *)0x0;
  if (*(int *)((longlong)this + 0x10) != 0) {
    plVar2 = *(longlong **)((longlong)this + 8);
  }
  pcVar1 = *(code **)(*plVar2 + 0x60);
  local_38 = *in_stack_00000028;
  local_30 = in_stack_00000028[1];
  in_stack_00000028[1] = 0;
  *in_stack_00000028 = 0;
  (*pcVar1)(plVar2,param_1,CONCAT44(in_register_00000084,param_2),(ulonglong)param_3 & 0xffffffff,
            &local_38);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)in_stack_00000028[1]);
  return (TOptional<EItemDropZone>)param_1;
}

// Execute @ 142bf19e0

/* WARNING: Enum "Type": Some values do not have unique names */

TOptional<EItemDropZone> __thiscall
TDelegate<TOptional<enum_EItemDropZone>___cdecl(FDragDropEvent_const_&,enum_EItemDropZone,TSharedPtr<IMessageLogListing,1>),FDefaultDelegateUserPolicy>
::Execute(void *this,FDragDropEvent *param_1,EItemDropZone param_2,
         TSharedPtr<IMessageLogListing,1> *param_3)

{
  code *pcVar1;
  longlong *plVar2;
  undefined4 in_register_00000084;
  undefined8 *in_stack_00000028;
  undefined8 local_38;
  undefined8 local_30;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(this,&local_28);
  plVar2 = (longlong *)0x0;
  if (*(int *)((longlong)this + 0x10) != 0) {
    plVar2 = *(longlong **)((longlong)this + 8);
  }
  pcVar1 = *(code **)(*plVar2 + 0x60);
  local_38 = *in_stack_00000028;
  local_30 = in_stack_00000028[1];
  in_stack_00000028[1] = 0;
  *in_stack_00000028 = 0;
  (*pcVar1)(plVar2,param_1,CONCAT44(in_register_00000084,param_2),(ulonglong)param_3 & 0xffffffff,
            &local_38);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)in_stack_00000028[1]);
  return (TOptional<EItemDropZone>)param_1;
}

// Execute @ 142bf1a90

/* WARNING: Enum "Type": Some values do not have unique names */

TOptional<EItemDropZone> __thiscall
TDelegate<TOptional<enum_EItemDropZone>___cdecl(FDragDropEvent_const_&,enum_EItemDropZone,TSharedRef<FMessageFilter,1>),FDefaultDelegateUserPolicy>
::Execute(void *this,FDragDropEvent *param_1,EItemDropZone param_2,
         TSharedRef<FMessageFilter,1> *param_3)

{
  code *pcVar1;
  longlong *plVar2;
  undefined4 in_register_00000084;
  undefined8 *in_stack_00000028;
  undefined8 local_38;
  longlong local_30;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(this,&local_28);
  if (*(int *)((longlong)this + 0x10) == 0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    plVar2 = *(longlong **)((longlong)this + 8);
  }
  pcVar1 = *(code **)(*plVar2 + 0x60);
  local_38 = *in_stack_00000028;
  local_30 = in_stack_00000028[1];
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
    UNLOCK();
  }
  (*pcVar1)(plVar2,param_1,CONCAT44(in_register_00000084,param_2),(ulonglong)param_3 & 0xffffffff,
            &local_38);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)in_stack_00000028[1]);
  return (TOptional<EItemDropZone>)param_1;
}

// Execute @ 142bf1b40

/* WARNING: Enum "Type": Some values do not have unique names */

TOptional<EItemDropZone> __thiscall
TDelegate<TOptional<enum_EItemDropZone>___cdecl(FDragDropEvent_const_&,enum_EItemDropZone,TSharedRef<FTokenizedMessage,1>),FDefaultDelegateUserPolicy>
::Execute(void *this,FDragDropEvent *param_1,EItemDropZone param_2,
         TSharedRef<FTokenizedMessage,1> *param_3)

{
  code *pcVar1;
  longlong *plVar2;
  undefined4 in_register_00000084;
  undefined8 *in_stack_00000028;
  undefined8 local_38;
  longlong local_30;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(this,&local_28);
  if (*(int *)((longlong)this + 0x10) == 0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    plVar2 = *(longlong **)((longlong)this + 8);
  }
  pcVar1 = *(code **)(*plVar2 + 0x60);
  local_38 = *in_stack_00000028;
  local_30 = in_stack_00000028[1];
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
    UNLOCK();
  }
  (*pcVar1)(plVar2,param_1,CONCAT44(in_register_00000084,param_2),(ulonglong)param_3 & 0xffffffff,
            &local_38);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)in_stack_00000028[1]);
  return (TOptional<EItemDropZone>)param_1;
}

// Execute @ 142bf1bf0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
TDelegate<FReply___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy>::Execute
          (TDelegate<FReply___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy> *this,
          FReply *__return_storage_ptr__,FDragDropEvent *param_1)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,&local_28);
  if (*(int *)&this->field_0x10 == 0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    plVar1 = *(longlong **)&this->field_0x8;
  }
  (**(code **)(*plVar1 + 0x60))(plVar1,__return_storage_ptr__,param_1);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return __return_storage_ptr__;
}

// Execute @ 142bf1c50

FText * __thiscall
TDelegate<FText___cdecl(FAssetData_const_&,bool),FDefaultDelegateUserPolicy>::Execute
          (TDelegate<FText___cdecl(FAssetData_const_&,bool),FDefaultDelegateUserPolicy> *this,
          FText *__return_storage_ptr__,FAssetData *param_1,bool param_2)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,&local_28);
  if (*(int *)&this->field_0x10 == 0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    plVar1 = *(longlong **)&this->field_0x8;
  }
  (**(code **)(*plVar1 + 0x60))(plVar1,__return_storage_ptr__,param_1,param_2);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return __return_storage_ptr__;
}

// Execute @ 142bf1cd0

FText * __thiscall
TDelegate<FText___cdecl(UObject_const_*,bool),FDefaultDelegateUserPolicy>::Execute
          (TDelegate<FText___cdecl(UObject_const_*,bool),FDefaultDelegateUserPolicy> *this,
          FText *__return_storage_ptr__,UObject *param_1,bool param_2)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,&local_28);
  if (*(int *)&this->field_0x10 == 0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    plVar1 = *(longlong **)&this->field_0x8;
  }
  (**(code **)(*plVar1 + 0x60))(plVar1,__return_storage_ptr__,param_1,param_2);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return __return_storage_ptr__;
}

// Execute @ 142bf1d50

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
TDelegate<int___cdecl(enum_EItemDropZone,FPaintArgs_const_&,FGeometry_const_&,FSlateRect_const_&,FSlateWindowElementList_&,int,FWidgetStyle_const_&,bool),FDefaultDelegateUserPolicy>
::Execute(void *this,EItemDropZone param_1,FPaintArgs *param_2,FGeometry *param_3,
         FSlateRect *param_4,FSlateWindowElementList *param_5,int param_6,FWidgetStyle *param_7,
         bool param_8)

{
  int iVar1;
  longlong *plVar2;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(this,&local_28);
  if (*(int *)((longlong)this + 0x10) == 0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    plVar2 = *(longlong **)((longlong)this + 8);
  }
  iVar1 = (**(code **)(*plVar2 + 0x60))
                    (plVar2,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return iVar1;
}

// Execute @ 142bf1e10

bool __thiscall
TDelegate<bool___cdecl(TSharedPtr<IMessageLogListing,1>),FDefaultDelegateUserPolicy>::Execute
          (TDelegate<bool___cdecl(TSharedPtr<IMessageLogListing,1>),FDefaultDelegateUserPolicy>
           *this,TSharedPtr<IMessageLogListing,1> *param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  longlong *plVar3;
  IMessageLogListing *local_38;
  TReferenceControllerBase<1> *local_30;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,&local_28);
  plVar3 = (longlong *)0x0;
  if (*(int *)&this->field_0x10 != 0) {
    plVar3 = *(longlong **)&this->field_0x8;
  }
  pcVar1 = *(code **)(*plVar3 + 0x60);
  local_38 = param_1->Object;
  local_30 = (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (IMessageLogListing *)0x0;
  uVar2 = (*pcVar1)(plVar3,&local_38);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return (bool)uVar2;
}

// Execute @ 142bf1e90

bool __thiscall
TDelegate<bool___cdecl(TSharedRef<FMessageFilter,1>),FDefaultDelegateUserPolicy>::Execute
          (TDelegate<bool___cdecl(TSharedRef<FMessageFilter,1>),FDefaultDelegateUserPolicy> *this,
          TSharedRef<FMessageFilter,1> *param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  longlong *plVar3;
  FMessageFilter *local_38;
  TReferenceControllerBase<1> *local_30;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,&local_28);
  if (*(int *)&this->field_0x10 == 0) {
    plVar3 = (longlong *)0x0;
  }
  else {
    plVar3 = *(longlong **)&this->field_0x8;
  }
  pcVar1 = *(code **)(*plVar3 + 0x60);
  local_38 = param_1->Object;
  local_30 = (param_1->SharedReferenceCount).ReferenceController;
  if (local_30 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_30->SharedReferenceCount = (atomic<int>)((int)local_30->SharedReferenceCount + 1);
    UNLOCK();
  }
  uVar2 = (*pcVar1)(plVar3,&local_38);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return (bool)uVar2;
}

// Execute @ 142bf1f10

bool __thiscall
TDelegate<bool___cdecl(TSharedRef<FTokenizedMessage,1>),FDefaultDelegateUserPolicy>::Execute
          (TDelegate<bool___cdecl(TSharedRef<FTokenizedMessage,1>),FDefaultDelegateUserPolicy> *this
          ,TSharedRef<FTokenizedMessage,1> *param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  longlong *plVar3;
  FTokenizedMessage *local_38;
  TReferenceControllerBase<1> *local_30;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,&local_28);
  if (*(int *)&this->field_0x10 == 0) {
    plVar3 = (longlong *)0x0;
  }
  else {
    plVar3 = *(longlong **)&this->field_0x8;
  }
  pcVar1 = *(code **)(*plVar3 + 0x60);
  local_38 = param_1->Object;
  local_30 = (param_1->SharedReferenceCount).ReferenceController;
  if (local_30 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_30->SharedReferenceCount = (atomic<int>)((int)local_30->SharedReferenceCount + 1);
    UNLOCK();
  }
  uVar2 = (*pcVar1)(plVar3,&local_38);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return (bool)uVar2;
}

// ExecuteIfBound @ 142bf1f90

bool __thiscall
TDelegate<void___cdecl(TSharedPtr<FTokenizedMessage,1>,TSharedRef<IMessageToken,1>_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfBound(TDelegate<void___cdecl(TSharedPtr<FTokenizedMessage,1>,TSharedRef<IMessageToken,1>_const_&),FDefaultDelegateUserPolicy>
                 *this,TSharedPtr<FTokenizedMessage,1> *param_1,TSharedRef<IMessageToken,1> *param_2
                )

{
  longlong *plVar1;
  code *pcVar2;
  undefined1 uVar3;
  FTokenizedMessage *local_38;
  TReferenceControllerBase<1> *local_30;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,&local_28);
  if ((*(int *)&this->field_0x10 != 0) &&
     (plVar1 = *(longlong **)&this->field_0x8, plVar1 != (longlong *)0x0)) {
    pcVar2 = *(code **)(*plVar1 + 0x68);
    local_38 = param_1->Object;
    local_30 = (param_1->SharedReferenceCount).ReferenceController;
    (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    param_1->Object = (FTokenizedMessage *)0x0;
    uVar3 = (*pcVar2)(plVar1,&local_38,param_2);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    return (bool)uVar3;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return false;
}

// ExecuteIfBound @ 142bf2050

bool __thiscall
TDelegate<void___cdecl(TSharedPtr<FTokenizedMessage,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::ExecuteIfBound(void *this,TSharedPtr<FTokenizedMessage,1> *param_1,Type param_2)

{
  longlong *plVar1;
  code *pcVar2;
  undefined1 uVar3;
  FTokenizedMessage *local_38;
  TReferenceControllerBase<1> *local_30;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(this,&local_28);
  if ((*(int *)((longlong)this + 0x10) != 0) &&
     (plVar1 = *(longlong **)((longlong)this + 8), plVar1 != (longlong *)0x0)) {
    pcVar2 = *(code **)(*plVar1 + 0x68);
    local_38 = param_1->Object;
    local_30 = (param_1->SharedReferenceCount).ReferenceController;
    (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    param_1->Object = (FTokenizedMessage *)0x0;
    uVar3 = (*pcVar2)(plVar1,&local_38,param_2);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    return (bool)uVar3;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return false;
}

// ExecuteIfBound @ 142bf2110

bool __thiscall
TDelegate<void___cdecl(TSharedPtr<IMessageLogListing,1>),FDefaultDelegateUserPolicy>::ExecuteIfBound
          (TDelegate<void___cdecl(TSharedPtr<IMessageLogListing,1>),FDefaultDelegateUserPolicy>
           *this,TSharedPtr<IMessageLogListing,1> *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  undefined1 uVar3;
  IMessageLogListing *local_38;
  TReferenceControllerBase<1> *local_30;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,&local_28);
  if ((*(int *)&this->field_0x10 != 0) &&
     (plVar1 = *(longlong **)&this->field_0x8, plVar1 != (longlong *)0x0)) {
    pcVar2 = *(code **)(*plVar1 + 0x68);
    local_38 = param_1->Object;
    local_30 = (param_1->SharedReferenceCount).ReferenceController;
    (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    param_1->Object = (IMessageLogListing *)0x0;
    uVar3 = (*pcVar2)(plVar1,&local_38);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    return (bool)uVar3;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return false;
}

// ExecuteIfBound @ 142bf21b0

bool __thiscall
TDelegate<void___cdecl(TSharedRef<FMessageFilter,1>),FDefaultDelegateUserPolicy>::ExecuteIfBound
          (TDelegate<void___cdecl(TSharedRef<FMessageFilter,1>),FDefaultDelegateUserPolicy> *this,
          TSharedRef<FMessageFilter,1> *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  undefined1 uVar3;
  FMessageFilter *local_38;
  TReferenceControllerBase<1> *local_30;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,&local_28);
  if ((*(int *)&this->field_0x10 != 0) &&
     (plVar1 = *(longlong **)&this->field_0x8, plVar1 != (longlong *)0x0)) {
    pcVar2 = *(code **)(*plVar1 + 0x68);
    local_38 = param_1->Object;
    local_30 = (param_1->SharedReferenceCount).ReferenceController;
    if (local_30 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_30->SharedReferenceCount = (atomic<int>)((int)local_30->SharedReferenceCount + 1);
      UNLOCK();
    }
    uVar3 = (*pcVar2)(plVar1,&local_38);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    return (bool)uVar3;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return false;
}

// ExecuteIfBound @ 142bf2250

bool __thiscall
TDelegate<void___cdecl(TSharedRef<FTokenizedMessage,1>),FDefaultDelegateUserPolicy>::ExecuteIfBound
          (TDelegate<void___cdecl(TSharedRef<FTokenizedMessage,1>),FDefaultDelegateUserPolicy> *this
          ,TSharedRef<FTokenizedMessage,1> *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  undefined1 uVar3;
  FTokenizedMessage *local_38;
  TReferenceControllerBase<1> *local_30;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,&local_28);
  if ((*(int *)&this->field_0x10 != 0) &&
     (plVar1 = *(longlong **)&this->field_0x8, plVar1 != (longlong *)0x0)) {
    pcVar2 = *(code **)(*plVar1 + 0x68);
    local_38 = param_1->Object;
    local_30 = (param_1->SharedReferenceCount).ReferenceController;
    if (local_30 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_30->SharedReferenceCount = (atomic<int>)((int)local_30->SharedReferenceCount + 1);
      UNLOCK();
    }
    uVar3 = (*pcVar2)(plVar1,&local_38);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    return (bool)uVar3;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return false;
}

