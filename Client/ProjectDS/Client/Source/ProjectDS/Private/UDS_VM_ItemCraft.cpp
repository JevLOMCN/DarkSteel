// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 42

// StaticClass @ 14b6871f0

UClass * __cdecl UDS_VM_ItemCraft::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_ItemCraft.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_ItemCraft",
               &Z_Registration_Info_UClass_UDS_VM_ItemCraft.InnerSingleton,
               StaticRegisterNativesUDS_VM_ItemCraft,0x248,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_ItemCraft>,
               InternalVTableHelperCtorCaller<UDS_VM_ItemCraft>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_ItemCraft.InnerSingleton;
}

// SetCraftClickEvent_WrapperImpl @ 14b68a730

void __cdecl UDS_VM_ItemCraft::SetCraftClickEvent_WrapperImpl(void *param_1,void *param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  UDS_CraftManager *pUVar4;
  UDS_WaitCompleteDataSet *this;
  UObject *pUVar5;
  EDS_WaitCompleteType aEStackX_18 [8];
  FWeakObjectPtr FStackX_20;
  FWeakObjectPtr FStack_38;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> TStack_30;
  
  pUVar4 = UDS_CraftManager::GetInst();
  if (pUVar4 != (UDS_CraftManager *)0x0) {
    TDS_DataSetGetter<UDS_WaitCompleteDataSet>::Get((ulong64)&FStackX_20);
    bVar2 = FWeakObjectPtr::IsValid(&FStackX_20);
    if (bVar2) {
      UDS_PlayerData::GetMainPlayerData();
      bVar2 = FWeakObjectPtr::IsValid(&FStack_38);
      if (bVar2) {
        if (pUVar4->IsCondition == false) {
          TStack_30._0_8_ = 0;
          TStack_30._8_8_ = 0;
          TStack_30._16_4_ = 0;
          UDS_UIMessageManager::OpenMsgByStringUi(0x18898,Alert_None_01,&TStack_30);
          return;
        }
        if (pUVar4->HasRecipe == false) {
          TStack_30._0_8_ = 0;
          TStack_30._8_8_ = 0;
          TStack_30._16_4_ = 0;
          UDS_UIMessageManager::OpenMsgByStringUi(0x18899,Alert_None_01,&TStack_30);
          return;
        }
        if (pUVar4->IsEnoughMaterial != Enough) {
          TStack_30._0_8_ = 0;
          TStack_30._8_8_ = 0;
          TStack_30._16_4_ = 0;
          UDS_UIMessageManager::OpenMsgByStringUi(0x18895,Alert_None_01,&TStack_30);
          return;
        }
        if (pUVar4->IsEnoughMoney != Enough) {
          TStack_30._0_8_ = 0;
          TStack_30._8_8_ = 0;
          TStack_30._16_4_ = 0;
          UDS_UIMessageManager::OpenMsgByStringUi(0x18896,Alert_None_01,&TStack_30);
          return;
        }
        this = (UDS_WaitCompleteDataSet *)FWeakObjectPtr::Get(&FStackX_20);
        iVar1 = *(int *)((longlong)param_1 + 0x230);
        aEStackX_18[0] = ItemCraft;
        iVar3 = UDS_WaitCompleteDataSet::GetTotalCount(this,aEStackX_18);
        if (iVar1 <= iVar3) {
          TStack_30._0_8_ = 0;
          TStack_30._8_8_ = 0;
          TStack_30._16_4_ = 0;
          UDS_UIMessageManager::OpenMsgByStringUi(0x18897,Alert_None_01,&TStack_30);
          return;
        }
        pUVar5 = FWeakObjectPtr::Get(&FStack_38);
        FDS_ItemCraftService::SendItemCraft
                  (*(ulong64 *)((longlong)param_1 + 0x220),*(int *)((longlong)param_1 + 0x22c),
                   pUVar4->SelectedCraftListTID,pUVar4->CraftQuantity,*(int *)&pUVar5[9].field_0x10)
        ;
      }
    }
  }
  return;
}

// SetClaimAllClickEvent_WrapperImpl @ 14b68a740

void __cdecl UDS_VM_ItemCraft::SetClaimAllClickEvent_WrapperImpl(void *param_1,void *param_2)

{
  FWeakObjectPtr *pFVar1;
  bool bVar2;
  int iVar3;
  UDS_WaitCompleteDataSet *this;
  UDS_WaitCompleteData *this_00;
  UObject *pUVar4;
  int iVar5;
  ForAnyElementType this_01;
  EDS_WaitCompleteType aEStackX_18 [8];
  FWeakObjectPtr FStackX_20;
  FWeakObjectPtr FStack_58;
  TArray<__int64,TSizedDefaultAllocator<32>_> TStack_50;
  TArray<TWeakObjectPtr<UDS_WaitCompleteData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> TStack_40;
  
  TDS_DataSetGetter<UDS_WaitCompleteDataSet>::Get((ulong64)&FStackX_20);
  bVar2 = FWeakObjectPtr::IsValid(&FStackX_20);
  if (bVar2) {
    UDS_PlayerData::GetMainPlayerData();
    bVar2 = FWeakObjectPtr::IsValid(&FStack_58);
    if (bVar2) {
      TStack_50.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      TStack_50.ArrayNum = 0;
      TStack_50.ArrayMax = 0;
      this = (UDS_WaitCompleteDataSet *)FWeakObjectPtr::Get(&FStackX_20);
      aEStackX_18[0] = ItemCraft;
      UDS_WaitCompleteDataSet::GetAllData(this,&TStack_40,aEStackX_18);
      iVar5 = TStack_40.ArrayNum;
      pFVar1 = (FWeakObjectPtr *)(TStack_40.AllocatorInstance.Data + (longlong)iVar5 * 8);
      this_01.Data = TStack_40.AllocatorInstance.Data;
      while( true ) {
        if (TStack_40.ArrayNum != iVar5) {
          `TCheckedPointerIterator<TWeakObjectPtr<UDS_WaitCompleteData,FWeakObjectPtr>,int,0>::
          operator!='::__l2::<lambda_1>::operator()(aEStackX_18);
        }
        if ((FWeakObjectPtr *)this_01.Data == pFVar1) break;
        this_00 = (UDS_WaitCompleteData *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_01.Data);
        bVar2 = UDS_WaitCompleteData::IsComplete(this_00);
        if (bVar2) {
          pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_01.Data);
          iVar3 = TStack_50.ArrayNum;
          if (TStack_50.ArrayNum == TStack_50.ArrayMax) {
            iVar3 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&TStack_50.AllocatorInstance,&TStack_50.ArrayMax);
          }
          TStack_50.ArrayNum = iVar3 + 1;
          *(undefined8 *)(TStack_50.AllocatorInstance.Data + (longlong)iVar3 * 8) =
               *(undefined8 *)&pUVar4[2].field_0x10;
        }
        this_01.Data = this_01.Data + 8;
      }
      if ((FWeakObjectPtr *)TStack_40.AllocatorInstance.Data != (FWeakObjectPtr *)0x0) {
        FMemory::Free(TStack_40.AllocatorInstance.Data);
      }
      if (0 < TStack_50.ArrayNum) {
        pUVar4 = FWeakObjectPtr::Get(&FStack_58);
        FDS_ItemCraftService::SendItemCraftComplete
                  (*(ulong64 *)((longlong)param_1 + 0x220),&TStack_50,*(int *)&pUVar4[9].field_0x10)
        ;
      }
      if (TStack_50.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(TStack_50.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// SetCraftCategoryLeftEvent_WrapperImpl @ 14b68a750

void __cdecl UDS_VM_ItemCraft::SetCraftCategoryLeftEvent_WrapperImpl(void *param_1,void *param_2)

{
  FScriptContainerElement FVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  UDS_CraftManager *pUVar6;
  UDS_ItemCraftEvent *pUVar7;
  ForAnyElementType FVar8;
  uint uVar9;
  FScriptContainerElement FVar10;
  int iVar11;
  longlong lVar12;
  FScriptContainerElement aFStackX_18 [16];
  TArray<EDS_CraftCategoryType,TSizedDefaultAllocator<32>_> TStack_38;
  
  pUVar6 = UDS_CraftManager::GetInst();
  if ((pUVar6 != (UDS_CraftManager *)0x0) &&
     (pUVar7 = UDS_ItemCraftEvent::GetEvent(), pUVar7 != (UDS_ItemCraftEvent *)0x0)) {
    FVar10 = (FScriptContainerElement)pUVar6->SelectedCraftCategoryType;
    bVar3 = false;
    FDS_ItemCraftListTableRow::GetCategoryList(&TStack_38,(int *)((longlong)param_1 + 0x218));
    uVar9 = TStack_38.ArrayNum - 1;
    FVar8.Data = TStack_38.AllocatorInstance.Data;
    if (-1 < (int)uVar9) {
      lVar12 = (longlong)(int)uVar9;
      iVar11 = TStack_38.ArrayNum;
      do {
        uVar5 = 0;
        if ((int)uVar9 < iVar11) {
          uVar5 = ~uVar9 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , FVar8.Data = TStack_38.AllocatorInstance.Data, iVar11 = TStack_38.ArrayNum, bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        FVar1 = FVar8.Data[lVar12];
        if (bVar3) {
          FVar10 = FVar1;
          if (FVar8.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FVar8.Data);
          }
          goto LAB_14be978a0;
        }
        if (FVar1 == FVar10) {
          bVar3 = true;
        }
        lVar12 = lVar12 + -1;
        uVar9 = uVar9 - 1;
      } while (-1 < (int)uVar9);
    }
    if (FVar8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar8.Data);
    }
LAB_14be978a0:
    aFStackX_18[0] = FVar10;
    FDS_EventDelegate<enum_EDS_CraftCategoryType_const_&>::Broadcast
              (&pUVar7->OnSelectCraftCategoryEvent,(EDS_CraftCategoryType *)aFStackX_18);
  }
  return;
}

// SetCraftCategoryRightEvent_WrapperImpl @ 14b68a760

void __cdecl UDS_VM_ItemCraft::SetCraftCategoryRightEvent_WrapperImpl(void *param_1,void *param_2)

{
  FScriptContainerElement FVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  UDS_CraftManager *pUVar6;
  UDS_ItemCraftEvent *pUVar7;
  ForAnyElementType FVar8;
  uint uVar9;
  FScriptContainerElement FVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  FScriptContainerElement aFStackX_18 [8];
  TArray<EDS_CraftCategoryType,TSizedDefaultAllocator<32>_> TStack_38;
  
  pUVar6 = UDS_CraftManager::GetInst();
  if ((pUVar6 != (UDS_CraftManager *)0x0) &&
     (pUVar7 = UDS_ItemCraftEvent::GetEvent(), pUVar7 != (UDS_ItemCraftEvent *)0x0)) {
    FVar10 = (FScriptContainerElement)pUVar6->SelectedCraftCategoryType;
    bVar3 = false;
    FDS_ItemCraftListTableRow::GetCategoryList(&TStack_38,(int *)((longlong)param_1 + 0x218));
    uVar11 = (ulonglong)TStack_38.ArrayNum;
    uVar9 = 0;
    FVar8.Data = TStack_38.AllocatorInstance.Data;
    if (0 < TStack_38.ArrayNum) {
      lVar13 = 0;
      uVar12 = uVar11;
      do {
        uVar5 = 0;
        if ((int)uVar9 < (int)uVar12) {
          uVar5 = ~uVar9 >> 0x1f;
        }
        if (uVar5 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          uVar12 = (ulonglong)(uint)TStack_38.ArrayNum;
          FVar8.Data = TStack_38.AllocatorInstance.Data;
        }
        FVar1 = FVar8.Data[lVar13];
        if (bVar3) {
          FVar10 = FVar1;
          if (FVar8.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FVar8.Data);
          }
          goto LAB_14be97a01;
        }
        if (FVar1 == FVar10) {
          bVar3 = true;
        }
        uVar9 = uVar9 + 1;
        lVar13 = lVar13 + 1;
      } while (lVar13 < (longlong)uVar11);
    }
    if (FVar8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar8.Data);
    }
LAB_14be97a01:
    aFStackX_18[0] = FVar10;
    FDS_EventDelegate<enum_EDS_CraftCategoryType_const_&>::Broadcast
              (&pUVar7->OnSelectCraftCategoryEvent,(EDS_CraftCategoryType *)aFStackX_18);
  }
  return;
}

// SetAvailableItem_WrapperImpl @ 14b68a770

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_ItemCraft::SetAvailableItem_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)((longlong)param_1 + 0x170) = *(undefined1 *)param_2;
  SetItemCraftList(param_1);
  return;
}

// UDS_VM_ItemCraft @ 14b68c4e0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_VM_ItemCraft * __thiscall
UDS_VM_ItemCraft::UDS_VM_ItemCraft(UDS_VM_ItemCraft *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_ItemCraft__6B_;
  (this->EntryBindingEventField_CraftList).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_CraftList).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_CraftList).UserObjectList.ArrayMax = 0;
  (this->EntryBindingEventField_CategoryList).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_CategoryList).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_CategoryList).UserObjectList.ArrayMax = 0;
  (this->VM_Common_TabGroup).field0_0x0.DebugPtr = (UDS_VM_Common_TabGroup *)0x0;
  (this->VM_ItemCraft_Crafting_Info).field0_0x0.DebugPtr = (UDS_VM_ItemCraft_Crafting_Info *)0x0;
  (this->VM_ItemCraft_Crafting_List).field0_0x0.DebugPtr = (UDS_VM_ItemCraft_Crafting_List *)0x0;
  (this->VM_WaitCompleteList).field0_0x0.DebugPtr = (UDS_VM_WaitCompleteList *)0x0;
  (this->VM_MoneyGroup).field0_0x0.DebugPtr = (UDS_VM_MoneyGroup *)0x0;
  (this->VM_W_CharacterBag).field0_0x0.DebugPtr = (UDS_VM_W_InventoryBag *)0x0;
  (this->CraftClickEvent)._padding_ = '\0';
  (this->CraftClickEvent).bIsCustomSelected = false;
  (this->CraftClickEvent).bIsLacked = false;
  (this->CraftClickEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->CraftClickEvent).Delegate = 0;
  *(undefined8 *)&(this->CraftClickEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->CraftClickEvent).Delegate.field_0x10 = 0;
  (this->ClaimAllClickEvent)._padding_ = '\0';
  (this->ClaimAllClickEvent).bIsCustomSelected = false;
  (this->ClaimAllClickEvent).bIsLacked = false;
  (this->ClaimAllClickEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClaimAllClickEvent).Delegate = 0;
  *(undefined8 *)&(this->ClaimAllClickEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClaimAllClickEvent).Delegate.field_0x10 = 0;
  (this->CraftCategoryLeftEvent)._padding_ = '\0';
  (this->CraftCategoryLeftEvent).bIsCustomSelected = false;
  (this->CraftCategoryLeftEvent).bIsLacked = false;
  (this->CraftCategoryLeftEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->CraftCategoryLeftEvent).Delegate = 0;
  *(undefined8 *)&(this->CraftCategoryLeftEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->CraftCategoryLeftEvent).Delegate.field_0x10 = 0;
  (this->CraftCategoryRightEvent)._padding_ = '\0';
  (this->CraftCategoryRightEvent).bIsCustomSelected = false;
  (this->CraftCategoryRightEvent).bIsLacked = false;
  (this->CraftCategoryRightEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->CraftCategoryRightEvent).Delegate = 0;
  *(undefined8 *)&(this->CraftCategoryRightEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->CraftCategoryRightEvent).Delegate.field_0x10 = 0;
  (this->AvailableItem).bIsActivate = false;
  (this->FixedText_Btn_Craft).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Btn_Craft).StringEnumTableNameID.Number = 0;
  (this->FixedText_Btn_Craft).DateTime.Ticks = 0;
  (this->FixedText_Btn_Craft).TimeSpan.Ticks = 0;
  (this->FixedText_Btn_Craft).TimeExpressionType = None;
  (this->FixedText_Btn_Craft).IsExpression = false;
  (this->FixedText_Btn_Craft).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Craft).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Btn_Craft).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Btn_Craft).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Craft).FormatArgs.ArrayNum = 0;
  (this->FixedText_Btn_Craft).FormatArgs.ArrayMax = 0;
  (this->FixedText_Check_Crfatable).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Check_Crfatable).StringEnumTableNameID.Number = 0;
  (this->FixedText_Check_Crfatable).DateTime.Ticks = 0;
  (this->FixedText_Check_Crfatable).TimeSpan.Ticks = 0;
  (this->FixedText_Check_Crfatable).TimeExpressionType = None;
  (this->FixedText_Check_Crfatable).IsExpression = false;
  (this->FixedText_Check_Crfatable).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Check_Crfatable).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Check_Crfatable).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Check_Crfatable).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Check_Crfatable).FormatArgs.ArrayNum = 0;
  (this->FixedText_Check_Crfatable).FormatArgs.ArrayMax = 0;
  (this->ItemCraftListTableDatas).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ItemCraftListTableDatas).ArrayNum = 0;
  (this->ItemCraftListTableDatas).ArrayMax = 0;
  (this->FixedText_Btn_Craft).StringTableType = StringUi;
  (this->FixedText_Btn_Craft).StringTableID = 0x1870b;
  (this->FixedText_Check_Crfatable).StringTableType = StringUi;
  (this->FixedText_Check_Crfatable).StringTableID = 0x18705;
  return this;
}

// UDS_VM_ItemCraft @ 14b68c680

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_VM_ItemCraft * __thiscall
UDS_VM_ItemCraft::UDS_VM_ItemCraft(UDS_VM_ItemCraft *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_ItemCraft__6B_;
  (this->EntryBindingEventField_CraftList).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_CraftList).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_CraftList).UserObjectList.ArrayMax = 0;
  (this->EntryBindingEventField_CategoryList).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_CategoryList).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_CategoryList).UserObjectList.ArrayMax = 0;
  (this->VM_Common_TabGroup).field0_0x0.DebugPtr = (UDS_VM_Common_TabGroup *)0x0;
  (this->VM_ItemCraft_Crafting_Info).field0_0x0.DebugPtr = (UDS_VM_ItemCraft_Crafting_Info *)0x0;
  (this->VM_ItemCraft_Crafting_List).field0_0x0.DebugPtr = (UDS_VM_ItemCraft_Crafting_List *)0x0;
  (this->VM_WaitCompleteList).field0_0x0.DebugPtr = (UDS_VM_WaitCompleteList *)0x0;
  (this->VM_MoneyGroup).field0_0x0.DebugPtr = (UDS_VM_MoneyGroup *)0x0;
  (this->VM_W_CharacterBag).field0_0x0.DebugPtr = (UDS_VM_W_InventoryBag *)0x0;
  (this->CraftClickEvent)._padding_ = '\0';
  (this->CraftClickEvent).bIsCustomSelected = false;
  (this->CraftClickEvent).bIsLacked = false;
  (this->CraftClickEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->CraftClickEvent).Delegate = 0;
  *(undefined8 *)&(this->CraftClickEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->CraftClickEvent).Delegate.field_0x10 = 0;
  (this->ClaimAllClickEvent)._padding_ = '\0';
  (this->ClaimAllClickEvent).bIsCustomSelected = false;
  (this->ClaimAllClickEvent).bIsLacked = false;
  (this->ClaimAllClickEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClaimAllClickEvent).Delegate = 0;
  *(undefined8 *)&(this->ClaimAllClickEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClaimAllClickEvent).Delegate.field_0x10 = 0;
  (this->CraftCategoryLeftEvent)._padding_ = '\0';
  (this->CraftCategoryLeftEvent).bIsCustomSelected = false;
  (this->CraftCategoryLeftEvent).bIsLacked = false;
  (this->CraftCategoryLeftEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->CraftCategoryLeftEvent).Delegate = 0;
  *(undefined8 *)&(this->CraftCategoryLeftEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->CraftCategoryLeftEvent).Delegate.field_0x10 = 0;
  (this->CraftCategoryRightEvent)._padding_ = '\0';
  (this->CraftCategoryRightEvent).bIsCustomSelected = false;
  (this->CraftCategoryRightEvent).bIsLacked = false;
  (this->CraftCategoryRightEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->CraftCategoryRightEvent).Delegate = 0;
  *(undefined8 *)&(this->CraftCategoryRightEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->CraftCategoryRightEvent).Delegate.field_0x10 = 0;
  (this->AvailableItem).bIsActivate = false;
  (this->FixedText_Btn_Craft).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Btn_Craft).StringEnumTableNameID.Number = 0;
  (this->FixedText_Btn_Craft).DateTime.Ticks = 0;
  (this->FixedText_Btn_Craft).TimeSpan.Ticks = 0;
  (this->FixedText_Btn_Craft).TimeExpressionType = None;
  (this->FixedText_Btn_Craft).IsExpression = false;
  (this->FixedText_Btn_Craft).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Craft).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Btn_Craft).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Btn_Craft).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Craft).FormatArgs.ArrayNum = 0;
  (this->FixedText_Btn_Craft).FormatArgs.ArrayMax = 0;
  (this->FixedText_Check_Crfatable).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Check_Crfatable).StringEnumTableNameID.Number = 0;
  (this->FixedText_Check_Crfatable).DateTime.Ticks = 0;
  (this->FixedText_Check_Crfatable).TimeSpan.Ticks = 0;
  (this->FixedText_Check_Crfatable).TimeExpressionType = None;
  (this->FixedText_Check_Crfatable).IsExpression = false;
  (this->FixedText_Check_Crfatable).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Check_Crfatable).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Check_Crfatable).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Check_Crfatable).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Check_Crfatable).FormatArgs.ArrayNum = 0;
  (this->FixedText_Check_Crfatable).FormatArgs.ArrayMax = 0;
  (this->ItemCraftListTableDatas).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ItemCraftListTableDatas).ArrayNum = 0;
  (this->ItemCraftListTableDatas).ArrayMax = 0;
  (this->FixedText_Btn_Craft).StringTableType = StringUi;
  (this->FixedText_Btn_Craft).StringTableID = 0x1870b;
  (this->FixedText_Check_Crfatable).StringTableType = StringUi;
  (this->FixedText_Check_Crfatable).StringTableID = 0x18705;
  return this;
}

// ~UDS_VM_ItemCraft @ 14b68db20

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_ItemCraft::~UDS_VM_ItemCraft(UDS_VM_ItemCraft *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_ItemCraft__6B_;
  pFVar1 = (this->ItemCraftListTableDatas).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)
             (this->FixedText_Check_Crfatable).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_Check_Crfatable).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_Check_Crfatable).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_Check_Crfatable).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_Btn_Craft).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_Btn_Craft).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_Btn_Craft).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_Btn_Craft).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->CraftCategoryRightEvent).Delegate)
  ;
  pvVar2 = *(void **)&(this->CraftCategoryRightEvent).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->CraftCategoryRightEvent).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->CraftCategoryLeftEvent).Delegate);
  pvVar2 = *(void **)&(this->CraftCategoryLeftEvent).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->CraftCategoryLeftEvent).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClaimAllClickEvent).Delegate);
  pvVar2 = *(void **)&(this->ClaimAllClickEvent).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClaimAllClickEvent).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->CraftClickEvent).Delegate);
  pvVar2 = *(void **)&(this->CraftClickEvent).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->CraftClickEvent).Delegate);
  pFVar1 = (this->EntryBindingEventField_CategoryList).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EntryBindingEventField_CraftList).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b68fb70

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

IClassDescriptor * __thiscall
UDS_VM_ItemCraft::GetFieldNotificationDescriptor(UDS_VM_ItemCraft *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_ItemCraft::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6902e0

UClass * __cdecl UDS_VM_ItemCraft::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_ItemCraft.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_ItemCraft",
               &Z_Registration_Info_UClass_UDS_VM_ItemCraft.InnerSingleton,
               StaticRegisterNativesUDS_VM_ItemCraft,0x248,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_ItemCraft>,
               InternalVTableHelperCtorCaller<UDS_VM_ItemCraft>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_ItemCraft.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_ItemCraft @ 14b690fa0

void __cdecl UDS_VM_ItemCraft::StaticRegisterNativesUDS_VM_ItemCraft(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_ItemCraft_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnChangeItemDataSet @ 14b691e50

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_ItemCraft::execOnChangeItemDataSet(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDS_DataSetBase *local_res10;
  
  local_res10 = (UDS_DataSetBase *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnChangeItemDataSet((UDS_VM_ItemCraft *)param_1,local_res10);
  return;
}

// execOnChangeMoneyDataSet @ 14b691f70

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_ItemCraft::execOnChangeMoneyDataSet(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDS_DataSetBase *local_res10;
  
  local_res10 = (UDS_DataSetBase *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnChangeMoneyDataSet((UDS_VM_ItemCraft *)param_1,local_res10);
  return;
}

// execOnChangeWaitCompleteDataSet @ 14b692090

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_ItemCraft::execOnChangeWaitCompleteDataSet(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDS_DataSetBase *local_res10;
  
  local_res10 = (UDS_DataSetBase *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnChangeWaitCompleteDataSet((UDS_VM_ItemCraft *)param_1,local_res10);
  return;
}

// execOnItemCraftEvent @ 14b6921b0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_ItemCraft::execOnItemCraftEvent(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnItemCraftEvent((UDS_VM_ItemCraft *)param_1);
  return;
}

// BindModel @ 14be768c0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_ItemCraft::BindModel(UDS_VM_ItemCraft *this)

{
  UDS_VM_Common_TabGroup *pUVar1;
  code *pcVar2;
  bool bVar3;
  UObject *pUVar4;
  char *pcVar5;
  UDS_ItemCraftEvent *pUVar6;
  UDS_UIEvent *pUVar7;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *this_00;
  FDS_StatusInfo *pFVar8;
  char *pcVar9;
  char *pcVar10;
  EDS_StatusType local_res10 [2];
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  uint uStack_17c;
  FWeakObjectPtr local_178;
  FWeakObjectPtr local_170;
  TObjectPtr<UDS_VM_MoneyGroup>_u_0 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  FName local_158;
  FName local_150;
  FName local_148;
  UDS_VM_Common_TabGroup *local_140;
  code *local_138;
  undefined8 uStack_130;
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  code *local_e8;
  longlong lStack_e0;
  code *local_d8;
  longlong lStack_d0;
  code *local_c8;
  longlong lStack_c0;
  code *local_b8;
  longlong lStack_b0;
  code *local_a8;
  longlong lStack_a0;
  code *local_98;
  longlong lStack_90;
  code *local_88;
  longlong lStack_80;
  code *local_78;
  longlong lStack_70;
  code *local_68;
  TObjectPtr<UDS_VM_ItemCraft_Crafting_Info>_u_0 TStack_60;
  code *local_58;
  TObjectPtr<UDS_VM_WaitCompleteList>_u_0 TStack_50;
  TObjectPtr<UDS_VM_MoneyGroup>_u_0 local_48;
  TObjectPtr<UDS_VM_W_InventoryBag>_u_0 TStack_40;
  
  TDS_DataSetGetter<UDS_MoneyDataSet>::Get((ulong64)&local_res20);
  bVar3 = FWeakObjectPtr::IsValid(&local_res20);
  pcVar9 = &DAT_00000002;
  if (bVar3) {
    pUVar4 = FWeakObjectPtr::Get(&local_res20);
    pcVar5 = strstr("&UDS_VM_ItemCraft::OnChangeMoneyDataSet","::");
    if (pcVar5 == (char *)0x0) {
LAB_14be7697a:
      pcVar10 = &DAT_00000002;
LAB_14be7697d:
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result && Result[2] != \'0\'",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                         ,0x1da,L"\'%hs\' does not look like a member function");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      do {
        pcVar10 = pcVar5;
        pcVar5 = strstr(pcVar10 + 1,"::");
      } while (pcVar5 != (char *)0x0);
      if (pcVar10 == (char *)0x0) goto LAB_14be7697a;
      pcVar10 = pcVar10 + 2;
      if (*pcVar10 == '0') goto LAB_14be7697d;
    }
    ::FName::FName(&local_158,pcVar10);
    lStack_e0 = (ulonglong)uStack_17c << 0x20;
    local_e8 = OnChangeMoneyDataSet;
    TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,UDS_DataSetBase_*>::
    __Internal_AddDynamic<UDS_VM_ItemCraft>
              ((TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,UDS_DataSetBase_*> *)
               (pUVar4 + 1),this,(pmf_455e91c0 *)&local_e8,local_158);
  }
  TDS_DataSetGetter<UDS_ItemDataSet>::Get((ulong64)&local_178);
  bVar3 = FWeakObjectPtr::IsValid(&local_178);
  if (bVar3) {
    pUVar4 = FWeakObjectPtr::Get(&local_178);
    pcVar5 = strstr("&UDS_VM_ItemCraft::OnChangeItemDataSet","::");
    if (pcVar5 == (char *)0x0) {
LAB_14be76a6a:
      pcVar10 = &DAT_00000002;
LAB_14be76a6d:
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result && Result[2] != \'0\'",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                         ,0x1da,L"\'%hs\' does not look like a member function");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      do {
        pcVar10 = pcVar5;
        pcVar5 = strstr(pcVar10 + 1,"::");
      } while (pcVar5 != (char *)0x0);
      if (pcVar10 == (char *)0x0) goto LAB_14be76a6a;
      pcVar10 = pcVar10 + 2;
      if (*pcVar10 == '0') goto LAB_14be76a6d;
    }
    ::FName::FName(&local_150,pcVar10);
    lStack_d0 = (ulonglong)uStack_17c << 0x20;
    local_d8 = OnChangeItemDataSet;
    TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,UDS_DataSetBase_*>::
    __Internal_AddDynamic<UDS_VM_ItemCraft>
              ((TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,UDS_DataSetBase_*> *)
               (pUVar4 + 1),this,(pmf_455e91c0 *)&local_d8,local_150);
  }
  TDS_DataSetGetter<UDS_WaitCompleteDataSet>::Get((ulong64)&local_170);
  bVar3 = FWeakObjectPtr::IsValid(&local_170);
  if (!bVar3) goto LAB_14be76bc5;
  pUVar4 = FWeakObjectPtr::Get(&local_170);
  pcVar5 = strstr("&UDS_VM_ItemCraft::OnChangeWaitCompleteDataSet","::");
  if (pcVar5 == (char *)0x0) {
LAB_14be76b5a:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result && Result[2] != \'0\'",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                       ,0x1da,L"\'%hs\' does not look like a member function");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    do {
      pcVar10 = pcVar5;
      pcVar5 = strstr(pcVar10 + 1,"::");
    } while (pcVar5 != (char *)0x0);
    if ((pcVar10 == (char *)0x0) || (pcVar9 = pcVar10 + 2, pcVar10[2] == '0')) goto LAB_14be76b5a;
  }
  ::FName::FName(&local_148,pcVar9);
  lStack_c0 = (ulonglong)uStack_17c << 0x20;
  local_c8 = OnChangeWaitCompleteDataSet;
  TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,UDS_DataSetBase_*>::
  __Internal_AddDynamic<UDS_VM_ItemCraft>
            ((TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,UDS_DataSetBase_*> *)
             (pUVar4 + 1),this,(pmf_455e91c0 *)&local_c8,local_148);
LAB_14be76bc5:
  lStack_b0 = (ulonglong)uStack_17c << 0x20;
  local_b8 = OnItemCraftEvent;
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddUObject<UDS_VM_ItemCraft>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &FDS_ItemCraftService::ItemCraftDelegate,(UDS_VM_ItemCraft *)local_128,
             (pmf_b654af3c *)this);
  pUVar6 = UDS_ItemCraftEvent::GetEvent();
  if (pUVar6 != (UDS_ItemCraftEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar6->OnChangeCraftManager_ItemCraftListTID,this);
    lStack_a0 = (ulonglong)uStack_17c << 0x20;
    local_a8 = OnChangeCraftManager_ItemCraftListTID;
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_ItemCraft>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar6->OnChangeCraftManager_ItemCraftListTID,(UDS_VM_ItemCraft *)(local_128 + 8),
               (pmf_b654af3c *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar6->OnChangeCraftManager_ItemCraftCategoryType,this);
    lStack_90 = (ulonglong)uStack_17c << 0x20;
    local_98 = OnChangeCraftManager_ItemCraftCategoryType;
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_ItemCraft>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar6->OnChangeCraftManager_ItemCraftCategoryType,(UDS_VM_ItemCraft *)local_118,
               (pmf_b654af3c *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar6->OnChangeCraftManager_ItemCraftListTID_Complete,this);
    lStack_80 = (ulonglong)uStack_17c << 0x20;
    local_88 = OnChangeCraftManager_CompleteEvent;
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_ItemCraft>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar6->OnChangeCraftManager_ItemCraftListTID_Complete,
               (UDS_VM_ItemCraft *)(local_118 + 8),(pmf_b654af3c *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar6->OnChangeCraftManager_ItemCraftQuantity_Complete,this);
    lStack_70 = (ulonglong)uStack_17c << 0x20;
    local_78 = OnChangeCraftManager_CompleteEvent;
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_ItemCraft>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar6->OnChangeCraftManager_ItemCraftQuantity_Complete,
               (UDS_VM_ItemCraft *)local_108,(pmf_b654af3c *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar6->OnChangeCraftManager_MoneyState,this);
    TStack_60.DebugPtr = (UDS_VM_ItemCraft_Crafting_Info *)((ulonglong)uStack_17c << 0x20);
    local_68 = OnChangeCraftManager_CompleteEvent;
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_ItemCraft>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar6->OnChangeCraftManager_MoneyState,(UDS_VM_ItemCraft *)(local_108 + 8),
               (pmf_b654af3c *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar6->OnChangeCraftManager_MaterialState,this);
    TStack_50.DebugPtr = (UDS_VM_WaitCompleteList *)((ulonglong)uStack_17c << 0x20);
    local_58 = OnChangeCraftManager_CompleteEvent;
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_ItemCraft>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar6->OnChangeCraftManager_MaterialState,(UDS_VM_ItemCraft *)&local_168.ObjectPtr,
               (pmf_b654af3c *)this);
  }
  pUVar7 = UDS_UIEvent::GetEvent();
  if (pUVar7 != (UDS_UIEvent *)0x0) {
    pUVar1 = (this->VM_Common_TabGroup).field0_0x0.DebugPtr;
    uStack_15c = uStack_130._4_4_;
    local_168.DebugPtr = (UDS_VM_MoneyGroup *)OnSelectCraftTabEvent;
    uStack_160 = 0;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar1 != (UDS_VM_Common_TabGroup *)0x0) {
        UE::GC::MarkAsReachable((UObject *)pUVar1);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar1 != (UDS_VM_Common_TabGroup *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar1);
      }
    }
    local_res18.ObjectIndex = 0;
    local_res18.ObjectSerialNumber = 0;
    local_140 = pUVar1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 != (UDS_VM_Common_TabGroup *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_140);
    this_00 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
              TMapBase<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>,0>_>
              ::FindOrAddImpl<TWeakObjectPtr<UObject,FWeakObjectPtr>_const_&>
                        ((TMapBase<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>,0>_>
                          *)&(pUVar7->OnSelectedTabIndex).Subscriptions,
                         local_res18.ObjectSerialNumber ^ local_res18.ObjectIndex,
                         (TWeakObjectPtr<UObject,FWeakObjectPtr> *)&local_res18);
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll(this_00,this);
    TStack_40._4_4_ = uStack_15c;
    TStack_40._0_4_ = uStack_160;
    local_48 = local_168;
    TMulticastDelegateRegistration<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>::
    AddUObject<UDS_VM_ItemCraft>
              ((TMulticastDelegateRegistration<void___cdecl(int,int),FDefaultTSDelegateUserPolicy> *
               )this_00,(UDS_VM_ItemCraft *)local_f8,(pmf_31d9ced2 *)this);
  }
  local_res10[0] = WaitCompleteItemCraft;
  pFVar8 = UDS_CharStatusDataUtil::GetCurrentCharStatusInfo(local_res10);
  if (pFVar8 != (FDS_StatusInfo *)0x0) {
    uStack_130 = (ulonglong)uStack_17c << 0x20;
    local_138 = OnChangeStatusMaxValue;
    TMulticastDelegateRegistration<void___cdecl(float),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_ItemCraft>
              ((TMulticastDelegateRegistration<void___cdecl(float),FDefaultDelegateUserPolicy> *)
               &pFVar8->ChangeMaxValueDelegate,(UDS_VM_ItemCraft *)(local_f8 + 8),
               (pmf_da9b7935 *)this);
  }
  return;
}

// InitViewModel @ 14be8ce50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UDS_VM_ItemCraft::InitViewModel(UDS_VM_ItemCraft *this)

{
  UDS_VM_Common_TabGroup *pUVar1;
  UClass *pUVar2;
  UClass *pUVar3;
  UDS_VM_ItemCraft_Crafting_Info *pUVar4;
  UDS_VM_ItemCraft_Crafting_List *pUVar5;
  UDS_VM_WaitCompleteList *pUVar6;
  UDS_VM_MoneyGroup *pUVar7;
  longlong *plVar8;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  if ((this->VM_Common_TabGroup).field0_0x0.DebugPtr == (UDS_VM_Common_TabGroup *)0x0) {
    pUVar1 = UDS_ViewModelBase::CreateViewModel<UDS_VM_Common_TabGroup>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 != (UDS_VM_Common_TabGroup *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    (this->VM_Common_TabGroup).field0_0x0.DebugPtr = pUVar1;
  }
  if ((this->VM_ItemCraft_Crafting_Info).field0_0x0.DebugPtr ==
      (UDS_VM_ItemCraft_Crafting_Info *)0x0) {
    local_b8 = 0;
    pUVar2 = Z_Construct_UClass_UDS_VM_ItemCraft_Crafting_Info_NoRegister();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar3 = Z_Construct_UClass_UDS_VM_ItemCraft_Crafting_Info_NoRegister();
    CheckIsClassChildOf_Internal(pUVar3,pUVar2);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_a8,pUVar2);
    local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_a8._56_8_ = (UPackage *)0x0;
    local_a8._16_4_ = 0;
    local_a8._20_4_ = 0;
    local_a8._24_4_ = RF_Transient;
    local_a8._40_8_ = (UObject *)0x0;
    local_a8[0x20] = false;
    local_a8._8_8_ = this;
    pUVar4 = (UDS_VM_ItemCraft_Crafting_Info *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
    if (local_a8._64_8_ != 0) {
      plVar8 = (longlong *)(local_a8 + 0x50);
      if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
        plVar8 = (longlong *)local_a8._104_8_;
      }
      (**(code **)(*plVar8 + 0x10))();
    }
    if (pUVar4 != (UDS_VM_ItemCraft_Crafting_Info *)0x0) {
      *(undefined1 *)((longlong)&pUVar4->_padding_ + 4) = 0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar4 != (UDS_VM_ItemCraft_Crafting_Info *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->VM_ItemCraft_Crafting_Info).field0_0x0.DebugPtr = pUVar4;
  }
  if ((this->VM_ItemCraft_Crafting_List).field0_0x0.DebugPtr ==
      (UDS_VM_ItemCraft_Crafting_List *)0x0) {
    local_b8 = 0;
    pUVar2 = Z_Construct_UClass_UDS_VM_ItemCraft_Crafting_List_NoRegister();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar3 = Z_Construct_UClass_UDS_VM_ItemCraft_Crafting_List_NoRegister();
    CheckIsClassChildOf_Internal(pUVar3,pUVar2);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_a8,pUVar2);
    local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_a8._56_8_ = (UPackage *)0x0;
    local_a8._16_4_ = 0;
    local_a8._20_4_ = 0;
    local_a8._24_4_ = RF_Transient;
    local_a8._40_8_ = (UObject *)0x0;
    local_a8[0x20] = false;
    local_a8._8_8_ = this;
    pUVar5 = (UDS_VM_ItemCraft_Crafting_List *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
    if (local_a8._64_8_ != 0) {
      plVar8 = (longlong *)(local_a8 + 0x50);
      if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
        plVar8 = (longlong *)local_a8._104_8_;
      }
      (**(code **)(*plVar8 + 0x10))();
    }
    if (pUVar5 != (UDS_VM_ItemCraft_Crafting_List *)0x0) {
      pUVar5->field_0x8c = 0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar5 != (UDS_VM_ItemCraft_Crafting_List *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    (this->VM_ItemCraft_Crafting_List).field0_0x0.DebugPtr = pUVar5;
  }
  if ((this->VM_WaitCompleteList).field0_0x0.DebugPtr == (UDS_VM_WaitCompleteList *)0x0) {
    local_b8 = 0;
    pUVar2 = Z_Construct_UClass_UDS_VM_WaitCompleteList_NoRegister();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar3 = Z_Construct_UClass_UDS_VM_WaitCompleteList_NoRegister();
    CheckIsClassChildOf_Internal(pUVar3,pUVar2);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_a8,pUVar2);
    local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_a8._56_8_ = (UPackage *)0x0;
    local_a8._16_4_ = 0;
    local_a8._20_4_ = 0;
    local_a8._24_4_ = RF_Transient;
    local_a8._40_8_ = (UObject *)0x0;
    local_a8[0x20] = false;
    local_a8._8_8_ = this;
    pUVar6 = (UDS_VM_WaitCompleteList *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
    if (local_a8._64_8_ != 0) {
      plVar8 = (longlong *)(local_a8 + 0x50);
      if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
        plVar8 = (longlong *)local_a8._104_8_;
      }
      (**(code **)(*plVar8 + 0x10))();
    }
    if (pUVar6 != (UDS_VM_WaitCompleteList *)0x0) {
      *(undefined1 *)((longlong)&pUVar6->_padding_ + 4) = 0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar6 != (UDS_VM_WaitCompleteList *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    (this->VM_WaitCompleteList).field0_0x0.DebugPtr = pUVar6;
  }
  if ((this->VM_MoneyGroup).field0_0x0.DebugPtr == (UDS_VM_MoneyGroup *)0x0) {
    local_b8 = 0;
    pUVar2 = Z_Construct_UClass_UDS_VM_MoneyGroup_NoRegister();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar3 = Z_Construct_UClass_UDS_VM_MoneyGroup_NoRegister();
    CheckIsClassChildOf_Internal(pUVar3,pUVar2);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_a8,pUVar2);
    local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_a8._56_8_ = (UPackage *)0x0;
    local_a8._16_4_ = 0;
    local_a8._20_4_ = 0;
    local_a8._24_4_ = RF_Transient;
    local_a8._40_8_ = (UObject *)0x0;
    local_a8[0x20] = false;
    local_a8._8_8_ = this;
    pUVar7 = (UDS_VM_MoneyGroup *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
    if (local_a8._64_8_ != 0) {
      plVar8 = (longlong *)(local_a8 + 0x50);
      if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
        plVar8 = (longlong *)local_a8._104_8_;
      }
      (**(code **)(*plVar8 + 0x10))();
    }
    if (pUVar7 != (UDS_VM_MoneyGroup *)0x0) {
      *(undefined1 *)((longlong)&pUVar7->_padding_ + 4) = 0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UDS_VM_MoneyGroup *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
    }
    (this->VM_MoneyGroup).field0_0x0.DebugPtr = pUVar7;
  }
  return;
}

// OnChangeCraftManager_CompleteEvent @ 14be90460

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_ItemCraft::OnChangeCraftManager_CompleteEvent(UDS_VM_ItemCraft *this)

{
  bool bVar1;
  UDS_CraftManager *pUVar2;
  FName FStack_18;
  int iStack_10;
  
  pUVar2 = UDS_CraftManager::GetInst();
  if ((pUVar2 == (UDS_CraftManager *)0x0) ||
     ((((pUVar2->IsCondition != false && (pUVar2->HasRecipe != false)) &&
       (pUVar2->IsEnoughMaterial == Enough)) && (pUVar2->IsEnoughMoney == Enough)))) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  this->bIsDisableCraftButton = bVar1;
  iStack_10 = FFieldNotificationClassDescriptor::bIsDisableCraftButton.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::bIsDisableCraftButton.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_18);
  return;
}

// OnChangeCraftManager_ItemCraftCategoryType @ 14be90510

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_ItemCraft::OnChangeCraftManager_ItemCraftCategoryType(UDS_VM_ItemCraft *this)

{
  UDS_CraftManager *pUVar1;
  
  pUVar1 = UDS_CraftManager::GetInst();
  if (pUVar1 != (UDS_CraftManager *)0x0) {
    pUVar1->SelectedCraftListTID = 0;
  }
  SetItemCraftList(this);
  return;
}

// OnChangeCraftManager_ItemCraftListTID @ 14be90540

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_ItemCraft::OnChangeCraftManager_ItemCraftListTID(UDS_VM_ItemCraft *this)

{
  UDS_VM_Common_TabGroup *this_00;
  bool bVar1;
  UDS_CraftManager *pUVar2;
  FDS_ItemCraftListTableRow *pFVar3;
  UObject *pUVar4;
  FWeakObjectPtr local_res8;
  
  UpdateMoneyDisplay(this);
  pUVar2 = UDS_CraftManager::GetInst();
  if (pUVar2 != (UDS_CraftManager *)0x0) {
    pUVar2->HasRecipe = true;
    pUVar2->IsCondition = true;
    pFVar3 = FDS_ItemCraftListTableRow::Get((longlong)pUVar2->SelectedCraftListTID,true);
    if ((pFVar3 != (FDS_ItemCraftListTableRow *)0x0) &&
       (pFVar3->RecipeActiveCondition == NpcRelationGrade)) {
      UDS_NpcRelationData::GetData
                ((ulong64)&local_res8,UDS_PlayerData::MainPlayerEntityID,
                 SUB41(this->NPCEntityTableID,0));
      bVar1 = TWeakObjectPtr<UDS_NpcRelationData,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_NpcRelationData,FWeakObjectPtr> *)&local_res8,
                         (void *)0x0);
      if (!bVar1) {
        pUVar4 = FWeakObjectPtr::Get(&local_res8);
        pUVar2->IsCondition = pFVar3->RecipeActiveValue <= *(int *)&pUVar4[3].field_0x14;
      }
    }
  }
  this_00 = (this->VM_Common_TabGroup).field0_0x0.DebugPtr;
  if (this_00 != (UDS_VM_Common_TabGroup *)0x0) {
    UDS_VM_Common_TabGroup::SetSelectedIndex(this_00,0);
  }
  SetbIsDisableCraftButton(this);
  return;
}

// OnChangeItemDataSet @ 14be90a20

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_ItemCraft::OnChangeItemDataSet(UDS_VM_ItemCraft *this,UDS_DataSetBase *param_1)

{
  return;
}

// OnChangeMoneyDataSet @ 14be90b20

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_ItemCraft::OnChangeMoneyDataSet(UDS_VM_ItemCraft *this,UDS_DataSetBase *param_1)

{
  UpdateMoneyDisplay(this);
  SetItemCraftList(this);
  return;
}

// OnChangeStatusMaxValue @ 14be90bf0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_ItemCraft::OnChangeStatusMaxValue(UDS_VM_ItemCraft *this,float param_1)

{
  FInstancedStruct *pFVar1;
  UDS_VM_Common_TabGroup *pUVar2;
  FObjectPtr_u_0 FVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  UDS_WaitCompleteDataSet *this_00;
  FObjectPtr_u_0 *pFVar7;
  FDS_Int32StringFormatArg *pFVar8;
  longlong lVar9;
  EDS_StatusType local_res8 [2];
  FWeakObjectPtr local_res18 [2];
  TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> local_78;
  FDS_Text local_68;
  
  local_res8[0] = WaitCompleteItemCraft;
  iVar5 = UDS_CharStatusDataUtil::GetCurrentCharStatusMaxValueAsInt32(local_res8);
  if ((this->CraftingCountDefault != iVar5) &&
     (pUVar2 = (this->VM_Common_TabGroup).field0_0x0.DebugPtr, this->CraftingCountDefault = iVar5,
     pUVar2 != (UDS_VM_Common_TabGroup *)0x0)) {
    TDS_DataSetGetter<UDS_WaitCompleteDataSet>::Get((ulong64)local_res18);
    bVar4 = FWeakObjectPtr::IsValid(local_res18);
    if (bVar4) {
      this_00 = (UDS_WaitCompleteDataSet *)FWeakObjectPtr::Get(local_res18);
      local_res8[0] = CONCAT31(local_res8[0]._1_3_,1);
      iVar5 = UDS_WaitCompleteDataSet::GetTotalCount(this_00,(EDS_WaitCompleteType *)local_res8);
      local_68.StringTableType = None;
      local_68.StringTableID = 0;
      local_68.StringEnumTableNameID.ComparisonIndex.Value = 0;
      local_68.StringEnumTableNameID.Number = 0;
      local_68.DateTime.Ticks = 0;
      local_68.TimeSpan.Ticks = 0;
      local_68.TimeExpressionType = None;
      local_68.IsExpression = false;
      local_68.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_68.UniqueString.Data.ArrayNum = 0;
      local_68.UniqueString.Data.ArrayMax = 0;
      local_68.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_68.FormatArgs.ArrayNum = 0;
      local_68.FormatArgs.ArrayMax = 0;
      local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_78.ArrayNum = 0;
      local_78.ArrayMax = 0;
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x828,&local_78.AllocatorInstance,&local_78.ArrayMax);
      pFVar1 = (FInstancedStruct *)(local_78.AllocatorInstance.Data + (longlong)iVar6 * 0x28);
      local_78.ArrayNum = iVar6 + 1;
      FInstancedStruct::FInstancedStruct(pFVar1);
      pFVar7 = (FObjectPtr_u_0 *)FNumberFormattingOptions::DefaultWithGrouping();
      FVar3 = pFVar7[1];
      pFVar1[1].ScriptStruct.field0_0x0.ObjectPtr.field0_0x0 = *pFVar7;
      pFVar1[1].StructMemory = (uchar *)FVar3;
      pFVar1[2].ScriptStruct.field0_0x0 = (TObjectPtr<UScriptStruct_const_>_u_0)pFVar7[2];
      FInstancedStruct::InitializeAs<FDS_Int32StringFormatArg>(pFVar1);
      pFVar8 = FInstancedStruct::GetMutablePtr<FDS_Int32StringFormatArg>(pFVar1);
      if (pFVar8 != (FDS_Int32StringFormatArg *)0x0) {
        pFVar8->Value = iVar5;
      }
      if (local_78.ArrayNum == local_78.ArrayMax) {
        local_78.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x828,&local_78.AllocatorInstance,&local_78.ArrayMax);
      }
      lVar9 = (longlong)local_78.ArrayNum;
      local_78.ArrayNum = local_78.ArrayNum + 1;
      pFVar1 = (FInstancedStruct *)(local_78.AllocatorInstance.Data + lVar9 * 0x28);
      FInstancedStruct::FInstancedStruct(pFVar1);
      pFVar7 = (FObjectPtr_u_0 *)FNumberFormattingOptions::DefaultWithGrouping();
      FVar3 = pFVar7[1];
      pFVar1[1].ScriptStruct.field0_0x0.ObjectPtr.field0_0x0 = *pFVar7;
      pFVar1[1].StructMemory = (uchar *)FVar3;
      pFVar1[2].ScriptStruct.field0_0x0 = (TObjectPtr<UScriptStruct_const_>_u_0)pFVar7[2];
      FInstancedStruct::InitializeAs<FDS_Int32StringFormatArg>(pFVar1);
      pFVar8 = FInstancedStruct::GetMutablePtr<FDS_Int32StringFormatArg>(pFVar1);
      if (pFVar8 != (FDS_Int32StringFormatArg *)0x0) {
        pFVar8->Value = this->CraftingCountDefault;
      }
      FDS_Text::SetTextFormatFromStringTable(&local_68,StringUi,0x1870a,&local_78);
      DestructItems<FDS_TextFormatArg,int>
                ((FDS_TextFormatArg *)local_78.AllocatorInstance.Data,local_78.ArrayNum);
      if ((FDS_TextFormatArg *)local_78.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0) {
        FMemory::Free(local_78.AllocatorInstance.Data);
      }
      UDS_VM_Common_TabGroup::SetTabText((this->VM_Common_TabGroup).field0_0x0.DebugPtr,1,&local_68)
      ;
      DestructItems<FDS_TextFormatArg,int>
                ((FDS_TextFormatArg *)local_68.FormatArgs.AllocatorInstance.Data,
                 local_68.FormatArgs.ArrayNum);
      if ((FDS_TextFormatArg *)local_68.FormatArgs.AllocatorInstance.Data !=
          (FDS_TextFormatArg *)0x0) {
        FMemory::Free(local_68.FormatArgs.AllocatorInstance.Data);
      }
      if (local_68.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.UniqueString.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// OnChangeWaitCompleteDataSet @ 14be90e10

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_ItemCraft::OnChangeWaitCompleteDataSet(UDS_VM_ItemCraft *this,UDS_DataSetBase *param_1)

{
  bool bVar1;
  int iVar2;
  UDS_WaitCompleteDataSet *pUVar3;
  EDS_WaitCompleteType local_res8 [8];
  int local_res18 [2];
  FWeakObjectPtr local_res20;
  FDS_Text local_58;
  
  if ((this->VM_Common_TabGroup).field0_0x0.DebugPtr != (UDS_VM_Common_TabGroup *)0x0) {
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
    TDS_DataSetGetter<UDS_WaitCompleteDataSet>::Get((ulong64)&local_res20);
    bVar1 = FWeakObjectPtr::IsValid(&local_res20);
    if (bVar1) {
      pUVar3 = (UDS_WaitCompleteDataSet *)FWeakObjectPtr::Get(&local_res20);
      local_res8[0] = ItemCraft;
      local_res18[0] = UDS_WaitCompleteDataSet::GetTotalCount(pUVar3,local_res8);
      FDS_Text::SetTextFormatFromStringTable<int,int_&>
                (&local_58,StringUi,0x1870a,local_res18,&this->CraftingCountDefault);
      pUVar3 = (UDS_WaitCompleteDataSet *)FWeakObjectPtr::Get(&local_res20);
      local_res8[0] = ItemCraft;
      iVar2 = UDS_WaitCompleteDataSet::GetTotalCount(pUVar3,local_res8);
      if (iVar2 == 0) {
        UDS_VM_Common_TabGroup::SetIsReddot((this->VM_Common_TabGroup).field0_0x0.DebugPtr,1,false);
      }
    }
    UDS_VM_Common_TabGroup::SetTabText((this->VM_Common_TabGroup).field0_0x0.DebugPtr,1,&local_58);
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data,
               local_58.FormatArgs.ArrayNum);
    if ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0)
    {
      FMemory::Free(local_58.FormatArgs.AllocatorInstance.Data);
    }
    if (local_58.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.UniqueString.Data.AllocatorInstance.Data);
    }
  }
  if (this->SelectedCraftTab == Crafting) {
    SetCraftingItem(this);
  }
  return;
}

// OnClaimAllClickEvent @ 14be93320

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_ItemCraft::OnClaimAllClickEvent(UDS_VM_ItemCraft *this,FDS_ButtonEventField *param_1)

{
  FWeakObjectPtr *pFVar1;
  bool bVar2;
  int iVar3;
  UDS_WaitCompleteDataSet *this_00;
  UDS_WaitCompleteData *this_01;
  UObject *pUVar4;
  int iVar5;
  ForAnyElementType this_02;
  EDS_WaitCompleteType local_res18 [8];
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_58;
  TArray<__int64,TSizedDefaultAllocator<32>_> local_50;
  TArray<TWeakObjectPtr<UDS_WaitCompleteData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_40;
  
  TDS_DataSetGetter<UDS_WaitCompleteDataSet>::Get((ulong64)&local_res20);
  bVar2 = FWeakObjectPtr::IsValid(&local_res20);
  if (bVar2) {
    UDS_PlayerData::GetMainPlayerData();
    bVar2 = FWeakObjectPtr::IsValid(&local_58);
    if (bVar2) {
      local_50.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_50.ArrayNum = 0;
      local_50.ArrayMax = 0;
      this_00 = (UDS_WaitCompleteDataSet *)FWeakObjectPtr::Get(&local_res20);
      local_res18[0] = ItemCraft;
      UDS_WaitCompleteDataSet::GetAllData(this_00,&local_40,local_res18);
      iVar5 = local_40.ArrayNum;
      pFVar1 = (FWeakObjectPtr *)(local_40.AllocatorInstance.Data + (longlong)iVar5 * 8);
      this_02.Data = local_40.AllocatorInstance.Data;
      while( true ) {
        if (local_40.ArrayNum != iVar5) {
          `TCheckedPointerIterator<TWeakObjectPtr<UDS_WaitCompleteData,FWeakObjectPtr>,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_res18);
        }
        if ((FWeakObjectPtr *)this_02.Data == pFVar1) break;
        this_01 = (UDS_WaitCompleteData *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_02.Data);
        bVar2 = UDS_WaitCompleteData::IsComplete(this_01);
        if (bVar2) {
          pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_02.Data);
          iVar3 = local_50.ArrayNum;
          if (local_50.ArrayNum == local_50.ArrayMax) {
            iVar3 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&local_50.AllocatorInstance,&local_50.ArrayMax);
          }
          local_50.ArrayNum = iVar3 + 1;
          *(undefined8 *)(local_50.AllocatorInstance.Data + (longlong)iVar3 * 8) =
               *(undefined8 *)&pUVar4[2].field_0x10;
        }
        this_02.Data = this_02.Data + 8;
      }
      if ((FWeakObjectPtr *)local_40.AllocatorInstance.Data != (FWeakObjectPtr *)0x0) {
        FMemory::Free(local_40.AllocatorInstance.Data);
      }
      if (0 < local_50.ArrayNum) {
        pUVar4 = FWeakObjectPtr::Get(&local_58);
        FDS_ItemCraftService::SendItemCraftComplete
                  (this->NPCEntityID,&local_50,*(int *)&pUVar4[9].field_0x10);
      }
      if (local_50.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// OnCloseInit @ 14be97640

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_ItemCraft::OnCloseInit(UDS_VM_ItemCraft *this)

{
  UDS_CraftManager *pUVar1;
  
  UDS_ViewModelBase::OnCloseInit((UDS_ViewModelBase *)this);
  pUVar1 = UDS_CraftManager::GetInst();
  if (pUVar1 != (UDS_CraftManager *)0x0) {
    pUVar1->SelectedCraftListTID = 0;
  }
  return;
}

// OnCraftCategoryLeftEvent @ 14be977a0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_ItemCraft::OnCraftCategoryLeftEvent(UDS_VM_ItemCraft *this,FDS_ButtonEventField *param_1)

{
  FScriptContainerElement FVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  UDS_CraftManager *pUVar6;
  UDS_ItemCraftEvent *pUVar7;
  ForAnyElementType FVar8;
  uint uVar9;
  FScriptContainerElement FVar10;
  int iVar11;
  longlong lVar12;
  FScriptContainerElement local_res18 [16];
  TArray<EDS_CraftCategoryType,TSizedDefaultAllocator<32>_> local_38;
  
  pUVar6 = UDS_CraftManager::GetInst();
  if ((pUVar6 != (UDS_CraftManager *)0x0) &&
     (pUVar7 = UDS_ItemCraftEvent::GetEvent(), pUVar7 != (UDS_ItemCraftEvent *)0x0)) {
    FVar10 = (FScriptContainerElement)pUVar6->SelectedCraftCategoryType;
    bVar3 = false;
    FDS_ItemCraftListTableRow::GetCategoryList(&local_38,&this->CraftGroupID);
    uVar9 = local_38.ArrayNum - 1;
    FVar8.Data = local_38.AllocatorInstance.Data;
    if (-1 < (int)uVar9) {
      lVar12 = (longlong)(int)uVar9;
      iVar11 = local_38.ArrayNum;
      do {
        uVar5 = 0;
        if ((int)uVar9 < iVar11) {
          uVar5 = ~uVar9 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , FVar8.Data = local_38.AllocatorInstance.Data, iVar11 = local_38.ArrayNum, bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        FVar1 = FVar8.Data[lVar12];
        if (bVar3) {
          FVar10 = FVar1;
          if (FVar8.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FVar8.Data);
          }
          goto LAB_14be978a0;
        }
        if (FVar1 == FVar10) {
          bVar3 = true;
        }
        lVar12 = lVar12 + -1;
        uVar9 = uVar9 - 1;
      } while (-1 < (int)uVar9);
    }
    if (FVar8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar8.Data);
    }
LAB_14be978a0:
    local_res18[0] = FVar10;
    FDS_EventDelegate<enum_EDS_CraftCategoryType_const_&>::Broadcast
              (&pUVar7->OnSelectCraftCategoryEvent,(EDS_CraftCategoryType *)local_res18);
  }
  return;
}

// OnCraftCategoryRightEvent @ 14be978f0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_ItemCraft::OnCraftCategoryRightEvent(UDS_VM_ItemCraft *this,FDS_ButtonEventField *param_1)

{
  FScriptContainerElement FVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  UDS_CraftManager *pUVar6;
  UDS_ItemCraftEvent *pUVar7;
  ForAnyElementType FVar8;
  uint uVar9;
  FScriptContainerElement FVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  FScriptContainerElement local_res18 [8];
  TArray<EDS_CraftCategoryType,TSizedDefaultAllocator<32>_> local_38;
  
  pUVar6 = UDS_CraftManager::GetInst();
  if ((pUVar6 != (UDS_CraftManager *)0x0) &&
     (pUVar7 = UDS_ItemCraftEvent::GetEvent(), pUVar7 != (UDS_ItemCraftEvent *)0x0)) {
    FVar10 = (FScriptContainerElement)pUVar6->SelectedCraftCategoryType;
    bVar3 = false;
    FDS_ItemCraftListTableRow::GetCategoryList(&local_38,&this->CraftGroupID);
    uVar11 = (ulonglong)local_38.ArrayNum;
    uVar9 = 0;
    FVar8.Data = local_38.AllocatorInstance.Data;
    if (0 < local_38.ArrayNum) {
      lVar13 = 0;
      uVar12 = uVar11;
      do {
        uVar5 = 0;
        if ((int)uVar9 < (int)uVar12) {
          uVar5 = ~uVar9 >> 0x1f;
        }
        if (uVar5 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          uVar12 = (ulonglong)(uint)local_38.ArrayNum;
          FVar8.Data = local_38.AllocatorInstance.Data;
        }
        FVar1 = FVar8.Data[lVar13];
        if (bVar3) {
          FVar10 = FVar1;
          if (FVar8.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FVar8.Data);
          }
          goto LAB_14be97a01;
        }
        if (FVar1 == FVar10) {
          bVar3 = true;
        }
        uVar9 = uVar9 + 1;
        lVar13 = lVar13 + 1;
      } while (lVar13 < (longlong)uVar11);
    }
    if (FVar8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar8.Data);
    }
LAB_14be97a01:
    local_res18[0] = FVar10;
    FDS_EventDelegate<enum_EDS_CraftCategoryType_const_&>::Broadcast
              (&pUVar7->OnSelectCraftCategoryEvent,(EDS_CraftCategoryType *)local_res18);
  }
  return;
}

// OnCraftClickEvent @ 14be97a60

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_ItemCraft::OnCraftClickEvent(UDS_VM_ItemCraft *this,FDS_ButtonEventField *param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  UDS_CraftManager *pUVar4;
  UDS_WaitCompleteDataSet *this_00;
  UObject *pUVar5;
  EDS_WaitCompleteType local_res18 [8];
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_38;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_30;
  
  pUVar4 = UDS_CraftManager::GetInst();
  if (pUVar4 != (UDS_CraftManager *)0x0) {
    TDS_DataSetGetter<UDS_WaitCompleteDataSet>::Get((ulong64)&local_res20);
    bVar2 = FWeakObjectPtr::IsValid(&local_res20);
    if (bVar2) {
      UDS_PlayerData::GetMainPlayerData();
      bVar2 = FWeakObjectPtr::IsValid(&local_38);
      if (bVar2) {
        if (pUVar4->IsCondition == false) {
          local_30._0_8_ = 0;
          local_30._8_8_ = 0;
          local_30._16_4_ = 0;
          UDS_UIMessageManager::OpenMsgByStringUi(0x18898,Alert_None_01,&local_30);
          return;
        }
        if (pUVar4->HasRecipe == false) {
          local_30._0_8_ = 0;
          local_30._8_8_ = 0;
          local_30._16_4_ = 0;
          UDS_UIMessageManager::OpenMsgByStringUi(0x18899,Alert_None_01,&local_30);
          return;
        }
        if (pUVar4->IsEnoughMaterial != Enough) {
          local_30._0_8_ = 0;
          local_30._8_8_ = 0;
          local_30._16_4_ = 0;
          UDS_UIMessageManager::OpenMsgByStringUi(0x18895,Alert_None_01,&local_30);
          return;
        }
        if (pUVar4->IsEnoughMoney != Enough) {
          local_30._0_8_ = 0;
          local_30._8_8_ = 0;
          local_30._16_4_ = 0;
          UDS_UIMessageManager::OpenMsgByStringUi(0x18896,Alert_None_01,&local_30);
          return;
        }
        this_00 = (UDS_WaitCompleteDataSet *)FWeakObjectPtr::Get(&local_res20);
        iVar1 = this->CraftingCountDefault;
        local_res18[0] = ItemCraft;
        iVar3 = UDS_WaitCompleteDataSet::GetTotalCount(this_00,local_res18);
        if (iVar1 <= iVar3) {
          local_30._0_8_ = 0;
          local_30._8_8_ = 0;
          local_30._16_4_ = 0;
          UDS_UIMessageManager::OpenMsgByStringUi(0x18897,Alert_None_01,&local_30);
          return;
        }
        pUVar5 = FWeakObjectPtr::Get(&local_38);
        FDS_ItemCraftService::SendItemCraft
                  (this->NPCEntityID,this->CraftBaseID,pUVar4->SelectedCraftListTID,
                   pUVar4->CraftQuantity,*(int *)&pUVar5[9].field_0x10);
      }
    }
  }
  return;
}

// OnItemCraftEvent @ 14be99940

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_ItemCraft::OnItemCraftEvent(UDS_VM_ItemCraft *this)

{
  UDS_VM_Common_TabGroup *this_00;
  
  this->SelectedCraftTab = Crafting;
  SetCraftingItem(this);
  this_00 = (this->VM_Common_TabGroup).field0_0x0.DebugPtr;
  if (this_00 != (UDS_VM_Common_TabGroup *)0x0) {
    UDS_VM_Common_TabGroup::SetSelectedIndex(this_00,1);
    UDS_VM_Common_TabGroup::SetIsReddot((this->VM_Common_TabGroup).field0_0x0.DebugPtr,1,true);
    return;
  }
  return;
}

// OnSelectCraftTabEvent @ 14be9c600

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_ItemCraft::OnSelectCraftTabEvent(UDS_VM_ItemCraft *this,int param_1,int param_2)

{
  UDS_VM_ItemCraft_Crafting_List *this_00;
  code *pcVar1;
  bool bVar2;
  FDS_ViewModelContext *pFVar3;
  UScriptStruct *pUVar4;
  UDS_ViewModelContextManager *this_01;
  FDS_ViewModelContext *pFVar5;
  FDS_ViewModelContext *pFVar6;
  TSharedPtr<FDS_ViewModelContext,1> TStack_28;
  TSharedPtr<FDS_ViewModelContext,1> TStack_18;
  
  this->SelectedCraftTab = (EDS_CraftTab)param_1;
  if ((EDS_CraftTab)param_1 != Crafting) {
    return;
  }
  if ((this->VM_ItemCraft_Crafting_List).field0_0x0.DebugPtr !=
      (UDS_VM_ItemCraft_Crafting_List *)0x0) {
    pFVar3 = ::operator_new(0x30);
    pFVar6 = (FDS_ViewModelContext *)0x0;
    pFVar5 = pFVar6;
    if (pFVar3 != (FDS_ViewModelContext *)0x0) {
      *(undefined8 *)&pFVar3->field_0x1c = 0;
      *(undefined8 *)((longlong)&pFVar3[1]._padding_ + 4) = 0;
      ((atomic<int> *)&pFVar3[1].DerivedStaticStruct)[1] = (atomic<int>)0x0;
      *(undefined8 *)&pFVar3->DerivedStaticStruct = 0;
      (pFVar3->ViewModelName).ComparisonIndex = 0;
      (pFVar3->ViewModelName).Number = 0;
      pFVar3->ViewModelTemplateKey = None;
      pFVar3->_padding_ = (longlong)&___7FDS_ViewModelContext_ItemCrafting_List__6B_;
      pFVar5 = pFVar3;
    }
    pFVar3 = ::operator_new(0x20);
    if (pFVar3 != (FDS_ViewModelContext *)0x0) {
      *(atomic<int> *)&pFVar3->DerivedStaticStruct = (atomic<int>)0x1;
      *(code **)&(pFVar3->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
      pFVar3->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_ItemCrafting_List__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
      ;
      ((atomic<int> *)&pFVar3->DerivedStaticStruct)[1] = (atomic<int>)0x1;
      *(FDS_ViewModelContext **)&pFVar3->ViewModelTemplateKey = pFVar5;
      pFVar6 = pFVar3;
    }
    if ((pFVar5 == (FDS_ViewModelContext *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pUVar4 = FDS_ViewModelContext_ItemCrafting_List::StaticStruct();
    *(UScriptStruct **)&pFVar5->DerivedStaticStruct = pUVar4;
    this_01 = UDS_ViewModelContextManager::GetInst();
    if (this_01 != (UDS_ViewModelContextManager *)0x0) {
      if (pFVar6 != (FDS_ViewModelContext *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar6->DerivedStaticStruct =
             (atomic<int>)((int)*(atomic<int> *)&pFVar6->DerivedStaticStruct + 1);
        UNLOCK();
      }
      TStack_28.Object = pFVar5;
      TStack_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar6;
      UDS_ViewModelContextManager::RegisterContext(this_01,&TStack_28);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (TStack_28.SharedReferenceCount.ReferenceController);
    }
    pFVar5->ViewModelTemplateKey = ItemCraft_Crafting_List;
    pFVar5[1]._padding_ = this->NPCEntityID;
    *(longlong *)&pFVar5[1].DerivedStaticStruct = (longlong)this->CraftBaseID;
    this_00 = (this->VM_ItemCraft_Crafting_List).field0_0x0.DebugPtr;
    if (pFVar6 != (FDS_ViewModelContext *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar6->DerivedStaticStruct =
           (atomic<int>)((int)*(atomic<int> *)&pFVar6->DerivedStaticStruct + 1);
      UNLOCK();
    }
    TStack_18.Object = pFVar5;
    TStack_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar6;
    UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_00,&TStack_18);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar6);
  }
  return;
}

// OnSetViewModel @ 14bea2a10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UDS_VM_ItemCraft::OnSetViewModel(UDS_VM_ItemCraft *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int *piVar1;
  TReferenceControllerBase<1> *pTVar2;
  UDS_VM_ItemCraft_Crafting_Info *this_00;
  UDS_VM_Common_TabGroup *this_01;
  code *pcVar3;
  ForAnyElementType FVar4;
  FDS_ViewModelContext_TabGroup *pFVar5;
  bool bVar6;
  int iVar7;
  FDS_ItemCraftBaseTableRow *pFVar8;
  UDS_LogManager *pUVar9;
  UObject *pUVar10;
  UObject *pUVar11;
  UScriptStruct *pUVar12;
  UDS_ViewModelContextManager *this_02;
  UDS_WaitCompleteDataSet *this_03;
  UObject *pUVar13;
  UClass *pUVar14;
  UDS_M_WaitCompleteList *this_04;
  longlong *plVar15;
  FScriptContainerElement *pFVar16;
  UObject *pUVar17;
  FDS_ViewModelContext_ItemCraft *pFVar18;
  longlong lVar19;
  undefined1 auStackY_408 [32];
  EDS_WaitCompleteType local_3c8 [8];
  undefined8 local_3c0;
  FScriptContainerElement local_3b8;
  long64 local_3b0;
  FName local_3a8;
  long64 local_3a0;
  long64 local_398;
  EDS_TimeExpression local_390;
  FScriptContainerElement local_38c;
  ForAnyElementType local_388;
  undefined8 local_380;
  ForAnyElementType local_378;
  undefined8 local_370;
  undefined2 local_368;
  FScriptContainerElement local_366;
  EDS_StatusType local_360;
  int local_35c;
  FWeakObjectPtr local_358;
  TSharedPtr<FDS_ViewModelContext_ItemCraft,1> local_350;
  FWeakObjectPtr local_340;
  FDS_Text local_338;
  UObject *local_2e8;
  TSharedPtr<FDS_ViewModelContext,1> local_2e0;
  TSharedPtr<FDS_ViewModelContext_TabGroup,1> local_2c8;
  FDS_Text local_2b8;
  FDS_Text local_268;
  TSharedPtr<FDS_ViewModelContext,1> local_218;
  TSharedPtr<FDS_ViewModelContext,1> local_208;
  TSharedPtr<FDS_ViewModelContext,1> local_1f8;
  undefined1 local_1e8 [128];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_408;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  local_218.Object = param_1->Object;
  local_218.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_218.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_218.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_218.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_ItemCraft>(&local_350,&local_218);
  pFVar18 = local_350.Object;
  if (local_350.Object == (FDS_ViewModelContext_ItemCraft *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_350.SharedReferenceCount.ReferenceController);
    goto LAB_14bea3324;
  }
  this->NPCEntityID = (local_350.Object)->NPCEntityID;
  this->CraftBaseID = (local_350.Object)->NPCFunctionValue;
  this->NPCEntityTableID = (local_350.Object)->NPCEntityTableID;
  local_360 = WaitCompleteItemCraft;
  iVar7 = UDS_CharStatusDataUtil::GetCurrentCharStatusMaxValueAsInt32(&local_360);
  this->CraftingCountDefault = iVar7;
  this->SelectedCraftTab = Craft;
  pFVar8 = FDS_ItemCraftBaseTableRow::Get((longlong)this->CraftBaseID,true);
  pUVar17 = (UObject *)0x0;
  if (pFVar8 == (FDS_ItemCraftBaseTableRow *)0x0) {
    pUVar9 = UDS_LogManager::GetInst();
    if (pUVar9 != (UDS_LogManager *)0x0) {
      pUVar9 = UDS_LogManager::GetInst();
      local_168._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_168,"UDS_VM_ItemCraft::SetItemCraft",0x1e,Yes);
      UDS_LogManager::PrintLog
                (pUVar9,1,Warning,local_168.Ptr,0x156,
                 L"FDS_ItemCraftBaseTableRow is nullptr   ID - %d");
      if ((void *)local_168._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_168._padding_);
      }
    }
  }
  else {
    this->CraftGroupID = pFVar8->ID_ItemCraftGroup;
    SetCategory(this);
    SetItemCraftList(this);
  }
  SetInventory(this);
  UpdateMoneyDisplay(this);
  if ((this->VM_ItemCraft_Crafting_Info).field0_0x0.DebugPtr !=
      (UDS_VM_ItemCraft_Crafting_Info *)0x0) {
    pUVar10 = ::operator_new(0x28);
    pUVar13 = pUVar17;
    if (pUVar10 != (UObject *)0x0) {
      *(undefined8 *)&pUVar10->field_0x1c = 0;
      *(undefined4 *)&pUVar10->field_0x24 = 0;
      *(undefined8 *)&pUVar10->field_0x8 = 0;
      *(undefined8 *)&pUVar10->field_0x10 = 0;
      *(undefined4 *)&pUVar10->field_0x18 = 0;
      *(undefined ***)pUVar10 = &___7FDS_ViewModelContext_ItemCrafting_Info__6B_;
      pUVar13 = pUVar10;
      pFVar18 = local_350.Object;
    }
    pUVar11 = ::operator_new(0x20);
    pUVar10 = pUVar17;
    if (pUVar11 != (UObject *)0x0) {
      *(atomic<int> *)&pUVar11->field_0x8 = (atomic<int>)0x1;
      *(code **)&pUVar11->field_0x10 = ViewModelContextDeleter;
      *(undefined ***)pUVar11 =
           &
           ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_ItemCrafting_Info__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
      ;
      *(atomic<int> *)&pUVar11->field_0xc = (atomic<int>)0x1;
      *(UObject **)&pUVar11->field_0x18 = pUVar13;
      pUVar10 = pUVar11;
    }
    if ((pUVar13 == (UObject *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pUVar12 = FDS_ViewModelContext_ItemCrafting_Info::StaticStruct();
    *(UScriptStruct **)&pUVar13->field_0x8 = pUVar12;
    this_02 = UDS_ViewModelContextManager::GetInst();
    if (this_02 != (UDS_ViewModelContextManager *)0x0) {
      if (pUVar10 != (UObject *)0x0) {
        LOCK();
        *(atomic<int> *)&pUVar10->field_0x8 =
             (atomic<int>)((int)*(atomic<int> *)&pUVar10->field_0x8 + 1);
        UNLOCK();
      }
      local_2e0.Object = (FDS_ViewModelContext *)pUVar13;
      local_2e0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pUVar10;
      UDS_ViewModelContextManager::RegisterContext(this_02,&local_2e0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_2e0.SharedReferenceCount.ReferenceController);
    }
    *(undefined4 *)&pUVar13->field_0x18 = 0x13c;
    if ((pFVar18 == (FDS_ViewModelContext_ItemCraft *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    *(longlong *)&pUVar13->field_0x20 = (longlong)pFVar18->NPCFunctionValue;
    this_00 = (this->VM_ItemCraft_Crafting_Info).field0_0x0.DebugPtr;
    if (pUVar10 != (UObject *)0x0) {
      LOCK();
      *(atomic<int> *)&pUVar10->field_0x8 =
           (atomic<int>)((int)*(atomic<int> *)&pUVar10->field_0x8 + 1);
      UNLOCK();
    }
    local_208.Object = (FDS_ViewModelContext *)pUVar13;
    local_208.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pUVar10;
    UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_00,&local_208);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pUVar10);
  }
  if ((this->VM_Common_TabGroup).field0_0x0.DebugPtr != (UDS_VM_Common_TabGroup *)0x0) {
    local_338.StringTableType = None;
    local_338.StringTableID = 0;
    local_338.StringEnumTableNameID.ComparisonIndex.Value = 0;
    local_338.StringEnumTableNameID.Number = 0;
    local_338.DateTime.Ticks = 0;
    local_338.TimeSpan.Ticks = 0;
    local_338.TimeExpressionType = None;
    local_338.IsExpression = false;
    local_338.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_338.UniqueString.Data.ArrayNum = 0;
    local_338.UniqueString.Data.ArrayMax = 0;
    local_338.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_338.FormatArgs.ArrayNum = 0;
    local_338.FormatArgs.ArrayMax = 0;
    TDS_DataSetGetter<UDS_WaitCompleteDataSet>::Get((ulong64)&local_340);
    bVar6 = FWeakObjectPtr::IsValid(&local_340);
    if (bVar6) {
      this_03 = (UDS_WaitCompleteDataSet *)FWeakObjectPtr::Get(&local_340);
      local_3c8[0] = ItemCraft;
      local_35c = UDS_WaitCompleteDataSet::GetTotalCount(this_03,local_3c8);
      FDS_Text::SetTextFormatFromStringTable<int,int_&>
                (&local_338,StringUi,0x1870a,&local_35c,&this->CraftingCountDefault);
    }
    MakeContext<FDS_ViewModelContext_TabGroup>(&local_2c8);
    pFVar5 = local_2c8.Object;
    if ((local_2c8.Object == (FDS_ViewModelContext_TabGroup *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    *(undefined4 *)&pFVar5->_padding_ = 0x162;
    pFVar5->SelectedIndex = 0;
    local_2b8.StringTableType = None;
    local_2b8.StringTableID = 0;
    local_2b8.DateTime.Ticks = 0;
    local_2b8.TimeSpan.Ticks = 0;
    local_2b8.StringEnumTableNameID.ComparisonIndex.Value = 0;
    local_2b8.StringEnumTableNameID.Number = 0;
    local_2b8.TimeExpressionType = None;
    local_2b8.IsExpression = false;
    local_2b8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2b8.UniqueString.Data.ArrayNum = 0;
    local_2b8.UniqueString.Data.ArrayMax = 0;
    local_2b8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2b8.FormatArgs.ArrayNum = 0;
    local_2b8.FormatArgs.ArrayMax = 0;
    FDS_Text::SetTextFromStringTable(&local_2b8,StringUi,0x18709);
    iVar7 = (pFVar5->TabInfos).ArrayNum;
    piVar1 = &(pFVar5->TabInfos).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x860,&(pFVar5->TabInfos).AllocatorInstance,piVar1);
    }
    (pFVar5->TabInfos).ArrayNum = iVar7 + 1;
    FDS_TabInfo::FDS_TabInfo
              ((FDS_TabInfo *)((pFVar5->TabInfos).AllocatorInstance.Data + (longlong)iVar7 * 0x60),
               &local_2b8);
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)local_2b8.FormatArgs.AllocatorInstance.Data,
               local_2b8.FormatArgs.ArrayNum);
    if ((FDS_TextFormatArg *)local_2b8.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0
       ) {
      FMemory::Free(local_2b8.FormatArgs.AllocatorInstance.Data);
    }
    if (local_2b8.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2b8.UniqueString.Data.AllocatorInstance.Data);
    }
    FVar4.Data = local_338.UniqueString.Data.AllocatorInstance.Data;
    lVar19 = (longlong)local_338.UniqueString.Data.ArrayNum;
    local_3b8 = (FScriptContainerElement)local_338.StringTableType;
    local_3b0 = local_338.StringTableID;
    local_3a8 = local_338.StringEnumTableNameID;
    local_3a0 = local_338.DateTime.Ticks;
    local_398 = local_338.TimeSpan.Ticks;
    local_390 = local_338.TimeExpressionType;
    local_38c = (FScriptContainerElement)local_338.IsExpression;
    local_3c0 = 0xffffffffffffffff;
    local_388.Data = (FScriptContainerElement *)0x0;
    local_380 = CONCAT44(local_380._4_4_,local_338.UniqueString.Data.ArrayNum);
    if (local_338.UniqueString.Data.ArrayNum == 0) {
      local_380 = local_338.UniqueString.Data._8_8_ & 0xffffffff;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_338.UniqueString.Data.ArrayNum,0,&local_388,
                 local_338.UniqueString.Data.ArrayNum,(int *)((longlong)&local_380 + 4));
      memcpy(local_388.Data,FVar4.Data,lVar19 * 2);
    }
    FVar4.Data = local_338.FormatArgs.AllocatorInstance.Data;
    iVar7 = local_338.FormatArgs.ArrayNum;
    local_378.Data = (FScriptContainerElement *)0x0;
    local_370 = CONCAT44(local_370._4_4_,local_338.FormatArgs.ArrayNum);
    if (local_338.FormatArgs.ArrayNum == 0) {
      local_370 = local_338.FormatArgs._8_8_ & 0xffffffff;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,local_338.FormatArgs.ArrayNum,0,&local_378,local_338.FormatArgs.ArrayNum,
                 (int *)((longlong)&local_370 + 4));
      ConstructItems<FDS_TextFormatArg,FDS_TextFormatArg,int>
                (local_378.Data,(FDS_TextFormatArg *)FVar4.Data,iVar7);
    }
    local_368 = 0;
    local_366 = (FScriptContainerElement)0x0;
    iVar7 = (pFVar5->TabInfos).ArrayNum;
    if (iVar7 == (pFVar5->TabInfos).ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x860,&(pFVar5->TabInfos).AllocatorInstance,&(pFVar5->TabInfos).ArrayMax);
    }
    (pFVar5->TabInfos).ArrayNum = iVar7 + 1;
    pFVar16 = (pFVar5->TabInfos).AllocatorInstance.Data + (longlong)iVar7 * 0x60;
    *(undefined4 *)pFVar16 = (undefined4)local_3c0;
    *(undefined4 *)(pFVar16 + 4) = local_3c0._4_4_;
    pFVar16[8] = local_3b8;
    *(long64 *)(pFVar16 + 0x10) = local_3b0;
    *(FName *)(pFVar16 + 0x18) = local_3a8;
    *(long64 *)(pFVar16 + 0x20) = local_3a0;
    *(long64 *)(pFVar16 + 0x28) = local_398;
    *(EDS_TimeExpression *)(pFVar16 + 0x30) = local_390;
    pFVar16[0x34] = local_38c;
    *(undefined8 *)(pFVar16 + 0x38) = 0;
    *(FScriptContainerElement **)(pFVar16 + 0x38) = local_388.Data;
    local_388.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)(pFVar16 + 0x40) = (undefined4)local_380;
    *(undefined4 *)(pFVar16 + 0x44) = local_380._4_4_;
    local_380 = 0;
    *(undefined8 *)(pFVar16 + 0x48) = 0;
    *(FScriptContainerElement **)(pFVar16 + 0x48) = local_378.Data;
    local_378.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)(pFVar16 + 0x50) = (undefined4)local_370;
    *(undefined4 *)(pFVar16 + 0x54) = local_370._4_4_;
    local_370 = 0;
    pFVar16[0x58] = local_368._0_1_;
    pFVar16[0x59] = local_368._1_1_;
    pFVar16[0x5a] = local_366;
    DestructItems<FDS_TextFormatArg,int>((FDS_TextFormatArg *)0x0,0);
    if (local_378.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_378.Data);
    }
    if (local_388.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_388.Data);
    }
    local_268.StringTableType = None;
    local_268.StringTableID = 0;
    local_268.StringEnumTableNameID.ComparisonIndex.Value = 0;
    local_268.StringEnumTableNameID.Number = 0;
    local_268.TimeExpressionType = None;
    local_268.DateTime.Ticks = 0;
    local_268.TimeSpan.Ticks = 0;
    local_268.IsExpression = false;
    local_268.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_268.UniqueString.Data.ArrayNum = 0;
    local_268.UniqueString.Data.ArrayMax = 0;
    local_268.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_268.FormatArgs.ArrayNum = 0;
    local_268.FormatArgs.ArrayMax = 0;
    FDS_Text::SetTextFromStringTable(&local_268,StringUi,0x29844);
    iVar7 = (pFVar5->TabInfos).ArrayNum;
    if (iVar7 == (pFVar5->TabInfos).ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x860,&(pFVar5->TabInfos).AllocatorInstance,&(pFVar5->TabInfos).ArrayMax);
    }
    (pFVar5->TabInfos).ArrayNum = iVar7 + 1;
    FDS_TabInfo::FDS_TabInfo
              ((FDS_TabInfo *)((pFVar5->TabInfos).AllocatorInstance.Data + (longlong)iVar7 * 0x60),
               &local_268);
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)local_268.FormatArgs.AllocatorInstance.Data,
               local_268.FormatArgs.ArrayNum);
    if ((FDS_TextFormatArg *)local_268.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0
       ) {
      FMemory::Free(local_268.FormatArgs.AllocatorInstance.Data);
    }
    if (local_268.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_268.UniqueString.Data.AllocatorInstance.Data);
    }
    local_1f8.Object = (FDS_ViewModelContext *)local_2c8.Object;
    local_1f8.SharedReferenceCount.ReferenceController =
         local_2c8.SharedReferenceCount.ReferenceController;
    pFVar5->LeftKeyActionType = IA_UI_Category_Left;
    pFVar5->RightKeyActionType = IA_UI_Category_Right;
    this_01 = (this->VM_Common_TabGroup).field0_0x0.DebugPtr;
    if (local_2c8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_2c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_2c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_01,&local_1f8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2c8.SharedReferenceCount.ReferenceController);
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)local_338.FormatArgs.AllocatorInstance.Data,
               local_338.FormatArgs.ArrayNum);
    if ((FDS_TextFormatArg *)local_338.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0
       ) {
      FMemory::Free(local_338.FormatArgs.AllocatorInstance.Data);
    }
    if (local_338.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_338.UniqueString.Data.AllocatorInstance.Data);
    }
  }
  OnChangeCraftManager_ItemCraftListTID(this);
  SetCraftingItem(this);
  pUVar13 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar13,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar14 = Z_Construct_UClass_UDS_M_WaitCompleteList_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_1e8,pUVar14);
  local_1e8._8_8_ = pUVar13;
  this_04 = (UDS_M_WaitCompleteList *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1e8);
  if (local_1e8._64_8_ != 0) {
    plVar15 = (longlong *)(local_1e8 + 0x50);
    if ((longlong *)local_1e8._104_8_ != (longlong *)0x0) {
      plVar15 = (longlong *)local_1e8._104_8_;
    }
    (**(code **)(*plVar15 + 0x10))();
  }
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (this_04 != (UDS_M_WaitCompleteList *)0x0) goto LAB_14bea3269;
LAB_14bea3353:
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4294590343900299498>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\ItemCraft\\DS_VM_ItemCraft.cpp"
                       ,0xea,"false");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    if (this_04 == (UDS_M_WaitCompleteList *)0x0) goto LAB_14bea3353;
    UE::GC::MarkAsReachable((UObject *)this_04);
LAB_14bea3269:
    UDS_M_WaitCompleteList::InitModel(this_04,this->NPCEntityID,ItemCraft);
    pUVar13 = (UObject *)this->_padding_;
    pcVar3 = *(code **)(this_04->_padding_ + 0x2e8);
    if (pUVar13 == (UObject *)0x0) {
LAB_14bea32b1:
      pUVar13 = pUVar17;
    }
    else {
      pUVar14 = Z_Construct_UClass_UDS_UserWidget_NoRegister();
      iVar7 = (int)pUVar14->_padding_;
      if ((*(int *)(*(longlong *)&pUVar13->field_0x10 + 0x38) < iVar7) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar13->field_0x10 + 0x30) + (longlong)iVar7 * 8) !=
          &pUVar14->_padding_)) goto LAB_14bea32b1;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar13 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar13);
    }
    local_358.ObjectIndex = 0;
    local_358.ObjectSerialNumber = 0;
    local_2e8 = pUVar13;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar13 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar13);
    }
    FWeakObjectPtr::operator=(&local_358,(FObjectPtr)&local_2e8);
    (*pcVar3)(this_04,local_358);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_350.SharedReferenceCount.ReferenceController);
LAB_14bea3324:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetAvailableItem @ 14bead550

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_ItemCraft::SetAvailableItem(UDS_VM_ItemCraft *this,FDS_WidgetEventField *param_1)

{
  (this->AvailableItem).bIsActivate = param_1->bIsActivate;
  SetItemCraftList(this);
  return;
}

// SetCategory @ 14bead660

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_ItemCraft::SetCategory(UDS_VM_ItemCraft *this)

{
  FDS_EventDelegate<EDS_CraftCategoryType_const_&> *this_00;
  undefined1 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  FDS_ViewModelContext *pFVar10;
  UScriptStruct *pUVar11;
  UDS_ViewModelContextManager *this_01;
  UDS_UserObjectListItem *this_02;
  UDS_EventManager *this_03;
  UDS_LogManager *pUVar12;
  UDS_ItemCraftEvent *pUVar13;
  ulonglong uVar14;
  uint uVar15;
  FDS_ViewModelContext *pFVar16;
  longlong lVar17;
  FDS_ViewModelContext *pFVar18;
  ForAnyElementType FVar19;
  FDS_EntryBindingEventField *this_04;
  undefined1 auStackY_218 [32];
  undefined1 local_1e8;
  char local_1e7;
  uint local_1e4;
  TArray<EDS_CraftCategoryType,TSizedDefaultAllocator<32>_> local_1e0;
  UDS_UserObjectListItem *local_1d0;
  FDS_EntryBindingEventField *local_1c8;
  UDS_VM_ItemCraft *local_1c0;
  FScriptContainerElement *local_1b8;
  FName local_1a8;
  int local_1a0;
  TSharedPtr<FDS_ViewModelContext,1> local_198;
  TSharedPtr<FDS_ViewModelContext,1> local_188;
  FDestructionSentinel local_178;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_218;
  this_04 = &this->EntryBindingEventField_CategoryList;
  local_1c8 = this_04;
  local_1c0 = this;
  FDS_EntryBindingEventField::Reset(this_04);
  cVar8 = '\0';
  FDS_ItemCraftListTableRow::GetCategoryList(&local_1e0,&this->CraftGroupID);
  local_1e4 = local_1e0.ArrayNum;
  uVar14 = (ulonglong)(int)local_1e4;
  local_1b8 = local_1e0.AllocatorInstance.Data + uVar14;
  FVar19.Data = local_1e0.AllocatorInstance.Data;
  while( true ) {
    pFVar5 = local_1b8;
    pFVar18 = (FDS_ViewModelContext *)0x0;
    if (local_1e0.ArrayNum != (int)uVar14) {
      local_1e8 = 0;
      `TCheckedPointerIterator<enum_EDS_CraftCategoryType,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_1e8);
    }
    if (FVar19.Data == pFVar5) {
      local_1a0 = FFieldNotificationClassDescriptor::EntryBindingEventField_CategoryList.BitNumber;
      local_1a8 = FFieldNotificationClassDescriptor::EntryBindingEventField_CategoryList.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1a8);
      if (local_1e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1e0.AllocatorInstance.Data);
      }
      return;
    }
    pFVar10 = ::operator_new(0x28);
    pFVar16 = pFVar18;
    if (pFVar10 != (FDS_ViewModelContext *)0x0) {
      *(undefined8 *)&pFVar10->field_0x1c = 0;
      *(undefined4 *)((longlong)&pFVar10[1]._padding_ + 4) = 0;
      *(undefined8 *)&pFVar10->DerivedStaticStruct = 0;
      (pFVar10->ViewModelName).ComparisonIndex = 0;
      (pFVar10->ViewModelName).Number = 0;
      pFVar10->ViewModelTemplateKey = None;
      pFVar10->_padding_ = (longlong)&___7FDS_ViewModelContext_ItemCraft_Category__6B_;
      pFVar16 = pFVar10;
    }
    pFVar10 = ::operator_new(0x20);
    if (pFVar10 != (FDS_ViewModelContext *)0x0) {
      *(atomic<int> *)&pFVar10->DerivedStaticStruct = (atomic<int>)0x1;
      *(code **)&(pFVar10->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
      pFVar10->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_ItemCraft_Category__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
      ;
      ((atomic<int> *)&pFVar10->DerivedStaticStruct)[1] = (atomic<int>)0x1;
      *(FDS_ViewModelContext **)&pFVar10->ViewModelTemplateKey = pFVar16;
      pFVar18 = pFVar10;
    }
    if ((pFVar16 == (FDS_ViewModelContext *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) break;
    pUVar11 = FDS_ViewModelContext_ItemCraft_Category::StaticStruct();
    *(UScriptStruct **)&pFVar16->DerivedStaticStruct = pUVar11;
    this_01 = UDS_ViewModelContextManager::GetInst();
    if (this_01 != (UDS_ViewModelContextManager *)0x0) {
      if (pFVar18 != (FDS_ViewModelContext *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar18->DerivedStaticStruct =
             (atomic<int>)((int)*(atomic<int> *)&pFVar18->DerivedStaticStruct + 1);
        UNLOCK();
      }
      local_198.Object = pFVar16;
      local_198.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar18;
      UDS_ViewModelContextManager::RegisterContext(this_01,&local_198);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_198.SharedReferenceCount.ReferenceController);
    }
    pFVar16->ViewModelTemplateKey = ItemCraft_Category;
    *(FScriptContainerElement *)&pFVar16[1]._padding_ = *FVar19.Data;
    this_02 = NewObject<UDS_UserObjectListItem>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this_02 != (UDS_UserObjectListItem *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this_02);
    }
    if (pFVar18 != (FDS_ViewModelContext *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar18->DerivedStaticStruct =
           (atomic<int>)((int)*(atomic<int> *)&pFVar18->DerivedStaticStruct + 1);
      UNLOCK();
    }
    local_188.Object = pFVar16;
    local_188.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar18;
    UDS_UserObjectListItem::AddContext(this_02,&local_188);
    local_1d0 = this_02;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this_02 != (UDS_UserObjectListItem *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this_02);
    }
    FDS_EntryBindingEventField::Add(this_04,(TObjectPtr<UDS_UserObjectListItem>)&local_1d0);
    if (cVar8 == '\0') {
      cVar8 = '\x01';
      local_1e7 = '\x01';
      this_03 = UDS_EventManager::GetInst();
      if (this_03 != (UDS_EventManager *)0x0) {
        if ((char)this_03->_padding_ == '\x01') {
          pUVar12 = UDS_LogManager::GetInst();
          if (pUVar12 != (UDS_LogManager *)0x0) {
            pUVar12 = UDS_LogManager::GetInst();
            local_158._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_158,"UDS_EventManager::GetEvent",0x1a,Yes);
            UDS_LogManager::PrintLog
                      (pUVar12,1,Warning,local_158.Ptr,0x31,
                       L"Cannot access event during UDS_EventManager destruction.");
            if ((void *)local_158._padding_ != (void *)0x0) {
              FMemory::Free((void *)local_158._padding_);
            }
          }
        }
        else {
          pUVar13 = UDS_EventManager::GetEventInternal<UDS_ItemCraftEvent>(this_03);
          if (pUVar13 != (UDS_ItemCraftEvent *)0x0) {
            this_00 = &pUVar13->OnSelectCraftCategoryEvent;
            bVar6 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00);
            if (bVar6) {
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                        ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
                         (FWriteAccessScope *)&local_178);
              puVar1 = &(pUVar13->OnSelectCraftCategoryEvent).Delegate.field_0x1c;
              *(int *)puVar1 = *(int *)puVar1 + 1;
              bVar6 = false;
              uVar15 = *(int *)&(pUVar13->OnSelectCraftCategoryEvent).Delegate.field_0x10 - 1;
              if (-1 < (int)uVar15) {
                lVar17 = (longlong)(int)uVar15 << 4;
                bVar6 = false;
                do {
                  uVar9 = 0;
                  if ((int)uVar15 <
                      *(int *)&(pUVar13->OnSelectCraftCategoryEvent).Delegate.field_0x10) {
                    uVar9 = ~uVar15 >> 0x1f;
                  }
                  if ((uVar9 == 0) &&
                     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar7)) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  lVar2 = *(longlong *)&(pUVar13->OnSelectCraftCategoryEvent).Delegate.field_0x8;
                  if (((*(int *)(lVar2 + 8 + lVar17) == 0) ||
                      (plVar3 = *(longlong **)(lVar2 + lVar17), plVar3 == (longlong *)0x0)) ||
                     (cVar8 = (**(code **)(*plVar3 + 0x68))(), cVar8 == '\0')) {
                    bVar6 = true;
                  }
                  lVar17 = lVar17 + -0x10;
                  uVar15 = uVar15 - 1;
                  this_04 = local_1c8;
                  cVar8 = local_1e7;
                } while (-1 < (int)uVar15);
              }
              puVar1 = &(pUVar13->OnSelectCraftCategoryEvent).Delegate.field_0x1c;
              *(int *)puVar1 = *(int *)puVar1 + -1;
              if (bVar6) {
                TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                          ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,false);
              }
              if (local_178.bDestroyed == false) {
                FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_178.Accessor,&local_178);
              }
            }
          }
        }
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar18);
    FVar19.Data = FVar19.Data + 1;
    uVar14 = (ulonglong)local_1e4;
    this = local_1c0;
  }
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

// SetCraftingItem @ 14beadbf0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_ItemCraft::SetCraftingItem(UDS_VM_ItemCraft *this)

{
  UDS_VM_ItemCraft_Crafting_List *this_00;
  code *pcVar1;
  bool bVar2;
  FDS_ViewModelContext *pFVar3;
  UScriptStruct *pUVar4;
  UDS_ViewModelContextManager *this_01;
  FDS_ViewModelContext *pFVar5;
  FDS_ViewModelContext *pFVar6;
  TSharedPtr<FDS_ViewModelContext,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  if ((this->VM_ItemCraft_Crafting_List).field0_0x0.DebugPtr !=
      (UDS_VM_ItemCraft_Crafting_List *)0x0) {
    pFVar3 = ::operator_new(0x30);
    pFVar6 = (FDS_ViewModelContext *)0x0;
    pFVar5 = pFVar6;
    if (pFVar3 != (FDS_ViewModelContext *)0x0) {
      *(undefined8 *)&pFVar3->field_0x1c = 0;
      *(undefined8 *)((longlong)&pFVar3[1]._padding_ + 4) = 0;
      ((atomic<int> *)&pFVar3[1].DerivedStaticStruct)[1] = (atomic<int>)0x0;
      *(undefined8 *)&pFVar3->DerivedStaticStruct = 0;
      (pFVar3->ViewModelName).ComparisonIndex = 0;
      (pFVar3->ViewModelName).Number = 0;
      pFVar3->ViewModelTemplateKey = None;
      pFVar3->_padding_ = (longlong)&___7FDS_ViewModelContext_ItemCrafting_List__6B_;
      pFVar5 = pFVar3;
    }
    pFVar3 = ::operator_new(0x20);
    if (pFVar3 != (FDS_ViewModelContext *)0x0) {
      *(atomic<int> *)&pFVar3->DerivedStaticStruct = (atomic<int>)0x1;
      *(code **)&(pFVar3->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
      pFVar3->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_ItemCrafting_List__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
      ;
      ((atomic<int> *)&pFVar3->DerivedStaticStruct)[1] = (atomic<int>)0x1;
      *(FDS_ViewModelContext **)&pFVar3->ViewModelTemplateKey = pFVar5;
      pFVar6 = pFVar3;
    }
    if ((pFVar5 == (FDS_ViewModelContext *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pUVar4 = FDS_ViewModelContext_ItemCrafting_List::StaticStruct();
    *(UScriptStruct **)&pFVar5->DerivedStaticStruct = pUVar4;
    this_01 = UDS_ViewModelContextManager::GetInst();
    if (this_01 != (UDS_ViewModelContextManager *)0x0) {
      if (pFVar6 != (FDS_ViewModelContext *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar6->DerivedStaticStruct =
             (atomic<int>)((int)*(atomic<int> *)&pFVar6->DerivedStaticStruct + 1);
        UNLOCK();
      }
      local_28.Object = pFVar5;
      local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar6;
      UDS_ViewModelContextManager::RegisterContext(this_01,&local_28);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_28.SharedReferenceCount.ReferenceController);
    }
    pFVar5->ViewModelTemplateKey = ItemCraft_Crafting_List;
    pFVar5[1]._padding_ = this->NPCEntityID;
    *(longlong *)&pFVar5[1].DerivedStaticStruct = (longlong)this->CraftBaseID;
    this_00 = (this->VM_ItemCraft_Crafting_List).field0_0x0.DebugPtr;
    if (pFVar6 != (FDS_ViewModelContext *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar6->DerivedStaticStruct =
           (atomic<int>)((int)*(atomic<int> *)&pFVar6->DerivedStaticStruct + 1);
      UNLOCK();
    }
    local_18.Object = pFVar5;
    local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar6;
    UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_00,&local_18);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar6);
  }
  return;
}

// SetInventory @ 14beb09e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UDS_VM_ItemCraft::SetInventory(UDS_VM_ItemCraft *this)

{
  undefined8 uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  UObject *pUVar5;
  UClass *pUVar6;
  UDS_M_InventoryBag *this_00;
  UEnum *pUVar7;
  FName FVar8;
  FScriptContainerElement *pFVar9;
  ForAnyElementType _Dst;
  longlong *plVar10;
  ForElementType<FSetElementId> FVar11;
  undefined1 *_Src;
  longlong lVar12;
  int iVar13;
  undefined1 auStackY_288 [32];
  FWeakObjectPtr local_258;
  FString local_250;
  FString local_240;
  UObject *local_230;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  local_228;
  TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  local_210;
  undefined1 local_1f8 [72];
  int local_1b0;
  undefined1 local_1a8 [64];
  ForAnyElementType local_168;
  uint local_160;
  undefined1 local_158 [8];
  undefined1 local_150 [8];
  undefined1 local_148 [128];
  undefined1 local_c8 [32];
  void *local_a8;
  undefined4 local_a0;
  uint local_9c;
  undefined4 local_98;
  int local_94;
  undefined1 local_90 [8];
  ForElementType<FSetElementId> local_88;
  int local_80;
  undefined1 local_78 [32];
  void *local_58;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40 [8];
  undefined1 *local_38;
  uint local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_288;
  pUVar5 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar5,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar6 = Z_Construct_UClass_UDS_M_InventoryBag_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_148,pUVar6);
  local_148._8_8_ = pUVar5;
  this_00 = (UDS_M_InventoryBag *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_148);
  if (local_148._64_8_ != 0) {
    plVar10 = (longlong *)(local_148 + 0x50);
    if ((longlong *)local_148._104_8_ != (longlong *)0x0) {
      plVar10 = (longlong *)local_148._104_8_;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (this_00 == (UDS_M_InventoryBag *)0x0) goto LAB_14beb0b4c;
  }
  else {
    if (this_00 == (UDS_M_InventoryBag *)0x0) {
LAB_14beb0b4c:
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4294590343900299743>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\ItemCraft\\DS_VM_ItemCraft.cpp"
                         ,0x1df,"false");
      if (!bVar3) {
        return;
      }
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  local_c8._0_8_ = (FScriptContainerElement *)0x0;
  local_c8._8_8_ = 0;
  local_a8 = (void *)0x0;
  local_a0 = 0;
  local_94 = 0;
  local_88 = (ForElementType<FSetElementId>)0x0;
  local_80 = 0;
  local_78._0_8_ = (FScriptContainerElement *)0x0;
  local_78._8_8_ = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_44 = 0;
  local_38 = (undefined1 *)0x0;
  local_30 = 0;
  local_9c = 0x80;
  local_98 = 0xffffffff;
  local_4c = 0x80;
  local_48 = 0xffffffff;
  pUVar7 = StaticEnum<enum_EDS_BagGroupType>();
  if (pUVar7 == (UEnum *)0x0) {
    ::FString::FString(&local_250,L"");
  }
  else {
    UEnum::GetNameStringByValue(pUVar7,&local_250,3);
  }
  FVar8 = FDS_DataContainer::TransformIndexToName<enum_EDS_InventoryBagData>
                    ((FDS_DataContainer *)local_c8,(EDS_InventoryBagData)local_158);
  uVar1 = *(undefined8 *)FVar8;
  uVar4 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  uVar4 = uVar4 + (int)((ulonglong)uVar1 >> 0x20);
  if (local_c8._8_4_ != local_94) {
    FVar11 = (ForElementType<FSetElementId>)local_90;
    if (local_88 != (ForElementType<FSetElementId>)0x0) {
      FVar11 = local_88;
    }
    iVar13 = *(int *)((longlong)FVar11 + (ulonglong)(local_80 - 1U & uVar4) * 4);
    if (iVar13 != -1) {
      do {
        if (*(longlong *)(local_c8._0_8_ + (longlong)iVar13 * 0x20) == *(longlong *)FVar8) {
          if ((iVar13 != -1) &&
             ((FScriptContainerElement *)(local_c8._0_8_ + (longlong)iVar13 * 0x20) !=
              (FScriptContainerElement *)0x0)) {
            pFVar9 = (FScriptContainerElement *)(local_c8._0_8_ + (longlong)iVar13 * 0x20) + 8;
            goto LAB_14beb0c2a;
          }
          break;
        }
        iVar13 = *(int *)(local_c8._0_8_ + (longlong)iVar13 * 0x20 + 0x18);
      } while (iVar13 != -1);
    }
  }
  pFVar9 = (FScriptContainerElement *)
           TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::EmplaceByHash<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)local_c8,uVar4,(FName *)FVar8);
LAB_14beb0c2a:
  iVar13 = local_250.Data.ArrayNum + -1;
  if (local_250.Data.ArrayNum == 0) {
    iVar13 = 0;
  }
  ::FString::AssignRange((FString *)pFVar9,(wchar_t *)local_250.Data.AllocatorInstance.Data,iVar13);
  if (local_250.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_250.Data.AllocatorInstance.Data);
  }
  pUVar7 = StaticEnum<enum_EDS_SortingType>();
  if (pUVar7 == (UEnum *)0x0) {
    ::FString::FString(&local_240,L"");
  }
  else {
    UEnum::GetNameStringByValue(pUVar7,&local_240,5);
  }
  FVar8 = FDS_DataContainer::TransformIndexToName<enum_EDS_InventoryBagData>
                    ((FDS_DataContainer *)local_c8,(EDS_InventoryBagData)local_150);
  uVar1 = *(undefined8 *)FVar8;
  uVar4 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  uVar4 = uVar4 + (int)((ulonglong)uVar1 >> 0x20);
  if (local_c8._8_4_ != local_94) {
    FVar11 = (ForElementType<FSetElementId>)local_90;
    if (local_88 != (ForElementType<FSetElementId>)0x0) {
      FVar11 = local_88;
    }
    iVar13 = *(int *)((longlong)FVar11 + (ulonglong)(local_80 - 1U & uVar4) * 4);
    if (iVar13 != -1) {
      do {
        if (*(longlong *)(local_c8._0_8_ + (longlong)iVar13 * 0x20) == *(longlong *)FVar8) {
          if ((iVar13 != -1) &&
             ((FScriptContainerElement *)(local_c8._0_8_ + (longlong)iVar13 * 0x20) !=
              (FScriptContainerElement *)0x0)) {
            pFVar9 = (FScriptContainerElement *)(local_c8._0_8_ + (longlong)iVar13 * 0x20) + 8;
            goto LAB_14beb0d3e;
          }
          break;
        }
        iVar13 = *(int *)(local_c8._0_8_ + (longlong)iVar13 * 0x20 + 0x18);
      } while (iVar13 != -1);
    }
  }
  pFVar9 = (FScriptContainerElement *)
           TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::EmplaceByHash<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)local_c8,uVar4,(FName *)FVar8);
LAB_14beb0d3e:
  iVar13 = local_240.Data.ArrayNum + -1;
  if (local_240.Data.ArrayNum == 0) {
    iVar13 = 0;
  }
  ::FString::AssignRange((FString *)pFVar9,(wchar_t *)local_240.Data.AllocatorInstance.Data,iVar13);
  if (local_240.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_240.Data.AllocatorInstance.Data);
  }
  local_228._16_8_ = 0;
  local_1f8._40_8_ = ___xmm_00000000ffffffff0000008000000000;
  local_1f8._48_8_ = _UNK_150631d98;
  local_228._0_8_ = 0;
  local_228._8_8_ = 0;
  local_210._16_8_ = 0;
  local_210._0_8_ = 0;
  local_210._8_8_ = 0;
  local_1f8._0_8_ = 0;
  local_1f8._8_8_ = 0;
  local_1f8._32_8_ = 0;
  local_1f8._64_8_ = (ForElementType<FSetElementId>)0x0;
  local_1b0 = 0;
  TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>::
  operator=((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
             *)local_1f8,
            (TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
             *)local_c8);
  uVar4 = local_30;
  lVar12 = (longlong)(int)local_30;
  local_168.Data = (FScriptContainerElement *)0x0;
  local_1a8._0_8_ = 0;
  local_1a8._8_8_ = 0;
  local_1a8._32_8_ = 0;
  local_160 = 0;
  local_1a8._40_8_ = ___xmm_00000000ffffffff0000008000000000;
  local_1a8._48_8_ = _UNK_150631d98;
  if (1 < local_30) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_168,0,local_30,4);
  }
  _Src = local_40;
  if (local_38 != (undefined1 *)0x0) {
    _Src = local_38;
  }
  _Dst.Data = (FScriptContainerElement *)(local_1a8 + 0x38);
  if (local_168.Data != (FScriptContainerElement *)0x0) {
    _Dst.Data = local_168.Data;
  }
  if (uVar4 != 0) {
    memcpy(_Dst.Data,_Src,lVar12 << 2);
  }
  local_160 = uVar4;
  TSparseArray<TSparseSetElement<TTuple<FName,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::operator=((TSparseArray<TSparseSetElement<TTuple<FName,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_1a8,
              (TSparseArray<TSparseSetElement<TTuple<FName,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_78);
  UDS_M_InventoryBag::InitModel(this_00,(FDS_DataContainer *)local_1f8,&local_210,&local_228);
  pUVar5 = (UObject *)this->_padding_;
  pcVar2 = *(code **)(this_00->_padding_ + 0x2e8);
  if (pUVar5 != (UObject *)0x0) {
    pUVar6 = Z_Construct_UClass_UDS_UserWidget_NoRegister();
    iVar13 = (int)pUVar6->_padding_;
    if ((iVar13 <= *(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar13 * 8) ==
        &pUVar6->_padding_)) goto LAB_14beb0e93;
  }
  pUVar5 = (UObject *)0x0;
LAB_14beb0e93:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  local_258.ObjectIndex = 0;
  local_258.ObjectSerialNumber = 0;
  local_230 = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  FWeakObjectPtr::operator=(&local_258,(FObjectPtr)&local_230);
  (*pcVar2)(this_00);
  local_30 = 0;
  if (local_38 != (undefined1 *)0x0) {
    FMemory::Free(local_38);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_78,0,local_78._8_4_);
  iVar13 = SUB84(local_78._8_8_,4);
  local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
  if (iVar13 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)local_78,0,(int *)(local_78 + 0xc));
  }
  local_48 = 0xffffffff;
  local_44 = 0;
  local_50 = 0;
  if (0x80 < local_4c) {
    local_4c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_78 + 0x10),0);
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_78._0_8_);
  }
  local_80 = 0;
  if (local_88 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_88);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_c8,0,local_c8._8_4_);
  iVar13 = SUB84(local_c8._8_8_,4);
  local_c8._8_8_ = local_c8._8_8_ & 0xffffffff00000000;
  if (iVar13 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)local_c8,0,(int *)(local_c8 + 0xc));
  }
  local_94 = 0;
  local_a0 = 0;
  local_98 = 0xffffffff;
  if (0x80 < local_9c) {
    local_9c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_c8 + 0x10),0);
  }
  if (local_a8 != (void *)0x0) {
    FMemory::Free(local_a8);
  }
  if ((FScriptContainerElement *)local_c8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_c8._0_8_);
  }
  return;
}

// SetItemCraft @ 14beb1d30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_ItemCraft::SetItemCraft(UDS_VM_ItemCraft *this)

{
  FDS_ItemCraftBaseTableRow *pFVar1;
  UDS_LogManager *pUVar2;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar1 = FDS_ItemCraftBaseTableRow::Get((longlong)this->CraftBaseID,true);
  if (pFVar1 == (FDS_ItemCraftBaseTableRow *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_ItemCraft::SetItemCraft",0x1e,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_138.Ptr,0x156,
                 L"FDS_ItemCraftBaseTableRow is nullptr   ID - %d");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    this->CraftGroupID = pFVar1->ID_ItemCraftGroup;
    SetCategory(this);
    SetItemCraftList(this);
  }
  return;
}

// SetItemCraftList @ 14beb1e40

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_ItemCraft::SetItemCraftList(UDS_VM_ItemCraft *this)

{
  int *piVar1;
  EDS_CraftCategoryType EVar2;
  FScriptContainerElement FVar3;
  FScriptContainerElement FVar4;
  FDS_ItemCraftListTableRow *pFVar5;
  longlong lVar6;
  code *pcVar7;
  int iVar8;
  bool bVar9;
  int iVar10;
  UDS_CraftManager *pUVar11;
  UObject *pUVar12;
  ulonglong uVar13;
  FDS_ViewModelContext *pFVar14;
  TReferenceControllerBase<1> *pTVar15;
  UScriptStruct *pUVar16;
  UDS_ViewModelContextManager *this_00;
  UDS_UserObjectListItem *this_01;
  undefined8 *puVar17;
  UDS_ItemCraftEvent *pUVar18;
  TSharedPtr<FDS_ViewModelContext,1> *pTVar19;
  FDS_ViewModelContext *pFVar20;
  FScriptContainerElement *pFVar21;
  ForAnyElementType FVar22;
  FScriptContainerElement *pFVar23;
  FIdentityFunctor local_res10 [8];
  undefined1 local_res18 [8];
  FScriptContainerElement local_res20;
  int local_e8;
  undefined1 local_e4 [4];
  uint local_e0;
  FDS_ItemCraftListTableData local_d8;
  FWeakObjectPtr local_c8;
  UDS_M_ItemImplBase *local_c0;
  TArray<FDS_ItemCraftListTableRow_const_*,TSizedDefaultAllocator<32>_> local_b8;
  UDS_UserObjectListItem *local_a8;
  FScriptContainerElement *local_a0;
  UDS_CraftManager *local_98;
  FName local_88;
  int local_80;
  TSharedPtr<FDS_ViewModelContext,1> local_78;
  TSharedPtr<FDS_ViewModelContext,1> local_68;
  TSharedPtr<FDS_ViewModelContext,1> local_58;
  undefined1 local_48 [8];
  TReferenceControllerBase<1> *local_40;
  
  pUVar11 = UDS_CraftManager::GetInst();
  if (pUVar11 != (UDS_CraftManager *)0x0) {
    local_98 = pUVar11;
    FDS_EntryBindingEventField::Reset(&this->EntryBindingEventField_CraftList);
    EVar2 = pUVar11->SelectedCraftCategoryType;
    FDS_ItemCraftListTableRow::GetAll(&local_b8);
    iVar8 = local_b8.ArrayNum;
    pFVar23 = local_b8.AllocatorInstance.Data + (longlong)local_b8.ArrayNum * 8;
    FVar22.Data = local_b8.AllocatorInstance.Data;
    while( true ) {
      if (local_b8.ArrayNum != iVar8) {
        local_res10[0] = (FIdentityFunctor)0x0;
        `TCheckedPointerIterator<FDS_ItemCraftListTableRow_const_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (FVar22.Data == pFVar23) break;
      pFVar5 = *(FDS_ItemCraftListTableRow **)FVar22.Data;
      if ((pFVar5->GroupID == this->CraftGroupID) && (pFVar5->CraftCategory == EVar2)) {
        local_d8.ItemCraftListTableRow = pFVar5;
        FDS_ItemCraftListTableData::CheckEnoughMaterial(&local_d8);
        pFVar5 = local_d8.ItemCraftListTableRow;
        if (local_d8.ItemCraftListTableRow == (FDS_ItemCraftListTableRow *)0x0) {
LAB_14beb1f51:
          local_d8.IsCondition = false;
        }
        else if ((local_d8.ItemCraftListTableRow)->RecipeActiveCondition == NpcRelationGrade) {
          UDS_NpcRelationData::GetData
                    ((ulong64)&local_c8,UDS_PlayerData::MainPlayerEntityID,
                     SUB41(this->NPCEntityTableID,0));
          bVar9 = FWeakObjectPtr::IsValid(&local_c8);
          if (!bVar9) goto LAB_14beb1f51;
          pUVar12 = FWeakObjectPtr::Get(&local_c8);
          local_d8.IsCondition = pFVar5->RecipeActiveValue <= *(int *)&pUVar12[3].field_0x14;
        }
        else {
          local_d8.IsCondition = true;
        }
        iVar10 = (this->ItemCraftListTableDatas).ArrayNum;
        piVar1 = &(this->ItemCraftListTableDatas).ArrayMax;
        local_d8.HasRecipe = true;
        if (iVar10 == *piVar1) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&(this->ItemCraftListTableDatas).AllocatorInstance,piVar1);
        }
        (this->ItemCraftListTableDatas).ArrayNum = iVar10 + 1;
        pFVar21 = (this->ItemCraftListTableDatas).AllocatorInstance.Data + (longlong)iVar10 * 0x10;
        *(FDS_ItemCraftListTableRow **)pFVar21 = local_d8.ItemCraftListTableRow;
        *(ulonglong *)(pFVar21 + 8) =
             CONCAT53(local_d8._11_5_,
                      CONCAT12(local_d8.HasRecipe,CONCAT11(local_d8.IsCondition,local_d8.IsEnough)))
        ;
      }
      FVar22.Data = FVar22.Data + 8;
    }
    AlgoImpl::
    StableSortInternal<FDS_ItemCraftListTableData,FIdentityFunctor,TDereferenceWrapper<FDS_ItemCraftListTableData,_UDS_VM_ItemCraft::SetItemCraftList_::__l2::<lambda_1>_>_>
              ((FDS_ItemCraftListTableData *)(this->ItemCraftListTableDatas).AllocatorInstance.Data,
               (this->ItemCraftListTableDatas).ArrayNum,local_res10[0],(<lambda_1> *)local_e4);
    local_e0 = (this->ItemCraftListTableDatas).ArrayNum;
    uVar13 = (ulonglong)(int)local_e0;
    pFVar23 = (this->ItemCraftListTableDatas).AllocatorInstance.Data;
    pFVar21 = pFVar23 + uVar13 * 0x10;
    local_e8 = 0;
    local_a0 = pFVar21;
    while( true ) {
      pFVar20 = (FDS_ViewModelContext *)0x0;
      if ((this->ItemCraftListTableDatas).ArrayNum != (int)uVar13) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FDS_ItemCraftListTableData,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      if (pFVar23 == pFVar21) break;
      lVar6 = *(longlong *)pFVar23;
      if (lVar6 != 0) {
        local_res20 = pFVar23[9];
        FVar3 = pFVar23[8];
        FVar4 = pFVar23[10];
        if (((this->AvailableItem).bIsActivate == false) ||
           (((FVar3 != (FScriptContainerElement)0x0 && (FVar4 != (FScriptContainerElement)0x0)) &&
            (local_res20 != (FScriptContainerElement)0x0)))) {
          pFVar14 = ::operator_new(0x30);
          if (pFVar14 != (FDS_ViewModelContext *)0x0) {
            *(undefined8 *)&pFVar14->field_0x1c = 0;
            *(undefined8 *)((longlong)&pFVar14[1]._padding_ + 4) = 0;
            *(undefined4 *)((longlong)&pFVar14[1].DerivedStaticStruct + 4) = 0;
            pFVar14->DerivedStaticStruct = (UStruct *)0x0;
            (pFVar14->ViewModelName).ComparisonIndex = 0;
            (pFVar14->ViewModelName).Number = 0;
            pFVar14->ViewModelTemplateKey = None;
            pFVar14->_padding_ = (longlong)&___7FDS_ViewModelContext_ItemCraftSlot__6B_;
            pFVar20 = pFVar14;
          }
          pTVar15 = ::operator_new(0x20);
          if (pTVar15 == (TReferenceControllerBase<1> *)0x0) {
            pTVar15 = (TReferenceControllerBase<1> *)0x0;
          }
          else {
            pTVar15->SharedReferenceCount = (atomic<int>)0x1;
            pTVar15[1]._padding_ = (longlong)ViewModelContextDeleter;
            pTVar15->_padding_ =
                 (longlong)
                 &
                 ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_ItemCraftSlot__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
            ;
            pTVar15->WeakReferenceCount = (atomic<int>)0x1;
            *(FDS_ViewModelContext **)&pTVar15[1].SharedReferenceCount = pFVar20;
          }
          if ((pFVar20 == (FDS_ViewModelContext *)0x0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pUVar16 = FDS_ViewModelContext_ItemCraftSlot::StaticStruct();
          pFVar20->DerivedStaticStruct = (UStruct *)pUVar16;
          this_00 = UDS_ViewModelContextManager::GetInst();
          if (this_00 != (UDS_ViewModelContextManager *)0x0) {
            if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
              UNLOCK();
            }
            local_78.Object = pFVar20;
            local_78.SharedReferenceCount.ReferenceController = pTVar15;
            UDS_ViewModelContextManager::RegisterContext(this_00,&local_78);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_78.SharedReferenceCount.ReferenceController);
          }
          pFVar20->ViewModelTemplateKey = ItemCraft_Slot;
          *(undefined4 *)&pFVar20[1]._padding_ = *(undefined4 *)(lVar6 + 0x30);
          *(undefined4 *)((longlong)&pFVar20[1]._padding_ + 4) = *(undefined4 *)(lVar6 + 8);
          *(undefined4 *)&pFVar20[1].DerivedStaticStruct = *(undefined4 *)(lVar6 + 0x40);
          *(FScriptContainerElement *)((longlong)&pFVar20[1].DerivedStaticStruct + 4) = FVar3;
          *(FScriptContainerElement *)((longlong)&pFVar20[1].DerivedStaticStruct + 5) = FVar4;
          *(FScriptContainerElement *)((longlong)&pFVar20[1].DerivedStaticStruct + 6) = local_res20;
          if (local_e8 == 0) {
            local_e8 = *(int *)(lVar6 + 8);
          }
          this_01 = NewObject<UDS_UserObjectListItem>((UObject *)this);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (this_01 != (UDS_UserObjectListItem *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)this_01);
          }
          if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
            UNLOCK();
          }
          pTVar19 = &local_68;
          local_68.Object = pFVar20;
          local_68.SharedReferenceCount.ReferenceController = pTVar15;
          UDS_UserObjectListItem::AddContext(this_01,pTVar19);
          DS_ItemDataUtil::CreateItemModel
                    ((EDS_ItemSlotStateType)&local_c0,
                     (int)CONCAT71((int7)((ulonglong)pTVar19 >> 8),0x11));
          if (local_c0 != (UDS_M_ItemImplBase *)0x0) {
            UDS_M_ItemImplBase::SetQuantity(local_c0,*(int *)(lVar6 + 0x40));
            puVar17 = (undefined8 *)(**(code **)(local_c0->_padding_ + 0x310))(local_c0,local_48);
            local_58.Object = (FDS_ViewModelContext *)*puVar17;
            local_58.SharedReferenceCount.ReferenceController =
                 (TReferenceControllerBase<1> *)puVar17[1];
            if (local_58.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                   1);
              UNLOCK();
            }
            UDS_UserObjectListItem::AddContext(this_01,&local_58);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_40);
          }
          local_a8 = this_01;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (this_01 != (UDS_UserObjectListItem *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)this_01);
          }
          FDS_EntryBindingEventField::Add
                    (&this->EntryBindingEventField_CraftList,
                     (TObjectPtr<UDS_UserObjectListItem>)&local_a8);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar15);
          pFVar21 = local_a0;
        }
      }
      uVar13 = (ulonglong)local_e0;
      pFVar23 = pFVar23 + 0x10;
    }
    (this->ItemCraftListTableDatas).ArrayNum = 0;
    if ((this->ItemCraftListTableDatas).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(this->ItemCraftListTableDatas).AllocatorInstance,0,
                 &(this->ItemCraftListTableDatas).ArrayMax);
    }
    local_80 = FFieldNotificationClassDescriptor::EntryBindingEventField_CraftList.BitNumber;
    local_88 = FFieldNotificationClassDescriptor::EntryBindingEventField_CraftList.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_88);
    if (((local_98->SelectedCraftListTID == 0) && (0 < local_e8)) &&
       (pUVar18 = UDS_ItemCraftEvent::GetEvent(), pUVar18 != (UDS_ItemCraftEvent *)0x0)) {
      FDS_EventDelegate<int_const_&>::Broadcast(&pUVar18->OnSelectCraftSlotEvent,&local_e8);
    }
    if (local_b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.AllocatorInstance.Data);
    }
  }
  return;
}

// SetbIsDisableCraftButton @ 14bebaf00

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_ItemCraft::SetbIsDisableCraftButton(UDS_VM_ItemCraft *this)

{
  bool bVar1;
  UDS_CraftManager *pUVar2;
  FName local_18;
  int local_10;
  
  pUVar2 = UDS_CraftManager::GetInst();
  if ((pUVar2 == (UDS_CraftManager *)0x0) ||
     ((((pUVar2->IsCondition != false && (pUVar2->HasRecipe != false)) &&
       (pUVar2->IsEnoughMaterial == Enough)) && (pUVar2->IsEnoughMoney == Enough)))) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  this->bIsDisableCraftButton = bVar1;
  local_10 = FFieldNotificationClassDescriptor::bIsDisableCraftButton.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::bIsDisableCraftButton.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// UnbindModel @ 14bebc5c0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_ItemCraft::UnbindModel(UDS_VM_ItemCraft *this)

{
  bool bVar1;
  UObject *pUVar2;
  UDS_ItemCraftEvent *pUVar3;
  UDS_UIEvent *pUVar4;
  FDS_StatusInfo *pFVar5;
  EDS_StatusType local_res10 [2];
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_18 [2];
  
  TDS_DataSetGetter<UDS_MoneyDataSet>::Get((ulong64)&local_res18);
  bVar1 = FWeakObjectPtr::IsValid(&local_res18);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&local_res18);
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar2 + 1),(UObject *)this)
    ;
  }
  TDS_DataSetGetter<UDS_ItemDataSet>::Get((ulong64)&local_res20);
  bVar1 = FWeakObjectPtr::IsValid(&local_res20);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&local_res20);
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar2 + 1),(UObject *)this)
    ;
  }
  TDS_DataSetGetter<UDS_WaitCompleteDataSet>::Get((ulong64)local_18);
  bVar1 = FWeakObjectPtr::IsValid(local_18);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(local_18);
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar2 + 1),(UObject *)this)
    ;
  }
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FDS_ItemCraftService::ItemCraftDelegate,this);
  pUVar3 = UDS_ItemCraftEvent::GetEvent();
  if (pUVar3 != (UDS_ItemCraftEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar3->OnChangeCraftManager_ItemCraftListTID,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar3->OnChangeCraftManager_ItemCraftCategoryType,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar3->OnChangeCraftManager_ItemCraftListTID_Complete,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar3->OnChangeCraftManager_ItemCraftQuantity_Complete,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar3->OnChangeCraftManager_MoneyState,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar3->OnChangeCraftManager_MaterialState,this);
  }
  pUVar4 = UDS_UIEvent::GetEvent();
  if (pUVar4 != (UDS_UIEvent *)0x0) {
    FDS_FilteredEventDelegate<TWeakObjectPtr<UObject,FWeakObjectPtr>,int_const_,int_const_>::
    Remove<UDS_VM_ItemCraft>(&pUVar4->OnSelectedTabIndex,this);
  }
  local_res10[0] = WaitCompleteItemCraft;
  pFVar5 = UDS_CharStatusDataUtil::GetCurrentCharStatusInfo(local_res10);
  if (pFVar5 != (FDS_StatusInfo *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pFVar5->ChangeMaxValueDelegate
               ,this);
  }
  return;
}

// UpdateMoneyDisplay @ 14bec0ab0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_ItemCraft::UpdateMoneyDisplay(UDS_VM_ItemCraft *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FScriptContainerElement *_Src;
  UDS_VM_MoneyGroup *this_00;
  code *pcVar4;
  bool bVar5;
  UDS_CraftManager *pUVar6;
  FDS_ItemCraftListTableRow *pFVar7;
  FDS_ViewModelContext *pFVar8;
  UScriptStruct *pUVar9;
  UDS_ViewModelContextManager *this_01;
  FDS_ViewModelContext *pFVar10;
  FDS_ViewModelContext *pFVar11;
  TSharedPtr<FDS_ViewModelContext,1> local_38;
  TSharedPtr<FDS_ViewModelContext,1> local_28;
  
  pUVar6 = UDS_CraftManager::GetInst();
  if (((pUVar6 != (UDS_CraftManager *)0x0) &&
      ((this->VM_MoneyGroup).field0_0x0.DebugPtr != (UDS_VM_MoneyGroup *)0x0)) &&
     (pFVar7 = FDS_ItemCraftListTableRow::Get((longlong)pUVar6->SelectedCraftListTID,true),
     pFVar7 != (FDS_ItemCraftListTableRow *)0x0)) {
    pFVar8 = ::operator_new(0x30);
    pFVar10 = (FDS_ViewModelContext *)0x0;
    pFVar11 = pFVar10;
    if (pFVar8 != (FDS_ViewModelContext *)0x0) {
      *(undefined8 *)&pFVar8->ViewModelTemplateKey = 0;
      *(undefined8 *)&pFVar8->DerivedStaticStruct = 0;
      (pFVar8->ViewModelName).ComparisonIndex = 0;
      (pFVar8->ViewModelName).Number = 0;
      pFVar8->_padding_ = (longlong)&___7FDS_ViewModelContext_MoneyGroup__6B_;
      pFVar8[1]._padding_ = 0;
      *(undefined8 *)&pFVar8[1].DerivedStaticStruct = 0;
      pFVar11 = pFVar8;
    }
    pFVar8 = ::operator_new(0x20);
    if (pFVar8 != (FDS_ViewModelContext *)0x0) {
      *(atomic<int> *)&pFVar8->DerivedStaticStruct = (atomic<int>)0x1;
      *(code **)&(pFVar8->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
      pFVar8->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_MoneyGroup__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
      ;
      ((atomic<int> *)&pFVar8->DerivedStaticStruct)[1] = (atomic<int>)0x1;
      *(FDS_ViewModelContext **)&pFVar8->ViewModelTemplateKey = pFVar11;
      pFVar10 = pFVar8;
    }
    if ((pFVar11 == (FDS_ViewModelContext *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pUVar9 = FDS_ViewModelContext_MoneyGroup::StaticStruct();
    *(UScriptStruct **)&pFVar11->DerivedStaticStruct = pUVar9;
    this_01 = UDS_ViewModelContextManager::GetInst();
    if (this_01 != (UDS_ViewModelContextManager *)0x0) {
      if (pFVar10 != (FDS_ViewModelContext *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar10->DerivedStaticStruct =
             (atomic<int>)((int)*(atomic<int> *)&pFVar10->DerivedStaticStruct + 1);
        UNLOCK();
      }
      local_38.Object = pFVar11;
      local_38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar10;
      UDS_ViewModelContextManager::RegisterContext(this_01,&local_38);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_38.SharedReferenceCount.ReferenceController);
    }
    pFVar11->ViewModelTemplateKey = W_MoneyGroup;
    pFVar8 = pFVar11 + 1;
    if (pFVar8 != (FDS_ViewModelContext *)&pFVar7->MoneyType) {
      aVar2 = (atomic<int>)(pFVar7->MoneyType).ArrayNum;
      paVar1 = (atomic<int> *)&pFVar11[1].DerivedStaticStruct + 1;
      aVar3 = *paVar1;
      _Src = (pFVar7->MoneyType).AllocatorInstance.Data;
      *(atomic<int> *)&pFVar11[1].DerivedStaticStruct = aVar2;
      if ((aVar2 == (atomic<int>)0x0) && (aVar3 == (atomic<int>)0x0)) {
        *paVar1 = (atomic<int>)0x0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,(int)aVar2,(int)aVar3,(ForAnyElementType *)pFVar8,(int)aVar2,(int *)paVar1);
        if (aVar2 != (atomic<int>)0x0) {
          memcpy((FScriptContainerElement *)pFVar8->_padding_,_Src,(longlong)(int)aVar2);
        }
      }
    }
    this_00 = (this->VM_MoneyGroup).field0_0x0.DebugPtr;
    if (pFVar10 != (FDS_ViewModelContext *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar10->DerivedStaticStruct =
           (atomic<int>)((int)*(atomic<int> *)&pFVar10->DerivedStaticStruct + 1);
      UNLOCK();
    }
    local_28.Object = pFVar11;
    local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar10;
    UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_00,&local_28);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar10);
  }
  return;
}

