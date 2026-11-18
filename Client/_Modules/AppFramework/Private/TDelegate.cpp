// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 168

// CopyFrom<FDefaultDelegateUserPolicy> @ 142f1e040

void __thiscall
TDelegate<TOptional<double>___cdecl(void),FDefaultDelegateUserPolicy>::
CopyFrom<FDefaultDelegateUserPolicy>
          (TDelegate<TOptional<double>___cdecl(void),FDefaultDelegateUserPolicy> *this,
          TDelegate<TOptional<double>___cdecl(void),FDefaultDelegateUserPolicy> *param_1)

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

// CopyFrom<FDefaultDelegateUserPolicy> @ 142f1e140

void __thiscall
TDelegate<FString___cdecl(TSharedPtr<FTestData,1>),FDefaultDelegateUserPolicy>::
CopyFrom<FDefaultDelegateUserPolicy>
          (TDelegate<FString___cdecl(TSharedPtr<FTestData,1>),FDefaultDelegateUserPolicy> *this,
          TDelegate<FString___cdecl(TSharedPtr<FTestData,1>),FDefaultDelegateUserPolicy> *param_1)

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

// CopyFrom<FDefaultDelegateUserPolicy> @ 142f1e240

void __thiscall
TDelegate<FString___cdecl(TSharedPtr<enum_ESelectionMode::Type,1>),FDefaultDelegateUserPolicy>::
CopyFrom<FDefaultDelegateUserPolicy>
          (void *this,
          TDelegate<FString___cdecl(TSharedPtr<ESelectionMode::Type,1>),FDefaultDelegateUserPolicy>
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
  return;
}

// CreateRaw<SStarshipGallery> @ 142f1e8e0

TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy> * __cdecl
TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>::CreateRaw<SStarshipGallery>
          (TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>
           *__return_storage_ptr__,SStarshipGallery *param_1,pmf_ca8eb57b *param_2)

{
  undefined1 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy> *pTVar8;
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
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFMenuBuilder___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VSStarshipGallery____A6AXAEAVFMenuBuilder___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[3] = param_1;
    puVar6[4] = uVar3;
    puVar6[5] = uVar4;
    if ((param_1 == (SStarshipGallery *)0x0) || (puVar6[4] == 0)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && MethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                         ,0x1d8,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy> *)(*pcVar2)();
        return pTVar8;
      }
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return __return_storage_ptr__;
}

// CreateSP<SColorPicker,enum_EColorPickerHexMode> @ 142f1e9d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> * __cdecl
TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
CreateSP<SColorPicker,enum_EColorPickerHexMode>
          (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *__return_storage_ptr__,
          SColorPicker *param_1,pmf_1bcd3787 *param_2,EColorPickerHexMode *param_3)

{
  undefined1 *puVar1;
  SColorPicker *pSVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined8 *puVar6;
  TSharedRef<SWidget,1> *pTVar7;
  ulong64 uVar8;
  TReferenceControllerBase<1> *pTVar9;
  uint uStackX_c;
  TSharedRef<SColorPicker,1> local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  TSharedRef<SWidget,1> local_58;
  FDestructionSentinel local_48;
  undefined1 *local_30;
  
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
             (FWriteAccessScope *)&local_48);
  local_30 = puVar1;
  puVar6 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)puVar1);
  if (puVar6 == (undefined8 *)0x0) {
    pTVar9 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    local_68 = *(undefined8 *)param_2;
    uStack_60 = *(undefined8 *)&param_2->field_0x8;
    pTVar7 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_58);
    pSVar2 = (SColorPicker *)pTVar7->Object;
    pTVar9 = (pTVar7->SharedReferenceCount).ReferenceController;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
      if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
        UNLOCK();
      }
    }
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__W4EColorPickerHexMode____6B_
    ;
    *(EColorPickerHexMode *)(puVar6 + 1) = *param_3;
    local_78.Object = pSVar2;
    local_78.SharedReferenceCount.ReferenceController = pTVar9;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar8;
    *puVar6 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSColorPicker___00__A6AXXZUFDefaultDelegateUserPolicy__W4EColorPickerHexMode____6B_
    ;
    puVar6[3] = pSVar2;
    puVar6[4] = pTVar9;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->WeakReferenceCount = (atomic<int>)((int)pTVar9->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar5 = true;
    bVar4 = true;
    bVar3 = true;
    puVar6[5] = local_68;
    puVar6[6] = uStack_60;
  }
  if (bVar3) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  }
  if (bVar4) {
    TSharedRef<SColorPicker,1>::~TSharedRef<SColorPicker,1>(&local_78);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  return __return_storage_ptr__;
}

// CreateSP<SListView<TSharedPtr<int,1>_>::SListViewPinnedRowWidget,int,int> @ 142f1eb30

TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> * __cdecl
TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
CreateSP<SListView<TSharedPtr<int,1>_>::SListViewPinnedRowWidget,int,int>
          (TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *__return_storage_ptr__,
          SListViewPinnedRowWidget *param_1,pmf_fdf5e901 *param_2,int *param_3,int *param_4)

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
              ___7__TBaseSPMethodDelegateInstance__00__CBVSListViewPinnedRowWidget___SListView_V__TSharedPtr_H_00_____00__A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy__HH__6B_
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

// CreateSP<SListView<TSharedPtr<FTestData,1>_>::SListViewPinnedRowWidget,int,int> @ 142f1ec90

TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> * __cdecl
TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
CreateSP<SListView<TSharedPtr<FTestData,1>_>::SListViewPinnedRowWidget,int,int>
          (TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *__return_storage_ptr__,
          SListViewPinnedRowWidget *param_1,pmf_203cd0f4 *param_2,int *param_3,int *param_4)

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
              ___7__TBaseSPMethodDelegateInstance__00__CBVSListViewPinnedRowWidget___SListView_V__TSharedPtr_VFTestData___00_____00__A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy__HH__6B_
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

// CreateSP<SWidgetGallery> @ 142f1edf0

TDelegate<void___cdecl(TSharedPtr<SDockTab,1>,TSharedPtr<SDockTab,1>),FDefaultDelegateUserPolicy> *
__cdecl TDelegate<void___cdecl(TSharedPtr<SDockTab,1>,TSharedPtr<SDockTab,1>),FDefaultDelegateUserPolicy>
        ::CreateSP<SWidgetGallery>
                  (TDelegate<void___cdecl(TSharedPtr<SDockTab,1>,TSharedPtr<SDockTab,1>),FDefaultDelegateUserPolicy>
                   *__return_storage_ptr__,SWidgetGallery *param_1,pmf_4ad77d97 *param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 *puVar7;
  TSharedRef<SWidget,1> *pTVar8;
  ulong64 uVar9;
  TSharedRef<SWidgetGallery,1> local_78;
  TSharedPtr<SWidgetGallery,1> local_68;
  TSharedRef<SWidget,1> local_58;
  FDestructionSentinel local_48;
  undefined1 *local_30;
  
  puVar1 = &__return_storage_ptr__->field_0x8;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
             (FWriteAccessScope *)&local_48);
  local_30 = puVar1;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)puVar1);
  if (puVar7 != (undefined8 *)0x0) {
    uVar2 = *(undefined8 *)param_2;
    uVar3 = *(undefined8 *)&param_2->field_0x8;
    pTVar8 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_58);
    local_78.Object = (SWidgetGallery *)pTVar8->Object;
    local_78.SharedReferenceCount.ReferenceController =
         (pTVar8->SharedReferenceCount).ReferenceController;
    if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VSDockTab___00__0_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    local_68.Object = local_78.Object;
    local_68.SharedReferenceCount.ReferenceController =
         local_78.SharedReferenceCount.ReferenceController;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSWidgetGallery___00__A6AXV__TSharedPtr_VSDockTab___00__0_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = local_68.Object;
    puVar7[4] = local_68.SharedReferenceCount.ReferenceController;
    if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_68.SharedReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_68.SharedReferenceCount.ReferenceController)->WeakReferenceCount + 1);
      UNLOCK();
    }
    puVar7[5] = uVar2;
    puVar7[6] = uVar3;
    bVar6 = true;
    bVar5 = true;
    bVar4 = true;
  }
  if (bVar4) {
    TSharedPtr<SWidgetGallery,1>::~TSharedPtr<SWidgetGallery,1>(&local_68);
  }
  if (bVar5) {
    TSharedRef<SWidgetGallery,1>::~TSharedRef<SWidgetGallery,1>(&local_78);
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  return __return_storage_ptr__;
}

// TDelegate<FSlateFontInfo___cdecl(void),FDefaultDelegateUserPolicy> @ 142f2bd40

TDelegate<FSlateFontInfo___cdecl(void),FDefaultDelegateUserPolicy> * __thiscall
TDelegate<FSlateFontInfo___cdecl(void),FDefaultDelegateUserPolicy>::
TDelegate<FSlateFontInfo___cdecl(void),FDefaultDelegateUserPolicy>
          (TDelegate<FSlateFontInfo___cdecl(void),FDefaultDelegateUserPolicy> *this,
          TDelegate<FSlateFontInfo___cdecl(void),FDefaultDelegateUserPolicy> *param_1)

{
  longlong *plVar1;
  ForAnyElementType FVar2;
  int iVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_48;
  ForAnyElementType local_40;
  int local_38;
  FDestructionSentinel local_30;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined4 *)&this->field_0x10 = 0;
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
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
               (FWriteAccessScope *)&local_30);
    if ((*(int *)&this->field_0x10 != 0) && (*(undefined8 **)&this->field_0x8 != (undefined8 *)0x0))
    {
      (**(code **)**(undefined8 **)&this->field_0x8)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&this->field_0x8,0,0,0x10);
      *(undefined4 *)&this->field_0x10 = 0;
    }
    if (*(void **)&this->field_0x8 != (void *)0x0) {
      FMemory::Free(*(void **)&this->field_0x8);
    }
    *(FScriptContainerElement **)&this->field_0x8 = FVar2.Data;
    *(int *)&this->field_0x10 = iVar3;
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

// TDelegate<TArray<int,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy> @ 142f2bee0

TDelegate<TArray<int,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy> *
__thiscall
TDelegate<TArray<int,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy>::
TDelegate<TArray<int,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy>
          (TDelegate<TArray<int,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy>
           *this,TDelegate<TArray<int,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy>
                 *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  TDelegate<TArray<int,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy>
  local_38;
  FDestructionSentinel local_20;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined4 *)&this->field_0x10 = 0;
  if (param_1 != this) {
    local_38._0_8_ = 0;
    local_38._8_8_ = 0;
    local_38._16_4_ = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
               (FReadAccessScope *)&local_20);
    if ((*(int *)&param_1->field_0x10 != 0) &&
       (plVar1 = *(longlong **)&param_1->field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x50))(plVar1,&local_38);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_20);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&local_38,
               (FWriteAccessScope *)&local_20);
    uVar3 = local_38._16_4_;
    uVar2 = local_38._8_8_;
    local_38._8_8_ = 0;
    local_38._16_4_ = 0;
    if (local_20.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_20.Accessor,&local_20);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
               (FWriteAccessScope *)&local_20);
    if ((*(int *)&this->field_0x10 != 0) && (*(undefined8 **)&this->field_0x8 != (undefined8 *)0x0))
    {
      (**(code **)**(undefined8 **)&this->field_0x8)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&this->field_0x8,0,0,0x10);
      *(undefined4 *)&this->field_0x10 = 0;
    }
    if (*(void **)&this->field_0x8 != (void *)0x0) {
      FMemory::Free(*(void **)&this->field_0x8);
    }
    *(undefined8 *)&this->field_0x8 = uVar2;
    *(undefined4 *)&this->field_0x10 = uVar3;
    if (local_20.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_20.Accessor,&local_20);
    }
    ~TDelegate<TArray<int,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy>
              (&local_38);
  }
  return this;
}

// TDelegate<TSharedPtr<INumericTypeInterface<float>,1>___cdecl(void),FDefaultDelegateUserPolicy> @ 142f2c020

TDelegate<TSharedPtr<INumericTypeInterface<float>,1>___cdecl(void),FDefaultDelegateUserPolicy> *
__thiscall
TDelegate<TSharedPtr<INumericTypeInterface<float>,1>___cdecl(void),FDefaultDelegateUserPolicy>::
TDelegate<TSharedPtr<INumericTypeInterface<float>,1>___cdecl(void),FDefaultDelegateUserPolicy>
          (TDelegate<TSharedPtr<INumericTypeInterface<float>,1>___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined4 *)&this->field_0x10 = 0;
  return this;
}

// TDelegate<double___cdecl(void),FDefaultDelegateUserPolicy> @ 142f2c040

TDelegate<double___cdecl(void),FDefaultDelegateUserPolicy> * __thiscall
TDelegate<double___cdecl(void),FDefaultDelegateUserPolicy>::
TDelegate<double___cdecl(void),FDefaultDelegateUserPolicy>
          (TDelegate<double___cdecl(void),FDefaultDelegateUserPolicy> *this,
          TDelegate<double___cdecl(void),FDefaultDelegateUserPolicy> *param_1)

{
  longlong *plVar1;
  ForAnyElementType FVar2;
  int iVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_48;
  ForAnyElementType local_40;
  int local_38;
  FDestructionSentinel local_30;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined4 *)&this->field_0x10 = 0;
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
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
               (FWriteAccessScope *)&local_30);
    if ((*(int *)&this->field_0x10 != 0) && (*(undefined8 **)&this->field_0x8 != (undefined8 *)0x0))
    {
      (**(code **)**(undefined8 **)&this->field_0x8)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&this->field_0x8,0,0,0x10);
      *(undefined4 *)&this->field_0x10 = 0;
    }
    if (*(void **)&this->field_0x8 != (void *)0x0) {
      FMemory::Free(*(void **)&this->field_0x8);
    }
    *(FScriptContainerElement **)&this->field_0x8 = FVar2.Data;
    *(int *)&this->field_0x10 = iVar3;
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

// TDelegate<void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy> @ 142f2c1e0

TDelegate<void___cdecl(ECheckBoxState),FDefaultDelegateUserPolicy> * __thiscall
TDelegate<void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy>::
TDelegate<void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy>
          (void *this,TDelegate<void___cdecl(ECheckBoxState),FDefaultDelegateUserPolicy> *param_1)

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

// TDelegate<void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy> @ 142f2c380

TDelegate<void___cdecl(ECheckBoxState),FDefaultDelegateUserPolicy> * __thiscall
TDelegate<void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy>::
TDelegate<void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy>(void *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)((longlong)this + 8) = 0;
  *(undefined4 *)((longlong)this + 0x10) = 0;
  return this;
}

// TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy> @ 142f2c3a0

TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy> * __thiscall
TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>::
TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
          (TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy> *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined4 *)&this->field_0x10 = 0;
  return this;
}

// ~TDelegate<TOptional<int>___cdecl(void),FDefaultDelegateUserPolicy> @ 142f38ee0

void __thiscall
TDelegate<TOptional<int>___cdecl(void),FDefaultDelegateUserPolicy>::
~TDelegate<TOptional<int>___cdecl(void),FDefaultDelegateUserPolicy>
          (TDelegate<TOptional<int>___cdecl(void),FDefaultDelegateUserPolicy> *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this);
  return;
}

// ~TDelegate<TOptional<FTextFormat>___cdecl(void),FDefaultDelegateUserPolicy> @ 142f38f00

void __thiscall
TDelegate<TOptional<FTextFormat>___cdecl(void),FDefaultDelegateUserPolicy>::
~TDelegate<TOptional<FTextFormat>___cdecl(void),FDefaultDelegateUserPolicy>
          (TDelegate<TOptional<FTextFormat>___cdecl(void),FDefaultDelegateUserPolicy> *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this);
  return;
}

// ~TDelegate<TOptional<enum_EItemDropZone>___cdecl(FDragDropEvent_const_&,enum_EItemDropZone,TSharedPtr<int,1>),FDefaultDelegateUserPolicy> @ 142f38f20

void __thiscall
TDelegate<TOptional<enum_EItemDropZone>___cdecl(FDragDropEvent_const_&,enum_EItemDropZone,TSharedPtr<int,1>),FDefaultDelegateUserPolicy>
::
~TDelegate<TOptional<enum_EItemDropZone>___cdecl(FDragDropEvent_const_&,enum_EItemDropZone,TSharedPtr<int,1>),FDefaultDelegateUserPolicy>
          (void *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(this);
  return;
}

// ~TDelegate<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy> @ 142f38f40

void __thiscall
TDelegate<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>::
~TDelegate<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>
          (TDelegate<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy> *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this);
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector((FMRSWRecursiveAccessDetector *)this);
  return;
}

// ~TDelegate<TArray<int,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy> @ 142f38f70

void __thiscall
TDelegate<TArray<int,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy>::
~TDelegate<TArray<int,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy>
          (TDelegate<TArray<int,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this);
  return;
}

// ~TDelegate<TSharedRef<FSlateTextLayout,1>___cdecl(SWidget_*,FTextBlockStyle_const_&),FDefaultDelegateUserPolicy> @ 142f38f90

void __thiscall
TDelegate<TSharedRef<FSlateTextLayout,1>___cdecl(SWidget_*,FTextBlockStyle_const_&),FDefaultDelegateUserPolicy>
::
~TDelegate<TSharedRef<FSlateTextLayout,1>___cdecl(SWidget_*,FTextBlockStyle_const_&),FDefaultDelegateUserPolicy>
          (TDelegate<TSharedRef<FSlateTextLayout,1>___cdecl(SWidget_*,FTextBlockStyle_const_&),FDefaultDelegateUserPolicy>
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

// ~TDelegate<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<int,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy> @ 142f38fc0

void __thiscall
TDelegate<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<int,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::
~TDelegate<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<int,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
          (TDelegate<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<int,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this);
  return;
}

// ~TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy> @ 142f38fe0

void __thiscall
TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>::
~TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
          (TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
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

// ~TDelegate<TSharedRef<SWidget,1>___cdecl(int_const_&),FDefaultDelegateUserPolicy> @ 142f39010

void __thiscall
TDelegate<TSharedRef<SWidget,1>___cdecl(int_const_&),FDefaultDelegateUserPolicy>::
~TDelegate<TSharedRef<SWidget,1>___cdecl(int_const_&),FDefaultDelegateUserPolicy>
          (TDelegate<TSharedRef<SWidget,1>___cdecl(int_const_&),FDefaultDelegateUserPolicy> *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this);
  return;
}

// ~TDelegate<TSharedRef<SWidget,1>___cdecl(int_const_&,FTextBlockStyle_const_*),FDefaultDelegateUserPolicy> @ 142f39030

void __thiscall
TDelegate<TSharedRef<SWidget,1>___cdecl(int_const_&,FTextBlockStyle_const_*),FDefaultDelegateUserPolicy>
::
~TDelegate<TSharedRef<SWidget,1>___cdecl(int_const_&,FTextBlockStyle_const_*),FDefaultDelegateUserPolicy>
          (TDelegate<TSharedRef<SWidget,1>___cdecl(int_const_&,FTextBlockStyle_const_*),FDefaultDelegateUserPolicy>
           *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this);
  return;
}

// ~TDelegate<TSharedRef<SWidget,1>___cdecl(TSharedPtr<FString,1>),FDefaultDelegateUserPolicy> @ 142f39050

void __thiscall
TDelegate<TSharedRef<SWidget,1>___cdecl(TSharedPtr<FString,1>),FDefaultDelegateUserPolicy>::
~TDelegate<TSharedRef<SWidget,1>___cdecl(TSharedPtr<FString,1>),FDefaultDelegateUserPolicy>
          (TDelegate<TSharedRef<SWidget,1>___cdecl(TSharedPtr<FString,1>),FDefaultDelegateUserPolicy>
           *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this);
  return;
}

// ~TDelegate<FReply___cdecl(FGeometry_const_&,FCharacterEvent_const_&),FDefaultDelegateUserPolicy> @ 142f39070

void __thiscall
TDelegate<FReply___cdecl(FGeometry_const_&,FCharacterEvent_const_&),FDefaultDelegateUserPolicy>::
~TDelegate<FReply___cdecl(FGeometry_const_&,FCharacterEvent_const_&),FDefaultDelegateUserPolicy>
          (TDelegate<FReply___cdecl(FGeometry_const_&,FCharacterEvent_const_&),FDefaultDelegateUserPolicy>
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

// ~TDelegate<FReply___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy> @ 142f390a0

void __thiscall
TDelegate<FReply___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy>::
~TDelegate<FReply___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
          (TDelegate<FReply___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy> *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this);
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector((FMRSWRecursiveAccessDetector *)this);
  return;
}

// ~TDelegate<FReply___cdecl(FDragDropEvent_const_&,enum_EItemDropZone,TSharedPtr<int,1>),FDefaultDelegateUserPolicy> @ 142f390d0

void __thiscall
TDelegate<FReply___cdecl(FDragDropEvent_const_&,enum_EItemDropZone,TSharedPtr<int,1>),FDefaultDelegateUserPolicy>
::
~TDelegate<FReply___cdecl(FDragDropEvent_const_&,enum_EItemDropZone,TSharedPtr<int,1>),FDefaultDelegateUserPolicy>
          (void *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(this);
  return;
}

// ~TDelegate<FReply___cdecl(void),FDefaultDelegateUserPolicy> @ 142f390f0

void __thiscall
TDelegate<FReply___cdecl(void),FDefaultDelegateUserPolicy>::
~TDelegate<FReply___cdecl(void),FDefaultDelegateUserPolicy>
          (TDelegate<FReply___cdecl(void),FDefaultDelegateUserPolicy> *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this);
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector((FMRSWRecursiveAccessDetector *)this);
  return;
}

// ~TDelegate<FString___cdecl(TSharedPtr<int,1>),FDefaultDelegateUserPolicy> @ 142f39120

void __thiscall
TDelegate<FString___cdecl(TSharedPtr<int,1>),FDefaultDelegateUserPolicy>::
~TDelegate<FString___cdecl(TSharedPtr<int,1>),FDefaultDelegateUserPolicy>
          (TDelegate<FString___cdecl(TSharedPtr<int,1>),FDefaultDelegateUserPolicy> *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this);
  return;
}

// ~TDelegate<FString___cdecl(TSharedPtr<FString,1>),FDefaultDelegateUserPolicy> @ 142f39140

void __thiscall
TDelegate<FString___cdecl(TSharedPtr<FString,1>),FDefaultDelegateUserPolicy>::
~TDelegate<FString___cdecl(TSharedPtr<FString,1>),FDefaultDelegateUserPolicy>
          (TDelegate<FString___cdecl(TSharedPtr<FString,1>),FDefaultDelegateUserPolicy> *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this);
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector((FMRSWRecursiveAccessDetector *)this);
  return;
}

// ~TDelegate<int___cdecl(enum_EItemDropZone,FPaintArgs_const_&,FGeometry_const_&,FSlateRect_const_&,FSlateWindowElementList_&,int,FWidgetStyle_const_&,bool),FDefaultDelegateUserPolicy> @ 142f39170

void __thiscall
TDelegate<int___cdecl(enum_EItemDropZone,FPaintArgs_const_&,FGeometry_const_&,FSlateRect_const_&,FSlateWindowElementList_&,int,FWidgetStyle_const_&,bool),FDefaultDelegateUserPolicy>
::
~TDelegate<int___cdecl(enum_EItemDropZone,FPaintArgs_const_&,FGeometry_const_&,FSlateRect_const_&,FSlateWindowElementList_&,int,FWidgetStyle_const_&,bool),FDefaultDelegateUserPolicy>
          (void *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(this);
  return;
}

// ~TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy> @ 142f39190

void __thiscall
TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>::
~TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>
          (TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy> *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this);
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector((FMRSWRecursiveAccessDetector *)this);
  return;
}

// ~TDelegate<void___cdecl(int_const_&),FDefaultDelegateUserPolicy> @ 142f391c0

void __thiscall
TDelegate<void___cdecl(int_const_&),FDefaultDelegateUserPolicy>::
~TDelegate<void___cdecl(int_const_&),FDefaultDelegateUserPolicy>
          (TDelegate<void___cdecl(int_const_&),FDefaultDelegateUserPolicy> *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this);
  return;
}

// ~TDelegate<void___cdecl(FTextLocation_const_&),FDefaultDelegateUserPolicy> @ 142f391e0

void __thiscall
TDelegate<void___cdecl(FTextLocation_const_&),FDefaultDelegateUserPolicy>::
~TDelegate<void___cdecl(FTextLocation_const_&),FDefaultDelegateUserPolicy>
          (TDelegate<void___cdecl(FTextLocation_const_&),FDefaultDelegateUserPolicy> *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this);
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector((FMRSWRecursiveAccessDetector *)this);
  return;
}

// ~TDelegate<void___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy> @ 142f39210

void __thiscall
TDelegate<void___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy>::
~TDelegate<void___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
          (TDelegate<void___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy> *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this);
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector((FMRSWRecursiveAccessDetector *)this);
  return;
}

// ~TDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy> @ 142f39240

void __thiscall
TDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>::
~TDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>
          (TDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy> *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this);
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector((FMRSWRecursiveAccessDetector *)this);
  return;
}

// ~TDelegate<void___cdecl(FText_const_&),FDefaultDelegateUserPolicy> @ 142f39270

void __thiscall
TDelegate<void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>::
~TDelegate<void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>
          (TDelegate<void___cdecl(FText_const_&),FDefaultDelegateUserPolicy> *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this);
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector((FMRSWRecursiveAccessDetector *)this);
  return;
}

// ~TDelegate<void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy> @ 142f392a0

void __thiscall
TDelegate<void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>::
~TDelegate<void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
          (void *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind(this);
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this);
  return;
}

// ~TDelegate<void___cdecl(int,enum_ECheckBoxState),FDefaultDelegateUserPolicy> @ 142f392d0

void __thiscall
TDelegate<void___cdecl(int,enum_ECheckBoxState),FDefaultDelegateUserPolicy>::
~TDelegate<void___cdecl(int,enum_ECheckBoxState),FDefaultDelegateUserPolicy>(void *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(this);
  return;
}

// ~TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy> @ 142f392f0

void __thiscall
TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>::
~TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>
          (TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy> *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this);
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector((FMRSWRecursiveAccessDetector *)this);
  return;
}

// ~TDelegate<void___cdecl(float,TWeakPtr<SWidget,1>,bool,bool),FDefaultDelegateUserPolicy> @ 142f39320

void __thiscall
TDelegate<void___cdecl(float,TWeakPtr<SWidget,1>,bool,bool),FDefaultDelegateUserPolicy>::
~TDelegate<void___cdecl(float,TWeakPtr<SWidget,1>,bool,bool),FDefaultDelegateUserPolicy>
          (TDelegate<void___cdecl(float,TWeakPtr<SWidget,1>,bool,bool),FDefaultDelegateUserPolicy>
           *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this);
  return;
}

// ~TDelegate<void___cdecl(float,enum_ETextCommit::Type),FDefaultDelegateUserPolicy> @ 142f39340

void __thiscall
TDelegate<void___cdecl(float,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>::
~TDelegate<void___cdecl(float,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>(void *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(this);
  return;
}

// ~TDelegate<void___cdecl(FLinearColor),FDefaultDelegateUserPolicy> @ 142f39360

void __thiscall
TDelegate<void___cdecl(FLinearColor),FDefaultDelegateUserPolicy>::
~TDelegate<void___cdecl(FLinearColor),FDefaultDelegateUserPolicy>
          (TDelegate<void___cdecl(FLinearColor),FDefaultDelegateUserPolicy> *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this);
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector((FMRSWRecursiveAccessDetector *)this);
  return;
}

// ~TDelegate<void___cdecl(TArray<int,TSizedDefaultAllocator<32>_>),FDefaultDelegateUserPolicy> @ 142f39390

void __thiscall
TDelegate<void___cdecl(TArray<int,TSizedDefaultAllocator<32>_>),FDefaultDelegateUserPolicy>::
~TDelegate<void___cdecl(TArray<int,TSizedDefaultAllocator<32>_>),FDefaultDelegateUserPolicy>
          (TDelegate<void___cdecl(TArray<int,TSizedDefaultAllocator<32>_>),FDefaultDelegateUserPolicy>
           *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this);
  return;
}

// ~TDelegate<void___cdecl(TSharedPtr<int,1>),FDefaultDelegateUserPolicy> @ 142f393b0

void __thiscall
TDelegate<void___cdecl(TSharedPtr<int,1>),FDefaultDelegateUserPolicy>::
~TDelegate<void___cdecl(TSharedPtr<int,1>),FDefaultDelegateUserPolicy>
          (TDelegate<void___cdecl(TSharedPtr<int,1>),FDefaultDelegateUserPolicy> *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this);
  return;
}

// ~TDelegate<void___cdecl(TSharedPtr<int,1>,TArray<TSharedPtr<int,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy> @ 142f393d0

void __thiscall
TDelegate<void___cdecl(TSharedPtr<int,1>,TArray<TSharedPtr<int,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::
~TDelegate<void___cdecl(TSharedPtr<int,1>,TArray<TSharedPtr<int,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
          (TDelegate<void___cdecl(TSharedPtr<int,1>,TArray<TSharedPtr<int,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
           *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this);
  return;
}

// ~TDelegate<void___cdecl(TSharedPtr<int,1>,TSharedPtr<ITableRow,1>_const_&),FDefaultDelegateUserPolicy> @ 142f393f0

void __thiscall
TDelegate<void___cdecl(TSharedPtr<int,1>,TSharedPtr<ITableRow,1>_const_&),FDefaultDelegateUserPolicy>
::
~TDelegate<void___cdecl(TSharedPtr<int,1>,TSharedPtr<ITableRow,1>_const_&),FDefaultDelegateUserPolicy>
          (TDelegate<void___cdecl(TSharedPtr<int,1>,TSharedPtr<ITableRow,1>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this);
  return;
}

// ~TDelegate<void___cdecl(TSharedPtr<int,1>,TSharedRef<ITableRow,1>_const_&),FDefaultDelegateUserPolicy> @ 142f39410

void __thiscall
TDelegate<void___cdecl(TSharedPtr<int,1>,TSharedRef<ITableRow,1>_const_&),FDefaultDelegateUserPolicy>
::
~TDelegate<void___cdecl(TSharedPtr<int,1>,TSharedRef<ITableRow,1>_const_&),FDefaultDelegateUserPolicy>
          (TDelegate<void___cdecl(TSharedPtr<int,1>,TSharedRef<ITableRow,1>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this);
  return;
}

// ~TDelegate<void___cdecl(TSharedPtr<int,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy> @ 142f39430

void __thiscall
TDelegate<void___cdecl(TSharedPtr<int,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>::
~TDelegate<void___cdecl(TSharedPtr<int,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
          (void *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(this);
  return;
}

// ~TDelegate<void___cdecl(TSharedPtr<int,1>,bool),FDefaultDelegateUserPolicy> @ 142f39450

void __thiscall
TDelegate<void___cdecl(TSharedPtr<int,1>,bool),FDefaultDelegateUserPolicy>::
~TDelegate<void___cdecl(TSharedPtr<int,1>,bool),FDefaultDelegateUserPolicy>
          (TDelegate<void___cdecl(TSharedPtr<int,1>,bool),FDefaultDelegateUserPolicy> *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this);
  return;
}

// ~TDelegate<void___cdecl(TSharedPtr<FString,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy> @ 142f39470

void __thiscall
TDelegate<void___cdecl(TSharedPtr<FString,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>::
~TDelegate<void___cdecl(TSharedPtr<FString,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
          (void *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(this);
  return;
}

// ~TDelegate<void___cdecl(TSharedRef<SDockTab,1>),FDefaultDelegateUserPolicy> @ 142f39490

void __thiscall
TDelegate<void___cdecl(TSharedRef<SDockTab,1>),FDefaultDelegateUserPolicy>::
~TDelegate<void___cdecl(TSharedRef<SDockTab,1>),FDefaultDelegateUserPolicy>
          (TDelegate<void___cdecl(TSharedRef<SDockTab,1>),FDefaultDelegateUserPolicy> *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this);
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector((FMRSWRecursiveAccessDetector *)this);
  return;
}

// ~TDelegate<void___cdecl(TSharedRef<SDockTab,1>,enum_ETabActivationCause),FDefaultDelegateUserPolicy> @ 142f394c0

void __thiscall
TDelegate<void___cdecl(TSharedRef<SDockTab,1>,enum_ETabActivationCause),FDefaultDelegateUserPolicy>
::
~TDelegate<void___cdecl(TSharedRef<SDockTab,1>,enum_ETabActivationCause),FDefaultDelegateUserPolicy>
          (void *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind(this);
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this);
  return;
}

// ~TDelegate<void___cdecl(FText),FDefaultDelegateUserPolicy> @ 142f394f0

void __thiscall
TDelegate<void___cdecl(FText),FDefaultDelegateUserPolicy>::
~TDelegate<void___cdecl(FText),FDefaultDelegateUserPolicy>
          (TDelegate<void___cdecl(FText),FDefaultDelegateUserPolicy> *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this);
  return;
}

// ~TDelegate<void___cdecl(FText,enum_ETextCommit::Type),FDefaultDelegateUserPolicy> @ 142f39510

void __thiscall
TDelegate<void___cdecl(FText,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>::
~TDelegate<void___cdecl(FText,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>(void *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(this);
  return;
}

// ~TDelegate<void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy> @ 142f39530

void __thiscall
TDelegate<void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy>::
~TDelegate<void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy>(void *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind(this);
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this);
  return;
}

// ~TDelegate<void___cdecl(enum_SSearchBox::SearchDirection),FDefaultDelegateUserPolicy> @ 142f39560

void __thiscall
TDelegate<void___cdecl(enum_SSearchBox::SearchDirection),FDefaultDelegateUserPolicy>::
~TDelegate<void___cdecl(enum_SSearchBox::SearchDirection),FDefaultDelegateUserPolicy>(void *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind(this);
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this);
  return;
}

// ~TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy> @ 142f39590

void __thiscall
TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>::
~TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>
          (TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy> *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this);
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector((FMRSWRecursiveAccessDetector *)this);
  return;
}

// ~TDelegate<bool___cdecl(int_const_&),FDefaultDelegateUserPolicy> @ 142f395c0

void __thiscall
TDelegate<bool___cdecl(int_const_&),FDefaultDelegateUserPolicy>::
~TDelegate<bool___cdecl(int_const_&),FDefaultDelegateUserPolicy>
          (TDelegate<bool___cdecl(int_const_&),FDefaultDelegateUserPolicy> *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this);
  return;
}

// ~TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy> @ 142f395e0

void __thiscall
TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>::
~TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
          (TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy> *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this);
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector((FMRSWRecursiveAccessDetector *)this);
  return;
}

// ~TDelegate<bool___cdecl(FText_const_&,FText_&),FDefaultDelegateUserPolicy> @ 142f39610

void __thiscall
TDelegate<bool___cdecl(FText_const_&,FText_&),FDefaultDelegateUserPolicy>::
~TDelegate<bool___cdecl(FText_const_&,FText_&),FDefaultDelegateUserPolicy>
          (TDelegate<bool___cdecl(FText_const_&,FText_&),FDefaultDelegateUserPolicy> *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this);
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector((FMRSWRecursiveAccessDetector *)this);
  return;
}

// ~TDelegate<bool___cdecl(TSharedPtr<int,1>),FDefaultDelegateUserPolicy> @ 142f39640

void __thiscall
TDelegate<bool___cdecl(TSharedPtr<int,1>),FDefaultDelegateUserPolicy>::
~TDelegate<bool___cdecl(TSharedPtr<int,1>),FDefaultDelegateUserPolicy>
          (TDelegate<bool___cdecl(TSharedPtr<int,1>),FDefaultDelegateUserPolicy> *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this);
  return;
}

// ~TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> @ 142f39660

void __thiscall
TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::
~TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>
          (TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this);
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector((FMRSWRecursiveAccessDetector *)this);
  return;
}

// ~TDelegate<bool___cdecl(wchar_t),FDefaultDelegateUserPolicy> @ 142f39690

void __thiscall
TDelegate<bool___cdecl(wchar_t),FDefaultDelegateUserPolicy>::
~TDelegate<bool___cdecl(wchar_t),FDefaultDelegateUserPolicy>
          (TDelegate<bool___cdecl(wchar_t),FDefaultDelegateUserPolicy> *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this);
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector((FMRSWRecursiveAccessDetector *)this);
  return;
}

// operator= @ 142f40810

TDelegate<TOptional<EItemDropZone>___cdecl(FDragDropEvent_const_&,EItemDropZone,TSharedPtr<FTestData,1>),FDefaultDelegateUserPolicy>
* __thiscall
TDelegate<TOptional<enum_EItemDropZone>___cdecl(FDragDropEvent_const_&,enum_EItemDropZone,TSharedPtr<FTestData,1>),FDefaultDelegateUserPolicy>
::operator=(void *this,
           TDelegate<TOptional<EItemDropZone>___cdecl(FDragDropEvent_const_&,EItemDropZone,TSharedPtr<FTestData,1>),FDefaultDelegateUserPolicy>
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

// operator= @ 142f40910

TDelegate<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FTestData,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
* __thiscall
TDelegate<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FTestData,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::operator=(TDelegate<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FTestData,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
            *this,TDelegate<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FTestData,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
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

// operator= @ 142f40a10

TDelegate<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<ESelectionMode::Type,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
* __thiscall
TDelegate<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<enum_ESelectionMode::Type,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::operator=(void *this,
           TDelegate<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<ESelectionMode::Type,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
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

// operator= @ 142f40b10

TDelegate<FReply___cdecl(FDragDropEvent_const_&,EItemDropZone,TSharedPtr<FTestData,1>),FDefaultDelegateUserPolicy>
* __thiscall
TDelegate<FReply___cdecl(FDragDropEvent_const_&,enum_EItemDropZone,TSharedPtr<FTestData,1>),FDefaultDelegateUserPolicy>
::operator=(void *this,
           TDelegate<FReply___cdecl(FDragDropEvent_const_&,EItemDropZone,TSharedPtr<FTestData,1>),FDefaultDelegateUserPolicy>
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

// operator= @ 142f40c10

TDelegate<void___cdecl(int_const_&),FDefaultDelegateUserPolicy> * __thiscall
TDelegate<void___cdecl(int_const_&),FDefaultDelegateUserPolicy>::operator=
          (TDelegate<void___cdecl(int_const_&),FDefaultDelegateUserPolicy> *this,
          TDelegate<void___cdecl(int_const_&),FDefaultDelegateUserPolicy> *param_1)

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
    ~TDelegate<void___cdecl(int_const_&),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(int_const_&),FDefaultDelegateUserPolicy> *)&local_38);
  }
  return this;
}

// operator= @ 142f40ca0

TDelegate<void___cdecl(TSharedPtr<int,1>,TSharedPtr<ITableRow,1>_const_&),FDefaultDelegateUserPolicy>
* __thiscall
TDelegate<void___cdecl(TSharedPtr<int,1>,TSharedPtr<ITableRow,1>_const_&),FDefaultDelegateUserPolicy>
::operator=(TDelegate<void___cdecl(TSharedPtr<int,1>,TSharedPtr<ITableRow,1>_const_&),FDefaultDelegateUserPolicy>
            *this,TDelegate<void___cdecl(TSharedPtr<int,1>,TSharedPtr<ITableRow,1>_const_&),FDefaultDelegateUserPolicy>
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
    ~TDelegate<void___cdecl(TSharedPtr<int,1>,TSharedPtr<ITableRow,1>_const_&),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(TSharedPtr<int,1>,TSharedPtr<ITableRow,1>_const_&),FDefaultDelegateUserPolicy>
                *)&local_38);
  }
  return this;
}

// operator= @ 142f40d30

TDelegate<void___cdecl(TSharedPtr<int,1>,bool),FDefaultDelegateUserPolicy> * __thiscall
TDelegate<void___cdecl(TSharedPtr<int,1>,bool),FDefaultDelegateUserPolicy>::operator=
          (TDelegate<void___cdecl(TSharedPtr<int,1>,bool),FDefaultDelegateUserPolicy> *this,
          TDelegate<void___cdecl(TSharedPtr<int,1>,bool),FDefaultDelegateUserPolicy> *param_1)

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
    ~TDelegate<void___cdecl(TSharedPtr<int,1>,bool),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(TSharedPtr<int,1>,bool),FDefaultDelegateUserPolicy> *)
               &local_38);
  }
  return this;
}

// operator= @ 142f40dc0

TDelegate<void___cdecl(TSharedPtr<FTestData,1>),FDefaultDelegateUserPolicy> * __thiscall
TDelegate<void___cdecl(TSharedPtr<FTestData,1>),FDefaultDelegateUserPolicy>::operator=
          (TDelegate<void___cdecl(TSharedPtr<FTestData,1>),FDefaultDelegateUserPolicy> *this,
          TDelegate<void___cdecl(TSharedPtr<FTestData,1>),FDefaultDelegateUserPolicy> *param_1)

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

// operator= @ 142f40ec0

TDelegate<void___cdecl(TSharedPtr<FTestData,1>,TSharedPtr<ITableRow,1>_const_&),FDefaultDelegateUserPolicy>
* __thiscall
TDelegate<void___cdecl(TSharedPtr<FTestData,1>,TSharedPtr<ITableRow,1>_const_&),FDefaultDelegateUserPolicy>
::operator=(TDelegate<void___cdecl(TSharedPtr<FTestData,1>,TSharedPtr<ITableRow,1>_const_&),FDefaultDelegateUserPolicy>
            *this,TDelegate<void___cdecl(TSharedPtr<FTestData,1>,TSharedPtr<ITableRow,1>_const_&),FDefaultDelegateUserPolicy>
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

// operator= @ 142f40fc0

TDelegate<void___cdecl(TSharedPtr<FTestData,1>,ESelectInfo::Type),FDefaultDelegateUserPolicy> *
__thiscall
TDelegate<void___cdecl(TSharedPtr<FTestData,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>::
operator=(void *this,
         TDelegate<void___cdecl(TSharedPtr<FTestData,1>,ESelectInfo::Type),FDefaultDelegateUserPolicy>
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

// operator= @ 142f410c0

TDelegate<void___cdecl(TSharedPtr<FTestData,1>,bool),FDefaultDelegateUserPolicy> * __thiscall
TDelegate<void___cdecl(TSharedPtr<FTestData,1>,bool),FDefaultDelegateUserPolicy>::operator=
          (TDelegate<void___cdecl(TSharedPtr<FTestData,1>,bool),FDefaultDelegateUserPolicy> *this,
          TDelegate<void___cdecl(TSharedPtr<FTestData,1>,bool),FDefaultDelegateUserPolicy> *param_1)

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

// operator= @ 142f411c0

TDelegate<void___cdecl(TSharedPtr<ESelectionMode::Type,1>),FDefaultDelegateUserPolicy> * __thiscall
TDelegate<void___cdecl(TSharedPtr<enum_ESelectionMode::Type,1>),FDefaultDelegateUserPolicy>::
operator=(void *this,
         TDelegate<void___cdecl(TSharedPtr<ESelectionMode::Type,1>),FDefaultDelegateUserPolicy>
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

// operator= @ 142f412c0

TDelegate<void___cdecl(TSharedPtr<ESelectionMode::Type,1>,ESelectInfo::Type),FDefaultDelegateUserPolicy>
* __thiscall
TDelegate<void___cdecl(TSharedPtr<enum_ESelectionMode::Type,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::operator=(void *this,
           TDelegate<void___cdecl(TSharedPtr<ESelectionMode::Type,1>,ESelectInfo::Type),FDefaultDelegateUserPolicy>
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

// operator= @ 142f413c0

TDelegate<void___cdecl(FText),FDefaultDelegateUserPolicy> * __thiscall
TDelegate<void___cdecl(FText),FDefaultDelegateUserPolicy>::operator=
          (TDelegate<void___cdecl(FText),FDefaultDelegateUserPolicy> *this,
          TDelegate<void___cdecl(FText),FDefaultDelegateUserPolicy> *param_1)

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
    ~TDelegate<void___cdecl(FText),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(FText),FDefaultDelegateUserPolicy> *)&local_38);
  }
  return this;
}

// operator= @ 142f41450

TDelegate<void___cdecl(FText,ETextCommit::Type),FDefaultDelegateUserPolicy> * __thiscall
TDelegate<void___cdecl(FText,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>::operator=
          (void *this,
          TDelegate<void___cdecl(FText,ETextCommit::Type),FDefaultDelegateUserPolicy> *param_1)

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
    ~TDelegate<void___cdecl(FText,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>(&local_38);
  }
  return this;
}

// operator= @ 142f414e0

TDelegate<bool___cdecl(TSharedPtr<int,1>),FDefaultDelegateUserPolicy> * __thiscall
TDelegate<bool___cdecl(TSharedPtr<int,1>),FDefaultDelegateUserPolicy>::operator=
          (TDelegate<bool___cdecl(TSharedPtr<int,1>),FDefaultDelegateUserPolicy> *this,
          TDelegate<bool___cdecl(TSharedPtr<int,1>),FDefaultDelegateUserPolicy> *param_1)

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
    ~TDelegate<bool___cdecl(TSharedPtr<int,1>),FDefaultDelegateUserPolicy>
              ((TDelegate<bool___cdecl(TSharedPtr<int,1>),FDefaultDelegateUserPolicy> *)&local_38);
  }
  return this;
}

// operator= @ 142f41570

TDelegate<bool___cdecl(TSharedPtr<FTestData,1>),FDefaultDelegateUserPolicy> * __thiscall
TDelegate<bool___cdecl(TSharedPtr<FTestData,1>),FDefaultDelegateUserPolicy>::operator=
          (TDelegate<bool___cdecl(TSharedPtr<FTestData,1>),FDefaultDelegateUserPolicy> *this,
          TDelegate<bool___cdecl(TSharedPtr<FTestData,1>),FDefaultDelegateUserPolicy> *param_1)

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

// Execute @ 142fbd360

/* WARNING: Enum "Type": Some values do not have unique names */

TOptional<EItemDropZone> __thiscall
TDelegate<TOptional<enum_EItemDropZone>___cdecl(FDragDropEvent_const_&,enum_EItemDropZone,TSharedPtr<FTestData,1>),FDefaultDelegateUserPolicy>
::Execute(void *this,FDragDropEvent *param_1,EItemDropZone param_2,TSharedPtr<FTestData,1> *param_3)

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

// Execute @ 142fbd410

/* WARNING: Enum "Type": Some values do not have unique names */

TOptional<EItemDropZone> __thiscall
TDelegate<TOptional<enum_EItemDropZone>___cdecl(FDragDropEvent_const_&,enum_EItemDropZone,TSharedPtr<enum_ESelectionMode::Type,1>),FDefaultDelegateUserPolicy>
::Execute(void *this,FDragDropEvent *param_1,EItemDropZone param_2,
         TSharedPtr<ESelectionMode::Type,1> *param_3)

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

// Execute @ 142fbd4c0

bool __thiscall
TDelegate<bool___cdecl(int_const_&),FDefaultDelegateUserPolicy>::Execute
          (TDelegate<bool___cdecl(int_const_&),FDefaultDelegateUserPolicy> *this,int *param_1)

{
  undefined1 uVar1;
  longlong *plVar2;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,&local_28);
  if (*(int *)&this->field_0x10 == 0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    plVar2 = *(longlong **)&this->field_0x8;
  }
  uVar1 = (**(code **)(*plVar2 + 0x60))(plVar2,param_1);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return (bool)uVar1;
}

// Execute @ 142fbd520

bool __thiscall
TDelegate<bool___cdecl(TSharedPtr<FTestData,1>),FDefaultDelegateUserPolicy>::Execute
          (TDelegate<bool___cdecl(TSharedPtr<FTestData,1>),FDefaultDelegateUserPolicy> *this,
          TSharedPtr<FTestData,1> *param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  longlong *plVar3;
  FTestData *local_38;
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
  param_1->Object = (FTestData *)0x0;
  uVar2 = (*pcVar1)(plVar3,&local_38);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return (bool)uVar2;
}

// Execute @ 142fbd5a0

bool __thiscall
TDelegate<bool___cdecl(TSharedPtr<enum_ESelectionMode::Type,1>),FDefaultDelegateUserPolicy>::Execute
          (void *this,TSharedPtr<ESelectionMode::Type,1> *param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  longlong *plVar3;
  Type *local_38;
  TReferenceControllerBase<1> *local_30;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(this,&local_28);
  plVar3 = (longlong *)0x0;
  if (*(int *)((longlong)this + 0x10) != 0) {
    plVar3 = *(longlong **)((longlong)this + 8);
  }
  pcVar1 = *(code **)(*plVar3 + 0x60);
  local_38 = param_1->Object;
  local_30 = (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (Type *)0x0;
  uVar2 = (*pcVar1)(plVar3,&local_38);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return (bool)uVar2;
}

// ExecuteIfBound @ 142fbd620

bool __thiscall
TDelegate<void___cdecl(int_const_&),FDefaultDelegateUserPolicy>::ExecuteIfBound
          (TDelegate<void___cdecl(int_const_&),FDefaultDelegateUserPolicy> *this,int *param_1)

{
  longlong *plVar1;
  undefined1 uVar2;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,&local_28);
  if ((*(int *)&this->field_0x10 == 0) ||
     (plVar1 = *(longlong **)&this->field_0x8, plVar1 == (longlong *)0x0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(*plVar1 + 0x68))(plVar1,param_1);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return (bool)uVar2;
}

// ExecuteIfBound @ 142fbd680

bool __thiscall
TDelegate<void___cdecl(TSharedPtr<FTestData,1>),FDefaultDelegateUserPolicy>::ExecuteIfBound
          (TDelegate<void___cdecl(TSharedPtr<FTestData,1>),FDefaultDelegateUserPolicy> *this,
          TSharedPtr<FTestData,1> *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  undefined1 uVar3;
  FTestData *local_38;
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
    param_1->Object = (FTestData *)0x0;
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

// ExecuteIfBound @ 142fbd720

bool __thiscall
TDelegate<void___cdecl(TSharedPtr<enum_ESelectionMode::Type,1>),FDefaultDelegateUserPolicy>::
ExecuteIfBound(void *this,TSharedPtr<ESelectionMode::Type,1> *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  undefined1 uVar3;
  Type *local_38;
  TReferenceControllerBase<1> *local_30;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(this,&local_28);
  if ((*(int *)((longlong)this + 0x10) != 0) &&
     (plVar1 = *(longlong **)((longlong)this + 8), plVar1 != (longlong *)0x0)) {
    pcVar2 = *(code **)(*plVar1 + 0x68);
    local_38 = param_1->Object;
    local_30 = (param_1->SharedReferenceCount).ReferenceController;
    (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    param_1->Object = (Type *)0x0;
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

// ExecuteIfBound @ 142fbd7c0

bool __thiscall
TDelegate<void___cdecl(TSharedPtr<enum_ESelectionMode::Type,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::ExecuteIfBound(void *this,TSharedPtr<ESelectionMode::Type,1> *param_1,Type param_2)

{
  longlong *plVar1;
  code *pcVar2;
  undefined1 uVar3;
  Type *local_38;
  TReferenceControllerBase<1> *local_30;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(this,&local_28);
  if ((*(int *)((longlong)this + 0x10) != 0) &&
     (plVar1 = *(longlong **)((longlong)this + 8), plVar1 != (longlong *)0x0)) {
    pcVar2 = *(code **)(*plVar1 + 0x68);
    local_38 = param_1->Object;
    local_30 = (param_1->SharedReferenceCount).ReferenceController;
    (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    param_1->Object = (Type *)0x0;
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

// CreateSP<SColorThemesViewer> @ 143018180

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> * __cdecl
TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CreateSP<SColorThemesViewer>
          (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *__return_storage_ptr__,
          SColorThemesViewer *param_1,pmf_47834e30 *param_2)

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
    *puVar8 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar8[2] = uVar10;
    *puVar8 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSColorThemesViewer___00__A6AXXZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateSP<SColorThemesViewer> @ 1430182c0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> * __cdecl
TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CreateSP<SColorThemesViewer>
          (TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *__return_storage_ptr__,
          SColorThemesViewer *param_1,pmf_f3ce66f8 *param_2)

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
    *puVar8 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar8[2] = uVar10;
    *puVar8 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSColorThemesViewer___00__A6A_NXZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateSP<SColorThemesViewer,TSharedPtr<FColorTheme,1>_&> @ 143018400

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> * __cdecl
TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
CreateSP<SColorThemesViewer,TSharedPtr<FColorTheme,1>_&>
          (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *__return_storage_ptr__,
          SColorThemesViewer *param_1,pmf_5dc3998f *param_2,TSharedPtr<FColorTheme,1> *param_3)

{
  undefined1 *puVar1;
  SWidget *pSVar2;
  TReferenceControllerBase<1> *pTVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  undefined8 *puVar9;
  TSharedRef<SWidget,1> *pTVar10;
  ulong64 uVar11;
  TReferenceControllerBase<1> *pTVar12;
  uint uStackX_c;
  TSharedRef<SWidget,1> local_58;
  FDestructionSentinel local_48;
  undefined1 *local_30;
  
  bVar8 = false;
  bVar7 = false;
  bVar6 = false;
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
             (FWriteAccessScope *)&local_48);
  local_30 = puVar1;
  puVar9 = UE::Core::Private::DelegateAllocate(0x40,(FDelegateAllocation *)puVar1);
  if (puVar9 == (undefined8 *)0x0) {
    pTVar12 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    uVar4 = *(undefined8 *)param_2;
    uVar5 = *(undefined8 *)&param_2->field_0x8;
    pTVar10 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_58);
    pTVar12 = (pTVar10->SharedReferenceCount).ReferenceController;
    pSVar2 = pTVar10->Object;
    if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar9 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__V__TSharedPtr_VFColorTheme___00____6B_
    ;
    puVar9[1] = param_3->Object;
    pTVar3 = (param_3->SharedReferenceCount).ReferenceController;
    puVar9[2] = pTVar3;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar9[3] = uVar11;
    *puVar9 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSColorThemesViewer___00__A6AXXZUFDefaultDelegateUserPolicy__V__TSharedPtr_VFColorTheme___00____6B_
    ;
    puVar9[4] = pSVar2;
    puVar9[5] = pTVar12;
    if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar12->WeakReferenceCount = (atomic<int>)((int)pTVar12->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar8 = true;
    bVar7 = true;
    bVar6 = true;
    puVar9[6] = uVar4;
    puVar9[7] = uVar5;
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  }
  if (bVar7) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  }
  if (bVar8) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  return __return_storage_ptr__;
}

// CreateSP<SThemeColorBlocksBar> @ 143018560

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> * __cdecl
TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CreateSP<SThemeColorBlocksBar>
          (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *__return_storage_ptr__,
          SThemeColorBlocksBar *param_1,pmf_1d766ebc *param_2)

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
    *puVar8 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar8[2] = uVar10;
    *puVar8 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSThemeColorBlocksBar___00__A6AXXZUFDefaultDelegateUserPolicy____V__6B_
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

// TDelegate<TSharedPtr<FColorTheme,1>___cdecl(void),FDefaultDelegateUserPolicy> @ 143019ae0

TDelegate<TSharedPtr<FColorTheme,1>___cdecl(void),FDefaultDelegateUserPolicy> * __thiscall
TDelegate<TSharedPtr<FColorTheme,1>___cdecl(void),FDefaultDelegateUserPolicy>::
TDelegate<TSharedPtr<FColorTheme,1>___cdecl(void),FDefaultDelegateUserPolicy>
          (TDelegate<TSharedPtr<FColorTheme,1>___cdecl(void),FDefaultDelegateUserPolicy> *this,
          TDelegate<TSharedPtr<FColorTheme,1>___cdecl(void),FDefaultDelegateUserPolicy> *param_1)

{
  longlong *plVar1;
  ForAnyElementType FVar2;
  int iVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_48;
  ForAnyElementType local_40;
  int local_38;
  FDestructionSentinel local_30;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined4 *)&this->field_0x10 = 0;
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
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
               (FWriteAccessScope *)&local_30);
    if ((*(int *)&this->field_0x10 != 0) && (*(undefined8 **)&this->field_0x8 != (undefined8 *)0x0))
    {
      (**(code **)**(undefined8 **)&this->field_0x8)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&this->field_0x8,0,0,0x10);
      *(undefined4 *)&this->field_0x10 = 0;
    }
    if (*(void **)&this->field_0x8 != (void *)0x0) {
      FMemory::Free(*(void **)&this->field_0x8);
    }
    *(FScriptContainerElement **)&this->field_0x8 = FVar2.Data;
    *(int *)&this->field_0x10 = iVar3;
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

// operator= @ 14301b340

TDelegate<int___cdecl(int),FDefaultDelegateUserPolicy> * __thiscall
TDelegate<int___cdecl(int),FDefaultDelegateUserPolicy>::operator=
          (TDelegate<int___cdecl(int),FDefaultDelegateUserPolicy> *this,
          TDelegate<int___cdecl(int),FDefaultDelegateUserPolicy> *param_1)

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

// ExecuteIfBound @ 1430314d0

bool __thiscall
TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>::ExecuteIfBound
          (TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy> *this,bool param_1)

{
  longlong *plVar1;
  undefined1 uVar2;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,&local_28);
  if ((*(int *)&this->field_0x10 == 0) ||
     (plVar1 = *(longlong **)&this->field_0x8, plVar1 == (longlong *)0x0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(*plVar1 + 0x68))(plVar1,param_1);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return (bool)uVar2;
}

// CopyFrom<FDefaultDelegateUserPolicy> @ 143046050

void __thiscall
TDelegate<TOptional<unsigned_short>___cdecl(void),FDefaultDelegateUserPolicy>::
CopyFrom<FDefaultDelegateUserPolicy>
          (TDelegate<TOptional<unsigned_short>___cdecl(void),FDefaultDelegateUserPolicy> *this,
          TDelegate<TOptional<unsigned_short>___cdecl(void),FDefaultDelegateUserPolicy> *param_1)

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
    ~TDelegate<TOptional<unsigned_short>___cdecl(void),FDefaultDelegateUserPolicy>
              ((TDelegate<TOptional<unsigned_short>___cdecl(void),FDefaultDelegateUserPolicy> *)
               &local_38);
  }
  return;
}

// CopyFrom<FDefaultDelegateUserPolicy> @ 1430460d0

void __thiscall
TDelegate<FString___cdecl(TSharedPtr<FTextStyles::FFontFamily,1>),FDefaultDelegateUserPolicy>::
CopyFrom<FDefaultDelegateUserPolicy>
          (TDelegate<FString___cdecl(TSharedPtr<FTextStyles::FFontFamily,1>),FDefaultDelegateUserPolicy>
           *this,TDelegate<FString___cdecl(TSharedPtr<FTextStyles::FFontFamily,1>),FDefaultDelegateUserPolicy>
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

// CopyFrom<FDefaultDelegateUserPolicy> @ 1430461d0

void __thiscall
TDelegate<FString___cdecl(TSharedRef<SDocumentsTest::FDocumentInfo,1>),FDefaultDelegateUserPolicy>::
CopyFrom<FDefaultDelegateUserPolicy>
          (TDelegate<FString___cdecl(TSharedRef<SDocumentsTest::FDocumentInfo,1>),FDefaultDelegateUserPolicy>
           *this,TDelegate<FString___cdecl(TSharedRef<SDocumentsTest::FDocumentInfo,1>),FDefaultDelegateUserPolicy>
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
    ~TDelegate<FString___cdecl(TSharedRef<SDocumentsTest::FDocumentInfo,1>),FDefaultDelegateUserPolicy>
              ((TDelegate<FString___cdecl(TSharedRef<SDocumentsTest::FDocumentInfo,1>),FDefaultDelegateUserPolicy>
                *)&local_38);
  }
  return;
}

// CreateSP<FTabManager,1,TSharedRef<FWorkspaceItem,1>_&> @ 143046370

/* WARNING: Enum "Type": Some values do not have unique names */

TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy> * __cdecl
TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>::
CreateSP<FTabManager,1,TSharedRef<FWorkspaceItem,1>_&>
          (TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>
           *__return_storage_ptr__,TSharedRef<FTabManager,1> *param_1,pmf_84ddf988 *param_2,
          TSharedRef<FWorkspaceItem,1> *param_3)

{
  undefined1 *puVar1;
  FTabManager *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  TReferenceControllerBase<1> *pTVar8;
  bool bVar9;
  uint uStackX_c;
  FDestructionSentinel local_48;
  undefined1 *local_30;
  
  bVar9 = false;
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
             (FWriteAccessScope *)&local_48);
  local_30 = puVar1;
  puVar6 = UE::Core::Private::DelegateAllocate(0x40,(FDelegateAllocation *)puVar1);
  if (puVar6 == (undefined8 *)0x0) {
    pTVar8 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    uVar4 = *(undefined8 *)param_2;
    uVar5 = *(undefined8 *)&param_2->field_0x8;
    pTVar8 = (param_1->SharedReferenceCount).ReferenceController;
    pFVar2 = param_1->Object;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFMenuBuilder___ZUFDefaultDelegateUserPolicy__V__TSharedRef_VFWorkspaceItem___00____6B_
    ;
    puVar6[1] = param_3->Object;
    pTVar3 = (param_3->SharedReferenceCount).ReferenceController;
    puVar6[2] = pTVar3;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[3] = uVar7;
    *puVar6 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFTabManager___00__A6AXAEAVFMenuBuilder___ZUFDefaultDelegateUserPolicy__V__TSharedRef_VFWorkspaceItem___00____6B_
    ;
    puVar6[4] = pFVar2;
    puVar6[5] = pTVar8;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar9 = true;
    puVar6[6] = uVar4;
    puVar6[7] = uVar5;
  }
  if (bVar9) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  return __return_storage_ptr__;
}

// CreateSP<SDocumentsTest,TSharedRef<SDocumentsTest::FDocumentInfo,1>_&> @ 143046490

/* WARNING: Enum "Type": Some values do not have unique names */

TDelegate<FReply___cdecl(void),FDefaultDelegateUserPolicy> * __cdecl
TDelegate<FReply___cdecl(void),FDefaultDelegateUserPolicy>::
CreateSP<SDocumentsTest,TSharedRef<SDocumentsTest::FDocumentInfo,1>_&>
          (TDelegate<FReply___cdecl(void),FDefaultDelegateUserPolicy> *__return_storage_ptr__,
          SDocumentsTest *param_1,pmf_45ef89f7 *param_2,
          TSharedRef<SDocumentsTest::FDocumentInfo,1> *param_3)

{
  undefined1 *puVar1;
  TReferenceControllerBase<1> *pTVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined8 *puVar8;
  TSharedRef<SWidget,1> *pTVar9;
  ulong64 uVar10;
  TSharedRef<SDocumentsTest,1> local_78;
  TSharedPtr<SDocumentsTest,1> local_68;
  TSharedRef<SWidget,1> local_58;
  FDestructionSentinel local_48;
  undefined1 *local_30;
  
  puVar1 = &__return_storage_ptr__->field_0x8;
  bVar7 = false;
  bVar6 = false;
  bVar5 = false;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
             (FWriteAccessScope *)&local_48);
  local_30 = puVar1;
  puVar8 = UE::Core::Private::DelegateAllocate(0x40,(FDelegateAllocation *)puVar1);
  if (puVar8 != (undefined8 *)0x0) {
    uVar3 = *(undefined8 *)param_2;
    uVar4 = *(undefined8 *)&param_2->field_0x8;
    pTVar9 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_58);
    local_78.Object = (SDocumentsTest *)pTVar9->Object;
    local_78.SharedReferenceCount.ReferenceController =
         (pTVar9->SharedReferenceCount).ReferenceController;
    if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar8 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__XZUFDefaultDelegateUserPolicy__V__TSharedRef_UFDocumentInfo_SDocumentsTest___00____6B_
    ;
    puVar8[1] = param_3->Object;
    pTVar2 = (param_3->SharedReferenceCount).ReferenceController;
    puVar8[2] = pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_68.Object = local_78.Object;
    local_68.SharedReferenceCount.ReferenceController =
         local_78.SharedReferenceCount.ReferenceController;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar8[3] = uVar10;
    *puVar8 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSDocumentsTest___00__A6A_AVFReply__XZUFDefaultDelegateUserPolicy__V__TSharedRef_UFDocumentInfo_SDocumentsTest___00____6B_
    ;
    puVar8[4] = local_68.Object;
    puVar8[5] = local_68.SharedReferenceCount.ReferenceController;
    if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_68.SharedReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_68.SharedReferenceCount.ReferenceController)->WeakReferenceCount + 1);
      UNLOCK();
    }
    puVar8[6] = uVar3;
    puVar8[7] = uVar4;
    bVar7 = true;
    bVar6 = true;
    bVar5 = true;
  }
  if (bVar5) {
    TSharedPtr<SDocumentsTest,1>::~TSharedPtr<SDocumentsTest,1>(&local_68);
  }
  if (bVar6) {
    TSharedRef<SDocumentsTest,1>::~TSharedRef<SDocumentsTest,1>(&local_78);
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

// CreateSP<SNotificationListTest> @ 143046630

/* WARNING: Enum "Type": Some values do not have unique names */

TDelegate<void___cdecl(ECheckBoxState),FDefaultDelegateUserPolicy> * __cdecl
TDelegate<void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy>::
CreateSP<SNotificationListTest>
          (TDelegate<void___cdecl(ECheckBoxState),FDefaultDelegateUserPolicy>
           *__return_storage_ptr__,SNotificationListTest *param_1,pmf_2bfa4461 *param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 *puVar7;
  TSharedRef<SWidget,1> *pTVar8;
  ulong64 uVar9;
  TSharedRef<SNotificationListTest,1> local_78;
  TSharedPtr<SNotificationListTest,1> local_68;
  TSharedRef<SWidget,1> local_58;
  FDestructionSentinel local_48;
  undefined1 *local_30;
  
  puVar1 = &__return_storage_ptr__->field_0x8;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
             (FWriteAccessScope *)&local_48);
  local_30 = puVar1;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)puVar1);
  if (puVar7 != (undefined8 *)0x0) {
    uVar2 = *(undefined8 *)param_2;
    uVar3 = *(undefined8 *)&param_2->field_0x8;
    pTVar8 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_58);
    local_78.Object = (SNotificationListTest *)pTVar8->Object;
    local_78.SharedReferenceCount.ReferenceController =
         (pTVar8->SharedReferenceCount).ReferenceController;
    if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXW4ECheckBoxState___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    local_68.Object = local_78.Object;
    local_68.SharedReferenceCount.ReferenceController =
         local_78.SharedReferenceCount.ReferenceController;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSNotificationListTest___00__A6AXW4ECheckBoxState___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = local_68.Object;
    puVar7[4] = local_68.SharedReferenceCount.ReferenceController;
    if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_68.SharedReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_68.SharedReferenceCount.ReferenceController)->WeakReferenceCount + 1);
      UNLOCK();
    }
    puVar7[5] = uVar2;
    puVar7[6] = uVar3;
    bVar6 = true;
    bVar5 = true;
    bVar4 = true;
  }
  if (bVar4) {
    TSharedPtr<SNotificationListTest,1>::~TSharedPtr<SNotificationListTest,1>(&local_68);
  }
  if (bVar5) {
    TSharedRef<SNotificationListTest,1>::~TSharedRef<SNotificationListTest,1>(&local_78);
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  return __return_storage_ptr__;
}

// CreateSP<SRichTextEditTest> @ 1430467a0

/* WARNING: Enum "Type": Some values do not have unique names */

TDelegate<void___cdecl(FLinearColor),FDefaultDelegateUserPolicy> * __cdecl
TDelegate<void___cdecl(FLinearColor),FDefaultDelegateUserPolicy>::CreateSP<SRichTextEditTest>
          (TDelegate<void___cdecl(FLinearColor),FDefaultDelegateUserPolicy> *__return_storage_ptr__,
          SRichTextEditTest *param_1,pmf_fd62b4b0 *param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 *puVar7;
  TSharedRef<SWidget,1> *pTVar8;
  ulong64 uVar9;
  TSharedRef<SRichTextEditTest,1> local_78;
  TSharedPtr<SRichTextEditTest,1> local_68;
  TSharedRef<SWidget,1> local_58;
  FDestructionSentinel local_48;
  undefined1 *local_30;
  
  puVar1 = &__return_storage_ptr__->field_0x8;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
             (FWriteAccessScope *)&local_48);
  local_30 = puVar1;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)puVar1);
  if (puVar7 != (undefined8 *)0x0) {
    uVar2 = *(undefined8 *)param_2;
    uVar3 = *(undefined8 *)&param_2->field_0x8;
    pTVar8 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_58);
    local_78.Object = (SRichTextEditTest *)pTVar8->Object;
    local_78.SharedReferenceCount.ReferenceController =
         (pTVar8->SharedReferenceCount).ReferenceController;
    if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXUFLinearColor___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    local_68.Object = local_78.Object;
    local_68.SharedReferenceCount.ReferenceController =
         local_78.SharedReferenceCount.ReferenceController;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSRichTextEditTest___00__A6AXUFLinearColor___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = local_68.Object;
    puVar7[4] = local_68.SharedReferenceCount.ReferenceController;
    if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_68.SharedReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_68.SharedReferenceCount.ReferenceController)->WeakReferenceCount + 1);
      UNLOCK();
    }
    puVar7[5] = uVar2;
    puVar7[6] = uVar3;
    bVar6 = true;
    bVar5 = true;
    bVar4 = true;
  }
  if (bVar4) {
    TSharedPtr<SRichTextEditTest,1>::~TSharedPtr<SRichTextEditTest,1>(&local_68);
  }
  if (bVar5) {
    TSharedRef<SRichTextEditTest,1>::~TSharedRef<SRichTextEditTest,1>(&local_78);
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  return __return_storage_ptr__;
}

// CreateStatic<> @ 143046910

/* WARNING: Enum "Type": Some values do not have unique names */

TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy> *
__cdecl TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
        ::CreateStatic<>(TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
                         *__return_storage_ptr__,
                        _func___cdecl_TSharedRef<SDockTab,1>_FSpawnTabArgs_ptr *param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
  *pTVar6;
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
  puVar4 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)puVar1);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSDockTab___00__AEBVFSpawnTabArgs___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &
              ___7__TBaseStaticDelegateInstance___A6A_AV__TSharedRef_VSDockTab___00__AEBVFSpawnTabArgs___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[3] = param_1;
    if (param_1 == (_func___cdecl_TSharedRef<SDockTab,1>_FSpawnTabArgs_ptr *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StaticFuncPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                         ,0x2e9,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
                  *)(*pcVar2)();
        return pTVar6;
      }
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return __return_storage_ptr__;
}

// CreateStatic<> @ 1430469e0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy> * __cdecl
TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>::CreateStatic<>
          (TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>
           *__return_storage_ptr__,_func___cdecl_void_FMenuBuilder_ptr *param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy> *pTVar6;
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
  puVar4 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)puVar1);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFMenuBuilder___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEAVFMenuBuilder___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[3] = param_1;
    if (param_1 == (_func___cdecl_void_FMenuBuilder_ptr *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StaticFuncPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                         ,0x2e9,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy> *)(*pcVar2)();
        return pTVar6;
      }
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return __return_storage_ptr__;
}

// CreateStatic<> @ 143046ab0

TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> * __cdecl
TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CreateStatic<>
          (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *__return_storage_ptr__,
          _func___cdecl_void *param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *pTVar6;
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
  puVar4 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)puVar1);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &___7__TBaseStaticDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar4[3] = param_1;
    if (param_1 == (_func___cdecl_void *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StaticFuncPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                         ,0x2e9,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(*pcVar2)();
        return pTVar6;
      }
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return __return_storage_ptr__;
}

// CreateStatic<int> @ 143046b80

TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> * __cdecl
TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CreateStatic<int>
          (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *__return_storage_ptr__,
          _func___cdecl_void_int *param_1,int *param_2)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *pTVar6;
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
  puVar4 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)puVar1);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__H__6B_;
    *(int *)(puVar4 + 1) = *param_2;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &___7__TBaseStaticDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy__H__6B_;
    puVar4[3] = param_1;
    if (param_1 == (_func___cdecl_void_int *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StaticFuncPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                         ,0x2e9,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(*pcVar2)();
        return pTVar6;
      }
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return __return_storage_ptr__;
}

// CreateStatic<int> @ 143046c60

TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> * __cdecl
TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CreateStatic<int>
          (TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *__return_storage_ptr__,
          _func___cdecl_bool_int *param_1,int *param_2)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *pTVar6;
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
  puVar4 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)puVar1);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy__H__6B_;
    *(int *)(puVar4 + 1) = *param_2;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &___7__TBaseStaticDelegateInstance___A6A_NXZUFDefaultDelegateUserPolicy__H__6B_;
    puVar4[3] = param_1;
    if (param_1 == (_func___cdecl_bool_int *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StaticFuncPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                         ,0x2e9,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)(*pcVar2)();
        return pTVar6;
      }
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return __return_storage_ptr__;
}

// CreateStatic<TSharedRef<SWidget,1>_> @ 143046d40

TDelegate<void___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
* __cdecl TDelegate<void___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
          ::CreateStatic<TSharedRef<SWidget,1>_>
                    (TDelegate<void___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
                     *__return_storage_ptr__,
                    _func___cdecl_void_TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_ptr_TSharedRef<SWidget,1>
                    *param_1,TSharedRef<SWidget,1> *param_2)

{
  undefined1 *puVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  TDelegate<void___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
  *pTVar7;
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
  puVar5 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)puVar1);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TMap_VFString__V1_VFDefaultSetAllocator__U__TDefaultMapHashableKeyFuncs_VFString__V1__0A______ZUFDefaultDelegateUserPolicy__V__TSharedRef_VSWidget___00____6B_
    ;
    puVar5[1] = param_2->Object;
    pTVar2 = (param_2->SharedReferenceCount).ReferenceController;
    puVar5[2] = pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[3] = uVar6;
    *puVar5 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBV__TMap_VFString__V1_VFDefaultSetAllocator__U__TDefaultMapHashableKeyFuncs_VFString__V1__0A______ZUFDefaultDelegateUserPolicy__V__TSharedRef_VSWidget___00____6B_
    ;
    puVar5[4] = param_1;
    if (param_1 ==
        (_func___cdecl_void_TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_ptr_TSharedRef<SWidget,1>
         *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("StaticFuncPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                         ,0x2e9,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TDelegate<void___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
                  *)(*pcVar3)();
        return pTVar7;
      }
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return __return_storage_ptr__;
}

// CreateStatic<FName> @ 143046e30

/* WARNING: Enum "Type": Some values do not have unique names */

TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy> *
__cdecl TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
        ::CreateStatic<FName>
                  (TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
                   *__return_storage_ptr__,
                  _func___cdecl_TSharedRef<SDockTab,1>_FSpawnTabArgs_ptr_FName *param_1,
                  FName *param_2)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
  *pTVar6;
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
  puVar4 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)puVar1);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSDockTab___00__AEBVFSpawnTabArgs___ZUFDefaultDelegateUserPolicy__VFName____6B_
    ;
    *(FName *)(puVar4 + 1) = *param_2;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &
              ___7__TBaseStaticDelegateInstance___A6A_AV__TSharedRef_VSDockTab___00__AEBVFSpawnTabArgs___ZUFDefaultDelegateUserPolicy__VFName____6B_
    ;
    puVar4[3] = param_1;
    if (param_1 == (_func___cdecl_TSharedRef<SDockTab,1>_FSpawnTabArgs_ptr_FName *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StaticFuncPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                         ,0x2e9,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
                  *)(*pcVar2)();
        return pTVar6;
      }
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return __return_storage_ptr__;
}

// TDelegate<TSharedRef<IToolTip,1>___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy> @ 143055290

TDelegate<TSharedRef<IToolTip,1>___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
* __thiscall
TDelegate<TSharedRef<IToolTip,1>___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
::
TDelegate<TSharedRef<IToolTip,1>___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
          (TDelegate<TSharedRef<IToolTip,1>___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined4 *)&this->field_0x10 = 0;
  return this;
}

// TDelegate<FText___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy> @ 1430552b0

TDelegate<FText___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
* __thiscall
TDelegate<FText___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
::
TDelegate<FText___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
          (TDelegate<FText___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined4 *)&this->field_0x10 = 0;
  return this;
}

// TDelegate<int___cdecl(FOnPaintHandlerParams_const_&),FDefaultDelegateUserPolicy> @ 1430552d0

TDelegate<int___cdecl(FOnPaintHandlerParams_const_&),FDefaultDelegateUserPolicy> * __thiscall
TDelegate<int___cdecl(FOnPaintHandlerParams_const_&),FDefaultDelegateUserPolicy>::
TDelegate<int___cdecl(FOnPaintHandlerParams_const_&),FDefaultDelegateUserPolicy>
          (TDelegate<int___cdecl(FOnPaintHandlerParams_const_&),FDefaultDelegateUserPolicy> *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this);
  return this;
}

// TDelegate<void___cdecl(TSharedRef<SWindow,1>_const_&),FDefaultDelegateUserPolicy> @ 143055300

TDelegate<void___cdecl(TSharedRef<SWindow,1>_const_&),FDefaultDelegateUserPolicy> * __thiscall
TDelegate<void___cdecl(TSharedRef<SWindow,1>_const_&),FDefaultDelegateUserPolicy>::
TDelegate<void___cdecl(TSharedRef<SWindow,1>_const_&),FDefaultDelegateUserPolicy>
          (TDelegate<void___cdecl(TSharedRef<SWindow,1>_const_&),FDefaultDelegateUserPolicy> *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined4 *)&this->field_0x10 = 0;
  return this;
}

// TDelegate<void___cdecl(FText_const_&),FDefaultDelegateUserPolicy> @ 143055320

TDelegate<void___cdecl(FText_const_&),FDefaultDelegateUserPolicy> * __thiscall
TDelegate<void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>::
TDelegate<void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>
          (TDelegate<void___cdecl(FText_const_&),FDefaultDelegateUserPolicy> *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined4 *)&this->field_0x10 = 0;
  return this;
}

// TDelegate<void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy> @ 143055340

TDelegate<void___cdecl(FText_const_&,ETextCommit::Type),FDefaultDelegateUserPolicy> * __thiscall
TDelegate<void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>::
TDelegate<void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>(void *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)((longlong)this + 8) = 0;
  *(undefined4 *)((longlong)this + 0x10) = 0;
  return this;
}

// TDelegate<void___cdecl(FLinearColor),FDefaultDelegateUserPolicy> @ 143055360

TDelegate<void___cdecl(FLinearColor),FDefaultDelegateUserPolicy> * __thiscall
TDelegate<void___cdecl(FLinearColor),FDefaultDelegateUserPolicy>::
TDelegate<void___cdecl(FLinearColor),FDefaultDelegateUserPolicy>
          (TDelegate<void___cdecl(FLinearColor),FDefaultDelegateUserPolicy> *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined4 *)&this->field_0x10 = 0;
  return this;
}

// TDelegate<bool___cdecl(TSharedRef<FUICommandInfo_const_,1>_const_&),FDefaultDelegateUserPolicy> @ 143055380

TDelegate<bool___cdecl(TSharedRef<FUICommandInfo_const_,1>_const_&),FDefaultDelegateUserPolicy> *
__thiscall
TDelegate<bool___cdecl(TSharedRef<FUICommandInfo_const_,1>_const_&),FDefaultDelegateUserPolicy>::
TDelegate<bool___cdecl(TSharedRef<FUICommandInfo_const_,1>_const_&),FDefaultDelegateUserPolicy>
          (TDelegate<bool___cdecl(TSharedRef<FUICommandInfo_const_,1>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined4 *)&this->field_0x10 = 0;
  return this;
}

// ~TDelegate<TOptional<unsigned_short>___cdecl(void),FDefaultDelegateUserPolicy> @ 14305e680

void __thiscall
TDelegate<TOptional<unsigned_short>___cdecl(void),FDefaultDelegateUserPolicy>::
~TDelegate<TOptional<unsigned_short>___cdecl(void),FDefaultDelegateUserPolicy>
          (TDelegate<TOptional<unsigned_short>___cdecl(void),FDefaultDelegateUserPolicy> *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this);
  return;
}

// ~TDelegate<TOptional<enum_EItemDropZone>___cdecl(FDragDropEvent_const_&,enum_EItemDropZone,TSharedRef<SDocumentsTest::FDocumentInfo,1>),FDefaultDelegateUserPolicy> @ 14305e6a0

void __thiscall
TDelegate<TOptional<enum_EItemDropZone>___cdecl(FDragDropEvent_const_&,enum_EItemDropZone,TSharedRef<SDocumentsTest::FDocumentInfo,1>),FDefaultDelegateUserPolicy>
::
~TDelegate<TOptional<enum_EItemDropZone>___cdecl(FDragDropEvent_const_&,enum_EItemDropZone,TSharedRef<SDocumentsTest::FDocumentInfo,1>),FDefaultDelegateUserPolicy>
          (void *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(this);
  return;
}

// ~TDelegate<EVisibility___cdecl(enum_SNotificationItem::ECompletionState),FDefaultDelegateUserPolicy> @ 14305e6c0

void __thiscall
TDelegate<EVisibility___cdecl(enum_SNotificationItem::ECompletionState),FDefaultDelegateUserPolicy>
::
~TDelegate<EVisibility___cdecl(enum_SNotificationItem::ECompletionState),FDefaultDelegateUserPolicy>
          (void *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind(this);
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this);
  return;
}

// ~TDelegate<TSharedRef<ITableRow,1>___cdecl(TSharedRef<SDocumentsTest::FDocumentInfo,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy> @ 14305e6f0

void __thiscall
TDelegate<TSharedRef<ITableRow,1>___cdecl(TSharedRef<SDocumentsTest::FDocumentInfo,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::
~TDelegate<TSharedRef<ITableRow,1>___cdecl(TSharedRef<SDocumentsTest::FDocumentInfo,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
          (TDelegate<TSharedRef<ITableRow,1>___cdecl(TSharedRef<SDocumentsTest::FDocumentInfo,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this);
  return;
}

// ~TDelegate<TSharedRef<IToolTip,1>___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy> @ 14305e710

void __thiscall
TDelegate<TSharedRef<IToolTip,1>___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
::
~TDelegate<TSharedRef<IToolTip,1>___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
          (TDelegate<TSharedRef<IToolTip,1>___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
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

// ~TDelegate<TSharedRef<SWidget,1>___cdecl(TSharedPtr<FTextStyles::FFontFamily,1>),FDefaultDelegateUserPolicy> @ 14305e740

void __thiscall
TDelegate<TSharedRef<SWidget,1>___cdecl(TSharedPtr<FTextStyles::FFontFamily,1>),FDefaultDelegateUserPolicy>
::
~TDelegate<TSharedRef<SWidget,1>___cdecl(TSharedPtr<FTextStyles::FFontFamily,1>),FDefaultDelegateUserPolicy>
          (TDelegate<TSharedRef<SWidget,1>___cdecl(TSharedPtr<FTextStyles::FFontFamily,1>),FDefaultDelegateUserPolicy>
           *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this);
  return;
}

// ~TDelegate<FReply___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy> @ 14305e760

void __thiscall
TDelegate<FReply___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>::
~TDelegate<FReply___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
          (TDelegate<FReply___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
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

// ~TDelegate<FReply___cdecl(FDragDropEvent_const_&,enum_EItemDropZone,TSharedRef<SDocumentsTest::FDocumentInfo,1>),FDefaultDelegateUserPolicy> @ 14305e790

void __thiscall
TDelegate<FReply___cdecl(FDragDropEvent_const_&,enum_EItemDropZone,TSharedRef<SDocumentsTest::FDocumentInfo,1>),FDefaultDelegateUserPolicy>
::
~TDelegate<FReply___cdecl(FDragDropEvent_const_&,enum_EItemDropZone,TSharedRef<SDocumentsTest::FDocumentInfo,1>),FDefaultDelegateUserPolicy>
          (void *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(this);
  return;
}

// ~TDelegate<FString___cdecl(TSharedRef<SDocumentsTest::FDocumentInfo,1>),FDefaultDelegateUserPolicy> @ 14305e7b0

void __thiscall
TDelegate<FString___cdecl(TSharedRef<SDocumentsTest::FDocumentInfo,1>),FDefaultDelegateUserPolicy>::
~TDelegate<FString___cdecl(TSharedRef<SDocumentsTest::FDocumentInfo,1>),FDefaultDelegateUserPolicy>
          (TDelegate<FString___cdecl(TSharedRef<SDocumentsTest::FDocumentInfo,1>),FDefaultDelegateUserPolicy>
           *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this);
  return;
}

// ~TDelegate<FText___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy> @ 14305e7d0

void __thiscall
TDelegate<FText___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
::
~TDelegate<FText___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
          (TDelegate<FText___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
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

// ~TDelegate<unsigned_short___cdecl(void),FDefaultDelegateUserPolicy> @ 14305e800

void __thiscall
TDelegate<unsigned_short___cdecl(void),FDefaultDelegateUserPolicy>::
~TDelegate<unsigned_short___cdecl(void),FDefaultDelegateUserPolicy>
          (TDelegate<unsigned_short___cdecl(void),FDefaultDelegateUserPolicy> *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this);
  return;
}

// ~TDelegate<int___cdecl(FOnPaintHandlerParams_const_&),FDefaultDelegateUserPolicy> @ 14305e820

void __thiscall
TDelegate<int___cdecl(FOnPaintHandlerParams_const_&),FDefaultDelegateUserPolicy>::
~TDelegate<int___cdecl(FOnPaintHandlerParams_const_&),FDefaultDelegateUserPolicy>
          (TDelegate<int___cdecl(FOnPaintHandlerParams_const_&),FDefaultDelegateUserPolicy> *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this);
  return;
}

// ~TDelegate<void___cdecl(UE::Math::TVector2<double>_&),FDefaultDelegateUserPolicy> @ 14305e840

void __thiscall
TDelegate<void___cdecl(UE::Math::TVector2<double>_&),FDefaultDelegateUserPolicy>::
~TDelegate<void___cdecl(UE::Math::TVector2<double>_&),FDefaultDelegateUserPolicy>
          (TDelegate<void___cdecl(UE::Math::TVector2<double>_&),FDefaultDelegateUserPolicy> *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this);
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector((FMRSWRecursiveAccessDetector *)this);
  return;
}

// ~TDelegate<void___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy> @ 14305e870

void __thiscall
TDelegate<void___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>::
~TDelegate<void___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
          (TDelegate<void___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>
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

// ~TDelegate<void___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy> @ 14305e8a0

void __thiscall
TDelegate<void___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
::
~TDelegate<void___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
          (TDelegate<void___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
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

// ~TDelegate<void___cdecl(TSharedRef<SWindow,1>_const_&),FDefaultDelegateUserPolicy> @ 14305e8d0

void __thiscall
TDelegate<void___cdecl(TSharedRef<SWindow,1>_const_&),FDefaultDelegateUserPolicy>::
~TDelegate<void___cdecl(TSharedRef<SWindow,1>_const_&),FDefaultDelegateUserPolicy>
          (TDelegate<void___cdecl(TSharedRef<SWindow,1>_const_&),FDefaultDelegateUserPolicy> *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this);
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector((FMRSWRecursiveAccessDetector *)this);
  return;
}

// ~TDelegate<void___cdecl(unsigned_short),FDefaultDelegateUserPolicy> @ 14305e900

void __thiscall
TDelegate<void___cdecl(unsigned_short),FDefaultDelegateUserPolicy>::
~TDelegate<void___cdecl(unsigned_short),FDefaultDelegateUserPolicy>
          (TDelegate<void___cdecl(unsigned_short),FDefaultDelegateUserPolicy> *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this);
  return;
}

// ~TDelegate<void___cdecl(unsigned_short,TWeakPtr<SWidget,1>,bool,bool),FDefaultDelegateUserPolicy> @ 14305e920

void __thiscall
TDelegate<void___cdecl(unsigned_short,TWeakPtr<SWidget,1>,bool,bool),FDefaultDelegateUserPolicy>::
~TDelegate<void___cdecl(unsigned_short,TWeakPtr<SWidget,1>,bool,bool),FDefaultDelegateUserPolicy>
          (TDelegate<void___cdecl(unsigned_short,TWeakPtr<SWidget,1>,bool,bool),FDefaultDelegateUserPolicy>
           *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this);
  return;
}

// ~TDelegate<void___cdecl(unsigned_short,enum_ETextCommit::Type),FDefaultDelegateUserPolicy> @ 14305e940

void __thiscall
TDelegate<void___cdecl(unsigned_short,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>::
~TDelegate<void___cdecl(unsigned_short,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
          (void *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(this);
  return;
}

// ~TDelegate<void___cdecl(EVisibility),FDefaultDelegateUserPolicy> @ 14305e960

void __thiscall
TDelegate<void___cdecl(EVisibility),FDefaultDelegateUserPolicy>::
~TDelegate<void___cdecl(EVisibility),FDefaultDelegateUserPolicy>
          (TDelegate<void___cdecl(EVisibility),FDefaultDelegateUserPolicy> *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this);
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector((FMRSWRecursiveAccessDetector *)this);
  return;
}

// ~TDelegate<void___cdecl(TSharedPtr<SDocumentsTest::FDocumentInfo,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy> @ 14305e990

void __thiscall
TDelegate<void___cdecl(TSharedPtr<SDocumentsTest::FDocumentInfo,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::
~TDelegate<void___cdecl(TSharedPtr<SDocumentsTest::FDocumentInfo,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
          (void *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(this);
  return;
}

// ~TDelegate<void___cdecl(TSharedPtr<FTextStyles::FFontFamily,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy> @ 14305e9b0

void __thiscall
TDelegate<void___cdecl(TSharedPtr<FTextStyles::FFontFamily,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::
~TDelegate<void___cdecl(TSharedPtr<FTextStyles::FFontFamily,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
          (void *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(this);
  return;
}

// ~TDelegate<void___cdecl(TSharedRef<SDocumentsTest::FDocumentInfo,1>),FDefaultDelegateUserPolicy> @ 14305e9d0

void __thiscall
TDelegate<void___cdecl(TSharedRef<SDocumentsTest::FDocumentInfo,1>),FDefaultDelegateUserPolicy>::
~TDelegate<void___cdecl(TSharedRef<SDocumentsTest::FDocumentInfo,1>),FDefaultDelegateUserPolicy>
          (TDelegate<void___cdecl(TSharedRef<SDocumentsTest::FDocumentInfo,1>),FDefaultDelegateUserPolicy>
           *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this);
  return;
}

// ~TDelegate<void___cdecl(TSharedRef<SDocumentsTest::FDocumentInfo,1>,TSharedPtr<ITableRow,1>_const_&),FDefaultDelegateUserPolicy> @ 14305e9f0

void __thiscall
TDelegate<void___cdecl(TSharedRef<SDocumentsTest::FDocumentInfo,1>,TSharedPtr<ITableRow,1>_const_&),FDefaultDelegateUserPolicy>
::
~TDelegate<void___cdecl(TSharedRef<SDocumentsTest::FDocumentInfo,1>,TSharedPtr<ITableRow,1>_const_&),FDefaultDelegateUserPolicy>
          (TDelegate<void___cdecl(TSharedRef<SDocumentsTest::FDocumentInfo,1>,TSharedPtr<ITableRow,1>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this);
  return;
}

// ~TDelegate<void___cdecl(TSharedRef<SDocumentsTest::FDocumentInfo,1>,TSharedRef<ITableRow,1>_const_&),FDefaultDelegateUserPolicy> @ 14305ea10

void __thiscall
TDelegate<void___cdecl(TSharedRef<SDocumentsTest::FDocumentInfo,1>,TSharedRef<ITableRow,1>_const_&),FDefaultDelegateUserPolicy>
::
~TDelegate<void___cdecl(TSharedRef<SDocumentsTest::FDocumentInfo,1>,TSharedRef<ITableRow,1>_const_&),FDefaultDelegateUserPolicy>
          (TDelegate<void___cdecl(TSharedRef<SDocumentsTest::FDocumentInfo,1>,TSharedRef<ITableRow,1>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this);
  return;
}

// ~TDelegate<bool___cdecl(TSharedRef<SDocumentsTest::FDocumentInfo,1>),FDefaultDelegateUserPolicy> @ 14305ea30

void __thiscall
TDelegate<bool___cdecl(TSharedRef<SDocumentsTest::FDocumentInfo,1>),FDefaultDelegateUserPolicy>::
~TDelegate<bool___cdecl(TSharedRef<SDocumentsTest::FDocumentInfo,1>),FDefaultDelegateUserPolicy>
          (TDelegate<bool___cdecl(TSharedRef<SDocumentsTest::FDocumentInfo,1>),FDefaultDelegateUserPolicy>
           *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this);
  return;
}

// ~TDelegate<bool___cdecl(enum_SNotificationItem::ECompletionState),FDefaultDelegateUserPolicy> @ 14305ea50

void __thiscall
TDelegate<bool___cdecl(enum_SNotificationItem::ECompletionState),FDefaultDelegateUserPolicy>::
~TDelegate<bool___cdecl(enum_SNotificationItem::ECompletionState),FDefaultDelegateUserPolicy>
          (void *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind(this);
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this);
  return;
}

// operator= @ 1430626e0

TDelegate<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy> * __thiscall
TDelegate<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>::operator=
          (TDelegate<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy> *this,
          TDelegate<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy> *param_1)

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

// operator= @ 1430627e0

TDelegate<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FTextStyles::FFontFamily,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
* __thiscall
TDelegate<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FTextStyles::FFontFamily,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::operator=(TDelegate<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FTextStyles::FFontFamily,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
            *this,TDelegate<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FTextStyles::FFontFamily,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
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

// operator= @ 1430628e0

TDelegate<TSharedRef<ITableRow,1>___cdecl(TSharedRef<SDocumentsTest::FDocumentInfo,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
* __thiscall
TDelegate<TSharedRef<ITableRow,1>___cdecl(TSharedRef<SDocumentsTest::FDocumentInfo,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::operator=(TDelegate<TSharedRef<ITableRow,1>___cdecl(TSharedRef<SDocumentsTest::FDocumentInfo,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
            *this,TDelegate<TSharedRef<ITableRow,1>___cdecl(TSharedRef<SDocumentsTest::FDocumentInfo,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
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
    ~TDelegate<TSharedRef<ITableRow,1>___cdecl(TSharedRef<SDocumentsTest::FDocumentInfo,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
              ((TDelegate<TSharedRef<ITableRow,1>___cdecl(TSharedRef<SDocumentsTest::FDocumentInfo,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
                *)&local_38);
  }
  return this;
}

// operator= @ 143062970

TDelegate<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy> *
__thiscall
TDelegate<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>::
operator=(TDelegate<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
          *this,TDelegate<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
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

// operator= @ 143062a70

TDelegate<int___cdecl(FOnPaintHandlerParams_const_&),FDefaultDelegateUserPolicy> * __thiscall
TDelegate<int___cdecl(FOnPaintHandlerParams_const_&),FDefaultDelegateUserPolicy>::operator=
          (TDelegate<int___cdecl(FOnPaintHandlerParams_const_&),FDefaultDelegateUserPolicy> *this,
          TDelegate<int___cdecl(FOnPaintHandlerParams_const_&),FDefaultDelegateUserPolicy> *param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
  return this;
}

// operator= @ 143062aa0

TDelegate<int___cdecl(FOnPaintHandlerParams_const_&),FDefaultDelegateUserPolicy> * __thiscall
TDelegate<int___cdecl(FOnPaintHandlerParams_const_&),FDefaultDelegateUserPolicy>::operator=
          (TDelegate<int___cdecl(FOnPaintHandlerParams_const_&),FDefaultDelegateUserPolicy> *this,
          TDelegate<int___cdecl(FOnPaintHandlerParams_const_&),FDefaultDelegateUserPolicy> *param_1)

{
  longlong *plVar1;
  TDelegate<int___cdecl(FOnPaintHandlerParams_const_&),FDefaultDelegateUserPolicy> local_38;
  FReadAccessScope local_20;
  
  if (param_1 != this) {
    TDelegate<int___cdecl(FOnPaintHandlerParams_const_&),FDefaultDelegateUserPolicy>(&local_38);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,&local_20);
    if ((*(int *)&param_1->field_0x10 != 0) &&
       (plVar1 = *(longlong **)&param_1->field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x50))(plVar1,&local_38);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_20);
    operator=(this,&local_38);
    ~TDelegate<int___cdecl(FOnPaintHandlerParams_const_&),FDefaultDelegateUserPolicy>(&local_38);
  }
  return this;
}

// operator= @ 143062b20

TDelegate<void___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
* __thiscall
TDelegate<void___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
::operator=(TDelegate<void___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
            *this,TDelegate<void___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
                  *param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
  return this;
}

// operator= @ 143062b50

TDelegate<void___cdecl(FLinearColor),FDefaultDelegateUserPolicy> * __thiscall
TDelegate<void___cdecl(FLinearColor),FDefaultDelegateUserPolicy>::operator=
          (TDelegate<void___cdecl(FLinearColor),FDefaultDelegateUserPolicy> *this,
          TDelegate<void___cdecl(FLinearColor),FDefaultDelegateUserPolicy> *param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
  return this;
}

// operator= @ 143062b70

TDelegate<void___cdecl(TSharedPtr<FTextStyles::FFontFamily,1>),FDefaultDelegateUserPolicy> *
__thiscall
TDelegate<void___cdecl(TSharedPtr<FTextStyles::FFontFamily,1>),FDefaultDelegateUserPolicy>::
operator=(TDelegate<void___cdecl(TSharedPtr<FTextStyles::FFontFamily,1>),FDefaultDelegateUserPolicy>
          *this,TDelegate<void___cdecl(TSharedPtr<FTextStyles::FFontFamily,1>),FDefaultDelegateUserPolicy>
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

// operator= @ 143062c70

TDelegate<void___cdecl(TSharedPtr<FTextStyles::FFontFamily,1>,ESelectInfo::Type),FDefaultDelegateUserPolicy>
* __thiscall
TDelegate<void___cdecl(TSharedPtr<FTextStyles::FFontFamily,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::operator=(void *this,
           TDelegate<void___cdecl(TSharedPtr<FTextStyles::FFontFamily,1>,ESelectInfo::Type),FDefaultDelegateUserPolicy>
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
    ~TDelegate<void___cdecl(TSharedPtr<FTextStyles::FFontFamily,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
              (&local_38);
  }
  return this;
}

// operator= @ 143062d00

TDelegate<void___cdecl(TSharedRef<SDocumentsTest::FDocumentInfo,1>),FDefaultDelegateUserPolicy> *
__thiscall
TDelegate<void___cdecl(TSharedRef<SDocumentsTest::FDocumentInfo,1>),FDefaultDelegateUserPolicy>::
operator=(TDelegate<void___cdecl(TSharedRef<SDocumentsTest::FDocumentInfo,1>),FDefaultDelegateUserPolicy>
          *this,TDelegate<void___cdecl(TSharedRef<SDocumentsTest::FDocumentInfo,1>),FDefaultDelegateUserPolicy>
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
    ~TDelegate<void___cdecl(TSharedRef<SDocumentsTest::FDocumentInfo,1>),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(TSharedRef<SDocumentsTest::FDocumentInfo,1>),FDefaultDelegateUserPolicy>
                *)&local_38);
  }
  return this;
}

// operator= @ 143062d90

TDelegate<void___cdecl(ECheckBoxState),FDefaultDelegateUserPolicy> * __thiscall
TDelegate<void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy>::operator=
          (void *this,TDelegate<void___cdecl(ECheckBoxState),FDefaultDelegateUserPolicy> *param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            (this,(TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
  return this;
}

// Execute @ 1430ba1e0

/* WARNING: Enum "Type": Some values do not have unique names */

TOptional<EItemDropZone> __thiscall
TDelegate<TOptional<enum_EItemDropZone>___cdecl(FDragDropEvent_const_&,enum_EItemDropZone,TSharedPtr<FTextStyles::FFontFamily,1>),FDefaultDelegateUserPolicy>
::Execute(void *this,FDragDropEvent *param_1,EItemDropZone param_2,
         TSharedPtr<FTextStyles::FFontFamily,1> *param_3)

{
  code *pcVar1;
  longlong *plVar2;
  undefined4 in_register_00000084;
  TSharedPtr<FTextStyles::FFontFamily,1> *in_stack_00000028;
  FFontFamily *local_38;
  TReferenceControllerBase<1> *local_30;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(this,&local_28);
  plVar2 = (longlong *)0x0;
  if (*(int *)((longlong)this + 0x10) != 0) {
    plVar2 = *(longlong **)((longlong)this + 8);
  }
  pcVar1 = *(code **)(*plVar2 + 0x60);
  local_38 = in_stack_00000028->Object;
  local_30 = (in_stack_00000028->SharedReferenceCount).ReferenceController;
  (in_stack_00000028->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  in_stack_00000028->Object = (FFontFamily *)0x0;
  (*pcVar1)(plVar2,param_1,CONCAT44(in_register_00000084,param_2),(ulonglong)param_3 & 0xffffffff,
            &local_38);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  TSharedPtr<FTextStyles::FFontFamily,1>::~TSharedPtr<FTextStyles::FFontFamily,1>(in_stack_00000028)
  ;
  return (TOptional<EItemDropZone>)param_1;
}

// Execute @ 1430ba290

/* WARNING: Enum "Type": Some values do not have unique names */

TOptional<EItemDropZone> __thiscall
TDelegate<TOptional<enum_EItemDropZone>___cdecl(FDragDropEvent_const_&,enum_EItemDropZone,TSharedRef<SDocumentsTest::FDocumentInfo,1>),FDefaultDelegateUserPolicy>
::Execute(void *this,FDragDropEvent *param_1,EItemDropZone param_2,
         TSharedRef<SDocumentsTest::FDocumentInfo,1> *param_3)

{
  code *pcVar1;
  longlong *plVar2;
  undefined4 in_register_00000084;
  TSharedRef<SDocumentsTest::FDocumentInfo,1> *in_stack_00000028;
  FDocumentInfo *local_38;
  TReferenceControllerBase<1> *local_30;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(this,&local_28);
  if (*(int *)((longlong)this + 0x10) == 0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    plVar2 = *(longlong **)((longlong)this + 8);
  }
  pcVar1 = *(code **)(*plVar2 + 0x60);
  local_38 = in_stack_00000028->Object;
  local_30 = (in_stack_00000028->SharedReferenceCount).ReferenceController;
  if (local_30 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_30->SharedReferenceCount = (atomic<int>)((int)local_30->SharedReferenceCount + 1);
    UNLOCK();
  }
  (*pcVar1)(plVar2,param_1,CONCAT44(in_register_00000084,param_2),(ulonglong)param_3 & 0xffffffff,
            &local_38);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  TSharedRef<SDocumentsTest::FDocumentInfo,1>::~TSharedRef<SDocumentsTest::FDocumentInfo,1>
            (in_stack_00000028);
  return (TOptional<EItemDropZone>)param_1;
}

// Execute @ 1430ba340

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
TDelegate<int___cdecl(FOnPaintHandlerParams_const_&),FDefaultDelegateUserPolicy>::Execute
          (TDelegate<int___cdecl(FOnPaintHandlerParams_const_&),FDefaultDelegateUserPolicy> *this,
          FOnPaintHandlerParams *param_1)

{
  int iVar1;
  longlong *plVar2;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,&local_28);
  if (*(int *)&this->field_0x10 == 0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    plVar2 = *(longlong **)&this->field_0x8;
  }
  iVar1 = (**(code **)(*plVar2 + 0x60))(plVar2,param_1);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return iVar1;
}

// Execute @ 1430ba390

bool __thiscall
TDelegate<bool___cdecl(TSharedPtr<FTextStyles::FFontFamily,1>),FDefaultDelegateUserPolicy>::Execute
          (TDelegate<bool___cdecl(TSharedPtr<FTextStyles::FFontFamily,1>),FDefaultDelegateUserPolicy>
           *this,TSharedPtr<FTextStyles::FFontFamily,1> *param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  longlong *plVar3;
  FFontFamily *local_38;
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
  param_1->Object = (FFontFamily *)0x0;
  uVar2 = (*pcVar1)(plVar3,&local_38);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  TSharedPtr<FTextStyles::FFontFamily,1>::~TSharedPtr<FTextStyles::FFontFamily,1>(param_1);
  return (bool)uVar2;
}

// Execute @ 1430ba410

bool __thiscall
TDelegate<bool___cdecl(TSharedRef<SDocumentsTest::FDocumentInfo,1>),FDefaultDelegateUserPolicy>::
Execute(TDelegate<bool___cdecl(TSharedRef<SDocumentsTest::FDocumentInfo,1>),FDefaultDelegateUserPolicy>
        *this,TSharedRef<SDocumentsTest::FDocumentInfo,1> *param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  longlong *plVar3;
  FDocumentInfo *local_38;
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
  TSharedRef<SDocumentsTest::FDocumentInfo,1>::~TSharedRef<SDocumentsTest::FDocumentInfo,1>(param_1)
  ;
  return (bool)uVar2;
}

// ExecuteIfBound @ 1430ba490

bool __thiscall
TDelegate<void___cdecl(TSharedPtr<FTextStyles::FFontFamily,1>),FDefaultDelegateUserPolicy>::
ExecuteIfBound(TDelegate<void___cdecl(TSharedPtr<FTextStyles::FFontFamily,1>),FDefaultDelegateUserPolicy>
               *this,TSharedPtr<FTextStyles::FFontFamily,1> *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  undefined1 uVar3;
  FFontFamily *local_38;
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
    param_1->Object = (FFontFamily *)0x0;
    uVar3 = (*pcVar2)(plVar1,&local_38);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    TSharedPtr<FTextStyles::FFontFamily,1>::~TSharedPtr<FTextStyles::FFontFamily,1>(param_1);
    return (bool)uVar3;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  TSharedPtr<FTextStyles::FFontFamily,1>::~TSharedPtr<FTextStyles::FFontFamily,1>(param_1);
  return false;
}

// ExecuteIfBound @ 1430ba530

bool __thiscall
TDelegate<void___cdecl(TSharedPtr<FTextStyles::FFontFamily,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::ExecuteIfBound(void *this,TSharedPtr<FTextStyles::FFontFamily,1> *param_1,Type param_2)

{
  longlong *plVar1;
  code *pcVar2;
  undefined1 uVar3;
  FFontFamily *local_38;
  TReferenceControllerBase<1> *local_30;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(this,&local_28);
  if ((*(int *)((longlong)this + 0x10) != 0) &&
     (plVar1 = *(longlong **)((longlong)this + 8), plVar1 != (longlong *)0x0)) {
    pcVar2 = *(code **)(*plVar1 + 0x68);
    local_38 = param_1->Object;
    local_30 = (param_1->SharedReferenceCount).ReferenceController;
    (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    param_1->Object = (FFontFamily *)0x0;
    uVar3 = (*pcVar2)(plVar1,&local_38,param_2);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    TSharedPtr<FTextStyles::FFontFamily,1>::~TSharedPtr<FTextStyles::FFontFamily,1>(param_1);
    return (bool)uVar3;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  TSharedPtr<FTextStyles::FFontFamily,1>::~TSharedPtr<FTextStyles::FFontFamily,1>(param_1);
  return false;
}

// ExecuteIfBound @ 1430ba5e0

bool __thiscall
TDelegate<void___cdecl(TSharedRef<SDocumentsTest::FDocumentInfo,1>),FDefaultDelegateUserPolicy>::
ExecuteIfBound(TDelegate<void___cdecl(TSharedRef<SDocumentsTest::FDocumentInfo,1>),FDefaultDelegateUserPolicy>
               *this,TSharedRef<SDocumentsTest::FDocumentInfo,1> *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  undefined1 uVar3;
  FDocumentInfo *local_38;
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
    TSharedRef<SDocumentsTest::FDocumentInfo,1>::~TSharedRef<SDocumentsTest::FDocumentInfo,1>
              (param_1);
    return (bool)uVar3;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  TSharedRef<SDocumentsTest::FDocumentInfo,1>::~TSharedRef<SDocumentsTest::FDocumentInfo,1>(param_1)
  ;
  return false;
}

