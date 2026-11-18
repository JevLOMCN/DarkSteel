// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 481

// AlphaDisplayMode<SColorPicker_const_> @ 142f1bfb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FArguments * __thiscall
SColorBlock::FArguments::AlphaDisplayMode<SColorPicker_const_>
          (FArguments *this,TSharedRef<SColorPicker_const_,1> *param_1,pmf_28d2cf80 *param_2)

{
  SColorPicker *pSVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  FSharedReferencer<1> FVar4;
  bool bVar5;
  uint uStackX_c;
  TSharedRef<SColorPicker_const_,1> local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  local_58.Object = param_1->Object;
  bVar5 = false;
  local_48 = *(undefined8 *)param_2;
  uStack_40 = *(undefined8 *)&param_2->field_0x8;
  local_58.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->_AlphaDisplayMode).bIsSet = true;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &(this->_AlphaDisplayMode).Getter,(FWriteAccessScope *)&local_38);
  local_20 = &(this->_AlphaDisplayMode).Getter.field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  FVar4.ReferenceController = local_58.SharedReferenceCount.ReferenceController;
  pSVar1 = local_58.Object;
  if (puVar2 == (undefined8 *)0x0) {
    FVar4.ReferenceController = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AW4EColorBlockAlphaDisplayMode__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSColorPicker___00__A6A_AW4EColorBlockAlphaDisplayMode__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = pSVar1;
    puVar2[4] = FVar4.ReferenceController;
    if (FVar4.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar4.ReferenceController)->WeakReferenceCount =
           (atomic<int>)((int)(FVar4.ReferenceController)->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar5 = true;
    puVar2[5] = local_48;
    puVar2[6] = uStack_40;
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar4.ReferenceController);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TSharedRef<SColorPicker_const_,1>::~TSharedRef<SColorPicker_const_,1>(&local_58);
  TSharedRef<SColorPicker_const_,1>::~TSharedRef<SColorPicker_const_,1>(param_1);
  return this;
}

// Color<SColorPicker_const_> @ 142f1df80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FArguments * __thiscall
SColorBlock::FArguments::Color<SColorPicker_const_>
          (FArguments *this,SColorPicker *param_1,pmf_b5063530 *param_2)

{
  pmf_b5063530 local_18;
  
  local_18._0_8_ = *(undefined8 *)param_2;
  local_18._8_8_ = *(undefined8 *)&param_2->field_0x8;
  (this->_Color).bIsSet = true;
  TDelegateRegistration<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>::BindSP<SColorPicker>
            ((TDelegateRegistration<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy> *)
             &(this->_Color).Getter,param_1,&local_18);
  return this;
}

// GradientColors<SColorPicker_const_,enum_EColorPickerChannels> @ 142f213a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FArguments * __thiscall
SColorSlider::FArguments::GradientColors<SColorPicker_const_,enum_EColorPickerChannels>
          (FArguments *this,SColorPicker *param_1,pmf_df3a6d9e *param_2,EColorPickerChannels param_3
          )

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
  
  local_58 = *(undefined8 *)param_2;
  uStack_50 = *(undefined8 *)&param_2->field_0x8;
  (this->_GradientColors).bIsSet = true;
  bVar4 = false;
  bVar3 = false;
  bVar2 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &(this->_GradientColors).Getter,(FWriteAccessScope *)&local_38);
  local_20 = &(this->_GradientColors).Getter.field_0x8;
  puVar5 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar5 == (undefined8 *)0x0) {
    pTVar8 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
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
              ___7__TCommonDelegateInstanceState___A6A_AV__TArray_UFLinearColor__V__TSizedDefaultAllocator__0CA_____XZUFDefaultDelegateUserPolicy__W4EColorPickerChannels____6B_
    ;
    *(EColorPickerChannels *)(puVar5 + 1) = param_3;
    local_68.Object = pSVar1;
    local_68.SharedReferenceCount.ReferenceController = pTVar8;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar7;
    *puVar5 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSColorPicker___00__A6A_AV__TArray_UFLinearColor__V__TSizedDefaultAllocator__0CA_____XZUFDefaultDelegateUserPolicy__W4EColorPickerChannels____6B_
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
  return this;
}

// Image<SColorPicker> @ 142f21500

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FArguments * __thiscall
SImage::FArguments::Image<SColorPicker>
          (FArguments *this,SColorPicker *param_1,pmf_beeeae93 *param_2)

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
  
  local_58 = *(undefined8 *)param_2;
  uStack_50 = *(undefined8 *)&param_2->field_0x8;
  (this->_Image).bIsSet = true;
  bVar4 = false;
  bVar3 = false;
  bVar2 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(this->_Image).Getter,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->_Image).Getter.field_0x8;
  puVar5 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar5 == (undefined8 *)0x0) {
    pTVar8 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
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
              ___7__TCommonDelegateInstanceState___A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    local_68.Object = pSVar1;
    local_68.SharedReferenceCount.ReferenceController = pTVar8;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar7;
    *puVar5 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSColorPicker___00__A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
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
  return this;
}

// IsChecked<SColorPicker> @ 142f21650

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FArguments * __thiscall
SCheckBox::FArguments::IsChecked<SColorPicker>
          (FArguments *this,SColorPicker *param_1,pmf_56cdf8a7 *param_2)

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
  
  local_58 = *(undefined8 *)param_2;
  uStack_50 = *(undefined8 *)&param_2->field_0x8;
  (this->_IsChecked).bIsSet = true;
  bVar4 = false;
  bVar3 = false;
  bVar2 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(this->_IsChecked).Getter,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->_IsChecked).Getter.field_0x8;
  puVar5 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar5 == (undefined8 *)0x0) {
    pTVar8 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
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
              ___7__TCommonDelegateInstanceState___A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    local_68.Object = pSVar1;
    local_68.SharedReferenceCount.ReferenceController = pTVar8;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar7;
    *puVar5 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSColorPicker___00__A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy____V__6B_
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
  return this;
}

// IsChecked<STableViewTesting> @ 142f217a0

FArguments * __thiscall
SCheckBox::FArguments::IsChecked<STableViewTesting>
          (FArguments *this,STableViewTesting *param_1,pmf_acd209a3 *param_2)

{
  SWidget *pSVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 *puVar7;
  TSharedRef<SWidget_const_,1> *pTVar8;
  ulong64 uVar9;
  TReferenceControllerBase<1> *pTVar10;
  uint uStackX_c;
  TSharedRef<SWidget_const_,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  (this->_IsChecked).bIsSet = true;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(this->_IsChecked).Getter,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->_IsChecked).Getter.field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
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
              ___7__TCommonDelegateInstanceState___A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSTableViewTesting___00__A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy____V__6B_
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
  return this;
}

// IsChecked<SWidgetGallery> @ 142f218e0

FArguments * __thiscall
SCheckBox::FArguments::IsChecked<SWidgetGallery>
          (FArguments *this,SWidgetGallery *param_1,pmf_e6102ce4 *param_2)

{
  SWidget *pSVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 *puVar7;
  TSharedRef<SWidget_const_,1> *pTVar8;
  ulong64 uVar9;
  TReferenceControllerBase<1> *pTVar10;
  uint uStackX_c;
  TSharedRef<SWidget_const_,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  (this->_IsChecked).bIsSet = true;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(this->_IsChecked).Getter,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->_IsChecked).Getter.field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
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
              ___7__TCommonDelegateInstanceState___A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSWidgetGallery___00__A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy____V__6B_
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
  return this;
}

// IsChecked<SWidgetGallery,bool_*> @ 142f21a20

FArguments * __thiscall
SCheckBox::FArguments::IsChecked<SWidgetGallery,bool_*>
          (FArguments *this,SWidgetGallery *param_1,pmf_e890cd22 *param_2,bool *param_3)

{
  SWidget *pSVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 *puVar7;
  TSharedRef<SWidget_const_,1> *pTVar8;
  ulong64 uVar9;
  TReferenceControllerBase<1> *pTVar10;
  uint uStackX_c;
  TSharedRef<SWidget_const_,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  (this->_IsChecked).bIsSet = true;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(this->_IsChecked).Getter,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->_IsChecked).Getter.field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
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
              ___7__TCommonDelegateInstanceState___A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy__PEA_N__6B_
    ;
    puVar7[1] = param_3;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSWidgetGallery___00__A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy__PEA_N__6B_
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
  return this;
}

// IsChecked<SWidgetGallery,enum_SWidgetGallery::ERadioChoice> @ 142f21b70

FArguments * __thiscall
SCheckBox::FArguments::IsChecked<SWidgetGallery,enum_SWidgetGallery::ERadioChoice>
          (FArguments *this,SWidgetGallery *param_1,pmf_6bc616a6 *param_2,ERadioChoice param_3)

{
  SWidget *pSVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 *puVar7;
  TSharedRef<SWidget_const_,1> *pTVar8;
  ulong64 uVar9;
  TReferenceControllerBase<1> *pTVar10;
  uint uStackX_c;
  TSharedRef<SWidget_const_,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  (this->_IsChecked).bIsSet = true;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(this->_IsChecked).Getter,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->_IsChecked).Getter.field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
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
              ___7__TCommonDelegateInstanceState___A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy__W4ERadioChoice_SWidgetGallery____6B_
    ;
    *(ERadioChoice *)(puVar7 + 1) = param_3;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSWidgetGallery___00__A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy__W4ERadioChoice_1___6B_
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
  return this;
}

// OnBegin<SColorPicker> @ 142f25ee0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FArguments * __thiscall
SEyeDropperButton::FArguments::OnBegin<SColorPicker>
          (FArguments *this,SColorPicker *param_1,pmf_97d28a9e *param_2)

{
  pmf_97d28a9e local_18;
  
  local_18._0_8_ = *(undefined8 *)param_2;
  local_18._8_8_ = *(undefined8 *)&param_2->field_0x8;
  TDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::BindSP<SColorPicker>
            ((TDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)&this->_OnBegin
             ,param_1,&local_18);
  return this;
}

// OnBeginSliderMovement<SColorPicker> @ 142f25f20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FArguments * __thiscall
SColorSlider::FArguments::OnBeginSliderMovement<SColorPicker>
          (FArguments *this,SColorPicker *param_1,pmf_97d28a9e *param_2)

{
  pmf_97d28a9e local_18;
  
  local_18._0_8_ = *(undefined8 *)param_2;
  local_18._8_8_ = *(undefined8 *)&param_2->field_0x8;
  TDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::BindSP<SColorPicker>
            ((TDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &this->_OnBeginSliderMovement,param_1,&local_18);
  return this;
}

// OnBeginSpinBoxMovement<SColorPicker> @ 142f25f60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FArguments * __thiscall
SColorSlider::FArguments::OnBeginSpinBoxMovement<SColorPicker>
          (FArguments *this,SColorPicker *param_1,pmf_97d28a9e *param_2)

{
  pmf_97d28a9e local_18;
  
  local_18._0_8_ = *(undefined8 *)param_2;
  local_18._8_8_ = *(undefined8 *)&param_2->field_0x8;
  TDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::BindSP<SColorPicker>
            ((TDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &this->_OnBeginSpinBoxMovement,param_1,&local_18);
  return this;
}

// OnCheckStateChanged<SColorPicker> @ 142f25fa0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FArguments * __thiscall
SCheckBox::FArguments::OnCheckStateChanged<SColorPicker>
          (FArguments *this,SColorPicker *param_1,pmf_40262d99 *param_2)

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
  
  local_58 = *(undefined8 *)param_2;
  uStack_50 = *(undefined8 *)&param_2->field_0x8;
  bVar4 = false;
  bVar3 = false;
  bVar2 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnCheckStateChanged,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->_OnCheckStateChanged).field_0x8;
  puVar5 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar5 == (undefined8 *)0x0) {
    pTVar8 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
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
              ___7__TCommonDelegateInstanceState___A6AXW4ECheckBoxState___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    local_68.Object = pSVar1;
    local_68.SharedReferenceCount.ReferenceController = pTVar8;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar7;
    *puVar5 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSColorPicker___00__A6AXW4ECheckBoxState___ZUFDefaultDelegateUserPolicy____V__6B_
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
  return this;
}

// OnCheckStateChanged<STableViewTesting> @ 142f260f0

FArguments * __thiscall
SCheckBox::FArguments::OnCheckStateChanged<STableViewTesting>
          (FArguments *this,STableViewTesting *param_1,pmf_1c731b43 *param_2)

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
  
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnCheckStateChanged,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->_OnCheckStateChanged).field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
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
              ___7__TCommonDelegateInstanceState___A6AXW4ECheckBoxState___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSTableViewTesting___00__A6AXW4ECheckBoxState___ZUFDefaultDelegateUserPolicy____V__6B_
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
  return this;
}

// OnCheckStateChanged<SWidgetGallery> @ 142f26220

FArguments * __thiscall
SCheckBox::FArguments::OnCheckStateChanged<SWidgetGallery>
          (FArguments *this,SWidgetGallery *param_1,pmf_d9819f7c *param_2)

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
  undefined1 *local_20;
  
  uVar1 = *(undefined8 *)param_2;
  uVar2 = *(undefined8 *)&param_2->field_0x8;
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnCheckStateChanged,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->_OnCheckStateChanged).field_0x8;
  puVar6 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar6 != (undefined8 *)0x0) {
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
              ___7__TCommonDelegateInstanceState___A6AXW4ECheckBoxState___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    local_58.Object = local_68.Object;
    local_58.SharedReferenceCount.ReferenceController =
         local_68.SharedReferenceCount.ReferenceController;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar8;
    *puVar6 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSWidgetGallery___00__A6AXW4ECheckBoxState___ZUFDefaultDelegateUserPolicy____V__6B_
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
  return this;
}

// OnCheckStateChanged<SWidgetGallery,bool_*> @ 142f26380

FArguments * __thiscall
SCheckBox::FArguments::OnCheckStateChanged<SWidgetGallery,bool_*>
          (FArguments *this,SWidgetGallery *param_1,pmf_99890dd4 *param_2,bool *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined8 *puVar6;
  TSharedRef<SWidget,1> *pTVar7;
  ulong64 uVar8;
  TSharedRef<SWidgetGallery,1> local_78;
  TSharedPtr<SWidgetGallery,1> local_68;
  TSharedRef<SWidget,1> local_58;
  FDestructionSentinel local_48;
  undefined1 *local_30;
  
  uVar1 = *(undefined8 *)param_2;
  uVar2 = *(undefined8 *)&param_2->field_0x8;
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnCheckStateChanged,
             (FWriteAccessScope *)&local_48);
  local_30 = &(this->_OnCheckStateChanged).field_0x8;
  puVar6 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_30);
  if (puVar6 != (undefined8 *)0x0) {
    pTVar7 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_58);
    local_78.Object = (SWidgetGallery *)pTVar7->Object;
    local_78.SharedReferenceCount.ReferenceController =
         (pTVar7->SharedReferenceCount).ReferenceController;
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
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXW4ECheckBoxState___ZUFDefaultDelegateUserPolicy__PEA_N__6B_
    ;
    puVar6[1] = param_3;
    local_68.Object = local_78.Object;
    local_68.SharedReferenceCount.ReferenceController =
         local_78.SharedReferenceCount.ReferenceController;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar8;
    *puVar6 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSWidgetGallery___00__A6AXW4ECheckBoxState___ZUFDefaultDelegateUserPolicy__PEA_N__6B_
    ;
    puVar6[3] = local_68.Object;
    puVar6[4] = local_68.SharedReferenceCount.ReferenceController;
    if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_68.SharedReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_68.SharedReferenceCount.ReferenceController)->WeakReferenceCount + 1);
      UNLOCK();
    }
    puVar6[5] = uVar1;
    puVar6[6] = uVar2;
    bVar5 = true;
    bVar4 = true;
    bVar3 = true;
  }
  if (bVar3) {
    TSharedPtr<SWidgetGallery,1>::~TSharedPtr<SWidgetGallery,1>(&local_68);
  }
  if (bVar4) {
    TSharedRef<SWidgetGallery,1>::~TSharedRef<SWidgetGallery,1>(&local_78);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  return this;
}

// OnCheckStateChanged<SWidgetGallery,enum_SWidgetGallery::ERadioChoice> @ 142f264e0

FArguments * __thiscall
SCheckBox::FArguments::OnCheckStateChanged<SWidgetGallery,enum_SWidgetGallery::ERadioChoice>
          (FArguments *this,SWidgetGallery *param_1,pmf_2e07afd0 *param_2,ERadioChoice param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined8 *puVar6;
  TSharedRef<SWidget,1> *pTVar7;
  ulong64 uVar8;
  TSharedRef<SWidgetGallery,1> local_78;
  TSharedPtr<SWidgetGallery,1> local_68;
  TSharedRef<SWidget,1> local_58;
  FDestructionSentinel local_48;
  undefined1 *local_30;
  
  uVar1 = *(undefined8 *)param_2;
  uVar2 = *(undefined8 *)&param_2->field_0x8;
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnCheckStateChanged,
             (FWriteAccessScope *)&local_48);
  local_30 = &(this->_OnCheckStateChanged).field_0x8;
  puVar6 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_30);
  if (puVar6 != (undefined8 *)0x0) {
    pTVar7 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_58);
    local_78.Object = (SWidgetGallery *)pTVar7->Object;
    local_78.SharedReferenceCount.ReferenceController =
         (pTVar7->SharedReferenceCount).ReferenceController;
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
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXW4ECheckBoxState___ZUFDefaultDelegateUserPolicy__W4ERadioChoice_SWidgetGallery____6B_
    ;
    *(ERadioChoice *)(puVar6 + 1) = param_3;
    local_68.Object = local_78.Object;
    local_68.SharedReferenceCount.ReferenceController =
         local_78.SharedReferenceCount.ReferenceController;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar8;
    *puVar6 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSWidgetGallery___00__A6AXW4ECheckBoxState___ZUFDefaultDelegateUserPolicy__W4ERadioChoice_1___6B_
    ;
    puVar6[3] = local_68.Object;
    puVar6[4] = local_68.SharedReferenceCount.ReferenceController;
    if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_68.SharedReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_68.SharedReferenceCount.ReferenceController)->WeakReferenceCount + 1);
      UNLOCK();
    }
    puVar6[5] = uVar1;
    puVar6[6] = uVar2;
    bVar5 = true;
    bVar4 = true;
    bVar3 = true;
  }
  if (bVar3) {
    TSharedPtr<SWidgetGallery,1>::~TSharedPtr<SWidgetGallery,1>(&local_68);
  }
  if (bVar4) {
    TSharedRef<SWidgetGallery,1>::~TSharedRef<SWidgetGallery,1>(&local_78);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  return this;
}

// OnClicked<SBreadcrumbTrail<int>,int> @ 142f26790

FArguments * __thiscall
SButton::FArguments::OnClicked<SBreadcrumbTrail<int>,int>
          (FArguments *this,SBreadcrumbTrail<int> *param_1,pmf_466cf3ab *param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined8 *puVar6;
  TSharedRef<SWidget,1> *pTVar7;
  ulong64 uVar8;
  TSharedRef<SBreadcrumbTrail<int>,1> local_78;
  TSharedPtr<SBreadcrumbTrail<int>,1> local_68;
  TSharedRef<SWidget,1> local_58;
  FDestructionSentinel local_48;
  undefined1 *local_30;
  
  uVar1 = *(undefined8 *)param_2;
  uVar2 = *(undefined8 *)&param_2->field_0x8;
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnClicked,
             (FWriteAccessScope *)&local_48);
  local_30 = &(this->_OnClicked).field_0x8;
  puVar6 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_30);
  if (puVar6 != (undefined8 *)0x0) {
    pTVar7 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_58);
    local_78.Object = (SBreadcrumbTrail<int> *)pTVar7->Object;
    local_78.SharedReferenceCount.ReferenceController =
         (pTVar7->SharedReferenceCount).ReferenceController;
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
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__XZUFDefaultDelegateUserPolicy__H__6B_
    ;
    *(int *)(puVar6 + 1) = param_3;
    local_68.Object = local_78.Object;
    local_68.SharedReferenceCount.ReferenceController =
         local_78.SharedReferenceCount.ReferenceController;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar8;
    *puVar6 = &
              ___7__TBaseSPMethodDelegateInstance__0A_V__SBreadcrumbTrail_H___00__A6A_AVFReply__XZUFDefaultDelegateUserPolicy__H__6B_
    ;
    puVar6[3] = local_68.Object;
    puVar6[4] = local_68.SharedReferenceCount.ReferenceController;
    if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_68.SharedReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_68.SharedReferenceCount.ReferenceController)->WeakReferenceCount + 1);
      UNLOCK();
    }
    puVar6[5] = uVar1;
    puVar6[6] = uVar2;
    bVar5 = true;
    bVar4 = true;
    bVar3 = true;
  }
  if (bVar3) {
    TSharedPtr<SBreadcrumbTrail<int>,1>::~TSharedPtr<SBreadcrumbTrail<int>,1>(&local_68);
  }
  if (bVar4) {
    TSharedRef<SBreadcrumbTrail<int>,1>::~TSharedRef<SBreadcrumbTrail<int>,1>(&local_78);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  return this;
}

// OnClicked<SColorPicker> @ 142f268f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FArguments * __thiscall
SButton::FArguments::OnClicked<SColorPicker>
          (FArguments *this,SColorPicker *param_1,pmf_13f5a5c2 *param_2)

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
  
  local_58 = *(undefined8 *)param_2;
  uStack_50 = *(undefined8 *)&param_2->field_0x8;
  bVar4 = false;
  bVar3 = false;
  bVar2 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnClicked,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->_OnClicked).field_0x8;
  puVar5 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar5 == (undefined8 *)0x0) {
    pTVar8 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
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
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    local_68.Object = pSVar1;
    local_68.SharedReferenceCount.ReferenceController = pTVar8;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar7;
    *puVar5 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSColorPicker___00__A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
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
  return this;
}

// OnClicked<STableViewTesting> @ 142f26a40

FArguments * __thiscall
SButton::FArguments::OnClicked<STableViewTesting>
          (FArguments *this,STableViewTesting *param_1,pmf_f6e3edb4 *param_2)

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
  
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnClicked,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->_OnClicked).field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
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
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSTableViewTesting___00__A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
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
  return this;
}

// OnClicked<SWidgetGallery> @ 142f26b70

FArguments * __thiscall
SButton::FArguments::OnClicked<SWidgetGallery>
          (FArguments *this,SWidgetGallery *param_1,pmf_5ced3165 *param_2)

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
  undefined1 *local_20;
  
  uVar1 = *(undefined8 *)param_2;
  uVar2 = *(undefined8 *)&param_2->field_0x8;
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnClicked,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->_OnClicked).field_0x8;
  puVar6 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar6 != (undefined8 *)0x0) {
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
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    local_58.Object = local_68.Object;
    local_58.SharedReferenceCount.ReferenceController =
         local_68.SharedReferenceCount.ReferenceController;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar8;
    *puVar6 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSWidgetGallery___00__A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
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
  return this;
}

// OnClicked<SWidgetGallery,TSharedPtr<SMenuAnchor,1>_> @ 142f26cd0

/* WARNING: Enum "Type": Some values do not have unique names */

FArguments * __thiscall
SButton::FArguments::OnClicked<SWidgetGallery,TSharedPtr<SMenuAnchor,1>_>
          (FArguments *this,SWidgetGallery *param_1,pmf_dacb6809 *param_2,
          TSharedPtr<SMenuAnchor,1> *param_3)

{
  TReferenceControllerBase<1> *pTVar1;
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
  
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnClicked,
             (FWriteAccessScope *)&local_48);
  local_30 = &(this->_OnClicked).field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x40,(FDelegateAllocation *)local_30);
  if (puVar7 != (undefined8 *)0x0) {
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
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__XZUFDefaultDelegateUserPolicy__V__TSharedPtr_VSMenuAnchor___00____6B_
    ;
    puVar7[1] = param_3->Object;
    pTVar1 = (param_3->SharedReferenceCount).ReferenceController;
    puVar7[2] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_68.Object = local_78.Object;
    local_68.SharedReferenceCount.ReferenceController =
         local_78.SharedReferenceCount.ReferenceController;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[3] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSWidgetGallery___00__A6A_AVFReply__XZUFDefaultDelegateUserPolicy__V__TSharedPtr_VSMenuAnchor___00____6B_
    ;
    puVar7[4] = local_68.Object;
    puVar7[5] = local_68.SharedReferenceCount.ReferenceController;
    if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_68.SharedReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_68.SharedReferenceCount.ReferenceController)->WeakReferenceCount + 1);
      UNLOCK();
    }
    puVar7[6] = uVar2;
    puVar7[7] = uVar3;
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
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// OnComplete<SColorPicker> @ 142f270e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FArguments * __thiscall
SEyeDropperButton::FArguments::OnComplete<SColorPicker>
          (FArguments *this,SColorPicker *param_1,pmf_59149942 *param_2)

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
  
  local_58 = *(undefined8 *)param_2;
  uStack_50 = *(undefined8 *)&param_2->field_0x8;
  bVar4 = false;
  bVar3 = false;
  bVar2 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnComplete,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->_OnComplete).field_0x8;
  puVar5 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar5 == (undefined8 *)0x0) {
    pTVar8 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
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
    *puVar5 = &___7__TCommonDelegateInstanceState___A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_;
    local_68.Object = pSVar1;
    local_68.SharedReferenceCount.ReferenceController = pTVar8;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar7;
    *puVar5 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSColorPicker___00__A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_
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
  return this;
}

// OnContextMenuOpening<STableViewTesting> @ 142f27230

FArguments * __thiscall
SListView<TSharedPtr<FTestData,1>_>::FArguments::OnContextMenuOpening<STableViewTesting>
          (FArguments *this,STableViewTesting *param_1,pmf_a11d68a9 *param_2)

{
  pmf_a11d68a9 local_18;
  
  local_18._0_8_ = *(undefined8 *)param_2;
  local_18._8_8_ = *(undefined8 *)&param_2->field_0x8;
  TDelegateRegistration<TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>::
  BindSP<STableViewTesting>
            ((TDelegateRegistration<TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
              *)&this->_OnContextMenuOpening,param_1,&local_18);
  return this;
}

// OnContextMenuOpening<STableViewTesting> @ 142f27270

FArguments * __thiscall
STileView<TSharedPtr<FTestData,1>_>::FArguments::OnContextMenuOpening<STableViewTesting>
          (FArguments *this,STableViewTesting *param_1,pmf_a11d68a9 *param_2)

{
  pmf_a11d68a9 local_18;
  
  local_18._0_8_ = *(undefined8 *)param_2;
  local_18._8_8_ = *(undefined8 *)&param_2->field_0x8;
  TDelegateRegistration<TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>::
  BindSP<STableViewTesting>
            ((TDelegateRegistration<TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
              *)&this->_OnContextMenuOpening,param_1,&local_18);
  return this;
}

// OnContextMenuOpening<STableViewTesting> @ 142f272b0

FArguments * __thiscall
STreeView<TSharedPtr<FTestData,1>_>::FArguments::OnContextMenuOpening<STableViewTesting>
          (FArguments *this,STableViewTesting *param_1,pmf_a11d68a9 *param_2)

{
  pmf_a11d68a9 local_18;
  
  local_18._0_8_ = *(undefined8 *)param_2;
  local_18._8_8_ = *(undefined8 *)&param_2->field_0x8;
  TDelegateRegistration<TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>::
  BindSP<STableViewTesting>
            ((TDelegateRegistration<TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
              *)&this->_OnContextMenuOpening,param_1,&local_18);
  return this;
}

// OnEndSliderMovement<SColorPicker> @ 142f272f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FArguments * __thiscall
SColorSlider::FArguments::OnEndSliderMovement<SColorPicker>
          (FArguments *this,SColorPicker *param_1,pmf_97d28a9e *param_2)

{
  pmf_97d28a9e local_18;
  
  local_18._0_8_ = *(undefined8 *)param_2;
  local_18._8_8_ = *(undefined8 *)&param_2->field_0x8;
  TDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::BindSP<SColorPicker>
            ((TDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &this->_OnEndSliderMovement,param_1,&local_18);
  return this;
}

// OnEndSpinBoxMovement<SColorPicker> @ 142f27330

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FArguments * __thiscall
SColorSlider::FArguments::OnEndSpinBoxMovement<SColorPicker>
          (FArguments *this,SColorPicker *param_1,pmf_36bd7097 *param_2)

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
  
  local_58 = *(undefined8 *)param_2;
  uStack_50 = *(undefined8 *)&param_2->field_0x8;
  bVar4 = false;
  bVar3 = false;
  bVar2 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnEndSpinBoxMovement,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->_OnEndSpinBoxMovement).field_0x8;
  puVar5 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar5 == (undefined8 *)0x0) {
    pTVar8 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
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
    *puVar5 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    local_68.Object = pSVar1;
    local_68.SharedReferenceCount.ReferenceController = pTVar8;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar7;
    *puVar5 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSColorPicker___00__A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_
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
  return this;
}

// OnGenerateRow<STableViewTesting> @ 142f27480

FArguments * __thiscall
SListView<TSharedPtr<FTestData,1>_>::FArguments::OnGenerateRow<STableViewTesting>
          (FArguments *this,STableViewTesting *param_1,pmf_35d762a2 *param_2)

{
  pmf_35d762a2 local_18;
  
  local_18._0_8_ = *(undefined8 *)param_2;
  local_18._8_8_ = *(undefined8 *)&param_2->field_0x8;
  TDelegateRegistration<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FTestData,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
  ::BindSP<STableViewTesting>
            ((TDelegateRegistration<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FTestData,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
              *)&this->_OnGenerateRow,param_1,&local_18);
  return this;
}

// OnGenerateRow<STableViewTesting> @ 142f274c0

FArguments * __thiscall
STreeView<TSharedPtr<FTestData,1>_>::FArguments::OnGenerateRow<STableViewTesting>
          (FArguments *this,STableViewTesting *param_1,pmf_35d762a2 *param_2)

{
  pmf_35d762a2 local_18;
  
  local_18._0_8_ = *(undefined8 *)param_2;
  local_18._8_8_ = *(undefined8 *)&param_2->field_0x8;
  TDelegateRegistration<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FTestData,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
  ::BindSP<STableViewTesting>
            ((TDelegateRegistration<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FTestData,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
              *)&this->_OnGenerateRow,param_1,&local_18);
  return this;
}

// OnGenerateTile<STableViewTesting> @ 142f27620

FArguments * __thiscall
STileView<TSharedPtr<FTestData,1>_>::FArguments::OnGenerateTile<STableViewTesting>
          (FArguments *this,STableViewTesting *param_1,pmf_35d762a2 *param_2)

{
  pmf_35d762a2 local_18;
  
  local_18._0_8_ = *(undefined8 *)param_2;
  local_18._8_8_ = *(undefined8 *)&param_2->field_0x8;
  TDelegateRegistration<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FTestData,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
  ::BindSP<STableViewTesting>
            ((TDelegateRegistration<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FTestData,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
              *)&this->_OnGenerateTile,param_1,&local_18);
  return this;
}

// OnGenerateWidget<STableViewTesting> @ 142f276f0

FArguments * __thiscall
SComboBox<TSharedPtr<enum_ESelectionMode::Type,1>_>::FArguments::OnGenerateWidget<STableViewTesting>
          (void *this,STableViewTesting *param_1,pmf_1dbaf21e *param_2)

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
  
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x2c0),
             (FWriteAccessScope *)&local_38);
  local_20 = (FDelegateAllocation *)((longlong)this + 0x2c8);
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,local_20);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
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
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSWidget___00__V__TSharedPtr_W4Type_ESelectionMode___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSTableViewTesting___00__A6A_AV__TSharedRef_VSWidget___00__V__TSharedPtr_W4Type_ESelectionMode___00___ZUFDefaultDelegateUserPolicy____V__6B_
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
  return this;
}

// OnGenerateWidget<SWidgetGallery> @ 142f27820

FArguments * __thiscall
SComboBox<TSharedPtr<FString,1>_>::FArguments::OnGenerateWidget<SWidgetGallery>
          (FArguments *this,SWidgetGallery *param_1,pmf_e1aa9a49 *param_2)

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
  undefined1 *local_20;
  
  uVar1 = *(undefined8 *)param_2;
  uVar2 = *(undefined8 *)&param_2->field_0x8;
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnGenerateWidget,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->_OnGenerateWidget).field_0x8;
  puVar6 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar6 != (undefined8 *)0x0) {
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
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSWidget___00__V__TSharedPtr_VFString___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    local_58.Object = local_68.Object;
    local_58.SharedReferenceCount.ReferenceController =
         local_68.SharedReferenceCount.ReferenceController;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar8;
    *puVar6 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSWidgetGallery___00__A6A_AV__TSharedRef_VSWidget___00__V__TSharedPtr_VFString___00___ZUFDefaultDelegateUserPolicy____V__6B_
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
  return this;
}

// OnGetActiveColor<SColorPicker> @ 142f27aa0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FArguments * __thiscall
SThemeColorBlocksBar::FArguments::OnGetActiveColor<SColorPicker>
          (FArguments *this,SColorPicker *param_1,pmf_b5063530 *param_2)

{
  pmf_b5063530 local_18;
  
  local_18._0_8_ = *(undefined8 *)param_2;
  local_18._8_8_ = *(undefined8 *)&param_2->field_0x8;
  TDelegateRegistration<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>::BindSP<SColorPicker>
            ((TDelegateRegistration<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy> *)
             &this->_OnGetActiveColor,param_1,&local_18);
  return this;
}

// OnGetChildren<STableViewTesting> @ 142f27ae0

FArguments * __thiscall
STreeView<TSharedPtr<FTestData,1>_>::FArguments::OnGetChildren<STableViewTesting>
          (FArguments *this,STableViewTesting *param_1,pmf_7f5d9032 *param_2)

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
  
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnGetChildren,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->_OnGetChildren).field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
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
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VFTestData___00__AEAV__TArray_V__TSharedPtr_VFTestData___00__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSTableViewTesting___00__A6AXV__TSharedPtr_VFTestData___00__AEAV__TArray_V__TSharedPtr_VFTestData___00__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
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
  return this;
}

// OnGetMenuContent<SWidgetGallery,FText> @ 142f27ca0

FArguments * __thiscall
SMenuAnchor::FArguments::OnGetMenuContent<SWidgetGallery,FText>
          (FArguments *this,SWidgetGallery *param_1,pmf_3cd74a0a *param_2,FText *param_3)

{
  SWidget *pSVar1;
  ITextData *pIVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined8 *puVar8;
  TSharedRef<SWidget_const_,1> *pTVar9;
  ulong64 uVar10;
  TReferenceControllerBase<1> *pTVar11;
  undefined4 local_res8;
  undefined4 uStackX_c;
  TSharedRef<SWidget_const_,1> local_58;
  FDestructionSentinel local_48;
  undefined1 *local_30;
  
  bVar7 = false;
  bVar6 = false;
  bVar5 = false;
  local_res8 = 0;
  uVar3 = *(undefined8 *)param_2;
  uVar4 = *(undefined8 *)&param_2->field_0x8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnGetMenuContent,
             (FWriteAccessScope *)&local_48);
  local_30 = &(this->_OnGetMenuContent).field_0x8;
  puVar8 = UE::Core::Private::DelegateAllocate(0x40,(FDelegateAllocation *)local_30);
  if (puVar8 == (undefined8 *)0x0) {
    pTVar11 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8);
  }
  else {
    pTVar9 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_58);
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
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSWidget___00__XZUFDefaultDelegateUserPolicy__VFText____6B_
    ;
    puVar8[1] = 0;
    pIVar2 = (param_3->TextData).Reference;
    puVar8[1] = pIVar2;
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 8))(pIVar2,&local_res8);
    }
    *(uint *)(puVar8 + 2) = param_3->Flags;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar8[3] = uVar10;
    *puVar8 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSWidgetGallery___00__A6A_AV__TSharedRef_VSWidget___00__XZUFDefaultDelegateUserPolicy__VFText____6B_
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
              (local_58.SharedReferenceCount.ReferenceController);
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  pIVar2 = (param_3->TextData).Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  return this;
}

// OnGetTextLabelForItem<SWidgetGallery> @ 142f27e30

FArguments * __thiscall
STextComboBox::FArguments::OnGetTextLabelForItem<SWidgetGallery>
          (FArguments *this,SWidgetGallery *param_1,pmf_d67c03f6 *param_2)

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
  undefined1 *local_20;
  
  uVar1 = *(undefined8 *)param_2;
  uVar2 = *(undefined8 *)&param_2->field_0x8;
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnGetTextLabelForItem
             ,(FWriteAccessScope *)&local_38);
  local_20 = &(this->_OnGetTextLabelForItem).field_0x8;
  puVar6 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar6 != (undefined8 *)0x0) {
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
              ___7__TCommonDelegateInstanceState___A6A_AVFString__V__TSharedPtr_VFString___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    local_58.Object = local_68.Object;
    local_58.SharedReferenceCount.ReferenceController =
         local_68.SharedReferenceCount.ReferenceController;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar8;
    *puVar6 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSWidgetGallery___00__A6A_AVFString__V__TSharedPtr_VFString___00___ZUFDefaultDelegateUserPolicy____V__6B_
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
  return this;
}

// OnHovered<SColorPicker,EVisibility> @ 142f27f90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FArguments * __thiscall
SButton::FArguments::OnHovered<SColorPicker,EVisibility>
          (FArguments *this,SColorPicker *param_1,pmf_49ad074d *param_2,EVisibility param_3)

{
  EVisibility local_res20 [8];
  pmf_49ad074d local_18;
  
  local_18._0_8_ = *(undefined8 *)param_2;
  local_18._8_8_ = *(undefined8 *)&param_2->field_0x8;
  local_res20[0].Value.Value = param_3.Value.Value;
  TDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  BindSP<SColorPicker,EVisibility_&>
            ((TDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &this->_OnHovered,param_1,&local_18,local_res20);
  return this;
}

// OnMouseButtonDown<SColorPicker> @ 142f27fd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FArguments * __thiscall
SBorder::FArguments::OnMouseButtonDown<SColorPicker>
          (FArguments *this,SColorPicker *param_1,pmf_037795eb *param_2)

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
  
  local_58 = *(undefined8 *)param_2;
  uStack_50 = *(undefined8 *)&param_2->field_0x8;
  bVar4 = false;
  bVar3 = false;
  bVar2 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnMouseButtonDown,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->_OnMouseButtonDown).field_0x8;
  puVar5 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar5 == (undefined8 *)0x0) {
    pTVar8 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
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
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__AEBUFGeometry__AEBUFPointerEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    local_68.Object = pSVar1;
    local_68.SharedReferenceCount.ReferenceController = pTVar8;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar7;
    *puVar5 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSColorPicker___00__A6A_AVFReply__AEBUFGeometry__AEBUFPointerEvent___ZUFDefaultDelegateUserPolicy____V__6B_
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
  return this;
}

// OnMouseCaptureBegin<SColorPicker> @ 142f28120

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FArguments * __thiscall
SColorSpectrum::FArguments::OnMouseCaptureBegin<SColorPicker>
          (FArguments *this,SColorPicker *param_1,pmf_97d28a9e *param_2)

{
  pmf_97d28a9e local_18;
  
  local_18._0_8_ = *(undefined8 *)param_2;
  local_18._8_8_ = *(undefined8 *)&param_2->field_0x8;
  TDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::BindSP<SColorPicker>
            ((TDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &this->_OnMouseCaptureBegin,param_1,&local_18);
  return this;
}

// OnMouseCaptureBegin<SColorPicker> @ 142f28160

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FArguments * __thiscall
SColorWheel::FArguments::OnMouseCaptureBegin<SColorPicker>
          (FArguments *this,SColorPicker *param_1,pmf_97d28a9e *param_2)

{
  pmf_97d28a9e local_18;
  
  local_18._0_8_ = *(undefined8 *)param_2;
  local_18._8_8_ = *(undefined8 *)&param_2->field_0x8;
  TDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::BindSP<SColorPicker>
            ((TDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &this->_OnMouseCaptureBegin,param_1,&local_18);
  return this;
}

// OnMouseCaptureEnd<SColorPicker> @ 142f281a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FArguments * __thiscall
SColorSpectrum::FArguments::OnMouseCaptureEnd<SColorPicker>
          (FArguments *this,SColorPicker *param_1,pmf_97d28a9e *param_2)

{
  pmf_97d28a9e local_18;
  
  local_18._0_8_ = *(undefined8 *)param_2;
  local_18._8_8_ = *(undefined8 *)&param_2->field_0x8;
  TDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::BindSP<SColorPicker>
            ((TDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &this->_OnMouseCaptureEnd,param_1,&local_18);
  return this;
}

// OnMouseCaptureEnd<SColorPicker> @ 142f281e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FArguments * __thiscall
SColorWheel::FArguments::OnMouseCaptureEnd<SColorPicker>
          (FArguments *this,SColorPicker *param_1,pmf_97d28a9e *param_2)

{
  pmf_97d28a9e local_18;
  
  local_18._0_8_ = *(undefined8 *)param_2;
  local_18._8_8_ = *(undefined8 *)&param_2->field_0x8;
  TDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::BindSP<SColorPicker>
            ((TDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &this->_OnMouseCaptureEnd,param_1,&local_18);
  return this;
}

// OnSearch<SWidgetGallery> @ 142f28220

FArguments * __thiscall
SSearchBox::FArguments::OnSearch<SWidgetGallery>
          (FArguments *this,SWidgetGallery *param_1,pmf_9c6ff31d *param_2)

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
  undefined1 *local_20;
  
  uVar1 = *(undefined8 *)param_2;
  uVar2 = *(undefined8 *)&param_2->field_0x8;
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnSearch,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->_OnSearch).field_0x8;
  puVar6 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar6 != (undefined8 *)0x0) {
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
              ___7__TCommonDelegateInstanceState___A6AXW4SearchDirection_SSearchBox___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    local_58.Object = local_68.Object;
    local_58.SharedReferenceCount.ReferenceController =
         local_68.SharedReferenceCount.ReferenceController;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar8;
    *puVar6 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSWidgetGallery___00__A6AXW4SearchDirection_SSearchBox___ZUFDefaultDelegateUserPolicy____V__6B_
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
  return this;
}

// OnSelectColor<SColorPicker> @ 142f28380

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FArguments * __thiscall
SThemeColorBlocksBar::FArguments::OnSelectColor<SColorPicker>
          (FArguments *this,SColorPicker *param_1,pmf_23549314 *param_2)

{
  pmf_23549314 local_18;
  
  local_18._0_8_ = *(undefined8 *)param_2;
  local_18._8_8_ = *(undefined8 *)&param_2->field_0x8;
  TDelegateRegistration<void___cdecl(FLinearColor),FDefaultDelegateUserPolicy>::BindSP<SColorPicker>
            ((TDelegateRegistration<void___cdecl(FLinearColor),FDefaultDelegateUserPolicy> *)
             &this->_OnSelectColor,param_1,&local_18);
  return this;
}

// OnSelectionChanged<STableViewTesting> @ 142f283c0

FArguments * __thiscall
SComboBox<TSharedPtr<enum_ESelectionMode::Type,1>_>::FArguments::
OnSelectionChanged<STableViewTesting>(void *this,STableViewTesting *param_1,pmf_e40a99e9 *param_2)

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
  
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x2a8),
             (FWriteAccessScope *)&local_38);
  local_20 = (FDelegateAllocation *)((longlong)this + 0x2b0);
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,local_20);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
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
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_W4Type_ESelectionMode___00__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSTableViewTesting___00__A6AXV__TSharedPtr_W4Type_ESelectionMode___00__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
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
  return this;
}

// OnSelectionChanged<SWidgetGallery> @ 142f284f0

FArguments * __thiscall
SComboBox<TSharedPtr<FString,1>_>::FArguments::OnSelectionChanged<SWidgetGallery>
          (FArguments *this,SWidgetGallery *param_1,pmf_43f27824 *param_2)

{
  pmf_43f27824 local_18;
  
  local_18._0_8_ = *(undefined8 *)param_2;
  local_18._8_8_ = *(undefined8 *)&param_2->field_0x8;
  TDelegateRegistration<void___cdecl(TSharedPtr<FString,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
  ::BindSP<SWidgetGallery>(&this->_OnSelectionChanged,param_1,&local_18);
  return this;
}

// OnSelectionChanged<SWidgetGallery> @ 142f28530

FArguments * __thiscall
STextComboBox::FArguments::OnSelectionChanged<SWidgetGallery>
          (FArguments *this,SWidgetGallery *param_1,pmf_43f27824 *param_2)

{
  pmf_43f27824 local_18;
  
  local_18._0_8_ = *(undefined8 *)param_2;
  local_18._8_8_ = *(undefined8 *)&param_2->field_0x8;
  TDelegateRegistration<void___cdecl(TSharedPtr<FString,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
  ::BindSP<SWidgetGallery>(&this->_OnSelectionChanged,param_1,&local_18);
  return this;
}

// OnTextChosen<SWidgetGallery> @ 142f28610

FArguments * __thiscall
STextComboPopup::FArguments::OnTextChosen<SWidgetGallery>
          (FArguments *this,SWidgetGallery *param_1,pmf_2933341d *param_2)

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
  undefined1 *local_20;
  
  uVar1 = *(undefined8 *)param_2;
  uVar2 = *(undefined8 *)&param_2->field_0x8;
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnTextChosen,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->_OnTextChosen).field_0x8;
  puVar6 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar6 != (undefined8 *)0x0) {
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
              ___7__TCommonDelegateInstanceState___A6AXAEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    local_58.Object = local_68.Object;
    local_58.SharedReferenceCount.ReferenceController =
         local_68.SharedReferenceCount.ReferenceController;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar8;
    *puVar6 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSWidgetGallery___00__A6AXAEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
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
  return this;
}

// OnTextCommitted<SColorPicker> @ 142f28770

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FArguments * __thiscall
SEditableTextBox::FArguments::OnTextCommitted<SColorPicker>
          (FArguments *this,SColorPicker *param_1,pmf_f7550522 *param_2)

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
  
  local_58 = *(undefined8 *)param_2;
  uStack_50 = *(undefined8 *)&param_2->field_0x8;
  bVar4 = false;
  bVar3 = false;
  bVar2 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnTextCommitted,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->_OnTextCommitted).field_0x8;
  puVar5 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar5 == (undefined8 *)0x0) {
    pTVar8 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
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
              ___7__TCommonDelegateInstanceState___A6AXAEBVFText__W4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    local_68.Object = pSVar1;
    local_68.SharedReferenceCount.ReferenceController = pTVar8;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar7;
    *puVar5 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSColorPicker___00__A6AXAEBVFText__W4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
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
  return this;
}

// OnUnhovered<SColorPicker,EVisibility> @ 142f288c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FArguments * __thiscall
SButton::FArguments::OnUnhovered<SColorPicker,EVisibility>
          (FArguments *this,SColorPicker *param_1,pmf_49ad074d *param_2,EVisibility param_3)

{
  EVisibility local_res20 [8];
  pmf_49ad074d local_18;
  
  local_18._0_8_ = *(undefined8 *)param_2;
  local_18._8_8_ = *(undefined8 *)&param_2->field_0x8;
  local_res20[0].Value.Value = param_3.Value.Value;
  TDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  BindSP<SColorPicker,EVisibility_&>
            ((TDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &this->_OnUnhovered,param_1,&local_18,local_res20);
  return this;
}

// OnValueChanged<SColorPicker> @ 142f28900

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FArguments * __thiscall
SColorSpectrum::FArguments::OnValueChanged<SColorPicker>
          (FArguments *this,SColorPicker *param_1,pmf_23549314 *param_2)

{
  pmf_23549314 local_18;
  
  local_18._0_8_ = *(undefined8 *)param_2;
  local_18._8_8_ = *(undefined8 *)&param_2->field_0x8;
  TDelegateRegistration<void___cdecl(FLinearColor),FDefaultDelegateUserPolicy>::BindSP<SColorPicker>
            ((TDelegateRegistration<void___cdecl(FLinearColor),FDefaultDelegateUserPolicy> *)
             &this->_OnValueChanged,param_1,&local_18);
  return this;
}

// OnValueChanged<SColorPicker> @ 142f28940

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FArguments * __thiscall
SColorWheel::FArguments::OnValueChanged<SColorPicker>
          (FArguments *this,SColorPicker *param_1,pmf_23549314 *param_2)

{
  pmf_23549314 local_18;
  
  local_18._0_8_ = *(undefined8 *)param_2;
  local_18._8_8_ = *(undefined8 *)&param_2->field_0x8;
  TDelegateRegistration<void___cdecl(FLinearColor),FDefaultDelegateUserPolicy>::BindSP<SColorPicker>
            ((TDelegateRegistration<void___cdecl(FLinearColor),FDefaultDelegateUserPolicy> *)
             &this->_OnValueChanged,param_1,&local_18);
  return this;
}

// OnValueChanged<SColorPicker> @ 142f28980

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FArguments * __thiscall
SEyeDropperButton::FArguments::OnValueChanged<SColorPicker>
          (FArguments *this,SColorPicker *param_1,pmf_23549314 *param_2)

{
  pmf_23549314 local_18;
  
  local_18._0_8_ = *(undefined8 *)param_2;
  local_18._8_8_ = *(undefined8 *)&param_2->field_0x8;
  TDelegateRegistration<void___cdecl(FLinearColor),FDefaultDelegateUserPolicy>::BindSP<SColorPicker>
            ((TDelegateRegistration<void___cdecl(FLinearColor),FDefaultDelegateUserPolicy> *)
             &this->_OnValueChanged,param_1,&local_18);
  return this;
}

// OnValueChanged<SColorPicker,enum_EColorPickerChannels> @ 142f289c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FArguments * __thiscall
SColorSlider::FArguments::OnValueChanged<SColorPicker,enum_EColorPickerChannels>
          (FArguments *this,SColorPicker *param_1,pmf_e05442f1 *param_2,EColorPickerChannels param_3
          )

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
  
  local_58 = *(undefined8 *)param_2;
  uStack_50 = *(undefined8 *)&param_2->field_0x8;
  bVar4 = false;
  bVar3 = false;
  bVar2 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnValueChanged,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->_OnValueChanged).field_0x8;
  puVar5 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar5 == (undefined8 *)0x0) {
    pTVar8 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
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
              ___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy__W4EColorPickerChannels____6B_
    ;
    *(EColorPickerChannels *)(puVar5 + 1) = param_3;
    local_68.Object = pSVar1;
    local_68.SharedReferenceCount.ReferenceController = pTVar8;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar7;
    *puVar5 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSColorPicker___00__A6AXM_ZUFDefaultDelegateUserPolicy__W4EColorPickerChannels____6B_
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
  return this;
}

// OnValueChanged<STableViewTesting> @ 142f28b20

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FArguments * __thiscall
SNumericEntryBox<int>::FArguments::OnValueChanged<STableViewTesting>
          (FArguments *this,STableViewTesting *param_1,pmf_c0f06008 *param_2)

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
  
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnValueChanged,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->_OnValueChanged).field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
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
    *puVar7 = &___7__TCommonDelegateInstanceState___A6AXH_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSTableViewTesting___00__A6AXH_ZUFDefaultDelegateUserPolicy____V__6B_
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
  return this;
}

// Percent<SWidgetGallery> @ 142f28ed0

FArguments * __thiscall
SProgressBar::FArguments::Percent<SWidgetGallery>
          (FArguments *this,SWidgetGallery *param_1,pmf_582ebe1f *param_2)

{
  SWidget *pSVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 *puVar7;
  TSharedRef<SWidget_const_,1> *pTVar8;
  ulong64 uVar9;
  TReferenceControllerBase<1> *pTVar10;
  uint uStackX_c;
  TSharedRef<SWidget_const_,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  (this->_Percent).bIsSet = true;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(this->_Percent).Getter,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->_Percent).Getter.field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
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
              ___7__TCommonDelegateInstanceState___A6A_AU__TOptional_M__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSWidgetGallery___00__A6A_AU__TOptional_M__XZUFDefaultDelegateUserPolicy____V__6B_
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
  return this;
}

// SelectedColor<SColorPicker> @ 142f29930

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FArguments * __thiscall
SColorSpectrum::FArguments::SelectedColor<SColorPicker>
          (FArguments *this,SColorPicker *param_1,pmf_b5063530 *param_2)

{
  pmf_b5063530 local_18;
  
  local_18._0_8_ = *(undefined8 *)param_2;
  local_18._8_8_ = *(undefined8 *)&param_2->field_0x8;
  (this->_SelectedColor).bIsSet = true;
  TDelegateRegistration<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>::BindSP<SColorPicker>
            ((TDelegateRegistration<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy> *)
             &(this->_SelectedColor).Getter,param_1,&local_18);
  return this;
}

// SelectedColor<SColorPicker> @ 142f29970

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FArguments * __thiscall
SColorWheel::FArguments::SelectedColor<SColorPicker>
          (FArguments *this,SColorPicker *param_1,pmf_b5063530 *param_2)

{
  pmf_b5063530 local_18;
  
  local_18._0_8_ = *(undefined8 *)param_2;
  local_18._8_8_ = *(undefined8 *)&param_2->field_0x8;
  (this->_SelectedColor).bIsSet = true;
  TDelegateRegistration<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>::BindSP<SColorPicker>
            ((TDelegateRegistration<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy> *)
             &(this->_SelectedColor).Getter,param_1,&local_18);
  return this;
}

// SelectionMode<STableViewTesting> @ 142f299b0

FArguments * __thiscall
SListView<TSharedPtr<FTestData,1>_>::FArguments::SelectionMode<STableViewTesting>
          (FArguments *this,STableViewTesting *param_1,pmf_41d5e1f4 *param_2)

{
  pmf_41d5e1f4 local_18;
  
  local_18._0_8_ = *(undefined8 *)param_2;
  local_18._8_8_ = *(undefined8 *)&param_2->field_0x8;
  TAttribute<enum_ESelectionMode::Type>::Bind<STableViewTesting>
            (&this->_SelectionMode,param_1,&local_18);
  return this;
}

// SelectionMode<STableViewTesting> @ 142f299f0

FArguments * __thiscall
STileView<TSharedPtr<FTestData,1>_>::FArguments::SelectionMode<STableViewTesting>
          (FArguments *this,STableViewTesting *param_1,pmf_41d5e1f4 *param_2)

{
  pmf_41d5e1f4 local_18;
  
  local_18._0_8_ = *(undefined8 *)param_2;
  local_18._8_8_ = *(undefined8 *)&param_2->field_0x8;
  TAttribute<enum_ESelectionMode::Type>::Bind<STableViewTesting>
            (&this->_SelectionMode,param_1,&local_18);
  return this;
}

// SelectionMode<STableViewTesting> @ 142f29a30

FArguments * __thiscall
STreeView<TSharedPtr<FTestData,1>_>::FArguments::SelectionMode<STableViewTesting>
          (FArguments *this,STableViewTesting *param_1,pmf_41d5e1f4 *param_2)

{
  pmf_41d5e1f4 local_18;
  
  local_18._0_8_ = *(undefined8 *)param_2;
  local_18._8_8_ = *(undefined8 *)&param_2->field_0x8;
  TAttribute<enum_ESelectionMode::Type>::Bind<STableViewTesting>
            (&this->_SelectionMode,param_1,&local_18);
  return this;
}

// Text<SColorPicker> @ 142f29be0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FArguments * __thiscall
SEditableTextBox::FArguments::Text<SColorPicker>
          (FArguments *this,SColorPicker *param_1,pmf_3ed7c398 *param_2)

{
  pmf_3ed7c398 local_18;
  
  local_18._0_8_ = *(undefined8 *)param_2;
  local_18._8_8_ = *(undefined8 *)&param_2->field_0x8;
  TAttribute<FText>::Bind<SColorPicker>(&this->_Text,param_1,&local_18);
  return this;
}

// Text<SColorPicker> @ 142f29c20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FArguments * __thiscall
STextBlock::FArguments::Text<SColorPicker>
          (FArguments *this,SColorPicker *param_1,pmf_3ed7c398 *param_2)

{
  pmf_3ed7c398 local_18;
  
  local_18._0_8_ = *(undefined8 *)param_2;
  local_18._8_8_ = *(undefined8 *)&param_2->field_0x8;
  TAttribute<FText>::Bind<SColorPicker>(&this->_Text,param_1,&local_18);
  return this;
}

// Text<STableViewTesting> @ 142f29c60

FArguments * __thiscall
STextBlock::FArguments::Text<STableViewTesting>
          (FArguments *this,STableViewTesting *param_1,pmf_91c9c6ee *param_2)

{
  SWidget *pSVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 *puVar7;
  TSharedRef<SWidget_const_,1> *pTVar8;
  ulong64 uVar9;
  TReferenceControllerBase<1> *pTVar10;
  uint uStackX_c;
  TSharedRef<SWidget_const_,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  (this->_Text).bIsSet = true;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(this->_Text).Getter,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->_Text).Getter.field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
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
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSTableViewTesting___00__A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
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
  return this;
}

// Text<SWidgetGallery> @ 142f29da0

FArguments * __thiscall
STextBlock::FArguments::Text<SWidgetGallery>
          (FArguments *this,SWidgetGallery *param_1,pmf_fba755d5 *param_2)

{
  SWidget *pSVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 *puVar7;
  TSharedRef<SWidget_const_,1> *pTVar8;
  ulong64 uVar9;
  TReferenceControllerBase<1> *pTVar10;
  uint uStackX_c;
  TSharedRef<SWidget_const_,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  (this->_Text).bIsSet = true;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(this->_Text).Getter,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->_Text).Getter.field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
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
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSWidgetGallery___00__A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
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
  return this;
}

// UseSRGB<SColorPicker_const_> @ 142f29fc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FArguments * __thiscall
SColorBlock::FArguments::UseSRGB<SColorPicker_const_>
          (FArguments *this,TSharedRef<SColorPicker_const_,1> *param_1,pmf_8ab45a4a *param_2)

{
  SColorPicker *pSVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  FSharedReferencer<1> FVar4;
  bool bVar5;
  uint uStackX_c;
  TSharedRef<SColorPicker_const_,1> local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  local_58.Object = param_1->Object;
  bVar5 = false;
  local_48 = *(undefined8 *)param_2;
  uStack_40 = *(undefined8 *)&param_2->field_0x8;
  local_58.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->_UseSRGB).bIsSet = true;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(this->_UseSRGB).Getter,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->_UseSRGB).Getter.field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  FVar4.ReferenceController = local_58.SharedReferenceCount.ReferenceController;
  pSVar1 = local_58.Object;
  if (puVar2 == (undefined8 *)0x0) {
    FVar4.ReferenceController = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar2 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSColorPicker___00__A6A_NXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = pSVar1;
    puVar2[4] = FVar4.ReferenceController;
    if (FVar4.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar4.ReferenceController)->WeakReferenceCount =
           (atomic<int>)((int)(FVar4.ReferenceController)->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar5 = true;
    puVar2[5] = local_48;
    puVar2[6] = uStack_40;
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar4.ReferenceController);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TSharedRef<SColorPicker_const_,1>::~TSharedRef<SColorPicker_const_,1>(&local_58);
  TSharedRef<SColorPicker_const_,1>::~TSharedRef<SColorPicker_const_,1>(param_1);
  return this;
}

// UseSRGB<SColorPicker_const_> @ 142f2a0f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FArguments * __thiscall
SColorSlider::FArguments::UseSRGB<SColorPicker_const_>
          (FArguments *this,SColorPicker *param_1,pmf_8ab45a4a *param_2)

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
  
  local_58 = *(undefined8 *)param_2;
  uStack_50 = *(undefined8 *)&param_2->field_0x8;
  (this->_UseSRGB).bIsSet = true;
  bVar4 = false;
  bVar3 = false;
  bVar2 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(this->_UseSRGB).Getter,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->_UseSRGB).Getter.field_0x8;
  puVar5 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar5 == (undefined8 *)0x0) {
    pTVar8 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
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
    *puVar5 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    local_68.Object = pSVar1;
    local_68.SharedReferenceCount.ReferenceController = pTVar8;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar7;
    *puVar5 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSColorPicker___00__A6A_NXZUFDefaultDelegateUserPolicy____V__6B_
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
  return this;
}

// UseSRGB<SColorPicker> @ 142f2a240

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FArguments * __thiscall
SThemeColorBlocksBar::FArguments::UseSRGB<SColorPicker>
          (FArguments *this,TSharedRef<SColorPicker,1> *param_1,pmf_8ab45a4a *param_2)

{
  SColorPicker *pSVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  FSharedReferencer<1> FVar4;
  bool bVar5;
  uint uStackX_c;
  TSharedRef<SColorPicker,1> local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  local_58.Object = param_1->Object;
  bVar5 = false;
  local_48 = *(undefined8 *)param_2;
  uStack_40 = *(undefined8 *)&param_2->field_0x8;
  local_58.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->_UseSRGB).bIsSet = true;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(this->_UseSRGB).Getter,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->_UseSRGB).Getter.field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  FVar4.ReferenceController = local_58.SharedReferenceCount.ReferenceController;
  pSVar1 = local_58.Object;
  if (puVar2 == (undefined8 *)0x0) {
    FVar4.ReferenceController = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar2 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSColorPicker___00__A6A_NXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = pSVar1;
    puVar2[4] = FVar4.ReferenceController;
    if (FVar4.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar4.ReferenceController)->WeakReferenceCount =
           (atomic<int>)((int)(FVar4.ReferenceController)->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar5 = true;
    puVar2[5] = local_48;
    puVar2[6] = uStack_40;
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar4.ReferenceController);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TSharedRef<SColorPicker,1>::~TSharedRef<SColorPicker,1>(&local_58);
  TSharedRef<SColorPicker,1>::~TSharedRef<SColorPicker,1>(param_1);
  return this;
}

// Value<SColorPicker_const_,enum_EColorPickerChannels> @ 142f2a370

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FArguments * __thiscall
SColorSlider::FArguments::Value<SColorPicker_const_,enum_EColorPickerChannels>
          (FArguments *this,SColorPicker *param_1,pmf_7c63afb9 *param_2,EColorPickerChannels param_3
          )

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
  
  local_58 = *(undefined8 *)param_2;
  uStack_50 = *(undefined8 *)&param_2->field_0x8;
  (this->_Value).bIsSet = true;
  bVar4 = false;
  bVar3 = false;
  bVar2 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(this->_Value).Getter,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->_Value).Getter.field_0x8;
  puVar5 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar5 == (undefined8 *)0x0) {
    pTVar8 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
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
              ___7__TCommonDelegateInstanceState___A6AMXZUFDefaultDelegateUserPolicy__W4EColorPickerChannels____6B_
    ;
    *(EColorPickerChannels *)(puVar5 + 1) = param_3;
    local_68.Object = pSVar1;
    local_68.SharedReferenceCount.ReferenceController = pTVar8;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar7;
    *puVar5 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSColorPicker___00__A6AMXZUFDefaultDelegateUserPolicy__W4EColorPickerChannels____6B_
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
  return this;
}

// Value<STableViewTesting> @ 142f2a4d0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FArguments * __thiscall
SNumericEntryBox<int>::FArguments::Value<STableViewTesting>
          (FArguments *this,STableViewTesting *param_1,pmf_4f8fcf77 *param_2)

{
  SWidget *pSVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 *puVar7;
  TSharedRef<SWidget_const_,1> *pTVar8;
  ulong64 uVar9;
  TReferenceControllerBase<1> *pTVar10;
  uint uStackX_c;
  TSharedRef<SWidget_const_,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  (this->_Value).bIsSet = true;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(this->_Value).Getter,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->_Value).Getter.field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
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
              ___7__TCommonDelegateInstanceState___A6A_AU__TOptional_H__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSTableViewTesting___00__A6A_AU__TOptional_H__XZUFDefaultDelegateUserPolicy____V__6B_
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
  return this;
}

// FArguments @ 142f325e0

FArguments * __thiscall SBreadcrumbTrail<int>::FArguments::FArguments(FArguments *this)

{
  code *pcVar1;
  ISlateStyle *pIVar2;
  FName *pFVar3;
  FButtonStyle *pFVar4;
  FTextBlockStyle *pFVar5;
  FSlateBrush *pFVar6;
  FName local_res8;
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  pIVar2 = FAppStyle::Get();
  pFVar3 = ::FName::FName(&local_res8,"BreadcrumbButton");
  pFVar4 = (FButtonStyle *)
           (**(code **)((longlong)*pIVar2 + 0xa0))(pIVar2,FButtonStyle::TypeName,*pFVar3,0,1);
  if (pFVar4 == (FButtonStyle *)0x0) {
    pFVar4 = FButtonStyle::GetDefault();
  }
  this->_ButtonStyle = pFVar4;
  pIVar2 = FAppStyle::Get();
  pFVar3 = ::FName::FName(&local_res8,"NormalText");
  pFVar5 = (FTextBlockStyle *)
           (**(code **)((longlong)*pIVar2 + 0xa0))(pIVar2,FTextBlockStyle::TypeName,*pFVar3,0,1);
  if (pFVar5 == (FTextBlockStyle *)0x0) {
    pFVar5 = FTextBlockStyle::GetDefault();
  }
  this->_TextStyle = pFVar5;
  (this->_ButtonContentPadding).Value.Left = 4.0;
  (this->_ButtonContentPadding).Value.Top = 2.0;
  (this->_ButtonContentPadding).Value.Right = 4.0;
  (this->_ButtonContentPadding).Value.Bottom = 2.0;
  (this->_ButtonContentPadding).bIsSet = true;
  *(undefined8 *)&(this->_ButtonContentPadding).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_ButtonContentPadding).Getter = 0;
  *(undefined8 *)&(this->_ButtonContentPadding).Getter.field_0x8 = 0;
  pIVar2 = FAppStyle::Get();
  pcVar1 = *(code **)((longlong)*pIVar2 + 0x50);
  pFVar3 = ::FName::FName(&local_res8,"BreadcrumbTrail.Delimiter");
  pFVar6 = (FSlateBrush *)(*pcVar1)(pIVar2,*pFVar3,0,0);
  (this->_DelimiterImage).Value = pFVar6;
  (this->_DelimiterImage).bIsSet = true;
  *(undefined8 *)&(this->_DelimiterImage).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_DelimiterImage).Getter = 0;
  *(undefined8 *)&(this->_DelimiterImage).Getter.field_0x8 = 0;
  (this->_ShowLeadingDelimiter).Value = false;
  (this->_ShowLeadingDelimiter).bIsSet = true;
  *(undefined8 *)&(this->_ShowLeadingDelimiter).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_ShowLeadingDelimiter).Getter = 0;
  *(undefined8 *)&(this->_ShowLeadingDelimiter).Getter.field_0x8 = 0;
  *(undefined8 *)&this->_OnCrumbPushed = 0;
  *(undefined8 *)&(this->_OnCrumbPushed).field_0x8 = 0;
  *(undefined4 *)&(this->_OnCrumbPushed).field_0x10 = 0;
  *(undefined8 *)&this->_OnCrumbPopped = 0;
  *(undefined8 *)&(this->_OnCrumbPopped).field_0x8 = 0;
  *(undefined4 *)&(this->_OnCrumbPopped).field_0x10 = 0;
  *(undefined8 *)&this->_OnCrumbClicked = 0;
  *(undefined8 *)&(this->_OnCrumbClicked).field_0x8 = 0;
  *(undefined4 *)&(this->_OnCrumbClicked).field_0x10 = 0;
  this->_PersistentBreadcrumbs = false;
  *(undefined8 *)&(this->_HasCrumbMenuContent).field_0x10 = 0;
  *(undefined8 *)&this->_HasCrumbMenuContent = 0;
  *(undefined8 *)&(this->_HasCrumbMenuContent).field_0x8 = 0;
  *(undefined8 *)&(this->_GetCrumbMenuContent).field_0x10 = 0;
  *(undefined8 *)&this->_GetCrumbMenuContent = 0;
  *(undefined8 *)&(this->_GetCrumbMenuContent).field_0x8 = 0;
  *(undefined8 *)&this->_GetCrumbButtonContent = 0;
  *(undefined8 *)&(this->_GetCrumbButtonContent).field_0x8 = 0;
  *(undefined4 *)&(this->_GetCrumbButtonContent).field_0x10 = 0;
  return this;
}

// FArguments @ 142f327f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FArguments * __thiscall
SComboBox<TSharedPtr<enum_ESelectionMode::Type,1>_>::FArguments::FArguments(void *this)

{
  atomic<int> *paVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  FSharedReferencer<1> FVar4;
  ISlateStyle *pIVar5;
  FName *pFVar6;
  FComboBoxStyle *pFVar7;
  FTableRowStyle *pFVar8;
  FScrollBarStyle *pFVar9;
  FName local_res8;
  undefined4 local_18;
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs(this);
  *(SWidget **)((longlong)this + 0x1f8) = SNullWidget::NullWidget.Object;
  FVar4 = SNullWidget::NullWidget.SharedReferenceCount;
  *(TReferenceControllerBase<1> **)((longlong)this + 0x200) =
       SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
  if (FVar4.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar4.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  pIVar5 = FAppStyle::Get();
  pFVar6 = ::FName::FName(&local_res8,"ComboBox");
  pFVar7 = (FComboBoxStyle *)
           (**(code **)((longlong)*pIVar5 + 0xa0))(pIVar5,FComboBoxStyle::TypeName,*pFVar6,0,1);
  if (pFVar7 == (FComboBoxStyle *)0x0) {
    pFVar7 = FComboBoxStyle::GetDefault();
  }
  *(FComboBoxStyle **)((longlong)this + 0x208) = pFVar7;
  *(undefined8 *)((longlong)this + 0x210) = 0;
  pIVar5 = FAppStyle::Get();
  pFVar6 = ::FName::FName(&local_res8,"ComboBox.Row");
  pFVar8 = (FTableRowStyle *)
           (**(code **)((longlong)*pIVar5 + 0xa0))(pIVar5,FTableRowStyle::TypeName,*pFVar6,0,1);
  if (pFVar8 == (FTableRowStyle *)0x0) {
    pFVar8 = FTableRowStyle::GetDefault();
  }
  *(FTableRowStyle **)((longlong)this + 0x218) = pFVar8;
  pIVar5 = FAppStyle::Get();
  pFVar6 = ::FName::FName(&local_res8,"ScrollBar");
  pFVar9 = (FScrollBarStyle *)
           (**(code **)((longlong)*pIVar5 + 0xa0))(pIVar5,FScrollBarStyle::TypeName,*pFVar6,0,1);
  if (pFVar9 == (FScrollBarStyle *)0x0) {
    pFVar9 = FScrollBarStyle::GetDefault();
  }
  *(FScrollBarStyle **)((longlong)this + 0x220) = pFVar9;
  local_18 = CONCAT22(local_18._2_2_,4);
  uVar2 = *(undefined8 *)(*(longlong *)((longlong)this + 0x208) + 0x5a0);
  uVar3 = *(undefined8 *)(*(longlong *)((longlong)this + 0x208) + 0x5a8);
  *(undefined1 *)((longlong)this + 0x238) = 1;
  *(undefined8 *)((longlong)this + 0x228) = uVar2;
  *(undefined8 *)((longlong)this + 0x230) = uVar3;
  *(undefined8 *)((longlong)this + 0x250) = 0;
  uVar3 = _UNK_15090c6d8;
  uVar2 = ___xmm_3f8000003f800000000000003f800000;
  *(undefined8 *)((longlong)this + 0x240) = 0;
  *(undefined8 *)((longlong)this + 0x248) = 0;
  *(undefined8 *)((longlong)this + 600) = uVar2;
  *(undefined8 *)((longlong)this + 0x260) = uVar3;
  *(undefined4 *)((longlong)this + 0x268) = local_18;
  *(undefined1 *)((longlong)this + 0x26c) = 1;
  *(undefined8 *)((longlong)this + 0x280) = 0;
  *(undefined8 *)((longlong)this + 0x270) = 0;
  *(undefined8 *)((longlong)this + 0x278) = 0;
  *(undefined8 *)((longlong)this + 0x298) = 0;
  *(undefined8 *)((longlong)this + 0x2a0) = 0;
  *(undefined8 *)((longlong)this + 0x288) = 0;
  *(undefined8 *)((longlong)this + 0x290) = 0;
  *(undefined8 *)((longlong)this + 0x2b8) = 0;
  *(undefined8 *)((longlong)this + 0x2a8) = 0;
  *(undefined8 *)((longlong)this + 0x2b0) = 0;
  *(undefined8 *)((longlong)this + 0x2d0) = 0;
  *(undefined8 *)((longlong)this + 0x2c0) = 0;
  *(undefined8 *)((longlong)this + 0x2c8) = 0;
  *(undefined8 *)((longlong)this + 0x2d8) = 0;
  *(undefined8 *)((longlong)this + 0x2e0) = 0;
  *(undefined4 *)((longlong)this + 0x2e8) = 0;
  *(undefined8 *)((longlong)this + 0x2f0) = 0;
  *(undefined8 *)((longlong)this + 0x2f8) = 0;
  *(undefined8 *)((longlong)this + 0x300) = 0;
  *(undefined8 *)((longlong)this + 0x308) = 0;
  *(undefined1 *)((longlong)this + 0x311) = 0;
  *(undefined1 *)((longlong)this + 0x330) = 0;
  *(undefined1 *)((longlong)this + 0x350) = 0;
  *(undefined4 *)((longlong)this + 0x314) = 0x43e10000;
  *(undefined2 *)((longlong)this + 0x358) = 1;
  *(undefined1 *)((longlong)this + 0x35a) = 1;
  return this;
}

// FArguments @ 142f32a50

FArguments * __thiscall
SComboRow<TSharedPtr<enum_ESelectionMode::Type,1>_>::FArguments::FArguments(void *this)

{
  atomic<int> *paVar1;
  FSharedReferencer<1> FVar2;
  ISlateStyle *pIVar3;
  FName *pFVar4;
  FTableRowStyle *pFVar5;
  FName local_res8;
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs(this);
  pIVar3 = FAppStyle::Get();
  pFVar4 = ::FName::FName(&local_res8,"ComboBox.Row");
  pFVar5 = (FTableRowStyle *)
           (**(code **)((longlong)*pIVar3 + 0xa0))(pIVar3,FTableRowStyle::TypeName,*pFVar4,0,1);
  if (pFVar5 == (FTableRowStyle *)0x0) {
    pFVar5 = FTableRowStyle::GetDefault();
  }
  *(FTableRowStyle **)((longlong)this + 0x1f8) = pFVar5;
  *(SWidget **)((longlong)this + 0x200) = SNullWidget::NullWidget.Object;
  FVar2 = SNullWidget::NullWidget.SharedReferenceCount;
  *(TReferenceControllerBase<1> **)((longlong)this + 0x208) =
       SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
  if (FVar2.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar2.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  *(undefined1 *)((longlong)this + 0x220) = 1;
  *(undefined8 *)((longlong)this + 0x210) = 0;
  *(undefined8 *)((longlong)this + 0x218) = 0;
  *(undefined8 *)((longlong)this + 0x238) = 0;
  *(undefined8 *)((longlong)this + 0x228) = 0;
  *(undefined8 *)((longlong)this + 0x230) = 0;
  return this;
}

// FArguments @ 142f32b10

FArguments * __thiscall
SListView<TSharedPtr<FTestData,1>_>::FArguments::FArguments(FArguments *this)

{
  float fVar1;
  TConsoleVariableData<float> *pTVar2;
  bool bVar3;
  ISlateStyle *pIVar4;
  FName *pFVar5;
  FTableViewStyle *pFVar6;
  FScrollBarStyle *pFVar7;
  longlong lVar8;
  FName local_res8;
  FName local_res10;
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  pIVar4 = FAppStyle::Get();
  pFVar5 = ::FName::FName(&local_res8,"ListView");
  pFVar6 = (FTableViewStyle *)
           (**(code **)((longlong)*pIVar4 + 0xa0))(pIVar4,FTableViewStyle::TypeName,*pFVar5,0,1);
  if (pFVar6 == (FTableViewStyle *)0x0) {
    pFVar6 = FTableViewStyle::GetDefault();
  }
  this->_ListViewStyle = pFVar6;
  this->_bEnableShadowBoxStyle = false;
  *(undefined8 *)&(this->_OnGenerateRow).field_0x10 = 0;
  *(undefined8 *)&this->_OnGenerateRow = 0;
  *(undefined8 *)&(this->_OnGenerateRow).field_0x8 = 0;
  *(undefined8 *)&(this->_OnGeneratePinnedRow).field_0x10 = 0;
  *(undefined8 *)&this->_OnGeneratePinnedRow = 0;
  *(undefined8 *)&(this->_OnGeneratePinnedRow).field_0x8 = 0;
  *(undefined8 *)&(this->_OnRefreshRow).field_0x10 = 0;
  *(undefined8 *)&this->_OnRefreshRow = 0;
  *(undefined8 *)&(this->_OnRefreshRow).field_0x8 = 0;
  *(undefined8 *)&(this->_OnEntryInitialized).field_0x10 = 0;
  *(undefined8 *)&this->_OnEntryInitialized = 0;
  *(undefined8 *)&(this->_OnEntryInitialized).field_0x8 = 0;
  *(undefined8 *)&(this->_OnRowReleased).field_0x10 = 0;
  *(undefined8 *)&this->_OnRowReleased = 0;
  *(undefined8 *)&(this->_OnRowReleased).field_0x8 = 0;
  *(undefined8 *)&this->_OnListViewScrolled = 0;
  *(undefined8 *)&(this->_OnListViewScrolled).field_0x8 = 0;
  *(undefined4 *)&(this->_OnListViewScrolled).field_0x10 = 0;
  *(undefined8 *)&this->_OnItemScrolledIntoView = 0;
  *(undefined8 *)&(this->_OnItemScrolledIntoView).field_0x8 = 0;
  *(undefined4 *)&(this->_OnItemScrolledIntoView).field_0x10 = 0;
  *(undefined8 *)&this->_OnFinishedScrolling = 0;
  *(undefined8 *)&(this->_OnFinishedScrolling).field_0x8 = 0;
  *(undefined4 *)&(this->_OnFinishedScrolling).field_0x10 = 0;
  (this->_ListItemsSource_SharedObservableArray).Object =
       (TObservableArray<TSharedPtr<FTestData,1>_> *)0x0;
  (this->_ListItemsSource_SharedObservableArray).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->_ItemHeight).Value = 0.0;
  (this->_ItemHeight).bIsSet = false;
  this->_ListItemsSource_ArrayPointer =
       (TArray<TSharedPtr<FTestData,1>,TSizedDefaultAllocator<32>_> *)0x0;
  this->_ListItemsSource_ObservableArrayPointer = (TObservableArray<TSharedPtr<FTestData,1>_> *)0x0;
  *(undefined8 *)&(this->_ItemHeight).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_ItemHeight).Getter = 0;
  *(undefined8 *)&(this->_ItemHeight).Getter.field_0x8 = 0;
  (this->_MaxPinnedItems).Value = 6;
  (this->_MaxPinnedItems).bIsSet = true;
  *(undefined8 *)&(this->_MaxPinnedItems).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_MaxPinnedItems).Getter = 0;
  *(undefined8 *)&(this->_MaxPinnedItems).Getter.field_0x8 = 0;
  *(undefined8 *)&(this->_OnContextMenuOpening).field_0x10 = 0;
  *(undefined8 *)&this->_OnContextMenuOpening = 0;
  *(undefined8 *)&(this->_OnContextMenuOpening).field_0x8 = 0;
  *(undefined8 *)&(this->_OnItemsRebuilt).field_0x10 = 0;
  *(undefined8 *)&this->_OnItemsRebuilt = 0;
  *(undefined8 *)&(this->_OnItemsRebuilt).field_0x8 = 0;
  *(undefined8 *)&(this->_OnMouseButtonClick).field_0x10 = 0;
  *(undefined8 *)&this->_OnMouseButtonClick = 0;
  *(undefined8 *)&(this->_OnMouseButtonClick).field_0x8 = 0;
  *(undefined8 *)&(this->_OnMouseButtonDoubleClick).field_0x10 = 0;
  *(undefined8 *)&this->_OnMouseButtonDoubleClick = 0;
  *(undefined8 *)&(this->_OnMouseButtonDoubleClick).field_0x8 = 0;
  *(undefined8 *)&(this->_OnSelectionChanged).field_0x10 = 0;
  *(undefined8 *)&this->_OnSelectionChanged = 0;
  *(undefined8 *)&(this->_OnSelectionChanged).field_0x8 = 0;
  *(undefined8 *)&(this->_OnIsSelectableOrNavigable).field_0x10 = 0;
  *(undefined8 *)&this->_OnIsSelectableOrNavigable = 0;
  *(undefined8 *)&(this->_OnIsSelectableOrNavigable).field_0x8 = 0;
  (this->_SelectionMode).Value = Multi;
  (this->_SelectionMode).bIsSet = true;
  *(undefined8 *)&(this->_SelectionMode).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_SelectionMode).Getter = 0;
  *(undefined8 *)&(this->_SelectionMode).Getter.field_0x8 = 0;
  (this->_HeaderRow).Object = (SHeaderRow *)0x0;
  (this->_HeaderRow).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_ExternalScrollbar).Object = (SScrollBar *)0x0;
  (this->_ExternalScrollbar).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->_FixedLineScrollOffset).bIsSet = false;
  (this->_ScrollbarVisibility).Value = (TEnumAsByte<EVisibility::Private>)0x19;
  (this->_ScrollbarVisibility).bIsSet = false;
  this->_ClearSelectionOnClick = true;
  this->_Orientation = Orient_Vertical;
  this->_EnableAnimatedScrolling = false;
  *(undefined8 *)&(this->_ScrollbarVisibility).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_ScrollbarVisibility).Getter = 0;
  *(undefined8 *)&(this->_ScrollbarVisibility).Getter.field_0x8 = 0;
  this->_ScrollbarDragFocusCause = Mouse;
  this->_AllowOverscroll = Yes;
  pIVar4 = FAppStyle::Get();
  pFVar5 = ::FName::FName(&local_res10,"ScrollBar");
  pFVar7 = (FScrollBarStyle *)
           (**(code **)((longlong)*pIVar4 + 0xa0))(pIVar4,FScrollBarStyle::TypeName,*pFVar5,0,1);
  if (pFVar7 == (FScrollBarStyle *)0x0) {
    pFVar7 = FScrollBarStyle::GetDefault();
  }
  this->_ScrollBarStyle = pFVar7;
  this->_PreventThrottling = false;
  pTVar2 = GlobalScrollAmount.Ref;
  this->_ConsumeMouseWheel = WhenScrollingPossible;
  bVar3 = IsInParallelGameThread();
  if (!bVar3) {
    bVar3 = IsInGameThread();
    lVar8 = 4;
    if (!bVar3) goto LAB_142f32dfd;
  }
  lVar8 = 0;
LAB_142f32dfd:
  fVar1 = *(float *)((longlong)pTVar2->ShadowedValue + lVar8);
  (this->_IsFocusable).Value = true;
  (this->_IsFocusable).bIsSet = true;
  this->_WheelScrollMultiplier = fVar1;
  this->_HandleSpacebarSelection = false;
  this->_NavigationScrollOffset = 0.5;
  (this->_ScrollBarPadding).Left = 0.0;
  this->_HandleGamepadEvents = true;
  this->_HandleDirectionalNavigation = true;
  *(undefined8 *)&(this->_IsFocusable).Getter.field_0x8 = 0;
  (this->_ScrollBarPadding).Top = 0.0;
  (this->_ScrollBarPadding).Right = 0.0;
  (this->_ScrollBarPadding).Bottom = 0.0;
  *(undefined8 *)&(this->_IsFocusable).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_IsFocusable).Getter = 0;
  this->_ReturnFocusToSelection = false;
  this->_ClearScrollVelocityOnSelection = true;
  *(undefined8 *)&(this->_OnItemToString_Debug).field_0x10 = 0;
  *(undefined8 *)&this->_OnItemToString_Debug = 0;
  *(undefined8 *)&(this->_OnItemToString_Debug).field_0x8 = 0;
  *(undefined8 *)&(this->_OnEnteredBadState).field_0x10 = 0;
  *(undefined8 *)&this->_OnEnteredBadState = 0;
  *(undefined8 *)&(this->_OnEnteredBadState).field_0x8 = 0;
  *(undefined8 *)&this->_OnKeyDownHandler = 0;
  *(undefined8 *)&(this->_OnKeyDownHandler).field_0x8 = 0;
  *(undefined4 *)&(this->_OnKeyDownHandler).field_0x10 = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 1;
  return this;
}

// FArguments @ 142f32ec0

FArguments * __thiscall
SListView<TSharedPtr<enum_ESelectionMode::Type,1>_>::FArguments::FArguments(void *this)

{
  undefined4 uVar1;
  TConsoleVariableData<float> *pTVar2;
  bool bVar3;
  ISlateStyle *pIVar4;
  FName *pFVar5;
  FTableViewStyle *pFVar6;
  FScrollBarStyle *pFVar7;
  longlong lVar8;
  FName local_res8;
  FName local_res10;
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs(this);
  pIVar4 = FAppStyle::Get();
  pFVar5 = ::FName::FName(&local_res8,"ListView");
  pFVar6 = (FTableViewStyle *)
           (**(code **)((longlong)*pIVar4 + 0xa0))(pIVar4,FTableViewStyle::TypeName,*pFVar5,0,1);
  if (pFVar6 == (FTableViewStyle *)0x0) {
    pFVar6 = FTableViewStyle::GetDefault();
  }
  *(FTableViewStyle **)((longlong)this + 0x1f8) = pFVar6;
  *(undefined1 *)((longlong)this + 0x208) = 0;
  *(undefined8 *)((longlong)this + 0x220) = 0;
  *(undefined8 *)((longlong)this + 0x210) = 0;
  *(undefined8 *)((longlong)this + 0x218) = 0;
  *(undefined8 *)((longlong)this + 0x238) = 0;
  *(undefined8 *)((longlong)this + 0x228) = 0;
  *(undefined8 *)((longlong)this + 0x230) = 0;
  *(undefined8 *)((longlong)this + 0x250) = 0;
  *(undefined8 *)((longlong)this + 0x240) = 0;
  *(undefined8 *)((longlong)this + 0x248) = 0;
  *(undefined8 *)((longlong)this + 0x268) = 0;
  *(undefined8 *)((longlong)this + 600) = 0;
  *(undefined8 *)((longlong)this + 0x260) = 0;
  *(undefined8 *)((longlong)this + 0x280) = 0;
  *(undefined8 *)((longlong)this + 0x270) = 0;
  *(undefined8 *)((longlong)this + 0x278) = 0;
  *(undefined8 *)((longlong)this + 0x288) = 0;
  *(undefined8 *)((longlong)this + 0x290) = 0;
  *(undefined4 *)((longlong)this + 0x298) = 0;
  *(undefined8 *)((longlong)this + 0x2a0) = 0;
  *(undefined8 *)((longlong)this + 0x2a8) = 0;
  *(undefined4 *)((longlong)this + 0x2b0) = 0;
  *(undefined8 *)((longlong)this + 0x2b8) = 0;
  *(undefined8 *)((longlong)this + 0x2c0) = 0;
  *(undefined4 *)((longlong)this + 0x2c8) = 0;
  *(undefined8 *)((longlong)this + 0x2e0) = 0;
  *(undefined8 *)((longlong)this + 0x2e8) = 0;
  *(undefined4 *)((longlong)this + 0x2f0) = 0;
  *(undefined1 *)((longlong)this + 0x2f4) = 0;
  *(undefined8 *)((longlong)this + 0x2d0) = 0;
  *(undefined8 *)((longlong)this + 0x2d8) = 0;
  *(undefined8 *)((longlong)this + 0x308) = 0;
  *(undefined8 *)((longlong)this + 0x2f8) = 0;
  *(undefined8 *)((longlong)this + 0x300) = 0;
  *(undefined4 *)((longlong)this + 0x310) = 6;
  *(undefined1 *)((longlong)this + 0x314) = 1;
  *(undefined8 *)((longlong)this + 0x328) = 0;
  *(undefined8 *)((longlong)this + 0x318) = 0;
  *(undefined8 *)((longlong)this + 800) = 0;
  *(undefined8 *)((longlong)this + 0x340) = 0;
  *(undefined8 *)((longlong)this + 0x330) = 0;
  *(undefined8 *)((longlong)this + 0x338) = 0;
  *(undefined8 *)((longlong)this + 0x358) = 0;
  *(undefined8 *)((longlong)this + 0x348) = 0;
  *(undefined8 *)((longlong)this + 0x350) = 0;
  *(undefined8 *)((longlong)this + 0x370) = 0;
  *(undefined8 *)((longlong)this + 0x360) = 0;
  *(undefined8 *)((longlong)this + 0x368) = 0;
  *(undefined8 *)((longlong)this + 0x388) = 0;
  *(undefined8 *)((longlong)this + 0x378) = 0;
  *(undefined8 *)((longlong)this + 0x380) = 0;
  *(undefined8 *)((longlong)this + 0x3a0) = 0;
  *(undefined8 *)((longlong)this + 0x390) = 0;
  *(undefined8 *)((longlong)this + 0x398) = 0;
  *(undefined8 *)((longlong)this + 0x3b8) = 0;
  *(undefined8 *)((longlong)this + 0x3a8) = 0;
  *(undefined8 *)((longlong)this + 0x3b0) = 0;
  *(undefined4 *)((longlong)this + 0x3c0) = 3;
  *(undefined1 *)((longlong)this + 0x3c4) = 1;
  *(undefined8 *)((longlong)this + 0x3d8) = 0;
  *(undefined8 *)((longlong)this + 0x3c8) = 0;
  *(undefined8 *)((longlong)this + 0x3d0) = 0;
  *(undefined8 *)((longlong)this + 0x3e0) = 0;
  *(undefined8 *)((longlong)this + 1000) = 0;
  *(undefined8 *)((longlong)this + 0x3f8) = 0;
  *(undefined8 *)((longlong)this + 0x400) = 0;
  *(undefined1 *)((longlong)this + 0x418) = 0;
  *(undefined2 *)((longlong)this + 0x420) = 0x19;
  *(undefined1 *)((longlong)this + 0x3f0) = 1;
  *(undefined4 *)((longlong)this + 0x408) = 1;
  *(undefined1 *)((longlong)this + 0x40d) = 0;
  *(undefined8 *)((longlong)this + 0x438) = 0;
  *(undefined8 *)((longlong)this + 0x428) = 0;
  *(undefined8 *)((longlong)this + 0x430) = 0;
  *(undefined2 *)((longlong)this + 0x440) = 0;
  pIVar4 = FAppStyle::Get();
  pFVar5 = ::FName::FName(&local_res10,"ScrollBar");
  pFVar7 = (FScrollBarStyle *)
           (**(code **)((longlong)*pIVar4 + 0xa0))(pIVar4,FScrollBarStyle::TypeName,*pFVar5,0,1);
  if (pFVar7 == (FScrollBarStyle *)0x0) {
    pFVar7 = FScrollBarStyle::GetDefault();
  }
  *(FScrollBarStyle **)((longlong)this + 0x448) = pFVar7;
  *(undefined2 *)((longlong)this + 0x450) = 0;
  pTVar2 = GlobalScrollAmount.Ref;
  bVar3 = IsInParallelGameThread();
  if (!bVar3) {
    bVar3 = IsInGameThread();
    lVar8 = 4;
    if (!bVar3) goto LAB_142f331ad;
  }
  lVar8 = 0;
LAB_142f331ad:
  uVar1 = *(undefined4 *)((longlong)pTVar2->ShadowedValue + lVar8);
  *(undefined2 *)((longlong)this + 0x470) = 0x101;
  *(undefined4 *)((longlong)this + 0x454) = uVar1;
  *(undefined1 *)((longlong)this + 0x46e) = 0;
  *(undefined8 *)((longlong)this + 0x458) = 0x3f000000;
  *(undefined2 *)((longlong)this + 0x46c) = 0x101;
  *(undefined8 *)((longlong)this + 0x480) = 0;
  *(undefined8 *)((longlong)this + 0x460) = 0;
  *(undefined4 *)((longlong)this + 0x468) = 0;
  *(undefined8 *)((longlong)this + 0x488) = 0;
  *(undefined8 *)((longlong)this + 0x478) = 0;
  *(undefined2 *)((longlong)this + 0x490) = 0x100;
  *(undefined8 *)((longlong)this + 0x4a8) = 0;
  *(undefined8 *)((longlong)this + 0x498) = 0;
  *(undefined8 *)((longlong)this + 0x4a0) = 0;
  *(undefined8 *)((longlong)this + 0x4c0) = 0;
  *(undefined8 *)((longlong)this + 0x4b0) = 0;
  *(undefined8 *)((longlong)this + 0x4b8) = 0;
  *(undefined8 *)((longlong)this + 0x4c8) = 0;
  *(undefined8 *)((longlong)this + 0x4d0) = 0;
  *(undefined4 *)((longlong)this + 0x4d8) = 0;
  *(undefined1 *)((longlong)this + 0xca) = 1;
  return this;
}

// FArguments @ 142f33270

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FArguments * __thiscall SNumericEntryBox<int>::FArguments::FArguments(FArguments *this)

{
  atomic<int> *paVar1;
  undefined8 uVar2;
  EStyleColor EVar3;
  undefined2 uVar4;
  FLinearColor FVar5;
  FSharedReferencer<1> FVar6;
  TRefCountPtr<ITextData> TVar7;
  ISlateStyle *pIVar8;
  FName *pFVar9;
  FEditableTextBoxStyle *pFVar10;
  FSpinBoxStyle *pFVar11;
  FName local_res8;
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  pIVar8 = FAppStyle::Get();
  pFVar9 = ::FName::FName(&local_res8,"NormalEditableTextBox");
  pFVar10 = (FEditableTextBoxStyle *)
            (**(code **)((longlong)*pIVar8 + 0xa0))
                      (pIVar8,FEditableTextBoxStyle::TypeName,*pFVar9,0,1);
  if (pFVar10 == (FEditableTextBoxStyle *)0x0) {
    pFVar10 = FEditableTextBoxStyle::GetDefault();
  }
  this->_EditableTextBoxStyle = pFVar10;
  pIVar8 = FAppStyle::Get();
  pFVar9 = ::FName::FName(&local_res8,"NumericEntrySpinBox");
  pFVar11 = (FSpinBoxStyle *)
            (**(code **)((longlong)*pIVar8 + 0xa0))(pIVar8,FSpinBoxStyle::TypeName,*pFVar9,0,1);
  if (pFVar11 == (FSpinBoxStyle *)0x0) {
    pFVar11 = FSpinBoxStyle::GetDefault();
  }
  this->_SpinBoxStyle = pFVar11;
  (this->_Label).Widget.Object = SNullWidget::NullWidget.Object;
  FVar6 = SNullWidget::NullWidget.SharedReferenceCount;
  (this->_Label).Widget.SharedReferenceCount.ReferenceController =
       SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
  if (FVar6.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar6.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  (this->_Justification).bIsSet = true;
  (this->_Justification).Value = Left;
  this->_LabelVAlign = VAlign_Fill;
  *(undefined8 *)&(this->_Justification).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_Justification).Getter = 0;
  *(undefined8 *)&(this->_Justification).Getter.field_0x8 = 0;
  this->_LabelLocation = Outside;
  (this->_LabelPadding).Left = 3.0;
  (this->_LabelPadding).Top = 0.0;
  (this->_LabelPadding).Right = 3.0;
  (this->_LabelPadding).Bottom = 0.0;
  pIVar8 = FAppStyle::Get();
  pFVar9 = ::FName::FName(&local_res8,"NumericEntrySpinBox");
  pFVar11 = (FSpinBoxStyle *)
            (**(code **)((longlong)*pIVar8 + 0xa0))(pIVar8,FSpinBoxStyle::TypeName,*pFVar9,0,1);
  if (pFVar11 == (FSpinBoxStyle *)0x0) {
    pFVar11 = FSpinBoxStyle::GetDefault();
  }
  uVar2 = *(undefined8 *)((longlong)&(pFVar11->ForegroundColor).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->_BorderForegroundColor).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(pFVar11->ForegroundColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->_BorderForegroundColor).SpecifiedColor.field0_0x0 + 8) = uVar2;
  EVar3 = (pFVar11->ForegroundColor).ColorTableId;
  uVar4 = *(undefined2 *)&(pFVar11->ForegroundColor).field_0x12;
  (this->_BorderForegroundColor).ColorUseRule = (pFVar11->ForegroundColor).ColorUseRule;
  FVar5 = FLinearColor::White;
  (this->_BorderForegroundColor).ColorTableId = EVar3;
  *(undefined2 *)&(this->_BorderForegroundColor).field_0x12 = uVar4;
  (this->_BorderBackgroundColor).ColorUseRule = UseColor_Specified;
  (this->_BorderBackgroundColor).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FVar5.field0_0x0;
  (this->_Value).Value.bIsSet = false;
  (this->_Value).bIsSet = false;
  *(undefined8 *)&(this->_Value).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_Value).Getter = 0;
  *(undefined8 *)&(this->_Value).Getter.field_0x8 = 0;
  (this->_UndeterminedString).TextData.Reference = (ITextData *)0x0;
  TVar7 = DefaultUndeterminedString.TextData;
  (this->_UndeterminedString).TextData.Reference = DefaultUndeterminedString.TextData.Reference;
  if (TVar7.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar7.Reference + 8))(TVar7.Reference,&local_res8);
  }
  (this->_UndeterminedString).Flags = DefaultUndeterminedString.Flags;
  FSlateFontInfo::FSlateFontInfo(&(this->_Font).Value);
  (this->_Font).bIsSet = false;
  *(undefined8 *)&(this->_Font).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_Font).Getter = 0;
  *(undefined8 *)&(this->_Font).Getter.field_0x8 = 0;
  this->_AllowSpin = false;
  (this->_ShiftMouseMovePixelPerDelta).Value = 0;
  (this->_ShiftMouseMovePixelPerDelta).bIsSet = false;
  *(undefined8 *)&(this->_ShiftMouseMovePixelPerDelta).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_ShiftMouseMovePixelPerDelta).Getter = 0;
  *(undefined8 *)&(this->_ShiftMouseMovePixelPerDelta).Getter.field_0x8 = 0;
  (this->_ShiftMultiplier).Value = 10.0;
  (this->_ShiftMultiplier).bIsSet = true;
  *(undefined8 *)&(this->_ShiftMultiplier).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_ShiftMultiplier).Getter = 0;
  *(undefined8 *)&(this->_ShiftMultiplier).Getter.field_0x8 = 0;
  (this->_CtrlMultiplier).Value = 0.1;
  (this->_CtrlMultiplier).bIsSet = true;
  *(undefined8 *)&(this->_CtrlMultiplier).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_CtrlMultiplier).Getter = 0;
  *(undefined8 *)&(this->_CtrlMultiplier).Getter.field_0x8 = 0;
  (this->_LinearDeltaSensitivity).Value = 0;
  (this->_LinearDeltaSensitivity).bIsSet = false;
  *(undefined8 *)&(this->_LinearDeltaSensitivity).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_LinearDeltaSensitivity).Getter = 0;
  *(undefined8 *)&(this->_LinearDeltaSensitivity).Getter.field_0x8 = 0;
  (this->_SupportDynamicSliderMaxValue).Value = false;
  (this->_SupportDynamicSliderMaxValue).bIsSet = true;
  *(undefined8 *)&(this->_SupportDynamicSliderMaxValue).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_SupportDynamicSliderMaxValue).Getter = 0;
  *(undefined8 *)&(this->_SupportDynamicSliderMaxValue).Getter.field_0x8 = 0;
  (this->_SupportDynamicSliderMinValue).Value = false;
  (this->_SupportDynamicSliderMinValue).bIsSet = true;
  *(undefined8 *)&(this->_SupportDynamicSliderMinValue).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_SupportDynamicSliderMinValue).Getter = 0;
  *(undefined8 *)&(this->_SupportDynamicSliderMinValue).Getter.field_0x8 = 0;
  *(undefined8 *)&this->_OnDynamicSliderMaxValueChanged = 0;
  *(undefined8 *)&(this->_OnDynamicSliderMaxValueChanged).field_0x8 = 0;
  *(undefined4 *)&(this->_OnDynamicSliderMaxValueChanged).field_0x10 = 0;
  *(undefined8 *)&this->_OnDynamicSliderMinValueChanged = 0;
  *(undefined8 *)&(this->_OnDynamicSliderMinValueChanged).field_0x8 = 0;
  *(undefined4 *)&(this->_OnDynamicSliderMinValueChanged).field_0x10 = 0;
  (this->_Delta).Value = 0;
  (this->_Delta).bIsSet = true;
  *(undefined8 *)&(this->_Delta).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_Delta).Getter = 0;
  *(undefined8 *)&(this->_Delta).Getter.field_0x8 = 0;
  (this->_MinFractionalDigits).Value.TypedValue = 1;
  (this->_MinFractionalDigits).Value.bIsSet = true;
  (this->_MinFractionalDigits).bIsSet = true;
  *(undefined8 *)&(this->_MinFractionalDigits).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_MinFractionalDigits).Getter = 0;
  *(undefined8 *)&(this->_MinFractionalDigits).Getter.field_0x8 = 0;
  (this->_MaxFractionalDigits).Value.TypedValue = 6;
  (this->_MaxFractionalDigits).Value.bIsSet = true;
  (this->_MaxFractionalDigits).bIsSet = true;
  *(undefined8 *)&(this->_MaxFractionalDigits).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_MaxFractionalDigits).Getter = 0;
  *(undefined8 *)&(this->_MaxFractionalDigits).Getter.field_0x8 = 0;
  (this->_MinValue).Value.TypedValue = -0x80000000;
  (this->_MinValue).Value.bIsSet = true;
  (this->_MinValue).bIsSet = true;
  *(undefined8 *)&(this->_MinValue).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_MinValue).Getter = 0;
  *(undefined8 *)&(this->_MinValue).Getter.field_0x8 = 0;
  (this->_MaxValue).Value.TypedValue = 0x7fffffff;
  (this->_MaxValue).Value.bIsSet = true;
  (this->_MaxValue).bIsSet = true;
  *(undefined8 *)&(this->_MaxValue).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_MaxValue).Getter = 0;
  *(undefined8 *)&(this->_MaxValue).Getter.field_0x8 = 0;
  (this->_MinSliderValue).Value.TypedValue = 0;
  (this->_MinSliderValue).Value.bIsSet = true;
  (this->_MinSliderValue).bIsSet = true;
  *(undefined8 *)&(this->_MinSliderValue).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_MinSliderValue).Getter = 0;
  *(undefined8 *)&(this->_MinSliderValue).Getter.field_0x8 = 0;
  (this->_MaxSliderValue).Value.TypedValue = 100;
  (this->_MaxSliderValue).Value.bIsSet = true;
  (this->_MaxSliderValue).bIsSet = true;
  *(undefined8 *)&(this->_MaxSliderValue).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_MaxSliderValue).Getter = 0;
  *(undefined8 *)&(this->_MaxSliderValue).Getter.field_0x8 = 0;
  (this->_SliderExponent).Value = 1.0;
  (this->_SliderExponent).bIsSet = true;
  *(undefined8 *)&(this->_SliderExponent).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_SliderExponent).Getter = 0;
  *(undefined8 *)&(this->_SliderExponent).Getter.field_0x8 = 0;
  (this->_SliderExponentNeutralValue).Value = 0;
  (this->_SliderExponentNeutralValue).bIsSet = false;
  *(undefined8 *)&(this->_SliderExponentNeutralValue).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_SliderExponentNeutralValue).Getter = 0;
  *(undefined8 *)&(this->_SliderExponentNeutralValue).Getter.field_0x8 = 0;
  (this->_WheelStep).Value.bIsSet = false;
  (this->_WheelStep).bIsSet = false;
  this->_BroadcastValueChangesPerKey = false;
  this->_AllowWheel = true;
  this->_PreventThrottling = false;
  *(undefined8 *)&(this->_WheelStep).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_WheelStep).Getter = 0;
  *(undefined8 *)&(this->_WheelStep).Getter.field_0x8 = 0;
  (this->_MinDesiredValueWidth).Value = 0.0;
  (this->_MinDesiredValueWidth).bIsSet = true;
  *(undefined8 *)&(this->_MinDesiredValueWidth).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_MinDesiredValueWidth).Getter = 0;
  *(undefined8 *)&(this->_MinDesiredValueWidth).Getter.field_0x8 = 0;
  (this->_OverrideTextMargin).bIsSet = false;
  *(undefined8 *)&(this->_OverrideTextMargin).Getter.field_0x8 = 0;
  (this->_OverrideTextMargin).Value.Left = 0.0;
  (this->_OverrideTextMargin).Value.Top = 0.0;
  (this->_OverrideTextMargin).Value.Right = 0.0;
  (this->_OverrideTextMargin).Value.Bottom = 0.0;
  *(undefined8 *)&(this->_OverrideTextMargin).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_OverrideTextMargin).Getter = 0;
  *(undefined8 *)&this->_OnValueChanged = 0;
  *(undefined4 *)&(this->_OnValueChanged).field_0x10 = 0;
  *(undefined8 *)&this->_OnValueCommitted = 0;
  *(undefined4 *)&(this->_OnValueCommitted).field_0x10 = 0;
  *(undefined8 *)&this->_OnUndeterminedValueChanged = 0;
  *(undefined4 *)&(this->_OnUndeterminedValueChanged).field_0x10 = 0;
  *(undefined8 *)&this->_OnUndeterminedValueCommitted = 0;
  *(undefined4 *)&(this->_OnUndeterminedValueCommitted).field_0x10 = 0;
  *(undefined8 *)&this->_OnBeginSliderMovement = 0;
  *(undefined4 *)&(this->_OnBeginSliderMovement).field_0x10 = 0;
  *(undefined8 *)&this->_OnEndSliderMovement = 0;
  *(undefined4 *)&(this->_OnEndSliderMovement).field_0x10 = 0;
  *(undefined8 *)&this->_ContextMenuExtender = 0;
  *(undefined4 *)&(this->_ContextMenuExtender).field_0x10 = 0;
  this->_DisplayToggle = false;
  (this->_ToggleChecked).Value = Checked;
  (this->_ToggleChecked).bIsSet = true;
  *(undefined8 *)&(this->_OnValueChanged).field_0x8 = 0;
  *(undefined8 *)&(this->_OnValueCommitted).field_0x8 = 0;
  *(undefined8 *)&(this->_OnUndeterminedValueChanged).field_0x8 = 0;
  *(undefined8 *)&(this->_OnUndeterminedValueCommitted).field_0x8 = 0;
  *(undefined8 *)&(this->_OnBeginSliderMovement).field_0x8 = 0;
  *(undefined8 *)&(this->_OnEndSliderMovement).field_0x8 = 0;
  *(undefined8 *)&(this->_ContextMenuExtender).field_0x8 = 0;
  (this->_TypeInterface).Object = (INumericTypeInterface<int> *)0x0;
  (this->_TypeInterface).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&(this->_ToggleChecked).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_ToggleChecked).Getter = 0;
  *(undefined8 *)&(this->_ToggleChecked).Getter.field_0x8 = 0;
  *(undefined8 *)&this->_OnToggleChanged = 0;
  *(undefined8 *)&(this->_OnToggleChanged).field_0x8 = 0;
  *(undefined4 *)&(this->_OnToggleChanged).field_0x10 = 0;
  (this->_ToolTipTextFormat).Value.bIsSet = false;
  (this->_TogglePadding).Left = 1.0;
  (this->_TogglePadding).Top = 0.0;
  (this->_TogglePadding).Right = 1.0;
  (this->_TogglePadding).Bottom = 0.0;
  (this->_ToolTipTextFormat).bIsSet = true;
  *(undefined8 *)&(this->_ToolTipTextFormat).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_ToolTipTextFormat).Getter = 0;
  *(undefined8 *)&(this->_ToolTipTextFormat).Getter.field_0x8 = 0;
  return this;
}

// FArguments @ 142f33890

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FArguments * __thiscall SNumericEntryBox<float>::FArguments::FArguments(FArguments *this)

{
  atomic<int> *paVar1;
  undefined8 uVar2;
  EStyleColor EVar3;
  undefined2 uVar4;
  FLinearColor FVar5;
  FSharedReferencer<1> FVar6;
  TRefCountPtr<ITextData> TVar7;
  ISlateStyle *pIVar8;
  FName *pFVar9;
  FEditableTextBoxStyle *pFVar10;
  FSpinBoxStyle *pFVar11;
  FName local_res8;
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  pIVar8 = FAppStyle::Get();
  pFVar9 = ::FName::FName(&local_res8,"NormalEditableTextBox");
  pFVar10 = (FEditableTextBoxStyle *)
            (**(code **)((longlong)*pIVar8 + 0xa0))
                      (pIVar8,FEditableTextBoxStyle::TypeName,*pFVar9,0,1);
  if (pFVar10 == (FEditableTextBoxStyle *)0x0) {
    pFVar10 = FEditableTextBoxStyle::GetDefault();
  }
  this->_EditableTextBoxStyle = pFVar10;
  pIVar8 = FAppStyle::Get();
  pFVar9 = ::FName::FName(&local_res8,"NumericEntrySpinBox");
  pFVar11 = (FSpinBoxStyle *)
            (**(code **)((longlong)*pIVar8 + 0xa0))(pIVar8,FSpinBoxStyle::TypeName,*pFVar9,0,1);
  if (pFVar11 == (FSpinBoxStyle *)0x0) {
    pFVar11 = FSpinBoxStyle::GetDefault();
  }
  this->_SpinBoxStyle = pFVar11;
  (this->_Label).Widget.Object = SNullWidget::NullWidget.Object;
  FVar6 = SNullWidget::NullWidget.SharedReferenceCount;
  (this->_Label).Widget.SharedReferenceCount.ReferenceController =
       SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
  if (FVar6.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar6.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  (this->_Justification).bIsSet = true;
  (this->_Justification).Value = Left;
  this->_LabelVAlign = VAlign_Fill;
  *(undefined8 *)&(this->_Justification).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_Justification).Getter = 0;
  *(undefined8 *)&(this->_Justification).Getter.field_0x8 = 0;
  this->_LabelLocation = Outside;
  (this->_LabelPadding).Left = 3.0;
  (this->_LabelPadding).Top = 0.0;
  (this->_LabelPadding).Right = 3.0;
  (this->_LabelPadding).Bottom = 0.0;
  pIVar8 = FAppStyle::Get();
  pFVar9 = ::FName::FName(&local_res8,"NumericEntrySpinBox");
  pFVar11 = (FSpinBoxStyle *)
            (**(code **)((longlong)*pIVar8 + 0xa0))(pIVar8,FSpinBoxStyle::TypeName,*pFVar9,0,1);
  if (pFVar11 == (FSpinBoxStyle *)0x0) {
    pFVar11 = FSpinBoxStyle::GetDefault();
  }
  uVar2 = *(undefined8 *)((longlong)&(pFVar11->ForegroundColor).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->_BorderForegroundColor).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(pFVar11->ForegroundColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->_BorderForegroundColor).SpecifiedColor.field0_0x0 + 8) = uVar2;
  EVar3 = (pFVar11->ForegroundColor).ColorTableId;
  uVar4 = *(undefined2 *)&(pFVar11->ForegroundColor).field_0x12;
  (this->_BorderForegroundColor).ColorUseRule = (pFVar11->ForegroundColor).ColorUseRule;
  FVar5 = FLinearColor::White;
  (this->_BorderForegroundColor).ColorTableId = EVar3;
  *(undefined2 *)&(this->_BorderForegroundColor).field_0x12 = uVar4;
  (this->_BorderBackgroundColor).ColorUseRule = UseColor_Specified;
  (this->_BorderBackgroundColor).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FVar5.field0_0x0;
  (this->_Value).Value.bIsSet = false;
  (this->_Value).bIsSet = false;
  *(undefined8 *)&(this->_Value).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_Value).Getter = 0;
  *(undefined8 *)&(this->_Value).Getter.field_0x8 = 0;
  (this->_UndeterminedString).TextData.Reference = (ITextData *)0x0;
  TVar7 = DefaultUndeterminedString.TextData;
  (this->_UndeterminedString).TextData.Reference = DefaultUndeterminedString.TextData.Reference;
  if (TVar7.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar7.Reference + 8))(TVar7.Reference,&local_res8);
  }
  (this->_UndeterminedString).Flags = DefaultUndeterminedString.Flags;
  FSlateFontInfo::FSlateFontInfo(&(this->_Font).Value);
  (this->_Font).bIsSet = false;
  *(undefined8 *)&(this->_Font).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_Font).Getter = 0;
  *(undefined8 *)&(this->_Font).Getter.field_0x8 = 0;
  this->_AllowSpin = false;
  (this->_ShiftMouseMovePixelPerDelta).Value = 0;
  (this->_ShiftMouseMovePixelPerDelta).bIsSet = false;
  *(undefined8 *)&(this->_ShiftMouseMovePixelPerDelta).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_ShiftMouseMovePixelPerDelta).Getter = 0;
  *(undefined8 *)&(this->_ShiftMouseMovePixelPerDelta).Getter.field_0x8 = 0;
  (this->_ShiftMultiplier).Value = 10.0;
  (this->_ShiftMultiplier).bIsSet = true;
  *(undefined8 *)&(this->_ShiftMultiplier).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_ShiftMultiplier).Getter = 0;
  *(undefined8 *)&(this->_ShiftMultiplier).Getter.field_0x8 = 0;
  (this->_CtrlMultiplier).Value = 0.1;
  (this->_CtrlMultiplier).bIsSet = true;
  *(undefined8 *)&(this->_CtrlMultiplier).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_CtrlMultiplier).Getter = 0;
  *(undefined8 *)&(this->_CtrlMultiplier).Getter.field_0x8 = 0;
  (this->_LinearDeltaSensitivity).Value = 0;
  (this->_LinearDeltaSensitivity).bIsSet = false;
  *(undefined8 *)&(this->_LinearDeltaSensitivity).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_LinearDeltaSensitivity).Getter = 0;
  *(undefined8 *)&(this->_LinearDeltaSensitivity).Getter.field_0x8 = 0;
  (this->_SupportDynamicSliderMaxValue).Value = false;
  (this->_SupportDynamicSliderMaxValue).bIsSet = true;
  *(undefined8 *)&(this->_SupportDynamicSliderMaxValue).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_SupportDynamicSliderMaxValue).Getter = 0;
  *(undefined8 *)&(this->_SupportDynamicSliderMaxValue).Getter.field_0x8 = 0;
  (this->_SupportDynamicSliderMinValue).Value = false;
  (this->_SupportDynamicSliderMinValue).bIsSet = true;
  *(undefined8 *)&(this->_SupportDynamicSliderMinValue).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_SupportDynamicSliderMinValue).Getter = 0;
  *(undefined8 *)&(this->_SupportDynamicSliderMinValue).Getter.field_0x8 = 0;
  *(undefined8 *)&this->_OnDynamicSliderMaxValueChanged = 0;
  *(undefined8 *)&(this->_OnDynamicSliderMaxValueChanged).field_0x8 = 0;
  *(undefined4 *)&(this->_OnDynamicSliderMaxValueChanged).field_0x10 = 0;
  *(undefined8 *)&this->_OnDynamicSliderMinValueChanged = 0;
  *(undefined8 *)&(this->_OnDynamicSliderMinValueChanged).field_0x8 = 0;
  *(undefined4 *)&(this->_OnDynamicSliderMinValueChanged).field_0x10 = 0;
  (this->_Delta).Value = 0.0;
  (this->_Delta).bIsSet = true;
  *(undefined8 *)&(this->_Delta).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_Delta).Getter = 0;
  *(undefined8 *)&(this->_Delta).Getter.field_0x8 = 0;
  (this->_MinFractionalDigits).Value.TypedValue = 1;
  (this->_MinFractionalDigits).Value.bIsSet = true;
  (this->_MinFractionalDigits).bIsSet = true;
  *(undefined8 *)&(this->_MinFractionalDigits).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_MinFractionalDigits).Getter = 0;
  *(undefined8 *)&(this->_MinFractionalDigits).Getter.field_0x8 = 0;
  (this->_MaxFractionalDigits).Value.TypedValue = 6;
  (this->_MaxFractionalDigits).Value.bIsSet = true;
  (this->_MaxFractionalDigits).bIsSet = true;
  *(undefined8 *)&(this->_MaxFractionalDigits).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_MaxFractionalDigits).Getter = 0;
  *(undefined8 *)&(this->_MaxFractionalDigits).Getter.field_0x8 = 0;
  (this->_MinValue).Value.TypedValue = -3.4028235e+38;
  (this->_MinValue).Value.bIsSet = true;
  (this->_MinValue).bIsSet = true;
  *(undefined8 *)&(this->_MinValue).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_MinValue).Getter = 0;
  *(undefined8 *)&(this->_MinValue).Getter.field_0x8 = 0;
  (this->_MaxValue).Value.TypedValue = 3.4028235e+38;
  (this->_MaxValue).Value.bIsSet = true;
  (this->_MaxValue).bIsSet = true;
  *(undefined8 *)&(this->_MaxValue).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_MaxValue).Getter = 0;
  *(undefined8 *)&(this->_MaxValue).Getter.field_0x8 = 0;
  (this->_MinSliderValue).Value.TypedValue = 0.0;
  (this->_MinSliderValue).Value.bIsSet = true;
  (this->_MinSliderValue).bIsSet = true;
  *(undefined8 *)&(this->_MinSliderValue).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_MinSliderValue).Getter = 0;
  *(undefined8 *)&(this->_MinSliderValue).Getter.field_0x8 = 0;
  (this->_MaxSliderValue).Value.TypedValue = 100.0;
  (this->_MaxSliderValue).Value.bIsSet = true;
  (this->_MaxSliderValue).bIsSet = true;
  *(undefined8 *)&(this->_MaxSliderValue).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_MaxSliderValue).Getter = 0;
  *(undefined8 *)&(this->_MaxSliderValue).Getter.field_0x8 = 0;
  (this->_SliderExponent).Value = 1.0;
  (this->_SliderExponent).bIsSet = true;
  *(undefined8 *)&(this->_SliderExponent).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_SliderExponent).Getter = 0;
  *(undefined8 *)&(this->_SliderExponent).Getter.field_0x8 = 0;
  (this->_SliderExponentNeutralValue).Value = 0.0;
  (this->_SliderExponentNeutralValue).bIsSet = false;
  *(undefined8 *)&(this->_SliderExponentNeutralValue).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_SliderExponentNeutralValue).Getter = 0;
  *(undefined8 *)&(this->_SliderExponentNeutralValue).Getter.field_0x8 = 0;
  (this->_WheelStep).Value.bIsSet = false;
  (this->_WheelStep).bIsSet = false;
  this->_BroadcastValueChangesPerKey = false;
  this->_AllowWheel = true;
  this->_PreventThrottling = false;
  *(undefined8 *)&(this->_WheelStep).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_WheelStep).Getter = 0;
  *(undefined8 *)&(this->_WheelStep).Getter.field_0x8 = 0;
  (this->_MinDesiredValueWidth).Value = 0.0;
  (this->_MinDesiredValueWidth).bIsSet = true;
  *(undefined8 *)&(this->_MinDesiredValueWidth).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_MinDesiredValueWidth).Getter = 0;
  *(undefined8 *)&(this->_MinDesiredValueWidth).Getter.field_0x8 = 0;
  (this->_OverrideTextMargin).bIsSet = false;
  *(undefined8 *)&(this->_OverrideTextMargin).Getter.field_0x8 = 0;
  (this->_OverrideTextMargin).Value.Left = 0.0;
  (this->_OverrideTextMargin).Value.Top = 0.0;
  (this->_OverrideTextMargin).Value.Right = 0.0;
  (this->_OverrideTextMargin).Value.Bottom = 0.0;
  *(undefined8 *)&(this->_OverrideTextMargin).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_OverrideTextMargin).Getter = 0;
  *(undefined8 *)&this->_OnValueChanged = 0;
  *(undefined4 *)&(this->_OnValueChanged).field_0x10 = 0;
  *(undefined8 *)&this->_OnValueCommitted = 0;
  *(undefined4 *)&(this->_OnValueCommitted).field_0x10 = 0;
  *(undefined8 *)&this->_OnUndeterminedValueChanged = 0;
  *(undefined4 *)&(this->_OnUndeterminedValueChanged).field_0x10 = 0;
  *(undefined8 *)&this->_OnUndeterminedValueCommitted = 0;
  *(undefined4 *)&(this->_OnUndeterminedValueCommitted).field_0x10 = 0;
  *(undefined8 *)&this->_OnBeginSliderMovement = 0;
  *(undefined4 *)&(this->_OnBeginSliderMovement).field_0x10 = 0;
  *(undefined8 *)&this->_OnEndSliderMovement = 0;
  *(undefined4 *)&(this->_OnEndSliderMovement).field_0x10 = 0;
  *(undefined8 *)&this->_ContextMenuExtender = 0;
  *(undefined4 *)&(this->_ContextMenuExtender).field_0x10 = 0;
  this->_DisplayToggle = false;
  (this->_ToggleChecked).Value = Checked;
  (this->_ToggleChecked).bIsSet = true;
  *(undefined8 *)&(this->_OnValueChanged).field_0x8 = 0;
  *(undefined8 *)&(this->_OnValueCommitted).field_0x8 = 0;
  *(undefined8 *)&(this->_OnUndeterminedValueChanged).field_0x8 = 0;
  *(undefined8 *)&(this->_OnUndeterminedValueCommitted).field_0x8 = 0;
  *(undefined8 *)&(this->_OnBeginSliderMovement).field_0x8 = 0;
  *(undefined8 *)&(this->_OnEndSliderMovement).field_0x8 = 0;
  *(undefined8 *)&(this->_ContextMenuExtender).field_0x8 = 0;
  (this->_TypeInterface).Object = (INumericTypeInterface<float> *)0x0;
  (this->_TypeInterface).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&(this->_ToggleChecked).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_ToggleChecked).Getter = 0;
  *(undefined8 *)&(this->_ToggleChecked).Getter.field_0x8 = 0;
  *(undefined8 *)&this->_OnToggleChanged = 0;
  *(undefined8 *)&(this->_OnToggleChanged).field_0x8 = 0;
  *(undefined4 *)&(this->_OnToggleChanged).field_0x10 = 0;
  (this->_ToolTipTextFormat).Value.bIsSet = false;
  (this->_TogglePadding).Left = 1.0;
  (this->_TogglePadding).Top = 0.0;
  (this->_TogglePadding).Right = 1.0;
  (this->_TogglePadding).Bottom = 0.0;
  (this->_ToolTipTextFormat).bIsSet = true;
  *(undefined8 *)&(this->_ToolTipTextFormat).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_ToolTipTextFormat).Getter = 0;
  *(undefined8 *)&(this->_ToolTipTextFormat).Getter.field_0x8 = 0;
  return this;
}

// FArguments @ 142f33eb0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FArguments * __thiscall SNumericEntryBox<double>::FArguments::FArguments(FArguments *this)

{
  atomic<int> *paVar1;
  undefined8 uVar2;
  EStyleColor EVar3;
  undefined2 uVar4;
  FLinearColor FVar5;
  FSharedReferencer<1> FVar6;
  TRefCountPtr<ITextData> TVar7;
  ISlateStyle *pIVar8;
  FName *pFVar9;
  FEditableTextBoxStyle *pFVar10;
  FSpinBoxStyle *pFVar11;
  FName local_res8;
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  pIVar8 = FAppStyle::Get();
  pFVar9 = ::FName::FName(&local_res8,"NormalEditableTextBox");
  pFVar10 = (FEditableTextBoxStyle *)
            (**(code **)((longlong)*pIVar8 + 0xa0))
                      (pIVar8,FEditableTextBoxStyle::TypeName,*pFVar9,0,1);
  if (pFVar10 == (FEditableTextBoxStyle *)0x0) {
    pFVar10 = FEditableTextBoxStyle::GetDefault();
  }
  this->_EditableTextBoxStyle = pFVar10;
  pIVar8 = FAppStyle::Get();
  pFVar9 = ::FName::FName(&local_res8,"NumericEntrySpinBox");
  pFVar11 = (FSpinBoxStyle *)
            (**(code **)((longlong)*pIVar8 + 0xa0))(pIVar8,FSpinBoxStyle::TypeName,*pFVar9,0,1);
  if (pFVar11 == (FSpinBoxStyle *)0x0) {
    pFVar11 = FSpinBoxStyle::GetDefault();
  }
  this->_SpinBoxStyle = pFVar11;
  (this->_Label).Widget.Object = SNullWidget::NullWidget.Object;
  FVar6 = SNullWidget::NullWidget.SharedReferenceCount;
  (this->_Label).Widget.SharedReferenceCount.ReferenceController =
       SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
  if (FVar6.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar6.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  (this->_Justification).bIsSet = true;
  (this->_Justification).Value = Left;
  this->_LabelVAlign = VAlign_Fill;
  *(undefined8 *)&(this->_Justification).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_Justification).Getter = 0;
  *(undefined8 *)&(this->_Justification).Getter.field_0x8 = 0;
  this->_LabelLocation = Outside;
  (this->_LabelPadding).Left = 3.0;
  (this->_LabelPadding).Top = 0.0;
  (this->_LabelPadding).Right = 3.0;
  (this->_LabelPadding).Bottom = 0.0;
  pIVar8 = FAppStyle::Get();
  pFVar9 = ::FName::FName(&local_res8,"NumericEntrySpinBox");
  pFVar11 = (FSpinBoxStyle *)
            (**(code **)((longlong)*pIVar8 + 0xa0))(pIVar8,FSpinBoxStyle::TypeName,*pFVar9,0,1);
  if (pFVar11 == (FSpinBoxStyle *)0x0) {
    pFVar11 = FSpinBoxStyle::GetDefault();
  }
  uVar2 = *(undefined8 *)((longlong)&(pFVar11->ForegroundColor).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->_BorderForegroundColor).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(pFVar11->ForegroundColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->_BorderForegroundColor).SpecifiedColor.field0_0x0 + 8) = uVar2;
  EVar3 = (pFVar11->ForegroundColor).ColorTableId;
  uVar4 = *(undefined2 *)&(pFVar11->ForegroundColor).field_0x12;
  (this->_BorderForegroundColor).ColorUseRule = (pFVar11->ForegroundColor).ColorUseRule;
  FVar5 = FLinearColor::White;
  (this->_BorderForegroundColor).ColorTableId = EVar3;
  *(undefined2 *)&(this->_BorderForegroundColor).field_0x12 = uVar4;
  (this->_BorderBackgroundColor).ColorUseRule = UseColor_Specified;
  (this->_BorderBackgroundColor).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FVar5.field0_0x0;
  (this->_Value).Value.bIsSet = false;
  (this->_Value).bIsSet = false;
  *(undefined8 *)&(this->_Value).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_Value).Getter = 0;
  *(undefined8 *)&(this->_Value).Getter.field_0x8 = 0;
  (this->_UndeterminedString).TextData.Reference = (ITextData *)0x0;
  TVar7 = DefaultUndeterminedString.TextData;
  (this->_UndeterminedString).TextData.Reference = DefaultUndeterminedString.TextData.Reference;
  if (TVar7.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar7.Reference + 8))(TVar7.Reference,&local_res8);
  }
  (this->_UndeterminedString).Flags = DefaultUndeterminedString.Flags;
  FSlateFontInfo::FSlateFontInfo(&(this->_Font).Value);
  (this->_Font).bIsSet = false;
  *(undefined8 *)&(this->_Font).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_Font).Getter = 0;
  *(undefined8 *)&(this->_Font).Getter.field_0x8 = 0;
  this->_AllowSpin = false;
  (this->_ShiftMouseMovePixelPerDelta).Value = 0;
  (this->_ShiftMouseMovePixelPerDelta).bIsSet = false;
  *(undefined8 *)&(this->_ShiftMouseMovePixelPerDelta).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_ShiftMouseMovePixelPerDelta).Getter = 0;
  *(undefined8 *)&(this->_ShiftMouseMovePixelPerDelta).Getter.field_0x8 = 0;
  (this->_ShiftMultiplier).Value = 10.0;
  (this->_ShiftMultiplier).bIsSet = true;
  *(undefined8 *)&(this->_ShiftMultiplier).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_ShiftMultiplier).Getter = 0;
  *(undefined8 *)&(this->_ShiftMultiplier).Getter.field_0x8 = 0;
  (this->_CtrlMultiplier).Value = 0.1;
  (this->_CtrlMultiplier).bIsSet = true;
  *(undefined8 *)&(this->_CtrlMultiplier).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_CtrlMultiplier).Getter = 0;
  *(undefined8 *)&(this->_CtrlMultiplier).Getter.field_0x8 = 0;
  (this->_LinearDeltaSensitivity).Value = 0;
  (this->_LinearDeltaSensitivity).bIsSet = false;
  *(undefined8 *)&(this->_LinearDeltaSensitivity).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_LinearDeltaSensitivity).Getter = 0;
  *(undefined8 *)&(this->_LinearDeltaSensitivity).Getter.field_0x8 = 0;
  (this->_SupportDynamicSliderMaxValue).Value = false;
  (this->_SupportDynamicSliderMaxValue).bIsSet = true;
  *(undefined8 *)&(this->_SupportDynamicSliderMaxValue).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_SupportDynamicSliderMaxValue).Getter = 0;
  *(undefined8 *)&(this->_SupportDynamicSliderMaxValue).Getter.field_0x8 = 0;
  (this->_SupportDynamicSliderMinValue).Value = false;
  (this->_SupportDynamicSliderMinValue).bIsSet = true;
  *(undefined8 *)&(this->_SupportDynamicSliderMinValue).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_SupportDynamicSliderMinValue).Getter = 0;
  *(undefined8 *)&(this->_SupportDynamicSliderMinValue).Getter.field_0x8 = 0;
  *(undefined8 *)&this->_OnDynamicSliderMaxValueChanged = 0;
  *(undefined8 *)&(this->_OnDynamicSliderMaxValueChanged).field_0x8 = 0;
  *(undefined4 *)&(this->_OnDynamicSliderMaxValueChanged).field_0x10 = 0;
  *(undefined8 *)&this->_OnDynamicSliderMinValueChanged = 0;
  *(undefined8 *)&(this->_OnDynamicSliderMinValueChanged).field_0x8 = 0;
  *(undefined4 *)&(this->_OnDynamicSliderMinValueChanged).field_0x10 = 0;
  (this->_Delta).Value = 0.0;
  (this->_Delta).bIsSet = true;
  *(undefined8 *)&(this->_Delta).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_Delta).Getter = 0;
  *(undefined8 *)&(this->_Delta).Getter.field_0x8 = 0;
  (this->_MinFractionalDigits).Value.TypedValue = 1;
  (this->_MinFractionalDigits).Value.bIsSet = true;
  (this->_MinFractionalDigits).bIsSet = true;
  *(undefined8 *)&(this->_MinFractionalDigits).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_MinFractionalDigits).Getter = 0;
  *(undefined8 *)&(this->_MinFractionalDigits).Getter.field_0x8 = 0;
  (this->_MaxFractionalDigits).Value.TypedValue = 6;
  (this->_MaxFractionalDigits).Value.bIsSet = true;
  (this->_MaxFractionalDigits).bIsSet = true;
  *(undefined8 *)&(this->_MaxFractionalDigits).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_MaxFractionalDigits).Getter = 0;
  *(undefined8 *)&(this->_MaxFractionalDigits).Getter.field_0x8 = 0;
  (this->_MinValue).Value.TypedValue = -1.7976931348623157e+308;
  (this->_MinValue).Value.bIsSet = true;
  (this->_MinValue).bIsSet = true;
  *(undefined8 *)&(this->_MinValue).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_MinValue).Getter = 0;
  *(undefined8 *)&(this->_MinValue).Getter.field_0x8 = 0;
  (this->_MaxValue).Value.TypedValue = 1.7976931348623157e+308;
  (this->_MaxValue).Value.bIsSet = true;
  (this->_MaxValue).bIsSet = true;
  *(undefined8 *)&(this->_MaxValue).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_MaxValue).Getter = 0;
  *(undefined8 *)&(this->_MaxValue).Getter.field_0x8 = 0;
  (this->_MinSliderValue).Value.TypedValue = 0.0;
  (this->_MinSliderValue).Value.bIsSet = true;
  (this->_MinSliderValue).bIsSet = true;
  *(undefined8 *)&(this->_MinSliderValue).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_MinSliderValue).Getter = 0;
  *(undefined8 *)&(this->_MinSliderValue).Getter.field_0x8 = 0;
  (this->_MaxSliderValue).Value.TypedValue = 100.0;
  (this->_MaxSliderValue).Value.bIsSet = true;
  (this->_MaxSliderValue).bIsSet = true;
  *(undefined8 *)&(this->_MaxSliderValue).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_MaxSliderValue).Getter = 0;
  *(undefined8 *)&(this->_MaxSliderValue).Getter.field_0x8 = 0;
  (this->_SliderExponent).Value = 1.0;
  (this->_SliderExponent).bIsSet = true;
  *(undefined8 *)&(this->_SliderExponent).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_SliderExponent).Getter = 0;
  *(undefined8 *)&(this->_SliderExponent).Getter.field_0x8 = 0;
  (this->_SliderExponentNeutralValue).Value = 0.0;
  (this->_SliderExponentNeutralValue).bIsSet = false;
  *(undefined8 *)&(this->_SliderExponentNeutralValue).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_SliderExponentNeutralValue).Getter = 0;
  *(undefined8 *)&(this->_SliderExponentNeutralValue).Getter.field_0x8 = 0;
  (this->_WheelStep).Value.bIsSet = false;
  (this->_WheelStep).bIsSet = false;
  this->_BroadcastValueChangesPerKey = false;
  this->_AllowWheel = true;
  this->_PreventThrottling = false;
  *(undefined8 *)&(this->_WheelStep).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_WheelStep).Getter = 0;
  *(undefined8 *)&(this->_WheelStep).Getter.field_0x8 = 0;
  (this->_MinDesiredValueWidth).Value = 0.0;
  (this->_MinDesiredValueWidth).bIsSet = true;
  *(undefined8 *)&(this->_MinDesiredValueWidth).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_MinDesiredValueWidth).Getter = 0;
  *(undefined8 *)&(this->_MinDesiredValueWidth).Getter.field_0x8 = 0;
  (this->_OverrideTextMargin).bIsSet = false;
  *(undefined8 *)&(this->_OverrideTextMargin).Getter.field_0x8 = 0;
  (this->_OverrideTextMargin).Value.Left = 0.0;
  (this->_OverrideTextMargin).Value.Top = 0.0;
  (this->_OverrideTextMargin).Value.Right = 0.0;
  (this->_OverrideTextMargin).Value.Bottom = 0.0;
  *(undefined8 *)&(this->_OverrideTextMargin).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_OverrideTextMargin).Getter = 0;
  *(undefined8 *)&this->_OnValueChanged = 0;
  *(undefined4 *)&(this->_OnValueChanged).field_0x10 = 0;
  *(undefined8 *)&this->_OnValueCommitted = 0;
  *(undefined4 *)&(this->_OnValueCommitted).field_0x10 = 0;
  *(undefined8 *)&this->_OnUndeterminedValueChanged = 0;
  *(undefined4 *)&(this->_OnUndeterminedValueChanged).field_0x10 = 0;
  *(undefined8 *)&this->_OnUndeterminedValueCommitted = 0;
  *(undefined4 *)&(this->_OnUndeterminedValueCommitted).field_0x10 = 0;
  *(undefined8 *)&this->_OnBeginSliderMovement = 0;
  *(undefined4 *)&(this->_OnBeginSliderMovement).field_0x10 = 0;
  *(undefined8 *)&this->_OnEndSliderMovement = 0;
  *(undefined4 *)&(this->_OnEndSliderMovement).field_0x10 = 0;
  *(undefined8 *)&this->_ContextMenuExtender = 0;
  *(undefined4 *)&(this->_ContextMenuExtender).field_0x10 = 0;
  this->_DisplayToggle = false;
  (this->_ToggleChecked).Value = Checked;
  (this->_ToggleChecked).bIsSet = true;
  *(undefined8 *)&(this->_OnValueChanged).field_0x8 = 0;
  *(undefined8 *)&(this->_OnValueCommitted).field_0x8 = 0;
  *(undefined8 *)&(this->_OnUndeterminedValueChanged).field_0x8 = 0;
  *(undefined8 *)&(this->_OnUndeterminedValueCommitted).field_0x8 = 0;
  *(undefined8 *)&(this->_OnBeginSliderMovement).field_0x8 = 0;
  *(undefined8 *)&(this->_OnEndSliderMovement).field_0x8 = 0;
  *(undefined8 *)&(this->_ContextMenuExtender).field_0x8 = 0;
  (this->_TypeInterface).Object = (INumericTypeInterface<double> *)0x0;
  (this->_TypeInterface).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&(this->_ToggleChecked).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_ToggleChecked).Getter = 0;
  *(undefined8 *)&(this->_ToggleChecked).Getter.field_0x8 = 0;
  *(undefined8 *)&this->_OnToggleChanged = 0;
  *(undefined8 *)&(this->_OnToggleChanged).field_0x8 = 0;
  *(undefined4 *)&(this->_OnToggleChanged).field_0x10 = 0;
  (this->_ToolTipTextFormat).Value.bIsSet = false;
  (this->_TogglePadding).Left = 1.0;
  (this->_TogglePadding).Top = 0.0;
  (this->_TogglePadding).Right = 1.0;
  (this->_TogglePadding).Bottom = 0.0;
  (this->_ToolTipTextFormat).bIsSet = true;
  *(undefined8 *)&(this->_ToolTipTextFormat).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_ToolTipTextFormat).Getter = 0;
  *(undefined8 *)&(this->_ToolTipTextFormat).Getter.field_0x8 = 0;
  return this;
}

// FArguments @ 142f344f0

FArguments * __thiscall SSegmentedControl<int>::FArguments::FArguments(FArguments *this)

{
  ISlateStyle *pIVar1;
  FName *pFVar2;
  FSegmentedControlStyle *pFVar3;
  FTextBlockStyle *pFVar4;
  FName local_res8;
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  (this->_Slots).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->_Slots).ArrayNum = 0;
  (this->_Slots).ArrayMax = 0;
  pIVar1 = FAppStyle::Get();
  pFVar2 = ::FName::FName(&local_res8,"SegmentedControl");
  pFVar3 = (FSegmentedControlStyle *)
           (**(code **)((longlong)*pIVar1 + 0xa0))
                     (pIVar1,FSegmentedControlStyle::TypeName,*pFVar2,0,1);
  if (pFVar3 == (FSegmentedControlStyle *)0x0) {
    pFVar3 = FSegmentedControlStyle::GetDefault();
  }
  this->_Style = pFVar3;
  pIVar1 = FAppStyle::Get();
  pFVar2 = ::FName::FName(&local_res8,"SmallButtonText");
  pFVar4 = (FTextBlockStyle *)
           (**(code **)((longlong)*pIVar1 + 0xa0))(pIVar1,FTextBlockStyle::TypeName,*pFVar2,0,1);
  if (pFVar4 == (FTextBlockStyle *)0x0) {
    pFVar4 = FTextBlockStyle::GetDefault();
  }
  (this->_Value).Value = 0;
  (this->_Value).bIsSet = false;
  this->_TextStyle = pFVar4;
  this->_SupportsMultiSelection = false;
  this->_SupportsEmptySelection = false;
  *(undefined8 *)&(this->_Value).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_Value).Getter = 0;
  *(undefined8 *)&(this->_Value).Getter.field_0x8 = 0;
  (this->_Values).Value.ArrayNum = 0;
  (this->_Values).Value.ArrayMax = 0;
  (this->_Values).bIsSet = false;
  (this->_Values).Value.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)&(this->_Values).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_Values).Getter = 0;
  *(undefined8 *)&(this->_Values).Getter.field_0x8 = 0;
  (this->_UniformPadding).bIsSet = false;
  *(undefined8 *)&(this->_UniformPadding).Getter.field_0x8 = 0;
  (this->_UniformPadding).Value.Left = 0.0;
  (this->_UniformPadding).Value.Top = 0.0;
  (this->_UniformPadding).Value.Right = 0.0;
  (this->_UniformPadding).Value.Bottom = 0.0;
  *(undefined8 *)&(this->_UniformPadding).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_UniformPadding).Getter = 0;
  *(undefined8 *)&this->_OnValueChanged = 0;
  *(undefined8 *)&(this->_OnValueChanged).field_0x8 = 0;
  *(undefined4 *)&(this->_OnValueChanged).field_0x10 = 0;
  *(undefined8 *)&this->_OnValuesChanged = 0;
  *(undefined8 *)&(this->_OnValuesChanged).field_0x8 = 0;
  *(undefined4 *)&(this->_OnValuesChanged).field_0x10 = 0;
  *(undefined8 *)&this->_OnValueChecked = 0;
  *(undefined8 *)&(this->_OnValueChecked).field_0x8 = 0;
  *(undefined4 *)&(this->_OnValueChecked).field_0x10 = 0;
  this->_MaxSegmentsPerLine = 0;
  return this;
}

// FArguments @ 142f34690

FArguments * __thiscall
STableRow<TSharedPtr<FTestData,1>_>::FArguments::FArguments(FArguments *this)

{
  atomic<int> *paVar1;
  FSharedReferencer<1> FVar2;
  ISlateStyle *pIVar3;
  FName *pFVar4;
  FTableRowStyle *pFVar5;
  FName local_res8;
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  pIVar3 = FAppStyle::Get();
  pFVar4 = ::FName::FName(&local_res8,"TableView.Row");
  pFVar5 = (FTableRowStyle *)
           (**(code **)((longlong)*pIVar3 + 0xa0))(pIVar3,FTableRowStyle::TypeName,*pFVar4,0,1);
  if (pFVar5 == (FTableRowStyle *)0x0) {
    pFVar5 = FTableRowStyle::GetDefault();
  }
  this->_Style = pFVar5;
  pIVar3 = FAppStyle::Get();
  this->_ExpanderStyleSet = pIVar3;
  *(undefined8 *)&this->_OnCanAcceptDrop = 0;
  *(undefined8 *)&(this->_OnCanAcceptDrop).field_0x8 = 0;
  *(undefined4 *)&(this->_OnCanAcceptDrop).field_0x10 = 0;
  *(undefined8 *)&this->_OnAcceptDrop = 0;
  *(undefined8 *)&(this->_OnAcceptDrop).field_0x8 = 0;
  *(undefined4 *)&(this->_OnAcceptDrop).field_0x10 = 0;
  *(undefined8 *)&this->_OnPaintDropIndicator = 0;
  *(undefined8 *)&(this->_OnPaintDropIndicator).field_0x8 = 0;
  *(undefined4 *)&(this->_OnPaintDropIndicator).field_0x10 = 0;
  *(undefined8 *)&this->_OnDragDetected = 0;
  *(undefined8 *)&(this->_OnDragDetected).field_0x8 = 0;
  *(undefined4 *)&(this->_OnDragDetected).field_0x10 = 0;
  *(undefined8 *)&this->_OnDragEnter = 0;
  *(undefined8 *)&(this->_OnDragEnter).field_0x8 = 0;
  *(undefined4 *)&(this->_OnDragEnter).field_0x10 = 0;
  *(undefined8 *)&this->_OnDragLeave = 0;
  *(undefined8 *)&(this->_OnDragLeave).field_0x8 = 0;
  *(undefined4 *)&(this->_OnDragLeave).field_0x10 = 0;
  *(undefined8 *)&this->_OnDrop = 0;
  *(undefined8 *)&(this->_OnDrop).field_0x8 = 0;
  *(undefined4 *)&(this->_OnDrop).field_0x10 = 0;
  (this->_Padding).Value.Left = 0.0;
  (this->_Padding).Value.Top = 0.0;
  (this->_Padding).Value.Right = 0.0;
  (this->_Padding).Value.Bottom = 0.0;
  (this->_Padding).bIsSet = true;
  *(undefined8 *)&(this->_Padding).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_Padding).Getter = 0;
  *(undefined8 *)&(this->_Padding).Getter.field_0x8 = 0;
  this->_ShowSelection = true;
  this->_ShowWires = false;
  this->_bAllowPreselectedItemActivation = false;
  this->_SignalSelectionMode = Deferred;
  (this->_Content).Widget.Object = SNullWidget::NullWidget.Object;
  FVar2 = SNullWidget::NullWidget.SharedReferenceCount;
  (this->_Content).Widget.SharedReferenceCount.ReferenceController =
       SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
  if (FVar2.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar2.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  return this;
}

// FArguments @ 142f34800

FArguments * __thiscall
STableRow<TSharedPtr<enum_ESelectionMode::Type,1>_>::FArguments::FArguments(void *this)

{
  atomic<int> *paVar1;
  FSharedReferencer<1> FVar2;
  ISlateStyle *pIVar3;
  FName *pFVar4;
  FTableRowStyle *pFVar5;
  FName local_res8;
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs(this);
  pIVar3 = FAppStyle::Get();
  pFVar4 = ::FName::FName(&local_res8,"TableView.Row");
  pFVar5 = (FTableRowStyle *)
           (**(code **)((longlong)*pIVar3 + 0xa0))(pIVar3,FTableRowStyle::TypeName,*pFVar4,0,1);
  if (pFVar5 == (FTableRowStyle *)0x0) {
    pFVar5 = FTableRowStyle::GetDefault();
  }
  *(FTableRowStyle **)((longlong)this + 0x1f8) = pFVar5;
  pIVar3 = FAppStyle::Get();
  *(ISlateStyle **)((longlong)this + 0x200) = pIVar3;
  *(undefined8 *)((longlong)this + 0x208) = 0;
  *(undefined8 *)((longlong)this + 0x210) = 0;
  *(undefined4 *)((longlong)this + 0x218) = 0;
  *(undefined8 *)((longlong)this + 0x220) = 0;
  *(undefined8 *)((longlong)this + 0x228) = 0;
  *(undefined4 *)((longlong)this + 0x230) = 0;
  *(undefined8 *)((longlong)this + 0x238) = 0;
  *(undefined8 *)((longlong)this + 0x240) = 0;
  *(undefined4 *)((longlong)this + 0x248) = 0;
  *(undefined8 *)((longlong)this + 0x250) = 0;
  *(undefined8 *)((longlong)this + 600) = 0;
  *(undefined4 *)((longlong)this + 0x260) = 0;
  *(undefined8 *)((longlong)this + 0x268) = 0;
  *(undefined8 *)((longlong)this + 0x270) = 0;
  *(undefined4 *)((longlong)this + 0x278) = 0;
  *(undefined8 *)((longlong)this + 0x280) = 0;
  *(undefined8 *)((longlong)this + 0x288) = 0;
  *(undefined4 *)((longlong)this + 0x290) = 0;
  *(undefined8 *)((longlong)this + 0x298) = 0;
  *(undefined8 *)((longlong)this + 0x2a0) = 0;
  *(undefined4 *)((longlong)this + 0x2a8) = 0;
  *(undefined8 *)((longlong)this + 0x2b0) = 0;
  *(undefined8 *)((longlong)this + 0x2b8) = 0;
  *(undefined1 *)((longlong)this + 0x2c0) = 1;
  *(undefined8 *)((longlong)this + 0x2d8) = 0;
  *(undefined8 *)((longlong)this + 0x2c8) = 0;
  *(undefined8 *)((longlong)this + 0x2d0) = 0;
  *(undefined2 *)((longlong)this + 0x2e0) = 1;
  *(undefined1 *)((longlong)this + 0x2e2) = 0;
  *(undefined4 *)((longlong)this + 0x2e4) = 0;
  *(SWidget **)((longlong)this + 0x2e8) = SNullWidget::NullWidget.Object;
  FVar2 = SNullWidget::NullWidget.SharedReferenceCount;
  *(TReferenceControllerBase<1> **)((longlong)this + 0x2f0) =
       SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
  if (FVar2.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar2.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  return this;
}

// FArguments @ 142f34970

FArguments * __thiscall STileView<TSharedPtr<int,1>_>::FArguments::FArguments(FArguments *this)

{
  float fVar1;
  TConsoleVariableData<float> *pTVar2;
  bool bVar3;
  ISlateStyle *pIVar4;
  FName *pFVar5;
  FScrollBarStyle *pFVar6;
  longlong lVar7;
  FName local_res8;
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  *(undefined8 *)&(this->_OnGenerateTile).field_0x10 = 0;
  *(undefined8 *)&this->_OnGenerateTile = 0;
  *(undefined8 *)&(this->_OnGenerateTile).field_0x8 = 0;
  *(undefined8 *)&(this->_OnRefreshTile).field_0x10 = 0;
  *(undefined8 *)&this->_OnRefreshTile = 0;
  *(undefined8 *)&(this->_OnRefreshTile).field_0x8 = 0;
  *(undefined8 *)&(this->_OnTileReleased).field_0x10 = 0;
  *(undefined8 *)&this->_OnTileReleased = 0;
  *(undefined8 *)&(this->_OnTileReleased).field_0x8 = 0;
  *(undefined8 *)&this->_OnTileViewScrolled = 0;
  *(undefined8 *)&(this->_OnTileViewScrolled).field_0x8 = 0;
  *(undefined4 *)&(this->_OnTileViewScrolled).field_0x10 = 0;
  *(undefined8 *)&this->_OnFinishedScrolling = 0;
  *(undefined8 *)&(this->_OnFinishedScrolling).field_0x8 = 0;
  *(undefined4 *)&(this->_OnFinishedScrolling).field_0x10 = 0;
  *(undefined8 *)&this->_OnItemScrolledIntoView = 0;
  *(undefined8 *)&(this->_OnItemScrolledIntoView).field_0x8 = 0;
  *(undefined4 *)&(this->_OnItemScrolledIntoView).field_0x10 = 0;
  (this->_ListItemsSource_SharedObservableArray).Object =
       (TObservableArray<TSharedPtr<int,1>_> *)0x0;
  (this->_ListItemsSource_SharedObservableArray).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->_ItemHeight).Value = 128.0;
  (this->_ItemHeight).bIsSet = true;
  this->_ListItemsSource_ArrayPointer = (TArray<TSharedPtr<int,1>,TSizedDefaultAllocator<32>_> *)0x0
  ;
  this->_ListItemsSource_ObservableArrayPointer = (TObservableArray<TSharedPtr<int,1>_> *)0x0;
  *(undefined8 *)&(this->_ItemHeight).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_ItemHeight).Getter = 0;
  *(undefined8 *)&(this->_ItemHeight).Getter.field_0x8 = 0;
  (this->_ItemWidth).Value = 128.0;
  (this->_ItemWidth).bIsSet = true;
  *(undefined8 *)&(this->_ItemWidth).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_ItemWidth).Getter = 0;
  *(undefined8 *)&(this->_ItemWidth).Getter.field_0x8 = 0;
  (this->_ItemAlignment).Value = EvenlyDistributed;
  (this->_ItemAlignment).bIsSet = true;
  *(undefined8 *)&(this->_ItemAlignment).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_ItemAlignment).Getter = 0;
  *(undefined8 *)&(this->_ItemAlignment).Getter.field_0x8 = 0;
  *(undefined8 *)&(this->_OnContextMenuOpening).field_0x10 = 0;
  *(undefined8 *)&this->_OnContextMenuOpening = 0;
  *(undefined8 *)&(this->_OnContextMenuOpening).field_0x8 = 0;
  *(undefined8 *)&(this->_OnItemsRebuilt).field_0x10 = 0;
  *(undefined8 *)&this->_OnItemsRebuilt = 0;
  *(undefined8 *)&(this->_OnItemsRebuilt).field_0x8 = 0;
  *(undefined8 *)&(this->_OnMouseButtonClick).field_0x10 = 0;
  *(undefined8 *)&this->_OnMouseButtonClick = 0;
  *(undefined8 *)&(this->_OnMouseButtonClick).field_0x8 = 0;
  *(undefined8 *)&(this->_OnMouseButtonDoubleClick).field_0x10 = 0;
  *(undefined8 *)&this->_OnMouseButtonDoubleClick = 0;
  *(undefined8 *)&(this->_OnMouseButtonDoubleClick).field_0x8 = 0;
  *(undefined8 *)&(this->_OnSelectionChanged).field_0x10 = 0;
  *(undefined8 *)&this->_OnSelectionChanged = 0;
  *(undefined8 *)&(this->_OnSelectionChanged).field_0x8 = 0;
  *(undefined8 *)&(this->_OnIsSelectableOrNavigable).field_0x10 = 0;
  *(undefined8 *)&this->_OnIsSelectableOrNavigable = 0;
  *(undefined8 *)&(this->_OnIsSelectableOrNavigable).field_0x8 = 0;
  (this->_SelectionMode).Value = Multi;
  (this->_SelectionMode).bIsSet = true;
  *(undefined8 *)&(this->_SelectionMode).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_SelectionMode).Getter = 0;
  *(undefined8 *)&(this->_SelectionMode).Getter.field_0x8 = 0;
  (this->_ExternalScrollbar).Object = (SScrollBar *)0x0;
  (this->_ExternalScrollbar).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->_FixedLineScrollOffset).bIsSet = false;
  this->_ClearSelectionOnClick = true;
  this->_Orientation = Orient_Vertical;
  this->_EnableAnimatedScrolling = false;
  (this->_ScrollbarVisibility).Value.Value.Value = (uchar)EVisibility::Visible.Value.Value;
  (this->_ScrollbarVisibility).bIsSet = true;
  *(undefined8 *)&(this->_ScrollbarVisibility).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_ScrollbarVisibility).Getter = 0;
  *(undefined8 *)&(this->_ScrollbarVisibility).Getter.field_0x8 = 0;
  this->_ScrollbarDragFocusCause = Mouse;
  this->_AllowOverscroll = Yes;
  pIVar4 = FAppStyle::Get();
  pFVar5 = ::FName::FName(&local_res8,"ScrollBar");
  pFVar6 = (FScrollBarStyle *)
           (**(code **)((longlong)*pIVar4 + 0xa0))(pIVar4,FScrollBarStyle::TypeName,*pFVar5,0,1);
  if (pFVar6 == (FScrollBarStyle *)0x0) {
    pFVar6 = FScrollBarStyle::GetDefault();
  }
  this->_ScrollBarStyle = pFVar6;
  (this->_ScrollbarDisabledVisibility).Value.Value = (uchar)EVisibility::Collapsed.Value.Value;
  this->_ConsumeMouseWheel = WhenScrollingPossible;
  pTVar2 = GlobalScrollAmount.Ref;
  bVar3 = IsInParallelGameThread();
  if (!bVar3) {
    bVar3 = IsInGameThread();
    lVar7 = 4;
    if (!bVar3) goto LAB_142f34c0c;
  }
  lVar7 = 0;
LAB_142f34c0c:
  fVar1 = *(float *)((longlong)pTVar2->ShadowedValue + lVar7);
  (this->_IsFocusable).Value = true;
  (this->_IsFocusable).bIsSet = true;
  this->_WheelScrollMultiplier = fVar1;
  this->_HandleGamepadEvents = true;
  this->_HandleDirectionalNavigation = true;
  *(undefined8 *)&(this->_IsFocusable).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_IsFocusable).Getter = 0;
  *(undefined8 *)&(this->_IsFocusable).Getter.field_0x8 = 0;
  *(undefined8 *)&(this->_OnItemToString_Debug).field_0x10 = 0;
  *(undefined8 *)&this->_OnItemToString_Debug = 0;
  *(undefined8 *)&(this->_OnItemToString_Debug).field_0x8 = 0;
  *(undefined8 *)&(this->_OnEnteredBadState).field_0x10 = 0;
  *(undefined8 *)&this->_OnEnteredBadState = 0;
  *(undefined8 *)&(this->_OnEnteredBadState).field_0x8 = 0;
  this->_WrapHorizontalNavigation = true;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 1;
  return this;
}

// FArguments @ 142f34c90

FArguments * __thiscall
STileView<TSharedPtr<FTestData,1>_>::FArguments::FArguments(FArguments *this)

{
  float fVar1;
  TConsoleVariableData<float> *pTVar2;
  bool bVar3;
  ISlateStyle *pIVar4;
  FName *pFVar5;
  FScrollBarStyle *pFVar6;
  longlong lVar7;
  FName local_res8;
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  *(undefined8 *)&(this->_OnGenerateTile).field_0x10 = 0;
  *(undefined8 *)&this->_OnGenerateTile = 0;
  *(undefined8 *)&(this->_OnGenerateTile).field_0x8 = 0;
  *(undefined8 *)&(this->_OnRefreshTile).field_0x10 = 0;
  *(undefined8 *)&this->_OnRefreshTile = 0;
  *(undefined8 *)&(this->_OnRefreshTile).field_0x8 = 0;
  *(undefined8 *)&(this->_OnTileReleased).field_0x10 = 0;
  *(undefined8 *)&this->_OnTileReleased = 0;
  *(undefined8 *)&(this->_OnTileReleased).field_0x8 = 0;
  *(undefined8 *)&this->_OnTileViewScrolled = 0;
  *(undefined8 *)&(this->_OnTileViewScrolled).field_0x8 = 0;
  *(undefined4 *)&(this->_OnTileViewScrolled).field_0x10 = 0;
  *(undefined8 *)&this->_OnFinishedScrolling = 0;
  *(undefined8 *)&(this->_OnFinishedScrolling).field_0x8 = 0;
  *(undefined4 *)&(this->_OnFinishedScrolling).field_0x10 = 0;
  *(undefined8 *)&this->_OnItemScrolledIntoView = 0;
  *(undefined8 *)&(this->_OnItemScrolledIntoView).field_0x8 = 0;
  *(undefined4 *)&(this->_OnItemScrolledIntoView).field_0x10 = 0;
  (this->_ListItemsSource_SharedObservableArray).Object =
       (TObservableArray<TSharedPtr<FTestData,1>_> *)0x0;
  (this->_ListItemsSource_SharedObservableArray).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->_ItemHeight).Value = 128.0;
  (this->_ItemHeight).bIsSet = true;
  this->_ListItemsSource_ArrayPointer =
       (TArray<TSharedPtr<FTestData,1>,TSizedDefaultAllocator<32>_> *)0x0;
  this->_ListItemsSource_ObservableArrayPointer = (TObservableArray<TSharedPtr<FTestData,1>_> *)0x0;
  *(undefined8 *)&(this->_ItemHeight).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_ItemHeight).Getter = 0;
  *(undefined8 *)&(this->_ItemHeight).Getter.field_0x8 = 0;
  (this->_ItemWidth).Value = 128.0;
  (this->_ItemWidth).bIsSet = true;
  *(undefined8 *)&(this->_ItemWidth).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_ItemWidth).Getter = 0;
  *(undefined8 *)&(this->_ItemWidth).Getter.field_0x8 = 0;
  (this->_ItemAlignment).Value = EvenlyDistributed;
  (this->_ItemAlignment).bIsSet = true;
  *(undefined8 *)&(this->_ItemAlignment).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_ItemAlignment).Getter = 0;
  *(undefined8 *)&(this->_ItemAlignment).Getter.field_0x8 = 0;
  *(undefined8 *)&(this->_OnContextMenuOpening).field_0x10 = 0;
  *(undefined8 *)&this->_OnContextMenuOpening = 0;
  *(undefined8 *)&(this->_OnContextMenuOpening).field_0x8 = 0;
  *(undefined8 *)&(this->_OnItemsRebuilt).field_0x10 = 0;
  *(undefined8 *)&this->_OnItemsRebuilt = 0;
  *(undefined8 *)&(this->_OnItemsRebuilt).field_0x8 = 0;
  *(undefined8 *)&(this->_OnMouseButtonClick).field_0x10 = 0;
  *(undefined8 *)&this->_OnMouseButtonClick = 0;
  *(undefined8 *)&(this->_OnMouseButtonClick).field_0x8 = 0;
  *(undefined8 *)&(this->_OnMouseButtonDoubleClick).field_0x10 = 0;
  *(undefined8 *)&this->_OnMouseButtonDoubleClick = 0;
  *(undefined8 *)&(this->_OnMouseButtonDoubleClick).field_0x8 = 0;
  *(undefined8 *)&(this->_OnSelectionChanged).field_0x10 = 0;
  *(undefined8 *)&this->_OnSelectionChanged = 0;
  *(undefined8 *)&(this->_OnSelectionChanged).field_0x8 = 0;
  *(undefined8 *)&(this->_OnIsSelectableOrNavigable).field_0x10 = 0;
  *(undefined8 *)&this->_OnIsSelectableOrNavigable = 0;
  *(undefined8 *)&(this->_OnIsSelectableOrNavigable).field_0x8 = 0;
  (this->_SelectionMode).Value = Multi;
  (this->_SelectionMode).bIsSet = true;
  *(undefined8 *)&(this->_SelectionMode).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_SelectionMode).Getter = 0;
  *(undefined8 *)&(this->_SelectionMode).Getter.field_0x8 = 0;
  (this->_ExternalScrollbar).Object = (SScrollBar *)0x0;
  (this->_ExternalScrollbar).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->_FixedLineScrollOffset).bIsSet = false;
  this->_ClearSelectionOnClick = true;
  this->_Orientation = Orient_Vertical;
  this->_EnableAnimatedScrolling = false;
  (this->_ScrollbarVisibility).Value.Value.Value = (uchar)EVisibility::Visible.Value.Value;
  (this->_ScrollbarVisibility).bIsSet = true;
  *(undefined8 *)&(this->_ScrollbarVisibility).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_ScrollbarVisibility).Getter = 0;
  *(undefined8 *)&(this->_ScrollbarVisibility).Getter.field_0x8 = 0;
  this->_ScrollbarDragFocusCause = Mouse;
  this->_AllowOverscroll = Yes;
  pIVar4 = FAppStyle::Get();
  pFVar5 = ::FName::FName(&local_res8,"ScrollBar");
  pFVar6 = (FScrollBarStyle *)
           (**(code **)((longlong)*pIVar4 + 0xa0))(pIVar4,FScrollBarStyle::TypeName,*pFVar5,0,1);
  if (pFVar6 == (FScrollBarStyle *)0x0) {
    pFVar6 = FScrollBarStyle::GetDefault();
  }
  this->_ScrollBarStyle = pFVar6;
  (this->_ScrollbarDisabledVisibility).Value.Value = (uchar)EVisibility::Collapsed.Value.Value;
  this->_ConsumeMouseWheel = WhenScrollingPossible;
  pTVar2 = GlobalScrollAmount.Ref;
  bVar3 = IsInParallelGameThread();
  if (!bVar3) {
    bVar3 = IsInGameThread();
    lVar7 = 4;
    if (!bVar3) goto LAB_142f34f2c;
  }
  lVar7 = 0;
LAB_142f34f2c:
  fVar1 = *(float *)((longlong)pTVar2->ShadowedValue + lVar7);
  (this->_IsFocusable).Value = true;
  (this->_IsFocusable).bIsSet = true;
  this->_WheelScrollMultiplier = fVar1;
  this->_HandleGamepadEvents = true;
  this->_HandleDirectionalNavigation = true;
  *(undefined8 *)&(this->_IsFocusable).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_IsFocusable).Getter = 0;
  *(undefined8 *)&(this->_IsFocusable).Getter.field_0x8 = 0;
  *(undefined8 *)&(this->_OnItemToString_Debug).field_0x10 = 0;
  *(undefined8 *)&this->_OnItemToString_Debug = 0;
  *(undefined8 *)&(this->_OnItemToString_Debug).field_0x8 = 0;
  *(undefined8 *)&(this->_OnEnteredBadState).field_0x10 = 0;
  *(undefined8 *)&this->_OnEnteredBadState = 0;
  *(undefined8 *)&(this->_OnEnteredBadState).field_0x8 = 0;
  this->_WrapHorizontalNavigation = true;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 1;
  return this;
}

// FArguments @ 142f34fb0

FArguments * __thiscall STreeView<TSharedPtr<int,1>_>::FArguments::FArguments(FArguments *this)

{
  TConsoleVariableData<float> *pTVar1;
  bool bVar2;
  ISlateStyle *pIVar3;
  FName *pFVar4;
  FTableViewStyle *pFVar5;
  FScrollBarStyle *pFVar6;
  longlong lVar7;
  FName local_res8;
  FName local_res10;
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  pIVar3 = FAppStyle::Get();
  pFVar4 = ::FName::FName(&local_res8,"TreeView");
  pFVar5 = (FTableViewStyle *)
           (**(code **)((longlong)*pIVar3 + 0xa0))(pIVar3,FTableViewStyle::TypeName,*pFVar4,0,1);
  if (pFVar5 == (FTableViewStyle *)0x0) {
    pFVar5 = FTableViewStyle::GetDefault();
  }
  this->_TreeViewStyle = pFVar5;
  *(undefined8 *)&(this->_OnGenerateRow).field_0x10 = 0;
  *(undefined8 *)&this->_OnGenerateRow = 0;
  *(undefined8 *)&(this->_OnGenerateRow).field_0x8 = 0;
  *(undefined8 *)&(this->_OnGeneratePinnedRow).field_0x10 = 0;
  *(undefined8 *)&this->_OnGeneratePinnedRow = 0;
  *(undefined8 *)&(this->_OnGeneratePinnedRow).field_0x8 = 0;
  *(undefined8 *)&(this->_OnRefreshRow).field_0x10 = 0;
  *(undefined8 *)&this->_OnRefreshRow = 0;
  *(undefined8 *)&(this->_OnRefreshRow).field_0x8 = 0;
  *(undefined8 *)&this->_OnRowReleased = 0;
  *(undefined8 *)&(this->_OnRowReleased).field_0x8 = 0;
  *(undefined4 *)&(this->_OnRowReleased).field_0x10 = 0;
  *(undefined8 *)&this->_OnTreeViewScrolled = 0;
  *(undefined8 *)&(this->_OnTreeViewScrolled).field_0x8 = 0;
  *(undefined4 *)&(this->_OnTreeViewScrolled).field_0x10 = 0;
  *(undefined8 *)&this->_OnFinishedScrolling = 0;
  *(undefined8 *)&(this->_OnFinishedScrolling).field_0x8 = 0;
  *(undefined4 *)&(this->_OnFinishedScrolling).field_0x10 = 0;
  *(undefined8 *)&this->_OnItemScrolledIntoView = 0;
  *(undefined8 *)&(this->_OnItemScrolledIntoView).field_0x8 = 0;
  *(undefined4 *)&(this->_OnItemScrolledIntoView).field_0x10 = 0;
  *(undefined8 *)&(this->_OnGetChildren).field_0x10 = 0;
  *(undefined8 *)&this->_OnGetChildren = 0;
  *(undefined8 *)&(this->_OnGetChildren).field_0x8 = 0;
  *(undefined8 *)&(this->_OnSetExpansionRecursive).field_0x10 = 0;
  *(undefined8 *)&this->_OnSetExpansionRecursive = 0;
  *(undefined8 *)&(this->_OnSetExpansionRecursive).field_0x8 = 0;
  (this->_TreeItemsSource_SharedObservableArray).Object =
       (TObservableArray<TSharedPtr<int,1>_> *)0x0;
  (this->_TreeItemsSource_SharedObservableArray).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->_ItemHeight).Value = 0.0;
  (this->_ItemHeight).bIsSet = false;
  this->_TreeItemsSource_ArrayPointer = (TArray<TSharedPtr<int,1>,TSizedDefaultAllocator<32>_> *)0x0
  ;
  this->_TreeItemsSource_ObservableArrayPointer = (TObservableArray<TSharedPtr<int,1>_> *)0x0;
  *(undefined8 *)&(this->_ItemHeight).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_ItemHeight).Getter = 0;
  *(undefined8 *)&(this->_ItemHeight).Getter.field_0x8 = 0;
  (this->_MaxPinnedItems).Value = 6;
  (this->_MaxPinnedItems).bIsSet = true;
  *(undefined8 *)&(this->_MaxPinnedItems).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_MaxPinnedItems).Getter = 0;
  *(undefined8 *)&(this->_MaxPinnedItems).Getter.field_0x8 = 0;
  *(undefined8 *)&(this->_OnContextMenuOpening).field_0x10 = 0;
  *(undefined8 *)&this->_OnContextMenuOpening = 0;
  *(undefined8 *)&(this->_OnContextMenuOpening).field_0x8 = 0;
  *(undefined8 *)&(this->_OnItemsRebuilt).field_0x10 = 0;
  *(undefined8 *)&this->_OnItemsRebuilt = 0;
  *(undefined8 *)&(this->_OnItemsRebuilt).field_0x8 = 0;
  *(undefined8 *)&(this->_OnMouseButtonClick).field_0x10 = 0;
  *(undefined8 *)&this->_OnMouseButtonClick = 0;
  *(undefined8 *)&(this->_OnMouseButtonClick).field_0x8 = 0;
  *(undefined8 *)&(this->_OnMouseButtonDoubleClick).field_0x10 = 0;
  *(undefined8 *)&this->_OnMouseButtonDoubleClick = 0;
  *(undefined8 *)&(this->_OnMouseButtonDoubleClick).field_0x8 = 0;
  *(undefined8 *)&(this->_OnSelectionChanged).field_0x10 = 0;
  *(undefined8 *)&this->_OnSelectionChanged = 0;
  *(undefined8 *)&(this->_OnSelectionChanged).field_0x8 = 0;
  *(undefined8 *)&(this->_OnExpansionChanged).field_0x10 = 0;
  *(undefined8 *)&this->_OnExpansionChanged = 0;
  *(undefined8 *)&(this->_OnExpansionChanged).field_0x8 = 0;
  *(undefined8 *)&(this->_OnIsSelectableOrNavigable).field_0x10 = 0;
  *(undefined8 *)&this->_OnIsSelectableOrNavigable = 0;
  *(undefined8 *)&(this->_OnIsSelectableOrNavigable).field_0x8 = 0;
  (this->_SelectionMode).Value = Multi;
  (this->_SelectionMode).bIsSet = true;
  *(undefined8 *)&(this->_SelectionMode).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_SelectionMode).Getter = 0;
  *(undefined8 *)&(this->_SelectionMode).Getter.field_0x8 = 0;
  (this->_HeaderRow).Object = (SHeaderRow *)0x0;
  (this->_HeaderRow).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->_ClearSelectionOnClick = true;
  (this->_ExternalScrollbar).Object = (SScrollBar *)0x0;
  (this->_ExternalScrollbar).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->_EnableAnimatedScrolling = false;
  (this->_FixedLineScrollOffset).bIsSet = false;
  this->_ScrollbarDragFocusCause = Mouse;
  this->_ConsumeMouseWheel = WhenScrollingPossible;
  this->_AllowOverscroll = Yes;
  pIVar3 = FAppStyle::Get();
  pFVar4 = ::FName::FName(&local_res10,"ScrollBar");
  pFVar6 = (FScrollBarStyle *)
           (**(code **)((longlong)*pIVar3 + 0xa0))(pIVar3,FScrollBarStyle::TypeName,*pFVar4,0,1);
  if (pFVar6 == (FScrollBarStyle *)0x0) {
    pFVar6 = FScrollBarStyle::GetDefault();
  }
  this->_ScrollBarStyle = pFVar6;
  this->_PreventThrottling = false;
  pTVar1 = GlobalScrollAmount.Ref;
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    lVar7 = 4;
    if (!bVar2) goto LAB_142f3529e;
  }
  lVar7 = 0;
LAB_142f3529e:
  this->_WheelScrollMultiplier = *(float *)((longlong)pTVar1->ShadowedValue + lVar7);
  this->_ShadowBoxStyle = (FScrollBoxStyle *)0x0;
  this->_bEnableShadowBoxStyle = false;
  *(undefined8 *)&(this->_OnItemToString_Debug).field_0x10 = 0;
  *(undefined8 *)&this->_OnItemToString_Debug = 0;
  *(undefined8 *)&(this->_OnItemToString_Debug).field_0x8 = 0;
  *(undefined8 *)&(this->_OnEnteredBadState).field_0x10 = 0;
  *(undefined8 *)&this->_OnEnteredBadState = 0;
  *(undefined8 *)&(this->_OnEnteredBadState).field_0x8 = 0;
  this->_ReturnFocusToSelection = false;
  (this->_ShouldStackHierarchyHeaders).Value = false;
  (this->_ShouldStackHierarchyHeaders).bIsSet = true;
  this->_HandleGamepadEvents = true;
  this->_HandleDirectionalNavigation = true;
  this->_AllowInvisibleItemSelection = false;
  this->_HighlightParentNodesForSelection = false;
  *(undefined8 *)&(this->_ShouldStackHierarchyHeaders).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_ShouldStackHierarchyHeaders).Getter = 0;
  *(undefined8 *)&(this->_ShouldStackHierarchyHeaders).Getter.field_0x8 = 0;
  *(undefined8 *)&this->_OnKeyDownHandler = 0;
  *(undefined8 *)&(this->_OnKeyDownHandler).field_0x8 = 0;
  *(undefined4 *)&(this->_OnKeyDownHandler).field_0x10 = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 1;
  return this;
}

// FArguments @ 142f35350

FArguments * __thiscall
STreeView<TSharedPtr<FTestData,1>_>::FArguments::FArguments(FArguments *this)

{
  TConsoleVariableData<float> *pTVar1;
  bool bVar2;
  ISlateStyle *pIVar3;
  FName *pFVar4;
  FTableViewStyle *pFVar5;
  FScrollBarStyle *pFVar6;
  longlong lVar7;
  FName local_res8;
  FName local_res10;
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  pIVar3 = FAppStyle::Get();
  pFVar4 = ::FName::FName(&local_res8,"TreeView");
  pFVar5 = (FTableViewStyle *)
           (**(code **)((longlong)*pIVar3 + 0xa0))(pIVar3,FTableViewStyle::TypeName,*pFVar4,0,1);
  if (pFVar5 == (FTableViewStyle *)0x0) {
    pFVar5 = FTableViewStyle::GetDefault();
  }
  this->_TreeViewStyle = pFVar5;
  *(undefined8 *)&(this->_OnGenerateRow).field_0x10 = 0;
  *(undefined8 *)&this->_OnGenerateRow = 0;
  *(undefined8 *)&(this->_OnGenerateRow).field_0x8 = 0;
  *(undefined8 *)&(this->_OnGeneratePinnedRow).field_0x10 = 0;
  *(undefined8 *)&this->_OnGeneratePinnedRow = 0;
  *(undefined8 *)&(this->_OnGeneratePinnedRow).field_0x8 = 0;
  *(undefined8 *)&(this->_OnRefreshRow).field_0x10 = 0;
  *(undefined8 *)&this->_OnRefreshRow = 0;
  *(undefined8 *)&(this->_OnRefreshRow).field_0x8 = 0;
  *(undefined8 *)&this->_OnRowReleased = 0;
  *(undefined8 *)&(this->_OnRowReleased).field_0x8 = 0;
  *(undefined4 *)&(this->_OnRowReleased).field_0x10 = 0;
  *(undefined8 *)&this->_OnTreeViewScrolled = 0;
  *(undefined8 *)&(this->_OnTreeViewScrolled).field_0x8 = 0;
  *(undefined4 *)&(this->_OnTreeViewScrolled).field_0x10 = 0;
  *(undefined8 *)&this->_OnFinishedScrolling = 0;
  *(undefined8 *)&(this->_OnFinishedScrolling).field_0x8 = 0;
  *(undefined4 *)&(this->_OnFinishedScrolling).field_0x10 = 0;
  *(undefined8 *)&this->_OnItemScrolledIntoView = 0;
  *(undefined8 *)&(this->_OnItemScrolledIntoView).field_0x8 = 0;
  *(undefined4 *)&(this->_OnItemScrolledIntoView).field_0x10 = 0;
  *(undefined8 *)&(this->_OnGetChildren).field_0x10 = 0;
  *(undefined8 *)&this->_OnGetChildren = 0;
  *(undefined8 *)&(this->_OnGetChildren).field_0x8 = 0;
  *(undefined8 *)&(this->_OnSetExpansionRecursive).field_0x10 = 0;
  *(undefined8 *)&this->_OnSetExpansionRecursive = 0;
  *(undefined8 *)&(this->_OnSetExpansionRecursive).field_0x8 = 0;
  (this->_TreeItemsSource_SharedObservableArray).Object =
       (TObservableArray<TSharedPtr<FTestData,1>_> *)0x0;
  (this->_TreeItemsSource_SharedObservableArray).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->_ItemHeight).Value = 0.0;
  (this->_ItemHeight).bIsSet = false;
  this->_TreeItemsSource_ArrayPointer =
       (TArray<TSharedPtr<FTestData,1>,TSizedDefaultAllocator<32>_> *)0x0;
  this->_TreeItemsSource_ObservableArrayPointer = (TObservableArray<TSharedPtr<FTestData,1>_> *)0x0;
  *(undefined8 *)&(this->_ItemHeight).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_ItemHeight).Getter = 0;
  *(undefined8 *)&(this->_ItemHeight).Getter.field_0x8 = 0;
  (this->_MaxPinnedItems).Value = 6;
  (this->_MaxPinnedItems).bIsSet = true;
  *(undefined8 *)&(this->_MaxPinnedItems).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_MaxPinnedItems).Getter = 0;
  *(undefined8 *)&(this->_MaxPinnedItems).Getter.field_0x8 = 0;
  *(undefined8 *)&(this->_OnContextMenuOpening).field_0x10 = 0;
  *(undefined8 *)&this->_OnContextMenuOpening = 0;
  *(undefined8 *)&(this->_OnContextMenuOpening).field_0x8 = 0;
  *(undefined8 *)&(this->_OnItemsRebuilt).field_0x10 = 0;
  *(undefined8 *)&this->_OnItemsRebuilt = 0;
  *(undefined8 *)&(this->_OnItemsRebuilt).field_0x8 = 0;
  *(undefined8 *)&(this->_OnMouseButtonClick).field_0x10 = 0;
  *(undefined8 *)&this->_OnMouseButtonClick = 0;
  *(undefined8 *)&(this->_OnMouseButtonClick).field_0x8 = 0;
  *(undefined8 *)&(this->_OnMouseButtonDoubleClick).field_0x10 = 0;
  *(undefined8 *)&this->_OnMouseButtonDoubleClick = 0;
  *(undefined8 *)&(this->_OnMouseButtonDoubleClick).field_0x8 = 0;
  *(undefined8 *)&(this->_OnSelectionChanged).field_0x10 = 0;
  *(undefined8 *)&this->_OnSelectionChanged = 0;
  *(undefined8 *)&(this->_OnSelectionChanged).field_0x8 = 0;
  *(undefined8 *)&(this->_OnExpansionChanged).field_0x10 = 0;
  *(undefined8 *)&this->_OnExpansionChanged = 0;
  *(undefined8 *)&(this->_OnExpansionChanged).field_0x8 = 0;
  *(undefined8 *)&(this->_OnIsSelectableOrNavigable).field_0x10 = 0;
  *(undefined8 *)&this->_OnIsSelectableOrNavigable = 0;
  *(undefined8 *)&(this->_OnIsSelectableOrNavigable).field_0x8 = 0;
  (this->_SelectionMode).Value = Multi;
  (this->_SelectionMode).bIsSet = true;
  *(undefined8 *)&(this->_SelectionMode).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_SelectionMode).Getter = 0;
  *(undefined8 *)&(this->_SelectionMode).Getter.field_0x8 = 0;
  (this->_HeaderRow).Object = (SHeaderRow *)0x0;
  (this->_HeaderRow).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->_ClearSelectionOnClick = true;
  (this->_ExternalScrollbar).Object = (SScrollBar *)0x0;
  (this->_ExternalScrollbar).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->_EnableAnimatedScrolling = false;
  (this->_FixedLineScrollOffset).bIsSet = false;
  this->_ScrollbarDragFocusCause = Mouse;
  this->_ConsumeMouseWheel = WhenScrollingPossible;
  this->_AllowOverscroll = Yes;
  pIVar3 = FAppStyle::Get();
  pFVar4 = ::FName::FName(&local_res10,"ScrollBar");
  pFVar6 = (FScrollBarStyle *)
           (**(code **)((longlong)*pIVar3 + 0xa0))(pIVar3,FScrollBarStyle::TypeName,*pFVar4,0,1);
  if (pFVar6 == (FScrollBarStyle *)0x0) {
    pFVar6 = FScrollBarStyle::GetDefault();
  }
  this->_ScrollBarStyle = pFVar6;
  this->_PreventThrottling = false;
  pTVar1 = GlobalScrollAmount.Ref;
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    lVar7 = 4;
    if (!bVar2) goto LAB_142f3563e;
  }
  lVar7 = 0;
LAB_142f3563e:
  this->_WheelScrollMultiplier = *(float *)((longlong)pTVar1->ShadowedValue + lVar7);
  this->_ShadowBoxStyle = (FScrollBoxStyle *)0x0;
  this->_bEnableShadowBoxStyle = false;
  *(undefined8 *)&(this->_OnItemToString_Debug).field_0x10 = 0;
  *(undefined8 *)&this->_OnItemToString_Debug = 0;
  *(undefined8 *)&(this->_OnItemToString_Debug).field_0x8 = 0;
  *(undefined8 *)&(this->_OnEnteredBadState).field_0x10 = 0;
  *(undefined8 *)&this->_OnEnteredBadState = 0;
  *(undefined8 *)&(this->_OnEnteredBadState).field_0x8 = 0;
  this->_ReturnFocusToSelection = false;
  (this->_ShouldStackHierarchyHeaders).Value = false;
  (this->_ShouldStackHierarchyHeaders).bIsSet = true;
  this->_HandleGamepadEvents = true;
  this->_HandleDirectionalNavigation = true;
  this->_AllowInvisibleItemSelection = false;
  this->_HighlightParentNodesForSelection = false;
  *(undefined8 *)&(this->_ShouldStackHierarchyHeaders).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_ShouldStackHierarchyHeaders).Getter = 0;
  *(undefined8 *)&(this->_ShouldStackHierarchyHeaders).Getter.field_0x8 = 0;
  *(undefined8 *)&this->_OnKeyDownHandler = 0;
  *(undefined8 *)&(this->_OnKeyDownHandler).field_0x8 = 0;
  *(undefined4 *)&(this->_OnKeyDownHandler).field_0x10 = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 1;
  return this;
}

// FArguments @ 142f356f0

FArguments * __thiscall SColorGradingWheel::FArguments::FArguments(FArguments *this)

{
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  *(undefined8 *)&(this->_SelectedColor).Value.field0_0x0 = 0;
  *(undefined8 *)((longlong)&(this->_SelectedColor).Value.field0_0x0 + 8) = 0;
  (this->_SelectedColor).bIsSet = false;
  *(undefined8 *)&(this->_SelectedColor).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_SelectedColor).Getter = 0;
  *(undefined8 *)&(this->_SelectedColor).Getter.field_0x8 = 0;
  (this->_DesiredWheelSize).Value = 0;
  (this->_DesiredWheelSize).bIsSet = false;
  *(undefined8 *)&(this->_DesiredWheelSize).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_DesiredWheelSize).Getter = 0;
  *(undefined8 *)&(this->_DesiredWheelSize).Getter.field_0x8 = 0;
  (this->_ExponentDisplacement).Value = 0.0;
  (this->_ExponentDisplacement).bIsSet = false;
  *(undefined8 *)&(this->_ExponentDisplacement).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_ExponentDisplacement).Getter = 0;
  *(undefined8 *)&(this->_ExponentDisplacement).Getter.field_0x8 = 0;
  *(undefined8 *)&(this->_OnMouseCaptureBegin).field_0x10 = 0;
  *(undefined8 *)&this->_OnMouseCaptureBegin = 0;
  *(undefined8 *)&(this->_OnMouseCaptureBegin).field_0x8 = 0;
  *(undefined8 *)&(this->_OnMouseCaptureEnd).field_0x10 = 0;
  *(undefined8 *)&this->_OnMouseCaptureEnd = 0;
  *(undefined8 *)&(this->_OnMouseCaptureEnd).field_0x8 = 0;
  *(undefined8 *)&(this->_OnValueChanged).field_0x10 = 0;
  *(undefined8 *)&this->_OnValueChanged = 0;
  *(undefined8 *)&(this->_OnValueChanged).field_0x8 = 0;
  return this;
}

// FArguments @ 142f357c0

/* WARNING: Enum "Type": Some values do not have unique names */

FArguments * __thiscall SColorPicker::FArguments::FArguments(FArguments *this)

{
  code *pcVar1;
  ISlateStyle *pIVar2;
  FName *pFVar3;
  FSlateBrush *pFVar4;
  FName local_res8;
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  (this->_TargetColorAttribute).bIsSet = true;
  *(undefined8 *)&(this->_TargetColorAttribute).Value.field0_0x0 = 0;
  *(undefined8 *)((longlong)&(this->_TargetColorAttribute).Value.field0_0x0 + 8) = 0;
  *(undefined8 *)&(this->_TargetColorAttribute).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_TargetColorAttribute).Getter = 0;
  *(undefined8 *)&(this->_TargetColorAttribute).Getter.field_0x8 = 0;
  pIVar2 = FAppStyle::Get();
  pcVar1 = *(code **)((longlong)*pIVar2 + 0x50);
  pFVar3 = ::FName::FName(&local_res8,"ColorWheel.HueValueCircle");
  pFVar4 = (FSlateBrush *)(*pcVar1)(pIVar2,*pFVar3,0,0);
  (this->_ColorWheelBrush).Value = pFVar4;
  (this->_ColorWheelBrush).bIsSet = true;
  *(undefined8 *)&(this->_ColorWheelBrush).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_ColorWheelBrush).Getter = 0;
  *(undefined8 *)&(this->_ColorWheelBrush).Getter.field_0x8 = 0;
  (this->_TargetFColors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->_TargetFColors).ArrayNum = 0;
  (this->_TargetFColors).ArrayMax = 0;
  (this->_TargetLinearColors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->_TargetLinearColors).ArrayNum = 0;
  (this->_TargetLinearColors).ArrayMax = 0;
  (this->_TargetColorChannels).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->_TargetColorChannels).ArrayNum = 0;
  (this->_TargetColorChannels).ArrayMax = 0;
  (this->_UseAlpha).Value = true;
  (this->_UseAlpha).bIsSet = true;
  *(undefined8 *)&(this->_UseAlpha).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_UseAlpha).Getter = 0;
  *(undefined8 *)&(this->_UseAlpha).Getter.field_0x8 = 0;
  (this->_OnlyRefreshOnMouseUp).Value = false;
  (this->_OnlyRefreshOnMouseUp).bIsSet = true;
  *(undefined8 *)&(this->_OnlyRefreshOnMouseUp).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_OnlyRefreshOnMouseUp).Getter = 0;
  *(undefined8 *)&(this->_OnlyRefreshOnMouseUp).Getter.field_0x8 = 0;
  (this->_OnlyRefreshOnOk).Value = false;
  (this->_OnlyRefreshOnOk).bIsSet = true;
  *(undefined8 *)&(this->_OnlyRefreshOnOk).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_OnlyRefreshOnOk).Getter = 0;
  *(undefined8 *)&(this->_OnlyRefreshOnOk).Getter.field_0x8 = 0;
  *(undefined8 *)&(this->_OnColorCommitted).field_0x10 = 0;
  *(undefined8 *)&this->_OnColorCommitted = 0;
  *(undefined8 *)&(this->_OnColorCommitted).field_0x8 = 0;
  *(undefined8 *)&(this->_PreColorCommitted).field_0x10 = 0;
  *(undefined8 *)&this->_PreColorCommitted = 0;
  *(undefined8 *)&(this->_PreColorCommitted).field_0x8 = 0;
  *(undefined8 *)&(this->_OnColorPickerCancelled).field_0x10 = 0;
  *(undefined8 *)&this->_OnColorPickerCancelled = 0;
  *(undefined8 *)&(this->_OnColorPickerCancelled).field_0x8 = 0;
  *(undefined8 *)&(this->_OnColorPickerWindowClosed).field_0x10 = 0;
  *(undefined8 *)&this->_OnColorPickerWindowClosed = 0;
  *(undefined8 *)&(this->_OnColorPickerWindowClosed).field_0x8 = 0;
  *(undefined8 *)&(this->_OnInteractivePickBegin).field_0x10 = 0;
  *(undefined8 *)&this->_OnInteractivePickBegin = 0;
  *(undefined8 *)&(this->_OnInteractivePickBegin).field_0x8 = 0;
  *(undefined8 *)&(this->_OnInteractivePickEnd).field_0x10 = 0;
  *(undefined8 *)&this->_OnInteractivePickEnd = 0;
  *(undefined8 *)&(this->_OnInteractivePickEnd).field_0x8 = 0;
  (this->_ParentWindow).Value.Object = (SWindow *)0x0;
  (this->_ParentWindow).Value.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->_ParentWindow).bIsSet = false;
  *(undefined8 *)&(this->_ParentWindow).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_ParentWindow).Getter = 0;
  *(undefined8 *)&(this->_ParentWindow).Getter.field_0x8 = 0;
  (this->_DisplayGamma).Value = 2.2;
  (this->_DisplayGamma).bIsSet = true;
  *(undefined8 *)&(this->_DisplayGamma).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_DisplayGamma).Getter = 0;
  *(undefined8 *)&(this->_DisplayGamma).Getter.field_0x8 = 0;
  *(undefined4 *)&(this->_sRGBOverride).bIsSet = 0;
  this->_ClampValue = false;
  (this->_OptionalOwningDetailsView).Value.Object = (SWidget *)0x0;
  (this->_OptionalOwningDetailsView).Value.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->_OptionalOwningDetailsView).bIsSet = true;
  *(undefined8 *)&(this->_OptionalOwningDetailsView).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_OptionalOwningDetailsView).Getter = 0;
  *(undefined8 *)&(this->_OptionalOwningDetailsView).Getter.field_0x8 = 0;
  return this;
}

// FArguments @ 142f35a00

FArguments * __thiscall SColorSlider::FArguments::FArguments(FArguments *this)

{
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  (this->_Value).bIsSet = true;
  (this->_Value).Value = 0.0;
  *(undefined8 *)&(this->_Value).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_Value).Getter = 0;
  *(undefined8 *)&(this->_Value).Getter.field_0x8 = 0;
  (this->_MinSpinBoxValue).Value = 0.0;
  (this->_MinSpinBoxValue).bIsSet = true;
  *(undefined8 *)&(this->_MinSpinBoxValue).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_MinSpinBoxValue).Getter = 0;
  *(undefined8 *)&(this->_MinSpinBoxValue).Getter.field_0x8 = 0;
  (this->_MaxSpinBoxValue).Value = 1.0;
  (this->_MaxSpinBoxValue).bIsSet = true;
  *(undefined8 *)&(this->_MaxSpinBoxValue).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_MaxSpinBoxValue).Getter = 0;
  *(undefined8 *)&(this->_MaxSpinBoxValue).Getter.field_0x8 = 0;
  (this->_MinSliderValue).Value = 0.0;
  (this->_MinSliderValue).bIsSet = true;
  *(undefined8 *)&(this->_MinSliderValue).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_MinSliderValue).Getter = 0;
  *(undefined8 *)&(this->_MinSliderValue).Getter.field_0x8 = 0;
  (this->_MaxSliderValue).Value = 1.0;
  (this->_MaxSliderValue).bIsSet = true;
  *(undefined8 *)&(this->_MaxSliderValue).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_MaxSliderValue).Getter = 0;
  *(undefined8 *)&(this->_MaxSliderValue).Getter.field_0x8 = 0;
  (this->_Delta).Value = 0.01;
  (this->_Delta).bIsSet = true;
  *(undefined8 *)&(this->_Delta).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_Delta).Getter = 0;
  *(undefined8 *)&(this->_Delta).Getter.field_0x8 = 0;
  (this->_SupportDynamicSliderMaxValue).Value = true;
  (this->_SupportDynamicSliderMaxValue).bIsSet = true;
  *(undefined8 *)&(this->_SupportDynamicSliderMaxValue).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_SupportDynamicSliderMaxValue).Getter = 0;
  *(undefined8 *)&(this->_SupportDynamicSliderMaxValue).Getter.field_0x8 = 0;
  (this->_Orientation).Value = Orient_Horizontal;
  (this->_Orientation).bIsSet = true;
  *(undefined8 *)&(this->_Orientation).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_Orientation).Getter = 0;
  *(undefined8 *)&(this->_Orientation).Getter.field_0x8 = 0;
  FText::FText(&(this->_Label).Value);
  (this->_Label).bIsSet = false;
  *(undefined8 *)&(this->_Label).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_Label).Getter = 0;
  *(undefined8 *)&(this->_Label).Getter.field_0x8 = 0;
  (this->_GradientColors).Value.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->_GradientColors).Value.ArrayNum = 0;
  (this->_GradientColors).Value.ArrayMax = 0;
  (this->_GradientColors).bIsSet = false;
  *(undefined8 *)&(this->_GradientColors).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_GradientColors).Getter = 0;
  *(undefined8 *)&(this->_GradientColors).Getter.field_0x8 = 0;
  (this->_HasAlphaBackground).Value = false;
  (this->_HasAlphaBackground).bIsSet = true;
  *(undefined8 *)&(this->_HasAlphaBackground).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_HasAlphaBackground).Getter = 0;
  *(undefined8 *)&(this->_HasAlphaBackground).Getter.field_0x8 = 0;
  (this->_UseSRGB).Value = true;
  (this->_UseSRGB).bIsSet = true;
  *(undefined8 *)&(this->_UseSRGB).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_UseSRGB).Getter = 0;
  *(undefined8 *)&(this->_UseSRGB).Getter.field_0x8 = 0;
  *(undefined8 *)&(this->_OnValueChanged).field_0x10 = 0;
  *(undefined8 *)&this->_OnValueChanged = 0;
  *(undefined8 *)&(this->_OnValueChanged).field_0x8 = 0;
  *(undefined8 *)&(this->_OnBeginSliderMovement).field_0x10 = 0;
  *(undefined8 *)&this->_OnBeginSliderMovement = 0;
  *(undefined8 *)&(this->_OnBeginSliderMovement).field_0x8 = 0;
  *(undefined8 *)&(this->_OnEndSliderMovement).field_0x10 = 0;
  *(undefined8 *)&this->_OnEndSliderMovement = 0;
  *(undefined8 *)&(this->_OnEndSliderMovement).field_0x8 = 0;
  *(undefined8 *)&(this->_OnBeginSpinBoxMovement).field_0x10 = 0;
  *(undefined8 *)&this->_OnBeginSpinBoxMovement = 0;
  *(undefined8 *)&(this->_OnBeginSpinBoxMovement).field_0x8 = 0;
  *(undefined8 *)&(this->_OnEndSpinBoxMovement).field_0x10 = 0;
  *(undefined8 *)&this->_OnEndSpinBoxMovement = 0;
  *(undefined8 *)&(this->_OnEndSpinBoxMovement).field_0x8 = 0;
  return this;
}

// FArguments @ 142f35c50

FArguments * __thiscall SColorSpectrum::FArguments::FArguments(FArguments *this)

{
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  *(undefined8 *)&(this->_SelectedColor).Value.field0_0x0 = 0;
  *(undefined8 *)((longlong)&(this->_SelectedColor).Value.field0_0x0 + 8) = 0;
  (this->_SelectedColor).bIsSet = false;
  *(undefined8 *)&(this->_SelectedColor).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_SelectedColor).Getter = 0;
  *(undefined8 *)&(this->_SelectedColor).Getter.field_0x8 = 0;
  *(undefined8 *)&(this->_OnMouseCaptureBegin).field_0x10 = 0;
  *(undefined8 *)&this->_OnMouseCaptureBegin = 0;
  *(undefined8 *)&(this->_OnMouseCaptureBegin).field_0x8 = 0;
  *(undefined8 *)&(this->_OnMouseCaptureEnd).field_0x10 = 0;
  *(undefined8 *)&this->_OnMouseCaptureEnd = 0;
  *(undefined8 *)&(this->_OnMouseCaptureEnd).field_0x8 = 0;
  *(undefined8 *)&(this->_OnValueChanged).field_0x10 = 0;
  *(undefined8 *)&this->_OnValueChanged = 0;
  *(undefined8 *)&(this->_OnValueChanged).field_0x8 = 0;
  (this->_CtrlMultiplier).Value = 0.1;
  (this->_CtrlMultiplier).bIsSet = true;
  *(undefined8 *)&(this->_CtrlMultiplier).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_CtrlMultiplier).Getter = 0;
  *(undefined8 *)&(this->_CtrlMultiplier).Getter.field_0x8 = 0;
  return this;
}

// FArguments @ 142f35d00

FArguments * __thiscall SColorWheel::FArguments::FArguments(FArguments *this)

{
  code *pcVar1;
  ISlateStyle *pIVar2;
  FName *pFVar3;
  FSlateBrush *pFVar4;
  FName local_res8;
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  *(undefined8 *)&(this->_SelectedColor).Value.field0_0x0 = 0;
  *(undefined8 *)((longlong)&(this->_SelectedColor).Value.field0_0x0 + 8) = 0;
  (this->_SelectedColor).bIsSet = false;
  *(undefined8 *)&(this->_SelectedColor).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_SelectedColor).Getter = 0;
  *(undefined8 *)&(this->_SelectedColor).Getter.field_0x8 = 0;
  pIVar2 = FAppStyle::Get();
  pcVar1 = *(code **)((longlong)*pIVar2 + 0x50);
  pFVar3 = ::FName::FName(&local_res8,"ColorWheel.HueValueCircle");
  pFVar4 = (FSlateBrush *)(*pcVar1)(pIVar2,*pFVar3,0,0);
  (this->_ColorWheelBrush).Value = pFVar4;
  (this->_ColorWheelBrush).bIsSet = true;
  *(undefined8 *)&(this->_ColorWheelBrush).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_ColorWheelBrush).Getter = 0;
  *(undefined8 *)&(this->_ColorWheelBrush).Getter.field_0x8 = 0;
  *(undefined8 *)&(this->_OnMouseCaptureBegin).field_0x10 = 0;
  *(undefined8 *)&this->_OnMouseCaptureBegin = 0;
  *(undefined8 *)&(this->_OnMouseCaptureBegin).field_0x8 = 0;
  *(undefined8 *)&(this->_OnMouseCaptureEnd).field_0x10 = 0;
  *(undefined8 *)&this->_OnMouseCaptureEnd = 0;
  *(undefined8 *)&(this->_OnMouseCaptureEnd).field_0x8 = 0;
  *(undefined8 *)&(this->_OnValueChanged).field_0x10 = 0;
  *(undefined8 *)&this->_OnValueChanged = 0;
  *(undefined8 *)&(this->_OnValueChanged).field_0x8 = 0;
  (this->_CtrlMultiplier).Value = 0.1;
  (this->_CtrlMultiplier).bIsSet = true;
  *(undefined8 *)&(this->_CtrlMultiplier).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_CtrlMultiplier).Getter = 0;
  *(undefined8 *)&(this->_CtrlMultiplier).Getter.field_0x8 = 0;
  return this;
}

// FArguments @ 142f35e20

FArguments * __thiscall SExampleLayout::FArguments::FArguments(FArguments *this)

{
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return this;
}

// FArguments @ 142f35e40

FArguments * __thiscall SEyeDropperButton::FArguments::FArguments(FArguments *this)

{
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  *(undefined8 *)&(this->_OnValueChanged).field_0x10 = 0;
  *(undefined8 *)&this->_OnValueChanged = 0;
  *(undefined8 *)&(this->_OnValueChanged).field_0x8 = 0;
  *(undefined8 *)&(this->_OnBegin).field_0x10 = 0;
  *(undefined8 *)&this->_OnBegin = 0;
  *(undefined8 *)&(this->_OnBegin).field_0x8 = 0;
  *(undefined8 *)&(this->_OnComplete).field_0x10 = 0;
  *(undefined8 *)&this->_OnComplete = 0;
  *(undefined8 *)&(this->_OnComplete).field_0x8 = 0;
  (this->_DisplayGamma).Value = 0.0;
  (this->_DisplayGamma).bIsSet = false;
  *(undefined8 *)&(this->_DisplayGamma).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_DisplayGamma).Getter = 0;
  *(undefined8 *)&(this->_DisplayGamma).Getter.field_0x8 = 0;
  return this;
}

// FArguments @ 142f35ec0

FArguments * __thiscall SFxWidget::FArguments::FArguments(FArguments *this)

{
  atomic<int> *paVar1;
  FLinearColor FVar2;
  TVector2<double> TVar3;
  FSharedReferencer<1> FVar4;
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  (this->_RenderScale).Value = 1.0;
  (this->_RenderScale).bIsSet = true;
  *(undefined8 *)&(this->_RenderScale).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_RenderScale).Getter = 0;
  *(undefined8 *)&(this->_RenderScale).Getter.field_0x8 = 0;
  TVar3 = UE::Math::TVector2<double>::ZeroVector;
  (this->_RenderScaleOrigin).bIsSet = true;
  (this->_RenderScaleOrigin).Value.field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar3.field0_0x0;
  *(undefined8 *)&(this->_RenderScaleOrigin).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_RenderScaleOrigin).Getter = 0;
  *(undefined8 *)&(this->_RenderScaleOrigin).Getter.field_0x8 = 0;
  (this->_LayoutScale).Value = 1.0;
  (this->_LayoutScale).bIsSet = true;
  *(undefined8 *)&(this->_LayoutScale).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_LayoutScale).Getter = 0;
  *(undefined8 *)&(this->_LayoutScale).Getter.field_0x8 = 0;
  TVar3 = UE::Math::TVector2<double>::ZeroVector;
  (this->_VisualOffset).bIsSet = true;
  (this->_VisualOffset).Value.field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar3.field0_0x0;
  *(undefined8 *)&(this->_VisualOffset).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_VisualOffset).Getter = 0;
  *(undefined8 *)&(this->_VisualOffset).Getter.field_0x8 = 0;
  (this->_IgnoreClipping).Value = true;
  (this->_IgnoreClipping).bIsSet = true;
  *(undefined8 *)&(this->_IgnoreClipping).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_IgnoreClipping).Getter = 0;
  *(undefined8 *)&(this->_IgnoreClipping).Getter.field_0x8 = 0;
  FVar2 = FLinearColor::White;
  (this->_ColorAndOpacity).bIsSet = true;
  (this->_ColorAndOpacity).Value.field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar2.field0_0x0;
  *(undefined8 *)&(this->_ColorAndOpacity).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_ColorAndOpacity).Getter = 0;
  *(undefined8 *)&(this->_ColorAndOpacity).Getter.field_0x8 = 0;
  this->_HAlign = HAlign_Center;
  this->_VAlign = VAlign_Center;
  (this->_Content).Widget.Object = SNullWidget::NullWidget.Object;
  FVar4 = SNullWidget::NullWidget.SharedReferenceCount;
  (this->_Content).Widget.SharedReferenceCount.ReferenceController =
       SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
  if (FVar4.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar4.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  return this;
}

// FArguments @ 142f36000

FArguments * __thiscall SHeader::FArguments::FArguments(FArguments *this)

{
  atomic<int> *paVar1;
  FSharedReferencer<1> FVar2;
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  this->_HAlign = HAlign_Left;
  (this->_Content).Widget.Object = SNullWidget::NullWidget.Object;
  FVar2 = SNullWidget::NullWidget.SharedReferenceCount;
  (this->_Content).Widget.SharedReferenceCount.ReferenceController =
       SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
  if (FVar2.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar2.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  return this;
}

// FArguments @ 142f36050

FArguments * __thiscall SHorizontalListItemEditor::FArguments::FArguments(FArguments *this)

{
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  *(undefined8 *)&this->_OnCanAcceptDrop = 0;
  *(undefined8 *)&(this->_OnCanAcceptDrop).field_0x8 = 0;
  *(undefined4 *)&(this->_OnCanAcceptDrop).field_0x10 = 0;
  *(undefined8 *)&this->_OnAcceptDrop = 0;
  *(undefined8 *)&(this->_OnAcceptDrop).field_0x8 = 0;
  *(undefined4 *)&(this->_OnAcceptDrop).field_0x10 = 0;
  *(undefined8 *)&this->_OnDragDetected = 0;
  *(undefined8 *)&(this->_OnDragDetected).field_0x8 = 0;
  *(undefined4 *)&(this->_OnDragDetected).field_0x10 = 0;
  (this->_ItemToEdit).Object = (FTestData *)0x0;
  (this->_ItemToEdit).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// FArguments @ 142f360c0

FArguments * __thiscall SInlineEditableTextBlock::FArguments::FArguments(FArguments *this)

{
  ISlateStyle *pIVar1;
  FName *pFVar2;
  FInlineEditableTextBlockStyle *pFVar3;
  FName local_res8;
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  FText::FText(&(this->_Text).Value);
  (this->_Text).bIsSet = false;
  *(undefined8 *)&(this->_Text).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_Text).Getter = 0;
  *(undefined8 *)&(this->_Text).Getter.field_0x8 = 0;
  FText::FText(&(this->_HintText).Value);
  (this->_HintText).bIsSet = false;
  *(undefined8 *)&(this->_HintText).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_HintText).Getter = 0;
  *(undefined8 *)&(this->_HintText).Getter.field_0x8 = 0;
  pIVar1 = FAppStyle::Get();
  pFVar2 = ::FName::FName(&local_res8,"InlineEditableTextBlockStyle");
  pFVar3 = (FInlineEditableTextBlockStyle *)
           (**(code **)((longlong)*pIVar1 + 0xa0))
                     (pIVar1,FInlineEditableTextBlockStyle::TypeName,*pFVar2,0,1);
  if (pFVar3 == (FInlineEditableTextBlockStyle *)0x0) {
    pFVar3 = FInlineEditableTextBlockStyle::GetDefault();
  }
  this->_Style = pFVar3;
  FSlateFontInfo::FSlateFontInfo(&(this->_Font).Value);
  (this->_Font).bIsSet = false;
  *(undefined8 *)&(this->_Font).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_Font).Getter = 0;
  *(undefined8 *)&(this->_Font).Getter.field_0x8 = 0;
  (this->_ColorAndOpacity).Value.ColorUseRule = UseColor_Specified;
  (this->_ColorAndOpacity).bIsSet = false;
  *(undefined8 *)&(this->_ColorAndOpacity).Value.SpecifiedColor.field0_0x0 = 0x3f800000;
  (this->_ColorAndOpacity).Value.SpecifiedColor.field0_0x0._s_0.B = 1.0;
  (this->_ColorAndOpacity).Value.SpecifiedColor.field0_0x0._s_0.A = 1.0;
  *(undefined8 *)&(this->_ColorAndOpacity).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_ColorAndOpacity).Getter = 0;
  *(undefined8 *)&(this->_ColorAndOpacity).Getter.field_0x8 = 0;
  (this->_ShadowOffset).Value.field0_0x0._s_0.X = 0.0;
  (this->_ShadowOffset).Value.field0_0x0._s_0.Y = 0.0;
  (this->_ShadowOffset).bIsSet = false;
  *(undefined8 *)&(this->_ShadowOffset).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_ShadowOffset).Getter = 0;
  *(undefined8 *)&(this->_ShadowOffset).Getter.field_0x8 = 0;
  *(undefined8 *)&(this->_ShadowColorAndOpacity).Value.field0_0x0 = 0;
  *(undefined8 *)((longlong)&(this->_ShadowColorAndOpacity).Value.field0_0x0 + 8) = 0;
  (this->_ShadowColorAndOpacity).bIsSet = false;
  *(undefined8 *)&(this->_ShadowColorAndOpacity).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_ShadowColorAndOpacity).Getter = 0;
  *(undefined8 *)&(this->_ShadowColorAndOpacity).Getter.field_0x8 = 0;
  FText::FText(&(this->_HighlightText).Value);
  (this->_HighlightText).bIsSet = false;
  *(undefined8 *)&(this->_HighlightText).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_HighlightText).Getter = 0;
  *(undefined8 *)&(this->_HighlightText).Getter.field_0x8 = 0;
  (this->_WrapTextAt).Value = 0.0;
  (this->_WrapTextAt).bIsSet = true;
  *(undefined8 *)&(this->_WrapTextAt).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_WrapTextAt).Getter = 0;
  *(undefined8 *)&(this->_WrapTextAt).Getter.field_0x8 = 0;
  (this->_AutoWrapNonEditText).Value = false;
  (this->_AutoWrapNonEditText).bIsSet = true;
  *(undefined8 *)&(this->_AutoWrapNonEditText).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_AutoWrapNonEditText).Getter = 0;
  *(undefined8 *)&(this->_AutoWrapNonEditText).Getter.field_0x8 = 0;
  (this->_AutoWrapMultilineEditText).Value = false;
  (this->_AutoWrapMultilineEditText).bIsSet = true;
  *(undefined8 *)&(this->_AutoWrapMultilineEditText).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_AutoWrapMultilineEditText).Getter = 0;
  *(undefined8 *)&(this->_AutoWrapMultilineEditText).Getter.field_0x8 = 0;
  (this->_Justification).Value = Left;
  (this->_Justification).bIsSet = true;
  *(undefined8 *)&(this->_Justification).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_Justification).Getter = 0;
  *(undefined8 *)&(this->_Justification).Getter.field_0x8 = 0;
  (this->_MaximumLength).Value = -1;
  (this->_MaximumLength).bIsSet = true;
  *(undefined8 *)&(this->_MaximumLength).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_MaximumLength).Getter = 0;
  *(undefined8 *)&(this->_MaximumLength).Getter.field_0x8 = 0;
  (this->_LineBreakPolicy).Object = (IBreakIterator *)0x0;
  (this->_LineBreakPolicy).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->_IsReadOnly).Value = false;
  (this->_IsReadOnly).bIsSet = true;
  *(undefined8 *)&(this->_IsReadOnly).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_IsReadOnly).Getter = 0;
  *(undefined8 *)&(this->_IsReadOnly).Getter.field_0x8 = 0;
  this->_MultiLine = false;
  this->_DelayedLeftClickEntersEditMode = true;
  this->_ModiferKeyForNewLine = '\0';
  *(undefined8 *)&this->_OnBeginTextEdit = 0;
  *(undefined8 *)&(this->_OnBeginTextEdit).field_0x8 = 0;
  *(undefined4 *)&(this->_OnBeginTextEdit).field_0x10 = 0;
  *(undefined8 *)&this->_OnTextCommitted = 0;
  *(undefined8 *)&(this->_OnTextCommitted).field_0x8 = 0;
  *(undefined4 *)&(this->_OnTextCommitted).field_0x10 = 0;
  *(undefined8 *)&this->_OnEnterEditingMode = 0;
  *(undefined8 *)&(this->_OnEnterEditingMode).field_0x8 = 0;
  *(undefined4 *)&(this->_OnEnterEditingMode).field_0x10 = 0;
  *(undefined8 *)&this->_OnExitEditingMode = 0;
  *(undefined8 *)&(this->_OnExitEditingMode).field_0x8 = 0;
  *(undefined4 *)&(this->_OnExitEditingMode).field_0x10 = 0;
  *(undefined8 *)&this->_IsSelected = 0;
  *(undefined8 *)&(this->_IsSelected).field_0x8 = 0;
  *(undefined4 *)&(this->_IsSelected).field_0x10 = 0;
  *(undefined8 *)&this->_OnVerifyTextChanged = 0;
  *(undefined8 *)&(this->_OnVerifyTextChanged).field_0x8 = 0;
  *(undefined4 *)&(this->_OnVerifyTextChanged).field_0x10 = 0;
  (this->_OverflowPolicy).bIsSet = false;
  return this;
}

// FArguments @ 142f363d0

FArguments * __thiscall SItemEditor::FArguments::FArguments(FArguments *this)

{
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  *(undefined8 *)&this->_OnCanAcceptDrop = 0;
  *(undefined8 *)&(this->_OnCanAcceptDrop).field_0x8 = 0;
  *(undefined4 *)&(this->_OnCanAcceptDrop).field_0x10 = 0;
  *(undefined8 *)&this->_OnAcceptDrop = 0;
  *(undefined8 *)&(this->_OnAcceptDrop).field_0x8 = 0;
  *(undefined4 *)&(this->_OnAcceptDrop).field_0x10 = 0;
  *(undefined8 *)&this->_OnDragDetected = 0;
  *(undefined8 *)&(this->_OnDragDetected).field_0x8 = 0;
  *(undefined4 *)&(this->_OnDragDetected).field_0x10 = 0;
  (this->_ItemToEdit).Object = (FTestData *)0x0;
  (this->_ItemToEdit).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// FArguments @ 142f36440

FArguments * __thiscall
SStarshipGallery::SListGalleryWidget::FArguments::FArguments(FArguments *this)

{
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return this;
}

// FArguments @ 142f36470

FArguments * __thiscall
SListView<TSharedPtr<int,1>_>::SListViewPinnedRowWidget::FArguments::FArguments(FArguments *this)

{
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return this;
}

// FArguments @ 142f36490

FArguments * __thiscall
SListView<TSharedPtr<FTestData,1>_>::SListViewPinnedRowWidget::FArguments::FArguments
          (FArguments *this)

{
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return this;
}

// FArguments @ 142f364b0

FArguments * __thiscall SSpinningImage::FArguments::FArguments(FArguments *this)

{
  FLinearColor FVar1;
  ISlateStyle *pIVar2;
  FSlateBrush *pFVar3;
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  pIVar2 = FAppStyle::Get();
  pFVar3 = (FSlateBrush *)(**(code **)((longlong)*pIVar2 + 0x78))(pIVar2);
  (this->_Image).Value = pFVar3;
  (this->_Image).bIsSet = true;
  *(undefined8 *)&(this->_Image).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_Image).Getter = 0;
  *(undefined8 *)&(this->_Image).Getter.field_0x8 = 0;
  FVar1 = FLinearColor::White;
  (this->_ColorAndOpacity).Value.ColorUseRule = UseColor_Specified;
  (this->_ColorAndOpacity).Value.SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  (this->_ColorAndOpacity).bIsSet = true;
  *(undefined8 *)&(this->_ColorAndOpacity).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_ColorAndOpacity).Getter = 0;
  *(undefined8 *)&(this->_ColorAndOpacity).Getter.field_0x8 = 0;
  *(undefined8 *)&(this->_OnMouseButtonDown).field_0x10 = 0;
  *(undefined8 *)&this->_OnMouseButtonDown = 0;
  *(undefined8 *)&(this->_OnMouseButtonDown).field_0x8 = 0;
  this->_Period = 1.0;
  return this;
}

// FArguments @ 142f36550

FArguments * __thiscall SStarshipGallery::FArguments::FArguments(FArguments *this)

{
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return this;
}

// FArguments @ 142f36580

FArguments * __thiscall STableViewTesting::FArguments::FArguments(FArguments *this)

{
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return this;
}

// FArguments @ 142f365a0

FArguments * __thiscall STestMenu::FArguments::FArguments(FArguments *this)

{
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return this;
}

// FArguments @ 142f365c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FArguments * __thiscall STextComboBox::FArguments::FArguments(FArguments *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ISlateStyle *pIVar7;
  FName *pFVar8;
  FComboBoxStyle *pFVar9;
  FName local_res8;
  undefined4 local_18;
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  pIVar7 = FAppStyle::Get();
  pFVar8 = ::FName::FName(&local_res8,"ComboBox");
  pFVar9 = (FComboBoxStyle *)
           (**(code **)((longlong)*pIVar7 + 0xa0))(pIVar7,FComboBoxStyle::TypeName,*pFVar8,0,1);
  if (pFVar9 == (FComboBoxStyle *)0x0) {
    pFVar9 = FComboBoxStyle::GetDefault();
  }
  uVar6 = _UNK_15090c6d8;
  uVar5 = ___xmm_3f8000003f800000000000003f800000;
  this->_ComboBoxStyle = pFVar9;
  this->_ButtonStyle = (FButtonStyle *)0x0;
  this->_OptionsSource_ArrayPointer =
       (TArray<TSharedPtr<FString,1>,TSizedDefaultAllocator<32>_> *)0x0;
  this->_OptionsSource_ObservableArrayPointer = (TObservableArray<TSharedPtr<FString,1>_> *)0x0;
  (this->_OptionsSource_SharedObservableArray).Object =
       (TObservableArray<TSharedPtr<FString,1>_> *)0x0;
  (this->_OptionsSource_SharedObservableArray).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&(this->_ColorAndOpacity).Value.SpecifiedColor.field0_0x0 = uVar5;
  *(undefined8 *)((longlong)&(this->_ColorAndOpacity).Value.SpecifiedColor.field0_0x0 + 8) = uVar6;
  (this->_ColorAndOpacity).bIsSet = true;
  local_18._0_1_ = (undefined1)2;
  local_18._1_1_ = (undefined1)(2 >> 8);
  (this->_ColorAndOpacity).Value.ColorUseRule = (undefined1)local_18;
  (this->_ColorAndOpacity).Value.ColorTableId = local_18._1_1_;
  *(undefined2 *)&(this->_ColorAndOpacity).Value.field_0x12 = local_18._2_2_;
  *(undefined8 *)&(this->_ColorAndOpacity).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_ColorAndOpacity).Getter = 0;
  *(undefined8 *)&(this->_ColorAndOpacity).Getter.field_0x8 = 0;
  FSlateFontInfo::FSlateFontInfo(&(this->_Font).Value);
  (this->_Font).bIsSet = false;
  *(undefined8 *)&(this->_Font).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_Font).Getter = 0;
  *(undefined8 *)&(this->_Font).Getter.field_0x8 = 0;
  pFVar9 = this->_ComboBoxStyle;
  fVar1 = (pFVar9->ContentPadding).Left;
  fVar2 = (pFVar9->ContentPadding).Top;
  fVar3 = (pFVar9->ContentPadding).Right;
  fVar4 = (pFVar9->ContentPadding).Bottom;
  (this->_ContentPadding).bIsSet = true;
  (this->_ContentPadding).Value.Left = fVar1;
  (this->_ContentPadding).Value.Top = fVar2;
  (this->_ContentPadding).Value.Right = fVar3;
  (this->_ContentPadding).Value.Bottom = fVar4;
  *(undefined8 *)&(this->_ContentPadding).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_ContentPadding).Getter = 0;
  *(undefined8 *)&(this->_ContentPadding).Getter.field_0x8 = 0;
  *(undefined8 *)&this->_OnSelectionChanged = 0;
  *(undefined8 *)&(this->_OnSelectionChanged).field_0x8 = 0;
  *(undefined4 *)&(this->_OnSelectionChanged).field_0x10 = 0;
  *(undefined8 *)&this->_OnComboBoxOpening = 0;
  *(undefined8 *)&(this->_OnComboBoxOpening).field_0x8 = 0;
  *(undefined4 *)&(this->_OnComboBoxOpening).field_0x10 = 0;
  (this->_InitiallySelectedItem).Object = (FString *)0x0;
  (this->_InitiallySelectedItem).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&(this->_OnGetTextLabelForItem).field_0x10 = 0;
  *(undefined8 *)&this->_OnGetTextLabelForItem = 0;
  *(undefined8 *)&(this->_OnGetTextLabelForItem).field_0x8 = 0;
  return this;
}

// FArguments @ 142f36750

FArguments * __thiscall STextComboPopup::FArguments::FArguments(FArguments *this)

{
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  FText::FText(&this->_Label);
  this->_AutoFocus = true;
  (this->_TextOptions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->_TextOptions).ArrayNum = 0;
  (this->_TextOptions).ArrayMax = 0;
  *(undefined8 *)&this->_OnTextChosen = 0;
  *(undefined8 *)&(this->_OnTextChosen).field_0x8 = 0;
  *(undefined4 *)&(this->_OnTextChosen).field_0x10 = 0;
  return this;
}

// FArguments @ 142f367b0

FArguments * __thiscall SThemeColorBlocksBar::FArguments::FArguments(FArguments *this)

{
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  (this->_ColorTheme).Value.Object = (FColorTheme *)0x0;
  (this->_ColorTheme).Value.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->_ColorTheme).bIsSet = false;
  *(undefined8 *)&(this->_ColorTheme).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_ColorTheme).Getter = 0;
  *(undefined8 *)&(this->_ColorTheme).Getter.field_0x8 = 0;
  *(undefined8 *)&(this->_OnSelectColor).field_0x10 = 0;
  *(undefined8 *)&this->_OnSelectColor = 0;
  *(undefined8 *)&(this->_OnSelectColor).field_0x8 = 0;
  *(undefined8 *)&(this->_OnGetActiveColor).field_0x10 = 0;
  *(undefined8 *)&this->_OnGetActiveColor = 0;
  *(undefined8 *)&(this->_OnGetActiveColor).field_0x8 = 0;
  *(undefined8 *)&this->_ShowTrashCallback = 0;
  *(undefined8 *)&(this->_ShowTrashCallback).field_0x8 = 0;
  *(undefined4 *)&(this->_ShowTrashCallback).field_0x10 = 0;
  *(undefined8 *)&this->_HideTrashCallback = 0;
  *(undefined8 *)&(this->_HideTrashCallback).field_0x8 = 0;
  *(undefined4 *)&(this->_HideTrashCallback).field_0x10 = 0;
  FText::FText(&this->_EmptyText);
  (this->_UseSRGB).Value = false;
  (this->_UseSRGB).bIsSet = false;
  *(undefined8 *)&(this->_UseSRGB).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_UseSRGB).Getter = 0;
  *(undefined8 *)&(this->_UseSRGB).Getter.field_0x8 = 0;
  (this->_UseAlpha).Value = false;
  (this->_UseAlpha).bIsSet = false;
  *(undefined8 *)&(this->_UseAlpha).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_UseAlpha).Getter = 0;
  *(undefined8 *)&(this->_UseAlpha).Getter.field_0x8 = 0;
  return this;
}

// FArguments @ 142f368a0

FArguments * __thiscall SThrobber::FArguments::FArguments(FArguments *this)

{
  code *pcVar1;
  ISlateStyle *pIVar2;
  FName *pFVar3;
  FSlateBrush *pFVar4;
  FName local_res8;
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  pIVar2 = FAppStyle::Get();
  pcVar1 = *(code **)((longlong)*pIVar2 + 0x50);
  pFVar3 = ::FName::FName(&local_res8,"Throbber.Chunk");
  pFVar4 = (FSlateBrush *)(*pcVar1)(pIVar2,*pFVar3,0,0);
  this->_PieceImage = pFVar4;
  this->_NumPieces = 3;
  this->_Animate = All;
  return this;
}

// FArguments @ 142f36920

FArguments * __thiscall STileItemEditor::FArguments::FArguments(FArguments *this)

{
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  *(undefined8 *)&this->_OnCanAcceptDrop = 0;
  *(undefined8 *)&(this->_OnCanAcceptDrop).field_0x8 = 0;
  *(undefined4 *)&(this->_OnCanAcceptDrop).field_0x10 = 0;
  *(undefined8 *)&this->_OnAcceptDrop = 0;
  *(undefined8 *)&(this->_OnAcceptDrop).field_0x8 = 0;
  *(undefined4 *)&(this->_OnAcceptDrop).field_0x10 = 0;
  *(undefined8 *)&this->_OnDragDetected = 0;
  *(undefined8 *)&(this->_OnDragDetected).field_0x8 = 0;
  *(undefined4 *)&(this->_OnDragDetected).field_0x10 = 0;
  (this->_ItemToEdit).Object = (FTestData *)0x0;
  (this->_ItemToEdit).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// FArguments @ 142f36990

FArguments * __thiscall SUserWidget::FArguments::FArguments(FArguments *this)

{
  atomic<int> *paVar1;
  FSharedReferencer<1> FVar2;
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  (this->_Content).Widget.Object = SNullWidget::NullWidget.Object;
  FVar2 = SNullWidget::NullWidget.SharedReferenceCount;
  (this->_Content).Widget.SharedReferenceCount.ReferenceController =
       SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
  if (FVar2.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar2.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  this->_HAlign = HAlign_Fill;
  this->_VAlign = VAlign_Fill;
  return this;
}

// FArguments @ 142f369e0

FArguments * __thiscall SUserWidgetExample::FArguments::FArguments(FArguments *this)

{
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  FText::FText(&this->_Title);
  return this;
}

// FArguments @ 142f36a10

FArguments * __thiscall SVolumeControl::FArguments::FArguments(FArguments *this)

{
  ISlateStyle *pIVar1;
  FName *pFVar2;
  FVolumeControlStyle *pFVar3;
  FName local_res8;
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  pIVar1 = FAppStyle::Get();
  pFVar2 = ::FName::FName(&local_res8,"VolumeControl");
  pFVar3 = (FVolumeControlStyle *)
           (**(code **)((longlong)*pIVar1 + 0xa0))(pIVar1,FVolumeControlStyle::TypeName,*pFVar2,0,1)
  ;
  if (pFVar3 == (FVolumeControlStyle *)0x0) {
    pFVar3 = FVolumeControlStyle::GetDefault();
  }
  this->_Style = pFVar3;
  (this->_Volume).Value = 1.0;
  (this->_Volume).bIsSet = true;
  *(undefined8 *)&(this->_Volume).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_Volume).Getter = 0;
  *(undefined8 *)&(this->_Volume).Getter.field_0x8 = 0;
  *(undefined8 *)&this->_OnVolumeChanged = 0;
  *(undefined8 *)&(this->_OnVolumeChanged).field_0x8 = 0;
  *(undefined4 *)&(this->_OnVolumeChanged).field_0x10 = 0;
  (this->_Muted).Value = false;
  (this->_Muted).bIsSet = true;
  *(undefined8 *)&(this->_Muted).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_Muted).Getter = 0;
  *(undefined8 *)&(this->_Muted).Getter.field_0x8 = 0;
  *(undefined8 *)&this->_OnMuteChanged = 0;
  *(undefined8 *)&(this->_OnMuteChanged).field_0x8 = 0;
  *(undefined4 *)&(this->_OnMuteChanged).field_0x10 = 0;
  return this;
}

// FArguments @ 142f36af0

FArguments * __thiscall SWidgetGallery::FArguments::FArguments(FArguments *this)

{
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return this;
}

// ~FArguments @ 142f3b6b0

void __thiscall SBreadcrumbTrail<int>::FArguments::~FArguments(FArguments *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_GetCrumbButtonContent);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_GetCrumbMenuContent);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_HasCrumbMenuContent);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnCrumbClicked);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnCrumbPopped);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnCrumbPushed);
  TAttribute<bool>::~TAttribute<bool>(&this->_ShowLeadingDelimiter);
  TAttribute<FSlateBrush_const_*>::~TAttribute<FSlateBrush_const_*>(&this->_DelimiterImage);
  TAttribute<FMargin>::~TAttribute<FMargin>(&this->_ButtonContentPadding);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return;
}

// ~FArguments @ 142f3b780

void __thiscall
SComboBox<TSharedPtr<enum_ESelectionMode::Type,1>_>::FArguments::~FArguments(void *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x308));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x2f8));
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x2d8));
  if (*(void **)((longlong)this + 0x2e0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x2e0));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x2d8));
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x2c0));
  if (*(void **)((longlong)this + 0x2c8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x2c8));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x2c0));
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x2a8));
  if (*(void **)((longlong)this + 0x2b0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x2b0));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x2a8));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x2a0));
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x270));
  if (*(void **)((longlong)this + 0x278) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x278));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x270));
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x240));
  if (*(void **)((longlong)this + 0x248) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x248));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x240));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x200));
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs(this);
  return;
}

// ~FArguments @ 142f3b8b0

void __thiscall SListView<TSharedPtr<FTestData,1>_>::FArguments::~FArguments(FArguments *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnKeyDownHandler);
  pvVar1 = *(void **)&(this->_OnKeyDownHandler).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnKeyDownHandler);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnEnteredBadState);
  pvVar1 = *(void **)&(this->_OnEnteredBadState).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnEnteredBadState);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnItemToString_Debug);
  pvVar1 = *(void **)&(this->_OnItemToString_Debug).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnItemToString_Debug);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_IsFocusable).Getter);
  pvVar1 = *(void **)&(this->_IsFocusable).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_IsFocusable).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_ScrollbarVisibility).Getter);
  pvVar1 = *(void **)&(this->_ScrollbarVisibility).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_ScrollbarVisibility).Getter);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->_ExternalScrollbar).SharedReferenceCount.ReferenceController);
  TSharedPtr<SHeaderRow,1>::~TSharedPtr<SHeaderRow,1>(&this->_HeaderRow);
  TAttribute<enum_ESelectionMode::Type>::~TAttribute<enum_ESelectionMode::Type>
            (&this->_SelectionMode);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnIsSelectableOrNavigable);
  pvVar1 = *(void **)&(this->_OnIsSelectableOrNavigable).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnIsSelectableOrNavigable);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnSelectionChanged);
  pvVar1 = *(void **)&(this->_OnSelectionChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnSelectionChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnMouseButtonDoubleClick);
  pvVar1 = *(void **)&(this->_OnMouseButtonDoubleClick).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnMouseButtonDoubleClick);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnMouseButtonClick);
  pvVar1 = *(void **)&(this->_OnMouseButtonClick).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnMouseButtonClick);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnItemsRebuilt);
  pvVar1 = *(void **)&(this->_OnItemsRebuilt).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnItemsRebuilt);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnContextMenuOpening);
  pvVar1 = *(void **)&(this->_OnContextMenuOpening).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnContextMenuOpening);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_MaxPinnedItems).Getter);
  pvVar1 = *(void **)&(this->_MaxPinnedItems).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_MaxPinnedItems).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_ItemHeight).Getter);
  pvVar1 = *(void **)&(this->_ItemHeight).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_ItemHeight).Getter);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->_ListItemsSource_SharedObservableArray).SharedReferenceCount.ReferenceController
            );
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnFinishedScrolling);
  pvVar1 = *(void **)&(this->_OnFinishedScrolling).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnFinishedScrolling);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnItemScrolledIntoView);
  pvVar1 = *(void **)&(this->_OnItemScrolledIntoView).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnItemScrolledIntoView);
  TDelegate<void___cdecl(double),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(double),FDefaultDelegateUserPolicy>(&this->_OnListViewScrolled);
  TDelegate<void___cdecl(TSharedRef<ITableRow,1>_const_&),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(TSharedRef<ITableRow,1>_const_&),FDefaultDelegateUserPolicy>
            (&this->_OnRowReleased);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnEntryInitialized);
  pvVar1 = *(void **)&(this->_OnEntryInitialized).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnEntryInitialized);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnRefreshRow);
  pvVar1 = *(void **)&(this->_OnRefreshRow).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnRefreshRow);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnGeneratePinnedRow);
  pvVar1 = *(void **)&(this->_OnGeneratePinnedRow).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnGeneratePinnedRow);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnGenerateRow);
  pvVar1 = *(void **)&(this->_OnGenerateRow).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnGenerateRow);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return;
}

// ~FArguments @ 142f3bc30

void __thiscall
SListView<TSharedPtr<enum_ESelectionMode::Type,1>_>::FArguments::~FArguments(void *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x4c8));
  if (*(void **)((longlong)this + 0x4d0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x4d0));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x4c8));
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x4b0));
  if (*(void **)((longlong)this + 0x4b8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x4b8));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x4b0));
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x498));
  if (*(void **)((longlong)this + 0x4a0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x4a0));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x498));
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x478));
  if (*(void **)((longlong)this + 0x480) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x480));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x478));
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x428));
  if (*(void **)((longlong)this + 0x430) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x430));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x428));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x400));
  TSharedPtr<SHeaderRow,1>::~TSharedPtr<SHeaderRow,1>
            ((TSharedPtr<SHeaderRow,1> *)((longlong)this + 0x3e0));
  TAttribute<enum_ESelectionMode::Type>::~TAttribute<enum_ESelectionMode::Type>
            ((void *)((longlong)this + 0x3c0));
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x3a8));
  if (*(void **)((longlong)this + 0x3b0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x3b0));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x3a8));
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x390));
  if (*(void **)((longlong)this + 0x398) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x398));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x390));
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x378));
  if (*(void **)((longlong)this + 0x380) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x380));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x378));
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x360));
  if (*(void **)((longlong)this + 0x368) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x368));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x360));
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x348));
  if (*(void **)((longlong)this + 0x350) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x350));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x348));
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x330));
  if (*(void **)((longlong)this + 0x338) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x338));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x330));
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x318));
  if (*(void **)((longlong)this + 800) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 800));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x318));
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x2f8));
  if (*(void **)((longlong)this + 0x300) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x300));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x2f8));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x2e8));
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x2b8));
  if (*(void **)((longlong)this + 0x2c0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x2c0));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x2b8));
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x2a0));
  if (*(void **)((longlong)this + 0x2a8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x2a8));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x2a0));
  TDelegate<void___cdecl(double),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(double),FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(double),FDefaultDelegateUserPolicy> *)((longlong)this + 0x288))
  ;
  TDelegate<void___cdecl(TSharedRef<ITableRow,1>_const_&),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(TSharedRef<ITableRow,1>_const_&),FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(TSharedRef<ITableRow,1>_const_&),FDefaultDelegateUserPolicy> *)
             ((longlong)this + 0x270));
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 600));
  if (*(void **)((longlong)this + 0x260) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x260));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 600));
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x240));
  if (*(void **)((longlong)this + 0x248) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x248));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x240));
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x228));
  if (*(void **)((longlong)this + 0x230) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x230));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x228));
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x210));
  if (*(void **)((longlong)this + 0x218) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x218));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x210));
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs(this);
  return;
}

// ~FArguments @ 142f3bfb0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall SNumericEntryBox<int>::FArguments::~FArguments(FArguments *this)

{
  void *pvVar1;
  ITextData *pIVar2;
  
  TAttribute<TOptional<FTextFormat>_>::~TAttribute<TOptional<FTextFormat>_>
            (&this->_ToolTipTextFormat);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnToggleChanged);
  pvVar1 = *(void **)&(this->_OnToggleChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnToggleChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_ToggleChecked).Getter);
  pvVar1 = *(void **)&(this->_ToggleChecked).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_ToggleChecked).Getter);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->_TypeInterface).SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_ContextMenuExtender);
  pvVar1 = *(void **)&(this->_ContextMenuExtender).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_ContextMenuExtender);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnEndSliderMovement);
  pvVar1 = *(void **)&(this->_OnEndSliderMovement).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnEndSliderMovement);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnBeginSliderMovement);
  pvVar1 = *(void **)&(this->_OnBeginSliderMovement).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnBeginSliderMovement);
  TDelegate<void___cdecl(FText,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(FText,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
            (&this->_OnUndeterminedValueCommitted);
  TDelegate<void___cdecl(FText),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(FText),FDefaultDelegateUserPolicy>(&this->_OnUndeterminedValueChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnValueCommitted);
  pvVar1 = *(void **)&(this->_OnValueCommitted).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnValueCommitted);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnValueChanged);
  pvVar1 = *(void **)&(this->_OnValueChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnValueChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_OverrideTextMargin).Getter);
  pvVar1 = *(void **)&(this->_OverrideTextMargin).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_OverrideTextMargin).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_MinDesiredValueWidth).Getter);
  pvVar1 = *(void **)&(this->_MinDesiredValueWidth).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_MinDesiredValueWidth).Getter);
  TAttribute<TOptional<int>_>::~TAttribute<TOptional<int>_>(&this->_WheelStep);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->_SliderExponentNeutralValue).Getter);
  pvVar1 = *(void **)&(this->_SliderExponentNeutralValue).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_SliderExponentNeutralValue).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_SliderExponent).Getter);
  pvVar1 = *(void **)&(this->_SliderExponent).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_SliderExponent).Getter);
  TAttribute<TOptional<int>_>::~TAttribute<TOptional<int>_>(&this->_MaxSliderValue);
  TAttribute<TOptional<int>_>::~TAttribute<TOptional<int>_>(&this->_MinSliderValue);
  TAttribute<TOptional<int>_>::~TAttribute<TOptional<int>_>(&this->_MaxValue);
  TAttribute<TOptional<int>_>::~TAttribute<TOptional<int>_>(&this->_MinValue);
  TAttribute<TOptional<int>_>::~TAttribute<TOptional<int>_>(&this->_MaxFractionalDigits);
  TAttribute<TOptional<int>_>::~TAttribute<TOptional<int>_>(&this->_MinFractionalDigits);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Delta).Getter);
  pvVar1 = *(void **)&(this->_Delta).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_Delta).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnDynamicSliderMinValueChanged);
  pvVar1 = *(void **)&(this->_OnDynamicSliderMinValueChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnDynamicSliderMinValueChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnDynamicSliderMaxValueChanged);
  pvVar1 = *(void **)&(this->_OnDynamicSliderMaxValueChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnDynamicSliderMaxValueChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->_SupportDynamicSliderMinValue).Getter);
  pvVar1 = *(void **)&(this->_SupportDynamicSliderMinValue).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_SupportDynamicSliderMinValue).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->_SupportDynamicSliderMaxValue).Getter);
  pvVar1 = *(void **)&(this->_SupportDynamicSliderMaxValue).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_SupportDynamicSliderMaxValue).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_LinearDeltaSensitivity).Getter);
  pvVar1 = *(void **)&(this->_LinearDeltaSensitivity).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_LinearDeltaSensitivity).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_CtrlMultiplier).Getter);
  pvVar1 = *(void **)&(this->_CtrlMultiplier).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_CtrlMultiplier).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_ShiftMultiplier).Getter);
  pvVar1 = *(void **)&(this->_ShiftMultiplier).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_ShiftMultiplier).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->_ShiftMouseMovePixelPerDelta).Getter);
  pvVar1 = *(void **)&(this->_ShiftMouseMovePixelPerDelta).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_ShiftMouseMovePixelPerDelta).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Font).Getter);
  pvVar1 = *(void **)&(this->_Font).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_Font).Getter);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->_Font).Value.CompositeFont.SharedReferenceCount.ReferenceController);
  pIVar2 = (this->_UndeterminedString).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  TAttribute<TOptional<int>_>::~TAttribute<TOptional<int>_>(&this->_Value);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Justification).Getter);
  pvVar1 = *(void **)&(this->_Justification).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_Justification).Getter);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->_Label).Widget.SharedReferenceCount.ReferenceController);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return;
}

// ~FArguments @ 142f3c420

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall SNumericEntryBox<float>::FArguments::~FArguments(FArguments *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_ToolTipTextFormat).Getter);
  TOptional<FTextFormat>::~TOptional<FTextFormat>(&(this->_ToolTipTextFormat).Value);
  TDelegate<void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy>(&this->_OnToggleChanged);
  TAttribute<enum_ECheckBoxState>::~TAttribute<enum_ECheckBoxState>(&this->_ToggleChecked);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&(this->_TypeInterface).SharedReferenceCount);
  TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>(&this->_ContextMenuExtender);
  TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>(&this->_OnEndSliderMovement);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>(&this->_OnBeginSliderMovement);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnUndeterminedValueCommitted);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnUndeterminedValueChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnValueCommitted);
  TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>(&this->_OnValueChanged);
  TAttribute<FMargin>::~TAttribute<FMargin>(&this->_OverrideTextMargin);
  TAttribute<float>::~TAttribute<float>(&this->_MinDesiredValueWidth);
  TAttribute<TOptional<float>_>::~TAttribute<TOptional<float>_>(&this->_WheelStep);
  TAttribute<float>::~TAttribute<float>(&this->_SliderExponentNeutralValue);
  TAttribute<float>::~TAttribute<float>(&this->_SliderExponent);
  TAttribute<TOptional<float>_>::~TAttribute<TOptional<float>_>(&this->_MaxSliderValue);
  TAttribute<TOptional<float>_>::~TAttribute<TOptional<float>_>(&this->_MinSliderValue);
  TAttribute<TOptional<float>_>::~TAttribute<TOptional<float>_>(&this->_MaxValue);
  TAttribute<TOptional<float>_>::~TAttribute<TOptional<float>_>(&this->_MinValue);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_MaxFractionalDigits).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_MinFractionalDigits).Getter);
  TAttribute<float>::~TAttribute<float>(&this->_Delta);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnDynamicSliderMinValueChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnDynamicSliderMaxValueChanged);
  TAttribute<bool>::~TAttribute<bool>(&this->_SupportDynamicSliderMinValue);
  TAttribute<bool>::~TAttribute<bool>(&this->_SupportDynamicSliderMaxValue);
  TAttribute<int>::~TAttribute<int>(&this->_LinearDeltaSensitivity);
  TAttribute<float>::~TAttribute<float>(&this->_CtrlMultiplier);
  TAttribute<float>::~TAttribute<float>(&this->_ShiftMultiplier);
  TAttribute<int>::~TAttribute<int>(&this->_ShiftMouseMovePixelPerDelta);
  TAttribute<FSlateFontInfo>::~TAttribute<FSlateFontInfo>(&this->_Font);
  FText::~FText(&this->_UndeterminedString);
  TAttribute<TOptional<float>_>::~TAttribute<TOptional<float>_>(&this->_Value);
  TAttribute<enum_ETextJustify::Type>::~TAttribute<enum_ETextJustify::Type>(&this->_Justification);
  TAlwaysValidWidget::~TAlwaysValidWidget(&this->_Label);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return;
}

// ~FArguments @ 142f3c710

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall SNumericEntryBox<double>::FArguments::~FArguments(FArguments *this)

{
  void *pvVar1;
  ITextData *pIVar2;
  
  TAttribute<TOptional<FTextFormat>_>::~TAttribute<TOptional<FTextFormat>_>
            (&this->_ToolTipTextFormat);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnToggleChanged);
  pvVar1 = *(void **)&(this->_OnToggleChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnToggleChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_ToggleChecked).Getter);
  pvVar1 = *(void **)&(this->_ToggleChecked).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_ToggleChecked).Getter);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->_TypeInterface).SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_ContextMenuExtender);
  pvVar1 = *(void **)&(this->_ContextMenuExtender).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_ContextMenuExtender);
  TDelegate<void___cdecl(double),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(double),FDefaultDelegateUserPolicy>(&this->_OnEndSliderMovement);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnBeginSliderMovement);
  pvVar1 = *(void **)&(this->_OnBeginSliderMovement).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnBeginSliderMovement);
  TDelegate<void___cdecl(FText,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(FText,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
            (&this->_OnUndeterminedValueCommitted);
  TDelegate<void___cdecl(FText),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(FText),FDefaultDelegateUserPolicy>(&this->_OnUndeterminedValueChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnValueCommitted);
  pvVar1 = *(void **)&(this->_OnValueCommitted).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnValueCommitted);
  TDelegate<void___cdecl(double),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(double),FDefaultDelegateUserPolicy>(&this->_OnValueChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_OverrideTextMargin).Getter);
  pvVar1 = *(void **)&(this->_OverrideTextMargin).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_OverrideTextMargin).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_MinDesiredValueWidth).Getter);
  pvVar1 = *(void **)&(this->_MinDesiredValueWidth).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_MinDesiredValueWidth).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_WheelStep).Getter);
  pvVar1 = *(void **)&(this->_WheelStep).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_WheelStep).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->_SliderExponentNeutralValue).Getter);
  pvVar1 = *(void **)&(this->_SliderExponentNeutralValue).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_SliderExponentNeutralValue).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_SliderExponent).Getter);
  pvVar1 = *(void **)&(this->_SliderExponent).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_SliderExponent).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_MaxSliderValue).Getter);
  pvVar1 = *(void **)&(this->_MaxSliderValue).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_MaxSliderValue).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_MinSliderValue).Getter);
  pvVar1 = *(void **)&(this->_MinSliderValue).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_MinSliderValue).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_MaxValue).Getter);
  pvVar1 = *(void **)&(this->_MaxValue).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_MaxValue).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_MinValue).Getter);
  pvVar1 = *(void **)&(this->_MinValue).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_MinValue).Getter);
  TAttribute<TOptional<int>_>::~TAttribute<TOptional<int>_>(&this->_MaxFractionalDigits);
  TAttribute<TOptional<int>_>::~TAttribute<TOptional<int>_>(&this->_MinFractionalDigits);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Delta).Getter);
  pvVar1 = *(void **)&(this->_Delta).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_Delta).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnDynamicSliderMinValueChanged);
  pvVar1 = *(void **)&(this->_OnDynamicSliderMinValueChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnDynamicSliderMinValueChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnDynamicSliderMaxValueChanged);
  pvVar1 = *(void **)&(this->_OnDynamicSliderMaxValueChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnDynamicSliderMaxValueChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->_SupportDynamicSliderMinValue).Getter);
  pvVar1 = *(void **)&(this->_SupportDynamicSliderMinValue).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_SupportDynamicSliderMinValue).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->_SupportDynamicSliderMaxValue).Getter);
  pvVar1 = *(void **)&(this->_SupportDynamicSliderMaxValue).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_SupportDynamicSliderMaxValue).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_LinearDeltaSensitivity).Getter);
  pvVar1 = *(void **)&(this->_LinearDeltaSensitivity).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_LinearDeltaSensitivity).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_CtrlMultiplier).Getter);
  pvVar1 = *(void **)&(this->_CtrlMultiplier).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_CtrlMultiplier).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_ShiftMultiplier).Getter);
  pvVar1 = *(void **)&(this->_ShiftMultiplier).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_ShiftMultiplier).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->_ShiftMouseMovePixelPerDelta).Getter);
  pvVar1 = *(void **)&(this->_ShiftMouseMovePixelPerDelta).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_ShiftMouseMovePixelPerDelta).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Font).Getter);
  pvVar1 = *(void **)&(this->_Font).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_Font).Getter);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->_Font).Value.CompositeFont.SharedReferenceCount.ReferenceController);
  pIVar2 = (this->_UndeterminedString).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Value).Getter);
  pvVar1 = *(void **)&(this->_Value).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_Value).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Justification).Getter);
  pvVar1 = *(void **)&(this->_Justification).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_Justification).Getter);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->_Label).Widget.SharedReferenceCount.ReferenceController);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return;
}

// ~FArguments @ 142f3cbf0

void __thiscall SSegmentedControl<int>::FArguments::~FArguments(FArguments *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnValueChecked);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnValuesChanged);
  TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>(&this->_OnValueChanged);
  TAttribute<FMargin>::~TAttribute<FMargin>(&this->_UniformPadding);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Values).Getter);
  TArray<int,TSizedDefaultAllocator<32>_>::~TArray<int,TSizedDefaultAllocator<32>_>
            (&(this->_Values).Value);
  TAttribute<int>::~TAttribute<int>(&this->_Value);
  TArray<SSegmentedControl<int>::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>::
  ~TArray<SSegmentedControl<int>::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>(&this->_Slots);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return;
}

// ~FArguments @ 142f3ccc0

void __thiscall SSpinBox<int>::FArguments::~FArguments(FArguments *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_ContextMenuExtender);
  pvVar1 = *(void **)&(this->_ContextMenuExtender).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_ContextMenuExtender);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_TypeInterface).Getter);
  pvVar1 = *(void **)&(this->_TypeInterface).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_TypeInterface).Getter);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->_TypeInterface).Value.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_KeyboardType).Getter);
  pvVar1 = *(void **)&(this->_KeyboardType).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_KeyboardType).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Justification).Getter);
  pvVar1 = *(void **)&(this->_Justification).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_Justification).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_MinDesiredWidth).Getter);
  pvVar1 = *(void **)&(this->_MinDesiredWidth).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_MinDesiredWidth).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_SelectAllTextOnCommit).Getter);
  pvVar1 = *(void **)&(this->_SelectAllTextOnCommit).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_SelectAllTextOnCommit).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->_ClearKeyboardFocusOnCommit).Getter);
  pvVar1 = *(void **)&(this->_ClearKeyboardFocusOnCommit).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_ClearKeyboardFocusOnCommit).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnEditEditableText);
  pvVar1 = *(void **)&(this->_OnEditEditableText).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnEditEditableText);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnGetDisplayValue);
  pvVar1 = *(void **)&(this->_OnGetDisplayValue).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnGetDisplayValue);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnEndSliderMovement);
  pvVar1 = *(void **)&(this->_OnEndSliderMovement).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnEndSliderMovement);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnBeginSliderMovement);
  pvVar1 = *(void **)&(this->_OnBeginSliderMovement).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnBeginSliderMovement);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnValueCommitted);
  pvVar1 = *(void **)&(this->_OnValueCommitted).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnValueCommitted);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnValueChanged);
  pvVar1 = *(void **)&(this->_OnValueChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnValueChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_ContentPadding).Getter);
  pvVar1 = *(void **)&(this->_ContentPadding).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_ContentPadding).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Font).Getter);
  pvVar1 = *(void **)&(this->_Font).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_Font).Getter);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->_Font).Value.CompositeFont.SharedReferenceCount.ReferenceController);
  TAttribute<TOptional<int>_>::~TAttribute<TOptional<int>_>(&this->_WheelStep);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->_SliderExponentNeutralValue).Getter);
  pvVar1 = *(void **)&(this->_SliderExponentNeutralValue).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_SliderExponentNeutralValue).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_SliderExponent).Getter);
  pvVar1 = *(void **)&(this->_SliderExponent).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_SliderExponent).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnDynamicSliderMinValueChanged);
  pvVar1 = *(void **)&(this->_OnDynamicSliderMinValueChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnDynamicSliderMinValueChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnDynamicSliderMaxValueChanged);
  pvVar1 = *(void **)&(this->_OnDynamicSliderMaxValueChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnDynamicSliderMaxValueChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->_SupportDynamicSliderMinValue).Getter);
  pvVar1 = *(void **)&(this->_SupportDynamicSliderMinValue).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_SupportDynamicSliderMinValue).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->_SupportDynamicSliderMaxValue).Getter);
  pvVar1 = *(void **)&(this->_SupportDynamicSliderMaxValue).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_SupportDynamicSliderMaxValue).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_LinearDeltaSensitivity).Getter);
  pvVar1 = *(void **)&(this->_LinearDeltaSensitivity).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_LinearDeltaSensitivity).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_CtrlMultiplier).Getter);
  pvVar1 = *(void **)&(this->_CtrlMultiplier).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_CtrlMultiplier).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_ShiftMultiplier).Getter);
  pvVar1 = *(void **)&(this->_ShiftMultiplier).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_ShiftMultiplier).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->_ShiftMouseMovePixelPerDelta).Getter);
  pvVar1 = *(void **)&(this->_ShiftMouseMovePixelPerDelta).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_ShiftMouseMovePixelPerDelta).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Delta).Getter);
  pvVar1 = *(void **)&(this->_Delta).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_Delta).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_EnableSlider).Getter);
  pvVar1 = *(void **)&(this->_EnableSlider).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_EnableSlider).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_AlwaysUsesDeltaSnap).Getter);
  pvVar1 = *(void **)&(this->_AlwaysUsesDeltaSnap).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_AlwaysUsesDeltaSnap).Getter);
  TAttribute<TOptional<int>_>::~TAttribute<TOptional<int>_>(&this->_MaxFractionalDigits);
  TAttribute<TOptional<int>_>::~TAttribute<TOptional<int>_>(&this->_MinFractionalDigits);
  TAttribute<TOptional<int>_>::~TAttribute<TOptional<int>_>(&this->_MaxSliderValue);
  TAttribute<TOptional<int>_>::~TAttribute<TOptional<int>_>(&this->_MinSliderValue);
  TAttribute<TOptional<int>_>::~TAttribute<TOptional<int>_>(&this->_MaxValue);
  TAttribute<TOptional<int>_>::~TAttribute<TOptional<int>_>(&this->_MinValue);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Value).Getter);
  pvVar1 = *(void **)&(this->_Value).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_Value).Getter);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return;
}

// ~FArguments @ 142f3d200

void __thiscall SSpinBox<double>::FArguments::~FArguments(FArguments *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_ContextMenuExtender);
  pvVar1 = *(void **)&(this->_ContextMenuExtender).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_ContextMenuExtender);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_TypeInterface).Getter);
  pvVar1 = *(void **)&(this->_TypeInterface).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_TypeInterface).Getter);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->_TypeInterface).Value.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_KeyboardType).Getter);
  pvVar1 = *(void **)&(this->_KeyboardType).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_KeyboardType).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Justification).Getter);
  pvVar1 = *(void **)&(this->_Justification).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_Justification).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_MinDesiredWidth).Getter);
  pvVar1 = *(void **)&(this->_MinDesiredWidth).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_MinDesiredWidth).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_SelectAllTextOnCommit).Getter);
  pvVar1 = *(void **)&(this->_SelectAllTextOnCommit).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_SelectAllTextOnCommit).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->_ClearKeyboardFocusOnCommit).Getter);
  pvVar1 = *(void **)&(this->_ClearKeyboardFocusOnCommit).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_ClearKeyboardFocusOnCommit).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnEditEditableText);
  pvVar1 = *(void **)&(this->_OnEditEditableText).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnEditEditableText);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnGetDisplayValue);
  pvVar1 = *(void **)&(this->_OnGetDisplayValue).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnGetDisplayValue);
  TDelegate<void___cdecl(double),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(double),FDefaultDelegateUserPolicy>(&this->_OnEndSliderMovement);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnBeginSliderMovement);
  pvVar1 = *(void **)&(this->_OnBeginSliderMovement).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnBeginSliderMovement);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnValueCommitted);
  pvVar1 = *(void **)&(this->_OnValueCommitted).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnValueCommitted);
  TDelegate<void___cdecl(double),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(double),FDefaultDelegateUserPolicy>(&this->_OnValueChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_ContentPadding).Getter);
  pvVar1 = *(void **)&(this->_ContentPadding).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_ContentPadding).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Font).Getter);
  pvVar1 = *(void **)&(this->_Font).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_Font).Getter);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->_Font).Value.CompositeFont.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_WheelStep).Getter);
  pvVar1 = *(void **)&(this->_WheelStep).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_WheelStep).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->_SliderExponentNeutralValue).Getter);
  pvVar1 = *(void **)&(this->_SliderExponentNeutralValue).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_SliderExponentNeutralValue).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_SliderExponent).Getter);
  pvVar1 = *(void **)&(this->_SliderExponent).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_SliderExponent).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnDynamicSliderMinValueChanged);
  pvVar1 = *(void **)&(this->_OnDynamicSliderMinValueChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnDynamicSliderMinValueChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnDynamicSliderMaxValueChanged);
  pvVar1 = *(void **)&(this->_OnDynamicSliderMaxValueChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnDynamicSliderMaxValueChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->_SupportDynamicSliderMinValue).Getter);
  pvVar1 = *(void **)&(this->_SupportDynamicSliderMinValue).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_SupportDynamicSliderMinValue).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->_SupportDynamicSliderMaxValue).Getter);
  pvVar1 = *(void **)&(this->_SupportDynamicSliderMaxValue).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_SupportDynamicSliderMaxValue).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_LinearDeltaSensitivity).Getter);
  pvVar1 = *(void **)&(this->_LinearDeltaSensitivity).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_LinearDeltaSensitivity).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_CtrlMultiplier).Getter);
  pvVar1 = *(void **)&(this->_CtrlMultiplier).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_CtrlMultiplier).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_ShiftMultiplier).Getter);
  pvVar1 = *(void **)&(this->_ShiftMultiplier).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_ShiftMultiplier).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->_ShiftMouseMovePixelPerDelta).Getter);
  pvVar1 = *(void **)&(this->_ShiftMouseMovePixelPerDelta).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_ShiftMouseMovePixelPerDelta).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Delta).Getter);
  pvVar1 = *(void **)&(this->_Delta).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_Delta).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_EnableSlider).Getter);
  pvVar1 = *(void **)&(this->_EnableSlider).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_EnableSlider).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_AlwaysUsesDeltaSnap).Getter);
  pvVar1 = *(void **)&(this->_AlwaysUsesDeltaSnap).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_AlwaysUsesDeltaSnap).Getter);
  TAttribute<TOptional<int>_>::~TAttribute<TOptional<int>_>(&this->_MaxFractionalDigits);
  TAttribute<TOptional<int>_>::~TAttribute<TOptional<int>_>(&this->_MinFractionalDigits);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_MaxSliderValue).Getter);
  pvVar1 = *(void **)&(this->_MaxSliderValue).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_MaxSliderValue).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_MinSliderValue).Getter);
  pvVar1 = *(void **)&(this->_MinSliderValue).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_MinSliderValue).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_MaxValue).Getter);
  pvVar1 = *(void **)&(this->_MaxValue).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_MaxValue).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_MinValue).Getter);
  pvVar1 = *(void **)&(this->_MinValue).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_MinValue).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Value).Getter);
  pvVar1 = *(void **)&(this->_Value).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_Value).Getter);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return;
}

// ~FArguments @ 142f3d790

void __thiscall STableRow<TSharedPtr<FTestData,1>_>::FArguments::~FArguments(FArguments *this)

{
  void *pvVar1;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->_Content).Widget.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Padding).Getter);
  pvVar1 = *(void **)&(this->_Padding).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_Padding).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnDrop);
  pvVar1 = *(void **)&(this->_OnDrop).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnDrop);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnDragLeave);
  pvVar1 = *(void **)&(this->_OnDragLeave).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnDragLeave);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnDragEnter);
  pvVar1 = *(void **)&(this->_OnDragEnter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnDragEnter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnDragDetected);
  pvVar1 = *(void **)&(this->_OnDragDetected).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnDragDetected);
  TDelegate<int___cdecl(enum_EItemDropZone,FPaintArgs_const_&,FGeometry_const_&,FSlateRect_const_&,FSlateWindowElementList_&,int,FWidgetStyle_const_&,bool),FDefaultDelegateUserPolicy>
  ::
  ~TDelegate<int___cdecl(enum_EItemDropZone,FPaintArgs_const_&,FGeometry_const_&,FSlateRect_const_&,FSlateWindowElementList_&,int,FWidgetStyle_const_&,bool),FDefaultDelegateUserPolicy>
            (&this->_OnPaintDropIndicator);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnAcceptDrop);
  pvVar1 = *(void **)&(this->_OnAcceptDrop).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnAcceptDrop);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnCanAcceptDrop);
  pvVar1 = *(void **)&(this->_OnCanAcceptDrop).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnCanAcceptDrop);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return;
}

// ~FArguments @ 142f3d8f0

void __thiscall
STableRow<TSharedPtr<enum_ESelectionMode::Type,1>_>::FArguments::~FArguments(void *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x2f0));
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x2c8));
  if (*(void **)((longlong)this + 0x2d0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x2d0));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x2c8));
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x298));
  if (*(void **)((longlong)this + 0x2a0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x2a0));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x298));
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x280));
  if (*(void **)((longlong)this + 0x288) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x288));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x280));
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x268));
  if (*(void **)((longlong)this + 0x270) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x270));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x268));
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x250));
  if (*(void **)((longlong)this + 600) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 600));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x250));
  TDelegate<int___cdecl(enum_EItemDropZone,FPaintArgs_const_&,FGeometry_const_&,FSlateRect_const_&,FSlateWindowElementList_&,int,FWidgetStyle_const_&,bool),FDefaultDelegateUserPolicy>
  ::
  ~TDelegate<int___cdecl(enum_EItemDropZone,FPaintArgs_const_&,FGeometry_const_&,FSlateRect_const_&,FSlateWindowElementList_&,int,FWidgetStyle_const_&,bool),FDefaultDelegateUserPolicy>
            ((void *)((longlong)this + 0x238));
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x220));
  if (*(void **)((longlong)this + 0x228) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x228));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x220));
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x208));
  if (*(void **)((longlong)this + 0x210) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x210));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x208));
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs(this);
  return;
}

// ~FArguments @ 142f3da50

void __thiscall STileView<TSharedPtr<int,1>_>::FArguments::~FArguments(FArguments *this)

{
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>(&this->_OnEnteredBadState);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnItemToString_Debug);
  TAttribute<bool>::~TAttribute<bool>(&this->_IsFocusable);
  TAttribute<EVisibility>::~TAttribute<EVisibility>(&this->_ScrollbarVisibility);
  TSharedPtr<SScrollBar,1>::~TSharedPtr<SScrollBar,1>(&this->_ExternalScrollbar);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_SelectionMode).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnIsSelectableOrNavigable);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnSelectionChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnMouseButtonDoubleClick);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnMouseButtonClick);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>(&this->_OnItemsRebuilt);
  TDelegate<TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>::
  ~TDelegate<TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
            (&this->_OnContextMenuOpening);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_ItemAlignment).Getter);
  TAttribute<float>::~TAttribute<float>(&this->_ItemWidth);
  TAttribute<float>::~TAttribute<float>(&this->_ItemHeight);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&(this->_ListItemsSource_SharedObservableArray).SharedReferenceCount);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnItemScrolledIntoView);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>(&this->_OnFinishedScrolling);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnTileViewScrolled);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnTileReleased);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnRefreshTile);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnGenerateTile);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return;
}

// ~FArguments @ 142f3dc20

void __thiscall STileView<TSharedPtr<FTestData,1>_>::FArguments::~FArguments(FArguments *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnEnteredBadState);
  pvVar1 = *(void **)&(this->_OnEnteredBadState).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnEnteredBadState);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnItemToString_Debug);
  pvVar1 = *(void **)&(this->_OnItemToString_Debug).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnItemToString_Debug);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_IsFocusable).Getter);
  pvVar1 = *(void **)&(this->_IsFocusable).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_IsFocusable).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_ScrollbarVisibility).Getter);
  pvVar1 = *(void **)&(this->_ScrollbarVisibility).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_ScrollbarVisibility).Getter);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->_ExternalScrollbar).SharedReferenceCount.ReferenceController);
  TAttribute<enum_ESelectionMode::Type>::~TAttribute<enum_ESelectionMode::Type>
            (&this->_SelectionMode);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnIsSelectableOrNavigable);
  pvVar1 = *(void **)&(this->_OnIsSelectableOrNavigable).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnIsSelectableOrNavigable);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnSelectionChanged);
  pvVar1 = *(void **)&(this->_OnSelectionChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnSelectionChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnMouseButtonDoubleClick);
  pvVar1 = *(void **)&(this->_OnMouseButtonDoubleClick).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnMouseButtonDoubleClick);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnMouseButtonClick);
  pvVar1 = *(void **)&(this->_OnMouseButtonClick).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnMouseButtonClick);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnItemsRebuilt);
  pvVar1 = *(void **)&(this->_OnItemsRebuilt).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnItemsRebuilt);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnContextMenuOpening);
  pvVar1 = *(void **)&(this->_OnContextMenuOpening).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnContextMenuOpening);
  TAttribute<enum_EListItemAlignment>::~TAttribute<enum_EListItemAlignment>(&this->_ItemAlignment);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_ItemWidth).Getter);
  pvVar1 = *(void **)&(this->_ItemWidth).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_ItemWidth).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_ItemHeight).Getter);
  pvVar1 = *(void **)&(this->_ItemHeight).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_ItemHeight).Getter);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->_ListItemsSource_SharedObservableArray).SharedReferenceCount.ReferenceController
            );
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnItemScrolledIntoView);
  pvVar1 = *(void **)&(this->_OnItemScrolledIntoView).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnItemScrolledIntoView);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnFinishedScrolling);
  pvVar1 = *(void **)&(this->_OnFinishedScrolling).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnFinishedScrolling);
  TDelegate<void___cdecl(double),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(double),FDefaultDelegateUserPolicy>(&this->_OnTileViewScrolled);
  TDelegate<void___cdecl(TSharedRef<ITableRow,1>_const_&),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(TSharedRef<ITableRow,1>_const_&),FDefaultDelegateUserPolicy>
            (&this->_OnTileReleased);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnRefreshTile);
  pvVar1 = *(void **)&(this->_OnRefreshTile).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnRefreshTile);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnGenerateTile);
  pvVar1 = *(void **)&(this->_OnGenerateTile).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnGenerateTile);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return;
}

// ~FArguments @ 142f3df20

void __thiscall STreeView<TSharedPtr<int,1>_>::FArguments::~FArguments(FArguments *this)

{
  TDelegate<FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>::
  ~TDelegate<FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>
            (&this->_OnKeyDownHandler);
  TAttribute<bool>::~TAttribute<bool>(&this->_ShouldStackHierarchyHeaders);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>(&this->_OnEnteredBadState);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnItemToString_Debug);
  TSharedPtr<SScrollBar,1>::~TSharedPtr<SScrollBar,1>(&this->_ExternalScrollbar);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&(this->_HeaderRow).SharedReferenceCount);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_SelectionMode).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnIsSelectableOrNavigable);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnExpansionChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnSelectionChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnMouseButtonDoubleClick);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnMouseButtonClick);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>(&this->_OnItemsRebuilt);
  TDelegate<TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>::
  ~TDelegate<TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
            (&this->_OnContextMenuOpening);
  TAttribute<int>::~TAttribute<int>(&this->_MaxPinnedItems);
  TAttribute<float>::~TAttribute<float>(&this->_ItemHeight);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&(this->_TreeItemsSource_SharedObservableArray).SharedReferenceCount);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnSetExpansionRecursive);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnGetChildren);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnItemScrolledIntoView);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>(&this->_OnFinishedScrolling);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnTreeViewScrolled);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnRowReleased);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnRefreshRow);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnGeneratePinnedRow);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnGenerateRow);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return;
}

// ~FArguments @ 142f3e140

void __thiscall STreeView<TSharedPtr<FTestData,1>_>::FArguments::~FArguments(FArguments *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnKeyDownHandler);
  pvVar1 = *(void **)&(this->_OnKeyDownHandler).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnKeyDownHandler);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->_ShouldStackHierarchyHeaders).Getter);
  pvVar1 = *(void **)&(this->_ShouldStackHierarchyHeaders).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_ShouldStackHierarchyHeaders).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnEnteredBadState);
  pvVar1 = *(void **)&(this->_OnEnteredBadState).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnEnteredBadState);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnItemToString_Debug);
  pvVar1 = *(void **)&(this->_OnItemToString_Debug).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnItemToString_Debug);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->_ExternalScrollbar).SharedReferenceCount.ReferenceController);
  TSharedPtr<SHeaderRow,1>::~TSharedPtr<SHeaderRow,1>(&this->_HeaderRow);
  TAttribute<enum_ESelectionMode::Type>::~TAttribute<enum_ESelectionMode::Type>
            (&this->_SelectionMode);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnIsSelectableOrNavigable);
  pvVar1 = *(void **)&(this->_OnIsSelectableOrNavigable).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnIsSelectableOrNavigable);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnExpansionChanged);
  pvVar1 = *(void **)&(this->_OnExpansionChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnExpansionChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnSelectionChanged);
  pvVar1 = *(void **)&(this->_OnSelectionChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnSelectionChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnMouseButtonDoubleClick);
  pvVar1 = *(void **)&(this->_OnMouseButtonDoubleClick).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnMouseButtonDoubleClick);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnMouseButtonClick);
  pvVar1 = *(void **)&(this->_OnMouseButtonClick).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnMouseButtonClick);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnItemsRebuilt);
  pvVar1 = *(void **)&(this->_OnItemsRebuilt).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnItemsRebuilt);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnContextMenuOpening);
  pvVar1 = *(void **)&(this->_OnContextMenuOpening).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnContextMenuOpening);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_MaxPinnedItems).Getter);
  pvVar1 = *(void **)&(this->_MaxPinnedItems).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_MaxPinnedItems).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_ItemHeight).Getter);
  pvVar1 = *(void **)&(this->_ItemHeight).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_ItemHeight).Getter);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->_TreeItemsSource_SharedObservableArray).SharedReferenceCount.ReferenceController
            );
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnSetExpansionRecursive);
  pvVar1 = *(void **)&(this->_OnSetExpansionRecursive).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnSetExpansionRecursive);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnGetChildren);
  pvVar1 = *(void **)&(this->_OnGetChildren).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnGetChildren);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnItemScrolledIntoView);
  pvVar1 = *(void **)&(this->_OnItemScrolledIntoView).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnItemScrolledIntoView);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnFinishedScrolling);
  pvVar1 = *(void **)&(this->_OnFinishedScrolling).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnFinishedScrolling);
  TDelegate<void___cdecl(double),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(double),FDefaultDelegateUserPolicy>(&this->_OnTreeViewScrolled);
  TDelegate<void___cdecl(TSharedRef<ITableRow,1>_const_&),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(TSharedRef<ITableRow,1>_const_&),FDefaultDelegateUserPolicy>
            (&this->_OnRowReleased);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnRefreshRow);
  pvVar1 = *(void **)&(this->_OnRefreshRow).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnRefreshRow);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnGeneratePinnedRow);
  pvVar1 = *(void **)&(this->_OnGeneratePinnedRow).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnGeneratePinnedRow);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnGenerateRow);
  pvVar1 = *(void **)&(this->_OnGenerateRow).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnGenerateRow);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return;
}

// ~FArguments @ 142f3e4f0

void __thiscall SCircularThrobber::FArguments::~FArguments(FArguments *this)

{
  TAttribute<FSlateColor>::~TAttribute<FSlateColor>(&this->_ColorAndOpacity);
  TSlateBaseNamedArgs<SCircularThrobber>::~TSlateBaseNamedArgs<SCircularThrobber>
            ((TSlateBaseNamedArgs<SCircularThrobber> *)this);
  return;
}

// ~FArguments @ 142f3e530

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SColorPicker::FArguments::~FArguments(FArguments *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_OptionalOwningDetailsView).Getter
            );
  pvVar1 = *(void **)&(this->_OptionalOwningDetailsView).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_OptionalOwningDetailsView).Getter);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->_OptionalOwningDetailsView).Value.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_DisplayGamma).Getter);
  pvVar1 = *(void **)&(this->_DisplayGamma).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_DisplayGamma).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_ParentWindow).Getter);
  pvVar1 = *(void **)&(this->_ParentWindow).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_ParentWindow).Getter);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->_ParentWindow).Value.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnInteractivePickEnd);
  pvVar1 = *(void **)&(this->_OnInteractivePickEnd).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnInteractivePickEnd);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnInteractivePickBegin);
  pvVar1 = *(void **)&(this->_OnInteractivePickBegin).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnInteractivePickBegin);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnColorPickerWindowClosed);
  pvVar1 = *(void **)&(this->_OnColorPickerWindowClosed).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnColorPickerWindowClosed);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnColorPickerCancelled);
  pvVar1 = *(void **)&(this->_OnColorPickerCancelled).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnColorPickerCancelled);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_PreColorCommitted);
  pvVar1 = *(void **)&(this->_PreColorCommitted).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_PreColorCommitted);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnColorCommitted);
  pvVar1 = *(void **)&(this->_OnColorCommitted).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnColorCommitted);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_OnlyRefreshOnOk).Getter);
  pvVar1 = *(void **)&(this->_OnlyRefreshOnOk).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_OnlyRefreshOnOk).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_OnlyRefreshOnMouseUp).Getter);
  pvVar1 = *(void **)&(this->_OnlyRefreshOnMouseUp).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_OnlyRefreshOnMouseUp).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_UseAlpha).Getter);
  pvVar1 = *(void **)&(this->_UseAlpha).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_UseAlpha).Getter);
  pFVar2 = (this->_TargetColorChannels).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->_TargetLinearColors).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->_TargetFColors).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_ColorWheelBrush).Getter);
  pvVar1 = *(void **)&(this->_ColorWheelBrush).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_ColorWheelBrush).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_TargetColorAttribute).Getter);
  pvVar1 = *(void **)&(this->_TargetColorAttribute).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_TargetColorAttribute).Getter);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return;
}

// ~FArguments @ 142f3e7e0

void __thiscall SColorSlider::FArguments::~FArguments(FArguments *this)

{
  TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>(&this->_OnEndSpinBoxMovement);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>(&this->_OnBeginSpinBoxMovement);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>(&this->_OnEndSliderMovement);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>(&this->_OnBeginSliderMovement);
  TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>(&this->_OnValueChanged);
  TAttribute<bool>::~TAttribute<bool>(&this->_UseSRGB);
  TAttribute<bool>::~TAttribute<bool>(&this->_HasAlphaBackground);
  TAttribute<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_>::
  ~TAttribute<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_>(&this->_GradientColors);
  TAttribute<FText>::~TAttribute<FText>(&this->_Label);
  TAttribute<enum_EOrientation>::~TAttribute<enum_EOrientation>(&this->_Orientation);
  TAttribute<bool>::~TAttribute<bool>(&this->_SupportDynamicSliderMaxValue);
  TAttribute<float>::~TAttribute<float>(&this->_Delta);
  TAttribute<float>::~TAttribute<float>(&this->_MaxSliderValue);
  TAttribute<float>::~TAttribute<float>(&this->_MinSliderValue);
  TAttribute<float>::~TAttribute<float>(&this->_MaxSpinBoxValue);
  TAttribute<float>::~TAttribute<float>(&this->_MinSpinBoxValue);
  TAttribute<float>::~TAttribute<float>(&this->_Value);
  TSlateBaseNamedArgs<SColorSlider>::~TSlateBaseNamedArgs<SColorSlider>
            ((TSlateBaseNamedArgs<SColorSlider> *)this);
  return;
}

// ~FArguments @ 142f3e950

void __thiscall SColorSpectrum::FArguments::~FArguments(FArguments *this)

{
  TAttribute<float>::~TAttribute<float>(&this->_CtrlMultiplier);
  TDelegate<void___cdecl(FLinearColor),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(FLinearColor),FDefaultDelegateUserPolicy>(&this->_OnValueChanged);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>(&this->_OnMouseCaptureEnd);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>(&this->_OnMouseCaptureBegin);
  TAttribute<FLinearColor>::~TAttribute<FLinearColor>(&this->_SelectedColor);
  TSlateBaseNamedArgs<SColorSpectrum>::~TSlateBaseNamedArgs<SColorSpectrum>
            ((TSlateBaseNamedArgs<SColorSpectrum> *)this);
  return;
}

// ~FArguments @ 142f3e9d0

void __thiscall SColorWheel::FArguments::~FArguments(FArguments *this)

{
  TAttribute<float>::~TAttribute<float>(&this->_CtrlMultiplier);
  TDelegate<void___cdecl(FLinearColor),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(FLinearColor),FDefaultDelegateUserPolicy>(&this->_OnValueChanged);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>(&this->_OnMouseCaptureEnd);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>(&this->_OnMouseCaptureBegin);
  TAttribute<FSlateBrush_const_*>::~TAttribute<FSlateBrush_const_*>(&this->_ColorWheelBrush);
  TAttribute<FLinearColor>::~TAttribute<FLinearColor>(&this->_SelectedColor);
  TSlateBaseNamedArgs<SColorWheel>::~TSlateBaseNamedArgs<SColorWheel>
            ((TSlateBaseNamedArgs<SColorWheel> *)this);
  return;
}

// ~FArguments @ 142f3ea70

void __thiscall SEyeDropperButton::FArguments::~FArguments(FArguments *this)

{
  TAttribute<float>::~TAttribute<float>(&this->_DisplayGamma);
  TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>(&this->_OnComplete);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>(&this->_OnBegin);
  TDelegate<void___cdecl(FLinearColor),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(FLinearColor),FDefaultDelegateUserPolicy>(&this->_OnValueChanged);
  TSlateBaseNamedArgs<SEyeDropperButton>::~TSlateBaseNamedArgs<SEyeDropperButton>
            ((TSlateBaseNamedArgs<SEyeDropperButton> *)this);
  return;
}

// ~FArguments @ 142f3eae0

void __thiscall SFxWidget::FArguments::~FArguments(FArguments *this)

{
  TAlwaysValidWidget::~TAlwaysValidWidget(&this->_Content);
  TAttribute<FLinearColor>::~TAttribute<FLinearColor>(&this->_ColorAndOpacity);
  TAttribute<bool>::~TAttribute<bool>(&this->_IgnoreClipping);
  TAttribute<UE::Math::TVector2<double>_>::~TAttribute<UE::Math::TVector2<double>_>
            (&this->_VisualOffset);
  TAttribute<float>::~TAttribute<float>(&this->_LayoutScale);
  TAttribute<UE::Math::TVector2<double>_>::~TAttribute<UE::Math::TVector2<double>_>
            (&this->_RenderScaleOrigin);
  TAttribute<float>::~TAttribute<float>(&this->_RenderScale);
  TSlateBaseNamedArgs<SFxWidget>::~TSlateBaseNamedArgs<SFxWidget>
            ((TSlateBaseNamedArgs<SFxWidget> *)this);
  return;
}

// ~FArguments @ 142f3eb90

void __thiscall SHeader::FArguments::~FArguments(FArguments *this)

{
  TAlwaysValidWidget::~TAlwaysValidWidget(&this->_Content);
  TSlateBaseNamedArgs<SHeader>::~TSlateBaseNamedArgs<SHeader>((TSlateBaseNamedArgs<SHeader> *)this);
  return;
}

// ~FArguments @ 142f3ebd0

void __thiscall SInlineEditableTextBlock::FArguments::~FArguments(FArguments *this)

{
  TDelegate<bool___cdecl(FText_const_&,FText_&),FDefaultDelegateUserPolicy>::
  ~TDelegate<bool___cdecl(FText_const_&,FText_&),FDefaultDelegateUserPolicy>
            (&this->_OnVerifyTextChanged);
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::
  ~TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>(&this->_IsSelected);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>(&this->_OnExitEditingMode);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>(&this->_OnEnterEditingMode);
  TDelegate<void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
            (&this->_OnTextCommitted);
  TDelegate<void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>(&this->_OnBeginTextEdit);
  TAttribute<bool>::~TAttribute<bool>(&this->_IsReadOnly);
  TSharedPtr<IBreakIterator,1>::~TSharedPtr<IBreakIterator,1>(&this->_LineBreakPolicy);
  TAttribute<int>::~TAttribute<int>(&this->_MaximumLength);
  TAttribute<enum_ETextJustify::Type>::~TAttribute<enum_ETextJustify::Type>(&this->_Justification);
  TAttribute<bool>::~TAttribute<bool>(&this->_AutoWrapMultilineEditText);
  TAttribute<bool>::~TAttribute<bool>(&this->_AutoWrapNonEditText);
  TAttribute<float>::~TAttribute<float>(&this->_WrapTextAt);
  TAttribute<FText>::~TAttribute<FText>(&this->_HighlightText);
  TAttribute<FLinearColor>::~TAttribute<FLinearColor>(&this->_ShadowColorAndOpacity);
  TAttribute<UE::Math::TVector2<double>_>::~TAttribute<UE::Math::TVector2<double>_>
            (&this->_ShadowOffset);
  TAttribute<FSlateColor>::~TAttribute<FSlateColor>(&this->_ColorAndOpacity);
  TAttribute<FSlateFontInfo>::~TAttribute<FSlateFontInfo>(&this->_Font);
  TAttribute<FText>::~TAttribute<FText>(&this->_HintText);
  TAttribute<FText>::~TAttribute<FText>(&this->_Text);
  TSlateBaseNamedArgs<SInlineEditableTextBlock>::~TSlateBaseNamedArgs<SInlineEditableTextBlock>
            ((TSlateBaseNamedArgs<SInlineEditableTextBlock> *)this);
  return;
}

// ~FArguments @ 142f3ed70

void __thiscall SItemEditor::FArguments::~FArguments(FArguments *this)

{
  void *pvVar1;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->_ItemToEdit).SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnDragDetected);
  pvVar1 = *(void **)&(this->_OnDragDetected).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnDragDetected);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnAcceptDrop);
  pvVar1 = *(void **)&(this->_OnAcceptDrop).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnAcceptDrop);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnCanAcceptDrop);
  pvVar1 = *(void **)&(this->_OnCanAcceptDrop).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnCanAcceptDrop);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return;
}

// ~FArguments @ 142f3ee20

void __thiscall SProgressBar::FArguments::~FArguments(FArguments *this)

{
  TAttribute<UE::Math::TVector2<double>_>::~TAttribute<UE::Math::TVector2<double>_>
            (&this->_BorderPadding);
  TAttribute<FSlateColor>::~TAttribute<FSlateColor>(&this->_FillColorAndOpacity);
  TAttribute<TOptional<float>_>::~TAttribute<TOptional<float>_>(&this->_Percent);
  TSlateBaseNamedArgs<SProgressBar>::~TSlateBaseNamedArgs<SProgressBar>
            ((TSlateBaseNamedArgs<SProgressBar> *)this);
  return;
}

// ~FArguments @ 142f3ee80

void __thiscall SSpinningImage::FArguments::~FArguments(FArguments *this)

{
  TDelegate<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>::
  ~TDelegate<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
            (&this->_OnMouseButtonDown);
  TAttribute<FSlateColor>::~TAttribute<FSlateColor>(&this->_ColorAndOpacity);
  TAttribute<FSlateBrush_const_*>::~TAttribute<FSlateBrush_const_*>(&this->_Image);
  TSlateBaseNamedArgs<SSpinningImage>::~TSlateBaseNamedArgs<SSpinningImage>
            ((TSlateBaseNamedArgs<SSpinningImage> *)this);
  return;
}

// ~FArguments @ 142f3eee0

void __thiscall STextComboBox::FArguments::~FArguments(FArguments *this)

{
  TDelegate<FString___cdecl(TSharedPtr<FString,1>),FDefaultDelegateUserPolicy>::
  ~TDelegate<FString___cdecl(TSharedPtr<FString,1>),FDefaultDelegateUserPolicy>
            (&this->_OnGetTextLabelForItem);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&(this->_InitiallySelectedItem).SharedReferenceCount);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>(&this->_OnComboBoxOpening);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnSelectionChanged);
  TAttribute<FMargin>::~TAttribute<FMargin>(&this->_ContentPadding);
  TAttribute<FSlateFontInfo>::~TAttribute<FSlateFontInfo>(&this->_Font);
  TAttribute<FSlateColor>::~TAttribute<FSlateColor>(&this->_ColorAndOpacity);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&(this->_OptionsSource_SharedObservableArray).SharedReferenceCount);
  TSlateBaseNamedArgs<STextComboBox>::~TSlateBaseNamedArgs<STextComboBox>
            ((TSlateBaseNamedArgs<STextComboBox> *)this);
  return;
}

// ~FArguments @ 142f3efa0

void __thiscall STextComboPopup::FArguments::~FArguments(FArguments *this)

{
  TDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>(&this->_OnTextChosen);
  TArray<FString,TSizedDefaultAllocator<32>_>::~TArray<FString,TSizedDefaultAllocator<32>_>
            (&this->_TextOptions);
  FText::~FText(&this->_Label);
  TSlateBaseNamedArgs<STextComboPopup>::~TSlateBaseNamedArgs<STextComboPopup>
            ((TSlateBaseNamedArgs<STextComboPopup> *)this);
  return;
}

// ~FArguments @ 142f3f000

void __thiscall SThemeColorBlocksBar::FArguments::~FArguments(FArguments *this)

{
  TAttribute<bool>::~TAttribute<bool>(&this->_UseAlpha);
  TAttribute<bool>::~TAttribute<bool>(&this->_UseSRGB);
  FText::~FText(&this->_EmptyText);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>(&this->_HideTrashCallback);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>(&this->_ShowTrashCallback);
  TDelegate<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>::
  ~TDelegate<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>(&this->_OnGetActiveColor);
  TDelegate<void___cdecl(FLinearColor),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(FLinearColor),FDefaultDelegateUserPolicy>(&this->_OnSelectColor);
  TAttribute<TSharedPtr<FColorTheme,1>_>::~TAttribute<TSharedPtr<FColorTheme,1>_>
            (&this->_ColorTheme);
  TSlateBaseNamedArgs<SThemeColorBlocksBar>::~TSlateBaseNamedArgs<SThemeColorBlocksBar>
            ((TSlateBaseNamedArgs<SThemeColorBlocksBar> *)this);
  return;
}

// ~FArguments @ 142f3f0c0

void __thiscall SThrobber::FArguments::~FArguments(FArguments *this)

{
  TSlateBaseNamedArgs<SThrobber>::~TSlateBaseNamedArgs<SThrobber>
            ((TSlateBaseNamedArgs<SThrobber> *)this);
  return;
}

// ~FArguments @ 142f3f0e0

void __thiscall SUniformGridPanel::FArguments::~FArguments(FArguments *this)

{
  TAttribute<float>::~TAttribute<float>(&this->_MinDesiredSlotHeight);
  TAttribute<float>::~TAttribute<float>(&this->_MinDesiredSlotWidth);
  TAttribute<FMargin>::~TAttribute<FMargin>(&this->_SlotPadding);
  TArray<SUniformGridPanel::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>::
  ~TArray<SUniformGridPanel::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>(&this->_Slots);
  TSlateBaseNamedArgs<SUniformGridPanel>::~TSlateBaseNamedArgs<SUniformGridPanel>
            ((TSlateBaseNamedArgs<SUniformGridPanel> *)this);
  return;
}

// ~FArguments @ 142f3f150

void __thiscall SUserWidgetExample::FArguments::~FArguments(FArguments *this)

{
  FText::~FText(&this->_Title);
  TSlateBaseNamedArgs<SUserWidgetExample>::~TSlateBaseNamedArgs<SUserWidgetExample>
            ((TSlateBaseNamedArgs<SUserWidgetExample> *)this);
  return;
}

// ~FArguments @ 142f3f190

void __thiscall SVolumeControl::FArguments::~FArguments(FArguments *this)

{
  TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>(&this->_OnMuteChanged);
  TAttribute<bool>::~TAttribute<bool>(&this->_Muted);
  TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>(&this->_OnVolumeChanged);
  TAttribute<float>::~TAttribute<float>(&this->_Volume);
  TSlateBaseNamedArgs<SVolumeControl>::~TSlateBaseNamedArgs<SVolumeControl>
            ((TSlateBaseNamedArgs<SVolumeControl> *)this);
  return;
}

// operator[] @ 142f41d60

FArguments * __thiscall
SComboBox<TSharedPtr<FString,1>_>::FArguments::operator[]
          (FArguments *this,TSharedRef<SWidget,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  SWidget *pSVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pSVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->_Content).Widget.SharedReferenceCount.ReferenceController;
  (this->_Content).Widget.Object = pSVar2;
  (this->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return this;
}

// operator[] @ 142f41db0

FArguments * __thiscall
SComboBox<TSharedPtr<enum_ESelectionMode::Type,1>_>::FArguments::operator[]
          (void *this,TSharedRef<SWidget,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  SWidget *pSVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pSVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)this + 0x200);
  *(SWidget **)((longlong)this + 0x1f8) = pSVar2;
  *(TReferenceControllerBase<1> **)((longlong)this + 0x200) = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return this;
}

// operator[] @ 142f41e00

/* WARNING: Enum "Type": Some values do not have unique names */

FArguments * __thiscall
SHeaderRow::FColumn::FArguments::operator[](FArguments *this,TSharedRef<SWidget,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  SWidget *pSVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pSVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->_HeaderContent).Widget.SharedReferenceCount.ReferenceController;
  (this->_HeaderContent).Widget.Object = pSVar2;
  (this->_HeaderContent).Widget.SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return this;
}

// operator[] @ 142f41e50

FArguments * __thiscall
SFxWidget::FArguments::operator[](FArguments *this,TSharedRef<SWidget,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  SWidget *pSVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pSVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->_Content).Widget.SharedReferenceCount.ReferenceController;
  (this->_Content).Widget.Object = pSVar2;
  (this->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return this;
}

// operator[] @ 142f41ea0

FArguments * __thiscall
SMenuAnchor::FArguments::operator[](FArguments *this,TSharedRef<SWidget,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  SWidget *pSVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pSVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->_Content).Widget.SharedReferenceCount.ReferenceController;
  (this->_Content).Widget.Object = pSVar2;
  (this->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return this;
}

// operator+ @ 142f42560

FArguments * __thiscall
SSegmentedControl<int>::FArguments::operator+(FArguments *this,FSlotArguments *param_1)

{
  int *piVar1;
  TArray<SSegmentedControl<int>::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_> *pTVar2;
  FSlotArguments *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FArguments *pFVar7;
  
  pTVar2 = &this->_Slots;
  pFVar3 = (FSlotArguments *)(pTVar2->AllocatorInstance).Data;
  if ((pFVar3 <= param_1) && (param_1 < pFVar3 + (this->_Slots).ArrayMax)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FArguments *)(*pcVar4)();
      return pFVar7;
    }
  }
  iVar6 = (this->_Slots).ArrayNum;
  piVar1 = &(this->_Slots).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x8e8,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->_Slots).ArrayNum = iVar6 + 1;
  SSegmentedControl<int>::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 0xe8),param_1);
  return this;
}

// operator+ @ 142f42630

FArguments * __thiscall
SUniformGridPanel::FArguments::operator+(FArguments *this,FSlotArguments *param_1)

{
  int *piVar1;
  TArray<SUniformGridPanel::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement FVar4;
  FSlotArguments *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FArguments *pFVar9;
  
  pTVar2 = &this->_Slots;
  pFVar5 = (FSlotArguments *)(pTVar2->AllocatorInstance).Data;
  if ((pFVar5 <= param_1) && (param_1 < pFVar5 + (this->_Slots).ArrayMax)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar9 = (FArguments *)(*pcVar6)();
      return pFVar9;
    }
  }
  iVar8 = (this->_Slots).ArrayNum;
  piVar1 = &(this->_Slots).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->_Slots).ArrayNum = iVar8 + 1;
  pFVar3 = (pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 0x28;
  *(undefined8 *)pFVar3 = *(undefined8 *)param_1;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)(pFVar3 + 8) = *(undefined8 *)&param_1->field_0x8;
  *(undefined8 *)(pFVar3 + 0x10) = *(undefined8 *)&param_1->field_0x10;
  *(undefined8 *)&param_1->field_0x10 = 0;
  *(undefined8 *)&param_1->field_0x8 = 0;
  pFVar3[0x1c] = (FScriptContainerElement)0x0;
  FVar4 = (FScriptContainerElement)param_1->field_0x1c;
  pFVar3[0x1c] = FVar4;
  if (FVar4 != (FScriptContainerElement)0x0) {
    *(undefined4 *)(pFVar3 + 0x18) = *(undefined4 *)&param_1->field_0x18;
  }
  pFVar3[0x24] = (FScriptContainerElement)0x0;
  FVar4 = (FScriptContainerElement)param_1->field_0x24;
  pFVar3[0x24] = FVar4;
  if (FVar4 != (FScriptContainerElement)0x0) {
    *(undefined4 *)(pFVar3 + 0x20) = *(undefined4 *)&param_1->field_0x20;
  }
  return this;
}

// operator+ @ 142f42740

FArguments * __thiscall
SUniformWrapPanel::FArguments::operator+(FArguments *this,FSlotArguments *param_1)

{
  int *piVar1;
  TArray<SUniformWrapPanel::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement FVar4;
  FSlotArguments *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FArguments *pFVar9;
  
  pTVar2 = &this->_Slots;
  pFVar5 = (FSlotArguments *)(pTVar2->AllocatorInstance).Data;
  if ((pFVar5 <= param_1) && (param_1 < pFVar5 + (this->_Slots).ArrayMax)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar9 = (FArguments *)(*pcVar6)();
      return pFVar9;
    }
  }
  iVar8 = (this->_Slots).ArrayNum;
  piVar1 = &(this->_Slots).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->_Slots).ArrayNum = iVar8 + 1;
  pFVar3 = (pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 0x28;
  *(undefined8 *)pFVar3 = *(undefined8 *)param_1;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)(pFVar3 + 8) = *(undefined8 *)&param_1->field_0x8;
  *(undefined8 *)(pFVar3 + 0x10) = *(undefined8 *)&param_1->field_0x10;
  *(undefined8 *)&param_1->field_0x10 = 0;
  *(undefined8 *)&param_1->field_0x8 = 0;
  pFVar3[0x1c] = (FScriptContainerElement)0x0;
  FVar4 = (FScriptContainerElement)param_1->field_0x1c;
  pFVar3[0x1c] = FVar4;
  if (FVar4 != (FScriptContainerElement)0x0) {
    *(undefined4 *)(pFVar3 + 0x18) = *(undefined4 *)&param_1->field_0x18;
  }
  pFVar3[0x24] = (FScriptContainerElement)0x0;
  FVar4 = (FScriptContainerElement)param_1->field_0x24;
  pFVar3[0x24] = FVar4;
  if (FVar4 != (FScriptContainerElement)0x0) {
    *(undefined4 *)(pFVar3 + 0x20) = *(undefined4 *)&param_1->field_0x20;
  }
  return this;
}

// AllowSpin @ 142f58690

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FArguments * __thiscall
SNumericEntryBox<float>::FArguments::AllowSpin(FArguments *this,bool param_1)

{
  this->_AllowSpin = param_1;
  return this;
}

// Animate @ 142f586a0

FArguments * __thiscall SThrobber::FArguments::Animate(FArguments *this,EAnimation param_1)

{
  this->_Animate = param_1;
  return this;
}

// ButtonContent @ 142f5b780

NamedSlotProperty<SComboButton::FArguments> * __thiscall
SComboButton::FArguments::ButtonContent
          (FArguments *this,NamedSlotProperty<SComboButton::FArguments> *__return_storage_ptr__)

{
  __return_storage_ptr__->OwnerDeclaration = this;
  __return_storage_ptr__->SlotContent = &this->_ButtonContent;
  return __return_storage_ptr__;
}

// ButtonStyle @ 142f5b7a0

FArguments * __thiscall SButton::FArguments::ButtonStyle(FArguments *this,FButtonStyle *param_1)

{
  this->_ButtonStyle = param_1;
  return this;
}

// ColorAndOpacity @ 142f5bfc0

FArguments * __thiscall
SEditableText::FArguments::ColorAndOpacity(FArguments *this,TAttribute<FSlateColor> *param_1)

{
  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  undefined8 uVar2;
  EStyleColor EVar3;
  undefined2 uVar4;
  
  uVar2 = *(undefined8 *)((longlong)&(param_1->Value).SpecifiedColor.field0_0x0 + 8);
  this_00 = &param_1->Getter;
  *(undefined8 *)&(this->_ColorAndOpacity).Value.SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->Value).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->_ColorAndOpacity).Value.SpecifiedColor.field0_0x0 + 8) = uVar2;
  EVar3 = (param_1->Value).ColorTableId;
  uVar4 = *(undefined2 *)&(param_1->Value).field_0x12;
  (this->_ColorAndOpacity).Value.ColorUseRule = (param_1->Value).ColorUseRule;
  (this->_ColorAndOpacity).Value.ColorTableId = EVar3;
  *(undefined2 *)&(this->_ColorAndOpacity).Value.field_0x12 = uVar4;
  (this->_ColorAndOpacity).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_ColorAndOpacity).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return this;
}

// ColorIsHSV @ 142f5c030

FArguments * __thiscall
SColorBlock::FArguments::ColorIsHSV(FArguments *this,TAttribute<bool> *param_1)

{
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  
  this_00 = &param_1->Getter;
  (this->_ColorIsHSV).Value = param_1->Value;
  (this->_ColorIsHSV).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_ColorIsHSV).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return this;
}

// ColorWheelBrush @ 142f5c0a0

FArguments * __thiscall
SColorWheel::FArguments::ColorWheelBrush(FArguments *this,TAttribute<FSlateBrush_const_*> *param_1)

{
  TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  
  this_00 = &param_1->Getter;
  (this->_ColorWheelBrush).Value = param_1->Value;
  (this->_ColorWheelBrush).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_ColorWheelBrush).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return this;
}

// ComboBoxStyle @ 142f5c110

FArguments * __thiscall
SComboBox<TSharedPtr<FString,1>_>::FArguments::ComboBoxStyle
          (FArguments *this,ISlateStyle *param_1,FName *param_2,char *param_3)

{
  code *pcVar1;
  FName FVar2;
  FString *pFVar3;
  FComboBoxStyle *pFVar4;
  ForAnyElementType FVar5;
  FName local_res8;
  FName local_res10;
  FString local_38;
  FString local_28;
  FString local_18;
  
  local_res10 = *param_2;
  pcVar1 = *(code **)((longlong)*param_1 + 0xa0);
  FVar2 = local_res10;
  if (param_3 != (char *)0x0) {
    ::FString::FString(&local_28,param_3);
    pFVar3 = ::FName::ToString(&local_res10,&local_18);
    ::FString::ConcatFF(&local_38,pFVar3,&local_28);
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_38.Data.ArrayNum != 0) {
      FVar5.Data = local_38.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_res8,(wchar_t *)FVar5.Data);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    FVar2 = local_res8;
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
      FVar2 = local_res8;
    }
  }
  local_res8 = FVar2;
  pFVar4 = (FComboBoxStyle *)(*pcVar1)(param_1,FComboBoxStyle::TypeName,local_res8,0,1);
  if (pFVar4 == (FComboBoxStyle *)0x0) {
    pFVar4 = FComboBoxStyle::GetDefault();
  }
  this->_ComboBoxStyle = pFVar4;
  return this;
}

// ComboButtonStyle @ 142f5c200

FArguments * __thiscall
SComboButton::FArguments::ComboButtonStyle(FArguments *this,FComboButtonStyle *param_1)

{
  this->_ComboButtonStyle = param_1;
  return this;
}

// Content @ 142f9e1a0

NamedSlotProperty<SButton::FArguments> * __thiscall
SButton::FArguments::Content
          (FArguments *this,NamedSlotProperty<SButton::FArguments> *__return_storage_ptr__)

{
  __return_storage_ptr__->OwnerDeclaration = this;
  __return_storage_ptr__->SlotContent = &this->_Content;
  return __return_storage_ptr__;
}

// Content @ 142f9e1c0

NamedSlotProperty<SHeader::FArguments> * __thiscall
SHeader::FArguments::Content
          (FArguments *this,NamedSlotProperty<SHeader::FArguments> *__return_storage_ptr__)

{
  __return_storage_ptr__->OwnerDeclaration = this;
  __return_storage_ptr__->SlotContent = &this->_Content;
  return __return_storage_ptr__;
}

// ContentPadding @ 142f9e1e0

FArguments * __thiscall
SDockTab::FArguments::ContentPadding(FArguments *this,TAttribute<FMargin> *param_1)

{
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = (param_1->Value).Top;
  fVar3 = (param_1->Value).Right;
  fVar4 = (param_1->Value).Bottom;
  this_00 = &param_1->Getter;
  (this->_ContentPadding).Value.Left = (param_1->Value).Left;
  (this->_ContentPadding).Value.Top = fVar2;
  (this->_ContentPadding).Value.Right = fVar3;
  (this->_ContentPadding).Value.Bottom = fVar4;
  (this->_ContentPadding).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_ContentPadding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return this;
}

// CornerRadius @ 142f9e250

FArguments * __thiscall
SColorBlock::FArguments::CornerRadius
          (FArguments *this,TAttribute<UE::Math::TVector4<double>_> *param_1)

{
  TDelegate<UE::Math::TVector4<double>___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  double dVar2;
  
  dVar2 = (param_1->Value).field0_0x0._s_0.Y;
  this_00 = &param_1->Getter;
  (this->_CornerRadius).Value.field0_0x0._s_0.X = (param_1->Value).field0_0x0._s_0.X;
  (this->_CornerRadius).Value.field0_0x0._s_0.Y = dVar2;
  dVar2 = (param_1->Value).field0_0x0._s_0.W;
  (this->_CornerRadius).Value.field0_0x0._s_0.Z = (param_1->Value).field0_0x0._s_0.Z;
  (this->_CornerRadius).Value.field0_0x0._s_0.W = dVar2;
  (this->_CornerRadius).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_CornerRadius).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return this;
}

// DelayChangeNotificationsWhileTyping @ 142fb5d80

FArguments * __thiscall
SSearchBox::FArguments::DelayChangeNotificationsWhileTyping
          (FArguments *this,TAttribute<bool> *param_1)

{
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  
  this_00 = &param_1->Getter;
  (this->_DelayChangeNotificationsWhileTyping).Value = param_1->Value;
  (this->_DelayChangeNotificationsWhileTyping).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->_DelayChangeNotificationsWhileTyping).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return this;
}

// Delta @ 142fb5df0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FArguments * __thiscall
SNumericEntryBox<float>::FArguments::Delta(FArguments *this,TAttribute<float> *param_1)

{
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  
  this_00 = &param_1->Getter;
  (this->_Delta).Value = param_1->Value;
  (this->_Delta).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Delta).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return this;
}

// Delta @ 142fb5e60

FArguments * __thiscall SColorSlider::FArguments::Delta(FArguments *this,TAttribute<float> *param_1)

{
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  
  this_00 = &param_1->Getter;
  (this->_Delta).Value = param_1->Value;
  (this->_Delta).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Delta).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return this;
}

// DisplayGamma @ 142fb7890

FArguments * __thiscall
SEyeDropperButton::FArguments::DisplayGamma(FArguments *this,TAttribute<float> *param_1)

{
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  
  this_00 = &param_1->Getter;
  (this->_DisplayGamma).Value = param_1->Value;
  (this->_DisplayGamma).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_DisplayGamma).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return this;
}

// ExternalScrollbar @ 142fc3920

FArguments * __thiscall
SListView<TSharedPtr<FTestData,1>_>::FArguments::ExternalScrollbar
          (FArguments *this,TSharedPtr<SScrollBar,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  SScrollBar *pSVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pSVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->_ExternalScrollbar).SharedReferenceCount.ReferenceController;
  (this->_ExternalScrollbar).Object = pSVar2;
  (this->_ExternalScrollbar).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return this;
}

// Font @ 142fc4010

FArguments * __thiscall
SEditableTextBox::FArguments::Font(FArguments *this,TAttribute<FSlateFontInfo> *param_1)

{
  void *pvVar1;
  
  FSlateFontInfo::operator=(&(this->_Font).Value,&param_1->Value);
  (this->_Font).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Font).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&param_1->Getter);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->Value).CompositeFont.SharedReferenceCount.ReferenceController);
  return this;
}

// ForegroundColor @ 142fc40a0

FArguments * __thiscall
SDockTab::FArguments::ForegroundColor(FArguments *this,TAttribute<FSlateColor> *param_1)

{
  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  undefined8 uVar2;
  EStyleColor EVar3;
  undefined2 uVar4;
  
  uVar2 = *(undefined8 *)((longlong)&(param_1->Value).SpecifiedColor.field0_0x0 + 8);
  this_00 = &param_1->Getter;
  *(undefined8 *)&(this->_ForegroundColor).Value.SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->Value).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->_ForegroundColor).Value.SpecifiedColor.field0_0x0 + 8) = uVar2;
  EVar3 = (param_1->Value).ColorTableId;
  uVar4 = *(undefined2 *)&(param_1->Value).field_0x12;
  (this->_ForegroundColor).Value.ColorUseRule = (param_1->Value).ColorUseRule;
  (this->_ForegroundColor).Value.ColorTableId = EVar3;
  *(undefined2 *)&(this->_ForegroundColor).Value.field_0x12 = uVar4;
  (this->_ForegroundColor).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_ForegroundColor).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return this;
}

// HAlign @ 142fdb6b0

FArguments * __thiscall SButton::FArguments::HAlign(FArguments *this,EHorizontalAlignment param_1)

{
  this->_HAlign = param_1;
  return this;
}

// HasAlphaBackground @ 142fdec90

FArguments * __thiscall
SColorSlider::FArguments::HasAlphaBackground(FArguments *this,TAttribute<bool> *param_1)

{
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  
  this_00 = &param_1->Getter;
  (this->_HasAlphaBackground).Value = param_1->Value;
  (this->_HasAlphaBackground).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_HasAlphaBackground).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return this;
}

// HeaderRow @ 142fe2060

FArguments * __thiscall
SListView<TSharedPtr<FTestData,1>_>::FArguments::HeaderRow
          (FArguments *this,TSharedPtr<SHeaderRow,1> *param_1)

{
  SHeaderRow *pSVar1;
  TReferenceControllerBase<1> *pTVar2;
  TSharedPtr<SHeaderRow,1> local_18;
  
  pSVar1 = param_1->Object;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18.Object = (this->_HeaderRow).Object;
  local_18.SharedReferenceCount.ReferenceController =
       (this->_HeaderRow).SharedReferenceCount.ReferenceController;
  (this->_HeaderRow).Object = pSVar1;
  (this->_HeaderRow).SharedReferenceCount.ReferenceController = pTVar2;
  TSharedPtr<SHeaderRow,1>::~TSharedPtr<SHeaderRow,1>(&local_18);
  TSharedPtr<SHeaderRow,1>::~TSharedPtr<SHeaderRow,1>(param_1);
  return this;
}

// HeaderRow @ 142fe20d0

FArguments * __thiscall
STreeView<TSharedPtr<FTestData,1>_>::FArguments::HeaderRow
          (FArguments *this,TSharedPtr<SHeaderRow,1> *param_1)

{
  SHeaderRow *pSVar1;
  TReferenceControllerBase<1> *pTVar2;
  TSharedPtr<SHeaderRow,1> local_18;
  
  pSVar1 = param_1->Object;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18.Object = (this->_HeaderRow).Object;
  local_18.SharedReferenceCount.ReferenceController =
       (this->_HeaderRow).SharedReferenceCount.ReferenceController;
  (this->_HeaderRow).Object = pSVar1;
  (this->_HeaderRow).SharedReferenceCount.ReferenceController = pTVar2;
  TSharedPtr<SHeaderRow,1>::~TSharedPtr<SHeaderRow,1>(&local_18);
  TSharedPtr<SHeaderRow,1>::~TSharedPtr<SHeaderRow,1>(param_1);
  return this;
}

// HintText @ 142fe2150

FArguments * __thiscall
SEditableText::FArguments::HintText(FArguments *this,TAttribute<FText> *param_1)

{
  void *pvVar1;
  ITextData *pIVar2;
  
  FText::operator=(&(this->_HintText).Value,&param_1->Value);
  (this->_HintText).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_HintText).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&param_1->Getter);
  pIVar2 = (param_1->Value).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  return this;
}

// HintText @ 142fe21e0

FArguments * __thiscall
SEditableTextBox::FArguments::HintText(FArguments *this,TAttribute<FText> *param_1)

{
  void *pvVar1;
  ITextData *pIVar2;
  
  FText::operator=(&(this->_HintText).Value,&param_1->Value);
  (this->_HintText).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_HintText).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&param_1->Getter);
  pIVar2 = (param_1->Value).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  return this;
}

// HintText @ 142fe2270

FArguments * __thiscall
SMultiLineEditableText::FArguments::HintText(FArguments *this,TAttribute<FText> *param_1)

{
  void *pvVar1;
  ITextData *pIVar2;
  
  FText::operator=(&(this->_HintText).Value,&param_1->Value);
  (this->_HintText).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_HintText).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&param_1->Getter);
  pIVar2 = (param_1->Value).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  return this;
}

// HintText @ 142fe2300

FArguments * __thiscall
SMultiLineEditableTextBox::FArguments::HintText(FArguments *this,TAttribute<FText> *param_1)

{
  void *pvVar1;
  ITextData *pIVar2;
  
  FText::operator=(&(this->_HintText).Value,&param_1->Value);
  (this->_HintText).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_HintText).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&param_1->Getter);
  pIVar2 = (param_1->Value).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  return this;
}

// HintText @ 142fe2390

FArguments * __thiscall
SSearchBox::FArguments::HintText(FArguments *this,TAttribute<FText> *param_1)

{
  void *pvVar1;
  ITextData *pIVar2;
  
  FText::operator=(&(this->_HintText).Value,&param_1->Value);
  (this->_HintText).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_HintText).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&param_1->Getter);
  pIVar2 = (param_1->Value).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  return this;
}

// IgnoreClipping @ 142fe2490

FArguments * __thiscall
SFxWidget::FArguments::IgnoreClipping(FArguments *this,TAttribute<bool> *param_1)

{
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  
  this_00 = &param_1->Getter;
  (this->_IgnoreClipping).Value = param_1->Value;
  (this->_IgnoreClipping).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_IgnoreClipping).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return this;
}

// Image @ 142fe2500

FArguments * __thiscall
SSpinningImage::FArguments::Image(FArguments *this,TAttribute<FSlateBrush_const_*> *param_1)

{
  TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  
  this_00 = &param_1->Getter;
  (this->_Image).Value = param_1->Value;
  (this->_Image).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Image).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return this;
}

// IndentHandle @ 142fe2570

FArguments * __thiscall
SSlider::FArguments::IndentHandle(FArguments *this,TAttribute<bool> *param_1)

{
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  
  this_00 = &param_1->Getter;
  (this->_IndentHandle).Value = param_1->Value;
  (this->_IndentHandle).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_IndentHandle).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return this;
}

// InitiallySelectedItem @ 142fe2630

FArguments * __thiscall
STextComboBox::FArguments::InitiallySelectedItem(FArguments *this,TSharedPtr<FString,1> *param_1)

{
  FString *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  TSharedPtr<FString,1> local_18;
  
  pFVar1 = param_1->Object;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18.Object = (this->_InitiallySelectedItem).Object;
  local_18.SharedReferenceCount.ReferenceController =
       (this->_InitiallySelectedItem).SharedReferenceCount.ReferenceController;
  (this->_InitiallySelectedItem).Object = pFVar1;
  (this->_InitiallySelectedItem).SharedReferenceCount.ReferenceController = pTVar2;
  TSharedPtr<FString,1>::~TSharedPtr<FString,1>(&local_18);
  TSharedPtr<FString,1>::~TSharedPtr<FString,1>(param_1);
  return this;
}

// IsChecked_Lambda @ 142fe2ab0

FArguments * __thiscall
SCheckBox::FArguments::IsChecked_Lambda
          (FArguments *this,TFunction<ECheckBoxState___cdecl(void)> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  (this->_IsChecked).bIsSet = true;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(this->_IsChecked).Getter,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->_IsChecked).Getter.field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AW4ECheckBoxState__XZ____V__6B_
    ;
    lVar1 = *(longlong *)param_1;
    puVar2[4] = lVar1;
    puVar2[9] = 0;
    if (lVar1 != 0) {
      puVar2 = (undefined8 *)&param_1->field_0x10;
      if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
        puVar2 = *(undefined8 **)&param_1->field_0x28;
      }
      (**(code **)*puVar2)();
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return this;
}

// ItemHeight @ 142fe52f0

FArguments * __thiscall
STileView<TSharedPtr<FTestData,1>_>::FArguments::ItemHeight
          (FArguments *this,TAttribute<float> *param_1)

{
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  
  this_00 = &param_1->Getter;
  (this->_ItemHeight).Value = param_1->Value;
  (this->_ItemHeight).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_ItemHeight).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return this;
}

// ItemWidth @ 142fe5360

FArguments * __thiscall
STileView<TSharedPtr<FTestData,1>_>::FArguments::ItemWidth
          (FArguments *this,TAttribute<float> *param_1)

{
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  
  this_00 = &param_1->Getter;
  (this->_ItemWidth).Value = param_1->Value;
  (this->_ItemWidth).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_ItemWidth).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return this;
}

// Label @ 142fe53d0

FArguments * __thiscall SColorSlider::FArguments::Label(FArguments *this,TAttribute<FText> *param_1)

{
  void *pvVar1;
  ITextData *pIVar2;
  
  FText::operator=(&(this->_Label).Value,&param_1->Value);
  (this->_Label).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Label).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&param_1->Getter);
  pIVar2 = (param_1->Value).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  return this;
}

// ListItemsSource @ 142fe5580

FArguments * __thiscall
SListView<TSharedPtr<int,1>_>::FArguments::ListItemsSource
          (FArguments *this,TObservableArray<TSharedPtr<int,1>_> *param_1)

{
  TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1> local_18;
  
  this->_ListItemsSource_ArrayPointer = (TArray<TSharedPtr<int,1>,TSizedDefaultAllocator<32>_> *)0x0
  ;
  this->_ListItemsSource_ObservableArrayPointer = (TObservableArray<TSharedPtr<int,1>_> *)0x0;
  local_18.Object = (TObservableArray<TSharedPtr<int,1>_> *)0x0;
  local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->_ListItemsSource_SharedObservableArray != &local_18) {
    (this->_ListItemsSource_SharedObservableArray).Object =
         (TObservableArray<TSharedPtr<int,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_ListItemsSource_SharedObservableArray).SharedReferenceCount,
               &local_18.SharedReferenceCount);
  }
  TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1>::
  ~TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1>(&local_18);
  this->_ListItemsSource_ObservableArrayPointer = param_1;
  return this;
}

// ListItemsSource @ 142fe55f0

FArguments * __thiscall
SListView<TSharedPtr<int,1>_>::FArguments::ListItemsSource
          (FArguments *this,TArray<TSharedPtr<int,1>,TSizedDefaultAllocator<32>_> *param_1)

{
  TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1> local_18;
  
  this->_ListItemsSource_ArrayPointer = (TArray<TSharedPtr<int,1>,TSizedDefaultAllocator<32>_> *)0x0
  ;
  this->_ListItemsSource_ObservableArrayPointer = (TObservableArray<TSharedPtr<int,1>_> *)0x0;
  local_18.Object = (TObservableArray<TSharedPtr<int,1>_> *)0x0;
  local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->_ListItemsSource_SharedObservableArray != &local_18) {
    (this->_ListItemsSource_SharedObservableArray).Object =
         (TObservableArray<TSharedPtr<int,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_ListItemsSource_SharedObservableArray).SharedReferenceCount,
               &local_18.SharedReferenceCount);
  }
  TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1>::
  ~TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1>(&local_18);
  this->_ListItemsSource_ArrayPointer = param_1;
  return this;
}

// ListItemsSource @ 142fe5660

FArguments * __thiscall
SListView<TSharedPtr<int,1>_>::FArguments::ListItemsSource
          (FArguments *this,
          TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1> *param_1)

{
  TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1> *pTVar1;
  TObservableArray<TSharedPtr<int,1>_> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1> local_28;
  TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1> local_18;
  
  local_18.Object = (TObservableArray<TSharedPtr<int,1>_> *)0x0;
  local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar1 = &this->_ListItemsSource_SharedObservableArray;
  this->_ListItemsSource_ArrayPointer = (TArray<TSharedPtr<int,1>,TSizedDefaultAllocator<32>_> *)0x0
  ;
  this->_ListItemsSource_ObservableArrayPointer = (TObservableArray<TSharedPtr<int,1>_> *)0x0;
  if (pTVar1 != &local_18) {
    pTVar1->Object = (TObservableArray<TSharedPtr<int,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_ListItemsSource_SharedObservableArray).SharedReferenceCount,
               &local_18.SharedReferenceCount);
  }
  TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1>::
  ~TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1>(&local_18);
  pTVar2 = param_1->Object;
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28.Object = pTVar1->Object;
  local_28.SharedReferenceCount.ReferenceController =
       (this->_ListItemsSource_SharedObservableArray).SharedReferenceCount.ReferenceController;
  pTVar1->Object = pTVar2;
  (this->_ListItemsSource_SharedObservableArray).SharedReferenceCount.ReferenceController = pTVar3;
  TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1>::
  ~TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1>(&local_28);
  TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1>::
  ~TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1>(param_1);
  return this;
}

// ListItemsSource @ 142fe5710

FArguments * __thiscall
SListView<TSharedPtr<FTestData,1>_>::FArguments::ListItemsSource
          (FArguments *this,TArray<TSharedPtr<FTestData,1>,TSizedDefaultAllocator<32>_> *param_1)

{
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  this->_ListItemsSource_ArrayPointer =
       (TArray<TSharedPtr<FTestData,1>,TSizedDefaultAllocator<32>_> *)0x0;
  this->_ListItemsSource_ObservableArrayPointer = (TObservableArray<TSharedPtr<FTestData,1>_> *)0x0;
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->_ListItemsSource_SharedObservableArray !=
      (TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<FTestData,1>_>,1> *)&local_18)
  {
    (this->_ListItemsSource_SharedObservableArray).Object =
         (TObservableArray<TSharedPtr<FTestData,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_ListItemsSource_SharedObservableArray).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  this->_ListItemsSource_ArrayPointer = param_1;
  return this;
}

// ListItemsSource @ 142fe5780

FArguments * __thiscall
STileView<TSharedPtr<int,1>_>::FArguments::ListItemsSource
          (FArguments *this,TObservableArray<TSharedPtr<int,1>_> *param_1)

{
  TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1> local_18;
  
  this->_ListItemsSource_ArrayPointer = (TArray<TSharedPtr<int,1>,TSizedDefaultAllocator<32>_> *)0x0
  ;
  this->_ListItemsSource_ObservableArrayPointer = (TObservableArray<TSharedPtr<int,1>_> *)0x0;
  local_18.Object = (TObservableArray<TSharedPtr<int,1>_> *)0x0;
  local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->_ListItemsSource_SharedObservableArray != &local_18) {
    (this->_ListItemsSource_SharedObservableArray).Object =
         (TObservableArray<TSharedPtr<int,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_ListItemsSource_SharedObservableArray).SharedReferenceCount,
               &local_18.SharedReferenceCount);
  }
  TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1>::
  ~TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1>(&local_18);
  this->_ListItemsSource_ObservableArrayPointer = param_1;
  return this;
}

// ListItemsSource @ 142fe57f0

FArguments * __thiscall
STileView<TSharedPtr<int,1>_>::FArguments::ListItemsSource
          (FArguments *this,TArray<TSharedPtr<int,1>,TSizedDefaultAllocator<32>_> *param_1)

{
  TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1> local_18;
  
  this->_ListItemsSource_ArrayPointer = (TArray<TSharedPtr<int,1>,TSizedDefaultAllocator<32>_> *)0x0
  ;
  this->_ListItemsSource_ObservableArrayPointer = (TObservableArray<TSharedPtr<int,1>_> *)0x0;
  local_18.Object = (TObservableArray<TSharedPtr<int,1>_> *)0x0;
  local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->_ListItemsSource_SharedObservableArray != &local_18) {
    (this->_ListItemsSource_SharedObservableArray).Object =
         (TObservableArray<TSharedPtr<int,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_ListItemsSource_SharedObservableArray).SharedReferenceCount,
               &local_18.SharedReferenceCount);
  }
  TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1>::
  ~TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1>(&local_18);
  this->_ListItemsSource_ArrayPointer = param_1;
  return this;
}

// ListItemsSource @ 142fe5860

FArguments * __thiscall
STileView<TSharedPtr<int,1>_>::FArguments::ListItemsSource
          (FArguments *this,
          TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1> *param_1)

{
  TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1> *pTVar1;
  TObservableArray<TSharedPtr<int,1>_> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1> local_28;
  TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1> local_18;
  
  local_18.Object = (TObservableArray<TSharedPtr<int,1>_> *)0x0;
  local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar1 = &this->_ListItemsSource_SharedObservableArray;
  this->_ListItemsSource_ArrayPointer = (TArray<TSharedPtr<int,1>,TSizedDefaultAllocator<32>_> *)0x0
  ;
  this->_ListItemsSource_ObservableArrayPointer = (TObservableArray<TSharedPtr<int,1>_> *)0x0;
  if (pTVar1 != &local_18) {
    pTVar1->Object = (TObservableArray<TSharedPtr<int,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_ListItemsSource_SharedObservableArray).SharedReferenceCount,
               &local_18.SharedReferenceCount);
  }
  TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1>::
  ~TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1>(&local_18);
  pTVar2 = param_1->Object;
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28.Object = pTVar1->Object;
  local_28.SharedReferenceCount.ReferenceController =
       (this->_ListItemsSource_SharedObservableArray).SharedReferenceCount.ReferenceController;
  pTVar1->Object = pTVar2;
  (this->_ListItemsSource_SharedObservableArray).SharedReferenceCount.ReferenceController = pTVar3;
  TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1>::
  ~TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1>(&local_28);
  TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1>::
  ~TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1>(param_1);
  return this;
}

// ListItemsSource @ 142fe5910

FArguments * __thiscall
STileView<TSharedPtr<FTestData,1>_>::FArguments::ListItemsSource
          (FArguments *this,TArray<TSharedPtr<FTestData,1>,TSizedDefaultAllocator<32>_> *param_1)

{
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  this->_ListItemsSource_ArrayPointer =
       (TArray<TSharedPtr<FTestData,1>,TSizedDefaultAllocator<32>_> *)0x0;
  this->_ListItemsSource_ObservableArrayPointer = (TObservableArray<TSharedPtr<FTestData,1>_> *)0x0;
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->_ListItemsSource_SharedObservableArray !=
      (TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<FTestData,1>_>,1> *)&local_18)
  {
    (this->_ListItemsSource_SharedObservableArray).Object =
         (TObservableArray<TSharedPtr<FTestData,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_ListItemsSource_SharedObservableArray).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  this->_ListItemsSource_ArrayPointer = param_1;
  return this;
}

// MakeListItemsSource @ 142fe9fa0

TUniquePtr<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<FTestData,1>_>,TDefaultDelete<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<FTestData,1>_>_>_>
 __thiscall
SListView<TSharedPtr<FTestData,1>_>::FArguments::MakeListItemsSource
          (FArguments *this,TSharedRef<STableViewBase,1> *param_1)

{
  TArray<TSharedPtr<FTestData,1>,TSizedDefaultAllocator<32>_> *pTVar1;
  TObservableArray<TSharedPtr<FTestData,1>_> *pTVar2;
  STableViewBase *pSVar3;
  FObservableArrayPointer<TSharedPtr<FTestData,1>_> *this_00;
  TSharedRef<UE::Slate::Containers::TObservableArray<TSharedPtr<FTestData,1>_>,1> *pTVar4;
  FSharedObservableArray<TSharedPtr<FTestData,1>_> *this_01;
  TReferenceControllerBase<1> *pTVar5;
  undefined8 *in_R8;
  TSharedRef<STableViewBase,1> local_38;
  TSharedRef<STableViewBase,1> local_28;
  TSharedRef<UE::Slate::Containers::TObservableArray<TSharedPtr<FTestData,1>_>,1> local_18;
  
  if (this->_ListItemsSource_ArrayPointer ==
      (TArray<TSharedPtr<FTestData,1>,TSizedDefaultAllocator<32>_> *)0x0) {
    if (this->_ListItemsSource_ObservableArrayPointer ==
        (TObservableArray<TSharedPtr<FTestData,1>_> *)0x0) {
      if ((this->_ListItemsSource_SharedObservableArray).Object ==
          (TObservableArray<TSharedPtr<FTestData,1>_> *)0x0) {
        pTVar5 = (TReferenceControllerBase<1> *)in_R8[1];
        param_1->Object = (STableViewBase *)0x0;
      }
      else {
        pTVar4 = TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<FTestData,1>_>,1>::
                 ToSharedRef(&this->_ListItemsSource_SharedObservableArray,&local_18);
        this_01 = ::operator_new(0x30);
        if (this_01 == (FSharedObservableArray<TSharedPtr<FTestData,1>_> *)0x0) {
          pSVar3 = (STableViewBase *)0x0;
        }
        else {
          local_38.Object = (STableViewBase *)pTVar4->Object;
          local_38.SharedReferenceCount.ReferenceController =
               (pTVar4->SharedReferenceCount).ReferenceController;
          if (local_38.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          local_28.Object = (STableViewBase *)*in_R8;
          local_28.SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)in_R8[1];
          if (local_28.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          pSVar3 = (STableViewBase *)
                   UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<FTestData,1>_>::
                   FSharedObservableArray<TSharedPtr<FTestData,1>_>
                             (this_01,&local_28,
                              (TSharedRef<UE::Slate::Containers::TObservableArray<TSharedPtr<FTestData,1>_>,1>
                               *)&local_38);
        }
        param_1->Object = pSVar3;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_18.SharedReferenceCount.ReferenceController);
        pTVar5 = (TReferenceControllerBase<1> *)in_R8[1];
      }
      goto LAB_142fea0f5;
    }
    this_00 = ::operator_new(0x28);
    if (this_00 != (FObservableArrayPointer<TSharedPtr<FTestData,1>_> *)0x0) {
      local_38.Object = (STableViewBase *)*in_R8;
      pTVar2 = this->_ListItemsSource_ObservableArrayPointer;
      local_38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)in_R8[1];
      if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pSVar3 = (STableViewBase *)
               UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<FTestData,1>_>::
               FObservableArrayPointer<TSharedPtr<FTestData,1>_>(this_00,&local_38,pTVar2);
      pTVar5 = (TReferenceControllerBase<1> *)in_R8[1];
      param_1->Object = pSVar3;
      goto LAB_142fea0f5;
    }
  }
  else {
    pSVar3 = ::operator_new(0x10);
    if (pSVar3 != (STableViewBase *)0x0) {
      pTVar1 = this->_ListItemsSource_ArrayPointer;
      *(undefined ***)pSVar3 =
           &___7__FArrayPointer_V__TSharedPtr_VFTestData___00___ItemsSource_Slate_UE__6B_;
      *(TArray<TSharedPtr<FTestData,1>,TSizedDefaultAllocator<32>_> **)&pSVar3->field_0x8 = pTVar1;
      pTVar5 = (TReferenceControllerBase<1> *)in_R8[1];
      param_1->Object = pSVar3;
      goto LAB_142fea0f5;
    }
  }
  pTVar5 = (TReferenceControllerBase<1> *)in_R8[1];
  param_1->Object = (STableViewBase *)0x0;
LAB_142fea0f5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return (TUniquePtr<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<FTestData,1>_>,TDefaultDelete<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<FTestData,1>_>_>_>
          )(IItemsSource<TSharedPtr<FTestData,1>_> *)param_1;
}

// MakeListItemsSource @ 142fea120

TUniquePtr<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<ESelectionMode::Type,1>_>,TDefaultDelete<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<ESelectionMode::Type,1>_>_>_>
 __thiscall
SListView<TSharedPtr<enum_ESelectionMode::Type,1>_>::FArguments::MakeListItemsSource
          (void *this,TSharedRef<STableViewBase,1> *param_1)

{
  undefined8 uVar1;
  TReferenceControllerBase<1> *pTVar2;
  TObservableArray<TSharedPtr<ESelectionMode::Type,1>_> *pTVar3;
  STableViewBase *pSVar4;
  void *pvVar5;
  longlong *in_R8;
  TSharedRef<STableViewBase,1> local_28;
  TSharedRef<STableViewBase,1> local_18;
  
  if (*(longlong *)((longlong)this + 0x2d0) == 0) {
    if (*(longlong *)((longlong)this + 0x2d8) == 0) {
      pSVar4 = *(STableViewBase **)((longlong)this + 0x2e0);
      if (pSVar4 == (STableViewBase *)0x0) {
        pTVar2 = (TReferenceControllerBase<1> *)in_R8[1];
        param_1->Object = (STableViewBase *)0x0;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      }
      else {
        pTVar2 = *(TReferenceControllerBase<1> **)((longlong)this + 0x2e8);
        if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
          UNLOCK();
        }
        pvVar5 = ::operator_new(0x30);
        if (pvVar5 == (void *)0x0) {
          pSVar4 = (STableViewBase *)0x0;
        }
        else {
          if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_18.SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)in_R8[1];
          local_18.Object = (STableViewBase *)*in_R8;
          if (local_18.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          local_28.Object = pSVar4;
          local_28.SharedReferenceCount.ReferenceController = pTVar2;
          pSVar4 = (STableViewBase *)
                   UE::Slate::ItemsSource::
                   FSharedObservableArray<TSharedPtr<enum_ESelectionMode::Type,1>_>::
                   FSharedObservableArray<TSharedPtr<enum_ESelectionMode::Type,1>_>
                             (pvVar5,&local_18,
                              (TSharedRef<UE::Slate::Containers::TObservableArray<TSharedPtr<ESelectionMode::Type,1>_>,1>
                               *)&local_28);
        }
        param_1->Object = pSVar4;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)in_R8[1]);
      }
      return (TUniquePtr<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<ESelectionMode::Type,1>_>,TDefaultDelete<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<ESelectionMode::Type,1>_>_>_>
              )(IItemsSource<TSharedPtr<ESelectionMode::Type,1>_> *)param_1;
    }
    pvVar5 = ::operator_new(0x28);
    if (pvVar5 != (void *)0x0) {
      local_28.Object = (STableViewBase *)*in_R8;
      pTVar3 = *(TObservableArray<TSharedPtr<ESelectionMode::Type,1>_> **)((longlong)this + 0x2d8);
      local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)in_R8[1];
      if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pSVar4 = (STableViewBase *)
               UE::Slate::ItemsSource::
               FObservableArrayPointer<TSharedPtr<enum_ESelectionMode::Type,1>_>::
               FObservableArrayPointer<TSharedPtr<enum_ESelectionMode::Type,1>_>
                         (pvVar5,&local_28,pTVar3);
      goto LAB_142fea18b;
    }
  }
  else {
    pSVar4 = ::operator_new(0x10);
    if (pSVar4 != (STableViewBase *)0x0) {
      uVar1 = *(undefined8 *)((longlong)this + 0x2d0);
      *(undefined ***)pSVar4 =
           &___7__FArrayPointer_V__TSharedPtr_W4Type_ESelectionMode___00___ItemsSource_Slate_UE__6B_
      ;
      *(undefined8 *)&pSVar4->field_0x8 = uVar1;
      pTVar2 = (TReferenceControllerBase<1> *)in_R8[1];
      param_1->Object = pSVar4;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      return (TUniquePtr<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<ESelectionMode::Type,1>_>,TDefaultDelete<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<ESelectionMode::Type,1>_>_>_>
              )(IItemsSource<TSharedPtr<ESelectionMode::Type,1>_> *)param_1;
    }
  }
  pSVar4 = (STableViewBase *)0x0;
LAB_142fea18b:
  pTVar2 = (TReferenceControllerBase<1> *)in_R8[1];
  param_1->Object = pSVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return (TUniquePtr<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<ESelectionMode::Type,1>_>,TDefaultDelete<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<ESelectionMode::Type,1>_>_>_>
          )(IItemsSource<TSharedPtr<ESelectionMode::Type,1>_> *)param_1;
}

// MakeListItemsSource @ 142fea2d0

TUniquePtr<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<int,1>_>,TDefaultDelete<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<int,1>_>_>_>
 __thiscall
STileView<TSharedPtr<int,1>_>::FArguments::MakeListItemsSource
          (FArguments *this,TSharedRef<STableViewBase,1> *param_1)

{
  TArray<TSharedPtr<int,1>,TSizedDefaultAllocator<32>_> *pTVar1;
  TObservableArray<TSharedPtr<int,1>_> *pTVar2;
  STableViewBase *pSVar3;
  FObservableArrayPointer<TSharedPtr<int,1>_> *this_00;
  TSharedRef<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1> *pTVar4;
  FSharedObservableArray<TSharedPtr<int,1>_> *this_01;
  TReferenceControllerBase<1> *pTVar5;
  undefined8 *in_R8;
  TSharedRef<STableViewBase,1> local_38;
  TSharedRef<STableViewBase,1> local_28;
  TSharedRef<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1> local_18;
  
  if (this->_ListItemsSource_ArrayPointer ==
      (TArray<TSharedPtr<int,1>,TSizedDefaultAllocator<32>_> *)0x0) {
    if (this->_ListItemsSource_ObservableArrayPointer == (TObservableArray<TSharedPtr<int,1>_> *)0x0
       ) {
      if ((this->_ListItemsSource_SharedObservableArray).Object ==
          (TObservableArray<TSharedPtr<int,1>_> *)0x0) {
        pTVar5 = (TReferenceControllerBase<1> *)in_R8[1];
        param_1->Object = (STableViewBase *)0x0;
      }
      else {
        pTVar4 = TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1>::
                 ToSharedRef(&this->_ListItemsSource_SharedObservableArray,&local_18);
        this_01 = ::operator_new(0x30);
        if (this_01 == (FSharedObservableArray<TSharedPtr<int,1>_> *)0x0) {
          pSVar3 = (STableViewBase *)0x0;
        }
        else {
          local_38.Object = (STableViewBase *)pTVar4->Object;
          local_38.SharedReferenceCount.ReferenceController =
               (pTVar4->SharedReferenceCount).ReferenceController;
          if (local_38.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          local_28.Object = (STableViewBase *)*in_R8;
          local_28.SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)in_R8[1];
          if (local_28.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          pSVar3 = (STableViewBase *)
                   UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<int,1>_>::
                   FSharedObservableArray<TSharedPtr<int,1>_>
                             (this_01,&local_28,
                              (TSharedRef<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1>
                               *)&local_38);
        }
        param_1->Object = pSVar3;
        TSharedRef<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1>::
        ~TSharedRef<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1>(&local_18);
        pTVar5 = (TReferenceControllerBase<1> *)in_R8[1];
      }
      goto LAB_142fea425;
    }
    this_00 = ::operator_new(0x28);
    if (this_00 != (FObservableArrayPointer<TSharedPtr<int,1>_> *)0x0) {
      local_38.Object = (STableViewBase *)*in_R8;
      pTVar2 = this->_ListItemsSource_ObservableArrayPointer;
      local_38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)in_R8[1];
      if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pSVar3 = (STableViewBase *)
               UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<int,1>_>::
               FObservableArrayPointer<TSharedPtr<int,1>_>(this_00,&local_38,pTVar2);
      pTVar5 = (TReferenceControllerBase<1> *)in_R8[1];
      param_1->Object = pSVar3;
      goto LAB_142fea425;
    }
  }
  else {
    pSVar3 = ::operator_new(0x10);
    if (pSVar3 != (STableViewBase *)0x0) {
      pTVar1 = this->_ListItemsSource_ArrayPointer;
      *(undefined ***)pSVar3 = &___7__FArrayPointer_V__TSharedPtr_H_00___ItemsSource_Slate_UE__6B_;
      *(TArray<TSharedPtr<int,1>,TSizedDefaultAllocator<32>_> **)&pSVar3->field_0x8 = pTVar1;
      pTVar5 = (TReferenceControllerBase<1> *)in_R8[1];
      param_1->Object = pSVar3;
      goto LAB_142fea425;
    }
  }
  pTVar5 = (TReferenceControllerBase<1> *)in_R8[1];
  param_1->Object = (STableViewBase *)0x0;
LAB_142fea425:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return (TUniquePtr<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<int,1>_>,TDefaultDelete<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<int,1>_>_>_>
          )(IItemsSource<TSharedPtr<int,1>_> *)param_1;
}

// MakeListItemsSource @ 142fea450

TUniquePtr<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<FTestData,1>_>,TDefaultDelete<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<FTestData,1>_>_>_>
 __thiscall
STileView<TSharedPtr<FTestData,1>_>::FArguments::MakeListItemsSource
          (FArguments *this,TSharedRef<STableViewBase,1> *param_1)

{
  TArray<TSharedPtr<FTestData,1>,TSizedDefaultAllocator<32>_> *pTVar1;
  TObservableArray<TSharedPtr<FTestData,1>_> *pTVar2;
  STableViewBase *pSVar3;
  FObservableArrayPointer<TSharedPtr<FTestData,1>_> *this_00;
  TSharedRef<UE::Slate::Containers::TObservableArray<TSharedPtr<FTestData,1>_>,1> *pTVar4;
  FSharedObservableArray<TSharedPtr<FTestData,1>_> *this_01;
  TReferenceControllerBase<1> *pTVar5;
  undefined8 *in_R8;
  TSharedRef<STableViewBase,1> local_38;
  TSharedRef<STableViewBase,1> local_28;
  TSharedRef<UE::Slate::Containers::TObservableArray<TSharedPtr<FTestData,1>_>,1> local_18;
  
  if (this->_ListItemsSource_ArrayPointer ==
      (TArray<TSharedPtr<FTestData,1>,TSizedDefaultAllocator<32>_> *)0x0) {
    if (this->_ListItemsSource_ObservableArrayPointer ==
        (TObservableArray<TSharedPtr<FTestData,1>_> *)0x0) {
      if ((this->_ListItemsSource_SharedObservableArray).Object ==
          (TObservableArray<TSharedPtr<FTestData,1>_> *)0x0) {
        pTVar5 = (TReferenceControllerBase<1> *)in_R8[1];
        param_1->Object = (STableViewBase *)0x0;
      }
      else {
        pTVar4 = TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<FTestData,1>_>,1>::
                 ToSharedRef(&this->_ListItemsSource_SharedObservableArray,&local_18);
        this_01 = ::operator_new(0x30);
        if (this_01 == (FSharedObservableArray<TSharedPtr<FTestData,1>_> *)0x0) {
          pSVar3 = (STableViewBase *)0x0;
        }
        else {
          local_38.Object = (STableViewBase *)pTVar4->Object;
          local_38.SharedReferenceCount.ReferenceController =
               (pTVar4->SharedReferenceCount).ReferenceController;
          if (local_38.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          local_28.Object = (STableViewBase *)*in_R8;
          local_28.SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)in_R8[1];
          if (local_28.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          pSVar3 = (STableViewBase *)
                   UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<FTestData,1>_>::
                   FSharedObservableArray<TSharedPtr<FTestData,1>_>
                             (this_01,&local_28,
                              (TSharedRef<UE::Slate::Containers::TObservableArray<TSharedPtr<FTestData,1>_>,1>
                               *)&local_38);
        }
        param_1->Object = pSVar3;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_18.SharedReferenceCount.ReferenceController);
        pTVar5 = (TReferenceControllerBase<1> *)in_R8[1];
      }
      goto LAB_142fea5a5;
    }
    this_00 = ::operator_new(0x28);
    if (this_00 != (FObservableArrayPointer<TSharedPtr<FTestData,1>_> *)0x0) {
      local_38.Object = (STableViewBase *)*in_R8;
      pTVar2 = this->_ListItemsSource_ObservableArrayPointer;
      local_38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)in_R8[1];
      if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pSVar3 = (STableViewBase *)
               UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<FTestData,1>_>::
               FObservableArrayPointer<TSharedPtr<FTestData,1>_>(this_00,&local_38,pTVar2);
      pTVar5 = (TReferenceControllerBase<1> *)in_R8[1];
      param_1->Object = pSVar3;
      goto LAB_142fea5a5;
    }
  }
  else {
    pSVar3 = ::operator_new(0x10);
    if (pSVar3 != (STableViewBase *)0x0) {
      pTVar1 = this->_ListItemsSource_ArrayPointer;
      *(undefined ***)pSVar3 =
           &___7__FArrayPointer_V__TSharedPtr_VFTestData___00___ItemsSource_Slate_UE__6B_;
      *(TArray<TSharedPtr<FTestData,1>,TSizedDefaultAllocator<32>_> **)&pSVar3->field_0x8 = pTVar1;
      pTVar5 = (TReferenceControllerBase<1> *)in_R8[1];
      param_1->Object = pSVar3;
      goto LAB_142fea5a5;
    }
  }
  pTVar5 = (TReferenceControllerBase<1> *)in_R8[1];
  param_1->Object = (STableViewBase *)0x0;
LAB_142fea5a5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return (TUniquePtr<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<FTestData,1>_>,TDefaultDelete<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<FTestData,1>_>_>_>
          )(IItemsSource<TSharedPtr<FTestData,1>_> *)param_1;
}

// MakeTreeItemsSource @ 142fec2b0

TUniquePtr<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<int,1>_>,TDefaultDelete<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<int,1>_>_>_>
 __thiscall
STreeView<TSharedPtr<int,1>_>::FArguments::MakeTreeItemsSource
          (FArguments *this,TSharedRef<STableViewBase,1> *param_1)

{
  TArray<TSharedPtr<int,1>,TSizedDefaultAllocator<32>_> *pTVar1;
  TObservableArray<TSharedPtr<int,1>_> *pTVar2;
  STableViewBase *pSVar3;
  FObservableArrayPointer<TSharedPtr<int,1>_> *this_00;
  TSharedRef<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1> *pTVar4;
  FSharedObservableArray<TSharedPtr<int,1>_> *this_01;
  TReferenceControllerBase<1> *pTVar5;
  undefined8 *in_R8;
  TSharedRef<STableViewBase,1> local_38;
  TSharedRef<STableViewBase,1> local_28;
  TSharedRef<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1> local_18;
  
  if (this->_TreeItemsSource_ArrayPointer ==
      (TArray<TSharedPtr<int,1>,TSizedDefaultAllocator<32>_> *)0x0) {
    if (this->_TreeItemsSource_ObservableArrayPointer == (TObservableArray<TSharedPtr<int,1>_> *)0x0
       ) {
      if ((this->_TreeItemsSource_SharedObservableArray).Object ==
          (TObservableArray<TSharedPtr<int,1>_> *)0x0) {
        pTVar5 = (TReferenceControllerBase<1> *)in_R8[1];
        param_1->Object = (STableViewBase *)0x0;
      }
      else {
        pTVar4 = TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1>::
                 ToSharedRef(&this->_TreeItemsSource_SharedObservableArray,&local_18);
        this_01 = ::operator_new(0x30);
        if (this_01 == (FSharedObservableArray<TSharedPtr<int,1>_> *)0x0) {
          pSVar3 = (STableViewBase *)0x0;
        }
        else {
          local_38.Object = (STableViewBase *)pTVar4->Object;
          local_38.SharedReferenceCount.ReferenceController =
               (pTVar4->SharedReferenceCount).ReferenceController;
          if (local_38.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          local_28.Object = (STableViewBase *)*in_R8;
          local_28.SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)in_R8[1];
          if (local_28.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          pSVar3 = (STableViewBase *)
                   UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<int,1>_>::
                   FSharedObservableArray<TSharedPtr<int,1>_>
                             (this_01,&local_28,
                              (TSharedRef<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1>
                               *)&local_38);
        }
        param_1->Object = pSVar3;
        TSharedRef<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1>::
        ~TSharedRef<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1>(&local_18);
        pTVar5 = (TReferenceControllerBase<1> *)in_R8[1];
      }
      goto LAB_142fec405;
    }
    this_00 = ::operator_new(0x28);
    if (this_00 != (FObservableArrayPointer<TSharedPtr<int,1>_> *)0x0) {
      local_38.Object = (STableViewBase *)*in_R8;
      pTVar2 = this->_TreeItemsSource_ObservableArrayPointer;
      local_38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)in_R8[1];
      if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pSVar3 = (STableViewBase *)
               UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<int,1>_>::
               FObservableArrayPointer<TSharedPtr<int,1>_>(this_00,&local_38,pTVar2);
      pTVar5 = (TReferenceControllerBase<1> *)in_R8[1];
      param_1->Object = pSVar3;
      goto LAB_142fec405;
    }
  }
  else {
    pSVar3 = ::operator_new(0x10);
    if (pSVar3 != (STableViewBase *)0x0) {
      pTVar1 = this->_TreeItemsSource_ArrayPointer;
      *(undefined ***)pSVar3 = &___7__FArrayPointer_V__TSharedPtr_H_00___ItemsSource_Slate_UE__6B_;
      *(TArray<TSharedPtr<int,1>,TSizedDefaultAllocator<32>_> **)&pSVar3->field_0x8 = pTVar1;
      pTVar5 = (TReferenceControllerBase<1> *)in_R8[1];
      param_1->Object = pSVar3;
      goto LAB_142fec405;
    }
  }
  pTVar5 = (TReferenceControllerBase<1> *)in_R8[1];
  param_1->Object = (STableViewBase *)0x0;
LAB_142fec405:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return (TUniquePtr<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<int,1>_>,TDefaultDelete<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<int,1>_>_>_>
          )(IItemsSource<TSharedPtr<int,1>_> *)param_1;
}

// MakeTreeItemsSource @ 142fec430

TUniquePtr<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<FTestData,1>_>,TDefaultDelete<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<FTestData,1>_>_>_>
 __thiscall
STreeView<TSharedPtr<FTestData,1>_>::FArguments::MakeTreeItemsSource
          (FArguments *this,TSharedRef<STableViewBase,1> *param_1)

{
  TArray<TSharedPtr<FTestData,1>,TSizedDefaultAllocator<32>_> *pTVar1;
  TObservableArray<TSharedPtr<FTestData,1>_> *pTVar2;
  STableViewBase *pSVar3;
  FObservableArrayPointer<TSharedPtr<FTestData,1>_> *this_00;
  TSharedRef<UE::Slate::Containers::TObservableArray<TSharedPtr<FTestData,1>_>,1> *pTVar4;
  FSharedObservableArray<TSharedPtr<FTestData,1>_> *this_01;
  TReferenceControllerBase<1> *pTVar5;
  undefined8 *in_R8;
  TSharedRef<STableViewBase,1> local_38;
  TSharedRef<STableViewBase,1> local_28;
  TSharedRef<UE::Slate::Containers::TObservableArray<TSharedPtr<FTestData,1>_>,1> local_18;
  
  if (this->_TreeItemsSource_ArrayPointer ==
      (TArray<TSharedPtr<FTestData,1>,TSizedDefaultAllocator<32>_> *)0x0) {
    if (this->_TreeItemsSource_ObservableArrayPointer ==
        (TObservableArray<TSharedPtr<FTestData,1>_> *)0x0) {
      if ((this->_TreeItemsSource_SharedObservableArray).Object ==
          (TObservableArray<TSharedPtr<FTestData,1>_> *)0x0) {
        pTVar5 = (TReferenceControllerBase<1> *)in_R8[1];
        param_1->Object = (STableViewBase *)0x0;
      }
      else {
        pTVar4 = TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<FTestData,1>_>,1>::
                 ToSharedRef(&this->_TreeItemsSource_SharedObservableArray,&local_18);
        this_01 = ::operator_new(0x30);
        if (this_01 == (FSharedObservableArray<TSharedPtr<FTestData,1>_> *)0x0) {
          pSVar3 = (STableViewBase *)0x0;
        }
        else {
          local_38.Object = (STableViewBase *)pTVar4->Object;
          local_38.SharedReferenceCount.ReferenceController =
               (pTVar4->SharedReferenceCount).ReferenceController;
          if (local_38.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          local_28.Object = (STableViewBase *)*in_R8;
          local_28.SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)in_R8[1];
          if (local_28.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          pSVar3 = (STableViewBase *)
                   UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<FTestData,1>_>::
                   FSharedObservableArray<TSharedPtr<FTestData,1>_>
                             (this_01,&local_28,
                              (TSharedRef<UE::Slate::Containers::TObservableArray<TSharedPtr<FTestData,1>_>,1>
                               *)&local_38);
        }
        param_1->Object = pSVar3;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_18.SharedReferenceCount.ReferenceController);
        pTVar5 = (TReferenceControllerBase<1> *)in_R8[1];
      }
      goto LAB_142fec585;
    }
    this_00 = ::operator_new(0x28);
    if (this_00 != (FObservableArrayPointer<TSharedPtr<FTestData,1>_> *)0x0) {
      local_38.Object = (STableViewBase *)*in_R8;
      pTVar2 = this->_TreeItemsSource_ObservableArrayPointer;
      local_38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)in_R8[1];
      if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pSVar3 = (STableViewBase *)
               UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<FTestData,1>_>::
               FObservableArrayPointer<TSharedPtr<FTestData,1>_>(this_00,&local_38,pTVar2);
      pTVar5 = (TReferenceControllerBase<1> *)in_R8[1];
      param_1->Object = pSVar3;
      goto LAB_142fec585;
    }
  }
  else {
    pSVar3 = ::operator_new(0x10);
    if (pSVar3 != (STableViewBase *)0x0) {
      pTVar1 = this->_TreeItemsSource_ArrayPointer;
      *(undefined ***)pSVar3 =
           &___7__FArrayPointer_V__TSharedPtr_VFTestData___00___ItemsSource_Slate_UE__6B_;
      *(TArray<TSharedPtr<FTestData,1>,TSizedDefaultAllocator<32>_> **)&pSVar3->field_0x8 = pTVar1;
      pTVar5 = (TReferenceControllerBase<1> *)in_R8[1];
      param_1->Object = pSVar3;
      goto LAB_142fec585;
    }
  }
  pTVar5 = (TReferenceControllerBase<1> *)in_R8[1];
  param_1->Object = (STableViewBase *)0x0;
LAB_142fec585:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return (TUniquePtr<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<FTestData,1>_>,TDefaultDelete<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<FTestData,1>_>_>_>
          )(IItemsSource<TSharedPtr<FTestData,1>_> *)param_1;
}

// MaxSliderValue @ 142fec690

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FArguments * __thiscall
SNumericEntryBox<float>::FArguments::MaxSliderValue
          (FArguments *this,TAttribute<TOptional<float>_> *param_1)

{
  TDelegate<TOptional<float>___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  
  if (param_1 != &this->_MaxSliderValue) {
    if ((param_1->Value).bIsSet == false) {
      if ((this->_MaxSliderValue).Value.bIsSet != false) {
        (this->_MaxSliderValue).Value.bIsSet = false;
      }
    }
    else {
      (this->_MaxSliderValue).Value.TypedValue = (param_1->Value).TypedValue;
      (this->_MaxSliderValue).Value.bIsSet = true;
    }
  }
  this_00 = &param_1->Getter;
  (this->_MaxSliderValue).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_MaxSliderValue).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return this;
}

// MaxSliderValue @ 142fec710

FArguments * __thiscall
SColorSlider::FArguments::MaxSliderValue(FArguments *this,TAttribute<float> *param_1)

{
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  
  this_00 = &param_1->Getter;
  (this->_MaxSliderValue).Value = param_1->Value;
  (this->_MaxSliderValue).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_MaxSliderValue).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return this;
}

// MaxSpinBoxValue @ 142fec780

FArguments * __thiscall
SColorSlider::FArguments::MaxSpinBoxValue(FArguments *this,TAttribute<float> *param_1)

{
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  
  this_00 = &param_1->Getter;
  (this->_MaxSpinBoxValue).Value = param_1->Value;
  (this->_MaxSpinBoxValue).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_MaxSpinBoxValue).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return this;
}

// MaxValue @ 142fec7f0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FArguments * __thiscall
SNumericEntryBox<float>::FArguments::MaxValue
          (FArguments *this,TAttribute<TOptional<float>_> *param_1)

{
  TDelegate<TOptional<float>___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  
  if (param_1 != &this->_MaxValue) {
    if ((param_1->Value).bIsSet == false) {
      if ((this->_MaxValue).Value.bIsSet != false) {
        (this->_MaxValue).Value.bIsSet = false;
      }
    }
    else {
      (this->_MaxValue).Value.TypedValue = (param_1->Value).TypedValue;
      (this->_MaxValue).Value.bIsSet = true;
    }
  }
  this_00 = &param_1->Getter;
  (this->_MaxValue).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_MaxValue).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return this;
}

// MenuContent @ 142fec870

NamedSlotProperty<SComboButton::FArguments> * __thiscall
SComboButton::FArguments::MenuContent
          (FArguments *this,NamedSlotProperty<SComboButton::FArguments> *__return_storage_ptr__)

{
  __return_storage_ptr__->OwnerDeclaration = this;
  __return_storage_ptr__->SlotContent = &this->_MenuContent;
  return __return_storage_ptr__;
}

// Method @ 142fec890

FArguments * __thiscall
SMenuAnchor::FArguments::Method(FArguments *this,TOptional<EPopupMethod> param_1)

{
  undefined6 in_register_00000012;
  
  if ((TOptional<EPopupMethod> *)CONCAT62(in_register_00000012,param_1) != &this->_Method) {
    if (*(char *)(CONCAT62(in_register_00000012,param_1) + 1) == '\0') {
      if ((this->_Method).bIsSet != false) {
        (this->_Method).bIsSet = false;
        return this;
      }
    }
    else {
      (this->_Method).TypedValue = *(EPopupMethod *)CONCAT62(in_register_00000012,param_1);
      (this->_Method).bIsSet = true;
    }
  }
  return this;
}

// MinDesiredHeight @ 142fec8d0

FArguments * __thiscall
SBox::FArguments::MinDesiredHeight(FArguments *this,TAttribute<FOptionalSize> *param_1)

{
  TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  
  this_00 = &param_1->Getter;
  (this->_MinDesiredHeight).Value.Size = (param_1->Value).Size;
  (this->_MinDesiredHeight).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_MinDesiredHeight).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return this;
}

// MinDesiredSlotHeight @ 142fec940

FArguments * __thiscall
SUniformGridPanel::FArguments::MinDesiredSlotHeight(FArguments *this,TAttribute<float> *param_1)

{
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  
  this_00 = &param_1->Getter;
  (this->_MinDesiredSlotHeight).Value = param_1->Value;
  (this->_MinDesiredSlotHeight).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_MinDesiredSlotHeight).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return this;
}

// MinDesiredSlotWidth @ 142fec9b0

FArguments * __thiscall
SUniformGridPanel::FArguments::MinDesiredSlotWidth(FArguments *this,TAttribute<float> *param_1)

{
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  
  this_00 = &param_1->Getter;
  (this->_MinDesiredSlotWidth).Value = param_1->Value;
  (this->_MinDesiredSlotWidth).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_MinDesiredSlotWidth).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return this;
}

// MinDesiredWidth @ 142feca20

FArguments * __thiscall
SBox::FArguments::MinDesiredWidth(FArguments *this,TAttribute<FOptionalSize> *param_1)

{
  TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  
  this_00 = &param_1->Getter;
  (this->_MinDesiredWidth).Value.Size = (param_1->Value).Size;
  (this->_MinDesiredWidth).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_MinDesiredWidth).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return this;
}

// MinDesiredWidth @ 142feca90

FArguments * __thiscall
SEditableTextBox::FArguments::MinDesiredWidth(FArguments *this,TAttribute<float> *param_1)

{
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  
  this_00 = &param_1->Getter;
  (this->_MinDesiredWidth).Value = param_1->Value;
  (this->_MinDesiredWidth).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_MinDesiredWidth).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return this;
}

// MinSliderValue @ 142fecb70

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FArguments * __thiscall
SNumericEntryBox<float>::FArguments::MinSliderValue
          (FArguments *this,TAttribute<TOptional<float>_> *param_1)

{
  TDelegate<TOptional<float>___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  
  if (param_1 != &this->_MinSliderValue) {
    if ((param_1->Value).bIsSet == false) {
      if ((this->_MinSliderValue).Value.bIsSet != false) {
        (this->_MinSliderValue).Value.bIsSet = false;
      }
    }
    else {
      (this->_MinSliderValue).Value.TypedValue = (param_1->Value).TypedValue;
      (this->_MinSliderValue).Value.bIsSet = true;
    }
  }
  this_00 = &param_1->Getter;
  (this->_MinSliderValue).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_MinSliderValue).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return this;
}

// MinSliderValue @ 142fecbf0

FArguments * __thiscall
SColorSlider::FArguments::MinSliderValue(FArguments *this,TAttribute<float> *param_1)

{
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  
  this_00 = &param_1->Getter;
  (this->_MinSliderValue).Value = param_1->Value;
  (this->_MinSliderValue).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_MinSliderValue).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return this;
}

// MinSpinBoxValue @ 142fecc60

FArguments * __thiscall
SColorSlider::FArguments::MinSpinBoxValue(FArguments *this,TAttribute<float> *param_1)

{
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  
  this_00 = &param_1->Getter;
  (this->_MinSpinBoxValue).Value = param_1->Value;
  (this->_MinSpinBoxValue).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_MinSpinBoxValue).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return this;
}

// MinValue @ 142feccd0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FArguments * __thiscall
SNumericEntryBox<float>::FArguments::MinValue
          (FArguments *this,TAttribute<TOptional<float>_> *param_1)

{
  TDelegate<TOptional<float>___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  
  if (param_1 != &this->_MinValue) {
    if ((param_1->Value).bIsSet == false) {
      if ((this->_MinValue).Value.bIsSet != false) {
        (this->_MinValue).Value.bIsSet = false;
      }
    }
    else {
      (this->_MinValue).Value.TypedValue = (param_1->Value).TypedValue;
      (this->_MinValue).Value.bIsSet = true;
    }
  }
  this_00 = &param_1->Getter;
  (this->_MinValue).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_MinValue).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return this;
}

// NumPieces @ 142fedc70

FArguments * __thiscall SThrobber::FArguments::NumPieces(FArguments *this,int param_1)

{
  this->_NumPieces = param_1;
  return this;
}

// OptionsSource @ 142ffac80

FArguments * __thiscall
SComboBox<TSharedPtr<FString,1>_>::FArguments::OptionsSource
          (FArguments *this,TArray<TSharedPtr<FString,1>,TSizedDefaultAllocator<32>_> *param_1)

{
  TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<FString,1>_>,1> local_18;
  
  this->_OptionsSource_ArrayPointer =
       (TArray<TSharedPtr<FString,1>,TSizedDefaultAllocator<32>_> *)0x0;
  this->_OptionsSource_ObservableArrayPointer = (TObservableArray<TSharedPtr<FString,1>_> *)0x0;
  local_18.Object = (TObservableArray<TSharedPtr<FString,1>_> *)0x0;
  local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->_OptionsSource_SharedObservableArray != &local_18) {
    (this->_OptionsSource_SharedObservableArray).Object =
         (TObservableArray<TSharedPtr<FString,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_OptionsSource_SharedObservableArray).SharedReferenceCount,
               &local_18.SharedReferenceCount);
  }
  TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<FString,1>_>,1>::
  ~TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<FString,1>_>,1>(&local_18);
  this->_OptionsSource_ArrayPointer = param_1;
  return this;
}

// OptionsSource @ 142ffacf0

FArguments * __thiscall
SComboBox<TSharedPtr<enum_ESelectionMode::Type,1>_>::FArguments::OptionsSource
          (void *this,
          TArray<TSharedPtr<ESelectionMode::Type,1>,TSizedDefaultAllocator<32>_> *param_1)

{
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  *(undefined8 *)((longlong)this + 0x288) = 0;
  *(undefined8 *)((longlong)this + 0x290) = 0;
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if ((undefined8 *)((longlong)this + 0x298) != &local_18) {
    *(undefined8 *)((longlong)this + 0x298) = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)this + 0x2a0),&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  *(TArray<TSharedPtr<ESelectionMode::Type,1>,TSizedDefaultAllocator<32>_> **)
   ((longlong)this + 0x288) = param_1;
  return this;
}

// OptionsSource @ 142ffad60

FArguments * __thiscall
STextComboBox::FArguments::OptionsSource
          (FArguments *this,TArray<TSharedPtr<FString,1>,TSizedDefaultAllocator<32>_> *param_1)

{
  TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<FString,1>_>,1> local_18;
  
  this->_OptionsSource_ArrayPointer =
       (TArray<TSharedPtr<FString,1>,TSizedDefaultAllocator<32>_> *)0x0;
  this->_OptionsSource_ObservableArrayPointer = (TObservableArray<TSharedPtr<FString,1>_> *)0x0;
  local_18.Object = (TObservableArray<TSharedPtr<FString,1>_> *)0x0;
  local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->_OptionsSource_SharedObservableArray != &local_18) {
    (this->_OptionsSource_SharedObservableArray).Object =
         (TObservableArray<TSharedPtr<FString,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_OptionsSource_SharedObservableArray).SharedReferenceCount,
               &local_18.SharedReferenceCount);
  }
  TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<FString,1>_>,1>::
  ~TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<FString,1>_>,1>(&local_18);
  this->_OptionsSource_ArrayPointer = param_1;
  return this;
}

// Orientation @ 142ffadd0

FArguments * __thiscall
SColorSlider::FArguments::Orientation(FArguments *this,TAttribute<EOrientation> *param_1)

{
  TDelegate<EOrientation___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  
  this_00 = &param_1->Getter;
  (this->_Orientation).Value = param_1->Value;
  (this->_Orientation).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Orientation).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return this;
}

// Orientation @ 142ffae40

FArguments * __thiscall SSeparator::FArguments::Orientation(FArguments *this,EOrientation param_1)

{
  this->_Orientation = param_1;
  return this;
}

// Orientation @ 142ffae50

FArguments * __thiscall SSlider::FArguments::Orientation(FArguments *this,EOrientation param_1)

{
  this->_Orientation = param_1;
  return this;
}

// OverflowPolicy @ 142ffae60

FArguments * __thiscall
SMultiLineEditableText::FArguments::OverflowPolicy
          (FArguments *this,TOptional<ETextOverflowPolicy> param_1)

{
  undefined6 in_register_00000012;
  
  if ((TOptional<ETextOverflowPolicy> *)CONCAT62(in_register_00000012,param_1) !=
      &this->_OverflowPolicy) {
    if (*(char *)(CONCAT62(in_register_00000012,param_1) + 1) == '\0') {
      if ((this->_OverflowPolicy).bIsSet != false) {
        (this->_OverflowPolicy).bIsSet = false;
        return this;
      }
    }
    else {
      (this->_OverflowPolicy).TypedValue =
           *(ETextOverflowPolicy *)CONCAT62(in_register_00000012,param_1);
      (this->_OverflowPolicy).bIsSet = true;
    }
  }
  return this;
}

// OverflowPolicy @ 142ffaea0

FArguments * __thiscall
SMultiLineEditableTextBox::FArguments::OverflowPolicy
          (FArguments *this,TOptional<ETextOverflowPolicy> param_1)

{
  undefined6 in_register_00000012;
  
  if ((TOptional<ETextOverflowPolicy> *)CONCAT62(in_register_00000012,param_1) !=
      &this->_OverflowPolicy) {
    if (*(char *)(CONCAT62(in_register_00000012,param_1) + 1) == '\0') {
      if ((this->_OverflowPolicy).bIsSet != false) {
        (this->_OverflowPolicy).bIsSet = false;
        return this;
      }
    }
    else {
      (this->_OverflowPolicy).TypedValue =
           *(ETextOverflowPolicy *)CONCAT62(in_register_00000012,param_1);
      (this->_OverflowPolicy).bIsSet = true;
    }
  }
  return this;
}

// Padding @ 142ffaee0

FArguments * __thiscall SBox::FArguments::Padding(FArguments *this,float param_1)

{
  undefined1 local_58 [8];
  float fStack_50;
  float fStack_4c;
  bool local_48;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  undefined1 local_30;
  undefined1 local_28 [8];
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  (this->_Padding).bIsSet = true;
  local_30 = 1;
  local_18 = 0;
  (this->_Padding).Value.Left = param_1;
  (this->_Padding).Value.Top = param_1;
  (this->_Padding).Value.Right = param_1;
  (this->_Padding).Value.Bottom = param_1;
  local_28 = (undefined1  [8])0x0;
  FStack_20.Data = (FScriptContainerElement *)0x0;
  local_58._0_4_ = param_1;
  local_58._4_4_ = param_1;
  fStack_50 = param_1;
  fStack_4c = param_1;
  local_40 = param_1;
  fStack_3c = param_1;
  fStack_38 = param_1;
  fStack_34 = param_1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Padding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_28);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28,
             (FWriteAccessScope *)local_58);
  if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
    local_18 = local_18 & 0xffffffff00000000;
  }
  if (local_48 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)CONCAT44(fStack_4c,fStack_50),
               (FDestructionSentinel *)local_58);
  }
  if (FStack_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_20.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_28);
  return this;
}

// Padding @ 142ffafc0

FArguments * __thiscall
SEditableTextBox::FArguments::Padding(FArguments *this,TAttribute<FMargin> *param_1)

{
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = (param_1->Value).Top;
  fVar3 = (param_1->Value).Right;
  fVar4 = (param_1->Value).Bottom;
  this_00 = &param_1->Getter;
  (this->_Padding).Value.Left = (param_1->Value).Left;
  (this->_Padding).Value.Top = fVar2;
  (this->_Padding).Value.Right = fVar3;
  (this->_Padding).Value.Bottom = fVar4;
  (this->_Padding).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Padding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return this;
}

// Percent @ 142ffba90

FArguments * __thiscall
SProgressBar::FArguments::Percent(FArguments *this,TAttribute<TOptional<float>_> *param_1)

{
  TDelegate<TOptional<float>___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  
  if (param_1 != &this->_Percent) {
    if ((param_1->Value).bIsSet == false) {
      if ((this->_Percent).Value.bIsSet != false) {
        (this->_Percent).Value.bIsSet = false;
      }
    }
    else {
      (this->_Percent).Value.TypedValue = (param_1->Value).TypedValue;
      (this->_Percent).Value.bIsSet = true;
    }
  }
  this_00 = &param_1->Getter;
  (this->_Percent).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Percent).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return this;
}

// ShadowOffset @ 14300e400

FArguments * __thiscall
STextBlock::FArguments::ShadowOffset
          (FArguments *this,TAttribute<UE::Math::TVector2<double>_> *param_1)

{
  TDelegate<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  double dVar2;
  
  dVar2 = (param_1->Value).field0_0x0._s_0.Y;
  this_00 = &param_1->Getter;
  (this->_ShadowOffset).Value.field0_0x0._s_0.X = (param_1->Value).field0_0x0._s_0.X;
  (this->_ShadowOffset).Value.field0_0x0._s_0.Y = dVar2;
  (this->_ShadowOffset).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_ShadowOffset).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return this;
}

// ShowBackgroundForAlpha @ 14300e470

FArguments * __thiscall
SColorBlock::FArguments::ShowBackgroundForAlpha(FArguments *this,TAttribute<bool> *param_1)

{
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  
  this_00 = &param_1->Getter;
  (this->_ShowBackgroundForAlpha).Value = param_1->Value;
  (this->_ShowBackgroundForAlpha).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_ShowBackgroundForAlpha).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return this;
}

// SlotPadding @ 14300e6c0

FArguments * __thiscall
SUniformGridPanel::FArguments::SlotPadding(FArguments *this,TAttribute<FMargin> *param_1)

{
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = (param_1->Value).Top;
  fVar3 = (param_1->Value).Right;
  fVar4 = (param_1->Value).Bottom;
  this_00 = &param_1->Getter;
  (this->_SlotPadding).Value.Left = (param_1->Value).Left;
  (this->_SlotPadding).Value.Top = fVar2;
  (this->_SlotPadding).Value.Right = fVar3;
  (this->_SlotPadding).Value.Bottom = fVar4;
  (this->_SlotPadding).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_SlotPadding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return this;
}

// Style @ 14300e730

FArguments * __thiscall SCheckBox::FArguments::Style(FArguments *this,FCheckBoxStyle *param_1)

{
  this->_Style = param_1;
  return this;
}

// SupportDynamicSliderMaxValue @ 14300e750

FArguments * __thiscall
SColorSlider::FArguments::SupportDynamicSliderMaxValue(FArguments *this,TAttribute<bool> *param_1)

{
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  
  this_00 = &param_1->Getter;
  (this->_SupportDynamicSliderMaxValue).Value = param_1->Value;
  (this->_SupportDynamicSliderMaxValue).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->_SupportDynamicSliderMaxValue).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return this;
}

// TabRole @ 143011af0

FArguments * __thiscall SDockTab::FArguments::TabRole(FArguments *this,ETabRole param_1)

{
  this->_TabRole = param_1;
  return this;
}

// Text @ 143011b00

FArguments * __thiscall
SInlineEditableTextBlock::FArguments::Text(FArguments *this,TAttribute<FText> *param_1)

{
  void *pvVar1;
  ITextData *pIVar2;
  
  FText::operator=(&(this->_Text).Value,&param_1->Value);
  (this->_Text).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Text).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&param_1->Getter);
  pIVar2 = (param_1->Value).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  return this;
}

// TextOptions @ 143011c20

FArguments * __thiscall
STextComboPopup::FArguments::TextOptions
          (FArguments *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  
  pTVar2 = &this->_TextOptions;
  if (pTVar2 != param_1) {
    DestructItems<FString,int>
              ((FString *)(pTVar2->AllocatorInstance).Data,(this->_TextOptions).ArrayNum);
    iVar3 = param_1->ArrayNum;
    piVar1 = &(this->_TextOptions).ArrayMax;
    pFVar4 = (param_1->AllocatorInstance).Data;
    (this->_TextOptions).ArrayNum = iVar3;
    if ((iVar3 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar3,*piVar1,&pTVar2->AllocatorInstance,iVar3,piVar1);
      ConstructItems<FString,FString,int>((pTVar2->AllocatorInstance).Data,(FString *)pFVar4,iVar3);
    }
  }
  DestructItems<FString,int>((FString *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
  pFVar4 = (param_1->AllocatorInstance).Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  return this;
}

// TextStyle @ 143011ce0

FArguments * __thiscall SButton::FArguments::TextStyle(FArguments *this,FTextBlockStyle *param_1)

{
  this->_TextStyle = param_1;
  return this;
}

// TextStyle @ 143011d00

FArguments * __thiscall STextBlock::FArguments::TextStyle(FArguments *this,FTextBlockStyle *param_1)

{
  this->_TextStyle = param_1;
  return this;
}

// Text_Lambda @ 143011d20

FArguments * __thiscall
SButton::FArguments::Text_Lambda(FArguments *this,TFunction<FText___cdecl(void)> *param_1)

{
  TAttribute<FText>::BindLambda<TFunction<FText___cdecl(void)>_&>(&this->_Text,param_1);
  return this;
}

// Text_Lambda @ 143011d50

FArguments * __thiscall
STextBlock::FArguments::Text_Lambda(FArguments *this,TFunction<FText___cdecl(void)> *param_1)

{
  TAttribute<FText>::BindLambda<TFunction<FText___cdecl(void)>_&>(&this->_Text,param_1);
  return this;
}

// Title @ 143013190

FArguments * __thiscall SUserWidgetExample::FArguments::Title(FArguments *this,FText *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  undefined1 local_res8 [8];
  
  pIVar1 = (param_1->TextData).Reference;
  pIVar2 = (this->_Title).TextData.Reference;
  if (pIVar2 != pIVar1) {
    (this->_Title).TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (this->_Title).Flags = param_1->Flags;
  pIVar1 = (param_1->TextData).Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  return this;
}

// TreeItemsSource @ 143013c80

FArguments * __thiscall
STreeView<TSharedPtr<int,1>_>::FArguments::TreeItemsSource
          (FArguments *this,TObservableArray<TSharedPtr<int,1>_> *param_1)

{
  TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1> local_18;
  
  this->_TreeItemsSource_ArrayPointer = (TArray<TSharedPtr<int,1>,TSizedDefaultAllocator<32>_> *)0x0
  ;
  this->_TreeItemsSource_ObservableArrayPointer = (TObservableArray<TSharedPtr<int,1>_> *)0x0;
  local_18.Object = (TObservableArray<TSharedPtr<int,1>_> *)0x0;
  local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->_TreeItemsSource_SharedObservableArray != &local_18) {
    (this->_TreeItemsSource_SharedObservableArray).Object =
         (TObservableArray<TSharedPtr<int,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_TreeItemsSource_SharedObservableArray).SharedReferenceCount,
               &local_18.SharedReferenceCount);
  }
  TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1>::
  ~TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1>(&local_18);
  this->_TreeItemsSource_ObservableArrayPointer = param_1;
  return this;
}

// TreeItemsSource @ 143013cf0

FArguments * __thiscall
STreeView<TSharedPtr<int,1>_>::FArguments::TreeItemsSource
          (FArguments *this,TArray<TSharedPtr<int,1>,TSizedDefaultAllocator<32>_> *param_1)

{
  TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1> local_18;
  
  this->_TreeItemsSource_ArrayPointer = (TArray<TSharedPtr<int,1>,TSizedDefaultAllocator<32>_> *)0x0
  ;
  this->_TreeItemsSource_ObservableArrayPointer = (TObservableArray<TSharedPtr<int,1>_> *)0x0;
  local_18.Object = (TObservableArray<TSharedPtr<int,1>_> *)0x0;
  local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->_TreeItemsSource_SharedObservableArray != &local_18) {
    (this->_TreeItemsSource_SharedObservableArray).Object =
         (TObservableArray<TSharedPtr<int,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_TreeItemsSource_SharedObservableArray).SharedReferenceCount,
               &local_18.SharedReferenceCount);
  }
  TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1>::
  ~TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1>(&local_18);
  this->_TreeItemsSource_ArrayPointer = param_1;
  return this;
}

// TreeItemsSource @ 143013d60

FArguments * __thiscall
STreeView<TSharedPtr<int,1>_>::FArguments::TreeItemsSource
          (FArguments *this,
          TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1> *param_1)

{
  TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1> *pTVar1;
  TObservableArray<TSharedPtr<int,1>_> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1> local_28;
  TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1> local_18;
  
  local_18.Object = (TObservableArray<TSharedPtr<int,1>_> *)0x0;
  local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar1 = &this->_TreeItemsSource_SharedObservableArray;
  this->_TreeItemsSource_ArrayPointer = (TArray<TSharedPtr<int,1>,TSizedDefaultAllocator<32>_> *)0x0
  ;
  this->_TreeItemsSource_ObservableArrayPointer = (TObservableArray<TSharedPtr<int,1>_> *)0x0;
  if (pTVar1 != &local_18) {
    pTVar1->Object = (TObservableArray<TSharedPtr<int,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_TreeItemsSource_SharedObservableArray).SharedReferenceCount,
               &local_18.SharedReferenceCount);
  }
  TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1>::
  ~TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1>(&local_18);
  pTVar2 = param_1->Object;
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28.Object = pTVar1->Object;
  local_28.SharedReferenceCount.ReferenceController =
       (this->_TreeItemsSource_SharedObservableArray).SharedReferenceCount.ReferenceController;
  pTVar1->Object = pTVar2;
  (this->_TreeItemsSource_SharedObservableArray).SharedReferenceCount.ReferenceController = pTVar3;
  TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1>::
  ~TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1>(&local_28);
  TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1>::
  ~TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1>(param_1);
  return this;
}

// TreeItemsSource @ 143013e10

FArguments * __thiscall
STreeView<TSharedPtr<FTestData,1>_>::FArguments::TreeItemsSource
          (FArguments *this,TArray<TSharedPtr<FTestData,1>,TSizedDefaultAllocator<32>_> *param_1)

{
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  this->_TreeItemsSource_ArrayPointer =
       (TArray<TSharedPtr<FTestData,1>,TSizedDefaultAllocator<32>_> *)0x0;
  this->_TreeItemsSource_ObservableArrayPointer = (TObservableArray<TSharedPtr<FTestData,1>_> *)0x0;
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->_TreeItemsSource_SharedObservableArray !=
      (TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<FTestData,1>_>,1> *)&local_18)
  {
    (this->_TreeItemsSource_SharedObservableArray).Object =
         (TObservableArray<TSharedPtr<FTestData,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_TreeItemsSource_SharedObservableArray).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  this->_TreeItemsSource_ArrayPointer = param_1;
  return this;
}

// UseAlpha @ 143015f50

FArguments * __thiscall
SThemeColorBlocksBar::FArguments::UseAlpha(FArguments *this,TAttribute<bool> *param_1)

{
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  
  this_00 = &param_1->Getter;
  (this->_UseAlpha).Value = param_1->Value;
  (this->_UseAlpha).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_UseAlpha).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return this;
}

// UseApplicationMenuStack @ 143015fc0

FArguments * __thiscall
SMenuAnchor::FArguments::UseApplicationMenuStack(FArguments *this,bool param_1)

{
  this->_UseApplicationMenuStack = param_1;
  return this;
}

// VAlign @ 143016020

FArguments * __thiscall SButton::FArguments::VAlign(FArguments *this,EVerticalAlignment param_1)

{
  this->_VAlign = param_1;
  return this;
}

// Value @ 1430170a0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FArguments * __thiscall
SNumericEntryBox<float>::FArguments::Value(FArguments *this,TAttribute<TOptional<float>_> *param_1)

{
  TDelegate<TOptional<float>___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  
  if (param_1 != &this->_Value) {
    if ((param_1->Value).bIsSet == false) {
      if ((this->_Value).Value.bIsSet != false) {
        (this->_Value).Value.bIsSet = false;
      }
    }
    else {
      (this->_Value).Value.TypedValue = (param_1->Value).TypedValue;
      (this->_Value).Value.bIsSet = true;
    }
  }
  this_00 = &param_1->Getter;
  (this->_Value).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Value).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return this;
}

// Value @ 143017120

FArguments * __thiscall
SSegmentedControl<int>::FArguments::Value(FArguments *this,TAttribute<int> *param_1)

{
  TDelegate<int___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  
  this_00 = &param_1->Getter;
  (this->_Value).Value = param_1->Value;
  (this->_Value).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Value).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return this;
}

// Value @ 143017190

FArguments * __thiscall SSlider::FArguments::Value(FArguments *this,TAttribute<float> *param_1)

{
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  
  this_00 = &param_1->Getter;
  (this->_Value).Value = param_1->Value;
  (this->_Value).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Value).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return this;
}

// Value_Lambda @ 143017200

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FArguments * __thiscall
SNumericEntryBox<float>::FArguments::Value_Lambda
          (FArguments *this,TFunction<TOptional<float>___cdecl(void)> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  (this->_Value).bIsSet = true;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(this->_Value).Getter,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->_Value).Getter.field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AU__TOptional_M__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AU__TOptional_M__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AU__TOptional_M__XZ____V__6B_
    ;
    lVar1 = *(longlong *)param_1;
    puVar2[4] = lVar1;
    puVar2[9] = 0;
    if (lVar1 != 0) {
      puVar2 = (undefined8 *)&param_1->field_0x10;
      if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
        puVar2 = *(undefined8 **)&param_1->field_0x28;
      }
      (**(code **)*puVar2)();
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return this;
}

// Volume @ 143017480

FArguments * __thiscall
SVolumeControl::FArguments::Volume(FArguments *this,TAttribute<float> *param_1)

{
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  
  this_00 = &param_1->Getter;
  (this->_Volume).Value = param_1->Value;
  (this->_Volume).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Volume).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return this;
}

// Color<SThemeColorBlock> @ 143018000

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FArguments * __thiscall
SColorBlock::FArguments::Color<SThemeColorBlock>
          (FArguments *this,SThemeColorBlock *param_1,pmf_bc5f83b2 *param_2)

{
  SWidget *pSVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 *puVar7;
  TSharedRef<SWidget_const_,1> *pTVar8;
  ulong64 uVar9;
  TReferenceControllerBase<1> *pTVar10;
  uint uStackX_c;
  TSharedRef<SWidget_const_,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  (this->_Color).bIsSet = true;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(this->_Color).Getter,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->_Color).Getter.field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
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
              ___7__TCommonDelegateInstanceState___A6A_AUFLinearColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSThemeColorBlock___00__A6A_AUFLinearColor__XZUFDefaultDelegateUserPolicy____V__6B_
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
  return this;
}

// Image<SColorThemesViewer> @ 143018960

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FArguments * __thiscall
SImage::FArguments::Image<SColorThemesViewer>
          (FArguments *this,SColorThemesViewer *param_1,pmf_0c763265 *param_2)

{
  SWidget *pSVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 *puVar7;
  TSharedRef<SWidget_const_,1> *pTVar8;
  ulong64 uVar9;
  TReferenceControllerBase<1> *pTVar10;
  uint uStackX_c;
  TSharedRef<SWidget_const_,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  (this->_Image).bIsSet = true;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(this->_Image).Getter,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->_Image).Getter.field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
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
              ___7__TCommonDelegateInstanceState___A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSColorThemesViewer___00__A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
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
  return this;
}

// OnClicked<SWizard> @ 143018f50

FArguments * __thiscall
SButton::FArguments::OnClicked<SWizard>(FArguments *this,SWizard *param_1,pmf_068f7f22 *param_2)

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
  
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnClicked,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->_OnClicked).field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
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
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSWizard___00__A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
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
  return this;
}

// OnCrumbClicked<SWizard> @ 143019080

FArguments * __thiscall
SBreadcrumbTrail<int>::FArguments::OnCrumbClicked<SWizard>
          (FArguments *this,SWizard *param_1,pmf_7a89d44a *param_2)

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
  
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnCrumbClicked,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->_OnCrumbClicked).field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
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
    *puVar7 = &___7__TCommonDelegateInstanceState___A6AXAEBH_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSWizard___00__A6AXAEBH_ZUFDefaultDelegateUserPolicy____V__6B_
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
  return this;
}

// OnMenuOpenChanged<SColorThemesViewer> @ 1430191b0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FArguments * __thiscall
SComboButton::FArguments::OnMenuOpenChanged<SColorThemesViewer>
          (FArguments *this,SColorThemesViewer *param_1,pmf_dc9be694 *param_2)

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
  
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnMenuOpenChanged,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->_OnMenuOpenChanged).field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
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
    *puVar7 = &___7__TCommonDelegateInstanceState___A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSColorThemesViewer___00__A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_
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
  return this;
}

// OnTextCommitted<SColorThemesViewer> @ 1430192e0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FArguments * __thiscall
SEditableTextBox::FArguments::OnTextCommitted<SColorThemesViewer>
          (FArguments *this,SColorThemesViewer *param_1,pmf_d8847f34 *param_2)

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
  
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnTextCommitted,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->_OnTextCommitted).field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
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
              ___7__TCommonDelegateInstanceState___A6AXAEBVFText__W4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSColorThemesViewer___00__A6AXAEBVFText__W4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
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
  return this;
}

// Text<SThemeColorBlock> @ 143019460

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FArguments * __thiscall
STextBlock::FArguments::Text<SThemeColorBlock>
          (FArguments *this,SThemeColorBlock *param_1,pmf_a786b61a *param_2)

{
  SWidget *pSVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 *puVar7;
  TSharedRef<SWidget_const_,1> *pTVar8;
  ulong64 uVar9;
  TReferenceControllerBase<1> *pTVar10;
  uint uStackX_c;
  TSharedRef<SWidget_const_,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  (this->_Text).bIsSet = true;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(this->_Text).Getter,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->_Text).Getter.field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
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
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSThemeColorBlock___00__A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
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
  return this;
}

// Text<SWizard> @ 1430195a0

FArguments * __thiscall
STextBlock::FArguments::Text<SWizard>(FArguments *this,SWizard *param_1,pmf_d1dd2fc0 *param_2)

{
  SWidget *pSVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 *puVar7;
  TSharedRef<SWidget_const_,1> *pTVar8;
  ulong64 uVar9;
  TReferenceControllerBase<1> *pTVar10;
  uint uStackX_c;
  TSharedRef<SWidget_const_,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  (this->_Text).bIsSet = true;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(this->_Text).Getter,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->_Text).Getter.field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
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
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSWizard___00__A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
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
  return this;
}

// FArguments @ 14301a3c0

FArguments * __thiscall SColorThemesViewer::FArguments::FArguments(FArguments *this)

{
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  (this->_UseAlpha).Value = false;
  (this->_UseAlpha).bIsSet = false;
  *(undefined8 *)&(this->_UseAlpha).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_UseAlpha).Getter = 0;
  *(undefined8 *)&(this->_UseAlpha).Getter.field_0x8 = 0;
  return this;
}

// FArguments @ 14301a400

FArguments * __thiscall STextEntryPopup::FArguments::FArguments(FArguments *this)

{
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  FText::FText(&this->_Label);
  FText::FText(&this->_DefaultText);
  *(undefined8 *)&this->_OnTextChanged = 0;
  *(undefined8 *)&(this->_OnTextChanged).field_0x8 = 0;
  *(undefined4 *)&(this->_OnTextChanged).field_0x10 = 0;
  *(undefined8 *)&this->_OnTextCommitted = 0;
  *(undefined8 *)&(this->_OnTextCommitted).field_0x8 = 0;
  *(undefined4 *)&(this->_OnTextCommitted).field_0x10 = 0;
  this->_SelectAllTextWhenFocused = false;
  (this->_ClearKeyboardFocusOnCommit).Value = false;
  (this->_ClearKeyboardFocusOnCommit).bIsSet = false;
  *(undefined8 *)&(this->_ClearKeyboardFocusOnCommit).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_ClearKeyboardFocusOnCommit).Getter = 0;
  *(undefined8 *)&(this->_ClearKeyboardFocusOnCommit).Getter.field_0x8 = 0;
  FText::FText(&(this->_HintText).Value);
  (this->_HintText).bIsSet = false;
  *(undefined8 *)&(this->_HintText).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_HintText).Getter = 0;
  *(undefined8 *)&(this->_HintText).Getter.field_0x8 = 0;
  (this->_MaxWidth).Value = 0.0;
  (this->_MaxWidth).bIsSet = true;
  *(undefined8 *)&(this->_MaxWidth).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_MaxWidth).Getter = 0;
  *(undefined8 *)&(this->_MaxWidth).Getter.field_0x8 = 0;
  *(undefined8 *)&this->_OnVerifyTextChanged = 0;
  *(undefined8 *)&(this->_OnVerifyTextChanged).field_0x8 = 0;
  *(undefined4 *)&(this->_OnVerifyTextChanged).field_0x10 = 0;
  (this->_ErrorReporting).Object = (IErrorReportingWidget *)0x0;
  (this->_ErrorReporting).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->_AutoFocus = true;
  return this;
}

// FArguments @ 14301a510

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FArguments * __thiscall SThemeColorBlock::FArguments::FArguments(FArguments *this)

{
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  (this->_Color).Value.Object = (FLinearColor *)0x0;
  (this->_Color).Value.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  (this->_Color).bIsSet = false;
  *(undefined8 *)&(this->_Color).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_Color).Getter = 0;
  *(undefined8 *)&(this->_Color).Getter.field_0x8 = 0;
  (this->_ColorInfo).Value.Object = (FColorInfo *)0x0;
  (this->_ColorInfo).Value.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->_ColorInfo).bIsSet = false;
  *(undefined8 *)&(this->_ColorInfo).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_ColorInfo).Getter = 0;
  *(undefined8 *)&(this->_ColorInfo).Getter.field_0x8 = 0;
  *(undefined8 *)&(this->_OnSelectColor).field_0x10 = 0;
  *(undefined8 *)&this->_OnSelectColor = 0;
  *(undefined8 *)&(this->_OnSelectColor).field_0x8 = 0;
  (this->_Parent).Value.Object = (SThemeColorBlocksBar *)0x0;
  (this->_Parent).Value.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->_Parent).bIsSet = false;
  *(undefined8 *)&(this->_Parent).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_Parent).Getter = 0;
  *(undefined8 *)&(this->_Parent).Getter.field_0x8 = 0;
  *(undefined8 *)&(this->_ShowTrashCallback).field_0x10 = 0;
  *(undefined8 *)&this->_ShowTrashCallback = 0;
  *(undefined8 *)&(this->_ShowTrashCallback).field_0x8 = 0;
  *(undefined8 *)&(this->_HideTrashCallback).field_0x10 = 0;
  *(undefined8 *)&this->_HideTrashCallback = 0;
  *(undefined8 *)&(this->_HideTrashCallback).field_0x8 = 0;
  (this->_UseSRGB).Value = false;
  (this->_UseSRGB).bIsSet = false;
  *(undefined8 *)&(this->_UseSRGB).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_UseSRGB).Getter = 0;
  *(undefined8 *)&(this->_UseSRGB).Getter.field_0x8 = 0;
  (this->_UseAlpha).Value = false;
  (this->_UseAlpha).bIsSet = false;
  *(undefined8 *)&(this->_UseAlpha).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_UseAlpha).Getter = 0;
  *(undefined8 *)&(this->_UseAlpha).Getter.field_0x8 = 0;
  (this->_SupportsDrag).Value = true;
  (this->_SupportsDrag).bIsSet = true;
  *(undefined8 *)&(this->_SupportsDrag).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_SupportsDrag).Getter = 0;
  *(undefined8 *)&(this->_SupportsDrag).Getter.field_0x8 = 0;
  return this;
}

// ~FArguments @ 14301ae80

void __thiscall SWidgetSwitcher::FArguments::~FArguments(FArguments *this)

{
  FScriptContainerElement *pFVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_WidgetIndex).Getter);
  DestructItems<TBasicLayoutWidgetSlot<FBasicLayoutWidgetSlot>::FSlotArguments,int>
            ((FSlotArguments *)(this->_Slots).AllocatorInstance.Data,(this->_Slots).ArrayNum);
  pFVar1 = (this->_Slots).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return;
}

// AlphaDisplayMode @ 14301d390

FArguments * __thiscall
SColorBlock::FArguments::AlphaDisplayMode
          (FArguments *this,TAttribute<EColorBlockAlphaDisplayMode> *param_1)

{
  (this->_AlphaDisplayMode).Value = param_1->Value;
  (this->_AlphaDisplayMode).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_AlphaDisplayMode).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  return this;
}

// ClearKeyboardFocusOnCommit @ 14301fa90

FArguments * __thiscall
SEditableTextBox::FArguments::ClearKeyboardFocusOnCommit(FArguments *this,TAttribute<bool> *param_1)

{
  (this->_ClearKeyboardFocusOnCommit).Value = param_1->Value;
  (this->_ClearKeyboardFocusOnCommit).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->_ClearKeyboardFocusOnCommit).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  return this;
}

// MaximumLength @ 143038af0

FArguments * __thiscall
SEditableTextBox::FArguments::MaximumLength(FArguments *this,TAttribute<int> *param_1)

{
  (this->_MaximumLength).Value = param_1->Value;
  (this->_MaximumLength).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_MaximumLength).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  return this;
}

// SelectAllTextWhenFocused @ 14303e520

FArguments * __thiscall
SEditableTextBox::FArguments::SelectAllTextWhenFocused(FArguments *this,TAttribute<bool> *param_1)

{
  (this->_SelectAllTextWhenFocused).Value = param_1->Value;
  (this->_SelectAllTextWhenFocused).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_SelectAllTextWhenFocused).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  return this;
}

// UseSRGB @ 14303fb20

FArguments * __thiscall SColorBlock::FArguments::UseSRGB(FArguments *this,TAttribute<bool> *param_1)

{
  (this->_UseSRGB).Value = param_1->Value;
  (this->_UseSRGB).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_UseSRGB).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  return this;
}

// VAlign @ 14303fb70

FArguments * __thiscall
SComboButton::FArguments::VAlign(FArguments *this,EVerticalAlignment param_1)

{
  this->_VAlign = param_1;
  return this;
}

// BackgroundColor<STextEditTest> @ 1430424a0

/* WARNING: Enum "Type": Some values do not have unique names */

FArguments * __thiscall
SEditableTextBox::FArguments::BackgroundColor<STextEditTest>
          (FArguments *this,STextEditTest *param_1,pmf_04a91e28 *param_2)

{
  SWidget *pSVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 *puVar7;
  TSharedRef<SWidget_const_,1> *pTVar8;
  ulong64 uVar9;
  TReferenceControllerBase<1> *pTVar10;
  uint uStackX_c;
  TSharedRef<SWidget_const_,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  (this->_BackgroundColor).bIsSet = true;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &(this->_BackgroundColor).Getter,(FWriteAccessScope *)&local_38);
  local_20 = &(this->_BackgroundColor).Getter.field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
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
              ___7__TCommonDelegateInstanceState___A6A_AUFSlateColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSTextEditTest___00__A6A_AUFSlateColor__XZUFDefaultDelegateUserPolicy____V__6B_
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
  return this;
}

// Color<SRichTextEditTest> @ 1430430f0

/* WARNING: Enum "Type": Some values do not have unique names */

FArguments * __thiscall
SColorBlock::FArguments::Color<SRichTextEditTest>
          (FArguments *this,SRichTextEditTest *param_1,pmf_ee6c244e *param_2)

{
  SWidget *pSVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 *puVar7;
  TSharedRef<SWidget_const_,1> *pTVar8;
  ulong64 uVar9;
  TReferenceControllerBase<1> *pTVar10;
  uint uStackX_c;
  TSharedRef<SWidget_const_,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  (this->_Color).bIsSet = true;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(this->_Color).Getter,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->_Color).Getter.field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
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
              ___7__TCommonDelegateInstanceState___A6A_AUFLinearColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSRichTextEditTest___00__A6A_AUFLinearColor__XZUFDefaultDelegateUserPolicy____V__6B_
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
  return this;
}

// ColorAndOpacity<SAnimTest> @ 143043230

FArguments * __thiscall
SBorder::FArguments::ColorAndOpacity<SAnimTest>
          (FArguments *this,SAnimTest *param_1,pmf_76d03210 *param_2)

{
  SWidget *pSVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 *puVar7;
  TSharedRef<SWidget_const_,1> *pTVar8;
  ulong64 uVar9;
  TReferenceControllerBase<1> *pTVar10;
  uint uStackX_c;
  TSharedRef<SWidget_const_,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  (this->_ColorAndOpacity).bIsSet = true;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &(this->_ColorAndOpacity).Getter,(FWriteAccessScope *)&local_38);
  local_20 = &(this->_ColorAndOpacity).Getter.field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
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
              ___7__TCommonDelegateInstanceState___A6A_AUFLinearColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSAnimTest___00__A6A_AUFLinearColor__XZUFDefaultDelegateUserPolicy____V__6B_
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
  return this;
}

// ColorAndOpacity<SAnimTest> @ 143043370

FArguments * __thiscall
STextBlock::FArguments::ColorAndOpacity<SAnimTest>
          (FArguments *this,SAnimTest *param_1,pmf_7e893a6e *param_2)

{
  SWidget *pSVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 *puVar7;
  TSharedRef<SWidget_const_,1> *pTVar8;
  ulong64 uVar9;
  TReferenceControllerBase<1> *pTVar10;
  uint uStackX_c;
  TSharedRef<SWidget_const_,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  (this->_ColorAndOpacity).bIsSet = true;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &(this->_ColorAndOpacity).Getter,(FWriteAccessScope *)&local_38);
  local_20 = &(this->_ColorAndOpacity).Getter.field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
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
              ___7__TCommonDelegateInstanceState___A6A_AUFSlateColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSAnimTest___00__A6A_AUFSlateColor__XZUFDefaultDelegateUserPolicy____V__6B_
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
  return this;
}

// ContentScale<SAnimTest> @ 143045910

FArguments * __thiscall
SBorder::FArguments::ContentScale<SAnimTest>
          (FArguments *this,SAnimTest *param_1,pmf_2a52f584 *param_2)

{
  SWidget *pSVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 *puVar7;
  TSharedRef<SWidget_const_,1> *pTVar8;
  ulong64 uVar9;
  TReferenceControllerBase<1> *pTVar10;
  uint uStackX_c;
  TSharedRef<SWidget_const_,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  (this->_ContentScale).bIsSet = true;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(this->_ContentScale).Getter
             ,(FWriteAccessScope *)&local_38);
  local_20 = &(this->_ContentScale).Getter.field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
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
              ___7__TCommonDelegateInstanceState___A6A_AU__TVector2_N_Math_UE__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSAnimTest___00__A6A_AU__TVector2_N_Math_UE__XZUFDefaultDelegateUserPolicy____V__6B_
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
  return this;
}

// DPIScale<SDPIScalingTest> @ 143046f10

FArguments * __thiscall
SDPIScaler::FArguments::DPIScale<SDPIScalingTest>
          (FArguments *this,SDPIScalingTest *param_1,pmf_9906c656 *param_2)

{
  pmf_9906c656 local_18;
  
  local_18._0_8_ = *(undefined8 *)param_2;
  local_18._8_8_ = *(undefined8 *)&param_2->field_0x8;
  TAttribute<float>::Bind<SDPIScalingTest>(&this->_DPIScale,param_1,&local_18);
  return this;
}

// IgnoreClipping<SFxTest> @ 143048e70

FArguments * __thiscall
SFxWidget::FArguments::IgnoreClipping<SFxTest>
          (FArguments *this,SFxTest *param_1,pmf_fbb1cb59 *param_2)

{
  SWidget *pSVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 *puVar7;
  TSharedRef<SWidget_const_,1> *pTVar8;
  ulong64 uVar9;
  TReferenceControllerBase<1> *pTVar10;
  uint uStackX_c;
  TSharedRef<SWidget_const_,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  (this->_IgnoreClipping).bIsSet = true;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &(this->_IgnoreClipping).Getter,(FWriteAccessScope *)&local_38);
  local_20 = &(this->_IgnoreClipping).Getter.field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
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
    *puVar7 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSFxTest___00__A6A_NXZUFDefaultDelegateUserPolicy____V__6B_
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
  return this;
}

// Image<SDynamicBrushTest> @ 143048fb0

FArguments * __thiscall
SImage::FArguments::Image<SDynamicBrushTest>
          (FArguments *this,SDynamicBrushTest *param_1,pmf_68ebf1d3 *param_2)

{
  SWidget *pSVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 *puVar7;
  TSharedRef<SWidget_const_,1> *pTVar8;
  ulong64 uVar9;
  TReferenceControllerBase<1> *pTVar10;
  uint uStackX_c;
  TSharedRef<SWidget_const_,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  (this->_Image).bIsSet = true;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(this->_Image).Getter,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->_Image).Getter.field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
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
              ___7__TCommonDelegateInstanceState___A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSDynamicBrushTest___00__A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
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
  return this;
}

// IsChecked<SDPIScalingTest> @ 143049170

FArguments * __thiscall
SCheckBox::FArguments::IsChecked<SDPIScalingTest>
          (FArguments *this,SDPIScalingTest *param_1,pmf_c8be0d04 *param_2)

{
  SWidget *pSVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 *puVar7;
  TSharedRef<SWidget_const_,1> *pTVar8;
  ulong64 uVar9;
  TReferenceControllerBase<1> *pTVar10;
  uint uStackX_c;
  TSharedRef<SWidget_const_,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  (this->_IsChecked).bIsSet = true;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(this->_IsChecked).Getter,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->_IsChecked).Getter.field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
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
              ___7__TCommonDelegateInstanceState___A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSDPIScalingTest___00__A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy____V__6B_
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
  return this;
}

// IsChecked<SFxTest> @ 1430492b0

FArguments * __thiscall
SCheckBox::FArguments::IsChecked<SFxTest>(FArguments *this,SFxTest *param_1,pmf_b0dcde9c *param_2)

{
  SWidget *pSVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 *puVar7;
  TSharedRef<SWidget_const_,1> *pTVar8;
  ulong64 uVar9;
  TReferenceControllerBase<1> *pTVar10;
  uint uStackX_c;
  TSharedRef<SWidget_const_,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  (this->_IsChecked).bIsSet = true;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(this->_IsChecked).Getter,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->_IsChecked).Getter.field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
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
              ___7__TCommonDelegateInstanceState___A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSFxTest___00__A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy____V__6B_
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
  return this;
}

// IsChecked<SMultiLineEditingTest> @ 1430493f0

FArguments * __thiscall
SCheckBox::FArguments::IsChecked<SMultiLineEditingTest>
          (FArguments *this,SMultiLineEditingTest *param_1,pmf_07bf8763 *param_2)

{
  SWidget *pSVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 *puVar7;
  TSharedRef<SWidget_const_,1> *pTVar8;
  ulong64 uVar9;
  TReferenceControllerBase<1> *pTVar10;
  uint uStackX_c;
  TSharedRef<SWidget_const_,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  (this->_IsChecked).bIsSet = true;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(this->_IsChecked).Getter,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->_IsChecked).Getter.field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
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
              ___7__TCommonDelegateInstanceState___A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSMultiLineEditingTest___00__A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy____V__6B_
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
  return this;
}

// IsChecked<SNotificationListTest> @ 143049530

/* WARNING: Enum "Type": Some values do not have unique names */

FArguments * __thiscall
SCheckBox::FArguments::IsChecked<SNotificationListTest>
          (FArguments *this,SNotificationListTest *param_1,pmf_74f1e6c5 *param_2)

{
  SWidget *pSVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 *puVar7;
  TSharedRef<SWidget_const_,1> *pTVar8;
  ulong64 uVar9;
  TReferenceControllerBase<1> *pTVar10;
  uint uStackX_c;
  TSharedRef<SWidget_const_,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  (this->_IsChecked).bIsSet = true;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(this->_IsChecked).Getter,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->_IsChecked).Getter.field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
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
              ___7__TCommonDelegateInstanceState___A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSNotificationListTest___00__A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy____V__6B_
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
  return this;
}

// IsChecked<SRichTextEditTest> @ 143049670

/* WARNING: Enum "Type": Some values do not have unique names */

FArguments * __thiscall
SCheckBox::FArguments::IsChecked<SRichTextEditTest>
          (FArguments *this,SRichTextEditTest *param_1,pmf_bb09059b *param_2)

{
  SWidget *pSVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 *puVar7;
  TSharedRef<SWidget_const_,1> *pTVar8;
  ulong64 uVar9;
  TReferenceControllerBase<1> *pTVar10;
  uint uStackX_c;
  TSharedRef<SWidget_const_,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  (this->_IsChecked).bIsSet = true;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(this->_IsChecked).Getter,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->_IsChecked).Getter.field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
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
              ___7__TCommonDelegateInstanceState___A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSRichTextEditTest___00__A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy____V__6B_
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
  return this;
}

// IsChecked<SRichTextTest> @ 1430497b0

FArguments * __thiscall
SCheckBox::FArguments::IsChecked<SRichTextTest>
          (FArguments *this,SRichTextTest *param_1,pmf_b9da6cc5 *param_2)

{
  SWidget *pSVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 *puVar7;
  TSharedRef<SWidget_const_,1> *pTVar8;
  ulong64 uVar9;
  TReferenceControllerBase<1> *pTVar10;
  uint uStackX_c;
  TSharedRef<SWidget_const_,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  (this->_IsChecked).bIsSet = true;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(this->_IsChecked).Getter,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->_IsChecked).Getter.field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
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
              ___7__TCommonDelegateInstanceState___A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSRichTextTest___00__A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy____V__6B_
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
  return this;
}

// IsChecked<STextEditTest> @ 1430498f0

/* WARNING: Enum "Type": Some values do not have unique names */

FArguments * __thiscall
SCheckBox::FArguments::IsChecked<STextEditTest>
          (FArguments *this,STextEditTest *param_1,pmf_e1860997 *param_2)

{
  SWidget *pSVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 *puVar7;
  TSharedRef<SWidget_const_,1> *pTVar8;
  ulong64 uVar9;
  TReferenceControllerBase<1> *pTVar10;
  uint uStackX_c;
  TSharedRef<SWidget_const_,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  (this->_IsChecked).bIsSet = true;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(this->_IsChecked).Getter,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->_IsChecked).Getter.field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
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
              ___7__TCommonDelegateInstanceState___A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSTextEditTest___00__A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy____V__6B_
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
  return this;
}

// IsPassword<STextEditTest> @ 143049a30

/* WARNING: Enum "Type": Some values do not have unique names */

FArguments * __thiscall
SEditableTextBox::FArguments::IsPassword<STextEditTest>
          (FArguments *this,STextEditTest *param_1,pmf_88422114 *param_2)

{
  SWidget *pSVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 *puVar7;
  TSharedRef<SWidget_const_,1> *pTVar8;
  ulong64 uVar9;
  TReferenceControllerBase<1> *pTVar10;
  uint uStackX_c;
  TSharedRef<SWidget_const_,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  (this->_IsPassword).bIsSet = true;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(this->_IsPassword).Getter,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->_IsPassword).Getter.field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
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
    *puVar7 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSTextEditTest___00__A6A_NXZUFDefaultDelegateUserPolicy____V__6B_
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
  return this;
}

// IsReadOnly<SMultiLineEditingTest> @ 143049b70

FArguments * __thiscall
SMultiLineEditableTextBox::FArguments::IsReadOnly<SMultiLineEditingTest>
          (FArguments *this,SMultiLineEditingTest *param_1,pmf_1cfc37e0 *param_2)

{
  SWidget *pSVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 *puVar7;
  TSharedRef<SWidget_const_,1> *pTVar8;
  ulong64 uVar9;
  TReferenceControllerBase<1> *pTVar10;
  uint uStackX_c;
  TSharedRef<SWidget_const_,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  (this->_IsReadOnly).bIsSet = true;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(this->_IsReadOnly).Getter,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->_IsReadOnly).Getter.field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
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
    *puVar7 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSMultiLineEditingTest___00__A6A_NXZUFDefaultDelegateUserPolicy____V__6B_
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
  return this;
}

// Justification<SRichTextTest> @ 143049cb0

FArguments * __thiscall
SRichTextBlock::FArguments::Justification<SRichTextTest>
          (FArguments *this,SRichTextTest *param_1,pmf_645d5af9 *param_2)

{
  SWidget *pSVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 *puVar7;
  TSharedRef<SWidget_const_,1> *pTVar8;
  ulong64 uVar9;
  TReferenceControllerBase<1> *pTVar10;
  uint uStackX_c;
  TSharedRef<SWidget_const_,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  (this->_Justification).bIsSet = true;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &(this->_Justification).Getter,(FWriteAccessScope *)&local_38);
  local_20 = &(this->_Justification).Getter.field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
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
              ___7__TCommonDelegateInstanceState___A6A_AW4Type_ETextJustify__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSRichTextTest___00__A6A_AW4Type_ETextJustify__XZUFDefaultDelegateUserPolicy____V__6B_
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
  return this;
}

// LayoutScale<SFxTest> @ 143049df0

FArguments * __thiscall
SFxWidget::FArguments::LayoutScale<SFxTest>(FArguments *this,SFxTest *param_1,pmf_2c29edee *param_2)

{
  pmf_2c29edee local_18;
  
  local_18._0_8_ = *(undefined8 *)param_2;
  local_18._8_8_ = *(undefined8 *)&param_2->field_0x8;
  TAttribute<float>::Bind<SFxTest>(&this->_LayoutScale,param_1,&local_18);
  return this;
}

// LineHeightPercentage<SRichTextTest> @ 143049e30

FArguments * __thiscall
SRichTextBlock::FArguments::LineHeightPercentage<SRichTextTest>
          (FArguments *this,SRichTextTest *param_1,pmf_b8350b97 *param_2)

{
  pmf_b8350b97 local_18;
  
  local_18._0_8_ = *(undefined8 *)param_2;
  local_18._8_8_ = *(undefined8 *)&param_2->field_0x8;
  TAttribute<float>::Bind<SRichTextTest>(&this->_LineHeightPercentage,param_1,&local_18);
  return this;
}

// Margin<SRichTextTest> @ 14304c1a0

FArguments * __thiscall
SRichTextBlock::FArguments::Margin<SRichTextTest>
          (FArguments *this,SRichTextTest *param_1,pmf_83f4a972 *param_2)

{
  SWidget *pSVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 *puVar7;
  TSharedRef<SWidget_const_,1> *pTVar8;
  ulong64 uVar9;
  TReferenceControllerBase<1> *pTVar10;
  uint uStackX_c;
  TSharedRef<SWidget_const_,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  (this->_Margin).bIsSet = true;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(this->_Margin).Getter,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->_Margin).Getter.field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
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
              ___7__TCommonDelegateInstanceState___A6A_AUFMargin__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSRichTextTest___00__A6A_AUFMargin__XZUFDefaultDelegateUserPolicy____V__6B_
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
  return this;
}

// OnCheckStateChanged<SDPIScalingTest> @ 14304c4f0

FArguments * __thiscall
SCheckBox::FArguments::OnCheckStateChanged<SDPIScalingTest>
          (FArguments *this,SDPIScalingTest *param_1,pmf_74791c82 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined8 *puVar6;
  TSharedRef<SWidget,1> *pTVar7;
  ulong64 uVar8;
  TSharedRef<SDPIScalingTest,1> local_68;
  TSharedPtr<SDPIScalingTest,1> local_58;
  TSharedRef<SWidget,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  uVar1 = *(undefined8 *)param_2;
  uVar2 = *(undefined8 *)&param_2->field_0x8;
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnCheckStateChanged,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->_OnCheckStateChanged).field_0x8;
  puVar6 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar6 != (undefined8 *)0x0) {
    pTVar7 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_48);
    local_68.Object = (SDPIScalingTest *)pTVar7->Object;
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
              ___7__TCommonDelegateInstanceState___A6AXW4ECheckBoxState___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    local_58.Object = local_68.Object;
    local_58.SharedReferenceCount.ReferenceController =
         local_68.SharedReferenceCount.ReferenceController;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar8;
    *puVar6 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSDPIScalingTest___00__A6AXW4ECheckBoxState___ZUFDefaultDelegateUserPolicy____V__6B_
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
    TSharedPtr<SDPIScalingTest,1>::~TSharedPtr<SDPIScalingTest,1>(&local_58);
  }
  if (bVar4) {
    TSharedRef<SDPIScalingTest,1>::~TSharedRef<SDPIScalingTest,1>(&local_68);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return this;
}

// OnCheckStateChanged<SFxTest> @ 14304c650

FArguments * __thiscall
SCheckBox::FArguments::OnCheckStateChanged<SFxTest>
          (FArguments *this,SFxTest *param_1,pmf_6fd9c6ea *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined8 *puVar6;
  TSharedRef<SWidget,1> *pTVar7;
  ulong64 uVar8;
  TSharedRef<SFxTest,1> local_68;
  TSharedPtr<SFxTest,1> local_58;
  TSharedRef<SWidget,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  uVar1 = *(undefined8 *)param_2;
  uVar2 = *(undefined8 *)&param_2->field_0x8;
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnCheckStateChanged,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->_OnCheckStateChanged).field_0x8;
  puVar6 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar6 != (undefined8 *)0x0) {
    pTVar7 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_48);
    local_68.Object = (SFxTest *)pTVar7->Object;
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
              ___7__TCommonDelegateInstanceState___A6AXW4ECheckBoxState___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    local_58.Object = local_68.Object;
    local_58.SharedReferenceCount.ReferenceController =
         local_68.SharedReferenceCount.ReferenceController;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar8;
    *puVar6 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSFxTest___00__A6AXW4ECheckBoxState___ZUFDefaultDelegateUserPolicy____V__6B_
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
    TSharedPtr<SFxTest,1>::~TSharedPtr<SFxTest,1>(&local_58);
  }
  if (bVar4) {
    TSharedRef<SFxTest,1>::~TSharedRef<SFxTest,1>(&local_68);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return this;
}

// OnCheckStateChanged<SMultiLineEditingTest> @ 14304c7b0

FArguments * __thiscall
SCheckBox::FArguments::OnCheckStateChanged<SMultiLineEditingTest>
          (FArguments *this,SMultiLineEditingTest *param_1,pmf_a7fe2203 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined8 *puVar6;
  TSharedRef<SWidget,1> *pTVar7;
  ulong64 uVar8;
  TSharedRef<SMultiLineEditingTest,1> local_68;
  TSharedPtr<SMultiLineEditingTest,1> local_58;
  TSharedRef<SWidget,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  uVar1 = *(undefined8 *)param_2;
  uVar2 = *(undefined8 *)&param_2->field_0x8;
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnCheckStateChanged,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->_OnCheckStateChanged).field_0x8;
  puVar6 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar6 != (undefined8 *)0x0) {
    pTVar7 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_48);
    local_68.Object = (SMultiLineEditingTest *)pTVar7->Object;
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
              ___7__TCommonDelegateInstanceState___A6AXW4ECheckBoxState___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    local_58.Object = local_68.Object;
    local_58.SharedReferenceCount.ReferenceController =
         local_68.SharedReferenceCount.ReferenceController;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar8;
    *puVar6 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSMultiLineEditingTest___00__A6AXW4ECheckBoxState___ZUFDefaultDelegateUserPolicy____V__6B_
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
    TSharedPtr<SMultiLineEditingTest,1>::~TSharedPtr<SMultiLineEditingTest,1>(&local_58);
  }
  if (bVar4) {
    TSharedRef<SMultiLineEditingTest,1>::~TSharedRef<SMultiLineEditingTest,1>(&local_68);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return this;
}

// OnCheckStateChanged<SNotificationListTest> @ 14304c910

/* WARNING: Enum "Type": Some values do not have unique names */

FArguments * __thiscall
SCheckBox::FArguments::OnCheckStateChanged<SNotificationListTest>
          (FArguments *this,SNotificationListTest *param_1,pmf_2bfa4461 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined8 *puVar6;
  TSharedRef<SWidget,1> *pTVar7;
  ulong64 uVar8;
  TSharedRef<SNotificationListTest,1> local_68;
  TSharedPtr<SNotificationListTest,1> local_58;
  TSharedRef<SWidget,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  uVar1 = *(undefined8 *)param_2;
  uVar2 = *(undefined8 *)&param_2->field_0x8;
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnCheckStateChanged,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->_OnCheckStateChanged).field_0x8;
  puVar6 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar6 != (undefined8 *)0x0) {
    pTVar7 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_48);
    local_68.Object = (SNotificationListTest *)pTVar7->Object;
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
              ___7__TCommonDelegateInstanceState___A6AXW4ECheckBoxState___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    local_58.Object = local_68.Object;
    local_58.SharedReferenceCount.ReferenceController =
         local_68.SharedReferenceCount.ReferenceController;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar8;
    *puVar6 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSNotificationListTest___00__A6AXW4ECheckBoxState___ZUFDefaultDelegateUserPolicy____V__6B_
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
    TSharedPtr<SNotificationListTest,1>::~TSharedPtr<SNotificationListTest,1>(&local_58);
  }
  if (bVar4) {
    TSharedRef<SNotificationListTest,1>::~TSharedRef<SNotificationListTest,1>(&local_68);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return this;
}

// OnCheckStateChanged<SRichTextEditTest> @ 14304ca70

/* WARNING: Enum "Type": Some values do not have unique names */

FArguments * __thiscall
SCheckBox::FArguments::OnCheckStateChanged<SRichTextEditTest>
          (FArguments *this,SRichTextEditTest *param_1,pmf_abb7684b *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined8 *puVar6;
  TSharedRef<SWidget,1> *pTVar7;
  ulong64 uVar8;
  TSharedRef<SRichTextEditTest,1> local_68;
  TSharedPtr<SRichTextEditTest,1> local_58;
  TSharedRef<SWidget,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  uVar1 = *(undefined8 *)param_2;
  uVar2 = *(undefined8 *)&param_2->field_0x8;
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnCheckStateChanged,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->_OnCheckStateChanged).field_0x8;
  puVar6 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar6 != (undefined8 *)0x0) {
    pTVar7 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_48);
    local_68.Object = (SRichTextEditTest *)pTVar7->Object;
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
              ___7__TCommonDelegateInstanceState___A6AXW4ECheckBoxState___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    local_58.Object = local_68.Object;
    local_58.SharedReferenceCount.ReferenceController =
         local_68.SharedReferenceCount.ReferenceController;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar8;
    *puVar6 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSRichTextEditTest___00__A6AXW4ECheckBoxState___ZUFDefaultDelegateUserPolicy____V__6B_
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
    TSharedPtr<SRichTextEditTest,1>::~TSharedPtr<SRichTextEditTest,1>(&local_58);
  }
  if (bVar4) {
    TSharedRef<SRichTextEditTest,1>::~TSharedRef<SRichTextEditTest,1>(&local_68);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return this;
}

// OnCheckStateChanged<SRichTextTest> @ 14304cbd0

FArguments * __thiscall
SCheckBox::FArguments::OnCheckStateChanged<SRichTextTest>
          (FArguments *this,SRichTextTest *param_1,pmf_93cec561 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined8 *puVar6;
  TSharedRef<SWidget,1> *pTVar7;
  ulong64 uVar8;
  TSharedRef<SRichTextTest,1> local_68;
  TSharedPtr<SRichTextTest,1> local_58;
  TSharedRef<SWidget,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  uVar1 = *(undefined8 *)param_2;
  uVar2 = *(undefined8 *)&param_2->field_0x8;
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnCheckStateChanged,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->_OnCheckStateChanged).field_0x8;
  puVar6 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar6 != (undefined8 *)0x0) {
    pTVar7 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_48);
    local_68.Object = (SRichTextTest *)pTVar7->Object;
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
              ___7__TCommonDelegateInstanceState___A6AXW4ECheckBoxState___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    local_58.Object = local_68.Object;
    local_58.SharedReferenceCount.ReferenceController =
         local_68.SharedReferenceCount.ReferenceController;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar8;
    *puVar6 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSRichTextTest___00__A6AXW4ECheckBoxState___ZUFDefaultDelegateUserPolicy____V__6B_
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
    TSharedPtr<SRichTextTest,1>::~TSharedPtr<SRichTextTest,1>(&local_58);
  }
  if (bVar4) {
    TSharedRef<SRichTextTest,1>::~TSharedRef<SRichTextTest,1>(&local_68);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return this;
}

// OnCheckStateChanged<STextEditTest> @ 14304cd30

/* WARNING: Enum "Type": Some values do not have unique names */

FArguments * __thiscall
SCheckBox::FArguments::OnCheckStateChanged<STextEditTest>
          (FArguments *this,STextEditTest *param_1,pmf_9af90c4f *param_2)

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
  
  uVar1 = *(undefined8 *)param_2;
  uVar2 = *(undefined8 *)&param_2->field_0x8;
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnCheckStateChanged,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->_OnCheckStateChanged).field_0x8;
  puVar6 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar6 != (undefined8 *)0x0) {
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
              ___7__TCommonDelegateInstanceState___A6AXW4ECheckBoxState___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    local_58.Object = local_68.Object;
    local_58.SharedReferenceCount.ReferenceController =
         local_68.SharedReferenceCount.ReferenceController;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar8;
    *puVar6 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSTextEditTest___00__A6AXW4ECheckBoxState___ZUFDefaultDelegateUserPolicy____V__6B_
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
  return this;
}

// OnClicked<SSplitterTest::FVisibilityCycler> @ 14304ce90

FArguments * __thiscall
SButton::FArguments::OnClicked<SSplitterTest::FVisibilityCycler>
          (FArguments *this,TSharedRef<SSplitterTest::FVisibilityCycler,1> *param_1,
          pmf_0b8fe600 param_2)

{
  FVisibilityCycler *pFVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  uint uStackX_c;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  bVar5 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnClicked,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->_OnClicked).field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_20);
  if (puVar2 == (undefined8 *)0x0) {
    pTVar4 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
    pFVar1 = param_1->Object;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &
              ___7__TBaseSPMethodDelegateInstance__0A_UFVisibilityCycler_SSplitterTest___00__A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = pFVar1;
    puVar2[4] = pTVar4;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
      UNLOCK();
    }
    *(pmf_0b8fe600 *)(puVar2 + 5) = param_2;
    bVar5 = true;
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TSharedRef<SSplitterTest::FVisibilityCycler,1>::~TSharedRef<SSplitterTest::FVisibilityCycler,1>
            (param_1);
  return this;
}

// OnClicked<SAnimTest> @ 14304cf90

FArguments * __thiscall
SButton::FArguments::OnClicked<SAnimTest>(FArguments *this,SAnimTest *param_1,pmf_f4efc5ba *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined8 *puVar6;
  TSharedRef<SWidget,1> *pTVar7;
  ulong64 uVar8;
  TSharedRef<SAnimTest,1> local_68;
  TSharedPtr<SAnimTest,1> local_58;
  TSharedRef<SWidget,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  uVar1 = *(undefined8 *)param_2;
  uVar2 = *(undefined8 *)&param_2->field_0x8;
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnClicked,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->_OnClicked).field_0x8;
  puVar6 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar6 != (undefined8 *)0x0) {
    pTVar7 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_48);
    local_68.Object = (SAnimTest *)pTVar7->Object;
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
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    local_58.Object = local_68.Object;
    local_58.SharedReferenceCount.ReferenceController =
         local_68.SharedReferenceCount.ReferenceController;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar8;
    *puVar6 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSAnimTest___00__A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
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
    TSharedPtr<SAnimTest,1>::~TSharedPtr<SAnimTest,1>(&local_58);
  }
  if (bVar4) {
    TSharedRef<SAnimTest,1>::~TSharedRef<SAnimTest,1>(&local_68);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return this;
}

// OnClicked<SColorPickerTest> @ 14304d0f0

FArguments * __thiscall
SButton::FArguments::OnClicked<SColorPickerTest>
          (FArguments *this,SColorPickerTest *param_1,pmf_1bd6d990 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined8 *puVar6;
  TSharedRef<SWidget,1> *pTVar7;
  ulong64 uVar8;
  TSharedRef<SColorPickerTest,1> local_68;
  TSharedPtr<SColorPickerTest,1> local_58;
  TSharedRef<SWidget,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  uVar1 = *(undefined8 *)param_2;
  uVar2 = *(undefined8 *)&param_2->field_0x8;
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnClicked,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->_OnClicked).field_0x8;
  puVar6 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar6 != (undefined8 *)0x0) {
    pTVar7 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_48);
    local_68.Object = (SColorPickerTest *)pTVar7->Object;
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
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    local_58.Object = local_68.Object;
    local_58.SharedReferenceCount.ReferenceController =
         local_68.SharedReferenceCount.ReferenceController;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar8;
    *puVar6 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSColorPickerTest___00__A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
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
    TSharedPtr<SColorPickerTest,1>::~TSharedPtr<SColorPickerTest,1>(&local_58);
  }
  if (bVar4) {
    TSharedRef<SColorPickerTest,1>::~TSharedRef<SColorPickerTest,1>(&local_68);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return this;
}

// OnClicked<SDocumentsTest> @ 14304d250

/* WARNING: Enum "Type": Some values do not have unique names */

FArguments * __thiscall
SButton::FArguments::OnClicked<SDocumentsTest>
          (FArguments *this,SDocumentsTest *param_1,pmf_bb1ff469 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined8 *puVar6;
  TSharedRef<SWidget,1> *pTVar7;
  ulong64 uVar8;
  TSharedRef<SDocumentsTest,1> local_68;
  TSharedPtr<SDocumentsTest,1> local_58;
  TSharedRef<SWidget,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  uVar1 = *(undefined8 *)param_2;
  uVar2 = *(undefined8 *)&param_2->field_0x8;
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnClicked,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->_OnClicked).field_0x8;
  puVar6 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar6 != (undefined8 *)0x0) {
    pTVar7 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_48);
    local_68.Object = (SDocumentsTest *)pTVar7->Object;
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
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    local_58.Object = local_68.Object;
    local_58.SharedReferenceCount.ReferenceController =
         local_68.SharedReferenceCount.ReferenceController;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar8;
    *puVar6 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSDocumentsTest___00__A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
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
    TSharedPtr<SDocumentsTest,1>::~TSharedPtr<SDocumentsTest,1>(&local_58);
  }
  if (bVar4) {
    TSharedRef<SDocumentsTest,1>::~TSharedRef<SDocumentsTest,1>(&local_68);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return this;
}

// OnClicked<SDynamicBrushTest> @ 14304d3b0

FArguments * __thiscall
SButton::FArguments::OnClicked<SDynamicBrushTest>
          (FArguments *this,SDynamicBrushTest *param_1,pmf_161fd224 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined8 *puVar6;
  TSharedRef<SWidget,1> *pTVar7;
  ulong64 uVar8;
  TSharedRef<SDynamicBrushTest,1> local_68;
  TSharedPtr<SDynamicBrushTest,1> local_58;
  TSharedRef<SWidget,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  uVar1 = *(undefined8 *)param_2;
  uVar2 = *(undefined8 *)&param_2->field_0x8;
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnClicked,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->_OnClicked).field_0x8;
  puVar6 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar6 != (undefined8 *)0x0) {
    pTVar7 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_48);
    local_68.Object = (SDynamicBrushTest *)pTVar7->Object;
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
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    local_58.Object = local_68.Object;
    local_58.SharedReferenceCount.ReferenceController =
         local_68.SharedReferenceCount.ReferenceController;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar8;
    *puVar6 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSDynamicBrushTest___00__A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
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
    TSharedPtr<SDynamicBrushTest,1>::~TSharedPtr<SDynamicBrushTest,1>(&local_58);
  }
  if (bVar4) {
    TSharedRef<SDynamicBrushTest,1>::~TSharedRef<SDynamicBrushTest,1>(&local_68);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return this;
}

// OnClicked<SElementTesting> @ 14304d510

FArguments * __thiscall
SButton::FArguments::OnClicked<SElementTesting>
          (FArguments *this,SElementTesting *param_1,pmf_7c434c8b *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined8 *puVar6;
  TSharedRef<SWidget,1> *pTVar7;
  ulong64 uVar8;
  TSharedRef<SElementTesting,1> local_68;
  TSharedPtr<SElementTesting,1> local_58;
  TSharedRef<SWidget,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  uVar1 = *(undefined8 *)param_2;
  uVar2 = *(undefined8 *)&param_2->field_0x8;
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnClicked,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->_OnClicked).field_0x8;
  puVar6 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar6 != (undefined8 *)0x0) {
    pTVar7 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_48);
    local_68.Object = (SElementTesting *)pTVar7->Object;
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
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    local_58.Object = local_68.Object;
    local_58.SharedReferenceCount.ReferenceController =
         local_68.SharedReferenceCount.ReferenceController;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar8;
    *puVar6 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSElementTesting___00__A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
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
    TSharedPtr<SElementTesting,1>::~TSharedPtr<SElementTesting,1>(&local_58);
  }
  if (bVar4) {
    TSharedRef<SElementTesting,1>::~TSharedRef<SElementTesting,1>(&local_68);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return this;
}

// OnClicked<SInvalidationTest> @ 14304d670

FArguments * __thiscall
SButton::FArguments::OnClicked<SInvalidationTest>
          (FArguments *this,SInvalidationTest *param_1,pmf_795463a7 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined8 *puVar6;
  TSharedRef<SWidget,1> *pTVar7;
  ulong64 uVar8;
  TSharedRef<SInvalidationTest,1> local_68;
  TSharedPtr<SInvalidationTest,1> local_58;
  TSharedRef<SWidget,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  uVar1 = *(undefined8 *)param_2;
  uVar2 = *(undefined8 *)&param_2->field_0x8;
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnClicked,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->_OnClicked).field_0x8;
  puVar6 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar6 != (undefined8 *)0x0) {
    pTVar7 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_48);
    local_68.Object = (SInvalidationTest *)pTVar7->Object;
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
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    local_58.Object = local_68.Object;
    local_58.SharedReferenceCount.ReferenceController =
         local_68.SharedReferenceCount.ReferenceController;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar8;
    *puVar6 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSInvalidationTest___00__A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
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
    TSharedPtr<SInvalidationTest,1>::~TSharedPtr<SInvalidationTest,1>(&local_58);
  }
  if (bVar4) {
    TSharedRef<SInvalidationTest,1>::~TSharedRef<SInvalidationTest,1>(&local_68);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return this;
}

// OnClicked<SNotificationListTest> @ 14304d7d0

/* WARNING: Enum "Type": Some values do not have unique names */

FArguments * __thiscall
SButton::FArguments::OnClicked<SNotificationListTest>
          (FArguments *this,SNotificationListTest *param_1,pmf_3900d752 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined8 *puVar6;
  TSharedRef<SWidget,1> *pTVar7;
  ulong64 uVar8;
  TSharedRef<SNotificationListTest,1> local_68;
  TSharedPtr<SNotificationListTest,1> local_58;
  TSharedRef<SWidget,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  uVar1 = *(undefined8 *)param_2;
  uVar2 = *(undefined8 *)&param_2->field_0x8;
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnClicked,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->_OnClicked).field_0x8;
  puVar6 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar6 != (undefined8 *)0x0) {
    pTVar7 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_48);
    local_68.Object = (SNotificationListTest *)pTVar7->Object;
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
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    local_58.Object = local_68.Object;
    local_58.SharedReferenceCount.ReferenceController =
         local_68.SharedReferenceCount.ReferenceController;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar8;
    *puVar6 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSNotificationListTest___00__A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
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
    TSharedPtr<SNotificationListTest,1>::~TSharedPtr<SNotificationListTest,1>(&local_58);
  }
  if (bVar4) {
    TSharedRef<SNotificationListTest,1>::~TSharedRef<SNotificationListTest,1>(&local_68);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return this;
}

// OnClicked<SRichTextEditTest> @ 14304d930

/* WARNING: Enum "Type": Some values do not have unique names */

FArguments * __thiscall
SButton::FArguments::OnClicked<SRichTextEditTest>
          (FArguments *this,SRichTextEditTest *param_1,pmf_869368bc *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined8 *puVar6;
  TSharedRef<SWidget,1> *pTVar7;
  ulong64 uVar8;
  TSharedRef<SRichTextEditTest,1> local_68;
  TSharedPtr<SRichTextEditTest,1> local_58;
  TSharedRef<SWidget,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  uVar1 = *(undefined8 *)param_2;
  uVar2 = *(undefined8 *)&param_2->field_0x8;
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnClicked,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->_OnClicked).field_0x8;
  puVar6 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar6 != (undefined8 *)0x0) {
    pTVar7 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_48);
    local_68.Object = (SRichTextEditTest *)pTVar7->Object;
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
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    local_58.Object = local_68.Object;
    local_58.SharedReferenceCount.ReferenceController =
         local_68.SharedReferenceCount.ReferenceController;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar8;
    *puVar6 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSRichTextEditTest___00__A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
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
    TSharedPtr<SRichTextEditTest,1>::~TSharedPtr<SRichTextEditTest,1>(&local_58);
  }
  if (bVar4) {
    TSharedRef<SRichTextEditTest,1>::~TSharedRef<SRichTextEditTest,1>(&local_68);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return this;
}

// OnClicked<SRichTextTest> @ 14304da90

FArguments * __thiscall
SButton::FArguments::OnClicked<SRichTextTest>
          (FArguments *this,SRichTextTest *param_1,pmf_dbeb5052 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined8 *puVar6;
  TSharedRef<SWidget,1> *pTVar7;
  ulong64 uVar8;
  TSharedRef<SRichTextTest,1> local_68;
  TSharedPtr<SRichTextTest,1> local_58;
  TSharedRef<SWidget,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  uVar1 = *(undefined8 *)param_2;
  uVar2 = *(undefined8 *)&param_2->field_0x8;
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnClicked,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->_OnClicked).field_0x8;
  puVar6 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar6 != (undefined8 *)0x0) {
    pTVar7 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_48);
    local_68.Object = (SRichTextTest *)pTVar7->Object;
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
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    local_58.Object = local_68.Object;
    local_58.SharedReferenceCount.ReferenceController =
         local_68.SharedReferenceCount.ReferenceController;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar8;
    *puVar6 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSRichTextTest___00__A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
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
    TSharedPtr<SRichTextTest,1>::~TSharedPtr<SRichTextTest,1>(&local_58);
  }
  if (bVar4) {
    TSharedRef<SRichTextTest,1>::~TSharedRef<SRichTextTest,1>(&local_68);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return this;
}

// OnClicked<SSplitterTest> @ 14304dbf0

FArguments * __thiscall
SButton::FArguments::OnClicked<SSplitterTest>
          (FArguments *this,SSplitterTest *param_1,pmf_5a2813b0 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined8 *puVar6;
  TSharedRef<SWidget,1> *pTVar7;
  ulong64 uVar8;
  TSharedRef<SSplitterTest,1> local_68;
  TSharedPtr<SSplitterTest,1> local_58;
  TSharedRef<SWidget,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  uVar1 = *(undefined8 *)param_2;
  uVar2 = *(undefined8 *)&param_2->field_0x8;
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnClicked,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->_OnClicked).field_0x8;
  puVar6 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar6 != (undefined8 *)0x0) {
    pTVar7 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_48);
    local_68.Object = (SSplitterTest *)pTVar7->Object;
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
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    local_58.Object = local_68.Object;
    local_58.SharedReferenceCount.ReferenceController =
         local_68.SharedReferenceCount.ReferenceController;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar8;
    *puVar6 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSSplitterTest___00__A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
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
    TSharedPtr<SSplitterTest,1>::~TSharedPtr<SSplitterTest,1>(&local_58);
  }
  if (bVar4) {
    TSharedRef<SSplitterTest,1>::~TSharedRef<SSplitterTest,1>(&local_68);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return this;
}

// OnClicked<STextEditTest> @ 14304dd50

/* WARNING: Enum "Type": Some values do not have unique names */

FArguments * __thiscall
SButton::FArguments::OnClicked<STextEditTest>
          (FArguments *this,STextEditTest *param_1,pmf_cd3b9fc0 *param_2)

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
  
  uVar1 = *(undefined8 *)param_2;
  uVar2 = *(undefined8 *)&param_2->field_0x8;
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnClicked,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->_OnClicked).field_0x8;
  puVar6 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar6 != (undefined8 *)0x0) {
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
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    local_58.Object = local_68.Object;
    local_58.SharedReferenceCount.ReferenceController =
         local_68.SharedReferenceCount.ReferenceController;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar8;
    *puVar6 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSTextEditTest___00__A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
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
  return this;
}

// OnColorCommitted<SColorPickerTest> @ 14304e270

/* WARNING: Enum "Type": Some values do not have unique names */

FArguments * __thiscall
SColorPicker::FArguments::OnColorCommitted<SColorPickerTest>
          (FArguments *this,SColorPickerTest *param_1,pmf_b79f33e2 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined8 *puVar6;
  TSharedRef<SWidget,1> *pTVar7;
  ulong64 uVar8;
  TSharedRef<SColorPickerTest,1> local_68;
  TSharedPtr<SColorPickerTest,1> local_58;
  TSharedRef<SWidget,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  uVar1 = *(undefined8 *)param_2;
  uVar2 = *(undefined8 *)&param_2->field_0x8;
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnColorCommitted,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->_OnColorCommitted).field_0x8;
  puVar6 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar6 != (undefined8 *)0x0) {
    pTVar7 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_48);
    local_68.Object = (SColorPickerTest *)pTVar7->Object;
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
              ___7__TCommonDelegateInstanceState___A6AXUFLinearColor___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    local_58.Object = local_68.Object;
    local_58.SharedReferenceCount.ReferenceController =
         local_68.SharedReferenceCount.ReferenceController;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar8;
    *puVar6 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSColorPickerTest___00__A6AXUFLinearColor___ZUFDefaultDelegateUserPolicy____V__6B_
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
    TSharedPtr<SColorPickerTest,1>::~TSharedPtr<SColorPickerTest,1>(&local_58);
  }
  if (bVar4) {
    TSharedRef<SColorPickerTest,1>::~TSharedRef<SColorPickerTest,1>(&local_68);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return this;
}

// OnComboBoxOpened<SRichTextEditTest> @ 14304e3d0

/* WARNING: Enum "Type": Some values do not have unique names */

FArguments * __thiscall
SComboButton::FArguments::OnComboBoxOpened<SRichTextEditTest>
          (FArguments *this,SRichTextEditTest *param_1,pmf_dc118204 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined8 *puVar6;
  TSharedRef<SWidget,1> *pTVar7;
  ulong64 uVar8;
  TSharedRef<SRichTextEditTest,1> local_68;
  TSharedPtr<SRichTextEditTest,1> local_58;
  TSharedRef<SWidget,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  uVar1 = *(undefined8 *)param_2;
  uVar2 = *(undefined8 *)&param_2->field_0x8;
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnComboBoxOpened,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->_OnComboBoxOpened).field_0x8;
  puVar6 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar6 != (undefined8 *)0x0) {
    pTVar7 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_48);
    local_68.Object = (SRichTextEditTest *)pTVar7->Object;
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
    *puVar6 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    local_58.Object = local_68.Object;
    local_58.SharedReferenceCount.ReferenceController =
         local_68.SharedReferenceCount.ReferenceController;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar8;
    *puVar6 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSRichTextEditTest___00__A6AXXZUFDefaultDelegateUserPolicy____V__6B_
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
    TSharedPtr<SRichTextEditTest,1>::~TSharedPtr<SRichTextEditTest,1>(&local_58);
  }
  if (bVar4) {
    TSharedRef<SRichTextEditTest,1>::~TSharedRef<SRichTextEditTest,1>(&local_68);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return this;
}

// OnContextMenuOpening<STextEditTest> @ 14304e530

/* WARNING: Enum "Type": Some values do not have unique names */

FArguments * __thiscall
SEditableTextBox::FArguments::OnContextMenuOpening<STextEditTest>
          (FArguments *this,STextEditTest *param_1,pmf_ab462235 *param_2)

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
  
  uVar1 = *(undefined8 *)param_2;
  uVar2 = *(undefined8 *)&param_2->field_0x8;
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnContextMenuOpening,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->_OnContextMenuOpening).field_0x8;
  puVar6 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar6 != (undefined8 *)0x0) {
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
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedPtr_VSWidget___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    local_58.Object = local_68.Object;
    local_58.SharedReferenceCount.ReferenceController =
         local_68.SharedReferenceCount.ReferenceController;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar8;
    *puVar6 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSTextEditTest___00__A6A_AV__TSharedPtr_VSWidget___00__XZUFDefaultDelegateUserPolicy____V__6B_
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
  return this;
}

// OnCursorMoved<SRichTextEditTest> @ 14304e690

/* WARNING: Enum "Type": Some values do not have unique names */

FArguments * __thiscall
SMultiLineEditableTextBox::FArguments::OnCursorMoved<SRichTextEditTest>
          (FArguments *this,SRichTextEditTest *param_1,pmf_b9e212c2 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined8 *puVar6;
  TSharedRef<SWidget,1> *pTVar7;
  ulong64 uVar8;
  TSharedRef<SRichTextEditTest,1> local_68;
  TSharedPtr<SRichTextEditTest,1> local_58;
  TSharedRef<SWidget,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  uVar1 = *(undefined8 *)param_2;
  uVar2 = *(undefined8 *)&param_2->field_0x8;
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnCursorMoved,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->_OnCursorMoved).field_0x8;
  puVar6 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar6 != (undefined8 *)0x0) {
    pTVar7 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_48);
    local_68.Object = (SRichTextEditTest *)pTVar7->Object;
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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFTextLocation___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    local_58.Object = local_68.Object;
    local_58.SharedReferenceCount.ReferenceController =
         local_68.SharedReferenceCount.ReferenceController;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar8;
    *puVar6 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSRichTextEditTest___00__A6AXAEBUFTextLocation___ZUFDefaultDelegateUserPolicy____V__6B_
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
    TSharedPtr<SRichTextEditTest,1>::~TSharedPtr<SRichTextEditTest,1>(&local_58);
  }
  if (bVar4) {
    TSharedRef<SRichTextEditTest,1>::~TSharedRef<SRichTextEditTest,1>(&local_68);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return this;
}

// OnGenerateRow<SDocumentsTest> @ 14304e7f0

/* WARNING: Enum "Type": Some values do not have unique names */

FArguments * __thiscall
SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>::FArguments::OnGenerateRow<SDocumentsTest>
          (FArguments *this,SDocumentsTest *param_1,pmf_104ae464 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined8 *puVar6;
  TSharedRef<SWidget,1> *pTVar7;
  ulong64 uVar8;
  TSharedRef<SDocumentsTest,1> local_68;
  TSharedPtr<SDocumentsTest,1> local_58;
  TSharedRef<SWidget,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  uVar1 = *(undefined8 *)param_2;
  uVar2 = *(undefined8 *)&param_2->field_0x8;
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnGenerateRow,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->_OnGenerateRow).field_0x8;
  puVar6 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar6 != (undefined8 *)0x0) {
    pTVar7 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_48);
    local_68.Object = (SDocumentsTest *)pTVar7->Object;
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
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VITableRow___00__V__TSharedRef_UFDocumentInfo_SDocumentsTest___00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    local_58.Object = local_68.Object;
    local_58.SharedReferenceCount.ReferenceController =
         local_68.SharedReferenceCount.ReferenceController;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar8;
    *puVar6 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSDocumentsTest___00__A6A_AV__TSharedRef_VITableRow___00__V__TSharedRef_UFDocumentInfo_SDocumentsTest___00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
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
    TSharedPtr<SDocumentsTest,1>::~TSharedPtr<SDocumentsTest,1>(&local_58);
  }
  if (bVar4) {
    TSharedRef<SDocumentsTest,1>::~TSharedRef<SDocumentsTest,1>(&local_68);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return this;
}

// OnGenerateWidget<SRichTextEditTest> @ 14304e950

/* WARNING: Enum "Type": Some values do not have unique names */

FArguments * __thiscall
SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>::FArguments::OnGenerateWidget<SRichTextEditTest>
          (FArguments *this,SRichTextEditTest *param_1,pmf_de41996d *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined8 *puVar6;
  TSharedRef<SWidget,1> *pTVar7;
  ulong64 uVar8;
  TSharedRef<SRichTextEditTest,1> local_68;
  TSharedPtr<SRichTextEditTest,1> local_58;
  TSharedRef<SWidget,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  uVar1 = *(undefined8 *)param_2;
  uVar2 = *(undefined8 *)&param_2->field_0x8;
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnGenerateWidget,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->_OnGenerateWidget).field_0x8;
  puVar6 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar6 != (undefined8 *)0x0) {
    pTVar7 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_48);
    local_68.Object = (SRichTextEditTest *)pTVar7->Object;
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
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSWidget___00__V__TSharedPtr_UFFontFamily_FTextStyles___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    local_58.Object = local_68.Object;
    local_58.SharedReferenceCount.ReferenceController =
         local_68.SharedReferenceCount.ReferenceController;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar8;
    *puVar6 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSRichTextEditTest___00__A6A_AV__TSharedRef_VSWidget___00__V__TSharedPtr_UFFontFamily_FTextStyles___00___ZUFDefaultDelegateUserPolicy____V__6B_
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
    TSharedPtr<SRichTextEditTest,1>::~TSharedPtr<SRichTextEditTest,1>(&local_58);
  }
  if (bVar4) {
    TSharedRef<SRichTextEditTest,1>::~TSharedRef<SRichTextEditTest,1>(&local_68);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return this;
}

// OnGenerateWidget<SRichTextTest> @ 14304eab0

FArguments * __thiscall
SComboBox<TSharedPtr<FString,1>_>::FArguments::OnGenerateWidget<SRichTextTest>
          (FArguments *this,SRichTextTest *param_1,pmf_a3bd8490 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined8 *puVar6;
  TSharedRef<SWidget,1> *pTVar7;
  ulong64 uVar8;
  TSharedRef<SRichTextTest,1> local_68;
  TSharedPtr<SRichTextTest,1> local_58;
  TSharedRef<SWidget,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  uVar1 = *(undefined8 *)param_2;
  uVar2 = *(undefined8 *)&param_2->field_0x8;
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnGenerateWidget,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->_OnGenerateWidget).field_0x8;
  puVar6 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar6 != (undefined8 *)0x0) {
    pTVar7 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_48);
    local_68.Object = (SRichTextTest *)pTVar7->Object;
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
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSWidget___00__V__TSharedPtr_VFString___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    local_58.Object = local_68.Object;
    local_58.SharedReferenceCount.ReferenceController =
         local_68.SharedReferenceCount.ReferenceController;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar8;
    *puVar6 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSRichTextTest___00__A6A_AV__TSharedRef_VSWidget___00__V__TSharedPtr_VFString___00___ZUFDefaultDelegateUserPolicy____V__6B_
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
    TSharedPtr<SRichTextTest,1>::~TSharedPtr<SRichTextTest,1>(&local_58);
  }
  if (bVar4) {
    TSharedRef<SRichTextTest,1>::~TSharedRef<SRichTextTest,1>(&local_68);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return this;
}

// OnPaintHandler<SElementTesting> @ 14304ec10

FArguments * __thiscall
SCustomPaintWidget::FArguments::OnPaintHandler<SElementTesting>
          (FArguments *this,SElementTesting *param_1,pmf_9586dc1b *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined8 *puVar6;
  TSharedRef<SWidget,1> *pTVar7;
  ulong64 uVar8;
  TSharedRef<SElementTesting,1> local_68;
  TSharedPtr<SElementTesting,1> local_58;
  TSharedRef<SWidget,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  uVar1 = *(undefined8 *)param_2;
  uVar2 = *(undefined8 *)&param_2->field_0x8;
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnPaintHandler,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->_OnPaintHandler).field_0x8;
  puVar6 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar6 != (undefined8 *)0x0) {
    pTVar7 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_48);
    local_68.Object = (SElementTesting *)pTVar7->Object;
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
              ___7__TCommonDelegateInstanceState___A6AHAEBUFOnPaintHandlerParams___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    local_58.Object = local_68.Object;
    local_58.SharedReferenceCount.ReferenceController =
         local_68.SharedReferenceCount.ReferenceController;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar8;
    *puVar6 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSElementTesting___00__A6AHAEBUFOnPaintHandlerParams___ZUFDefaultDelegateUserPolicy____V__6B_
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
    TSharedPtr<SElementTesting,1>::~TSharedPtr<SElementTesting,1>(&local_58);
  }
  if (bVar4) {
    TSharedRef<SElementTesting,1>::~TSharedRef<SElementTesting,1>(&local_68);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return this;
}

// OnSelectionChanged<SRichTextEditTest> @ 14304ed70

/* WARNING: Enum "Type": Some values do not have unique names */

FArguments * __thiscall
SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>::FArguments::
OnSelectionChanged<SRichTextEditTest>
          (FArguments *this,SRichTextEditTest *param_1,pmf_3b51c06c *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined8 *puVar6;
  TSharedRef<SWidget,1> *pTVar7;
  ulong64 uVar8;
  TSharedRef<SRichTextEditTest,1> local_68;
  TSharedPtr<SRichTextEditTest,1> local_58;
  TSharedRef<SWidget,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  uVar1 = *(undefined8 *)param_2;
  uVar2 = *(undefined8 *)&param_2->field_0x8;
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnSelectionChanged,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->_OnSelectionChanged).field_0x8;
  puVar6 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar6 != (undefined8 *)0x0) {
    pTVar7 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_48);
    local_68.Object = (SRichTextEditTest *)pTVar7->Object;
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
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_UFFontFamily_FTextStyles___00__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    local_58.Object = local_68.Object;
    local_58.SharedReferenceCount.ReferenceController =
         local_68.SharedReferenceCount.ReferenceController;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar8;
    *puVar6 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSRichTextEditTest___00__A6AXV__TSharedPtr_UFFontFamily_FTextStyles___00__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
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
    TSharedPtr<SRichTextEditTest,1>::~TSharedPtr<SRichTextEditTest,1>(&local_58);
  }
  if (bVar4) {
    TSharedRef<SRichTextEditTest,1>::~TSharedRef<SRichTextEditTest,1>(&local_68);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return this;
}

// OnSelectionChanged<SRichTextTest> @ 14304eed0

FArguments * __thiscall
SComboBox<TSharedPtr<FString,1>_>::FArguments::OnSelectionChanged<SRichTextTest>
          (FArguments *this,SRichTextTest *param_1,pmf_d1bee55b *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined8 *puVar6;
  TSharedRef<SWidget,1> *pTVar7;
  ulong64 uVar8;
  TSharedRef<SRichTextTest,1> local_68;
  TSharedPtr<SRichTextTest,1> local_58;
  TSharedRef<SWidget,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  uVar1 = *(undefined8 *)param_2;
  uVar2 = *(undefined8 *)&param_2->field_0x8;
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnSelectionChanged,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->_OnSelectionChanged).field_0x8;
  puVar6 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar6 != (undefined8 *)0x0) {
    pTVar7 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_48);
    local_68.Object = (SRichTextTest *)pTVar7->Object;
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
              ___7__TBaseSPMethodDelegateInstance__0A_VSRichTextTest___00__A6AXV__TSharedPtr_VFString___00__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
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
    TSharedPtr<SRichTextTest,1>::~TSharedPtr<SRichTextTest,1>(&local_58);
  }
  if (bVar4) {
    TSharedRef<SRichTextTest,1>::~TSharedRef<SRichTextTest,1>(&local_68);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return this;
}

// OnTextChanged<SRichTextEditTest> @ 14304f030

/* WARNING: Enum "Type": Some values do not have unique names */

FArguments * __thiscall
SMultiLineEditableTextBox::FArguments::OnTextChanged<SRichTextEditTest>
          (FArguments *this,SRichTextEditTest *param_1,pmf_3b8787f2 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined8 *puVar6;
  TSharedRef<SWidget,1> *pTVar7;
  ulong64 uVar8;
  TSharedRef<SRichTextEditTest,1> local_68;
  TSharedPtr<SRichTextEditTest,1> local_58;
  TSharedRef<SWidget,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  uVar1 = *(undefined8 *)param_2;
  uVar2 = *(undefined8 *)&param_2->field_0x8;
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnTextChanged,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->_OnTextChanged).field_0x8;
  puVar6 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar6 != (undefined8 *)0x0) {
    pTVar7 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_48);
    local_68.Object = (SRichTextEditTest *)pTVar7->Object;
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
              ___7__TBaseSPMethodDelegateInstance__0A_VSRichTextEditTest___00__A6AXAEBVFText___ZUFDefaultDelegateUserPolicy____V__6B_
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
    TSharedPtr<SRichTextEditTest,1>::~TSharedPtr<SRichTextEditTest,1>(&local_58);
  }
  if (bVar4) {
    TSharedRef<SRichTextEditTest,1>::~TSharedRef<SRichTextEditTest,1>(&local_68);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return this;
}

// OnTextChanged<SRichTextTest> @ 14304f190

FArguments * __thiscall
SSearchBox::FArguments::OnTextChanged<SRichTextTest>
          (FArguments *this,SRichTextTest *param_1,pmf_18e9bfb0 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined8 *puVar6;
  TSharedRef<SWidget,1> *pTVar7;
  ulong64 uVar8;
  TSharedRef<SRichTextTest,1> local_68;
  TSharedPtr<SRichTextTest,1> local_58;
  TSharedRef<SWidget,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  uVar1 = *(undefined8 *)param_2;
  uVar2 = *(undefined8 *)&param_2->field_0x8;
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnTextChanged,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->_OnTextChanged).field_0x8;
  puVar6 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar6 != (undefined8 *)0x0) {
    pTVar7 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_48);
    local_68.Object = (SRichTextTest *)pTVar7->Object;
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
              ___7__TBaseSPMethodDelegateInstance__0A_VSRichTextTest___00__A6AXAEBVFText___ZUFDefaultDelegateUserPolicy____V__6B_
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
    TSharedPtr<SRichTextTest,1>::~TSharedPtr<SRichTextTest,1>(&local_58);
  }
  if (bVar4) {
    TSharedRef<SRichTextTest,1>::~TSharedRef<SRichTextTest,1>(&local_68);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return this;
}

// OnTextChanged<STextEditTest> @ 14304f2f0

/* WARNING: Enum "Type": Some values do not have unique names */

FArguments * __thiscall
SEditableTextBox::FArguments::OnTextChanged<STextEditTest>
          (FArguments *this,STextEditTest *param_1,pmf_8e34e566 *param_2)

{
  pmf_8e34e566 local_18;
  
  local_18._0_8_ = *(undefined8 *)param_2;
  local_18._8_8_ = *(undefined8 *)&param_2->field_0x8;
  TDelegateRegistration<void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>::
  BindSP<STextEditTest>
            ((TDelegateRegistration<void___cdecl(FText_const_&),FDefaultDelegateUserPolicy> *)
             &this->_OnTextChanged,param_1,&local_18);
  return this;
}

// OnTextChanged<STextEditTest> @ 14304f330

/* WARNING: Enum "Type": Some values do not have unique names */

FArguments * __thiscall
STextEntryPopup::FArguments::OnTextChanged<STextEditTest>
          (FArguments *this,STextEditTest *param_1,pmf_8e34e566 *param_2)

{
  pmf_8e34e566 local_18;
  
  local_18._0_8_ = *(undefined8 *)param_2;
  local_18._8_8_ = *(undefined8 *)&param_2->field_0x8;
  TDelegateRegistration<void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>::
  BindSP<STextEditTest>
            ((TDelegateRegistration<void___cdecl(FText_const_&),FDefaultDelegateUserPolicy> *)
             &this->_OnTextChanged,param_1,&local_18);
  return this;
}

// OnTextCommitted<SDynamicBrushTest> @ 14304f370

FArguments * __thiscall
SEditableTextBox::FArguments::OnTextCommitted<SDynamicBrushTest>
          (FArguments *this,SDynamicBrushTest *param_1,pmf_63de492c *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined8 *puVar6;
  TSharedRef<SWidget,1> *pTVar7;
  ulong64 uVar8;
  TSharedRef<SDynamicBrushTest,1> local_68;
  TSharedPtr<SDynamicBrushTest,1> local_58;
  TSharedRef<SWidget,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  uVar1 = *(undefined8 *)param_2;
  uVar2 = *(undefined8 *)&param_2->field_0x8;
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnTextCommitted,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->_OnTextCommitted).field_0x8;
  puVar6 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar6 != (undefined8 *)0x0) {
    pTVar7 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_48);
    local_68.Object = (SDynamicBrushTest *)pTVar7->Object;
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
              ___7__TBaseSPMethodDelegateInstance__0A_VSDynamicBrushTest___00__A6AXAEBVFText__W4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
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
    TSharedPtr<SDynamicBrushTest,1>::~TSharedPtr<SDynamicBrushTest,1>(&local_58);
  }
  if (bVar4) {
    TSharedRef<SDynamicBrushTest,1>::~TSharedRef<SDynamicBrushTest,1>(&local_68);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return this;
}

// OnTextCommitted<SMultiLineEditingTest> @ 14304f4d0

FArguments * __thiscall
SMultiLineEditableTextBox::FArguments::OnTextCommitted<SMultiLineEditingTest>
          (FArguments *this,SMultiLineEditingTest *param_1,pmf_5307bb7c *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined8 *puVar6;
  TSharedRef<SWidget,1> *pTVar7;
  ulong64 uVar8;
  TSharedRef<SMultiLineEditingTest,1> local_68;
  TSharedPtr<SMultiLineEditingTest,1> local_58;
  TSharedRef<SWidget,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  uVar1 = *(undefined8 *)param_2;
  uVar2 = *(undefined8 *)&param_2->field_0x8;
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnTextCommitted,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->_OnTextCommitted).field_0x8;
  puVar6 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar6 != (undefined8 *)0x0) {
    pTVar7 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_48);
    local_68.Object = (SMultiLineEditingTest *)pTVar7->Object;
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
              ___7__TBaseSPMethodDelegateInstance__0A_VSMultiLineEditingTest___00__A6AXAEBVFText__W4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
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
    TSharedPtr<SMultiLineEditingTest,1>::~TSharedPtr<SMultiLineEditingTest,1>(&local_58);
  }
  if (bVar4) {
    TSharedRef<SMultiLineEditingTest,1>::~TSharedRef<SMultiLineEditingTest,1>(&local_68);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return this;
}

// OnTextCommitted<SRichTextEditTest> @ 14304f630

/* WARNING: Enum "Type": Some values do not have unique names */

FArguments * __thiscall
SMultiLineEditableTextBox::FArguments::OnTextCommitted<SRichTextEditTest>
          (FArguments *this,SRichTextEditTest *param_1,pmf_f92091c4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined8 *puVar6;
  TSharedRef<SWidget,1> *pTVar7;
  ulong64 uVar8;
  TSharedRef<SRichTextEditTest,1> local_68;
  TSharedPtr<SRichTextEditTest,1> local_58;
  TSharedRef<SWidget,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  uVar1 = *(undefined8 *)param_2;
  uVar2 = *(undefined8 *)&param_2->field_0x8;
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnTextCommitted,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->_OnTextCommitted).field_0x8;
  puVar6 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar6 != (undefined8 *)0x0) {
    pTVar7 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_48);
    local_68.Object = (SRichTextEditTest *)pTVar7->Object;
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
              ___7__TBaseSPMethodDelegateInstance__0A_VSRichTextEditTest___00__A6AXAEBVFText__W4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
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
    TSharedPtr<SRichTextEditTest,1>::~TSharedPtr<SRichTextEditTest,1>(&local_58);
  }
  if (bVar4) {
    TSharedRef<SRichTextEditTest,1>::~TSharedRef<SRichTextEditTest,1>(&local_68);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return this;
}

// OnTextCommitted<STextEditTest> @ 14304f790

/* WARNING: Enum "Type": Some values do not have unique names */

FArguments * __thiscall
SInlineEditableTextBlock::FArguments::OnTextCommitted<STextEditTest>
          (FArguments *this,STextEditTest *param_1,pmf_a2378bc8 *param_2)

{
  pmf_a2378bc8 local_18;
  
  local_18._0_8_ = *(undefined8 *)param_2;
  local_18._8_8_ = *(undefined8 *)&param_2->field_0x8;
  TDelegateRegistration<void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
  ::BindSP<STextEditTest>(&this->_OnTextCommitted,param_1,&local_18);
  return this;
}

// OnTextCommitted<STextEditTest> @ 14304f7d0

/* WARNING: Enum "Type": Some values do not have unique names */

FArguments * __thiscall
STextEntryPopup::FArguments::OnTextCommitted<STextEditTest>
          (FArguments *this,STextEditTest *param_1,pmf_a2378bc8 *param_2)

{
  pmf_a2378bc8 local_18;
  
  local_18._0_8_ = *(undefined8 *)param_2;
  local_18._8_8_ = *(undefined8 *)&param_2->field_0x8;
  TDelegateRegistration<void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
  ::BindSP<STextEditTest>(&this->_OnTextCommitted,param_1,&local_18);
  return this;
}

// OnValueChanged<SAnimTest> @ 14304f810

FArguments * __thiscall
SSpinBox<float>::FArguments::OnValueChanged<SAnimTest>
          (FArguments *this,SAnimTest *param_1,pmf_4dbb4a0b *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined8 *puVar6;
  TSharedRef<SWidget,1> *pTVar7;
  ulong64 uVar8;
  TSharedRef<SAnimTest,1> local_68;
  TSharedPtr<SAnimTest,1> local_58;
  TSharedRef<SWidget,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  uVar1 = *(undefined8 *)param_2;
  uVar2 = *(undefined8 *)&param_2->field_0x8;
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnValueChanged,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->_OnValueChanged).field_0x8;
  puVar6 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar6 != (undefined8 *)0x0) {
    pTVar7 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_48);
    local_68.Object = (SAnimTest *)pTVar7->Object;
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
    *puVar6 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    local_58.Object = local_68.Object;
    local_58.SharedReferenceCount.ReferenceController =
         local_68.SharedReferenceCount.ReferenceController;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar8;
    *puVar6 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSAnimTest___00__A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_
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
    TSharedPtr<SAnimTest,1>::~TSharedPtr<SAnimTest,1>(&local_58);
  }
  if (bVar4) {
    TSharedRef<SAnimTest,1>::~TSharedRef<SAnimTest,1>(&local_68);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return this;
}

// OnValueChanged<SDPIScalingTest> @ 14304f970

FArguments * __thiscall
SSpinBox<float>::FArguments::OnValueChanged<SDPIScalingTest>
          (FArguments *this,SDPIScalingTest *param_1,pmf_7ce022c4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined8 *puVar6;
  TSharedRef<SWidget,1> *pTVar7;
  ulong64 uVar8;
  TSharedRef<SDPIScalingTest,1> local_68;
  TSharedPtr<SDPIScalingTest,1> local_58;
  TSharedRef<SWidget,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  uVar1 = *(undefined8 *)param_2;
  uVar2 = *(undefined8 *)&param_2->field_0x8;
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnValueChanged,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->_OnValueChanged).field_0x8;
  puVar6 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar6 != (undefined8 *)0x0) {
    pTVar7 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_48);
    local_68.Object = (SDPIScalingTest *)pTVar7->Object;
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
    *puVar6 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    local_58.Object = local_68.Object;
    local_58.SharedReferenceCount.ReferenceController =
         local_68.SharedReferenceCount.ReferenceController;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar8;
    *puVar6 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSDPIScalingTest___00__A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_
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
    TSharedPtr<SDPIScalingTest,1>::~TSharedPtr<SDPIScalingTest,1>(&local_58);
  }
  if (bVar4) {
    TSharedRef<SDPIScalingTest,1>::~TSharedRef<SDPIScalingTest,1>(&local_68);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return this;
}

// OnValueChanged<SElementTesting> @ 14304fad0

FArguments * __thiscall
SSpinBox<float>::FArguments::OnValueChanged<SElementTesting>
          (FArguments *this,SElementTesting *param_1,pmf_3bfb421c *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined8 *puVar6;
  TSharedRef<SWidget,1> *pTVar7;
  ulong64 uVar8;
  TSharedRef<SElementTesting,1> local_68;
  TSharedPtr<SElementTesting,1> local_58;
  TSharedRef<SWidget,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  uVar1 = *(undefined8 *)param_2;
  uVar2 = *(undefined8 *)&param_2->field_0x8;
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnValueChanged,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->_OnValueChanged).field_0x8;
  puVar6 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar6 != (undefined8 *)0x0) {
    pTVar7 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_48);
    local_68.Object = (SElementTesting *)pTVar7->Object;
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
    *puVar6 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    local_58.Object = local_68.Object;
    local_58.SharedReferenceCount.ReferenceController =
         local_68.SharedReferenceCount.ReferenceController;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar8;
    *puVar6 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSElementTesting___00__A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_
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
    TSharedPtr<SElementTesting,1>::~TSharedPtr<SElementTesting,1>(&local_58);
  }
  if (bVar4) {
    TSharedRef<SElementTesting,1>::~TSharedRef<SElementTesting,1>(&local_68);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return this;
}

// OnValueChanged<SFxTest> @ 14304fc30

FArguments * __thiscall
SSpinBox<float>::FArguments::OnValueChanged<SFxTest>
          (FArguments *this,SFxTest *param_1,pmf_e3f0b32c *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined8 *puVar6;
  TSharedRef<SWidget,1> *pTVar7;
  ulong64 uVar8;
  TSharedRef<SFxTest,1> local_68;
  TSharedPtr<SFxTest,1> local_58;
  TSharedRef<SWidget,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  uVar1 = *(undefined8 *)param_2;
  uVar2 = *(undefined8 *)&param_2->field_0x8;
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnValueChanged,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->_OnValueChanged).field_0x8;
  puVar6 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar6 != (undefined8 *)0x0) {
    pTVar7 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_48);
    local_68.Object = (SFxTest *)pTVar7->Object;
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
    *puVar6 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    local_58.Object = local_68.Object;
    local_58.SharedReferenceCount.ReferenceController =
         local_68.SharedReferenceCount.ReferenceController;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar8;
    *puVar6 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSFxTest___00__A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_
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
    TSharedPtr<SFxTest,1>::~TSharedPtr<SFxTest,1>(&local_58);
  }
  if (bVar4) {
    TSharedRef<SFxTest,1>::~TSharedRef<SFxTest,1>(&local_68);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return this;
}

// OnValueChanged<SRichTextTest> @ 14304fd90

FArguments * __thiscall
SSpinBox<float>::FArguments::OnValueChanged<SRichTextTest>
          (FArguments *this,SRichTextTest *param_1,pmf_a7f271a3 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined8 *puVar6;
  TSharedRef<SWidget,1> *pTVar7;
  ulong64 uVar8;
  TSharedRef<SRichTextTest,1> local_68;
  TSharedPtr<SRichTextTest,1> local_58;
  TSharedRef<SWidget,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  uVar1 = *(undefined8 *)param_2;
  uVar2 = *(undefined8 *)&param_2->field_0x8;
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnValueChanged,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->_OnValueChanged).field_0x8;
  puVar6 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar6 != (undefined8 *)0x0) {
    pTVar7 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_48);
    local_68.Object = (SRichTextTest *)pTVar7->Object;
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
    *puVar6 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    local_58.Object = local_68.Object;
    local_58.SharedReferenceCount.ReferenceController =
         local_68.SharedReferenceCount.ReferenceController;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar8;
    *puVar6 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSRichTextTest___00__A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_
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
    TSharedPtr<SRichTextTest,1>::~TSharedPtr<SRichTextTest,1>(&local_58);
  }
  if (bVar4) {
    TSharedRef<SRichTextTest,1>::~TSharedRef<SRichTextTest,1>(&local_68);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return this;
}

// OnValueChanged<SSplineTest> @ 14304fef0

/* WARNING: Enum "Type": Some values do not have unique names */

FArguments * __thiscall
SSpinBox<int>::FArguments::OnValueChanged<SSplineTest>
          (FArguments *this,SSplineTest *param_1,pmf_d17e78b6 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined8 *puVar6;
  TSharedRef<SWidget,1> *pTVar7;
  ulong64 uVar8;
  TSharedRef<SSplineTest,1> local_68;
  TSharedPtr<SSplineTest,1> local_58;
  TSharedRef<SWidget,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  uVar1 = *(undefined8 *)param_2;
  uVar2 = *(undefined8 *)&param_2->field_0x8;
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnValueChanged,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->_OnValueChanged).field_0x8;
  puVar6 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar6 != (undefined8 *)0x0) {
    pTVar7 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_48);
    local_68.Object = (SSplineTest *)pTVar7->Object;
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
    *puVar6 = &___7__TCommonDelegateInstanceState___A6AXH_ZUFDefaultDelegateUserPolicy____V__6B_;
    local_58.Object = local_68.Object;
    local_58.SharedReferenceCount.ReferenceController =
         local_68.SharedReferenceCount.ReferenceController;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar8;
    *puVar6 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSSplineTest___00__A6AXH_ZUFDefaultDelegateUserPolicy____V__6B_
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
    TSharedPtr<SSplineTest,1>::~TSharedPtr<SSplineTest,1>(&local_58);
  }
  if (bVar4) {
    TSharedRef<SSplineTest,1>::~TSharedRef<SSplineTest,1>(&local_68);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return this;
}

// OnValueChanged<SSplineTest> @ 143050050

/* WARNING: Enum "Type": Some values do not have unique names */

FArguments * __thiscall
SSpinBox<float>::FArguments::OnValueChanged<SSplineTest>
          (FArguments *this,SSplineTest *param_1,pmf_bb06ce0b *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined8 *puVar6;
  TSharedRef<SWidget,1> *pTVar7;
  ulong64 uVar8;
  TSharedRef<SSplineTest,1> local_68;
  TSharedPtr<SSplineTest,1> local_58;
  TSharedRef<SWidget,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  uVar1 = *(undefined8 *)param_2;
  uVar2 = *(undefined8 *)&param_2->field_0x8;
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnValueChanged,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->_OnValueChanged).field_0x8;
  puVar6 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar6 != (undefined8 *)0x0) {
    pTVar7 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_48);
    local_68.Object = (SSplineTest *)pTVar7->Object;
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
    *puVar6 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    local_58.Object = local_68.Object;
    local_58.SharedReferenceCount.ReferenceController =
         local_68.SharedReferenceCount.ReferenceController;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar8;
    *puVar6 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSSplineTest___00__A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_
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
    TSharedPtr<SSplineTest,1>::~TSharedPtr<SSplineTest,1>(&local_58);
  }
  if (bVar4) {
    TSharedRef<SSplineTest,1>::~TSharedRef<SSplineTest,1>(&local_68);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return this;
}

// OnValueCommitted<SRichTextEditTest> @ 1430505a0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FArguments * __thiscall
SNumericEntryBox<unsigned_short>::FArguments::OnValueCommitted<SRichTextEditTest>
          (FArguments *this,SRichTextEditTest *param_1,pmf_17d67a20 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined8 *puVar6;
  TSharedRef<SWidget,1> *pTVar7;
  ulong64 uVar8;
  TSharedRef<SRichTextEditTest,1> local_68;
  TSharedPtr<SRichTextEditTest,1> local_58;
  TSharedRef<SWidget,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  uVar1 = *(undefined8 *)param_2;
  uVar2 = *(undefined8 *)&param_2->field_0x8;
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnValueCommitted,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->_OnValueCommitted).field_0x8;
  puVar6 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar6 != (undefined8 *)0x0) {
    pTVar7 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_48);
    local_68.Object = (SRichTextEditTest *)pTVar7->Object;
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
              ___7__TCommonDelegateInstanceState___A6AXGW4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    local_58.Object = local_68.Object;
    local_58.SharedReferenceCount.ReferenceController =
         local_68.SharedReferenceCount.ReferenceController;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar8;
    *puVar6 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSRichTextEditTest___00__A6AXGW4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
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
    TSharedPtr<SRichTextEditTest,1>::~TSharedPtr<SRichTextEditTest,1>(&local_58);
  }
  if (bVar4) {
    TSharedRef<SRichTextEditTest,1>::~TSharedRef<SRichTextEditTest,1>(&local_68);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return this;
}

// RenderScale<SFxTest> @ 143050de0

FArguments * __thiscall
SFxWidget::FArguments::RenderScale<SFxTest>(FArguments *this,SFxTest *param_1,pmf_2c29edee *param_2)

{
  pmf_2c29edee local_18;
  
  local_18._0_8_ = *(undefined8 *)param_2;
  local_18._8_8_ = *(undefined8 *)&param_2->field_0x8;
  TAttribute<float>::Bind<SFxTest>(&this->_RenderScale,param_1,&local_18);
  return this;
}

// RenderScaleOrigin<SFxTest> @ 143050e20

FArguments * __thiscall
SFxWidget::FArguments::RenderScaleOrigin<SFxTest>
          (FArguments *this,SFxTest *param_1,pmf_8a5f2fc3 *param_2)

{
  pmf_8a5f2fc3 local_18;
  
  local_18._0_8_ = *(undefined8 *)param_2;
  local_18._8_8_ = *(undefined8 *)&param_2->field_0x8;
  TAttribute<UE::Math::TVector2<double>_>::Bind<SFxTest>
            (&this->_RenderScaleOrigin,param_1,&local_18);
  return this;
}

// SplineThickness<SSplineTest> @ 143052be0

/* WARNING: Enum "Type": Some values do not have unique names */

FArguments * __thiscall
SSplineWithHandles::FArguments::SplineThickness<SSplineTest>
          (FArguments *this,SSplineTest *param_1,pmf_8517c7ef *param_2)

{
  pmf_8517c7ef local_18;
  
  local_18._0_8_ = *(undefined8 *)param_2;
  local_18._8_8_ = *(undefined8 *)&param_2->field_0x8;
  TAttribute<float>::Bind<SSplineTest>(&this->_SplineThickness,param_1,&local_18);
  return this;
}

// TargetColorAttribute<SColorPickerTest> @ 143052c20

/* WARNING: Enum "Type": Some values do not have unique names */

FArguments * __thiscall
SColorPicker::FArguments::TargetColorAttribute<SColorPickerTest>
          (FArguments *this,SColorPickerTest *param_1,pmf_f6964a22 *param_2)

{
  SWidget *pSVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 *puVar7;
  TSharedRef<SWidget_const_,1> *pTVar8;
  ulong64 uVar9;
  TReferenceControllerBase<1> *pTVar10;
  uint uStackX_c;
  TSharedRef<SWidget_const_,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  (this->_TargetColorAttribute).bIsSet = true;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &(this->_TargetColorAttribute).Getter,(FWriteAccessScope *)&local_38);
  local_20 = &(this->_TargetColorAttribute).Getter.field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
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
              ___7__TCommonDelegateInstanceState___A6A_AUFLinearColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSColorPickerTest___00__A6A_AUFLinearColor__XZUFDefaultDelegateUserPolicy____V__6B_
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
  return this;
}

// Text<SDynamicBrushTest> @ 143052d60

FArguments * __thiscall
SEditableTextBox::FArguments::Text<SDynamicBrushTest>
          (FArguments *this,SDynamicBrushTest *param_1,pmf_2283987e *param_2)

{
  SWidget *pSVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 *puVar7;
  TSharedRef<SWidget_const_,1> *pTVar8;
  ulong64 uVar9;
  TReferenceControllerBase<1> *pTVar10;
  uint uStackX_c;
  TSharedRef<SWidget_const_,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  (this->_Text).bIsSet = true;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(this->_Text).Getter,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->_Text).Getter.field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
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
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSDynamicBrushTest___00__A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
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
  return this;
}

// Text<SMultiLineEditingTest> @ 143052ea0

FArguments * __thiscall
SMultiLineEditableTextBox::FArguments::Text<SMultiLineEditingTest>
          (FArguments *this,SMultiLineEditingTest *param_1,pmf_64bfa12e *param_2)

{
  SWidget *pSVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 *puVar7;
  TSharedRef<SWidget_const_,1> *pTVar8;
  ulong64 uVar9;
  TReferenceControllerBase<1> *pTVar10;
  uint uStackX_c;
  TSharedRef<SWidget_const_,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  (this->_Text).bIsSet = true;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(this->_Text).Getter,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->_Text).Getter.field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
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
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSMultiLineEditingTest___00__A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
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
  return this;
}

// Text<SRichTextEditTest> @ 143052fe0

/* WARNING: Enum "Type": Some values do not have unique names */

FArguments * __thiscall
SMultiLineEditableTextBox::FArguments::Text<SRichTextEditTest>
          (FArguments *this,SRichTextEditTest *param_1,pmf_f4cef8e6 *param_2)

{
  pmf_f4cef8e6 local_18;
  
  local_18._0_8_ = *(undefined8 *)param_2;
  local_18._8_8_ = *(undefined8 *)&param_2->field_0x8;
  TAttribute<FText>::Bind<SRichTextEditTest>(&this->_Text,param_1,&local_18);
  return this;
}

// Text<SRichTextEditTest> @ 143053020

/* WARNING: Enum "Type": Some values do not have unique names */

FArguments * __thiscall
STextBlock::FArguments::Text<SRichTextEditTest>
          (FArguments *this,SRichTextEditTest *param_1,pmf_f4cef8e6 *param_2)

{
  pmf_f4cef8e6 local_18;
  
  local_18._0_8_ = *(undefined8 *)param_2;
  local_18._8_8_ = *(undefined8 *)&param_2->field_0x8;
  TAttribute<FText>::Bind<SRichTextEditTest>(&this->_Text,param_1,&local_18);
  return this;
}

// Text<SRichTextTest> @ 143053060

FArguments * __thiscall
STextBlock::FArguments::Text<SRichTextTest>
          (FArguments *this,SRichTextTest *param_1,pmf_dbec5810 *param_2)

{
  SWidget *pSVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 *puVar7;
  TSharedRef<SWidget_const_,1> *pTVar8;
  ulong64 uVar9;
  TReferenceControllerBase<1> *pTVar10;
  uint uStackX_c;
  TSharedRef<SWidget_const_,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  (this->_Text).bIsSet = true;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(this->_Text).Getter,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->_Text).Getter.field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
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
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSRichTextTest___00__A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
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
  return this;
}

// Value<SNumericEntryBox<unsigned_short>_> @ 1430537e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FArguments * __thiscall
SSpinBox<unsigned_short>::FArguments::Value<SNumericEntryBox<unsigned_short>_>
          (FArguments *this,SNumericEntryBox<unsigned_short> *param_1,pmf_b917db44 *param_2)

{
  SWidget *pSVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 *puVar7;
  TSharedRef<SWidget_const_,1> *pTVar8;
  ulong64 uVar9;
  TReferenceControllerBase<1> *pTVar10;
  uint uStackX_c;
  TSharedRef<SWidget_const_,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  (this->_Value).bIsSet = true;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(this->_Value).Getter,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->_Value).Getter.field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
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
    *puVar7 = &___7__TCommonDelegateInstanceState___A6AGXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBV__SNumericEntryBox_G___00__A6AGXZUFDefaultDelegateUserPolicy____V__6B_
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
  return this;
}

// Value<SAnimTest> @ 143053920

FArguments * __thiscall
SSpinBox<float>::FArguments::Value<SAnimTest>
          (FArguments *this,SAnimTest *param_1,pmf_a1463baf *param_2)

{
  SWidget *pSVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 *puVar7;
  TSharedRef<SWidget_const_,1> *pTVar8;
  ulong64 uVar9;
  TReferenceControllerBase<1> *pTVar10;
  uint uStackX_c;
  TSharedRef<SWidget_const_,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  (this->_Value).bIsSet = true;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(this->_Value).Getter,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->_Value).Getter.field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
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
    *puVar7 = &___7__TCommonDelegateInstanceState___A6AMXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSAnimTest___00__A6AMXZUFDefaultDelegateUserPolicy____V__6B_
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
  return this;
}

// Value<SDPIScalingTest> @ 143053a60

FArguments * __thiscall
SSpinBox<float>::FArguments::Value<SDPIScalingTest>
          (FArguments *this,SDPIScalingTest *param_1,pmf_9906c656 *param_2)

{
  pmf_9906c656 local_18;
  
  local_18._0_8_ = *(undefined8 *)param_2;
  local_18._8_8_ = *(undefined8 *)&param_2->field_0x8;
  TAttribute<float>::Bind<SDPIScalingTest>(&this->_Value,param_1,&local_18);
  return this;
}

// Value<SElementTesting> @ 143053aa0

FArguments * __thiscall
SSpinBox<float>::FArguments::Value<SElementTesting>
          (FArguments *this,SElementTesting *param_1,pmf_162fa5fe *param_2)

{
  SWidget *pSVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 *puVar7;
  TSharedRef<SWidget_const_,1> *pTVar8;
  ulong64 uVar9;
  TReferenceControllerBase<1> *pTVar10;
  uint uStackX_c;
  TSharedRef<SWidget_const_,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  (this->_Value).bIsSet = true;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(this->_Value).Getter,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->_Value).Getter.field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
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
    *puVar7 = &___7__TCommonDelegateInstanceState___A6AMXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSElementTesting___00__A6AMXZUFDefaultDelegateUserPolicy____V__6B_
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
  return this;
}

// Value<SFxTest> @ 143053be0

FArguments * __thiscall
SSpinBox<float>::FArguments::Value<SFxTest>(FArguments *this,SFxTest *param_1,pmf_2c29edee *param_2)

{
  pmf_2c29edee local_18;
  
  local_18._0_8_ = *(undefined8 *)param_2;
  local_18._8_8_ = *(undefined8 *)&param_2->field_0x8;
  TAttribute<float>::Bind<SFxTest>(&this->_Value,param_1,&local_18);
  return this;
}

// Value<SRichTextEditTest> @ 143053c20

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FArguments * __thiscall
SNumericEntryBox<unsigned_short>::FArguments::Value<SRichTextEditTest>
          (FArguments *this,SRichTextEditTest *param_1,pmf_1a3cded7 *param_2)

{
  SWidget *pSVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 *puVar7;
  TSharedRef<SWidget_const_,1> *pTVar8;
  ulong64 uVar9;
  TReferenceControllerBase<1> *pTVar10;
  uint uStackX_c;
  TSharedRef<SWidget_const_,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  (this->_Value).bIsSet = true;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(this->_Value).Getter,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->_Value).Getter.field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
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
              ___7__TCommonDelegateInstanceState___A6A_AU__TOptional_G__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSRichTextEditTest___00__A6A_AU__TOptional_G__XZUFDefaultDelegateUserPolicy____V__6B_
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
  return this;
}

// Value<SRichTextTest> @ 143053d60

FArguments * __thiscall
SSpinBox<float>::FArguments::Value<SRichTextTest>
          (FArguments *this,SRichTextTest *param_1,pmf_b8350b97 *param_2)

{
  pmf_b8350b97 local_18;
  
  local_18._0_8_ = *(undefined8 *)param_2;
  local_18._8_8_ = *(undefined8 *)&param_2->field_0x8;
  TAttribute<float>::Bind<SRichTextTest>(&this->_Value,param_1,&local_18);
  return this;
}

// Value<SSplineTest> @ 143053da0

/* WARNING: Enum "Type": Some values do not have unique names */

FArguments * __thiscall
SSpinBox<float>::FArguments::Value<SSplineTest>
          (FArguments *this,SSplineTest *param_1,pmf_8517c7ef *param_2)

{
  pmf_8517c7ef local_18;
  
  local_18._0_8_ = *(undefined8 *)param_2;
  local_18._8_8_ = *(undefined8 *)&param_2->field_0x8;
  TAttribute<float>::Bind<SSplineTest>(&this->_Value,param_1,&local_18);
  return this;
}

// Value_Static<> @ 143053de0

FArguments * __thiscall
SSpinBox<float>::FArguments::Value_Static<>(FArguments *this,_func___cdecl_float *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FArguments *pFVar5;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  (this->_Value).bIsSet = true;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(this->_Value).Getter,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->_Value).Getter.field_0x8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AMXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &___7__TBaseStaticDelegateInstance___A6AMXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[3] = param_1;
    if (param_1 == (_func___cdecl_float *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("StaticFuncPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                         ,0x2e9,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FArguments *)(*pcVar1)();
        return pFVar5;
      }
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return this;
}

// VisualOffset<SFxTest> @ 143054120

FArguments * __thiscall
SFxWidget::FArguments::VisualOffset<SFxTest>
          (FArguments *this,SFxTest *param_1,pmf_8a5f2fc3 *param_2)

{
  pmf_8a5f2fc3 local_18;
  
  local_18._0_8_ = *(undefined8 *)param_2;
  local_18._8_8_ = *(undefined8 *)&param_2->field_0x8;
  TAttribute<UE::Math::TVector2<double>_>::Bind<SFxTest>(&this->_VisualOffset,param_1,&local_18);
  return this;
}

// WrapTextAt<SRichTextTest> @ 143054380

FArguments * __thiscall
SRichTextBlock::FArguments::WrapTextAt<SRichTextTest>
          (FArguments *this,SRichTextTest *param_1,pmf_b8350b97 *param_2)

{
  pmf_b8350b97 local_18;
  
  local_18._0_8_ = *(undefined8 *)param_2;
  local_18._8_8_ = *(undefined8 *)&param_2->field_0x8;
  TAttribute<float>::Bind<SRichTextTest>(&this->_WrapTextAt,param_1,&local_18);
  return this;
}

// FArguments @ 14305a350

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FArguments * __thiscall
SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>::FArguments::FArguments(FArguments *this)

{
  atomic<int> *paVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  FSharedReferencer<1> FVar8;
  ISlateStyle *pIVar9;
  FName *pFVar10;
  FComboBoxStyle *pFVar11;
  FTableRowStyle *pFVar12;
  FScrollBarStyle *pFVar13;
  FName local_res8;
  undefined4 local_18;
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  (this->_Content).Widget.Object = SNullWidget::NullWidget.Object;
  FVar8 = SNullWidget::NullWidget.SharedReferenceCount;
  (this->_Content).Widget.SharedReferenceCount.ReferenceController =
       SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
  if (FVar8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar8.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  pIVar9 = FAppStyle::Get();
  pFVar10 = ::FName::FName(&local_res8,"ComboBox");
  pFVar11 = (FComboBoxStyle *)
            (**(code **)((longlong)*pIVar9 + 0xa0))(pIVar9,FComboBoxStyle::TypeName,*pFVar10,0,1);
  if (pFVar11 == (FComboBoxStyle *)0x0) {
    pFVar11 = FComboBoxStyle::GetDefault();
  }
  this->_ComboBoxStyle = pFVar11;
  this->_ButtonStyle = (FButtonStyle *)0x0;
  pIVar9 = FAppStyle::Get();
  pFVar10 = ::FName::FName(&local_res8,"ComboBox.Row");
  pFVar12 = (FTableRowStyle *)
            (**(code **)((longlong)*pIVar9 + 0xa0))(pIVar9,FTableRowStyle::TypeName,*pFVar10,0,1);
  if (pFVar12 == (FTableRowStyle *)0x0) {
    pFVar12 = FTableRowStyle::GetDefault();
  }
  this->_ItemStyle = pFVar12;
  pIVar9 = FAppStyle::Get();
  pFVar10 = ::FName::FName(&local_res8,"ScrollBar");
  pFVar13 = (FScrollBarStyle *)
            (**(code **)((longlong)*pIVar9 + 0xa0))(pIVar9,FScrollBarStyle::TypeName,*pFVar10,0,1);
  if (pFVar13 == (FScrollBarStyle *)0x0) {
    pFVar13 = FScrollBarStyle::GetDefault();
  }
  this->_ScrollBarStyle = pFVar13;
  pFVar11 = this->_ComboBoxStyle;
  fVar2 = (pFVar11->ContentPadding).Left;
  fVar3 = (pFVar11->ContentPadding).Top;
  fVar4 = (pFVar11->ContentPadding).Right;
  fVar5 = (pFVar11->ContentPadding).Bottom;
  (this->_ContentPadding).bIsSet = true;
  (this->_ContentPadding).Value.Left = fVar2;
  (this->_ContentPadding).Value.Top = fVar3;
  (this->_ContentPadding).Value.Right = fVar4;
  (this->_ContentPadding).Value.Bottom = fVar5;
  *(undefined8 *)&(this->_ContentPadding).Getter.field_0x10 = 0;
  uVar7 = _UNK_15090c6d8;
  uVar6 = ___xmm_3f8000003f800000000000003f800000;
  *(undefined8 *)&(this->_ContentPadding).Getter = 0;
  *(undefined8 *)&(this->_ContentPadding).Getter.field_0x8 = 0;
  *(undefined8 *)&(this->_ForegroundColor).Value.SpecifiedColor.field0_0x0 = uVar6;
  *(undefined8 *)((longlong)&(this->_ForegroundColor).Value.SpecifiedColor.field0_0x0 + 8) = uVar7;
  local_18._0_1_ = (undefined1)4;
  local_18._1_1_ = (undefined1)(4 >> 8);
  (this->_ForegroundColor).Value.ColorUseRule = (undefined1)local_18;
  (this->_ForegroundColor).Value.ColorTableId = local_18._1_1_;
  *(undefined2 *)&(this->_ForegroundColor).Value.field_0x12 = local_18._2_2_;
  (this->_ForegroundColor).bIsSet = true;
  *(undefined8 *)&(this->_ForegroundColor).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_ForegroundColor).Getter = 0;
  *(undefined8 *)&(this->_ForegroundColor).Getter.field_0x8 = 0;
  (this->_OptionsSource_SharedObservableArray).Object =
       (TObservableArray<TSharedPtr<FTextStyles::FFontFamily,1>_> *)0x0;
  (this->_OptionsSource_SharedObservableArray).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->_OptionsSource_ArrayPointer =
       (TArray<TSharedPtr<FTextStyles::FFontFamily,1>,TSizedDefaultAllocator<32>_> *)0x0;
  this->_OptionsSource_ObservableArrayPointer =
       (TObservableArray<TSharedPtr<FTextStyles::FFontFamily,1>_> *)0x0;
  *(undefined8 *)&(this->_OnSelectionChanged).field_0x10 = 0;
  *(undefined8 *)&this->_OnSelectionChanged = 0;
  *(undefined8 *)&(this->_OnSelectionChanged).field_0x8 = 0;
  *(undefined8 *)&(this->_OnGenerateWidget).field_0x10 = 0;
  *(undefined8 *)&this->_OnGenerateWidget = 0;
  *(undefined8 *)&(this->_OnGenerateWidget).field_0x8 = 0;
  *(undefined8 *)&this->_OnComboBoxOpening = 0;
  *(undefined8 *)&(this->_OnComboBoxOpening).field_0x8 = 0;
  *(undefined4 *)&(this->_OnComboBoxOpening).field_0x10 = 0;
  (this->_CustomScrollbar).Object = (SScrollBar *)0x0;
  (this->_CustomScrollbar).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->_InitiallySelectedItem).Object = (FFontFamily *)0x0;
  (this->_InitiallySelectedItem).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->_Method).bIsSet = false;
  (this->_PressedSoundOverride).bIsSet = false;
  (this->_SelectionChangeSoundOverride).bIsSet = false;
  this->_MaxListHeight = 450.0;
  this->_HasDownArrow = true;
  this->_EnableGamepadNavigationMode = false;
  this->_IsFocusable = true;
  return this;
}

// FArguments @ 14305a5b0

FArguments * __thiscall
SComboRow<TSharedPtr<FTextStyles::FFontFamily,1>_>::FArguments::FArguments(FArguments *this)

{
  atomic<int> *paVar1;
  FSharedReferencer<1> FVar2;
  ISlateStyle *pIVar3;
  FName *pFVar4;
  FTableRowStyle *pFVar5;
  FName local_res8;
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  pIVar3 = FAppStyle::Get();
  pFVar4 = ::FName::FName(&local_res8,"ComboBox.Row");
  pFVar5 = (FTableRowStyle *)
           (**(code **)((longlong)*pIVar3 + 0xa0))(pIVar3,FTableRowStyle::TypeName,*pFVar4,0,1);
  if (pFVar5 == (FTableRowStyle *)0x0) {
    pFVar5 = FTableRowStyle::GetDefault();
  }
  this->_Style = pFVar5;
  (this->_Content).Widget.Object = SNullWidget::NullWidget.Object;
  FVar2 = SNullWidget::NullWidget.SharedReferenceCount;
  (this->_Content).Widget.SharedReferenceCount.ReferenceController =
       SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
  if (FVar2.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar2.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  (this->_Padding).bIsSet = true;
  (this->_Padding).Value.Left = 0.0;
  (this->_Padding).Value.Top = 0.0;
  (this->_Padding).Value.Right = 0.0;
  (this->_Padding).Value.Bottom = 0.0;
  *(undefined8 *)&(this->_Padding).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_Padding).Getter = 0;
  *(undefined8 *)&(this->_Padding).Getter.field_0x8 = 0;
  return this;
}

// FArguments @ 14305a670

FArguments * __thiscall
SListView<TSharedPtr<FTextStyles::FFontFamily,1>_>::FArguments::FArguments(FArguments *this)

{
  float fVar1;
  TConsoleVariableData<float> *pTVar2;
  bool bVar3;
  ISlateStyle *pIVar4;
  FName *pFVar5;
  FTableViewStyle *pFVar6;
  FScrollBarStyle *pFVar7;
  longlong lVar8;
  FName local_res8;
  FName local_res10;
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  pIVar4 = FAppStyle::Get();
  pFVar5 = ::FName::FName(&local_res8,"ListView");
  pFVar6 = (FTableViewStyle *)
           (**(code **)((longlong)*pIVar4 + 0xa0))(pIVar4,FTableViewStyle::TypeName,*pFVar5,0,1);
  if (pFVar6 == (FTableViewStyle *)0x0) {
    pFVar6 = FTableViewStyle::GetDefault();
  }
  this->_ListViewStyle = pFVar6;
  this->_bEnableShadowBoxStyle = false;
  *(undefined8 *)&(this->_OnGenerateRow).field_0x10 = 0;
  *(undefined8 *)&this->_OnGenerateRow = 0;
  *(undefined8 *)&(this->_OnGenerateRow).field_0x8 = 0;
  *(undefined8 *)&(this->_OnGeneratePinnedRow).field_0x10 = 0;
  *(undefined8 *)&this->_OnGeneratePinnedRow = 0;
  *(undefined8 *)&(this->_OnGeneratePinnedRow).field_0x8 = 0;
  *(undefined8 *)&(this->_OnRefreshRow).field_0x10 = 0;
  *(undefined8 *)&this->_OnRefreshRow = 0;
  *(undefined8 *)&(this->_OnRefreshRow).field_0x8 = 0;
  *(undefined8 *)&(this->_OnEntryInitialized).field_0x10 = 0;
  *(undefined8 *)&this->_OnEntryInitialized = 0;
  *(undefined8 *)&(this->_OnEntryInitialized).field_0x8 = 0;
  *(undefined8 *)&(this->_OnRowReleased).field_0x10 = 0;
  *(undefined8 *)&this->_OnRowReleased = 0;
  *(undefined8 *)&(this->_OnRowReleased).field_0x8 = 0;
  *(undefined8 *)&this->_OnListViewScrolled = 0;
  *(undefined8 *)&(this->_OnListViewScrolled).field_0x8 = 0;
  *(undefined4 *)&(this->_OnListViewScrolled).field_0x10 = 0;
  *(undefined8 *)&this->_OnItemScrolledIntoView = 0;
  *(undefined8 *)&(this->_OnItemScrolledIntoView).field_0x8 = 0;
  *(undefined4 *)&(this->_OnItemScrolledIntoView).field_0x10 = 0;
  *(undefined8 *)&this->_OnFinishedScrolling = 0;
  *(undefined8 *)&(this->_OnFinishedScrolling).field_0x8 = 0;
  *(undefined4 *)&(this->_OnFinishedScrolling).field_0x10 = 0;
  (this->_ListItemsSource_SharedObservableArray).Object =
       (TObservableArray<TSharedPtr<FTextStyles::FFontFamily,1>_> *)0x0;
  (this->_ListItemsSource_SharedObservableArray).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->_ItemHeight).Value = 0.0;
  (this->_ItemHeight).bIsSet = false;
  this->_ListItemsSource_ArrayPointer =
       (TArray<TSharedPtr<FTextStyles::FFontFamily,1>,TSizedDefaultAllocator<32>_> *)0x0;
  this->_ListItemsSource_ObservableArrayPointer =
       (TObservableArray<TSharedPtr<FTextStyles::FFontFamily,1>_> *)0x0;
  *(undefined8 *)&(this->_ItemHeight).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_ItemHeight).Getter = 0;
  *(undefined8 *)&(this->_ItemHeight).Getter.field_0x8 = 0;
  (this->_MaxPinnedItems).Value = 6;
  (this->_MaxPinnedItems).bIsSet = true;
  *(undefined8 *)&(this->_MaxPinnedItems).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_MaxPinnedItems).Getter = 0;
  *(undefined8 *)&(this->_MaxPinnedItems).Getter.field_0x8 = 0;
  *(undefined8 *)&(this->_OnContextMenuOpening).field_0x10 = 0;
  *(undefined8 *)&this->_OnContextMenuOpening = 0;
  *(undefined8 *)&(this->_OnContextMenuOpening).field_0x8 = 0;
  *(undefined8 *)&(this->_OnItemsRebuilt).field_0x10 = 0;
  *(undefined8 *)&this->_OnItemsRebuilt = 0;
  *(undefined8 *)&(this->_OnItemsRebuilt).field_0x8 = 0;
  *(undefined8 *)&(this->_OnMouseButtonClick).field_0x10 = 0;
  *(undefined8 *)&this->_OnMouseButtonClick = 0;
  *(undefined8 *)&(this->_OnMouseButtonClick).field_0x8 = 0;
  *(undefined8 *)&(this->_OnMouseButtonDoubleClick).field_0x10 = 0;
  *(undefined8 *)&this->_OnMouseButtonDoubleClick = 0;
  *(undefined8 *)&(this->_OnMouseButtonDoubleClick).field_0x8 = 0;
  *(undefined8 *)&(this->_OnSelectionChanged).field_0x10 = 0;
  *(undefined8 *)&this->_OnSelectionChanged = 0;
  *(undefined8 *)&(this->_OnSelectionChanged).field_0x8 = 0;
  *(undefined8 *)&(this->_OnIsSelectableOrNavigable).field_0x10 = 0;
  *(undefined8 *)&this->_OnIsSelectableOrNavigable = 0;
  *(undefined8 *)&(this->_OnIsSelectableOrNavigable).field_0x8 = 0;
  (this->_SelectionMode).Value = Multi;
  (this->_SelectionMode).bIsSet = true;
  *(undefined8 *)&(this->_SelectionMode).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_SelectionMode).Getter = 0;
  *(undefined8 *)&(this->_SelectionMode).Getter.field_0x8 = 0;
  (this->_HeaderRow).Object = (SHeaderRow *)0x0;
  (this->_HeaderRow).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_ExternalScrollbar).Object = (SScrollBar *)0x0;
  (this->_ExternalScrollbar).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->_FixedLineScrollOffset).bIsSet = false;
  (this->_ScrollbarVisibility).Value = (TEnumAsByte<EVisibility::Private>)0x19;
  (this->_ScrollbarVisibility).bIsSet = false;
  this->_ClearSelectionOnClick = true;
  this->_Orientation = Orient_Vertical;
  this->_EnableAnimatedScrolling = false;
  *(undefined8 *)&(this->_ScrollbarVisibility).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_ScrollbarVisibility).Getter = 0;
  *(undefined8 *)&(this->_ScrollbarVisibility).Getter.field_0x8 = 0;
  this->_ScrollbarDragFocusCause = Mouse;
  this->_AllowOverscroll = Yes;
  pIVar4 = FAppStyle::Get();
  pFVar5 = ::FName::FName(&local_res10,"ScrollBar");
  pFVar7 = (FScrollBarStyle *)
           (**(code **)((longlong)*pIVar4 + 0xa0))(pIVar4,FScrollBarStyle::TypeName,*pFVar5,0,1);
  if (pFVar7 == (FScrollBarStyle *)0x0) {
    pFVar7 = FScrollBarStyle::GetDefault();
  }
  this->_ScrollBarStyle = pFVar7;
  this->_PreventThrottling = false;
  pTVar2 = GlobalScrollAmount.Ref;
  this->_ConsumeMouseWheel = WhenScrollingPossible;
  bVar3 = IsInParallelGameThread();
  if (!bVar3) {
    bVar3 = IsInGameThread();
    lVar8 = 4;
    if (!bVar3) goto LAB_14305a95d;
  }
  lVar8 = 0;
LAB_14305a95d:
  fVar1 = *(float *)((longlong)pTVar2->ShadowedValue + lVar8);
  (this->_IsFocusable).Value = true;
  (this->_IsFocusable).bIsSet = true;
  this->_WheelScrollMultiplier = fVar1;
  this->_HandleSpacebarSelection = false;
  this->_NavigationScrollOffset = 0.5;
  (this->_ScrollBarPadding).Left = 0.0;
  this->_HandleGamepadEvents = true;
  this->_HandleDirectionalNavigation = true;
  *(undefined8 *)&(this->_IsFocusable).Getter.field_0x8 = 0;
  (this->_ScrollBarPadding).Top = 0.0;
  (this->_ScrollBarPadding).Right = 0.0;
  (this->_ScrollBarPadding).Bottom = 0.0;
  *(undefined8 *)&(this->_IsFocusable).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_IsFocusable).Getter = 0;
  this->_ReturnFocusToSelection = false;
  this->_ClearScrollVelocityOnSelection = true;
  *(undefined8 *)&(this->_OnItemToString_Debug).field_0x10 = 0;
  *(undefined8 *)&this->_OnItemToString_Debug = 0;
  *(undefined8 *)&(this->_OnItemToString_Debug).field_0x8 = 0;
  *(undefined8 *)&(this->_OnEnteredBadState).field_0x10 = 0;
  *(undefined8 *)&this->_OnEnteredBadState = 0;
  *(undefined8 *)&(this->_OnEnteredBadState).field_0x8 = 0;
  *(undefined8 *)&this->_OnKeyDownHandler = 0;
  *(undefined8 *)&(this->_OnKeyDownHandler).field_0x8 = 0;
  *(undefined4 *)&(this->_OnKeyDownHandler).field_0x10 = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 1;
  return this;
}

// FArguments @ 14305aa20

FArguments * __thiscall
SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>::FArguments::FArguments(FArguments *this)

{
  float fVar1;
  TConsoleVariableData<float> *pTVar2;
  bool bVar3;
  ISlateStyle *pIVar4;
  FName *pFVar5;
  FTableViewStyle *pFVar6;
  FScrollBarStyle *pFVar7;
  longlong lVar8;
  FName local_res8;
  FName local_res10;
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  pIVar4 = FAppStyle::Get();
  pFVar5 = ::FName::FName(&local_res8,"ListView");
  pFVar6 = (FTableViewStyle *)
           (**(code **)((longlong)*pIVar4 + 0xa0))(pIVar4,FTableViewStyle::TypeName,*pFVar5,0,1);
  if (pFVar6 == (FTableViewStyle *)0x0) {
    pFVar6 = FTableViewStyle::GetDefault();
  }
  this->_ListViewStyle = pFVar6;
  this->_bEnableShadowBoxStyle = false;
  *(undefined8 *)&(this->_OnGenerateRow).field_0x10 = 0;
  *(undefined8 *)&this->_OnGenerateRow = 0;
  *(undefined8 *)&(this->_OnGenerateRow).field_0x8 = 0;
  *(undefined8 *)&(this->_OnGeneratePinnedRow).field_0x10 = 0;
  *(undefined8 *)&this->_OnGeneratePinnedRow = 0;
  *(undefined8 *)&(this->_OnGeneratePinnedRow).field_0x8 = 0;
  *(undefined8 *)&(this->_OnRefreshRow).field_0x10 = 0;
  *(undefined8 *)&this->_OnRefreshRow = 0;
  *(undefined8 *)&(this->_OnRefreshRow).field_0x8 = 0;
  *(undefined8 *)&(this->_OnEntryInitialized).field_0x10 = 0;
  *(undefined8 *)&this->_OnEntryInitialized = 0;
  *(undefined8 *)&(this->_OnEntryInitialized).field_0x8 = 0;
  *(undefined8 *)&(this->_OnRowReleased).field_0x10 = 0;
  *(undefined8 *)&this->_OnRowReleased = 0;
  *(undefined8 *)&(this->_OnRowReleased).field_0x8 = 0;
  *(undefined8 *)&this->_OnListViewScrolled = 0;
  *(undefined8 *)&(this->_OnListViewScrolled).field_0x8 = 0;
  *(undefined4 *)&(this->_OnListViewScrolled).field_0x10 = 0;
  *(undefined8 *)&this->_OnItemScrolledIntoView = 0;
  *(undefined8 *)&(this->_OnItemScrolledIntoView).field_0x8 = 0;
  *(undefined4 *)&(this->_OnItemScrolledIntoView).field_0x10 = 0;
  *(undefined8 *)&this->_OnFinishedScrolling = 0;
  *(undefined8 *)&(this->_OnFinishedScrolling).field_0x8 = 0;
  *(undefined4 *)&(this->_OnFinishedScrolling).field_0x10 = 0;
  (this->_ListItemsSource_SharedObservableArray).Object =
       (TObservableArray<TSharedRef<SDocumentsTest::FDocumentInfo,1>_> *)0x0;
  (this->_ListItemsSource_SharedObservableArray).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->_ItemHeight).Value = 0.0;
  (this->_ItemHeight).bIsSet = false;
  this->_ListItemsSource_ArrayPointer =
       (TArray<TSharedRef<SDocumentsTest::FDocumentInfo,1>,TSizedDefaultAllocator<32>_> *)0x0;
  this->_ListItemsSource_ObservableArrayPointer =
       (TObservableArray<TSharedRef<SDocumentsTest::FDocumentInfo,1>_> *)0x0;
  *(undefined8 *)&(this->_ItemHeight).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_ItemHeight).Getter = 0;
  *(undefined8 *)&(this->_ItemHeight).Getter.field_0x8 = 0;
  (this->_MaxPinnedItems).Value = 6;
  (this->_MaxPinnedItems).bIsSet = true;
  *(undefined8 *)&(this->_MaxPinnedItems).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_MaxPinnedItems).Getter = 0;
  *(undefined8 *)&(this->_MaxPinnedItems).Getter.field_0x8 = 0;
  *(undefined8 *)&(this->_OnContextMenuOpening).field_0x10 = 0;
  *(undefined8 *)&this->_OnContextMenuOpening = 0;
  *(undefined8 *)&(this->_OnContextMenuOpening).field_0x8 = 0;
  *(undefined8 *)&(this->_OnItemsRebuilt).field_0x10 = 0;
  *(undefined8 *)&this->_OnItemsRebuilt = 0;
  *(undefined8 *)&(this->_OnItemsRebuilt).field_0x8 = 0;
  *(undefined8 *)&(this->_OnMouseButtonClick).field_0x10 = 0;
  *(undefined8 *)&this->_OnMouseButtonClick = 0;
  *(undefined8 *)&(this->_OnMouseButtonClick).field_0x8 = 0;
  *(undefined8 *)&(this->_OnMouseButtonDoubleClick).field_0x10 = 0;
  *(undefined8 *)&this->_OnMouseButtonDoubleClick = 0;
  *(undefined8 *)&(this->_OnMouseButtonDoubleClick).field_0x8 = 0;
  *(undefined8 *)&(this->_OnSelectionChanged).field_0x10 = 0;
  *(undefined8 *)&this->_OnSelectionChanged = 0;
  *(undefined8 *)&(this->_OnSelectionChanged).field_0x8 = 0;
  *(undefined8 *)&(this->_OnIsSelectableOrNavigable).field_0x10 = 0;
  *(undefined8 *)&this->_OnIsSelectableOrNavigable = 0;
  *(undefined8 *)&(this->_OnIsSelectableOrNavigable).field_0x8 = 0;
  (this->_SelectionMode).Value = Multi;
  (this->_SelectionMode).bIsSet = true;
  *(undefined8 *)&(this->_SelectionMode).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_SelectionMode).Getter = 0;
  *(undefined8 *)&(this->_SelectionMode).Getter.field_0x8 = 0;
  (this->_HeaderRow).Object = (SHeaderRow *)0x0;
  (this->_HeaderRow).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_ExternalScrollbar).Object = (SScrollBar *)0x0;
  (this->_ExternalScrollbar).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->_FixedLineScrollOffset).bIsSet = false;
  (this->_ScrollbarVisibility).Value = (TEnumAsByte<EVisibility::Private>)0x19;
  (this->_ScrollbarVisibility).bIsSet = false;
  this->_ClearSelectionOnClick = true;
  this->_Orientation = Orient_Vertical;
  this->_EnableAnimatedScrolling = false;
  *(undefined8 *)&(this->_ScrollbarVisibility).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_ScrollbarVisibility).Getter = 0;
  *(undefined8 *)&(this->_ScrollbarVisibility).Getter.field_0x8 = 0;
  this->_ScrollbarDragFocusCause = Mouse;
  this->_AllowOverscroll = Yes;
  pIVar4 = FAppStyle::Get();
  pFVar5 = ::FName::FName(&local_res10,"ScrollBar");
  pFVar7 = (FScrollBarStyle *)
           (**(code **)((longlong)*pIVar4 + 0xa0))(pIVar4,FScrollBarStyle::TypeName,*pFVar5,0,1);
  if (pFVar7 == (FScrollBarStyle *)0x0) {
    pFVar7 = FScrollBarStyle::GetDefault();
  }
  this->_ScrollBarStyle = pFVar7;
  this->_PreventThrottling = false;
  pTVar2 = GlobalScrollAmount.Ref;
  this->_ConsumeMouseWheel = WhenScrollingPossible;
  bVar3 = IsInParallelGameThread();
  if (!bVar3) {
    bVar3 = IsInGameThread();
    lVar8 = 4;
    if (!bVar3) goto LAB_14305ad0d;
  }
  lVar8 = 0;
LAB_14305ad0d:
  fVar1 = *(float *)((longlong)pTVar2->ShadowedValue + lVar8);
  (this->_IsFocusable).Value = true;
  (this->_IsFocusable).bIsSet = true;
  this->_WheelScrollMultiplier = fVar1;
  this->_HandleSpacebarSelection = false;
  this->_NavigationScrollOffset = 0.5;
  (this->_ScrollBarPadding).Left = 0.0;
  this->_HandleGamepadEvents = true;
  this->_HandleDirectionalNavigation = true;
  *(undefined8 *)&(this->_IsFocusable).Getter.field_0x8 = 0;
  (this->_ScrollBarPadding).Top = 0.0;
  (this->_ScrollBarPadding).Right = 0.0;
  (this->_ScrollBarPadding).Bottom = 0.0;
  *(undefined8 *)&(this->_IsFocusable).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_IsFocusable).Getter = 0;
  this->_ReturnFocusToSelection = false;
  this->_ClearScrollVelocityOnSelection = true;
  *(undefined8 *)&(this->_OnItemToString_Debug).field_0x10 = 0;
  *(undefined8 *)&this->_OnItemToString_Debug = 0;
  *(undefined8 *)&(this->_OnItemToString_Debug).field_0x8 = 0;
  *(undefined8 *)&(this->_OnEnteredBadState).field_0x10 = 0;
  *(undefined8 *)&this->_OnEnteredBadState = 0;
  *(undefined8 *)&(this->_OnEnteredBadState).field_0x8 = 0;
  *(undefined8 *)&this->_OnKeyDownHandler = 0;
  *(undefined8 *)&(this->_OnKeyDownHandler).field_0x8 = 0;
  *(undefined4 *)&(this->_OnKeyDownHandler).field_0x10 = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 1;
  return this;
}

// FArguments @ 14305add0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FArguments * __thiscall SNumericEntryBox<unsigned_short>::FArguments::FArguments(FArguments *this)

{
  atomic<int> *paVar1;
  undefined8 uVar2;
  EStyleColor EVar3;
  undefined2 uVar4;
  FLinearColor FVar5;
  FSharedReferencer<1> FVar6;
  TRefCountPtr<ITextData> TVar7;
  ISlateStyle *pIVar8;
  FName *pFVar9;
  FEditableTextBoxStyle *pFVar10;
  FSpinBoxStyle *pFVar11;
  FName local_res8;
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  pIVar8 = FAppStyle::Get();
  pFVar9 = ::FName::FName(&local_res8,"NormalEditableTextBox");
  pFVar10 = (FEditableTextBoxStyle *)
            (**(code **)((longlong)*pIVar8 + 0xa0))
                      (pIVar8,FEditableTextBoxStyle::TypeName,*pFVar9,0,1);
  if (pFVar10 == (FEditableTextBoxStyle *)0x0) {
    pFVar10 = FEditableTextBoxStyle::GetDefault();
  }
  this->_EditableTextBoxStyle = pFVar10;
  pIVar8 = FAppStyle::Get();
  pFVar9 = ::FName::FName(&local_res8,"NumericEntrySpinBox");
  pFVar11 = (FSpinBoxStyle *)
            (**(code **)((longlong)*pIVar8 + 0xa0))(pIVar8,FSpinBoxStyle::TypeName,*pFVar9,0,1);
  if (pFVar11 == (FSpinBoxStyle *)0x0) {
    pFVar11 = FSpinBoxStyle::GetDefault();
  }
  this->_SpinBoxStyle = pFVar11;
  (this->_Label).Widget.Object = SNullWidget::NullWidget.Object;
  FVar6 = SNullWidget::NullWidget.SharedReferenceCount;
  (this->_Label).Widget.SharedReferenceCount.ReferenceController =
       SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
  if (FVar6.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar6.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  (this->_Justification).bIsSet = true;
  (this->_Justification).Value = Left;
  this->_LabelVAlign = VAlign_Fill;
  *(undefined8 *)&(this->_Justification).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_Justification).Getter = 0;
  *(undefined8 *)&(this->_Justification).Getter.field_0x8 = 0;
  this->_LabelLocation = Outside;
  (this->_LabelPadding).Left = 3.0;
  (this->_LabelPadding).Top = 0.0;
  (this->_LabelPadding).Right = 3.0;
  (this->_LabelPadding).Bottom = 0.0;
  pIVar8 = FAppStyle::Get();
  pFVar9 = ::FName::FName(&local_res8,"NumericEntrySpinBox");
  pFVar11 = (FSpinBoxStyle *)
            (**(code **)((longlong)*pIVar8 + 0xa0))(pIVar8,FSpinBoxStyle::TypeName,*pFVar9,0,1);
  if (pFVar11 == (FSpinBoxStyle *)0x0) {
    pFVar11 = FSpinBoxStyle::GetDefault();
  }
  uVar2 = *(undefined8 *)((longlong)&(pFVar11->ForegroundColor).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->_BorderForegroundColor).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(pFVar11->ForegroundColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->_BorderForegroundColor).SpecifiedColor.field0_0x0 + 8) = uVar2;
  EVar3 = (pFVar11->ForegroundColor).ColorTableId;
  uVar4 = *(undefined2 *)&(pFVar11->ForegroundColor).field_0x12;
  (this->_BorderForegroundColor).ColorUseRule = (pFVar11->ForegroundColor).ColorUseRule;
  FVar5 = FLinearColor::White;
  (this->_BorderForegroundColor).ColorTableId = EVar3;
  *(undefined2 *)&(this->_BorderForegroundColor).field_0x12 = uVar4;
  (this->_BorderBackgroundColor).ColorUseRule = UseColor_Specified;
  (this->_BorderBackgroundColor).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FVar5.field0_0x0;
  (this->_Value).Value.bIsSet = false;
  (this->_Value).bIsSet = false;
  *(undefined8 *)&(this->_Value).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_Value).Getter = 0;
  *(undefined8 *)&(this->_Value).Getter.field_0x8 = 0;
  (this->_UndeterminedString).TextData.Reference = (ITextData *)0x0;
  TVar7 = DefaultUndeterminedString.TextData;
  (this->_UndeterminedString).TextData.Reference = DefaultUndeterminedString.TextData.Reference;
  if (TVar7.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar7.Reference + 8))(TVar7.Reference,&local_res8);
  }
  (this->_UndeterminedString).Flags = DefaultUndeterminedString.Flags;
  FSlateFontInfo::FSlateFontInfo(&(this->_Font).Value);
  (this->_Font).bIsSet = false;
  *(undefined8 *)&(this->_Font).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_Font).Getter = 0;
  *(undefined8 *)&(this->_Font).Getter.field_0x8 = 0;
  this->_AllowSpin = false;
  (this->_ShiftMouseMovePixelPerDelta).Value = 0;
  (this->_ShiftMouseMovePixelPerDelta).bIsSet = false;
  *(undefined8 *)&(this->_ShiftMouseMovePixelPerDelta).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_ShiftMouseMovePixelPerDelta).Getter = 0;
  *(undefined8 *)&(this->_ShiftMouseMovePixelPerDelta).Getter.field_0x8 = 0;
  (this->_ShiftMultiplier).Value = 10.0;
  (this->_ShiftMultiplier).bIsSet = true;
  *(undefined8 *)&(this->_ShiftMultiplier).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_ShiftMultiplier).Getter = 0;
  *(undefined8 *)&(this->_ShiftMultiplier).Getter.field_0x8 = 0;
  (this->_CtrlMultiplier).Value = 0.1;
  (this->_CtrlMultiplier).bIsSet = true;
  *(undefined8 *)&(this->_CtrlMultiplier).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_CtrlMultiplier).Getter = 0;
  *(undefined8 *)&(this->_CtrlMultiplier).Getter.field_0x8 = 0;
  (this->_LinearDeltaSensitivity).Value = 0;
  (this->_LinearDeltaSensitivity).bIsSet = false;
  *(undefined8 *)&(this->_LinearDeltaSensitivity).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_LinearDeltaSensitivity).Getter = 0;
  *(undefined8 *)&(this->_LinearDeltaSensitivity).Getter.field_0x8 = 0;
  (this->_SupportDynamicSliderMaxValue).Value = false;
  (this->_SupportDynamicSliderMaxValue).bIsSet = true;
  *(undefined8 *)&(this->_SupportDynamicSliderMaxValue).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_SupportDynamicSliderMaxValue).Getter = 0;
  *(undefined8 *)&(this->_SupportDynamicSliderMaxValue).Getter.field_0x8 = 0;
  (this->_SupportDynamicSliderMinValue).Value = false;
  (this->_SupportDynamicSliderMinValue).bIsSet = true;
  *(undefined8 *)&(this->_SupportDynamicSliderMinValue).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_SupportDynamicSliderMinValue).Getter = 0;
  *(undefined8 *)&(this->_SupportDynamicSliderMinValue).Getter.field_0x8 = 0;
  *(undefined8 *)&this->_OnDynamicSliderMaxValueChanged = 0;
  *(undefined8 *)&(this->_OnDynamicSliderMaxValueChanged).field_0x8 = 0;
  *(undefined4 *)&(this->_OnDynamicSliderMaxValueChanged).field_0x10 = 0;
  *(undefined8 *)&this->_OnDynamicSliderMinValueChanged = 0;
  *(undefined8 *)&(this->_OnDynamicSliderMinValueChanged).field_0x8 = 0;
  *(undefined4 *)&(this->_OnDynamicSliderMinValueChanged).field_0x10 = 0;
  (this->_Delta).Value = 0;
  (this->_Delta).bIsSet = true;
  *(undefined8 *)&(this->_Delta).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_Delta).Getter = 0;
  *(undefined8 *)&(this->_Delta).Getter.field_0x8 = 0;
  (this->_MinFractionalDigits).Value.TypedValue = 1;
  (this->_MinFractionalDigits).Value.bIsSet = true;
  (this->_MinFractionalDigits).bIsSet = true;
  *(undefined8 *)&(this->_MinFractionalDigits).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_MinFractionalDigits).Getter = 0;
  *(undefined8 *)&(this->_MinFractionalDigits).Getter.field_0x8 = 0;
  (this->_MaxFractionalDigits).Value.TypedValue = 6;
  (this->_MaxFractionalDigits).Value.bIsSet = true;
  (this->_MaxFractionalDigits).bIsSet = true;
  *(undefined8 *)&(this->_MaxFractionalDigits).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_MaxFractionalDigits).Getter = 0;
  *(undefined8 *)&(this->_MaxFractionalDigits).Getter.field_0x8 = 0;
  (this->_MinValue).Value.TypedValue = 0;
  (this->_MinValue).Value.bIsSet = true;
  (this->_MinValue).bIsSet = true;
  *(undefined8 *)&(this->_MinValue).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_MinValue).Getter = 0;
  *(undefined8 *)&(this->_MinValue).Getter.field_0x8 = 0;
  (this->_MaxValue).Value.TypedValue = 0xffff;
  (this->_MaxValue).Value.bIsSet = true;
  (this->_MaxValue).bIsSet = true;
  *(undefined8 *)&(this->_MaxValue).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_MaxValue).Getter = 0;
  *(undefined8 *)&(this->_MaxValue).Getter.field_0x8 = 0;
  (this->_MinSliderValue).Value.TypedValue = 0;
  (this->_MinSliderValue).Value.bIsSet = true;
  (this->_MinSliderValue).bIsSet = true;
  *(undefined8 *)&(this->_MinSliderValue).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_MinSliderValue).Getter = 0;
  *(undefined8 *)&(this->_MinSliderValue).Getter.field_0x8 = 0;
  (this->_MaxSliderValue).Value.TypedValue = 100;
  (this->_MaxSliderValue).Value.bIsSet = true;
  (this->_MaxSliderValue).bIsSet = true;
  *(undefined8 *)&(this->_MaxSliderValue).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_MaxSliderValue).Getter = 0;
  *(undefined8 *)&(this->_MaxSliderValue).Getter.field_0x8 = 0;
  (this->_SliderExponent).Value = 1.0;
  (this->_SliderExponent).bIsSet = true;
  *(undefined8 *)&(this->_SliderExponent).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_SliderExponent).Getter = 0;
  *(undefined8 *)&(this->_SliderExponent).Getter.field_0x8 = 0;
  (this->_SliderExponentNeutralValue).Value = 0;
  (this->_SliderExponentNeutralValue).bIsSet = false;
  *(undefined8 *)&(this->_SliderExponentNeutralValue).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_SliderExponentNeutralValue).Getter = 0;
  *(undefined8 *)&(this->_SliderExponentNeutralValue).Getter.field_0x8 = 0;
  (this->_WheelStep).Value.bIsSet = false;
  (this->_WheelStep).bIsSet = false;
  this->_BroadcastValueChangesPerKey = false;
  this->_AllowWheel = true;
  this->_PreventThrottling = false;
  *(undefined8 *)&(this->_WheelStep).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_WheelStep).Getter = 0;
  *(undefined8 *)&(this->_WheelStep).Getter.field_0x8 = 0;
  (this->_MinDesiredValueWidth).Value = 0.0;
  (this->_MinDesiredValueWidth).bIsSet = true;
  *(undefined8 *)&(this->_MinDesiredValueWidth).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_MinDesiredValueWidth).Getter = 0;
  *(undefined8 *)&(this->_MinDesiredValueWidth).Getter.field_0x8 = 0;
  (this->_OverrideTextMargin).bIsSet = false;
  *(undefined8 *)&(this->_OverrideTextMargin).Getter.field_0x8 = 0;
  (this->_OverrideTextMargin).Value.Left = 0.0;
  (this->_OverrideTextMargin).Value.Top = 0.0;
  (this->_OverrideTextMargin).Value.Right = 0.0;
  (this->_OverrideTextMargin).Value.Bottom = 0.0;
  *(undefined8 *)&(this->_OverrideTextMargin).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_OverrideTextMargin).Getter = 0;
  *(undefined8 *)&this->_OnValueChanged = 0;
  *(undefined4 *)&(this->_OnValueChanged).field_0x10 = 0;
  *(undefined8 *)&this->_OnValueCommitted = 0;
  *(undefined4 *)&(this->_OnValueCommitted).field_0x10 = 0;
  *(undefined8 *)&this->_OnUndeterminedValueChanged = 0;
  *(undefined4 *)&(this->_OnUndeterminedValueChanged).field_0x10 = 0;
  *(undefined8 *)&this->_OnUndeterminedValueCommitted = 0;
  *(undefined4 *)&(this->_OnUndeterminedValueCommitted).field_0x10 = 0;
  *(undefined8 *)&this->_OnBeginSliderMovement = 0;
  *(undefined4 *)&(this->_OnBeginSliderMovement).field_0x10 = 0;
  *(undefined8 *)&this->_OnEndSliderMovement = 0;
  *(undefined4 *)&(this->_OnEndSliderMovement).field_0x10 = 0;
  *(undefined8 *)&this->_ContextMenuExtender = 0;
  *(undefined4 *)&(this->_ContextMenuExtender).field_0x10 = 0;
  this->_DisplayToggle = false;
  (this->_ToggleChecked).Value = Checked;
  (this->_ToggleChecked).bIsSet = true;
  *(undefined8 *)&(this->_OnValueChanged).field_0x8 = 0;
  *(undefined8 *)&(this->_OnValueCommitted).field_0x8 = 0;
  *(undefined8 *)&(this->_OnUndeterminedValueChanged).field_0x8 = 0;
  *(undefined8 *)&(this->_OnUndeterminedValueCommitted).field_0x8 = 0;
  *(undefined8 *)&(this->_OnBeginSliderMovement).field_0x8 = 0;
  *(undefined8 *)&(this->_OnEndSliderMovement).field_0x8 = 0;
  *(undefined8 *)&(this->_ContextMenuExtender).field_0x8 = 0;
  (this->_TypeInterface).Object = (INumericTypeInterface<unsigned_short> *)0x0;
  (this->_TypeInterface).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&(this->_ToggleChecked).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_ToggleChecked).Getter = 0;
  *(undefined8 *)&(this->_ToggleChecked).Getter.field_0x8 = 0;
  *(undefined8 *)&this->_OnToggleChanged = 0;
  *(undefined8 *)&(this->_OnToggleChanged).field_0x8 = 0;
  *(undefined4 *)&(this->_OnToggleChanged).field_0x10 = 0;
  (this->_ToolTipTextFormat).Value.bIsSet = false;
  (this->_TogglePadding).Left = 1.0;
  (this->_TogglePadding).Top = 0.0;
  (this->_TogglePadding).Right = 1.0;
  (this->_TogglePadding).Bottom = 0.0;
  (this->_ToolTipTextFormat).bIsSet = true;
  *(undefined8 *)&(this->_ToolTipTextFormat).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_ToolTipTextFormat).Getter = 0;
  *(undefined8 *)&(this->_ToolTipTextFormat).Getter.field_0x8 = 0;
  return this;
}

// FArguments @ 14305b3f0

FArguments * __thiscall
STableRow<TSharedPtr<FTextStyles::FFontFamily,1>_>::FArguments::FArguments(FArguments *this)

{
  atomic<int> *paVar1;
  FSharedReferencer<1> FVar2;
  ISlateStyle *pIVar3;
  FName *pFVar4;
  FTableRowStyle *pFVar5;
  FName local_res8;
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  pIVar3 = FAppStyle::Get();
  pFVar4 = ::FName::FName(&local_res8,"TableView.Row");
  pFVar5 = (FTableRowStyle *)
           (**(code **)((longlong)*pIVar3 + 0xa0))(pIVar3,FTableRowStyle::TypeName,*pFVar4,0,1);
  if (pFVar5 == (FTableRowStyle *)0x0) {
    pFVar5 = FTableRowStyle::GetDefault();
  }
  this->_Style = pFVar5;
  pIVar3 = FAppStyle::Get();
  this->_ExpanderStyleSet = pIVar3;
  *(undefined8 *)&this->_OnCanAcceptDrop = 0;
  *(undefined8 *)&(this->_OnCanAcceptDrop).field_0x8 = 0;
  *(undefined4 *)&(this->_OnCanAcceptDrop).field_0x10 = 0;
  *(undefined8 *)&this->_OnAcceptDrop = 0;
  *(undefined8 *)&(this->_OnAcceptDrop).field_0x8 = 0;
  *(undefined4 *)&(this->_OnAcceptDrop).field_0x10 = 0;
  *(undefined8 *)&this->_OnPaintDropIndicator = 0;
  *(undefined8 *)&(this->_OnPaintDropIndicator).field_0x8 = 0;
  *(undefined4 *)&(this->_OnPaintDropIndicator).field_0x10 = 0;
  *(undefined8 *)&this->_OnDragDetected = 0;
  *(undefined8 *)&(this->_OnDragDetected).field_0x8 = 0;
  *(undefined4 *)&(this->_OnDragDetected).field_0x10 = 0;
  *(undefined8 *)&this->_OnDragEnter = 0;
  *(undefined8 *)&(this->_OnDragEnter).field_0x8 = 0;
  *(undefined4 *)&(this->_OnDragEnter).field_0x10 = 0;
  *(undefined8 *)&this->_OnDragLeave = 0;
  *(undefined8 *)&(this->_OnDragLeave).field_0x8 = 0;
  *(undefined4 *)&(this->_OnDragLeave).field_0x10 = 0;
  *(undefined8 *)&this->_OnDrop = 0;
  *(undefined8 *)&(this->_OnDrop).field_0x8 = 0;
  *(undefined4 *)&(this->_OnDrop).field_0x10 = 0;
  (this->_Padding).Value.Left = 0.0;
  (this->_Padding).Value.Top = 0.0;
  (this->_Padding).Value.Right = 0.0;
  (this->_Padding).Value.Bottom = 0.0;
  (this->_Padding).bIsSet = true;
  *(undefined8 *)&(this->_Padding).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_Padding).Getter = 0;
  *(undefined8 *)&(this->_Padding).Getter.field_0x8 = 0;
  this->_ShowSelection = true;
  this->_ShowWires = false;
  this->_bAllowPreselectedItemActivation = false;
  this->_SignalSelectionMode = Deferred;
  (this->_Content).Widget.Object = SNullWidget::NullWidget.Object;
  FVar2 = SNullWidget::NullWidget.SharedReferenceCount;
  (this->_Content).Widget.SharedReferenceCount.ReferenceController =
       SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
  if (FVar2.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar2.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  return this;
}

// FArguments @ 14305b560

FArguments * __thiscall
STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>::FArguments::FArguments(FArguments *this)

{
  atomic<int> *paVar1;
  FSharedReferencer<1> FVar2;
  ISlateStyle *pIVar3;
  FName *pFVar4;
  FTableRowStyle *pFVar5;
  FName local_res8;
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  pIVar3 = FAppStyle::Get();
  pFVar4 = ::FName::FName(&local_res8,"TableView.Row");
  pFVar5 = (FTableRowStyle *)
           (**(code **)((longlong)*pIVar3 + 0xa0))(pIVar3,FTableRowStyle::TypeName,*pFVar4,0,1);
  if (pFVar5 == (FTableRowStyle *)0x0) {
    pFVar5 = FTableRowStyle::GetDefault();
  }
  this->_Style = pFVar5;
  pIVar3 = FAppStyle::Get();
  this->_ExpanderStyleSet = pIVar3;
  *(undefined8 *)&this->_OnCanAcceptDrop = 0;
  *(undefined8 *)&(this->_OnCanAcceptDrop).field_0x8 = 0;
  *(undefined4 *)&(this->_OnCanAcceptDrop).field_0x10 = 0;
  *(undefined8 *)&this->_OnAcceptDrop = 0;
  *(undefined8 *)&(this->_OnAcceptDrop).field_0x8 = 0;
  *(undefined4 *)&(this->_OnAcceptDrop).field_0x10 = 0;
  *(undefined8 *)&this->_OnPaintDropIndicator = 0;
  *(undefined8 *)&(this->_OnPaintDropIndicator).field_0x8 = 0;
  *(undefined4 *)&(this->_OnPaintDropIndicator).field_0x10 = 0;
  *(undefined8 *)&this->_OnDragDetected = 0;
  *(undefined8 *)&(this->_OnDragDetected).field_0x8 = 0;
  *(undefined4 *)&(this->_OnDragDetected).field_0x10 = 0;
  *(undefined8 *)&this->_OnDragEnter = 0;
  *(undefined8 *)&(this->_OnDragEnter).field_0x8 = 0;
  *(undefined4 *)&(this->_OnDragEnter).field_0x10 = 0;
  *(undefined8 *)&this->_OnDragLeave = 0;
  *(undefined8 *)&(this->_OnDragLeave).field_0x8 = 0;
  *(undefined4 *)&(this->_OnDragLeave).field_0x10 = 0;
  *(undefined8 *)&this->_OnDrop = 0;
  *(undefined8 *)&(this->_OnDrop).field_0x8 = 0;
  *(undefined4 *)&(this->_OnDrop).field_0x10 = 0;
  (this->_Padding).Value.Left = 0.0;
  (this->_Padding).Value.Top = 0.0;
  (this->_Padding).Value.Right = 0.0;
  (this->_Padding).Value.Bottom = 0.0;
  (this->_Padding).bIsSet = true;
  *(undefined8 *)&(this->_Padding).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_Padding).Getter = 0;
  *(undefined8 *)&(this->_Padding).Getter.field_0x8 = 0;
  this->_ShowSelection = true;
  this->_ShowWires = false;
  this->_bAllowPreselectedItemActivation = false;
  this->_SignalSelectionMode = Deferred;
  (this->_Content).Widget.Object = SNullWidget::NullWidget.Object;
  FVar2 = SNullWidget::NullWidget.SharedReferenceCount;
  (this->_Content).Widget.SharedReferenceCount.ReferenceController =
       SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
  if (FVar2.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar2.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  return this;
}

// FArguments @ 14305b6d0

FArguments * __thiscall SAnimTest::FArguments::FArguments(FArguments *this)

{
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return this;
}

// FArguments @ 14305b700

FArguments * __thiscall SColorPickerTest::FArguments::FArguments(FArguments *this)

{
  FLinearColor_u_0 local_18;
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  local_18._s_0.R = __real_3f800000;
  local_18._s_0.G = __real_3f800000;
  local_18._s_0.B = __real_3f800000;
  local_18._s_0.A = __real_3f000000;
  TAttribute<FLinearColor>::TAttribute<FLinearColor>(&this->_Color,(FLinearColor *)&local_18._s_0);
  return this;
}

// FArguments @ 14305b790

FArguments * __thiscall SCustomPaintWidget::FArguments::FArguments(FArguments *this)

{
  longlong lVar1;
  TDelegate<int___cdecl(FOnPaintHandlerParams_const_&),FDefaultDelegateUserPolicy> *pTVar2;
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  pTVar2 = &this->_OnPaintHandler;
  for (lVar1 = 0x18; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(undefined1 *)pTVar2 = 0;
    pTVar2 = (TDelegate<int___cdecl(FOnPaintHandlerParams_const_&),FDefaultDelegateUserPolicy> *)
             &pTVar2->field_0x1;
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnPaintHandler);
  return this;
}

// FArguments @ 14305b7f0

FArguments * __thiscall SDPIScaler::FArguments::FArguments(FArguments *this)

{
  atomic<int> *paVar1;
  FSharedReferencer<1> FVar2;
  FDestructionSentinel local_48;
  uchar local_30;
  undefined1 local_2f;
  undefined1 local_28 [8];
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  (this->_DPIScale).Value = 1.0;
  (this->_DPIScale).bIsSet = true;
  *(undefined8 *)&(this->_DPIScale).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_DPIScale).Getter = 0;
  *(undefined8 *)&(this->_DPIScale).Getter.field_0x8 = 0;
  (this->_Content).Widget.Object = SNullWidget::NullWidget.Object;
  FVar2 = SNullWidget::NullWidget.SharedReferenceCount;
  (this->_Content).Widget.SharedReferenceCount.ReferenceController =
       SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
  if (FVar2.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar2.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  local_30 = (uchar)EVisibility::SelfHitTestInvisible.Value.Value;
  local_2f = 1;
  local_28 = (undefined1  [8])0x0;
  FStack_20.Data = (FScriptContainerElement *)0x0;
  local_18 = 0;
  *(TEnumAsByte<EVisibility::Private> *)&this->_padding_ =
       EVisibility::SelfHitTestInvisible.Value.Value;
  *(undefined1 *)((longlong)&this->_padding_ + 1) = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_28);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28,
             (FWriteAccessScope *)&local_48);
  if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
    local_18 = local_18 & 0xffffffff00000000;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  if (FStack_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_20.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_28);
  return this;
}

// FArguments @ 14305b920

FArguments * __thiscall SDPIScalingTest::FArguments::FArguments(FArguments *this)

{
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return this;
}

// FArguments @ 14305b950

FArguments * __thiscall SDocumentsTest::FArguments::FArguments(FArguments *this)

{
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return this;
}

// FArguments @ 14305b980

FArguments * __thiscall SDynamicBrushTest::FArguments::FArguments(FArguments *this)

{
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return this;
}

// FArguments @ 14305b9b0

FArguments * __thiscall SElementTesting::FArguments::FArguments(FArguments *this)

{
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return this;
}

// FArguments @ 14305b9e0

FArguments * __thiscall SFxTest::FArguments::FArguments(FArguments *this)

{
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return this;
}

// FArguments @ 14305ba10

FArguments * __thiscall SGammaTest::FArguments::FArguments(FArguments *this)

{
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return this;
}

// FArguments @ 14305ba40

FArguments * __thiscall SGlobalInvalidationTest::FArguments::FArguments(FArguments *this)

{
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return this;
}

// FArguments @ 14305ba70

FArguments * __thiscall SGridPanelTest::FArguments::FArguments(FArguments *this)

{
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return this;
}

// FArguments @ 14305baa0

FArguments * __thiscall SInvalidationPanel::FArguments::FArguments(FArguments *this)

{
  atomic<int> *paVar1;
  FSharedReferencer<1> FVar2;
  FDestructionSentinel local_48;
  uchar local_30;
  undefined1 local_2f;
  undefined1 local_28 [8];
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  (this->_Content).Widget.Object = SNullWidget::NullWidget.Object;
  FVar2 = SNullWidget::NullWidget.SharedReferenceCount;
  (this->_Content).Widget.SharedReferenceCount.ReferenceController =
       SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
  if (FVar2.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar2.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  local_2f = 1;
  (this->_DebugName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->_DebugName).Data.ArrayNum = 0;
  (this->_DebugName).Data.ArrayMax = 0;
  local_30 = (uchar)EVisibility::SelfHitTestInvisible.Value.Value;
  *(TEnumAsByte<EVisibility::Private> *)&this->_padding_ =
       EVisibility::SelfHitTestInvisible.Value.Value;
  local_28 = (undefined1  [8])0x0;
  FStack_20.Data = (FScriptContainerElement *)0x0;
  local_18 = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 1) = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_28);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28,
             (FWriteAccessScope *)&local_48);
  if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
    local_18 = local_18 & 0xffffffff00000000;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  if (FStack_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_20.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_28);
  return this;
}

// FArguments @ 14305bbb0

FArguments * __thiscall SInvalidationTest::FArguments::FArguments(FArguments *this)

{
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return this;
}

// FArguments @ 14305bbe0

FArguments * __thiscall SLayoutRoundingTest::FArguments::FArguments(FArguments *this)

{
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return this;
}

// FArguments @ 14305bc10

FArguments * __thiscall SMultiBoxTest::FArguments::FArguments(FArguments *this)

{
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return this;
}

// FArguments @ 14305bc40

FArguments * __thiscall SMultiLineEditingTest::FArguments::FArguments(FArguments *this)

{
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return this;
}

// FArguments @ 14305bc70

FArguments * __thiscall SNotificationListTest::FArguments::FArguments(FArguments *this)

{
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return this;
}

// FArguments @ 14305bca0

FArguments * __thiscall SRenderTransformManipulatorWidget::FArguments::FArguments(FArguments *this)

{
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return this;
}

// FArguments @ 14305bcd0

FArguments * __thiscall SResponsiveGridPanel::FArguments::FArguments(FArguments *this)

{
  FDestructionSentinel local_48;
  uchar local_30;
  undefined1 local_2f;
  undefined1 local_28 [8];
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  local_2f = 1;
  this->_ColumnGutter = 0.0;
  this->_RowGutter = 0.0;
  (this->_Slots).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->_Slots).ArrayNum = 0;
  (this->_Slots).ArrayMax = 0;
  (this->RowFillCoefficients).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RowFillCoefficients).ArrayNum = 0;
  (this->RowFillCoefficients).ArrayMax = 0;
  local_30 = (uchar)EVisibility::SelfHitTestInvisible.Value.Value;
  *(TEnumAsByte<EVisibility::Private> *)&this->_padding_ =
       EVisibility::SelfHitTestInvisible.Value.Value;
  local_28 = (undefined1  [8])0x0;
  FStack_20.Data = (FScriptContainerElement *)0x0;
  local_18 = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 1) = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_28);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28,
             (FWriteAccessScope *)&local_48);
  if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
    local_18 = local_18 & 0xffffffff00000000;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  if (FStack_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_20.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_28);
  return this;
}

// FArguments @ 14305bdd0

FArguments * __thiscall SResponsiveGridPanelTestWidget::FArguments::FArguments(FArguments *this)

{
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return this;
}

// FArguments @ 14305be00

FArguments * __thiscall SRichTextEditTest::FArguments::FArguments(FArguments *this)

{
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return this;
}

// FArguments @ 14305be30

FArguments * __thiscall SRichTextTest::FArguments::FArguments(FArguments *this)

{
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return this;
}

// FArguments @ 14305be60

FArguments * __thiscall SSplineTest::FArguments::FArguments(FArguments *this)

{
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  (this->_P0).field0_0x0._s_0.X = 0.0;
  (this->_P0).field0_0x0._s_0.Y = __real_42000000;
  (this->_P1).field0_0x0._s_0.X = __real_42c80000;
  (this->_P1).field0_0x0._s_0.Y = __real_42000000;
  (this->_P2).field0_0x0._s_0.X = 0.0;
  (this->_P2).field0_0x0._s_0.Y = __real_43040000;
  (this->_P3).field0_0x0._s_0.X = __real_42c80000;
  (this->_P3).field0_0x0._s_0.Y = __real_43040000;
  return this;
}

// FArguments @ 14305bf50

FArguments * __thiscall SSplineWithHandles::FArguments::FArguments(FArguments *this)

{
  float local_38 [2];
  TVector2<float> *local_30;
  TVector2<float> *local_28;
  TVector2<float> *local_20;
  TVector2<float> *local_18;
  TAttribute<float> *local_10;
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  local_30 = &this->_P0;
  (local_30->field0_0x0)._s_0.X = 0.0;
  (this->_P0).field0_0x0._s_0.Y = __real_42000000;
  local_28 = &this->_P1;
  (local_28->field0_0x0)._s_0.X = __real_42c80000;
  (this->_P1).field0_0x0._s_0.Y = __real_42000000;
  local_20 = &this->_P2;
  (local_20->field0_0x0)._s_0.X = 0.0;
  (this->_P2).field0_0x0._s_0.Y = __real_43040000;
  local_18 = &this->_P3;
  (local_18->field0_0x0)._s_0.X = __real_42c80000;
  (this->_P3).field0_0x0._s_0.Y = __real_43040000;
  local_10 = &this->_SplineThickness;
  local_38[0] = __real_3f800000;
  TAttribute<float>::TAttribute<float>(local_10,local_38);
  return this;
}

// FArguments @ 14305c070

FArguments * __thiscall SSplitterTest::FArguments::FArguments(FArguments *this)

{
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return this;
}

// FArguments @ 14305c0a0

FArguments * __thiscall STestNotificationWidget::FArguments::FArguments(FArguments *this)

{
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return this;
}

// FArguments @ 14305c0d0

FArguments * __thiscall STextEditTest::FArguments::FArguments(FArguments *this)

{
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return this;
}

// ~FArguments @ 143060630

void __thiscall
SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>::FArguments::~FArguments(FArguments *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&(this->_InitiallySelectedItem).SharedReferenceCount);
  TSharedPtr<SScrollBar,1>::~TSharedPtr<SScrollBar,1>(&this->_CustomScrollbar);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>(&this->_OnComboBoxOpening);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnGenerateWidget);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnSelectionChanged);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&(this->_OptionsSource_SharedObservableArray).SharedReferenceCount);
  TAttribute<FSlateColor>::~TAttribute<FSlateColor>(&this->_ForegroundColor);
  TAttribute<FMargin>::~TAttribute<FMargin>(&this->_ContentPadding);
  TAlwaysValidWidget::~TAlwaysValidWidget(&this->_Content);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return;
}

// ~FArguments @ 143060700

void __thiscall
SListView<TSharedPtr<FTextStyles::FFontFamily,1>_>::FArguments::~FArguments(FArguments *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnKeyDownHandler);
  pvVar1 = *(void **)&(this->_OnKeyDownHandler).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnKeyDownHandler);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnEnteredBadState);
  pvVar1 = *(void **)&(this->_OnEnteredBadState).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnEnteredBadState);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnItemToString_Debug);
  pvVar1 = *(void **)&(this->_OnItemToString_Debug).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnItemToString_Debug);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_IsFocusable).Getter);
  pvVar1 = *(void **)&(this->_IsFocusable).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_IsFocusable).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_ScrollbarVisibility).Getter);
  pvVar1 = *(void **)&(this->_ScrollbarVisibility).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_ScrollbarVisibility).Getter);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->_ExternalScrollbar).SharedReferenceCount.ReferenceController);
  TSharedPtr<SHeaderRow,1>::~TSharedPtr<SHeaderRow,1>(&this->_HeaderRow);
  TAttribute<enum_ESelectionMode::Type>::~TAttribute<enum_ESelectionMode::Type>
            (&this->_SelectionMode);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnIsSelectableOrNavigable);
  pvVar1 = *(void **)&(this->_OnIsSelectableOrNavigable).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnIsSelectableOrNavigable);
  TDelegate<void___cdecl(TSharedPtr<FTextStyles::FFontFamily,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
  ::
  ~TDelegate<void___cdecl(TSharedPtr<FTextStyles::FFontFamily,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
            (&this->_OnSelectionChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnMouseButtonDoubleClick);
  pvVar1 = *(void **)&(this->_OnMouseButtonDoubleClick).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnMouseButtonDoubleClick);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnMouseButtonClick);
  pvVar1 = *(void **)&(this->_OnMouseButtonClick).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnMouseButtonClick);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnItemsRebuilt);
  pvVar1 = *(void **)&(this->_OnItemsRebuilt).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnItemsRebuilt);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnContextMenuOpening);
  pvVar1 = *(void **)&(this->_OnContextMenuOpening).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnContextMenuOpening);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_MaxPinnedItems).Getter);
  pvVar1 = *(void **)&(this->_MaxPinnedItems).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_MaxPinnedItems).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_ItemHeight).Getter);
  pvVar1 = *(void **)&(this->_ItemHeight).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_ItemHeight).Getter);
  TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<FTextStyles::FFontFamily,1>_>,1>::
  ~TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<FTextStyles::FFontFamily,1>_>,1>
            (&this->_ListItemsSource_SharedObservableArray);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnFinishedScrolling);
  pvVar1 = *(void **)&(this->_OnFinishedScrolling).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnFinishedScrolling);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnItemScrolledIntoView);
  pvVar1 = *(void **)&(this->_OnItemScrolledIntoView).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnItemScrolledIntoView);
  TDelegate<void___cdecl(double),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(double),FDefaultDelegateUserPolicy>(&this->_OnListViewScrolled);
  TDelegate<void___cdecl(TSharedRef<ITableRow,1>_const_&),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(TSharedRef<ITableRow,1>_const_&),FDefaultDelegateUserPolicy>
            (&this->_OnRowReleased);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnEntryInitialized);
  pvVar1 = *(void **)&(this->_OnEntryInitialized).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnEntryInitialized);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnRefreshRow);
  pvVar1 = *(void **)&(this->_OnRefreshRow).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnRefreshRow);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnGeneratePinnedRow);
  pvVar1 = *(void **)&(this->_OnGeneratePinnedRow).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnGeneratePinnedRow);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnGenerateRow);
  pvVar1 = *(void **)&(this->_OnGenerateRow).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnGenerateRow);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return;
}

// ~FArguments @ 143060a60

void __thiscall
SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>::FArguments::~FArguments(FArguments *this)

{
  TDelegate<FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>::
  ~TDelegate<FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>
            (&this->_OnKeyDownHandler);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>(&this->_OnEnteredBadState);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnItemToString_Debug);
  TAttribute<bool>::~TAttribute<bool>(&this->_IsFocusable);
  TAttribute<EVisibility>::~TAttribute<EVisibility>(&this->_ScrollbarVisibility);
  TSharedPtr<SScrollBar,1>::~TSharedPtr<SScrollBar,1>(&this->_ExternalScrollbar);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&(this->_HeaderRow).SharedReferenceCount);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_SelectionMode).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnIsSelectableOrNavigable);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnSelectionChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnMouseButtonDoubleClick);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnMouseButtonClick);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>(&this->_OnItemsRebuilt);
  TDelegate<TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>::
  ~TDelegate<TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
            (&this->_OnContextMenuOpening);
  TAttribute<int>::~TAttribute<int>(&this->_MaxPinnedItems);
  TAttribute<float>::~TAttribute<float>(&this->_ItemHeight);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&(this->_ListItemsSource_SharedObservableArray).SharedReferenceCount);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>(&this->_OnFinishedScrolling);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnItemScrolledIntoView);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnListViewScrolled);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnRowReleased);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnEntryInitialized);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnRefreshRow);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnGeneratePinnedRow);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnGenerateRow);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return;
}

// ~FArguments @ 143060c70

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall SNumericEntryBox<unsigned_short>::FArguments::~FArguments(FArguments *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_ToolTipTextFormat).Getter);
  TOptional<FTextFormat>::~TOptional<FTextFormat>(&(this->_ToolTipTextFormat).Value);
  TDelegate<void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy>(&this->_OnToggleChanged);
  TAttribute<enum_ECheckBoxState>::~TAttribute<enum_ECheckBoxState>(&this->_ToggleChecked);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&(this->_TypeInterface).SharedReferenceCount);
  TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>(&this->_ContextMenuExtender);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnEndSliderMovement);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>(&this->_OnBeginSliderMovement);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnUndeterminedValueCommitted);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnUndeterminedValueChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnValueCommitted);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnValueChanged);
  TAttribute<FMargin>::~TAttribute<FMargin>(&this->_OverrideTextMargin);
  TAttribute<float>::~TAttribute<float>(&this->_MinDesiredValueWidth);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_WheelStep).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->_SliderExponentNeutralValue).Getter);
  TAttribute<float>::~TAttribute<float>(&this->_SliderExponent);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_MaxSliderValue).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_MinSliderValue).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_MaxValue).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_MinValue).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_MaxFractionalDigits).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_MinFractionalDigits).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Delta).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnDynamicSliderMinValueChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnDynamicSliderMaxValueChanged);
  TAttribute<bool>::~TAttribute<bool>(&this->_SupportDynamicSliderMinValue);
  TAttribute<bool>::~TAttribute<bool>(&this->_SupportDynamicSliderMaxValue);
  TAttribute<int>::~TAttribute<int>(&this->_LinearDeltaSensitivity);
  TAttribute<float>::~TAttribute<float>(&this->_CtrlMultiplier);
  TAttribute<float>::~TAttribute<float>(&this->_ShiftMultiplier);
  TAttribute<int>::~TAttribute<int>(&this->_ShiftMouseMovePixelPerDelta);
  TAttribute<FSlateFontInfo>::~TAttribute<FSlateFontInfo>(&this->_Font);
  FText::~FText(&this->_UndeterminedString);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Value).Getter);
  TAttribute<enum_ETextJustify::Type>::~TAttribute<enum_ETextJustify::Type>(&this->_Justification);
  TAlwaysValidWidget::~TAlwaysValidWidget(&this->_Label);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return;
}

// ~FArguments @ 143060f70

void __thiscall SSpinBox<unsigned_short>::FArguments::~FArguments(FArguments *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_ContextMenuExtender);
  pvVar1 = *(void **)&(this->_ContextMenuExtender).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_ContextMenuExtender);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_TypeInterface).Getter);
  pvVar1 = *(void **)&(this->_TypeInterface).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_TypeInterface).Getter);
  TSharedPtr<INumericTypeInterface<unsigned_short>,1>::
  ~TSharedPtr<INumericTypeInterface<unsigned_short>,1>(&(this->_TypeInterface).Value);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_KeyboardType).Getter);
  pvVar1 = *(void **)&(this->_KeyboardType).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_KeyboardType).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Justification).Getter);
  pvVar1 = *(void **)&(this->_Justification).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_Justification).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_MinDesiredWidth).Getter);
  pvVar1 = *(void **)&(this->_MinDesiredWidth).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_MinDesiredWidth).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_SelectAllTextOnCommit).Getter);
  pvVar1 = *(void **)&(this->_SelectAllTextOnCommit).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_SelectAllTextOnCommit).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->_ClearKeyboardFocusOnCommit).Getter);
  pvVar1 = *(void **)&(this->_ClearKeyboardFocusOnCommit).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_ClearKeyboardFocusOnCommit).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnEditEditableText);
  pvVar1 = *(void **)&(this->_OnEditEditableText).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnEditEditableText);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnGetDisplayValue);
  pvVar1 = *(void **)&(this->_OnGetDisplayValue).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnGetDisplayValue);
  TDelegate<void___cdecl(unsigned_short),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(unsigned_short),FDefaultDelegateUserPolicy>(&this->_OnEndSliderMovement);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnBeginSliderMovement);
  pvVar1 = *(void **)&(this->_OnBeginSliderMovement).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnBeginSliderMovement);
  TDelegate<void___cdecl(unsigned_short,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(unsigned_short,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
            (&this->_OnValueCommitted);
  TDelegate<void___cdecl(unsigned_short),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(unsigned_short),FDefaultDelegateUserPolicy>(&this->_OnValueChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_ContentPadding).Getter);
  pvVar1 = *(void **)&(this->_ContentPadding).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_ContentPadding).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Font).Getter);
  pvVar1 = *(void **)&(this->_Font).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_Font).Getter);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->_Font).Value.CompositeFont.SharedReferenceCount.ReferenceController);
  TAttribute<TOptional<unsigned_short>_>::~TAttribute<TOptional<unsigned_short>_>(&this->_WheelStep)
  ;
  TAttribute<unsigned_short>::~TAttribute<unsigned_short>(&this->_SliderExponentNeutralValue);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_SliderExponent).Getter);
  pvVar1 = *(void **)&(this->_SliderExponent).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_SliderExponent).Getter);
  TDelegate<void___cdecl(unsigned_short,TWeakPtr<SWidget,1>,bool,bool),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(unsigned_short,TWeakPtr<SWidget,1>,bool,bool),FDefaultDelegateUserPolicy>
            (&this->_OnDynamicSliderMinValueChanged);
  TDelegate<void___cdecl(unsigned_short,TWeakPtr<SWidget,1>,bool,bool),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(unsigned_short,TWeakPtr<SWidget,1>,bool,bool),FDefaultDelegateUserPolicy>
            (&this->_OnDynamicSliderMaxValueChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->_SupportDynamicSliderMinValue).Getter);
  pvVar1 = *(void **)&(this->_SupportDynamicSliderMinValue).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_SupportDynamicSliderMinValue).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->_SupportDynamicSliderMaxValue).Getter);
  pvVar1 = *(void **)&(this->_SupportDynamicSliderMaxValue).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_SupportDynamicSliderMaxValue).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_LinearDeltaSensitivity).Getter);
  pvVar1 = *(void **)&(this->_LinearDeltaSensitivity).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_LinearDeltaSensitivity).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_CtrlMultiplier).Getter);
  pvVar1 = *(void **)&(this->_CtrlMultiplier).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_CtrlMultiplier).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_ShiftMultiplier).Getter);
  pvVar1 = *(void **)&(this->_ShiftMultiplier).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_ShiftMultiplier).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->_ShiftMouseMovePixelPerDelta).Getter);
  pvVar1 = *(void **)&(this->_ShiftMouseMovePixelPerDelta).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_ShiftMouseMovePixelPerDelta).Getter);
  TAttribute<unsigned_short>::~TAttribute<unsigned_short>(&this->_Delta);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_EnableSlider).Getter);
  pvVar1 = *(void **)&(this->_EnableSlider).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_EnableSlider).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_AlwaysUsesDeltaSnap).Getter);
  pvVar1 = *(void **)&(this->_AlwaysUsesDeltaSnap).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_AlwaysUsesDeltaSnap).Getter);
  TAttribute<TOptional<int>_>::~TAttribute<TOptional<int>_>(&this->_MaxFractionalDigits);
  TAttribute<TOptional<int>_>::~TAttribute<TOptional<int>_>(&this->_MinFractionalDigits);
  TAttribute<TOptional<unsigned_short>_>::~TAttribute<TOptional<unsigned_short>_>
            (&this->_MaxSliderValue);
  TAttribute<TOptional<unsigned_short>_>::~TAttribute<TOptional<unsigned_short>_>
            (&this->_MinSliderValue);
  TAttribute<TOptional<unsigned_short>_>::~TAttribute<TOptional<unsigned_short>_>(&this->_MaxValue);
  TAttribute<TOptional<unsigned_short>_>::~TAttribute<TOptional<unsigned_short>_>(&this->_MinValue);
  TAttribute<unsigned_short>::~TAttribute<unsigned_short>(&this->_Value);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return;
}

// ~FArguments @ 1430613d0

void __thiscall
STableRow<TSharedPtr<FTextStyles::FFontFamily,1>_>::FArguments::~FArguments(FArguments *this)

{
  void *pvVar1;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->_Content).Widget.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Padding).Getter);
  pvVar1 = *(void **)&(this->_Padding).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_Padding).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnDrop);
  pvVar1 = *(void **)&(this->_OnDrop).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnDrop);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnDragLeave);
  pvVar1 = *(void **)&(this->_OnDragLeave).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnDragLeave);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnDragEnter);
  pvVar1 = *(void **)&(this->_OnDragEnter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnDragEnter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnDragDetected);
  pvVar1 = *(void **)&(this->_OnDragDetected).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnDragDetected);
  TDelegate<int___cdecl(enum_EItemDropZone,FPaintArgs_const_&,FGeometry_const_&,FSlateRect_const_&,FSlateWindowElementList_&,int,FWidgetStyle_const_&,bool),FDefaultDelegateUserPolicy>
  ::
  ~TDelegate<int___cdecl(enum_EItemDropZone,FPaintArgs_const_&,FGeometry_const_&,FSlateRect_const_&,FSlateWindowElementList_&,int,FWidgetStyle_const_&,bool),FDefaultDelegateUserPolicy>
            (&this->_OnPaintDropIndicator);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnAcceptDrop);
  pvVar1 = *(void **)&(this->_OnAcceptDrop).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnAcceptDrop);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnCanAcceptDrop);
  pvVar1 = *(void **)&(this->_OnCanAcceptDrop).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnCanAcceptDrop);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return;
}

// ~FArguments @ 143061530

void __thiscall
STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>::FArguments::~FArguments(FArguments *this)

{
  TAlwaysValidWidget::~TAlwaysValidWidget(&this->_Content);
  TAttribute<FMargin>::~TAttribute<FMargin>(&this->_Padding);
  TDelegate<FReply___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy>::
  ~TDelegate<FReply___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy>(&this->_OnDrop);
  TDelegate<void___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy>(&this->_OnDragLeave);
  TDelegate<void___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy>(&this->_OnDragEnter);
  TDelegate<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>::
  ~TDelegate<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
            (&this->_OnDragDetected);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnPaintDropIndicator);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnAcceptDrop);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnCanAcceptDrop);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return;
}

// ~FArguments @ 143061600

void __thiscall SColorPickerTest::FArguments::~FArguments(FArguments *this)

{
  TAttribute<FLinearColor>::~TAttribute<FLinearColor>(&this->_Color);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return;
}

// ~FArguments @ 143061640

void __thiscall SDPIScalingTest::FArguments::~FArguments(FArguments *this)

{
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return;
}

// ~FArguments @ 143061660

void __thiscall SElementTesting::FArguments::~FArguments(FArguments *this)

{
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return;
}

// ~FArguments @ 143061680

void __thiscall SGammaTest::FArguments::~FArguments(FArguments *this)

{
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return;
}

// ~FArguments @ 1430616a0

void __thiscall SGridPanelTest::FArguments::~FArguments(FArguments *this)

{
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return;
}

// ~FArguments @ 1430616c0

void __thiscall SInvalidationPanel::FArguments::~FArguments(FArguments *this)

{
  ::FString::~FString(&this->_DebugName);
  TAlwaysValidWidget::~TAlwaysValidWidget(&this->_Content);
  TSlateBaseNamedArgs<SInvalidationPanel>::~TSlateBaseNamedArgs<SInvalidationPanel>
            ((TSlateBaseNamedArgs<SInvalidationPanel> *)this);
  return;
}

// ~FArguments @ 143061710

void __thiscall SInvalidationTest::FArguments::~FArguments(FArguments *this)

{
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return;
}

// ~FArguments @ 143061730

void __thiscall SLayoutRoundingTest::FArguments::~FArguments(FArguments *this)

{
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return;
}

// ~FArguments @ 143061750

void __thiscall SMultiBoxTest::FArguments::~FArguments(FArguments *this)

{
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return;
}

// ~FArguments @ 143061770

void __thiscall SMultiLineEditingTest::FArguments::~FArguments(FArguments *this)

{
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return;
}

// ~FArguments @ 143061790

void __thiscall SNotificationListTest::FArguments::~FArguments(FArguments *this)

{
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return;
}

// ~FArguments @ 1430617b0

void __thiscall SResponsiveGridPanel::FArguments::~FArguments(FArguments *this)

{
  TArray<float,TSizedDefaultAllocator<32>_>::~TArray<float,TSizedDefaultAllocator<32>_>
            (&this->RowFillCoefficients);
  TArray<SResponsiveGridPanel::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>::
  ~TArray<SResponsiveGridPanel::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>(&this->_Slots);
  TSlateBaseNamedArgs<SResponsiveGridPanel>::~TSlateBaseNamedArgs<SResponsiveGridPanel>
            ((TSlateBaseNamedArgs<SResponsiveGridPanel> *)this);
  return;
}

// ~FArguments @ 143061800

void __thiscall SRichTextEditTest::FArguments::~FArguments(FArguments *this)

{
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return;
}

// ~FArguments @ 143061820

void __thiscall SSplineTest::FArguments::~FArguments(FArguments *this)

{
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return;
}

// ~FArguments @ 143061840

void __thiscall SSplitterTest::FArguments::~FArguments(FArguments *this)

{
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return;
}

// ~FArguments @ 143061860

void __thiscall STextEditTest::FArguments::~FArguments(FArguments *this)

{
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return;
}

// ~FArguments @ 143061880

void __thiscall STextEntryPopup::FArguments::~FArguments(FArguments *this)

{
  TSharedPtr<IErrorReportingWidget,1>::~TSharedPtr<IErrorReportingWidget,1>(&this->_ErrorReporting);
  TDelegate<bool___cdecl(FText_const_&,FText_&),FDefaultDelegateUserPolicy>::
  ~TDelegate<bool___cdecl(FText_const_&,FText_&),FDefaultDelegateUserPolicy>
            (&this->_OnVerifyTextChanged);
  TAttribute<float>::~TAttribute<float>(&this->_MaxWidth);
  TAttribute<FText>::~TAttribute<FText>(&this->_HintText);
  TAttribute<bool>::~TAttribute<bool>(&this->_ClearKeyboardFocusOnCommit);
  TDelegate<void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
            (&this->_OnTextCommitted);
  TDelegate<void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>(&this->_OnTextChanged);
  FText::~FText(&this->_DefaultText);
  FText::~FText(&this->_Label);
  TSlateBaseNamedArgs<STextEntryPopup>::~TSlateBaseNamedArgs<STextEntryPopup>
            ((TSlateBaseNamedArgs<STextEntryPopup> *)this);
  return;
}

// ~FArguments @ 143061950

void __thiscall SUserWidget::FArguments::~FArguments(FArguments *this)

{
  TAlwaysValidWidget::~TAlwaysValidWidget(&this->_Content);
  TSlateBaseNamedArgs<SUserWidget>::~TSlateBaseNamedArgs<SUserWidget>
            ((TSlateBaseNamedArgs<SUserWidget> *)this);
  return;
}

// operator[] @ 1430634c0

FArguments * __thiscall
SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>::FArguments::operator[]
          (FArguments *this,TSharedRef<SWidget,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  SWidget *pSVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pSVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->_Content).Widget.SharedReferenceCount.ReferenceController;
  (this->_Content).Widget.Object = pSVar2;
  (this->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return this;
}

// operator[] @ 143063510

FArguments * __thiscall
STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>::FArguments::operator[]
          (FArguments *this,TSharedRef<SWidget,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  SWidget *pSVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pSVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->_Content).Widget.SharedReferenceCount.ReferenceController;
  (this->_Content).Widget.Object = pSVar2;
  (this->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return this;
}

// operator[] @ 143063560

FArguments * __thiscall
SDPIScaler::FArguments::operator[](FArguments *this,TSharedRef<SWidget,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  SWidget *pSVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pSVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->_Content).Widget.SharedReferenceCount.ReferenceController;
  (this->_Content).Widget.Object = pSVar2;
  (this->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return this;
}

// operator[] @ 1430635b0

FArguments * __thiscall
SInvalidationPanel::FArguments::operator[](FArguments *this,TSharedRef<SWidget,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  SWidget *pSVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pSVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->_Content).Widget.SharedReferenceCount.ReferenceController;
  (this->_Content).Widget.Object = pSVar2;
  (this->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return this;
}

// operator[] @ 143063600

FArguments * __thiscall
SToolTip::FArguments::operator[](FArguments *this,TSharedRef<SWidget,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  SWidget *pSVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pSVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->_Content).Widget.SharedReferenceCount.ReferenceController;
  (this->_Content).Widget.Object = pSVar2;
  (this->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return this;
}

// operator[] @ 143063650

FArguments * __thiscall
SUserWidget::FArguments::operator[](FArguments *this,TSharedRef<SWidget,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  SWidget *pSVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pSVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->_Content).Widget.SharedReferenceCount.ReferenceController;
  (this->_Content).Widget.Object = pSVar2;
  (this->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return this;
}

// operator[] @ 1430636a0

FArguments * __thiscall
SWindow::FArguments::operator[](FArguments *this,TSharedRef<SWidget,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  SWidget *pSVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pSVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->_Content).Widget.SharedReferenceCount.ReferenceController;
  (this->_Content).Widget.Object = pSVar2;
  (this->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return this;
}

// operator+ @ 143063dd0

FArguments * __thiscall
SResponsiveGridPanel::FArguments::operator+(FArguments *this,FSlotArguments *param_1)

{
  int *piVar1;
  TArray<SResponsiveGridPanel::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_> *pTVar2;
  FSlotArguments *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FArguments *pFVar7;
  
  pTVar2 = &this->_Slots;
  pFVar3 = (FSlotArguments *)(pTVar2->AllocatorInstance).Data;
  if ((pFVar3 <= param_1) && (param_1 < pFVar3 + (this->_Slots).ArrayMax)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FArguments *)(*pcVar4)();
      return pFVar7;
    }
  }
  iVar6 = (this->_Slots).ArrayNum;
  piVar1 = &(this->_Slots).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x868,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->_Slots).ArrayNum = iVar6 + 1;
  SResponsiveGridPanel::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 0x68),param_1);
  return this;
}

// operator+ @ 143063e90

FArguments * __thiscall
SRichTextBlock::FArguments::operator+(FArguments *this,TSharedRef<ITextDecorator,1> *param_1)

{
  int *piVar1;
  TArray<TSharedRef<ITextDecorator,1>,TSizedDefaultAllocator<32>_> *pTVar2;
  TSharedRef<ITextDecorator,1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FArguments *pFVar8;
  FScriptContainerElement *pFVar9;
  
  pTVar2 = &this->InlineDecorators;
  pTVar3 = (TSharedRef<ITextDecorator,1> *)(pTVar2->AllocatorInstance).Data;
  if ((pTVar3 <= param_1) && (param_1 < pTVar3 + (this->InlineDecorators).ArrayMax)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FArguments *)(*pcVar5)();
      return pFVar8;
    }
  }
  iVar7 = (this->InlineDecorators).ArrayNum;
  piVar1 = &(this->InlineDecorators).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->InlineDecorators).ArrayNum = iVar7 + 1;
  pFVar9 = (pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
  *(ITextDecorator **)pFVar9 = param_1->Object;
  pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)(pFVar9 + 8) = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// AutoCenter @ 14306ec90

FArguments * __thiscall SWindow::FArguments::AutoCenter(FArguments *this,EAutoCenter param_1)

{
  this->_AutoCenter = param_1;
  return this;
}

// AutoWrapText @ 14306eca0

FArguments * __thiscall
SMultiLineEditableTextBox::FArguments::AutoWrapText(FArguments *this,TAttribute<bool> *param_1)

{
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  
  this_00 = &param_1->Getter;
  (this->_AutoWrapText).Value = param_1->Value;
  (this->_AutoWrapText).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_AutoWrapText).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return this;
}

// AutoWrapText @ 14306ed10

FArguments * __thiscall
SRichTextBlock::FArguments::AutoWrapText(FArguments *this,TAttribute<bool> *param_1)

{
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  
  this_00 = &param_1->Getter;
  (this->_AutoWrapText).Value = param_1->Value;
  (this->_AutoWrapText).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_AutoWrapText).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return this;
}

// BorderImage @ 14306ed80

FArguments * __thiscall
SToolTip::FArguments::BorderImage(FArguments *this,TAttribute<FSlateBrush_const_*> *param_1)

{
  TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  
  this_00 = &param_1->Getter;
  (this->_BorderImage).Value = param_1->Value;
  (this->_BorderImage).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_BorderImage).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return this;
}

// ClearKeyboardFocusOnCommit @ 14306f110

FArguments * __thiscall
STextEntryPopup::FArguments::ClearKeyboardFocusOnCommit(FArguments *this,TAttribute<bool> *param_1)

{
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  
  this_00 = &param_1->Getter;
  (this->_ClearKeyboardFocusOnCommit).Value = param_1->Value;
  (this->_ClearKeyboardFocusOnCommit).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->_ClearKeyboardFocusOnCommit).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return this;
}

// ClearTextSelectionOnFocusLoss @ 14306f180

FArguments * __thiscall
SMultiLineEditableTextBox::FArguments::ClearTextSelectionOnFocusLoss
          (FArguments *this,TAttribute<bool> *param_1)

{
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  
  this_00 = &param_1->Getter;
  (this->_ClearTextSelectionOnFocusLoss).Value = param_1->Value;
  (this->_ClearTextSelectionOnFocusLoss).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->_ClearTextSelectionOnFocusLoss).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return this;
}

// ClientSize @ 14306f1f0

FArguments * __thiscall
SWindow::FArguments::ClientSize(FArguments *this,FDeprecateVector2DParameter param_1)

{
  this->_ClientSize = param_1;
  return this;
}

// ColumnGutter @ 14306f250

FArguments * __thiscall
SResponsiveGridPanel::FArguments::ColumnGutter(FArguments *this,float param_1)

{
  this->_ColumnGutter = param_1;
  return this;
}

// ComboBoxStyle @ 14306f510

FArguments * __thiscall
SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>::FArguments::ComboBoxStyle
          (FArguments *this,ISlateStyle *param_1,FName *param_2,char *param_3)

{
  code *pcVar1;
  FName FVar2;
  FString *pFVar3;
  FComboBoxStyle *pFVar4;
  ForAnyElementType FVar5;
  FName local_res8;
  FName local_res10;
  FString local_38;
  FString local_28;
  FString local_18;
  
  local_res10 = *param_2;
  pcVar1 = *(code **)((longlong)*param_1 + 0xa0);
  FVar2 = local_res10;
  if (param_3 != (char *)0x0) {
    ::FString::FString(&local_28,param_3);
    pFVar3 = ::FName::ToString(&local_res10,&local_18);
    ::FString::ConcatFF(&local_38,pFVar3,&local_28);
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_38.Data.ArrayNum != 0) {
      FVar5.Data = local_38.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_res8,(wchar_t *)FVar5.Data);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    FVar2 = local_res8;
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
      FVar2 = local_res8;
    }
  }
  local_res8 = FVar2;
  pFVar4 = (FComboBoxStyle *)(*pcVar1)(param_1,FComboBoxStyle::TypeName,local_res8,0,1);
  if (pFVar4 == (FComboBoxStyle *)0x0) {
    pFVar4 = FComboBoxStyle::GetDefault();
  }
  this->_ComboBoxStyle = pFVar4;
  return this;
}

// ComboButtonStyle @ 14306f600

FArguments * __thiscall
SComboButton::FArguments::ComboButtonStyle
          (FArguments *this,ISlateStyle *param_1,FName *param_2,char *param_3)

{
  code *pcVar1;
  FName FVar2;
  FString *pFVar3;
  FComboButtonStyle *pFVar4;
  ForAnyElementType FVar5;
  FName local_res8;
  FName local_res10;
  FString local_38;
  FString local_28;
  FString local_18;
  
  local_res10 = *param_2;
  pcVar1 = *(code **)((longlong)*param_1 + 0xa0);
  FVar2 = local_res10;
  if (param_3 != (char *)0x0) {
    ::FString::FString(&local_28,param_3);
    pFVar3 = ::FName::ToString(&local_res10,&local_18);
    ::FString::ConcatFF(&local_38,pFVar3,&local_28);
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_38.Data.ArrayNum != 0) {
      FVar5.Data = local_38.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_res8,(wchar_t *)FVar5.Data);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    FVar2 = local_res8;
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
      FVar2 = local_res8;
    }
  }
  local_res8 = FVar2;
  pFVar4 = (FComboButtonStyle *)(*pcVar1)(param_1,FComboButtonStyle::TypeName,local_res8,0,1);
  if (pFVar4 == (FComboButtonStyle *)0x0) {
    pFVar4 = FComboButtonStyle::GetDefault();
  }
  this->_ComboButtonStyle = pFVar4;
  return this;
}

// DecoratorStyleSet @ 1430b49b0

FArguments * __thiscall
SRichTextBlock::FArguments::DecoratorStyleSet(FArguments *this,ISlateStyle *param_1)

{
  this->_DecoratorStyleSet = param_1;
  return this;
}

// FillRow @ 1430c3030

FArguments * __thiscall
SGridPanel::FArguments::FillRow(FArguments *this,int param_1,TAttribute<float> *param_2)

{
  TArray<TAttribute<float>,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FArguments *pFVar6;
  longlong lVar7;
  uint uVar8;
  
  pTVar1 = &this->RowFillCoefficients;
  iVar5 = (this->RowFillCoefficients).ArrayNum;
  while (iVar5 <= param_1) {
    iVar5 = (this->RowFillCoefficients).ArrayNum;
    if (iVar5 == (this->RowFillCoefficients).ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&pTVar1->AllocatorInstance,&(this->RowFillCoefficients).ArrayMax);
    }
    (this->RowFillCoefficients).ArrayNum = iVar5 + 1;
    pFVar2 = (pTVar1->AllocatorInstance).Data;
    lVar7 = (longlong)iVar5 * 0x20;
    *(undefined4 *)(pFVar2 + lVar7) = 0;
    pFVar2[lVar7 + 4] = (FScriptContainerElement)0x1;
    *(undefined8 *)(pFVar2 + lVar7 + 0x18) = 0;
    *(undefined8 *)(pFVar2 + lVar7 + 8) = 0;
    *(undefined8 *)(pFVar2 + lVar7 + 0x10) = 0;
    iVar5 = (this->RowFillCoefficients).ArrayNum;
  }
  uVar8 = 0;
  if (param_1 < (this->RowFillCoefficients).ArrayNum) {
    uVar8 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FArguments *)(*pcVar3)();
    return pFVar6;
  }
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  lVar7 = (longlong)param_1 * 0x20;
  *(float *)(pFVar2 + lVar7) = param_2->Value;
  pFVar2[lVar7 + 4] = (FScriptContainerElement)param_2->bIsSet;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *)(pFVar2 + lVar7 + 8),
             &param_2->Getter);
  return this;
}

// FillRow @ 1430c3140

FArguments * __thiscall
SResponsiveGridPanel::FArguments::FillRow(FArguments *this,int param_1,float param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  FArguments *pFVar5;
  int *piVar6;
  int iVar7;
  
  piVar6 = &(this->RowFillCoefficients).ArrayNum;
  iVar3 = *piVar6;
  if (iVar3 <= param_1) {
    iVar7 = (param_1 - iVar3) + 1;
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,iVar7,&(this->RowFillCoefficients).AllocatorInstance,piVar6,
                       &(this->RowFillCoefficients).ArrayMax);
    memset((this->RowFillCoefficients).AllocatorInstance.Data + (longlong)iVar3 * 4,0,
           (longlong)iVar7 << 2);
  }
  uVar4 = 0;
  if (param_1 < (this->RowFillCoefficients).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FArguments *)(*pcVar1)();
      return pFVar5;
    }
  }
  *(float *)((this->RowFillCoefficients).AllocatorInstance.Data + (longlong)param_1 * 4) = param_2;
  return this;
}

// Font @ 1430c4980

FArguments * __thiscall
SInlineEditableTextBlock::FArguments::Font(FArguments *this,TAttribute<FSlateFontInfo> *param_1)

{
  void *pvVar1;
  
  FSlateFontInfo::operator=(&(this->_Font).Value,&param_1->Value);
  (this->_Font).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Font).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&param_1->Getter);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->Value).CompositeFont.SharedReferenceCount.ReferenceController);
  return this;
}

// Font @ 1430c4a10

FArguments * __thiscall
SMultiLineEditableTextBox::FArguments::Font(FArguments *this,TAttribute<FSlateFontInfo> *param_1)

{
  void *pvVar1;
  
  FSlateFontInfo::operator=(&(this->_Font).Value,&param_1->Value);
  (this->_Font).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Font).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&param_1->Getter);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->Value).CompositeFont.SharedReferenceCount.ReferenceController);
  return this;
}

// HAlign @ 1430cee60

FArguments * __thiscall SBorder::FArguments::HAlign(FArguments *this,EHorizontalAlignment param_1)

{
  this->_HAlign = param_1;
  return this;
}

// HasDownArrow @ 1430cfee0

FArguments * __thiscall SComboButton::FArguments::HasDownArrow(FArguments *this,bool param_1)

{
  this->_HasDownArrow = param_1;
  return this;
}

// HintText @ 1430d2b10

FArguments * __thiscall
STextEntryPopup::FArguments::HintText(FArguments *this,TAttribute<FText> *param_1)

{
  void *pvVar1;
  ITextData *pIVar2;
  
  FText::operator=(&(this->_HintText).Value,&param_1->Value);
  (this->_HintText).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_HintText).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&param_1->Getter);
  pIVar2 = (param_1->Value).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  return this;
}

// InitiallySelectedItem @ 1430d2dd0

FArguments * __thiscall
SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>::FArguments::InitiallySelectedItem
          (FArguments *this,TSharedPtr<FTextStyles::FFontFamily,1> *param_1)

{
  FFontFamily *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  TSharedPtr<FTextStyles::FFontFamily,1> local_18;
  
  pFVar1 = param_1->Object;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18.Object = (this->_InitiallySelectedItem).Object;
  local_18.SharedReferenceCount.ReferenceController =
       (this->_InitiallySelectedItem).SharedReferenceCount.ReferenceController;
  (this->_InitiallySelectedItem).Object = pFVar1;
  (this->_InitiallySelectedItem).SharedReferenceCount.ReferenceController = pTVar2;
  TSharedPtr<FTextStyles::FFontFamily,1>::~TSharedPtr<FTextStyles::FFontFamily,1>(&local_18);
  TSharedPtr<FTextStyles::FFontFamily,1>::~TSharedPtr<FTextStyles::FFontFamily,1>(param_1);
  return this;
}

// IsReadOnly @ 1430d3be0

FArguments * __thiscall
SEditableTextBox::FArguments::IsReadOnly(FArguments *this,TAttribute<bool> *param_1)

{
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  
  this_00 = &param_1->Getter;
  (this->_IsReadOnly).Value = param_1->Value;
  (this->_IsReadOnly).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_IsReadOnly).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return this;
}

// Justification @ 1430d52c0

FArguments * __thiscall
SMultiLineEditableTextBox::FArguments::Justification
          (FArguments *this,TAttribute<ETextJustify::Type> *param_1)

{
  TDelegate<ETextJustify::Type___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  
  this_00 = &param_1->Getter;
  (this->_Justification).Value = param_1->Value;
  (this->_Justification).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Justification).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return this;
}

// Justification @ 1430d5330

FArguments * __thiscall
SRichTextBlock::FArguments::Justification(FArguments *this,TAttribute<ETextJustify::Type> *param_1)

{
  TDelegate<ETextJustify::Type___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  
  this_00 = &param_1->Getter;
  (this->_Justification).Value = param_1->Value;
  (this->_Justification).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Justification).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return this;
}

// Label @ 1430d5de0

FArguments * __thiscall STextEntryPopup::FArguments::Label(FArguments *this,FText *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  undefined1 local_res8 [8];
  
  pIVar1 = (param_1->TextData).Reference;
  pIVar2 = (this->_Label).TextData.Reference;
  if (pIVar2 != pIVar1) {
    (this->_Label).TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (this->_Label).Flags = param_1->Flags;
  pIVar1 = (param_1->TextData).Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  return this;
}

// LineHeightPercentage @ 1430d6490

FArguments * __thiscall
SMultiLineEditableTextBox::FArguments::LineHeightPercentage
          (FArguments *this,TAttribute<float> *param_1)

{
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  
  this_00 = &param_1->Getter;
  (this->_LineHeightPercentage).Value = param_1->Value;
  (this->_LineHeightPercentage).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_LineHeightPercentage).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return this;
}

// ListItemsSource @ 1430d6500

FArguments * __thiscall
SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>::FArguments::ListItemsSource
          (FArguments *this,
          TArray<TSharedRef<SDocumentsTest::FDocumentInfo,1>,TSizedDefaultAllocator<32>_> *param_1)

{
  TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1>
  local_18;
  
  this->_ListItemsSource_ArrayPointer =
       (TArray<TSharedRef<SDocumentsTest::FDocumentInfo,1>,TSizedDefaultAllocator<32>_> *)0x0;
  this->_ListItemsSource_ObservableArrayPointer =
       (TObservableArray<TSharedRef<SDocumentsTest::FDocumentInfo,1>_> *)0x0;
  local_18.Object = (TObservableArray<TSharedRef<SDocumentsTest::FDocumentInfo,1>_> *)0x0;
  local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->_ListItemsSource_SharedObservableArray != &local_18) {
    (this->_ListItemsSource_SharedObservableArray).Object =
         (TObservableArray<TSharedRef<SDocumentsTest::FDocumentInfo,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_ListItemsSource_SharedObservableArray).SharedReferenceCount,
               &local_18.SharedReferenceCount);
  }
  TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1>
  ::
  ~TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1>
            (&local_18);
  this->_ListItemsSource_ArrayPointer = param_1;
  return this;
}

// MakeListItemsSource @ 1430d69d0

TUniquePtr<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<FTextStyles::FFontFamily,1>_>,TDefaultDelete<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<FTextStyles::FFontFamily,1>_>_>_>
 __thiscall
SListView<TSharedPtr<FTextStyles::FFontFamily,1>_>::FArguments::MakeListItemsSource
          (FArguments *this,TSharedRef<STableViewBase,1> *param_1)

{
  TArray<TSharedPtr<FTextStyles::FFontFamily,1>,TSizedDefaultAllocator<32>_> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  TObservableArray<TSharedPtr<FTextStyles::FFontFamily,1>_> *pTVar3;
  STableViewBase *pSVar4;
  FObservableArrayPointer<TSharedPtr<FTextStyles::FFontFamily,1>_> *this_00;
  FSharedObservableArray<TSharedPtr<FTextStyles::FFontFamily,1>_> *this_01;
  longlong *in_R8;
  TSharedRef<STableViewBase,1> local_28;
  TSharedRef<STableViewBase,1> local_18;
  
  if (this->_ListItemsSource_ArrayPointer ==
      (TArray<TSharedPtr<FTextStyles::FFontFamily,1>,TSizedDefaultAllocator<32>_> *)0x0) {
    if (this->_ListItemsSource_ObservableArrayPointer ==
        (TObservableArray<TSharedPtr<FTextStyles::FFontFamily,1>_> *)0x0) {
      pSVar4 = (STableViewBase *)(this->_ListItemsSource_SharedObservableArray).Object;
      if (pSVar4 == (STableViewBase *)0x0) {
        pTVar2 = (TReferenceControllerBase<1> *)in_R8[1];
        param_1->Object = (STableViewBase *)0x0;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      }
      else {
        pTVar2 = (this->_ListItemsSource_SharedObservableArray).SharedReferenceCount.
                 ReferenceController;
        if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
          UNLOCK();
        }
        this_01 = ::operator_new(0x30);
        if (this_01 == (FSharedObservableArray<TSharedPtr<FTextStyles::FFontFamily,1>_> *)0x0) {
          pSVar4 = (STableViewBase *)0x0;
        }
        else {
          if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_18.SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)in_R8[1];
          local_18.Object = (STableViewBase *)*in_R8;
          if (local_18.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          local_28.Object = pSVar4;
          local_28.SharedReferenceCount.ReferenceController = pTVar2;
          pSVar4 = (STableViewBase *)
                   UE::Slate::ItemsSource::
                   FSharedObservableArray<TSharedPtr<FTextStyles::FFontFamily,1>_>::
                   FSharedObservableArray<TSharedPtr<FTextStyles::FFontFamily,1>_>
                             (this_01,&local_18,
                              (TSharedRef<UE::Slate::Containers::TObservableArray<TSharedPtr<FTextStyles::FFontFamily,1>_>,1>
                               *)&local_28);
        }
        param_1->Object = pSVar4;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)in_R8[1]);
      }
      return (TUniquePtr<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<FTextStyles::FFontFamily,1>_>,TDefaultDelete<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<FTextStyles::FFontFamily,1>_>_>_>
              )(IItemsSource<TSharedPtr<FTextStyles::FFontFamily,1>_> *)param_1;
    }
    this_00 = ::operator_new(0x28);
    if (this_00 != (FObservableArrayPointer<TSharedPtr<FTextStyles::FFontFamily,1>_> *)0x0) {
      local_28.Object = (STableViewBase *)*in_R8;
      pTVar3 = this->_ListItemsSource_ObservableArrayPointer;
      local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)in_R8[1];
      if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pSVar4 = (STableViewBase *)
               UE::Slate::ItemsSource::
               FObservableArrayPointer<TSharedPtr<FTextStyles::FFontFamily,1>_>::
               FObservableArrayPointer<TSharedPtr<FTextStyles::FFontFamily,1>_>
                         (this_00,&local_28,pTVar3);
      goto LAB_1430d6a3b;
    }
  }
  else {
    pSVar4 = ::operator_new(0x10);
    if (pSVar4 != (STableViewBase *)0x0) {
      pTVar1 = this->_ListItemsSource_ArrayPointer;
      *(undefined ***)pSVar4 =
           &
           ___7__FArrayPointer_V__TSharedPtr_UFFontFamily_FTextStyles___00___ItemsSource_Slate_UE__6B_
      ;
      *(TArray<TSharedPtr<FTextStyles::FFontFamily,1>,TSizedDefaultAllocator<32>_> **)
       &pSVar4->field_0x8 = pTVar1;
      pTVar2 = (TReferenceControllerBase<1> *)in_R8[1];
      param_1->Object = pSVar4;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      return (TUniquePtr<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<FTextStyles::FFontFamily,1>_>,TDefaultDelete<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<FTextStyles::FFontFamily,1>_>_>_>
              )(IItemsSource<TSharedPtr<FTextStyles::FFontFamily,1>_> *)param_1;
    }
  }
  pSVar4 = (STableViewBase *)0x0;
LAB_1430d6a3b:
  pTVar2 = (TReferenceControllerBase<1> *)in_R8[1];
  param_1->Object = pSVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return (TUniquePtr<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<FTextStyles::FFontFamily,1>_>,TDefaultDelete<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<FTextStyles::FFontFamily,1>_>_>_>
          )(IItemsSource<TSharedPtr<FTextStyles::FFontFamily,1>_> *)param_1;
}

// MakeListItemsSource @ 1430d6b80

TUniquePtr<UE::Slate::ItemsSource::IItemsSource<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,TDefaultDelete<UE::Slate::ItemsSource::IItemsSource<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>_>_>
 __thiscall
SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>::FArguments::MakeListItemsSource
          (FArguments *this,TSharedRef<STableViewBase,1> *param_1)

{
  TArray<TSharedRef<SDocumentsTest::FDocumentInfo,1>,TSizedDefaultAllocator<32>_> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  TObservableArray<TSharedRef<SDocumentsTest::FDocumentInfo,1>_> *pTVar3;
  STableViewBase *pSVar4;
  FObservableArrayPointer<TSharedRef<SDocumentsTest::FDocumentInfo,1>_> *this_00;
  FSharedObservableArray<TSharedRef<SDocumentsTest::FDocumentInfo,1>_> *this_01;
  longlong *in_R8;
  TSharedRef<STableViewBase,1> local_28;
  TSharedRef<STableViewBase,1> local_18;
  
  if (this->_ListItemsSource_ArrayPointer ==
      (TArray<TSharedRef<SDocumentsTest::FDocumentInfo,1>,TSizedDefaultAllocator<32>_> *)0x0) {
    if (this->_ListItemsSource_ObservableArrayPointer ==
        (TObservableArray<TSharedRef<SDocumentsTest::FDocumentInfo,1>_> *)0x0) {
      pSVar4 = (STableViewBase *)(this->_ListItemsSource_SharedObservableArray).Object;
      if (pSVar4 == (STableViewBase *)0x0) {
        pTVar2 = (TReferenceControllerBase<1> *)in_R8[1];
        param_1->Object = (STableViewBase *)0x0;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      }
      else {
        pTVar2 = (this->_ListItemsSource_SharedObservableArray).SharedReferenceCount.
                 ReferenceController;
        if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
          UNLOCK();
        }
        this_01 = ::operator_new(0x30);
        if (this_01 == (FSharedObservableArray<TSharedRef<SDocumentsTest::FDocumentInfo,1>_> *)0x0)
        {
          pSVar4 = (STableViewBase *)0x0;
        }
        else {
          if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_18.SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)in_R8[1];
          local_18.Object = (STableViewBase *)*in_R8;
          if (local_18.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          local_28.Object = pSVar4;
          local_28.SharedReferenceCount.ReferenceController = pTVar2;
          pSVar4 = (STableViewBase *)
                   UE::Slate::ItemsSource::
                   FSharedObservableArray<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>::
                   FSharedObservableArray<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>
                             (this_01,&local_18,
                              (TSharedRef<UE::Slate::Containers::TObservableArray<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1>
                               *)&local_28);
        }
        param_1->Object = pSVar4;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)in_R8[1]);
      }
      return (TUniquePtr<UE::Slate::ItemsSource::IItemsSource<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,TDefaultDelete<UE::Slate::ItemsSource::IItemsSource<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>_>_>
              )(IItemsSource<TSharedRef<SDocumentsTest::FDocumentInfo,1>_> *)param_1;
    }
    this_00 = ::operator_new(0x28);
    if (this_00 != (FObservableArrayPointer<TSharedRef<SDocumentsTest::FDocumentInfo,1>_> *)0x0) {
      local_28.Object = (STableViewBase *)*in_R8;
      pTVar3 = this->_ListItemsSource_ObservableArrayPointer;
      local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)in_R8[1];
      if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pSVar4 = (STableViewBase *)
               UE::Slate::ItemsSource::
               FObservableArrayPointer<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>::
               FObservableArrayPointer<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>
                         (this_00,&local_28,pTVar3);
      goto LAB_1430d6beb;
    }
  }
  else {
    pSVar4 = ::operator_new(0x10);
    if (pSVar4 != (STableViewBase *)0x0) {
      pTVar1 = this->_ListItemsSource_ArrayPointer;
      *(undefined ***)pSVar4 =
           &
           ___7__FArrayPointer_V__TSharedRef_UFDocumentInfo_SDocumentsTest___00___ItemsSource_Slate_UE__6B_
      ;
      *(TArray<TSharedRef<SDocumentsTest::FDocumentInfo,1>,TSizedDefaultAllocator<32>_> **)
       &pSVar4->field_0x8 = pTVar1;
      pTVar2 = (TReferenceControllerBase<1> *)in_R8[1];
      param_1->Object = pSVar4;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      return (TUniquePtr<UE::Slate::ItemsSource::IItemsSource<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,TDefaultDelete<UE::Slate::ItemsSource::IItemsSource<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>_>_>
              )(IItemsSource<TSharedRef<SDocumentsTest::FDocumentInfo,1>_> *)param_1;
    }
  }
  pSVar4 = (STableViewBase *)0x0;
LAB_1430d6beb:
  pTVar2 = (TReferenceControllerBase<1> *)in_R8[1];
  param_1->Object = pSVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return (TUniquePtr<UE::Slate::ItemsSource::IItemsSource<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,TDefaultDelete<UE::Slate::ItemsSource::IItemsSource<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>_>_>
          )(IItemsSource<TSharedRef<SDocumentsTest::FDocumentInfo,1>_> *)param_1;
}

// Margin @ 1430d7bb0

FArguments * __thiscall
SMultiLineEditableTextBox::FArguments::Margin(FArguments *this,TAttribute<FMargin> *param_1)

{
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = (param_1->Value).Top;
  fVar3 = (param_1->Value).Right;
  fVar4 = (param_1->Value).Bottom;
  this_00 = &param_1->Getter;
  (this->_Margin).Value.Left = (param_1->Value).Left;
  (this->_Margin).Value.Top = fVar2;
  (this->_Margin).Value.Right = fVar3;
  (this->_Margin).Value.Bottom = fVar4;
  (this->_Margin).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Margin).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return this;
}

// Margin @ 1430d7c20

FArguments * __thiscall
SRichTextBlock::FArguments::Margin(FArguments *this,TAttribute<FMargin> *param_1)

{
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = (param_1->Value).Top;
  fVar3 = (param_1->Value).Right;
  fVar4 = (param_1->Value).Bottom;
  this_00 = &param_1->Getter;
  (this->_Margin).Value.Left = (param_1->Value).Left;
  (this->_Margin).Value.Top = fVar2;
  (this->_Margin).Value.Right = fVar3;
  (this->_Margin).Value.Bottom = fVar4;
  (this->_Margin).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Margin).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return this;
}

// Marshaller @ 1430d7c90

FArguments * __thiscall
SMultiLineEditableTextBox::FArguments::Marshaller
          (FArguments *this,TSharedPtr<ITextLayoutMarshaller,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  ITextLayoutMarshaller *pIVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pIVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->_Marshaller).SharedReferenceCount.ReferenceController;
  (this->_Marshaller).Object = pIVar2;
  (this->_Marshaller).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return this;
}

// OnClicked @ 1430d9560

FArguments * __thiscall
SButton::FArguments::OnClicked
          (FArguments *this,TDelegate<FReply___cdecl(void),FDefaultDelegateUserPolicy> *param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnClicked,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
  return this;
}

// OptionsSource @ 1430e3ca0

FArguments * __thiscall
SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>::FArguments::OptionsSource
          (FArguments *this,
          TArray<TSharedPtr<FTextStyles::FFontFamily,1>,TSizedDefaultAllocator<32>_> *param_1)

{
  TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<FTextStyles::FFontFamily,1>_>,1>
  local_18;
  
  this->_OptionsSource_ArrayPointer =
       (TArray<TSharedPtr<FTextStyles::FFontFamily,1>,TSizedDefaultAllocator<32>_> *)0x0;
  this->_OptionsSource_ObservableArrayPointer =
       (TObservableArray<TSharedPtr<FTextStyles::FFontFamily,1>_> *)0x0;
  local_18.Object = (TObservableArray<TSharedPtr<FTextStyles::FFontFamily,1>_> *)0x0;
  local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->_OptionsSource_SharedObservableArray != &local_18) {
    (this->_OptionsSource_SharedObservableArray).Object =
         (TObservableArray<TSharedPtr<FTextStyles::FFontFamily,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_OptionsSource_SharedObservableArray).SharedReferenceCount,
               &local_18.SharedReferenceCount);
  }
  TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<FTextStyles::FFontFamily,1>_>,1>::
  ~TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<FTextStyles::FFontFamily,1>_>,1>
            (&local_18);
  this->_OptionsSource_ArrayPointer = param_1;
  return this;
}

// P0 @ 1430e3d10

FArguments * __thiscall SSplineTest::FArguments::P0(FArguments *this,TVector2<float> param_1)

{
  FArguments *pFVar1;
  
  (this->_P0).field0_0x0._s_0 = (TVector2<float>_u_0_s_0)param_1.field0_0x0;
  pFVar1 = TSlateBaseNamedArgs<SSplineTest>::Me((TSlateBaseNamedArgs<SSplineTest> *)this);
  return pFVar1;
}

// P1 @ 1430e3d50

FArguments * __thiscall SSplineTest::FArguments::P1(FArguments *this,TVector2<float> param_1)

{
  FArguments *pFVar1;
  
  (this->_P1).field0_0x0._s_0 = (TVector2<float>_u_0_s_0)param_1.field0_0x0;
  pFVar1 = TSlateBaseNamedArgs<SSplineTest>::Me((TSlateBaseNamedArgs<SSplineTest> *)this);
  return pFVar1;
}

// P2 @ 1430e3d90

FArguments * __thiscall SSplineTest::FArguments::P2(FArguments *this,TVector2<float> param_1)

{
  FArguments *pFVar1;
  
  (this->_P2).field0_0x0._s_0 = (TVector2<float>_u_0_s_0)param_1.field0_0x0;
  pFVar1 = TSlateBaseNamedArgs<SSplineTest>::Me((TSlateBaseNamedArgs<SSplineTest> *)this);
  return pFVar1;
}

// P3 @ 1430e3dd0

FArguments * __thiscall SSplineTest::FArguments::P3(FArguments *this,TVector2<float> param_1)

{
  FArguments *pFVar1;
  
  (this->_P3).field0_0x0._s_0 = (TVector2<float>_u_0_s_0)param_1.field0_0x0;
  pFVar1 = TSlateBaseNamedArgs<SSplineTest>::Me((TSlateBaseNamedArgs<SSplineTest> *)this);
  return pFVar1;
}

// ParentWindow @ 1430e4660

/* WARNING: Enum "Type": Some values do not have unique names */

FArguments * __thiscall
SColorPicker::FArguments::ParentWindow(FArguments *this,TAttribute<TSharedPtr<SWindow,1>_> *param_1)

{
  FSharedReferencer<1> *pFVar1;
  void *pvVar2;
  TDelegate<TSharedPtr<SWindow,1>___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  
  pFVar1 = &(param_1->Value).SharedReferenceCount;
  if (&this->_ParentWindow != param_1) {
    (this->_ParentWindow).Value.Object = (param_1->Value).Object;
    (param_1->Value).Object = (SWindow *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_ParentWindow).Value.SharedReferenceCount,pFVar1);
  }
  this_00 = &param_1->Getter;
  (this->_ParentWindow).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_ParentWindow).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar2 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (pFVar1->ReferenceController);
  return this;
}

// ResizeMode @ 1430ea8a0

FArguments * __thiscall SSplitter::FArguments::ResizeMode(FArguments *this,Type param_1)

{
  this->_ResizeMode = param_1;
  return this;
}

// RevertTextOnEscape @ 1430eb380

FArguments * __thiscall
SEditableTextBox::FArguments::RevertTextOnEscape(FArguments *this,TAttribute<bool> *param_1)

{
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  
  this_00 = &param_1->Getter;
  (this->_RevertTextOnEscape).Value = param_1->Value;
  (this->_RevertTextOnEscape).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_RevertTextOnEscape).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return this;
}

// RowGutter @ 1430eb3f0

FArguments * __thiscall SResponsiveGridPanel::FArguments::RowGutter(FArguments *this,float param_1)

{
  this->_RowGutter = param_1;
  return this;
}

// SelectionMode @ 1430ed970

FArguments * __thiscall
SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>::FArguments::SelectionMode
          (FArguments *this,TAttribute<ESelectionMode::Type> *param_1)

{
  (this->_SelectionMode).Value = param_1->Value;
  (this->_SelectionMode).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_SelectionMode).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  TAttribute<enum_ESelectionMode::Type>::~TAttribute<enum_ESelectionMode::Type>(param_1);
  return this;
}

// TabWellContentRight @ 1430fb110

NamedSlotProperty<SDockTab::FArguments> * __thiscall
SDockTab::FArguments::TabWellContentRight
          (FArguments *this,NamedSlotProperty<SDockTab::FArguments> *__return_storage_ptr__)

{
  __return_storage_ptr__->OwnerDeclaration = this;
  __return_storage_ptr__->SlotContent = &this->_TabWellContentRight;
  return __return_storage_ptr__;
}

// Text @ 143105110

FArguments * __thiscall
SMultiLineEditableTextBox::FArguments::Text(FArguments *this,TAttribute<FText> *param_1)

{
  void *pvVar1;
  ITextData *pIVar2;
  
  FText::operator=(&(this->_Text).Value,&param_1->Value);
  (this->_Text).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Text).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&param_1->Getter);
  pIVar2 = (param_1->Value).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  return this;
}

// TextStyle @ 1431051a0

FArguments * __thiscall
SRichTextBlock::FArguments::TextStyle
          (FArguments *this,ISlateStyle *param_1,FName *param_2,char *param_3)

{
  code *pcVar1;
  FName FVar2;
  FString *pFVar3;
  FTextBlockStyle *pFVar4;
  ForAnyElementType FVar5;
  FName local_res8;
  FName local_res10;
  FString local_38;
  FString local_28;
  FString local_18;
  
  local_res10 = *param_2;
  pcVar1 = *(code **)((longlong)*param_1 + 0xa0);
  FVar2 = local_res10;
  if (param_3 != (char *)0x0) {
    ::FString::FString(&local_28,param_3);
    pFVar3 = ::FName::ToString(&local_res10,&local_18);
    ::FString::ConcatFF(&local_38,pFVar3,&local_28);
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_38.Data.ArrayNum != 0) {
      FVar5.Data = local_38.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_res8,(wchar_t *)FVar5.Data);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    FVar2 = local_res8;
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
      FVar2 = local_res8;
    }
  }
  local_res8 = FVar2;
  pFVar4 = (FTextBlockStyle *)(*pcVar1)(param_1,FTextBlockStyle::TypeName,local_res8,0,1);
  if (pFVar4 == (FTextBlockStyle *)0x0) {
    pFVar4 = FTextBlockStyle::GetDefault();
  }
  this->_TextStyle = pFVar4;
  return this;
}

// UseAlpha @ 1431070f0

/* WARNING: Enum "Type": Some values do not have unique names */

FArguments * __thiscall
SColorPicker::FArguments::UseAlpha(FArguments *this,TAttribute<bool> *param_1)

{
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  
  this_00 = &param_1->Getter;
  (this->_UseAlpha).Value = param_1->Value;
  (this->_UseAlpha).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_UseAlpha).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return this;
}

// WrapTextAt @ 1431086d0

FArguments * __thiscall
SMultiLineEditableTextBox::FArguments::WrapTextAt(FArguments *this,TAttribute<float> *param_1)

{
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  
  this_00 = &param_1->Getter;
  (this->_WrapTextAt).Value = param_1->Value;
  (this->_WrapTextAt).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_WrapTextAt).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return this;
}

// WrapTextAt @ 143108740

FArguments * __thiscall
SRichTextBlock::FArguments::WrapTextAt(FArguments *this,TAttribute<float> *param_1)

{
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  
  this_00 = &param_1->Getter;
  (this->_WrapTextAt).Value = param_1->Value;
  (this->_WrapTextAt).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_WrapTextAt).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return this;
}

