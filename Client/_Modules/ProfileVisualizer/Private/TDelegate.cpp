// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProfileVisualizer
// Functions: 37

// CopyFrom<FDefaultDelegateUserPolicy> @ 148d4ce70

void __thiscall
TDelegate<FString___cdecl(TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>::
CopyFrom<FDefaultDelegateUserPolicy>
          (TDelegate<FString___cdecl(TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>
           *this,TDelegate<FString___cdecl(TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>
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
    ~TDelegate<FString___cdecl(TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>
              ((TDelegate<FString___cdecl(TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>
                *)&local_38);
  }
  return;
}

// CreateSP<SBarVisualizer,unsigned_char_const_&> @ 148d4cef0

TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> * __cdecl
TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
CreateSP<SBarVisualizer,unsigned_char_const_&>
          (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *__return_storage_ptr__,
          SBarVisualizer *param_1,pmf_7905862e *param_2,uchar *param_3)

{
  undefined1 *puVar1;
  SWidget *pSVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined8 *puVar8;
  TSharedRef<SWidget,1> *pTVar9;
  ulong64 uVar10;
  TReferenceControllerBase<1> *pTVar11;
  uint uStackX_c;
  TSharedRef<SWidget,1> local_58;
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
    pTVar9 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_58);
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
    *puVar8 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__E__6B_;
    *(uchar *)(puVar8 + 1) = *param_3;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar8[2] = uVar10;
    *puVar8 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSBarVisualizer___00__A6AXXZUFDefaultDelegateUserPolicy__E__6B_
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
              (local_58.SharedReferenceCount.ReferenceController);
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  return __return_storage_ptr__;
}

// CreateSP<SBarVisualizer,unsigned_char_const_&> @ 148d4d040

TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> * __cdecl
TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::
CreateSP<SBarVisualizer,unsigned_char_const_&>
          (TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *__return_storage_ptr__,
          SBarVisualizer *param_1,pmf_0ca026aa *param_2,uchar *param_3)

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
  TSharedRef<SWidget_const_,1> local_58;
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
    pTVar9 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_58);
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
    *puVar8 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy__E__6B_;
    *(uchar *)(puVar8 + 1) = *param_3;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar8[2] = uVar10;
    *puVar8 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSBarVisualizer___00__A6A_NXZUFDefaultDelegateUserPolicy__E__6B_
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
              (local_58.SharedReferenceCount.ReferenceController);
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  return __return_storage_ptr__;
}

// CreateSP<SEventsTree> @ 148d4d190

TDelegate<void___cdecl(EColumnSortPriority::Type,FName_const_&,EColumnSortMode::Type),FDefaultDelegateUserPolicy>
* __cdecl TDelegate<void___cdecl(enum_EColumnSortPriority::Type,FName_const_&,enum_EColumnSortMode::Type),FDefaultDelegateUserPolicy>
          ::CreateSP<SEventsTree>
                    (TDelegate<void___cdecl(EColumnSortPriority::Type,FName_const_&,EColumnSortMode::Type),FDefaultDelegateUserPolicy>
                     *__return_storage_ptr__,SEventsTree *param_1,pmf_f90f6e6c *param_2)

{
  undefined1 *puVar1;
  SWidget *pSVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined8 *puVar8;
  TSharedRef<SWidget,1> *pTVar9;
  ulong64 uVar10;
  TReferenceControllerBase<1> *pTVar11;
  uint uStackX_c;
  TSharedRef<SWidget,1> local_48;
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
    *puVar8 = &
              ___7__TCommonDelegateInstanceState___A6AXW4Type_EColumnSortPriority__AEBVFName__W41EColumnSortMode___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar8[2] = uVar10;
    *puVar8 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSEventsTree___00__A6AXW4Type_EColumnSortPriority__AEBVFName__W42EColumnSortMode___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateSP<SEventsTree,FName_&> @ 148d4d2d0

TDelegate<EColumnSortMode::Type___cdecl(void),FDefaultDelegateUserPolicy> * __cdecl
TDelegate<enum_EColumnSortMode::Type___cdecl(void),FDefaultDelegateUserPolicy>::
CreateSP<SEventsTree,FName_&>
          (TDelegate<EColumnSortMode::Type___cdecl(void),FDefaultDelegateUserPolicy>
           *__return_storage_ptr__,SEventsTree *param_1,pmf_21ae81a6 *param_2,FName *param_3)

{
  undefined1 *puVar1;
  SWidget *pSVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined8 *puVar8;
  TSharedRef<SWidget,1> *pTVar9;
  ulong64 uVar10;
  TReferenceControllerBase<1> *pTVar11;
  uint uStackX_c;
  TSharedRef<SWidget,1> local_58;
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
    pTVar9 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_58);
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
    *puVar8 = &
              ___7__TCommonDelegateInstanceState___A6A_AW4Type_EColumnSortMode__XZUFDefaultDelegateUserPolicy__VFName____6B_
    ;
    *(FName *)(puVar8 + 1) = *param_3;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar8[2] = uVar10;
    *puVar8 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSEventsTree___00__A6A_AW4Type_EColumnSortMode__XZUFDefaultDelegateUserPolicy__VFName____6B_
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
              (local_58.SharedReferenceCount.ReferenceController);
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  return __return_storage_ptr__;
}

// CreateSP<SEventsTree,unsigned_char_const_&> @ 148d4d420

TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> * __cdecl
TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
CreateSP<SEventsTree,unsigned_char_const_&>
          (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *__return_storage_ptr__,
          SEventsTree *param_1,pmf_eaa9086c *param_2,uchar *param_3)

{
  undefined1 *puVar1;
  SWidget *pSVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined8 *puVar8;
  TSharedRef<SWidget,1> *pTVar9;
  ulong64 uVar10;
  TReferenceControllerBase<1> *pTVar11;
  uint uStackX_c;
  TSharedRef<SWidget,1> local_58;
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
    pTVar9 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_58);
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
    *puVar8 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__E__6B_;
    *(uchar *)(puVar8 + 1) = *param_3;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar8[2] = uVar10;
    *puVar8 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSEventsTree___00__A6AXXZUFDefaultDelegateUserPolicy__E__6B_
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
              (local_58.SharedReferenceCount.ReferenceController);
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  return __return_storage_ptr__;
}

// CreateSP<SEventsTree,unsigned_char_const_&> @ 148d4d570

TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> * __cdecl
TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::
CreateSP<SEventsTree,unsigned_char_const_&>
          (TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *__return_storage_ptr__,
          SEventsTree *param_1,pmf_7422e744 *param_2,uchar *param_3)

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
  TSharedRef<SWidget_const_,1> local_58;
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
    pTVar9 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_58);
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
    *puVar8 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy__E__6B_;
    *(uchar *)(puVar8 + 1) = *param_3;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar8[2] = uVar10;
    *puVar8 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSEventsTree___00__A6A_NXZUFDefaultDelegateUserPolicy__E__6B_
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
              (local_58.SharedReferenceCount.ReferenceController);
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  return __return_storage_ptr__;
}

// CreateSP<SListView<TSharedPtr<FVisualizerEvent,1>_>::SListViewPinnedRowWidget,int,int> @ 148d4d6c0

TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> * __cdecl
TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
CreateSP<SListView<TSharedPtr<FVisualizerEvent,1>_>::SListViewPinnedRowWidget,int,int>
          (TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *__return_storage_ptr__,
          SListViewPinnedRowWidget *param_1,pmf_6bb36b72 *param_2,int *param_3,int *param_4)

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
  TSharedRef<SWidget_const_,1> local_58;
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
    pTVar9 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_58);
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
    *puVar8 = &
              ___7__TCommonDelegateInstanceState___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy__HH__6B_
    ;
    *(int *)(puVar8 + 1) = *param_3;
    *(int *)((longlong)puVar8 + 0xc) = *param_4;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar8[2] = uVar10;
    *puVar8 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSListViewPinnedRowWidget___SListView_V__TSharedPtr_UFVisualizerEvent___00_____00__A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy__HH__6B_
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
              (local_58.SharedReferenceCount.ReferenceController);
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  return __return_storage_ptr__;
}

// CreateSP<SProfileVisualizer> @ 148d4d820

TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy> * __cdecl
TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>::CreateSP<SProfileVisualizer>
          (TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>
           *__return_storage_ptr__,SProfileVisualizer *param_1,pmf_42987ab8 *param_2)

{
  undefined1 *puVar1;
  SWidget *pSVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined8 *puVar8;
  TSharedRef<SWidget,1> *pTVar9;
  ulong64 uVar10;
  TReferenceControllerBase<1> *pTVar11;
  uint uStackX_c;
  TSharedRef<SWidget,1> local_48;
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
    *puVar8 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFMenuBuilder___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar8[2] = uVar10;
    *puVar8 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSProfileVisualizer___00__A6AXAEAVFMenuBuilder___ZUFDefaultDelegateUserPolicy____V__6B_
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

// ~TDelegate<TOptional<enum_EItemDropZone>___cdecl(FDragDropEvent_const_&,enum_EItemDropZone,TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy> @ 148d576c0

void __thiscall
TDelegate<TOptional<enum_EItemDropZone>___cdecl(FDragDropEvent_const_&,enum_EItemDropZone,TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>
::
~TDelegate<TOptional<enum_EItemDropZone>___cdecl(FDragDropEvent_const_&,enum_EItemDropZone,TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>
          (void *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(this);
  return;
}

// ~TDelegate<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FVisualizerEvent,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy> @ 148d576e0

void __thiscall
TDelegate<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FVisualizerEvent,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::
~TDelegate<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FVisualizerEvent,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
          (TDelegate<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FVisualizerEvent,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this);
  return;
}

// ~TDelegate<FReply___cdecl(FDragDropEvent_const_&,enum_EItemDropZone,TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy> @ 148d57700

void __thiscall
TDelegate<FReply___cdecl(FDragDropEvent_const_&,enum_EItemDropZone,TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>
::
~TDelegate<FReply___cdecl(FDragDropEvent_const_&,enum_EItemDropZone,TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>
          (void *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(this);
  return;
}

// ~TDelegate<FString___cdecl(TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy> @ 148d57720

void __thiscall
TDelegate<FString___cdecl(TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>::
~TDelegate<FString___cdecl(TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>
          (TDelegate<FString___cdecl(TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>
           *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this);
  return;
}

// ~TDelegate<enum_EColumnSortMode::Type___cdecl(void),FDefaultDelegateUserPolicy> @ 148d57740

void __thiscall
TDelegate<enum_EColumnSortMode::Type___cdecl(void),FDefaultDelegateUserPolicy>::
~TDelegate<enum_EColumnSortMode::Type___cdecl(void),FDefaultDelegateUserPolicy>(void *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind(this);
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this);
  return;
}

// ~TDelegate<void___cdecl(FGeometry),FDefaultDelegateUserPolicy> @ 148d57770

void __thiscall
TDelegate<void___cdecl(FGeometry),FDefaultDelegateUserPolicy>::
~TDelegate<void___cdecl(FGeometry),FDefaultDelegateUserPolicy>
          (TDelegate<void___cdecl(FGeometry),FDefaultDelegateUserPolicy> *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this);
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector((FMRSWRecursiveAccessDetector *)this);
  return;
}

// ~TDelegate<void___cdecl(TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy> @ 148d577a0

void __thiscall
TDelegate<void___cdecl(TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>::
~TDelegate<void___cdecl(TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>
          (TDelegate<void___cdecl(TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy> *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this);
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector((FMRSWRecursiveAccessDetector *)this);
  return;
}

// ~TDelegate<void___cdecl(TSharedPtr<FVisualizerEvent,1>,TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy> @ 148d577d0

void __thiscall
TDelegate<void___cdecl(TSharedPtr<FVisualizerEvent,1>,TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::
~TDelegate<void___cdecl(TSharedPtr<FVisualizerEvent,1>,TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
          (TDelegate<void___cdecl(TSharedPtr<FVisualizerEvent,1>,TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
           *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this);
  return;
}

// ~TDelegate<void___cdecl(TSharedPtr<FVisualizerEvent,1>,TSharedPtr<ITableRow,1>_const_&),FDefaultDelegateUserPolicy> @ 148d577f0

void __thiscall
TDelegate<void___cdecl(TSharedPtr<FVisualizerEvent,1>,TSharedPtr<ITableRow,1>_const_&),FDefaultDelegateUserPolicy>
::
~TDelegate<void___cdecl(TSharedPtr<FVisualizerEvent,1>,TSharedPtr<ITableRow,1>_const_&),FDefaultDelegateUserPolicy>
          (TDelegate<void___cdecl(TSharedPtr<FVisualizerEvent,1>,TSharedPtr<ITableRow,1>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this);
  return;
}

// ~TDelegate<void___cdecl(TSharedPtr<FVisualizerEvent,1>,TSharedRef<ITableRow,1>_const_&),FDefaultDelegateUserPolicy> @ 148d57810

void __thiscall
TDelegate<void___cdecl(TSharedPtr<FVisualizerEvent,1>,TSharedRef<ITableRow,1>_const_&),FDefaultDelegateUserPolicy>
::
~TDelegate<void___cdecl(TSharedPtr<FVisualizerEvent,1>,TSharedRef<ITableRow,1>_const_&),FDefaultDelegateUserPolicy>
          (TDelegate<void___cdecl(TSharedPtr<FVisualizerEvent,1>,TSharedRef<ITableRow,1>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this);
  return;
}

// ~TDelegate<void___cdecl(TSharedPtr<FVisualizerEvent,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy> @ 148d57830

void __thiscall
TDelegate<void___cdecl(TSharedPtr<FVisualizerEvent,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::
~TDelegate<void___cdecl(TSharedPtr<FVisualizerEvent,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
          (void *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind(this);
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this);
  return;
}

// ~TDelegate<void___cdecl(TSharedPtr<FVisualizerEvent,1>,bool),FDefaultDelegateUserPolicy> @ 148d57860

void __thiscall
TDelegate<void___cdecl(TSharedPtr<FVisualizerEvent,1>,bool),FDefaultDelegateUserPolicy>::
~TDelegate<void___cdecl(TSharedPtr<FVisualizerEvent,1>,bool),FDefaultDelegateUserPolicy>
          (TDelegate<void___cdecl(TSharedPtr<FVisualizerEvent,1>,bool),FDefaultDelegateUserPolicy>
           *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this);
  return;
}

// ~TDelegate<void___cdecl(enum_EColumnSortPriority::Type,FName_const_&,enum_EColumnSortMode::Type),FDefaultDelegateUserPolicy> @ 148d57880

void __thiscall
TDelegate<void___cdecl(enum_EColumnSortPriority::Type,FName_const_&,enum_EColumnSortMode::Type),FDefaultDelegateUserPolicy>
::
~TDelegate<void___cdecl(enum_EColumnSortPriority::Type,FName_const_&,enum_EColumnSortMode::Type),FDefaultDelegateUserPolicy>
          (void *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind(this);
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this);
  return;
}

// ~TDelegate<bool___cdecl(TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy> @ 148d578b0

void __thiscall
TDelegate<bool___cdecl(TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>::
~TDelegate<bool___cdecl(TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>
          (TDelegate<bool___cdecl(TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy> *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this);
  return;
}

// operator= @ 148d58c40

TDelegate<TOptional<EItemDropZone>___cdecl(FDragDropEvent_const_&,EItemDropZone,TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>
* __thiscall
TDelegate<TOptional<enum_EItemDropZone>___cdecl(FDragDropEvent_const_&,enum_EItemDropZone,TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>
::operator=(void *this,
           TDelegate<TOptional<EItemDropZone>___cdecl(FDragDropEvent_const_&,EItemDropZone,TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>
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
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=(this,&local_38);
    ~TDelegate<TOptional<enum_EItemDropZone>___cdecl(FDragDropEvent_const_&,enum_EItemDropZone,TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>
              (&local_38);
  }
  return this;
}

// operator= @ 148d58cd0

TDelegate<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FVisualizerEvent,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
* __thiscall
TDelegate<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FVisualizerEvent,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::operator=(TDelegate<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FVisualizerEvent,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
            *this,TDelegate<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FVisualizerEvent,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
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
    ~TDelegate<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FVisualizerEvent,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
              ((TDelegate<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FVisualizerEvent,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
                *)&local_38);
  }
  return this;
}

// operator= @ 148d58d60

TDelegate<FReply___cdecl(FDragDropEvent_const_&,EItemDropZone,TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>
* __thiscall
TDelegate<FReply___cdecl(FDragDropEvent_const_&,enum_EItemDropZone,TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>
::operator=(void *this,
           TDelegate<FReply___cdecl(FDragDropEvent_const_&,EItemDropZone,TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>
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
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=(this,&local_38);
    ~TDelegate<FReply___cdecl(FDragDropEvent_const_&,enum_EItemDropZone,TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>
              (&local_38);
  }
  return this;
}

// operator= @ 148d58df0

TDelegate<void___cdecl(int,TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy> * __thiscall
TDelegate<void___cdecl(int,TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>::operator=
          (TDelegate<void___cdecl(int,TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>
           *this,TDelegate<void___cdecl(int,TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>
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

// operator= @ 148d58ef0

TDelegate<void___cdecl(TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy> * __thiscall
TDelegate<void___cdecl(TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>::operator=
          (TDelegate<void___cdecl(TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy> *this,
          TDelegate<void___cdecl(TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>
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

// operator= @ 148d58ff0

TDelegate<void___cdecl(TSharedPtr<FVisualizerEvent,1>,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
* __thiscall
TDelegate<void___cdecl(TSharedPtr<FVisualizerEvent,1>,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
::operator=(TDelegate<void___cdecl(TSharedPtr<FVisualizerEvent,1>,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
            *this,TDelegate<void___cdecl(TSharedPtr<FVisualizerEvent,1>,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
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

// operator= @ 148d590f0

TDelegate<void___cdecl(TSharedPtr<FVisualizerEvent,1>,TSharedPtr<ITableRow,1>_const_&),FDefaultDelegateUserPolicy>
* __thiscall
TDelegate<void___cdecl(TSharedPtr<FVisualizerEvent,1>,TSharedPtr<ITableRow,1>_const_&),FDefaultDelegateUserPolicy>
::operator=(TDelegate<void___cdecl(TSharedPtr<FVisualizerEvent,1>,TSharedPtr<ITableRow,1>_const_&),FDefaultDelegateUserPolicy>
            *this,TDelegate<void___cdecl(TSharedPtr<FVisualizerEvent,1>,TSharedPtr<ITableRow,1>_const_&),FDefaultDelegateUserPolicy>
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
    ~TDelegate<void___cdecl(TSharedPtr<FVisualizerEvent,1>,TSharedPtr<ITableRow,1>_const_&),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(TSharedPtr<FVisualizerEvent,1>,TSharedPtr<ITableRow,1>_const_&),FDefaultDelegateUserPolicy>
                *)&local_38);
  }
  return this;
}

// operator= @ 148d59180

TDelegate<void___cdecl(TSharedPtr<FVisualizerEvent,1>,ESelectInfo::Type),FDefaultDelegateUserPolicy>
* __thiscall
TDelegate<void___cdecl(TSharedPtr<FVisualizerEvent,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::operator=(void *this,
           TDelegate<void___cdecl(TSharedPtr<FVisualizerEvent,1>,ESelectInfo::Type),FDefaultDelegateUserPolicy>
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

// operator= @ 148d59280

TDelegate<void___cdecl(TSharedPtr<FVisualizerEvent,1>,bool),FDefaultDelegateUserPolicy> * __thiscall
TDelegate<void___cdecl(TSharedPtr<FVisualizerEvent,1>,bool),FDefaultDelegateUserPolicy>::operator=
          (TDelegate<void___cdecl(TSharedPtr<FVisualizerEvent,1>,bool),FDefaultDelegateUserPolicy>
           *this,TDelegate<void___cdecl(TSharedPtr<FVisualizerEvent,1>,bool),FDefaultDelegateUserPolicy>
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
    ~TDelegate<void___cdecl(TSharedPtr<FVisualizerEvent,1>,bool),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(TSharedPtr<FVisualizerEvent,1>,bool),FDefaultDelegateUserPolicy>
                *)&local_38);
  }
  return this;
}

// operator= @ 148d59310

TDelegate<bool___cdecl(TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy> * __thiscall
TDelegate<bool___cdecl(TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>::operator=
          (TDelegate<bool___cdecl(TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy> *this,
          TDelegate<bool___cdecl(TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>
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
    ~TDelegate<bool___cdecl(TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>
              ((TDelegate<bool___cdecl(TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy> *
               )&local_38);
  }
  return this;
}

// Execute @ 148d75070

/* WARNING: Enum "Type": Some values do not have unique names */

TOptional<EItemDropZone> __thiscall
TDelegate<TOptional<enum_EItemDropZone>___cdecl(FDragDropEvent_const_&,enum_EItemDropZone,TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>
::Execute(void *this,FDragDropEvent *param_1,EItemDropZone param_2,
         TSharedPtr<FVisualizerEvent,1> *param_3)

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

// Execute @ 148d75120

bool __thiscall
TDelegate<bool___cdecl(TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>::Execute
          (TDelegate<bool___cdecl(TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy> *this,
          TSharedPtr<FVisualizerEvent,1> *param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  longlong *plVar3;
  FVisualizerEvent *local_38;
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
  param_1->Object = (FVisualizerEvent *)0x0;
  uVar2 = (*pcVar1)(plVar3,&local_38);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return (bool)uVar2;
}

// ExecuteIfBound @ 148d751a0

bool __thiscall
TDelegate<void___cdecl(TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>::ExecuteIfBound
          (TDelegate<void___cdecl(TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy> *this,
          TSharedPtr<FVisualizerEvent,1> *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  undefined1 uVar3;
  FVisualizerEvent *local_38;
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
    param_1->Object = (FVisualizerEvent *)0x0;
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

// ExecuteIfBound @ 148d75240

bool __thiscall
TDelegate<void___cdecl(TSharedPtr<FVisualizerEvent,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::ExecuteIfBound(void *this,TSharedPtr<FVisualizerEvent,1> *param_1,Type param_2)

{
  longlong *plVar1;
  code *pcVar2;
  undefined1 uVar3;
  FVisualizerEvent *local_38;
  TReferenceControllerBase<1> *local_30;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(this,&local_28);
  if ((*(int *)((longlong)this + 0x10) != 0) &&
     (plVar1 = *(longlong **)((longlong)this + 8), plVar1 != (longlong *)0x0)) {
    pcVar2 = *(code **)(*plVar1 + 0x68);
    local_38 = param_1->Object;
    local_30 = (param_1->SharedReferenceCount).ReferenceController;
    (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    param_1->Object = (FVisualizerEvent *)0x0;
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

