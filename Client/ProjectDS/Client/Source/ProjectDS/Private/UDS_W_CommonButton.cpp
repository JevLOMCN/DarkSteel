// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 74

// SetbIsLongPress_WrapperImpl @ 14b76a3f0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_W_CommonButton::SetbIsLongPress_WrapperImpl(void *param_1,void *param_2)

{
  TDelegateBase<FNotThreadSafeDelegateMode> *this;
  longlong lVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  void *pvStackX_8;
  FFieldId FStack_58;
  undefined4 uStack_4c;
  FDestructionSentinel FStack_48;
  FDelegateAllocation *pFStack_30;
  
  if (*(longlong *)((longlong)param_1 + 0x12d0) != 0) {
    *(undefined1 *)(*(longlong *)((longlong)param_1 + 0x12d0) + 0x88) = *(undefined1 *)param_2;
    lVar1 = *(longlong *)((longlong)param_1 + 0x12d0);
    this = (TDelegateBase<FNotThreadSafeDelegateMode> *)(lVar1 + 0x28);
    if (*(char *)param_2 == '\0') {
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind(this);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)
                 (*(longlong *)((longlong)param_1 + 0x12d0) + 0x40));
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)
                 (*(longlong *)((longlong)param_1 + 0x12d0) + 0x58));
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)
                 (*(longlong *)((longlong)param_1 + 0x12d0) + 0x70));
    }
    else {
      FStack_58.FieldName = (FName)OnLongPressStart;
      FStack_58.BitNumber = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
                 (FWriteAccessScope *)&FStack_48);
      pFStack_30 = (FDelegateAllocation *)(lVar1 + 0x30);
      puVar2 = UE::Core::Private::DelegateAllocate(0x30,pFStack_30);
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
        uVar3 = FDelegateHandle::GenerateNewID();
        puVar2[2] = uVar3;
        *puVar2 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_W_CommonButton____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(param_1);
        }
        puVar2[3] = 0;
        pvStackX_8 = param_1;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(param_1);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)&pvStackX_8);
        *(FName *)(puVar2 + 4) = FStack_58.FieldName;
        puVar2[5] = CONCAT44(uStack_4c,FStack_58.BitNumber);
      }
      if (FStack_48.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_48.Accessor,&FStack_48);
      }
      lVar1 = *(longlong *)((longlong)param_1 + 0x12d0);
      FStack_58.FieldName = (FName)OnLongPressSuccess;
      FStack_58.BitNumber = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar1 + 0x40),
                 (FWriteAccessScope *)&FStack_48);
      pFStack_30 = (FDelegateAllocation *)(lVar1 + 0x48);
      puVar2 = UE::Core::Private::DelegateAllocate(0x30,pFStack_30);
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
        uVar3 = FDelegateHandle::GenerateNewID();
        puVar2[2] = uVar3;
        *puVar2 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_W_CommonButton____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(param_1);
        }
        puVar2[3] = 0;
        pvStackX_8 = param_1;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(param_1);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)&pvStackX_8);
        *(FName *)(puVar2 + 4) = FStack_58.FieldName;
        puVar2[5] = CONCAT44(uStack_4c,FStack_58.BitNumber);
      }
      if (FStack_48.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_48.Accessor,&FStack_48);
      }
      lVar1 = *(longlong *)((longlong)param_1 + 0x12d0);
      FStack_58.FieldName = (FName)OnLongPressPressing;
      FStack_58.BitNumber = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar1 + 0x58),
                 (FWriteAccessScope *)&FStack_48);
      pFStack_30 = (FDelegateAllocation *)(lVar1 + 0x60);
      puVar2 = UE::Core::Private::DelegateAllocate(0x30,pFStack_30);
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
        uVar3 = FDelegateHandle::GenerateNewID();
        puVar2[2] = uVar3;
        *puVar2 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_W_CommonButton____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(param_1);
        }
        puVar2[3] = 0;
        pvStackX_8 = param_1;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(param_1);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)&pvStackX_8);
        *(FName *)(puVar2 + 4) = FStack_58.FieldName;
        puVar2[5] = CONCAT44(uStack_4c,FStack_58.BitNumber);
      }
      if (FStack_48.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_48.Accessor,&FStack_48);
      }
      lVar1 = *(longlong *)((longlong)param_1 + 0x12d0);
      FStack_58.FieldName = (FName)SetLongPressRatio;
      FStack_58.BitNumber = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar1 + 0x70),
                 (FWriteAccessScope *)&FStack_48);
      pFStack_30 = (FDelegateAllocation *)(lVar1 + 0x78);
      puVar2 = UE::Core::Private::DelegateAllocate(0x30,pFStack_30);
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = &
                  ___7__TCommonDelegateInstanceState___A6AXAEBM_ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar3 = FDelegateHandle::GenerateNewID();
        puVar2[2] = uVar3;
        *puVar2 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_W_CommonButton____A6AXAEBM_ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(param_1);
        }
        puVar2[3] = 0;
        pvStackX_8 = param_1;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(param_1);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)&pvStackX_8);
        *(FName *)(puVar2 + 4) = FStack_58.FieldName;
        puVar2[5] = CONCAT44(uStack_4c,FStack_58.BitNumber);
      }
      if (FStack_48.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_48.Accessor,&FStack_48);
      }
    }
  }
  *(undefined1 *)((longlong)param_1 + 0x890) = *(undefined1 *)param_2;
  FStack_58.FieldName = FFieldNotificationClassDescriptor::LongPressRatio.FieldName;
  FStack_58.BitNumber = FFieldNotificationClassDescriptor::LongPressRatio.BitNumber;
  UWidget::BroadcastFieldValueChanged((UWidget *)((longlong)param_1 + 0x28),&FStack_58);
  return;
}

// SetLongPressDelay_WrapperImpl @ 14b76a400

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_W_CommonButton::SetLongPressDelay_WrapperImpl(void *param_1,void *param_2)

{
  FFieldId aFStack_18 [2];
  
  if (*(longlong *)((longlong)param_1 + 0x12d0) != 0) {
    *(undefined4 *)(*(longlong *)((longlong)param_1 + 0x12d0) + 0x8c) = *(undefined4 *)param_2;
  }
  *(undefined4 *)((longlong)param_1 + 0x894) = *(undefined4 *)param_2;
  aFStack_18[0].FieldName = FFieldNotificationClassDescriptor::LongPressDelay.FieldName;
  aFStack_18[0].BitNumber = FFieldNotificationClassDescriptor::LongPressDelay.BitNumber;
  UWidget::BroadcastFieldValueChanged((UWidget *)((longlong)param_1 + 0x28),aFStack_18);
  return;
}

// SetLongPressTime_WrapperImpl @ 14b76a410

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_W_CommonButton::SetLongPressTime_WrapperImpl(void *param_1,void *param_2)

{
  FFieldId aFStack_18 [2];
  
  if (*(longlong *)((longlong)param_1 + 0x12d0) != 0) {
    *(undefined4 *)(*(longlong *)((longlong)param_1 + 0x12d0) + 0x90) = *(undefined4 *)param_2;
  }
  *(undefined4 *)((longlong)param_1 + 0x898) = *(undefined4 *)param_2;
  aFStack_18[0].FieldName = FFieldNotificationClassDescriptor::LongPressTime.FieldName;
  aFStack_18[0].BitNumber = FFieldNotificationClassDescriptor::LongPressTime.BitNumber;
  UWidget::BroadcastFieldValueChanged((UWidget *)((longlong)param_1 + 0x28),aFStack_18);
  return;
}

// SetOutofRangeStop_WrapperImpl @ 14b76a420

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_W_CommonButton::SetOutofRangeStop_WrapperImpl(void *param_1,void *param_2)

{
  FFieldId aFStack_18 [2];
  
  if (*(longlong *)((longlong)param_1 + 0x12d0) != 0) {
    *(undefined1 *)(*(longlong *)((longlong)param_1 + 0x12d0) + 0x9d) = *(undefined1 *)param_2;
  }
  *(undefined1 *)((longlong)param_1 + 0x89c) = *(undefined1 *)param_2;
  aFStack_18[0].FieldName = FFieldNotificationClassDescriptor::OutofRangeStop.FieldName;
  aFStack_18[0].BitNumber = FFieldNotificationClassDescriptor::OutofRangeStop.BitNumber;
  UWidget::BroadcastFieldValueChanged((UWidget *)((longlong)param_1 + 0x28),aFStack_18);
  return;
}

// SetLongPressAnimationName_WrapperImpl @ 14b76a430

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_W_CommonButton::SetLongPressAnimationName_WrapperImpl(void *param_1,void *param_2)

{
  FFieldId aFStack_18 [2];
  
  *(undefined8 *)((longlong)param_1 + 0x8a0) = *(undefined8 *)param_2;
  aFStack_18[0].FieldName = FFieldNotificationClassDescriptor::LongPressAnimationName.FieldName;
  aFStack_18[0].BitNumber = FFieldNotificationClassDescriptor::LongPressAnimationName.BitNumber;
  UWidget::BroadcastFieldValueChanged((UWidget *)((longlong)param_1 + 0x28),aFStack_18);
  return;
}

// SetInputEventField_WrapperImpl @ 14b76a440

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_W_CommonButton::SetInputEventField_WrapperImpl(void *param_1,void *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  UDS_LongPressProcessor *this;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 auStackX_10 [8];
  FReadAccessScope FStack_28;
  
  if (*(char *)param_2 != '\0') {
    if (*(char *)((longlong)param_1 + 0x890) == '\0') {
      OnClicked(param_1);
      return;
    }
    this = *(UDS_LongPressProcessor **)((longlong)param_1 + 0x12d0);
    if (*(char *)((longlong)param_2 + 1) == '\0') {
      *(undefined1 *)((longlong)param_1 + 0x12d8) = 0;
      if (this != (UDS_LongPressProcessor *)0x0) {
        UDS_LongPressProcessor::OnRelease(this);
      }
      if (*(longlong *)((longlong)param_1 + 0x878) != 0) {
        *(undefined1 *)((longlong)param_1 + 0x9a0) = 1;
        *(undefined1 *)((longlong)param_1 + 0x9a3) =
             *(undefined1 *)(*(longlong *)((longlong)param_1 + 0x878) + 0x1756);
        *(undefined1 *)((longlong)param_1 + 0x9a1) =
             *(undefined1 *)(*(longlong *)((longlong)param_1 + 0x878) + 0x1754);
        *(undefined1 *)((longlong)param_1 + 0x9a2) =
             *(undefined1 *)(*(longlong *)((longlong)param_1 + 0x878) + 0x1755);
        *(undefined4 *)((longlong)param_1 + 0x9a4) = 6;
      }
      FStack_28.DestructionSentinel.AccessType =
           FFieldNotificationClassDescriptor::OnReleasedEvent.FieldName.ComparisonIndex.Value;
      FStack_28.DestructionSentinel._4_4_ =
           FFieldNotificationClassDescriptor::OnReleasedEvent.FieldName.Number;
      FStack_28.DestructionSentinel.Accessor._0_4_ =
           FFieldNotificationClassDescriptor::OnReleasedEvent.BitNumber;
      UWidget::BroadcastFieldValueChanged
                ((UWidget *)((longlong)param_1 + 0x28),(FFieldId *)&FStack_28);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 ((longlong)param_1 + 0x9a8),&FStack_28);
      if ((*(int *)((longlong)param_1 + 0x9b8) != 0) &&
         (plVar3 = *(longlong **)((longlong)param_1 + 0x9b0), plVar3 != (longlong *)0x0)) {
        (**(code **)(*plVar3 + 0x68))(plVar3,param_1);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&FStack_28);
      if (*(UDS_W_CommonButtonBase **)((longlong)param_1 + 0x878) != (UDS_W_CommonButtonBase *)0x0)
      {
        UDS_W_CommonButtonBase::Called_OnReleased
                  (*(UDS_W_CommonButtonBase **)((longlong)param_1 + 0x878));
        *(undefined4 *)((longlong)param_1 + 0x880) =
             *(undefined4 *)(*(longlong *)((longlong)param_1 + 0x878) + 0x1750);
        if (*(longlong *)((longlong)param_1 + 0x878) != 0) {
          puVar4 = *(undefined8 **)((longlong)param_1 + 0x8b8);
          iVar2 = *(int *)((longlong)param_1 + 0x8c0);
          puVar1 = puVar4 + iVar2;
          while( true ) {
            if (*(int *)((longlong)param_1 + 0x8c0) != iVar2) {
              `TCheckedPointerIterator<TObjectPtr<UDS_ButtonSwitcher>,int,0>::operator!='::__l2::
              <lambda_1>::operator()(auStackX_10);
            }
            if (puVar4 == puVar1) break;
            if ((UDS_ButtonSwitcher *)*puVar4 != (UDS_ButtonSwitcher *)0x0) {
              UDS_ButtonSwitcher::SetButtonEvent
                        ((UDS_ButtonSwitcher *)*puVar4,
                         (EDS_ButtonStateType *)(*(longlong *)((longlong)param_1 + 0x878) + 0x1750))
              ;
            }
            puVar4 = puVar4 + 1;
          }
        }
      }
    }
    else {
      *(undefined1 *)((longlong)param_1 + 0x12d8) = 1;
      if (this != (UDS_LongPressProcessor *)0x0) {
        UDS_LongPressProcessor::OnPress(this);
      }
      if (*(longlong *)((longlong)param_1 + 0x878) != 0) {
        *(undefined1 *)((longlong)param_1 + 0x960) = 1;
        *(undefined1 *)((longlong)param_1 + 0x963) =
             *(undefined1 *)(*(longlong *)((longlong)param_1 + 0x878) + 0x1756);
        *(undefined1 *)((longlong)param_1 + 0x961) =
             *(undefined1 *)(*(longlong *)((longlong)param_1 + 0x878) + 0x1754);
        *(undefined1 *)((longlong)param_1 + 0x962) =
             *(undefined1 *)(*(longlong *)((longlong)param_1 + 0x878) + 0x1755);
        *(undefined4 *)((longlong)param_1 + 0x964) = 3;
      }
      FStack_28.DestructionSentinel.AccessType =
           FFieldNotificationClassDescriptor::OnPressedEvent.FieldName.ComparisonIndex.Value;
      FStack_28.DestructionSentinel._4_4_ =
           FFieldNotificationClassDescriptor::OnPressedEvent.FieldName.Number;
      FStack_28.DestructionSentinel.Accessor._0_4_ =
           FFieldNotificationClassDescriptor::OnPressedEvent.BitNumber;
      UWidget::BroadcastFieldValueChanged
                ((UWidget *)((longlong)param_1 + 0x28),(FFieldId *)&FStack_28);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 ((longlong)param_1 + 0x968),&FStack_28);
      if ((*(int *)((longlong)param_1 + 0x978) != 0) &&
         (plVar3 = *(longlong **)((longlong)param_1 + 0x970), plVar3 != (longlong *)0x0)) {
        (**(code **)(*plVar3 + 0x68))(plVar3,param_1);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&FStack_28);
      if (*(UDS_W_CommonButtonBase **)((longlong)param_1 + 0x878) != (UDS_W_CommonButtonBase *)0x0)
      {
        UDS_W_CommonButtonBase::Called_OnPressed
                  (*(UDS_W_CommonButtonBase **)((longlong)param_1 + 0x878));
        *(undefined4 *)((longlong)param_1 + 0x880) =
             *(undefined4 *)(*(longlong *)((longlong)param_1 + 0x878) + 0x1750);
        if (*(longlong *)((longlong)param_1 + 0x878) != 0) {
          puVar4 = *(undefined8 **)((longlong)param_1 + 0x8b8);
          iVar2 = *(int *)((longlong)param_1 + 0x8c0);
          puVar1 = puVar4 + iVar2;
          while( true ) {
            if (*(int *)((longlong)param_1 + 0x8c0) != iVar2) {
              `TCheckedPointerIterator<TObjectPtr<UDS_ButtonSwitcher>,int,0>::operator!='::__l2::
              <lambda_1>::operator()(auStackX_10);
            }
            if (puVar4 == puVar1) break;
            if ((UDS_ButtonSwitcher *)*puVar4 != (UDS_ButtonSwitcher *)0x0) {
              UDS_ButtonSwitcher::SetButtonEvent
                        ((UDS_ButtonSwitcher *)*puVar4,
                         (EDS_ButtonStateType *)(*(longlong *)((longlong)param_1 + 0x878) + 0x1750))
              ;
            }
            puVar4 = puVar4 + 1;
          }
        }
      }
    }
  }
  return;
}

// SetDSTooltipText_WrapperImpl @ 14b76a450

void __cdecl UDS_W_CommonButton::SetDSTooltipText_WrapperImpl(void *param_1,void *param_2)

{
  FDS_Text::operator=((FDS_Text *)((longlong)param_1 + 0x8c8),param_2);
  return;
}

// SetbSelectedButton_WrapperImpl @ 14b76a460

void __cdecl UDS_W_CommonButton::SetbSelectedButton_WrapperImpl(void *param_1,void *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 auStackX_8 [8];
  
  *(undefined1 *)((longlong)param_1 + 0x918) = *(undefined1 *)param_2;
  if (*(UDS_W_CommonButtonBase **)((longlong)param_1 + 0x878) != (UDS_W_CommonButtonBase *)0x0) {
    UDS_W_CommonButtonBase::SetSelected
              (*(UDS_W_CommonButtonBase **)((longlong)param_1 + 0x878),
               (bool *)((longlong)param_1 + 0x918));
    *(undefined4 *)((longlong)param_1 + 0x880) =
         *(undefined4 *)(*(longlong *)((longlong)param_1 + 0x878) + 0x1750);
    if (*(longlong *)((longlong)param_1 + 0x878) != 0) {
      puVar3 = *(undefined8 **)((longlong)param_1 + 0x8b8);
      iVar2 = *(int *)((longlong)param_1 + 0x8c0);
      puVar1 = puVar3 + iVar2;
      while( true ) {
        if (*(int *)((longlong)param_1 + 0x8c0) != iVar2) {
          `TCheckedPointerIterator<TObjectPtr<UDS_ButtonSwitcher>,int,0>::operator!='::__l2::
          <lambda_1>::operator()(auStackX_8);
        }
        if (puVar3 == puVar1) break;
        if ((UDS_ButtonSwitcher *)*puVar3 != (UDS_ButtonSwitcher *)0x0) {
          UDS_ButtonSwitcher::SetButtonEvent
                    ((UDS_ButtonSwitcher *)*puVar3,
                     (EDS_ButtonStateType *)(*(longlong *)((longlong)param_1 + 0x878) + 0x1750));
        }
        puVar3 = puVar3 + 1;
      }
    }
  }
  return;
}

// SetbDisabledButton_WrapperImpl @ 14b76a470

void __cdecl UDS_W_CommonButton::SetbDisabledButton_WrapperImpl(void *param_1,void *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 auStackX_8 [8];
  
  *(undefined1 *)((longlong)param_1 + 0x919) = *(undefined1 *)param_2;
  if (*(UDS_W_CommonButtonBase **)((longlong)param_1 + 0x878) != (UDS_W_CommonButtonBase *)0x0) {
    UDS_W_CommonButtonBase::SetDisabled
              (*(UDS_W_CommonButtonBase **)((longlong)param_1 + 0x878),
               (bool *)((longlong)param_1 + 0x919));
    *(undefined4 *)((longlong)param_1 + 0x880) =
         *(undefined4 *)(*(longlong *)((longlong)param_1 + 0x878) + 0x1750);
    if (*(longlong *)((longlong)param_1 + 0x878) != 0) {
      puVar3 = *(undefined8 **)((longlong)param_1 + 0x8b8);
      iVar2 = *(int *)((longlong)param_1 + 0x8c0);
      puVar1 = puVar3 + iVar2;
      while( true ) {
        if (*(int *)((longlong)param_1 + 0x8c0) != iVar2) {
          `TCheckedPointerIterator<TObjectPtr<UDS_ButtonSwitcher>,int,0>::operator!='::__l2::
          <lambda_1>::operator()(auStackX_8);
        }
        if (puVar3 == puVar1) break;
        if ((UDS_ButtonSwitcher *)*puVar3 != (UDS_ButtonSwitcher *)0x0) {
          UDS_ButtonSwitcher::SetButtonEvent
                    ((UDS_ButtonSwitcher *)*puVar3,
                     (EDS_ButtonStateType *)(*(longlong *)((longlong)param_1 + 0x878) + 0x1750));
        }
        puVar3 = puVar3 + 1;
      }
    }
  }
  return;
}

// SetbLackedButton_WrapperImpl @ 14b76a480

void __cdecl UDS_W_CommonButton::SetbLackedButton_WrapperImpl(void *param_1,void *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 auStackX_8 [8];
  
  *(undefined1 *)((longlong)param_1 + 0x91a) = *(undefined1 *)param_2;
  if (*(UDS_W_CommonButtonBase **)((longlong)param_1 + 0x878) != (UDS_W_CommonButtonBase *)0x0) {
    UDS_W_CommonButtonBase::SetLacked
              (*(UDS_W_CommonButtonBase **)((longlong)param_1 + 0x878),
               (bool *)((longlong)param_1 + 0x91a));
    *(undefined4 *)((longlong)param_1 + 0x880) =
         *(undefined4 *)(*(longlong *)((longlong)param_1 + 0x878) + 0x1750);
    if (*(longlong *)((longlong)param_1 + 0x878) != 0) {
      puVar3 = *(undefined8 **)((longlong)param_1 + 0x8b8);
      iVar2 = *(int *)((longlong)param_1 + 0x8c0);
      puVar1 = puVar3 + iVar2;
      while( true ) {
        if (*(int *)((longlong)param_1 + 0x8c0) != iVar2) {
          `TCheckedPointerIterator<TObjectPtr<UDS_ButtonSwitcher>,int,0>::operator!='::__l2::
          <lambda_1>::operator()(auStackX_8);
        }
        if (puVar3 == puVar1) break;
        if ((UDS_ButtonSwitcher *)*puVar3 != (UDS_ButtonSwitcher *)0x0) {
          UDS_ButtonSwitcher::SetButtonEvent
                    ((UDS_ButtonSwitcher *)*puVar3,
                     (EDS_ButtonStateType *)(*(longlong *)((longlong)param_1 + 0x878) + 0x1750));
        }
        puVar3 = puVar3 + 1;
      }
    }
  }
  return;
}

// StaticClass @ 14b76a490

UClass * __cdecl UDS_W_CommonButton::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_W_CommonButton.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_W_CommonButton",
               &Z_Registration_Info_UClass_UDS_W_CommonButton.InnerSingleton,
               StaticRegisterNativesUDS_W_CommonButton,0x12e0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_W_CommonButton>,
               InternalVTableHelperCtorCaller<UDS_W_CommonButton>,local_res8,
               UDS_UserWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_W_CommonButton.InnerSingleton;
}

// UDS_W_CommonButton @ 14b76d750

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_W_CommonButton * __thiscall
UDS_W_CommonButton::UDS_W_CommonButton(UDS_W_CommonButton *this,FVTableHelper *param_1)

{
  UDS_UserWidget::UDS_UserWidget((UDS_UserWidget *)this,param_1);
  this->ButtonStateType = Normal;
  this->bSelectionFollowsFocus = false;
  this->bUnclickableDisableState = false;
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&_vftable__for__UCommonUserWidget__;
  this->_padding_ = (longlong)&_vftable__for__IUserObjectListEntry__;
  (this->ButtonBase).field0_0x0.DebugPtr = (UDS_W_CommonButtonBase *)0x0;
  this->MinWidth = 0;
  this->MinHeight = 0;
  this->OutofRangeStop = true;
  (this->LongPressAnimationName).ComparisonIndex = 0;
  (this->LongPressAnimationName).Number = 0;
  (this->InputEventField)._padding_ = '\0';
  this->IsHoverSlowdown = true;
  this->bEnableRightClick = false;
  (this->ButtonSwitcherArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ButtonSwitcherArray).ArrayNum = 0;
  (this->ButtonSwitcherArray).ArrayMax = 0;
  (this->DSTooltipText).StringTableType = None;
  (this->DSTooltipText).StringTableID = 0;
  (this->DSTooltipText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->DSTooltipText).StringEnumTableNameID.Number = 0;
  (this->DSTooltipText).DateTime.Ticks = 0;
  (this->DSTooltipText).TimeSpan.Ticks = 0;
  (this->DSTooltipText).TimeExpressionType = None;
  (this->DSTooltipText).IsExpression = false;
  (this->DSTooltipText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DSTooltipText).UniqueString.Data.ArrayNum = 0;
  (this->DSTooltipText).UniqueString.Data.ArrayMax = 0;
  (this->DSTooltipText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DSTooltipText).FormatArgs.ArrayNum = 0;
  (this->DSTooltipText).FormatArgs.ArrayMax = 0;
  this->bSelectedButton = false;
  this->bDisabledButton = false;
  this->bLackedButton = false;
  (this->OnHoveredEvent)._padding_ = '\0';
  (this->OnHoveredEvent).bIsCustomSelected = false;
  (this->OnHoveredEvent).bIsLacked = false;
  (this->OnHoveredEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->OnHoveredEvent).Delegate = 0;
  *(undefined8 *)&(this->OnHoveredEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->OnHoveredEvent).Delegate.field_0x10 = 0;
  (this->OnUnhoveredEvent)._padding_ = '\0';
  (this->OnUnhoveredEvent).bIsCustomSelected = false;
  (this->OnUnhoveredEvent).bIsLacked = false;
  (this->OnUnhoveredEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->OnUnhoveredEvent).Delegate = 0;
  *(undefined8 *)&(this->OnUnhoveredEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->OnUnhoveredEvent).Delegate.field_0x10 = 0;
  (this->OnPressedEvent)._padding_ = '\0';
  (this->OnPressedEvent).bIsCustomSelected = false;
  (this->OnPressedEvent).bIsLacked = false;
  (this->OnPressedEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->OnPressedEvent).Delegate = 0;
  *(undefined8 *)&(this->OnPressedEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->OnPressedEvent).Delegate.field_0x10 = 0;
  (this->OnPressingEvent)._padding_ = '\0';
  (this->OnPressingEvent).bIsCustomSelected = false;
  (this->OnPressingEvent).bIsLacked = false;
  (this->OnPressingEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->OnPressingEvent).Delegate = 0;
  *(undefined8 *)&(this->OnPressingEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->OnPressingEvent).Delegate.field_0x10 = 0;
  (this->OnReleasedEvent)._padding_ = '\0';
  (this->OnReleasedEvent).bIsCustomSelected = false;
  (this->OnReleasedEvent).bIsLacked = false;
  (this->OnReleasedEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->OnReleasedEvent).Delegate = 0;
  *(undefined8 *)&(this->OnReleasedEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->OnReleasedEvent).Delegate.field_0x10 = 0;
  (this->OnClickedEvent)._padding_ = '\0';
  (this->OnClickedEvent).bIsCustomSelected = false;
  (this->OnClickedEvent).bIsLacked = false;
  (this->OnClickedEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->OnClickedEvent).Delegate = 0;
  *(undefined8 *)&(this->OnClickedEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->OnClickedEvent).Delegate.field_0x10 = 0;
  *(undefined4 *)&(this->OnLongPressStartEvent)._padding_ = 0;
  (this->OnLongPressStartEvent)._padding_ = 0;
  (this->OnLongPressStartEvent)._padding_ = 0;
  *(undefined4 *)&(this->OnLongPressStartEvent)._padding_ = 0;
  *(undefined4 *)&(this->OnLongPressPressingEvent)._padding_ = 0;
  (this->OnLongPressPressingEvent)._padding_ = 0;
  (this->OnLongPressPressingEvent)._padding_ = 0;
  *(undefined4 *)&(this->OnLongPressPressingEvent)._padding_ = 0;
  *(undefined4 *)&(this->OnLongPressEndEvent)._padding_ = 0;
  (this->OnLongPressEndEvent)._padding_ = 0;
  (this->OnLongPressEndEvent)._padding_ = 0;
  *(undefined4 *)&(this->OnLongPressEndEvent)._padding_ = 0;
  (this->OnRightPressedEvent)._padding_ = '\0';
  (this->OnRightPressedEvent).bIsCustomSelected = false;
  (this->OnRightPressedEvent).bIsLacked = false;
  (this->OnRightPressedEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->OnRightPressedEvent).Delegate = 0;
  *(undefined8 *)&(this->OnRightPressedEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->OnRightPressedEvent).Delegate.field_0x10 = 0;
  (this->OnRightReleasedEvent)._padding_ = '\0';
  (this->OnRightReleasedEvent).bIsCustomSelected = false;
  (this->OnRightReleasedEvent).bIsLacked = false;
  (this->OnRightReleasedEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->OnRightReleasedEvent).Delegate = 0;
  *(undefined8 *)&(this->OnRightReleasedEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->OnRightReleasedEvent).Delegate.field_0x10 = 0;
  (this->OnRightClickedEvent)._padding_ = '\0';
  (this->OnRightClickedEvent).bIsCustomSelected = false;
  (this->OnRightClickedEvent).bIsLacked = false;
  (this->OnRightClickedEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->OnRightClickedEvent).Delegate = 0;
  *(undefined8 *)&(this->OnRightClickedEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->OnRightClickedEvent).Delegate.field_0x10 = 0;
  (this->EventMouseButtonUp).TargetWidget = (UDS_UserWidget *)0x0;
  FGeometry::FGeometry(&(this->EventMouseButtonUp).Geometry);
  FPointerEvent::FPointerEvent(&(this->EventMouseButtonUp).PointerEvent);
  FKeyEvent::FKeyEvent(&(this->EventMouseButtonUp).KeyEvent);
  (this->EventMouseButtonDown).TargetWidget = (UDS_UserWidget *)0x0;
  FGeometry::FGeometry(&(this->EventMouseButtonDown).Geometry);
  FPointerEvent::FPointerEvent(&(this->EventMouseButtonDown).PointerEvent);
  FKeyEvent::FKeyEvent(&(this->EventMouseButtonDown).KeyEvent);
  (this->EventMouseButtonDoubleClick).TargetWidget = (UDS_UserWidget *)0x0;
  FGeometry::FGeometry(&(this->EventMouseButtonDoubleClick).Geometry);
  FPointerEvent::FPointerEvent(&(this->EventMouseButtonDoubleClick).PointerEvent);
  FKeyEvent::FKeyEvent(&(this->EventMouseButtonDoubleClick).KeyEvent);
  (this->EventMouseMove).TargetWidget = (UDS_UserWidget *)0x0;
  FGeometry::FGeometry(&(this->EventMouseMove).Geometry);
  FPointerEvent::FPointerEvent(&(this->EventMouseMove).PointerEvent);
  FKeyEvent::FKeyEvent(&(this->EventMouseMove).KeyEvent);
  (this->EventMouseEnter).TargetWidget = (UDS_UserWidget *)0x0;
  FGeometry::FGeometry(&(this->EventMouseEnter).Geometry);
  FPointerEvent::FPointerEvent(&(this->EventMouseEnter).PointerEvent);
  FKeyEvent::FKeyEvent(&(this->EventMouseEnter).KeyEvent);
  (this->EventMouseLeave).TargetWidget = (UDS_UserWidget *)0x0;
  FGeometry::FGeometry(&(this->EventMouseLeave).Geometry);
  FPointerEvent::FPointerEvent(&(this->EventMouseLeave).PointerEvent);
  FKeyEvent::FKeyEvent(&(this->EventMouseLeave).KeyEvent);
  *(undefined1 *)&(this->EventOnDrag)._padding_ = 0;
  (this->EventOnDrag).DragDropOperation.field0_0x0.DebugPtr = (UDragDropOperation *)0x0;
  FPointerEvent::FPointerEvent(&(this->EventOnDrag).PointerEvent);
  (this->EventOnDrag).DragCanceled = false;
  *(undefined1 *)&(this->EventDragCancelled)._padding_ = 0;
  (this->EventDragCancelled).DragDropOperation.field0_0x0.DebugPtr = (UDragDropOperation *)0x0;
  FPointerEvent::FPointerEvent(&(this->EventDragCancelled).PointerEvent);
  (this->EventDragCancelled).DragCanceled = false;
  *(undefined1 *)&(this->EventOperationDrop)._padding_ = 0;
  (this->EventOperationDrop).DragDropOperation.field0_0x0.DebugPtr = (UDragDropOperation *)0x0;
  FPointerEvent::FPointerEvent(&(this->EventOperationDrop).PointerEvent);
  (this->EventOperationDrop).DragCanceled = false;
  (this->LongPressProcessor).field0_0x0.DebugPtr = (UDS_LongPressProcessor *)0x0;
  this->bForceLongPress = false;
  this->bIsRightPress = false;
  return this;
}

// UDS_W_CommonButton @ 14b76db00

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_W_CommonButton * __thiscall
UDS_W_CommonButton::UDS_W_CommonButton(UDS_W_CommonButton *this,FObjectInitializer *param_1)

{
  UDS_UserWidget::UDS_UserWidget((UDS_UserWidget *)this,param_1);
  this->ButtonStateType = Normal;
  this->bSelectionFollowsFocus = false;
  this->bUnclickableDisableState = false;
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&_vftable__for__UCommonUserWidget__;
  this->_padding_ = (longlong)&_vftable__for__IUserObjectListEntry__;
  (this->ButtonBase).field0_0x0.DebugPtr = (UDS_W_CommonButtonBase *)0x0;
  this->MinWidth = 0;
  this->MinHeight = 0;
  this->OutofRangeStop = true;
  (this->LongPressAnimationName).ComparisonIndex = 0;
  (this->LongPressAnimationName).Number = 0;
  (this->InputEventField)._padding_ = '\0';
  this->IsHoverSlowdown = true;
  this->bEnableRightClick = false;
  (this->ButtonSwitcherArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ButtonSwitcherArray).ArrayNum = 0;
  (this->ButtonSwitcherArray).ArrayMax = 0;
  (this->DSTooltipText).StringTableType = None;
  (this->DSTooltipText).StringTableID = 0;
  (this->DSTooltipText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->DSTooltipText).StringEnumTableNameID.Number = 0;
  (this->DSTooltipText).DateTime.Ticks = 0;
  (this->DSTooltipText).TimeSpan.Ticks = 0;
  (this->DSTooltipText).TimeExpressionType = None;
  (this->DSTooltipText).IsExpression = false;
  (this->DSTooltipText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DSTooltipText).UniqueString.Data.ArrayNum = 0;
  (this->DSTooltipText).UniqueString.Data.ArrayMax = 0;
  (this->DSTooltipText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DSTooltipText).FormatArgs.ArrayNum = 0;
  (this->DSTooltipText).FormatArgs.ArrayMax = 0;
  this->bSelectedButton = false;
  this->bDisabledButton = false;
  this->bLackedButton = false;
  (this->OnHoveredEvent)._padding_ = '\0';
  (this->OnHoveredEvent).bIsCustomSelected = false;
  (this->OnHoveredEvent).bIsLacked = false;
  (this->OnHoveredEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->OnHoveredEvent).Delegate = 0;
  *(undefined8 *)&(this->OnHoveredEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->OnHoveredEvent).Delegate.field_0x10 = 0;
  (this->OnUnhoveredEvent)._padding_ = '\0';
  (this->OnUnhoveredEvent).bIsCustomSelected = false;
  (this->OnUnhoveredEvent).bIsLacked = false;
  (this->OnUnhoveredEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->OnUnhoveredEvent).Delegate = 0;
  *(undefined8 *)&(this->OnUnhoveredEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->OnUnhoveredEvent).Delegate.field_0x10 = 0;
  (this->OnPressedEvent)._padding_ = '\0';
  (this->OnPressedEvent).bIsCustomSelected = false;
  (this->OnPressedEvent).bIsLacked = false;
  (this->OnPressedEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->OnPressedEvent).Delegate = 0;
  *(undefined8 *)&(this->OnPressedEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->OnPressedEvent).Delegate.field_0x10 = 0;
  (this->OnPressingEvent)._padding_ = '\0';
  (this->OnPressingEvent).bIsCustomSelected = false;
  (this->OnPressingEvent).bIsLacked = false;
  (this->OnPressingEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->OnPressingEvent).Delegate = 0;
  *(undefined8 *)&(this->OnPressingEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->OnPressingEvent).Delegate.field_0x10 = 0;
  (this->OnReleasedEvent)._padding_ = '\0';
  (this->OnReleasedEvent).bIsCustomSelected = false;
  (this->OnReleasedEvent).bIsLacked = false;
  (this->OnReleasedEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->OnReleasedEvent).Delegate = 0;
  *(undefined8 *)&(this->OnReleasedEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->OnReleasedEvent).Delegate.field_0x10 = 0;
  (this->OnClickedEvent)._padding_ = '\0';
  (this->OnClickedEvent).bIsCustomSelected = false;
  (this->OnClickedEvent).bIsLacked = false;
  (this->OnClickedEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->OnClickedEvent).Delegate = 0;
  *(undefined8 *)&(this->OnClickedEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->OnClickedEvent).Delegate.field_0x10 = 0;
  *(undefined4 *)&(this->OnLongPressStartEvent)._padding_ = 0;
  (this->OnLongPressStartEvent)._padding_ = 0;
  (this->OnLongPressStartEvent)._padding_ = 0;
  *(undefined4 *)&(this->OnLongPressStartEvent)._padding_ = 0;
  *(undefined4 *)&(this->OnLongPressPressingEvent)._padding_ = 0;
  (this->OnLongPressPressingEvent)._padding_ = 0;
  (this->OnLongPressPressingEvent)._padding_ = 0;
  *(undefined4 *)&(this->OnLongPressPressingEvent)._padding_ = 0;
  *(undefined4 *)&(this->OnLongPressEndEvent)._padding_ = 0;
  (this->OnLongPressEndEvent)._padding_ = 0;
  (this->OnLongPressEndEvent)._padding_ = 0;
  *(undefined4 *)&(this->OnLongPressEndEvent)._padding_ = 0;
  (this->OnRightPressedEvent)._padding_ = '\0';
  (this->OnRightPressedEvent).bIsCustomSelected = false;
  (this->OnRightPressedEvent).bIsLacked = false;
  (this->OnRightPressedEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->OnRightPressedEvent).Delegate = 0;
  *(undefined8 *)&(this->OnRightPressedEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->OnRightPressedEvent).Delegate.field_0x10 = 0;
  (this->OnRightReleasedEvent)._padding_ = '\0';
  (this->OnRightReleasedEvent).bIsCustomSelected = false;
  (this->OnRightReleasedEvent).bIsLacked = false;
  (this->OnRightReleasedEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->OnRightReleasedEvent).Delegate = 0;
  *(undefined8 *)&(this->OnRightReleasedEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->OnRightReleasedEvent).Delegate.field_0x10 = 0;
  (this->OnRightClickedEvent)._padding_ = '\0';
  (this->OnRightClickedEvent).bIsCustomSelected = false;
  (this->OnRightClickedEvent).bIsLacked = false;
  (this->OnRightClickedEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->OnRightClickedEvent).Delegate = 0;
  *(undefined8 *)&(this->OnRightClickedEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->OnRightClickedEvent).Delegate.field_0x10 = 0;
  (this->EventMouseButtonUp).TargetWidget = (UDS_UserWidget *)0x0;
  FGeometry::FGeometry(&(this->EventMouseButtonUp).Geometry);
  FPointerEvent::FPointerEvent(&(this->EventMouseButtonUp).PointerEvent);
  FKeyEvent::FKeyEvent(&(this->EventMouseButtonUp).KeyEvent);
  (this->EventMouseButtonDown).TargetWidget = (UDS_UserWidget *)0x0;
  FGeometry::FGeometry(&(this->EventMouseButtonDown).Geometry);
  FPointerEvent::FPointerEvent(&(this->EventMouseButtonDown).PointerEvent);
  FKeyEvent::FKeyEvent(&(this->EventMouseButtonDown).KeyEvent);
  (this->EventMouseButtonDoubleClick).TargetWidget = (UDS_UserWidget *)0x0;
  FGeometry::FGeometry(&(this->EventMouseButtonDoubleClick).Geometry);
  FPointerEvent::FPointerEvent(&(this->EventMouseButtonDoubleClick).PointerEvent);
  FKeyEvent::FKeyEvent(&(this->EventMouseButtonDoubleClick).KeyEvent);
  (this->EventMouseMove).TargetWidget = (UDS_UserWidget *)0x0;
  FGeometry::FGeometry(&(this->EventMouseMove).Geometry);
  FPointerEvent::FPointerEvent(&(this->EventMouseMove).PointerEvent);
  FKeyEvent::FKeyEvent(&(this->EventMouseMove).KeyEvent);
  (this->EventMouseEnter).TargetWidget = (UDS_UserWidget *)0x0;
  FGeometry::FGeometry(&(this->EventMouseEnter).Geometry);
  FPointerEvent::FPointerEvent(&(this->EventMouseEnter).PointerEvent);
  FKeyEvent::FKeyEvent(&(this->EventMouseEnter).KeyEvent);
  (this->EventMouseLeave).TargetWidget = (UDS_UserWidget *)0x0;
  FGeometry::FGeometry(&(this->EventMouseLeave).Geometry);
  FPointerEvent::FPointerEvent(&(this->EventMouseLeave).PointerEvent);
  FKeyEvent::FKeyEvent(&(this->EventMouseLeave).KeyEvent);
  *(undefined1 *)&(this->EventOnDrag)._padding_ = 0;
  (this->EventOnDrag).DragDropOperation.field0_0x0.DebugPtr = (UDragDropOperation *)0x0;
  FPointerEvent::FPointerEvent(&(this->EventOnDrag).PointerEvent);
  (this->EventOnDrag).DragCanceled = false;
  *(undefined1 *)&(this->EventDragCancelled)._padding_ = 0;
  (this->EventDragCancelled).DragDropOperation.field0_0x0.DebugPtr = (UDragDropOperation *)0x0;
  FPointerEvent::FPointerEvent(&(this->EventDragCancelled).PointerEvent);
  (this->EventDragCancelled).DragCanceled = false;
  *(undefined1 *)&(this->EventOperationDrop)._padding_ = 0;
  (this->EventOperationDrop).DragDropOperation.field0_0x0.DebugPtr = (UDragDropOperation *)0x0;
  FPointerEvent::FPointerEvent(&(this->EventOperationDrop).PointerEvent);
  (this->EventOperationDrop).DragCanceled = false;
  (this->LongPressProcessor).field0_0x0.DebugPtr = (UDS_LongPressProcessor *)0x0;
  this->bForceLongPress = false;
  this->bIsRightPress = false;
  return this;
}

// ~UDS_W_CommonButton @ 14b770b50

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_CommonButton::~UDS_W_CommonButton(UDS_W_CommonButton *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&_vftable__for__UCommonUserWidget__;
  this->_padding_ = (longlong)&_vftable__for__IUserObjectListEntry__;
  FPointerEvent::~FPointerEvent(&(this->EventOperationDrop).PointerEvent);
  FPointerEvent::~FPointerEvent(&(this->EventDragCancelled).PointerEvent);
  FPointerEvent::~FPointerEvent(&(this->EventOnDrag).PointerEvent);
  FKeyEvent::~FKeyEvent(&(this->EventMouseLeave).KeyEvent);
  FPointerEvent::~FPointerEvent(&(this->EventMouseLeave).PointerEvent);
  FKeyEvent::~FKeyEvent(&(this->EventMouseEnter).KeyEvent);
  FPointerEvent::~FPointerEvent(&(this->EventMouseEnter).PointerEvent);
  FKeyEvent::~FKeyEvent(&(this->EventMouseMove).KeyEvent);
  FPointerEvent::~FPointerEvent(&(this->EventMouseMove).PointerEvent);
  FKeyEvent::~FKeyEvent(&(this->EventMouseButtonDoubleClick).KeyEvent);
  FPointerEvent::~FPointerEvent(&(this->EventMouseButtonDoubleClick).PointerEvent);
  FKeyEvent::~FKeyEvent(&(this->EventMouseButtonDown).KeyEvent);
  FPointerEvent::~FPointerEvent(&(this->EventMouseButtonDown).PointerEvent);
  FKeyEvent::~FKeyEvent(&(this->EventMouseButtonUp).KeyEvent);
  FPointerEvent::~FPointerEvent(&(this->EventMouseButtonUp).PointerEvent);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->OnRightClickedEvent).Delegate);
  pvVar1 = *(void **)&(this->OnRightClickedEvent).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->OnRightClickedEvent).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->OnRightReleasedEvent).Delegate);
  pvVar1 = *(void **)&(this->OnRightReleasedEvent).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->OnRightReleasedEvent).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->OnRightPressedEvent).Delegate);
  pvVar1 = *(void **)&(this->OnRightPressedEvent).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->OnRightPressedEvent).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->OnLongPressEndEvent)._padding_);
  pvVar1 = (void *)(this->OnLongPressEndEvent)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->OnLongPressEndEvent)._padding_);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->OnLongPressPressingEvent)._padding_);
  pvVar1 = (void *)(this->OnLongPressPressingEvent)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->OnLongPressPressingEvent)._padding_);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->OnLongPressStartEvent)._padding_);
  pvVar1 = (void *)(this->OnLongPressStartEvent)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->OnLongPressStartEvent)._padding_);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->OnClickedEvent).Delegate);
  pvVar1 = *(void **)&(this->OnClickedEvent).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->OnClickedEvent).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->OnReleasedEvent).Delegate);
  pvVar1 = *(void **)&(this->OnReleasedEvent).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->OnReleasedEvent).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->OnPressingEvent).Delegate);
  pvVar1 = *(void **)&(this->OnPressingEvent).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->OnPressingEvent).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->OnPressedEvent).Delegate);
  pvVar1 = *(void **)&(this->OnPressedEvent).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->OnPressedEvent).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->OnUnhoveredEvent).Delegate);
  pvVar1 = *(void **)&(this->OnUnhoveredEvent).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->OnUnhoveredEvent).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->OnHoveredEvent).Delegate);
  pvVar1 = *(void **)&(this->OnHoveredEvent).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->OnHoveredEvent).Delegate);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->DSTooltipText).FormatArgs.AllocatorInstance.Data,
             (this->DSTooltipText).FormatArgs.ArrayNum);
  pFVar2 = (this->DSTooltipText).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->DSTooltipText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ButtonSwitcherArray).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UDS_UserWidget::~UDS_UserWidget((UDS_UserWidget *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b7750f0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

IClassDescriptor * __thiscall
UDS_W_CommonButton::GetFieldNotificationDescriptor(UDS_W_CommonButton *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_W_CommonButton::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b7756a0

UClass * __cdecl UDS_W_CommonButton::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_W_CommonButton.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_W_CommonButton",
               &Z_Registration_Info_UClass_UDS_W_CommonButton.InnerSingleton,
               StaticRegisterNativesUDS_W_CommonButton,0x12e0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_W_CommonButton>,
               InternalVTableHelperCtorCaller<UDS_W_CommonButton>,local_res8,
               UDS_UserWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_W_CommonButton.InnerSingleton;
}

// PreWidgetBinding @ 14b775d80

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_CommonButton::PreWidgetBinding(UDS_W_CommonButton *this)

{
  return;
}

// StaticRegisterNativesUDS_W_CommonButton @ 14b777be0

void __cdecl UDS_W_CommonButton::StaticRegisterNativesUDS_W_CommonButton(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 9;
  local_18.DataPtr = Z_Construct_UClass_UDS_W_CommonButton_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnClicked @ 14b77adf0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_W_CommonButton::execOnClicked(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnClicked((UDS_W_CommonButton *)param_1);
  return;
}

// execOnFocusLosted @ 14b77ae30

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_W_CommonButton::execOnFocusLosted(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnFocusLosted((UDS_W_CommonButton *)param_1);
  return;
}

// execOnFocused @ 14b77ae50

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_W_CommonButton::execOnFocused(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnFocused((UDS_W_CommonButton *)param_1);
  return;
}

// execOnHovered @ 14b77ae70

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_W_CommonButton::execOnHovered(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnHovered((UDS_W_CommonButton *)param_1);
  return;
}

// execOnPressed @ 14b77ae90

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_W_CommonButton::execOnPressed(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnPressed((UDS_W_CommonButton *)param_1);
  return;
}

// execOnReleased @ 14b77aeb0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_W_CommonButton::execOnReleased(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnReleased((UDS_W_CommonButton *)param_1);
  return;
}

// execOnUnhovered @ 14b77aed0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_W_CommonButton::execOnUnhovered(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnUnhovered((UDS_W_CommonButton *)param_1);
  return;
}

// execReleaseButtonSelectedEvent @ 14b77af50

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_W_CommonButton::execReleaseButtonSelectedEvent(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ReleaseButtonSelectedEvent((UDS_W_CommonButton *)param_1);
  return;
}

// execSetSelectedButton @ 14b77b350

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_W_CommonButton::execSetSelectedButton(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool *pbVar2;
  bool local_res10 [8];
  
  local_res10[0] = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pbVar2 = local_res10;
  if ((bool *)param_2->MostRecentPropertyAddress != (bool *)0x0) {
    pbVar2 = (bool *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetSelectedButton((UDS_W_CommonButton *)param_1,pbVar2);
  return;
}

// CheckLongPress @ 14bc8bdc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_CommonButton::CheckLongPress(UDS_W_CommonButton *this)

{
  EDS_ButtonStateType EVar1;
  UDS_LongPressProcessor *pUVar2;
  double dVar3;
  UDS_LogManager *pUVar4;
  FDateTime FVar5;
  longlong lVar6;
  float fVar7;
  undefined1 auStackY_198 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_158;
  ulonglong uStack_38;
  
  EVar1 = this->ButtonStateType;
  if (((((EVar1 == Normal_Clicked) || (EVar1 == Selected_Clicked)) || (EVar1 == Disabled_Clicked))
      || (this->bForceLongPress != false)) &&
     (pUVar2 = (this->LongPressProcessor).field0_0x0.DebugPtr,
     pUVar2 != (UDS_LongPressProcessor *)0x0)) {
    uStack_38 = __security_cookie.value ^ (ulonglong)auStackY_198;
    if (((pUVar2->bUsableLongPress != false) && (pUVar2->bIsPress != false)) &&
       ((pUVar2->LongPressEventType != Once || (pUVar2->bIsOnceNotify != true)))) {
      if (0.0 < pUVar2->LongPressTime) {
        FVar5 = FDateTime::Now();
        dVar3 = (double)(*(longlong *)FVar5.Ticks - (pUVar2->pressedTime).Ticks) *
                __real_3e7ad7f29abcaf48;
        if ((double)pUVar2->LongPressDelay <= dVar3) {
          if (dVar3 < (double)(pUVar2->LongPressDelay + pUVar2->LongPressTime)) {
            lVar6 = 0x58;
            if (pUVar2->LongPressRatio == 0.0) {
              lVar6 = 0x28;
            }
            TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::ExecuteIfBound
                      ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                       ((longlong)&pUVar2->_padding_ + lVar6));
            fVar7 = (float)((dVar3 - (double)pUVar2->LongPressDelay) / (double)pUVar2->LongPressTime
                           );
            if (__real_3f800000 <= fVar7) {
              fVar7 = __real_3f800000;
            }
            pUVar2->LongPressRatio = fVar7;
          }
          else {
            if (pUVar2->LongPressEventType == Once) {
              pUVar2->bIsOnceNotify = true;
            }
            pUVar2->LongPressRatio = 1.0;
            TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::ExecuteIfBound
                      (&pUVar2->OnLongPressEndDelegate);
          }
          TDelegate<void___cdecl(float_const_&),FDefaultDelegateUserPolicy>::ExecuteIfBound
                    (&pUVar2->OnLongPressRatioDelegate,&pUVar2->LongPressRatio);
        }
        else {
          pUVar2->LongPressRatio = 0.0;
          TDelegate<void___cdecl(float_const_&),FDefaultDelegateUserPolicy>::ExecuteIfBound
                    (&pUVar2->OnLongPressRatioDelegate,&pUVar2->LongPressRatio);
        }
      }
      else {
        pUVar4 = UDS_LogManager::GetInst();
        if (pUVar4 != (UDS_LogManager *)0x0) {
          pUVar4 = UDS_LogManager::GetInst();
          TStack_158._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&TStack_158,"UDS_LongPressProcessor::CheckLongPress",0x26,Yes);
          UDS_LogManager::PrintLog
                    (pUVar4,1,Warning,TStack_158.Ptr,0x14,
                     L"LongPressTime must not be \'0\' or less.");
          if ((void *)TStack_158._padding_ != (void *)0x0) {
            FMemory::Free((void *)TStack_158._padding_);
          }
        }
      }
    }
    return;
  }
  return;
}

// CheckPressingEvent @ 14bc8be00

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_CommonButton::CheckPressingEvent(UDS_W_CommonButton *this)

{
  EDS_ButtonStateType EVar1;
  UDS_W_CommonButtonBase *pUVar2;
  FFieldId local_18 [2];
  
  EVar1 = this->ButtonStateType;
  if (((EVar1 == Normal_Clicked) || (EVar1 == Selected_Clicked)) || (EVar1 == Disabled_Clicked)) {
    pUVar2 = (this->ButtonBase).field0_0x0.DebugPtr;
    if (pUVar2 != (UDS_W_CommonButtonBase *)0x0) {
      (this->OnPressingEvent)._padding_ = '\x01';
      (this->OnPressingEvent).bIsCustomDisabled = pUVar2->bIsCustomDisabled;
      (this->OnPressingEvent).bIsCustomSelected =
           ((this->ButtonBase).field0_0x0.DebugPtr)->bIsCustomSelected;
      (this->OnPressingEvent).bIsLacked = ((this->ButtonBase).field0_0x0.DebugPtr)->bIsLacked;
      (this->OnPressingEvent).ButtonEventType = Pressing;
    }
    local_18[0].FieldName = FFieldNotificationClassDescriptor::OnPressingEvent.FieldName;
    local_18[0].BitNumber = FFieldNotificationClassDescriptor::OnPressingEvent.BitNumber;
    UWidget::BroadcastFieldValueChanged((UWidget *)&this->_padding_,local_18);
  }
  return;
}

// CloseTooltipText @ 14bc8c790

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_CommonButton::CloseTooltipText(UDS_W_CommonButton *this)

{
  UDS_WindowManager *this_00;
  UDS_LogManager *pUVar1;
  undefined1 auStackY_178 [32];
  float local_148;
  uint local_144 [3];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 == (UDS_WindowManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_W_CommonButton::CloseTooltipText",0x24,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Warning,local_138.Ptr,0x20f,L"windowManager == nullptr");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
        return;
      }
    }
  }
  else {
    local_148 = 0.0;
    local_144[0] = 0;
    UDS_WindowManager::CloseWindow(this_00,CommonTextTooltip,local_144,&local_148);
  }
  return;
}

// InitWidgetBinding @ 14bca57d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_CommonButton::InitWidgetBinding(UDS_W_CommonButton *this,UWidget *param_1)

{
  int *piVar1;
  int iVar2;
  UDS_LogManager *pUVar3;
  UClass *pUVar4;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  if (param_1 == (UWidget *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_W_CommonButton::InitWidgetBinding",0x25,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,local_138.Ptr,0x7d,L"InitWidgetBinding - InWidget is nullptr");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    pUVar4 = Z_Construct_UClass_UDS_W_CommonButtonBase_NoRegister();
    iVar2 = (int)pUVar4->_padding_;
    if ((iVar2 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar2 * 8)
        == &pUVar4->_padding_)) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      (this->ButtonBase).field0_0x0.DebugPtr = (UDS_W_CommonButtonBase *)param_1;
    }
    if (this->AutoCachedButtonSwitcher != false) {
      pUVar4 = Z_Construct_UClass_UDS_ButtonSwitcher_NoRegister();
      iVar2 = (int)pUVar4->_padding_;
      if ((iVar2 <= *(int *)(param_1->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
          &pUVar4->_padding_)) {
        iVar2 = (this->ButtonSwitcherArray).ArrayNum;
        piVar1 = &(this->ButtonSwitcherArray).ArrayMax;
        if (iVar2 == *piVar1) {
          iVar2 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&(this->ButtonSwitcherArray).AllocatorInstance,piVar1);
        }
        (this->ButtonSwitcherArray).ArrayNum = iVar2 + 1;
        *(UWidget **)((this->ButtonSwitcherArray).AllocatorInstance.Data + (longlong)iVar2 * 8) =
             param_1;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
      }
    }
  }
  return;
}

// NativeConstruct @ 14bcaac60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UDS_W_CommonButton::NativeConstruct(UDS_W_CommonButton *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SWidget *pSVar2;
  UClass *pUVar3;
  UDS_LongPressProcessor *pUVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  TSharedRef<SWidget,1> *pTVar7;
  FName *pFVar8;
  longlong *plVar9;
  undefined1 auStack_118 [32];
  TSharedRef<SWidget,1> local_f8;
  FName local_e8;
  FDestructionSentinel local_e0;
  undefined1 *local_c8;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_118;
  UDS_UserWidget::NativeConstruct((UDS_UserWidget *)this);
  if ((this->LongPressProcessor).field0_0x0.DebugPtr == (UDS_LongPressProcessor *)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar3 = Z_Construct_UClass_UDS_LongPressProcessor_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_b8,pUVar3);
    local_b8._8_8_ = this;
    pUVar4 = (UDS_LongPressProcessor *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
    if (local_b8._64_8_ != 0) {
      plVar9 = (longlong *)(local_b8 + 0x50);
      if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
        plVar9 = (longlong *)local_b8._104_8_;
      }
      (**(code **)(*plVar9 + 0x10))(plVar9);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar4 != (UDS_LongPressProcessor *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->LongPressProcessor).field0_0x0.DebugPtr = pUVar4;
    if ((this->bIsLongPress != false) && (0.0 < this->LongPressTime)) {
      pUVar4->bUsableLongPress = this->bIsLongPress;
      ((this->LongPressProcessor).field0_0x0.DebugPtr)->LongPressTime = this->LongPressTime;
      local_f8.SharedReferenceCount.ReferenceController._0_4_ = 0;
      ((this->LongPressProcessor).field0_0x0.DebugPtr)->LongPressDelay = this->LongPressDelay;
      ((this->LongPressProcessor).field0_0x0.DebugPtr)->bIsOutofRangeStop = this->OutofRangeStop;
      pUVar4 = (this->LongPressProcessor).field0_0x0.DebugPtr;
      local_f8.Object = (SWidget *)OnLongPressStart;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &pUVar4->OnLongPressStartDelegate,(FWriteAccessScope *)&local_e0);
      local_c8 = &(pUVar4->OnLongPressStartDelegate).field_0x8;
      puVar5 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_c8);
      if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
        uVar6 = FDelegateHandle::GenerateNewID();
        puVar5[2] = uVar6;
        *puVar5 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_W_CommonButton____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar5[3] = 0;
        local_e8 = (FName)this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar5 + 3),(FObjectPtr)&local_e8);
        puVar5[4] = local_f8.Object;
        puVar5[5] = CONCAT44(local_f8.SharedReferenceCount.ReferenceController._4_4_,
                             local_f8.SharedReferenceCount.ReferenceController._0_4_);
      }
      if (local_e0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e0.Accessor,&local_e0);
      }
      pUVar4 = (this->LongPressProcessor).field0_0x0.DebugPtr;
      local_f8.Object = (SWidget *)OnLongPressSuccess;
      local_f8.SharedReferenceCount.ReferenceController._0_4_ = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &pUVar4->OnLongPressEndDelegate,(FWriteAccessScope *)&local_e0);
      local_c8 = &(pUVar4->OnLongPressEndDelegate).field_0x8;
      puVar5 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_c8);
      if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
        uVar6 = FDelegateHandle::GenerateNewID();
        puVar5[2] = uVar6;
        *puVar5 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_W_CommonButton____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar5[3] = 0;
        local_e8 = (FName)this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar5 + 3),(FObjectPtr)&local_e8);
        puVar5[4] = local_f8.Object;
        puVar5[5] = CONCAT44(local_f8.SharedReferenceCount.ReferenceController._4_4_,
                             local_f8.SharedReferenceCount.ReferenceController._0_4_);
      }
      if (local_e0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e0.Accessor,&local_e0);
      }
      pUVar4 = (this->LongPressProcessor).field0_0x0.DebugPtr;
      local_f8.Object = (SWidget *)OnLongPressPressing;
      local_f8.SharedReferenceCount.ReferenceController._0_4_ = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &pUVar4->OnLongPressPressingDelegate,(FWriteAccessScope *)&local_e0);
      local_c8 = &(pUVar4->OnLongPressPressingDelegate).field_0x8;
      puVar5 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_c8);
      if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
        uVar6 = FDelegateHandle::GenerateNewID();
        puVar5[2] = uVar6;
        *puVar5 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_W_CommonButton____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar5[3] = 0;
        local_e8 = (FName)this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar5 + 3),(FObjectPtr)&local_e8);
        puVar5[4] = local_f8.Object;
        puVar5[5] = CONCAT44(local_f8.SharedReferenceCount.ReferenceController._4_4_,
                             local_f8.SharedReferenceCount.ReferenceController._0_4_);
      }
      if (local_e0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e0.Accessor,&local_e0);
      }
      pUVar4 = (this->LongPressProcessor).field0_0x0.DebugPtr;
      local_f8.Object = (SWidget *)SetLongPressRatio;
      local_f8.SharedReferenceCount.ReferenceController._0_4_ = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &pUVar4->OnLongPressRatioDelegate,(FWriteAccessScope *)&local_e0);
      local_c8 = &(pUVar4->OnLongPressRatioDelegate).field_0x8;
      puVar5 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_c8);
      if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = &
                  ___7__TCommonDelegateInstanceState___A6AXAEBM_ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar6 = FDelegateHandle::GenerateNewID();
        puVar5[2] = uVar6;
        *puVar5 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_W_CommonButton____A6AXAEBM_ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar5[3] = 0;
        local_e8 = (FName)this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar5 + 3),(FObjectPtr)&local_e8);
        puVar5[4] = local_f8.Object;
        puVar5[5] = CONCAT44(local_f8.SharedReferenceCount.ReferenceController._4_4_,
                             local_f8.SharedReferenceCount.ReferenceController._0_4_);
      }
      if (local_e0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e0.Accessor,&local_e0);
      }
    }
  }
  if (this->IsHoverSlowdown == true) {
    pTVar7 = UWidget::TakeWidget((UWidget *)this,&local_f8);
    pTVar1 = (pTVar7->SharedReferenceCount).ReferenceController;
    pSVar2 = pTVar7->Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)
               CONCAT44(local_f8.SharedReferenceCount.ReferenceController._4_4_,
                        local_f8.SharedReferenceCount.ReferenceController._0_4_));
    if (pSVar2 != (SWidget *)0x0) {
      pFVar8 = ::FName::FName(&local_e8,"CommonButton");
      pSVar2->Tag = *pFVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  }
  return;
}

// NativeDestruct @ 14bcac3b0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_CommonButton::NativeDestruct(UDS_W_CommonButton *this)

{
  UDS_W_CommonButtonBase *pUVar1;
  UDS_LongPressProcessor *pUVar2;
  bool bVar3;
  UObject *pUVar4;
  ADS_PlayerController *this_00;
  FWeakObjectPtr local_res8 [4];
  
  pUVar1 = (this->ButtonBase).field0_0x0.DebugPtr;
  if (pUVar1 != (UDS_W_CommonButtonBase *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->field_0x15f0,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &((this->ButtonBase).field0_0x0.DebugPtr)->field_0x1610,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &((this->ButtonBase).field0_0x0.DebugPtr)->field_0x15b0,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &((this->ButtonBase).field0_0x0.DebugPtr)->field_0x15d0,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &((this->ButtonBase).field0_0x0.DebugPtr)->field_0x1570,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &((this->ButtonBase).field0_0x0.DebugPtr)->field_0x1630,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &((this->ButtonBase).field0_0x0.DebugPtr)->field_0x1650,this);
  }
  pUVar2 = (this->LongPressProcessor).field0_0x0.DebugPtr;
  if (pUVar2 != (UDS_LongPressProcessor *)0x0) {
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pUVar2->OnLongPressStartDelegate);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)
               &((this->LongPressProcessor).field0_0x0.DebugPtr)->OnLongPressEndDelegate);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)
               &((this->LongPressProcessor).field0_0x0.DebugPtr)->OnLongPressPressingDelegate);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)
               &((this->LongPressProcessor).field0_0x0.DebugPtr)->OnLongPressRatioDelegate);
    (this->LongPressProcessor).field0_0x0.DebugPtr = (UDS_LongPressProcessor *)0x0;
  }
  if (this->IsHoverSlowdown == true) {
    ADS_PlayerController::GetPlayerController();
    bVar3 = FWeakObjectPtr::IsValid(local_res8);
    if (bVar3) {
      pUVar4 = FWeakObjectPtr::Get(local_res8);
      if (pUVar4[0x3d].field_0x20 == '\x02') {
        this_00 = (ADS_PlayerController *)FWeakObjectPtr::Get(local_res8);
        ADS_PlayerController::SetCursorShape(this_00,Default);
      }
    }
  }
  UDS_UserWidget::NativeDestruct((UDS_UserWidget *)this);
  return;
}

// NativeOnDragCancelled @ 14bcac580

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_W_CommonButton::NativeOnDragCancelled
          (UDS_W_CommonButton *this,FDragDropEvent *param_1,UDragDropOperation *param_2)

{
  UFunction *pUVar1;
  FPointerEvent FStack_98;
  UDragDropOperation *pUStack_18;
  
  FPointerEvent::FPointerEvent(&FStack_98);
  FPointerEvent::operator=(&FStack_98,(FPointerEvent *)param_1);
  pUStack_18 = param_2;
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UUserWidget_OnDragCancelled);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&FStack_98);
  FPointerEvent::~FPointerEvent(&FStack_98);
  return;
}

// NativeOnDragDetected @ 14bcac590

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_W_CommonButton::NativeOnDragDetected
          (UDS_W_CommonButton *this,FGeometry *param_1,FPointerEvent *param_2,
          UDragDropOperation **param_3)

{
  UFunction *pUVar1;
  undefined1 auStack_148 [32];
  FGeometry FStack_128;
  FGeometry FStack_e8;
  FPointerEvent FStack_b0;
  UDragDropOperation *pUStack_30;
  ulonglong uStack_28;
  
  uStack_28 = __security_cookie.value ^ (ulonglong)auStack_148;
  FStack_128.Size = param_1->Size;
  FStack_128._8_8_ = *(undefined8 *)&param_1->Scale;
  FStack_128._16_8_ = *(undefined8 *)((longlong)&(param_1->AbsolutePosition).field0_0x0 + 4);
  FStack_128._24_8_ = *(undefined8 *)((longlong)&(param_1->Position).field0_0x0 + 4);
  FStack_128.AccumulatedRenderTransform.M.M._4_8_ =
       *(undefined8 *)((param_1->AccumulatedRenderTransform).M.M[0] + 1);
  FStack_128.AccumulatedRenderTransform._12_8_ =
       *(undefined8 *)((param_1->AccumulatedRenderTransform).M.M[1] + 1);
  FStack_128._48_8_ =
       *(undefined8 *)((longlong)&(param_1->AccumulatedRenderTransform).Trans.field0_0x0 + 4);
  FGeometry::FGeometry(&FStack_e8);
  FPointerEvent::FPointerEvent(&FStack_b0);
  FGeometry::operator=(&FStack_e8,&FStack_128);
  FPointerEvent::operator=(&FStack_b0,param_2);
  pUStack_30 = *param_3;
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UUserWidget_OnDragDetected);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&FStack_e8);
  *param_3 = pUStack_30;
  FPointerEvent::~FPointerEvent(&FStack_b0);
  return;
}

// NativeOnDrop @ 14bcac5a0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UDS_W_CommonButton::NativeOnDrop
          (UDS_W_CommonButton *this,FGeometry *param_1,FDragDropEvent *param_2,
          UDragDropOperation *param_3)

{
  UUserWidget::NativeOnDrop((UUserWidget *)this,param_1,param_2,param_3);
  return false;
}

// NativeOnMouseButtonDoubleClick @ 14bcad2d0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
UDS_W_CommonButton::NativeOnMouseButtonDoubleClick
          (UDS_W_CommonButton *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  FFieldId local_d8;
  FReply local_c8;
  
  UCommonUserWidget::NativeOnMouseButtonDoubleClick
            ((UCommonUserWidget *)this,&local_c8,param_1,param_2);
  FReply::~FReply(&local_c8);
  (this->EventMouseButtonDoubleClick).TargetWidget = (UDS_UserWidget *)this;
  FGeometry::operator=(&(this->EventMouseButtonDoubleClick).Geometry,param_1);
  FPointerEvent::operator=(&(this->EventMouseButtonDoubleClick).PointerEvent,param_2);
  local_d8.FieldName = FFieldNotificationClassDescriptor::EventMouseButtonDoubleClick.FieldName;
  local_d8.BitNumber = FFieldNotificationClassDescriptor::EventMouseButtonDoubleClick.BitNumber;
  UWidget::BroadcastFieldValueChanged((UWidget *)&this->_padding_,&local_d8);
  FReply::FReply(__return_storage_ptr__,true);
  return __return_storage_ptr__;
}

// NativeOnMouseButtonDown @ 14bcad410

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
UDS_W_CommonButton::NativeOnMouseButtonDown
          (UDS_W_CommonButton *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  TSet<FKey,DefaultKeyFuncs<FKey,0>,FDefaultSetAllocator> *pTVar1;
  UDS_W_CommonButtonBase *pUVar2;
  FName FVar3;
  FSharedReferencer<1> FVar4;
  uint uVar5;
  TSharedRef<SWidget,1> *pTVar6;
  FReply *pFVar7;
  ForElementType<FSetElementId> FVar8;
  int iVar9;
  TSharedRef<SWidget,1> local_f8;
  FReply local_e8;
  
  FVar4.ReferenceController =
       EKeys::RightMouseButton.KeyDetails.SharedReferenceCount.ReferenceController;
  FVar3 = EKeys::RightMouseButton.KeyName;
  if (this->bEnableRightClick != false) {
    if (EKeys::RightMouseButton.KeyDetails.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (EKeys::RightMouseButton.KeyDetails.SharedReferenceCount.ReferenceController)->
      SharedReferenceCount =
           (atomic<int>)
           ((int)(EKeys::RightMouseButton.KeyDetails.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar1 = param_2->PressedButtons;
    uVar5 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
    if (*(int *)&(pTVar1->Elements).field_0x8 != *(int *)&(pTVar1->Elements).field_0x34) {
      FVar8 = (pTVar1->Hash).SecondaryData;
      if (FVar8 == (ForElementType<FSetElementId>)0x0) {
        FVar8 = (ForElementType<FSetElementId>)&pTVar1->Hash;
      }
      iVar9 = *(int *)((longlong)FVar8 +
                      (ulonglong)(pTVar1->HashSize - 1U & FVar3.Number + uVar5) * 4);
      if (iVar9 != -1) {
        do {
          if (*(FName *)((longlong)iVar9 * 0x20 + *(longlong *)&pTVar1->Elements) == FVar3) {
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (FVar4.ReferenceController);
            if (iVar9 != -1) {
              pUVar2 = (this->ButtonBase).field0_0x0.DebugPtr;
              this->bIsRightPress = true;
              if (pUVar2 != (UDS_W_CommonButtonBase *)0x0) {
                (this->OnRightPressedEvent)._padding_ = '\x01';
                (this->OnRightPressedEvent).bIsCustomDisabled = pUVar2->bIsCustomDisabled;
                (this->OnRightPressedEvent).bIsCustomSelected =
                     ((this->ButtonBase).field0_0x0.DebugPtr)->bIsCustomSelected;
                (this->OnRightPressedEvent).bIsLacked =
                     ((this->ButtonBase).field0_0x0.DebugPtr)->bIsLacked;
                (this->OnRightPressedEvent).ButtonEventType = RightPress;
              }
              local_f8.Object =
                   (SWidget *)FFieldNotificationClassDescriptor::OnRightPressedEvent.FieldName;
              local_f8.SharedReferenceCount.ReferenceController._0_4_ =
                   FFieldNotificationClassDescriptor::OnRightPressedEvent.BitNumber;
              UWidget::BroadcastFieldValueChanged((UWidget *)&this->_padding_,(FFieldId *)&local_f8)
              ;
              FReply::FReply(&local_e8,true);
              pTVar6 = UWidget::TakeWidget((UWidget *)this,&local_f8);
              pFVar7 = FReply::CaptureMouse(&local_e8,pTVar6);
              FReply::FReply(__return_storage_ptr__,pFVar7);
              FReply::~FReply(&local_e8);
              return __return_storage_ptr__;
            }
            goto LAB_14bcad4c2;
          }
          iVar9 = *(int *)((longlong)iVar9 * 0x20 + 0x18 + *(longlong *)&pTVar1->Elements);
        } while (iVar9 != -1);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar4.ReferenceController);
  }
LAB_14bcad4c2:
  UCommonUserWidget::NativeOnMouseButtonDown((UCommonUserWidget *)this,&local_e8,param_1,param_2);
  FReply::~FReply(&local_e8);
  (this->EventMouseButtonDown).TargetWidget = (UDS_UserWidget *)this;
  FGeometry::operator=(&(this->EventMouseButtonDown).Geometry,param_1);
  FPointerEvent::operator=(&(this->EventMouseButtonDown).PointerEvent,param_2);
  local_f8.Object = (SWidget *)FFieldNotificationClassDescriptor::EventMouseButtonDown.FieldName;
  local_f8.SharedReferenceCount.ReferenceController._0_4_ =
       FFieldNotificationClassDescriptor::EventMouseButtonDown.BitNumber;
  UWidget::BroadcastFieldValueChanged((UWidget *)&this->_padding_,(FFieldId *)&local_f8);
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// NativeOnMouseButtonUp @ 14bcad660

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
UDS_W_CommonButton::NativeOnMouseButtonUp
          (UDS_W_CommonButton *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FName FVar3;
  UDS_W_CommonButtonBase *pUVar4;
  bool bVar5;
  FWeakReferencer<1> FVar6;
  bool bVar7;
  FGeometry *pFVar8;
  undefined8 local_res8;
  FFieldId local_118;
  TVector2<float>_u_0 local_108;
  undefined4 local_100;
  undefined8 local_fc;
  undefined4 local_f4;
  FSlateRotatedRect local_f0;
  FReply local_d8;
  
  bVar7 = false;
  local_res8 = (TReferenceControllerBase<1> *)((ulonglong)local_res8 & 0xffffffff00000000);
  if (this->bEnableRightClick == false) goto LAB_14bcad8cc;
  if (this->bIsRightPress == false) {
LAB_14bcad6d2:
    bVar5 = false;
  }
  else {
    local_res8 = (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
    FVar3 = (param_2->EffectingButton).KeyName;
    if (local_res8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_res8->SharedReferenceCount = (atomic<int>)((int)local_res8->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar7 = true;
    if (FVar3 != EKeys::RightMouseButton.KeyName) goto LAB_14bcad6d2;
    bVar5 = true;
  }
  if (bVar7) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_res8);
  }
  if (bVar5) {
    pUVar4 = (this->ButtonBase).field0_0x0.DebugPtr;
    this->bIsRightPress = false;
    if (pUVar4 != (UDS_W_CommonButtonBase *)0x0) {
      pFVar8 = UWidget::GetCachedGeometry((UWidget *)pUVar4);
      local_118.FieldName = *(FName *)&param_2->ScreenSpacePosition;
      local_res8._4_4_ = SUB84(pFVar8->Size,4);
      local_res8._0_4_ = SUB84(pFVar8->Size,0);
      local_100 = (undefined4)local_res8;
      local_f4 = local_res8._4_4_;
      local_108 = (TVector2<float>_u_0)0x0;
      local_fc = 0;
      TransformRect<TTransform2<float>_>
                (&local_f0,&pFVar8->AccumulatedRenderTransform,(FSlateRotatedRect *)&local_108._s_0)
      ;
      bVar7 = FSlateRotatedRect::IsUnderLocation
                        (&local_f0,(FDeprecateVector2DParameter)local_118.FieldName);
      if (bVar7) {
        pUVar4 = (this->ButtonBase).field0_0x0.DebugPtr;
        if (pUVar4 != (UDS_W_CommonButtonBase *)0x0) {
          (this->OnRightClickedEvent)._padding_ = '\x01';
          (this->OnRightClickedEvent).bIsCustomDisabled = pUVar4->bIsCustomDisabled;
          (this->OnRightClickedEvent).bIsCustomSelected =
               ((this->ButtonBase).field0_0x0.DebugPtr)->bIsCustomSelected;
          (this->OnRightClickedEvent).bIsLacked =
               ((this->ButtonBase).field0_0x0.DebugPtr)->bIsLacked;
          (this->OnRightClickedEvent).ButtonEventType = RightClick;
        }
        local_118.FieldName = FFieldNotificationClassDescriptor::OnRightClickedEvent.FieldName;
        local_118.BitNumber = FFieldNotificationClassDescriptor::OnRightClickedEvent.BitNumber;
        UWidget::BroadcastFieldValueChanged((UWidget *)&this->_padding_,&local_118);
      }
    }
    pUVar4 = (this->ButtonBase).field0_0x0.DebugPtr;
    if (pUVar4 != (UDS_W_CommonButtonBase *)0x0) {
      (this->OnRightReleasedEvent)._padding_ = '\x01';
      (this->OnRightReleasedEvent).bIsCustomDisabled = pUVar4->bIsCustomDisabled;
      (this->OnRightReleasedEvent).bIsCustomSelected =
           ((this->ButtonBase).field0_0x0.DebugPtr)->bIsCustomSelected;
      (this->OnRightReleasedEvent).bIsLacked = ((this->ButtonBase).field0_0x0.DebugPtr)->bIsLacked;
      (this->OnRightReleasedEvent).ButtonEventType = RightRelease;
    }
    local_118.FieldName = FFieldNotificationClassDescriptor::OnRightReleasedEvent.FieldName;
    local_118.BitNumber = FFieldNotificationClassDescriptor::OnRightReleasedEvent.BitNumber;
    UWidget::BroadcastFieldValueChanged((UWidget *)&this->_padding_,&local_118);
    FReply::FReply(&local_d8,true);
    FVar6.ReferenceController = local_d8.MouseCaptor.WeakReferenceCount.ReferenceController;
    local_d8.MouseCaptor.Object = (SWidget *)0x0;
    local_d8.MouseCaptor.WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
    ;
    if (FVar6.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(FVar6.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((FVar6.ReferenceController)->_padding_ + 8))(FVar6.ReferenceController,1);
      }
    }
    local_d8.bUseHighPrecisionMouse = 0;
    local_d8.bReleaseMouseCapture = 1;
    FReply::FReply(__return_storage_ptr__,&local_d8);
    FReply::~FReply(&local_d8);
    return __return_storage_ptr__;
  }
LAB_14bcad8cc:
  UCommonUserWidget::NativeOnMouseButtonUp((UCommonUserWidget *)this,&local_d8,param_1,param_2);
  FReply::~FReply(&local_d8);
  (this->EventMouseButtonUp).TargetWidget = (UDS_UserWidget *)this;
  FGeometry::operator=(&(this->EventMouseButtonUp).Geometry,param_1);
  FPointerEvent::operator=(&(this->EventMouseButtonUp).PointerEvent,param_2);
  local_118.FieldName = FFieldNotificationClassDescriptor::EventMouseButtonUp.FieldName;
  local_118.BitNumber = FFieldNotificationClassDescriptor::EventMouseButtonUp.BitNumber;
  UWidget::BroadcastFieldValueChanged((UWidget *)&this->_padding_,&local_118);
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// NativeOnMouseEnter @ 14bcad960

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_W_CommonButton::NativeOnMouseEnter
          (UDS_W_CommonButton *this,FGeometry *param_1,FPointerEvent *param_2)

{
  bool bVar1;
  UDS_WindowManager *this_00;
  UDS_LogManager *pUVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  undefined1 auStackY_1e8 [32];
  FFieldId local_1b8;
  code *local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined1 local_198 [8];
  FDelegateAllocation local_190;
  FDestructionSentinel local_180;
  FDelegateAllocation *local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  UUserWidget::NativeOnMouseEnter((UUserWidget *)this,param_1,param_2);
  (this->EventMouseEnter).TargetWidget = (UDS_UserWidget *)this;
  FGeometry::operator=(&(this->EventMouseEnter).Geometry,param_1);
  FPointerEvent::operator=(&(this->EventMouseEnter).PointerEvent,param_2);
  local_1b8.FieldName = FFieldNotificationClassDescriptor::EventMouseEnter.FieldName;
  local_1b8.BitNumber = FFieldNotificationClassDescriptor::EventMouseEnter.BitNumber;
  UWidget::BroadcastFieldValueChanged((UWidget *)&this->_padding_,&local_1b8);
  bVar1 = FDS_Text::IsEmpty(&this->DSTooltipText);
  if (!bVar1) {
    this_00 = UDS_WindowManager::GetInst();
    if (this_00 == (UDS_WindowManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      if (pUVar2 != (UDS_LogManager *)0x0) {
        pUVar2 = UDS_LogManager::GetInst();
        local_158._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_158,"UDS_W_CommonButton::OpenTooltipText",0x23,Yes);
        UDS_LogManager::PrintLog(pUVar2,1,Warning,local_158.Ptr,0x203,L"windowManager == nullptr");
        if ((void *)local_158._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_158._padding_);
        }
      }
    }
    else {
      local_1a8 = OnOpenTooltipText;
      uStack_1a0 = 0;
      local_198 = (undefined1  [8])0x0;
      local_190.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_190.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_198,
                 (FWriteAccessScope *)&local_180);
      local_168 = &local_190;
      puVar3 = UE::Core::Private::DelegateAllocate(0x30,&local_190);
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = &
                  ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar4 = FDelegateHandle::GenerateNewID();
        puVar3[2] = uVar4;
        *puVar3 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_W_CommonButton____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this != (UDS_W_CommonButton *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar3[3] = 0;
        local_1b8.FieldName = (FName)this;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this != (UDS_W_CommonButton *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar3 + 3),(FObjectPtr)&local_1b8);
        puVar3[4] = local_1a8;
        puVar3[5] = CONCAT44(uStack_19c,uStack_1a0);
      }
      if (local_180.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_180.Accessor,&local_180);
      }
      UDS_WindowManager::OpenWindow
                (this_00,CommonTextTooltip,
                 (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)local_198);
    }
  }
  return;
}

// NativeOnMouseLeave @ 14bcadbb0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_W_CommonButton::NativeOnMouseLeave(UDS_W_CommonButton *this,FPointerEvent *param_1)

{
  FFieldId local_18;
  
  UUserWidget::NativeOnMouseLeave((UUserWidget *)this,param_1);
  (this->EventMouseLeave).TargetWidget = (UDS_UserWidget *)this;
  FPointerEvent::operator=(&(this->EventMouseLeave).PointerEvent,param_1);
  local_18.FieldName = FFieldNotificationClassDescriptor::EventMouseLeave.FieldName;
  local_18.BitNumber = FFieldNotificationClassDescriptor::EventMouseLeave.BitNumber;
  UWidget::BroadcastFieldValueChanged((UWidget *)&this->_padding_,&local_18);
  CloseTooltipText(this);
  return;
}

// NativeOnMouseMove @ 14bcadc20

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
UDS_W_CommonButton::NativeOnMouseMove
          (UDS_W_CommonButton *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  FFieldId local_d8;
  FReply local_c8;
  
  UUserWidget::NativeOnMouseMove((UUserWidget *)this,&local_c8,param_1,param_2);
  FReply::~FReply(&local_c8);
  (this->EventMouseMove).TargetWidget = (UDS_UserWidget *)this;
  FGeometry::operator=(&(this->EventMouseMove).Geometry,param_1);
  FPointerEvent::operator=(&(this->EventMouseMove).PointerEvent,param_2);
  local_d8.FieldName = FFieldNotificationClassDescriptor::EventMouseMove.FieldName;
  local_d8.BitNumber = FFieldNotificationClassDescriptor::EventMouseMove.BitNumber;
  UWidget::BroadcastFieldValueChanged((UWidget *)&this->_padding_,&local_d8);
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// NativePreConstruct @ 14bcae9a0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_CommonButton::NativePreConstruct(UDS_W_CommonButton *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  ulonglong uVar3;
  ForAnyElementType FVar4;
  undefined1 local_res8 [8];
  TArray<UWidget_*,TSizedDefaultAllocator<32>_> local_18;
  
  UDS_UserWidget::NativePreConstruct((UDS_UserWidget *)this);
  if (this->_padding_ != 0) {
    (**(code **)(this->_padding_ + 0x518))(this);
    if (this->AutoCachedButtonSwitcher != false) {
      (this->ButtonSwitcherArray).ArrayNum = 0;
      if ((this->ButtonSwitcherArray).ArrayMax < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,&(this->ButtonSwitcherArray).AllocatorInstance,0,
                   &(this->ButtonSwitcherArray).ArrayMax);
      }
    }
    local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.ArrayNum = 0;
    local_18.ArrayMax = 0;
    UWidgetTree::GetAllWidgets((UWidgetTree *)this->_padding_,&local_18);
    iVar2 = local_18.ArrayNum;
    uVar3 = (ulonglong)local_18.ArrayNum;
    pFVar1 = local_18.AllocatorInstance.Data + uVar3 * 8;
    FVar4.Data = local_18.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar3 != iVar2) {
        `TCheckedPointerIterator<UWidget_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (FVar4.Data == pFVar1) break;
      (**(code **)(this->_padding_ + 0x520))(this,*(undefined8 *)FVar4.Data);
      uVar3 = local_18._8_8_ & 0xffffffff;
      FVar4.Data = FVar4.Data + 8;
    }
    (**(code **)(this->_padding_ + 0x528))(this);
    NotifyButtonSwitcher(this);
    if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.AllocatorInstance.Data);
    }
  }
  return;
}

// NativeTick @ 14bcaec50

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_W_CommonButton::NativeTick(UDS_W_CommonButton *this,FGeometry *param_1,float param_2)

{
  EDS_ButtonStateType EVar1;
  UDS_LongPressProcessor *this_00;
  UDS_W_CommonButtonBase *pUVar2;
  FFieldId local_18;
  
  UUserWidget::NativeTick((UUserWidget *)this,param_1,param_2);
  EVar1 = this->ButtonStateType;
  if (this->bIsLongPress == false) {
    if (((EVar1 == Normal_Clicked) || (EVar1 == Selected_Clicked)) || (EVar1 == Disabled_Clicked)) {
      pUVar2 = (this->ButtonBase).field0_0x0.DebugPtr;
      if (pUVar2 != (UDS_W_CommonButtonBase *)0x0) {
        (this->OnPressingEvent)._padding_ = '\x01';
        (this->OnPressingEvent).bIsCustomDisabled = pUVar2->bIsCustomDisabled;
        (this->OnPressingEvent).bIsCustomSelected =
             ((this->ButtonBase).field0_0x0.DebugPtr)->bIsCustomSelected;
        (this->OnPressingEvent).bIsLacked = ((this->ButtonBase).field0_0x0.DebugPtr)->bIsLacked;
        (this->OnPressingEvent).ButtonEventType = Pressing;
      }
      local_18.FieldName = FFieldNotificationClassDescriptor::OnPressingEvent.FieldName;
      local_18.BitNumber = FFieldNotificationClassDescriptor::OnPressingEvent.BitNumber;
      UWidget::BroadcastFieldValueChanged((UWidget *)&this->_padding_,&local_18);
    }
  }
  else if ((((EVar1 == Normal_Clicked) || (EVar1 == Selected_Clicked)) ||
           ((EVar1 == Disabled_Clicked || (this->bForceLongPress != false)))) &&
          (this_00 = (this->LongPressProcessor).field0_0x0.DebugPtr,
          this_00 != (UDS_LongPressProcessor *)0x0)) {
    UDS_LongPressProcessor::CheckLongPress(this_00);
    return;
  }
  return;
}

// NotifyButtonSwitcher @ 14bcaedc0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_CommonButton::NotifyButtonSwitcher(UDS_W_CommonButton *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  if ((this->ButtonBase).field0_0x0.DebugPtr != (UDS_W_CommonButtonBase *)0x0) {
    pFVar3 = (this->ButtonSwitcherArray).AllocatorInstance.Data;
    iVar2 = (this->ButtonSwitcherArray).ArrayNum;
    pFVar1 = pFVar3 + (longlong)iVar2 * 8;
    while( true ) {
      if ((this->ButtonSwitcherArray).ArrayNum != iVar2) {
        `TCheckedPointerIterator<TObjectPtr<UDS_ButtonSwitcher>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar3 == pFVar1) break;
      if (*(UDS_ButtonSwitcher **)pFVar3 != (UDS_ButtonSwitcher *)0x0) {
        UDS_ButtonSwitcher::SetButtonEvent
                  (*(UDS_ButtonSwitcher **)pFVar3,
                   &((this->ButtonBase).field0_0x0.DebugPtr)->ButtonStateType);
      }
      pFVar3 = pFVar3 + 8;
    }
  }
  return;
}

// OnClicked @ 14bcb2130

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_CommonButton::OnClicked(UDS_W_CommonButton *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UDS_LongPressProcessor *this_00;
  UDS_W_CommonButtonBase *pUVar3;
  longlong *plVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  FReadAccessScope local_28;
  
  if ((((this->bIsLongPress == false) ||
       (this_00 = (this->LongPressProcessor).field0_0x0.DebugPtr,
       this_00 == (UDS_LongPressProcessor *)0x0)) ||
      (bVar5 = UDS_LongPressProcessor::IsClickable(this_00), bVar5)) &&
     (((pUVar3 = (this->ButtonBase).field0_0x0.DebugPtr, pUVar3 == (UDS_W_CommonButtonBase *)0x0 ||
       (pUVar3->bIsCustomDisabled == false)) || (this->bUnclickableDisableState == false)))) {
    if (pUVar3 != (UDS_W_CommonButtonBase *)0x0) {
      (this->OnClickedEvent)._padding_ = '\x01';
      (this->OnClickedEvent).bIsCustomDisabled = pUVar3->bIsCustomDisabled;
      (this->OnClickedEvent).bIsCustomSelected =
           ((this->ButtonBase).field0_0x0.DebugPtr)->bIsCustomSelected;
      (this->OnClickedEvent).bIsLacked = ((this->ButtonBase).field0_0x0.DebugPtr)->bIsLacked;
      (this->OnClickedEvent).ButtonEventType = OnClick;
    }
    local_28.DestructionSentinel.AccessType =
         FFieldNotificationClassDescriptor::OnClickedEvent.FieldName.ComparisonIndex.Value;
    local_28.DestructionSentinel._4_4_ =
         FFieldNotificationClassDescriptor::OnClickedEvent.FieldName.Number;
    local_28.DestructionSentinel.Accessor._0_4_ =
         FFieldNotificationClassDescriptor::OnClickedEvent.BitNumber;
    UWidget::BroadcastFieldValueChanged((UWidget *)&this->_padding_,(FFieldId *)&local_28);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &(this->OnClickedEvent).Delegate,&local_28);
    if ((*(int *)&(this->OnClickedEvent).Delegate.field_0x10 != 0) &&
       (plVar4 = *(longlong **)&(this->OnClickedEvent).Delegate.field_0x8, plVar4 != (longlong *)0x0
       )) {
      (**(code **)(*plVar4 + 0x68))(plVar4,this);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    pUVar3 = (this->ButtonBase).field0_0x0.DebugPtr;
    if (pUVar3 != (UDS_W_CommonButtonBase *)0x0) {
      UDS_W_CommonButtonBase::Called_OnClicked(pUVar3);
      pUVar3 = (this->ButtonBase).field0_0x0.DebugPtr;
      this->ButtonStateType = pUVar3->ButtonStateType;
      if (pUVar3 != (UDS_W_CommonButtonBase *)0x0) {
        pFVar6 = (this->ButtonSwitcherArray).AllocatorInstance.Data;
        iVar2 = (this->ButtonSwitcherArray).ArrayNum;
        pFVar1 = pFVar6 + (longlong)iVar2 * 8;
        while( true ) {
          if ((this->ButtonSwitcherArray).ArrayNum != iVar2) {
            `TCheckedPointerIterator<TObjectPtr<UDS_ButtonSwitcher>,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_res8);
          }
          if (pFVar6 == pFVar1) break;
          if (*(UDS_ButtonSwitcher **)pFVar6 != (UDS_ButtonSwitcher *)0x0) {
            UDS_ButtonSwitcher::SetButtonEvent
                      (*(UDS_ButtonSwitcher **)pFVar6,
                       &((this->ButtonBase).field0_0x0.DebugPtr)->ButtonStateType);
          }
          pFVar6 = pFVar6 + 8;
        }
      }
    }
  }
  return;
}

// OnFocusLosted @ 14bcb54a0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_CommonButton::OnFocusLosted(UDS_W_CommonButton *this)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res8 [4];
  
  if (this->bSelectionFollowsFocus != false) {
    bVar1 = UUserWidget::IsFocusable((UUserWidget *)this);
    if (bVar1) {
      (**(code **)(this->_padding_ + 0x508))(this);
      bVar1 = TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr> *)local_res8,(void *)0x0);
      if (!bVar1) {
        pUVar2 = FWeakObjectPtr::Get(local_res8);
        if (pUVar2[0x35].field_0x9 == '\0') {
          ReleaseButtonSelectedEvent(this);
          return;
        }
        pUVar2 = FWeakObjectPtr::Get(local_res8);
        bVar1 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                          ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pUVar2[0x19].field_0x8);
        if (bVar1) {
          pUVar2 = FWeakObjectPtr::Get(local_res8);
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Execute
                    ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                     &pUVar2[0x19].field_0x8);
        }
      }
    }
  }
  return;
}

// OnFocused @ 14bcb5ba0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_CommonButton::OnFocused(UDS_W_CommonButton *this)

{
  bool bVar1;
  UObject *pUVar2;
  bool local_res8 [8];
  FWeakObjectPtr local_res10 [3];
  
  if (this->bSelectionFollowsFocus != false) {
    bVar1 = UUserWidget::IsFocusable((UUserWidget *)this);
    if (bVar1) {
      (**(code **)(this->_padding_ + 0x508))(this);
      bVar1 = TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr> *)local_res10,(void *)0x0);
      if (!bVar1) {
        pUVar2 = FWeakObjectPtr::Get(local_res10);
        if (pUVar2[0x35].field_0x9 == '\0') {
          local_res8[0] = true;
          SetSelectedButton(this,local_res8);
          return;
        }
        pUVar2 = FWeakObjectPtr::Get(local_res10);
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[0x19].field_0x20,
                   this);
        pUVar2 = FWeakObjectPtr::Get(local_res10);
        TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
        AddUObject<UDS_W_CommonButton>
                  ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                   &pUVar2[0x19].field_0x20,(UDS_W_CommonButton *)local_res8,(pmf_ce868e9c *)this);
        pUVar2 = FWeakObjectPtr::Get(local_res10);
        bVar1 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                          ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pUVar2[0x18].field_0x18);
        if (bVar1) {
          pUVar2 = FWeakObjectPtr::Get(local_res10);
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Execute
                    ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                     &pUVar2[0x18].field_0x18);
        }
      }
    }
  }
  return;
}

// OnHovered @ 14bcb6030

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_CommonButton::OnHovered(UDS_W_CommonButton *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UDS_W_CommonButtonBase *pUVar3;
  longlong *plVar4;
  bool bVar5;
  ADS_PlayerController *this_00;
  FScriptContainerElement *pFVar6;
  FWeakObjectPtr local_res8;
  FReadAccessScope local_28;
  
  pUVar3 = (this->ButtonBase).field0_0x0.DebugPtr;
  if (pUVar3 != (UDS_W_CommonButtonBase *)0x0) {
    (this->OnHoveredEvent)._padding_ = '\x01';
    (this->OnHoveredEvent).bIsCustomDisabled = pUVar3->bIsCustomDisabled;
    (this->OnHoveredEvent).bIsCustomSelected =
         ((this->ButtonBase).field0_0x0.DebugPtr)->bIsCustomSelected;
    (this->OnHoveredEvent).bIsLacked = ((this->ButtonBase).field0_0x0.DebugPtr)->bIsLacked;
    (this->OnHoveredEvent).ButtonEventType = Hovered;
  }
  local_28.DestructionSentinel.AccessType =
       FFieldNotificationClassDescriptor::OnHoveredEvent.FieldName.ComparisonIndex.Value;
  local_28.DestructionSentinel._4_4_ =
       FFieldNotificationClassDescriptor::OnHoveredEvent.FieldName.Number;
  local_28.DestructionSentinel.Accessor._0_4_ =
       FFieldNotificationClassDescriptor::OnHoveredEvent.BitNumber;
  UWidget::BroadcastFieldValueChanged((UWidget *)&this->_padding_,(FFieldId *)&local_28);
  pUVar3 = (this->ButtonBase).field0_0x0.DebugPtr;
  if (pUVar3 != (UDS_W_CommonButtonBase *)0x0) {
    UDS_W_CommonButtonBase::Called_OnHovered(pUVar3);
    pUVar3 = (this->ButtonBase).field0_0x0.DebugPtr;
    this->ButtonStateType = pUVar3->ButtonStateType;
    if (pUVar3 != (UDS_W_CommonButtonBase *)0x0) {
      pFVar6 = (this->ButtonSwitcherArray).AllocatorInstance.Data;
      iVar2 = (this->ButtonSwitcherArray).ArrayNum;
      pFVar1 = pFVar6 + (longlong)iVar2 * 8;
      while( true ) {
        if ((this->ButtonSwitcherArray).ArrayNum != iVar2) {
          `TCheckedPointerIterator<TObjectPtr<UDS_ButtonSwitcher>,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_res8);
        }
        if (pFVar6 == pFVar1) break;
        if (*(UDS_ButtonSwitcher **)pFVar6 != (UDS_ButtonSwitcher *)0x0) {
          UDS_ButtonSwitcher::SetButtonEvent
                    (*(UDS_ButtonSwitcher **)pFVar6,
                     &((this->ButtonBase).field0_0x0.DebugPtr)->ButtonStateType);
        }
        pFVar6 = pFVar6 + 8;
      }
    }
  }
  if (this->IsHoverSlowdown == true) {
    ADS_PlayerController::GetPlayerController();
    bVar5 = FWeakObjectPtr::IsValid(&local_res8);
    if (bVar5) {
      this_00 = (ADS_PlayerController *)FWeakObjectPtr::Get(&local_res8);
      ADS_PlayerController::SetCursorShape(this_00,Hovered_Button);
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &(this->OnHoveredEvent).Delegate,&local_28);
  if ((*(int *)&(this->OnHoveredEvent).Delegate.field_0x10 != 0) &&
     (plVar4 = *(longlong **)&(this->OnHoveredEvent).Delegate.field_0x8, plVar4 != (longlong *)0x0))
  {
    (**(code **)(*plVar4 + 0x68))(plVar4,this);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// OnLongPressPressed @ 14bcb6710

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_CommonButton::OnLongPressPressed(UDS_W_CommonButton *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UDS_LongPressProcessor *this_00;
  UDS_W_CommonButtonBase *pUVar3;
  longlong *plVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  FReadAccessScope local_28;
  
  this_00 = (this->LongPressProcessor).field0_0x0.DebugPtr;
  if (this_00 != (UDS_LongPressProcessor *)0x0) {
    UDS_LongPressProcessor::OnPress(this_00);
  }
  pUVar3 = (this->ButtonBase).field0_0x0.DebugPtr;
  if (pUVar3 != (UDS_W_CommonButtonBase *)0x0) {
    (this->OnPressedEvent)._padding_ = '\x01';
    (this->OnPressedEvent).bIsCustomDisabled = pUVar3->bIsCustomDisabled;
    (this->OnPressedEvent).bIsCustomSelected =
         ((this->ButtonBase).field0_0x0.DebugPtr)->bIsCustomSelected;
    (this->OnPressedEvent).bIsLacked = ((this->ButtonBase).field0_0x0.DebugPtr)->bIsLacked;
    (this->OnPressedEvent).ButtonEventType = Press;
  }
  local_28.DestructionSentinel.AccessType =
       FFieldNotificationClassDescriptor::OnPressedEvent.FieldName.ComparisonIndex.Value;
  local_28.DestructionSentinel._4_4_ =
       FFieldNotificationClassDescriptor::OnPressedEvent.FieldName.Number;
  local_28.DestructionSentinel.Accessor._0_4_ =
       FFieldNotificationClassDescriptor::OnPressedEvent.BitNumber;
  UWidget::BroadcastFieldValueChanged((UWidget *)&this->_padding_,(FFieldId *)&local_28);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &(this->OnPressedEvent).Delegate,&local_28);
  if ((*(int *)&(this->OnPressedEvent).Delegate.field_0x10 != 0) &&
     (plVar4 = *(longlong **)&(this->OnPressedEvent).Delegate.field_0x8, plVar4 != (longlong *)0x0))
  {
    (**(code **)(*plVar4 + 0x68))(plVar4,this);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  pUVar3 = (this->ButtonBase).field0_0x0.DebugPtr;
  if (pUVar3 != (UDS_W_CommonButtonBase *)0x0) {
    UDS_W_CommonButtonBase::Called_OnPressed(pUVar3);
    pUVar3 = (this->ButtonBase).field0_0x0.DebugPtr;
    this->ButtonStateType = pUVar3->ButtonStateType;
    if (pUVar3 != (UDS_W_CommonButtonBase *)0x0) {
      pFVar5 = (this->ButtonSwitcherArray).AllocatorInstance.Data;
      iVar2 = (this->ButtonSwitcherArray).ArrayNum;
      pFVar1 = pFVar5 + (longlong)iVar2 * 8;
      while( true ) {
        if ((this->ButtonSwitcherArray).ArrayNum != iVar2) {
          `TCheckedPointerIterator<TObjectPtr<UDS_ButtonSwitcher>,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res8);
        }
        if (pFVar5 == pFVar1) break;
        if (*(UDS_ButtonSwitcher **)pFVar5 != (UDS_ButtonSwitcher *)0x0) {
          UDS_ButtonSwitcher::SetButtonEvent
                    (*(UDS_ButtonSwitcher **)pFVar5,
                     &((this->ButtonBase).field0_0x0.DebugPtr)->ButtonStateType);
        }
        pFVar5 = pFVar5 + 8;
      }
    }
  }
  return;
}

// OnLongPressPressing @ 14bcb6880

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_CommonButton::OnLongPressPressing(UDS_W_CommonButton *this)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  SetLongPressEventField(this,&this->OnLongPressPressingEvent);
  local_28.DestructionSentinel.AccessType =
       FFieldNotificationClassDescriptor::OnLongPressPressingEvent.FieldName.ComparisonIndex.Value;
  local_28.DestructionSentinel._4_4_ =
       FFieldNotificationClassDescriptor::OnLongPressPressingEvent.FieldName.Number;
  local_28.DestructionSentinel.Accessor._0_4_ =
       FFieldNotificationClassDescriptor::OnLongPressPressingEvent.BitNumber;
  UWidget::BroadcastFieldValueChanged((UWidget *)&this->_padding_,(FFieldId *)&local_28);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &(this->OnLongPressPressingEvent)._padding_,&local_28);
  if (((int)(this->OnLongPressPressingEvent)._padding_ != 0) &&
     (plVar1 = (longlong *)(this->OnLongPressPressingEvent)._padding_, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))(plVar1,this);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// OnLongPressReleased @ 14bcb6910

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_CommonButton::OnLongPressReleased(UDS_W_CommonButton *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UDS_LongPressProcessor *this_00;
  UDS_W_CommonButtonBase *pUVar3;
  longlong *plVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  FReadAccessScope local_28;
  
  this_00 = (this->LongPressProcessor).field0_0x0.DebugPtr;
  if (this_00 != (UDS_LongPressProcessor *)0x0) {
    UDS_LongPressProcessor::OnRelease(this_00);
  }
  pUVar3 = (this->ButtonBase).field0_0x0.DebugPtr;
  if (pUVar3 != (UDS_W_CommonButtonBase *)0x0) {
    (this->OnReleasedEvent)._padding_ = '\x01';
    (this->OnReleasedEvent).bIsCustomDisabled = pUVar3->bIsCustomDisabled;
    (this->OnReleasedEvent).bIsCustomSelected =
         ((this->ButtonBase).field0_0x0.DebugPtr)->bIsCustomSelected;
    (this->OnReleasedEvent).bIsLacked = ((this->ButtonBase).field0_0x0.DebugPtr)->bIsLacked;
    (this->OnReleasedEvent).ButtonEventType = Release;
  }
  local_28.DestructionSentinel.AccessType =
       FFieldNotificationClassDescriptor::OnReleasedEvent.FieldName.ComparisonIndex.Value;
  local_28.DestructionSentinel._4_4_ =
       FFieldNotificationClassDescriptor::OnReleasedEvent.FieldName.Number;
  local_28.DestructionSentinel.Accessor._0_4_ =
       FFieldNotificationClassDescriptor::OnReleasedEvent.BitNumber;
  UWidget::BroadcastFieldValueChanged((UWidget *)&this->_padding_,(FFieldId *)&local_28);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &(this->OnReleasedEvent).Delegate,&local_28);
  if ((*(int *)&(this->OnReleasedEvent).Delegate.field_0x10 != 0) &&
     (plVar4 = *(longlong **)&(this->OnReleasedEvent).Delegate.field_0x8, plVar4 != (longlong *)0x0)
     ) {
    (**(code **)(*plVar4 + 0x68))(plVar4,this);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  pUVar3 = (this->ButtonBase).field0_0x0.DebugPtr;
  if (pUVar3 != (UDS_W_CommonButtonBase *)0x0) {
    UDS_W_CommonButtonBase::Called_OnReleased(pUVar3);
    pUVar3 = (this->ButtonBase).field0_0x0.DebugPtr;
    this->ButtonStateType = pUVar3->ButtonStateType;
    if (pUVar3 != (UDS_W_CommonButtonBase *)0x0) {
      pFVar5 = (this->ButtonSwitcherArray).AllocatorInstance.Data;
      iVar2 = (this->ButtonSwitcherArray).ArrayNum;
      pFVar1 = pFVar5 + (longlong)iVar2 * 8;
      while( true ) {
        if ((this->ButtonSwitcherArray).ArrayNum != iVar2) {
          `TCheckedPointerIterator<TObjectPtr<UDS_ButtonSwitcher>,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res8);
        }
        if (pFVar5 == pFVar1) break;
        if (*(UDS_ButtonSwitcher **)pFVar5 != (UDS_ButtonSwitcher *)0x0) {
          UDS_ButtonSwitcher::SetButtonEvent
                    (*(UDS_ButtonSwitcher **)pFVar5,
                     &((this->ButtonBase).field0_0x0.DebugPtr)->ButtonStateType);
        }
        pFVar5 = pFVar5 + 8;
      }
    }
  }
  return;
}

// OnLongPressStart @ 14bcb6a80

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_CommonButton::OnLongPressStart(UDS_W_CommonButton *this)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  SetLongPressEventField(this,&this->OnLongPressStartEvent);
  local_28.DestructionSentinel.AccessType =
       FFieldNotificationClassDescriptor::OnLongPressStartEvent.FieldName.ComparisonIndex.Value;
  local_28.DestructionSentinel._4_4_ =
       FFieldNotificationClassDescriptor::OnLongPressStartEvent.FieldName.Number;
  local_28.DestructionSentinel.Accessor._0_4_ =
       FFieldNotificationClassDescriptor::OnLongPressStartEvent.BitNumber;
  UWidget::BroadcastFieldValueChanged((UWidget *)&this->_padding_,(FFieldId *)&local_28);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &(this->OnLongPressStartEvent)._padding_,&local_28);
  if (((int)(this->OnLongPressStartEvent)._padding_ != 0) &&
     (plVar1 = (longlong *)(this->OnLongPressStartEvent)._padding_, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))(plVar1,this);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// OnLongPressSuccess @ 14bcb6b10

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_CommonButton::OnLongPressSuccess(UDS_W_CommonButton *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  UDS_W_CommonButtonBase *pUVar4;
  longlong *plVar5;
  UWidgetAnimation *pUVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  FReadAccessScope local_28;
  
  pUVar4 = (this->ButtonBase).field0_0x0.DebugPtr;
  if (((pUVar4 == (UDS_W_CommonButtonBase *)0x0) || (pUVar4->bIsCustomDisabled == false)) ||
     (this->bUnclickableDisableState == false)) {
    if ((this->LongPressAnimationName != (FName)0x0) &&
       (pUVar6 = UDS_UserWidget::GetAnimation((UDS_UserWidget *)this,&this->LongPressAnimationName),
       pUVar6 != (UWidgetAnimation *)0x0)) {
      UUserWidget::PlayAnimationForward
                ((UUserWidget *)this,(FWidgetAnimationHandle *)&local_28,pUVar6,__real_3f800000,
                 false);
      plVar5 = (longlong *)
               CONCAT44(local_28.DestructionSentinel.Accessor._4_4_,
                        (int)local_28.DestructionSentinel.Accessor);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
    }
    SetLongPressEventField(this,&this->OnLongPressEndEvent);
    local_28.DestructionSentinel.AccessType =
         FFieldNotificationClassDescriptor::OnLongPressEndEvent.FieldName.ComparisonIndex.Value;
    local_28.DestructionSentinel._4_4_ =
         FFieldNotificationClassDescriptor::OnLongPressEndEvent.FieldName.Number;
    local_28.DestructionSentinel.Accessor._0_4_ =
         FFieldNotificationClassDescriptor::OnLongPressEndEvent.BitNumber;
    UWidget::BroadcastFieldValueChanged((UWidget *)&this->_padding_,(FFieldId *)&local_28);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &(this->OnLongPressEndEvent)._padding_,&local_28);
    if (((int)(this->OnLongPressEndEvent)._padding_ != 0) &&
       (plVar5 = (longlong *)(this->OnLongPressEndEvent)._padding_, plVar5 != (longlong *)0x0)) {
      (**(code **)(*plVar5 + 0x68))(plVar5,this);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    pUVar4 = (this->ButtonBase).field0_0x0.DebugPtr;
    if (pUVar4 != (UDS_W_CommonButtonBase *)0x0) {
      this->ButtonStateType = pUVar4->ButtonStateType;
      pFVar7 = (this->ButtonSwitcherArray).AllocatorInstance.Data;
      iVar3 = (this->ButtonSwitcherArray).ArrayNum;
      pFVar2 = pFVar7 + (longlong)iVar3 * 8;
      while( true ) {
        if ((this->ButtonSwitcherArray).ArrayNum != iVar3) {
          `TCheckedPointerIterator<TObjectPtr<UDS_ButtonSwitcher>,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res8);
        }
        if (pFVar7 == pFVar2) break;
        if (*(UDS_ButtonSwitcher **)pFVar7 != (UDS_ButtonSwitcher *)0x0) {
          UDS_ButtonSwitcher::SetButtonEvent
                    (*(UDS_ButtonSwitcher **)pFVar7,
                     &((this->ButtonBase).field0_0x0.DebugPtr)->ButtonStateType);
        }
        pFVar7 = pFVar7 + 8;
      }
    }
    if (this->bForceLongPress != false) {
      this->bForceLongPress = false;
    }
  }
  else if (this->bForceLongPress != false) {
    this->bForceLongPress = false;
    return;
  }
  return;
}

// OnOpenTooltipText @ 14bcb8340

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UDS_W_CommonButton::OnOpenTooltipText(UDS_W_CommonButton *this,UDS_UserWidget *param_1)

{
  int *piVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  UDS_LogManager *pUVar5;
  UObject *pUVar6;
  UClass *pUVar7;
  FText *this_00;
  FString *pFVar8;
  FName *pFVar9;
  TVector2<double>_u_0_s_0 *pTVar10;
  longlong *plVar11;
  undefined1 auStackY_258 [32];
  FWeakObjectPtr local_228;
  UDS_W_CommonButton *local_220;
  FName local_218 [2];
  TVector2<double>_u_0 local_208;
  undefined1 local_1f8 [16];
  FName local_1e8 [2];
  undefined1 local_1d8 [128];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_258;
  if (param_1 == (UDS_UserWidget *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_W_CommonButton::OnOpenTooltipText",0x25,Yes);
      UDS_LogManager::PrintLog(pUVar5,1,Warning,local_158.Ptr,0x21a,L"InTooltipWidget == nullptr");
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
  }
  else {
    bVar4 = FDS_Text::IsEmpty(&this->DSTooltipText);
    if (bVar4) {
      CloseTooltipText(this);
    }
    else {
      local_208 = UE::Math::TVector2<double>::ZeroVector.field0_0x0;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      local_218[0].ComparisonIndex.Value = 0;
      local_218[0].Number = 0;
      local_220 = (UDS_W_CommonButton *)param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)local_218,(FObjectPtr)&local_220);
      FVar3 = local_218[0];
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_W_CommonButton *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      local_228.ObjectIndex = 0;
      local_228.ObjectSerialNumber = 0;
      local_220 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_W_CommonButton *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=(&local_228,(FObjectPtr)&local_220);
      DS_Util::TransformTooltipPosition
                ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_228,
                 (TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)FVar3,
                 (TVector2<double> *)&local_208._s_0,None);
      pUVar6 = GetTransientPackageAsObject();
      FObjectInitializer::AssertIfInConstructor
                (pUVar6,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar7 = Z_Construct_UClass_UDS_ModelBase_NoRegister();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_1d8,pUVar7);
      local_1d8._8_8_ = pUVar6;
      pUVar6 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1d8);
      if (local_1d8._64_8_ != 0) {
        plVar11 = (longlong *)(local_1d8 + 0x50);
        if ((longlong *)local_1d8._104_8_ != (longlong *)0x0) {
          plVar11 = (longlong *)local_1d8._104_8_;
        }
        (**(code **)(*plVar11 + 0x10))();
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar6);
      }
      this_00 = FDS_Text::GetText(&this->DSTooltipText,(FText *)&local_208._s_0);
      pFVar8 = FText::ToString(this_00);
      pFVar8 = ::FString::FString((FString *)local_1f8,pFVar8);
      FDS_DataContainer::SetData<FString,enum_EDS_TextData>
                ((FDS_DataContainer *)&pUVar6[1].field_0x18,Text,pFVar8);
      if ((longlong *)local_208._s_0.X != (longlong *)0x0) {
        (**(code **)(*(longlong *)local_208._s_0.X + 0x10))();
      }
      pcVar2 = *(code **)(*(longlong *)pUVar6 + 0x308);
      ::FName::FName(local_218,L"");
      pFVar9 = ::FName::FName(local_1e8,L"");
      pTVar10 = (TVector2<double>_u_0_s_0 *)(*pcVar2)(pUVar6,local_1f8,0x1c2,*pFVar9);
      local_208._s_0 = *pTVar10;
      if (pTVar10->Y != 0.0) {
        LOCK();
        piVar1 = (int *)((longlong)pTVar10->Y + 8);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      local_228.ObjectIndex = 0;
      local_228.ObjectSerialNumber = 0;
      local_220 = (UDS_W_CommonButton *)param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      FWeakObjectPtr::operator=(&local_228,(FObjectPtr)&local_220);
      DS_ViewModelTemplateUtil::BindViewModel
                ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_228,
                 (TSharedPtr<FDS_ViewModelContext,1> *)&local_208._s_0,false);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_1f8._8_8_);
    }
  }
  return;
}

// OnPressed @ 14bcb9fd0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_CommonButton::OnPressed(UDS_W_CommonButton *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UDS_LongPressProcessor *this_00;
  UDS_W_CommonButtonBase *pUVar3;
  UDS_InputEvent *pUVar4;
  FScriptContainerElement *pFVar5;
  bool local_res8 [8];
  FFieldId local_18;
  
  if (this->bIsLongPress != false) {
    this_00 = (this->LongPressProcessor).field0_0x0.DebugPtr;
    if (this_00 != (UDS_LongPressProcessor *)0x0) {
      UDS_LongPressProcessor::OnPress(this_00);
    }
    pUVar4 = UDS_InputEvent::GetEvent();
    if (pUVar4 != (UDS_InputEvent *)0x0) {
      local_res8[0] = true;
      FDS_EventDelegate<bool_const_&,enum_EDS_KeyActionType_const_&,enum_EDS_WindowWidget_const_&>::
      Broadcast(&pUVar4->OnInputUIEvent,local_res8,&this->KeyActionType,&this->ParentWindowWidget);
    }
  }
  pUVar3 = (this->ButtonBase).field0_0x0.DebugPtr;
  if (pUVar3 != (UDS_W_CommonButtonBase *)0x0) {
    (this->OnPressedEvent)._padding_ = '\x01';
    (this->OnPressedEvent).bIsCustomDisabled = pUVar3->bIsCustomDisabled;
    (this->OnPressedEvent).bIsCustomSelected =
         ((this->ButtonBase).field0_0x0.DebugPtr)->bIsCustomSelected;
    (this->OnPressedEvent).bIsLacked = ((this->ButtonBase).field0_0x0.DebugPtr)->bIsLacked;
    (this->OnPressedEvent).ButtonEventType = Press;
  }
  local_18.FieldName = FFieldNotificationClassDescriptor::OnPressedEvent.FieldName;
  local_18.BitNumber = FFieldNotificationClassDescriptor::OnPressedEvent.BitNumber;
  UWidget::BroadcastFieldValueChanged((UWidget *)&this->_padding_,&local_18);
  pUVar3 = (this->ButtonBase).field0_0x0.DebugPtr;
  if (pUVar3 != (UDS_W_CommonButtonBase *)0x0) {
    UDS_W_CommonButtonBase::Called_OnPressed(pUVar3);
    pUVar3 = (this->ButtonBase).field0_0x0.DebugPtr;
    this->ButtonStateType = pUVar3->ButtonStateType;
    if (pUVar3 != (UDS_W_CommonButtonBase *)0x0) {
      iVar2 = (this->ButtonSwitcherArray).ArrayNum;
      pFVar5 = (this->ButtonSwitcherArray).AllocatorInstance.Data;
      pFVar1 = pFVar5 + (longlong)iVar2 * 8;
      while( true ) {
        if ((this->ButtonSwitcherArray).ArrayNum != iVar2) {
          `TCheckedPointerIterator<TObjectPtr<UDS_ButtonSwitcher>,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res8);
        }
        if (pFVar5 == pFVar1) break;
        if (*(UDS_ButtonSwitcher **)pFVar5 != (UDS_ButtonSwitcher *)0x0) {
          UDS_ButtonSwitcher::SetButtonEvent
                    (*(UDS_ButtonSwitcher **)pFVar5,
                     &((this->ButtonBase).field0_0x0.DebugPtr)->ButtonStateType);
        }
        pFVar5 = pFVar5 + 8;
      }
    }
  }
  return;
}

// OnReleased @ 14bcba2c0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_CommonButton::OnReleased(UDS_W_CommonButton *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UDS_LongPressProcessor *this_00;
  UDS_W_CommonButtonBase *pUVar3;
  longlong *plVar4;
  UDS_InputEvent *pUVar5;
  FScriptContainerElement *pFVar6;
  bool local_res8 [8];
  FReadAccessScope local_28;
  
  if (this->bIsLongPress != false) {
    this_00 = (this->LongPressProcessor).field0_0x0.DebugPtr;
    if (this_00 != (UDS_LongPressProcessor *)0x0) {
      UDS_LongPressProcessor::OnRelease(this_00);
    }
    pUVar5 = UDS_InputEvent::GetEvent();
    if (pUVar5 != (UDS_InputEvent *)0x0) {
      local_res8[0] = false;
      FDS_EventDelegate<bool_const_&,enum_EDS_KeyActionType_const_&,enum_EDS_WindowWidget_const_&>::
      Broadcast(&pUVar5->OnInputUIEvent,local_res8,&this->KeyActionType,&this->ParentWindowWidget);
    }
  }
  pUVar3 = (this->ButtonBase).field0_0x0.DebugPtr;
  if (pUVar3 != (UDS_W_CommonButtonBase *)0x0) {
    (this->OnReleasedEvent)._padding_ = '\x01';
    (this->OnReleasedEvent).bIsCustomDisabled = pUVar3->bIsCustomDisabled;
    (this->OnReleasedEvent).bIsCustomSelected =
         ((this->ButtonBase).field0_0x0.DebugPtr)->bIsCustomSelected;
    (this->OnReleasedEvent).bIsLacked = ((this->ButtonBase).field0_0x0.DebugPtr)->bIsLacked;
    (this->OnReleasedEvent).ButtonEventType = Release;
  }
  local_28.DestructionSentinel.AccessType =
       FFieldNotificationClassDescriptor::OnReleasedEvent.FieldName.ComparisonIndex.Value;
  local_28.DestructionSentinel._4_4_ =
       FFieldNotificationClassDescriptor::OnReleasedEvent.FieldName.Number;
  local_28.DestructionSentinel.Accessor._0_4_ =
       FFieldNotificationClassDescriptor::OnReleasedEvent.BitNumber;
  UWidget::BroadcastFieldValueChanged((UWidget *)&this->_padding_,(FFieldId *)&local_28);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &(this->OnReleasedEvent).Delegate,&local_28);
  if ((*(int *)&(this->OnReleasedEvent).Delegate.field_0x10 != 0) &&
     (plVar4 = *(longlong **)&(this->OnReleasedEvent).Delegate.field_0x8, plVar4 != (longlong *)0x0)
     ) {
    (**(code **)(*plVar4 + 0x68))(plVar4,this);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  pUVar3 = (this->ButtonBase).field0_0x0.DebugPtr;
  if (pUVar3 != (UDS_W_CommonButtonBase *)0x0) {
    UDS_W_CommonButtonBase::Called_OnReleased(pUVar3);
    pUVar3 = (this->ButtonBase).field0_0x0.DebugPtr;
    this->ButtonStateType = pUVar3->ButtonStateType;
    if (pUVar3 != (UDS_W_CommonButtonBase *)0x0) {
      pFVar6 = (this->ButtonSwitcherArray).AllocatorInstance.Data;
      iVar2 = (this->ButtonSwitcherArray).ArrayNum;
      pFVar1 = pFVar6 + (longlong)iVar2 * 8;
      while( true ) {
        if ((this->ButtonSwitcherArray).ArrayNum != iVar2) {
          `TCheckedPointerIterator<TObjectPtr<UDS_ButtonSwitcher>,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res8);
        }
        if (pFVar6 == pFVar1) break;
        if (*(UDS_ButtonSwitcher **)pFVar6 != (UDS_ButtonSwitcher *)0x0) {
          UDS_ButtonSwitcher::SetButtonEvent
                    (*(UDS_ButtonSwitcher **)pFVar6,
                     &((this->ButtonBase).field0_0x0.DebugPtr)->ButtonStateType);
        }
        pFVar6 = pFVar6 + 8;
      }
    }
  }
  return;
}

// OnUnhovered @ 14bcbc4c0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_CommonButton::OnUnhovered(UDS_W_CommonButton *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UDS_LongPressProcessor *this_00;
  UDS_W_CommonButtonBase *pUVar3;
  longlong *plVar4;
  bool bVar5;
  ADS_PlayerController *this_01;
  FScriptContainerElement *pFVar6;
  FWeakObjectPtr local_res8;
  FReadAccessScope local_28;
  
  if ((this->bIsLongPress != false) &&
     (this_00 = (this->LongPressProcessor).field0_0x0.DebugPtr,
     this_00 != (UDS_LongPressProcessor *)0x0)) {
    UDS_LongPressProcessor::OutofButtonRange(this_00);
  }
  pUVar3 = (this->ButtonBase).field0_0x0.DebugPtr;
  if (pUVar3 != (UDS_W_CommonButtonBase *)0x0) {
    (this->OnUnhoveredEvent)._padding_ = '\x01';
    (this->OnUnhoveredEvent).bIsCustomDisabled = pUVar3->bIsCustomDisabled;
    (this->OnUnhoveredEvent).bIsCustomSelected =
         ((this->ButtonBase).field0_0x0.DebugPtr)->bIsCustomSelected;
    (this->OnUnhoveredEvent).bIsLacked = ((this->ButtonBase).field0_0x0.DebugPtr)->bIsLacked;
    (this->OnUnhoveredEvent).ButtonEventType = Unhovered;
  }
  local_28.DestructionSentinel.AccessType =
       FFieldNotificationClassDescriptor::OnUnhoveredEvent.FieldName.ComparisonIndex.Value;
  local_28.DestructionSentinel._4_4_ =
       FFieldNotificationClassDescriptor::OnUnhoveredEvent.FieldName.Number;
  local_28.DestructionSentinel.Accessor._0_4_ =
       FFieldNotificationClassDescriptor::OnUnhoveredEvent.BitNumber;
  UWidget::BroadcastFieldValueChanged((UWidget *)&this->_padding_,(FFieldId *)&local_28);
  pUVar3 = (this->ButtonBase).field0_0x0.DebugPtr;
  if (pUVar3 != (UDS_W_CommonButtonBase *)0x0) {
    UDS_W_CommonButtonBase::Called_OnUnhovered(pUVar3);
    pUVar3 = (this->ButtonBase).field0_0x0.DebugPtr;
    this->ButtonStateType = pUVar3->ButtonStateType;
    if (pUVar3 != (UDS_W_CommonButtonBase *)0x0) {
      pFVar6 = (this->ButtonSwitcherArray).AllocatorInstance.Data;
      iVar2 = (this->ButtonSwitcherArray).ArrayNum;
      pFVar1 = pFVar6 + (longlong)iVar2 * 8;
      while( true ) {
        if ((this->ButtonSwitcherArray).ArrayNum != iVar2) {
          `TCheckedPointerIterator<TObjectPtr<UDS_ButtonSwitcher>,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_res8);
        }
        if (pFVar6 == pFVar1) break;
        if (*(UDS_ButtonSwitcher **)pFVar6 != (UDS_ButtonSwitcher *)0x0) {
          UDS_ButtonSwitcher::SetButtonEvent
                    (*(UDS_ButtonSwitcher **)pFVar6,
                     &((this->ButtonBase).field0_0x0.DebugPtr)->ButtonStateType);
        }
        pFVar6 = pFVar6 + 8;
      }
    }
  }
  if (this->IsHoverSlowdown == true) {
    ADS_PlayerController::GetPlayerController();
    bVar5 = FWeakObjectPtr::IsValid(&local_res8);
    if (bVar5) {
      this_01 = (ADS_PlayerController *)FWeakObjectPtr::Get(&local_res8);
      ADS_PlayerController::SetCursorShape(this_01,Default);
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &(this->OnUnhoveredEvent).Delegate,&local_28);
  if ((*(int *)&(this->OnUnhoveredEvent).Delegate.field_0x10 != 0) &&
     (plVar4 = *(longlong **)&(this->OnUnhoveredEvent).Delegate.field_0x8, plVar4 != (longlong *)0x0
     )) {
    (**(code **)(*plVar4 + 0x68))(plVar4,this);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// OpenTooltipText @ 14bcbcd00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_CommonButton::OpenTooltipText(UDS_W_CommonButton *this)

{
  bool bVar1;
  UDS_WindowManager *this_00;
  UDS_LogManager *pUVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  undefined1 auStackY_1c8 [32];
  uint uStack_18c;
  undefined1 local_188 [8];
  FDelegateAllocation local_180;
  UDS_W_CommonButton *local_170;
  FDestructionSentinel local_168;
  FDelegateAllocation *local_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  bVar1 = FDS_Text::IsEmpty(&this->DSTooltipText);
  if (!bVar1) {
    this_00 = UDS_WindowManager::GetInst();
    if (this_00 == (UDS_WindowManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      if (pUVar2 != (UDS_LogManager *)0x0) {
        pUVar2 = UDS_LogManager::GetInst();
        local_148._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"UDS_W_CommonButton::OpenTooltipText",0x23,Yes);
        UDS_LogManager::PrintLog(pUVar2,1,Warning,local_148.Ptr,0x203,L"windowManager == nullptr");
        if ((void *)local_148._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_148._padding_);
        }
      }
    }
    else {
      local_188 = (undefined1  [8])0x0;
      local_180.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_180.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_188,
                 (FWriteAccessScope *)&local_168);
      local_150 = &local_180;
      puVar3 = UE::Core::Private::DelegateAllocate(0x30,&local_180);
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = &
                  ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar4 = FDelegateHandle::GenerateNewID();
        puVar3[2] = uVar4;
        *puVar3 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_W_CommonButton____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this != (UDS_W_CommonButton *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar3[3] = 0;
        local_170 = this;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this != (UDS_W_CommonButton *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar3 + 3),(FObjectPtr)&local_170);
        puVar3[4] = OnOpenTooltipText;
        puVar3[5] = (ulonglong)uStack_18c << 0x20;
      }
      if (local_168.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_168.Accessor,&local_168);
      }
      UDS_WindowManager::OpenWindow
                (this_00,CommonTextTooltip,
                 (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)local_188);
    }
  }
  return;
}

// PostWidgetBinding @ 14bcbd6e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_CommonButton::PostWidgetBinding(UDS_W_CommonButton *this)

{
  UDS_W_CommonButtonBase *pUVar1;
  UDS_LogManager *pUVar2;
  undefined1 auStackY_198 [32];
  undefined1 local_168 [24];
  FMRSWRecursiveAccessDetector *pFStack_150;
  char local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  pUVar1 = (this->ButtonBase).field0_0x0.DebugPtr;
  if (pUVar1 == (UDS_W_CommonButtonBase *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_W_CommonButton::PostWidgetBinding",0x25,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_138.Ptr,0x112,L"BindWidget - ButtonBase is nullptr");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pUVar1->field_0x15f0,
               (FWriteAccessScope *)(local_168 + 0x10));
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::ClearUnchecked
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->field_0x15f0);
    if (local_148 == '\0') {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                (pFStack_150,(FDestructionSentinel *)(local_168 + 0x10));
    }
    pUVar1 = (this->ButtonBase).field0_0x0.DebugPtr;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pUVar1->field_0x1610,
               (FWriteAccessScope *)(local_168 + 0x10));
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::ClearUnchecked
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->field_0x1610);
    if (local_148 == '\0') {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                (pFStack_150,(FDestructionSentinel *)(local_168 + 0x10));
    }
    pUVar1 = (this->ButtonBase).field0_0x0.DebugPtr;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pUVar1->field_0x15b0,
               (FWriteAccessScope *)(local_168 + 0x10));
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::ClearUnchecked
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->field_0x15b0);
    if (local_148 == '\0') {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                (pFStack_150,(FDestructionSentinel *)(local_168 + 0x10));
    }
    pUVar1 = (this->ButtonBase).field0_0x0.DebugPtr;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pUVar1->field_0x15d0,
               (FWriteAccessScope *)(local_168 + 0x10));
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::ClearUnchecked
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->field_0x15d0);
    if (local_148 == '\0') {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                (pFStack_150,(FDestructionSentinel *)(local_168 + 0x10));
    }
    pUVar1 = (this->ButtonBase).field0_0x0.DebugPtr;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pUVar1->field_0x1570,
               (FWriteAccessScope *)(local_168 + 0x10));
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::ClearUnchecked
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->field_0x1570);
    if (local_148 == '\0') {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                (pFStack_150,(FDestructionSentinel *)(local_168 + 0x10));
    }
    pUVar1 = (this->ButtonBase).field0_0x0.DebugPtr;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pUVar1->field_0x1630,
               (FWriteAccessScope *)(local_168 + 0x10));
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::ClearUnchecked
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->field_0x1630);
    if (local_148 == '\0') {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                (pFStack_150,(FDestructionSentinel *)(local_168 + 0x10));
    }
    pUVar1 = (this->ButtonBase).field0_0x0.DebugPtr;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pUVar1->field_0x1650,
               (FWriteAccessScope *)(local_168 + 0x10));
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::ClearUnchecked
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->field_0x1650);
    if (local_148 == '\0') {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                (pFStack_150,(FDestructionSentinel *)(local_168 + 0x10));
    }
    local_168._0_8_ = OnHovered;
    local_168._8_4_ = 0;
    pFStack_150 = (FMRSWRecursiveAccessDetector *)((ulonglong)(uint)local_168._12_4_ << 0x20);
    local_168._16_8_ = OnHovered;
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_W_CommonButton>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &((this->ButtonBase).field0_0x0.DebugPtr)->field_0x15f0,
               (UDS_W_CommonButton *)local_168,(pmf_ce868e9c *)this);
    local_168._0_8_ = OnUnhovered;
    local_168._8_4_ = 0;
    pFStack_150 = (FMRSWRecursiveAccessDetector *)((ulonglong)(uint)local_168._12_4_ << 0x20);
    local_168._16_8_ = OnUnhovered;
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_W_CommonButton>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &((this->ButtonBase).field0_0x0.DebugPtr)->field_0x1610,
               (UDS_W_CommonButton *)local_168,(pmf_ce868e9c *)this);
    local_168._0_8_ = OnPressed;
    local_168._8_4_ = 0;
    pFStack_150 = (FMRSWRecursiveAccessDetector *)((ulonglong)(uint)local_168._12_4_ << 0x20);
    local_168._16_8_ = OnPressed;
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_W_CommonButton>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &((this->ButtonBase).field0_0x0.DebugPtr)->field_0x15b0,
               (UDS_W_CommonButton *)local_168,(pmf_ce868e9c *)this);
    local_168._0_8_ = OnReleased;
    local_168._8_4_ = 0;
    pFStack_150 = (FMRSWRecursiveAccessDetector *)((ulonglong)(uint)local_168._12_4_ << 0x20);
    local_168._16_8_ = OnReleased;
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_W_CommonButton>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &((this->ButtonBase).field0_0x0.DebugPtr)->field_0x15d0,
               (UDS_W_CommonButton *)local_168,(pmf_ce868e9c *)this);
    local_168._0_8_ = OnClicked;
    local_168._8_4_ = 0;
    pFStack_150 = (FMRSWRecursiveAccessDetector *)((ulonglong)(uint)local_168._12_4_ << 0x20);
    local_168._16_8_ = OnClicked;
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_W_CommonButton>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &((this->ButtonBase).field0_0x0.DebugPtr)->field_0x1570,
               (UDS_W_CommonButton *)local_168,(pmf_ce868e9c *)this);
    local_168._0_8_ = OnFocused;
    local_168._8_4_ = 0;
    pFStack_150 = (FMRSWRecursiveAccessDetector *)((ulonglong)(uint)local_168._12_4_ << 0x20);
    local_168._16_8_ = OnFocused;
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_W_CommonButton>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &((this->ButtonBase).field0_0x0.DebugPtr)->field_0x1630,
               (UDS_W_CommonButton *)local_168,(pmf_ce868e9c *)this);
    local_168._0_8_ = OnFocusLosted;
    local_168._8_4_ = 0;
    pFStack_150 = (FMRSWRecursiveAccessDetector *)((ulonglong)(uint)local_168._12_4_ << 0x20);
    local_168._16_8_ = OnFocusLosted;
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_W_CommonButton>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &((this->ButtonBase).field0_0x0.DebugPtr)->field_0x1650,
               (UDS_W_CommonButton *)local_168,(pmf_ce868e9c *)this);
    UDS_W_CommonButtonBase::SetButtonStateType
              ((this->ButtonBase).field0_0x0.DebugPtr,&this->ButtonStateType);
    UDS_W_CommonButtonBase::SetMinWidth((this->ButtonBase).field0_0x0.DebugPtr,&this->MinWidth);
    UDS_W_CommonButtonBase::SetMinHeight((this->ButtonBase).field0_0x0.DebugPtr,&this->MinHeight);
  }
  return;
}

// ReleaseButtonSelectedEvent @ 14bcc3910

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_CommonButton::ReleaseButtonSelectedEvent(UDS_W_CommonButton *this)

{
  bool bVar1;
  bool local_res8 [32];
  
  if (this->bSelectionFollowsFocus != false) {
    bVar1 = UUserWidget::IsFocusable((UUserWidget *)this);
    if (bVar1) {
      local_res8[0] = false;
      SetSelectedButton(this,local_res8);
    }
  }
  return;
}

// SetButtonEventField @ 14bcc5260

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_W_CommonButton::SetButtonEventField
          (UDS_W_CommonButton *this,FDS_ButtonEventField *param_1,EDS_ButtonEventType *param_2)

{
  if ((this->ButtonBase).field0_0x0.DebugPtr != (UDS_W_CommonButtonBase *)0x0) {
    param_1->_padding_ = '\x01';
    param_1->bIsCustomDisabled = ((this->ButtonBase).field0_0x0.DebugPtr)->bIsCustomDisabled;
    param_1->bIsCustomSelected = ((this->ButtonBase).field0_0x0.DebugPtr)->bIsCustomSelected;
    param_1->bIsLacked = ((this->ButtonBase).field0_0x0.DebugPtr)->bIsLacked;
    param_1->ButtonEventType = *param_2;
  }
  return;
}

// SetDisabledButton @ 14bcc5fc0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_CommonButton::SetDisabledButton(UDS_W_CommonButton *this,bool *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UDS_W_CommonButtonBase *pUVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  this->bDisabledButton = *param_1;
  pUVar3 = (this->ButtonBase).field0_0x0.DebugPtr;
  if (pUVar3 != (UDS_W_CommonButtonBase *)0x0) {
    UDS_W_CommonButtonBase::SetDisabled(pUVar3,&this->bDisabledButton);
    pUVar3 = (this->ButtonBase).field0_0x0.DebugPtr;
    this->ButtonStateType = pUVar3->ButtonStateType;
    if (pUVar3 != (UDS_W_CommonButtonBase *)0x0) {
      pFVar4 = (this->ButtonSwitcherArray).AllocatorInstance.Data;
      iVar2 = (this->ButtonSwitcherArray).ArrayNum;
      pFVar1 = pFVar4 + (longlong)iVar2 * 8;
      while( true ) {
        if ((this->ButtonSwitcherArray).ArrayNum != iVar2) {
          `TCheckedPointerIterator<TObjectPtr<UDS_ButtonSwitcher>,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res8);
        }
        if (pFVar4 == pFVar1) break;
        if (*(UDS_ButtonSwitcher **)pFVar4 != (UDS_ButtonSwitcher *)0x0) {
          UDS_ButtonSwitcher::SetButtonEvent
                    (*(UDS_ButtonSwitcher **)pFVar4,
                     &((this->ButtonBase).field0_0x0.DebugPtr)->ButtonStateType);
        }
        pFVar4 = pFVar4 + 8;
      }
    }
  }
  return;
}

// SetInputEventField @ 14bcc70b0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_W_CommonButton::SetInputEventField(UDS_W_CommonButton *this,FDS_InputEventField *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UDS_LongPressProcessor *this_00;
  UDS_W_CommonButtonBase *pUVar3;
  longlong *plVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res10 [8];
  FReadAccessScope local_28;
  
  if (param_1->_padding_ != '\0') {
    if (this->bIsLongPress == false) {
      OnClicked(this);
      return;
    }
    this_00 = (this->LongPressProcessor).field0_0x0.DebugPtr;
    if (param_1->IsPress == false) {
      this->bForceLongPress = false;
      if (this_00 != (UDS_LongPressProcessor *)0x0) {
        UDS_LongPressProcessor::OnRelease(this_00);
      }
      pUVar3 = (this->ButtonBase).field0_0x0.DebugPtr;
      if (pUVar3 != (UDS_W_CommonButtonBase *)0x0) {
        (this->OnReleasedEvent)._padding_ = '\x01';
        (this->OnReleasedEvent).bIsCustomDisabled = pUVar3->bIsCustomDisabled;
        (this->OnReleasedEvent).bIsCustomSelected =
             ((this->ButtonBase).field0_0x0.DebugPtr)->bIsCustomSelected;
        (this->OnReleasedEvent).bIsLacked = ((this->ButtonBase).field0_0x0.DebugPtr)->bIsLacked;
        (this->OnReleasedEvent).ButtonEventType = Release;
      }
      local_28.DestructionSentinel.AccessType =
           FFieldNotificationClassDescriptor::OnReleasedEvent.FieldName.ComparisonIndex.Value;
      local_28.DestructionSentinel._4_4_ =
           FFieldNotificationClassDescriptor::OnReleasedEvent.FieldName.Number;
      local_28.DestructionSentinel.Accessor._0_4_ =
           FFieldNotificationClassDescriptor::OnReleasedEvent.BitNumber;
      UWidget::BroadcastFieldValueChanged((UWidget *)&this->_padding_,(FFieldId *)&local_28);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &(this->OnReleasedEvent).Delegate,&local_28);
      if ((*(int *)&(this->OnReleasedEvent).Delegate.field_0x10 != 0) &&
         (plVar4 = *(longlong **)&(this->OnReleasedEvent).Delegate.field_0x8,
         plVar4 != (longlong *)0x0)) {
        (**(code **)(*plVar4 + 0x68))(plVar4,this);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      pUVar3 = (this->ButtonBase).field0_0x0.DebugPtr;
      if (pUVar3 != (UDS_W_CommonButtonBase *)0x0) {
        UDS_W_CommonButtonBase::Called_OnReleased(pUVar3);
        pUVar3 = (this->ButtonBase).field0_0x0.DebugPtr;
        this->ButtonStateType = pUVar3->ButtonStateType;
        if (pUVar3 != (UDS_W_CommonButtonBase *)0x0) {
          pFVar5 = (this->ButtonSwitcherArray).AllocatorInstance.Data;
          iVar2 = (this->ButtonSwitcherArray).ArrayNum;
          pFVar1 = pFVar5 + (longlong)iVar2 * 8;
          while( true ) {
            if ((this->ButtonSwitcherArray).ArrayNum != iVar2) {
              `TCheckedPointerIterator<TObjectPtr<UDS_ButtonSwitcher>,int,0>::operator!='::__l2::
              <lambda_1>::operator()(local_res10);
            }
            if (pFVar5 == pFVar1) break;
            if (*(UDS_ButtonSwitcher **)pFVar5 != (UDS_ButtonSwitcher *)0x0) {
              UDS_ButtonSwitcher::SetButtonEvent
                        (*(UDS_ButtonSwitcher **)pFVar5,
                         &((this->ButtonBase).field0_0x0.DebugPtr)->ButtonStateType);
            }
            pFVar5 = pFVar5 + 8;
          }
        }
      }
    }
    else {
      this->bForceLongPress = true;
      if (this_00 != (UDS_LongPressProcessor *)0x0) {
        UDS_LongPressProcessor::OnPress(this_00);
      }
      pUVar3 = (this->ButtonBase).field0_0x0.DebugPtr;
      if (pUVar3 != (UDS_W_CommonButtonBase *)0x0) {
        (this->OnPressedEvent)._padding_ = '\x01';
        (this->OnPressedEvent).bIsCustomDisabled = pUVar3->bIsCustomDisabled;
        (this->OnPressedEvent).bIsCustomSelected =
             ((this->ButtonBase).field0_0x0.DebugPtr)->bIsCustomSelected;
        (this->OnPressedEvent).bIsLacked = ((this->ButtonBase).field0_0x0.DebugPtr)->bIsLacked;
        (this->OnPressedEvent).ButtonEventType = Press;
      }
      local_28.DestructionSentinel.AccessType =
           FFieldNotificationClassDescriptor::OnPressedEvent.FieldName.ComparisonIndex.Value;
      local_28.DestructionSentinel._4_4_ =
           FFieldNotificationClassDescriptor::OnPressedEvent.FieldName.Number;
      local_28.DestructionSentinel.Accessor._0_4_ =
           FFieldNotificationClassDescriptor::OnPressedEvent.BitNumber;
      UWidget::BroadcastFieldValueChanged((UWidget *)&this->_padding_,(FFieldId *)&local_28);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &(this->OnPressedEvent).Delegate,&local_28);
      if ((*(int *)&(this->OnPressedEvent).Delegate.field_0x10 != 0) &&
         (plVar4 = *(longlong **)&(this->OnPressedEvent).Delegate.field_0x8,
         plVar4 != (longlong *)0x0)) {
        (**(code **)(*plVar4 + 0x68))(plVar4,this);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      pUVar3 = (this->ButtonBase).field0_0x0.DebugPtr;
      if (pUVar3 != (UDS_W_CommonButtonBase *)0x0) {
        UDS_W_CommonButtonBase::Called_OnPressed(pUVar3);
        pUVar3 = (this->ButtonBase).field0_0x0.DebugPtr;
        this->ButtonStateType = pUVar3->ButtonStateType;
        if (pUVar3 != (UDS_W_CommonButtonBase *)0x0) {
          pFVar5 = (this->ButtonSwitcherArray).AllocatorInstance.Data;
          iVar2 = (this->ButtonSwitcherArray).ArrayNum;
          pFVar1 = pFVar5 + (longlong)iVar2 * 8;
          while( true ) {
            if ((this->ButtonSwitcherArray).ArrayNum != iVar2) {
              `TCheckedPointerIterator<TObjectPtr<UDS_ButtonSwitcher>,int,0>::operator!='::__l2::
              <lambda_1>::operator()(local_res10);
            }
            if (pFVar5 == pFVar1) break;
            if (*(UDS_ButtonSwitcher **)pFVar5 != (UDS_ButtonSwitcher *)0x0) {
              UDS_ButtonSwitcher::SetButtonEvent
                        (*(UDS_ButtonSwitcher **)pFVar5,
                         &((this->ButtonBase).field0_0x0.DebugPtr)->ButtonStateType);
            }
            pFVar5 = pFVar5 + 8;
          }
        }
      }
    }
  }
  return;
}

// SetIsLongPress @ 14bcc7410

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_CommonButton::SetIsLongPress(UDS_W_CommonButton *this,bool *param_1)

{
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  UDS_LongPressProcessor *pUVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  UDS_W_CommonButton *local_res8;
  FFieldId local_58;
  undefined4 uStack_4c;
  FDestructionSentinel local_48;
  undefined1 *local_30;
  
  pUVar1 = (this->LongPressProcessor).field0_0x0.DebugPtr;
  if (pUVar1 != (UDS_LongPressProcessor *)0x0) {
    pUVar1->bUsableLongPress = *param_1;
    pUVar1 = (this->LongPressProcessor).field0_0x0.DebugPtr;
    this_00 = &pUVar1->OnLongPressStartDelegate;
    if (*param_1 == false) {
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)
                 &((this->LongPressProcessor).field0_0x0.DebugPtr)->OnLongPressEndDelegate);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)
                 &((this->LongPressProcessor).field0_0x0.DebugPtr)->OnLongPressPressingDelegate);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)
                 &((this->LongPressProcessor).field0_0x0.DebugPtr)->OnLongPressRatioDelegate);
    }
    else {
      local_58.FieldName = (FName)OnLongPressStart;
      local_58.BitNumber = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
                 (FWriteAccessScope *)&local_48);
      local_30 = &(pUVar1->OnLongPressStartDelegate).field_0x8;
      puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_30);
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
        uVar3 = FDelegateHandle::GenerateNewID();
        puVar2[2] = uVar3;
        *puVar2 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_W_CommonButton____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar2[3] = 0;
        local_res8 = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)&local_res8);
        *(FName *)(puVar2 + 4) = local_58.FieldName;
        puVar2[5] = CONCAT44(uStack_4c,local_58.BitNumber);
      }
      if (local_48.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
      }
      pUVar1 = (this->LongPressProcessor).field0_0x0.DebugPtr;
      local_58.FieldName = (FName)OnLongPressSuccess;
      local_58.BitNumber = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &pUVar1->OnLongPressEndDelegate,(FWriteAccessScope *)&local_48);
      local_30 = &(pUVar1->OnLongPressEndDelegate).field_0x8;
      puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_30);
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
        uVar3 = FDelegateHandle::GenerateNewID();
        puVar2[2] = uVar3;
        *puVar2 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_W_CommonButton____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar2[3] = 0;
        local_res8 = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)&local_res8);
        *(FName *)(puVar2 + 4) = local_58.FieldName;
        puVar2[5] = CONCAT44(uStack_4c,local_58.BitNumber);
      }
      if (local_48.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
      }
      pUVar1 = (this->LongPressProcessor).field0_0x0.DebugPtr;
      local_58.FieldName = (FName)OnLongPressPressing;
      local_58.BitNumber = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &pUVar1->OnLongPressPressingDelegate,(FWriteAccessScope *)&local_48);
      local_30 = &(pUVar1->OnLongPressPressingDelegate).field_0x8;
      puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_30);
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
        uVar3 = FDelegateHandle::GenerateNewID();
        puVar2[2] = uVar3;
        *puVar2 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_W_CommonButton____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar2[3] = 0;
        local_res8 = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)&local_res8);
        *(FName *)(puVar2 + 4) = local_58.FieldName;
        puVar2[5] = CONCAT44(uStack_4c,local_58.BitNumber);
      }
      if (local_48.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
      }
      pUVar1 = (this->LongPressProcessor).field0_0x0.DebugPtr;
      local_58.FieldName = (FName)SetLongPressRatio;
      local_58.BitNumber = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &pUVar1->OnLongPressRatioDelegate,(FWriteAccessScope *)&local_48);
      local_30 = &(pUVar1->OnLongPressRatioDelegate).field_0x8;
      puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_30);
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = &
                  ___7__TCommonDelegateInstanceState___A6AXAEBM_ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar3 = FDelegateHandle::GenerateNewID();
        puVar2[2] = uVar3;
        *puVar2 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_W_CommonButton____A6AXAEBM_ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar2[3] = 0;
        local_res8 = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)&local_res8);
        *(FName *)(puVar2 + 4) = local_58.FieldName;
        puVar2[5] = CONCAT44(uStack_4c,local_58.BitNumber);
      }
      if (local_48.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
      }
    }
  }
  this->bIsLongPress = *param_1;
  local_58.FieldName = FFieldNotificationClassDescriptor::LongPressRatio.FieldName;
  local_58.BitNumber = FFieldNotificationClassDescriptor::LongPressRatio.BitNumber;
  UWidget::BroadcastFieldValueChanged((UWidget *)&this->_padding_,&local_58);
  return;
}

// SetLackedButton @ 14bcc7800

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_CommonButton::SetLackedButton(UDS_W_CommonButton *this,bool *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UDS_W_CommonButtonBase *pUVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  this->bLackedButton = *param_1;
  pUVar3 = (this->ButtonBase).field0_0x0.DebugPtr;
  if (pUVar3 != (UDS_W_CommonButtonBase *)0x0) {
    UDS_W_CommonButtonBase::SetLacked(pUVar3,&this->bLackedButton);
    pUVar3 = (this->ButtonBase).field0_0x0.DebugPtr;
    this->ButtonStateType = pUVar3->ButtonStateType;
    if (pUVar3 != (UDS_W_CommonButtonBase *)0x0) {
      pFVar4 = (this->ButtonSwitcherArray).AllocatorInstance.Data;
      iVar2 = (this->ButtonSwitcherArray).ArrayNum;
      pFVar1 = pFVar4 + (longlong)iVar2 * 8;
      while( true ) {
        if ((this->ButtonSwitcherArray).ArrayNum != iVar2) {
          `TCheckedPointerIterator<TObjectPtr<UDS_ButtonSwitcher>,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res8);
        }
        if (pFVar4 == pFVar1) break;
        if (*(UDS_ButtonSwitcher **)pFVar4 != (UDS_ButtonSwitcher *)0x0) {
          UDS_ButtonSwitcher::SetButtonEvent
                    (*(UDS_ButtonSwitcher **)pFVar4,
                     &((this->ButtonBase).field0_0x0.DebugPtr)->ButtonStateType);
        }
        pFVar4 = pFVar4 + 8;
      }
    }
  }
  return;
}

// SetLongPressAnimationName @ 14bcc78c0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_W_CommonButton::SetLongPressAnimationName(UDS_W_CommonButton *this,FName *param_1)

{
  FFieldId local_18 [2];
  
  this->LongPressAnimationName = *param_1;
  local_18[0].FieldName = FFieldNotificationClassDescriptor::LongPressAnimationName.FieldName;
  local_18[0].BitNumber = FFieldNotificationClassDescriptor::LongPressAnimationName.BitNumber;
  UWidget::BroadcastFieldValueChanged((UWidget *)&this->_padding_,local_18);
  return;
}

// SetLongPressDelay @ 14bcc7900

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_CommonButton::SetLongPressDelay(UDS_W_CommonButton *this,float *param_1)

{
  UDS_LongPressProcessor *pUVar1;
  FFieldId local_18 [2];
  
  pUVar1 = (this->LongPressProcessor).field0_0x0.DebugPtr;
  if (pUVar1 != (UDS_LongPressProcessor *)0x0) {
    pUVar1->LongPressDelay = *param_1;
  }
  this->LongPressDelay = *param_1;
  local_18[0].FieldName = FFieldNotificationClassDescriptor::LongPressDelay.FieldName;
  local_18[0].BitNumber = FFieldNotificationClassDescriptor::LongPressDelay.BitNumber;
  UWidget::BroadcastFieldValueChanged((UWidget *)&this->_padding_,local_18);
  return;
}

// SetLongPressEventField @ 14bcc7960

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_W_CommonButton::SetLongPressEventField
          (UDS_W_CommonButton *this,FDS_LongPressEventField *param_1)

{
  UDS_LongPressProcessor *pUVar1;
  
  if ((this->ButtonBase).field0_0x0.DebugPtr != (UDS_W_CommonButtonBase *)0x0) {
    *(undefined1 *)&param_1->_padding_ = 1;
    *(bool *)((longlong)&param_1->_padding_ + 3) =
         ((this->ButtonBase).field0_0x0.DebugPtr)->bIsCustomDisabled;
    *(bool *)((longlong)&param_1->_padding_ + 1) =
         ((this->ButtonBase).field0_0x0.DebugPtr)->bIsCustomSelected;
    *(bool *)((longlong)&param_1->_padding_ + 2) =
         ((this->ButtonBase).field0_0x0.DebugPtr)->bIsLacked;
    *(undefined4 *)((longlong)&param_1->_padding_ + 4) = 5;
  }
  pUVar1 = (this->LongPressProcessor).field0_0x0.DebugPtr;
  if (pUVar1 != (UDS_LongPressProcessor *)0x0) {
    param_1->LongPressTime = pUVar1->LongPressTime;
    param_1->LongPressDelay = ((this->LongPressProcessor).field0_0x0.DebugPtr)->LongPressDelay;
    param_1->LongPressRatio = ((this->LongPressProcessor).field0_0x0.DebugPtr)->LongPressRatio;
  }
  return;
}

// SetLongPressRatio @ 14bcc79f0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_CommonButton::SetLongPressRatio(UDS_W_CommonButton *this,float *param_1)

{
  FFieldId local_18 [2];
  
  this->LongPressRatio = *param_1;
  local_18[0].FieldName = FFieldNotificationClassDescriptor::LongPressRatio.FieldName;
  local_18[0].BitNumber = FFieldNotificationClassDescriptor::LongPressRatio.BitNumber;
  UWidget::BroadcastFieldValueChanged((UWidget *)&this->_padding_,local_18);
  return;
}

// SetLongPressTime @ 14bcc7a30

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_CommonButton::SetLongPressTime(UDS_W_CommonButton *this,float *param_1)

{
  UDS_LongPressProcessor *pUVar1;
  FFieldId local_18 [2];
  
  pUVar1 = (this->LongPressProcessor).field0_0x0.DebugPtr;
  if (pUVar1 != (UDS_LongPressProcessor *)0x0) {
    pUVar1->LongPressTime = *param_1;
  }
  this->LongPressTime = *param_1;
  local_18[0].FieldName = FFieldNotificationClassDescriptor::LongPressTime.FieldName;
  local_18[0].BitNumber = FFieldNotificationClassDescriptor::LongPressTime.BitNumber;
  UWidget::BroadcastFieldValueChanged((UWidget *)&this->_padding_,local_18);
  return;
}

// SetOutofRangeStop @ 14bcc7e20

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_CommonButton::SetOutofRangeStop(UDS_W_CommonButton *this,bool *param_1)

{
  UDS_LongPressProcessor *pUVar1;
  FFieldId local_18 [2];
  
  pUVar1 = (this->LongPressProcessor).field0_0x0.DebugPtr;
  if (pUVar1 != (UDS_LongPressProcessor *)0x0) {
    pUVar1->bIsOutofRangeStop = *param_1;
  }
  this->OutofRangeStop = *param_1;
  local_18[0].FieldName = FFieldNotificationClassDescriptor::OutofRangeStop.FieldName;
  local_18[0].BitNumber = FFieldNotificationClassDescriptor::OutofRangeStop.BitNumber;
  UWidget::BroadcastFieldValueChanged((UWidget *)&this->_padding_,local_18);
  return;
}

// SetSelectedButton @ 14bcc86e0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_CommonButton::SetSelectedButton(UDS_W_CommonButton *this,bool *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UDS_W_CommonButtonBase *pUVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  this->bSelectedButton = *param_1;
  pUVar3 = (this->ButtonBase).field0_0x0.DebugPtr;
  if (pUVar3 != (UDS_W_CommonButtonBase *)0x0) {
    UDS_W_CommonButtonBase::SetSelected(pUVar3,&this->bSelectedButton);
    pUVar3 = (this->ButtonBase).field0_0x0.DebugPtr;
    this->ButtonStateType = pUVar3->ButtonStateType;
    if (pUVar3 != (UDS_W_CommonButtonBase *)0x0) {
      pFVar4 = (this->ButtonSwitcherArray).AllocatorInstance.Data;
      iVar2 = (this->ButtonSwitcherArray).ArrayNum;
      pFVar1 = pFVar4 + (longlong)iVar2 * 8;
      while( true ) {
        if ((this->ButtonSwitcherArray).ArrayNum != iVar2) {
          `TCheckedPointerIterator<TObjectPtr<UDS_ButtonSwitcher>,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res8);
        }
        if (pFVar4 == pFVar1) break;
        if (*(UDS_ButtonSwitcher **)pFVar4 != (UDS_ButtonSwitcher *)0x0) {
          UDS_ButtonSwitcher::SetButtonEvent
                    (*(UDS_ButtonSwitcher **)pFVar4,
                     &((this->ButtonBase).field0_0x0.DebugPtr)->ButtonStateType);
        }
        pFVar4 = pFVar4 + 8;
      }
    }
  }
  return;
}

// SetTooltipText @ 14bcc93d0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_CommonButton::SetTooltipText(UDS_W_CommonButton *this,FDS_Text *param_1)

{
  FDS_Text::operator=(&this->DSTooltipText,param_1);
  return;
}

