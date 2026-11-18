// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 27

// SetOpenInventoryExtendButtonClickEvent_WrapperImpl @ 14b6ed340

/* WARNING: Type propagation algorithm not settling */

void __cdecl
UDS_VM_Warehouse::SetOpenInventoryExtendButtonClickEvent_WrapperImpl(void *param_1,void *param_2)

{
  FInstancedStruct *this;
  code *pcVar1;
  FObjectPtr_u_0 FVar2;
  longlong *plVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  UClass *pUVar8;
  FDS_InventoryExtendTableRow *pFVar9;
  UDS_DataSetBase *this_00;
  TWeakObjectPtr<UDS_DataBase,FWeakObjectPtr> this_01;
  UObject *pUVar10;
  TArray<FDS_InventoryBaseTableRow_const_*,TSizedDefaultAllocator<32>_> *pTVar11;
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
  UObject *pUVar22;
  FWeakObjectPtr FStackX_18;
  FWeakObjectPtr FStackX_20;
  TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> TStack_258;
  FWeakObjectPtr FStack_248;
  FWeakObjectPtr FStack_240;
  FWeakObjectPtr FStack_238;
  UDS_M_CommonPopup *pUStack_230;
  FWeakObjectPtr aFStack_228 [2];
  FDS_StringUiID FStack_218;
  UObject *pUStack_208;
  UObject *pUStack_200;
  UDS_GameInstance *pUStack_1f8;
  FDS_Text FStack_1f0;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> TStack_1a0;
  undefined1 auStack_188 [8];
  TArray<FDS_InventoryBaseTableRow_const_*,TSizedDefaultAllocator<32>_> TStack_180;
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
  
  pUVar22 = (UObject *)0x0;
  pUStack_208 = pUVar22;
  if (*(longlong *)((longlong)param_1 + 0xa0) != 0) {
    pUVar8 = Z_Construct_UClass_UDS_M_Warehouse_NoRegister();
    bVar4 = FObjectPtr::IsA((FObjectPtr *)((longlong)param_1 + 0xa0),pUVar8);
    if (bVar4) {
      pUStack_208 = *(UObject **)((longlong)param_1 + 0xa0);
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUStack_208 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUStack_208);
  }
  FStack_240.ObjectIndex = 0;
  FStack_240.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUStack_208 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUStack_208);
  }
  FWeakObjectPtr::operator=(&FStack_240,(FObjectPtr)&pUStack_208);
  bVar4 = FWeakObjectPtr::IsValid(&FStack_240);
  if (!bVar4) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1866597721759022993>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_Warehouse.cpp"
                       ,0x6f,"false");
    if (!bVar4) {
      return;
    }
    goto code_r0x00014be31f3c;
  }
  iVar5 = DS_CommonDataHelper::IdWareHouseExpansionMoneyInfo();
  pFVar9 = FDS_InventoryExtendTableRow::Get((longlong)iVar5,true);
  if (pFVar9 == (FDS_InventoryExtendTableRow *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1866597721759022990>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_Warehouse.cpp"
                       ,0x72,"false");
    if (!bVar4) {
      return;
    }
    goto code_r0x00014be31f3c;
  }
  TDS_DataSetGetter<UDS_MoneyDataSet>::Get((ulong64)aFStack_228);
  bVar4 = FWeakObjectPtr::IsValid(aFStack_228);
  if (!bVar4) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1866597721759022987>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_Warehouse.cpp"
                       ,0x75,"false");
    if (!bVar4) {
      return;
    }
    goto code_r0x00014be31f3c;
  }
  this_00 = (UDS_DataSetBase *)FWeakObjectPtr::Get(aFStack_228);
  this_01 = UDS_DataSetBase::GetData(this_00,(ulong64)auStack_188);
  pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_01.WeakPtr);
  if (pUVar10 == (UObject *)0x0) {
LAB_14be31bfc:
    pUVar10 = pUVar22;
  }
  else {
    pUVar8 = Z_Construct_UClass_UDS_MoneyData_NoRegister();
    iVar5 = (int)pUVar8->_padding_;
    if ((*(int *)(*(longlong *)&pUVar10->field_0x10 + 0x38) < iVar5) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar10->field_0x10 + 0x30) + (longlong)iVar5 * 8) !=
        &pUVar8->_padding_)) goto LAB_14be31bfc;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar10);
  }
  FStackX_20.ObjectIndex = 0;
  FStackX_20.ObjectSerialNumber = 0;
  pUStack_200 = pUVar10;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar10);
  }
  FWeakObjectPtr::operator=(&FStackX_20,(FObjectPtr)&pUStack_200);
  bVar4 = FWeakObjectPtr::IsValid(&FStackX_20);
  if (bVar4) {
    pTVar11 = FDS_InventoryBaseTableRow::GetAll(&TStack_180);
    pUVar10 = (UObject *)(pTVar11->AllocatorInstance).Data;
    plVar3 = (longlong *)&pUVar10->field_0x0;
    for (; (pUVar21 = pUVar22, pUVar10 != (UObject *)(plVar3 + pTVar11->ArrayNum) &&
           (pUVar21 = pUVar10, *(char *)(*(longlong *)pUVar10 + 0x10) != '\x03'));
        pUVar10 = (UObject *)&pUVar10->field_0x8) {
    }
    if (TStack_180.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(TStack_180.AllocatorInstance.Data);
    }
    if (*(longlong *)pUVar21 == 0) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_1866597721759022977>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_Warehouse.cpp"
                         ,0x7f,"false");
      if (bVar4) goto code_r0x00014be31f3c;
    }
    else {
      pFVar12 = FDS_MoneyBaseTableRow::Get((ulonglong)pFVar9->ExtendMoneyType,true);
      if (pFVar12 == (FDS_MoneyBaseTableRow *)0x0) {
        bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_1866597721759022974>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_Warehouse.cpp"
                           ,0x82,"false");
        if (bVar4) goto code_r0x00014be31f3c;
      }
      else {
        this_02 = (UDS_MoneyData *)FWeakObjectPtr::Get(&FStackX_20);
        uVar13 = UDS_MoneyData::GetTotalQuantity(this_02);
        iVar5 = (int)pFVar9->ExtendMoneyCost;
        iVar6 = DS_ItemDataUtil::GetExtendedInventorySlotCount(PlayerWareHouse);
        iVar7 = (pFVar9->ExtendValue + -1 + (*(int *)(*(longlong *)pUVar21 + 0x18) - iVar6)) /
                pFVar9->ExtendValue;
        iVar6 = (int)((longlong)
                      ((ulonglong)(uint)((int)uVar13 >> 0x1f) << 0x20 | uVar13 & 0xffffffff) /
                     (longlong)iVar5);
        if (iVar7 < iVar6) {
          iVar6 = iVar7;
        }
        if (iVar7 == 0) {
          TStack_1a0._0_8_ = 0;
          TStack_1a0._8_8_ = 0;
          TStack_1a0._16_4_ = 0;
          UDS_UIMessageManager::OpenMsgByStringUi(0x1fc36,Alert_None_01,&TStack_1a0);
        }
        else {
          pUStack_1f8 = UDS_GameInstance::GetInst();
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (pUStack_1f8 != (UDS_GameInstance *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUStack_1f8);
          }
          FStack_238.ObjectIndex = 0;
          FStack_238.ObjectSerialNumber = 0;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (pUStack_1f8 != (UDS_GameInstance *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUStack_1f8);
          }
          FWeakObjectPtr::operator=(&FStack_238,(FObjectPtr)&pUStack_1f8);
          bVar4 = FWeakObjectPtr::IsValid(&FStack_238);
          if (bVar4) {
            pUStack_230 = (UDS_M_CommonPopup *)UDS_CommonPopupManager::GetInst();
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (pUStack_230 != (UDS_M_CommonPopup *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)pUStack_230);
            }
            FStack_248.ObjectIndex = 0;
            FStack_248.ObjectSerialNumber = 0;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (pUStack_230 != (UDS_M_CommonPopup *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)pUStack_230);
            }
            FWeakObjectPtr::operator=(&FStack_248,(FObjectPtr)&pUStack_230);
            bVar4 = FWeakObjectPtr::IsValid(&FStack_248);
            if (bVar4) {
              this_03 = (UDS_CommonPopupManager *)FWeakObjectPtr::Get(&FStack_248);
              UDS_CommonPopupManager::CreateCommonPopup(this_03);
              bVar4 = FWeakObjectPtr::IsValid(&FStackX_18);
              if (bVar4) {
                pUVar14 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&FStackX_18);
                pFVar15 = FDS_Text::FromStringTable(&FStack_e0,StringUi,0x64197);
                UDS_M_CommonPopup::SetTitle(pUVar14,pFVar15);
                pUVar14 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&FStackX_18);
                pFVar15 = FDS_Text::FromStringTable(&FStack_90,StringUi,0x64198);
                UDS_M_CommonPopup::SetMainContent(pUVar14,pFVar15);
                pUStack_230 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&FStackX_18);
                FStack_1f0.StringTableType = None;
                FStack_1f0.StringTableID = 0;
                FStack_1f0.StringEnumTableNameID.ComparisonIndex.Value = 0;
                FStack_1f0.StringEnumTableNameID.Number = 0;
                FStack_1f0.TimeExpressionType = None;
                FStack_1f0.IsExpression = false;
                FStack_1f0.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
                ;
                FStack_1f0.UniqueString.Data.ArrayNum = 0;
                FStack_1f0.UniqueString.Data.ArrayMax = 0;
                FStack_1f0.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                FStack_1f0.FormatArgs.ArrayNum = 0;
                FStack_1f0.FormatArgs.ArrayMax = 0;
                TStack_258.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                TStack_258.ArrayNum = 0;
                TStack_258.ArrayMax = 0;
                FStack_1f0.DateTime.Ticks = 0;
                FStack_1f0.TimeSpan.Ticks = 0;
                iVar7 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x828,&TStack_258.AllocatorInstance,&TStack_258.ArrayMax);
                TStack_258.ArrayNum = iVar7 + 1;
                this = (FInstancedStruct *)
                       (TStack_258.AllocatorInstance.Data + (longlong)iVar7 * 0x28);
                FInstancedStruct::FInstancedStruct(this);
                pFVar16 = (FObjectPtr_u_0 *)FNumberFormattingOptions::DefaultWithGrouping();
                FVar2 = pFVar16[1];
                this[1].ScriptStruct.field0_0x0.ObjectPtr.field0_0x0 = *pFVar16;
                this[1].StructMemory = (uchar *)FVar2;
                this[2].ScriptStruct.field0_0x0 = (TObjectPtr<UScriptStruct_const_>_u_0)pFVar16[2];
                FInstancedStruct::InitializeAs<FDS_Int32StringFormatArg>(this);
                pFVar17 = FInstancedStruct::GetMutablePtr<FDS_Int32StringFormatArg>(this);
                if (pFVar17 != (FDS_Int32StringFormatArg *)0x0) {
                  pFVar17->Value = pFVar9->ExtendValue;
                }
                FDS_Text::SetTextFormatFromStringTable(&FStack_1f0,StringUi,0x64199,&TStack_258);
                DestructItems<FDS_TextFormatArg,int>
                          ((FDS_TextFormatArg *)TStack_258.AllocatorInstance.Data,
                           TStack_258.ArrayNum);
                if ((FDS_TextFormatArg *)TStack_258.AllocatorInstance.Data !=
                    (FDS_TextFormatArg *)0x0) {
                  FMemory::Free(TStack_258.AllocatorInstance.Data);
                }
                UDS_M_CommonPopup::SetSubContent01(pUStack_230,&FStack_1f0);
                pUVar14 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&FStackX_18);
                UDS_M_CommonPopup::SetButton(pUVar14,ButtonCancel,StringUi,0x66,false);
                pUVar14 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&FStackX_18);
                TStack_258.AllocatorInstance.Data =
                     (FScriptContainerElement *)OnInventoryExtendPopupCancelClicked;
                TStack_258._8_8_ = TStack_258._8_8_ & 0xffffffff00000000;
                pcStack_168 = OnInventoryExtendPopupCancelClicked;
                uStack_160._0_4_ = TStack_258.ArrayNum;
                uStack_160._4_4_ = TStack_258.ArrayMax;
                pTVar18 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                          ::CreateUObject<UDS_VM_Warehouse>
                                    (&TStack_128,param_1,(pmf_c46a70a0 *)&pcStack_168);
                UDS_M_CommonPopup::SetDelegate(pUVar14,ButtonCancel,pTVar18);
                pUVar14 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&FStackX_18);
                UDS_M_CommonPopup::SetButton(pUVar14,ButtonConfirm,StringUi,0x6419a,iVar6 == 0);
                pUVar14 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&FStackX_18);
                TStack_258._8_8_ = TStack_258._8_8_ & 0xffffffff00000000;
                TStack_258.AllocatorInstance.Data =
                     (FScriptContainerElement *)OnInventoryExtendPopupConfirmClicked;
                pcStack_158 = OnInventoryExtendPopupConfirmClicked;
                uStack_150._0_4_ = TStack_258.ArrayNum;
                uStack_150._4_4_ = TStack_258.ArrayMax;
                pTVar18 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                          ::CreateUObject<UDS_VM_Warehouse>
                                    (&TStack_110,param_1,(pmf_c46a70a0 *)&pcStack_158);
                UDS_M_CommonPopup::SetDelegate(pUVar14,ButtonConfirm,pTVar18);
                pUVar14 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&FStackX_18);
                FStack_218.ID = 0x1fcfd;
                FStack_218._padding_ = (longlong)&___7FDS_StringUiID__6B_;
                pFVar19 = FDS_StringUiID::Str(&FStack_218);
                pFVar20 = FText::FromString(&FStack_138,pFVar19);
                UDS_M_CommonPopup::SetSlider(pUVar14,1,iVar6,1,pFVar20,1);
                pUVar14 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&FStackX_18);
                FStack_218.ID = FStack_218.ID & 0xffffffff00000000;
                FStack_218._padding_ = (longlong)OnInventoryExtendPopupProgressBarChanged;
                pcStack_148 = OnInventoryExtendPopupProgressBarChanged;
                uStack_140 = FStack_218.ID;
                pTVar18 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                          ::CreateUObject<UDS_VM_Warehouse>
                                    (&TStack_f8,param_1,(pmf_c46a70a0 *)&pcStack_148);
                UDS_M_CommonPopup::SetDelegate(pUVar14,Slider,pTVar18);
                pUVar14 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&FStackX_18);
                UDS_M_CommonPopup::SetAsset
                          (pUVar14,Asset01,pFVar12->ID_MoneyIcon,iVar5,(int)uVar13,false);
                pUVar14 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&FStackX_18);
                UDS_M_CommonPopup::OpenCommonPopup(pUVar14);
              }
              else {
                bVar4 = UE::Assert::Private::ExecCheckImplInternal
                                  (&bGEnsureHasExecuted<_1866597721759022949>,false,
                                   "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_Warehouse.cpp"
                                   ,0x9b,"false");
                if (bVar4) goto code_r0x00014be31f3c;
              }
            }
            else {
              bVar4 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<_1866597721759022952>,false,
                                 "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_Warehouse.cpp"
                                 ,0x98,"false");
              if (bVar4) goto code_r0x00014be31f3c;
            }
          }
          else {
            bVar4 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_1866597721759022955>,false,
                               "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_Warehouse.cpp"
                               ,0x95,"false");
            if (bVar4) goto code_r0x00014be31f3c;
          }
        }
      }
    }
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1866597721759022984>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_Warehouse.cpp"
                       ,0x78,"false");
    if (bVar4) {
code_r0x00014be31f3c:
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// StaticClass @ 14b6ed350

UClass * __cdecl UDS_VM_Warehouse::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Warehouse.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Warehouse",
               &Z_Registration_Info_UClass_UDS_VM_Warehouse.InnerSingleton,
               StaticRegisterNativesUDS_VM_Warehouse,0xe8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UDS_VM_Warehouse>,
               InternalVTableHelperCtorCaller<UDS_VM_Warehouse>,local_res8,
               UDS_VM_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Warehouse.InnerSingleton;
}

// UDS_VM_Warehouse @ 14b6f4130

UDS_VM_Warehouse * __thiscall
UDS_VM_Warehouse::UDS_VM_Warehouse(UDS_VM_Warehouse *this,FVTableHelper *param_1)

{
  UDS_VM_ModelBase::UDS_VM_ModelBase((UDS_VM_ModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Warehouse__6B_;
  *(undefined8 *)&(this->OpenInventoryExtendButtonClickEvent).Delegate = 0;
  *(undefined8 *)&(this->OpenInventoryExtendButtonClickEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->OpenInventoryExtendButtonClickEvent).Delegate.field_0x10 = 0;
  (this->TabGroup).field0_0x0.DebugPtr = (UDS_VM_Common_TabGroup *)0x0;
  (this->OpenInventoryExtendButtonClickEvent)._padding_ = '\0';
  (this->OpenInventoryExtendButtonClickEvent).bIsCustomSelected = false;
  (this->OpenInventoryExtendButtonClickEvent).bIsLacked = false;
  (this->OpenInventoryExtendButtonClickEvent).bIsCustomDisabled = false;
  return this;
}

// UDS_VM_Warehouse @ 14b6f41a0

UDS_VM_Warehouse * __thiscall
UDS_VM_Warehouse::UDS_VM_Warehouse(UDS_VM_Warehouse *this,FObjectInitializer *param_1)

{
  UDS_VM_ModelBase::UDS_VM_ModelBase((UDS_VM_ModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Warehouse__6B_;
  *(undefined8 *)&(this->OpenInventoryExtendButtonClickEvent).Delegate = 0;
  *(undefined8 *)&(this->OpenInventoryExtendButtonClickEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->OpenInventoryExtendButtonClickEvent).Delegate.field_0x10 = 0;
  (this->TabGroup).field0_0x0.DebugPtr = (UDS_VM_Common_TabGroup *)0x0;
  (this->OpenInventoryExtendButtonClickEvent)._padding_ = '\0';
  (this->OpenInventoryExtendButtonClickEvent).bIsCustomSelected = false;
  (this->OpenInventoryExtendButtonClickEvent).bIsLacked = false;
  (this->OpenInventoryExtendButtonClickEvent).bIsCustomDisabled = false;
  return this;
}

// ~UDS_VM_Warehouse @ 14b6f4f60

void __thiscall UDS_VM_Warehouse::~UDS_VM_Warehouse(UDS_VM_Warehouse *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Warehouse__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->OpenInventoryExtendButtonClickEvent).Delegate);
  pvVar1 = *(void **)&(this->OpenInventoryExtendButtonClickEvent).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->OpenInventoryExtendButtonClickEvent).Delegate);
  UDS_VM_ModelBase::~UDS_VM_ModelBase((UDS_VM_ModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6f73b0

IClassDescriptor * __thiscall
UDS_VM_Warehouse::GetFieldNotificationDescriptor(UDS_VM_Warehouse *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_Warehouse::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6f8260

UClass * __cdecl UDS_VM_Warehouse::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Warehouse.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Warehouse",
               &Z_Registration_Info_UClass_UDS_VM_Warehouse.InnerSingleton,
               StaticRegisterNativesUDS_VM_Warehouse,0xe8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UDS_VM_Warehouse>,
               InternalVTableHelperCtorCaller<UDS_VM_Warehouse>,local_res8,
               UDS_VM_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Warehouse.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_Warehouse @ 14b6f8650

void __cdecl UDS_VM_Warehouse::StaticRegisterNativesUDS_VM_Warehouse(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_Warehouse_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execInventogyTabList @ 14b6f94f0

void __cdecl UDS_VM_Warehouse::execInventogyTabList(UObject *param_1,FFrame *param_2,void *param_3)

{
  FDS_EntryBindingEventField *pFVar1;
  FDS_EntryBindingEventField local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = InventogyTabList((UDS_VM_Warehouse *)param_1,&local_18);
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

// execSelectedRightTabIndex @ 14b6f99a0

void __cdecl
UDS_VM_Warehouse::execSelectedRightTabIndex(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = SelectedRightTabIndex((UDS_VM_Warehouse *)param_1);
  *(int *)param_3 = iVar1;
  return;
}

// execWarehouseSlotCount @ 14b6f9cf0

void __cdecl
UDS_VM_Warehouse::execWarehouseSlotCount(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = WarehouseSlotCount((UDS_VM_Warehouse *)param_1);
  *(int *)param_3 = iVar1;
  return;
}

// execWarehouseUsedSlotCount @ 14b6f9d30

void __cdecl
UDS_VM_Warehouse::execWarehouseUsedSlotCount(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = WarehouseUsedSlotCount((UDS_VM_Warehouse *)param_1);
  *(int *)param_3 = iVar1;
  return;
}

// BindModel @ 14be136d0

void __thiscall UDS_VM_Warehouse::BindModel(UDS_VM_Warehouse *this)

{
  TObjectPtr<UDS_VM_Common_TabGroup>_u_0 TVar1;
  UDS_UIEvent *pUVar2;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *pTVar3;
  FWeakObjectPtr local_res8;
  TObjectPtr<UDS_VM_Common_TabGroup>_u_0 local_res10;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  if ((longlong *)this->_padding_ != (longlong *)0x0) {
    (**(code **)(*(longlong *)this->_padding_ + 0x2c8))();
  }
  pUVar2 = UDS_UIEvent::GetEvent();
  if (pUVar2 != (UDS_UIEvent *)0x0) {
    TVar1 = (TObjectPtr<UDS_VM_Common_TabGroup>_u_0)(this->TabGroup).field0_0x0.DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (TVar1.DebugPtr != (UDS_VM_Common_TabGroup *)0x0) {
        UE::GC::MarkAsReachable((UObject *)TVar1.DebugPtr);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar1.DebugPtr != (UDS_VM_Common_TabGroup *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar1.DebugPtr);
      }
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res10 = TVar1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (TVar1.DebugPtr != (UDS_VM_Common_TabGroup *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar1.DebugPtr);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
    pTVar3 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
             TMapBase<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>,0>_>
             ::FindOrAddImpl<TWeakObjectPtr<UObject,FWeakObjectPtr>_const_&>
                       ((TMapBase<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>,0>_>
                         *)&(pUVar2->OnSelectedTabIndex).Subscriptions,
                        local_res8.ObjectSerialNumber ^ local_res8.ObjectIndex,
                        (TWeakObjectPtr<UObject,FWeakObjectPtr> *)&local_res8);
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll(pTVar3,this);
    TMulticastDelegateRegistration<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>::
    AddUObject<UDS_VM_Warehouse>
              ((TMulticastDelegateRegistration<void___cdecl(int,int),FDefaultTSDelegateUserPolicy> *
               )pTVar3,(UDS_VM_Warehouse *)&local_res10.ObjectPtr,(pmf_f07839dc *)this);
    TVar1 = (TObjectPtr<UDS_VM_Common_TabGroup>_u_0)(this->TabGroup).field0_0x0.DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (TVar1.DebugPtr != (UDS_VM_Common_TabGroup *)0x0) {
        UE::GC::MarkAsReachable((UObject *)TVar1.DebugPtr);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar1.DebugPtr != (UDS_VM_Common_TabGroup *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar1.DebugPtr);
      }
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res10 = TVar1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (TVar1.DebugPtr != (UDS_VM_Common_TabGroup *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar1.DebugPtr);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
    pTVar3 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
             TMapBase<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(enum_EDS_TabErrorType,int,int),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(enum_EDS_TabErrorType,int,int),FDefaultTSDelegateUserPolicy>,0>_>
             ::FindOrAddImpl<TWeakObjectPtr<UObject,FWeakObjectPtr>_const_&>
                       (&(pUVar2->OnErrorTab).Subscriptions,
                        local_res8.ObjectSerialNumber ^ local_res8.ObjectIndex,
                        (TWeakObjectPtr<UObject,FWeakObjectPtr> *)&local_res8);
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll(pTVar3,this);
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_TabErrorType,int,int),FDefaultTSDelegateUserPolicy>
    ::AddUObject<UDS_VM_Warehouse>
              (pTVar3,(UDS_VM_Warehouse *)&local_res10.ObjectPtr,(pmf_fce331b9 *)this);
  }
  return;
}

// InitViewModel @ 14be257e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UDS_VM_Warehouse::InitViewModel(UDS_VM_Warehouse *this)

{
  FName FVar1;
  FName FVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  UDS_VM_Common_TabGroup *pUVar5;
  longlong *plVar6;
  undefined1 auStack_c8 [32];
  FName local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  if ((this->TabGroup).field0_0x0.DebugPtr == (UDS_VM_Common_TabGroup *)0x0) {
    local_a8.ComparisonIndex.Value = 0;
    local_a8.Number = 0;
    pUVar3 = Z_Construct_UClass_UDS_VM_Common_TabGroup_NoRegister();
    FVar1 = local_a8;
    if (local_a8 == (FName)0x0) {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)this,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
    }
    pUVar4 = Z_Construct_UClass_UDS_VM_Common_TabGroup_NoRegister();
    CheckIsClassChildOf_Internal(pUVar4,pUVar3);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar3);
    FVar2 = local_a8;
    local_98._48_8_ = (FObjectInstancingGraph *)0x0;
    local_98._56_8_ = (UPackage *)0x0;
    local_a8.ComparisonIndex = FVar1.ComparisonIndex.Value;
    local_a8.Number = FVar1.Number;
    local_98._16_4_ = local_a8.ComparisonIndex.Value;
    local_98._20_4_ = local_a8.Number;
    local_98._24_4_ = RF_Transient;
    local_98._40_8_ = (UObject *)0x0;
    local_98[0x20] = false;
    local_a8 = FVar2;
    local_98._8_8_ = this;
    pUVar5 = (UDS_VM_Common_TabGroup *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar6 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar6 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
    if (pUVar5 != (UDS_VM_Common_TabGroup *)0x0) {
      *(undefined1 *)((longlong)&pUVar5->_padding_ + 4) = 0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar5 != (UDS_VM_Common_TabGroup *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    (this->TabGroup).field0_0x0.DebugPtr = pUVar5;
  }
  return;
}

// InventogyTabList @ 14be25e10

FDS_EntryBindingEventField * __thiscall
UDS_VM_Warehouse::InventogyTabList
          (UDS_VM_Warehouse *this,FDS_EntryBindingEventField *__return_storage_ptr__)

{
  (__return_storage_ptr__->UserObjectList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->UserObjectList).ArrayNum = 0;
  (__return_storage_ptr__->UserObjectList).ArrayMax = 0;
  return __return_storage_ptr__;
}

// OnErrorTab @ 14be2da90

void __thiscall
UDS_VM_Warehouse::OnErrorTab
          (UDS_VM_Warehouse *this,EDS_TabErrorType param_1,int param_2,int param_3)

{
  longlong *this_00;
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  UDS_M_Warehouse *this_01;
  UObject *pUVar4;
  FWeakObjectPtr local_res8;
  UObject *local_18 [2];
  
  this_00 = &this->_padding_;
  if (*this_00 != 0) {
    pUVar3 = Z_Construct_UClass_UDS_M_Warehouse_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar3);
    if (bVar2) {
      pUVar4 = (UObject *)*this_00;
      goto LAB_14be2dacc;
    }
  }
  pUVar4 = (UObject *)0x0;
LAB_14be2dacc:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_18[0] = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_18);
  bVar2 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar2) {
    this_01 = (UDS_M_Warehouse *)FWeakObjectPtr::Get(&local_res8);
    UDS_M_Warehouse::OnErrorTab(this_01,param_1,param_2);
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1866597721759023000>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_Warehouse.cpp"
                       ,0x68,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// OnInventoryExtendPopupCancelClicked @ 14be30a80

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Warehouse::OnInventoryExtendPopupCancelClicked
          (UDS_VM_Warehouse *this,TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1)

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

// OnInventoryExtendPopupConfirmClicked @ 14be30ae0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Warehouse::OnInventoryExtendPopupConfirmClicked
          (UDS_VM_Warehouse *this,TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1)

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
            goto LAB_14be30bcf;
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
LAB_14be30bcf:
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
              goto LAB_14be30d8e;
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
LAB_14be30d8e:
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
        iVar6 = DS_CommonDataHelper::IdWareHouseExpansionMoneyInfo();
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
                        (&bGEnsureHasExecuted<_1866597721759022925>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_Warehouse.cpp"
                         ,0xb3,"false");
      if (bVar3) goto code_r0x00014be30c12;
    }
    return;
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_1866597721759022928>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_Warehouse.cpp"
                     ,0xb0,"false");
  if (!bVar3) {
    return;
  }
code_r0x00014be30c12:
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// OnInventoryExtendPopupProgressBarChanged @ 14be30eb0

void __thiscall
UDS_VM_Warehouse::OnInventoryExtendPopupProgressBarChanged
          (UDS_VM_Warehouse *this,TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1)

{
  code *pcVar1;
  long64 lVar2;
  bool bVar3;
  int iVar4;
  FDS_InventoryExtendTableRow *pFVar5;
  UDS_M_CommonPopup *pUVar6;
  UDS_M_CommonPopup *pUVar7;
  FDS_Text *pFVar8;
  FWeakObjectPtr local_res10;
  int local_res18 [2];
  FDS_Text local_58;
  
  local_res10 = param_1.WeakPtr;
  bVar3 = FWeakObjectPtr::IsValid(&local_res10);
  if (!bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1866597721759022895>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_Warehouse.cpp"
                       ,0xd1,"false");
    if (!bVar3) {
      return;
    }
code_r0x00014be30f49:
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar4 = DS_CommonDataHelper::IdWareHouseExpansionMoneyInfo();
  pFVar5 = FDS_InventoryExtendTableRow::Get((longlong)iVar4,true);
  if (pFVar5 == (FDS_InventoryExtendTableRow *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1866597721759022892>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_Warehouse.cpp"
                       ,0xd4,"false");
    if (bVar3) goto code_r0x00014be30f49;
  }
  else {
    pUVar6 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res10);
    pUVar7 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res10);
    lVar2 = pFVar5->ExtendMoneyCost;
    iVar4 = UDS_M_CommonPopup::GetSliderCount(pUVar7);
    UDS_M_CommonPopup::UpdateAssetValue1(pUVar6,Asset01,iVar4 * (int)lVar2);
    pUVar6 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res10);
    pUVar7 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res10);
    iVar4 = pFVar5->ExtendValue;
    local_res18[0] = UDS_M_CommonPopup::GetSliderCount(pUVar7);
    local_res18[0] = local_res18[0] * iVar4;
    pFVar8 = FDS_Text::FromStringTableFormat<int>(&local_58,StringUi,0x5ea,local_res18);
    UDS_M_CommonPopup::SetSubContent01(pUVar6,pFVar8);
  }
  return;
}

// OnOpenInventoryExtendButtonClickEvent @ 14be31a20

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UDS_VM_Warehouse::OnOpenInventoryExtendButtonClickEvent
          (UDS_VM_Warehouse *this,FDS_ButtonEventField *param_1)

{
  FInstancedStruct *this_00;
  code *pcVar1;
  FObjectPtr_u_0 FVar2;
  longlong *plVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  UClass *pUVar8;
  FDS_InventoryExtendTableRow *pFVar9;
  UDS_DataSetBase *this_01;
  TWeakObjectPtr<UDS_DataBase,FWeakObjectPtr> this_02;
  UObject *pUVar10;
  TArray<FDS_InventoryBaseTableRow_const_*,TSizedDefaultAllocator<32>_> *pTVar11;
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
  UObject *pUVar22;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> local_258;
  FWeakObjectPtr local_248;
  FWeakObjectPtr local_240;
  FWeakObjectPtr local_238;
  UDS_M_CommonPopup *local_230;
  FWeakObjectPtr local_228 [2];
  FDS_StringUiID local_218;
  UObject *local_208;
  UObject *local_200;
  UDS_GameInstance *local_1f8;
  FDS_Text local_1f0;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_1a0;
  undefined1 local_188 [8];
  TArray<FDS_InventoryBaseTableRow_const_*,TSizedDefaultAllocator<32>_> local_180;
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
  
  pUVar22 = (UObject *)0x0;
  local_208 = pUVar22;
  if (this->_padding_ != 0) {
    pUVar8 = Z_Construct_UClass_UDS_M_Warehouse_NoRegister();
    bVar4 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar8);
    if (bVar4) {
      local_208 = (UObject *)this->_padding_;
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_208 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_208);
  }
  local_240.ObjectIndex = 0;
  local_240.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_208 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_208);
  }
  FWeakObjectPtr::operator=(&local_240,(FObjectPtr)&local_208);
  bVar4 = FWeakObjectPtr::IsValid(&local_240);
  if (!bVar4) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1866597721759022993>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_Warehouse.cpp"
                       ,0x6f,"false");
    if (!bVar4) {
      return;
    }
    goto code_r0x00014be31f3c;
  }
  iVar5 = DS_CommonDataHelper::IdWareHouseExpansionMoneyInfo();
  pFVar9 = FDS_InventoryExtendTableRow::Get((longlong)iVar5,true);
  if (pFVar9 == (FDS_InventoryExtendTableRow *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1866597721759022990>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_Warehouse.cpp"
                       ,0x72,"false");
    if (!bVar4) {
      return;
    }
    goto code_r0x00014be31f3c;
  }
  TDS_DataSetGetter<UDS_MoneyDataSet>::Get((ulong64)local_228);
  bVar4 = FWeakObjectPtr::IsValid(local_228);
  if (!bVar4) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1866597721759022987>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_Warehouse.cpp"
                       ,0x75,"false");
    if (!bVar4) {
      return;
    }
    goto code_r0x00014be31f3c;
  }
  this_01 = (UDS_DataSetBase *)FWeakObjectPtr::Get(local_228);
  this_02 = UDS_DataSetBase::GetData(this_01,(ulong64)local_188);
  pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_02.WeakPtr);
  if (pUVar10 == (UObject *)0x0) {
LAB_14be31bfc:
    pUVar10 = pUVar22;
  }
  else {
    pUVar8 = Z_Construct_UClass_UDS_MoneyData_NoRegister();
    iVar5 = (int)pUVar8->_padding_;
    if ((*(int *)(*(longlong *)&pUVar10->field_0x10 + 0x38) < iVar5) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar10->field_0x10 + 0x30) + (longlong)iVar5 * 8) !=
        &pUVar8->_padding_)) goto LAB_14be31bfc;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar10);
  }
  local_res20.ObjectIndex = 0;
  local_res20.ObjectSerialNumber = 0;
  local_200 = pUVar10;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar10);
  }
  FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_200);
  bVar4 = FWeakObjectPtr::IsValid(&local_res20);
  if (bVar4) {
    pTVar11 = FDS_InventoryBaseTableRow::GetAll(&local_180);
    pUVar10 = (UObject *)(pTVar11->AllocatorInstance).Data;
    plVar3 = (longlong *)&pUVar10->field_0x0;
    for (; (pUVar21 = pUVar22, pUVar10 != (UObject *)(plVar3 + pTVar11->ArrayNum) &&
           (pUVar21 = pUVar10, *(char *)(*(longlong *)pUVar10 + 0x10) != '\x03'));
        pUVar10 = (UObject *)&pUVar10->field_0x8) {
    }
    if (local_180.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_180.AllocatorInstance.Data);
    }
    if (*(longlong *)pUVar21 == 0) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_1866597721759022977>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_Warehouse.cpp"
                         ,0x7f,"false");
      if (bVar4) goto code_r0x00014be31f3c;
    }
    else {
      pFVar12 = FDS_MoneyBaseTableRow::Get((ulonglong)pFVar9->ExtendMoneyType,true);
      if (pFVar12 == (FDS_MoneyBaseTableRow *)0x0) {
        bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_1866597721759022974>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_Warehouse.cpp"
                           ,0x82,"false");
        if (bVar4) goto code_r0x00014be31f3c;
      }
      else {
        this_03 = (UDS_MoneyData *)FWeakObjectPtr::Get(&local_res20);
        uVar13 = UDS_MoneyData::GetTotalQuantity(this_03);
        iVar5 = (int)pFVar9->ExtendMoneyCost;
        iVar6 = DS_ItemDataUtil::GetExtendedInventorySlotCount(PlayerWareHouse);
        iVar7 = (pFVar9->ExtendValue + -1 + (*(int *)(*(longlong *)pUVar21 + 0x18) - iVar6)) /
                pFVar9->ExtendValue;
        iVar6 = (int)((longlong)
                      ((ulonglong)(uint)((int)uVar13 >> 0x1f) << 0x20 | uVar13 & 0xffffffff) /
                     (longlong)iVar5);
        if (iVar7 < iVar6) {
          iVar6 = iVar7;
        }
        if (iVar7 == 0) {
          local_1a0._0_8_ = 0;
          local_1a0._8_8_ = 0;
          local_1a0._16_4_ = 0;
          UDS_UIMessageManager::OpenMsgByStringUi(0x1fc36,Alert_None_01,&local_1a0);
        }
        else {
          local_1f8 = UDS_GameInstance::GetInst();
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (local_1f8 != (UDS_GameInstance *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)local_1f8);
          }
          local_238.ObjectIndex = 0;
          local_238.ObjectSerialNumber = 0;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (local_1f8 != (UDS_GameInstance *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)local_1f8);
          }
          FWeakObjectPtr::operator=(&local_238,(FObjectPtr)&local_1f8);
          bVar4 = FWeakObjectPtr::IsValid(&local_238);
          if (bVar4) {
            local_230 = (UDS_M_CommonPopup *)UDS_CommonPopupManager::GetInst();
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (local_230 != (UDS_M_CommonPopup *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)local_230);
            }
            local_248.ObjectIndex = 0;
            local_248.ObjectSerialNumber = 0;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (local_230 != (UDS_M_CommonPopup *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)local_230);
            }
            FWeakObjectPtr::operator=(&local_248,(FObjectPtr)&local_230);
            bVar4 = FWeakObjectPtr::IsValid(&local_248);
            if (bVar4) {
              this_04 = (UDS_CommonPopupManager *)FWeakObjectPtr::Get(&local_248);
              UDS_CommonPopupManager::CreateCommonPopup(this_04);
              bVar4 = FWeakObjectPtr::IsValid(&local_res18);
              if (bVar4) {
                pUVar14 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res18);
                pFVar15 = FDS_Text::FromStringTable(&local_e0,StringUi,0x64197);
                UDS_M_CommonPopup::SetTitle(pUVar14,pFVar15);
                pUVar14 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res18);
                pFVar15 = FDS_Text::FromStringTable(&local_90,StringUi,0x64198);
                UDS_M_CommonPopup::SetMainContent(pUVar14,pFVar15);
                local_230 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res18);
                local_1f0.StringTableType = None;
                local_1f0.StringTableID = 0;
                local_1f0.StringEnumTableNameID.ComparisonIndex.Value = 0;
                local_1f0.StringEnumTableNameID.Number = 0;
                local_1f0.TimeExpressionType = None;
                local_1f0.IsExpression = false;
                local_1f0.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_1f0.UniqueString.Data.ArrayNum = 0;
                local_1f0.UniqueString.Data.ArrayMax = 0;
                local_1f0.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_1f0.FormatArgs.ArrayNum = 0;
                local_1f0.FormatArgs.ArrayMax = 0;
                local_258.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_258.ArrayNum = 0;
                local_258.ArrayMax = 0;
                local_1f0.DateTime.Ticks = 0;
                local_1f0.TimeSpan.Ticks = 0;
                iVar7 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x828,&local_258.AllocatorInstance,&local_258.ArrayMax);
                local_258.ArrayNum = iVar7 + 1;
                this_00 = (FInstancedStruct *)
                          (local_258.AllocatorInstance.Data + (longlong)iVar7 * 0x28);
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
                  pFVar17->Value = pFVar9->ExtendValue;
                }
                FDS_Text::SetTextFormatFromStringTable(&local_1f0,StringUi,0x64199,&local_258);
                DestructItems<FDS_TextFormatArg,int>
                          ((FDS_TextFormatArg *)local_258.AllocatorInstance.Data,local_258.ArrayNum)
                ;
                if ((FDS_TextFormatArg *)local_258.AllocatorInstance.Data !=
                    (FDS_TextFormatArg *)0x0) {
                  FMemory::Free(local_258.AllocatorInstance.Data);
                }
                UDS_M_CommonPopup::SetSubContent01(local_230,&local_1f0);
                pUVar14 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res18);
                UDS_M_CommonPopup::SetButton(pUVar14,ButtonCancel,StringUi,0x66,false);
                pUVar14 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res18);
                local_258.AllocatorInstance.Data =
                     (FScriptContainerElement *)OnInventoryExtendPopupCancelClicked;
                local_258._8_8_ = local_258._8_8_ & 0xffffffff00000000;
                local_168 = OnInventoryExtendPopupCancelClicked;
                uStack_160._0_4_ = local_258.ArrayNum;
                uStack_160._4_4_ = local_258.ArrayMax;
                pTVar18 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                          ::CreateUObject<UDS_VM_Warehouse>
                                    (&local_128,this,(pmf_c46a70a0 *)&local_168);
                UDS_M_CommonPopup::SetDelegate(pUVar14,ButtonCancel,pTVar18);
                pUVar14 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res18);
                UDS_M_CommonPopup::SetButton(pUVar14,ButtonConfirm,StringUi,0x6419a,iVar6 == 0);
                pUVar14 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res18);
                local_258._8_8_ = local_258._8_8_ & 0xffffffff00000000;
                local_258.AllocatorInstance.Data =
                     (FScriptContainerElement *)OnInventoryExtendPopupConfirmClicked;
                local_158 = OnInventoryExtendPopupConfirmClicked;
                uStack_150._0_4_ = local_258.ArrayNum;
                uStack_150._4_4_ = local_258.ArrayMax;
                pTVar18 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                          ::CreateUObject<UDS_VM_Warehouse>
                                    (&local_110,this,(pmf_c46a70a0 *)&local_158);
                UDS_M_CommonPopup::SetDelegate(pUVar14,ButtonConfirm,pTVar18);
                pUVar14 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res18);
                local_218.ID = 0x1fcfd;
                local_218._padding_ = (longlong)&___7FDS_StringUiID__6B_;
                pFVar19 = FDS_StringUiID::Str(&local_218);
                pFVar20 = FText::FromString(&local_138,pFVar19);
                UDS_M_CommonPopup::SetSlider(pUVar14,1,iVar6,1,pFVar20,1);
                pUVar14 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res18);
                local_218.ID = local_218.ID & 0xffffffff00000000;
                local_218._padding_ = (longlong)OnInventoryExtendPopupProgressBarChanged;
                local_148 = OnInventoryExtendPopupProgressBarChanged;
                uStack_140 = local_218.ID;
                pTVar18 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                          ::CreateUObject<UDS_VM_Warehouse>
                                    (&local_f8,this,(pmf_c46a70a0 *)&local_148);
                UDS_M_CommonPopup::SetDelegate(pUVar14,Slider,pTVar18);
                pUVar14 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res18);
                UDS_M_CommonPopup::SetAsset
                          (pUVar14,Asset01,pFVar12->ID_MoneyIcon,iVar5,(int)uVar13,false);
                pUVar14 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res18);
                UDS_M_CommonPopup::OpenCommonPopup(pUVar14);
              }
              else {
                bVar4 = UE::Assert::Private::ExecCheckImplInternal
                                  (&bGEnsureHasExecuted<_1866597721759022949>,false,
                                   "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_Warehouse.cpp"
                                   ,0x9b,"false");
                if (bVar4) goto code_r0x00014be31f3c;
              }
            }
            else {
              bVar4 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<_1866597721759022952>,false,
                                 "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_Warehouse.cpp"
                                 ,0x98,"false");
              if (bVar4) goto code_r0x00014be31f3c;
            }
          }
          else {
            bVar4 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_1866597721759022955>,false,
                               "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_Warehouse.cpp"
                               ,0x95,"false");
            if (bVar4) goto code_r0x00014be31f3c;
          }
        }
      }
    }
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1866597721759022984>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_Warehouse.cpp"
                       ,0x78,"false");
    if (bVar4) {
code_r0x00014be31f3c:
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// OnSelectedTabIndex @ 14be33080

void __thiscall UDS_VM_Warehouse::OnSelectedTabIndex(UDS_VM_Warehouse *this,int param_1,int param_2)

{
  longlong *this_00;
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  UDS_M_Warehouse *this_01;
  UObject *pUVar4;
  FWeakObjectPtr local_res8;
  UObject *local_res20;
  
  this_00 = &this->_padding_;
  if (*this_00 != 0) {
    pUVar3 = Z_Construct_UClass_UDS_M_Warehouse_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar3);
    if (bVar2) {
      pUVar4 = (UObject *)*this_00;
      goto LAB_14be330b4;
    }
  }
  pUVar4 = (UObject *)0x0;
LAB_14be330b4:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res20 = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res20);
  bVar2 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar2) {
    this_01 = (UDS_M_Warehouse *)FWeakObjectPtr::Get(&local_res8);
    UDS_M_Warehouse::OnClickedRightTab(this_01,param_1);
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1866597721759023007>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_Warehouse.cpp"
                       ,0x61,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// OnSetViewModel @ 14be422f0

void __thiscall
UDS_VM_Warehouse::OnSetViewModel(UDS_VM_Warehouse *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  UDS_VM_Common_TabGroup *this_00;
  code *pcVar1;
  EDS_StringTableType EVar2;
  long64 lVar3;
  FName FVar4;
  FDateTime FVar5;
  FTimespan FVar6;
  EDS_TimeExpression EVar7;
  ForAnyElementType FVar8;
  int iVar9;
  bool bVar10;
  uint uVar11;
  FDS_ViewModelContext *pFVar12;
  UScriptStruct *pUVar13;
  UDS_ViewModelContextManager *this_01;
  undefined4 *puVar14;
  FDS_ViewModelContext *pFVar15;
  FDS_ViewModelContext *pFVar16;
  longlong lVar17;
  ForAnyElementType local_190;
  undefined8 local_188;
  ForAnyElementType local_180;
  undefined8 local_178;
  undefined2 local_170;
  undefined1 local_16e;
  undefined8 local_168;
  FDS_Text local_160;
  undefined2 local_110;
  undefined1 local_10e;
  FDS_Text local_108;
  FDS_Text local_b8;
  TSharedPtr<FDS_ViewModelContext,1> local_68;
  TSharedPtr<FDS_ViewModelContext,1> local_58;
  TSharedPtr<FDS_ViewModelContext,1> local_48;
  
  local_58.Object = param_1->Object;
  local_58.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  UDS_VM_ModelBase::OnSetViewModel((UDS_VM_ModelBase *)this,&local_58);
  if ((this->TabGroup).field0_0x0.DebugPtr != (UDS_VM_Common_TabGroup *)0x0) {
    pFVar12 = ::operator_new(0x48);
    pFVar15 = (FDS_ViewModelContext *)0x0;
    pFVar16 = pFVar15;
    if (pFVar12 != (FDS_ViewModelContext *)0x0) {
      *(undefined8 *)&pFVar12->ViewModelTemplateKey = 0;
      *(undefined4 *)((longlong)&pFVar12[1]._padding_ + 4) = 0;
      *(undefined4 *)((longlong)&pFVar12[2]._padding_ + 4) = 0;
      *(undefined8 *)&pFVar12->DerivedStaticStruct = 0;
      (pFVar12->ViewModelName).ComparisonIndex = 0;
      (pFVar12->ViewModelName).Number = 0;
      pFVar12->_padding_ = (longlong)&___7FDS_ViewModelContext_TabGroup__6B_;
      *(undefined4 *)&pFVar12[1]._padding_ = 0;
      *(undefined8 *)&pFVar12[1].DerivedStaticStruct = 0;
      pFVar12[1].ViewModelName.ComparisonIndex = 0;
      pFVar12[1].ViewModelName.Number = 0;
      *(undefined8 *)&pFVar12[1].ViewModelTemplateKey = 0;
      *(undefined4 *)&pFVar12[2]._padding_ = 0;
      pFVar16 = pFVar12;
    }
    pFVar12 = ::operator_new(0x20);
    if (pFVar12 != (FDS_ViewModelContext *)0x0) {
      *(atomic<int> *)&pFVar12->DerivedStaticStruct = (atomic<int>)0x1;
      *(code **)&(pFVar12->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
      pFVar12->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_TabGroup__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
      ;
      ((atomic<int> *)&pFVar12->DerivedStaticStruct)[1] = (atomic<int>)0x1;
      *(FDS_ViewModelContext **)&pFVar12->ViewModelTemplateKey = pFVar16;
      pFVar15 = pFVar12;
    }
    if ((pFVar16 == (FDS_ViewModelContext *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pUVar13 = FDS_ViewModelContext_TabGroup::StaticStruct();
    *(UScriptStruct **)&pFVar16->DerivedStaticStruct = pUVar13;
    this_01 = UDS_ViewModelContextManager::GetInst();
    if (this_01 != (UDS_ViewModelContextManager *)0x0) {
      if (pFVar15 != (FDS_ViewModelContext *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar15->DerivedStaticStruct =
             (atomic<int>)((int)*(atomic<int> *)&pFVar15->DerivedStaticStruct + 1);
        UNLOCK();
      }
      local_68.Object = pFVar16;
      local_68.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar15;
      UDS_ViewModelContextManager::RegisterContext(this_01,&local_68);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_68.SharedReferenceCount.ReferenceController);
    }
    pFVar16->ViewModelTemplateKey = CommonTabGroup;
    *(undefined4 *)&pFVar16[1]._padding_ = 0;
    local_108.StringTableType = None;
    local_108.StringTableID = 0;
    local_108.DateTime.Ticks = 0;
    local_108.TimeSpan.Ticks = 0;
    local_108.StringEnumTableNameID.ComparisonIndex.Value = 0;
    local_108.StringEnumTableNameID.Number = 0;
    local_108.TimeExpressionType = None;
    local_108.IsExpression = false;
    local_108.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_108.UniqueString.Data.ArrayNum = 0;
    local_108.UniqueString.Data.ArrayMax = 0;
    local_108.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_108.FormatArgs.ArrayNum = 0;
    local_108.FormatArgs.ArrayMax = 0;
    FDS_Text::SetTextFromStringTable(&local_108,StringUi,0x2337);
    FVar8.Data = local_108.UniqueString.Data.AllocatorInstance.Data;
    bVar10 = local_108.IsExpression;
    EVar7 = local_108.TimeExpressionType;
    FVar6.Ticks = local_108.TimeSpan.Ticks;
    FVar5.Ticks = local_108.DateTime.Ticks;
    FVar4 = local_108.StringEnumTableNameID;
    lVar3 = local_108.StringTableID;
    EVar2 = local_108.StringTableType;
    lVar17 = (longlong)local_108.UniqueString.Data.ArrayNum;
    local_190.Data = (FScriptContainerElement *)0x0;
    local_188 = CONCAT44(local_188._4_4_,local_108.UniqueString.Data.ArrayNum);
    if (local_108.UniqueString.Data.ArrayNum == 0) {
      local_188 = local_108.UniqueString.Data._8_8_ & 0xffffffff;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_108.UniqueString.Data.ArrayNum,0,&local_190,
                 local_108.UniqueString.Data.ArrayNum,(int *)((longlong)&local_188 + 4));
      memcpy(local_190.Data,FVar8.Data,lVar17 * 2);
    }
    FVar8.Data = local_108.FormatArgs.AllocatorInstance.Data;
    iVar9 = local_108.FormatArgs.ArrayNum;
    local_180.Data = (FScriptContainerElement *)0x0;
    local_178 = CONCAT44(local_178._4_4_,local_108.FormatArgs.ArrayNum);
    if (local_108.FormatArgs.ArrayNum == 0) {
      local_178 = local_108.FormatArgs._8_8_ & 0xffffffff;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,local_108.FormatArgs.ArrayNum,0,&local_180,local_108.FormatArgs.ArrayNum,
                 (int *)((longlong)&local_178 + 4));
      ConstructItems<FDS_TextFormatArg,FDS_TextFormatArg,int>
                (local_180.Data,(FDS_TextFormatArg *)FVar8.Data,iVar9);
    }
    local_170 = 0;
    local_16e = 0;
    uVar11 = pFVar16[1].ViewModelName.ComparisonIndex.Value;
    if (uVar11 == pFVar16[1].ViewModelName.Number) {
      uVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x860,(ForAnyElementType *)&pFVar16[1].DerivedStaticStruct,
                          (int *)&pFVar16[1].ViewModelName.Number);
    }
    pFVar16[1].ViewModelName.ComparisonIndex.Value = uVar11 + 1;
    puVar14 = (undefined4 *)
              ((longlong)(int)uVar11 * 0x60 + *(longlong *)&pFVar16[1].DerivedStaticStruct);
    *puVar14 = 0xffffffff;
    puVar14[1] = 0xffffffff;
    *(EDS_StringTableType *)(puVar14 + 2) = EVar2;
    *(long64 *)(puVar14 + 4) = lVar3;
    *(FName *)(puVar14 + 6) = FVar4;
    *(long64 *)(puVar14 + 8) = FVar5.Ticks;
    *(long64 *)(puVar14 + 10) = FVar6.Ticks;
    puVar14[0xc] = EVar7;
    *(undefined8 *)(puVar14 + 0xe) = 0;
    *(bool *)(puVar14 + 0xd) = bVar10;
    *(FScriptContainerElement **)(puVar14 + 0xe) = local_190.Data;
    local_190.Data = (FScriptContainerElement *)0x0;
    puVar14[0x10] = (undefined4)local_188;
    puVar14[0x11] = local_188._4_4_;
    local_188 = 0;
    *(undefined8 *)(puVar14 + 0x12) = 0;
    *(FScriptContainerElement **)(puVar14 + 0x12) = local_180.Data;
    local_180.Data = (FScriptContainerElement *)0x0;
    puVar14[0x14] = (undefined4)local_178;
    puVar14[0x15] = local_178._4_4_;
    local_178 = 0;
    *(undefined1 *)(puVar14 + 0x16) = (undefined1)local_170;
    *(undefined1 *)((longlong)puVar14 + 0x59) = local_170._1_1_;
    *(undefined1 *)((longlong)puVar14 + 0x5a) = local_16e;
    DestructItems<FDS_TextFormatArg,int>((FDS_TextFormatArg *)0x0,0);
    if (local_180.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_180.Data);
    }
    if (local_190.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_190.Data);
    }
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)local_108.FormatArgs.AllocatorInstance.Data,
               local_108.FormatArgs.ArrayNum);
    if ((FDS_TextFormatArg *)local_108.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0
       ) {
      FMemory::Free(local_108.FormatArgs.AllocatorInstance.Data);
    }
    if (local_108.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.UniqueString.Data.AllocatorInstance.Data);
    }
    local_b8.StringTableType = None;
    local_b8.StringTableID = 0;
    local_b8.StringEnumTableNameID.ComparisonIndex.Value = 0;
    local_b8.StringEnumTableNameID.Number = 0;
    local_b8.TimeExpressionType = None;
    local_b8.DateTime.Ticks = 0;
    local_b8.TimeSpan.Ticks = 0;
    local_b8.IsExpression = false;
    local_b8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.UniqueString.Data.ArrayNum = 0;
    local_b8.UniqueString.Data.ArrayMax = 0;
    local_b8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.FormatArgs.ArrayNum = 0;
    local_b8.FormatArgs.ArrayMax = 0;
    FDS_Text::SetTextFromStringTable(&local_b8,StringUi,0x233b);
    FVar8.Data = local_b8.UniqueString.Data.AllocatorInstance.Data;
    lVar17 = (longlong)local_b8.UniqueString.Data.ArrayNum;
    local_160.StringTableType = local_b8.StringTableType;
    local_160.StringTableID = local_b8.StringTableID;
    local_160.StringEnumTableNameID = local_b8.StringEnumTableNameID;
    local_160.DateTime.Ticks = local_b8.DateTime.Ticks;
    local_160.TimeSpan.Ticks = local_b8.TimeSpan.Ticks;
    local_160.TimeExpressionType = local_b8.TimeExpressionType;
    local_160.IsExpression = local_b8.IsExpression;
    local_168 = 0xffffffffffffffff;
    local_160.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_160.UniqueString.Data.ArrayNum = local_b8.UniqueString.Data.ArrayNum;
    if (local_b8.UniqueString.Data.ArrayNum == 0) {
      local_160.UniqueString.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_b8.UniqueString.Data.ArrayNum,0,
                 (ForAnyElementType *)&local_160.UniqueString,local_b8.UniqueString.Data.ArrayNum,
                 &local_160.UniqueString.Data.ArrayMax);
      memcpy(local_160.UniqueString.Data.AllocatorInstance.Data,FVar8.Data,lVar17 * 2);
    }
    FVar8.Data = local_b8.FormatArgs.AllocatorInstance.Data;
    iVar9 = local_b8.FormatArgs.ArrayNum;
    local_160.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_160.FormatArgs.ArrayNum = local_b8.FormatArgs.ArrayNum;
    if (local_b8.FormatArgs.ArrayNum == 0) {
      local_160.FormatArgs.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,local_b8.FormatArgs.ArrayNum,0,&local_160.FormatArgs.AllocatorInstance,
                 local_b8.FormatArgs.ArrayNum,&local_160.FormatArgs.ArrayMax);
      ConstructItems<FDS_TextFormatArg,FDS_TextFormatArg,int>
                (local_160.FormatArgs.AllocatorInstance.Data,(FDS_TextFormatArg *)FVar8.Data,iVar9);
    }
    local_110 = 0;
    local_10e = 0;
    bVar10 = UDS_MountManager::IsUseableMountInventory();
    local_110 = CONCAT11(!bVar10,(undefined1)local_110);
    uVar11 = pFVar16[1].ViewModelName.ComparisonIndex.Value;
    if (uVar11 == pFVar16[1].ViewModelName.Number) {
      uVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x860,(ForAnyElementType *)&pFVar16[1].DerivedStaticStruct,
                          (int *)&pFVar16[1].ViewModelName.Number);
    }
    pFVar16[1].ViewModelName.ComparisonIndex.Value = uVar11 + 1;
    puVar14 = (undefined4 *)
              ((longlong)(int)uVar11 * 0x60 + *(longlong *)&pFVar16[1].DerivedStaticStruct);
    *puVar14 = (undefined4)local_168;
    puVar14[1] = local_168._4_4_;
    FDS_Text::FDS_Text((FDS_Text *)(puVar14 + 2),&local_160);
    *(undefined1 *)(puVar14 + 0x16) = (undefined1)local_110;
    *(undefined1 *)((longlong)puVar14 + 0x59) = local_110._1_1_;
    *(undefined1 *)((longlong)puVar14 + 0x5a) = local_10e;
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)local_160.FormatArgs.AllocatorInstance.Data,
               local_160.FormatArgs.ArrayNum);
    if ((FDS_TextFormatArg *)local_160.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0
       ) {
      FMemory::Free(local_160.FormatArgs.AllocatorInstance.Data);
    }
    if (local_160.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_160.UniqueString.Data.AllocatorInstance.Data);
    }
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)local_b8.FormatArgs.AllocatorInstance.Data,
               local_b8.FormatArgs.ArrayNum);
    if ((FDS_TextFormatArg *)local_b8.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0)
    {
      FMemory::Free(local_b8.FormatArgs.AllocatorInstance.Data);
    }
    if (local_b8.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.UniqueString.Data.AllocatorInstance.Data);
    }
    pFVar16[1].ViewModelTemplateKey = RaidPartySetting;
    *(undefined4 *)&pFVar16[1].field_0x1c = 0x4e25;
    *(undefined4 *)&pFVar16[2]._padding_ = 0x4e26;
    this_00 = (this->TabGroup).field0_0x0.DebugPtr;
    if (pFVar15 != (FDS_ViewModelContext *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar15->DerivedStaticStruct =
           (atomic<int>)((int)*(atomic<int> *)&pFVar15->DerivedStaticStruct + 1);
      UNLOCK();
    }
    local_48.Object = pFVar16;
    local_48.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar15;
    UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_00,&local_48);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar15);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SelectedRightTabIndex @ 14be484d0

int __thiscall UDS_VM_Warehouse::SelectedRightTabIndex(UDS_VM_Warehouse *this)

{
  longlong lVar1;
  UDS_VM_Common_TabGroup *this_00;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  UEnum *this_01;
  FString *pFVar6;
  longlong lVar7;
  FName *pFVar8;
  wchar_t *_Str;
  undefined4 local_res8 [2];
  TPairInitializer<int_const_&,FName_const_&> local_res10;
  FName local_res20;
  undefined4 *local_38;
  FName *local_30;
  
  lVar1 = this->_padding_;
  if (lVar1 == 0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1866597721759022863>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_Warehouse.cpp"
                       ,0xf1,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
    return 0;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_WarehouseData>(EDS_WarehouseData)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_WarehouseData>(EDS_WarehouseData)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_WarehouseData>(EDS_WarehouseData)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`FDS_DataContainer::TransformIndexToName<enum_EDS_WarehouseData>'::__l2::
           _dynamic_atexit_destructor_for__EnumNameCache__);
    _Init_thread_footer(&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_WarehouseData>(EDS_WarehouseData)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  _Str = L"";
  local_res8[0] = 2;
  if (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_WarehouseData>(EDS_WarehouseData)___ptr64'
      ::__l2::EnumNameCache._8_4_ !=
      `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_WarehouseData>(EDS_WarehouseData)___ptr64'
      ::__l2::EnumNameCache._52_4_) {
    lVar7 = 0x154cf8408;
    if (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_WarehouseData>(EDS_WarehouseData)___ptr64'
        ::__l2::EnumNameCache._64_8_ != 0) {
      lVar7 = `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_WarehouseData>(EDS_WarehouseData)___ptr64'
              ::__l2::EnumNameCache._64_8_;
    }
    iVar4 = *(int *)(lVar7 + (ulonglong)
                             (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_WarehouseData>(EDS_WarehouseData)___ptr64'
                              ::__l2::EnumNameCache._72_4_ - 1 & 2) * 4);
    while (iVar4 != -1) {
      lVar7 = `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_WarehouseData>(EDS_WarehouseData)___ptr64'
              ::__l2::EnumNameCache._0_8_ + (longlong)iVar4 * 0x14;
      if (*(int *)(`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_WarehouseData>(EDS_WarehouseData)___ptr64'
                   ::__l2::EnumNameCache._0_8_ + (longlong)iVar4 * 0x14) == 2) {
        pFVar8 = (FName *)(lVar7 + 4);
        if (lVar7 == 0) {
          pFVar8 = (FName *)0x0;
        }
        if (pFVar8 != (FName *)0x0) {
          local_res10.Value = *(FName **)pFVar8;
          goto LAB_14be48652;
        }
        break;
      }
      iVar4 = *(int *)(lVar7 + 0xc);
    }
  }
  this_01 = StaticEnum<enum_EDS_WarehouseData>();
  if (this_01 == (UEnum *)0x0) {
    ::FName::FName((FName *)&local_res10.Value,L"");
  }
  else {
    UEnum::GetNameByValue(this_01,(long64)&local_res20);
    local_38 = local_res8;
    local_30 = &local_res20;
    TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_const_&,FName_const_&>_>
              ((TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>
                *)&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_WarehouseData>(EDS_WarehouseData)___ptr64'
                   ::__l2::EnumNameCache,&local_res10,(bool *)&local_38);
    local_res10.Value = (FName *)local_res20;
  }
LAB_14be48652:
  pFVar8 = local_res10.Value;
  uVar5 = ::GetTypeHash((FNameEntryId)(uint)local_res10.Value);
  pFVar6 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)(lVar1 + 0x40),uVar5 + (uint)((ulonglong)pFVar8 >> 0x20),
                      (FName *)&local_res10.Value);
  if ((pFVar6->Data).ArrayNum != 0) {
    _Str = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
  }
  iVar4 = _wtoi(_Str);
  this_00 = (this->TabGroup).field0_0x0.DebugPtr;
  if (this_00 != (UDS_VM_Common_TabGroup *)0x0) {
    UDS_VM_Common_TabGroup::SetSelectedIndex(this_00,iVar4);
  }
  return iVar4;
}

// UnbindModel @ 14be55e10

void __thiscall UDS_VM_Warehouse::UnbindModel(UDS_VM_Warehouse *this)

{
  UDS_UIEvent *pUVar1;
  
  UDS_VM_ModelBase::UnbindModel((UDS_VM_ModelBase *)this);
  pUVar1 = UDS_UIEvent::GetEvent();
  if (pUVar1 != (UDS_UIEvent *)0x0) {
    FDS_FilteredEventDelegate<TWeakObjectPtr<UObject,FWeakObjectPtr>,int_const_,int_const_>::
    Remove<UDS_VM_Warehouse>(&pUVar1->OnSelectedTabIndex,this);
    return;
  }
  return;
}

// UpdateView @ 14be5ae20

void __thiscall
UDS_VM_Warehouse::UpdateView
          (UDS_VM_Warehouse *this,TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr> param_1)

{
  longlong *plVar1;
  FName local_18;
  int local_10;
  
  plVar1 = &this->_padding_;
  local_10 = FFieldNotificationClassDescriptor::SelectedRightTabIndex.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::SelectedRightTabIndex.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::WarehouseSlotCount.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::WarehouseSlotCount.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::WarehouseUsedSlotCount.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::WarehouseUsedSlotCount.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  return;
}

// WarehouseSlotCount @ 14be5bd40

int __thiscall UDS_VM_Warehouse::WarehouseSlotCount(UDS_VM_Warehouse *this)

{
  int iVar1;
  
  iVar1 = DS_ItemDataUtil::GetInventorySlotCount(PlayerWareHouse);
  return iVar1;
}

// WarehouseUsedSlotCount @ 14be5bd50

int __thiscall UDS_VM_Warehouse::WarehouseUsedSlotCount(UDS_VM_Warehouse *this)

{
  int iVar1;
  
  iVar1 = DS_ItemDataUtil::GetUsedInventorySlotCount(PlayerWareHouse);
  return iVar1;
}

