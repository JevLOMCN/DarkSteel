// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 42

// SetClickExit_WrapperImpl @ 14b6ee6a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_WB_CheatPanel::SetClickExit_WrapperImpl(void *param_1,void *param_2)

{
  UDS_WindowManager *this;
  UDS_LogManager *pUVar1;
  undefined1 auStackY_178 [32];
  float fStack_148;
  uint auStack_144 [3];
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  this = UDS_WindowManager::GetInst();
  if (this == (UDS_WindowManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      TStack_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_138,"UDS_VM_WB_CheatPanel::OnClickExit",0x21,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Warning,TStack_138.Ptr,0x41,L"windowManager is nullptr");
      if ((void *)TStack_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)TStack_138._padding_);
        return;
      }
    }
  }
  else {
    fStack_148 = 0.0;
    auStack_144[0] = 0;
    UDS_WindowManager::CloseWindow(this,CheatKey,auStack_144,&fStack_148);
  }
  return;
}

// SetClickButtonMenu_WrapperImpl @ 14b6ee6b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_WB_CheatPanel::SetClickButtonMenu_WrapperImpl(void *param_1,void *param_2)

{
  FName FVar1;
  int iVar2;
  bool bVar3;
  UDS_LogManager *pUVar4;
  UDS_CheatData *this;
  undefined1 auStackY_178 [32];
  FName FStack_148;
  int iStack_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)param_1 + 0x1f8));
  if (bVar3) {
    if (*(char *)((longlong)param_1 + 0x1d8) != '\0') {
      this = (UDS_CheatData *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_1 + 0x1f8));
      UDS_CheatData::SetTabIndex(this,1);
      iVar2 = FFieldNotificationClassDescriptor::CheatSlotSwitcher.BitNumber;
      FVar1 = FFieldNotificationClassDescriptor::CheatSlotSwitcher.FieldName;
      if (*(int *)((longlong)param_1 + 0xa0) != 0) {
        *(undefined4 *)((longlong)param_1 + 0xa0) = 0;
        iStack_140 = iVar2;
        FStack_148 = FVar1;
        (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
                  ((longlong *)((longlong)param_1 + 0x28),&FStack_148);
      }
      UpdateCheatSlotList(param_1);
    }
  }
  else {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      TStack_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_138,"UDS_VM_WB_CheatPanel::OnClickButtonMenu",0x27,Yes);
      UDS_LogManager::PrintLog(pUVar4,1,Warning,TStack_138.Ptr,0x4c,L"CheatData is not valid");
      if ((void *)TStack_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)TStack_138._padding_);
      }
    }
  }
  return;
}

// SetClickButtonList_WrapperImpl @ 14b6ee6c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_WB_CheatPanel::SetClickButtonList_WrapperImpl(void *param_1,void *param_2)

{
  FName FVar1;
  int iVar2;
  bool bVar3;
  UDS_LogManager *pUVar4;
  UDS_CheatData *this;
  undefined1 auStackY_178 [32];
  FName FStack_148;
  int iStack_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)param_1 + 0x1f8));
  if (bVar3) {
    if (*(char *)((longlong)param_1 + 0x1d8) != '\0') {
      this = (UDS_CheatData *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_1 + 0x1f8));
      UDS_CheatData::SetTabIndex(this,2);
      iVar2 = FFieldNotificationClassDescriptor::CheatSlotSwitcher.BitNumber;
      FVar1 = FFieldNotificationClassDescriptor::CheatSlotSwitcher.FieldName;
      if (*(int *)((longlong)param_1 + 0xa0) != 0) {
        *(undefined4 *)((longlong)param_1 + 0xa0) = 0;
        iStack_140 = iVar2;
        FStack_148 = FVar1;
        (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
                  ((longlong *)((longlong)param_1 + 0x28),&FStack_148);
      }
      UpdateCheatSlotList(param_1);
    }
  }
  else {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      TStack_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_138,"UDS_VM_WB_CheatPanel::OnClickButtonList",0x27,Yes);
      UDS_LogManager::PrintLog(pUVar4,1,Warning,TStack_138.Ptr,0x5e,L"CheatData is not valid");
      if ((void *)TStack_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)TStack_138._padding_);
      }
    }
  }
  return;
}

// SetClickButtonItem_WrapperImpl @ 14b6ee6d0

void __cdecl UDS_VM_WB_CheatPanel::SetClickButtonItem_WrapperImpl(void *param_1,void *param_2)

{
  FName FVar1;
  int iVar2;
  FName FStack_18;
  int iStack_10;
  
  iVar2 = FFieldNotificationClassDescriptor::CheatSlotSwitcher.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::CheatSlotSwitcher.FieldName;
  if (*(char *)((longlong)param_1 + 0x1d8) != '\0') {
    if (*(int *)((longlong)param_1 + 0xa0) != 1) {
      *(undefined4 *)((longlong)param_1 + 0xa0) = 1;
      iStack_10 = iVar2;
      FStack_18 = FVar1;
      (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
                ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
    }
    UpdataCheatItemSlotList(param_1);
    return;
  }
  return;
}

// SetClickFindCheat_WrapperImpl @ 14b6ee6e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_WB_CheatPanel::SetClickFindCheat_WrapperImpl(void *param_1,void *param_2)

{
  code *pcVar1;
  int iVar2;
  UObject *pUVar3;
  bool bVar4;
  UDS_LogManager *pUVar5;
  UDS_CheatData *this;
  FDS_ViewModelContext *pFVar6;
  FDS_ViewModelContext *pFVar7;
  UScriptStruct *pUVar8;
  UDS_ViewModelContextManager *pUVar9;
  UDS_UserObjectListItem *pUVar10;
  ulonglong uVar11;
  ForAnyElementType FVar12;
  FDS_ViewModelContext *pFVar13;
  FDS_ViewModelContext *pFVar14;
  FDS_CheatSlotInfo *pFVar15;
  longlong lVar16;
  undefined1 auStackY_228 [32];
  undefined1 auStack_1f8 [8];
  TArray<FDS_CheatSlotInfo,TSizedDefaultAllocator<32>_> TStack_1f0;
  UObject *pUStack_1e0;
  FDS_EntryBindingEventField *pFStack_1d8;
  UDS_UserObjectListItem *pUStack_1d0;
  UDS_UserObjectListItem *apUStack_1c8 [2];
  FName FStack_1b8;
  int iStack_1b0;
  FName FStack_1a8;
  int iStack_1a0;
  TSharedPtr<FDS_ViewModelContext,1> TStack_198;
  TSharedPtr<FDS_ViewModelContext,1> TStack_188;
  TSharedPtr<FDS_ViewModelContext,1> TStack_178;
  TSharedPtr<FDS_ViewModelContext,1> TStack_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_158;
  ulonglong uStack_38;
  
  if (*(char *)((longlong)param_1 + 0x1d8) == '\0') {
    return;
  }
  if (*(int *)((longlong)param_1 + 0xa0) == 0) {
    uStack_38 = __security_cookie.value ^ (ulonglong)auStackY_228;
    pUStack_1e0 = param_1;
    bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)param_1 + 0x1f8));
    if (bVar4) {
      pFVar14 = (FDS_ViewModelContext *)0x0;
      TStack_1f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      TStack_1f0.ArrayNum = 0;
      TStack_1f0.ArrayMax = 0;
      this = (UDS_CheatData *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_1 + 0x1f8));
      UDS_CheatData::GetFilteredCheatSlotInfoArray
                (this,&TStack_1f0,(FString *)((longlong)param_1 + 0x1e8));
      pFStack_1d8 = (FDS_EntryBindingEventField *)((longlong)param_1 + 400);
      FDS_EntryBindingEventField::Reset(pFStack_1d8);
      FDS_EntryBindingEventField::Reset((FDS_EntryBindingEventField *)((longlong)param_1 + 0x1a0));
      iVar2 = TStack_1f0.ArrayNum;
      uVar11 = (ulonglong)TStack_1f0.ArrayNum;
      pFVar15 = (FDS_CheatSlotInfo *)(TStack_1f0.AllocatorInstance.Data + uVar11 * 0x78);
      FVar12.Data = TStack_1f0.AllocatorInstance.Data;
      while( true ) {
        if ((int)uVar11 != iVar2) {
          auStack_1f8[0] = 0;
          `TCheckedPointerIterator<FDS_CheatSlotInfo,int,0>::operator!='::__l2::<lambda_1>::
          operator()(auStack_1f8);
        }
        if ((FDS_CheatSlotInfo *)FVar12.Data == pFVar15) break;
        pFVar6 = ::operator_new(0x28);
        pFVar13 = pFVar14;
        if (pFVar6 != (FDS_ViewModelContext *)0x0) {
          *(undefined8 *)&pFVar6->ViewModelTemplateKey = 0;
          pFVar6[1]._padding_ = 0;
          *(undefined8 *)&pFVar6->DerivedStaticStruct = 0;
          (pFVar6->ViewModelName).ComparisonIndex = 0;
          (pFVar6->ViewModelName).Number = 0;
          pFVar6->_padding_ = (longlong)&___7FDS_ViewModelContext_CheatSlot__6B_;
          pFVar13 = pFVar6;
        }
        pFVar7 = ::operator_new(0x20);
        pFVar6 = pFVar14;
        if (pFVar7 != (FDS_ViewModelContext *)0x0) {
          *(atomic<int> *)&pFVar7->DerivedStaticStruct = (atomic<int>)0x1;
          *(code **)&(pFVar7->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
          pFVar7->_padding_ =
               (longlong)
               &
               ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_CheatSlot__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
          ;
          ((atomic<int> *)&pFVar7->DerivedStaticStruct)[1] = (atomic<int>)0x1;
          *(FDS_ViewModelContext **)&pFVar7->ViewModelTemplateKey = pFVar13;
          pFVar6 = pFVar7;
        }
        if ((pFVar13 == (FDS_ViewModelContext *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pUVar8 = FDS_ViewModelContext_CheatSlot::StaticStruct();
        *(UScriptStruct **)&pFVar13->DerivedStaticStruct = pUVar8;
        pUVar9 = UDS_ViewModelContextManager::GetInst();
        if (pUVar9 != (UDS_ViewModelContextManager *)0x0) {
          if (pFVar6 != (FDS_ViewModelContext *)0x0) {
            LOCK();
            *(atomic<int> *)&pFVar6->DerivedStaticStruct =
                 (atomic<int>)((int)*(atomic<int> *)&pFVar6->DerivedStaticStruct + 1);
            UNLOCK();
          }
          TStack_198.Object = pFVar13;
          TStack_198.SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)pFVar6;
          UDS_ViewModelContextManager::RegisterContext(pUVar9,&TStack_198);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (TStack_198.SharedReferenceCount.ReferenceController);
        }
        pFVar13->ViewModelTemplateKey = W_CheatSlot;
        *(int *)&pFVar13[1]._padding_ = ((FDS_CheatSlotInfo *)FVar12.Data)->CheatIndex;
        pUVar10 = NewObject<UDS_UserObjectListItem>(param_1);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar10 != (UDS_UserObjectListItem *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar10);
        }
        if (pFVar6 != (FDS_ViewModelContext *)0x0) {
          LOCK();
          *(atomic<int> *)&pFVar6->DerivedStaticStruct =
               (atomic<int>)((int)*(atomic<int> *)&pFVar6->DerivedStaticStruct + 1);
          UNLOCK();
        }
        TStack_178.Object = pFVar13;
        TStack_178.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar6;
        UDS_UserObjectListItem::AddContext(pUVar10,&TStack_178);
        pUStack_1d0 = pUVar10;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar10 != (UDS_UserObjectListItem *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar10);
        }
        FDS_EntryBindingEventField::Add
                  (pFStack_1d8,(TObjectPtr<UDS_UserObjectListItem>)&pUStack_1d0);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar6);
        uVar11 = TStack_1f0._8_8_ & 0xffffffff;
        FVar12.Data = FVar12.Data + 0x78;
        param_1 = pUStack_1e0;
      }
      lVar16 = 10;
      do {
        pFVar6 = ::operator_new(0x28);
        pFVar13 = pFVar14;
        if (pFVar6 != (FDS_ViewModelContext *)0x0) {
          *(undefined8 *)&pFVar6->ViewModelTemplateKey = 0;
          pFVar6[1]._padding_ = 0;
          *(undefined8 *)&pFVar6->DerivedStaticStruct = 0;
          (pFVar6->ViewModelName).ComparisonIndex = 0;
          (pFVar6->ViewModelName).Number = 0;
          pFVar6->_padding_ = (longlong)&___7FDS_ViewModelContext_CheatSlot__6B_;
          pFVar13 = pFVar6;
        }
        pFVar7 = ::operator_new(0x20);
        pFVar6 = pFVar14;
        if (pFVar7 != (FDS_ViewModelContext *)0x0) {
          *(atomic<int> *)&pFVar7->DerivedStaticStruct = (atomic<int>)0x1;
          *(code **)&(pFVar7->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
          pFVar7->_padding_ =
               (longlong)
               &
               ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_CheatSlot__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
          ;
          ((atomic<int> *)&pFVar7->DerivedStaticStruct)[1] = (atomic<int>)0x1;
          *(FDS_ViewModelContext **)&pFVar7->ViewModelTemplateKey = pFVar13;
          pFVar6 = pFVar7;
        }
        if ((pFVar13 == (FDS_ViewModelContext *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pUVar8 = FDS_ViewModelContext_CheatSlot::StaticStruct();
        *(UScriptStruct **)&pFVar13->DerivedStaticStruct = pUVar8;
        pUVar9 = UDS_ViewModelContextManager::GetInst();
        if (pUVar9 != (UDS_ViewModelContextManager *)0x0) {
          if (pFVar6 != (FDS_ViewModelContext *)0x0) {
            LOCK();
            *(atomic<int> *)&pFVar6->DerivedStaticStruct =
                 (atomic<int>)((int)*(atomic<int> *)&pFVar6->DerivedStaticStruct + 1);
            UNLOCK();
          }
          TStack_188.Object = pFVar13;
          TStack_188.SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)pFVar6;
          UDS_ViewModelContextManager::RegisterContext(pUVar9,&TStack_188);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (TStack_188.SharedReferenceCount.ReferenceController);
        }
        pFVar13->ViewModelTemplateKey = W_CheatSlot;
        *(undefined4 *)&pFVar13[1]._padding_ = 0;
        pUVar10 = NewObject<UDS_UserObjectListItem>(param_1);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar10 != (UDS_UserObjectListItem *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar10);
        }
        if (pFVar6 != (FDS_ViewModelContext *)0x0) {
          LOCK();
          *(atomic<int> *)&pFVar6->DerivedStaticStruct =
               (atomic<int>)((int)*(atomic<int> *)&pFVar6->DerivedStaticStruct + 1);
          UNLOCK();
        }
        TStack_168.Object = pFVar13;
        TStack_168.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar6;
        UDS_UserObjectListItem::AddContext(pUVar10,&TStack_168);
        apUStack_1c8[0] = pUVar10;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar10 != (UDS_UserObjectListItem *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar10);
        }
        FDS_EntryBindingEventField::Add
                  (pFStack_1d8,(TObjectPtr<UDS_UserObjectListItem>)apUStack_1c8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar6);
        pUVar3 = pUStack_1e0;
        lVar16 = lVar16 + -1;
        param_1 = pUStack_1e0;
      } while (lVar16 != 0);
      iStack_1b0 = FFieldNotificationClassDescriptor::CheatSlotListField.BitNumber;
      FStack_1b8 = FFieldNotificationClassDescriptor::CheatSlotListField.FieldName;
      (**(code **)(*(longlong *)(pUStack_1e0 + 1) + 0x38))(pUStack_1e0 + 1,&FStack_1b8);
      iStack_1a0 = FFieldNotificationClassDescriptor::CheatItemSlotListField.BitNumber;
      FStack_1a8 = FFieldNotificationClassDescriptor::CheatItemSlotListField.FieldName;
      (**(code **)(*(longlong *)(pUVar3 + 1) + 0x38))(pUVar3 + 1,&FStack_1a8);
      DestructItems<FDS_CheatSlotInfo,int>
                ((FDS_CheatSlotInfo *)TStack_1f0.AllocatorInstance.Data,TStack_1f0.ArrayNum);
      FVar12.Data = TStack_1f0.AllocatorInstance.Data;
    }
    else {
      pUVar5 = UDS_LogManager::GetInst();
      if (pUVar5 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar5 = UDS_LogManager::GetInst();
      TStack_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_158,"UDS_VM_WB_CheatPanel::UpdateCheatSlotList",0x29,Yes);
      UDS_LogManager::PrintLog(pUVar5,1,Warning,TStack_158.Ptr,0xbb,L"CheatData is not valid");
      FVar12.Data = (FScriptContainerElement *)TStack_158._padding_;
    }
    if ((FDS_CheatSlotInfo *)FVar12.Data != (FDS_CheatSlotInfo *)0x0) {
      FMemory::Free(FVar12.Data);
    }
    return;
  }
  UpdataCheatItemSlotList(param_1);
  return;
}

// SetClickTypeTag_WrapperImpl @ 14b6ee6f0

void __cdecl UDS_VM_WB_CheatPanel::SetClickTypeTag_WrapperImpl(void *param_1,void *param_2)

{
  OnChangeTagType(param_1,&UDS_CheatData::TAG_ITEM_TYPE);
  return;
}

// SetClickGradeTag_WrapperImpl @ 14b6ee700

void __cdecl UDS_VM_WB_CheatPanel::SetClickGradeTag_WrapperImpl(void *param_1,void *param_2)

{
  OnChangeTagType(param_1,&UDS_CheatData::TAG_GRADE_TYPE);
  return;
}

// SetClickEquipTag_WrapperImpl @ 14b6ee710

void __cdecl UDS_VM_WB_CheatPanel::SetClickEquipTag_WrapperImpl(void *param_1,void *param_2)

{
  OnChangeTagType(param_1,&UDS_CheatData::TAG_EQUIP_TYPE);
  return;
}

// SetClickAllEnableTag_WrapperImpl @ 14b6ee720

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_WB_CheatPanel::SetClickAllEnableTag_WrapperImpl(void *param_1,void *param_2)

{
  char cVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  UDS_CheatData *pUVar4;
  undefined1 auStackY_178 [32];
  int aiStack_148 [4];
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)param_1 + 0x1f8));
  if (bVar2) {
    cVar1 = *(char *)((longlong)param_1 + 0x1d9);
    pUVar4 = (UDS_CheatData *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_1 + 0x1f8));
    UDS_CheatData::SetAllTagChange(pUVar4,cVar1 == '\0');
    pUVar4 = (UDS_CheatData *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_1 + 0x1f8));
    aiStack_148[0] = UDS_CheatData::GetTagType(pUVar4);
    OnChangeTagType(param_1,aiStack_148);
  }
  else {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      TStack_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_138,"UDS_VM_WB_CheatPanel::OnClickAllEnableTag",0x29,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,TStack_138.Ptr,0xad,L"CheatData is not valid");
      if ((void *)TStack_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)TStack_138._padding_);
      }
    }
  }
  return;
}

// SetClickTagConfirm_WrapperImpl @ 14b6ee730

void __cdecl UDS_VM_WB_CheatPanel::SetClickTagConfirm_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  UpdataCheatItemSlotList(param_1);
  iStack_10 = FFieldNotificationClassDescriptor::TagSelectPanelVisibility.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::TagSelectPanelVisibility.FieldName;
  if (*(char *)((longlong)param_1 + 0x1d8) != '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x1d8) = 1;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  }
  return;
}

// SetTextChangedEvent_WrapperImpl @ 14b6ee740

void __cdecl UDS_VM_WB_CheatPanel::SetTextChangedEvent_WrapperImpl(void *param_1,void *param_2)

{
  FString *pFVar1;
  
  pFVar1 = FText::ToString(param_2);
  ::FString::operator=((FString *)((longlong)param_1 + 0x1e8),pFVar1);
  if (*(char *)((longlong)param_1 + 0x1d8) == '\0') {
    return;
  }
  if (*(int *)((longlong)param_1 + 0xa0) == 0) {
    UpdateCheatSlotList(param_1);
    return;
  }
  UpdataCheatItemSlotList(param_1);
  return;
}

// SetTagSelectPanelVisibility_WrapperImpl @ 14b6ee750

void __cdecl
UDS_VM_WB_CheatPanel::SetTagSelectPanelVisibility_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = FFieldNotificationClassDescriptor::TagSelectPanelVisibility.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::TagSelectPanelVisibility.FieldName;
  if (*(char *)((longlong)param_1 + 0x1d8) != *(char *)param_2) {
    *(char *)((longlong)param_1 + 0x1d8) = *(char *)param_2;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// SetbIsAllTagChecked_WrapperImpl @ 14b6ee760

void __cdecl UDS_VM_WB_CheatPanel::SetbIsAllTagChecked_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = FFieldNotificationClassDescriptor::bIsAllTagChecked.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::bIsAllTagChecked.FieldName;
  if (*(char *)((longlong)param_1 + 0x1d9) != *(char *)param_2) {
    *(char *)((longlong)param_1 + 0x1d9) = *(char *)param_2;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// SetAllButtonClickAble_WrapperImpl @ 14b6ee770

void __cdecl UDS_VM_WB_CheatPanel::SetAllButtonClickAble_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = FFieldNotificationClassDescriptor::AllButtonClickAble.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::AllButtonClickAble.FieldName;
  if (*(char *)((longlong)param_1 + 0x1da) != *(char *)param_2) {
    *(char *)((longlong)param_1 + 0x1da) = *(char *)param_2;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// StaticClass @ 14b6ee780

UClass * __cdecl UDS_VM_WB_CheatPanel::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_WB_CheatPanel.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_WB_CheatPanel",
               &Z_Registration_Info_UClass_UDS_VM_WB_CheatPanel.InnerSingleton,
               StaticRegisterNativesUDS_VM_WB_CheatPanel,0x200,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_WB_CheatPanel>,
               InternalVTableHelperCtorCaller<UDS_VM_WB_CheatPanel>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_WB_CheatPanel.InnerSingleton;
}

// UDS_VM_WB_CheatPanel @ 14b6f3810

UDS_VM_WB_CheatPanel * __thiscall
UDS_VM_WB_CheatPanel::UDS_VM_WB_CheatPanel(UDS_VM_WB_CheatPanel *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->ClickExit)._padding_ = '\0';
  (this->ClickExit).bIsCustomSelected = false;
  (this->ClickExit).bIsLacked = false;
  (this->ClickExit).bIsCustomDisabled = false;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_WB_CheatPanel__6B_;
  *(undefined8 *)&(this->ClickExit).Delegate = 0;
  *(undefined8 *)&(this->ClickExit).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickExit).Delegate.field_0x10 = 0;
  (this->ClickButtonMenu)._padding_ = '\0';
  (this->ClickButtonMenu).bIsCustomSelected = false;
  (this->ClickButtonMenu).bIsLacked = false;
  (this->ClickButtonMenu).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickButtonMenu).Delegate = 0;
  *(undefined8 *)&(this->ClickButtonMenu).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickButtonMenu).Delegate.field_0x10 = 0;
  (this->ClickButtonList)._padding_ = '\0';
  (this->ClickButtonList).bIsCustomSelected = false;
  (this->ClickButtonList).bIsLacked = false;
  (this->ClickButtonList).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickButtonList).Delegate = 0;
  *(undefined8 *)&(this->ClickButtonList).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickButtonList).Delegate.field_0x10 = 0;
  (this->ClickButtonItem)._padding_ = '\0';
  (this->ClickButtonItem).bIsCustomSelected = false;
  (this->ClickButtonItem).bIsLacked = false;
  (this->ClickButtonItem).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickButtonItem).Delegate = 0;
  *(undefined8 *)&(this->ClickButtonItem).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickButtonItem).Delegate.field_0x10 = 0;
  (this->ClickFindCheat)._padding_ = '\0';
  (this->ClickFindCheat).bIsCustomSelected = false;
  (this->ClickFindCheat).bIsLacked = false;
  (this->ClickFindCheat).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickFindCheat).Delegate = 0;
  *(undefined8 *)&(this->ClickFindCheat).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickFindCheat).Delegate.field_0x10 = 0;
  (this->ClickAllEnableTag)._padding_ = '\0';
  (this->ClickAllEnableTag).bIsCustomSelected = false;
  (this->ClickAllEnableTag).bIsLacked = false;
  (this->ClickAllEnableTag).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickAllEnableTag).Delegate = 0;
  *(undefined8 *)&(this->ClickAllEnableTag).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickAllEnableTag).Delegate.field_0x10 = 0;
  (this->ClickTagConfirm)._padding_ = '\0';
  (this->ClickTagConfirm).bIsCustomSelected = false;
  (this->ClickTagConfirm).bIsLacked = false;
  (this->ClickTagConfirm).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickTagConfirm).Delegate = 0;
  *(undefined8 *)&(this->ClickTagConfirm).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickTagConfirm).Delegate.field_0x10 = 0;
  (this->CheatSlotListField).UserObjectList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CheatSlotListField).UserObjectList.ArrayNum = 0;
  (this->CheatSlotListField).UserObjectList.ArrayMax = 0;
  (this->CheatItemSlotListField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CheatItemSlotListField).UserObjectList.ArrayNum = 0;
  (this->CheatItemSlotListField).UserObjectList.ArrayMax = 0;
  (this->CheatTagSlotListField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CheatTagSlotListField).UserObjectList.ArrayNum = 0;
  (this->CheatTagSlotListField).UserObjectList.ArrayMax = 0;
  FText::FText(&(this->TextChangedEvent).NewText);
  this->TagSelectPanelVisibility = Hidden;
  this->bIsAllTagChecked = false;
  (this->VMCheatItemSlotTitle).field0_0x0.DebugPtr = (UDS_VM_WB_CheatItemSlotTitle *)0x0;
  (this->FindCheatString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FindCheatString).Data.ArrayNum = 0;
  (this->FindCheatString).Data.ArrayMax = 0;
  (this->CheatData).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// UDS_VM_WB_CheatPanel @ 14b6f3970

UDS_VM_WB_CheatPanel * __thiscall
UDS_VM_WB_CheatPanel::UDS_VM_WB_CheatPanel(UDS_VM_WB_CheatPanel *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->ClickExit)._padding_ = '\0';
  (this->ClickExit).bIsCustomSelected = false;
  (this->ClickExit).bIsLacked = false;
  (this->ClickExit).bIsCustomDisabled = false;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_WB_CheatPanel__6B_;
  *(undefined8 *)&(this->ClickExit).Delegate = 0;
  *(undefined8 *)&(this->ClickExit).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickExit).Delegate.field_0x10 = 0;
  (this->ClickButtonMenu)._padding_ = '\0';
  (this->ClickButtonMenu).bIsCustomSelected = false;
  (this->ClickButtonMenu).bIsLacked = false;
  (this->ClickButtonMenu).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickButtonMenu).Delegate = 0;
  *(undefined8 *)&(this->ClickButtonMenu).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickButtonMenu).Delegate.field_0x10 = 0;
  (this->ClickButtonList)._padding_ = '\0';
  (this->ClickButtonList).bIsCustomSelected = false;
  (this->ClickButtonList).bIsLacked = false;
  (this->ClickButtonList).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickButtonList).Delegate = 0;
  *(undefined8 *)&(this->ClickButtonList).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickButtonList).Delegate.field_0x10 = 0;
  (this->ClickButtonItem)._padding_ = '\0';
  (this->ClickButtonItem).bIsCustomSelected = false;
  (this->ClickButtonItem).bIsLacked = false;
  (this->ClickButtonItem).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickButtonItem).Delegate = 0;
  *(undefined8 *)&(this->ClickButtonItem).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickButtonItem).Delegate.field_0x10 = 0;
  (this->ClickFindCheat)._padding_ = '\0';
  (this->ClickFindCheat).bIsCustomSelected = false;
  (this->ClickFindCheat).bIsLacked = false;
  (this->ClickFindCheat).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickFindCheat).Delegate = 0;
  *(undefined8 *)&(this->ClickFindCheat).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickFindCheat).Delegate.field_0x10 = 0;
  (this->ClickAllEnableTag)._padding_ = '\0';
  (this->ClickAllEnableTag).bIsCustomSelected = false;
  (this->ClickAllEnableTag).bIsLacked = false;
  (this->ClickAllEnableTag).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickAllEnableTag).Delegate = 0;
  *(undefined8 *)&(this->ClickAllEnableTag).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickAllEnableTag).Delegate.field_0x10 = 0;
  (this->ClickTagConfirm)._padding_ = '\0';
  (this->ClickTagConfirm).bIsCustomSelected = false;
  (this->ClickTagConfirm).bIsLacked = false;
  (this->ClickTagConfirm).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickTagConfirm).Delegate = 0;
  *(undefined8 *)&(this->ClickTagConfirm).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickTagConfirm).Delegate.field_0x10 = 0;
  (this->CheatSlotListField).UserObjectList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CheatSlotListField).UserObjectList.ArrayNum = 0;
  (this->CheatSlotListField).UserObjectList.ArrayMax = 0;
  (this->CheatItemSlotListField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CheatItemSlotListField).UserObjectList.ArrayNum = 0;
  (this->CheatItemSlotListField).UserObjectList.ArrayMax = 0;
  (this->CheatTagSlotListField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CheatTagSlotListField).UserObjectList.ArrayNum = 0;
  (this->CheatTagSlotListField).UserObjectList.ArrayMax = 0;
  FText::FText(&(this->TextChangedEvent).NewText);
  this->TagSelectPanelVisibility = Hidden;
  this->bIsAllTagChecked = false;
  (this->VMCheatItemSlotTitle).field0_0x0.DebugPtr = (UDS_VM_WB_CheatItemSlotTitle *)0x0;
  (this->FindCheatString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FindCheatString).Data.ArrayNum = 0;
  (this->FindCheatString).Data.ArrayMax = 0;
  (this->CheatData).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// ~UDS_VM_WB_CheatPanel @ 14b6f4ae0

void __thiscall UDS_VM_WB_CheatPanel::~UDS_VM_WB_CheatPanel(UDS_VM_WB_CheatPanel *this)

{
  FScriptContainerElement *pFVar1;
  ITextData *pIVar2;
  void *pvVar3;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_WB_CheatPanel__6B_;
  pFVar1 = (this->FindCheatString).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pIVar2 = (this->TextChangedEvent).NewText.TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  pFVar1 = (this->CheatTagSlotListField).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CheatItemSlotListField).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CheatSlotListField).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickTagConfirm).Delegate);
  pvVar3 = *(void **)&(this->ClickTagConfirm).Delegate.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickTagConfirm).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickAllEnableTag).Delegate);
  pvVar3 = *(void **)&(this->ClickAllEnableTag).Delegate.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickAllEnableTag).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickFindCheat).Delegate);
  pvVar3 = *(void **)&(this->ClickFindCheat).Delegate.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickFindCheat).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickButtonItem).Delegate);
  pvVar3 = *(void **)&(this->ClickButtonItem).Delegate.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickButtonItem).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickButtonList).Delegate);
  pvVar3 = *(void **)&(this->ClickButtonList).Delegate.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickButtonList).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickButtonMenu).Delegate);
  pvVar3 = *(void **)&(this->ClickButtonMenu).Delegate.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickButtonMenu).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickExit).Delegate);
  pvVar3 = *(void **)&(this->ClickExit).Delegate.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickExit).Delegate);
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6f71f0

IClassDescriptor * __thiscall
UDS_VM_WB_CheatPanel::GetFieldNotificationDescriptor(UDS_VM_WB_CheatPanel *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_WB_CheatPanel::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6f7f60

UClass * __cdecl UDS_VM_WB_CheatPanel::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_WB_CheatPanel.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_WB_CheatPanel",
               &Z_Registration_Info_UClass_UDS_VM_WB_CheatPanel.InnerSingleton,
               StaticRegisterNativesUDS_VM_WB_CheatPanel,0x200,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_WB_CheatPanel>,
               InternalVTableHelperCtorCaller<UDS_VM_WB_CheatPanel>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_WB_CheatPanel.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_WB_CheatPanel @ 14b6f8580

void __cdecl UDS_VM_WB_CheatPanel::StaticRegisterNativesUDS_VM_WB_CheatPanel(void)

{
  return;
}

// InitViewModel @ 14bfaf190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UDS_VM_WB_CheatPanel::InitViewModel(UDS_VM_WB_CheatPanel *this)

{
  UClass *pUVar1;
  UClass *pUVar2;
  UDS_VM_WB_CheatItemSlotTitle *pUVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  longlong *plVar6;
  undefined1 auStack_f8 [32];
  UDS_VM_WB_CheatPanel *local_d8 [2];
  code *local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  FDestructionSentinel local_b8;
  undefined1 *local_a0;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_f8;
  if ((this->VMCheatItemSlotTitle).field0_0x0.DebugPtr == (UDS_VM_WB_CheatItemSlotTitle *)0x0) {
    local_d8[0] = (UDS_VM_WB_CheatPanel *)0x0;
    pUVar1 = Z_Construct_UClass_UDS_VM_WB_CheatItemSlotTitle_NoRegister();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar2 = Z_Construct_UClass_UDS_VM_WB_CheatItemSlotTitle_NoRegister();
    CheckIsClassChildOf_Internal(pUVar2,pUVar1);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar1);
    local_98._48_8_ = (FObjectInstancingGraph *)0x0;
    local_98._56_8_ = (UPackage *)0x0;
    local_98._16_4_ = 0;
    local_98._20_4_ = 0;
    local_98._24_4_ = RF_Transient;
    local_98._40_8_ = (UObject *)0x0;
    local_98[0x20] = false;
    local_98._8_8_ = this;
    pUVar3 = (UDS_VM_WB_CheatItemSlotTitle *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar6 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar6 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar6 + 0x10))(plVar6);
    }
    if (pUVar3 != (UDS_VM_WB_CheatItemSlotTitle *)0x0) {
      *(undefined1 *)((longlong)&pUVar3->_padding_ + 4) = 0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 != (UDS_VM_WB_CheatItemSlotTitle *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->VMCheatItemSlotTitle).field0_0x0.DebugPtr = pUVar3;
    local_c8 = OnChangeTagType;
    uStack_c0 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &pUVar3->CheatTagButtonSelectDelegate,(FWriteAccessScope *)&local_b8);
    local_a0 = &(pUVar3->CheatTagButtonSelectDelegate).field_0x8;
    puVar4 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_a0);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &
                ___7__TCommonDelegateInstanceState___A6AXAEBH_ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[2] = uVar5;
      *puVar4 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_WB_CheatPanel____A6AXAEBH_ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar4[3] = 0;
      local_d8[0] = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar4 + 3),(FObjectPtr)local_d8);
      puVar4[4] = local_c8;
      puVar4[5] = CONCAT44(uStack_bc,uStack_c0);
    }
    if (local_b8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b8.Accessor,&local_b8);
    }
  }
  return;
}

// IsAllTagChecked @ 14bfb24a0

void __thiscall UDS_VM_WB_CheatPanel::IsAllTagChecked(UDS_VM_WB_CheatPanel *this,bool *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::bIsAllTagChecked.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::bIsAllTagChecked.FieldName;
  if (this->bIsAllTagChecked != *param_1) {
    this->bIsAllTagChecked = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// OnChangeTagType @ 14bfb5180

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_WB_CheatPanel::OnChangeTagType(UDS_VM_WB_CheatPanel *this,int *param_1)

{
  EDS_ViewModelTemplateKey *pEVar1;
  longlong *plVar2;
  ulonglong uVar3;
  uint uVar4;
  code *pcVar5;
  FName FVar6;
  TMap<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_> *pTVar7;
  bool bVar8;
  int iVar9;
  UDS_LogManager *pUVar10;
  UDS_CheatData *pUVar11;
  TMap<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_> *pTVar12;
  FDS_ViewModelContext *pFVar13;
  FDS_ViewModelContext *pFVar14;
  UScriptStruct *pUVar15;
  UDS_ViewModelContextManager *this_00;
  FString *pFVar16;
  undefined8 *puVar17;
  ulong64 uVar18;
  UDS_UserObjectListItem *this_01;
  longlong lVar19;
  wchar_t *pwVar20;
  FName *pFVar21;
  uint uVar22;
  FDS_ViewModelContext *pFVar23;
  uint uVar24;
  undefined1 *puVar25;
  FDS_ViewModelContext *pFVar26;
  undefined1 *puVar27;
  uint *puVar28;
  TBitArray<FDefaultBitArrayAllocator> *pTVar29;
  atomic<int> *paVar30;
  uint uVar31;
  undefined1 auStackY_378 [32];
  undefined1 local_348;
  undefined1 local_347 [3];
  uint local_344;
  undefined8 local_340;
  UDS_VM_WB_CheatPanel *local_338;
  FString local_330;
  TMap<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_> *local_320;
  uint uStack_318;
  uint uStack_314;
  undefined1 *local_310;
  undefined4 uStack_308;
  uint uStack_304;
  uint local_300;
  undefined4 uStack_2fc;
  int iStack_2f8;
  undefined4 uStack_2f4;
  int local_2f0;
  int local_2ec;
  int local_2e8;
  TMap<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_> *local_2e0;
  UDS_VM_WB_CheatPanel *local_2d8;
  UDS_UserObjectListItem *local_2d0;
  TBitArray<FDefaultBitArrayAllocator> *local_2c8;
  int *local_2c0;
  FName local_2b8;
  int local_2b0;
  FName local_2a8;
  int local_2a0;
  FName local_298;
  int local_290;
  FName local_288;
  int local_280;
  TSharedPtr<FDS_ViewModelContext,1> local_278;
  code *local_268;
  undefined4 uStack_260;
  int iStack_25c;
  TMap<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_> *local_258;
  uint uStack_250;
  uint uStack_24c;
  undefined1 *local_248;
  undefined4 uStack_240;
  uint uStack_23c;
  uint local_238;
  uint uStack_234;
  int iStack_230;
  undefined4 uStack_22c;
  TMap<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_> *local_228;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_220;
  undefined8 uStack_200;
  TMap<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_> *local_1f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1f0;
  undefined8 uStack_1d0;
  TSharedPtr<FDS_ViewModelContext,1> local_1c8;
  FString local_1b8;
  FDestructionSentinel local_1a8;
  atomic<int> *local_190;
  undefined4 local_16c;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_378;
  local_338 = this;
  local_2c0 = param_1;
  bVar8 = FWeakObjectPtr::IsValid(&(this->CheatData).WeakPtr);
  if (!bVar8) {
    pUVar10 = UDS_LogManager::GetInst();
    if (pUVar10 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar10 = UDS_LogManager::GetInst();
    local_168._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_168,"UDS_VM_WB_CheatPanel::OnChangeTagType",0x25,Yes);
    UDS_LogManager::PrintLog(pUVar10,1,Warning,local_168.Ptr,0x10f,L"CheatData is not valid");
    local_330.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_168._padding_;
    goto LAB_14bfb5a8b;
  }
  pUVar11 = (UDS_CheatData *)FWeakObjectPtr::Get(&(this->CheatData).WeakPtr);
  UDS_CheatData::SetTagType(pUVar11,*param_1);
  FDS_EntryBindingEventField::Reset(&this->CheatTagSlotListField);
  ::FString::FString(&local_330,L"");
  pUVar11 = (UDS_CheatData *)FWeakObjectPtr::Get(&(this->CheatData).WeakPtr);
  iVar9 = UDS_CheatData::GetTagType(pUVar11);
  if (iVar9 == 0) {
    pwVar20 = L"EDS_ItemType";
  }
  else if (iVar9 == 1) {
    pwVar20 = L"EDS_GradeType";
  }
  else {
    if (iVar9 != 2) goto LAB_14bfb52cf;
    pwVar20 = L"EDS_CharEquipType";
  }
  ::FString::operator=(&local_330,pwVar20);
LAB_14bfb52cf:
  pUVar11 = (UDS_CheatData *)FWeakObjectPtr::Get(&(this->CheatData).WeakPtr);
  pTVar12 = UDS_CheatData::GetTagMap(pUVar11,*param_1);
  uVar4 = *(uint *)&pTVar12->field_0x28;
  pFVar26 = (FDS_ViewModelContext *)0x0;
  uVar31 = 0;
  uStack_314 = 1;
  local_340 = 1;
  pTVar29 = (TBitArray<FDefaultBitArrayAllocator> *)&pTVar12->field_0x10;
  uStack_318 = 0;
  local_300 = 0;
  uStack_304 = uStack_318;
  if (uVar4 != 0) {
    puVar28 = *(uint **)&pTVar12->field_0x20;
    if (*(uint **)&pTVar12->field_0x20 == (uint *)0x0) {
      puVar28 = (uint *)pTVar29;
    }
    uVar24 = *puVar28;
    pFVar23 = pFVar26;
    pFVar13 = pFVar26;
    local_300 = uVar31;
    uStack_318 = uVar31;
    while (uVar24 == 0) {
      iVar9 = (int)pFVar23;
      local_300 = (int)pFVar13 + 0x20;
      pFVar13 = (FDS_ViewModelContext *)(ulonglong)local_300;
      uStack_318 = iVar9 + 1;
      pFVar23 = (FDS_ViewModelContext *)(ulonglong)uStack_318;
      uStack_304 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_318)
      goto LAB_14bfb537d;
      uVar24 = puVar28[(longlong)iVar9 + 1];
    }
    uStack_314 = -uVar24 & uVar24;
    uVar3 = (ulonglong)uStack_314 * 2 + 1;
    lVar19 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    local_2f0 = (int)lVar19;
    uStack_304 = (local_300 - 1) + local_2f0;
    if ((int)uVar4 < (int)uStack_304) {
      uStack_304 = uVar4;
    }
  }
LAB_14bfb537d:
  uVar24 = *(uint *)&pTVar12->field_0x28;
  uStack_2fc = local_16c;
  iStack_2f8 = *(int *)&pTVar12->field_0x8 - *(int *)&pTVar12->field_0x34;
  uVar22 = uVar24 & 0xffffffe0;
  uStack_308 = 0xffffffff;
  TStack_220._padding_ = CONCAT44(uStack_314,uStack_318);
  TStack_220.CurrentBitIndex = uStack_304;
  TStack_220.UnvisitedBitMask = 0xffffffff;
  iVar9 = (int)uVar24 >> 5;
  TStack_220._28_4_ = local_16c;
  TStack_220.BaseBitIndex = local_300;
  uStack_200 = CONCAT44(uStack_2f4,iStack_2f8);
  local_344 = uVar24;
  local_320 = pTVar12;
  local_310 = (undefined1 *)pTVar29;
  local_2e0 = pTVar12;
  local_2c8 = pTVar29;
  local_228 = pTVar12;
  TStack_220.Array = pTVar29;
  if ((((int)uVar24 < 0) || ((int)uVar4 < (int)uVar24)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar4 = *(uint *)&pTVar12->field_0x28;
  if (uVar24 != uVar4) {
    puVar25 = *(undefined1 **)&pTVar12->field_0x20;
    if (*(undefined1 **)&pTVar12->field_0x20 == (undefined1 *)0x0) {
      puVar25 = (undefined1 *)pTVar29;
    }
    uVar24 = -1 << ((byte)uVar24 & 0x1f) & *(uint *)(puVar25 + (longlong)iVar9 * 4);
    while (uVar24 == 0) {
      lVar19 = (longlong)iVar9;
      uVar22 = uVar22 + 0x20;
      iVar9 = iVar9 + 1;
      uVar24 = uVar4;
      local_344 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9) goto LAB_14bfb54a0;
      uVar24 = *(uint *)(puVar25 + lVar19 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar24 & uVar24) * 2 + 1;
    lVar19 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    local_2ec = (int)lVar19;
    uVar24 = (uVar22 - 1) + local_2ec;
    local_344 = uVar24;
    if ((int)uVar4 < (int)uVar24) {
      uVar24 = uVar4;
      local_344 = uVar4;
    }
  }
LAB_14bfb54a0:
  while( true ) {
    pTVar12 = local_228;
    if (*(int *)&local_228->field_0x8 - *(int *)&local_228->field_0x34 != (int)uStack_200) {
      local_348 = 0;
      `TSparseArray<TSparseSetElement<TTuple<int,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_348);
    }
    if (((TStack_220.CurrentBitIndex == uVar24) && (TStack_220.Array == pTVar29)) &&
       (pTVar12 == local_2e0)) break;
    paVar30 = (atomic<int> *)((longlong)TStack_220.CurrentBitIndex * 0x10 + *(longlong *)pTVar12);
    pFVar13 = ::operator_new(0x50);
    pFVar23 = pFVar26;
    if (pFVar13 != (FDS_ViewModelContext *)0x0) {
      *(undefined8 *)&pFVar13->ViewModelTemplateKey = 0;
      pFVar13[1].ViewModelName.Number = 0;
      *(undefined8 *)&pFVar13[2].DerivedStaticStruct = 0;
      *(undefined8 *)&pFVar13->DerivedStaticStruct = 0;
      (pFVar13->ViewModelName).ComparisonIndex = 0;
      (pFVar13->ViewModelName).Number = 0;
      pFVar13->_padding_ = (longlong)&___7FDS_ViewModelContext_CheatTag__6B_;
      pFVar13[1]._padding_ = 0;
      *(undefined8 *)&pFVar13[1].DerivedStaticStruct = 0;
      pFVar13[1].ViewModelName.ComparisonIndex.Value = 0;
      *(undefined8 *)&pFVar13[1].ViewModelTemplateKey = 0;
      pFVar13[2]._padding_ = 0;
      pFVar23 = pFVar13;
    }
    pFVar14 = ::operator_new(0x20);
    pFVar13 = pFVar26;
    if (pFVar14 != (FDS_ViewModelContext *)0x0) {
      *(FDS_ViewModelContext **)&pFVar14->ViewModelTemplateKey = pFVar23;
      *(code **)&(pFVar14->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
      *(atomic<int> *)&pFVar14->DerivedStaticStruct = SUB84(local_340,0);
      ((atomic<int> *)&pFVar14->DerivedStaticStruct)[1] = SUB84(local_340,0);
      pFVar14->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_CheatTag__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
      ;
      pFVar13 = pFVar14;
    }
    if ((pFVar23 == (FDS_ViewModelContext *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pUVar15 = FDS_ViewModelContext_CheatTag::StaticStruct();
    *(UScriptStruct **)&pFVar23->DerivedStaticStruct = pUVar15;
    this_00 = UDS_ViewModelContextManager::GetInst();
    if (this_00 != (UDS_ViewModelContextManager *)0x0) {
      if (pFVar13 != (FDS_ViewModelContext *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar13->DerivedStaticStruct =
             (atomic<int>)((int)*(atomic<int> *)&pFVar13->DerivedStaticStruct + 1);
        UNLOCK();
      }
      local_278.Object = pFVar23;
      local_278.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar13;
      UDS_ViewModelContextManager::RegisterContext(this_00,&local_278);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_278.SharedReferenceCount.ReferenceController);
    }
    pFVar23->ViewModelTemplateKey = W_CheatTagBtn;
    *(atomic<int> *)&pFVar23[2].DerivedStaticStruct = *paVar30;
    *(undefined1 *)((atomic<int> *)&pFVar23[2].DerivedStaticStruct + 1) =
         *(undefined1 *)(paVar30 + 1);
    pFVar16 = DS_Util::GetEnumToString(&local_1b8,&local_330,(longlong)(int)*paVar30);
    pEVar1 = &pFVar23[1].ViewModelTemplateKey;
    if ((FString *)pEVar1 != pFVar16) {
      if (*(void **)pEVar1 != (void *)0x0) {
        FMemory::Free(*(void **)pEVar1);
      }
      *(FScriptContainerElement **)pEVar1 = (pFVar16->Data).AllocatorInstance.Data;
      (pFVar16->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)&pFVar23[2]._padding_ = (pFVar16->Data).ArrayNum;
      *(int *)((longlong)&pFVar23[2]._padding_ + 4) = (pFVar16->Data).ArrayMax;
      (pFVar16->Data).ArrayNum = 0;
      (pFVar16->Data).ArrayMax = 0;
    }
    if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
    }
    uStack_260 = 0;
    local_268 = OnChangedTypeTag;
    iStack_25c = local_1b8.Data.ArrayMax;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(pFVar23 + 1),
               (FWriteAccessScope *)&local_1a8);
    local_190 = (atomic<int> *)&pFVar23[1].DerivedStaticStruct;
    puVar17 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_190);
    if (puVar17 != (undefined8 *)0x0) {
      *puVar17 = &
                 ___7__TCommonDelegateInstanceState___A6AXAEBHAEB_N_ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar18 = FDelegateHandle::GenerateNewID();
      puVar17[2] = uVar18;
      *puVar17 = &
                 ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_WB_CheatPanel____A6AXAEBHAEB_N_ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_VM_WB_CheatPanel *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar17[3] = 0;
      local_2d8 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_VM_WB_CheatPanel *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar17 + 3),(FObjectPtr)&local_2d8);
      puVar17[4] = local_268;
      puVar17[5] = CONCAT44(iStack_25c,uStack_260);
    }
    if (local_1a8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1a8.Accessor,&local_1a8);
    }
    this_01 = NewObject<UDS_UserObjectListItem>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this_01 != (UDS_UserObjectListItem *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this_01);
    }
    if (pFVar13 != (FDS_ViewModelContext *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar13->DerivedStaticStruct =
           (atomic<int>)((int)*(atomic<int> *)&pFVar13->DerivedStaticStruct + 1);
      UNLOCK();
    }
    local_1c8.Object = pFVar23;
    local_1c8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar13;
    UDS_UserObjectListItem::AddContext(this_01,&local_1c8);
    local_2d0 = this_01;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this_01 != (UDS_UserObjectListItem *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this_01);
    }
    FDS_EntryBindingEventField::Add
              (&this->CheatTagSlotListField,(TObjectPtr<UDS_UserObjectListItem>)&local_2d0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar13);
    TStack_220.UnvisitedBitMask = TStack_220.UnvisitedBitMask & ~TStack_220._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_220);
    pTVar29 = local_2c8;
    uVar24 = local_344;
  }
  plVar2 = &this->_padding_;
  local_2b0 = FFieldNotificationClassDescriptor::CheatTagSlotListField.BitNumber;
  local_2b8 = FFieldNotificationClassDescriptor::CheatTagSlotListField.FieldName;
  (**(code **)(*plVar2 + 0x38))(plVar2,&local_2b8);
  iVar9 = FFieldNotificationClassDescriptor::TagSelectPanelVisibility.BitNumber;
  FVar6 = FFieldNotificationClassDescriptor::TagSelectPanelVisibility.FieldName;
  if (this->TagSelectPanelVisibility != Visible) {
    this->TagSelectPanelVisibility = Visible;
    local_2a0 = iVar9;
    local_2a8 = FVar6;
    (**(code **)(*plVar2 + 0x38))(plVar2,&local_2a8);
  }
  pUVar11 = (UDS_CheatData *)FWeakObjectPtr::Get(&(this->CheatData).WeakPtr);
  pTVar12 = UDS_CheatData::GetTagMap(pUVar11,*local_2c0);
  uVar4 = *(uint *)&pTVar12->field_0x28;
  puVar25 = &pTVar12->field_0x10;
  uStack_23c = uVar31;
  local_238 = uVar31;
  if (uVar4 == 0) {
LAB_14bfb5891:
    uStack_24c = (uint)local_340;
  }
  else {
    puVar28 = *(uint **)&pTVar12->field_0x20;
    if (*(uint **)&pTVar12->field_0x20 == (uint *)0x0) {
      puVar28 = (uint *)puVar25;
    }
    uStack_24c = *puVar28;
    pFVar23 = pFVar26;
    while (uStack_24c == 0) {
      iVar9 = (int)pFVar23;
      local_238 = (int)pFVar26 + 0x20;
      pFVar26 = (FDS_ViewModelContext *)(ulonglong)local_238;
      uVar31 = iVar9 + 1;
      pFVar23 = (FDS_ViewModelContext *)(ulonglong)uVar31;
      uStack_23c = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar31)
      goto LAB_14bfb5891;
      uStack_24c = puVar28[(longlong)iVar9 + 1];
    }
    uStack_24c = -uStack_24c & uStack_24c;
    uVar3 = (ulonglong)uStack_24c * 2 + 1;
    lVar19 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    local_2e8 = (int)lVar19;
    uStack_23c = local_2e8 + -1 + local_238;
    if ((int)uVar4 < (int)uStack_23c) {
      uStack_23c = uVar4;
    }
  }
  uVar24 = *(uint *)&pTVar12->field_0x28;
  uStack_234 = uStack_304;
  iStack_230 = *(int *)&pTVar12->field_0x8 - *(int *)&pTVar12->field_0x34;
  uStack_240 = 0xffffffff;
  uVar22 = uVar24 & 0xffffffe0;
  TStack_1f0._padding_ = CONCAT44(uStack_24c,uVar31);
  TStack_1f0.CurrentBitIndex = uStack_23c;
  TStack_1f0.UnvisitedBitMask = 0xffffffff;
  iVar9 = (int)uVar24 >> 5;
  TStack_1f0._28_4_ = uStack_304;
  TStack_1f0.BaseBitIndex = local_238;
  uStack_1d0 = CONCAT44(uStack_22c,iStack_230);
  local_258 = pTVar12;
  uStack_250 = uVar31;
  local_248 = puVar25;
  local_1f8 = pTVar12;
  TStack_1f0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar25;
  if ((((int)uVar24 < 0) || ((int)uVar4 < (int)uVar24)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar4 = *(uint *)&pTVar12->field_0x28;
  if (uVar24 != uVar4) {
    puVar27 = *(undefined1 **)&pTVar12->field_0x20;
    if (*(undefined1 **)&pTVar12->field_0x20 == (undefined1 *)0x0) {
      puVar27 = puVar25;
    }
    uVar31 = -1 << ((byte)uVar24 & 0x1f) & *(uint *)(puVar27 + (longlong)iVar9 * 4);
    while (uVar31 == 0) {
      lVar19 = (longlong)iVar9;
      uVar22 = uVar22 + 0x20;
      iVar9 = iVar9 + 1;
      uVar24 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9) goto LAB_14bfb59a0;
      uVar31 = *(uint *)(puVar27 + lVar19 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar31 & uVar31) * 2 + 1;
    lVar19 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    uVar24 = (uVar22 - 1) + (int)lVar19;
    if ((int)uVar4 < (int)uVar24) {
      uVar24 = uVar4;
    }
  }
LAB_14bfb59a0:
  do {
    pTVar7 = local_1f8;
    if (*(int *)&local_1f8->field_0x8 - *(int *)&local_1f8->field_0x34 != (int)uStack_1d0) {
      `TSparseArray<TSparseSetElement<TTuple<int,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_347);
    }
    iVar9 = FFieldNotificationClassDescriptor::bIsAllTagChecked.BitNumber;
    FVar6 = FFieldNotificationClassDescriptor::bIsAllTagChecked.FieldName;
    if (((TStack_1f0.CurrentBitIndex == uVar24) &&
        (TStack_1f0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar25)) &&
       (pTVar7 == pTVar12)) {
      if (local_338->bIsAllTagChecked == true) goto LAB_14bfb5a8b;
      local_338->bIsAllTagChecked = true;
      pFVar21 = &local_298;
      local_298 = FVar6;
      local_290 = iVar9;
      goto LAB_14bfb5a64;
    }
    if (*(char *)(*(longlong *)pTVar7 + 4 + (longlong)TStack_1f0.CurrentBitIndex * 0x10) == '\0')
    break;
    TStack_1f0.UnvisitedBitMask = TStack_1f0.UnvisitedBitMask & ~TStack_1f0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1f0);
  } while( true );
  if (local_338->bIsAllTagChecked != false) {
    local_338->bIsAllTagChecked = false;
    pFVar21 = &local_288;
    local_288 = FVar6;
    local_280 = iVar9;
LAB_14bfb5a64:
    (**(code **)(*plVar2 + 0x38))(plVar2,pFVar21);
  }
LAB_14bfb5a8b:
  if (local_330.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_330.Data.AllocatorInstance.Data);
  }
  return;
}

// OnChangedTypeTag @ 14bfb7510

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_WB_CheatPanel::OnChangedTypeTag(UDS_VM_WB_CheatPanel *this,int *param_1,bool *param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  code *pcVar4;
  FName FVar5;
  TMap<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_> *pTVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  UDS_LogManager *pUVar10;
  UDS_CheatData *pUVar11;
  UDS_CheatData *pUVar12;
  TMap<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_> *pTVar13;
  longlong lVar14;
  FName *pFVar15;
  uint uVar16;
  undefined1 *puVar17;
  uint *puVar18;
  uint uVar19;
  undefined1 auStackY_228 [32];
  undefined1 local_1f8 [8];
  TMap<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_> *local_1f0;
  int iStack_1e8;
  uint uStack_1e4;
  undefined1 *local_1e0;
  undefined4 uStack_1d8;
  int iStack_1d4;
  int local_1d0;
  int iStack_1cc;
  int iStack_1c8;
  undefined4 uStack_1c4;
  int local_1c0;
  FName local_1b8;
  int local_1b0;
  FName local_1a8;
  int local_1a0;
  TMap<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_> *local_198;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_190;
  undefined8 uStack_170;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_228;
  bVar7 = FWeakObjectPtr::IsValid(&(this->CheatData).WeakPtr);
  if (!bVar7) {
    pUVar10 = UDS_LogManager::GetInst();
    if (pUVar10 != (UDS_LogManager *)0x0) {
      pUVar10 = UDS_LogManager::GetInst();
      local_168._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_168,"UDS_VM_WB_CheatPanel::OnChangedTypeTag",0x26,Yes);
      UDS_LogManager::PrintLog(pUVar10,1,Warning,local_168.Ptr,0x15b,L"CheatData is not valid");
      if ((void *)local_168._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_168._padding_);
      }
    }
    return;
  }
  pUVar11 = (UDS_CheatData *)FWeakObjectPtr::Get(&(this->CheatData).WeakPtr);
  bVar7 = *param_2;
  iVar9 = *param_1;
  pUVar12 = (UDS_CheatData *)FWeakObjectPtr::Get(&(this->CheatData).WeakPtr);
  iVar8 = UDS_CheatData::GetTagType(pUVar12);
  UDS_CheatData::SetTagChange(pUVar11,iVar8,iVar9,bVar7);
  pUVar11 = (UDS_CheatData *)FWeakObjectPtr::Get(&(this->CheatData).WeakPtr);
  pUVar12 = (UDS_CheatData *)FWeakObjectPtr::Get(&(this->CheatData).WeakPtr);
  iVar9 = UDS_CheatData::GetTagType(pUVar12);
  pTVar13 = UDS_CheatData::GetTagMap(pUVar11,iVar9);
  iVar9 = *(int *)&pTVar13->field_0x28;
  iStack_1e8 = 0;
  uStack_1e4 = 1;
  local_1d0 = 0;
  puVar1 = &pTVar13->field_0x10;
  iStack_1d4 = 0;
  if (iVar9 != 0) {
    puVar18 = *(uint **)&pTVar13->field_0x20;
    if (*(uint **)&pTVar13->field_0x20 == (uint *)0x0) {
      puVar18 = (uint *)puVar1;
    }
    uVar16 = *puVar18;
    while (uVar16 == 0) {
      lVar14 = (longlong)iStack_1e8;
      local_1d0 = local_1d0 + 0x20;
      iStack_1e8 = iStack_1e8 + 1;
      iStack_1d4 = iVar9;
      if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_1e8) goto LAB_14bfb76de;
      uVar16 = puVar18[lVar14 + 1];
    }
    uStack_1e4 = -uVar16 & uVar16;
    uVar2 = (ulonglong)uStack_1e4 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_1c0 = (int)lVar14;
    iStack_1d4 = local_1d0 + -1 + local_1c0;
    if (iVar9 < iStack_1d4) {
      iStack_1d4 = iVar9;
    }
  }
LAB_14bfb76de:
  uVar16 = *(uint *)&pTVar13->field_0x28;
  uVar19 = uVar16 & 0xffffffe0;
  iStack_1c8 = *(int *)&pTVar13->field_0x8 - *(int *)&pTVar13->field_0x34;
  uStack_1d8 = 0xffffffff;
  TStack_190._padding_ = CONCAT44(uStack_1e4,iStack_1e8);
  TStack_190.CurrentBitIndex = iStack_1d4;
  TStack_190.UnvisitedBitMask = 0xffffffff;
  iVar8 = (int)uVar16 >> 5;
  TStack_190._28_4_ = iStack_1d4;
  TStack_190.BaseBitIndex = local_1d0;
  uStack_170 = CONCAT44(uStack_1c4,iStack_1c8);
  local_1f0 = pTVar13;
  local_1e0 = puVar1;
  iStack_1cc = iStack_1d4;
  local_198 = pTVar13;
  TStack_190.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar16 < 0) || (iVar9 < (int)uVar16)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar3 = *(uint *)&pTVar13->field_0x28;
  if (uVar16 != uVar3) {
    puVar17 = *(undefined1 **)&pTVar13->field_0x20;
    if (*(undefined1 **)&pTVar13->field_0x20 == (undefined1 *)0x0) {
      puVar17 = puVar1;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar8 * 4);
    while (uVar16 == 0) {
      lVar14 = (longlong)iVar8;
      uVar19 = uVar19 + 0x20;
      iVar8 = iVar8 + 1;
      uVar16 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_14bfb77f0;
      uVar16 = *(uint *)(puVar17 + lVar14 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    uVar16 = (int)lVar14 + -1 + uVar19;
    if ((int)uVar3 < (int)uVar16) {
      uVar16 = uVar3;
    }
  }
LAB_14bfb77f0:
  do {
    pTVar6 = local_198;
    if (*(int *)&local_198->field_0x8 - *(int *)&local_198->field_0x34 != (int)uStack_170) {
      `TSparseArray<TSparseSetElement<TTuple<int,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_1f8);
    }
    iVar9 = FFieldNotificationClassDescriptor::bIsAllTagChecked.BitNumber;
    FVar5 = FFieldNotificationClassDescriptor::bIsAllTagChecked.FieldName;
    if (((TStack_190.CurrentBitIndex == uVar16) &&
        (TStack_190.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar6 == pTVar13)
       ) {
      if (this->bIsAllTagChecked == true) {
        return;
      }
      this->bIsAllTagChecked = true;
      pFVar15 = &local_1b8;
      local_1b8 = FVar5;
      local_1b0 = iVar9;
      goto LAB_14bfb789c;
    }
    if (*(char *)(*(longlong *)pTVar6 + 4 + (longlong)TStack_190.CurrentBitIndex * 0x10) == '\0') {
      if (this->bIsAllTagChecked == false) {
        return;
      }
      this->bIsAllTagChecked = false;
      pFVar15 = &local_1a8;
      local_1a8 = FVar5;
      local_1a0 = iVar9;
LAB_14bfb789c:
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,pFVar15);
      return;
    }
    TStack_190.UnvisitedBitMask = TStack_190.UnvisitedBitMask & ~TStack_190._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_190);
  } while( true );
}

// OnClickAllEnableTag @ 14bfb8620

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_WB_CheatPanel::OnClickAllEnableTag(UDS_VM_WB_CheatPanel *this,FDS_ButtonEventField *param_1)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_CheatData *pUVar3;
  undefined1 auStackY_178 [32];
  int local_148 [4];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  bVar1 = FWeakObjectPtr::IsValid(&(this->CheatData).WeakPtr);
  if (bVar1) {
    bVar1 = this->bIsAllTagChecked;
    pUVar3 = (UDS_CheatData *)FWeakObjectPtr::Get(&(this->CheatData).WeakPtr);
    UDS_CheatData::SetAllTagChange(pUVar3,bVar1 == false);
    pUVar3 = (UDS_CheatData *)FWeakObjectPtr::Get(&(this->CheatData).WeakPtr);
    local_148[0] = UDS_CheatData::GetTagType(pUVar3);
    OnChangeTagType(this,local_148);
  }
  else {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_WB_CheatPanel::OnClickAllEnableTag",0x29,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0xad,L"CheatData is not valid");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return;
}

// OnClickButtonItem @ 14bfb87e0

void __thiscall
UDS_VM_WB_CheatPanel::OnClickButtonItem(UDS_VM_WB_CheatPanel *this,FDS_ButtonEventField *param_1)

{
  FName FVar1;
  int iVar2;
  FName local_18;
  int local_10;
  
  iVar2 = FFieldNotificationClassDescriptor::CheatSlotSwitcher.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::CheatSlotSwitcher.FieldName;
  if (this->TagSelectPanelVisibility != Visible) {
    if (this->CheatSlotSwitcher != 1) {
      this->CheatSlotSwitcher = 1;
      local_10 = iVar2;
      local_18 = FVar1;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
    UpdataCheatItemSlotList(this);
    return;
  }
  return;
}

// OnClickButtonList @ 14bfb8850

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_WB_CheatPanel::OnClickButtonList(UDS_VM_WB_CheatPanel *this,FDS_ButtonEventField *param_1)

{
  FName FVar1;
  int iVar2;
  bool bVar3;
  UDS_LogManager *pUVar4;
  UDS_CheatData *this_00;
  undefined1 auStackY_178 [32];
  FName local_148;
  int local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  bVar3 = FWeakObjectPtr::IsValid(&(this->CheatData).WeakPtr);
  if (bVar3) {
    if (this->TagSelectPanelVisibility != Visible) {
      this_00 = (UDS_CheatData *)FWeakObjectPtr::Get(&(this->CheatData).WeakPtr);
      UDS_CheatData::SetTabIndex(this_00,2);
      iVar2 = FFieldNotificationClassDescriptor::CheatSlotSwitcher.BitNumber;
      FVar1 = FFieldNotificationClassDescriptor::CheatSlotSwitcher.FieldName;
      if (this->CheatSlotSwitcher != 0) {
        this->CheatSlotSwitcher = 0;
        local_140 = iVar2;
        local_148 = FVar1;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_148);
      }
      UpdateCheatSlotList(this);
    }
  }
  else {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_WB_CheatPanel::OnClickButtonList",0x27,Yes);
      UDS_LogManager::PrintLog(pUVar4,1,Warning,local_138.Ptr,0x5e,L"CheatData is not valid");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return;
}

// OnClickButtonMenu @ 14bfb89a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_WB_CheatPanel::OnClickButtonMenu(UDS_VM_WB_CheatPanel *this,FDS_ButtonEventField *param_1)

{
  FName FVar1;
  int iVar2;
  bool bVar3;
  UDS_LogManager *pUVar4;
  UDS_CheatData *this_00;
  undefined1 auStackY_178 [32];
  FName local_148;
  int local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  bVar3 = FWeakObjectPtr::IsValid(&(this->CheatData).WeakPtr);
  if (bVar3) {
    if (this->TagSelectPanelVisibility != Visible) {
      this_00 = (UDS_CheatData *)FWeakObjectPtr::Get(&(this->CheatData).WeakPtr);
      UDS_CheatData::SetTabIndex(this_00,1);
      iVar2 = FFieldNotificationClassDescriptor::CheatSlotSwitcher.BitNumber;
      FVar1 = FFieldNotificationClassDescriptor::CheatSlotSwitcher.FieldName;
      if (this->CheatSlotSwitcher != 0) {
        this->CheatSlotSwitcher = 0;
        local_140 = iVar2;
        local_148 = FVar1;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_148);
      }
      UpdateCheatSlotList(this);
    }
  }
  else {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_WB_CheatPanel::OnClickButtonMenu",0x27,Yes);
      UDS_LogManager::PrintLog(pUVar4,1,Warning,local_138.Ptr,0x4c,L"CheatData is not valid");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return;
}

// OnClickEquipTag @ 14bfb99a0

void __thiscall
UDS_VM_WB_CheatPanel::OnClickEquipTag(UDS_VM_WB_CheatPanel *this,FWidgetEventField *param_1)

{
  OnChangeTagType(this,&UDS_CheatData::TAG_EQUIP_TYPE);
  return;
}

// OnClickExit @ 14bfb9a90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_WB_CheatPanel::OnClickExit(UDS_VM_WB_CheatPanel *this,FDS_ButtonEventField *param_1)

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
                (&local_138,"UDS_VM_WB_CheatPanel::OnClickExit",0x21,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Warning,local_138.Ptr,0x41,L"windowManager is nullptr");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
        return;
      }
    }
  }
  else {
    local_148 = 0.0;
    local_144[0] = 0;
    UDS_WindowManager::CloseWindow(this_00,CheatKey,local_144,&local_148);
  }
  return;
}

// OnClickFindCheat @ 14bfb9e30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_WB_CheatPanel::OnClickFindCheat(UDS_VM_WB_CheatPanel *this,FDS_ButtonEventField *param_1)

{
  code *pcVar1;
  int iVar2;
  UDS_VM_WB_CheatPanel *pUVar3;
  bool bVar4;
  UDS_LogManager *pUVar5;
  UDS_CheatData *this_00;
  FDS_ViewModelContext *pFVar6;
  FDS_ViewModelContext *pFVar7;
  UScriptStruct *pUVar8;
  UDS_ViewModelContextManager *pUVar9;
  UDS_UserObjectListItem *pUVar10;
  ulonglong uVar11;
  ForAnyElementType FVar12;
  FDS_ViewModelContext *pFVar13;
  FDS_ViewModelContext *pFVar14;
  FDS_CheatSlotInfo *pFVar15;
  longlong lVar16;
  undefined1 auStackY_228 [32];
  undefined1 auStack_1f8 [8];
  TArray<FDS_CheatSlotInfo,TSizedDefaultAllocator<32>_> TStack_1f0;
  UDS_VM_WB_CheatPanel *pUStack_1e0;
  FDS_EntryBindingEventField *pFStack_1d8;
  UDS_UserObjectListItem *pUStack_1d0;
  UDS_UserObjectListItem *apUStack_1c8 [2];
  FName FStack_1b8;
  int iStack_1b0;
  FName FStack_1a8;
  int iStack_1a0;
  TSharedPtr<FDS_ViewModelContext,1> TStack_198;
  TSharedPtr<FDS_ViewModelContext,1> TStack_188;
  TSharedPtr<FDS_ViewModelContext,1> TStack_178;
  TSharedPtr<FDS_ViewModelContext,1> TStack_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_158;
  ulonglong uStack_38;
  
  if (this->TagSelectPanelVisibility == Visible) {
    return;
  }
  if (this->CheatSlotSwitcher == 0) {
    uStack_38 = __security_cookie.value ^ (ulonglong)auStackY_228;
    pUStack_1e0 = this;
    bVar4 = FWeakObjectPtr::IsValid(&(this->CheatData).WeakPtr);
    if (bVar4) {
      pFVar14 = (FDS_ViewModelContext *)0x0;
      TStack_1f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      TStack_1f0.ArrayNum = 0;
      TStack_1f0.ArrayMax = 0;
      this_00 = (UDS_CheatData *)FWeakObjectPtr::Get(&(this->CheatData).WeakPtr);
      UDS_CheatData::GetFilteredCheatSlotInfoArray(this_00,&TStack_1f0,&this->FindCheatString);
      pFStack_1d8 = &this->CheatSlotListField;
      FDS_EntryBindingEventField::Reset(pFStack_1d8);
      FDS_EntryBindingEventField::Reset(&this->CheatItemSlotListField);
      iVar2 = TStack_1f0.ArrayNum;
      uVar11 = (ulonglong)TStack_1f0.ArrayNum;
      pFVar15 = (FDS_CheatSlotInfo *)(TStack_1f0.AllocatorInstance.Data + uVar11 * 0x78);
      FVar12.Data = TStack_1f0.AllocatorInstance.Data;
      while( true ) {
        if ((int)uVar11 != iVar2) {
          auStack_1f8[0] = 0;
          `TCheckedPointerIterator<FDS_CheatSlotInfo,int,0>::operator!='::__l2::<lambda_1>::
          operator()(auStack_1f8);
        }
        if ((FDS_CheatSlotInfo *)FVar12.Data == pFVar15) break;
        pFVar6 = ::operator_new(0x28);
        pFVar13 = pFVar14;
        if (pFVar6 != (FDS_ViewModelContext *)0x0) {
          *(undefined8 *)&pFVar6->ViewModelTemplateKey = 0;
          pFVar6[1]._padding_ = 0;
          *(undefined8 *)&pFVar6->DerivedStaticStruct = 0;
          (pFVar6->ViewModelName).ComparisonIndex = 0;
          (pFVar6->ViewModelName).Number = 0;
          pFVar6->_padding_ = (longlong)&___7FDS_ViewModelContext_CheatSlot__6B_;
          pFVar13 = pFVar6;
        }
        pFVar7 = ::operator_new(0x20);
        pFVar6 = pFVar14;
        if (pFVar7 != (FDS_ViewModelContext *)0x0) {
          *(atomic<int> *)&pFVar7->DerivedStaticStruct = (atomic<int>)0x1;
          *(code **)&(pFVar7->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
          pFVar7->_padding_ =
               (longlong)
               &
               ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_CheatSlot__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
          ;
          ((atomic<int> *)&pFVar7->DerivedStaticStruct)[1] = (atomic<int>)0x1;
          *(FDS_ViewModelContext **)&pFVar7->ViewModelTemplateKey = pFVar13;
          pFVar6 = pFVar7;
        }
        if ((pFVar13 == (FDS_ViewModelContext *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pUVar8 = FDS_ViewModelContext_CheatSlot::StaticStruct();
        *(UScriptStruct **)&pFVar13->DerivedStaticStruct = pUVar8;
        pUVar9 = UDS_ViewModelContextManager::GetInst();
        if (pUVar9 != (UDS_ViewModelContextManager *)0x0) {
          if (pFVar6 != (FDS_ViewModelContext *)0x0) {
            LOCK();
            *(atomic<int> *)&pFVar6->DerivedStaticStruct =
                 (atomic<int>)((int)*(atomic<int> *)&pFVar6->DerivedStaticStruct + 1);
            UNLOCK();
          }
          TStack_198.Object = pFVar13;
          TStack_198.SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)pFVar6;
          UDS_ViewModelContextManager::RegisterContext(pUVar9,&TStack_198);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (TStack_198.SharedReferenceCount.ReferenceController);
        }
        pFVar13->ViewModelTemplateKey = W_CheatSlot;
        *(int *)&pFVar13[1]._padding_ = ((FDS_CheatSlotInfo *)FVar12.Data)->CheatIndex;
        pUVar10 = NewObject<UDS_UserObjectListItem>((UObject *)this);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar10 != (UDS_UserObjectListItem *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar10);
        }
        if (pFVar6 != (FDS_ViewModelContext *)0x0) {
          LOCK();
          *(atomic<int> *)&pFVar6->DerivedStaticStruct =
               (atomic<int>)((int)*(atomic<int> *)&pFVar6->DerivedStaticStruct + 1);
          UNLOCK();
        }
        TStack_178.Object = pFVar13;
        TStack_178.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar6;
        UDS_UserObjectListItem::AddContext(pUVar10,&TStack_178);
        pUStack_1d0 = pUVar10;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar10 != (UDS_UserObjectListItem *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar10);
        }
        FDS_EntryBindingEventField::Add
                  (pFStack_1d8,(TObjectPtr<UDS_UserObjectListItem>)&pUStack_1d0);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar6);
        uVar11 = TStack_1f0._8_8_ & 0xffffffff;
        FVar12.Data = FVar12.Data + 0x78;
        this = pUStack_1e0;
      }
      lVar16 = 10;
      do {
        pFVar6 = ::operator_new(0x28);
        pFVar13 = pFVar14;
        if (pFVar6 != (FDS_ViewModelContext *)0x0) {
          *(undefined8 *)&pFVar6->ViewModelTemplateKey = 0;
          pFVar6[1]._padding_ = 0;
          *(undefined8 *)&pFVar6->DerivedStaticStruct = 0;
          (pFVar6->ViewModelName).ComparisonIndex = 0;
          (pFVar6->ViewModelName).Number = 0;
          pFVar6->_padding_ = (longlong)&___7FDS_ViewModelContext_CheatSlot__6B_;
          pFVar13 = pFVar6;
        }
        pFVar7 = ::operator_new(0x20);
        pFVar6 = pFVar14;
        if (pFVar7 != (FDS_ViewModelContext *)0x0) {
          *(atomic<int> *)&pFVar7->DerivedStaticStruct = (atomic<int>)0x1;
          *(code **)&(pFVar7->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
          pFVar7->_padding_ =
               (longlong)
               &
               ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_CheatSlot__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
          ;
          ((atomic<int> *)&pFVar7->DerivedStaticStruct)[1] = (atomic<int>)0x1;
          *(FDS_ViewModelContext **)&pFVar7->ViewModelTemplateKey = pFVar13;
          pFVar6 = pFVar7;
        }
        if ((pFVar13 == (FDS_ViewModelContext *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pUVar8 = FDS_ViewModelContext_CheatSlot::StaticStruct();
        *(UScriptStruct **)&pFVar13->DerivedStaticStruct = pUVar8;
        pUVar9 = UDS_ViewModelContextManager::GetInst();
        if (pUVar9 != (UDS_ViewModelContextManager *)0x0) {
          if (pFVar6 != (FDS_ViewModelContext *)0x0) {
            LOCK();
            *(atomic<int> *)&pFVar6->DerivedStaticStruct =
                 (atomic<int>)((int)*(atomic<int> *)&pFVar6->DerivedStaticStruct + 1);
            UNLOCK();
          }
          TStack_188.Object = pFVar13;
          TStack_188.SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)pFVar6;
          UDS_ViewModelContextManager::RegisterContext(pUVar9,&TStack_188);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (TStack_188.SharedReferenceCount.ReferenceController);
        }
        pFVar13->ViewModelTemplateKey = W_CheatSlot;
        *(undefined4 *)&pFVar13[1]._padding_ = 0;
        pUVar10 = NewObject<UDS_UserObjectListItem>((UObject *)this);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar10 != (UDS_UserObjectListItem *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar10);
        }
        if (pFVar6 != (FDS_ViewModelContext *)0x0) {
          LOCK();
          *(atomic<int> *)&pFVar6->DerivedStaticStruct =
               (atomic<int>)((int)*(atomic<int> *)&pFVar6->DerivedStaticStruct + 1);
          UNLOCK();
        }
        TStack_168.Object = pFVar13;
        TStack_168.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar6;
        UDS_UserObjectListItem::AddContext(pUVar10,&TStack_168);
        apUStack_1c8[0] = pUVar10;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar10 != (UDS_UserObjectListItem *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar10);
        }
        FDS_EntryBindingEventField::Add
                  (pFStack_1d8,(TObjectPtr<UDS_UserObjectListItem>)apUStack_1c8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar6);
        pUVar3 = pUStack_1e0;
        lVar16 = lVar16 + -1;
        this = pUStack_1e0;
      } while (lVar16 != 0);
      iStack_1b0 = FFieldNotificationClassDescriptor::CheatSlotListField.BitNumber;
      FStack_1b8 = FFieldNotificationClassDescriptor::CheatSlotListField.FieldName;
      (**(code **)(pUStack_1e0->_padding_ + 0x38))(&pUStack_1e0->_padding_,&FStack_1b8);
      iStack_1a0 = FFieldNotificationClassDescriptor::CheatItemSlotListField.BitNumber;
      FStack_1a8 = FFieldNotificationClassDescriptor::CheatItemSlotListField.FieldName;
      (**(code **)(pUVar3->_padding_ + 0x38))(&pUVar3->_padding_,&FStack_1a8);
      DestructItems<FDS_CheatSlotInfo,int>
                ((FDS_CheatSlotInfo *)TStack_1f0.AllocatorInstance.Data,TStack_1f0.ArrayNum);
      FVar12.Data = TStack_1f0.AllocatorInstance.Data;
    }
    else {
      pUVar5 = UDS_LogManager::GetInst();
      if (pUVar5 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar5 = UDS_LogManager::GetInst();
      TStack_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_158,"UDS_VM_WB_CheatPanel::UpdateCheatSlotList",0x29,Yes);
      UDS_LogManager::PrintLog(pUVar5,1,Warning,TStack_158.Ptr,0xbb,L"CheatData is not valid");
      FVar12.Data = (FScriptContainerElement *)TStack_158._padding_;
    }
    if ((FDS_CheatSlotInfo *)FVar12.Data != (FDS_CheatSlotInfo *)0x0) {
      FMemory::Free(FVar12.Data);
    }
    return;
  }
  UpdataCheatItemSlotList(this);
  return;
}

// OnClickGradeTag @ 14bfb9ee0

void __thiscall
UDS_VM_WB_CheatPanel::OnClickGradeTag(UDS_VM_WB_CheatPanel *this,FWidgetEventField *param_1)

{
  OnChangeTagType(this,&UDS_CheatData::TAG_GRADE_TYPE);
  return;
}

// OnClickTagConfirm @ 14bfbae30

void __thiscall
UDS_VM_WB_CheatPanel::OnClickTagConfirm(UDS_VM_WB_CheatPanel *this,FDS_ButtonEventField *param_1)

{
  FName local_18;
  int local_10;
  
  UpdataCheatItemSlotList(this);
  local_10 = FFieldNotificationClassDescriptor::TagSelectPanelVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::TagSelectPanelVisibility.FieldName;
  if (this->TagSelectPanelVisibility != Collapsed) {
    this->TagSelectPanelVisibility = Collapsed;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// OnClickTypeTag @ 14bfbaf80

void __thiscall
UDS_VM_WB_CheatPanel::OnClickTypeTag(UDS_VM_WB_CheatPanel *this,FWidgetEventField *param_1)

{
  OnChangeTagType(this,&UDS_CheatData::TAG_ITEM_TYPE);
  return;
}

// OnSetViewModel @ 14bfc1860

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_WB_CheatPanel::OnSetViewModel
          (UDS_VM_WB_CheatPanel *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  int iVar2;
  bool bVar3;
  FName FVar4;
  UDS_LogManager *pUVar5;
  UDS_DataManager *this_00;
  TWeakObjectPtr<UDS_CheatData,FWeakObjectPtr> TVar6;
  undefined1 auStackY_198 [32];
  uint uVar7;
  wchar_t *pwVar8;
  FName local_168;
  int local_160;
  FWeakObjectPtr local_158 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_198;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  iVar2 = FFieldNotificationClassDescriptor::TagSelectPanelVisibility.BitNumber;
  FVar4 = FFieldNotificationClassDescriptor::TagSelectPanelVisibility.FieldName;
  if (this->TagSelectPanelVisibility != Collapsed) {
    this->TagSelectPanelVisibility = Collapsed;
    local_160 = iVar2;
    local_168 = FVar4;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_168);
  }
  iVar2 = FFieldNotificationClassDescriptor::AllButtonClickAble.BitNumber;
  FVar4 = FFieldNotificationClassDescriptor::AllButtonClickAble.FieldName;
  if (this->AllButtonClickAble != true) {
    this->AllButtonClickAble = true;
    local_160 = iVar2;
    local_168 = FVar4;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_168);
  }
  FVar4 = (FName)UDS_DataManager::GetInst();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar4 != (FName)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FVar4);
  }
  local_158[0].ObjectIndex = 0;
  local_158[0].ObjectSerialNumber = 0;
  local_168 = FVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar4 != (FName)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FVar4);
  }
  FWeakObjectPtr::operator=(local_158,(FObjectPtr)&local_168);
  bVar3 = FWeakObjectPtr::IsValid(local_158);
  if (bVar3) {
    this_00 = (UDS_DataManager *)FWeakObjectPtr::Get(local_158);
    TVar6 = UDS_DataManager::GetCheatData(this_00);
                    /* WARNING: Load size is inaccurate */
    (this->CheatData).WeakPtr = *TVar6.WeakPtr;
    bVar3 = FWeakObjectPtr::IsValid(&(this->CheatData).WeakPtr);
    if (bVar3) {
      UpdateCheatSlotList(this);
      goto LAB_14bfc1a7a;
    }
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 == (UDS_LogManager *)0x0) goto LAB_14bfc1a7a;
    pUVar5 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_VM_WB_CheatPanel::OnSetViewModel",0x24,Yes);
    pwVar8 = L"CheatData is not valid";
    uVar7 = 0x2a;
  }
  else {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 == (UDS_LogManager *)0x0) goto LAB_14bfc1a7a;
    pUVar5 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_VM_WB_CheatPanel::OnSetViewModel",0x24,Yes);
    pwVar8 = L"dataManager is not valid";
    uVar7 = 0x23;
  }
  UDS_LogManager::PrintLog(pUVar5,1,Warning,local_148.Ptr,uVar7,pwVar8);
  if ((void *)local_148._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
LAB_14bfc1a7a:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnTextChangedEvent @ 14bfd0060

void __thiscall
UDS_VM_WB_CheatPanel::OnTextChangedEvent
          (UDS_VM_WB_CheatPanel *this,FDS_TextCommittedEventField *param_1)

{
  FString *pFVar1;
  
  pFVar1 = FText::ToString(&param_1->NewText);
  ::FString::operator=(&this->FindCheatString,pFVar1);
  if (this->TagSelectPanelVisibility == Visible) {
    return;
  }
  if (this->CheatSlotSwitcher == 0) {
    UpdateCheatSlotList(this);
    return;
  }
  UpdataCheatItemSlotList(this);
  return;
}

// SetAllButtonClickAble @ 14bfd60b0

void __thiscall
UDS_VM_WB_CheatPanel::SetAllButtonClickAble(UDS_VM_WB_CheatPanel *this,bool *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::AllButtonClickAble.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::AllButtonClickAble.FieldName;
  if (this->AllButtonClickAble != *param_1) {
    this->AllButtonClickAble = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetCheatSlotSwitcher @ 14bfd6d50

void __thiscall UDS_VM_WB_CheatPanel::SetCheatSlotSwitcher(UDS_VM_WB_CheatPanel *this,int *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::CheatSlotSwitcher.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::CheatSlotSwitcher.FieldName;
  if (this->CheatSlotSwitcher != *param_1) {
    this->CheatSlotSwitcher = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetTagSelectPanelVisibility @ 14bfdda80

void __thiscall
UDS_VM_WB_CheatPanel::SetTagSelectPanelVisibility
          (UDS_VM_WB_CheatPanel *this,ESlateVisibility *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::TagSelectPanelVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::TagSelectPanelVisibility.FieldName;
  if (this->TagSelectPanelVisibility != *param_1) {
    this->TagSelectPanelVisibility = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// UpdataCheatItemSlotList @ 14bfe07d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_WB_CheatPanel::UpdataCheatItemSlotList(UDS_VM_WB_CheatPanel *this)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  UDS_LogManager *pUVar4;
  UDS_CheatData *this_00;
  ulonglong uVar5;
  FDS_ViewModelContext *pFVar6;
  FDS_ViewModelContext *pFVar7;
  UScriptStruct *pUVar8;
  UDS_ViewModelContextManager *pUVar9;
  UDS_UserObjectListItem *pUVar10;
  ForAnyElementType FVar11;
  FDS_ViewModelContext *pFVar12;
  FDS_ViewModelContext *pFVar13;
  FDS_CheatItemInfo *pFVar14;
  UDS_VM_WB_CheatPanel *pUVar15;
  longlong lVar16;
  undefined1 auStackY_218 [32];
  undefined1 local_1e8 [8];
  TArray<FDS_CheatItemInfo,TSizedDefaultAllocator<32>_> local_1e0;
  UDS_VM_WB_CheatPanel *local_1d0;
  UDS_UserObjectListItem *local_1c8;
  UDS_UserObjectListItem *local_1c0;
  FName local_1b8;
  int local_1b0;
  FName local_1a8;
  int local_1a0;
  TSharedPtr<FDS_ViewModelContext,1> local_198;
  TSharedPtr<FDS_ViewModelContext,1> local_188;
  TSharedPtr<FDS_ViewModelContext,1> local_178;
  TSharedPtr<FDS_ViewModelContext,1> local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_218;
  local_1d0 = this;
  bVar3 = FWeakObjectPtr::IsValid(&(this->CheatData).WeakPtr);
  if (bVar3) {
    pFVar13 = (FDS_ViewModelContext *)0x0;
    local_1e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1e0.ArrayNum = 0;
    local_1e0.ArrayMax = 0;
    this_00 = (UDS_CheatData *)FWeakObjectPtr::Get(&(this->CheatData).WeakPtr);
    UDS_CheatData::GetFileteredCheatItemInfoArray(this_00,&local_1e0,&this->FindCheatString);
    FDS_EntryBindingEventField::Reset(&this->CheatSlotListField);
    FDS_EntryBindingEventField::Reset(&this->CheatItemSlotListField);
    iVar2 = local_1e0.ArrayNum;
    uVar5 = (ulonglong)local_1e0.ArrayNum;
    pFVar14 = (FDS_CheatItemInfo *)(local_1e0.AllocatorInstance.Data + uVar5 * 0x40);
    FVar11.Data = local_1e0.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar5 != iVar2) {
        local_1e8[0] = 0;
        `TCheckedPointerIterator<FDS_CheatItemInfo,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_1e8);
      }
      if ((FDS_CheatItemInfo *)FVar11.Data == pFVar14) break;
      pFVar6 = ::operator_new(0x28);
      pFVar12 = pFVar13;
      if (pFVar6 != (FDS_ViewModelContext *)0x0) {
        *(undefined8 *)&pFVar6->field_0x1c = 0;
        *(undefined4 *)((longlong)&pFVar6[1]._padding_ + 4) = 0;
        *(undefined8 *)&pFVar6->DerivedStaticStruct = 0;
        (pFVar6->ViewModelName).ComparisonIndex = 0;
        (pFVar6->ViewModelName).Number = 0;
        pFVar6->ViewModelTemplateKey = None;
        pFVar6->_padding_ = (longlong)&___7FDS_ViewModelContext_CheatItemSlot__6B_;
        pFVar12 = pFVar6;
      }
      pFVar7 = ::operator_new(0x20);
      pFVar6 = pFVar13;
      if (pFVar7 != (FDS_ViewModelContext *)0x0) {
        *(atomic<int> *)&pFVar7->DerivedStaticStruct = (atomic<int>)0x1;
        *(code **)&(pFVar7->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
        pFVar7->_padding_ =
             (longlong)
             &
             ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_CheatItemSlot__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
        ;
        ((atomic<int> *)&pFVar7->DerivedStaticStruct)[1] = (atomic<int>)0x1;
        *(FDS_ViewModelContext **)&pFVar7->ViewModelTemplateKey = pFVar12;
        pFVar6 = pFVar7;
      }
      if ((pFVar12 == (FDS_ViewModelContext *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pUVar8 = FDS_ViewModelContext_CheatItemSlot::StaticStruct();
      *(UScriptStruct **)&pFVar12->DerivedStaticStruct = pUVar8;
      pUVar9 = UDS_ViewModelContextManager::GetInst();
      if (pUVar9 != (UDS_ViewModelContextManager *)0x0) {
        if (pFVar6 != (FDS_ViewModelContext *)0x0) {
          LOCK();
          *(atomic<int> *)&pFVar6->DerivedStaticStruct =
               (atomic<int>)((int)*(atomic<int> *)&pFVar6->DerivedStaticStruct + 1);
          UNLOCK();
        }
        local_198.Object = pFVar12;
        local_198.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar6;
        UDS_ViewModelContextManager::RegisterContext(pUVar9,&local_198);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_198.SharedReferenceCount.ReferenceController);
      }
      pFVar12->ViewModelTemplateKey = W_CheatItemSlot;
      pFVar12[1]._padding_ = (longlong)((FDS_CheatItemInfo *)FVar11.Data)->ItemTID;
      pUVar10 = NewObject<UDS_UserObjectListItem>((UObject *)this);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar10 != (UDS_UserObjectListItem *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar10);
      }
      if (pFVar6 != (FDS_ViewModelContext *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar6->DerivedStaticStruct =
             (atomic<int>)((int)*(atomic<int> *)&pFVar6->DerivedStaticStruct + 1);
        UNLOCK();
      }
      local_178.Object = pFVar12;
      local_178.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar6;
      UDS_UserObjectListItem::AddContext(pUVar10,&local_178);
      local_1c8 = pUVar10;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar10 != (UDS_UserObjectListItem *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar10);
      }
      this = local_1d0;
      FDS_EntryBindingEventField::Add
                (&local_1d0->CheatItemSlotListField,(TObjectPtr<UDS_UserObjectListItem>)&local_1c8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar6);
      uVar5 = local_1e0._8_8_ & 0xffffffff;
      FVar11.Data = FVar11.Data + 0x40;
    }
    lVar16 = 10;
    pUVar15 = this;
    do {
      pFVar6 = ::operator_new(0x28);
      pFVar12 = pFVar13;
      if (pFVar6 != (FDS_ViewModelContext *)0x0) {
        *(undefined8 *)&pFVar6->field_0x1c = 0;
        *(undefined4 *)((longlong)&pFVar6[1]._padding_ + 4) = 0;
        *(undefined8 *)&pFVar6->DerivedStaticStruct = 0;
        (pFVar6->ViewModelName).ComparisonIndex = 0;
        (pFVar6->ViewModelName).Number = 0;
        pFVar6->ViewModelTemplateKey = None;
        pFVar6->_padding_ = (longlong)&___7FDS_ViewModelContext_CheatItemSlot__6B_;
        pFVar12 = pFVar6;
      }
      pFVar7 = ::operator_new(0x20);
      pFVar6 = pFVar13;
      if (pFVar7 != (FDS_ViewModelContext *)0x0) {
        *(atomic<int> *)&pFVar7->DerivedStaticStruct = (atomic<int>)0x1;
        *(code **)&(pFVar7->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
        pFVar7->_padding_ =
             (longlong)
             &
             ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_CheatItemSlot__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
        ;
        ((atomic<int> *)&pFVar7->DerivedStaticStruct)[1] = (atomic<int>)0x1;
        *(FDS_ViewModelContext **)&pFVar7->ViewModelTemplateKey = pFVar12;
        pFVar6 = pFVar7;
      }
      if ((pFVar12 == (FDS_ViewModelContext *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pUVar8 = FDS_ViewModelContext_CheatItemSlot::StaticStruct();
      *(UScriptStruct **)&pFVar12->DerivedStaticStruct = pUVar8;
      pUVar9 = UDS_ViewModelContextManager::GetInst();
      if (pUVar9 != (UDS_ViewModelContextManager *)0x0) {
        if (pFVar6 != (FDS_ViewModelContext *)0x0) {
          LOCK();
          *(atomic<int> *)&pFVar6->DerivedStaticStruct =
               (atomic<int>)((int)*(atomic<int> *)&pFVar6->DerivedStaticStruct + 1);
          UNLOCK();
        }
        local_188.Object = pFVar12;
        local_188.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar6;
        UDS_ViewModelContextManager::RegisterContext(pUVar9,&local_188);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_188.SharedReferenceCount.ReferenceController);
      }
      pFVar12->ViewModelTemplateKey = W_CheatItemSlot;
      pFVar12[1]._padding_ = 0;
      pUVar10 = NewObject<UDS_UserObjectListItem>((UObject *)pUVar15);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar10 != (UDS_UserObjectListItem *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar10);
      }
      if (pFVar6 != (FDS_ViewModelContext *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar6->DerivedStaticStruct =
             (atomic<int>)((int)*(atomic<int> *)&pFVar6->DerivedStaticStruct + 1);
        UNLOCK();
      }
      local_168.Object = pFVar12;
      local_168.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar6;
      UDS_UserObjectListItem::AddContext(pUVar10,&local_168);
      local_1c0 = pUVar10;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar10 != (UDS_UserObjectListItem *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar10);
      }
      FDS_EntryBindingEventField::Add
                (&this->CheatSlotListField,(TObjectPtr<UDS_UserObjectListItem>)&local_1c0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar6);
      pUVar15 = local_1d0;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    local_1b0 = FFieldNotificationClassDescriptor::CheatSlotListField.BitNumber;
    local_1b8 = FFieldNotificationClassDescriptor::CheatSlotListField.FieldName;
    (**(code **)(local_1d0->_padding_ + 0x38))(&local_1d0->_padding_,&local_1b8);
    local_1a0 = FFieldNotificationClassDescriptor::CheatItemSlotListField.BitNumber;
    local_1a8 = FFieldNotificationClassDescriptor::CheatItemSlotListField.FieldName;
    (**(code **)(pUVar15->_padding_ + 0x38))(&pUVar15->_padding_,&local_1a8);
    DestructItems<FDS_CheatItemInfo,int>
              ((FDS_CheatItemInfo *)local_1e0.AllocatorInstance.Data,local_1e0.ArrayNum);
    FVar11.Data = local_1e0.AllocatorInstance.Data;
  }
  else {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar4 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_VM_WB_CheatPanel::UpdataCheatItemSlotList",0x2d,Yes);
    UDS_LogManager::PrintLog(pUVar4,1,Warning,local_158.Ptr,0xe5,L"CheatData is not valid");
    FVar11.Data = (FScriptContainerElement *)local_158._padding_;
  }
  if ((FDS_CheatItemInfo *)FVar11.Data != (FDS_CheatItemInfo *)0x0) {
    FMemory::Free(FVar11.Data);
  }
  return;
}

// UpdateCheatSlotList @ 14bfe2180

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_WB_CheatPanel::UpdateCheatSlotList(UDS_VM_WB_CheatPanel *this)

{
  code *pcVar1;
  int iVar2;
  UDS_VM_WB_CheatPanel *pUVar3;
  bool bVar4;
  UDS_LogManager *pUVar5;
  UDS_CheatData *this_00;
  FDS_ViewModelContext *pFVar6;
  FDS_ViewModelContext *pFVar7;
  UScriptStruct *pUVar8;
  UDS_ViewModelContextManager *pUVar9;
  UDS_UserObjectListItem *pUVar10;
  ulonglong uVar11;
  ForAnyElementType FVar12;
  FDS_ViewModelContext *pFVar13;
  FDS_ViewModelContext *pFVar14;
  FDS_CheatSlotInfo *pFVar15;
  longlong lVar16;
  undefined1 auStackY_228 [32];
  undefined1 local_1f8 [8];
  TArray<FDS_CheatSlotInfo,TSizedDefaultAllocator<32>_> local_1f0;
  UDS_VM_WB_CheatPanel *local_1e0;
  FDS_EntryBindingEventField *local_1d8;
  UDS_UserObjectListItem *local_1d0;
  UDS_UserObjectListItem *local_1c8 [2];
  FName local_1b8;
  int local_1b0;
  FName local_1a8;
  int local_1a0;
  TSharedPtr<FDS_ViewModelContext,1> local_198;
  TSharedPtr<FDS_ViewModelContext,1> local_188;
  TSharedPtr<FDS_ViewModelContext,1> local_178;
  TSharedPtr<FDS_ViewModelContext,1> local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_228;
  local_1e0 = this;
  bVar4 = FWeakObjectPtr::IsValid(&(this->CheatData).WeakPtr);
  if (bVar4) {
    pFVar14 = (FDS_ViewModelContext *)0x0;
    local_1f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1f0.ArrayNum = 0;
    local_1f0.ArrayMax = 0;
    this_00 = (UDS_CheatData *)FWeakObjectPtr::Get(&(this->CheatData).WeakPtr);
    UDS_CheatData::GetFilteredCheatSlotInfoArray(this_00,&local_1f0,&this->FindCheatString);
    local_1d8 = &this->CheatSlotListField;
    FDS_EntryBindingEventField::Reset(local_1d8);
    FDS_EntryBindingEventField::Reset(&this->CheatItemSlotListField);
    iVar2 = local_1f0.ArrayNum;
    uVar11 = (ulonglong)local_1f0.ArrayNum;
    pFVar15 = (FDS_CheatSlotInfo *)(local_1f0.AllocatorInstance.Data + uVar11 * 0x78);
    FVar12.Data = local_1f0.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar11 != iVar2) {
        local_1f8[0] = 0;
        `TCheckedPointerIterator<FDS_CheatSlotInfo,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_1f8);
      }
      if ((FDS_CheatSlotInfo *)FVar12.Data == pFVar15) break;
      pFVar6 = ::operator_new(0x28);
      pFVar13 = pFVar14;
      if (pFVar6 != (FDS_ViewModelContext *)0x0) {
        *(undefined8 *)&pFVar6->ViewModelTemplateKey = 0;
        pFVar6[1]._padding_ = 0;
        *(undefined8 *)&pFVar6->DerivedStaticStruct = 0;
        (pFVar6->ViewModelName).ComparisonIndex = 0;
        (pFVar6->ViewModelName).Number = 0;
        pFVar6->_padding_ = (longlong)&___7FDS_ViewModelContext_CheatSlot__6B_;
        pFVar13 = pFVar6;
      }
      pFVar7 = ::operator_new(0x20);
      pFVar6 = pFVar14;
      if (pFVar7 != (FDS_ViewModelContext *)0x0) {
        *(atomic<int> *)&pFVar7->DerivedStaticStruct = (atomic<int>)0x1;
        *(code **)&(pFVar7->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
        pFVar7->_padding_ =
             (longlong)
             &
             ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_CheatSlot__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
        ;
        ((atomic<int> *)&pFVar7->DerivedStaticStruct)[1] = (atomic<int>)0x1;
        *(FDS_ViewModelContext **)&pFVar7->ViewModelTemplateKey = pFVar13;
        pFVar6 = pFVar7;
      }
      if ((pFVar13 == (FDS_ViewModelContext *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pUVar8 = FDS_ViewModelContext_CheatSlot::StaticStruct();
      *(UScriptStruct **)&pFVar13->DerivedStaticStruct = pUVar8;
      pUVar9 = UDS_ViewModelContextManager::GetInst();
      if (pUVar9 != (UDS_ViewModelContextManager *)0x0) {
        if (pFVar6 != (FDS_ViewModelContext *)0x0) {
          LOCK();
          *(atomic<int> *)&pFVar6->DerivedStaticStruct =
               (atomic<int>)((int)*(atomic<int> *)&pFVar6->DerivedStaticStruct + 1);
          UNLOCK();
        }
        local_198.Object = pFVar13;
        local_198.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar6;
        UDS_ViewModelContextManager::RegisterContext(pUVar9,&local_198);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_198.SharedReferenceCount.ReferenceController);
      }
      pFVar13->ViewModelTemplateKey = W_CheatSlot;
      *(int *)&pFVar13[1]._padding_ = ((FDS_CheatSlotInfo *)FVar12.Data)->CheatIndex;
      pUVar10 = NewObject<UDS_UserObjectListItem>((UObject *)this);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar10 != (UDS_UserObjectListItem *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar10);
      }
      if (pFVar6 != (FDS_ViewModelContext *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar6->DerivedStaticStruct =
             (atomic<int>)((int)*(atomic<int> *)&pFVar6->DerivedStaticStruct + 1);
        UNLOCK();
      }
      local_178.Object = pFVar13;
      local_178.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar6;
      UDS_UserObjectListItem::AddContext(pUVar10,&local_178);
      local_1d0 = pUVar10;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar10 != (UDS_UserObjectListItem *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar10);
      }
      FDS_EntryBindingEventField::Add(local_1d8,(TObjectPtr<UDS_UserObjectListItem>)&local_1d0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar6);
      uVar11 = local_1f0._8_8_ & 0xffffffff;
      FVar12.Data = FVar12.Data + 0x78;
      this = local_1e0;
    }
    lVar16 = 10;
    do {
      pFVar6 = ::operator_new(0x28);
      pFVar13 = pFVar14;
      if (pFVar6 != (FDS_ViewModelContext *)0x0) {
        *(undefined8 *)&pFVar6->ViewModelTemplateKey = 0;
        pFVar6[1]._padding_ = 0;
        *(undefined8 *)&pFVar6->DerivedStaticStruct = 0;
        (pFVar6->ViewModelName).ComparisonIndex = 0;
        (pFVar6->ViewModelName).Number = 0;
        pFVar6->_padding_ = (longlong)&___7FDS_ViewModelContext_CheatSlot__6B_;
        pFVar13 = pFVar6;
      }
      pFVar7 = ::operator_new(0x20);
      pFVar6 = pFVar14;
      if (pFVar7 != (FDS_ViewModelContext *)0x0) {
        *(atomic<int> *)&pFVar7->DerivedStaticStruct = (atomic<int>)0x1;
        *(code **)&(pFVar7->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
        pFVar7->_padding_ =
             (longlong)
             &
             ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_CheatSlot__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
        ;
        ((atomic<int> *)&pFVar7->DerivedStaticStruct)[1] = (atomic<int>)0x1;
        *(FDS_ViewModelContext **)&pFVar7->ViewModelTemplateKey = pFVar13;
        pFVar6 = pFVar7;
      }
      if ((pFVar13 == (FDS_ViewModelContext *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pUVar8 = FDS_ViewModelContext_CheatSlot::StaticStruct();
      *(UScriptStruct **)&pFVar13->DerivedStaticStruct = pUVar8;
      pUVar9 = UDS_ViewModelContextManager::GetInst();
      if (pUVar9 != (UDS_ViewModelContextManager *)0x0) {
        if (pFVar6 != (FDS_ViewModelContext *)0x0) {
          LOCK();
          *(atomic<int> *)&pFVar6->DerivedStaticStruct =
               (atomic<int>)((int)*(atomic<int> *)&pFVar6->DerivedStaticStruct + 1);
          UNLOCK();
        }
        local_188.Object = pFVar13;
        local_188.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar6;
        UDS_ViewModelContextManager::RegisterContext(pUVar9,&local_188);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_188.SharedReferenceCount.ReferenceController);
      }
      pFVar13->ViewModelTemplateKey = W_CheatSlot;
      *(undefined4 *)&pFVar13[1]._padding_ = 0;
      pUVar10 = NewObject<UDS_UserObjectListItem>((UObject *)this);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar10 != (UDS_UserObjectListItem *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar10);
      }
      if (pFVar6 != (FDS_ViewModelContext *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar6->DerivedStaticStruct =
             (atomic<int>)((int)*(atomic<int> *)&pFVar6->DerivedStaticStruct + 1);
        UNLOCK();
      }
      local_168.Object = pFVar13;
      local_168.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar6;
      UDS_UserObjectListItem::AddContext(pUVar10,&local_168);
      local_1c8[0] = pUVar10;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar10 != (UDS_UserObjectListItem *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar10);
      }
      FDS_EntryBindingEventField::Add(local_1d8,(TObjectPtr<UDS_UserObjectListItem>)local_1c8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar6);
      pUVar3 = local_1e0;
      lVar16 = lVar16 + -1;
      this = local_1e0;
    } while (lVar16 != 0);
    local_1b0 = FFieldNotificationClassDescriptor::CheatSlotListField.BitNumber;
    local_1b8 = FFieldNotificationClassDescriptor::CheatSlotListField.FieldName;
    (**(code **)(local_1e0->_padding_ + 0x38))(&local_1e0->_padding_,&local_1b8);
    local_1a0 = FFieldNotificationClassDescriptor::CheatItemSlotListField.BitNumber;
    local_1a8 = FFieldNotificationClassDescriptor::CheatItemSlotListField.FieldName;
    (**(code **)(pUVar3->_padding_ + 0x38))(&pUVar3->_padding_,&local_1a8);
    DestructItems<FDS_CheatSlotInfo,int>
              ((FDS_CheatSlotInfo *)local_1f0.AllocatorInstance.Data,local_1f0.ArrayNum);
    FVar12.Data = local_1f0.AllocatorInstance.Data;
  }
  else {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar5 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_VM_WB_CheatPanel::UpdateCheatSlotList",0x29,Yes);
    UDS_LogManager::PrintLog(pUVar5,1,Warning,local_158.Ptr,0xbb,L"CheatData is not valid");
    FVar12.Data = (FScriptContainerElement *)local_158._padding_;
  }
  if ((FDS_CheatSlotInfo *)FVar12.Data != (FDS_CheatSlotInfo *)0x0) {
    FMemory::Free(FVar12.Data);
  }
  return;
}

