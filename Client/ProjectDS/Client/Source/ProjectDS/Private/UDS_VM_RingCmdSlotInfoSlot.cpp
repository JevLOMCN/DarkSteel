// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 40

// SetContentsID_WrapperImpl @ 14b6d2830

void __cdecl UDS_VM_RingCmdSlotInfoSlot::SetContentsID_WrapperImpl(void *param_1,void *param_2)

{
  FDS_ContentsTotalMenuTableRow *pFVar1;
  FDS_ActionBaseTableRow *pFVar2;
  FDS_StringBaseID *pFVar3;
  FName FStack_68;
  int iStack_60;
  FDS_Text FStack_58;
  
  if (*(char *)((longlong)param_1 + 0x82d) == '\x02') {
    pFVar1 = FDS_ContentsTotalMenuTableRow::GetRef(*(long64 *)param_2,true);
    *(int *)((longlong)param_1 + 0xa8) = pFVar1->ID_Icon;
    iStack_60 = FFieldNotificationClassDescriptor::IconID.BitNumber;
    FStack_68 = FFieldNotificationClassDescriptor::IconID.FieldName;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_68);
    pFVar3 = &pFVar1->ID_Name;
  }
  else {
    if (*(char *)((longlong)param_1 + 0x82d) != '\x03') goto LAB_14be4a1e3;
    pFVar2 = FDS_ActionBaseTableRow::GetRef(*(long64 *)param_2,true);
    *(int *)((longlong)param_1 + 0xa8) = pFVar2->ID_Icon;
    iStack_60 = FFieldNotificationClassDescriptor::IconID.BitNumber;
    FStack_68 = FFieldNotificationClassDescriptor::IconID.FieldName;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_68);
    pFVar3 = &pFVar2->ID_Name;
  }
  FStack_58.StringTableType = None;
  FStack_58.StringTableID = 0;
  FStack_58.StringEnumTableNameID.ComparisonIndex.Value = 0;
  FStack_58.StringEnumTableNameID.Number = 0;
  FStack_58.DateTime.Ticks = 0;
  FStack_58.TimeSpan.Ticks = 0;
  FStack_58.TimeExpressionType = None;
  FStack_58.IsExpression = false;
  FStack_58.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_58.UniqueString.Data.ArrayNum = 0;
  FStack_58.UniqueString.Data.ArrayMax = 0;
  FStack_58.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_58.FormatArgs.ArrayNum = 0;
  FStack_58.FormatArgs.ArrayMax = 0;
  FDS_Text::SetTextFromStringID(&FStack_58,pFVar3);
  FDS_Text::operator=((FDS_Text *)((longlong)param_1 + 0xb0),&FStack_58);
  iStack_60 = FFieldNotificationClassDescriptor::MenuName.BitNumber;
  FStack_68 = FFieldNotificationClassDescriptor::MenuName.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))((longlong)param_1 + 0x28,&FStack_68)
  ;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)FStack_58.FormatArgs.AllocatorInstance.Data,
             FStack_58.FormatArgs.ArrayNum);
  if ((FDS_TextFormatArg *)FStack_58.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0)
  {
    FMemory::Free(FStack_58.FormatArgs.AllocatorInstance.Data);
  }
  if (FStack_58.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_58.UniqueString.Data.AllocatorInstance.Data);
  }
LAB_14be4a1e3:
  FStack_68 = FFieldNotificationClassDescriptor::ContentsID.FieldName;
  if (*(longlong *)((longlong)param_1 + 0xa0) != *(longlong *)param_2) {
    iStack_60 = FFieldNotificationClassDescriptor::ContentsID.BitNumber;
    *(longlong *)((longlong)param_1 + 0xa0) = *(longlong *)param_2;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong *)((longlong)param_1 + 0x28),&FStack_68);
  }
  return;
}

// SetIconID_WrapperImpl @ 14b6d2840

void __cdecl UDS_VM_RingCmdSlotInfoSlot::SetIconID_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  *(undefined4 *)((longlong)param_1 + 0xa8) = *(undefined4 *)param_2;
  iStack_10 = FFieldNotificationClassDescriptor::IconID.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::IconID.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetMenuName_WrapperImpl @ 14b6d2850

void __cdecl UDS_VM_RingCmdSlotInfoSlot::SetMenuName_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  FDS_Text::operator=((FDS_Text *)((longlong)param_1 + 0xb0),param_2);
  iStack_10 = FFieldNotificationClassDescriptor::MenuName.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::MenuName.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetIsContentsLock_WrapperImpl @ 14b6d2860

void __cdecl UDS_VM_RingCmdSlotInfoSlot::SetIsContentsLock_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  *(undefined1 *)((longlong)param_1 + 0x100) = *(undefined1 *)param_2;
  iStack_10 = FFieldNotificationClassDescriptor::IsContentsLock.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::IsContentsLock.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetIsContentsSelected_WrapperImpl @ 14b6d2870

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_RingCmdSlotInfoSlot::SetIsContentsSelected_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  *(undefined1 *)((longlong)param_1 + 0x101) = *(undefined1 *)param_2;
  iStack_10 = FFieldNotificationClassDescriptor::IsContentsSelected.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::IsContentsSelected.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  UpdateSwitcherState(param_1);
  return;
}

// SetClickEventField_WrapperImpl @ 14b6d2880

void __cdecl UDS_VM_RingCmdSlotInfoSlot::SetClickEventField_WrapperImpl(void *param_1,void *param_2)

{
  return;
}

// SetEventMouseButtonUp_WrapperImpl @ 14b6d2890

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_RingCmdSlotInfoSlot::SetEventMouseButtonUp_WrapperImpl(void *param_1,void *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FName FVar2;
  bool bVar3;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> TStack_28;
  
  if (*(char *)((longlong)param_1 + 0x837) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x837) = 0;
    return;
  }
  pTVar1 = *(TReferenceControllerBase<1> **)((longlong)param_2 + 0x98);
  FVar2 = *(FName *)((longlong)param_2 + 0x88);
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar3 = FVar2 == EKeys::LeftMouseButton.KeyName;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if (bVar3) {
    *(undefined1 *)((longlong)param_1 + 0x835) = 0;
    UpdateSwitcherState(param_1);
    if (*(char *)((longlong)param_1 + 0x100) == '\x01') {
      if (*(char *)((longlong)param_1 + 0x82d) == '\x03') {
        TStack_28._0_8_ = 0;
        TStack_28._8_8_ = 0;
        TStack_28._16_4_ = 0;
        UDS_UIMessageManager::OpenMsgByStringUi(0x3f7a1,Alert_None_01,&TStack_28);
        return;
      }
    }
    else {
      bVar3 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                        ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)param_1 + 0x838));
      if (bVar3) {
        TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::Execute
                  ((TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy> *)
                   ((longlong)param_1 + 0x838),*(int *)((longlong)param_1 + 0xa0));
      }
    }
  }
  return;
}

// SetEventMouseButtonDown_WrapperImpl @ 14b6d28a0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_RingCmdSlotInfoSlot::SetEventMouseButtonDown_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)((longlong)param_1 + 0x835) = 1;
  UpdateSwitcherState(param_1);
  return;
}

// SetEventMouseButtonDoubleClick_WrapperImpl @ 14b6d28b0

void __cdecl
UDS_VM_RingCmdSlotInfoSlot::SetEventMouseButtonDoubleClick_WrapperImpl(void *param_1,void *param_2)

{
  undefined4 uVar1;
  char cVar2;
  longlong *plVar3;
  FDestructionSentinel FStack_28;
  
  *(undefined1 *)((longlong)param_1 + 0x837) = 1;
  if (*(char *)((longlong)param_1 + 0x100) == '\x01') {
    if (*(char *)((longlong)param_1 + 0x82d) == '\x03') {
      FStack_28.AccessType = Reader;
      FStack_28._4_4_ = 0;
      FStack_28.Accessor = (FMRSWRecursiveAccessDetector *)0x0;
      FStack_28.bDestroyed = false;
      FStack_28._17_3_ = 0;
      UDS_UIMessageManager::OpenMsgByStringUi
                (0x3f7a1,Alert_None_01,
                 (TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy>
                  *)&FStack_28);
      return;
    }
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)param_1 + 0x850)
               ,(FReadAccessScope *)&FStack_28);
    if ((*(int *)((longlong)param_1 + 0x860) != 0) &&
       (*(longlong **)((longlong)param_1 + 0x858) != (longlong *)0x0)) {
      cVar2 = (**(code **)(**(longlong **)((longlong)param_1 + 0x858) + 0x38))();
      if (cVar2 != '\0') {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  ((FReadAccessScope *)&FStack_28);
        uVar1 = *(undefined4 *)((longlong)param_1 + 0xa0);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   ((longlong)param_1 + 0x850),(FReadAccessScope *)&FStack_28);
        if (*(int *)((longlong)param_1 + 0x860) == 0) {
          plVar3 = (longlong *)0x0;
        }
        else {
          plVar3 = *(longlong **)((longlong)param_1 + 0x858);
        }
        (**(code **)(*plVar3 + 0x60))(plVar3,uVar1);
      }
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&FStack_28);
  }
  return;
}

// SetEventOnDragDetected_WrapperImpl @ 14b6d28c0

void __cdecl
UDS_VM_RingCmdSlotInfoSlot::SetEventOnDragDetected_WrapperImpl(void *param_1,void *param_2)

{
  undefined4 uVar1;
  char cVar2;
  longlong *plVar3;
  FReadAccessScope FStack_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)param_1 + 0x838),
             &FStack_28);
  if ((*(int *)((longlong)param_1 + 0x848) != 0) &&
     (*(longlong **)((longlong)param_1 + 0x840) != (longlong *)0x0)) {
    cVar2 = (**(code **)(**(longlong **)((longlong)param_1 + 0x840) + 0x38))();
    if (cVar2 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&FStack_28);
      uVar1 = *(undefined4 *)((longlong)param_1 + 0xa0);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 ((longlong)param_1 + 0x838),&FStack_28);
      if (*(int *)((longlong)param_1 + 0x848) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)((longlong)param_1 + 0x840);
      }
      (**(code **)(*plVar3 + 0x60))(plVar3,uVar1);
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&FStack_28);
  return;
}

// SetEventOnDrop_WrapperImpl @ 14b6d28d0

void __cdecl UDS_VM_RingCmdSlotInfoSlot::SetEventOnDrop_WrapperImpl(void *param_1,void *param_2)

{
  return;
}

// SetEventOnDragCancelled_WrapperImpl @ 14b6d28e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_RingCmdSlotInfoSlot::SetEventOnDragCancelled_WrapperImpl(void *param_1,void *param_2)

{
  FDS_EventDelegate<bool_const_> *this;
  undefined1 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  UDS_EventManager *this_00;
  UDS_LogManager *pUVar9;
  UDS_RingCommandUIEvent *pUVar10;
  uint uVar11;
  longlong lVar12;
  undefined1 auStackY_188 [32];
  FDestructionSentinel FStack_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  this_00 = UDS_EventManager::GetInst();
  if (this_00 != (UDS_EventManager *)0x0) {
    if ((char)this_00->_padding_ == '\x01') {
      pUVar9 = UDS_LogManager::GetInst();
      if (pUVar9 != (UDS_LogManager *)0x0) {
        pUVar9 = UDS_LogManager::GetInst();
        TStack_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&TStack_138,"UDS_EventManager::GetEvent",0x1a,Yes);
        UDS_LogManager::PrintLog
                  (pUVar9,1,Warning,TStack_138.Ptr,0x31,
                   L"Cannot access event during UDS_EventManager destruction.");
        if ((void *)TStack_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)TStack_138._padding_);
        }
      }
    }
    else {
      pUVar10 = UDS_EventManager::GetEventInternal<UDS_RingCommandUIEvent>(this_00);
      if (pUVar10 != (UDS_RingCommandUIEvent *)0x0) {
        this = &pUVar10->OnRingCmdDragStateChanged;
        bVar5 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                          ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this);
        if (bVar5) {
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
                     (FWriteAccessScope *)&FStack_158);
          puVar1 = &(pUVar10->OnRingCmdDragStateChanged).Delegate.field_0x1c;
          *(int *)puVar1 = *(int *)puVar1 + 1;
          bVar5 = false;
          uVar11 = *(int *)&(pUVar10->OnRingCmdDragStateChanged).Delegate.field_0x10 - 1;
          if (-1 < (int)uVar11) {
            lVar12 = (longlong)(int)uVar11 << 4;
            bVar5 = false;
            do {
              uVar8 = 0;
              if ((int)uVar11 < *(int *)&(pUVar10->OnRingCmdDragStateChanged).Delegate.field_0x10) {
                uVar8 = ~uVar11 >> 0x1f;
              }
              if ((uVar8 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              lVar2 = *(longlong *)&(pUVar10->OnRingCmdDragStateChanged).Delegate.field_0x8;
              if (((*(int *)(lVar12 + 8 + lVar2) == 0) ||
                  (plVar3 = *(longlong **)(lVar12 + lVar2), plVar3 == (longlong *)0x0)) ||
                 (cVar7 = (**(code **)(*plVar3 + 0x68))(), cVar7 == '\0')) {
                bVar5 = true;
              }
              lVar12 = lVar12 + -0x10;
              uVar11 = uVar11 - 1;
            } while (-1 < (int)uVar11);
          }
          puVar1 = &(pUVar10->OnRingCmdDragStateChanged).Delegate.field_0x1c;
          *(int *)puVar1 = *(int *)puVar1 + -1;
          if (bVar5) {
            TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,false);
          }
          if (FStack_158.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_158.Accessor,&FStack_158);
          }
        }
      }
    }
  }
  return;
}

// SetEventMouseEnter_WrapperImpl @ 14b6d28f0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_RingCmdSlotInfoSlot::SetEventMouseEnter_WrapperImpl(void *param_1,void *param_2)

{
  UDS_WindowManager *this;
  undefined8 *puVar1;
  ulong64 uVar2;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *pTVar3;
  void *pvStackX_8;
  code *pcStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  bool bStack_68;
  undefined1 auStack_58 [8];
  FDelegateAllocation FStack_50;
  FDestructionSentinel FStack_40;
  FDelegateAllocation *pFStack_28;
  
  *(undefined1 *)((longlong)param_1 + 0x836) = 1;
  UpdateSwitcherState(param_1);
  this = UDS_WindowManager::GetInst();
  if ((this != (UDS_WindowManager *)0x0) && (*(char *)((longlong)param_1 + 0x82d) == '\x03')) {
    uStack_70 = 0;
    auStack_58 = (undefined1  [8])0x0;
    FStack_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    FStack_50.DelegateSize = 0;
    pcStack_78 = OnOpenActionToolTipCallback;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_58,
               (FWriteAccessScope *)&FStack_40);
    pFStack_28 = &FStack_50;
    puVar1 = UE::Core::Private::DelegateAllocate(0x30,&FStack_50);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = &
                ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__PEAV1___6B_
      ;
      puVar1[1] = *(undefined8 *)param_2;
      uVar2 = FDelegateHandle::GenerateNewID();
      puVar1[2] = uVar2;
      *puVar1 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_RingCmdSlotInfoSlot____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__PEAV2___6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(param_1);
      }
      puVar1[3] = 0;
      pvStackX_8 = param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(param_1);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar1 + 3),(FObjectPtr)&pvStackX_8);
      puVar1[4] = pcStack_78;
      puVar1[5] = CONCAT44(uStack_6c,uStack_70);
    }
    if (FStack_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_40.Accessor,&FStack_40);
    }
    pTVar3 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
             TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                       ((TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                        &pcStack_78,
                        (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                        auStack_58);
    UDS_WindowManager::OpenWindow(this,ActionTooltip,pTVar3);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_58,
               (FWriteAccessScope *)&pcStack_78);
    if ((FStack_50.DelegateSize != 0) &&
       (FStack_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)FStack_50.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&FStack_50,0,0,0x10);
      FStack_50.DelegateSize = 0;
    }
    if (bStack_68 == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_6c,uStack_70),
                 (FDestructionSentinel *)&pcStack_78);
    }
    if (FStack_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)FStack_50.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)auStack_58);
  }
  return;
}

// SetEventMouseLeave_WrapperImpl @ 14b6d2900

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_RingCmdSlotInfoSlot::SetEventMouseLeave_WrapperImpl(void *param_1,void *param_2)

{
  UDS_WindowManager *this;
  float afStackX_18 [2];
  uint auStackX_20 [2];
  
  this = UDS_WindowManager::GetInst();
  if (this != (UDS_WindowManager *)0x0) {
    if (*(char *)((longlong)param_1 + 0x82d) == '\x03') {
      afStackX_18[0] = 0.0;
      auStackX_20[0] = 0;
      UDS_WindowManager::CloseWindow(this,ActionTooltip,auStackX_20,afStackX_18);
    }
    *(undefined2 *)((longlong)param_1 + 0x835) = 0;
    UpdateSwitcherState(param_1);
    return;
  }
  return;
}

// StaticClass @ 14b6d2910

UClass * __cdecl UDS_VM_RingCmdSlotInfoSlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_RingCmdSlotInfoSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_RingCmdSlotInfoSlot",
               &Z_Registration_Info_UClass_UDS_VM_RingCmdSlotInfoSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_RingCmdSlotInfoSlot,0x868,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_RingCmdSlotInfoSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_RingCmdSlotInfoSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_RingCmdSlotInfoSlot.InnerSingleton;
}

// UDS_VM_RingCmdSlotInfoSlot @ 14b6d9820

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_VM_RingCmdSlotInfoSlot * __thiscall
UDS_VM_RingCmdSlotInfoSlot::UDS_VM_RingCmdSlotInfoSlot
          (UDS_VM_RingCmdSlotInfoSlot *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->MenuName).StringTableType = None;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_RingCmdSlotInfoSlot__6B_;
  (this->MenuName).StringTableID = 0;
  (this->MenuName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->MenuName).StringEnumTableNameID.Number = 0;
  (this->MenuName).DateTime.Ticks = 0;
  (this->MenuName).TimeSpan.Ticks = 0;
  (this->MenuName).TimeExpressionType = None;
  (this->MenuName).IsExpression = false;
  (this->MenuName).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MenuName).UniqueString.Data.ArrayNum = 0;
  (this->MenuName).UniqueString.Data.ArrayMax = 0;
  (this->MenuName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MenuName).FormatArgs.ArrayNum = 0;
  (this->MenuName).FormatArgs.ArrayMax = 0;
  (this->ClickEventField)._padding_ = '\0';
  (this->ClickEventField).bIsCustomSelected = false;
  (this->ClickEventField).bIsLacked = false;
  (this->ClickEventField).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickEventField).Delegate = 0;
  *(undefined8 *)&(this->ClickEventField).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickEventField).Delegate.field_0x10 = 0;
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
  *(undefined1 *)&(this->EventOnDragDetected)._padding_ = 0;
  (this->EventOnDragDetected).DragDropOperation.field0_0x0.DebugPtr = (UDragDropOperation *)0x0;
  FPointerEvent::FPointerEvent(&(this->EventOnDragDetected).PointerEvent);
  (this->EventOnDragDetected).DragCanceled = false;
  *(undefined1 *)&(this->EventOnDrop)._padding_ = 0;
  (this->EventOnDrop).DragDropOperation.field0_0x0.DebugPtr = (UDragDropOperation *)0x0;
  FPointerEvent::FPointerEvent(&(this->EventOnDrop).PointerEvent);
  (this->EventOnDrop).DragCanceled = false;
  *(undefined1 *)&(this->EventOnDragCancelled)._padding_ = 0;
  (this->EventOnDragCancelled).DragDropOperation.field0_0x0.DebugPtr = (UDragDropOperation *)0x0;
  FPointerEvent::FPointerEvent(&(this->EventOnDragCancelled).PointerEvent);
  (this->EventOnDragCancelled).DragCanceled = false;
  (this->EventMouseEnter).TargetWidget = (UDS_UserWidget *)0x0;
  FGeometry::FGeometry(&(this->EventMouseEnter).Geometry);
  FPointerEvent::FPointerEvent(&(this->EventMouseEnter).PointerEvent);
  FKeyEvent::FKeyEvent(&(this->EventMouseEnter).KeyEvent);
  (this->EventMouseLeave).TargetWidget = (UDS_UserWidget *)0x0;
  FGeometry::FGeometry(&(this->EventMouseLeave).Geometry);
  FPointerEvent::FPointerEvent(&(this->EventMouseLeave).PointerEvent);
  FKeyEvent::FKeyEvent(&(this->EventMouseLeave).KeyEvent);
  (this->SlotInfo).SlotInfo.Object = (FDS_SlotInfoBase *)0x0;
  (this->SlotInfo).SlotInfo.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->RingCmdContentID = 0;
  this->IsRegisted = false;
  this->IsClicked = false;
  this->IsHovered = false;
  this->DoubleClickFlag = false;
  *(undefined8 *)&this->OnClickSlotInfoButtonUpDelegate = 0;
  *(undefined8 *)&(this->OnClickSlotInfoButtonUpDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnClickSlotInfoButtonUpDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnClickSlotInfoDoubleClickDelegate = 0;
  *(undefined8 *)&(this->OnClickSlotInfoDoubleClickDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnClickSlotInfoDoubleClickDelegate).field_0x10 = 0;
  return this;
}

// UDS_VM_RingCmdSlotInfoSlot @ 14b6d9a50

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_VM_RingCmdSlotInfoSlot * __thiscall
UDS_VM_RingCmdSlotInfoSlot::UDS_VM_RingCmdSlotInfoSlot
          (UDS_VM_RingCmdSlotInfoSlot *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->MenuName).StringTableType = None;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_RingCmdSlotInfoSlot__6B_;
  (this->MenuName).StringTableID = 0;
  (this->MenuName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->MenuName).StringEnumTableNameID.Number = 0;
  (this->MenuName).DateTime.Ticks = 0;
  (this->MenuName).TimeSpan.Ticks = 0;
  (this->MenuName).TimeExpressionType = None;
  (this->MenuName).IsExpression = false;
  (this->MenuName).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MenuName).UniqueString.Data.ArrayNum = 0;
  (this->MenuName).UniqueString.Data.ArrayMax = 0;
  (this->MenuName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MenuName).FormatArgs.ArrayNum = 0;
  (this->MenuName).FormatArgs.ArrayMax = 0;
  (this->ClickEventField)._padding_ = '\0';
  (this->ClickEventField).bIsCustomSelected = false;
  (this->ClickEventField).bIsLacked = false;
  (this->ClickEventField).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickEventField).Delegate = 0;
  *(undefined8 *)&(this->ClickEventField).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickEventField).Delegate.field_0x10 = 0;
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
  *(undefined1 *)&(this->EventOnDragDetected)._padding_ = 0;
  (this->EventOnDragDetected).DragDropOperation.field0_0x0.DebugPtr = (UDragDropOperation *)0x0;
  FPointerEvent::FPointerEvent(&(this->EventOnDragDetected).PointerEvent);
  (this->EventOnDragDetected).DragCanceled = false;
  *(undefined1 *)&(this->EventOnDrop)._padding_ = 0;
  (this->EventOnDrop).DragDropOperation.field0_0x0.DebugPtr = (UDragDropOperation *)0x0;
  FPointerEvent::FPointerEvent(&(this->EventOnDrop).PointerEvent);
  (this->EventOnDrop).DragCanceled = false;
  *(undefined1 *)&(this->EventOnDragCancelled)._padding_ = 0;
  (this->EventOnDragCancelled).DragDropOperation.field0_0x0.DebugPtr = (UDragDropOperation *)0x0;
  FPointerEvent::FPointerEvent(&(this->EventOnDragCancelled).PointerEvent);
  (this->EventOnDragCancelled).DragCanceled = false;
  (this->EventMouseEnter).TargetWidget = (UDS_UserWidget *)0x0;
  FGeometry::FGeometry(&(this->EventMouseEnter).Geometry);
  FPointerEvent::FPointerEvent(&(this->EventMouseEnter).PointerEvent);
  FKeyEvent::FKeyEvent(&(this->EventMouseEnter).KeyEvent);
  (this->EventMouseLeave).TargetWidget = (UDS_UserWidget *)0x0;
  FGeometry::FGeometry(&(this->EventMouseLeave).Geometry);
  FPointerEvent::FPointerEvent(&(this->EventMouseLeave).PointerEvent);
  FKeyEvent::FKeyEvent(&(this->EventMouseLeave).KeyEvent);
  (this->SlotInfo).SlotInfo.Object = (FDS_SlotInfoBase *)0x0;
  (this->SlotInfo).SlotInfo.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->RingCmdContentID = 0;
  this->IsRegisted = false;
  this->IsClicked = false;
  this->IsHovered = false;
  this->DoubleClickFlag = false;
  *(undefined8 *)&this->OnClickSlotInfoButtonUpDelegate = 0;
  *(undefined8 *)&(this->OnClickSlotInfoButtonUpDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnClickSlotInfoButtonUpDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnClickSlotInfoDoubleClickDelegate = 0;
  *(undefined8 *)&(this->OnClickSlotInfoDoubleClickDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnClickSlotInfoDoubleClickDelegate).field_0x10 = 0;
  return this;
}

// ~UDS_VM_RingCmdSlotInfoSlot @ 14b6dabe0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_RingCmdSlotInfoSlot::~UDS_VM_RingCmdSlotInfoSlot(UDS_VM_RingCmdSlotInfoSlot *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_RingCmdSlotInfoSlot__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnClickSlotInfoDoubleClickDelegate)
  ;
  pvVar1 = *(void **)&(this->OnClickSlotInfoDoubleClickDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnClickSlotInfoDoubleClickDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnClickSlotInfoButtonUpDelegate);
  pvVar1 = *(void **)&(this->OnClickSlotInfoButtonUpDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnClickSlotInfoButtonUpDelegate);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SlotInfo).SlotInfo.SharedReferenceCount.ReferenceController);
  FKeyEvent::~FKeyEvent(&(this->EventMouseLeave).KeyEvent);
  FPointerEvent::~FPointerEvent(&(this->EventMouseLeave).PointerEvent);
  FKeyEvent::~FKeyEvent(&(this->EventMouseEnter).KeyEvent);
  FPointerEvent::~FPointerEvent(&(this->EventMouseEnter).PointerEvent);
  FPointerEvent::~FPointerEvent(&(this->EventOnDragCancelled).PointerEvent);
  FPointerEvent::~FPointerEvent(&(this->EventOnDrop).PointerEvent);
  FPointerEvent::~FPointerEvent(&(this->EventOnDragDetected).PointerEvent);
  FKeyEvent::~FKeyEvent(&(this->EventMouseButtonDoubleClick).KeyEvent);
  FPointerEvent::~FPointerEvent(&(this->EventMouseButtonDoubleClick).PointerEvent);
  FKeyEvent::~FKeyEvent(&(this->EventMouseButtonDown).KeyEvent);
  FPointerEvent::~FPointerEvent(&(this->EventMouseButtonDown).PointerEvent);
  FKeyEvent::~FKeyEvent(&(this->EventMouseButtonUp).KeyEvent);
  FPointerEvent::~FPointerEvent(&(this->EventMouseButtonUp).PointerEvent);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickEventField).Delegate);
  pvVar1 = *(void **)&(this->ClickEventField).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickEventField).Delegate);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->MenuName).FormatArgs.AllocatorInstance.Data,
             (this->MenuName).FormatArgs.ArrayNum);
  pFVar2 = (this->MenuName).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->MenuName).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6dd010

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

IClassDescriptor * __thiscall
UDS_VM_RingCmdSlotInfoSlot::GetFieldNotificationDescriptor(UDS_VM_RingCmdSlotInfoSlot *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_RingCmdSlotInfoSlot::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6ddd40

UClass * __cdecl UDS_VM_RingCmdSlotInfoSlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_RingCmdSlotInfoSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_RingCmdSlotInfoSlot",
               &Z_Registration_Info_UClass_UDS_VM_RingCmdSlotInfoSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_RingCmdSlotInfoSlot,0x868,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_RingCmdSlotInfoSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_RingCmdSlotInfoSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_RingCmdSlotInfoSlot.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_RingCmdSlotInfoSlot @ 14b6ddfe0

void __cdecl UDS_VM_RingCmdSlotInfoSlot::StaticRegisterNativesUDS_VM_RingCmdSlotInfoSlot(void)

{
  return;
}

// OnChangedRingCmdSelected @ 14be2b460

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_RingCmdSlotInfoSlot::OnChangedRingCmdSelected
          (UDS_VM_RingCmdSlotInfoSlot *this,EDS_RingCmdType *param_1,int param_2,bool param_3)

{
  FName local_18;
  int local_10;
  
  if ((this->RingCmdType == *param_1) && (this->RingCmdContentID == param_2)) {
    this->IsContentsSelected = param_3;
  }
  else {
    this->IsContentsSelected = false;
  }
  local_10 = FFieldNotificationClassDescriptor::IsContentsSelected.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsContentsSelected.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  UpdateSwitcherState(this);
  return;
}

// OnClickEventField @ 14be2c3b0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_RingCmdSlotInfoSlot::OnClickEventField
          (UDS_VM_RingCmdSlotInfoSlot *this,FDS_ButtonEventField *param_1)

{
  return;
}

// OnEventMouseButtonDoubleClick @ 14be2eb80

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_RingCmdSlotInfoSlot::OnEventMouseButtonDoubleClick
          (UDS_VM_RingCmdSlotInfoSlot *this,FDS_WidgetPointerEventField *param_1)

{
  long64 lVar1;
  char cVar2;
  longlong *plVar3;
  FDestructionSentinel local_28;
  
  this->DoubleClickFlag = true;
  if (this->IsContentsLock == true) {
    if (this->RingCmdType == Action) {
      local_28.AccessType = Reader;
      local_28._4_4_ = 0;
      local_28.Accessor = (FMRSWRecursiveAccessDetector *)0x0;
      local_28.bDestroyed = false;
      local_28._17_3_ = 0;
      UDS_UIMessageManager::OpenMsgByStringUi
                (0x3f7a1,Alert_None_01,
                 (TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy>
                  *)&local_28);
      return;
    }
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnClickSlotInfoDoubleClickDelegate,(FReadAccessScope *)&local_28);
    if ((*(int *)&(this->OnClickSlotInfoDoubleClickDelegate).field_0x10 != 0) &&
       (plVar3 = *(longlong **)&(this->OnClickSlotInfoDoubleClickDelegate).field_0x8,
       plVar3 != (longlong *)0x0)) {
      cVar2 = (**(code **)(*plVar3 + 0x38))();
      if (cVar2 != '\0') {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  ((FReadAccessScope *)&local_28);
        lVar1 = this->ContentsID;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &this->OnClickSlotInfoDoubleClickDelegate,(FReadAccessScope *)&local_28);
        if (*(int *)&(this->OnClickSlotInfoDoubleClickDelegate).field_0x10 == 0) {
          plVar3 = (longlong *)0x0;
        }
        else {
          plVar3 = *(longlong **)&(this->OnClickSlotInfoDoubleClickDelegate).field_0x8;
        }
        (**(code **)(*plVar3 + 0x60))(plVar3,(int)lVar1);
      }
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_28);
  }
  return;
}

// OnEventMouseButtonDown @ 14be2ed00

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_RingCmdSlotInfoSlot::OnEventMouseButtonDown
          (UDS_VM_RingCmdSlotInfoSlot *this,FDS_WidgetPointerEventField *param_1)

{
  this->IsClicked = true;
  UpdateSwitcherState(this);
  return;
}

// OnEventMouseButtonUp @ 14be2ee30

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_RingCmdSlotInfoSlot::OnEventMouseButtonUp
          (UDS_VM_RingCmdSlotInfoSlot *this,FDS_WidgetPointerEventField *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FName FVar2;
  bool bVar3;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_28;
  
  if (this->DoubleClickFlag == true) {
    this->DoubleClickFlag = false;
    return;
  }
  pTVar1 = (param_1->PointerEvent).EffectingButton.KeyDetails.SharedReferenceCount.
           ReferenceController;
  FVar2 = (param_1->PointerEvent).EffectingButton.KeyName;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar3 = FVar2 == EKeys::LeftMouseButton.KeyName;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if (bVar3) {
    this->IsClicked = false;
    UpdateSwitcherState(this);
    if (this->IsContentsLock == true) {
      if (this->RingCmdType == Action) {
        local_28._0_8_ = 0;
        local_28._8_8_ = 0;
        local_28._16_4_ = 0;
        UDS_UIMessageManager::OpenMsgByStringUi(0x3f7a1,Alert_None_01,&local_28);
        return;
      }
    }
    else {
      bVar3 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                        ((TDelegateBase<FNotThreadSafeDelegateMode> *)
                         &this->OnClickSlotInfoButtonUpDelegate);
      if (bVar3) {
        TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::Execute
                  (&this->OnClickSlotInfoButtonUpDelegate,(int)this->ContentsID);
      }
    }
  }
  return;
}

// OnEventMouseEnter @ 14be2f7d0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_RingCmdSlotInfoSlot::OnEventMouseEnter
          (UDS_VM_RingCmdSlotInfoSlot *this,FDS_WidgetPointerEventField *param_1)

{
  UDS_WindowManager *this_00;
  undefined8 *puVar1;
  ulong64 uVar2;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *pTVar3;
  UDS_VM_RingCmdSlotInfoSlot *local_res8;
  code *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  bool local_68;
  undefined1 local_58 [8];
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDelegateAllocation *local_28;
  
  this->IsHovered = true;
  UpdateSwitcherState(this);
  this_00 = UDS_WindowManager::GetInst();
  if ((this_00 != (UDS_WindowManager *)0x0) && (this->RingCmdType == Action)) {
    uStack_70 = 0;
    local_58 = (undefined1  [8])0x0;
    local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_50.DelegateSize = 0;
    local_78 = OnOpenActionToolTipCallback;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    local_28 = &local_50;
    puVar1 = UE::Core::Private::DelegateAllocate(0x30,&local_50);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = &
                ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__PEAV1___6B_
      ;
      puVar1[1] = param_1->TargetWidget;
      uVar2 = FDelegateHandle::GenerateNewID();
      puVar1[2] = uVar2;
      *puVar1 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_RingCmdSlotInfoSlot____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__PEAV2___6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar1[3] = 0;
      local_res8 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar1 + 3),(FObjectPtr)&local_res8);
      puVar1[4] = local_78;
      puVar1[5] = CONCAT44(uStack_6c,uStack_70);
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    pTVar3 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
             TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                       ((TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                        &local_78,
                        (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                        local_58);
    UDS_WindowManager::OpenWindow(this_00,ActionTooltip,pTVar3);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_78);
    if ((local_50.DelegateSize != 0) &&
       (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_50,0,0,0x10);
      local_50.DelegateSize = 0;
    }
    if (local_68 == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_6c,uStack_70),
                 (FDestructionSentinel *)&local_78);
    }
    if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_50.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_58);
  }
  return;
}

// OnEventMouseLeave @ 14be30030

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_RingCmdSlotInfoSlot::OnEventMouseLeave
          (UDS_VM_RingCmdSlotInfoSlot *this,FDS_WidgetPointerEventField *param_1)

{
  UDS_WindowManager *this_00;
  float local_res18 [2];
  uint local_res20 [2];
  
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 != (UDS_WindowManager *)0x0) {
    if (this->RingCmdType == Action) {
      local_res18[0] = 0.0;
      local_res20[0] = 0;
      UDS_WindowManager::CloseWindow(this_00,ActionTooltip,local_res20,local_res18);
    }
    this->IsClicked = false;
    this->IsHovered = false;
    UpdateSwitcherState(this);
    return;
  }
  return;
}

// OnEventOnDragCancelled @ 14be301b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_RingCmdSlotInfoSlot::OnEventOnDragCancelled
          (UDS_VM_RingCmdSlotInfoSlot *this,FDS_DragDropEventField *param_1)

{
  FDS_EventDelegate<bool_const_> *this_00;
  undefined1 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  UDS_EventManager *this_01;
  UDS_LogManager *pUVar9;
  UDS_RingCommandUIEvent *pUVar10;
  uint uVar11;
  longlong lVar12;
  undefined1 auStackY_188 [32];
  FDestructionSentinel local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  this_01 = UDS_EventManager::GetInst();
  if (this_01 != (UDS_EventManager *)0x0) {
    if ((char)this_01->_padding_ == '\x01') {
      pUVar9 = UDS_LogManager::GetInst();
      if (pUVar9 != (UDS_LogManager *)0x0) {
        pUVar9 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_EventManager::GetEvent",0x1a,Yes);
        UDS_LogManager::PrintLog
                  (pUVar9,1,Warning,local_138.Ptr,0x31,
                   L"Cannot access event during UDS_EventManager destruction.");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
    }
    else {
      pUVar10 = UDS_EventManager::GetEventInternal<UDS_RingCommandUIEvent>(this_01);
      if (pUVar10 != (UDS_RingCommandUIEvent *)0x0) {
        this_00 = &pUVar10->OnRingCmdDragStateChanged;
        bVar5 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                          ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00);
        if (bVar5) {
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
                     (FWriteAccessScope *)&local_158);
          puVar1 = &(pUVar10->OnRingCmdDragStateChanged).Delegate.field_0x1c;
          *(int *)puVar1 = *(int *)puVar1 + 1;
          bVar5 = false;
          uVar11 = *(int *)&(pUVar10->OnRingCmdDragStateChanged).Delegate.field_0x10 - 1;
          if (-1 < (int)uVar11) {
            lVar12 = (longlong)(int)uVar11 << 4;
            bVar5 = false;
            do {
              uVar8 = 0;
              if ((int)uVar11 < *(int *)&(pUVar10->OnRingCmdDragStateChanged).Delegate.field_0x10) {
                uVar8 = ~uVar11 >> 0x1f;
              }
              if ((uVar8 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              lVar2 = *(longlong *)&(pUVar10->OnRingCmdDragStateChanged).Delegate.field_0x8;
              if (((*(int *)(lVar12 + 8 + lVar2) == 0) ||
                  (plVar3 = *(longlong **)(lVar12 + lVar2), plVar3 == (longlong *)0x0)) ||
                 (cVar7 = (**(code **)(*plVar3 + 0x68))(), cVar7 == '\0')) {
                bVar5 = true;
              }
              lVar12 = lVar12 + -0x10;
              uVar11 = uVar11 - 1;
            } while (-1 < (int)uVar11);
          }
          puVar1 = &(pUVar10->OnRingCmdDragStateChanged).Delegate.field_0x1c;
          *(int *)puVar1 = *(int *)puVar1 + -1;
          if (bVar5) {
            TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,false);
          }
          if (local_158.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_158.Accessor,&local_158);
          }
        }
      }
    }
  }
  return;
}

// OnEventOnDragDetected @ 14be30480

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_RingCmdSlotInfoSlot::OnEventOnDragDetected
          (UDS_VM_RingCmdSlotInfoSlot *this,FDS_DragDropEventField *param_1)

{
  long64 lVar1;
  char cVar2;
  longlong *plVar3;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnClickSlotInfoButtonUpDelegate,&local_28);
  if ((*(int *)&(this->OnClickSlotInfoButtonUpDelegate).field_0x10 != 0) &&
     (plVar3 = *(longlong **)&(this->OnClickSlotInfoButtonUpDelegate).field_0x8,
     plVar3 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*plVar3 + 0x38))();
    if (cVar2 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      lVar1 = this->ContentsID;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->OnClickSlotInfoButtonUpDelegate,&local_28);
      if (*(int *)&(this->OnClickSlotInfoButtonUpDelegate).field_0x10 == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)&(this->OnClickSlotInfoButtonUpDelegate).field_0x8;
      }
      (**(code **)(*plVar3 + 0x60))(plVar3,(int)lVar1);
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// OnEventOnDrop @ 14be305c0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_RingCmdSlotInfoSlot::OnEventOnDrop
          (UDS_VM_RingCmdSlotInfoSlot *this,FDS_DragDropEventField *param_1)

{
  return;
}

// OnOpenActionToolTipCallback @ 14be315a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_RingCmdSlotInfoSlot::OnOpenActionToolTipCallback
          (UDS_VM_RingCmdSlotInfoSlot *this,UDS_UserWidget *param_1,UDS_UserWidget *param_2)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  FWeakObjectPtr FVar4;
  FDS_ViewModelContext_RingCmdTooltip *pFVar5;
  bool bVar6;
  FWeakObjectPtr local_res10 [2];
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_88;
  UDS_UserWidget *local_80;
  UDS_UserWidget *local_78;
  UDS_UserWidget *local_70;
  TSharedPtr<FDS_ViewModelContext_RingCmdTooltip,1> local_68;
  TVector2<double>_u_0 local_58;
  TSharedPtr<FDS_ViewModelContext,1> local_48 [2];
  
  dVar3 = _UNK_151444f88;
  dVar2 = ___xmm_40340000000000004034000000000000;
  if (((param_1 != (UDS_UserWidget *)0x0) && (param_2 != (UDS_UserWidget *)0x0)) &&
     (this->RingCmdType == Action)) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res10[0].ObjectIndex = 0;
    local_res10[0].ObjectSerialNumber = 0;
    local_80 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(local_res10,(FObjectPtr)&local_80);
    FVar4 = local_res10[0];
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    local_res20.ObjectIndex = 0;
    local_res20.ObjectSerialNumber = 0;
    local_78 = param_2;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_78);
    local_58._s_0.X = dVar2;
    local_58._s_0.Y = dVar3;
    DS_Util::TransformTooltipPosition
              ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_res20,
               (TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)FVar4,
               (TVector2<double> *)&local_58._s_0,None);
    MakeContext<FDS_ViewModelContext_RingCmdTooltip>(&local_68);
    pFVar5 = local_68.Object;
    if ((local_68.Object == (FDS_ViewModelContext_RingCmdTooltip *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *(undefined4 *)&pFVar5->_padding_ = 0x115;
    local_48[0].Object = (FDS_ViewModelContext *)local_68.Object;
    local_48[0].SharedReferenceCount.ReferenceController =
         local_68.SharedReferenceCount.ReferenceController;
    pFVar5->RingCmdContentId = this->RingCmdContentID;
    if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_88.ObjectIndex = 0;
    local_88.ObjectSerialNumber = 0;
    local_70 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_88,(FObjectPtr)&local_70);
    DS_ViewModelTemplateUtil::BindViewModel
              ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_88,local_48,false);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.SharedReferenceCount.ReferenceController);
  }
  return;
}

// OnOpenMenuToolTipCallback @ 14be32280

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_RingCmdSlotInfoSlot::OnOpenMenuToolTipCallback
          (UDS_VM_RingCmdSlotInfoSlot *this,UDS_UserWidget *param_1,UDS_UserWidget *param_2)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  FWeakObjectPtr FVar4;
  FDS_ViewModelContext_RingCmdTooltip *pFVar5;
  bool bVar6;
  FWeakObjectPtr local_res10 [2];
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_88;
  UDS_UserWidget *local_80;
  UDS_UserWidget *local_78;
  UDS_UserWidget *local_70;
  TSharedPtr<FDS_ViewModelContext_RingCmdTooltip,1> local_68;
  TVector2<double>_u_0 local_58;
  TSharedPtr<FDS_ViewModelContext,1> local_48 [2];
  
  dVar3 = _UNK_151444f88;
  dVar2 = ___xmm_40340000000000004034000000000000;
  if (((param_1 != (UDS_UserWidget *)0x0) && (param_2 != (UDS_UserWidget *)0x0)) &&
     (this->RingCmdType == Menu)) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res10[0].ObjectIndex = 0;
    local_res10[0].ObjectSerialNumber = 0;
    local_80 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(local_res10,(FObjectPtr)&local_80);
    FVar4 = local_res10[0];
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    local_res20.ObjectIndex = 0;
    local_res20.ObjectSerialNumber = 0;
    local_78 = param_2;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_78);
    local_58._s_0.X = dVar2;
    local_58._s_0.Y = dVar3;
    DS_Util::TransformTooltipPosition
              ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_res20,
               (TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)FVar4,
               (TVector2<double> *)&local_58._s_0,None);
    MakeContext<FDS_ViewModelContext_RingCmdTooltip>(&local_68);
    pFVar5 = local_68.Object;
    if ((local_68.Object == (FDS_ViewModelContext_RingCmdTooltip *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *(undefined4 *)&pFVar5->_padding_ = 0x116;
    local_48[0].Object = (FDS_ViewModelContext *)local_68.Object;
    local_48[0].SharedReferenceCount.ReferenceController =
         local_68.SharedReferenceCount.ReferenceController;
    pFVar5->RingCmdContentId = this->RingCmdContentID;
    if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_88.ObjectIndex = 0;
    local_88.ObjectSerialNumber = 0;
    local_70 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_88,(FObjectPtr)&local_70);
    DS_ViewModelTemplateUtil::BindViewModel
              ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_88,local_48,false);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.SharedReferenceCount.ReferenceController);
  }
  return;
}

// OnSetViewModel @ 14be3e590

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_RingCmdSlotInfoSlot::OnSetViewModel
          (UDS_VM_RingCmdSlotInfoSlot *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  longlong *plVar1;
  FDS_SlotInfo *pFVar2;
  FDS_ViewModelContext *pFVar3;
  code *pcVar4;
  bool bVar5;
  UDS_LogManager *pUVar6;
  TReferenceControllerBase<1> *pTVar7;
  FDS_SlotInfoBase *pFVar8;
  undefined1 auStackY_358 [32];
  FDS_SlotInfoBase *local_328;
  FSharedReferencer<1> FStack_320;
  FName local_318;
  int iStack_310;
  uint uStack_30c;
  TSharedPtr<FDS_ViewModelContext_RingCmdSlotInfo,1> local_308;
  longlong local_2f8 [2];
  FName local_2e8;
  int local_2e0;
  FName local_2d8;
  int local_2d0;
  longlong local_2c8;
  FSharedReferencer<1> FStack_2c0;
  TSharedPtr<FDS_ViewModelContext,1> local_2b8;
  undefined1 local_2a8 [288];
  void *local_188;
  UDS_UserWidget *local_180;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_358;
  pTVar7 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  pFVar3 = param_1->Object;
  if (pFVar3 == (FDS_ViewModelContext *)0x0) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      local_188 = (void *)0x0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(local_2a8 + 0x20),
                 "UDS_VM_RingCmdSlotInfoSlot::OnSetViewModel",0x2a,Yes);
      UDS_LogManager::PrintLog
                (pUVar6,1,Warning,(wchar_t *)local_180,0x1c,L"InViewModelContext is nullptr");
      if (local_188 != (void *)0x0) {
        FMemory::Free(local_188);
      }
    }
    goto LAB_14be3e9e0;
  }
  local_2b8.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_2b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_2b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_2b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2b8.Object = pFVar3;
  SafeCast<FDS_ViewModelContext_RingCmdSlotInfo>(&local_308,&local_2b8);
  if (local_308.Object == (FDS_ViewModelContext_RingCmdSlotInfo *)0x0) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      local_168._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_168,"UDS_VM_RingCmdSlotInfoSlot::OnSetViewModel",0x2a,Yes);
      UDS_LogManager::PrintLog(pUVar6,1,Warning,local_168.Ptr,0x23,L"context is nullptr");
      if ((void *)local_168._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_168._padding_);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_308.SharedReferenceCount.ReferenceController);
    goto LAB_14be3e9e0;
  }
  TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::operator=
            (&this->OnClickSlotInfoButtonUpDelegate,
             &(local_308.Object)->OnClickSlotInfoButtonUpDelegate);
  TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::operator=
            (&this->OnClickSlotInfoDoubleClickDelegate,
             &(local_308.Object)->OnClickSlotInfoDoubleClickDelegate);
  pTVar7 = (TReferenceControllerBase<1> *)0x0;
  if ((local_308.Object)->RingCmdSlotSelectEvent !=
      (TMulticastDelegate<void___cdecl(EDS_RingCmdType_const_&,int,bool),FDefaultDelegateUserPolicy>
       *)0x0) {
    iStack_310 = 0;
    local_318 = (FName)OnChangedRingCmdSelected;
    local_2a8._24_8_ = (ulonglong)uStack_30c << 0x20;
    local_2a8._16_8_ = OnChangedRingCmdSelected;
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_RingCmdType_const_&,int,bool),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_RingCmdSlotInfoSlot>
              ((local_308.Object)->RingCmdSlotSelectEvent,(UDS_VM_RingCmdSlotInfoSlot *)local_2a8,
               (pmf_bfbe9b24 *)this);
  }
  this->RingCmdType = (local_308.Object)->RingCmdType;
  local_2f8[0] = (longlong)(local_308.Object)->RingCmdContentId;
  this->RingCmdContentID = (local_308.Object)->RingCmdContentId;
  this->IsRegisted = (local_308.Object)->IsRegisted;
  SetContentsID(this,local_2f8);
  bVar5 = FDS_RingCommandService::IsContentLockCheck(&this->RingCmdType,this->RingCmdContentID);
  this->IsContentsLock = bVar5;
  plVar1 = &this->_padding_;
  local_2e0 = FFieldNotificationClassDescriptor::IsContentsLock.BitNumber;
  local_2e8 = FFieldNotificationClassDescriptor::IsContentsLock.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_2e8);
  this->IsContentsSelected = false;
  local_2d0 = FFieldNotificationClassDescriptor::IsContentsSelected.BitNumber;
  local_2d8 = FFieldNotificationClassDescriptor::IsContentsSelected.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_2d8);
  UpdateSwitcherState(this);
  pFVar2 = &this->SlotInfo;
  if ((pFVar2->SlotInfo).Object != (FDS_SlotInfoBase *)0x0) {
    local_2c8 = 0;
    FStack_2c0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pFVar2 != (FDS_SlotInfo *)&local_2c8) {
      (pFVar2->SlotInfo).Object = (FDS_SlotInfoBase *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->SlotInfo).SlotInfo.SharedReferenceCount,&FStack_2c0);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_2c0.ReferenceController);
  }
  if (this->IsContentsLock == false) {
    if ((pFVar2->SlotInfo).Object == (FDS_SlotInfoBase *)0x0) {
      FStack_320.ReferenceController = ::operator_new(0x38);
      if (FStack_320.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
        local_328 = ___xmm_00000000000000000000000000000010;
        pFVar8 = (FDS_SlotInfoBase *)&DAT_00000010;
        FStack_320.ReferenceController = _UNK_150651568;
      }
      else {
        (FStack_320.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
        pFVar8 = (FDS_SlotInfoBase *)(FStack_320.ReferenceController + 1);
        (FStack_320.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
        (FStack_320.ReferenceController)->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_UFDS_RingCmdSlotInfo___00_SharedPointerInternals__6B_
        ;
        FStack_320.ReferenceController[1]._padding_ = (longlong)&___7FDS_RingCmdSlotInfo__6B_;
        *(undefined8 *)&FStack_320.ReferenceController[1].WeakReferenceCount = 0;
        *(undefined8 *)((longlong)&FStack_320.ReferenceController[2]._padding_ + 4) = 0;
        *(undefined1 *)&FStack_320.ReferenceController[3]._padding_ = 0;
        *(undefined4 *)((longlong)&FStack_320.ReferenceController[3]._padding_ + 4) = 0;
        if (pFVar8 == (FDS_SlotInfoBase *)0x0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L"");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        LOCK();
        (FStack_320.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(FStack_320.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
        pTVar7 = FStack_320.ReferenceController;
        local_328 = pFVar8;
      }
      if (pFVar2 != (FDS_SlotInfo *)&local_328) {
        (pFVar2->SlotInfo).Object = pFVar8;
        local_328 = (FDS_SlotInfoBase *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->SlotInfo).SlotInfo.SharedReferenceCount,&FStack_320);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_320.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
    }
    pFVar8 = (pFVar2->SlotInfo).Object;
    if (pFVar8 != (FDS_SlotInfoBase *)0x0) {
      pFVar8->SlotInfoType = RingCmdSlot;
      pFVar8->IconID = this->IconID;
      *(EDS_RingCmdType *)&pFVar8[1]._padding_ = this->RingCmdType;
      *(int *)((longlong)&pFVar8[1]._padding_ + 4) = this->RingCmdContentID;
      goto LAB_14be3e9a0;
    }
  }
  else {
LAB_14be3e9a0:
    iStack_310 = FFieldNotificationClassDescriptor::SlotInfo.BitNumber;
    local_318 = FFieldNotificationClassDescriptor::SlotInfo.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_318);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_308.SharedReferenceCount.ReferenceController);
LAB_14be3e9e0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetContentsID @ 14be4a090

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_RingCmdSlotInfoSlot::SetContentsID(UDS_VM_RingCmdSlotInfoSlot *this,long64 *param_1)

{
  FDS_ContentsTotalMenuTableRow *pFVar1;
  FDS_ActionBaseTableRow *pFVar2;
  FDS_StringBaseID *pFVar3;
  FName local_68;
  int local_60;
  FDS_Text local_58;
  
  if (this->RingCmdType == Menu) {
    pFVar1 = FDS_ContentsTotalMenuTableRow::GetRef(*param_1,true);
    this->IconID = pFVar1->ID_Icon;
    local_60 = FFieldNotificationClassDescriptor::IconID.BitNumber;
    local_68 = FFieldNotificationClassDescriptor::IconID.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_68);
    pFVar3 = &pFVar1->ID_Name;
  }
  else {
    if (this->RingCmdType != Action) goto LAB_14be4a1e3;
    pFVar2 = FDS_ActionBaseTableRow::GetRef(*param_1,true);
    this->IconID = pFVar2->ID_Icon;
    local_60 = FFieldNotificationClassDescriptor::IconID.BitNumber;
    local_68 = FFieldNotificationClassDescriptor::IconID.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_68);
    pFVar3 = &pFVar2->ID_Name;
  }
  local_58.StringTableType = None;
  local_58.StringTableID = 0;
  local_58.StringEnumTableNameID.ComparisonIndex.Value = 0;
  local_58.StringEnumTableNameID.Number = 0;
  local_58.DateTime.Ticks = 0;
  local_58.TimeSpan.Ticks = 0;
  local_58.TimeExpressionType = None;
  local_58.IsExpression = false;
  local_58.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.UniqueString.Data.ArrayNum = 0;
  local_58.UniqueString.Data.ArrayMax = 0;
  local_58.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.FormatArgs.ArrayNum = 0;
  local_58.FormatArgs.ArrayMax = 0;
  FDS_Text::SetTextFromStringID(&local_58,pFVar3);
  FDS_Text::operator=(&this->MenuName,&local_58);
  local_60 = FFieldNotificationClassDescriptor::MenuName.BitNumber;
  local_68 = FFieldNotificationClassDescriptor::MenuName.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_68);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data,
             local_58.FormatArgs.ArrayNum);
  if ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0) {
    FMemory::Free(local_58.FormatArgs.AllocatorInstance.Data);
  }
  if (local_58.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.UniqueString.Data.AllocatorInstance.Data);
  }
LAB_14be4a1e3:
  local_68 = FFieldNotificationClassDescriptor::ContentsID.FieldName;
  if (this->ContentsID != *param_1) {
    local_60 = FFieldNotificationClassDescriptor::ContentsID.BitNumber;
    this->ContentsID = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_68);
  }
  return;
}

// SetIconID @ 14be4b640

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_RingCmdSlotInfoSlot::SetIconID(UDS_VM_RingCmdSlotInfoSlot *this,int *param_1)

{
  FName local_18;
  int local_10;
  
  this->IconID = *param_1;
  local_10 = FFieldNotificationClassDescriptor::IconID.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IconID.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetIsContentsLock @ 14be4b980

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_RingCmdSlotInfoSlot::SetIsContentsLock(UDS_VM_RingCmdSlotInfoSlot *this,bool *param_1)

{
  FName local_18;
  int local_10;
  
  this->IsContentsLock = *param_1;
  local_10 = FFieldNotificationClassDescriptor::IsContentsLock.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsContentsLock.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetIsContentsSelected @ 14be4b9c0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_RingCmdSlotInfoSlot::SetIsContentsSelected(UDS_VM_RingCmdSlotInfoSlot *this,bool *param_1)

{
  FName local_18;
  int local_10;
  
  this->IsContentsSelected = *param_1;
  local_10 = FFieldNotificationClassDescriptor::IsContentsSelected.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsContentsSelected.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  UpdateSwitcherState(this);
  return;
}

// SetMenuName @ 14be4de70

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_RingCmdSlotInfoSlot::SetMenuName(UDS_VM_RingCmdSlotInfoSlot *this,FDS_Text *param_1)

{
  FName local_18;
  int local_10;
  
  FDS_Text::operator=(&this->MenuName,param_1);
  local_10 = FFieldNotificationClassDescriptor::MenuName.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::MenuName.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// UpdateSwitcherState @ 14be59c50

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_RingCmdSlotInfoSlot::UpdateSwitcherState(UDS_VM_RingCmdSlotInfoSlot *this)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::SwitcherVis.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::SwitcherVis.FieldName;
  if (this->IsContentsLock == true) {
LAB_14be59c62:
    if (this->SwitcherVis != false) {
      this->SwitcherVis = false;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
      return;
    }
  }
  else {
    if (this->IsClicked == true) {
      this->SwitcherState = 2;
    }
    else if (this->IsContentsSelected == true) {
      this->SwitcherState = 1;
    }
    else {
      if (this->IsHovered != true) goto LAB_14be59c62;
      this->SwitcherState = 0;
    }
    local_10 = FFieldNotificationClassDescriptor::SwitcherState.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::SwitcherState.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    local_10 = FFieldNotificationClassDescriptor::SwitcherVis.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::SwitcherVis.FieldName;
    if (this->SwitcherVis != true) {
      this->SwitcherVis = true;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
  }
  return;
}

