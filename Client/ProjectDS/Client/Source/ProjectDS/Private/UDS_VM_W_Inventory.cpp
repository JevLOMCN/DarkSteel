// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 48

// SetEventOpenFilter_WrapperImpl @ 14b73e920

void __cdecl UDS_VM_W_Inventory::SetEventOpenFilter_WrapperImpl(void *param_1,void *param_2)

{
  FObjectPtr_u_0 *this;
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  UDS_M_Inventory *this_00;
  UObject *pUVar4;
  FWeakObjectPtr aFStackX_8 [2];
  UObject *apUStackX_18 [2];
  
  this = (FObjectPtr_u_0 *)((longlong)param_1 + 0xa0);
  if (this->Handle != (UObject *)0x0) {
    pUVar3 = Z_Construct_UClass_UDS_M_Inventory_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this,pUVar3);
    if (bVar2) {
      pUVar4 = this->Handle;
      goto LAB_14bfbcf1e;
    }
  }
  pUVar4 = (UObject *)0x0;
LAB_14bfbcf1e:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  aFStackX_8[0].ObjectIndex = 0;
  aFStackX_8[0].ObjectSerialNumber = 0;
  apUStackX_18[0] = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(aFStackX_8,(FObjectPtr)apUStackX_18);
  bVar2 = FWeakObjectPtr::IsValid(aFStackX_8);
  if (bVar2) {
    this_00 = (UDS_M_Inventory *)FWeakObjectPtr::Get(aFStackX_8);
    UDS_M_Inventory::OnClickedFilterOpenButton(this_00);
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3321408251353890453>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_Inventory.cpp"
                       ,0x16b,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// SetSortOrderButtonClickEvent_WrapperImpl @ 14b73e930

void __cdecl
UDS_VM_W_Inventory::SetSortOrderButtonClickEvent_WrapperImpl(void *param_1,void *param_2)

{
  FObjectPtr_u_0 *this;
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  UDS_M_Inventory *this_00;
  UObject *pUVar4;
  FWeakObjectPtr aFStackX_8 [2];
  UObject *apUStackX_18 [2];
  
  this = (FObjectPtr_u_0 *)((longlong)param_1 + 0xa0);
  if (this->Handle != (UObject *)0x0) {
    pUVar3 = Z_Construct_UClass_UDS_M_Inventory_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this,pUVar3);
    if (bVar2) {
      pUVar4 = this->Handle;
      goto LAB_14bfcf62e;
    }
  }
  pUVar4 = (UObject *)0x0;
LAB_14bfcf62e:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  aFStackX_8[0].ObjectIndex = 0;
  aFStackX_8[0].ObjectSerialNumber = 0;
  apUStackX_18[0] = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(aFStackX_8,(FObjectPtr)apUStackX_18);
  bVar2 = FWeakObjectPtr::IsValid(aFStackX_8);
  if (bVar2) {
    this_00 = (UDS_M_Inventory *)FWeakObjectPtr::Get(aFStackX_8);
    UDS_M_Inventory::OnClickedSortOrderButton(this_00);
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3321408251353890695>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_Inventory.cpp"
                       ,0x79,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// SetOpenInventoryExtendButtonClickEvent_WrapperImpl @ 14b73e940

/* WARNING: Type propagation algorithm not settling */

void __cdecl
UDS_VM_W_Inventory::SetOpenInventoryExtendButtonClickEvent_WrapperImpl(void *param_1,void *param_2)

{
  FInstancedStruct *this;
  code *pcVar1;
  FObjectPtr_u_0 FVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  UClass *pUVar7;
  FDS_InventoryExtendTableRow *pFVar8;
  UDS_DataSetBase *this_00;
  TWeakObjectPtr<UDS_DataBase,FWeakObjectPtr> this_01;
  UObject *pUVar9;
  UDS_M_Inventory *pUVar10;
  FDS_InventoryBaseTableRow *pFVar11;
  FDS_MoneyBaseTableRow *pFVar12;
  UDS_MoneyData *this_02;
  ulonglong uVar13;
  UDS_CommonPopupManager *this_03;
  UDS_M_CommonPopup *pUVar14;
  FDS_Text *pFVar15;
  FObjectPtr_u_0 *pFVar16;
  FDS_Int32StringFormatArg *pFVar17;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  *pTVar18;
  FString *pFVar19;
  FText *pFVar20;
  UObject *pUVar21;
  FWeakObjectPtr FStackX_18;
  FWeakObjectPtr FStackX_20;
  TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> TStack_248;
  FWeakObjectPtr FStack_238;
  FWeakObjectPtr FStack_230;
  FWeakObjectPtr FStack_228;
  FWeakObjectPtr FStack_220;
  UDS_M_CommonPopup *pUStack_218;
  FWeakObjectPtr FStack_210;
  FDS_StringUiID FStack_208;
  UObject *pUStack_1f8;
  UObject *pUStack_1f0;
  UObject *pUStack_1e8;
  UDS_GameInstance *pUStack_1e0;
  FDS_Text FStack_1d8;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> TStack_188;
  undefined1 auStack_170 [8];
  code *pcStack_168;
  ulonglong uStack_160;
  code *pcStack_158;
  ulonglong uStack_150;
  code *pcStack_148;
  ulonglong uStack_140;
  FText FStack_138;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  TStack_128;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  TStack_110;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  TStack_f8;
  FDS_Text FStack_e0;
  FDS_Text FStack_90;
  
  pUVar21 = (UObject *)0x0;
  pUStack_1f8 = pUVar21;
  if (*(longlong *)((longlong)param_1 + 0xa0) != 0) {
    pUVar7 = Z_Construct_UClass_UDS_M_Inventory_NoRegister();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)((longlong)param_1 + 0xa0),pUVar7);
    if (bVar3) {
      pUStack_1f8 = *(UObject **)((longlong)param_1 + 0xa0);
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUStack_1f8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUStack_1f8);
  }
  FStackX_20.ObjectIndex = 0;
  FStackX_20.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUStack_1f8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUStack_1f8);
  }
  FWeakObjectPtr::operator=(&FStackX_20,(FObjectPtr)&pUStack_1f8);
  bVar3 = FWeakObjectPtr::IsValid(&FStackX_20);
  if (!bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3321408251353890689>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_Inventory.cpp"
                       ,0x7f,"false");
    if (!bVar3) {
      return;
    }
    goto code_r0x00014bfbfdf5;
  }
  iVar4 = DS_CommonDataHelper::IdInventoryExpansionMoneyInfo();
  pFVar8 = FDS_InventoryExtendTableRow::Get((longlong)iVar4,true);
  if (pFVar8 == (FDS_InventoryExtendTableRow *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3321408251353890686>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_Inventory.cpp"
                       ,0x82,"false");
    if (!bVar3) {
      return;
    }
    goto code_r0x00014bfbfdf5;
  }
  TDS_DataSetGetter<UDS_MoneyDataSet>::Get((ulong64)&FStack_210);
  bVar3 = FWeakObjectPtr::IsValid(&FStack_210);
  if (!bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3321408251353890683>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_Inventory.cpp"
                       ,0x85,"false");
    if (!bVar3) {
      return;
    }
    goto code_r0x00014bfbfdf5;
  }
  this_00 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&FStack_210);
  this_01 = UDS_DataSetBase::GetData(this_00,(ulong64)auStack_170);
  pUStack_1f0 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_01.WeakPtr);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUStack_1f0 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUStack_1f0);
  }
  FStack_238.ObjectIndex = 0;
  FStack_238.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUStack_1f0 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUStack_1f0);
  }
  FWeakObjectPtr::operator=(&FStack_238,(FObjectPtr)&pUStack_1f0);
  bVar3 = FWeakObjectPtr::IsValid(&FStack_238);
  if (!bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3321408251353890680>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_Inventory.cpp"
                       ,0x88,"false");
    if (!bVar3) {
      return;
    }
    goto code_r0x00014bfbfdf5;
  }
  pUVar9 = FWeakObjectPtr::Get(&FStack_238);
  if (pUVar9 == (UObject *)0x0) {
LAB_14bfbfad8:
    pUVar9 = pUVar21;
  }
  else {
    pUVar7 = Z_Construct_UClass_UDS_MoneyData_NoRegister();
    iVar4 = (int)pUVar7->_padding_;
    if ((*(int *)(*(longlong *)&pUVar9->field_0x10 + 0x38) < iVar4) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar9->field_0x10 + 0x30) + (longlong)iVar4 * 8) !=
        &pUVar7->_padding_)) goto LAB_14bfbfad8;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar9);
  }
  FStack_230.ObjectIndex = 0;
  FStack_230.ObjectSerialNumber = 0;
  pUStack_1e8 = pUVar9;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar9);
  }
  FWeakObjectPtr::operator=(&FStack_230,(FObjectPtr)&pUStack_1e8);
  bVar3 = FWeakObjectPtr::IsValid(&FStack_230);
  if (bVar3) {
    pUVar10 = (UDS_M_Inventory *)FWeakObjectPtr::Get(&FStackX_20);
    pFVar11 = UDS_M_Inventory::GetInventoryBaseTable(pUVar10);
    if (pFVar11 == (FDS_InventoryBaseTableRow *)0x0) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3321408251353890674>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_Inventory.cpp"
                         ,0x8e,"false");
      if (bVar3) goto code_r0x00014bfbfdf5;
    }
    else {
      pFVar12 = FDS_MoneyBaseTableRow::Get((ulonglong)pFVar8->ExtendMoneyType,true);
      if (pFVar12 == (FDS_MoneyBaseTableRow *)0x0) {
        bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_3321408251353890671>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_Inventory.cpp"
                           ,0x91,"false");
        if (bVar3) goto code_r0x00014bfbfdf5;
      }
      else {
        this_02 = (UDS_MoneyData *)FWeakObjectPtr::Get(&FStack_230);
        uVar13 = UDS_MoneyData::GetTotalQuantity(this_02);
        iVar4 = (int)pFVar8->ExtendMoneyCost;
        pUVar10 = (UDS_M_Inventory *)FWeakObjectPtr::Get(&FStackX_20);
        iVar5 = UDS_M_Inventory::GetExtendedInventorySlotCount(pUVar10);
        iVar6 = (pFVar8->ExtendValue + -1 + (pFVar11->MaxSlotCount - iVar5)) / pFVar8->ExtendValue;
        iVar5 = (int)((longlong)
                      ((ulonglong)(uint)((int)uVar13 >> 0x1f) << 0x20 | uVar13 & 0xffffffff) /
                     (longlong)iVar4);
        if (iVar6 < iVar5) {
          iVar5 = iVar6;
        }
        if (iVar6 == 0) {
          TStack_188._0_8_ = 0;
          TStack_188._8_8_ = 0;
          TStack_188._16_4_ = 0;
          UDS_UIMessageManager::OpenMsgByStringUi(0x1fc36,Alert_None_01,&TStack_188);
        }
        else {
          pUStack_1e0 = UDS_GameInstance::GetInst();
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (pUStack_1e0 != (UDS_GameInstance *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUStack_1e0);
          }
          FStack_220.ObjectIndex = 0;
          FStack_220.ObjectSerialNumber = 0;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (pUStack_1e0 != (UDS_GameInstance *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUStack_1e0);
          }
          FWeakObjectPtr::operator=(&FStack_220,(FObjectPtr)&pUStack_1e0);
          bVar3 = FWeakObjectPtr::IsValid(&FStack_220);
          if (bVar3) {
            pUStack_218 = (UDS_M_CommonPopup *)UDS_CommonPopupManager::GetInst();
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (pUStack_218 != (UDS_M_CommonPopup *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)pUStack_218);
            }
            FStack_228.ObjectIndex = 0;
            FStack_228.ObjectSerialNumber = 0;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (pUStack_218 != (UDS_M_CommonPopup *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)pUStack_218);
            }
            FWeakObjectPtr::operator=(&FStack_228,(FObjectPtr)&pUStack_218);
            bVar3 = FWeakObjectPtr::IsValid(&FStack_228);
            if (bVar3) {
              this_03 = (UDS_CommonPopupManager *)FWeakObjectPtr::Get(&FStack_228);
              UDS_CommonPopupManager::CreateCommonPopup(this_03);
              bVar3 = FWeakObjectPtr::IsValid(&FStackX_18);
              if (bVar3) {
                pUVar14 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&FStackX_18);
                pFVar15 = FDS_Text::FromStringTable(&FStack_e0,StringUi,0x1fcfd);
                UDS_M_CommonPopup::SetTitle(pUVar14,pFVar15);
                pUVar14 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&FStackX_18);
                pFVar15 = FDS_Text::FromStringTable(&FStack_90,StringUi,0x1fc38);
                UDS_M_CommonPopup::SetMainContent(pUVar14,pFVar15);
                pUStack_218 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&FStackX_18);
                FStack_1d8.StringTableType = None;
                FStack_1d8.StringTableID = 0;
                FStack_1d8.StringEnumTableNameID.ComparisonIndex.Value = 0;
                FStack_1d8.StringEnumTableNameID.Number = 0;
                FStack_1d8.TimeExpressionType = None;
                FStack_1d8.IsExpression = false;
                FStack_1d8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
                ;
                FStack_1d8.UniqueString.Data.ArrayNum = 0;
                FStack_1d8.UniqueString.Data.ArrayMax = 0;
                FStack_1d8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                FStack_1d8.FormatArgs.ArrayNum = 0;
                FStack_1d8.FormatArgs.ArrayMax = 0;
                TStack_248.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                TStack_248.ArrayNum = 0;
                TStack_248.ArrayMax = 0;
                FStack_1d8.DateTime.Ticks = 0;
                FStack_1d8.TimeSpan.Ticks = 0;
                iVar6 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x828,&TStack_248.AllocatorInstance,&TStack_248.ArrayMax);
                TStack_248.ArrayNum = iVar6 + 1;
                this = (FInstancedStruct *)
                       (TStack_248.AllocatorInstance.Data + (longlong)iVar6 * 0x28);
                FInstancedStruct::FInstancedStruct(this);
                pFVar16 = (FObjectPtr_u_0 *)FNumberFormattingOptions::DefaultWithGrouping();
                FVar2 = pFVar16[1];
                this[1].ScriptStruct.field0_0x0.ObjectPtr.field0_0x0 = *pFVar16;
                this[1].StructMemory = (uchar *)FVar2;
                this[2].ScriptStruct.field0_0x0 = (TObjectPtr<UScriptStruct_const_>_u_0)pFVar16[2];
                FInstancedStruct::InitializeAs<FDS_Int32StringFormatArg>(this);
                pFVar17 = FInstancedStruct::GetMutablePtr<FDS_Int32StringFormatArg>(this);
                if (pFVar17 != (FDS_Int32StringFormatArg *)0x0) {
                  pFVar17->Value = pFVar8->ExtendValue;
                }
                FDS_Text::SetTextFormatFromStringTable(&FStack_1d8,StringUi,0x5ea,&TStack_248);
                DestructItems<FDS_TextFormatArg,int>
                          ((FDS_TextFormatArg *)TStack_248.AllocatorInstance.Data,
                           TStack_248.ArrayNum);
                if ((FDS_TextFormatArg *)TStack_248.AllocatorInstance.Data !=
                    (FDS_TextFormatArg *)0x0) {
                  FMemory::Free(TStack_248.AllocatorInstance.Data);
                }
                UDS_M_CommonPopup::SetSubContent01(pUStack_218,&FStack_1d8);
                pUVar14 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&FStackX_18);
                UDS_M_CommonPopup::SetButton(pUVar14,ButtonCancel,StringUi,0x66,false);
                pUVar14 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&FStackX_18);
                TStack_248.AllocatorInstance.Data =
                     (FScriptContainerElement *)OnInventoryExtendPopupCancelClicked;
                TStack_248._8_8_ = TStack_248._8_8_ & 0xffffffff00000000;
                pcStack_168 = OnInventoryExtendPopupCancelClicked;
                uStack_160._0_4_ = TStack_248.ArrayNum;
                uStack_160._4_4_ = TStack_248.ArrayMax;
                pTVar18 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                          ::CreateUObject<UDS_VM_W_Inventory>
                                    (&TStack_128,param_1,(pmf_9f2362af *)&pcStack_168);
                UDS_M_CommonPopup::SetDelegate(pUVar14,ButtonCancel,pTVar18);
                pUVar14 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&FStackX_18);
                UDS_M_CommonPopup::SetButton(pUVar14,ButtonConfirm,StringUi,0x1fcfd,iVar5 == 0);
                pUVar14 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&FStackX_18);
                TStack_248._8_8_ = TStack_248._8_8_ & 0xffffffff00000000;
                TStack_248.AllocatorInstance.Data =
                     (FScriptContainerElement *)OnInventoryExtendPopupConfirmClicked;
                pcStack_158 = OnInventoryExtendPopupConfirmClicked;
                uStack_150._0_4_ = TStack_248.ArrayNum;
                uStack_150._4_4_ = TStack_248.ArrayMax;
                pTVar18 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                          ::CreateUObject<UDS_VM_W_Inventory>
                                    (&TStack_110,param_1,(pmf_9f2362af *)&pcStack_158);
                UDS_M_CommonPopup::SetDelegate(pUVar14,ButtonConfirm,pTVar18);
                pUVar14 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&FStackX_18);
                FStack_208.ID = 0x1fcfd;
                FStack_208._padding_ = (longlong)&___7FDS_StringUiID__6B_;
                pFVar19 = FDS_StringUiID::Str(&FStack_208);
                pFVar20 = FText::FromString(&FStack_138,pFVar19);
                UDS_M_CommonPopup::SetSlider(pUVar14,1,iVar5,1,pFVar20,1);
                pUVar14 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&FStackX_18);
                FStack_208.ID = FStack_208.ID & 0xffffffff00000000;
                FStack_208._padding_ = (longlong)OnInventoryExtendPopupProgressBarChanged;
                pcStack_148 = OnInventoryExtendPopupProgressBarChanged;
                uStack_140 = FStack_208.ID;
                pTVar18 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                          ::CreateUObject<UDS_VM_W_Inventory>
                                    (&TStack_f8,param_1,(pmf_9f2362af *)&pcStack_148);
                UDS_M_CommonPopup::SetDelegate(pUVar14,Slider,pTVar18);
                pUVar14 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&FStackX_18);
                UDS_M_CommonPopup::SetAsset
                          (pUVar14,Asset01,pFVar12->ID_MoneyIcon,iVar4,(int)uVar13,false);
                pUVar14 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&FStackX_18);
                UDS_M_CommonPopup::OpenCommonPopup(pUVar14);
              }
              else {
                bVar3 = UE::Assert::Private::ExecCheckImplInternal
                                  (&bGEnsureHasExecuted<_3321408251353890646>,false,
                                   "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_Inventory.cpp"
                                   ,0xaa,"false");
                if (bVar3) goto code_r0x00014bfbfdf5;
              }
            }
            else {
              bVar3 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<_3321408251353890649>,false,
                                 "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_Inventory.cpp"
                                 ,0xa7,"false");
              if (bVar3) goto code_r0x00014bfbfdf5;
            }
          }
          else {
            bVar3 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_3321408251353890652>,false,
                               "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_Inventory.cpp"
                               ,0xa4,"false");
            if (bVar3) goto code_r0x00014bfbfdf5;
          }
        }
      }
    }
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3321408251353890677>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_Inventory.cpp"
                       ,0x8b,"false");
    if (bVar3) {
code_r0x00014bfbfdf5:
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// SetQuickSlotRegistrationActivatedButtonClickEvent_WrapperImpl @ 14b73e950

void __cdecl
UDS_VM_W_Inventory::SetQuickSlotRegistrationActivatedButtonClickEvent_WrapperImpl
          (void *param_1,void *param_2)

{
  return;
}

// StaticClass @ 14b73e960

UClass * __cdecl UDS_VM_W_Inventory::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_Inventory.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_Inventory",
               &Z_Registration_Info_UClass_UDS_VM_W_Inventory.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_Inventory,0x1e8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_W_Inventory>,
               InternalVTableHelperCtorCaller<UDS_VM_W_Inventory>,local_res8,
               UDS_VM_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_Inventory.InnerSingleton;
}

// UDS_VM_W_Inventory @ 14b741150

UDS_VM_W_Inventory * __thiscall
UDS_VM_W_Inventory::UDS_VM_W_Inventory(UDS_VM_W_Inventory *this,FVTableHelper *param_1)

{
  UDS_VM_ModelBase::UDS_VM_ModelBase((UDS_VM_ModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_Inventory__6B_;
  *(undefined8 *)&(this->EventOpenFilter).Delegate = 0;
  *(undefined8 *)&(this->EventOpenFilter).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->EventOpenFilter).Delegate.field_0x10 = 0;
  (this->SortOrderButtonClickEvent)._padding_ = '\0';
  (this->SortOrderButtonClickEvent).bIsCustomSelected = false;
  (this->SortOrderButtonClickEvent).bIsLacked = false;
  (this->SortOrderButtonClickEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->SortOrderButtonClickEvent).Delegate = 0;
  *(undefined8 *)&(this->SortOrderButtonClickEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->SortOrderButtonClickEvent).Delegate.field_0x10 = 0;
  (this->VM_SortDropdown).field0_0x0.DebugPtr = (UDS_VM_Dropdown *)0x0;
  (this->OpenInventoryExtendButtonClickEvent)._padding_ = '\0';
  (this->OpenInventoryExtendButtonClickEvent).bIsCustomSelected = false;
  (this->OpenInventoryExtendButtonClickEvent).bIsLacked = false;
  (this->OpenInventoryExtendButtonClickEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->OpenInventoryExtendButtonClickEvent).Delegate = 0;
  *(undefined8 *)&(this->OpenInventoryExtendButtonClickEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->OpenInventoryExtendButtonClickEvent).Delegate.field_0x10 = 0;
  (this->QuickSlotRegistrationActivatedButtonClickEvent)._padding_ = '\0';
  (this->QuickSlotRegistrationActivatedButtonClickEvent).bIsCustomSelected = false;
  (this->QuickSlotRegistrationActivatedButtonClickEvent).bIsLacked = false;
  (this->QuickSlotRegistrationActivatedButtonClickEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->QuickSlotRegistrationActivatedButtonClickEvent).Delegate = 0;
  *(undefined8 *)&(this->QuickSlotRegistrationActivatedButtonClickEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->QuickSlotRegistrationActivatedButtonClickEvent).Delegate.field_0x10 = 0;
  (this->FixedText_Empty).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Empty).StringEnumTableNameID.Number = 0;
  (this->FixedText_Empty).DateTime.Ticks = 0;
  (this->FixedText_Empty).TimeSpan.Ticks = 0;
  (this->FixedText_Empty).TimeExpressionType = None;
  (this->FixedText_Empty).IsExpression = false;
  (this->FixedText_Empty).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Empty).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Empty).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Empty).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Empty).FormatArgs.ArrayNum = 0;
  (this->FixedText_Empty).FormatArgs.ArrayMax = 0;
  (this->FixedText_Btn_QuickSlotEdit).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Btn_QuickSlotEdit).StringEnumTableNameID.Number = 0;
  (this->FixedText_Btn_QuickSlotEdit).DateTime.Ticks = 0;
  (this->FixedText_Btn_QuickSlotEdit).TimeSpan.Ticks = 0;
  (this->FixedText_Btn_QuickSlotEdit).TimeExpressionType = None;
  (this->FixedText_Btn_QuickSlotEdit).IsExpression = false;
  (this->FixedText_Btn_QuickSlotEdit).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_QuickSlotEdit).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Btn_QuickSlotEdit).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Btn_QuickSlotEdit).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_QuickSlotEdit).FormatArgs.ArrayNum = 0;
  (this->FixedText_Btn_QuickSlotEdit).FormatArgs.ArrayMax = 0;
  (this->EventOpenFilter)._padding_ = '\0';
  (this->EventOpenFilter).bIsCustomSelected = false;
  (this->EventOpenFilter).bIsLacked = false;
  (this->EventOpenFilter).bIsCustomDisabled = false;
  (this->FixedText_Empty).StringTableType = StringUi;
  (this->FixedText_Empty).StringTableID = 0x1fc99;
  (this->FixedText_Btn_QuickSlotEdit).StringTableType = StringUi;
  (this->FixedText_Btn_QuickSlotEdit).StringTableID = 0x1fcff;
  return this;
}

// UDS_VM_W_Inventory @ 14b7412a0

UDS_VM_W_Inventory * __thiscall
UDS_VM_W_Inventory::UDS_VM_W_Inventory(UDS_VM_W_Inventory *this,FObjectInitializer *param_1)

{
  UDS_VM_ModelBase::UDS_VM_ModelBase((UDS_VM_ModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_Inventory__6B_;
  *(undefined8 *)&(this->EventOpenFilter).Delegate = 0;
  *(undefined8 *)&(this->EventOpenFilter).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->EventOpenFilter).Delegate.field_0x10 = 0;
  (this->SortOrderButtonClickEvent)._padding_ = '\0';
  (this->SortOrderButtonClickEvent).bIsCustomSelected = false;
  (this->SortOrderButtonClickEvent).bIsLacked = false;
  (this->SortOrderButtonClickEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->SortOrderButtonClickEvent).Delegate = 0;
  *(undefined8 *)&(this->SortOrderButtonClickEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->SortOrderButtonClickEvent).Delegate.field_0x10 = 0;
  (this->VM_SortDropdown).field0_0x0.DebugPtr = (UDS_VM_Dropdown *)0x0;
  (this->OpenInventoryExtendButtonClickEvent)._padding_ = '\0';
  (this->OpenInventoryExtendButtonClickEvent).bIsCustomSelected = false;
  (this->OpenInventoryExtendButtonClickEvent).bIsLacked = false;
  (this->OpenInventoryExtendButtonClickEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->OpenInventoryExtendButtonClickEvent).Delegate = 0;
  *(undefined8 *)&(this->OpenInventoryExtendButtonClickEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->OpenInventoryExtendButtonClickEvent).Delegate.field_0x10 = 0;
  (this->QuickSlotRegistrationActivatedButtonClickEvent)._padding_ = '\0';
  (this->QuickSlotRegistrationActivatedButtonClickEvent).bIsCustomSelected = false;
  (this->QuickSlotRegistrationActivatedButtonClickEvent).bIsLacked = false;
  (this->QuickSlotRegistrationActivatedButtonClickEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->QuickSlotRegistrationActivatedButtonClickEvent).Delegate = 0;
  *(undefined8 *)&(this->QuickSlotRegistrationActivatedButtonClickEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->QuickSlotRegistrationActivatedButtonClickEvent).Delegate.field_0x10 = 0;
  (this->FixedText_Empty).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Empty).StringEnumTableNameID.Number = 0;
  (this->FixedText_Empty).DateTime.Ticks = 0;
  (this->FixedText_Empty).TimeSpan.Ticks = 0;
  (this->FixedText_Empty).TimeExpressionType = None;
  (this->FixedText_Empty).IsExpression = false;
  (this->FixedText_Empty).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Empty).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Empty).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Empty).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Empty).FormatArgs.ArrayNum = 0;
  (this->FixedText_Empty).FormatArgs.ArrayMax = 0;
  (this->FixedText_Btn_QuickSlotEdit).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Btn_QuickSlotEdit).StringEnumTableNameID.Number = 0;
  (this->FixedText_Btn_QuickSlotEdit).DateTime.Ticks = 0;
  (this->FixedText_Btn_QuickSlotEdit).TimeSpan.Ticks = 0;
  (this->FixedText_Btn_QuickSlotEdit).TimeExpressionType = None;
  (this->FixedText_Btn_QuickSlotEdit).IsExpression = false;
  (this->FixedText_Btn_QuickSlotEdit).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_QuickSlotEdit).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Btn_QuickSlotEdit).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Btn_QuickSlotEdit).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_QuickSlotEdit).FormatArgs.ArrayNum = 0;
  (this->FixedText_Btn_QuickSlotEdit).FormatArgs.ArrayMax = 0;
  (this->EventOpenFilter)._padding_ = '\0';
  (this->EventOpenFilter).bIsCustomSelected = false;
  (this->EventOpenFilter).bIsLacked = false;
  (this->EventOpenFilter).bIsCustomDisabled = false;
  (this->FixedText_Empty).StringTableType = StringUi;
  (this->FixedText_Empty).StringTableID = 0x1fc99;
  (this->FixedText_Btn_QuickSlotEdit).StringTableType = StringUi;
  (this->FixedText_Btn_QuickSlotEdit).StringTableID = 0x1fcff;
  return this;
}

// ~UDS_VM_W_Inventory @ 14b742ae0

void __thiscall UDS_VM_W_Inventory::~UDS_VM_W_Inventory(UDS_VM_W_Inventory *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_Inventory__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)
             (this->FixedText_Btn_QuickSlotEdit).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_Btn_QuickSlotEdit).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_Btn_QuickSlotEdit).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_Btn_QuickSlotEdit).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_Empty).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_Empty).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_Empty).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_Empty).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->QuickSlotRegistrationActivatedButtonClickEvent).Delegate);
  pvVar2 = *(void **)&(this->QuickSlotRegistrationActivatedButtonClickEvent).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)
             &(this->QuickSlotRegistrationActivatedButtonClickEvent).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->OpenInventoryExtendButtonClickEvent).Delegate);
  pvVar2 = *(void **)&(this->OpenInventoryExtendButtonClickEvent).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->OpenInventoryExtendButtonClickEvent).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->SortOrderButtonClickEvent).Delegate);
  pvVar2 = *(void **)&(this->SortOrderButtonClickEvent).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->SortOrderButtonClickEvent).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->EventOpenFilter).Delegate);
  pvVar2 = *(void **)&(this->EventOpenFilter).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->EventOpenFilter).Delegate);
  UDS_VM_ModelBase::~UDS_VM_ModelBase((UDS_VM_ModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b744c70

IClassDescriptor * __thiscall
UDS_VM_W_Inventory::GetFieldNotificationDescriptor(UDS_VM_W_Inventory *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_W_Inventory::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b745380

UClass * __cdecl UDS_VM_W_Inventory::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_Inventory.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_Inventory",
               &Z_Registration_Info_UClass_UDS_VM_W_Inventory.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_Inventory,0x1e8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_W_Inventory>,
               InternalVTableHelperCtorCaller<UDS_VM_W_Inventory>,local_res8,
               UDS_VM_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_Inventory.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_W_Inventory @ 14b745c30

void __cdecl UDS_VM_W_Inventory::StaticRegisterNativesUDS_VM_W_Inventory(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 8;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_W_Inventory_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// __VTableCtorCaller @ 14b746af0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl UDS_VM_W_Inventory::__VTableCtorCaller(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDS_VM_ModelBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = GetPrivateStaticClass();
  this = (UDS_VM_ModelBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDS_VM_ModelBase *)0x0) {
    UDS_VM_ModelBase::UDS_VM_ModelBase(this,param_1);
    this->_padding_ = (longlong)&_vftable__for__UObject__;
    this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
    this->_padding_ = (longlong)&___7UDS_VM_W_Inventory__6B_;
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 2;
    this[1]._padding_ = 0x1fc99;
    this[1]._padding_ = 0;
    this[1].Model.field0_0x0.DebugPtr = (UDS_ModelBase *)0x0;
    *(undefined8 *)&this[1].UpdateViewDelegate = 0;
    *(undefined4 *)&this[1].UpdateViewDelegate.field_0x8 = 0;
    this[1].UpdateViewDelegate.field_0xc = 0;
    *(undefined8 *)&this[1].UpdateViewDelegate.field_0x10 = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined1 *)&this[2]._padding_ = 2;
    this[2]._padding_ = 0x1fcff;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    *(undefined1 *)((longlong)&this[2]._padding_ + 4) = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// execCurrentItemCount @ 14b746d80

void __cdecl
UDS_VM_W_Inventory::execCurrentItemCount(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = CurrentItemCount((UDS_VM_W_Inventory *)param_1);
  *(int *)param_3 = iVar1;
  return;
}

// execExtendedInventorySlotCount @ 14b746dc0

void __cdecl
UDS_VM_W_Inventory::execExtendedInventorySlotCount(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = ExtendedInventorySlotCount((UDS_VM_W_Inventory *)param_1);
  *(int *)param_3 = iVar1;
  return;
}

// execInventogyTabList @ 14b7470c0

void __cdecl
UDS_VM_W_Inventory::execInventogyTabList(UObject *param_1,FFrame *param_2,void *param_3)

{
  FDS_EntryBindingEventField *pFVar1;
  FDS_EntryBindingEventField local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = InventogyTabList((UDS_VM_W_Inventory *)param_1,&local_18);
  if (param_3 != pFVar1) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = (pFVar1->UserObjectList).AllocatorInstance.Data;
    (pFVar1->UserObjectList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = (pFVar1->UserObjectList).ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = (pFVar1->UserObjectList).ArrayMax;
    (pFVar1->UserObjectList).ArrayNum = 0;
    (pFVar1->UserObjectList).ArrayMax = 0;
  }
  if (local_18.UserObjectList.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.UserObjectList.AllocatorInstance.Data);
  }
  return;
}

// execIsEmpty @ 14b747180

void __cdecl UDS_VM_W_Inventory::execIsEmpty(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsEmpty((UDS_VM_W_Inventory *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execIsQuickSlotRegistrationActivated @ 14b7471c0

void __cdecl
UDS_VM_W_Inventory::execIsQuickSlotRegistrationActivated
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsQuickSlotRegistrationActivated((UDS_VM_W_Inventory *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execIsQuickSlotRegistrationAvailability @ 14b747200

void __cdecl
UDS_VM_W_Inventory::execIsQuickSlotRegistrationAvailability
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsQuickSlotRegistrationAvailability((UDS_VM_W_Inventory *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execIsShowWeight @ 14b747380

void __cdecl UDS_VM_W_Inventory::execIsShowWeight(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsShowWeight((UDS_VM_W_Inventory *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execIsSortOrderDescend @ 14b7473c0

void __cdecl
UDS_VM_W_Inventory::execIsSortOrderDescend(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsSortOrderDescend((UDS_VM_W_Inventory *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// BindModel @ 14bf9cd50

void __thiscall UDS_VM_W_Inventory::BindModel(UDS_VM_W_Inventory *this)

{
  UDS_ContentEvent *pUVar1;
  
  UDS_VM_ModelBase::BindModel((UDS_VM_ModelBase *)this);
  pUVar1 = UDS_ContentEvent::GetEvent();
  if (pUVar1 != (UDS_ContentEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnContentsBackgroundClickDelegate,this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_W_Inventory>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnContentsBackgroundClickDelegate,(UDS_VM_W_Inventory *)&stack0x00000010,
               (pmf_8cbdc695 *)this);
  }
  return;
}

// Cleanup @ 14bf9e290

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EDS_ItemDetailOption": Some values do not have unique names */

void __thiscall UDS_VM_W_Inventory::Cleanup(UDS_VM_W_Inventory *this)

{
  UDS_VM_Dropdown *this_00;
  UDS_WindowManager *this_01;
  UDS_ItemDetailInfoManager *this_02;
  float local_res8 [2];
  uint local_res10 [6];
  
  this_00 = (this->VM_SortDropdown).field0_0x0.DebugPtr;
  if (this_00 != (UDS_VM_Dropdown *)0x0) {
    local_res8[0] = (float)CONCAT31(local_res8[0]._1_3_,1);
    UDS_VM_Dropdown::SetVisibleDropdownList(this_00,(ESlateVisibility *)local_res8);
  }
  this_01 = UDS_WindowManager::GetInst();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (this_01 == (UDS_WindowManager *)0x0) {
      return;
    }
  }
  else {
    if (this_01 == (UDS_WindowManager *)0x0) {
      return;
    }
    UE::GC::MarkAsReachable((UObject *)this_01);
  }
  local_res8[0] = 0.0;
  local_res10[0] = 0;
  UDS_WindowManager::CloseWindow(this_01,ContextMenu,local_res10,local_res8);
  this_02 = UDS_ItemDetailInfoManager::GetInst();
  if (this_02 == (UDS_ItemDetailInfoManager *)0x0) {
    return;
  }
  UDS_ItemDetailInfoManager::CloseItemDetailInfo(this_02,Normal);
  return;
}

// CloseWidget @ 14bf9e7b0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_W_Inventory::CloseWidget(UDS_VM_W_Inventory *this,EDS_WindowWidget param_1)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  UDS_WindowManager *this_00;
  UObject *pUVar4;
  float local_res18 [2];
  uint local_res20 [2];
  FWeakObjectPtr local_18 [2];
  
  this_00 = UDS_WindowManager::GetInst();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (this_00 == (UDS_WindowManager *)0x0) goto LAB_14bf9e839;
  }
  else {
    if (this_00 == (UDS_WindowManager *)0x0) {
LAB_14bf9e839:
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3321408251353890526>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_Inventory.cpp"
                         ,0x122,"false");
      if (!bVar2) {
        return;
      }
      goto code_r0x00014bf9e828;
    }
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  UDS_WindowManager::GetWindowInfo(this_00,(EDS_WindowWidget)local_18);
  bVar2 = FWeakObjectPtr::IsValid(local_18);
  if (bVar2) {
    pUVar4 = FWeakObjectPtr::Get(local_18);
    cVar3 = (**(code **)(*(longlong *)pUVar4 + 0x2c8))(pUVar4);
    if (cVar3 != '\0') {
      local_res18[0] = 0.0;
      local_res20[0] = 0;
      UDS_WindowManager::CloseWindow(this_00,param_1,local_res20,local_res18);
    }
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3321408251353890523>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_Inventory.cpp"
                       ,0x125,"false");
    if (bVar2) {
code_r0x00014bf9e828:
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// CurrentItemCount @ 14bfa5040

int __thiscall UDS_VM_W_Inventory::CurrentItemCount(UDS_VM_W_Inventory *this)

{
  longlong *this_00;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  UClass *pUVar4;
  UDS_M_Inventory *this_01;
  UObject *pUVar5;
  FWeakObjectPtr local_res8;
  UObject *local_res10 [3];
  
  this_00 = &this->_padding_;
  if (*this_00 != 0) {
    pUVar4 = Z_Construct_UClass_UDS_M_Inventory_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar4);
    if (bVar2) {
      pUVar5 = (UObject *)*this_00;
      goto LAB_14bfa506e;
    }
  }
  pUVar5 = (UObject *)0x0;
LAB_14bfa506e:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10[0] = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res10);
  bVar2 = FWeakObjectPtr::IsValid(&local_res8);
  if (!bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3321408251353890502>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_Inventory.cpp"
                       ,0x13a,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
    return 0;
  }
  this_01 = (UDS_M_Inventory *)FWeakObjectPtr::Get(&local_res8);
  iVar3 = UDS_M_Inventory::InventoryUsedSlotCount(this_01);
  return iVar3;
}

// ExtendedInventorySlotCount @ 14bfaa840

int __thiscall UDS_VM_W_Inventory::ExtendedInventorySlotCount(UDS_VM_W_Inventory *this)

{
  longlong *this_00;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  UClass *pUVar4;
  UDS_M_Inventory *this_01;
  UObject *pUVar5;
  FWeakObjectPtr local_res8;
  UObject *local_res10 [3];
  
  this_00 = &this->_padding_;
  if (*this_00 != 0) {
    pUVar4 = Z_Construct_UClass_UDS_M_Inventory_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar4);
    if (bVar2) {
      pUVar5 = (UObject *)*this_00;
      goto LAB_14bfaa86e;
    }
  }
  pUVar5 = (UObject *)0x0;
LAB_14bfaa86e:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10[0] = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res10);
  bVar2 = FWeakObjectPtr::IsValid(&local_res8);
  if (!bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3321408251353890581>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_Inventory.cpp"
                       ,0xeb,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
    return 0;
  }
  this_01 = (UDS_M_Inventory *)FWeakObjectPtr::Get(&local_res8);
  iVar3 = UDS_M_Inventory::GetExtendedInventorySlotCount(this_01);
  return iVar3;
}

// InitDropDown @ 14bfadfa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_W_Inventory::InitDropDown(UDS_VM_W_Inventory *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  UDS_VM_Dropdown *this_00;
  code *pcVar3;
  FDS_ViewModelContext_Dropdown *pFVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  UClass *pUVar8;
  UDS_LogManager *pUVar9;
  FDS_SortingGroupTableRow *pFVar10;
  ulonglong uVar11;
  UEnum *pUVar12;
  undefined8 *puVar13;
  ulong64 uVar14;
  atomic<int> *paVar15;
  FScriptContainerElement *pFVar16;
  TObjectPtr<UDS_VM_Dropdown>_u_0 TVar17;
  FScriptContainerElement *pFVar18;
  undefined1 auStackY_2c8 [32];
  undefined1 local_298 [8];
  undefined1 local_290 [8];
  FDelegateAllocation local_288;
  TSharedPtr<FDS_ViewModelContext_Dropdown,1> local_278;
  uint local_268;
  FWeakObjectPtr local_260;
  TObjectPtr<UDS_VM_Dropdown>_u_0 local_258;
  FDS_Text local_250;
  TObjectPtr<UDS_VM_Dropdown>_u_0 local_200;
  undefined1 local_1f8 [96];
  char local_198;
  FDestructionSentinel local_190;
  FDelegateAllocation *local_178;
  TSharedPtr<FDS_ViewModelContext,1> local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_2c8;
  TVar17.DebugPtr = (UDS_VM_Dropdown *)0x0;
  local_200.DebugPtr = TVar17.DebugPtr;
  local_1f8._8_8_ = this;
  if (this->_padding_ != 0) {
    pUVar8 = Z_Construct_UClass_UDS_M_Inventory_NoRegister();
    bVar6 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar8);
    if (bVar6) {
      local_200 = (TObjectPtr<UDS_VM_Dropdown>_u_0)this->_padding_;
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_200.DebugPtr != (UDS_VM_Dropdown *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_200.DebugPtr);
  }
  local_260.ObjectIndex = 0;
  local_260.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_200.DebugPtr != (UDS_VM_Dropdown *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_200.DebugPtr);
  }
  FWeakObjectPtr::operator=(&local_260,(FObjectPtr)&local_200);
  bVar6 = FWeakObjectPtr::IsValid(&local_260);
  if (bVar6) {
    MakeContext<FDS_ViewModelContext_Dropdown>(&local_278);
    pFVar4 = local_278.Object;
    if (local_278.Object == (FDS_ViewModelContext_Dropdown *)0x0) {
      pUVar9 = UDS_LogManager::GetInst();
      if (pUVar9 != (UDS_LogManager *)0x0) {
        pUVar9 = UDS_LogManager::GetInst();
        local_158._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_158,"UDS_VM_W_Inventory::InitDropDown",0x20,Yes);
        UDS_LogManager::PrintLog(pUVar9,1,Warning,local_158.Ptr,0xfe,L"dropdownContext is Invalid.")
        ;
        if ((void *)local_158._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_158._padding_);
        }
      }
    }
    else {
      if ((local_278.Object == (FDS_ViewModelContext_Dropdown *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(undefined4 *)&pFVar4->_padding_ = 0x117;
      pFVar10 = FDS_SortingGroupTableRow::Get(1,true);
      if (pFVar10 != (FDS_SortingGroupTableRow *)0x0) {
        pFVar18 = (pFVar10->ID_SortingType).AllocatorInstance.Data;
        local_268 = (pFVar10->ID_SortingType).ArrayNum;
        uVar11 = (ulonglong)(int)local_268;
        pFVar2 = pFVar18 + uVar11;
        while( true ) {
          if ((pFVar10->ID_SortingType).ArrayNum != (int)uVar11) {
            local_298[0] = 0;
            `TCheckedPointerIterator<enum_EDS_SortingType_const_,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_298);
          }
          if (pFVar18 == pFVar2) break;
          if ((pFVar4 == (FDS_ViewModelContext_Dropdown *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pUVar12 = StaticEnum<enum_EDS_SortingType>();
          DS_Util::GetStringEnumTableKey((UEnum *)local_1f8,(int)pUVar12);
          local_250.StringTableType = None;
          local_250.StringTableID = 0;
          local_250.StringEnumTableNameID.ComparisonIndex.Value = 0;
          local_250.StringEnumTableNameID.Number = 0;
          local_250.DateTime.Ticks = 0;
          local_250.TimeSpan.Ticks = 0;
          local_250.TimeExpressionType = None;
          local_250.IsExpression = false;
          local_250.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_250.UniqueString.Data.ArrayNum = 0;
          local_250.UniqueString.Data.ArrayMax = 0;
          local_250.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_250.FormatArgs.ArrayNum = 0;
          local_250.FormatArgs.ArrayMax = 0;
          FDS_Text::SetTextFromStringEnumTable(&local_250,(FName *)local_1f8);
          iVar7 = (pFVar4->DropdownList).ArrayNum;
          piVar1 = &(pFVar4->DropdownList).ArrayMax;
          if (iVar7 == *piVar1) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x850,&(pFVar4->DropdownList).AllocatorInstance,piVar1);
          }
          (pFVar4->DropdownList).ArrayNum = iVar7 + 1;
          pFVar16 = (pFVar4->DropdownList).AllocatorInstance.Data + (longlong)iVar7 * 0x50;
          *pFVar16 = (FScriptContainerElement)local_250.StringTableType;
          *(long64 *)(pFVar16 + 8) = local_250.StringTableID;
          *(FName *)(pFVar16 + 0x10) = local_250.StringEnumTableNameID;
          *(long64 *)(pFVar16 + 0x18) = local_250.DateTime.Ticks;
          *(long64 *)(pFVar16 + 0x20) = local_250.TimeSpan.Ticks;
          *(EDS_TimeExpression *)(pFVar16 + 0x28) = local_250.TimeExpressionType;
          *(undefined8 *)(pFVar16 + 0x30) = 0;
          pFVar16[0x2c] = (FScriptContainerElement)local_250.IsExpression;
          *(FScriptContainerElement **)(pFVar16 + 0x30) =
               local_250.UniqueString.Data.AllocatorInstance.Data;
          local_250.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          *(int *)(pFVar16 + 0x38) = local_250.UniqueString.Data.ArrayNum;
          *(int *)(pFVar16 + 0x3c) = local_250.UniqueString.Data.ArrayMax;
          local_250.UniqueString.Data.ArrayNum = 0;
          local_250.UniqueString.Data.ArrayMax = 0;
          *(undefined8 *)(pFVar16 + 0x40) = 0;
          *(FScriptContainerElement **)(pFVar16 + 0x40) =
               local_250.FormatArgs.AllocatorInstance.Data;
          local_250.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          *(int *)(pFVar16 + 0x48) = local_250.FormatArgs.ArrayNum;
          *(int *)(pFVar16 + 0x4c) = local_250.FormatArgs.ArrayMax;
          local_250.FormatArgs.ArrayNum = 0;
          local_250.FormatArgs.ArrayMax = 0;
          DestructItems<FDS_TextFormatArg,int>((FDS_TextFormatArg *)0x0,0);
          if (local_250.FormatArgs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_250.FormatArgs.AllocatorInstance.Data);
          }
          if (local_250.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
          {
            FMemory::Free(local_250.UniqueString.Data.AllocatorInstance.Data);
          }
          uVar11 = (ulonglong)local_268;
          pFVar18 = pFVar18 + 1;
        }
        local_1f8._56_4_ = 0;
        local_1f8._48_8_ = OnSortTypeChanged;
        local_1f8._60_4_ = local_1f8._76_4_;
        local_290 = (undefined1  [8])0x0;
        local_288.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_288.DelegateSize = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_290,
                   (FWriteAccessScope *)&local_190);
        local_178 = &local_288;
        puVar13 = UE::Core::Private::DelegateAllocate(0x30,&local_288);
        uVar5 = local_1f8._8_8_;
        if (puVar13 != (undefined8 *)0x0) {
          *puVar13 = &
                     ___7__TCommonDelegateInstanceState___A6AXH_ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar14 = FDelegateHandle::GenerateNewID();
          puVar13[2] = uVar14;
          *puVar13 = &
                     ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_W_Inventory____A6AXH_ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             ((UDS_VM_W_Inventory *)uVar5 != (UDS_VM_W_Inventory *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)uVar5);
          }
          puVar13[3] = 0;
          local_1f8._16_8_ = uVar5;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             ((UDS_VM_W_Inventory *)uVar5 != (UDS_VM_W_Inventory *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)uVar5);
          }
          FWeakObjectPtr::operator=
                    ((FWeakObjectPtr *)(puVar13 + 3),(FObjectPtr)((longlong)local_1f8 + 0x10));
          puVar13[4] = local_1f8._48_8_;
          puVar13[5] = CONCAT44(local_1f8._60_4_,local_1f8._56_4_);
        }
        if (local_190.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_190.Accessor,&local_190);
        }
        if ((pFVar4 == (FDS_ViewModelContext_Dropdown *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar4->OnClickList,
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)local_290);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_290,
                   (FWriteAccessScope *)(local_1f8 + 0x50));
        if ((local_288.DelegateSize != 0) &&
           (local_288.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
          (*(code *)**(undefined8 **)local_288.DelegateAllocator)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&local_288,0,0,0x10);
          local_288.DelegateSize = 0;
        }
        if (local_198 == '\0') {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                    ((FMRSWRecursiveAccessDetector *)local_1f8._88_8_,
                     (FDestructionSentinel *)(local_1f8 + 0x50));
        }
        if (local_288.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)local_288.DelegateAllocator);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_290);
        this_00 = (((TObjectPtr<UDS_VM_Dropdown> *)(uVar5 + 0x100))->field0_0x0).DebugPtr;
        if (this_00 == (UDS_VM_Dropdown *)0x0) {
          if (local_278.SharedReferenceCount.ReferenceController ==
              (TReferenceControllerBase<1> *)0x0) {
            paVar15 = (atomic<int> *)&DAT_00000008;
          }
          else {
            paVar15 = &(local_278.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
            LOCK();
            *paVar15 = (atomic<int>)((int)*paVar15 + 1);
            UNLOCK();
          }
          local_1f8._64_8_ = local_278.Object;
          local_1f8._72_8_ = local_278.SharedReferenceCount.ReferenceController;
          if (local_278.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            *paVar15 = (atomic<int>)((int)*paVar15 + 1);
            UNLOCK();
          }
          DS_ViewModelTemplateUtil::CreateViewModel
                    ((UObject *)&local_258.ObjectPtr,(TSharedPtr<FDS_ViewModelContext,1> *)uVar5);
          if (local_258.DebugPtr != (UDS_VM_Dropdown *)0x0) {
            pUVar8 = Z_Construct_UClass_UDS_VM_Dropdown_NoRegister();
            bVar6 = FObjectPtr::IsA(&local_258.ObjectPtr,pUVar8);
            if (bVar6) {
              TVar17 = local_258;
            }
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_278.SharedReferenceCount.ReferenceController);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (TVar17.DebugPtr != (UDS_VM_Dropdown *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)TVar17.DebugPtr);
          }
          (((TObjectPtr<UDS_VM_Dropdown> *)(uVar5 + 0x100))->field0_0x0).DebugPtr =
               (UDS_VM_Dropdown *)TVar17;
        }
        else {
          local_168.Object = (FDS_ViewModelContext *)local_278.Object;
          local_168.SharedReferenceCount.ReferenceController =
               local_278.SharedReferenceCount.ReferenceController;
          if (local_278.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_278.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_278.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
          UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_00,&local_168);
        }
        local_1f8._40_4_ = FFieldNotificationClassDescriptor::VM_SortDropdown.BitNumber;
        local_1f8._32_4_ =
             FFieldNotificationClassDescriptor::VM_SortDropdown.FieldName.ComparisonIndex.Value;
        local_1f8._36_4_ = FFieldNotificationClassDescriptor::VM_SortDropdown.FieldName.Number;
        (**(code **)(*(longlong *)(uVar5 + 0x28) + 0x38))
                  ((longlong *)(uVar5 + 0x28),local_1f8 + 0x20);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_278.SharedReferenceCount.ReferenceController);
  }
  else {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3321408251353890567>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_Inventory.cpp"
                       ,0xf9,"false");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// InitViewModelCDO @ 14bfb11b0

void __thiscall UDS_VM_W_Inventory::InitViewModelCDO(UDS_VM_W_Inventory *this)

{
  int iVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  longlong lVar4;
  undefined4 local_res10 [2];
  UDS_VM_W_Inventory *local_res18;
  FDestructionSentinel local_78;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_58;
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDelegateAllocation *local_28;
  
  local_78._0_8_ = OnLoadWindowCallbackMenual;
  local_78.Accessor =
       (FMRSWRecursiveAccessDetector *)((ulonglong)local_78.Accessor & 0xffffffff00000000);
  local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_50.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_40);
  local_28 = &local_50;
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,&local_50);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget__W4EDS_ContentsTabFrameType__U__TWeakObjectPtr_VUDS_ContentArguments__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_W_Inventory____A6AXPEAVUDS_UserWidget__W4EDS_ContentsTabFrameType__U__TWeakObjectPtr_VUDS_ContentArguments__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_VM_W_Inventory *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar2[3] = 0;
    local_res18 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_VM_W_Inventory *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)&local_res18);
    puVar2[4] = local_78._0_8_;
    puVar2[5] = local_78.Accessor;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  local_res10[0] = 0xc9;
  if (UDS_ContentsController::OnLoadWindowCallbackManualDelegate._8_4_ !=
      UDS_ContentsController::OnLoadWindowCallbackManualDelegate._52_4_) {
    lVar4 = 0x154cef9f8;
    if (UDS_ContentsController::OnLoadWindowCallbackManualDelegate._64_8_ != 0) {
      lVar4 = UDS_ContentsController::OnLoadWindowCallbackManualDelegate._64_8_;
    }
    iVar1 = *(int *)(lVar4 + (ulonglong)
                             (UDS_ContentsController::OnLoadWindowCallbackManualDelegate._72_4_ - 1
                             & 0xc9) * 4);
    while (iVar1 != -1) {
      lVar4 = UDS_ContentsController::OnLoadWindowCallbackManualDelegate._0_8_ +
              (longlong)iVar1 * 0x28;
      if (*(int *)(UDS_ContentsController::OnLoadWindowCallbackManualDelegate._0_8_ +
                  (longlong)iVar1 * 0x28) == 0xc9) {
        if (lVar4 != 0) goto LAB_14bfb1353;
        break;
      }
      iVar1 = *(int *)(lVar4 + 0x20);
    }
  }
  local_78._0_8_ = local_res10;
  local_78.Accessor = &local_58.AccessDetector;
  TSet<TTuple<enum_EDS_WindowWidget,TDelegate<void___cdecl(UDS_UserWidget_*,enum_EDS_ContentsTabFrameType,TWeakObjectPtr<UDS_ContentArguments,FWeakObjectPtr>),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_WindowWidget,TDelegate<void___cdecl(UDS_UserWidget_*,enum_EDS_ContentsTabFrameType,TWeakObjectPtr<UDS_ContentArguments,FWeakObjectPtr>),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::
  EmplaceByHash<TPairInitializer<enum_EDS_WindowWidget_&&,TDelegate<void___cdecl(UDS_UserWidget_*,enum_EDS_ContentsTabFrameType,TWeakObjectPtr<UDS_ContentArguments,FWeakObjectPtr>),FDefaultDelegateUserPolicy>_&&>_>
            (&UDS_ContentsController::OnLoadWindowCallbackManualDelegate,(uint)&local_res18,
             (TPairInitializer<EDS_WindowWidget_&&,TDelegate<void___cdecl(UDS_UserWidget_*,EDS_ContentsTabFrameType,TWeakObjectPtr<UDS_ContentArguments,FWeakObjectPtr>),FDefaultDelegateUserPolicy>_&&>
              *)0xc9,(bool *)&local_78);
LAB_14bfb1353:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_78);
  if ((local_50.DelegateSize != 0) &&
     (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_50,0,0,0x10);
    local_50.DelegateSize = 0;
  }
  if (local_78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
  }
  if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_50.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
  return;
}

// InventogyTabList @ 14bfb1fe0

FDS_EntryBindingEventField * __thiscall
UDS_VM_W_Inventory::InventogyTabList
          (UDS_VM_W_Inventory *this,FDS_EntryBindingEventField *__return_storage_ptr__)

{
  longlong *this_00;
  FName FVar1;
  code *pcVar2;
  FWeakObjectPtr *pFVar3;
  bool bVar4;
  UClass *pUVar5;
  FDS_EntryBindingEventField *pFVar6;
  UDS_M_Inventory *this_01;
  UObject *pUVar7;
  UDS_UserObjectListItem *this_02;
  FName *pFVar8;
  undefined8 *puVar9;
  int iVar10;
  atomic<unsigned_char> *paVar11;
  ForAnyElementType FVar12;
  undefined1 local_res8 [8];
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  UObject *local_res20;
  UDS_UserObjectListItem *local_98;
  FWeakObjectPtr *local_90;
  FName local_88;
  FName local_80;
  TArray<TWeakObjectPtr<UDS_M_InventoryBagTabBtn,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
  local_78;
  TSharedPtr<FDS_ViewModelContext,1> local_68;
  undefined1 local_58 [8];
  TReferenceControllerBase<1> *local_50;
  
  pUVar7 = (UObject *)0x0;
  this_00 = &this->_padding_;
  (__return_storage_ptr__->UserObjectList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->UserObjectList).ArrayNum = 0;
  (__return_storage_ptr__->UserObjectList).ArrayMax = 0;
  if (*this_00 != 0) {
    pUVar5 = Z_Construct_UClass_UDS_M_Inventory_NoRegister();
    bVar4 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar5);
    if (bVar4) {
      pUVar7 = (UObject *)*this_00;
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar7);
  }
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  local_res20 = pUVar7;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar7);
  }
  FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res20);
  bVar4 = FWeakObjectPtr::IsValid(&local_res10);
  if (!bVar4) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3321408251353890472>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_Inventory.cpp"
                       ,0x158,"false");
    if (!bVar4) {
      return __return_storage_ptr__;
    }
    pcVar2 = (code *)swi(3);
    pFVar6 = (FDS_EntryBindingEventField *)(*pcVar2)();
    return pFVar6;
  }
  this_01 = (UDS_M_Inventory *)FWeakObjectPtr::Get(&local_res10);
  UDS_M_Inventory::GetInventoryTabModelList(this_01,&local_78);
  iVar10 = local_78.ArrayNum;
  local_90 = (FWeakObjectPtr *)(local_78.AllocatorInstance.Data + (longlong)iVar10 * 8);
  FVar12.Data = local_78.AllocatorInstance.Data;
  do {
    pFVar3 = local_90;
    if (local_78.ArrayNum != iVar10) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TWeakObjectPtr<UDS_M_InventoryBagTabBtn,FWeakObjectPtr>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((FWeakObjectPtr *)FVar12.Data == pFVar3) goto LAB_14bfb2254;
    local_res18 = *(FWeakObjectPtr *)FVar12.Data;
    bVar4 = FWeakObjectPtr::IsValid(&local_res18);
    if (!bVar4) {
      iVar10 = 0x15c;
      paVar11 = &bGEnsureHasExecuted<_3321408251353890468>;
      goto LAB_14bfb2234;
    }
    pUVar7 = GetTransientPackageAsObject();
    this_02 = NewObject<UDS_UserObjectListItem>(pUVar7);
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (this_02 == (UDS_UserObjectListItem *)0x0) goto LAB_14bfb2218;
    }
    else {
      if (this_02 == (UDS_UserObjectListItem *)0x0) {
LAB_14bfb2218:
        iVar10 = 0x15f;
        paVar11 = &bGEnsureHasExecuted<_3321408251353890465>;
LAB_14bfb2234:
        bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (paVar11,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_Inventory.cpp"
                           ,iVar10,"false");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          pFVar6 = (FDS_EntryBindingEventField *)(*pcVar2)();
          return pFVar6;
        }
LAB_14bfb2254:
        if (local_78.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return __return_storage_ptr__;
        }
        FMemory::Free(local_78.AllocatorInstance.Data);
        return __return_storage_ptr__;
      }
      UE::GC::MarkAsReachable((UObject *)this_02);
    }
    pUVar7 = FWeakObjectPtr::Get(&local_res18);
    pcVar2 = *(code **)(*(longlong *)pUVar7 + 0x308);
    pFVar8 = ::FName::FName(&local_88,L"");
    FVar1 = *pFVar8;
    pFVar8 = ::FName::FName(&local_80,L"");
    puVar9 = (undefined8 *)(*pcVar2)(pUVar7,local_58,0x18a,*pFVar8,FVar1);
    local_68.Object = (FDS_ViewModelContext *)*puVar9;
    local_68.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)puVar9[1];
    if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_UserObjectListItem::AddContext(this_02,&local_68);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_50);
    local_98 = this_02;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this_02);
    }
    FDS_EntryBindingEventField::Add
              (__return_storage_ptr__,(TObjectPtr<UDS_UserObjectListItem>)&local_98);
    FVar12.Data = FVar12.Data + 8;
  } while( true );
}

// IsEmpty @ 14bfb2e70

bool __thiscall UDS_VM_W_Inventory::IsEmpty(UDS_VM_W_Inventory *this)

{
  longlong *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UClass *pUVar4;
  UDS_M_Inventory *this_01;
  UObject *pUVar5;
  FWeakObjectPtr local_res8;
  UObject *local_res10 [3];
  
  this_00 = &this->_padding_;
  if (*this_00 != 0) {
    pUVar4 = Z_Construct_UClass_UDS_M_Inventory_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar4);
    if (bVar2) {
      pUVar5 = (UObject *)*this_00;
      goto LAB_14bfb2e9e;
    }
  }
  pUVar5 = (UObject *)0x0;
LAB_14bfb2e9e:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10[0] = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res10);
  bVar2 = FWeakObjectPtr::IsValid(&local_res8);
  if (!bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3321408251353890514>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_Inventory.cpp"
                       ,0x12e,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    return true;
  }
  this_01 = (UDS_M_Inventory *)FWeakObjectPtr::Get(&local_res8);
  bVar2 = UDS_M_Inventory::IsEmpty(this_01);
  return bVar2;
}

// IsQuickSlotRegistrationActivated @ 14bfb3140

bool __thiscall UDS_VM_W_Inventory::IsQuickSlotRegistrationActivated(UDS_VM_W_Inventory *this)

{
  return false;
}

// IsQuickSlotRegistrationAvailability @ 14bfb3150

bool __thiscall UDS_VM_W_Inventory::IsQuickSlotRegistrationAvailability(UDS_VM_W_Inventory *this)

{
  return false;
}

// IsShowWeight @ 14bfb3ca0

bool __thiscall UDS_VM_W_Inventory::IsShowWeight(UDS_VM_W_Inventory *this)

{
  longlong *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UClass *pUVar4;
  UDS_M_Inventory *this_01;
  UObject *pUVar5;
  FWeakObjectPtr local_res8;
  UObject *local_res10 [3];
  
  this_00 = &this->_padding_;
  if (*this_00 != 0) {
    pUVar4 = Z_Construct_UClass_UDS_M_Inventory_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar4);
    if (bVar2) {
      pUVar5 = (UObject *)*this_00;
      goto LAB_14bfb3cce;
    }
  }
  pUVar5 = (UObject *)0x0;
LAB_14bfb3cce:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10[0] = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res10);
  bVar2 = FWeakObjectPtr::IsValid(&local_res8);
  if (!bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3321408251353890508>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_Inventory.cpp"
                       ,0x134,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    return true;
  }
  this_01 = (UDS_M_Inventory *)FWeakObjectPtr::Get(&local_res8);
  bVar2 = UDS_M_Inventory::IsShowWeight(this_01);
  return bVar2;
}

// IsSortOrderDescend @ 14bfb3d80

bool __thiscall UDS_VM_W_Inventory::IsSortOrderDescend(UDS_VM_W_Inventory *this)

{
  longlong *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UClass *pUVar4;
  UDS_M_Inventory *this_01;
  UObject *pUVar5;
  FWeakObjectPtr local_res8;
  UObject *local_res10 [3];
  
  this_00 = &this->_padding_;
  if (*this_00 != 0) {
    pUVar4 = Z_Construct_UClass_UDS_M_Inventory_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar4);
    if (bVar2) {
      pUVar5 = (UObject *)*this_00;
      goto LAB_14bfb3dae;
    }
  }
  pUVar5 = (UObject *)0x0;
LAB_14bfb3dae:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10[0] = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res10);
  bVar2 = FWeakObjectPtr::IsValid(&local_res8);
  if (!bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3321408251353890480>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_Inventory.cpp"
                       ,0x150,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    return false;
  }
  this_01 = (UDS_M_Inventory *)FWeakObjectPtr::Get(&local_res8);
  bVar2 = UDS_M_Inventory::IsSortOrderDescend(this_01);
  return bVar2;
}

// OnBackgroundClickEvent @ 14bfb4760

void __thiscall UDS_VM_W_Inventory::OnBackgroundClickEvent(UDS_VM_W_Inventory *this)

{
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  UObject *local_res18;
  undefined8 local_res20;
  
  Cleanup(this);
  pUVar4 = (UObject *)0x0;
  if (this->_padding_ != 0) {
    pUVar3 = Z_Construct_UClass_UDS_M_Inventory_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar3);
    if (bVar2) {
      pUVar4 = (UObject *)this->_padding_;
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res18 = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res18);
  bVar2 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar2) {
    pUVar4 = FWeakObjectPtr::Get(&local_res8);
    local_res20 = 0;
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    pcVar1 = *(code **)(*(longlong *)pUVar4 + 0x2e0);
    FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res20);
    (*pcVar1)(pUVar4,local_res10,0);
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3321408251353890445>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_Inventory.cpp"
                       ,0x173,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// OnCloseInit @ 14bfbbfc0

void __thiscall UDS_VM_W_Inventory::OnCloseInit(UDS_VM_W_Inventory *this)

{
  UDS_ViewModelBase::OnCloseInit((UDS_ViewModelBase *)this);
  Cleanup(this);
  return;
}

// OnEventOpenFilter @ 14bfbcef0

void __thiscall
UDS_VM_W_Inventory::OnEventOpenFilter(UDS_VM_W_Inventory *this,FDS_ButtonEventField *param_1)

{
  longlong *this_00;
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  UDS_M_Inventory *this_01;
  UObject *pUVar4;
  FWeakObjectPtr local_res8 [2];
  UObject *local_res18 [2];
  
  this_00 = &this->_padding_;
  if (*this_00 != 0) {
    pUVar3 = Z_Construct_UClass_UDS_M_Inventory_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar3);
    if (bVar2) {
      pUVar4 = (UObject *)*this_00;
      goto LAB_14bfbcf1e;
    }
  }
  pUVar4 = (UObject *)0x0;
LAB_14bfbcf1e:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  local_res8[0].ObjectIndex = 0;
  local_res8[0].ObjectSerialNumber = 0;
  local_res18[0] = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(local_res8,(FObjectPtr)local_res18);
  bVar2 = FWeakObjectPtr::IsValid(local_res8);
  if (bVar2) {
    this_01 = (UDS_M_Inventory *)FWeakObjectPtr::Get(local_res8);
    UDS_M_Inventory::OnClickedFilterOpenButton(this_01);
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3321408251353890453>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_Inventory.cpp"
                       ,0x16b,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// OnInventoryExtendPopupCancelClicked @ 14bfbde60

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_Inventory::OnInventoryExtendPopupCancelClicked
          (UDS_VM_W_Inventory *this,TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1)

{
  UDS_WindowManager *this_00;
  float local_res18 [2];
  uint local_res20 [2];
  
  this_00 = UDS_WindowManager::GetInst();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (this_00 == (UDS_WindowManager *)0x0) {
      return;
    }
  }
  else {
    if (this_00 == (UDS_WindowManager *)0x0) {
      return;
    }
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  local_res18[0] = 0.0;
  local_res20[0] = 0;
  UDS_WindowManager::CloseWindow(this_00,PopupCommon,local_res20,local_res18);
  return;
}

// OnInventoryExtendPopupConfirmClicked @ 14bfbdec0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_Inventory::OnInventoryExtendPopupConfirmClicked
          (UDS_VM_W_Inventory *this,TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1)

{
  code *pcVar1;
  FName FVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  UObject *pUVar7;
  FWeakObjectPtr *this_00;
  UEnum *this_01;
  FString *pFVar8;
  UDS_SendPacketManager *this_02;
  UDS_M_CommonPopup *this_03;
  UDS_WindowManager *this_04;
  undefined1 *puVar9;
  longlong lVar10;
  FObjectPtr_u_0 FVar11;
  FName *pFVar12;
  wchar_t *pwVar13;
  FWeakObjectPtr local_res10;
  undefined4 local_res18 [2];
  float local_res20 [2];
  FWeakObjectPtr local_88;
  FName local_80;
  uint local_78 [2];
  FName local_70;
  TPairInitializer<int_const_&,FName_const_&> local_68;
  undefined8 local_58;
  undefined4 *local_50;
  FName *local_48;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_40;
  
  local_res10 = param_1.WeakPtr;
  bVar3 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar3) {
    pUVar7 = FWeakObjectPtr::Get(&local_res10);
    if (*(int *)&pUVar7[0x16].field_0x8 != *(int *)&pUVar7[0x17].field_0xc) {
      puVar9 = *(undefined1 **)&pUVar7[0x17].field_0x18;
      if (*(undefined1 **)&pUVar7[0x17].field_0x18 == (undefined1 *)0x0) {
        puVar9 = &pUVar7[0x17].field_0x10;
      }
      iVar5 = *(int *)(puVar9 + (ulonglong)(*(int *)&pUVar7[0x17].field_0x20 - 1U & 0xb) * 4);
      if (iVar5 != -1) {
        lVar10 = *(longlong *)(pUVar7 + 0x16);
        do {
          if (*(char *)(lVar10 + (longlong)iVar5 * 0x14) == '\v') {
            this_00 = &TMapBase<enum_EDS_CommonPopupContext,TWeakObjectPtr<UDS_ModelBase,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_CommonPopupContext,TWeakObjectPtr<UDS_ModelBase,FWeakObjectPtr>,0>_>
                       ::FindChecked(pUVar7 + 0x16,ButtonConfirm)->WeakPtr;
            local_68.Value = (FName *)FWeakObjectPtr::Get(this_00);
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               ((UObject *)local_68.Value != (UObject *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)local_68.Value);
            }
            local_88.ObjectIndex = 0;
            local_88.ObjectSerialNumber = 0;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               ((UObject *)local_68.Value != (UObject *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)local_68.Value);
            }
            FVar11.Handle = (UObject *)&local_68.Value;
            goto LAB_14bfbdfaf;
          }
          iVar5 = *(int *)(lVar10 + 0xc + (longlong)iVar5 * 0x14);
        } while (iVar5 != -1);
      }
    }
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1729980661818720170>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_CommonPopup.h"
                       ,0x56,"false");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FVar11.Handle = (UObject *)&local_58;
    local_88.ObjectIndex = 0;
    local_88.ObjectSerialNumber = 0;
    local_58 = 0;
LAB_14bfbdfaf:
    FWeakObjectPtr::operator=(&local_88,(FObjectPtr)FVar11);
    bVar3 = FWeakObjectPtr::IsValid(&local_88);
    if (bVar3) {
      pUVar7 = FWeakObjectPtr::Get(&local_88);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) <
           `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_CommonIconTextButtonData>(EDS_CommonIconTextButtonData)___ptr64'
           ::__l2::_thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_CommonIconTextButtonData>(EDS_CommonIconTextButtonData)___ptr64'
                               ::__l2::_thread_safe_static_guard_0__),
         `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_CommonIconTextButtonData>(EDS_CommonIconTextButtonData)___ptr64'
         ::__l2::_thread_safe_static_guard_0__ == -1)) {
        atexit(`FDS_DataContainer::TransformIndexToName<enum_EDS_CommonIconTextButtonData>'::__l2::
               _dynamic_atexit_destructor_for__EnumNameCache__);
        _Init_thread_footer(&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_CommonIconTextButtonData>(EDS_CommonIconTextButtonData)___ptr64'
                             ::__l2::_thread_safe_static_guard_0__);
      }
      pwVar13 = L"";
      local_res18[0] = 2;
      if (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_CommonIconTextButtonData>(EDS_CommonIconTextButtonData)___ptr64'
          ::__l2::EnumNameCache._8_4_ !=
          `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_CommonIconTextButtonData>(EDS_CommonIconTextButtonData)___ptr64'
          ::__l2::EnumNameCache._52_4_) {
        lVar10 = 0x154cf73b8;
        if (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_CommonIconTextButtonData>(EDS_CommonIconTextButtonData)___ptr64'
            ::__l2::EnumNameCache._64_8_ != 0) {
          lVar10 = `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_CommonIconTextButtonData>(EDS_CommonIconTextButtonData)___ptr64'
                   ::__l2::EnumNameCache._64_8_;
        }
        iVar5 = *(int *)(lVar10 + (ulonglong)
                                  (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_CommonIconTextButtonData>(EDS_CommonIconTextButtonData)___ptr64'
                                   ::__l2::EnumNameCache._72_4_ - 1 & 2) * 4);
        while (iVar5 != -1) {
          lVar10 = `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_CommonIconTextButtonData>(EDS_CommonIconTextButtonData)___ptr64'
                   ::__l2::EnumNameCache._0_8_ + (longlong)iVar5 * 0x14;
          if (*(int *)(`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_CommonIconTextButtonData>(EDS_CommonIconTextButtonData)___ptr64'
                       ::__l2::EnumNameCache._0_8_ + (longlong)iVar5 * 0x14) == 2) {
            pFVar12 = (FName *)(lVar10 + 4);
            if (lVar10 == 0) {
              pFVar12 = (FName *)0x0;
            }
            if (pFVar12 != (FName *)0x0) {
              local_80 = *pFVar12;
              goto LAB_14bfbe16e;
            }
            break;
          }
          iVar5 = *(int *)(lVar10 + 0xc);
        }
      }
      this_01 = StaticEnum<enum_EDS_CommonIconTextButtonData>();
      if (this_01 == (UEnum *)0x0) {
        ::FName::FName(&local_80,L"");
      }
      else {
        UEnum::GetNameByValue(this_01,(long64)&local_70);
        local_50 = local_res18;
        local_48 = &local_70;
        TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>::
        Emplace<TPairInitializer<int_const_&,FName_const_&>_>
                  ((TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>
                    *)&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_CommonIconTextButtonData>(EDS_CommonIconTextButtonData)___ptr64'
                       ::__l2::EnumNameCache,&local_68,(bool *)&local_50);
        local_80 = local_70;
      }
LAB_14bfbe16e:
      FVar2 = local_80;
      uVar4 = ::GetTypeHash(local_80.ComparisonIndex.Value);
      pFVar8 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
               ::FindOrAddImpl<FName>
                         ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                           *)&pUVar7[1].field_0x18,uVar4 + FVar2.Number,&local_80);
      if ((pFVar8->Data).ArrayNum != 0) {
        pwVar13 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
      }
      bVar3 = FToBoolHelper::FromCStringWide(pwVar13);
      if (bVar3) {
        local_40._0_8_ = 0;
        local_40._8_8_ = 0;
        local_40._16_4_ = 0;
        UDS_UIMessageManager::OpenMsgByStringUi(0x1fc39,Alert_None_01,&local_40);
        return;
      }
      this_02 = UDS_SendPacketManager::GetInst();
      if (this_02 != (UDS_SendPacketManager *)0x0) {
        this_03 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res10);
        iVar5 = UDS_M_CommonPopup::GetSliderCount(this_03);
        iVar6 = DS_CommonDataHelper::IdInventoryExpansionMoneyInfo();
        UDS_SendPacketManager::SendUseInventoryExtendItem(this_02,iVar6,iVar5);
        this_04 = UDS_WindowManager::GetInst();
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          if (this_04 == (UDS_WindowManager *)0x0) {
            return;
          }
        }
        else {
          if (this_04 == (UDS_WindowManager *)0x0) {
            return;
          }
          UE::GC::MarkAsReachable((UObject *)this_04);
        }
        local_res20[0] = 0.0;
        local_78[0] = 0;
        UDS_WindowManager::CloseWindow(this_04,PopupCommon,local_78,local_res20);
      }
    }
    else {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3321408251353890622>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_Inventory.cpp"
                         ,0xc2,"false");
      if (bVar3) goto code_r0x00014bfbdff2;
    }
    return;
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_3321408251353890625>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_Inventory.cpp"
                     ,0xbf,"false");
  if (!bVar3) {
    return;
  }
code_r0x00014bfbdff2:
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// OnInventoryExtendPopupProgressBarChanged @ 14bfbe290

void __thiscall
UDS_VM_W_Inventory::OnInventoryExtendPopupProgressBarChanged
          (UDS_VM_W_Inventory *this,TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1)

{
  FInstancedStruct *this_00;
  code *pcVar1;
  FObjectPtr_u_0 FVar2;
  long64 lVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  FDS_InventoryExtendTableRow *pFVar8;
  UDS_M_CommonPopup *pUVar9;
  UDS_M_CommonPopup *pUVar10;
  FObjectPtr_u_0 *pFVar11;
  FDS_Int32StringFormatArg *pFVar12;
  FWeakObjectPtr local_res10;
  TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> local_78;
  FDS_Text local_68;
  
  local_res10 = param_1.WeakPtr;
  bVar4 = FWeakObjectPtr::IsValid(&local_res10);
  if (!bVar4) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3321408251353890592>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_Inventory.cpp"
                       ,0xe0,"false");
    if (!bVar4) {
      return;
    }
code_r0x00014bfbe32c:
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar5 = DS_CommonDataHelper::IdInventoryExpansionMoneyInfo();
  pFVar8 = FDS_InventoryExtendTableRow::Get((longlong)iVar5,true);
  if (pFVar8 == (FDS_InventoryExtendTableRow *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3321408251353890589>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_Inventory.cpp"
                       ,0xe3,"false");
    if (bVar4) goto code_r0x00014bfbe32c;
  }
  else {
    pUVar9 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res10);
    pUVar10 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res10);
    lVar3 = pFVar8->ExtendMoneyCost;
    iVar5 = UDS_M_CommonPopup::GetSliderCount(pUVar10);
    UDS_M_CommonPopup::UpdateAssetValue1(pUVar9,Asset01,iVar5 * (int)lVar3);
    pUVar9 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res10);
    pUVar10 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res10);
    iVar5 = pFVar8->ExtendValue;
    iVar6 = UDS_M_CommonPopup::GetSliderCount(pUVar10);
    local_68.StringTableType = None;
    local_68.StringTableID = 0;
    local_68.StringEnumTableNameID.ComparisonIndex.Value = 0;
    local_68.StringEnumTableNameID.Number = 0;
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
    local_68.DateTime.Ticks = 0;
    local_68.TimeSpan.Ticks = 0;
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&local_78.AllocatorInstance,&local_78.ArrayMax);
    local_78.ArrayNum = iVar7 + 1;
    this_00 = (FInstancedStruct *)(local_78.AllocatorInstance.Data + (longlong)iVar7 * 0x28);
    FInstancedStruct::FInstancedStruct(this_00);
    pFVar11 = (FObjectPtr_u_0 *)FNumberFormattingOptions::DefaultWithGrouping();
    FVar2 = pFVar11[1];
    this_00[1].ScriptStruct.field0_0x0.ObjectPtr.field0_0x0 = *pFVar11;
    this_00[1].StructMemory = (uchar *)FVar2;
    this_00[2].ScriptStruct.field0_0x0 = (TObjectPtr<UScriptStruct_const_>_u_0)pFVar11[2];
    FInstancedStruct::InitializeAs<FDS_Int32StringFormatArg>(this_00);
    pFVar12 = FInstancedStruct::GetMutablePtr<FDS_Int32StringFormatArg>(this_00);
    if (pFVar12 != (FDS_Int32StringFormatArg *)0x0) {
      pFVar12->Value = iVar6 * iVar5;
    }
    FDS_Text::SetTextFormatFromStringTable(&local_68,StringUi,0x5ea,&local_78);
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)local_78.AllocatorInstance.Data,local_78.ArrayNum);
    if ((FDS_TextFormatArg *)local_78.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0) {
      FMemory::Free(local_78.AllocatorInstance.Data);
    }
    UDS_M_CommonPopup::SetSubContent01(pUVar9,&local_68);
  }
  return;
}

// OnLoadWindowCallbackMenual @ 14bfbef10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UDS_VM_W_Inventory::OnLoadWindowCallbackMenual
          (UDS_VM_W_Inventory *this,UDS_UserWidget *param_1,EDS_ContentsTabFrameType param_2,
          TWeakObjectPtr<UDS_ContentArguments,FWeakObjectPtr> param_3)

{
  undefined8 uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  UObject *pUVar6;
  UClass *pUVar7;
  FName FVar8;
  FString *pFVar9;
  longlong *plVar10;
  FWeakObjectPtr local_res20;
  undefined1 auStackY_128 [32];
  FString local_f8;
  FString local_e8;
  FWeakObjectPtr local_d8;
  UDS_UserWidget *local_d0;
  undefined1 local_c8 [8];
  undefined1 local_c0 [8];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_128;
  local_res20 = param_3.WeakPtr;
  pUVar6 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar6,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar7 = Z_Construct_UClass_UDS_M_Inventory_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar7);
  local_b8._8_8_ = pUVar6;
  pUVar6 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar10 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar10 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar6 == (UObject *)0x0) goto LAB_14bfbf19c;
  }
  else {
    if (pUVar6 == (UObject *)0x0) {
LAB_14bfbf19c:
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3321408251353890755>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_Inventory.cpp"
                         ,0x3d,"false");
      if (!bVar4) {
        return;
      }
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    UE::GC::MarkAsReachable(pUVar6);
  }
  bVar4 = FWeakObjectPtr::IsValid(&local_res20);
  if (bVar4) {
    ::FString::PrintfImpl(&local_f8,L"%d");
    FVar8 = FDS_DataContainer::TransformIndexToName<enum_EDS_InventoryData>
                      ((FDS_DataContainer *)&pUVar6[1].field_0x18,(EDS_InventoryData)local_c8);
    uVar1 = *(undefined8 *)FVar8;
    uVar5 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
    pFVar9 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
             ::FindOrAddImpl<FName>
                       ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                         *)&pUVar6[1].field_0x18,uVar5 + (int)((ulonglong)uVar1 >> 0x20),
                        (FName *)FVar8);
    if (pFVar9 != &local_f8) {
      pFVar2 = (pFVar9->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (pFVar9->Data).AllocatorInstance.Data = local_f8.Data.AllocatorInstance.Data;
      local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar9->Data).ArrayNum = local_f8.Data.ArrayNum;
      (pFVar9->Data).ArrayMax = local_f8.Data.ArrayMax;
      local_f8.Data.ArrayNum = 0;
      local_f8.Data.ArrayMax = 0;
    }
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
    ::FString::FString(&local_e8,L"true");
    FVar8 = FDS_DataContainer::TransformIndexToName<enum_EDS_InventoryData>
                      ((FDS_DataContainer *)&pUVar6[1].field_0x18,(EDS_InventoryData)local_c0);
    uVar1 = *(undefined8 *)FVar8;
    uVar5 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
    pFVar9 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
             ::FindOrAddImpl<FName>
                       ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                         *)&pUVar6[1].field_0x18,uVar5 + (int)((ulonglong)uVar1 >> 0x20),
                        (FName *)FVar8);
    if (pFVar9 != &local_e8) {
      pFVar2 = (pFVar9->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (pFVar9->Data).AllocatorInstance.Data = local_e8.Data.AllocatorInstance.Data;
      local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar9->Data).ArrayNum = local_e8.Data.ArrayNum;
      (pFVar9->Data).ArrayMax = local_e8.Data.ArrayMax;
      local_e8.Data.ArrayNum = 0;
      local_e8.Data.ArrayMax = 0;
    }
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    }
  }
  pcVar3 = *(code **)(*(longlong *)pUVar6 + 0x2e8);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UDS_UserWidget *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_d8.ObjectIndex = 0;
  local_d8.ObjectSerialNumber = 0;
  local_d0 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UDS_UserWidget *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_d8,(FObjectPtr)&local_d0);
  (*pcVar3)(pUVar6,local_d8);
  return;
}

// OnOpenInventoryExtendButtonClickEvent @ 14bfbf860

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UDS_VM_W_Inventory::OnOpenInventoryExtendButtonClickEvent
          (UDS_VM_W_Inventory *this,FDS_ButtonEventField *param_1)

{
  FInstancedStruct *this_00;
  code *pcVar1;
  FObjectPtr_u_0 FVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  UClass *pUVar7;
  FDS_InventoryExtendTableRow *pFVar8;
  UDS_DataSetBase *this_01;
  TWeakObjectPtr<UDS_DataBase,FWeakObjectPtr> this_02;
  UObject *pUVar9;
  UDS_M_Inventory *pUVar10;
  FDS_InventoryBaseTableRow *pFVar11;
  FDS_MoneyBaseTableRow *pFVar12;
  UDS_MoneyData *this_03;
  ulonglong uVar13;
  UDS_CommonPopupManager *this_04;
  UDS_M_CommonPopup *pUVar14;
  FDS_Text *pFVar15;
  FObjectPtr_u_0 *pFVar16;
  FDS_Int32StringFormatArg *pFVar17;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  *pTVar18;
  FString *pFVar19;
  FText *pFVar20;
  UObject *pUVar21;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> local_248;
  FWeakObjectPtr local_238;
  FWeakObjectPtr local_230;
  FWeakObjectPtr local_228;
  FWeakObjectPtr local_220;
  UDS_M_CommonPopup *local_218;
  FWeakObjectPtr local_210;
  FDS_StringUiID local_208;
  UObject *local_1f8;
  UObject *local_1f0;
  UObject *local_1e8;
  UDS_GameInstance *local_1e0;
  FDS_Text local_1d8;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_188;
  undefined1 local_170 [8];
  code *local_168;
  ulonglong uStack_160;
  code *local_158;
  ulonglong uStack_150;
  code *local_148;
  ulonglong uStack_140;
  FText local_138;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  local_128;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  local_110;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  local_f8;
  FDS_Text local_e0;
  FDS_Text local_90;
  
  pUVar21 = (UObject *)0x0;
  local_1f8 = pUVar21;
  if (this->_padding_ != 0) {
    pUVar7 = Z_Construct_UClass_UDS_M_Inventory_NoRegister();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar7);
    if (bVar3) {
      local_1f8 = (UObject *)this->_padding_;
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_1f8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_1f8);
  }
  local_res20.ObjectIndex = 0;
  local_res20.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_1f8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_1f8);
  }
  FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_1f8);
  bVar3 = FWeakObjectPtr::IsValid(&local_res20);
  if (!bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3321408251353890689>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_Inventory.cpp"
                       ,0x7f,"false");
    if (!bVar3) {
      return;
    }
    goto code_r0x00014bfbfdf5;
  }
  iVar4 = DS_CommonDataHelper::IdInventoryExpansionMoneyInfo();
  pFVar8 = FDS_InventoryExtendTableRow::Get((longlong)iVar4,true);
  if (pFVar8 == (FDS_InventoryExtendTableRow *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3321408251353890686>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_Inventory.cpp"
                       ,0x82,"false");
    if (!bVar3) {
      return;
    }
    goto code_r0x00014bfbfdf5;
  }
  TDS_DataSetGetter<UDS_MoneyDataSet>::Get((ulong64)&local_210);
  bVar3 = FWeakObjectPtr::IsValid(&local_210);
  if (!bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3321408251353890683>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_Inventory.cpp"
                       ,0x85,"false");
    if (!bVar3) {
      return;
    }
    goto code_r0x00014bfbfdf5;
  }
  this_01 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_210);
  this_02 = UDS_DataSetBase::GetData(this_01,(ulong64)local_170);
  local_1f0 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_02.WeakPtr);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_1f0 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_1f0);
  }
  local_238.ObjectIndex = 0;
  local_238.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_1f0 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_1f0);
  }
  FWeakObjectPtr::operator=(&local_238,(FObjectPtr)&local_1f0);
  bVar3 = FWeakObjectPtr::IsValid(&local_238);
  if (!bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3321408251353890680>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_Inventory.cpp"
                       ,0x88,"false");
    if (!bVar3) {
      return;
    }
    goto code_r0x00014bfbfdf5;
  }
  pUVar9 = FWeakObjectPtr::Get(&local_238);
  if (pUVar9 == (UObject *)0x0) {
LAB_14bfbfad8:
    pUVar9 = pUVar21;
  }
  else {
    pUVar7 = Z_Construct_UClass_UDS_MoneyData_NoRegister();
    iVar4 = (int)pUVar7->_padding_;
    if ((*(int *)(*(longlong *)&pUVar9->field_0x10 + 0x38) < iVar4) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar9->field_0x10 + 0x30) + (longlong)iVar4 * 8) !=
        &pUVar7->_padding_)) goto LAB_14bfbfad8;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar9);
  }
  local_230.ObjectIndex = 0;
  local_230.ObjectSerialNumber = 0;
  local_1e8 = pUVar9;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar9);
  }
  FWeakObjectPtr::operator=(&local_230,(FObjectPtr)&local_1e8);
  bVar3 = FWeakObjectPtr::IsValid(&local_230);
  if (bVar3) {
    pUVar10 = (UDS_M_Inventory *)FWeakObjectPtr::Get(&local_res20);
    pFVar11 = UDS_M_Inventory::GetInventoryBaseTable(pUVar10);
    if (pFVar11 == (FDS_InventoryBaseTableRow *)0x0) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3321408251353890674>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_Inventory.cpp"
                         ,0x8e,"false");
      if (bVar3) goto code_r0x00014bfbfdf5;
    }
    else {
      pFVar12 = FDS_MoneyBaseTableRow::Get((ulonglong)pFVar8->ExtendMoneyType,true);
      if (pFVar12 == (FDS_MoneyBaseTableRow *)0x0) {
        bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_3321408251353890671>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_Inventory.cpp"
                           ,0x91,"false");
        if (bVar3) goto code_r0x00014bfbfdf5;
      }
      else {
        this_03 = (UDS_MoneyData *)FWeakObjectPtr::Get(&local_230);
        uVar13 = UDS_MoneyData::GetTotalQuantity(this_03);
        iVar4 = (int)pFVar8->ExtendMoneyCost;
        pUVar10 = (UDS_M_Inventory *)FWeakObjectPtr::Get(&local_res20);
        iVar5 = UDS_M_Inventory::GetExtendedInventorySlotCount(pUVar10);
        iVar6 = (pFVar8->ExtendValue + -1 + (pFVar11->MaxSlotCount - iVar5)) / pFVar8->ExtendValue;
        iVar5 = (int)((longlong)
                      ((ulonglong)(uint)((int)uVar13 >> 0x1f) << 0x20 | uVar13 & 0xffffffff) /
                     (longlong)iVar4);
        if (iVar6 < iVar5) {
          iVar5 = iVar6;
        }
        if (iVar6 == 0) {
          local_188._0_8_ = 0;
          local_188._8_8_ = 0;
          local_188._16_4_ = 0;
          UDS_UIMessageManager::OpenMsgByStringUi(0x1fc36,Alert_None_01,&local_188);
        }
        else {
          local_1e0 = UDS_GameInstance::GetInst();
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (local_1e0 != (UDS_GameInstance *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)local_1e0);
          }
          local_220.ObjectIndex = 0;
          local_220.ObjectSerialNumber = 0;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (local_1e0 != (UDS_GameInstance *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)local_1e0);
          }
          FWeakObjectPtr::operator=(&local_220,(FObjectPtr)&local_1e0);
          bVar3 = FWeakObjectPtr::IsValid(&local_220);
          if (bVar3) {
            local_218 = (UDS_M_CommonPopup *)UDS_CommonPopupManager::GetInst();
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (local_218 != (UDS_M_CommonPopup *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)local_218);
            }
            local_228.ObjectIndex = 0;
            local_228.ObjectSerialNumber = 0;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (local_218 != (UDS_M_CommonPopup *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)local_218);
            }
            FWeakObjectPtr::operator=(&local_228,(FObjectPtr)&local_218);
            bVar3 = FWeakObjectPtr::IsValid(&local_228);
            if (bVar3) {
              this_04 = (UDS_CommonPopupManager *)FWeakObjectPtr::Get(&local_228);
              UDS_CommonPopupManager::CreateCommonPopup(this_04);
              bVar3 = FWeakObjectPtr::IsValid(&local_res18);
              if (bVar3) {
                pUVar14 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res18);
                pFVar15 = FDS_Text::FromStringTable(&local_e0,StringUi,0x1fcfd);
                UDS_M_CommonPopup::SetTitle(pUVar14,pFVar15);
                pUVar14 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res18);
                pFVar15 = FDS_Text::FromStringTable(&local_90,StringUi,0x1fc38);
                UDS_M_CommonPopup::SetMainContent(pUVar14,pFVar15);
                local_218 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res18);
                local_1d8.StringTableType = None;
                local_1d8.StringTableID = 0;
                local_1d8.StringEnumTableNameID.ComparisonIndex.Value = 0;
                local_1d8.StringEnumTableNameID.Number = 0;
                local_1d8.TimeExpressionType = None;
                local_1d8.IsExpression = false;
                local_1d8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_1d8.UniqueString.Data.ArrayNum = 0;
                local_1d8.UniqueString.Data.ArrayMax = 0;
                local_1d8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_1d8.FormatArgs.ArrayNum = 0;
                local_1d8.FormatArgs.ArrayMax = 0;
                local_248.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_248.ArrayNum = 0;
                local_248.ArrayMax = 0;
                local_1d8.DateTime.Ticks = 0;
                local_1d8.TimeSpan.Ticks = 0;
                iVar6 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x828,&local_248.AllocatorInstance,&local_248.ArrayMax);
                local_248.ArrayNum = iVar6 + 1;
                this_00 = (FInstancedStruct *)
                          (local_248.AllocatorInstance.Data + (longlong)iVar6 * 0x28);
                FInstancedStruct::FInstancedStruct(this_00);
                pFVar16 = (FObjectPtr_u_0 *)FNumberFormattingOptions::DefaultWithGrouping();
                FVar2 = pFVar16[1];
                this_00[1].ScriptStruct.field0_0x0.ObjectPtr.field0_0x0 = *pFVar16;
                this_00[1].StructMemory = (uchar *)FVar2;
                this_00[2].ScriptStruct.field0_0x0 =
                     (TObjectPtr<UScriptStruct_const_>_u_0)pFVar16[2];
                FInstancedStruct::InitializeAs<FDS_Int32StringFormatArg>(this_00);
                pFVar17 = FInstancedStruct::GetMutablePtr<FDS_Int32StringFormatArg>(this_00);
                if (pFVar17 != (FDS_Int32StringFormatArg *)0x0) {
                  pFVar17->Value = pFVar8->ExtendValue;
                }
                FDS_Text::SetTextFormatFromStringTable(&local_1d8,StringUi,0x5ea,&local_248);
                DestructItems<FDS_TextFormatArg,int>
                          ((FDS_TextFormatArg *)local_248.AllocatorInstance.Data,local_248.ArrayNum)
                ;
                if ((FDS_TextFormatArg *)local_248.AllocatorInstance.Data !=
                    (FDS_TextFormatArg *)0x0) {
                  FMemory::Free(local_248.AllocatorInstance.Data);
                }
                UDS_M_CommonPopup::SetSubContent01(local_218,&local_1d8);
                pUVar14 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res18);
                UDS_M_CommonPopup::SetButton(pUVar14,ButtonCancel,StringUi,0x66,false);
                pUVar14 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res18);
                local_248.AllocatorInstance.Data =
                     (FScriptContainerElement *)OnInventoryExtendPopupCancelClicked;
                local_248._8_8_ = local_248._8_8_ & 0xffffffff00000000;
                local_168 = OnInventoryExtendPopupCancelClicked;
                uStack_160._0_4_ = local_248.ArrayNum;
                uStack_160._4_4_ = local_248.ArrayMax;
                pTVar18 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                          ::CreateUObject<UDS_VM_W_Inventory>
                                    (&local_128,this,(pmf_9f2362af *)&local_168);
                UDS_M_CommonPopup::SetDelegate(pUVar14,ButtonCancel,pTVar18);
                pUVar14 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res18);
                UDS_M_CommonPopup::SetButton(pUVar14,ButtonConfirm,StringUi,0x1fcfd,iVar5 == 0);
                pUVar14 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res18);
                local_248._8_8_ = local_248._8_8_ & 0xffffffff00000000;
                local_248.AllocatorInstance.Data =
                     (FScriptContainerElement *)OnInventoryExtendPopupConfirmClicked;
                local_158 = OnInventoryExtendPopupConfirmClicked;
                uStack_150._0_4_ = local_248.ArrayNum;
                uStack_150._4_4_ = local_248.ArrayMax;
                pTVar18 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                          ::CreateUObject<UDS_VM_W_Inventory>
                                    (&local_110,this,(pmf_9f2362af *)&local_158);
                UDS_M_CommonPopup::SetDelegate(pUVar14,ButtonConfirm,pTVar18);
                pUVar14 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res18);
                local_208.ID = 0x1fcfd;
                local_208._padding_ = (longlong)&___7FDS_StringUiID__6B_;
                pFVar19 = FDS_StringUiID::Str(&local_208);
                pFVar20 = FText::FromString(&local_138,pFVar19);
                UDS_M_CommonPopup::SetSlider(pUVar14,1,iVar5,1,pFVar20,1);
                pUVar14 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res18);
                local_208.ID = local_208.ID & 0xffffffff00000000;
                local_208._padding_ = (longlong)OnInventoryExtendPopupProgressBarChanged;
                local_148 = OnInventoryExtendPopupProgressBarChanged;
                uStack_140 = local_208.ID;
                pTVar18 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                          ::CreateUObject<UDS_VM_W_Inventory>
                                    (&local_f8,this,(pmf_9f2362af *)&local_148);
                UDS_M_CommonPopup::SetDelegate(pUVar14,Slider,pTVar18);
                pUVar14 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res18);
                UDS_M_CommonPopup::SetAsset
                          (pUVar14,Asset01,pFVar12->ID_MoneyIcon,iVar4,(int)uVar13,false);
                pUVar14 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res18);
                UDS_M_CommonPopup::OpenCommonPopup(pUVar14);
              }
              else {
                bVar3 = UE::Assert::Private::ExecCheckImplInternal
                                  (&bGEnsureHasExecuted<_3321408251353890646>,false,
                                   "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_Inventory.cpp"
                                   ,0xaa,"false");
                if (bVar3) goto code_r0x00014bfbfdf5;
              }
            }
            else {
              bVar3 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<_3321408251353890649>,false,
                                 "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_Inventory.cpp"
                                 ,0xa7,"false");
              if (bVar3) goto code_r0x00014bfbfdf5;
            }
          }
          else {
            bVar3 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_3321408251353890652>,false,
                               "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_Inventory.cpp"
                               ,0xa4,"false");
            if (bVar3) goto code_r0x00014bfbfdf5;
          }
        }
      }
    }
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3321408251353890677>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_Inventory.cpp"
                       ,0x8b,"false");
    if (bVar3) {
code_r0x00014bfbfdf5:
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// OnQuickSlotRegistrationActivatedButtonClickEvent @ 14bfc0900

void __thiscall
UDS_VM_W_Inventory::OnQuickSlotRegistrationActivatedButtonClickEvent
          (UDS_VM_W_Inventory *this,FDS_ButtonEventField *param_1)

{
  return;
}

// OnSetViewModel @ 14bfce9b0

void __thiscall
UDS_VM_W_Inventory::OnSetViewModel
          (UDS_VM_W_Inventory *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  local_18.Object = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  UDS_VM_ModelBase::OnSetViewModel((UDS_VM_ModelBase *)this,&local_18);
  InitDropDown(this);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnSortOrderButtonClickEvent @ 14bfcf600

void __thiscall
UDS_VM_W_Inventory::OnSortOrderButtonClickEvent
          (UDS_VM_W_Inventory *this,FDS_ButtonEventField *param_1)

{
  longlong *this_00;
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  UDS_M_Inventory *this_01;
  UObject *pUVar4;
  FWeakObjectPtr local_res8 [2];
  UObject *local_res18 [2];
  
  this_00 = &this->_padding_;
  if (*this_00 != 0) {
    pUVar3 = Z_Construct_UClass_UDS_M_Inventory_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar3);
    if (bVar2) {
      pUVar4 = (UObject *)*this_00;
      goto LAB_14bfcf62e;
    }
  }
  pUVar4 = (UObject *)0x0;
LAB_14bfcf62e:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  local_res8[0].ObjectIndex = 0;
  local_res8[0].ObjectSerialNumber = 0;
  local_res18[0] = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(local_res8,(FObjectPtr)local_res18);
  bVar2 = FWeakObjectPtr::IsValid(local_res8);
  if (bVar2) {
    this_01 = (UDS_M_Inventory *)FWeakObjectPtr::Get(local_res8);
    UDS_M_Inventory::OnClickedSortOrderButton(this_01);
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3321408251353890695>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_Inventory.cpp"
                       ,0x79,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// OnSortTypeChanged @ 14bfcf8f0

void __thiscall UDS_VM_W_Inventory::OnSortTypeChanged(UDS_VM_W_Inventory *this,int param_1)

{
  longlong *this_00;
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  UDS_M_Inventory *this_01;
  UObject *pUVar4;
  FWeakObjectPtr local_res8;
  UObject *local_res18 [2];
  
  this_00 = &this->_padding_;
  if (*this_00 != 0) {
    pUVar3 = Z_Construct_UClass_UDS_M_Inventory_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar3);
    if (bVar2) {
      pUVar4 = (UObject *)*this_00;
      goto LAB_14bfcf924;
    }
  }
  pUVar4 = (UObject *)0x0;
LAB_14bfcf924:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res18[0] = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res18);
  bVar2 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar2) {
    this_01 = (UDS_M_Inventory *)FWeakObjectPtr::Get(&local_res8);
    UDS_M_Inventory::OnSortTypeChanged(this_01,param_1);
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3321408251353890423>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_Inventory.cpp"
                       ,0x189,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// SetVisibilityDropDownList @ 14bfde630

void __thiscall
UDS_VM_W_Inventory::SetVisibilityDropDownList(UDS_VM_W_Inventory *this,ESlateVisibility *param_1)

{
  UDS_VM_Dropdown *this_00;
  ESlateVisibility local_res8 [32];
  
  this_00 = (this->VM_SortDropdown).field0_0x0.DebugPtr;
  if (this_00 != (UDS_VM_Dropdown *)0x0) {
    local_res8[0] = Collapsed;
    UDS_VM_Dropdown::SetVisibleDropdownList(this_00,local_res8);
  }
  return;
}

// UnbindModel @ 14bfe00f0

void __thiscall UDS_VM_W_Inventory::UnbindModel(UDS_VM_W_Inventory *this)

{
  UDS_ContentEvent *pUVar1;
  
  UDS_VM_ModelBase::UnbindModel((UDS_VM_ModelBase *)this);
  pUVar1 = UDS_ContentEvent::GetEvent();
  if (pUVar1 != (UDS_ContentEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnContentsBackgroundClickDelegate,this);
    return;
  }
  return;
}

// UpdateView @ 14bfe6e90

void __thiscall
UDS_VM_W_Inventory::UpdateView
          (UDS_VM_W_Inventory *this,TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr> param_1)

{
  longlong *plVar1;
  bool bVar2;
  FName local_18;
  int local_10;
  
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Orange,"UDS_VM_W_Inventory_OnUpdateView");
  bVar2 = -1 < CpuChannel->Enabled;
  if (bVar2) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId108,"UDS_VM_W_Inventory_OnUpdateView",
               "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_Inventory.cpp"
               ,0x6c);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId108);
  }
  plVar1 = &this->_padding_;
  local_10 = FFieldNotificationClassDescriptor::ExtendedInventorySlotCount.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::ExtendedInventorySlotCount.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::CurrentItemCount.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::CurrentItemCount.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::IsEmpty.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsEmpty.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::IsShowWeight.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsShowWeight.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::IsSortOrderDescend.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsSortOrderDescend.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

