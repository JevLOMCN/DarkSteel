// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 17

// BindSP<SColorGradingPicker> @ 142f1cc90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
TDelegateRegistration<void___cdecl(FLinearColor_const_&),FDefaultDelegateUserPolicy>::
BindSP<SColorGradingPicker>
          (TDelegateRegistration<void___cdecl(FLinearColor_const_&),FDefaultDelegateUserPolicy>
           *this,SColorGradingPicker *param_1,pmf_e7fa2dbc *param_2)

{
  SWidget *pSVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 *puVar7;
  TSharedRef<SWidget,1> *pTVar8;
  ulong64 uVar9;
  TReferenceControllerBase<1> *pTVar10;
  uint uStackX_c;
  TSharedRef<SWidget,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_38);
  local_20 = &this->field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    uVar2 = *(undefined8 *)param_2;
    uVar3 = *(undefined8 *)&param_2->field_0x8;
    pTVar8 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->field_0x8,&local_48);
    pTVar10 = (pTVar8->SharedReferenceCount).ReferenceController;
    pSVar1 = pTVar8->Object;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFLinearColor___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSColorGradingPicker___00__A6AXAEBUFLinearColor___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = pSVar1;
    puVar7[4] = pTVar10;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->WeakReferenceCount = (atomic<int>)((int)pTVar10->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar6 = true;
    bVar5 = true;
    bVar4 = true;
    puVar7[5] = uVar2;
    puVar7[6] = uVar3;
  }
  if (bVar4) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return;
}

// BindSP<SColorGradingPicker> @ 142f1cdb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
TDelegateRegistration<void___cdecl(float,TWeakPtr<SWidget,1>,bool,bool),FDefaultDelegateUserPolicy>
::BindSP<SColorGradingPicker>
          (TDelegateRegistration<void___cdecl(float,TWeakPtr<SWidget,1>,bool,bool),FDefaultDelegateUserPolicy>
           *this,SColorGradingPicker *param_1,pmf_11ca8dda *param_2)

{
  SWidget *pSVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 *puVar7;
  TSharedRef<SWidget,1> *pTVar8;
  ulong64 uVar9;
  TReferenceControllerBase<1> *pTVar10;
  uint uStackX_c;
  TSharedRef<SWidget,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_38);
  local_20 = &this->field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    uVar2 = *(undefined8 *)param_2;
    uVar3 = *(undefined8 *)&param_2->field_0x8;
    pTVar8 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->field_0x8,&local_48);
    pTVar10 = (pTVar8->SharedReferenceCount).ReferenceController;
    pSVar1 = pTVar8->Object;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXMV__TWeakPtr_VSWidget___00___N1_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSColorGradingPicker___00__A6AXMV__TWeakPtr_VSWidget___00___N1_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = pSVar1;
    puVar7[4] = pTVar10;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->WeakReferenceCount = (atomic<int>)((int)pTVar10->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar6 = true;
    bVar5 = true;
    bVar4 = true;
    puVar7[5] = uVar2;
    puVar7[6] = uVar3;
  }
  if (bVar4) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return;
}

// BindSP<SColorPicker> @ 142f1ced0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
TDelegateRegistration<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::BindSP<SColorPicker>
          (TDelegateRegistration<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *this,
          SColorPicker *param_1,pmf_e06ad559 *param_2)

{
  SColorPicker *pSVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined8 *puVar5;
  TSharedRef<SWidget_const_,1> *pTVar6;
  ulong64 uVar7;
  TReferenceControllerBase<1> *pTVar8;
  uint uStackX_c;
  TSharedRef<SColorPicker_const_,1> local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  TSharedRef<SWidget_const_,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  bVar4 = false;
  bVar3 = false;
  bVar2 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_38);
  local_20 = &this->field_0x8;
  puVar5 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar5 == (undefined8 *)0x0) {
    pTVar8 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    local_58 = *(undefined8 *)param_2;
    uStack_50 = *(undefined8 *)&param_2->field_0x8;
    pTVar6 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_48);
    pSVar1 = (SColorPicker *)pTVar6->Object;
    pTVar8 = (pTVar6->SharedReferenceCount).ReferenceController;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
        UNLOCK();
      }
    }
    *puVar5 = &
              ___7__TCommonDelegateInstanceState___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    local_68.Object = pSVar1;
    local_68.SharedReferenceCount.ReferenceController = pTVar8;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar7;
    *puVar5 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSColorPicker___00__A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar5[3] = pSVar1;
    puVar5[4] = pTVar8;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar4 = true;
    bVar3 = true;
    bVar2 = true;
    puVar5[5] = local_58;
    puVar5[6] = uStack_50;
  }
  if (bVar2) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  if (bVar3) {
    TSharedRef<SColorPicker_const_,1>::~TSharedRef<SColorPicker_const_,1>(&local_68);
  }
  if (bVar4) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return;
}

// BindSP<SColorPicker> @ 142f1d010

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
TDelegateRegistration<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>::BindSP<SColorPicker>
          (TDelegateRegistration<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy> *this,
          SColorPicker *param_1,pmf_b5063530 *param_2)

{
  SColorPicker *pSVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined8 *puVar5;
  TSharedRef<SWidget_const_,1> *pTVar6;
  ulong64 uVar7;
  TReferenceControllerBase<1> *pTVar8;
  uint uStackX_c;
  TSharedRef<SColorPicker_const_,1> local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  TSharedRef<SWidget_const_,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  bVar4 = false;
  bVar3 = false;
  bVar2 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_38);
  local_20 = &this->field_0x8;
  puVar5 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar5 == (undefined8 *)0x0) {
    pTVar8 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    local_58 = *(undefined8 *)param_2;
    uStack_50 = *(undefined8 *)&param_2->field_0x8;
    pTVar6 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_48);
    pSVar1 = (SColorPicker *)pTVar6->Object;
    pTVar8 = (pTVar6->SharedReferenceCount).ReferenceController;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
        UNLOCK();
      }
    }
    *puVar5 = &
              ___7__TCommonDelegateInstanceState___A6A_AUFLinearColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    local_68.Object = pSVar1;
    local_68.SharedReferenceCount.ReferenceController = pTVar8;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar7;
    *puVar5 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSColorPicker___00__A6A_AUFLinearColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar5[3] = pSVar1;
    puVar5[4] = pTVar8;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar4 = true;
    bVar3 = true;
    bVar2 = true;
    puVar5[5] = local_58;
    puVar5[6] = uStack_50;
  }
  if (bVar2) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  if (bVar3) {
    TSharedRef<SColorPicker_const_,1>::~TSharedRef<SColorPicker_const_,1>(&local_68);
  }
  if (bVar4) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return;
}

// BindSP<SColorPicker> @ 142f1d150

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
TDelegateRegistration<void___cdecl(FLinearColor),FDefaultDelegateUserPolicy>::BindSP<SColorPicker>
          (TDelegateRegistration<void___cdecl(FLinearColor),FDefaultDelegateUserPolicy> *this,
          SColorPicker *param_1,pmf_23549314 *param_2)

{
  SColorPicker *pSVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined8 *puVar5;
  TSharedRef<SWidget,1> *pTVar6;
  ulong64 uVar7;
  TReferenceControllerBase<1> *pTVar8;
  uint uStackX_c;
  TSharedRef<SColorPicker,1> local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  TSharedRef<SWidget,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  bVar4 = false;
  bVar3 = false;
  bVar2 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_38);
  local_20 = &this->field_0x8;
  puVar5 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar5 == (undefined8 *)0x0) {
    pTVar8 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    local_58 = *(undefined8 *)param_2;
    uStack_50 = *(undefined8 *)&param_2->field_0x8;
    pTVar6 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_48);
    pSVar1 = (SColorPicker *)pTVar6->Object;
    pTVar8 = (pTVar6->SharedReferenceCount).ReferenceController;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
        UNLOCK();
      }
    }
    *puVar5 = &
              ___7__TCommonDelegateInstanceState___A6AXUFLinearColor___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    local_68.Object = pSVar1;
    local_68.SharedReferenceCount.ReferenceController = pTVar8;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar7;
    *puVar5 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSColorPicker___00__A6AXUFLinearColor___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar5[3] = pSVar1;
    puVar5[4] = pTVar8;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar4 = true;
    bVar3 = true;
    bVar2 = true;
    puVar5[5] = local_58;
    puVar5[6] = uStack_50;
  }
  if (bVar2) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  if (bVar3) {
    TSharedRef<SColorPicker,1>::~TSharedRef<SColorPicker,1>(&local_68);
  }
  if (bVar4) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return;
}

// BindSP<SColorPicker> @ 142f1d290

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
TDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::BindSP<SColorPicker>
          (TDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *this,
          SColorPicker *param_1,pmf_97d28a9e *param_2)

{
  SColorPicker *pSVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined8 *puVar5;
  TSharedRef<SWidget,1> *pTVar6;
  ulong64 uVar7;
  TReferenceControllerBase<1> *pTVar8;
  uint uStackX_c;
  TSharedRef<SColorPicker,1> local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  TSharedRef<SWidget,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  bVar4 = false;
  bVar3 = false;
  bVar2 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_38);
  local_20 = &this->field_0x8;
  puVar5 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar5 == (undefined8 *)0x0) {
    pTVar8 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    local_58 = *(undefined8 *)param_2;
    uStack_50 = *(undefined8 *)&param_2->field_0x8;
    pTVar6 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_48);
    pSVar1 = (SColorPicker *)pTVar6->Object;
    pTVar8 = (pTVar6->SharedReferenceCount).ReferenceController;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
        UNLOCK();
      }
    }
    *puVar5 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    local_68.Object = pSVar1;
    local_68.SharedReferenceCount.ReferenceController = pTVar8;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar7;
    *puVar5 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSColorPicker___00__A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar5[3] = pSVar1;
    puVar5[4] = pTVar8;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar4 = true;
    bVar3 = true;
    bVar2 = true;
    puVar5[5] = local_58;
    puVar5[6] = uStack_50;
  }
  if (bVar2) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  if (bVar3) {
    TSharedRef<SColorPicker,1>::~TSharedRef<SColorPicker,1>(&local_68);
  }
  if (bVar4) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return;
}

// BindSP<SColorPicker,EVisibility_&> @ 142f1d3d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
TDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
BindSP<SColorPicker,EVisibility_&>
          (TDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *this,
          SColorPicker *param_1,pmf_49ad074d *param_2,EVisibility *param_3)

{
  SColorPicker *pSVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined8 *puVar5;
  TSharedRef<SWidget,1> *pTVar6;
  ulong64 uVar7;
  TReferenceControllerBase<1> *pTVar8;
  uint uStackX_c;
  TSharedRef<SColorPicker,1> local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  TSharedRef<SWidget,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  bVar4 = false;
  bVar3 = false;
  bVar2 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_38);
  local_20 = &this->field_0x8;
  puVar5 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar5 == (undefined8 *)0x0) {
    pTVar8 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    local_58 = *(undefined8 *)param_2;
    uStack_50 = *(undefined8 *)&param_2->field_0x8;
    pTVar6 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_48);
    pSVar1 = (SColorPicker *)pTVar6->Object;
    pTVar8 = (pTVar6->SharedReferenceCount).ReferenceController;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
        UNLOCK();
      }
    }
    *puVar5 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__UEVisibility____6B_
    ;
    *(uchar *)(puVar5 + 1) = (param_3->Value).Value;
    local_68.Object = pSVar1;
    local_68.SharedReferenceCount.ReferenceController = pTVar8;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar7;
    *puVar5 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSColorPicker___00__A6AXXZUFDefaultDelegateUserPolicy__UEVisibility____6B_
    ;
    puVar5[3] = pSVar1;
    puVar5[4] = pTVar8;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar4 = true;
    bVar3 = true;
    bVar2 = true;
    puVar5[5] = local_58;
    puVar5[6] = uStack_50;
  }
  if (bVar2) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  if (bVar3) {
    TSharedRef<SColorPicker,1>::~TSharedRef<SColorPicker,1>(&local_68);
  }
  if (bVar4) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return;
}

// BindSP<SColorPicker,enum_EColorPickerModes_&> @ 142f1d530

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
TDelegateRegistration<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
BindSP<SColorPicker,enum_EColorPickerModes_&>
          (TDelegateRegistration<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *this,
          SColorPicker *param_1,pmf_7adfccb1 *param_2,EColorPickerModes *param_3)

{
  SColorPicker *pSVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined8 *puVar5;
  TSharedRef<SWidget_const_,1> *pTVar6;
  ulong64 uVar7;
  TReferenceControllerBase<1> *pTVar8;
  uint uStackX_c;
  TSharedRef<SColorPicker_const_,1> local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  TSharedRef<SWidget_const_,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  bVar4 = false;
  bVar3 = false;
  bVar2 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_38);
  local_20 = &this->field_0x8;
  puVar5 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar5 == (undefined8 *)0x0) {
    pTVar8 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    local_58 = *(undefined8 *)param_2;
    uStack_50 = *(undefined8 *)&param_2->field_0x8;
    pTVar6 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_48);
    pSVar1 = (SColorPicker *)pTVar6->Object;
    pTVar8 = (pTVar6->SharedReferenceCount).ReferenceController;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
        UNLOCK();
      }
    }
    *puVar5 = &
              ___7__TCommonDelegateInstanceState___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy__W4EColorPickerModes____6B_
    ;
    *(EColorPickerModes *)(puVar5 + 1) = *param_3;
    local_68.Object = pSVar1;
    local_68.SharedReferenceCount.ReferenceController = pTVar8;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar7;
    *puVar5 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSColorPicker___00__A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy__W4EColorPickerModes____6B_
    ;
    puVar5[3] = pSVar1;
    puVar5[4] = pTVar8;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar4 = true;
    bVar3 = true;
    bVar2 = true;
    puVar5[5] = local_58;
    puVar5[6] = uStack_50;
  }
  if (bVar2) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  if (bVar3) {
    TSharedRef<SColorPicker_const_,1>::~TSharedRef<SColorPicker_const_,1>(&local_68);
  }
  if (bVar4) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return;
}

// BindSP<STableViewTesting> @ 142f1d680

void __thiscall
TDelegateRegistration<TOptional<enum_EItemDropZone>___cdecl(FDragDropEvent_const_&,enum_EItemDropZone,TSharedPtr<FTestData,1>),FDefaultDelegateUserPolicy>
::BindSP<STableViewTesting>(void *this,STableViewTesting *param_1,pmf_8cb97abd *param_2)

{
  SWidget *pSVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 *puVar7;
  TSharedRef<SWidget,1> *pTVar8;
  ulong64 uVar9;
  TReferenceControllerBase<1> *pTVar10;
  uint uStackX_c;
  TSharedRef<SWidget,1> local_48;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (this,(FWriteAccessScope *)&local_38);
  local_20 = (FDelegateAllocation *)((longlong)this + 8);
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,local_20);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    uVar2 = *(undefined8 *)param_2;
    uVar3 = *(undefined8 *)&param_2->field_0x8;
    pTVar8 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_48);
    pTVar10 = (pTVar8->SharedReferenceCount).ReferenceController;
    pSVar1 = pTVar8->Object;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6A_AU__TOptional_W4EItemDropZone____AEBVFDragDropEvent__W4EItemDropZone__V__TSharedPtr_VFTestData___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSTableViewTesting___00__A6A_AU__TOptional_W4EItemDropZone____AEBVFDragDropEvent__W4EItemDropZone__V__TSharedPtr_VFTestData___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = pSVar1;
    puVar7[4] = pTVar10;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->WeakReferenceCount = (atomic<int>)((int)pTVar10->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar6 = true;
    bVar5 = true;
    bVar4 = true;
    puVar7[5] = uVar2;
    puVar7[6] = uVar3;
  }
  if (bVar4) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return;
}

// BindSP<STableViewTesting> @ 142f1d7a0

void __thiscall
TDelegateRegistration<TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>::
BindSP<STableViewTesting>
          (TDelegateRegistration<TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
           *this,STableViewTesting *param_1,pmf_a11d68a9 *param_2)

{
  SWidget *pSVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 *puVar7;
  TSharedRef<SWidget,1> *pTVar8;
  ulong64 uVar9;
  TReferenceControllerBase<1> *pTVar10;
  uint uStackX_c;
  TSharedRef<SWidget,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_38);
  local_20 = &this->field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    uVar2 = *(undefined8 *)param_2;
    uVar3 = *(undefined8 *)&param_2->field_0x8;
    pTVar8 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_48);
    pTVar10 = (pTVar8->SharedReferenceCount).ReferenceController;
    pSVar1 = pTVar8->Object;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedPtr_VSWidget___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSTableViewTesting___00__A6A_AV__TSharedPtr_VSWidget___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = pSVar1;
    puVar7[4] = pTVar10;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->WeakReferenceCount = (atomic<int>)((int)pTVar10->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar6 = true;
    bVar5 = true;
    bVar4 = true;
    puVar7[5] = uVar2;
    puVar7[6] = uVar3;
  }
  if (bVar4) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return;
}

// BindSP<STableViewTesting> @ 142f1d8c0

void __thiscall
TDelegateRegistration<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FTestData,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::BindSP<STableViewTesting>
          (TDelegateRegistration<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FTestData,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
           *this,STableViewTesting *param_1,pmf_35d762a2 *param_2)

{
  SWidget *pSVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 *puVar7;
  TSharedRef<SWidget,1> *pTVar8;
  ulong64 uVar9;
  TReferenceControllerBase<1> *pTVar10;
  uint uStackX_c;
  TSharedRef<SWidget,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_38);
  local_20 = &this->field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    uVar2 = *(undefined8 *)param_2;
    uVar3 = *(undefined8 *)&param_2->field_0x8;
    pTVar8 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_48);
    pTVar10 = (pTVar8->SharedReferenceCount).ReferenceController;
    pSVar1 = pTVar8->Object;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VITableRow___00__V__TSharedPtr_VFTestData___00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSTableViewTesting___00__A6A_AV__TSharedRef_VITableRow___00__V__TSharedPtr_VFTestData___00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = pSVar1;
    puVar7[4] = pTVar10;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->WeakReferenceCount = (atomic<int>)((int)pTVar10->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar6 = true;
    bVar5 = true;
    bVar4 = true;
    puVar7[5] = uVar2;
    puVar7[6] = uVar3;
  }
  if (bVar4) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return;
}

// BindSP<STableViewTesting> @ 142f1d9e0

void __thiscall
TDelegateRegistration<FReply___cdecl(FDragDropEvent_const_&,enum_EItemDropZone,TSharedPtr<FTestData,1>),FDefaultDelegateUserPolicy>
::BindSP<STableViewTesting>(void *this,STableViewTesting *param_1,pmf_4302e448 *param_2)

{
  SWidget *pSVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 *puVar7;
  TSharedRef<SWidget,1> *pTVar8;
  ulong64 uVar9;
  TReferenceControllerBase<1> *pTVar10;
  uint uStackX_c;
  TSharedRef<SWidget,1> local_48;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (this,(FWriteAccessScope *)&local_38);
  local_20 = (FDelegateAllocation *)((longlong)this + 8);
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,local_20);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    uVar2 = *(undefined8 *)param_2;
    uVar3 = *(undefined8 *)&param_2->field_0x8;
    pTVar8 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_48);
    pTVar10 = (pTVar8->SharedReferenceCount).ReferenceController;
    pSVar1 = pTVar8->Object;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__AEBVFDragDropEvent__W4EItemDropZone__V__TSharedPtr_VFTestData___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSTableViewTesting___00__A6A_AVFReply__AEBVFDragDropEvent__W4EItemDropZone__V__TSharedPtr_VFTestData___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = pSVar1;
    puVar7[4] = pTVar10;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->WeakReferenceCount = (atomic<int>)((int)pTVar10->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar6 = true;
    bVar5 = true;
    bVar4 = true;
    puVar7[5] = uVar2;
    puVar7[6] = uVar3;
  }
  if (bVar4) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return;
}

// BindSP<STableViewTesting,TWeakPtr<FTestData,1>_&> @ 142f1db00

void __thiscall
TDelegateRegistration<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
::BindSP<STableViewTesting,TWeakPtr<FTestData,1>_&>
          (TDelegateRegistration<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
           *this,STableViewTesting *param_1,pmf_d7bd7d09 *param_2,TWeakPtr<FTestData,1> *param_3)

{
  SWidget *pSVar1;
  TReferenceControllerBase<1> *pTVar2;
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
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_38);
  local_20 = &this->field_0x8;
  puVar8 = UE::Core::Private::DelegateAllocate(0x40,(FDelegateAllocation *)local_20);
  if (puVar8 == (undefined8 *)0x0) {
    pTVar11 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    uVar3 = *(undefined8 *)param_2;
    uVar4 = *(undefined8 *)&param_2->field_0x8;
    pTVar9 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_48);
    pTVar11 = (pTVar9->SharedReferenceCount).ReferenceController;
    pSVar1 = pTVar9->Object;
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar8 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__AEBUFGeometry__AEBUFPointerEvent___ZUFDefaultDelegateUserPolicy__V__TWeakPtr_VFTestData___00____6B_
    ;
    puVar8[1] = param_3->Object;
    pTVar2 = (param_3->WeakReferenceCount).ReferenceController;
    puVar8[2] = pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->WeakReferenceCount = (atomic<int>)((int)pTVar2->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar8[3] = uVar10;
    *puVar8 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSTableViewTesting___00__A6A_AVFReply__AEBUFGeometry__AEBUFPointerEvent___ZUFDefaultDelegateUserPolicy__V__TWeakPtr_VFTestData___00____6B_
    ;
    puVar8[4] = pSVar1;
    puVar8[5] = pTVar11;
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar11->WeakReferenceCount = (atomic<int>)((int)pTVar11->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar7 = true;
    bVar6 = true;
    bVar5 = true;
    puVar8[6] = uVar3;
    puVar8[7] = uVar4;
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
  return;
}

// BindSP<SWidgetGallery> @ 142f1dc50

void __thiscall
TDelegateRegistration<void___cdecl(TSharedPtr<FString,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::BindSP<SWidgetGallery>(void *this,SWidgetGallery *param_1,pmf_43f27824 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined8 *puVar6;
  TSharedRef<SWidget,1> *pTVar7;
  ulong64 uVar8;
  TSharedRef<SWidgetGallery,1> local_68;
  TSharedPtr<SWidgetGallery,1> local_58;
  TSharedRef<SWidget,1> local_48;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (this,(FWriteAccessScope *)&local_38);
  local_20 = (FDelegateAllocation *)((longlong)this + 8);
  puVar6 = UE::Core::Private::DelegateAllocate(0x38,local_20);
  if (puVar6 != (undefined8 *)0x0) {
    uVar1 = *(undefined8 *)param_2;
    uVar2 = *(undefined8 *)&param_2->field_0x8;
    pTVar7 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_48);
    local_68.Object = (SWidgetGallery *)pTVar7->Object;
    local_68.SharedReferenceCount.ReferenceController =
         (pTVar7->SharedReferenceCount).ReferenceController;
    if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VFString___00__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    local_58.Object = local_68.Object;
    local_58.SharedReferenceCount.ReferenceController =
         local_68.SharedReferenceCount.ReferenceController;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar8;
    *puVar6 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSWidgetGallery___00__A6AXV__TSharedPtr_VFString___00__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[3] = local_58.Object;
    puVar6[4] = local_58.SharedReferenceCount.ReferenceController;
    if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_58.SharedReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_58.SharedReferenceCount.ReferenceController)->WeakReferenceCount + 1);
      UNLOCK();
    }
    puVar6[5] = uVar1;
    puVar6[6] = uVar2;
    bVar5 = true;
    bVar4 = true;
    bVar3 = true;
  }
  if (bVar3) {
    TSharedPtr<SWidgetGallery,1>::~TSharedPtr<SWidgetGallery,1>(&local_58);
  }
  if (bVar4) {
    TSharedRef<SWidgetGallery,1>::~TSharedRef<SWidgetGallery,1>(&local_68);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return;
}

// BindSP<SThemeColorBlocksBar> @ 143017ee0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::BindSP<SThemeColorBlocksBar>
          (TDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *this,
          SThemeColorBlocksBar *param_1,pmf_1d766ebc *param_2)

{
  SWidget *pSVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 *puVar7;
  TSharedRef<SWidget,1> *pTVar8;
  ulong64 uVar9;
  TReferenceControllerBase<1> *pTVar10;
  uint uStackX_c;
  TSharedRef<SWidget,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_38);
  local_20 = &this->field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    uVar2 = *(undefined8 *)param_2;
    uVar3 = *(undefined8 *)&param_2->field_0x8;
    pTVar8 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_48);
    pTVar10 = (pTVar8->SharedReferenceCount).ReferenceController;
    pSVar1 = pTVar8->Object;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar7 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSThemeColorBlocksBar___00__A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = pSVar1;
    puVar7[4] = pTVar10;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->WeakReferenceCount = (atomic<int>)((int)pTVar10->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar6 = true;
    bVar5 = true;
    bVar4 = true;
    puVar7[5] = uVar2;
    puVar7[6] = uVar3;
  }
  if (bVar4) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return;
}

// BindSP<STextEditTest> @ 143042e30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TDelegateRegistration<void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>::BindSP<STextEditTest>
          (TDelegateRegistration<void___cdecl(FText_const_&),FDefaultDelegateUserPolicy> *this,
          STextEditTest *param_1,pmf_8e34e566 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined8 *puVar6;
  TSharedRef<SWidget,1> *pTVar7;
  ulong64 uVar8;
  TSharedRef<STextEditTest,1> local_68;
  TSharedPtr<STextEditTest,1> local_58;
  TSharedRef<SWidget,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_38);
  local_20 = &this->field_0x8;
  puVar6 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar6 != (undefined8 *)0x0) {
    uVar1 = *(undefined8 *)param_2;
    uVar2 = *(undefined8 *)&param_2->field_0x8;
    pTVar7 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_48);
    local_68.Object = (STextEditTest *)pTVar7->Object;
    local_68.SharedReferenceCount.ReferenceController =
         (pTVar7->SharedReferenceCount).ReferenceController;
    if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVFText___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    local_58.Object = local_68.Object;
    local_58.SharedReferenceCount.ReferenceController =
         local_68.SharedReferenceCount.ReferenceController;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar8;
    *puVar6 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSTextEditTest___00__A6AXAEBVFText___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[3] = local_58.Object;
    puVar6[4] = local_58.SharedReferenceCount.ReferenceController;
    if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_58.SharedReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_58.SharedReferenceCount.ReferenceController)->WeakReferenceCount + 1);
      UNLOCK();
    }
    puVar6[5] = uVar1;
    puVar6[6] = uVar2;
    bVar5 = true;
    bVar4 = true;
    bVar3 = true;
  }
  if (bVar3) {
    TSharedPtr<STextEditTest,1>::~TSharedPtr<STextEditTest,1>(&local_58);
  }
  if (bVar4) {
    TSharedRef<STextEditTest,1>::~TSharedRef<STextEditTest,1>(&local_68);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return;
}

// BindSP<STextEditTest> @ 143042f90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TDelegateRegistration<void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
::BindSP<STextEditTest>(void *this,STextEditTest *param_1,pmf_a2378bc8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined8 *puVar6;
  TSharedRef<SWidget,1> *pTVar7;
  ulong64 uVar8;
  TSharedRef<STextEditTest,1> local_68;
  TSharedPtr<STextEditTest,1> local_58;
  TSharedRef<SWidget,1> local_48;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (this,(FWriteAccessScope *)&local_38);
  local_20 = (FDelegateAllocation *)((longlong)this + 8);
  puVar6 = UE::Core::Private::DelegateAllocate(0x38,local_20);
  if (puVar6 != (undefined8 *)0x0) {
    uVar1 = *(undefined8 *)param_2;
    uVar2 = *(undefined8 *)&param_2->field_0x8;
    pTVar7 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_48);
    local_68.Object = (STextEditTest *)pTVar7->Object;
    local_68.SharedReferenceCount.ReferenceController =
         (pTVar7->SharedReferenceCount).ReferenceController;
    if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVFText__W4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    local_58.Object = local_68.Object;
    local_58.SharedReferenceCount.ReferenceController =
         local_68.SharedReferenceCount.ReferenceController;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar8;
    *puVar6 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSTextEditTest___00__A6AXAEBVFText__W4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[3] = local_58.Object;
    puVar6[4] = local_58.SharedReferenceCount.ReferenceController;
    if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_58.SharedReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_58.SharedReferenceCount.ReferenceController)->WeakReferenceCount + 1);
      UNLOCK();
    }
    puVar6[5] = uVar1;
    puVar6[6] = uVar2;
    bVar5 = true;
    bVar4 = true;
    bVar3 = true;
  }
  if (bVar3) {
    TSharedPtr<STextEditTest,1>::~TSharedPtr<STextEditTest,1>(&local_58);
  }
  if (bVar4) {
    TSharedRef<STextEditTest,1>::~TSharedRef<STextEditTest,1>(&local_68);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return;
}

