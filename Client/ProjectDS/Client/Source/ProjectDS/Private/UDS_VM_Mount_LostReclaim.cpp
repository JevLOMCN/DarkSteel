// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 38

// SetClickReclaimButton_WrapperImpl @ 14b6a1e50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_Mount_LostReclaim::SetClickReclaimButton_WrapperImpl(void *param_1,void *param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  UDS_LogManager *pUVar8;
  UDS_MountLostData *this;
  UObject *pUVar9;
  UObject *pUVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  UObject *pUVar14;
  uint uVar15;
  undefined1 auStackY_318 [32];
  undefined1 auStack_2e8 [4];
  undefined4 uStack_2e4;
  int aiStack_2e0 [2];
  FWeakObjectPtr FStack_2d8;
  FWeakObjectPtr FStack_2d0;
  undefined1 *puStack_2c8;
  int iStack_2c0;
  uint uStack_2bc;
  UObject *pUStack_2b8;
  undefined4 uStack_2b0;
  int iStack_2ac;
  int iStack_2a8;
  int iStack_2a4;
  int iStack_2a0;
  undefined4 uStack_29c;
  int iStack_298;
  undefined1 auStack_294 [20];
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_280;
  undefined8 uStack_260;
  undefined4 *puStack_258;
  int *piStack_250;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> TStack_248;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> TStack_230;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> TStack_218;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> TStack_200;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> TStack_1a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_158;
  ulonglong uStack_38;
  
  uStack_38 = __security_cookie.value ^ (ulonglong)auStackY_318;
  auStack_294._4_8_ = param_1;
  UDS_PlayerData::GetMainPlayerData();
  bVar7 = FWeakObjectPtr::IsValid(&FStack_2d0);
  if (bVar7) {
    UDS_MountLostData::GetData
              ((ulong64)&FStack_2d8,UDS_PlayerData::MainPlayerEntityID,
               SUB81(*(undefined8 *)((longlong)param_1 + 0x338),0));
    bVar7 = FWeakObjectPtr::IsValid(&FStack_2d8);
    if (bVar7) {
      this = (UDS_MountLostData *)FWeakObjectPtr::Get(&FStack_2d8);
      bVar7 = UDS_MountLostData::IsRecoveryTimeLeft(this);
      iStack_2c0 = 0;
      if (bVar7) {
        TStack_1a8.Elements._0_8_ = 0;
        TStack_1a8.Elements._8_8_ = 0;
        TStack_1a8.Elements._32_8_ = 0;
        TStack_1a8.Elements._40_4_ = 0;
        TStack_1a8.Elements._44_4_ = 0x80;
        TStack_1a8.Elements._48_4_ = 0xffffffff;
        TStack_1a8.Elements._52_4_ = 0;
        TStack_1a8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
        TStack_1a8.HashSize = 0;
        pUVar9 = FWeakObjectPtr::Get(&FStack_2d8);
        uStack_2bc = 1;
        iStack_2a8 = 0;
        pUVar10 = pUVar9 + 3;
        iVar3 = *(int *)&pUVar9[3].field_0x18;
        puVar1 = &pUVar9[2].field_0x18;
        iStack_2ac = iStack_2a8;
        if (iVar3 != 0) {
          pUVar14 = *(UObject **)&pUVar9[3].field_0x10;
          if (*(UObject **)&pUVar9[3].field_0x10 == (UObject *)0x0) {
            pUVar14 = pUVar10;
          }
          uVar13 = *(uint *)pUVar14;
          iStack_2a8 = 0;
          iStack_2c0 = 0;
          while (uVar13 == 0) {
            lVar11 = (longlong)iStack_2c0;
            iStack_2a8 = iStack_2a8 + 0x20;
            iStack_2c0 = iStack_2c0 + 1;
            iStack_2ac = iVar3;
            if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_2c0)
            goto LAB_14befa70d;
            uVar13 = *(uint *)(&pUVar14->field_0x4 + lVar11 * 4);
          }
          uStack_2bc = -uVar13 & uVar13;
          uVar2 = (ulonglong)uStack_2bc * 2 + 1;
          lVar11 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
            }
          }
          iStack_298 = (int)lVar11;
          iStack_2ac = iStack_2a8 + -1 + iStack_298;
          if (iVar3 < iStack_2ac) {
            iStack_2ac = iVar3;
          }
        }
LAB_14befa70d:
        iStack_2a0 = *(int *)&pUVar9[2].field_0x20 - *(int *)&pUVar9[3].field_0x24;
        uVar13 = *(uint *)&pUVar9[3].field_0x18;
        uStack_2b0 = 0xffffffff;
        uVar15 = uVar13 & 0xffffffe0;
        TStack_280._padding_ = CONCAT44(uStack_2bc,iStack_2c0);
        TStack_280.CurrentBitIndex = iStack_2ac;
        TStack_280.UnvisitedBitMask = 0xffffffff;
        iVar12 = (int)uVar13 >> 5;
        TStack_280._28_4_ = iStack_2ac;
        TStack_280.BaseBitIndex = iStack_2a8;
        uStack_260 = CONCAT44(uStack_29c,iStack_2a0);
        puStack_2c8 = puVar1;
        pUStack_2b8 = pUVar10;
        iStack_2a4 = iStack_2ac;
        auStack_294._12_8_ = puVar1;
        TStack_280.Array = (TBitArray<FDefaultBitArrayAllocator> *)pUVar10;
        if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("StartIndex >= 0 && StartIndex <= Array.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x7af,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar4 = *(uint *)&pUVar9[3].field_0x18;
        if (uVar13 != uVar4) {
          pUVar14 = *(UObject **)&pUVar9[3].field_0x10;
          if (*(UObject **)&pUVar9[3].field_0x10 == (UObject *)0x0) {
            pUVar14 = pUVar10;
          }
          uVar13 = -1 << ((byte)uVar13 & 0x1f) &
                   *(uint *)((longlong)&pUVar14->field_0x0 + (longlong)iVar12 * 4);
          while (uVar13 == 0) {
            lVar11 = (longlong)iVar12;
            uVar15 = uVar15 + 0x20;
            iVar12 = iVar12 + 1;
            uVar13 = uVar4;
            if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
            goto LAB_14befa830;
            uVar13 = *(uint *)(&pUVar14->field_0x4 + lVar11 * 4);
          }
          uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
          lVar11 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
            }
          }
          uVar13 = (int)lVar11 + -1 + uVar15;
          if ((int)uVar4 < (int)uVar13) {
            uVar13 = uVar4;
          }
        }
LAB_14befa830:
        while( true ) {
          uVar6 = auStack_294._12_8_;
          if ((int)*(longlong *)(auStack_294._12_8_ + 8) - *(int *)(auStack_294._12_8_ + 0x34) !=
              (int)uStack_260) {
            `TSparseArray<TSparseSetElement<TTuple<int,FDS_MountLostItemInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(auStack_2e8);
          }
          if (((TStack_280.CurrentBitIndex == uVar13) && ((UObject *)TStack_280.Array == pUVar10))
             && ((undefined1 *)uVar6 == puVar1)) break;
          lVar11 = *(longlong *)uVar6 + (longlong)TStack_280.CurrentBitIndex * 0x18;
          uStack_2e4 = *(undefined4 *)(lVar11 + 4);
          aiStack_2e0[0] = *(int *)(lVar11 + 0xc) + *(int *)(lVar11 + 8);
          puStack_258 = &uStack_2e4;
          piStack_250 = aiStack_2e0;
          TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
          Emplace<TPairInitializer<int_&,int_&>_>
                    (&TStack_1a8,(TPairInitializer<int_&,int_&> *)auStack_294,(bool *)&puStack_258);
          TStack_280.UnvisitedBitMask = TStack_280.UnvisitedBitMask & ~TStack_280._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_280);
        }
        if (0 < (int)(TStack_1a8.Elements._8_4_ - TStack_1a8.Elements._52_4_)) {
          TStack_200.Elements._0_8_ = 0;
          TStack_200.Elements._40_8_ = ___xmm_00000000ffffffff0000008000000000;
          TStack_200.Elements._48_8_ = _UNK_150631d98;
          TStack_200.Elements._8_8_ = 0;
          TStack_200.Elements._32_8_ = 0;
          TStack_200.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
          TStack_200.HashSize = 0;
          TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
          operator=(&TStack_200,&TStack_1a8);
          bVar7 = DS_ItemDataUtil::HasAvailableInventorySlots
                            (PlayerNormal,
                             (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                              *)&TStack_200);
          if (!bVar7) {
            TStack_230._0_8_ = 0;
            TStack_230._8_8_ = 0;
            TStack_230._16_4_ = 0;
            UDS_UIMessageManager::OpenMsgByStringUi(0x55780,Alert_System_01,&TStack_230);
            TStack_1a8.HashSize = 0;
            if (TStack_1a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FMemory::Free((void *)TStack_1a8.Hash.SecondaryData);
            }
            TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::
            ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      (&TStack_1a8.Elements);
            return;
          }
        }
        TStack_1a8.HashSize = 0;
        if (TStack_1a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)TStack_1a8.Hash.SecondaryData);
        }
        TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (&TStack_1a8.Elements);
        uVar6 = auStack_294._4_8_;
        if ((*(UDS_M_MoneyDisplay **)(auStack_294._4_8_ + 0x328) == (UDS_M_MoneyDisplay *)0x0) ||
           (bVar7 = UDS_M_MoneyDisplay::HasEnoughMoney
                              (*(UDS_M_MoneyDisplay **)(auStack_294._4_8_ + 0x328)), bVar7)) {
          pUVar10 = FWeakObjectPtr::Get(&FStack_2d0);
          FDS_MountService::RequestMountLostReclaim
                    (*(long64 *)(uVar6 + 0x338),*(int *)&pUVar10[9].field_0x10);
        }
        else {
          TStack_218._0_8_ = 0;
          TStack_218._8_8_ = 0;
          TStack_218._16_4_ = 0;
          UDS_UIMessageManager::OpenMsgByStringUi(0x5577e,Alert_System_01,&TStack_218);
        }
      }
      else {
        TStack_248._0_8_ = 0;
        TStack_248._8_8_ = 0;
        TStack_248._16_4_ = 0;
        UDS_UIMessageManager::OpenMsgByStringUi(0x5577f,Alert_System_01,&TStack_248);
      }
    }
    else {
      pUVar8 = UDS_LogManager::GetInst();
      if (pUVar8 != (UDS_LogManager *)0x0) {
        pUVar8 = UDS_LogManager::GetInst();
        TStack_158._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&TStack_158,"UDS_VM_Mount_LostReclaim::OnClickReclaimButton",0x2e,Yes);
        UDS_LogManager::PrintLog(pUVar8,1,Warning,TStack_158.Ptr,0x184,L"mountlostdata is nullptr");
        if ((void *)TStack_158._padding_ != (void *)0x0) {
          FMemory::Free((void *)TStack_158._padding_);
        }
      }
    }
  }
  return;
}

// SetClickLostListSortOrderButton_WrapperImpl @ 14b6a1e60

void __cdecl
UDS_VM_Mount_LostReclaim::SetClickLostListSortOrderButton_WrapperImpl(void *param_1,void *param_2)

{
  FName FVar1;
  int iVar2;
  uint uVar3;
  FName FStack_18;
  int iStack_10;
  
  iVar2 = FFieldNotificationClassDescriptor::LostListSortOrder.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::LostListSortOrder.FieldName;
  uVar3 = (uint)(*(uint *)((longlong)param_1 + 0x284) == 0);
  if (*(uint *)((longlong)param_1 + 0x284) != uVar3) {
    *(uint *)((longlong)param_1 + 0x284) = uVar3;
    iStack_10 = iVar2;
    FStack_18 = FVar1;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  }
  UpdateLostList(param_1);
  return;
}

// SetClickItemListSortOrderButton_WrapperImpl @ 14b6a1e70

void __cdecl
UDS_VM_Mount_LostReclaim::SetClickItemListSortOrderButton_WrapperImpl(void *param_1,void *param_2)

{
  FName FVar1;
  int iVar2;
  uint uVar3;
  FName FStack_18;
  int iStack_10;
  
  iVar2 = FFieldNotificationClassDescriptor::ItemListSortOrder.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::ItemListSortOrder.FieldName;
  uVar3 = (uint)(*(uint *)((longlong)param_1 + 0x288) == 0);
  if (*(uint *)((longlong)param_1 + 0x288) != uVar3) {
    *(uint *)((longlong)param_1 + 0x288) = uVar3;
    iStack_10 = iVar2;
    FStack_18 = FVar1;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  }
  UpdateLostItemList(param_1);
  return;
}

// StaticClass @ 14b6a1e80

UClass * __cdecl UDS_VM_Mount_LostReclaim::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Mount_LostReclaim.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Mount_LostReclaim",
               &Z_Registration_Info_UClass_UDS_VM_Mount_LostReclaim.InnerSingleton,
               StaticRegisterNativesUDS_VM_Mount_LostReclaim,0x340,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_Mount_LostReclaim>,
               InternalVTableHelperCtorCaller<UDS_VM_Mount_LostReclaim>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Mount_LostReclaim.InnerSingleton;
}

// UDS_VM_Mount_LostReclaim @ 14b6a5950

UDS_VM_Mount_LostReclaim * __thiscall
UDS_VM_Mount_LostReclaim::UDS_VM_Mount_LostReclaim
          (UDS_VM_Mount_LostReclaim *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Mount_LostReclaim__6B_;
  (this->TxtLostListTitle).StringTableID = 0;
  (this->TxtLostListTitle).StringEnumTableNameID.ComparisonIndex = 0;
  (this->TxtLostListTitle).StringEnumTableNameID.Number = 0;
  (this->TxtLostListTitle).DateTime.Ticks = 0;
  (this->TxtLostListTitle).TimeSpan.Ticks = 0;
  (this->TxtLostListTitle).TimeExpressionType = None;
  (this->TxtLostListTitle).IsExpression = false;
  (this->TxtLostListTitle).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->TxtLostListTitle).UniqueString.Data.ArrayNum = 0;
  (this->TxtLostListTitle).UniqueString.Data.ArrayMax = 0;
  (this->TxtLostListTitle).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TxtLostListTitle).FormatArgs.ArrayNum = 0;
  (this->TxtLostListTitle).FormatArgs.ArrayMax = 0;
  (this->TxtItemListTitle).StringTableType = None;
  (this->TxtItemListTitle).StringTableID = 0;
  (this->TxtItemListTitle).StringEnumTableNameID.ComparisonIndex = 0;
  (this->TxtItemListTitle).StringEnumTableNameID.Number = 0;
  (this->TxtItemListTitle).DateTime.Ticks = 0;
  (this->TxtItemListTitle).TimeSpan.Ticks = 0;
  (this->TxtItemListTitle).TimeExpressionType = None;
  (this->TxtItemListTitle).IsExpression = false;
  (this->TxtItemListTitle).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->TxtItemListTitle).UniqueString.Data.ArrayNum = 0;
  (this->TxtItemListTitle).UniqueString.Data.ArrayMax = 0;
  (this->TxtItemListTitle).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TxtItemListTitle).FormatArgs.ArrayNum = 0;
  (this->TxtItemListTitle).FormatArgs.ArrayMax = 0;
  (this->TxtReclaimBtnName).StringTableType = None;
  (this->TxtReclaimBtnName).StringTableID = 0;
  (this->TxtReclaimBtnName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->TxtReclaimBtnName).StringEnumTableNameID.Number = 0;
  (this->TxtReclaimBtnName).DateTime.Ticks = 0;
  (this->TxtReclaimBtnName).TimeSpan.Ticks = 0;
  (this->TxtReclaimBtnName).TimeExpressionType = None;
  (this->TxtReclaimBtnName).IsExpression = false;
  (this->TxtReclaimBtnName).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->TxtReclaimBtnName).UniqueString.Data.ArrayNum = 0;
  (this->TxtReclaimBtnName).UniqueString.Data.ArrayMax = 0;
  (this->TxtReclaimBtnName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TxtReclaimBtnName).FormatArgs.ArrayNum = 0;
  (this->TxtReclaimBtnName).FormatArgs.ArrayMax = 0;
  (this->TxtLostlistCount).StringTableType = None;
  (this->TxtLostlistCount).StringTableID = 0;
  (this->TxtLostlistCount).StringEnumTableNameID.ComparisonIndex = 0;
  (this->TxtLostlistCount).StringEnumTableNameID.Number = 0;
  (this->TxtLostlistCount).DateTime.Ticks = 0;
  (this->TxtLostlistCount).TimeSpan.Ticks = 0;
  (this->TxtLostlistCount).TimeExpressionType = None;
  (this->TxtLostlistCount).IsExpression = false;
  (this->TxtLostlistCount).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->TxtLostlistCount).UniqueString.Data.ArrayNum = 0;
  (this->TxtLostlistCount).UniqueString.Data.ArrayMax = 0;
  (this->TxtLostlistCount).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TxtLostlistCount).FormatArgs.ArrayNum = 0;
  (this->TxtLostlistCount).FormatArgs.ArrayMax = 0;
  (this->TxtLostItemCount).StringTableType = None;
  (this->TxtLostItemCount).StringTableID = 0;
  (this->TxtLostItemCount).StringEnumTableNameID.ComparisonIndex = 0;
  (this->TxtLostItemCount).StringEnumTableNameID.Number = 0;
  (this->TxtLostItemCount).DateTime.Ticks = 0;
  (this->TxtLostItemCount).TimeSpan.Ticks = 0;
  (this->TxtLostItemCount).TimeExpressionType = None;
  (this->TxtLostItemCount).IsExpression = false;
  (this->TxtLostItemCount).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->TxtLostItemCount).UniqueString.Data.ArrayNum = 0;
  (this->TxtLostItemCount).UniqueString.Data.ArrayMax = 0;
  (this->TxtLostItemCount).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TxtLostItemCount).FormatArgs.ArrayNum = 0;
  (this->TxtLostItemCount).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_Empty).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_Empty).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_Empty).DateTime.Ticks = 0;
  (this->FixedTxt_Empty).TimeSpan.Ticks = 0;
  (this->FixedTxt_Empty).TimeExpressionType = None;
  (this->FixedTxt_Empty).IsExpression = false;
  (this->FixedTxt_Empty).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_Empty).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_Empty).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_Empty).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_Empty).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_Empty).FormatArgs.ArrayMax = 0;
  this->LostListSortOrder = 0;
  this->ItemListSortOrder = 0;
  this->LostListWidgetIndex = 0;
  (this->ClickReclaimButton)._padding_ = '\0';
  (this->ClickReclaimButton).bIsCustomSelected = false;
  (this->ClickReclaimButton).bIsLacked = false;
  (this->ClickReclaimButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickReclaimButton).Delegate = 0;
  *(undefined8 *)&(this->ClickReclaimButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickReclaimButton).Delegate.field_0x10 = 0;
  (this->ClickLostListSortOrderButton)._padding_ = '\0';
  (this->ClickLostListSortOrderButton).bIsCustomSelected = false;
  (this->ClickLostListSortOrderButton).bIsLacked = false;
  (this->ClickLostListSortOrderButton).bIsCustomDisabled = false;
  (this->TxtLostListTitle).StringTableType = None;
  (this->FixedTxt_Empty).StringTableType = StringUi;
  (this->FixedTxt_Empty).StringTableID = 0x5575d;
  *(undefined8 *)&(this->ClickLostListSortOrderButton).Delegate = 0;
  *(undefined8 *)&(this->ClickLostListSortOrderButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickLostListSortOrderButton).Delegate.field_0x10 = 0;
  (this->ClickItemListSortOrderButton)._padding_ = '\0';
  (this->ClickItemListSortOrderButton).bIsCustomSelected = false;
  (this->ClickItemListSortOrderButton).bIsLacked = false;
  (this->ClickItemListSortOrderButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickItemListSortOrderButton).Delegate = 0;
  *(undefined8 *)&(this->ClickItemListSortOrderButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickItemListSortOrderButton).Delegate.field_0x10 = 0;
  (this->EntryBindingEventField_LostList).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_LostList).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_LostList).UserObjectList.ArrayMax = 0;
  (this->EntryBindingEventField_ItemList).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_ItemList).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_ItemList).UserObjectList.ArrayMax = 0;
  (this->VM_MoneyDisplay).field0_0x0.DebugPtr = (UDS_VM_MoneyDisplay *)0x0;
  (this->VM_Dropdown_LostList).field0_0x0.DebugPtr = (UDS_VM_Dropdown *)0x0;
  (this->VM_Dropdown_ItemList).field0_0x0.DebugPtr = (UDS_VM_Dropdown *)0x0;
  (this->M_CoinDisplay).field0_0x0.DebugPtr = (UDS_M_MoneyDisplay *)0x0;
  this->LostListSortType = None;
  this->ItemListSortType = None;
  this->SelLostListUID = 0;
  return this;
}

// UDS_VM_Mount_LostReclaim @ 14b6a5bf0

UDS_VM_Mount_LostReclaim * __thiscall
UDS_VM_Mount_LostReclaim::UDS_VM_Mount_LostReclaim
          (UDS_VM_Mount_LostReclaim *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Mount_LostReclaim__6B_;
  (this->TxtLostListTitle).StringTableID = 0;
  (this->TxtLostListTitle).StringEnumTableNameID.ComparisonIndex = 0;
  (this->TxtLostListTitle).StringEnumTableNameID.Number = 0;
  (this->TxtLostListTitle).DateTime.Ticks = 0;
  (this->TxtLostListTitle).TimeSpan.Ticks = 0;
  (this->TxtLostListTitle).TimeExpressionType = None;
  (this->TxtLostListTitle).IsExpression = false;
  (this->TxtLostListTitle).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->TxtLostListTitle).UniqueString.Data.ArrayNum = 0;
  (this->TxtLostListTitle).UniqueString.Data.ArrayMax = 0;
  (this->TxtLostListTitle).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TxtLostListTitle).FormatArgs.ArrayNum = 0;
  (this->TxtLostListTitle).FormatArgs.ArrayMax = 0;
  (this->TxtItemListTitle).StringTableType = None;
  (this->TxtItemListTitle).StringTableID = 0;
  (this->TxtItemListTitle).StringEnumTableNameID.ComparisonIndex = 0;
  (this->TxtItemListTitle).StringEnumTableNameID.Number = 0;
  (this->TxtItemListTitle).DateTime.Ticks = 0;
  (this->TxtItemListTitle).TimeSpan.Ticks = 0;
  (this->TxtItemListTitle).TimeExpressionType = None;
  (this->TxtItemListTitle).IsExpression = false;
  (this->TxtItemListTitle).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->TxtItemListTitle).UniqueString.Data.ArrayNum = 0;
  (this->TxtItemListTitle).UniqueString.Data.ArrayMax = 0;
  (this->TxtItemListTitle).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TxtItemListTitle).FormatArgs.ArrayNum = 0;
  (this->TxtItemListTitle).FormatArgs.ArrayMax = 0;
  (this->TxtReclaimBtnName).StringTableType = None;
  (this->TxtReclaimBtnName).StringTableID = 0;
  (this->TxtReclaimBtnName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->TxtReclaimBtnName).StringEnumTableNameID.Number = 0;
  (this->TxtReclaimBtnName).DateTime.Ticks = 0;
  (this->TxtReclaimBtnName).TimeSpan.Ticks = 0;
  (this->TxtReclaimBtnName).TimeExpressionType = None;
  (this->TxtReclaimBtnName).IsExpression = false;
  (this->TxtReclaimBtnName).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->TxtReclaimBtnName).UniqueString.Data.ArrayNum = 0;
  (this->TxtReclaimBtnName).UniqueString.Data.ArrayMax = 0;
  (this->TxtReclaimBtnName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TxtReclaimBtnName).FormatArgs.ArrayNum = 0;
  (this->TxtReclaimBtnName).FormatArgs.ArrayMax = 0;
  (this->TxtLostlistCount).StringTableType = None;
  (this->TxtLostlistCount).StringTableID = 0;
  (this->TxtLostlistCount).StringEnumTableNameID.ComparisonIndex = 0;
  (this->TxtLostlistCount).StringEnumTableNameID.Number = 0;
  (this->TxtLostlistCount).DateTime.Ticks = 0;
  (this->TxtLostlistCount).TimeSpan.Ticks = 0;
  (this->TxtLostlistCount).TimeExpressionType = None;
  (this->TxtLostlistCount).IsExpression = false;
  (this->TxtLostlistCount).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->TxtLostlistCount).UniqueString.Data.ArrayNum = 0;
  (this->TxtLostlistCount).UniqueString.Data.ArrayMax = 0;
  (this->TxtLostlistCount).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TxtLostlistCount).FormatArgs.ArrayNum = 0;
  (this->TxtLostlistCount).FormatArgs.ArrayMax = 0;
  (this->TxtLostItemCount).StringTableType = None;
  (this->TxtLostItemCount).StringTableID = 0;
  (this->TxtLostItemCount).StringEnumTableNameID.ComparisonIndex = 0;
  (this->TxtLostItemCount).StringEnumTableNameID.Number = 0;
  (this->TxtLostItemCount).DateTime.Ticks = 0;
  (this->TxtLostItemCount).TimeSpan.Ticks = 0;
  (this->TxtLostItemCount).TimeExpressionType = None;
  (this->TxtLostItemCount).IsExpression = false;
  (this->TxtLostItemCount).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->TxtLostItemCount).UniqueString.Data.ArrayNum = 0;
  (this->TxtLostItemCount).UniqueString.Data.ArrayMax = 0;
  (this->TxtLostItemCount).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TxtLostItemCount).FormatArgs.ArrayNum = 0;
  (this->TxtLostItemCount).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_Empty).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_Empty).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_Empty).DateTime.Ticks = 0;
  (this->FixedTxt_Empty).TimeSpan.Ticks = 0;
  (this->FixedTxt_Empty).TimeExpressionType = None;
  (this->FixedTxt_Empty).IsExpression = false;
  (this->FixedTxt_Empty).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_Empty).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_Empty).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_Empty).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_Empty).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_Empty).FormatArgs.ArrayMax = 0;
  this->LostListSortOrder = 0;
  this->ItemListSortOrder = 0;
  this->LostListWidgetIndex = 0;
  (this->ClickReclaimButton)._padding_ = '\0';
  (this->ClickReclaimButton).bIsCustomSelected = false;
  (this->ClickReclaimButton).bIsLacked = false;
  (this->ClickReclaimButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickReclaimButton).Delegate = 0;
  *(undefined8 *)&(this->ClickReclaimButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickReclaimButton).Delegate.field_0x10 = 0;
  (this->ClickLostListSortOrderButton)._padding_ = '\0';
  (this->ClickLostListSortOrderButton).bIsCustomSelected = false;
  (this->ClickLostListSortOrderButton).bIsLacked = false;
  (this->ClickLostListSortOrderButton).bIsCustomDisabled = false;
  (this->TxtLostListTitle).StringTableType = None;
  (this->FixedTxt_Empty).StringTableType = StringUi;
  (this->FixedTxt_Empty).StringTableID = 0x5575d;
  *(undefined8 *)&(this->ClickLostListSortOrderButton).Delegate = 0;
  *(undefined8 *)&(this->ClickLostListSortOrderButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickLostListSortOrderButton).Delegate.field_0x10 = 0;
  (this->ClickItemListSortOrderButton)._padding_ = '\0';
  (this->ClickItemListSortOrderButton).bIsCustomSelected = false;
  (this->ClickItemListSortOrderButton).bIsLacked = false;
  (this->ClickItemListSortOrderButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickItemListSortOrderButton).Delegate = 0;
  *(undefined8 *)&(this->ClickItemListSortOrderButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickItemListSortOrderButton).Delegate.field_0x10 = 0;
  (this->EntryBindingEventField_LostList).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_LostList).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_LostList).UserObjectList.ArrayMax = 0;
  (this->EntryBindingEventField_ItemList).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_ItemList).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_ItemList).UserObjectList.ArrayMax = 0;
  (this->VM_MoneyDisplay).field0_0x0.DebugPtr = (UDS_VM_MoneyDisplay *)0x0;
  (this->VM_Dropdown_LostList).field0_0x0.DebugPtr = (UDS_VM_Dropdown *)0x0;
  (this->VM_Dropdown_ItemList).field0_0x0.DebugPtr = (UDS_VM_Dropdown *)0x0;
  (this->M_CoinDisplay).field0_0x0.DebugPtr = (UDS_M_MoneyDisplay *)0x0;
  this->LostListSortType = None;
  this->ItemListSortType = None;
  this->SelLostListUID = 0;
  return this;
}

// ~UDS_VM_Mount_LostReclaim @ 14b6a7420

void __thiscall UDS_VM_Mount_LostReclaim::~UDS_VM_Mount_LostReclaim(UDS_VM_Mount_LostReclaim *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Mount_LostReclaim__6B_;
  pFVar1 = (this->EntryBindingEventField_ItemList).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EntryBindingEventField_LostList).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->ClickItemListSortOrderButton).Delegate);
  pvVar2 = *(void **)&(this->ClickItemListSortOrderButton).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickItemListSortOrderButton).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->ClickLostListSortOrderButton).Delegate);
  pvVar2 = *(void **)&(this->ClickLostListSortOrderButton).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickLostListSortOrderButton).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickReclaimButton).Delegate);
  pvVar2 = *(void **)&(this->ClickReclaimButton).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickReclaimButton).Delegate);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedTxt_Empty).FormatArgs.AllocatorInstance.Data,
             (this->FixedTxt_Empty).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedTxt_Empty).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedTxt_Empty).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->TxtLostItemCount).FormatArgs.AllocatorInstance.Data,
             (this->TxtLostItemCount).FormatArgs.ArrayNum);
  pFVar1 = (this->TxtLostItemCount).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TxtLostItemCount).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->TxtLostlistCount).FormatArgs.AllocatorInstance.Data,
             (this->TxtLostlistCount).FormatArgs.ArrayNum);
  pFVar1 = (this->TxtLostlistCount).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TxtLostlistCount).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->TxtReclaimBtnName).FormatArgs.AllocatorInstance.Data,
             (this->TxtReclaimBtnName).FormatArgs.ArrayNum);
  pFVar1 = (this->TxtReclaimBtnName).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TxtReclaimBtnName).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->TxtItemListTitle).FormatArgs.AllocatorInstance.Data,
             (this->TxtItemListTitle).FormatArgs.ArrayNum);
  pFVar1 = (this->TxtItemListTitle).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TxtItemListTitle).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->TxtLostListTitle).FormatArgs.AllocatorInstance.Data,
             (this->TxtLostListTitle).FormatArgs.ArrayNum);
  pFVar1 = (this->TxtLostListTitle).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TxtLostListTitle).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6a99b0

IClassDescriptor * __thiscall
UDS_VM_Mount_LostReclaim::GetFieldNotificationDescriptor(UDS_VM_Mount_LostReclaim *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_Mount_LostReclaim::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6aa580

UClass * __cdecl UDS_VM_Mount_LostReclaim::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Mount_LostReclaim.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Mount_LostReclaim",
               &Z_Registration_Info_UClass_UDS_VM_Mount_LostReclaim.InnerSingleton,
               StaticRegisterNativesUDS_VM_Mount_LostReclaim,0x340,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_Mount_LostReclaim>,
               InternalVTableHelperCtorCaller<UDS_VM_Mount_LostReclaim>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Mount_LostReclaim.InnerSingleton;
}

// GetTickableTickType @ 14b6aab90

ETickableTickType __thiscall
UDS_VM_Mount_LostReclaim::GetTickableTickType(UDS_VM_Mount_LostReclaim *this)

{
  return Conditional;
}

// StaticRegisterNativesUDS_VM_Mount_LostReclaim @ 14b6aad60

void __cdecl UDS_VM_Mount_LostReclaim::StaticRegisterNativesUDS_VM_Mount_LostReclaim(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_Mount_LostReclaim_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnMountLostItemDataSet @ 14b6ac140

void __cdecl
UDS_VM_Mount_LostReclaim::execOnMountLostItemDataSet(UObject *param_1,FFrame *param_2,void *param_3)

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
  OnMountLostItemDataSet((UDS_VM_Mount_LostReclaim *)param_1,local_res10);
  return;
}

// BindModel @ 14bed8500

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UDS_VM_Mount_LostReclaim::BindModel(UDS_VM_Mount_LostReclaim *this)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  char *pcVar4;
  UObject *this_00;
  UFunction *pUVar5;
  UDS_MountEvent *pUVar6;
  char *pcVar7;
  <lambda_1> local_res10 [8];
  FWeakObjectPtr local_res18;
  FName local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_e8;
  FWeakObjectPtr local_e0;
  FName local_d8;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_c8;
  FName local_b8;
  UDS_VM_Mount_LostReclaim *local_b0;
  FName *local_a8;
  FDestructionSentinel local_a0;
  undefined1 local_88 [56];
  FReadAccessScope local_50;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  TDS_DataSetGetter<UDS_MountLostDataSet>::Get((ulong64)&local_res18);
  bVar2 = FWeakObjectPtr::IsValid(&local_res18);
  if (!bVar2) goto LAB_14bed8767;
  pUVar3 = FWeakObjectPtr::Get(&local_res18);
  pcVar4 = strstr("&UDS_VM_Mount_LostReclaim::OnMountLostItemDataSet","::");
  if (pcVar4 == (char *)0x0) {
LAB_14bed85ab:
    pcVar7 = &DAT_00000002;
LAB_14bed85b0:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result && Result[2] != \'0\'",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                       ,0x1da,L"\'%hs\' does not look like a member function");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    do {
      pcVar7 = pcVar4;
      pcVar4 = strstr(pcVar7 + 1,"::");
    } while (pcVar4 != (char *)0x0);
    if (pcVar7 == (char *)0x0) goto LAB_14bed85ab;
    pcVar7 = pcVar7 + 2;
    if (*pcVar7 == '0') goto LAB_14bed85b0;
  }
  ::FName::FName(&local_b8,pcVar7);
  if ((this == (UDS_VM_Mount_LostReclaim *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x4c8,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_e8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_e0.ObjectIndex = 0;
  local_e0.ObjectSerialNumber = 0;
  local_d8.ComparisonIndex.Value = 0;
  local_d8.Number = 0;
  local_res20 = local_b8;
  if ((this == (UDS_VM_Mount_LostReclaim *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x46d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_b0 = this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (this != (UDS_VM_Mount_LostReclaim *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&local_e0,(FObjectPtr)&local_b0);
  local_d8 = local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&local_e8,(FReadAccessScope *)(local_88 + 0x20));
  if ((local_d8 == (FName)0x0) ||
     (this_00 = FWeakObjectPtr::Get(&local_e0), this_00 == (UObject *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_88 + 0x20));
LAB_14bed86e1:
    local_a8 = &local_res20;
    `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,UDS_DataSetBase_*>::
    __Internal_BindDynamic<UDS_VM_Mount_LostReclaim>'::__l2::<lambda_1>::operator()(&local_a8);
  }
  else {
    pUVar5 = UObject::FindFunction(this_00,local_d8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_88 + 0x20));
    if (pUVar5 == (UFunction *)0x0) goto LAB_14bed86e1;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_e8,&local_50);
  local_c8.Object = local_e0;
  local_c8.FunctionName = local_d8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_50);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(pUVar3 + 1),
             (FWriteAccessScope *)&local_a0);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)&pUVar3[1].field_0x8,local_res10,Default);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::AddInternal
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar3 + 1),&local_c8);
  if (local_a0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a0.Accessor,&local_a0);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_e8.AccessDetector);
LAB_14bed8767:
  pUVar6 = UDS_MountEvent::GetEvent();
  if (pUVar6 != (UDS_MountEvent *)0x0) {
    local_c8.FunctionName = (FName)((ulonglong)local_c8.FunctionName & 0xffffffff00000000);
    local_c8.Object = (FWeakObjectPtr)OnLostListSelected;
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar6->LostListSelectedDelegate,this);
    local_88._16_4_ = local_c8.Object.ObjectIndex;
    local_88._20_4_ = local_c8.Object.ObjectSerialNumber;
    local_88._24_4_ = local_c8.FunctionName.ComparisonIndex.Value;
    local_88._28_4_ = local_c8.FunctionName.Number;
    TMulticastDelegateRegistration<void___cdecl(__int64),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_Mount_LostReclaim>
              ((TMulticastDelegateRegistration<void___cdecl(__int64),FDefaultDelegateUserPolicy> *)
               &pUVar6->LostListSelectedDelegate,(UDS_VM_Mount_LostReclaim *)local_88,
               (pmf_b41743d9 *)this);
  }
  return;
}

// OnClickItemListSortOrderButton @ 14bef9b90

void __thiscall
UDS_VM_Mount_LostReclaim::OnClickItemListSortOrderButton
          (UDS_VM_Mount_LostReclaim *this,FDS_ButtonEventField *param_1)

{
  FName FVar1;
  int iVar2;
  uint uVar3;
  FName local_18;
  int local_10;
  
  iVar2 = FFieldNotificationClassDescriptor::ItemListSortOrder.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::ItemListSortOrder.FieldName;
  uVar3 = (uint)(this->ItemListSortOrder == 0);
  if (this->ItemListSortOrder != uVar3) {
    this->ItemListSortOrder = uVar3;
    local_10 = iVar2;
    local_18 = FVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  UpdateLostItemList(this);
  return;
}

// OnClickLostListSortOrderButton @ 14bef9fc0

void __thiscall
UDS_VM_Mount_LostReclaim::OnClickLostListSortOrderButton
          (UDS_VM_Mount_LostReclaim *this,FDS_ButtonEventField *param_1)

{
  FName FVar1;
  int iVar2;
  uint uVar3;
  FName local_18;
  int local_10;
  
  iVar2 = FFieldNotificationClassDescriptor::LostListSortOrder.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::LostListSortOrder.FieldName;
  uVar3 = (uint)(this->LostListSortOrder == 0);
  if (this->LostListSortOrder != uVar3) {
    this->LostListSortOrder = uVar3;
    local_10 = iVar2;
    local_18 = FVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  UpdateLostList(this);
  return;
}

// OnClickReclaimButton @ 14befa4e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Mount_LostReclaim::OnClickReclaimButton
          (UDS_VM_Mount_LostReclaim *this,FDS_ButtonEventField *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  UDS_M_MoneyDisplay *this_00;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  UDS_LogManager *pUVar8;
  UDS_MountLostData *this_01;
  UObject *pUVar9;
  UObject *pUVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  UObject *pUVar14;
  uint uVar15;
  undefined1 auStackY_318 [32];
  undefined1 local_2e8 [4];
  undefined4 local_2e4;
  int local_2e0 [2];
  FWeakObjectPtr local_2d8;
  FWeakObjectPtr local_2d0;
  undefined1 *local_2c8;
  int iStack_2c0;
  uint uStack_2bc;
  UObject *local_2b8;
  undefined4 uStack_2b0;
  int iStack_2ac;
  int local_2a8;
  int iStack_2a4;
  int iStack_2a0;
  undefined4 uStack_29c;
  int local_298;
  undefined1 local_294 [20];
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_280;
  undefined8 uStack_260;
  undefined4 *local_258;
  int *local_250;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_248;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_230;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_218;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> local_200;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> local_1a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_318;
  local_294._4_8_ = this;
  UDS_PlayerData::GetMainPlayerData();
  bVar7 = FWeakObjectPtr::IsValid(&local_2d0);
  if (bVar7) {
    UDS_MountLostData::GetData
              ((ulong64)&local_2d8,UDS_PlayerData::MainPlayerEntityID,SUB81(this->SelLostListUID,0))
    ;
    bVar7 = FWeakObjectPtr::IsValid(&local_2d8);
    if (bVar7) {
      this_01 = (UDS_MountLostData *)FWeakObjectPtr::Get(&local_2d8);
      bVar7 = UDS_MountLostData::IsRecoveryTimeLeft(this_01);
      iStack_2c0 = 0;
      if (bVar7) {
        local_1a8.Elements._0_8_ = 0;
        local_1a8.Elements._8_8_ = 0;
        local_1a8.Elements._32_8_ = 0;
        local_1a8.Elements._40_4_ = 0;
        local_1a8.Elements._44_4_ = 0x80;
        local_1a8.Elements._48_4_ = 0xffffffff;
        local_1a8.Elements._52_4_ = 0;
        local_1a8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
        local_1a8.HashSize = 0;
        pUVar9 = FWeakObjectPtr::Get(&local_2d8);
        uStack_2bc = 1;
        local_2a8 = 0;
        pUVar10 = pUVar9 + 3;
        iVar3 = *(int *)&pUVar9[3].field_0x18;
        puVar1 = &pUVar9[2].field_0x18;
        iStack_2ac = local_2a8;
        if (iVar3 != 0) {
          pUVar14 = *(UObject **)&pUVar9[3].field_0x10;
          if (*(UObject **)&pUVar9[3].field_0x10 == (UObject *)0x0) {
            pUVar14 = pUVar10;
          }
          uVar13 = *(uint *)pUVar14;
          local_2a8 = 0;
          iStack_2c0 = 0;
          while (uVar13 == 0) {
            lVar11 = (longlong)iStack_2c0;
            local_2a8 = local_2a8 + 0x20;
            iStack_2c0 = iStack_2c0 + 1;
            iStack_2ac = iVar3;
            if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_2c0)
            goto LAB_14befa70d;
            uVar13 = *(uint *)(&pUVar14->field_0x4 + lVar11 * 4);
          }
          uStack_2bc = -uVar13 & uVar13;
          uVar2 = (ulonglong)uStack_2bc * 2 + 1;
          lVar11 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
            }
          }
          local_298 = (int)lVar11;
          iStack_2ac = local_2a8 + -1 + local_298;
          if (iVar3 < iStack_2ac) {
            iStack_2ac = iVar3;
          }
        }
LAB_14befa70d:
        iStack_2a0 = *(int *)&pUVar9[2].field_0x20 - *(int *)&pUVar9[3].field_0x24;
        uVar13 = *(uint *)&pUVar9[3].field_0x18;
        uStack_2b0 = 0xffffffff;
        uVar15 = uVar13 & 0xffffffe0;
        TStack_280._padding_ = CONCAT44(uStack_2bc,iStack_2c0);
        TStack_280.CurrentBitIndex = iStack_2ac;
        TStack_280.UnvisitedBitMask = 0xffffffff;
        iVar12 = (int)uVar13 >> 5;
        TStack_280._28_4_ = iStack_2ac;
        TStack_280.BaseBitIndex = local_2a8;
        uStack_260 = CONCAT44(uStack_29c,iStack_2a0);
        local_2c8 = puVar1;
        local_2b8 = pUVar10;
        iStack_2a4 = iStack_2ac;
        local_294._12_8_ = puVar1;
        TStack_280.Array = (TBitArray<FDefaultBitArrayAllocator> *)pUVar10;
        if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("StartIndex >= 0 && StartIndex <= Array.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x7af,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar4 = *(uint *)&pUVar9[3].field_0x18;
        if (uVar13 != uVar4) {
          pUVar14 = *(UObject **)&pUVar9[3].field_0x10;
          if (*(UObject **)&pUVar9[3].field_0x10 == (UObject *)0x0) {
            pUVar14 = pUVar10;
          }
          uVar13 = -1 << ((byte)uVar13 & 0x1f) &
                   *(uint *)((longlong)&pUVar14->field_0x0 + (longlong)iVar12 * 4);
          while (uVar13 == 0) {
            lVar11 = (longlong)iVar12;
            uVar15 = uVar15 + 0x20;
            iVar12 = iVar12 + 1;
            uVar13 = uVar4;
            if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
            goto LAB_14befa830;
            uVar13 = *(uint *)(&pUVar14->field_0x4 + lVar11 * 4);
          }
          uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
          lVar11 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
            }
          }
          uVar13 = (int)lVar11 + -1 + uVar15;
          if ((int)uVar4 < (int)uVar13) {
            uVar13 = uVar4;
          }
        }
LAB_14befa830:
        while( true ) {
          uVar6 = local_294._12_8_;
          if ((int)*(longlong *)(local_294._12_8_ + 8) - *(int *)(local_294._12_8_ + 0x34) !=
              (int)uStack_260) {
            `TSparseArray<TSparseSetElement<TTuple<int,FDS_MountLostItemInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_2e8);
          }
          if (((TStack_280.CurrentBitIndex == uVar13) && ((UObject *)TStack_280.Array == pUVar10))
             && ((undefined1 *)uVar6 == puVar1)) break;
          lVar11 = *(longlong *)uVar6 + (longlong)TStack_280.CurrentBitIndex * 0x18;
          local_2e4 = *(undefined4 *)(lVar11 + 4);
          local_2e0[0] = *(int *)(lVar11 + 0xc) + *(int *)(lVar11 + 8);
          local_258 = &local_2e4;
          local_250 = local_2e0;
          TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
          Emplace<TPairInitializer<int_&,int_&>_>
                    (&local_1a8,(TPairInitializer<int_&,int_&> *)local_294,(bool *)&local_258);
          TStack_280.UnvisitedBitMask = TStack_280.UnvisitedBitMask & ~TStack_280._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_280);
        }
        if (0 < (int)(local_1a8.Elements._8_4_ - local_1a8.Elements._52_4_)) {
          local_200.Elements._0_8_ = 0;
          local_200.Elements._40_8_ = ___xmm_00000000ffffffff0000008000000000;
          local_200.Elements._48_8_ = _UNK_150631d98;
          local_200.Elements._8_8_ = 0;
          local_200.Elements._32_8_ = 0;
          local_200.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
          local_200.HashSize = 0;
          TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
          operator=(&local_200,&local_1a8);
          bVar7 = DS_ItemDataUtil::HasAvailableInventorySlots
                            (PlayerNormal,
                             (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                              *)&local_200);
          if (!bVar7) {
            local_230._0_8_ = 0;
            local_230._8_8_ = 0;
            local_230._16_4_ = 0;
            UDS_UIMessageManager::OpenMsgByStringUi(0x55780,Alert_System_01,&local_230);
            local_1a8.HashSize = 0;
            if (local_1a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FMemory::Free((void *)local_1a8.Hash.SecondaryData);
            }
            TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::
            ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      (&local_1a8.Elements);
            return;
          }
        }
        local_1a8.HashSize = 0;
        if (local_1a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_1a8.Hash.SecondaryData);
        }
        TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (&local_1a8.Elements);
        uVar6 = local_294._4_8_;
        this_00 = (((TObjectPtr<UDS_M_MoneyDisplay> *)(local_294._4_8_ + 0x328))->field0_0x0).
                  DebugPtr;
        if ((this_00 == (UDS_M_MoneyDisplay *)0x0) ||
           (bVar7 = UDS_M_MoneyDisplay::HasEnoughMoney(this_00), bVar7)) {
          pUVar10 = FWeakObjectPtr::Get(&local_2d0);
          FDS_MountService::RequestMountLostReclaim
                    (*(long64 *)(uVar6 + 0x338),*(int *)&pUVar10[9].field_0x10);
        }
        else {
          local_218._0_8_ = 0;
          local_218._8_8_ = 0;
          local_218._16_4_ = 0;
          UDS_UIMessageManager::OpenMsgByStringUi(0x5577e,Alert_System_01,&local_218);
        }
      }
      else {
        local_248._0_8_ = 0;
        local_248._8_8_ = 0;
        local_248._16_4_ = 0;
        UDS_UIMessageManager::OpenMsgByStringUi(0x5577f,Alert_System_01,&local_248);
      }
    }
    else {
      pUVar8 = UDS_LogManager::GetInst();
      if (pUVar8 != (UDS_LogManager *)0x0) {
        pUVar8 = UDS_LogManager::GetInst();
        local_158._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_158,"UDS_VM_Mount_LostReclaim::OnClickReclaimButton",0x2e,Yes);
        UDS_LogManager::PrintLog(pUVar8,1,Warning,local_158.Ptr,0x184,L"mountlostdata is nullptr");
        if ((void *)local_158._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_158._padding_);
        }
      }
    }
  }
  return;
}

// OnItemListSortTypeChanged @ 14befe6a0

void __thiscall
UDS_VM_Mount_LostReclaim::OnItemListSortTypeChanged(UDS_VM_Mount_LostReclaim *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FDS_SortingGroupTableRow *this_00;
  
  this_00 = FDS_SortingGroupTableRow::GetRef(8,true);
  bVar2 = FDS_SortingGroupTableRow::IsValid(this_00);
  if (((bVar2) && (-1 < param_1)) && (param_1 < (this_00->ID_SortingType).ArrayNum)) {
    uVar3 = 0;
    if (param_1 < (this_00->ID_SortingType).ArrayNum) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((FScriptContainerElement)this->ItemListSortType !=
        (this_00->ID_SortingType).AllocatorInstance.Data[param_1]) {
      uVar3 = 0;
      if (param_1 < (this_00->ID_SortingType).ArrayNum) {
        uVar3 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      this->ItemListSortType =
           (EDS_SortingType)(this_00->ID_SortingType).AllocatorInstance.Data[param_1];
      UpdateLostItemList(this);
    }
  }
  return;
}

// OnLostListSelected @ 14befec30

void __thiscall
UDS_VM_Mount_LostReclaim::OnLostListSelected(UDS_VM_Mount_LostReclaim *this,long64 param_1)

{
  FName FVar1;
  FName local_18;
  int local_10;
  
  if (this->SelLostListUID != param_1) {
    this->SelLostListUID = param_1;
    FVar1 = FFieldNotificationClassDescriptor::IsSelectedMountLost.FieldName;
    if (this->IsSelectedMountLost != 0 < param_1) {
      local_10 = FFieldNotificationClassDescriptor::IsSelectedMountLost.BitNumber;
      this->IsSelectedMountLost = 0 < param_1;
      local_18 = FVar1;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
    SetDisableReclaimBtn(this);
    SetTxtLostItemCount(this);
    UpdateLostItemList(this);
    return;
  }
  return;
}

// OnLostListSortTypeChanged @ 14befed00

void __thiscall
UDS_VM_Mount_LostReclaim::OnLostListSortTypeChanged(UDS_VM_Mount_LostReclaim *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FDS_SortingGroupTableRow *this_00;
  
  this_00 = FDS_SortingGroupTableRow::GetRef(7,true);
  bVar2 = FDS_SortingGroupTableRow::IsValid(this_00);
  if (((bVar2) && (-1 < param_1)) && (param_1 < (this_00->ID_SortingType).ArrayNum)) {
    uVar3 = 0;
    if (param_1 < (this_00->ID_SortingType).ArrayNum) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((FScriptContainerElement)this->LostListSortType !=
        (this_00->ID_SortingType).AllocatorInstance.Data[param_1]) {
      uVar3 = 0;
      if (param_1 < (this_00->ID_SortingType).ArrayNum) {
        uVar3 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      this->LostListSortType =
           (EDS_SortingType)(this_00->ID_SortingType).AllocatorInstance.Data[param_1];
      UpdateLostList(this);
    }
  }
  return;
}

// OnMountLostItemDataSet @ 14beff120

void __thiscall
UDS_VM_Mount_LostReclaim::OnMountLostItemDataSet
          (UDS_VM_Mount_LostReclaim *this,UDS_DataSetBase *param_1)

{
  FName FVar1;
  int iVar2;
  FName local_18;
  int local_10;
  
  SetTxtLostlistCount(this);
  SetTxtLostItemCount(this);
  SetDisableReclaimBtn(this);
  SetLostListWidgetIndex(this);
  iVar2 = FFieldNotificationClassDescriptor::IsSelectedMountLost.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::IsSelectedMountLost.FieldName;
  if (this->IsSelectedMountLost != false) {
    this->IsSelectedMountLost = false;
    local_10 = iVar2;
    local_18 = FVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  UpdateLostItemList(this);
  UpdateLostList(this);
  return;
}

// OnSetViewModel @ 14bf06940

void __thiscall
UDS_VM_Mount_LostReclaim::OnSetViewModel
          (UDS_VM_Mount_LostReclaim *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FName FVar2;
  int iVar3;
  FName local_18;
  int local_10;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if (param_1->Object != (FDS_ViewModelContext *)0x0) {
    SetVM_MoneyDisplay(this);
    SetVM_Dropdown_ItemList(this);
    SetVM_Dropdown_LostList(this);
    SetDisableReclaimBtn(this);
    SetLostListWidgetIndex(this);
    iVar3 = FFieldNotificationClassDescriptor::IsSelectedMountLost.BitNumber;
    FVar2 = FFieldNotificationClassDescriptor::IsSelectedMountLost.FieldName;
    if (this->IsSelectedMountLost != false) {
      this->IsSelectedMountLost = false;
      local_10 = iVar3;
      local_18 = FVar2;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
    FDS_Text::SetTextFromStringTable(&this->TxtLostListTitle,StringUi,0x5576f);
    local_10 = FFieldNotificationClassDescriptor::TxtLostListTitle.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::TxtLostListTitle.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    FDS_Text::SetTextFromStringTable(&this->TxtItemListTitle,StringUi,0x55770);
    local_10 = FFieldNotificationClassDescriptor::TxtItemListTitle.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::TxtItemListTitle.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    FDS_Text::SetTextFromStringTable(&this->TxtReclaimBtnName,StringUi,0x5576b);
    local_10 = FFieldNotificationClassDescriptor::TxtReclaimBtnName.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::TxtReclaimBtnName.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    SetTxtLostlistCount(this);
    SetTxtLostItemCount(this);
    UpdateLostList(this);
    UpdateLostItemList(this);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnUpdate @ 14bf0acd0

void __thiscall UDS_VM_Mount_LostReclaim::OnUpdate(UDS_VM_Mount_LostReclaim *this,float param_1)

{
  UDS_M_MoneyDisplay *this_00;
  bool bVar1;
  UDS_MountLostData *this_01;
  bool bVar2;
  FWeakObjectPtr FStackX_8;
  FName FStack_18;
  int iStack_10;
  
  UDS_MountLostData::GetData
            ((ulong64)&FStackX_8,UDS_PlayerData::MainPlayerEntityID,SUB81(this->SelLostListUID,0));
  bVar1 = FWeakObjectPtr::IsValid(&FStackX_8);
  if (bVar1) {
    this_01 = (UDS_MountLostData *)FWeakObjectPtr::Get(&FStackX_8);
    bVar1 = UDS_MountLostData::IsRecoveryTimeLeft(this_01);
    bVar2 = false;
    if (!bVar1) {
      bVar2 = true;
    }
  }
  else {
    bVar2 = true;
  }
  this_00 = (this->M_CoinDisplay).field0_0x0.DebugPtr;
  if (this_00 != (UDS_M_MoneyDisplay *)0x0) {
    bVar1 = UDS_M_MoneyDisplay::HasEnoughMoney(this_00);
    if (!bVar1) {
      bVar2 = true;
    }
  }
  iStack_10 = FFieldNotificationClassDescriptor::DisableReclaimBtn.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::DisableReclaimBtn.FieldName;
  if (this->DisableReclaimBtn != bVar2) {
    this->DisableReclaimBtn = bVar2;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_18);
  }
  return;
}

// SetDisableReclaimBtn @ 14bf13910

void __thiscall UDS_VM_Mount_LostReclaim::SetDisableReclaimBtn(UDS_VM_Mount_LostReclaim *this)

{
  UDS_M_MoneyDisplay *this_00;
  bool bVar1;
  UDS_MountLostData *this_01;
  bool bVar2;
  FWeakObjectPtr local_res8;
  FName local_18;
  int local_10;
  
  UDS_MountLostData::GetData
            ((ulong64)&local_res8,UDS_PlayerData::MainPlayerEntityID,SUB81(this->SelLostListUID,0));
  bVar1 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar1) {
    this_01 = (UDS_MountLostData *)FWeakObjectPtr::Get(&local_res8);
    bVar1 = UDS_MountLostData::IsRecoveryTimeLeft(this_01);
    bVar2 = false;
    if (!bVar1) {
      bVar2 = true;
    }
  }
  else {
    bVar2 = true;
  }
  this_00 = (this->M_CoinDisplay).field0_0x0.DebugPtr;
  if (this_00 != (UDS_M_MoneyDisplay *)0x0) {
    bVar1 = UDS_M_MoneyDisplay::HasEnoughMoney(this_00);
    if (!bVar1) {
      bVar2 = true;
    }
  }
  local_10 = FFieldNotificationClassDescriptor::DisableReclaimBtn.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::DisableReclaimBtn.FieldName;
  if (this->DisableReclaimBtn != bVar2) {
    this->DisableReclaimBtn = bVar2;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetIsSelectedMountLost @ 14bf14ef0

void __thiscall
UDS_VM_Mount_LostReclaim::SetIsSelectedMountLost(UDS_VM_Mount_LostReclaim *this,bool param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::IsSelectedMountLost.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsSelectedMountLost.FieldName;
  if (this->IsSelectedMountLost != param_1) {
    this->IsSelectedMountLost = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetItemListSortOrder @ 14bf14f90

void __thiscall
UDS_VM_Mount_LostReclaim::SetItemListSortOrder(UDS_VM_Mount_LostReclaim *this,int param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::ItemListSortOrder.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::ItemListSortOrder.FieldName;
  if (this->ItemListSortOrder != param_1) {
    this->ItemListSortOrder = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetLostListSortOrder @ 14bf15c20

void __thiscall
UDS_VM_Mount_LostReclaim::SetLostListSortOrder(UDS_VM_Mount_LostReclaim *this,int param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::LostListSortOrder.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::LostListSortOrder.FieldName;
  if (this->LostListSortOrder != param_1) {
    this->LostListSortOrder = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetLostListWidgetIndex @ 14bf15c70

void __thiscall UDS_VM_Mount_LostReclaim::SetLostListWidgetIndex(UDS_VM_Mount_LostReclaim *this)

{
  bool bVar1;
  int iVar2;
  UDS_MountLostDataSet *this_00;
  uint uVar3;
  FWeakObjectPtr local_res8;
  FName local_18;
  int local_10;
  
  uVar3 = 1;
  TDS_DataSetGetter<UDS_MountLostDataSet>::Get((ulong64)&local_res8);
  bVar1 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar1) {
    this_00 = (UDS_MountLostDataSet *)FWeakObjectPtr::Get(&local_res8);
    iVar2 = UDS_MountLostDataSet::GetMountLostCount(this_00);
    uVar3 = (uint)(iVar2 < 1);
  }
  local_10 = FFieldNotificationClassDescriptor::LostListWidgetIndex.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::LostListWidgetIndex.FieldName;
  if (this->LostListWidgetIndex != uVar3) {
    this->LostListWidgetIndex = uVar3;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetTxtItemListTitle @ 14bf192e0

void __thiscall UDS_VM_Mount_LostReclaim::SetTxtItemListTitle(UDS_VM_Mount_LostReclaim *this)

{
  FName local_18;
  int local_10;
  
  FDS_Text::SetTextFromStringTable(&this->TxtItemListTitle,StringUi,0x55770);
  local_10 = FFieldNotificationClassDescriptor::TxtItemListTitle.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::TxtItemListTitle.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetTxtLostItemCount @ 14bf19330

void __thiscall UDS_VM_Mount_LostReclaim::SetTxtLostItemCount(UDS_VM_Mount_LostReclaim *this)

{
  int *piVar1;
  TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> *pTVar2;
  FInstancedStruct *this_00;
  FObjectPtr_u_0 FVar3;
  bool bVar4;
  int iVar5;
  UObject *pUVar6;
  FObjectPtr_u_0 *pFVar7;
  FDS_Int32StringFormatArg *pFVar8;
  int iVar9;
  FWeakObjectPtr local_res8;
  FName local_18;
  int local_10;
  
  iVar9 = 0;
  UDS_MountLostData::GetData
            ((ulong64)&local_res8,UDS_PlayerData::MainPlayerEntityID,SUB81(this->SelLostListUID,0));
  bVar4 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar4) {
    pUVar6 = FWeakObjectPtr::Get(&local_res8);
    iVar9 = *(int *)&pUVar6[2].field_0x20 - *(int *)&pUVar6[3].field_0x24;
  }
  (this->TxtLostItemCount).StringTableType = StringUi;
  pTVar2 = &(this->TxtLostItemCount).FormatArgs;
  (this->TxtLostItemCount).StringTableID = 0x55771;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(pTVar2->AllocatorInstance).Data,
             (this->TxtLostItemCount).FormatArgs.ArrayNum);
  iVar5 = (this->TxtLostItemCount).FormatArgs.ArrayMax;
  piVar1 = &(this->TxtLostItemCount).FormatArgs.ArrayMax;
  (this->TxtLostItemCount).FormatArgs.ArrayNum = 0;
  if (iVar5 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  iVar5 = (this->TxtLostItemCount).FormatArgs.ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->TxtLostItemCount).FormatArgs.ArrayNum = iVar5 + 1;
  this_00 = (FInstancedStruct *)((pTVar2->AllocatorInstance).Data + (longlong)iVar5 * 0x28);
  FInstancedStruct::FInstancedStruct(this_00);
  pFVar7 = (FObjectPtr_u_0 *)FNumberFormattingOptions::DefaultWithGrouping();
  FVar3 = pFVar7[1];
  this_00[1].ScriptStruct.field0_0x0.ObjectPtr.field0_0x0 = *pFVar7;
  this_00[1].StructMemory = (uchar *)FVar3;
  this_00[2].ScriptStruct.field0_0x0 = (TObjectPtr<UScriptStruct_const_>_u_0)pFVar7[2];
  FInstancedStruct::InitializeAs<FDS_Int32StringFormatArg>(this_00);
  pFVar8 = FInstancedStruct::GetMutablePtr<FDS_Int32StringFormatArg>(this_00);
  if (pFVar8 != (FDS_Int32StringFormatArg *)0x0) {
    pFVar8->Value = iVar9;
  }
  local_10 = FFieldNotificationClassDescriptor::TxtLostItemCount.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::TxtLostItemCount.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetTxtLostListTitle @ 14bf19480

void __thiscall UDS_VM_Mount_LostReclaim::SetTxtLostListTitle(UDS_VM_Mount_LostReclaim *this)

{
  FName local_18;
  int local_10;
  
  FDS_Text::SetTextFromStringTable(&this->TxtLostListTitle,StringUi,0x5576f);
  local_10 = FFieldNotificationClassDescriptor::TxtLostListTitle.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::TxtLostListTitle.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetTxtLostlistCount @ 14bf194d0

void __thiscall UDS_VM_Mount_LostReclaim::SetTxtLostlistCount(UDS_VM_Mount_LostReclaim *this)

{
  int *piVar1;
  TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> *pTVar2;
  FInstancedStruct *pFVar3;
  FObjectPtr_u_0 FVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  UDS_MountLostDataSet *this_00;
  FObjectPtr_u_0 *pFVar9;
  FDS_Int32StringFormatArg *pFVar10;
  FWeakObjectPtr local_res8;
  FName local_28;
  int local_20;
  
  iVar6 = 0;
  TDS_DataSetGetter<UDS_MountLostDataSet>::Get((ulong64)&local_res8);
  bVar5 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar5) {
    this_00 = (UDS_MountLostDataSet *)FWeakObjectPtr::Get(&local_res8);
    iVar6 = UDS_MountLostDataSet::GetMountLostCount(this_00);
  }
  iVar7 = DS_CommonDataHelper::MountLostListMax();
  (this->TxtLostlistCount).StringTableType = StringUi;
  pTVar2 = &(this->TxtLostlistCount).FormatArgs;
  (this->TxtLostlistCount).StringTableID = 0x55743;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(pTVar2->AllocatorInstance).Data,
             (this->TxtLostlistCount).FormatArgs.ArrayNum);
  piVar1 = &(this->TxtLostlistCount).FormatArgs.ArrayMax;
  (this->TxtLostlistCount).FormatArgs.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  iVar8 = (this->TxtLostlistCount).FormatArgs.ArrayNum;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->TxtLostlistCount).FormatArgs.ArrayNum = iVar8 + 1;
  pFVar3 = (FInstancedStruct *)((pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 0x28);
  FInstancedStruct::FInstancedStruct(pFVar3);
  pFVar9 = (FObjectPtr_u_0 *)FNumberFormattingOptions::DefaultWithGrouping();
  FVar4 = pFVar9[1];
  pFVar3[1].ScriptStruct.field0_0x0.ObjectPtr.field0_0x0 = *pFVar9;
  pFVar3[1].StructMemory = (uchar *)FVar4;
  pFVar3[2].ScriptStruct.field0_0x0 = (TObjectPtr<UScriptStruct_const_>_u_0)pFVar9[2];
  FInstancedStruct::InitializeAs<FDS_Int32StringFormatArg>(pFVar3);
  pFVar10 = FInstancedStruct::GetMutablePtr<FDS_Int32StringFormatArg>(pFVar3);
  if (pFVar10 != (FDS_Int32StringFormatArg *)0x0) {
    pFVar10->Value = iVar6;
  }
  iVar6 = (this->TxtLostlistCount).FormatArgs.ArrayNum;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->TxtLostlistCount).FormatArgs.ArrayNum = iVar6 + 1;
  pFVar3 = (FInstancedStruct *)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 0x28);
  FInstancedStruct::FInstancedStruct(pFVar3);
  pFVar9 = (FObjectPtr_u_0 *)FNumberFormattingOptions::DefaultWithGrouping();
  FVar4 = pFVar9[1];
  pFVar3[1].ScriptStruct.field0_0x0.ObjectPtr.field0_0x0 = *pFVar9;
  pFVar3[1].StructMemory = (uchar *)FVar4;
  pFVar3[2].ScriptStruct.field0_0x0 = (TObjectPtr<UScriptStruct_const_>_u_0)pFVar9[2];
  FInstancedStruct::InitializeAs<FDS_Int32StringFormatArg>(pFVar3);
  pFVar10 = FInstancedStruct::GetMutablePtr<FDS_Int32StringFormatArg>(pFVar3);
  if (pFVar10 != (FDS_Int32StringFormatArg *)0x0) {
    pFVar10->Value = iVar7;
  }
  local_20 = FFieldNotificationClassDescriptor::TxtLostlistCount.BitNumber;
  local_28 = FFieldNotificationClassDescriptor::TxtLostlistCount.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
  return;
}

// SetTxtReclaimBtnName @ 14bf19680

void __thiscall UDS_VM_Mount_LostReclaim::SetTxtReclaimBtnName(UDS_VM_Mount_LostReclaim *this)

{
  FName local_18;
  int local_10;
  
  FDS_Text::SetTextFromStringTable(&this->TxtReclaimBtnName,StringUi,0x5576b);
  local_10 = FFieldNotificationClassDescriptor::TxtReclaimBtnName.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::TxtReclaimBtnName.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetVM_Dropdown_ItemList @ 14bf19c80

void __thiscall UDS_VM_Mount_LostReclaim::SetVM_Dropdown_ItemList(UDS_VM_Mount_LostReclaim *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  code *pcVar4;
  FDS_ViewModelContext_Dropdown *pFVar5;
  bool bVar6;
  int iVar7;
  FDS_SortingGroupTableRow *this_00;
  UDS_VM_Dropdown *pUVar8;
  undefined8 *puVar9;
  ulong64 uVar10;
  FName FVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_res10 [8];
  UDS_VM_Mount_LostReclaim *local_res18;
  undefined1 local_res20 [8];
  FDS_Text local_e8;
  TSharedPtr<FDS_ViewModelContext_Dropdown,1> local_98;
  code *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  TSharedPtr<FDS_ViewModelContext,1> local_78;
  FDestructionSentinel local_68;
  undefined1 *local_50;
  
  this_00 = FDS_SortingGroupTableRow::GetRef(8,true);
  bVar6 = FDS_SortingGroupTableRow::IsValid(this_00);
  if (bVar6) {
    if (0 < (this_00->ID_SortingType).ArrayNum) {
      this->ItemListSortType = (EDS_SortingType)*(this_00->ID_SortingType).AllocatorInstance.Data;
    }
    if ((this->VM_Dropdown_ItemList).field0_0x0.DebugPtr == (UDS_VM_Dropdown *)0x0) {
      pUVar8 = UDS_ViewModelBase::CreateViewModel<UDS_VM_Dropdown>((UObject *)this);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UDS_VM_Dropdown *)0x0)
         ) {
        UE::GC::MarkAsReachable((UObject *)pUVar8);
      }
      (this->VM_Dropdown_ItemList).field0_0x0.DebugPtr = pUVar8;
      if (pUVar8 == (UDS_VM_Dropdown *)0x0) {
        return;
      }
    }
    MakeContext<FDS_ViewModelContext_Dropdown>(&local_98);
    pFVar5 = local_98.Object;
    if (local_98.Object != (FDS_ViewModelContext_Dropdown *)0x0) {
      if ((local_98.Object == (FDS_ViewModelContext_Dropdown *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      *(undefined4 *)&pFVar5->_padding_ = 0x117;
      local_88 = OnItemListSortTypeChanged;
      uStack_7c = local_78.SharedReferenceCount.ReferenceController._4_4_;
      pFVar5->bOpenUpward = true;
      uStack_80 = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar5->OnClickList,
                 (FWriteAccessScope *)&local_68);
      local_50 = &(pFVar5->OnClickList).field_0x8;
      puVar9 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_50);
      if (puVar9 != (undefined8 *)0x0) {
        *puVar9 = &___7__TCommonDelegateInstanceState___A6AXH_ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar10 = FDelegateHandle::GenerateNewID();
        puVar9[2] = uVar10;
        *puVar9 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_Mount_LostReclaim____A6AXH_ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar9[3] = 0;
        local_res18 = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar9 + 3),(FObjectPtr)&local_res18);
        puVar9[4] = local_88;
        puVar9[5] = CONCAT44(uStack_7c,uStack_80);
      }
      if (local_68.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
      }
      pFVar13 = (this_00->ID_SortingType).AllocatorInstance.Data;
      iVar3 = (this_00->ID_SortingType).ArrayNum;
      pFVar2 = pFVar13 + iVar3;
      while( true ) {
        if ((this_00->ID_SortingType).ArrayNum != iVar3) {
          local_res10[0] = 0;
          `TCheckedPointerIterator<enum_EDS_SortingType_const_,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(local_res10);
        }
        if (pFVar13 == pFVar2) break;
        if ((pFVar5 == (FDS_ViewModelContext_Dropdown *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FVar11 = DS_Util::GetStringEnumTableKey<enum_EDS_SortingType>((EDS_SortingType)local_res20);
        local_e8.StringTableType = None;
        local_e8.StringTableID = 0;
        local_e8.StringEnumTableNameID.ComparisonIndex.Value = 0;
        local_e8.StringEnumTableNameID.Number = 0;
        local_e8.TimeExpressionType = None;
        local_e8.DateTime.Ticks = 0;
        local_e8.TimeSpan.Ticks = 0;
        local_e8.IsExpression = false;
        local_e8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_e8.UniqueString.Data.ArrayNum = 0;
        local_e8.UniqueString.Data.ArrayMax = 0;
        local_e8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_e8.FormatArgs.ArrayNum = 0;
        local_e8.FormatArgs.ArrayMax = 0;
        FDS_Text::SetTextFromStringEnumTable(&local_e8,(FName *)FVar11);
        iVar7 = (pFVar5->DropdownList).ArrayNum;
        piVar1 = &(pFVar5->DropdownList).ArrayMax;
        if (iVar7 == *piVar1) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x850,&(pFVar5->DropdownList).AllocatorInstance,piVar1);
        }
        (pFVar5->DropdownList).ArrayNum = iVar7 + 1;
        pFVar12 = (pFVar5->DropdownList).AllocatorInstance.Data + (longlong)iVar7 * 0x50;
        *pFVar12 = (FScriptContainerElement)local_e8.StringTableType;
        *(long64 *)(pFVar12 + 8) = local_e8.StringTableID;
        *(FName *)(pFVar12 + 0x10) = local_e8.StringEnumTableNameID;
        *(long64 *)(pFVar12 + 0x18) = local_e8.DateTime.Ticks;
        *(long64 *)(pFVar12 + 0x20) = local_e8.TimeSpan.Ticks;
        *(EDS_TimeExpression *)(pFVar12 + 0x28) = local_e8.TimeExpressionType;
        *(undefined8 *)(pFVar12 + 0x30) = 0;
        pFVar12[0x2c] = (FScriptContainerElement)local_e8.IsExpression;
        *(FScriptContainerElement **)(pFVar12 + 0x30) =
             local_e8.UniqueString.Data.AllocatorInstance.Data;
        local_e8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        *(int *)(pFVar12 + 0x38) = local_e8.UniqueString.Data.ArrayNum;
        *(int *)(pFVar12 + 0x3c) = local_e8.UniqueString.Data.ArrayMax;
        local_e8.UniqueString.Data.ArrayNum = 0;
        local_e8.UniqueString.Data.ArrayMax = 0;
        *(undefined8 *)(pFVar12 + 0x40) = 0;
        *(FScriptContainerElement **)(pFVar12 + 0x40) = local_e8.FormatArgs.AllocatorInstance.Data;
        local_e8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        *(int *)(pFVar12 + 0x48) = local_e8.FormatArgs.ArrayNum;
        *(int *)(pFVar12 + 0x4c) = local_e8.FormatArgs.ArrayMax;
        local_e8.FormatArgs.ArrayNum = 0;
        local_e8.FormatArgs.ArrayMax = 0;
        DestructItems<FDS_TextFormatArg,int>((FDS_TextFormatArg *)0x0,0);
        if (local_e8.FormatArgs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e8.FormatArgs.AllocatorInstance.Data);
        }
        if (local_e8.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e8.UniqueString.Data.AllocatorInstance.Data);
        }
        pFVar13 = pFVar13 + 1;
      }
      pUVar8 = (this->VM_Dropdown_ItemList).field0_0x0.DebugPtr;
      local_78.Object = (FDS_ViewModelContext *)local_98.Object;
      local_78.SharedReferenceCount.ReferenceController =
           local_98.SharedReferenceCount.ReferenceController;
      if (local_98.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar8,&local_78);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_98.SharedReferenceCount.ReferenceController);
  }
  return;
}

// SetVM_Dropdown_LostList @ 14bf1a030

void __thiscall UDS_VM_Mount_LostReclaim::SetVM_Dropdown_LostList(UDS_VM_Mount_LostReclaim *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  code *pcVar4;
  FDS_ViewModelContext_Dropdown *pFVar5;
  bool bVar6;
  int iVar7;
  FDS_SortingGroupTableRow *this_00;
  UDS_VM_Dropdown *pUVar8;
  undefined8 *puVar9;
  ulong64 uVar10;
  FName FVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_res10 [8];
  UDS_VM_Mount_LostReclaim *local_res18;
  undefined1 local_res20 [8];
  FDS_Text local_e8;
  TSharedPtr<FDS_ViewModelContext_Dropdown,1> local_98;
  code *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  TSharedPtr<FDS_ViewModelContext,1> local_78;
  FDestructionSentinel local_68;
  undefined1 *local_50;
  
  this_00 = FDS_SortingGroupTableRow::GetRef(7,true);
  bVar6 = FDS_SortingGroupTableRow::IsValid(this_00);
  if (bVar6) {
    if (0 < (this_00->ID_SortingType).ArrayNum) {
      this->LostListSortType = (EDS_SortingType)*(this_00->ID_SortingType).AllocatorInstance.Data;
    }
    if ((this->VM_Dropdown_LostList).field0_0x0.DebugPtr == (UDS_VM_Dropdown *)0x0) {
      pUVar8 = UDS_ViewModelBase::CreateViewModel<UDS_VM_Dropdown>((UObject *)this);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UDS_VM_Dropdown *)0x0)
         ) {
        UE::GC::MarkAsReachable((UObject *)pUVar8);
      }
      (this->VM_Dropdown_LostList).field0_0x0.DebugPtr = pUVar8;
      if (pUVar8 == (UDS_VM_Dropdown *)0x0) {
        return;
      }
    }
    MakeContext<FDS_ViewModelContext_Dropdown>(&local_98);
    pFVar5 = local_98.Object;
    if (local_98.Object != (FDS_ViewModelContext_Dropdown *)0x0) {
      if ((local_98.Object == (FDS_ViewModelContext_Dropdown *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      *(undefined4 *)&pFVar5->_padding_ = 0x117;
      local_88 = OnLostListSortTypeChanged;
      uStack_7c = local_78.SharedReferenceCount.ReferenceController._4_4_;
      pFVar5->bOpenUpward = true;
      uStack_80 = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar5->OnClickList,
                 (FWriteAccessScope *)&local_68);
      local_50 = &(pFVar5->OnClickList).field_0x8;
      puVar9 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_50);
      if (puVar9 != (undefined8 *)0x0) {
        *puVar9 = &___7__TCommonDelegateInstanceState___A6AXH_ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar10 = FDelegateHandle::GenerateNewID();
        puVar9[2] = uVar10;
        *puVar9 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_Mount_LostReclaim____A6AXH_ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar9[3] = 0;
        local_res18 = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar9 + 3),(FObjectPtr)&local_res18);
        puVar9[4] = local_88;
        puVar9[5] = CONCAT44(uStack_7c,uStack_80);
      }
      if (local_68.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
      }
      pFVar13 = (this_00->ID_SortingType).AllocatorInstance.Data;
      iVar3 = (this_00->ID_SortingType).ArrayNum;
      pFVar2 = pFVar13 + iVar3;
      while( true ) {
        if ((this_00->ID_SortingType).ArrayNum != iVar3) {
          local_res10[0] = 0;
          `TCheckedPointerIterator<enum_EDS_SortingType_const_,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(local_res10);
        }
        if (pFVar13 == pFVar2) break;
        if ((pFVar5 == (FDS_ViewModelContext_Dropdown *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FVar11 = DS_Util::GetStringEnumTableKey<enum_EDS_SortingType>((EDS_SortingType)local_res20);
        local_e8.StringTableType = None;
        local_e8.StringTableID = 0;
        local_e8.StringEnumTableNameID.ComparisonIndex.Value = 0;
        local_e8.StringEnumTableNameID.Number = 0;
        local_e8.TimeExpressionType = None;
        local_e8.DateTime.Ticks = 0;
        local_e8.TimeSpan.Ticks = 0;
        local_e8.IsExpression = false;
        local_e8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_e8.UniqueString.Data.ArrayNum = 0;
        local_e8.UniqueString.Data.ArrayMax = 0;
        local_e8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_e8.FormatArgs.ArrayNum = 0;
        local_e8.FormatArgs.ArrayMax = 0;
        FDS_Text::SetTextFromStringEnumTable(&local_e8,(FName *)FVar11);
        iVar7 = (pFVar5->DropdownList).ArrayNum;
        piVar1 = &(pFVar5->DropdownList).ArrayMax;
        if (iVar7 == *piVar1) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x850,&(pFVar5->DropdownList).AllocatorInstance,piVar1);
        }
        (pFVar5->DropdownList).ArrayNum = iVar7 + 1;
        pFVar12 = (pFVar5->DropdownList).AllocatorInstance.Data + (longlong)iVar7 * 0x50;
        *pFVar12 = (FScriptContainerElement)local_e8.StringTableType;
        *(long64 *)(pFVar12 + 8) = local_e8.StringTableID;
        *(FName *)(pFVar12 + 0x10) = local_e8.StringEnumTableNameID;
        *(long64 *)(pFVar12 + 0x18) = local_e8.DateTime.Ticks;
        *(long64 *)(pFVar12 + 0x20) = local_e8.TimeSpan.Ticks;
        *(EDS_TimeExpression *)(pFVar12 + 0x28) = local_e8.TimeExpressionType;
        *(undefined8 *)(pFVar12 + 0x30) = 0;
        pFVar12[0x2c] = (FScriptContainerElement)local_e8.IsExpression;
        *(FScriptContainerElement **)(pFVar12 + 0x30) =
             local_e8.UniqueString.Data.AllocatorInstance.Data;
        local_e8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        *(int *)(pFVar12 + 0x38) = local_e8.UniqueString.Data.ArrayNum;
        *(int *)(pFVar12 + 0x3c) = local_e8.UniqueString.Data.ArrayMax;
        local_e8.UniqueString.Data.ArrayNum = 0;
        local_e8.UniqueString.Data.ArrayMax = 0;
        *(undefined8 *)(pFVar12 + 0x40) = 0;
        *(FScriptContainerElement **)(pFVar12 + 0x40) = local_e8.FormatArgs.AllocatorInstance.Data;
        local_e8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        *(int *)(pFVar12 + 0x48) = local_e8.FormatArgs.ArrayNum;
        *(int *)(pFVar12 + 0x4c) = local_e8.FormatArgs.ArrayMax;
        local_e8.FormatArgs.ArrayNum = 0;
        local_e8.FormatArgs.ArrayMax = 0;
        DestructItems<FDS_TextFormatArg,int>((FDS_TextFormatArg *)0x0,0);
        if (local_e8.FormatArgs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e8.FormatArgs.AllocatorInstance.Data);
        }
        if (local_e8.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e8.UniqueString.Data.AllocatorInstance.Data);
        }
        pFVar13 = pFVar13 + 1;
      }
      pUVar8 = (this->VM_Dropdown_LostList).field0_0x0.DebugPtr;
      local_78.Object = (FDS_ViewModelContext *)local_98.Object;
      local_78.SharedReferenceCount.ReferenceController =
           local_98.SharedReferenceCount.ReferenceController;
      if (local_98.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar8,&local_78);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_98.SharedReferenceCount.ReferenceController);
  }
  return;
}

// SetVM_MoneyDisplay @ 14bf1a520

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UDS_VM_Mount_LostReclaim::SetVM_MoneyDisplay(UDS_VM_Mount_LostReclaim *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar6;
  UClass *pUVar7;
  UDS_M_MoneyDisplay *pUVar8;
  UClass *pUVar9;
  UDS_VM_MoneyDisplay *pUVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  FScriptContainerElement FVar13;
  int iVar14;
  undefined1 auStack_1d8 [32];
  undefined8 local_1b8;
  longlong local_1b0;
  undefined8 local_1a0;
  TSharedPtr<FDS_ViewModelContext,1> local_198;
  TArray<int,TSizedDefaultAllocator<32>_> local_188;
  TArray<int,TSizedDefaultAllocator<32>_> local_178;
  TArray<int,TSizedDefaultAllocator<32>_> local_168;
  TArray<int,TSizedDefaultAllocator<32>_> local_158;
  undefined1 local_148 [8];
  TReferenceControllerBase<1> *local_140;
  undefined1 local_138 [8];
  TReferenceControllerBase<1> *local_130;
  undefined1 local_128 [128];
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  iVar14 = 0;
  FVar13 = (FScriptContainerElement)0x0;
  pTVar6 = DS_CommonDataHelper::MountLostReclaimMoney(&local_178);
  iVar5 = iVar14;
  if (pTVar6->ArrayNum < 1) {
LAB_14bf1a58a:
    bVar3 = false;
    bVar4 = false;
    if (iVar5 != 0) goto LAB_14bf1a594;
  }
  else {
    pTVar6 = DS_CommonDataHelper::MountLostReclaimMoney(&local_188);
    if (pTVar6->ArrayNum < 2) {
      iVar5 = 2;
      goto LAB_14bf1a58a;
    }
    bVar4 = true;
LAB_14bf1a594:
    bVar3 = bVar4;
    if (local_188.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_188.AllocatorInstance.Data);
    }
  }
  if (local_178.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.AllocatorInstance.Data);
  }
  if (bVar3) {
    pTVar6 = DS_CommonDataHelper::MountLostReclaimMoney(&local_168);
    if (pTVar6->ArrayNum < 1) {
      local_1b8 = 0;
      local_1b0 = (longlong)pTVar6->ArrayNum;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    FVar13 = *(pTVar6->AllocatorInstance).Data;
    if (local_168.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.AllocatorInstance.Data);
    }
    pTVar6 = DS_CommonDataHelper::MountLostReclaimMoney(&local_158);
    if (pTVar6->ArrayNum < 2) {
      local_1b8 = 1;
      local_1b0 = (longlong)pTVar6->ArrayNum;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar14 = *(int *)((pTVar6->AllocatorInstance).Data + 4);
    if (local_158.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.AllocatorInstance.Data);
    }
  }
  pUVar8 = (this->M_CoinDisplay).field0_0x0.DebugPtr;
  if (pUVar8 == (UDS_M_MoneyDisplay *)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar7 = Z_Construct_UClass_UDS_M_MoneyDisplay_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_a8,pUVar7);
    local_a8._8_8_ = this;
    pUVar8 = (UDS_M_MoneyDisplay *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
    if (local_a8._64_8_ != 0) {
      plVar11 = (longlong *)(local_a8 + 0x50);
      if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
        plVar11 = (longlong *)local_a8._104_8_;
      }
      (**(code **)(*plVar11 + 0x10))();
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar8 != (UDS_M_MoneyDisplay *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
    }
    (this->M_CoinDisplay).field0_0x0.DebugPtr = pUVar8;
    if (pUVar8 == (UDS_M_MoneyDisplay *)0x0) goto LAB_14bf1a70b;
  }
  pUVar8->MoneyDisplayType = DisplayWithCheck;
  UDS_M_MoneyDisplay::RefreshData
            ((this->M_CoinDisplay).field0_0x0.DebugPtr,(EDS_MoneyType)FVar13,(longlong)iVar14);
LAB_14bf1a70b:
  if ((this->VM_MoneyDisplay).field0_0x0.DebugPtr == (UDS_VM_MoneyDisplay *)0x0) {
    local_1a0 = 0;
    pUVar7 = Z_Construct_UClass_UDS_VM_MoneyDisplay_NoRegister();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar9 = Z_Construct_UClass_UDS_VM_MoneyDisplay_NoRegister();
    CheckIsClassChildOf_Internal(pUVar9,pUVar7);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_128,pUVar7);
    local_128._48_8_ = (FObjectInstancingGraph *)0x0;
    local_128._56_8_ = (UPackage *)0x0;
    local_128._16_4_ = 0;
    local_128._20_4_ = 0;
    local_128._24_4_ = RF_Transient;
    local_128._40_8_ = (UObject *)0x0;
    local_128[0x20] = false;
    local_128._8_8_ = this;
    pUVar10 = (UDS_VM_MoneyDisplay *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_128);
    if (local_128._64_8_ != 0) {
      plVar11 = (longlong *)(local_128 + 0x50);
      if ((longlong *)local_128._104_8_ != (longlong *)0x0) {
        plVar11 = (longlong *)local_128._104_8_;
      }
      (**(code **)(*plVar11 + 0x10))();
    }
    if (pUVar10 != (UDS_VM_MoneyDisplay *)0x0) {
      *(undefined1 *)((longlong)&pUVar10->_padding_ + 4) = 0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar10 != (UDS_VM_MoneyDisplay *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar10);
    }
    (this->VM_MoneyDisplay).field0_0x0.DebugPtr = pUVar10;
    if (pUVar10 == (UDS_VM_MoneyDisplay *)0x0) {
      return;
    }
  }
  pUVar8 = (this->M_CoinDisplay).field0_0x0.DebugPtr;
  plVar11 = (longlong *)(**(code **)(pUVar8->_padding_ + 0x310))(pUVar8,local_148);
  lVar1 = *plVar11;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_140);
  if (lVar1 != 0) {
    pUVar8 = (this->M_CoinDisplay).field0_0x0.DebugPtr;
    pUVar10 = (this->VM_MoneyDisplay).field0_0x0.DebugPtr;
    puVar12 = (undefined8 *)(**(code **)(pUVar8->_padding_ + 0x310))(pUVar8,local_138);
    local_198.Object = (FDS_ViewModelContext *)*puVar12;
    local_198.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)puVar12[1];
    if (local_198.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_198.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_198.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar10,&local_198);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_130);
  }
  return;
}

// UnbindModel @ 14bf1e170

void __thiscall UDS_VM_Mount_LostReclaim::UnbindModel(UDS_VM_Mount_LostReclaim *this)

{
  bool bVar1;
  UObject *pUVar2;
  UDS_MountEvent *pUVar3;
  FWeakObjectPtr local_res10 [3];
  
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  TDS_DataSetGetter<UDS_MountLostDataSet>::Get((ulong64)local_res10);
  bVar1 = FWeakObjectPtr::IsValid(local_res10);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(local_res10);
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar2 + 1),(UObject *)this)
    ;
  }
  pUVar3 = UDS_MountEvent::GetEvent();
  if (pUVar3 != (UDS_MountEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar3->LostListSelectedDelegate,this);
  }
  return;
}

// UpdateLostItemList @ 14bf205a0

void __thiscall UDS_VM_Mount_LostReclaim::UpdateLostItemList(UDS_VM_Mount_LostReclaim *this)

{
  undefined1 *puVar1;
  longlong lVar2;
  uint uVar3;
  undefined4 uVar4;
  code *pcVar5;
  FScriptContainerElement *pFVar6;
  longlong *plVar7;
  bool bVar8;
  int iVar9;
  UObject *pUVar10;
  FDS_ItemBaseTableRow *pFVar11;
  UDS_UserObjectListItem *this_00;
  FDS_ViewModelContext *pFVar12;
  TReferenceControllerBase<1> *pTVar13;
  UScriptStruct *pUVar14;
  UDS_ViewModelContextManager *this_01;
  longlong lVar15;
  ulonglong uVar16;
  UObject *pUVar17;
  ulonglong uVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  EDS_SortOrder EVar22;
  ForAnyElementType FVar23;
  undefined4 *puVar24;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  uint local_res20;
  TArray<FDS_ItemBaseTableRow_const_*,TSizedDefaultAllocator<32>_> local_128;
  FWeakObjectPtr local_118;
  undefined1 *local_110;
  int iStack_108;
  uint uStack_104;
  UObject *local_100;
  undefined4 uStack_f8;
  int iStack_f4;
  int local_f0;
  int iStack_ec;
  int iStack_e8;
  undefined4 uStack_e4;
  int local_e0;
  int local_dc;
  UObject *local_d8;
  UDS_UserObjectListItem *local_d0;
  FDS_EntryBindingEventField *local_c8;
  FScriptContainerElement *local_c0;
  FName local_b8;
  int local_b0;
  TSharedPtr<FDS_ViewModelContext,1> local_a8;
  longlong *local_98;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_90;
  undefined8 uStack_70;
  TSharedPtr<FDS_ViewModelContext,1> local_68;
  undefined4 local_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  local_c8 = &this->EntryBindingEventField_ItemList;
  FDS_EntryBindingEventField::Reset(local_c8);
  EVar22 = Descend;
  if (this->ItemListSortOrder == 0) {
    EVar22 = Ascend;
  }
  UDS_MountLostData::GetData
            ((ulong64)&local_118,UDS_PlayerData::MainPlayerEntityID,SUB81(this->SelLostListUID,0));
  bVar8 = FWeakObjectPtr::IsValid(&local_118);
  if (bVar8) {
    local_128.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_128.ArrayNum = 0;
    local_128.ArrayMax = 0;
    pUVar10 = FWeakObjectPtr::Get(&local_118);
    iStack_108 = 0;
    uStack_104 = 1;
    local_f0 = 0;
    puVar1 = &pUVar10[2].field_0x18;
    iVar9 = *(int *)&pUVar10[3].field_0x18;
    local_100 = pUVar10 + 3;
    iStack_f4 = iStack_108;
    if (iVar9 != 0) {
      pUVar17 = *(UObject **)&pUVar10[3].field_0x10;
      if (*(UObject **)&pUVar10[3].field_0x10 == (UObject *)0x0) {
        pUVar17 = local_100;
      }
      uVar21 = *(uint *)pUVar17;
      local_f0 = 0;
      iStack_108 = 0;
      while (uVar21 == 0) {
        lVar15 = (longlong)iStack_108;
        local_f0 = local_f0 + 0x20;
        iStack_108 = iStack_108 + 1;
        iStack_f4 = iVar9;
        if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_108) goto LAB_14bf206bf;
        uVar21 = *(uint *)(&pUVar17->field_0x4 + lVar15 * 4);
      }
      uStack_104 = -uVar21 & uVar21;
      uVar18 = (ulonglong)uStack_104 * 2 + 1;
      lVar15 = 0x3f;
      if (uVar18 != 0) {
        for (; uVar18 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      local_e0 = (int)lVar15;
      iStack_f4 = local_f0 + -1 + local_e0;
      if (iVar9 < iStack_f4) {
        iStack_f4 = iVar9;
      }
    }
LAB_14bf206bf:
    uVar21 = *(uint *)&pUVar10[3].field_0x18;
    uVar20 = uVar21 & 0xffffffe0;
    iStack_e8 = *(int *)&pUVar10[2].field_0x20 - *(int *)&pUVar10[3].field_0x24;
    uStack_f8 = 0xffffffff;
    TStack_90.CurrentBitIndex = iStack_f4;
    TStack_90.UnvisitedBitMask = 0xffffffff;
    TStack_90._padding_ = CONCAT44(uStack_104,iStack_108);
    iVar19 = (int)uVar21 >> 5;
    TStack_90._28_4_ = iStack_f4;
    TStack_90.BaseBitIndex = local_f0;
    uStack_70 = CONCAT44(uStack_e4,iStack_e8);
    local_110 = puVar1;
    iStack_ec = iStack_f4;
    local_d8 = pUVar10;
    local_98 = (longlong *)puVar1;
    TStack_90.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_100;
    if ((((int)uVar21 < 0) || (iVar9 < (int)uVar21)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar3 = *(uint *)&pUVar10[3].field_0x18;
    if (uVar21 != uVar3) {
      pUVar17 = *(UObject **)&pUVar10[3].field_0x10;
      if (*(UObject **)&pUVar10[3].field_0x10 == (UObject *)0x0) {
        pUVar17 = pUVar10 + 3;
      }
      uVar21 = -1 << ((byte)uVar21 & 0x1f) &
               *(uint *)((longlong)&pUVar17->field_0x0 + (longlong)iVar19 * 4);
      while (uVar21 == 0) {
        lVar15 = (longlong)iVar19;
        uVar20 = uVar20 + 0x20;
        iVar19 = iVar19 + 1;
        uVar21 = uVar3;
        if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19)
        goto LAB_14bf207d0;
        uVar21 = *(uint *)(&pUVar17->field_0x4 + lVar15 * 4);
      }
      uVar18 = (ulonglong)(-uVar21 & uVar21) * 2 + 1;
      lVar15 = 0x3f;
      if (uVar18 != 0) {
        for (; uVar18 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      local_dc = (int)lVar15;
      uVar21 = local_dc + -1 + uVar20;
      if ((int)uVar3 < (int)uVar21) {
        uVar21 = uVar3;
      }
    }
LAB_14bf207d0:
    while( true ) {
      plVar7 = local_98;
      if ((int)local_98[1] - *(int *)((longlong)local_98 + 0x34) != (int)uStack_70) {
        local_res10[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<int,FDS_MountLostItemInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (((TStack_90.CurrentBitIndex == uVar21) && ((UObject *)TStack_90.Array == pUVar10 + 3)) &&
         (plVar7 == (longlong *)puVar1)) break;
      puVar24 = (undefined4 *)(*plVar7 + (longlong)TStack_90.CurrentBitIndex * 0x18);
      local_58 = *puVar24;
      iStack_54 = puVar24[1];
      uStack_50 = puVar24[2];
      uStack_4c = puVar24[3];
      pFVar11 = FDS_ItemBaseTableRow::Get((longlong)iStack_54,true);
      if (pFVar11 != (FDS_ItemBaseTableRow *)0x0) {
        iVar9 = local_128.ArrayNum;
        if (local_128.ArrayNum == local_128.ArrayMax) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&local_128.AllocatorInstance,&local_128.ArrayMax);
        }
        local_128.ArrayNum = iVar9 + 1;
        *(FDS_ItemBaseTableRow **)(local_128.AllocatorInstance.Data + (longlong)iVar9 * 8) = pFVar11
        ;
      }
      TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_90);
    }
    DS_Sorting<FDS_ItemBaseTableRow_const_*>::Sort(&local_128,this->ItemListSortType,EVar22);
    uVar16 = (ulonglong)local_128.ArrayNum;
    local_res20 = local_128.ArrayNum;
    local_c0 = local_128.AllocatorInstance.Data + uVar16 * 8;
    uVar18 = uVar16;
    FVar23.Data = local_128.AllocatorInstance.Data;
    while( true ) {
      pFVar6 = local_c0;
      if ((int)uVar16 != (int)uVar18) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FDS_ItemBaseTableRow_const_*,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res18);
      }
      if (FVar23.Data == pFVar6) break;
      lVar15 = *(longlong *)FVar23.Data;
      this_00 = NewObject<UDS_UserObjectListItem>((UObject *)this);
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (this_00 == (UDS_UserObjectListItem *)0x0) goto LAB_14bf20938;
      }
      else {
        if (this_00 == (UDS_UserObjectListItem *)0x0) goto LAB_14bf20938;
        UE::GC::MarkAsReachable((UObject *)this_00);
      }
      if (*(int *)&local_d8[2].field_0x20 == *(int *)&local_d8[3].field_0x24) {
LAB_14bf20938:
        if (local_128.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return;
        }
        FMemory::Free(local_128.AllocatorInstance.Data);
        return;
      }
      pUVar17 = pUVar10 + 4;
      if (*(UObject **)&pUVar10[4].field_0x8 != (UObject *)0x0) {
        pUVar17 = *(UObject **)&pUVar10[4].field_0x8;
      }
      iVar9 = *(int *)(&pUVar17->field_0x0 +
                      (ulonglong)(*(int *)&pUVar10[4].field_0x10 - 1U & *(uint *)(lVar15 + 8)) * 4);
      if (iVar9 == -1) goto LAB_14bf20938;
      while (lVar2 = *(longlong *)puVar1 + (longlong)iVar9 * 0x18,
            *(uint *)(*(longlong *)puVar1 + (longlong)iVar9 * 0x18) != *(uint *)(lVar15 + 8)) {
        iVar9 = *(int *)(lVar2 + 0x10);
        if (iVar9 == -1) goto LAB_14bf20938;
      }
      puVar24 = (undefined4 *)(lVar2 + 4);
      if (lVar2 == 0) {
        puVar24 = (undefined4 *)0x0;
      }
      if (puVar24 == (undefined4 *)0x0) goto LAB_14bf20938;
      pFVar12 = ::operator_new(0x30);
      if (pFVar12 == (FDS_ViewModelContext *)0x0) {
        pFVar12 = (FDS_ViewModelContext *)0x0;
      }
      else {
        *(undefined8 *)&pFVar12->ViewModelTemplateKey = 0;
        *(undefined4 *)((longlong)&pFVar12[1].DerivedStaticStruct + 4) = 0;
        pFVar12->DerivedStaticStruct = (UStruct *)0x0;
        (pFVar12->ViewModelName).ComparisonIndex = 0;
        (pFVar12->ViewModelName).Number = 0;
        pFVar12->_padding_ = (longlong)&___7FDS_ViewModelContext_MountLostReclaim_ItemSlot__6B_;
        pFVar12[1]._padding_ = 0;
        *(undefined4 *)&pFVar12[1].DerivedStaticStruct = 0;
      }
      pTVar13 = ::operator_new(0x20);
      if (pTVar13 == (TReferenceControllerBase<1> *)0x0) {
        pTVar13 = (TReferenceControllerBase<1> *)0x0;
      }
      else {
        pTVar13->SharedReferenceCount = (atomic<int>)0x1;
        pTVar13[1]._padding_ = (longlong)ViewModelContextDeleter;
        pTVar13->_padding_ =
             (longlong)
             &
             ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_MountLostReclaim_ItemSlot__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
        ;
        pTVar13->WeakReferenceCount = (atomic<int>)0x1;
        *(FDS_ViewModelContext **)&pTVar13[1].SharedReferenceCount = pFVar12;
      }
      if ((pFVar12 == (FDS_ViewModelContext *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pUVar14 = FDS_ViewModelContext_MountLostReclaim_ItemSlot::StaticStruct();
      pFVar12->DerivedStaticStruct = (UStruct *)pUVar14;
      this_01 = UDS_ViewModelContextManager::GetInst();
      if (this_01 != (UDS_ViewModelContextManager *)0x0) {
        if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_a8.Object = pFVar12;
        local_a8.SharedReferenceCount.ReferenceController = pTVar13;
        UDS_ViewModelContextManager::RegisterContext(this_01,&local_a8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_a8.SharedReferenceCount.ReferenceController);
      }
      pFVar12->ViewModelTemplateKey = W_MountLostReclaimItemSlot;
      uVar4 = *puVar24;
      if ((pFVar12 == (FDS_ViewModelContext *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      *(undefined4 *)&pFVar12[1]._padding_ = uVar4;
      *(undefined4 *)((longlong)&pFVar12[1]._padding_ + 4) = puVar24[1];
      *(undefined4 *)&pFVar12[1].DerivedStaticStruct = puVar24[2];
      if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_68.Object = pFVar12;
      local_68.SharedReferenceCount.ReferenceController = pTVar13;
      UDS_UserObjectListItem::AddContext(this_00,&local_68);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
      local_d0 = this_00;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this_00);
      }
      FDS_EntryBindingEventField::Add(local_c8,(TObjectPtr<UDS_UserObjectListItem>)&local_d0);
      uVar16 = local_128._8_8_ & 0xffffffff;
      FVar23.Data = FVar23.Data + 8;
      uVar18 = (ulonglong)local_res20;
    }
    if (local_128.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.AllocatorInstance.Data);
    }
  }
  local_b0 = FFieldNotificationClassDescriptor::EntryBindingEventField_ItemList.BitNumber;
  local_b8 = FFieldNotificationClassDescriptor::EntryBindingEventField_ItemList.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_b8);
  return;
}

// UpdateLostList @ 14bf20b40

void __thiscall UDS_VM_Mount_LostReclaim::UpdateLostList(UDS_VM_Mount_LostReclaim *this)

{
  code *pcVar1;
  FWeakObjectPtr *pFVar2;
  bool bVar3;
  int iVar4;
  UDS_MountLostDataSet *pUVar5;
  UDS_UserObjectListItem *this_00;
  FDS_ViewModelContext *pFVar6;
  UScriptStruct *pUVar7;
  UDS_ViewModelContextManager *this_01;
  UDS_DataBase *this_02;
  ulong64 uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  FDS_ViewModelContext *pFVar11;
  FDS_ViewModelContext *pFVar12;
  EDS_SortOrder EVar13;
  ForAnyElementType FVar14;
  undefined1 local_res8 [8];
  uint local_res10;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  UDS_UserObjectListItem *local_98;
  FWeakObjectPtr *local_90;
  FName local_88;
  int local_80;
  TArray<TWeakObjectPtr<UDS_MountLostData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_78;
  TSharedPtr<FDS_ViewModelContext,1> local_68;
  TSharedPtr<FDS_ViewModelContext,1> local_58;
  
  FDS_EntryBindingEventField::Reset(&this->EntryBindingEventField_LostList);
  TDS_DataSetGetter<UDS_MountLostDataSet>::Get((ulong64)&local_res18);
  bVar3 = FWeakObjectPtr::IsValid(&local_res18);
  if (bVar3) {
    pUVar5 = (UDS_MountLostDataSet *)FWeakObjectPtr::Get(&local_res18);
    iVar4 = UDS_MountLostDataSet::GetMountLostCount(pUVar5);
    if (-1 < iVar4) {
      local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_78.ArrayNum = 0;
      local_78.ArrayMax = 0;
      pUVar5 = (UDS_MountLostDataSet *)FWeakObjectPtr::Get(&local_res18);
      UDS_MountLostDataSet::GetMountLostAllData(pUVar5,&local_78);
      EVar13 = Descend;
      if (this->LostListSortOrder == 0) {
        EVar13 = Ascend;
      }
      DS_Sorting<TWeakObjectPtr<UDS_MountLostData,FWeakObjectPtr>_>::Sort
                (&local_78,this->LostListSortType,EVar13);
      uVar9 = (ulonglong)local_78.ArrayNum;
      local_res10 = local_78.ArrayNum;
      local_90 = (FWeakObjectPtr *)(local_78.AllocatorInstance.Data + uVar9 * 8);
      uVar10 = uVar9;
      FVar14.Data = local_78.AllocatorInstance.Data;
      while( true ) {
        pFVar2 = local_90;
        pFVar11 = (FDS_ViewModelContext *)0x0;
        if ((int)uVar9 != (int)uVar10) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<TWeakObjectPtr<UDS_MountLostData,FWeakObjectPtr>,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        if ((FWeakObjectPtr *)FVar14.Data == pFVar2) break;
        local_res20 = *(FWeakObjectPtr *)FVar14.Data;
        this_00 = NewObject<UDS_UserObjectListItem>((UObject *)this);
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          if (this_00 == (UDS_UserObjectListItem *)0x0) goto LAB_14bf20dd0;
        }
        else {
          if (this_00 == (UDS_UserObjectListItem *)0x0) {
LAB_14bf20dd0:
            if (local_78.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
              return;
            }
            FMemory::Free(local_78.AllocatorInstance.Data);
            return;
          }
          UE::GC::MarkAsReachable((UObject *)this_00);
        }
        pFVar6 = ::operator_new(0x28);
        pFVar12 = pFVar11;
        if (pFVar6 != (FDS_ViewModelContext *)0x0) {
          *(undefined8 *)&pFVar6->ViewModelTemplateKey = 0;
          *(undefined8 *)&pFVar6->DerivedStaticStruct = 0;
          (pFVar6->ViewModelName).ComparisonIndex = 0;
          (pFVar6->ViewModelName).Number = 0;
          pFVar6->_padding_ = (longlong)&___7FDS_ViewModelContext_MountLostReclaim_Slot__6B_;
          pFVar6[1]._padding_ = 0;
          pFVar12 = pFVar6;
        }
        pFVar6 = ::operator_new(0x20);
        if (pFVar6 != (FDS_ViewModelContext *)0x0) {
          *(atomic<int> *)&pFVar6->DerivedStaticStruct = (atomic<int>)0x1;
          *(code **)&(pFVar6->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
          pFVar6->_padding_ =
               (longlong)
               &
               ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_MountLostReclaim_Slot__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
          ;
          ((atomic<int> *)&pFVar6->DerivedStaticStruct)[1] = (atomic<int>)0x1;
          *(FDS_ViewModelContext **)&pFVar6->ViewModelTemplateKey = pFVar12;
          pFVar11 = pFVar6;
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
        pUVar7 = FDS_ViewModelContext_MountLostReclaim_Slot::StaticStruct();
        *(UScriptStruct **)&pFVar12->DerivedStaticStruct = pUVar7;
        this_01 = UDS_ViewModelContextManager::GetInst();
        if (this_01 != (UDS_ViewModelContextManager *)0x0) {
          if (pFVar11 != (FDS_ViewModelContext *)0x0) {
            LOCK();
            *(atomic<int> *)&pFVar11->DerivedStaticStruct =
                 (atomic<int>)((int)*(atomic<int> *)&pFVar11->DerivedStaticStruct + 1);
            UNLOCK();
          }
          local_68.Object = pFVar12;
          local_68.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar11
          ;
          UDS_ViewModelContextManager::RegisterContext(this_01,&local_68);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_68.SharedReferenceCount.ReferenceController);
        }
        pFVar12->ViewModelTemplateKey = W_MountLostReclaimSlot;
        this_02 = (UDS_DataBase *)FWeakObjectPtr::Get(&local_res20);
        uVar8 = UDS_DataBase::GetUniqueKey(this_02);
        if ((pFVar12 == (FDS_ViewModelContext *)0x0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pFVar12[1]._padding_ = uVar8;
        if (pFVar11 != (FDS_ViewModelContext *)0x0) {
          LOCK();
          *(atomic<int> *)&pFVar11->DerivedStaticStruct =
               (atomic<int>)((int)*(atomic<int> *)&pFVar11->DerivedStaticStruct + 1);
          UNLOCK();
        }
        local_58.Object = pFVar12;
        local_58.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar11;
        UDS_UserObjectListItem::AddContext(this_00,&local_58);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar11);
        local_98 = this_00;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this_00);
        }
        FDS_EntryBindingEventField::Add
                  (&this->EntryBindingEventField_LostList,
                   (TObjectPtr<UDS_UserObjectListItem>)&local_98);
        uVar9 = local_78._8_8_ & 0xffffffff;
        FVar14.Data = FVar14.Data + 8;
        uVar10 = (ulonglong)local_res10;
      }
      if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.AllocatorInstance.Data);
      }
    }
  }
  local_80 = FFieldNotificationClassDescriptor::EntryBindingEventField_LostList.BitNumber;
  local_88 = FFieldNotificationClassDescriptor::EntryBindingEventField_LostList.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_88);
  return;
}

