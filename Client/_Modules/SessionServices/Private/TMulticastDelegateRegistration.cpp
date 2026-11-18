// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SessionServices
// Functions: 2

// AddSP<FSessionInfo> @ 148ce9e40

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(TSharedRef<ISessionInstanceInfo,1>_const_&,TSharedRef<FSessionLogMessage,1>_const_&),FDefaultDelegateUserPolicy>
::AddSP<FSessionInfo>
          (TMulticastDelegateRegistration<void___cdecl(TSharedRef<ISessionInstanceInfo,1>_const_&,TSharedRef<FSessionLogMessage,1>_const_&),FDefaultDelegateUserPolicy>
           *this,FSessionInfo *param_1,pmf_c0779e31 *param_2)

{
  FSessionInfo *pFVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  TSharedRef<FSessionInfo,1> *pTVar5;
  ulong64 uVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ForElementType<TAlignedBytes<16,16>_> *pFVar10;
  TReferenceControllerBase<1> *pTVar11;
  undefined8 *in_R9;
  undefined4 local_res10;
  undefined4 uStackX_14;
  FDestructionSentinel local_98;
  FDestructionSentinel local_78;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_60;
  FDelegateAllocation local_58;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  
  uVar9 = 0;
  local_res10 = 0;
  local_98._0_8_ = *in_R9;
  local_98.Accessor = (FMRSWRecursiveAccessDetector *)in_R9[1];
  local_60.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_58.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_58.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_60,(FWriteAccessScope *)&local_48);
  local_30 = &local_58;
  puVar4 = UE::Core::Private::DelegateAllocate(0x38,&local_58);
  if (puVar4 == (undefined8 *)0x0) {
    pTVar11 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_14,local_res10);
    uVar8 = uVar9;
  }
  else {
    pTVar5 = TSharedFromThis<FSessionInfo,1>::AsShared
                       ((TSharedFromThis<FSessionInfo,1> *)&param_2->field_0x8,
                        (TSharedRef<FSessionInfo,1> *)&local_78);
    pTVar11 = (pTVar5->SharedReferenceCount).ReferenceController;
    pFVar1 = pTVar5->Object;
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TSharedRef_VISessionInstanceInfo___00__AEBV__TSharedRef_UFSessionLogMessage___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar6;
    *puVar4 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFSessionInfo___00__A6AXAEBV__TSharedRef_VISessionInstanceInfo___00__AEBV__TSharedRef_UFSessionLogMessage___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[3] = pFVar1;
    puVar4[4] = pTVar11;
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar11->WeakReferenceCount = (atomic<int>)((int)pTVar11->WeakReferenceCount + 1);
      UNLOCK();
    }
    puVar4[5] = local_98._0_8_;
    puVar4[6] = local_98.Accessor;
    uVar8 = 7;
  }
  if ((uVar8 & 4) != 0) {
    uVar8 = (ulonglong)((uint)uVar8 & 0xfffffffb);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  }
  if ((uVar8 & 2) != 0) {
    uVar8 = (ulonglong)((uint)uVar8 & 0xfffffffd);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  }
  if ((uVar8 & 1) != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_78.Accessor);
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_98);
  param_1->_padding_ = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&local_60,(FReadAccessScope *)&local_78);
  if (((local_58.DelegateSize == 0) ||
      (local_58.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
     (cVar2 = (**(code **)(*(longlong *)local_58.DelegateAllocator + 0x38))(), cVar2 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_78);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_78);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,true);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              (&local_60,(FReadAccessScope *)&local_78);
    if ((local_58.DelegateSize != 0) &&
       (local_58.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      puVar7 = (ulonglong *)
               (**(code **)(*(longlong *)local_58.DelegateAllocator + 0x40))
                         (local_58.DelegateAllocator,&local_res10);
      uVar9 = *puVar7;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_78);
    iVar3 = *(int *)&this->field_0x10;
    param_1->_padding_ = uVar9;
    if (iVar3 == *(int *)&this->field_0x14) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)&this->field_0x8,(int *)&this->field_0x14);
    }
    *(int *)&this->field_0x10 = iVar3 + 1;
    pFVar10 = (ForElementType<TAlignedBytes<16,16>_> *)
              (*(longlong *)&this->field_0x8 + (longlong)iVar3 * 0x10);
    *pFVar10 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(undefined4 *)(pFVar10 + 1) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_60,(FWriteAccessScope *)&local_78);
    if (*pFVar10 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)*pFVar10);
    }
    *pFVar10 = local_58.DelegateAllocator;
    local_58.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar10 + 1) = local_58.DelegateSize;
    local_58.DelegateSize = 0;
    if (local_78.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
    }
  }
  if (local_98.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_60,(FWriteAccessScope *)&local_78);
  if ((local_58.DelegateSize != 0) &&
     (local_58.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_58.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_58,0,0,0x10);
    local_58.DelegateSize = 0;
  }
  if (local_78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
  }
  if (local_58.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_58.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_60.AccessDetector);
  return (FDelegateHandle)(ulong64)param_1;
}

// AddSP<FSessionManager> @ 148cea140

/* WARNING: Enum "Type": Some values do not have unique names */

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(TSharedRef<ISessionInfo,1>_const_&,TSharedRef<ISessionInstanceInfo,1>_const_&,TSharedRef<FSessionLogMessage,1>_const_&),FDefaultDelegateUserPolicy>
::AddSP<FSessionManager>
          (TMulticastDelegateRegistration<void___cdecl(TSharedRef<ISessionInfo,1>_const_&,TSharedRef<ISessionInstanceInfo,1>_const_&,TSharedRef<FSessionLogMessage,1>_const_&),FDefaultDelegateUserPolicy>
           *this,FSessionManager *param_1,pmf_f08df4f3 *param_2)

{
  char cVar1;
  int iVar2;
  TDelegate<void___cdecl(TSharedRef<ISessionInfo,1>_const_&,TSharedRef<ISessionInstanceInfo,1>_const_&,TSharedRef<FSessionLogMessage,1>_const_&),FDefaultDelegateUserPolicy>
  *this_00;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *in_R9;
  undefined1 local_res10 [8];
  FDestructionSentinel local_68;
  undefined1 local_48 [8];
  ForAnyElementType local_40;
  int local_38;
  FReadAccessScope local_30;
  
  local_68._0_8_ = *in_R9;
  local_68.Accessor = (FMRSWRecursiveAccessDetector *)in_R9[1];
  this_00 = TDelegate<void___cdecl(TSharedRef<ISessionInfo,1>_const_&,TSharedRef<ISessionInstanceInfo,1>_const_&,TSharedRef<FSessionLogMessage,1>_const_&),FDefaultDelegateUserPolicy>
            ::CreateSP<FSessionManager>
                      ((TDelegate<void___cdecl(TSharedRef<ISessionInfo,1>_const_&,TSharedRef<ISessionInstanceInfo,1>_const_&,TSharedRef<FSessionLogMessage,1>_const_&),FDefaultDelegateUserPolicy>
                        *)local_48,(FSessionManager *)param_2,(pmf_f08df4f3 *)&local_68);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_68);
  param_1->_padding_ = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_30);
  if ((*(int *)&this_00->field_0x10 != 0) && (*(longlong **)&this_00->field_0x8 != (longlong *)0x0))
  {
    cVar1 = (**(code **)(**(longlong **)&this_00->field_0x8 + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_30);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,true);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_30);
      if ((*(int *)&this_00->field_0x10 == 0) ||
         (plVar3 = *(longlong **)&this_00->field_0x8, plVar3 == (longlong *)0x0)) {
        lVar4 = 0;
      }
      else {
        plVar3 = (longlong *)(**(code **)(*plVar3 + 0x40))(plVar3,local_res10);
        lVar4 = *plVar3;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_30);
      iVar2 = *(int *)&this->field_0x10;
      param_1->_padding_ = lVar4;
      if (iVar2 == *(int *)&this->field_0x14) {
        iVar2 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,(ForAnyElementType *)&this->field_0x8,(int *)&this->field_0x14);
      }
      *(int *)&this->field_0x10 = iVar2 + 1;
      TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>::
      TDelegateBase<FNotThreadSafeNotCheckedDelegateMode><FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
                 ((longlong)iVar2 * 0x10 + *(longlong *)&this->field_0x8),
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
      goto LAB_148cea25a;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_30);
LAB_148cea25a:
  if (local_68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_68);
  if ((local_38 != 0) && (local_40.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_40.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_40,0,0,0x10);
    local_38 = 0;
  }
  if (local_68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
  }
  if (local_40.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  return (FDelegateHandle)(ulong64)param_1;
}

