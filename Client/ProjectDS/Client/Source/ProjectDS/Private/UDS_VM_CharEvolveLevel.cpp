// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 56

// SetOnClickSlotEvent_WrapperImpl @ 14b607150

void __cdecl UDS_VM_CharEvolveLevel::SetOnClickSlotEvent_WrapperImpl(void *param_1,void *param_2)

{
  UDS_CharacterUIEvent *pUVar1;
  
  pUVar1 = UDS_CharacterUIEvent::GetEvent();
  if (pUVar1 != (UDS_CharacterUIEvent *)0x0) {
    FDS_EventDelegate<int_const_>::Broadcast
              (&pUVar1->OnClickCharEvolveLevelSlot,*(int *)((longlong)param_1 + 0xa0));
    return;
  }
  return;
}

// SetClickEvolveBtnEvent_WrapperImpl @ 14b607160

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl UDS_VM_CharEvolveLevel::SetClickEvolveBtnEvent_WrapperImpl(void *param_1,void *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UDS_LogManager *pUVar5;
  UObject *pUVar6;
  FDS_CharacterEvolvingTableRow *this;
  FDS_CharacterEvolvingTableRow *this_00;
  FString *pFVar7;
  UDS_ItemDataSet *this_01;
  UDS_ItemData *this_02;
  undefined8 *puVar8;
  ulong64 uVar9;
  undefined1 auStackY_4d8 [32];
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> TStack_498;
  FWeakObjectPtr FStack_488;
  FWeakObjectPtr FStack_480;
  FWeakObjectPtr FStack_478;
  undefined1 auStack_470 [8];
  FDelegateAllocation FStack_468;
  void *pvStack_458;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> TStack_450;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> TStack_438;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> TStack_420;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> TStack_408;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> TStack_3f0;
  FDestructionSentinel FStack_3d8;
  FDelegateAllocation *pFStack_3c0;
  FString FStack_3b8;
  FStringFormatArg FStack_3a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_388;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_268;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_148;
  ulonglong uStack_28;
  
  uStack_28 = __security_cookie.value ^ (ulonglong)auStackY_4d8;
  UDS_CharInfoData::GetData((ulong64)&FStack_488);
  bVar3 = FWeakObjectPtr::IsValid(&FStack_488);
  if (bVar3) {
    if (*(char *)((longlong)param_1 + 0x19c) == '\x01') {
      TStack_450._0_8_ = 0;
      TStack_450._8_8_ = 0;
      TStack_450._16_4_ = 0;
      UDS_UIMessageManager::OpenMsgByStringUi(0x2ea19,Alert_None_01,&TStack_450);
    }
    else {
      iVar1 = *(int *)((longlong)param_1 + 0xa0);
      pUVar6 = FWeakObjectPtr::Get(&FStack_488);
      this = FDS_CharacterEvolvingTableRow::GetRef
                       ((longlong)(*(int *)&pUVar6[8].field_0x8 * 100 + iVar1),true);
      bVar3 = FDS_CharacterEvolvingTableRow::IsValid(this);
      if (bVar3) {
        if (this->ID_ReqEvolving != 0) {
          this_00 = FDS_CharacterEvolvingTableRow::ID_ReqEvolvingTable(this);
          bVar3 = FDS_CharacterEvolvingTableRow::IsValid(this_00);
          if ((bVar3) &&
             (pUVar6 = FWeakObjectPtr::Get(&FStack_488),
             *(int *)&pUVar6[0xd].field_0x14 < this_00->EvolveLevel)) {
            pFVar7 = (FString *)(**(code **)((this_00->ID_Name)._padding_ + 8))(&this_00->ID_Name);
            pFVar7 = ::FString::FString(&FStack_3b8,pFVar7);
            FStringFormatArg::FStringFormatArg(&FStack_3a8,pFVar7);
            TStack_498.ArrayNum = 1;
            TStack_498.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,0,&TStack_498.AllocatorInstance,1,&TStack_498.ArrayMax);
            ConstructItems<FStringFormatArg,FStringFormatArg,int>
                      (TStack_498.AllocatorInstance.Data,&FStack_3a8,1);
            UDS_UIMessageManager::OpenMsgByStringUi
                      (0x2ea1a,Alert_None_01,&TStack_498,
                       (TMap<EDS_MessageArgsType,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_MessageArgsType,__int64,0>_>
                        *)0x0);
            DestructItems<FStringFormatArg,int>
                      ((FStringFormatArg *)TStack_498.AllocatorInstance.Data,TStack_498.ArrayNum);
            if ((FStringFormatArg *)TStack_498.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
              FMemory::Free(TStack_498.AllocatorInstance.Data);
            }
            if (FStack_3a8.StringValue.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0
               ) {
              return;
            }
            FMemory::Free(FStack_3a8.StringValue.Data.AllocatorInstance.Data);
            return;
          }
        }
        TDS_DataSetGetter<UDS_ItemDataSet>::Get((ulong64)&FStack_478);
        bVar3 = FWeakObjectPtr::IsValid(&FStack_478);
        if (bVar3) {
          if (0 < this->ID_ReqItem) {
            this_01 = (UDS_ItemDataSet *)FWeakObjectPtr::Get(&FStack_478);
            UDS_ItemDataSet::GetItemDataByTID(this_01,(int)&FStack_480);
            bVar3 = FWeakObjectPtr::IsValid(&FStack_480);
            if (!bVar3) {
              TStack_438._0_8_ = 0;
              TStack_438._8_8_ = 0;
              TStack_438._16_4_ = 0;
              UDS_UIMessageManager::OpenMsgByStringUi(0x2ea1b,Alert_None_01,&TStack_438);
              return;
            }
            pUVar6 = FWeakObjectPtr::Get(&FStack_480);
            if (pUVar6[0x11].field_0x9 == '\x01') {
              TStack_420._0_8_ = 0;
              TStack_420._8_8_ = 0;
              TStack_420._16_4_ = 0;
              UDS_UIMessageManager::OpenMsgByStringUi(0x2ea1e,Alert_None_01,&TStack_420);
              return;
            }
            this_02 = (UDS_ItemData *)FWeakObjectPtr::Get(&FStack_480);
            iVar1 = this->ReqItemCnt;
            iVar4 = UDS_ItemData::GetStackCount_Total(this_02,PlayerNormal);
            if (iVar4 < iVar1) {
              TStack_408._0_8_ = 0;
              TStack_408._8_8_ = 0;
              TStack_408._16_4_ = 0;
              UDS_UIMessageManager::OpenMsgByStringUi(0x2ea1b,Alert_None_01,&TStack_408);
              return;
            }
          }
          bVar3 = UDS_MoneyDataSet::CheckEnoughMoney(this->ReqMoneyType,this->ReqMoneyValue);
          if (!bVar3) {
            TStack_3f0._0_8_ = 0;
            TStack_3f0._8_8_ = 0;
            TStack_3f0._16_4_ = 0;
            UDS_UIMessageManager::OpenMsgByStringUi(0x2ea1c,Alert_None_01,&TStack_3f0);
          }
          TStack_498.ArrayNum = 0;
          TStack_498.AllocatorInstance.Data = (FScriptContainerElement *)OnSuccessRequestEvolve;
          TStack_498.ArrayMax = FStack_3b8.Data.ArrayMax;
          auStack_470 = (undefined1  [8])0x0;
          FStack_468.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
          FStack_468.DelegateSize = 0;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_470,
                     (FWriteAccessScope *)&FStack_3d8);
          pFStack_3c0 = &FStack_468;
          puVar8 = UE::Core::Private::DelegateAllocate(0x30,&FStack_468);
          if (puVar8 != (undefined8 *)0x0) {
            *puVar8 = &
                      ___7__TCommonDelegateInstanceState___A6AX_J_ZUFDefaultDelegateUserPolicy____V__6B_
            ;
            uVar9 = FDelegateHandle::GenerateNewID();
            puVar8[2] = uVar9;
            *puVar8 = &
                      ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_CharEvolveLevel____A6AX_J_ZUFDefaultDelegateUserPolicy____V__6B_
            ;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable(param_1);
            }
            puVar8[3] = 0;
            pvStack_458 = param_1;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable(param_1);
            }
            FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar8 + 3),(FObjectPtr)&pvStack_458);
            puVar8[4] = TStack_498.AllocatorInstance.Data;
            puVar8[5] = CONCAT44(TStack_498.ArrayMax,TStack_498.ArrayNum);
          }
          if (FStack_3d8.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_3d8.Accessor,&FStack_3d8);
          }
          pUVar6 = FWeakObjectPtr::Get(&FStack_488);
          FDS_CharacterService::RequestCharacterEvolve
                    (*(int *)&pUVar6[8].field_0x8,
                     (TDelegate<void___cdecl(__int64),FDefaultDelegateUserPolicy> *)auStack_470);
        }
        else {
          pUVar5 = UDS_LogManager::GetInst();
          if (pUVar5 != (UDS_LogManager *)0x0) {
            pUVar5 = UDS_LogManager::GetInst();
            TStack_148._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&TStack_148,"UDS_VM_CharEvolveLevel::OnClickEvolveBtn",0x28,Yes);
            UDS_LogManager::PrintLog
                      (pUVar5,1,Warning,TStack_148.Ptr,0x314,L"itemDataSet is Invalid.");
            if ((void *)TStack_148._padding_ != (void *)0x0) {
              FMemory::Free((void *)TStack_148._padding_);
            }
          }
          bVar3 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_3446111784979660011>,false,
                             "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_CharEvolveLevel.cpp"
                             ,0x315,"false");
          if (bVar3) goto code_r0x00014bdccd75;
        }
      }
      else {
        pUVar5 = UDS_LogManager::GetInst();
        if (pUVar5 != (UDS_LogManager *)0x0) {
          pUVar5 = UDS_LogManager::GetInst();
          TStack_268._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&TStack_268,"UDS_VM_CharEvolveLevel::OnClickEvolveBtn",0x28,Yes);
          UDS_LogManager::PrintLog
                    (pUVar5,1,Warning,TStack_268.Ptr,0x2fe,L"evolveTableIndex is Invalid.");
          if ((void *)TStack_268._padding_ != (void *)0x0) {
            FMemory::Free((void *)TStack_268._padding_);
          }
        }
        bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_3446111784979660033>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_CharEvolveLevel.cpp"
                           ,0x2ff,"false");
        if (bVar3) {
code_r0x00014bdccd75:
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
    }
  }
  else {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      TStack_388._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_388,"UDS_VM_CharEvolveLevel::OnClickEvolveBtn",0x28,Yes);
      UDS_LogManager::PrintLog
                (pUVar5,1,Warning,TStack_388.Ptr,0x2ee,
                 L"charInfoData is Invalid. CharEntityID : %llu");
      if ((void *)TStack_388._padding_ != (void *)0x0) {
        FMemory::Free((void *)TStack_388._padding_);
      }
    }
  }
  return;
}

// SetClickAccelerateBtnEvent_WrapperImpl @ 14b607170

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl
UDS_VM_CharEvolveLevel::SetClickAccelerateBtnEvent_WrapperImpl(void *param_1,void *param_2)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_WaitCompleteDataSet *this;
  UObject *pUVar3;
  UDS_WindowManager *this_00;
  undefined8 *puVar4;
  ulong64 uVar5;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *pTVar6;
  undefined8 in_R8;
  undefined1 auStackY_208 [32];
  undefined1 auStack_1c8 [8];
  FDelegateAllocation FStack_1c0;
  code *pcStack_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  bool bStack_198;
  FWeakObjectPtr FStack_188;
  FWeakObjectPtr FStack_180;
  FWeakObjectPtr FStack_178;
  void *pvStack_170;
  FDestructionSentinel FStack_168;
  FDelegateAllocation *pFStack_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_148;
  ulonglong uStack_28;
  
  uStack_28 = __security_cookie.value ^ (ulonglong)auStackY_208;
  UDS_CharInfoData::GetData((ulong64)&FStack_180);
  bVar1 = FWeakObjectPtr::IsValid(&FStack_180);
  if (bVar1) {
    TDS_DataSetGetter<UDS_WaitCompleteDataSet>::Get((ulong64)&FStack_188);
    bVar1 = FWeakObjectPtr::IsValid(&FStack_188);
    if (bVar1) {
      this = (UDS_WaitCompleteDataSet *)FWeakObjectPtr::Get(&FStack_188);
      pUVar3 = FWeakObjectPtr::Get(&FStack_180);
      UDS_WaitCompleteDataSet::GetWaitCompleteDataByTwoParam
                (this,(EDS_WaitCompleteType)&FStack_178,CONCAT71((int7)((ulonglong)in_R8 >> 8),5),
                 (longlong)*(int *)&pUVar3[8].field_0x8);
      bVar1 = FWeakObjectPtr::IsValid(&FStack_178);
      if (bVar1) {
        this_00 = UDS_WindowManager::GetInst();
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          if (this_00 == (UDS_WindowManager *)0x0) {
            return;
          }
          UE::GC::MarkAsReachable((UObject *)this_00);
        }
        if (this_00 != (UDS_WindowManager *)0x0) {
          pcStack_1a8 = OnAccelPopupOpened;
          uStack_1a0 = 0;
          auStack_1c8 = (undefined1  [8])0x0;
          FStack_1c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
          FStack_1c0.DelegateSize = 0;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_1c8,
                     (FWriteAccessScope *)&FStack_168);
          pFStack_150 = &FStack_1c0;
          puVar4 = UE::Core::Private::DelegateAllocate(0x30,&FStack_1c0);
          if (puVar4 != (undefined8 *)0x0) {
            *puVar4 = &
                      ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
            ;
            uVar5 = FDelegateHandle::GenerateNewID();
            puVar4[2] = uVar5;
            *puVar4 = &
                      ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_CharEvolveLevel____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
            ;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable(param_1);
            }
            puVar4[3] = 0;
            pvStack_170 = param_1;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable(param_1);
            }
            FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar4 + 3),(FObjectPtr)&pvStack_170);
            puVar4[4] = pcStack_1a8;
            puVar4[5] = CONCAT44(uStack_19c,uStack_1a0);
          }
          if (FStack_168.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_168.Accessor,&FStack_168);
          }
          pTVar6 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
                   TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                             ((TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                               *)&pcStack_1a8,
                              (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                               *)auStack_1c8);
          UDS_WindowManager::OpenWindow(this_00,PopupAccelBase,pTVar6);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_1c8,
                     (FWriteAccessScope *)&pcStack_1a8);
          if ((FStack_1c0.DelegateSize != 0) &&
             (FStack_1c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
            (*(code *)**(undefined8 **)FStack_1c0.DelegateAllocator)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      ((ForAnyElementType *)&FStack_1c0,0,0,0x10);
            FStack_1c0.DelegateSize = 0;
          }
          if (bStack_198 == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                      ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_19c,uStack_1a0),
                       (FDestructionSentinel *)&pcStack_1a8);
          }
          if (FStack_1c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
            FMemory::Free((void *)FStack_1c0.DelegateAllocator);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)auStack_1c8);
        }
      }
    }
  }
  else {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      TStack_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_148,"UDS_VM_CharEvolveLevel::OnClickAccelerateBtn",0x2c,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,TStack_148.Ptr,0x33f,
                 L"charInfoData is Invalid. CharEntityID : %llu");
      if ((void *)TStack_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)TStack_148._padding_);
      }
    }
  }
  return;
}

// SetClickCompleteBtnEvent_WrapperImpl @ 14b607180

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl
UDS_VM_CharEvolveLevel::SetClickCompleteBtnEvent_WrapperImpl(void *param_1,void *param_2)

{
  int iVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  UObject *pUVar6;
  undefined1 auStackY_1e8 [32];
  FWeakObjectPtr aFStack_1a8 [2];
  code *pcStack_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined1 auStack_188 [8];
  FDelegateAllocation FStack_180;
  void *pvStack_170;
  FDestructionSentinel FStack_168;
  FDelegateAllocation *pFStack_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_148;
  ulonglong uStack_28;
  
  uStack_28 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  UDS_CharInfoData::GetData((ulong64)aFStack_1a8);
  bVar2 = FWeakObjectPtr::IsValid(aFStack_1a8);
  if (bVar2) {
    pcStack_198 = OnSuccessRequestEvolveComplete;
    uStack_190 = 0;
    auStack_188 = (undefined1  [8])0x0;
    FStack_180.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    FStack_180.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_188,
               (FWriteAccessScope *)&FStack_168);
    pFStack_150 = &FStack_180;
    puVar4 = UE::Core::Private::DelegateAllocate(0x30,&FStack_180);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &___7__TCommonDelegateInstanceState___A6AXH_ZUFDefaultDelegateUserPolicy____V__6B_;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[2] = uVar5;
      *puVar4 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_CharEvolveLevel____A6AXH_ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(param_1);
      }
      puVar4[3] = 0;
      pvStack_170 = param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(param_1);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar4 + 3),(FObjectPtr)&pvStack_170);
      puVar4[4] = pcStack_198;
      puVar4[5] = CONCAT44(uStack_18c,uStack_190);
    }
    if (FStack_168.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_168.Accessor,&FStack_168);
    }
    iVar1 = *(int *)((longlong)param_1 + 0xa0);
    pUVar6 = FWeakObjectPtr::Get(aFStack_1a8);
    FDS_CharacterService::RequestCharacterEvolveComplete
              (*(int *)&pUVar6[8].field_0x8,iVar1,
               (TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy> *)auStack_188);
  }
  else {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      TStack_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_148,"UDS_VM_CharEvolveLevel::OnClickCompleteBtn",0x2a,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,TStack_148.Ptr,0x35d,
                 L"charInfoData is Invalid. CharEntityID : %llu");
      if ((void *)TStack_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)TStack_148._padding_);
      }
    }
  }
  return;
}

// StaticClass @ 14b607190

UClass * __cdecl UDS_VM_CharEvolveLevel::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_CharEvolveLevel.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_CharEvolveLevel",
               &Z_Registration_Info_UClass_UDS_VM_CharEvolveLevel.InnerSingleton,
               StaticRegisterNativesUDS_VM_CharEvolveLevel,0x590,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_CharEvolveLevel>,
               InternalVTableHelperCtorCaller<UDS_VM_CharEvolveLevel>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_CharEvolveLevel.InnerSingleton;
}

// UDS_VM_CharEvolveLevel @ 14b609800

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_VM_CharEvolveLevel * __thiscall
UDS_VM_CharEvolveLevel::UDS_VM_CharEvolveLevel(UDS_VM_CharEvolveLevel *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_CharEvolveLevel__6B_;
  this->CharEvolveLevel = 0;
  this->EvolveIconID = 0;
  (this->CharEvolveName).StringTableType = None;
  (this->CharEvolveName).StringTableID = 0;
  (this->CharEvolveName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->CharEvolveName).StringEnumTableNameID.Number = 0;
  (this->CharEvolveName).DateTime.Ticks = 0;
  (this->CharEvolveName).TimeSpan.Ticks = 0;
  (this->CharEvolveName).TimeExpressionType = None;
  (this->CharEvolveName).IsExpression = false;
  (this->CharEvolveName).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CharEvolveName).UniqueString.Data.ArrayNum = 0;
  (this->CharEvolveName).UniqueString.Data.ArrayMax = 0;
  (this->CharEvolveName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CharEvolveName).FormatArgs.ArrayNum = 0;
  (this->CharEvolveName).FormatArgs.ArrayMax = 0;
  (this->RequireCharEvolveName).StringTableType = None;
  (this->RequireCharEvolveName).StringTableID = 0;
  (this->RequireCharEvolveName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->RequireCharEvolveName).StringEnumTableNameID.Number = 0;
  (this->RequireCharEvolveName).DateTime.Ticks = 0;
  (this->RequireCharEvolveName).TimeSpan.Ticks = 0;
  (this->RequireCharEvolveName).TimeExpressionType = None;
  (this->RequireCharEvolveName).IsExpression = false;
  (this->RequireCharEvolveName).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RequireCharEvolveName).UniqueString.Data.ArrayNum = 0;
  (this->RequireCharEvolveName).UniqueString.Data.ArrayMax = 0;
  (this->RequireCharEvolveName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RequireCharEvolveName).FormatArgs.ArrayNum = 0;
  (this->RequireCharEvolveName).FormatArgs.ArrayMax = 0;
  (this->CharEvolveProcessTime).StringTableType = None;
  (this->CharEvolveProcessTime).StringTableID = 0;
  (this->CharEvolveProcessTime).StringEnumTableNameID.ComparisonIndex = 0;
  (this->CharEvolveProcessTime).StringEnumTableNameID.Number = 0;
  (this->CharEvolveProcessTime).DateTime.Ticks = 0;
  (this->CharEvolveProcessTime).TimeSpan.Ticks = 0;
  (this->CharEvolveProcessTime).TimeExpressionType = None;
  (this->CharEvolveProcessTime).IsExpression = false;
  (this->CharEvolveProcessTime).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CharEvolveProcessTime).UniqueString.Data.ArrayNum = 0;
  (this->CharEvolveProcessTime).UniqueString.Data.ArrayMax = 0;
  (this->CharEvolveProcessTime).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CharEvolveProcessTime).FormatArgs.ArrayNum = 0;
  (this->CharEvolveProcessTime).FormatArgs.ArrayMax = 0;
  this->EvolveProgress = 0.0;
  this->IsCharMaxEvolveLevel = false;
  this->IsSelected = false;
  (this->RequireConditionText).StringTableType = None;
  (this->RequireConditionText).StringTableID = 0;
  (this->RequireConditionText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->RequireConditionText).StringEnumTableNameID.Number = 0;
  (this->RequireConditionText).DateTime.Ticks = 0;
  (this->RequireConditionText).TimeSpan.Ticks = 0;
  (this->RequireConditionText).TimeExpressionType = None;
  (this->RequireConditionText).IsExpression = false;
  (this->RequireConditionText).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RequireConditionText).UniqueString.Data.ArrayNum = 0;
  (this->RequireConditionText).UniqueString.Data.ArrayMax = 0;
  (this->RequireConditionText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RequireConditionText).FormatArgs.ArrayNum = 0;
  (this->RequireConditionText).FormatArgs.ArrayMax = 0;
  (this->OnClickSlotEvent)._padding_ = '\0';
  (this->OnClickSlotEvent).bIsCustomSelected = false;
  (this->OnClickSlotEvent).bIsLacked = false;
  (this->OnClickSlotEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->OnClickSlotEvent).Delegate = 0;
  *(undefined8 *)&(this->OnClickSlotEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->OnClickSlotEvent).Delegate.field_0x10 = 0;
  (this->ClickEvolveBtnEvent)._padding_ = '\0';
  (this->ClickEvolveBtnEvent).bIsCustomSelected = false;
  (this->ClickEvolveBtnEvent).bIsLacked = false;
  (this->ClickEvolveBtnEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickEvolveBtnEvent).Delegate = 0;
  *(undefined8 *)&(this->ClickEvolveBtnEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickEvolveBtnEvent).Delegate.field_0x10 = 0;
  (this->ClickAccelerateBtnEvent)._padding_ = '\0';
  (this->ClickAccelerateBtnEvent).bIsCustomSelected = false;
  (this->ClickAccelerateBtnEvent).bIsLacked = false;
  (this->ClickAccelerateBtnEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickAccelerateBtnEvent).Delegate = 0;
  *(undefined8 *)&(this->ClickAccelerateBtnEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickAccelerateBtnEvent).Delegate.field_0x10 = 0;
  (this->ClickCompleteBtnEvent)._padding_ = '\0';
  (this->ClickCompleteBtnEvent).bIsCustomSelected = false;
  (this->ClickCompleteBtnEvent).bIsLacked = false;
  (this->ClickCompleteBtnEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickCompleteBtnEvent).Delegate = 0;
  *(undefined8 *)&(this->ClickCompleteBtnEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickCompleteBtnEvent).Delegate.field_0x10 = 0;
  (this->EntryBindingEventField_StatusUpgrade).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_StatusUpgrade).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_StatusUpgrade).UserObjectList.ArrayMax = 0;
  (this->EntryBindingEventField_Passive).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_Passive).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_Passive).UserObjectList.ArrayMax = 0;
  (this->AnimationEvent).AnimationName.ComparisonIndex = 0;
  (this->AnimationEvent).AnimationName.Number = 0;
  (this->AnimationEvent).AnimationPlayTime = 0.0;
  (this->AnimationEvent).AnimationEventType = None;
  (this->AnimationEvent).AnimationStateType = None;
  *(undefined8 *)&(this->AnimationEvent).Delegate_AnimationFinish = 0;
  (this->AnimationEvent).NumberOfLoops = 1;
  *(undefined8 *)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x10 = 0;
  (this->VM_EvolveMaterialItem).field0_0x0.DebugPtr = (UDS_VM_Item *)0x0;
  (this->EntryBindingEventField_MaterialItem).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_MaterialItem).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_MaterialItem).UserObjectList.ArrayMax = 0;
  (this->VM_EvolveMoney).field0_0x0.DebugPtr = (UDS_VM_MoneyDisplay *)0x0;
  (this->VM_WaitCompleteData).field0_0x0.DebugPtr = (UDS_VM_WaitCompleteData *)0x0;
  (this->FixedText_Evolving).StringTableType = StringUi;
  (this->FixedText_Evolving).StringTableID = 0x2e637;
  (this->FixedText_Evolving).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Evolving).StringEnumTableNameID.Number = 0;
  (this->FixedText_Evolving).DateTime.Ticks = 0;
  (this->FixedText_Evolving).TimeSpan.Ticks = 0;
  (this->FixedText_Evolving).TimeExpressionType = None;
  (this->FixedText_Evolving).IsExpression = false;
  (this->FixedText_Evolving).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Evolving).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Evolving).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Evolving).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Evolving).FormatArgs.ArrayNum = 0;
  (this->FixedText_Evolving).FormatArgs.ArrayMax = 0;
  (this->FixedText_EvolveComplete).StringTableType = StringUi;
  (this->FixedText_EvolveComplete).StringTableID = 0x2e638;
  (this->FixedText_EvolveComplete).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_EvolveComplete).StringEnumTableNameID.Number = 0;
  (this->FixedText_EvolveComplete).DateTime.Ticks = 0;
  (this->FixedText_EvolveComplete).TimeSpan.Ticks = 0;
  (this->FixedText_EvolveComplete).TimeExpressionType = None;
  (this->FixedText_EvolveComplete).IsExpression = false;
  (this->FixedText_EvolveComplete).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_EvolveComplete).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_EvolveComplete).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_EvolveComplete).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_EvolveComplete).FormatArgs.ArrayNum = 0;
  (this->FixedText_EvolveComplete).FormatArgs.ArrayMax = 0;
  (this->FixedText_Activated).StringTableType = StringUi;
  (this->FixedText_Activated).StringTableID = 0x2e639;
  (this->FixedText_Activated).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Activated).StringEnumTableNameID.Number = 0;
  (this->FixedText_Activated).DateTime.Ticks = 0;
  (this->FixedText_Activated).TimeSpan.Ticks = 0;
  (this->FixedText_Activated).TimeExpressionType = None;
  (this->FixedText_Activated).IsExpression = false;
  (this->FixedText_Activated).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Activated).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Activated).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Activated).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Activated).FormatArgs.ArrayNum = 0;
  (this->FixedText_Activated).FormatArgs.ArrayMax = 0;
  (this->FixedText_MaxLevel).StringTableType = StringUi;
  (this->FixedText_MaxLevel).StringTableID = 0x2e637;
  (this->FixedText_MaxLevel).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_MaxLevel).StringEnumTableNameID.Number = 0;
  (this->FixedText_MaxLevel).DateTime.Ticks = 0;
  (this->FixedText_MaxLevel).TimeSpan.Ticks = 0;
  (this->FixedText_MaxLevel).TimeExpressionType = None;
  (this->FixedText_MaxLevel).IsExpression = false;
  (this->FixedText_MaxLevel).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_MaxLevel).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_MaxLevel).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_MaxLevel).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_MaxLevel).FormatArgs.ArrayNum = 0;
  (this->FixedText_MaxLevel).FormatArgs.ArrayMax = 0;
  (this->FixedText_EmptyDesc).StringTableType = StringUi;
  (this->FixedText_EmptyDesc).StringTableID = 0x2e63f;
  (this->FixedText_EmptyDesc).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_EmptyDesc).StringEnumTableNameID.Number = 0;
  (this->FixedText_EmptyDesc).DateTime.Ticks = 0;
  (this->FixedText_EmptyDesc).TimeSpan.Ticks = 0;
  (this->FixedText_EmptyDesc).TimeExpressionType = None;
  (this->FixedText_EmptyDesc).IsExpression = false;
  (this->FixedText_EmptyDesc).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_EmptyDesc).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_EmptyDesc).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_EmptyDesc).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_EmptyDesc).FormatArgs.ArrayNum = 0;
  (this->FixedText_EmptyDesc).FormatArgs.ArrayMax = 0;
  (this->FixedText_Btn_Evolve).StringTableType = StringUi;
  (this->FixedText_Btn_Evolve).StringTableID = 0x2e635;
  (this->FixedText_Btn_Evolve).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Btn_Evolve).StringEnumTableNameID.Number = 0;
  (this->FixedText_Btn_Evolve).DateTime.Ticks = 0;
  (this->FixedText_Btn_Evolve).TimeSpan.Ticks = 0;
  (this->FixedText_Btn_Evolve).TimeExpressionType = None;
  (this->FixedText_Btn_Evolve).IsExpression = false;
  (this->FixedText_Btn_Evolve).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Evolve).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Btn_Evolve).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Btn_Evolve).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Evolve).FormatArgs.ArrayNum = 0;
  (this->FixedText_Btn_Evolve).FormatArgs.ArrayMax = 0;
  (this->FixedText_Btn_Accelerarte).StringTableType = StringUi;
  (this->FixedText_Btn_Accelerarte).StringTableID = 0x138b;
  (this->FixedText_Btn_Accelerarte).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Btn_Accelerarte).StringEnumTableNameID.Number = 0;
  (this->FixedText_Btn_Accelerarte).DateTime.Ticks = 0;
  (this->FixedText_Btn_Accelerarte).TimeSpan.Ticks = 0;
  (this->FixedText_Btn_Accelerarte).TimeExpressionType = None;
  (this->FixedText_Btn_Accelerarte).IsExpression = false;
  (this->FixedText_Btn_Accelerarte).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Accelerarte).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Btn_Accelerarte).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Btn_Accelerarte).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Accelerarte).FormatArgs.ArrayNum = 0;
  (this->FixedText_Btn_Accelerarte).FormatArgs.ArrayMax = 0;
  (this->FixedText_Btn_Complete).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Btn_Complete).StringEnumTableNameID.Number = 0;
  (this->FixedText_Btn_Complete).DateTime.Ticks = 0;
  (this->FixedText_Btn_Complete).TimeSpan.Ticks = 0;
  (this->FixedText_Btn_Complete).TimeExpressionType = None;
  (this->FixedText_Btn_Complete).IsExpression = false;
  (this->FixedText_Btn_Complete).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Complete).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Btn_Complete).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Btn_Complete).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Complete).FormatArgs.ArrayNum = 0;
  (this->FixedText_Btn_Complete).FormatArgs.ArrayMax = 0;
  this->CharEntityID = 0;
  this->EvolveLevelState = None;
  (this->FixedText_Btn_Complete).StringTableType = StringUi;
  (this->FixedText_Btn_Complete).StringTableID = 0x6f;
  return this;
}

// UDS_VM_CharEvolveLevel @ 14b609cf0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_VM_CharEvolveLevel * __thiscall
UDS_VM_CharEvolveLevel::UDS_VM_CharEvolveLevel
          (UDS_VM_CharEvolveLevel *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_CharEvolveLevel__6B_;
  this->CharEvolveLevel = 0;
  this->EvolveIconID = 0;
  (this->CharEvolveName).StringTableType = None;
  (this->CharEvolveName).StringTableID = 0;
  (this->CharEvolveName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->CharEvolveName).StringEnumTableNameID.Number = 0;
  (this->CharEvolveName).DateTime.Ticks = 0;
  (this->CharEvolveName).TimeSpan.Ticks = 0;
  (this->CharEvolveName).TimeExpressionType = None;
  (this->CharEvolveName).IsExpression = false;
  (this->CharEvolveName).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CharEvolveName).UniqueString.Data.ArrayNum = 0;
  (this->CharEvolveName).UniqueString.Data.ArrayMax = 0;
  (this->CharEvolveName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CharEvolveName).FormatArgs.ArrayNum = 0;
  (this->CharEvolveName).FormatArgs.ArrayMax = 0;
  (this->RequireCharEvolveName).StringTableType = None;
  (this->RequireCharEvolveName).StringTableID = 0;
  (this->RequireCharEvolveName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->RequireCharEvolveName).StringEnumTableNameID.Number = 0;
  (this->RequireCharEvolveName).DateTime.Ticks = 0;
  (this->RequireCharEvolveName).TimeSpan.Ticks = 0;
  (this->RequireCharEvolveName).TimeExpressionType = None;
  (this->RequireCharEvolveName).IsExpression = false;
  (this->RequireCharEvolveName).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RequireCharEvolveName).UniqueString.Data.ArrayNum = 0;
  (this->RequireCharEvolveName).UniqueString.Data.ArrayMax = 0;
  (this->RequireCharEvolveName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RequireCharEvolveName).FormatArgs.ArrayNum = 0;
  (this->RequireCharEvolveName).FormatArgs.ArrayMax = 0;
  (this->CharEvolveProcessTime).StringTableType = None;
  (this->CharEvolveProcessTime).StringTableID = 0;
  (this->CharEvolveProcessTime).StringEnumTableNameID.ComparisonIndex = 0;
  (this->CharEvolveProcessTime).StringEnumTableNameID.Number = 0;
  (this->CharEvolveProcessTime).DateTime.Ticks = 0;
  (this->CharEvolveProcessTime).TimeSpan.Ticks = 0;
  (this->CharEvolveProcessTime).TimeExpressionType = None;
  (this->CharEvolveProcessTime).IsExpression = false;
  (this->CharEvolveProcessTime).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CharEvolveProcessTime).UniqueString.Data.ArrayNum = 0;
  (this->CharEvolveProcessTime).UniqueString.Data.ArrayMax = 0;
  (this->CharEvolveProcessTime).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CharEvolveProcessTime).FormatArgs.ArrayNum = 0;
  (this->CharEvolveProcessTime).FormatArgs.ArrayMax = 0;
  this->EvolveProgress = 0.0;
  this->IsCharMaxEvolveLevel = false;
  this->IsSelected = false;
  (this->RequireConditionText).StringTableType = None;
  (this->RequireConditionText).StringTableID = 0;
  (this->RequireConditionText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->RequireConditionText).StringEnumTableNameID.Number = 0;
  (this->RequireConditionText).DateTime.Ticks = 0;
  (this->RequireConditionText).TimeSpan.Ticks = 0;
  (this->RequireConditionText).TimeExpressionType = None;
  (this->RequireConditionText).IsExpression = false;
  (this->RequireConditionText).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RequireConditionText).UniqueString.Data.ArrayNum = 0;
  (this->RequireConditionText).UniqueString.Data.ArrayMax = 0;
  (this->RequireConditionText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RequireConditionText).FormatArgs.ArrayNum = 0;
  (this->RequireConditionText).FormatArgs.ArrayMax = 0;
  (this->OnClickSlotEvent)._padding_ = '\0';
  (this->OnClickSlotEvent).bIsCustomSelected = false;
  (this->OnClickSlotEvent).bIsLacked = false;
  (this->OnClickSlotEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->OnClickSlotEvent).Delegate = 0;
  *(undefined8 *)&(this->OnClickSlotEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->OnClickSlotEvent).Delegate.field_0x10 = 0;
  (this->ClickEvolveBtnEvent)._padding_ = '\0';
  (this->ClickEvolveBtnEvent).bIsCustomSelected = false;
  (this->ClickEvolveBtnEvent).bIsLacked = false;
  (this->ClickEvolveBtnEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickEvolveBtnEvent).Delegate = 0;
  *(undefined8 *)&(this->ClickEvolveBtnEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickEvolveBtnEvent).Delegate.field_0x10 = 0;
  (this->ClickAccelerateBtnEvent)._padding_ = '\0';
  (this->ClickAccelerateBtnEvent).bIsCustomSelected = false;
  (this->ClickAccelerateBtnEvent).bIsLacked = false;
  (this->ClickAccelerateBtnEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickAccelerateBtnEvent).Delegate = 0;
  *(undefined8 *)&(this->ClickAccelerateBtnEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickAccelerateBtnEvent).Delegate.field_0x10 = 0;
  (this->ClickCompleteBtnEvent)._padding_ = '\0';
  (this->ClickCompleteBtnEvent).bIsCustomSelected = false;
  (this->ClickCompleteBtnEvent).bIsLacked = false;
  (this->ClickCompleteBtnEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickCompleteBtnEvent).Delegate = 0;
  *(undefined8 *)&(this->ClickCompleteBtnEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickCompleteBtnEvent).Delegate.field_0x10 = 0;
  (this->EntryBindingEventField_StatusUpgrade).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_StatusUpgrade).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_StatusUpgrade).UserObjectList.ArrayMax = 0;
  (this->EntryBindingEventField_Passive).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_Passive).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_Passive).UserObjectList.ArrayMax = 0;
  (this->AnimationEvent).AnimationName.ComparisonIndex = 0;
  (this->AnimationEvent).AnimationName.Number = 0;
  (this->AnimationEvent).AnimationPlayTime = 0.0;
  (this->AnimationEvent).AnimationEventType = None;
  (this->AnimationEvent).AnimationStateType = None;
  *(undefined8 *)&(this->AnimationEvent).Delegate_AnimationFinish = 0;
  (this->AnimationEvent).NumberOfLoops = 1;
  *(undefined8 *)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x10 = 0;
  (this->VM_EvolveMaterialItem).field0_0x0.DebugPtr = (UDS_VM_Item *)0x0;
  (this->EntryBindingEventField_MaterialItem).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_MaterialItem).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_MaterialItem).UserObjectList.ArrayMax = 0;
  (this->VM_EvolveMoney).field0_0x0.DebugPtr = (UDS_VM_MoneyDisplay *)0x0;
  (this->VM_WaitCompleteData).field0_0x0.DebugPtr = (UDS_VM_WaitCompleteData *)0x0;
  (this->FixedText_Evolving).StringTableType = StringUi;
  (this->FixedText_Evolving).StringTableID = 0x2e637;
  (this->FixedText_Evolving).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Evolving).StringEnumTableNameID.Number = 0;
  (this->FixedText_Evolving).DateTime.Ticks = 0;
  (this->FixedText_Evolving).TimeSpan.Ticks = 0;
  (this->FixedText_Evolving).TimeExpressionType = None;
  (this->FixedText_Evolving).IsExpression = false;
  (this->FixedText_Evolving).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Evolving).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Evolving).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Evolving).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Evolving).FormatArgs.ArrayNum = 0;
  (this->FixedText_Evolving).FormatArgs.ArrayMax = 0;
  (this->FixedText_EvolveComplete).StringTableType = StringUi;
  (this->FixedText_EvolveComplete).StringTableID = 0x2e638;
  (this->FixedText_EvolveComplete).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_EvolveComplete).StringEnumTableNameID.Number = 0;
  (this->FixedText_EvolveComplete).DateTime.Ticks = 0;
  (this->FixedText_EvolveComplete).TimeSpan.Ticks = 0;
  (this->FixedText_EvolveComplete).TimeExpressionType = None;
  (this->FixedText_EvolveComplete).IsExpression = false;
  (this->FixedText_EvolveComplete).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_EvolveComplete).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_EvolveComplete).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_EvolveComplete).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_EvolveComplete).FormatArgs.ArrayNum = 0;
  (this->FixedText_EvolveComplete).FormatArgs.ArrayMax = 0;
  (this->FixedText_Activated).StringTableType = StringUi;
  (this->FixedText_Activated).StringTableID = 0x2e639;
  (this->FixedText_Activated).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Activated).StringEnumTableNameID.Number = 0;
  (this->FixedText_Activated).DateTime.Ticks = 0;
  (this->FixedText_Activated).TimeSpan.Ticks = 0;
  (this->FixedText_Activated).TimeExpressionType = None;
  (this->FixedText_Activated).IsExpression = false;
  (this->FixedText_Activated).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Activated).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Activated).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Activated).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Activated).FormatArgs.ArrayNum = 0;
  (this->FixedText_Activated).FormatArgs.ArrayMax = 0;
  (this->FixedText_MaxLevel).StringTableType = StringUi;
  (this->FixedText_MaxLevel).StringTableID = 0x2e637;
  (this->FixedText_MaxLevel).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_MaxLevel).StringEnumTableNameID.Number = 0;
  (this->FixedText_MaxLevel).DateTime.Ticks = 0;
  (this->FixedText_MaxLevel).TimeSpan.Ticks = 0;
  (this->FixedText_MaxLevel).TimeExpressionType = None;
  (this->FixedText_MaxLevel).IsExpression = false;
  (this->FixedText_MaxLevel).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_MaxLevel).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_MaxLevel).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_MaxLevel).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_MaxLevel).FormatArgs.ArrayNum = 0;
  (this->FixedText_MaxLevel).FormatArgs.ArrayMax = 0;
  (this->FixedText_EmptyDesc).StringTableType = StringUi;
  (this->FixedText_EmptyDesc).StringTableID = 0x2e63f;
  (this->FixedText_EmptyDesc).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_EmptyDesc).StringEnumTableNameID.Number = 0;
  (this->FixedText_EmptyDesc).DateTime.Ticks = 0;
  (this->FixedText_EmptyDesc).TimeSpan.Ticks = 0;
  (this->FixedText_EmptyDesc).TimeExpressionType = None;
  (this->FixedText_EmptyDesc).IsExpression = false;
  (this->FixedText_EmptyDesc).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_EmptyDesc).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_EmptyDesc).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_EmptyDesc).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_EmptyDesc).FormatArgs.ArrayNum = 0;
  (this->FixedText_EmptyDesc).FormatArgs.ArrayMax = 0;
  (this->FixedText_Btn_Evolve).StringTableType = StringUi;
  (this->FixedText_Btn_Evolve).StringTableID = 0x2e635;
  (this->FixedText_Btn_Evolve).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Btn_Evolve).StringEnumTableNameID.Number = 0;
  (this->FixedText_Btn_Evolve).DateTime.Ticks = 0;
  (this->FixedText_Btn_Evolve).TimeSpan.Ticks = 0;
  (this->FixedText_Btn_Evolve).TimeExpressionType = None;
  (this->FixedText_Btn_Evolve).IsExpression = false;
  (this->FixedText_Btn_Evolve).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Evolve).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Btn_Evolve).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Btn_Evolve).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Evolve).FormatArgs.ArrayNum = 0;
  (this->FixedText_Btn_Evolve).FormatArgs.ArrayMax = 0;
  (this->FixedText_Btn_Accelerarte).StringTableType = StringUi;
  (this->FixedText_Btn_Accelerarte).StringTableID = 0x138b;
  (this->FixedText_Btn_Accelerarte).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Btn_Accelerarte).StringEnumTableNameID.Number = 0;
  (this->FixedText_Btn_Accelerarte).DateTime.Ticks = 0;
  (this->FixedText_Btn_Accelerarte).TimeSpan.Ticks = 0;
  (this->FixedText_Btn_Accelerarte).TimeExpressionType = None;
  (this->FixedText_Btn_Accelerarte).IsExpression = false;
  (this->FixedText_Btn_Accelerarte).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Accelerarte).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Btn_Accelerarte).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Btn_Accelerarte).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Accelerarte).FormatArgs.ArrayNum = 0;
  (this->FixedText_Btn_Accelerarte).FormatArgs.ArrayMax = 0;
  (this->FixedText_Btn_Complete).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Btn_Complete).StringEnumTableNameID.Number = 0;
  (this->FixedText_Btn_Complete).DateTime.Ticks = 0;
  (this->FixedText_Btn_Complete).TimeSpan.Ticks = 0;
  (this->FixedText_Btn_Complete).TimeExpressionType = None;
  (this->FixedText_Btn_Complete).IsExpression = false;
  (this->FixedText_Btn_Complete).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Complete).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Btn_Complete).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Btn_Complete).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Complete).FormatArgs.ArrayNum = 0;
  (this->FixedText_Btn_Complete).FormatArgs.ArrayMax = 0;
  this->CharEntityID = 0;
  this->EvolveLevelState = None;
  (this->FixedText_Btn_Complete).StringTableType = StringUi;
  (this->FixedText_Btn_Complete).StringTableID = 0x6f;
  return this;
}

// ~UDS_VM_CharEvolveLevel @ 14b60b980

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_CharEvolveLevel::~UDS_VM_CharEvolveLevel(UDS_VM_CharEvolveLevel *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_CharEvolveLevel__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_Btn_Complete).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_Btn_Complete).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_Btn_Complete).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_Btn_Complete).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)
             (this->FixedText_Btn_Accelerarte).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_Btn_Accelerarte).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_Btn_Accelerarte).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_Btn_Accelerarte).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_Btn_Evolve).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_Btn_Evolve).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_Btn_Evolve).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_Btn_Evolve).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_EmptyDesc).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_EmptyDesc).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_EmptyDesc).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_EmptyDesc).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_MaxLevel).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_MaxLevel).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_MaxLevel).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_MaxLevel).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_Activated).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_Activated).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_Activated).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_Activated).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_EvolveComplete).FormatArgs.AllocatorInstance.Data
             ,(this->FixedText_EvolveComplete).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_EvolveComplete).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_EvolveComplete).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_Evolving).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_Evolving).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_Evolving).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_Evolving).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EntryBindingEventField_MaterialItem).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->AnimationEvent).Delegate_ValidAnimation);
  pvVar2 = *(void **)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->AnimationEvent).Delegate_ValidAnimation);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->AnimationEvent).Delegate_AnimationFinish);
  pvVar2 = *(void **)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->AnimationEvent).Delegate_AnimationFinish);
  pFVar1 = (this->EntryBindingEventField_Passive).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EntryBindingEventField_StatusUpgrade).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickCompleteBtnEvent).Delegate);
  pvVar2 = *(void **)&(this->ClickCompleteBtnEvent).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickCompleteBtnEvent).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickAccelerateBtnEvent).Delegate)
  ;
  pvVar2 = *(void **)&(this->ClickAccelerateBtnEvent).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickAccelerateBtnEvent).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickEvolveBtnEvent).Delegate);
  pvVar2 = *(void **)&(this->ClickEvolveBtnEvent).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickEvolveBtnEvent).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->OnClickSlotEvent).Delegate);
  pvVar2 = *(void **)&(this->OnClickSlotEvent).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->OnClickSlotEvent).Delegate);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->RequireConditionText).FormatArgs.AllocatorInstance.Data,
             (this->RequireConditionText).FormatArgs.ArrayNum);
  pFVar1 = (this->RequireConditionText).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RequireConditionText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->CharEvolveProcessTime).FormatArgs.AllocatorInstance.Data,
             (this->CharEvolveProcessTime).FormatArgs.ArrayNum);
  pFVar1 = (this->CharEvolveProcessTime).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CharEvolveProcessTime).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->RequireCharEvolveName).FormatArgs.AllocatorInstance.Data,
             (this->RequireCharEvolveName).FormatArgs.ArrayNum);
  pFVar1 = (this->RequireCharEvolveName).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RequireCharEvolveName).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->CharEvolveName).FormatArgs.AllocatorInstance.Data,
             (this->CharEvolveName).FormatArgs.ArrayNum);
  pFVar1 = (this->CharEvolveName).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CharEvolveName).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b60d890

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

IClassDescriptor * __thiscall
UDS_VM_CharEvolveLevel::GetFieldNotificationDescriptor(UDS_VM_CharEvolveLevel *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_CharEvolveLevel::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b60de40

UClass * __cdecl UDS_VM_CharEvolveLevel::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_CharEvolveLevel.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_CharEvolveLevel",
               &Z_Registration_Info_UClass_UDS_VM_CharEvolveLevel.InnerSingleton,
               StaticRegisterNativesUDS_VM_CharEvolveLevel,0x590,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_CharEvolveLevel>,
               InternalVTableHelperCtorCaller<UDS_VM_CharEvolveLevel>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_CharEvolveLevel.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_CharEvolveLevel @ 14b60e800

void __cdecl UDS_VM_CharEvolveLevel::StaticRegisterNativesUDS_VM_CharEvolveLevel(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xc;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_CharEvolveLevel_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execCharEvolveLevelConditionIndex @ 14b60f2d0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_CharEvolveLevel::execCharEvolveLevelConditionIndex
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = CharEvolveLevelConditionIndex((UDS_VM_CharEvolveLevel *)param_1);
  *(int *)param_3 = iVar1;
  return;
}

// execCharEvolveLevelState @ 14b60f310

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_CharEvolveLevel::execCharEvolveLevelState(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = CharEvolveLevelState((UDS_VM_CharEvolveLevel *)param_1);
  *(int *)param_3 = iVar1;
  return;
}

// execCharEvolveSituationIndex @ 14b60f350

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_CharEvolveLevel::execCharEvolveSituationIndex(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = CharEvolveSituationIndex((UDS_VM_CharEvolveLevel *)param_1);
  *(int *)param_3 = iVar1;
  return;
}

// execCharEvolveSituationText @ 14b60f390

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_CharEvolveLevel::execCharEvolveSituationText(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 *puVar1;
  FString *pFVar2;
  TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> *pTVar3;
  FDS_Text *pFVar4;
  FDS_Text local_58;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = CharEvolveSituationText((UDS_VM_CharEvolveLevel *)param_1,&local_58);
  puVar1 = (undefined8 *)((longlong)param_3 + 0x30);
  pFVar2 = &pFVar4->UniqueString;
  *(EDS_StringTableType *)param_3 = pFVar4->StringTableType;
  *(long64 *)((longlong)param_3 + 8) = pFVar4->StringTableID;
  *(FName *)((longlong)param_3 + 0x10) = pFVar4->StringEnumTableNameID;
  *(long64 *)((longlong)param_3 + 0x18) = (pFVar4->DateTime).Ticks;
  *(long64 *)((longlong)param_3 + 0x20) = (pFVar4->TimeSpan).Ticks;
  *(EDS_TimeExpression *)((longlong)param_3 + 0x28) = pFVar4->TimeExpressionType;
  *(bool *)((longlong)param_3 + 0x2c) = pFVar4->IsExpression;
  if ((FString *)puVar1 != pFVar2) {
    if ((void *)*puVar1 != (void *)0x0) {
      FMemory::Free((void *)*puVar1);
    }
    *puVar1 = (pFVar2->Data).AllocatorInstance.Data;
    (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 0x38) = (pFVar4->UniqueString).Data.ArrayNum;
    *(int *)((longlong)param_3 + 0x3c) = (pFVar4->UniqueString).Data.ArrayMax;
    (pFVar4->UniqueString).Data.ArrayNum = 0;
    (pFVar4->UniqueString).Data.ArrayMax = 0;
  }
  pTVar3 = &pFVar4->FormatArgs;
  puVar1 = (undefined8 *)((longlong)param_3 + 0x40);
  if ((TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> *)puVar1 != pTVar3) {
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)*puVar1,*(int *)((longlong)param_3 + 0x48));
    if ((void *)*puVar1 != (void *)0x0) {
      FMemory::Free((void *)*puVar1);
    }
    *puVar1 = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 0x48) = (pFVar4->FormatArgs).ArrayNum;
    *(int *)((longlong)param_3 + 0x4c) = (pFVar4->FormatArgs).ArrayMax;
    (pFVar4->FormatArgs).ArrayNum = 0;
    (pFVar4->FormatArgs).ArrayMax = 0;
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data,
             local_58.FormatArgs.ArrayNum);
  if ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0) {
    FMemory::Free(local_58.FormatArgs.AllocatorInstance.Data);
  }
  if (local_58.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.UniqueString.Data.AllocatorInstance.Data);
  }
  return;
}

// execIsActivatedEvolve @ 14b60f4c0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_CharEvolveLevel::execIsActivatedEvolve(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsActivatedEvolve((UDS_VM_CharEvolveLevel *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execIsEvolvable @ 14b60f540

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_CharEvolveLevel::execIsEvolvable(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsEvolvable((UDS_VM_CharEvolveLevel *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execIsEvolveReady @ 14b60f580

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_CharEvolveLevel::execIsEvolveReady(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsEvolveReady((UDS_VM_CharEvolveLevel *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execIsProgressCompleteEvolve @ 14b60f5c0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_CharEvolveLevel::execIsProgressCompleteEvolve(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsProgressCompleteEvolve((UDS_VM_CharEvolveLevel *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execIsProgressingEvolve @ 14b60f600

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_CharEvolveLevel::execIsProgressingEvolve(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsProgressingEvolve((UDS_VM_CharEvolveLevel *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execIsRequireEvolveActivated @ 14b60f640

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_CharEvolveLevel::execIsRequireEvolveActivated(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsRequireEvolveActivated((UDS_VM_CharEvolveLevel *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execIsValidEvolveLevel @ 14b60f6c0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_CharEvolveLevel::execIsValidEvolveLevel(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsValidEvolveLevel((UDS_VM_CharEvolveLevel *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execOnDirty_WaitComplteData @ 14b60fac0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_CharEvolveLevel::execOnDirty_WaitComplteData(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDS_DataBase *local_res10;
  
  local_res10 = (UDS_DataBase *)0x0;
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
  OnDirty_WaitComplteData((UDS_VM_CharEvolveLevel *)param_1,local_res10);
  return;
}

// BindModel @ 14bdaf360

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UDS_VM_CharEvolveLevel::BindModel(UDS_VM_CharEvolveLevel *this)

{
  code *pcVar1;
  bool bVar2;
  UDS_CharacterUIEvent *pUVar3;
  UDS_LogManager *pUVar4;
  UDS_WaitCompleteDataSet *this_00;
  UObject *pUVar5;
  char *pcVar6;
  UObject *this_01;
  UFunction *pUVar7;
  char *pcVar8;
  UDS_VM_CharEvolveLevel *in_R8;
  undefined1 auStackY_298 [32];
  <lambda_1> local_258 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_250;
  FWeakObjectPtr local_248;
  FName local_240;
  undefined1 local_238 [80];
  FName local_1e8;
  FDestructionSentinel local_1e0;
  undefined1 local_1c8 [16];
  code *local_1b8;
  longlong lStack_1b0;
  code *local_1a8;
  longlong lStack_1a0;
  code *local_198;
  longlong lStack_190;
  FReadAccessScope local_188;
  FReadAccessScope local_170;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_298;
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pUVar3 = UDS_CharacterUIEvent::GetEvent();
  if (pUVar3 != (UDS_CharacterUIEvent *)0x0) {
    local_238._8_4_ = 0;
    local_238._0_8_ = OnClickedCharEvolveLevel;
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar3->OnClickCharEvolveLevelSlot,this);
    lStack_1b0 = CONCAT44(local_238._12_4_,local_238._8_4_);
    local_1b8 = (code *)local_238._0_8_;
    TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_CharEvolveLevel>
              ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
               &pUVar3->OnClickCharEvolveLevelSlot,(UDS_VM_CharEvolveLevel *)local_1c8,
               (pmf_bb935b3a *)this);
    local_238._8_4_ = 0;
    local_238._0_8_ = OnUpdateCharacterEvolveLevelInfo;
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar3->OnUpdateCharEvolveLevel,this);
    lStack_1a0 = CONCAT44(local_238._12_4_,local_238._8_4_);
    local_1a8 = (code *)local_238._0_8_;
    TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_CharEvolveLevel>
              ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
               &pUVar3->OnUpdateCharEvolveLevel,(UDS_VM_CharEvolveLevel *)(local_1c8 + 8),
               (pmf_bb935b3a *)this);
    local_238._8_4_ = 0;
    local_238._0_8_ = OnEvolveCompleteSlotEffect;
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar3->OnCharEvolveCompleteSlotEffect,this);
    lStack_190 = CONCAT44(local_238._12_4_,local_238._8_4_);
    local_198 = (code *)local_238._0_8_;
    in_R8 = this;
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_CharEvolveLevel>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar3->OnCharEvolveCompleteSlotEffect,(UDS_VM_CharEvolveLevel *)local_238,
               (pmf_1b6c08f8 *)this);
  }
  if (this->CharEntityID == 0) {
    return;
  }
  UDS_CharInfoData::GetData((ulong64)(local_238 + 0x18));
  bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(local_238 + 0x18));
  if (!bVar2) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar4 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_VM_CharEvolveLevel::BindModel",0x21,Yes);
    UDS_LogManager::PrintLog
              (pUVar4,1,Warning,local_158.Ptr,0x50,L"charInfoData is Invalid. CharEntityID : %llu");
    if ((FScriptContainerElement *)local_158._padding_ == (FScriptContainerElement *)0x0) {
      return;
    }
    FMemory::Free((void *)local_158._padding_);
    return;
  }
  TDS_DataSetGetter<UDS_WaitCompleteDataSet>::Get((ulong64)(local_238 + 0x10));
  bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(local_238 + 0x10));
  if (!bVar2) {
    return;
  }
  this_00 = (UDS_WaitCompleteDataSet *)FWeakObjectPtr::Get((FWeakObjectPtr *)(local_238 + 0x10));
  pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)(local_238 + 0x18));
  UDS_WaitCompleteDataSet::GetWaitCompleteDataByTwoParam
            (this_00,(char)local_238 + 0x20,CONCAT71((int7)((ulonglong)in_R8 >> 8),5),
             (longlong)*(int *)&pUVar5[8].field_0x8);
  bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(local_238 + 0x20));
  if (!bVar2) {
    return;
  }
  pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)(local_238 + 0x20));
  pcVar6 = strstr("&UDS_VM_CharEvolveLevel::OnDirty_WaitComplteData","::");
  if (pcVar6 == (char *)0x0) {
LAB_14bdaf5fb:
    pcVar8 = &DAT_00000002;
LAB_14bdaf600:
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
      pcVar8 = pcVar6;
      pcVar6 = strstr(pcVar8 + 1,"::");
    } while (pcVar6 != (char *)0x0);
    if (pcVar8 == (char *)0x0) goto LAB_14bdaf5fb;
    pcVar8 = pcVar8 + 2;
    if (*pcVar8 == '0') goto LAB_14bdaf600;
  }
  ::FName::FName((FName *)(local_238 + 0x30),pcVar8);
  local_238._56_8_ = this;
  if (this == (UDS_VM_CharEvolveLevel *)0x0) {
    local_238._56_8_ = (UDS_VM_CharEvolveLevel *)0x0;
  }
  local_250.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_248.ObjectIndex = 0;
  local_248.ObjectSerialNumber = 0;
  local_240.ComparisonIndex.Value = 0;
  local_240.Number = 0;
  local_238._40_8_ = local_238._48_8_;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UDS_VM_CharEvolveLevel *)local_238._56_8_ != (UDS_VM_CharEvolveLevel *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_238._56_8_);
  }
  FWeakObjectPtr::operator=(&local_248,(FObjectPtr)((longlong)local_238 + 0x38));
  local_240.ComparisonIndex.Value = local_238._40_4_;
  local_240.Number = local_238._44_4_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_250,&local_188);
  if ((local_240 == (FName)0x0) ||
     (this_01 = FWeakObjectPtr::Get(&local_248), this_01 == (UObject *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_188);
  }
  else {
    pUVar7 = UObject::FindFunction(this_01,local_240);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_188);
    if (pUVar7 != (UFunction *)0x0) goto LAB_14bdaf6ef;
  }
  local_238._64_8_ = local_238 + 0x28;
  `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,UDS_DataBase_*>::
  __Internal_BindDynamic<UDS_VM_CharEvolveLevel>'::__l2::<lambda_1>::operator()(local_238 + 0x40);
LAB_14bdaf6ef:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_250,&local_170);
  local_238._72_4_ = local_248.ObjectIndex;
  local_238._76_4_ = local_248.ObjectSerialNumber;
  local_1e8 = local_240;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_170);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(pUVar5 + 1),
             (FWriteAccessScope *)&local_1e0);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)&pUVar5[1].field_0x8,local_258,Default);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::AddInternal
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar5 + 1),
             (TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> *)(local_238 + 0x48));
  if (local_1e0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1e0.Accessor,&local_1e0);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_250.AccessDetector);
  return;
}

// BroadcastAnimationEvent @ 14bdb2910

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_CharEvolveLevel::BroadcastAnimationEvent
          (UDS_VM_CharEvolveLevel *this,FName *param_1,EDS_AnimationEventType param_2,int param_3)

{
  FName local_18;
  int local_10;
  
  (this->AnimationEvent).AnimationName = *param_1;
  (this->AnimationEvent).AnimationEventType = param_2;
  (this->AnimationEvent).NumberOfLoops = param_3;
  local_10 = FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// CharEvolveLevelConditionIndex @ 14bdb3190

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall UDS_VM_CharEvolveLevel::CharEvolveLevelConditionIndex(UDS_VM_CharEvolveLevel *this)

{
  switch(this->EvolveLevelState) {
  default:
    return 0;
  case NotActivated:
  case NotActivated_Ready:
    return 1;
  case Progressing:
    return 2;
  case Complete:
    return 3;
  case Activated:
    return (this->IsCharMaxEvolveLevel == true) + 4;
  }
}

// CharEvolveLevelState @ 14bdb3200

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall UDS_VM_CharEvolveLevel::CharEvolveLevelState(UDS_VM_CharEvolveLevel *this)

{
  return this->EvolveLevelState;
}

// CharEvolveSituationIndex @ 14bdb3210

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall UDS_VM_CharEvolveLevel::CharEvolveSituationIndex(UDS_VM_CharEvolveLevel *this)

{
  EDS_CharEvolveLevelState EVar1;
  
  EVar1 = this->EvolveLevelState;
  if (EVar1 != NotActivated) {
    if (EVar1 == NotActivated_Ready) {
      return 0;
    }
    if ((EVar1 == Progressing) || (EVar1 == Complete)) {
      return 3;
    }
    if (EVar1 == Activated) {
      return 1;
    }
  }
  return 2;
}

// CharEvolveSituationText @ 14bdb3250

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FDS_Text * __thiscall
UDS_VM_CharEvolveLevel::CharEvolveSituationText
          (UDS_VM_CharEvolveLevel *this,FDS_Text *__return_storage_ptr__)

{
  EDS_CharEvolveLevelState EVar1;
  long64 lVar2;
  
  EVar1 = this->EvolveLevelState;
  lVar2 = 0;
  if ((EVar1 == NotActivated) || (EVar1 == NotActivated_Ready)) {
    lVar2 = 0x2e63b;
  }
  else if ((EVar1 == Progressing) || (EVar1 == Complete)) {
    lVar2 = 0x2e63d;
  }
  else if (EVar1 == Activated) {
    lVar2 = 0x2e63c;
  }
  __return_storage_ptr__->StringTableType = None;
  __return_storage_ptr__->StringTableID = 0;
  (__return_storage_ptr__->StringEnumTableNameID).ComparisonIndex = 0;
  (__return_storage_ptr__->StringEnumTableNameID).Number = 0;
  (__return_storage_ptr__->DateTime).Ticks = 0;
  (__return_storage_ptr__->TimeSpan).Ticks = 0;
  __return_storage_ptr__->TimeExpressionType = None;
  __return_storage_ptr__->IsExpression = false;
  (__return_storage_ptr__->UniqueString).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->UniqueString).Data.ArrayNum = 0;
  (__return_storage_ptr__->UniqueString).Data.ArrayMax = 0;
  (__return_storage_ptr__->FormatArgs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->FormatArgs).ArrayNum = 0;
  (__return_storage_ptr__->FormatArgs).ArrayMax = 0;
  FDS_Text::SetTextFromStringTable(__return_storage_ptr__,StringUi,lVar2);
  return __return_storage_ptr__;
}

// IsActivatedEvolve @ 14bdc7920

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_VM_CharEvolveLevel::IsActivatedEvolve(UDS_VM_CharEvolveLevel *this)

{
  return this->EvolveLevelState == Activated;
}

// IsEvolvable @ 14bdc8830

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_VM_CharEvolveLevel::IsEvolvable(UDS_VM_CharEvolveLevel *this)

{
  bool bVar1;
  
  bVar1 = IsRequireEvolveActivated(this);
  if (((bVar1) && (this->EvolveLevelState != Activated)) && (this->EvolveLevelState != Progressing))
  {
    return true;
  }
  return false;
}

// IsEvolveReady @ 14bdc8870

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_VM_CharEvolveLevel::IsEvolveReady(UDS_VM_CharEvolveLevel *this)

{
  return this->EvolveLevelState == NotActivated_Ready;
}

// IsProgressCompleteEvolve @ 14bdc88a0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_VM_CharEvolveLevel::IsProgressCompleteEvolve(UDS_VM_CharEvolveLevel *this)

{
  return this->EvolveLevelState == Complete;
}

// IsProgressingEvolve @ 14bdc88c0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_VM_CharEvolveLevel::IsProgressingEvolve(UDS_VM_CharEvolveLevel *this)

{
  return this->EvolveLevelState == Progressing;
}

// IsRequireEvolveActivated @ 14bdc89a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_VM_CharEvolveLevel::IsRequireEvolveActivated(UDS_VM_CharEvolveLevel *this)

{
  int iVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  UObject *pUVar4;
  FDS_CharacterEvolvingTableRow *pFVar5;
  undefined1 auStackY_188 [32];
  FWeakObjectPtr local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  if (this->CharEntityID != 0) {
    UDS_CharInfoData::GetData((ulong64)local_148);
    bVar2 = FWeakObjectPtr::IsValid(local_148);
    if (bVar2) {
      iVar1 = this->CharEvolveLevel;
      pUVar4 = FWeakObjectPtr::Get(local_148);
      pFVar5 = FDS_CharacterEvolvingTableRow::GetRef
                         ((longlong)(*(int *)&pUVar4[8].field_0x8 * 100 + iVar1),true);
      bVar2 = FDS_CharacterEvolvingTableRow::IsValid(pFVar5);
      if (bVar2) {
        if (pFVar5->ID_ReqEvolving == 0) {
          return true;
        }
        pFVar5 = FDS_CharacterEvolvingTableRow::ID_ReqEvolvingTable(pFVar5);
        bVar2 = FDS_CharacterEvolvingTableRow::IsValid(pFVar5);
        if (bVar2) {
          pUVar4 = FWeakObjectPtr::Get(local_148);
          return pFVar5->EvolveLevel <= *(int *)&pUVar4[0xd].field_0x14;
        }
      }
    }
    else {
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 != (UDS_LogManager *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_VM_CharEvolveLevel::IsRequireEvolveActivated",0x30,Yes);
        UDS_LogManager::PrintLog
                  (pUVar3,1,Warning,local_138.Ptr,0x93,
                   L"charInfoData is Invalid. CharEntityID : %llu");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
    }
  }
  return false;
}

// IsValidEvolveLevel @ 14bdc96d0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_VM_CharEvolveLevel::IsValidEvolveLevel(UDS_VM_CharEvolveLevel *this)

{
  return 0 < this->CharEvolveLevel;
}

// OnAccelPopupOpened @ 14bdc9730

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UDS_VM_CharEvolveLevel::OnAccelPopupOpened(UDS_VM_CharEvolveLevel *this,UDS_UserWidget *param_1)

{
  code *pcVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  UDS_WaitCompleteDataSet *this_00;
  UObject *pUVar4;
  UClass *pUVar5;
  UDS_M_Common_AccelBase_Popup *this_01;
  longlong *plVar6;
  undefined8 in_R8;
  undefined1 auStackY_238 [32];
  FWeakObjectPtr local_1f8;
  FWeakObjectPtr local_1f0;
  FWeakObjectPtr local_1e8;
  FWeakObjectPtr local_1e0;
  UDS_UserWidget *local_1d8 [2];
  undefined1 local_1c8 [128];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_238;
  UDS_CharInfoData::GetData((ulong64)&local_1e8);
  bVar2 = FWeakObjectPtr::IsValid(&local_1e8);
  if (bVar2) {
    TDS_DataSetGetter<UDS_WaitCompleteDataSet>::Get((ulong64)&local_1f0);
    bVar2 = FWeakObjectPtr::IsValid(&local_1f0);
    if (bVar2) {
      this_00 = (UDS_WaitCompleteDataSet *)FWeakObjectPtr::Get(&local_1f0);
      pUVar4 = FWeakObjectPtr::Get(&local_1e8);
      UDS_WaitCompleteDataSet::GetWaitCompleteDataByTwoParam
                (this_00,(EDS_WaitCompleteType)&local_1e0,CONCAT71((int7)((ulonglong)in_R8 >> 8),5),
                 (longlong)*(int *)&pUVar4[8].field_0x8);
      bVar2 = FWeakObjectPtr::IsValid(&local_1e0);
      if (bVar2) {
        pUVar4 = GetTransientPackageAsObject();
        FObjectInitializer::AssertIfInConstructor
                  (pUVar4,
                   L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                  );
        pUVar5 = Z_Construct_UClass_UDS_M_Common_AccelBase_Popup_NoRegister();
        FStaticConstructObjectParameters::FStaticConstructObjectParameters
                  ((FStaticConstructObjectParameters *)local_1c8,pUVar5);
        local_1c8._8_8_ = pUVar4;
        this_01 = (UDS_M_Common_AccelBase_Popup *)
                  StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1c8);
        if (local_1c8._64_8_ != 0) {
          plVar6 = (longlong *)(local_1c8 + 0x50);
          if ((longlong *)local_1c8._104_8_ != (longlong *)0x0) {
            plVar6 = (longlong *)local_1c8._104_8_;
          }
          (**(code **)(*plVar6 + 0x10))();
        }
        if (this_01 != (UDS_M_Common_AccelBase_Popup *)0x0) {
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this_01);
          }
          pUVar4 = FWeakObjectPtr::Get(&local_1e0);
          UDS_M_Common_AccelBase_Popup::InitModel(this_01,*(long64 *)&pUVar4[2].field_0x10);
          pcVar1 = *(code **)(this_01->_padding_ + 0x2e8);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (param_1 != (UDS_UserWidget *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)param_1);
          }
          local_1f8.ObjectIndex = 0;
          local_1f8.ObjectSerialNumber = 0;
          local_1d8[0] = param_1;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (param_1 != (UDS_UserWidget *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)param_1);
          }
          FWeakObjectPtr::operator=(&local_1f8,(FObjectPtr)local_1d8);
          (*pcVar1)(this_01,local_1f8);
        }
      }
    }
  }
  else {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_VM_CharEvolveLevel::OnAccelPopupOpened",0x2a,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,local_148.Ptr,0x369,
                 L"charInfoData is Invalid. CharEntityID : %llu");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  return;
}

// OnClickAccelerateBtn @ 14bdcb560

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_CharEvolveLevel::OnClickAccelerateBtn
          (UDS_VM_CharEvolveLevel *this,FDS_ButtonEventField *param_1)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_WaitCompleteDataSet *this_00;
  UObject *pUVar3;
  UDS_WindowManager *this_01;
  undefined8 *puVar4;
  ulong64 uVar5;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *pTVar6;
  undefined8 in_R8;
  undefined1 auStackY_208 [32];
  undefined1 local_1c8 [8];
  FDelegateAllocation local_1c0;
  code *local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  bool local_198;
  FWeakObjectPtr local_188;
  FWeakObjectPtr local_180;
  FWeakObjectPtr local_178;
  UDS_VM_CharEvolveLevel *local_170;
  FDestructionSentinel local_168;
  FDelegateAllocation *local_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_208;
  UDS_CharInfoData::GetData((ulong64)&local_180);
  bVar1 = FWeakObjectPtr::IsValid(&local_180);
  if (bVar1) {
    TDS_DataSetGetter<UDS_WaitCompleteDataSet>::Get((ulong64)&local_188);
    bVar1 = FWeakObjectPtr::IsValid(&local_188);
    if (bVar1) {
      this_00 = (UDS_WaitCompleteDataSet *)FWeakObjectPtr::Get(&local_188);
      pUVar3 = FWeakObjectPtr::Get(&local_180);
      UDS_WaitCompleteDataSet::GetWaitCompleteDataByTwoParam
                (this_00,(EDS_WaitCompleteType)&local_178,CONCAT71((int7)((ulonglong)in_R8 >> 8),5),
                 (longlong)*(int *)&pUVar3[8].field_0x8);
      bVar1 = FWeakObjectPtr::IsValid(&local_178);
      if (bVar1) {
        this_01 = UDS_WindowManager::GetInst();
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          if (this_01 == (UDS_WindowManager *)0x0) {
            return;
          }
          UE::GC::MarkAsReachable((UObject *)this_01);
        }
        if (this_01 != (UDS_WindowManager *)0x0) {
          local_1a8 = OnAccelPopupOpened;
          uStack_1a0 = 0;
          local_1c8 = (undefined1  [8])0x0;
          local_1c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
          local_1c0.DelegateSize = 0;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1c8,
                     (FWriteAccessScope *)&local_168);
          local_150 = &local_1c0;
          puVar4 = UE::Core::Private::DelegateAllocate(0x30,&local_1c0);
          if (puVar4 != (undefined8 *)0x0) {
            *puVar4 = &
                      ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
            ;
            uVar5 = FDelegateHandle::GenerateNewID();
            puVar4[2] = uVar5;
            *puVar4 = &
                      ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_CharEvolveLevel____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
            ;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)this);
            }
            puVar4[3] = 0;
            local_170 = this;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)this);
            }
            FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar4 + 3),(FObjectPtr)&local_170);
            puVar4[4] = local_1a8;
            puVar4[5] = CONCAT44(uStack_19c,uStack_1a0);
          }
          if (local_168.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_168.Accessor,&local_168);
          }
          pTVar6 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
                   TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                             ((TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                               *)&local_1a8,
                              (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                               *)local_1c8);
          UDS_WindowManager::OpenWindow(this_01,PopupAccelBase,pTVar6);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1c8,
                     (FWriteAccessScope *)&local_1a8);
          if ((local_1c0.DelegateSize != 0) &&
             (local_1c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
            (*(code *)**(undefined8 **)local_1c0.DelegateAllocator)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      ((ForAnyElementType *)&local_1c0,0,0,0x10);
            local_1c0.DelegateSize = 0;
          }
          if (local_198 == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                      ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_19c,uStack_1a0),
                       (FDestructionSentinel *)&local_1a8);
          }
          if (local_1c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
            FMemory::Free((void *)local_1c0.DelegateAllocator);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)local_1c8);
        }
      }
    }
  }
  else {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_VM_CharEvolveLevel::OnClickAccelerateBtn",0x2c,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_148.Ptr,0x33f,
                 L"charInfoData is Invalid. CharEntityID : %llu");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  return;
}

// OnClickCompleteBtn @ 14bdcbf00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_CharEvolveLevel::OnClickCompleteBtn
          (UDS_VM_CharEvolveLevel *this,FDS_ButtonEventField *param_1)

{
  int iVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  UObject *pUVar6;
  undefined1 auStackY_1e8 [32];
  FWeakObjectPtr local_1a8 [2];
  code *local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined1 local_188 [8];
  FDelegateAllocation local_180;
  UDS_VM_CharEvolveLevel *local_170;
  FDestructionSentinel local_168;
  FDelegateAllocation *local_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  UDS_CharInfoData::GetData((ulong64)local_1a8);
  bVar2 = FWeakObjectPtr::IsValid(local_1a8);
  if (bVar2) {
    local_198 = OnSuccessRequestEvolveComplete;
    uStack_190 = 0;
    local_188 = (undefined1  [8])0x0;
    local_180.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_180.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_188,
               (FWriteAccessScope *)&local_168);
    local_150 = &local_180;
    puVar4 = UE::Core::Private::DelegateAllocate(0x30,&local_180);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &___7__TCommonDelegateInstanceState___A6AXH_ZUFDefaultDelegateUserPolicy____V__6B_;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[2] = uVar5;
      *puVar4 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_CharEvolveLevel____A6AXH_ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar4[3] = 0;
      local_170 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar4 + 3),(FObjectPtr)&local_170);
      puVar4[4] = local_198;
      puVar4[5] = CONCAT44(uStack_18c,uStack_190);
    }
    if (local_168.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_168.Accessor,&local_168);
    }
    iVar1 = this->CharEvolveLevel;
    pUVar6 = FWeakObjectPtr::Get(local_1a8);
    FDS_CharacterService::RequestCharacterEvolveComplete
              (*(int *)&pUVar6[8].field_0x8,iVar1,
               (TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy> *)local_188);
  }
  else {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_VM_CharEvolveLevel::OnClickCompleteBtn",0x2a,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,local_148.Ptr,0x35d,
                 L"charInfoData is Invalid. CharEntityID : %llu");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  return;
}

// OnClickEvolveBtn @ 14bdcc9b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_CharEvolveLevel::OnClickEvolveBtn(UDS_VM_CharEvolveLevel *this,FDS_ButtonEventField *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UDS_LogManager *pUVar5;
  UObject *pUVar6;
  FDS_CharacterEvolvingTableRow *this_00;
  FDS_CharacterEvolvingTableRow *this_01;
  FString *pFVar7;
  UDS_ItemDataSet *this_02;
  UDS_ItemData *this_03;
  undefined8 *puVar8;
  ulong64 uVar9;
  undefined1 auStackY_4d8 [32];
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_498;
  FWeakObjectPtr local_488;
  FWeakObjectPtr local_480;
  FWeakObjectPtr local_478;
  undefined1 local_470 [8];
  FDelegateAllocation local_468;
  UDS_VM_CharEvolveLevel *local_458;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_450;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_438;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_420;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_408;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_3f0;
  FDestructionSentinel local_3d8;
  FDelegateAllocation *local_3c0;
  FString local_3b8;
  FStringFormatArg local_3a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_388;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_268;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_4d8;
  UDS_CharInfoData::GetData((ulong64)&local_488);
  bVar3 = FWeakObjectPtr::IsValid(&local_488);
  if (bVar3) {
    if (this->IsCharMaxEvolveLevel == true) {
      local_450._0_8_ = 0;
      local_450._8_8_ = 0;
      local_450._16_4_ = 0;
      UDS_UIMessageManager::OpenMsgByStringUi(0x2ea19,Alert_None_01,&local_450);
    }
    else {
      iVar1 = this->CharEvolveLevel;
      pUVar6 = FWeakObjectPtr::Get(&local_488);
      this_00 = FDS_CharacterEvolvingTableRow::GetRef
                          ((longlong)(*(int *)&pUVar6[8].field_0x8 * 100 + iVar1),true);
      bVar3 = FDS_CharacterEvolvingTableRow::IsValid(this_00);
      if (bVar3) {
        if (this_00->ID_ReqEvolving != 0) {
          this_01 = FDS_CharacterEvolvingTableRow::ID_ReqEvolvingTable(this_00);
          bVar3 = FDS_CharacterEvolvingTableRow::IsValid(this_01);
          if ((bVar3) &&
             (pUVar6 = FWeakObjectPtr::Get(&local_488),
             *(int *)&pUVar6[0xd].field_0x14 < this_01->EvolveLevel)) {
            pFVar7 = (FString *)(**(code **)((this_01->ID_Name)._padding_ + 8))(&this_01->ID_Name);
            pFVar7 = ::FString::FString(&local_3b8,pFVar7);
            FStringFormatArg::FStringFormatArg(&local_3a8,pFVar7);
            local_498.ArrayNum = 1;
            local_498.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,0,&local_498.AllocatorInstance,1,&local_498.ArrayMax);
            ConstructItems<FStringFormatArg,FStringFormatArg,int>
                      (local_498.AllocatorInstance.Data,&local_3a8,1);
            UDS_UIMessageManager::OpenMsgByStringUi
                      (0x2ea1a,Alert_None_01,&local_498,
                       (TMap<EDS_MessageArgsType,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_MessageArgsType,__int64,0>_>
                        *)0x0);
            DestructItems<FStringFormatArg,int>
                      ((FStringFormatArg *)local_498.AllocatorInstance.Data,local_498.ArrayNum);
            if ((FStringFormatArg *)local_498.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
              FMemory::Free(local_498.AllocatorInstance.Data);
            }
            if (local_3a8.StringValue.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
            {
              return;
            }
            FMemory::Free(local_3a8.StringValue.Data.AllocatorInstance.Data);
            return;
          }
        }
        TDS_DataSetGetter<UDS_ItemDataSet>::Get((ulong64)&local_478);
        bVar3 = FWeakObjectPtr::IsValid(&local_478);
        if (bVar3) {
          if (0 < this_00->ID_ReqItem) {
            this_02 = (UDS_ItemDataSet *)FWeakObjectPtr::Get(&local_478);
            UDS_ItemDataSet::GetItemDataByTID(this_02,(int)&local_480);
            bVar3 = FWeakObjectPtr::IsValid(&local_480);
            if (!bVar3) {
              local_438._0_8_ = 0;
              local_438._8_8_ = 0;
              local_438._16_4_ = 0;
              UDS_UIMessageManager::OpenMsgByStringUi(0x2ea1b,Alert_None_01,&local_438);
              return;
            }
            pUVar6 = FWeakObjectPtr::Get(&local_480);
            if (pUVar6[0x11].field_0x9 == '\x01') {
              local_420._0_8_ = 0;
              local_420._8_8_ = 0;
              local_420._16_4_ = 0;
              UDS_UIMessageManager::OpenMsgByStringUi(0x2ea1e,Alert_None_01,&local_420);
              return;
            }
            this_03 = (UDS_ItemData *)FWeakObjectPtr::Get(&local_480);
            iVar1 = this_00->ReqItemCnt;
            iVar4 = UDS_ItemData::GetStackCount_Total(this_03,PlayerNormal);
            if (iVar4 < iVar1) {
              local_408._0_8_ = 0;
              local_408._8_8_ = 0;
              local_408._16_4_ = 0;
              UDS_UIMessageManager::OpenMsgByStringUi(0x2ea1b,Alert_None_01,&local_408);
              return;
            }
          }
          bVar3 = UDS_MoneyDataSet::CheckEnoughMoney(this_00->ReqMoneyType,this_00->ReqMoneyValue);
          if (!bVar3) {
            local_3f0._0_8_ = 0;
            local_3f0._8_8_ = 0;
            local_3f0._16_4_ = 0;
            UDS_UIMessageManager::OpenMsgByStringUi(0x2ea1c,Alert_None_01,&local_3f0);
          }
          local_498.ArrayNum = 0;
          local_498.AllocatorInstance.Data = (FScriptContainerElement *)OnSuccessRequestEvolve;
          local_498.ArrayMax = local_3b8.Data.ArrayMax;
          local_470 = (undefined1  [8])0x0;
          local_468.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
          local_468.DelegateSize = 0;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_470,
                     (FWriteAccessScope *)&local_3d8);
          local_3c0 = &local_468;
          puVar8 = UE::Core::Private::DelegateAllocate(0x30,&local_468);
          if (puVar8 != (undefined8 *)0x0) {
            *puVar8 = &
                      ___7__TCommonDelegateInstanceState___A6AX_J_ZUFDefaultDelegateUserPolicy____V__6B_
            ;
            uVar9 = FDelegateHandle::GenerateNewID();
            puVar8[2] = uVar9;
            *puVar8 = &
                      ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_CharEvolveLevel____A6AX_J_ZUFDefaultDelegateUserPolicy____V__6B_
            ;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)this);
            }
            puVar8[3] = 0;
            local_458 = this;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)this);
            }
            FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar8 + 3),(FObjectPtr)&local_458);
            puVar8[4] = local_498.AllocatorInstance.Data;
            puVar8[5] = CONCAT44(local_498.ArrayMax,local_498.ArrayNum);
          }
          if (local_3d8.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3d8.Accessor,&local_3d8);
          }
          pUVar6 = FWeakObjectPtr::Get(&local_488);
          FDS_CharacterService::RequestCharacterEvolve
                    (*(int *)&pUVar6[8].field_0x8,
                     (TDelegate<void___cdecl(__int64),FDefaultDelegateUserPolicy> *)local_470);
        }
        else {
          pUVar5 = UDS_LogManager::GetInst();
          if (pUVar5 != (UDS_LogManager *)0x0) {
            pUVar5 = UDS_LogManager::GetInst();
            local_148._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_148,"UDS_VM_CharEvolveLevel::OnClickEvolveBtn",0x28,Yes);
            UDS_LogManager::PrintLog
                      (pUVar5,1,Warning,local_148.Ptr,0x314,L"itemDataSet is Invalid.");
            if ((void *)local_148._padding_ != (void *)0x0) {
              FMemory::Free((void *)local_148._padding_);
            }
          }
          bVar3 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_3446111784979660011>,false,
                             "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_CharEvolveLevel.cpp"
                             ,0x315,"false");
          if (bVar3) goto code_r0x00014bdccd75;
        }
      }
      else {
        pUVar5 = UDS_LogManager::GetInst();
        if (pUVar5 != (UDS_LogManager *)0x0) {
          pUVar5 = UDS_LogManager::GetInst();
          local_268._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_268,"UDS_VM_CharEvolveLevel::OnClickEvolveBtn",0x28,Yes);
          UDS_LogManager::PrintLog
                    (pUVar5,1,Warning,local_268.Ptr,0x2fe,L"evolveTableIndex is Invalid.");
          if ((void *)local_268._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_268._padding_);
          }
        }
        bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_3446111784979660033>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_CharEvolveLevel.cpp"
                           ,0x2ff,"false");
        if (bVar3) {
code_r0x00014bdccd75:
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
    }
  }
  else {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_388._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_388,"UDS_VM_CharEvolveLevel::OnClickEvolveBtn",0x28,Yes);
      UDS_LogManager::PrintLog
                (pUVar5,1,Warning,local_388.Ptr,0x2ee,
                 L"charInfoData is Invalid. CharEntityID : %llu");
      if ((void *)local_388._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_388._padding_);
      }
    }
  }
  return;
}

// OnClickSlot @ 14bdcd3f0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_CharEvolveLevel::OnClickSlot(UDS_VM_CharEvolveLevel *this,FDS_ButtonEventField *param_1)

{
  UDS_CharacterUIEvent *pUVar1;
  
  pUVar1 = UDS_CharacterUIEvent::GetEvent();
  if (pUVar1 != (UDS_CharacterUIEvent *)0x0) {
    FDS_EventDelegate<int_const_>::Broadcast
              (&pUVar1->OnClickCharEvolveLevelSlot,this->CharEvolveLevel);
    return;
  }
  return;
}

// OnClickedCharEvolveLevel @ 14bdcd5a0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_CharEvolveLevel::OnClickedCharEvolveLevel(UDS_VM_CharEvolveLevel *this,int param_1)

{
  FName FVar1;
  UDS_CharacterUIEvent *pUVar2;
  bool bVar3;
  FName local_18;
  int local_10;
  
  FVar1 = FFieldNotificationClassDescriptor::IsSelected.FieldName;
  bVar3 = this->CharEvolveLevel == param_1;
  if (this->IsSelected != bVar3) {
    local_10 = FFieldNotificationClassDescriptor::IsSelected.BitNumber;
    this->IsSelected = bVar3;
    local_18 = FVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  if (this->IsSelected == true) {
    pUVar2 = UDS_CharacterUIEvent::GetEvent();
    if (pUVar2 != (UDS_CharacterUIEvent *)0x0) {
      FDS_EventDelegate<int_const_>::Broadcast(&pUVar2->OnSelectCharEvolve,this->CharEvolveLevel);
      return;
    }
  }
  return;
}

// OnDirty_WaitComplteData @ 14bdce0b0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_CharEvolveLevel::OnDirty_WaitComplteData(UDS_VM_CharEvolveLevel *this,UDS_DataBase *param_1)

{
  UDS_CharacterUIEvent *pUVar1;
  
  pUVar1 = UDS_CharacterUIEvent::GetEvent();
  if (pUVar1 != (UDS_CharacterUIEvent *)0x0) {
    FDS_EventDelegate<int_const_>::Broadcast(&pUVar1->OnUpdateCharEvolveLevel,this->CharEvolveLevel)
    ;
    return;
  }
  return;
}

// OnEvolveCompleteSlotEffect @ 14bdcea60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_CharEvolveLevel::OnEvolveCompleteSlotEffect(UDS_VM_CharEvolveLevel *this)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UObject *pUVar3;
  FName *pFVar4;
  undefined1 auStackY_1a8 [32];
  FWeakObjectPtr local_168 [2];
  FName local_158;
  int local_150;
  FName local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  UDS_CharInfoData::GetData((ulong64)local_168);
  bVar1 = FWeakObjectPtr::IsValid(local_168);
  if (bVar1) {
    pUVar3 = FWeakObjectPtr::Get(local_168);
    if (*(int *)&pUVar3[0xd].field_0x14 == this->CharEvolveLevel) {
      pFVar4 = ::FName::FName(local_148,"Ani_Evolve_Complete");
      (this->AnimationEvent).AnimationName = *pFVar4;
      (this->AnimationEvent).AnimationEventType = PlayForward;
      (this->AnimationEvent).NumberOfLoops = 1;
      local_150 = FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
      local_158 = FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_158);
    }
  }
  else {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_CharEvolveLevel::OnEvolveCompleteSlotEffect",0x32,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_138.Ptr,0x3a4,
                 L"charInfoData is Invalid. CharEntityID : %llu");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return;
}

// OnSetViewModel @ 14bdd3f60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_CharEvolveLevel::OnSetViewModel
          (UDS_VM_CharEvolveLevel *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  UDS_LogManager *pUVar5;
  UDS_CharacterUIEvent *pUVar6;
  undefined1 auStackY_1a8 [32];
  TSharedPtr<FDS_ViewModelContext_CharEvolveLevel,1> local_178;
  FName local_168;
  int local_160;
  FName local_158;
  int local_150;
  TSharedPtr<FDS_ViewModelContext,1> local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  local_148.Object = param_1->Object;
  local_148.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_148.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_CharEvolveLevel>(&local_178,&local_148);
  if (local_178.Object == (FDS_ViewModelContext_CharEvolveLevel *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_138._padding_ = (longlong)local_178.Object;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_CharEvolveLevel::OnSetViewModel",0x26,Yes);
      UDS_LogManager::PrintLog(pUVar5,1,Warning,local_138.Ptr,0x2d,L"context is Invalid.");
      if ((FDS_ViewModelContext_CharEvolveLevel *)local_138._padding_ !=
          (FDS_ViewModelContext_CharEvolveLevel *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    if (local_178.Object == (FDS_ViewModelContext_CharEvolveLevel *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    this->CharEntityID = (local_178.Object)->CharEntityID;
    FVar3 = FFieldNotificationClassDescriptor::CharEvolveLevel.FieldName;
    if (this->CharEvolveLevel != (local_178.Object)->CharEvolveLevel) {
      local_160 = FFieldNotificationClassDescriptor::CharEvolveLevel.BitNumber;
      this->CharEvolveLevel = (local_178.Object)->CharEvolveLevel;
      local_168 = FVar3;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_168);
    }
    FVar3 = FFieldNotificationClassDescriptor::IsSelected.FieldName;
    if (this->IsSelected != (local_178.Object)->IsSelected) {
      local_150 = FFieldNotificationClassDescriptor::IsSelected.BitNumber;
      this->IsSelected = (local_178.Object)->IsSelected;
      local_158 = FVar3;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_158);
    }
    Update(this);
    if (this->IsSelected == true) {
      pUVar6 = UDS_CharacterUIEvent::GetEvent();
      if (pUVar6 != (UDS_CharacterUIEvent *)0x0) {
        FDS_EventDelegate<int_const_>::Broadcast(&pUVar6->OnSelectCharEvolve,this->CharEvolveLevel);
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_178.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnSuccessRequestEvolve @ 14bdde7e0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_CharEvolveLevel::OnSuccessRequestEvolve(UDS_VM_CharEvolveLevel *this,long64 param_1)

{
  bool bVar1;
  UDS_CharacterUIEvent *pUVar2;
  
  pUVar2 = UDS_CharacterUIEvent::GetEvent();
  if (pUVar2 != (UDS_CharacterUIEvent *)0x0) {
    bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &pUVar2->OnUpdateCharEvolveInfo);
    if (bVar1) {
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                (&(pUVar2->OnUpdateCharEvolveInfo).Delegate);
      return;
    }
  }
  return;
}

// OnSuccessRequestEvolveComplete @ 14bdde830

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_CharEvolveLevel::OnSuccessRequestEvolveComplete(UDS_VM_CharEvolveLevel *this,int param_1)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  FDS_CharacterEvolvingTableRow *pFVar3;
  UObject *pUVar4;
  FString *pFVar5;
  UDS_CharacterUIEvent *pUVar6;
  undefined1 auStackY_218 [32];
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_1d8;
  FWeakObjectPtr local_1c8;
  FString local_1c0;
  FString local_1b0;
  FStringFormatArg local_198;
  FStringFormatArg local_178;
  FStringFormatArg local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_218;
  UDS_CharInfoData::GetData((ulong64)&local_1c8);
  bVar1 = FWeakObjectPtr::IsValid(&local_1c8);
  if (bVar1) {
    pFVar3 = FDS_CharacterEvolvingTableRow::GetRef((longlong)param_1,true);
    pUVar4 = FWeakObjectPtr::Get(&local_1c8);
    pFVar5 = ::FString::FString(&local_1c0,(FString *)&pUVar4[8].field_0x18);
    FStringFormatArg::FStringFormatArg(&local_198,pFVar5);
    FStringFormatArg::FStringFormatArg(&local_178,param_1);
    pFVar5 = (FString *)(**(code **)((pFVar3->ID_Name)._padding_ + 8))(&pFVar3->ID_Name);
    pFVar5 = ::FString::FString(&local_1b0,pFVar5);
    FStringFormatArg::FStringFormatArg(&local_158,pFVar5);
    local_1d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1d8.ArrayNum = 3;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,3,0,&local_1d8.AllocatorInstance,3,&local_1d8.ArrayMax);
    ConstructItems<FStringFormatArg,FStringFormatArg,int>
              (local_1d8.AllocatorInstance.Data,&local_198,3);
    UDS_UIMessageManager::OpenMsgByStringUi
              (0x2ea1d,Alert_None_01,&local_1d8,
               (TMap<EDS_MessageArgsType,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_MessageArgsType,__int64,0>_>
                *)0x0);
    DestructItems<FStringFormatArg,int>
              ((FStringFormatArg *)local_1d8.AllocatorInstance.Data,local_1d8.ArrayNum);
    if ((FStringFormatArg *)local_1d8.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
      FMemory::Free(local_1d8.AllocatorInstance.Data);
    }
    if (local_158.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.StringValue.Data.AllocatorInstance.Data);
    }
    if (local_178.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.StringValue.Data.AllocatorInstance.Data);
    }
    if (local_198.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.StringValue.Data.AllocatorInstance.Data);
    }
    pUVar6 = UDS_CharacterUIEvent::GetEvent();
    if (pUVar6 != (UDS_CharacterUIEvent *)0x0) {
      bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                        ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                         &pUVar6->OnSuccessCharEvolveComplete);
      if (bVar1) {
        TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                  (&(pUVar6->OnSuccessCharEvolveComplete).Delegate);
      }
      bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                        ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                         &pUVar6->OnUpdateCharEvolveInfo);
      if (bVar1) {
        TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                  (&(pUVar6->OnUpdateCharEvolveInfo).Delegate);
      }
    }
  }
  else {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_CharEvolveLevel::OnSuccessRequestEvolveComplete",0x36,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_138.Ptr,0x38e,
                 L"charInfoData is Invalid. CharEntityID : %llu");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return;
}

// OnUpdateCharacterEvolveLevelInfo @ 14bddfb00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_CharEvolveLevel::OnUpdateCharacterEvolveLevelInfo(UDS_VM_CharEvolveLevel *this,int param_1)

{
  int iVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  UObject *pUVar4;
  FDS_CharacterEvolvingTableRow *this_00;
  FDS_CharacterEvolvingTableRow *pFVar5;
  undefined1 auStackY_188 [32];
  FWeakObjectPtr aFStack_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  if (this->CharEvolveLevel != param_1) {
    return;
  }
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  UDS_CharInfoData::GetData((ulong64)aFStack_148);
  bVar2 = FWeakObjectPtr::IsValid(aFStack_148);
  if (bVar2) {
    iVar1 = this->CharEvolveLevel;
    pUVar4 = FWeakObjectPtr::Get(aFStack_148);
    this_00 = FDS_CharacterEvolvingTableRow::GetRef
                        ((longlong)(*(int *)&pUVar4[8].field_0x8 * 100 + iVar1),true);
    pFVar5 = FDS_CharacterEvolvingTableRow::ID_ReqEvolvingTable(this_00);
    UpdateEvolveLevelInfo(this,this_00,pFVar5);
    UpdateWaitCompleteData(this);
    UpdateEvolveConditionInfo(this,this_00,pFVar5);
    UpdateSkillActLevelAndPassive(this,this_00,pFVar5);
    UpdateEvolveLevelState(this);
    UpdateAnimation(this);
  }
  else {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      TStack_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_138,"UDS_VM_CharEvolveLevel::Update",0x1e,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,TStack_138.Ptr,0x13c,
                 L"charInfoData is Invalid. CharEntityID : %llu");
      if ((void *)TStack_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)TStack_138._padding_);
      }
    }
  }
  return;
}

// UnbindModel @ 14bdebbb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall UDS_VM_CharEvolveLevel::UnbindModel(UDS_VM_CharEvolveLevel *this)

{
  bool bVar1;
  UDS_LanguageManager *pUVar2;
  UDS_CharacterUIEvent *pUVar3;
  UDS_LogManager *pUVar4;
  UDS_WaitCompleteDataSet *this_00;
  UObject *pUVar5;
  undefined8 in_R8;
  undefined1 auStackY_198 [32];
  FWeakObjectPtr local_158;
  FWeakObjectPtr local_150;
  FWeakObjectPtr local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  pUVar2 = UDS_LanguageManager::GetInst();
  if (pUVar2 != (UDS_LanguageManager *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2->OnLanguageChanged,this
              );
  }
  pUVar3 = UDS_CharacterUIEvent::GetEvent();
  if (pUVar3 != (UDS_CharacterUIEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar3->OnClickCharEvolveLevelSlot,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar3->OnUpdateCharEvolveLevel,this);
  }
  if (this->CharEntityID != 0) {
    UDS_CharInfoData::GetData((ulong64)&local_150);
    bVar1 = FWeakObjectPtr::IsValid(&local_150);
    if (bVar1) {
      TDS_DataSetGetter<UDS_WaitCompleteDataSet>::Get((ulong64)&local_158);
      bVar1 = FWeakObjectPtr::IsValid(&local_158);
      if (bVar1) {
        this_00 = (UDS_WaitCompleteDataSet *)FWeakObjectPtr::Get(&local_158);
        pUVar5 = FWeakObjectPtr::Get(&local_150);
        UDS_WaitCompleteDataSet::GetWaitCompleteDataByTwoParam
                  (this_00,(EDS_WaitCompleteType)local_148,CONCAT71((int7)((ulonglong)in_R8 >> 8),5)
                   ,(longlong)*(int *)&pUVar5[8].field_0x8);
        bVar1 = FWeakObjectPtr::IsValid(local_148);
        if (bVar1) {
          pUVar5 = FWeakObjectPtr::Get(local_148);
          TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
                    ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar5 + 1),
                     (UObject *)this);
        }
      }
    }
    else {
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 != (UDS_LogManager *)0x0) {
        pUVar4 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_VM_CharEvolveLevel::UnbindModel",0x23,Yes);
        UDS_LogManager::PrintLog
                  (pUVar4,1,Warning,local_138.Ptr,0x6f,
                   L"charInfoData is Invalid. CharEntityID : %llu");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
    }
  }
  return;
}

// Update @ 14bded150

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_CharEvolveLevel::Update(UDS_VM_CharEvolveLevel *this)

{
  int iVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  UObject *pUVar4;
  FDS_CharacterEvolvingTableRow *this_00;
  FDS_CharacterEvolvingTableRow *pFVar5;
  undefined1 auStackY_188 [32];
  FWeakObjectPtr local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  UDS_CharInfoData::GetData((ulong64)local_148);
  bVar2 = FWeakObjectPtr::IsValid(local_148);
  if (bVar2) {
    iVar1 = this->CharEvolveLevel;
    pUVar4 = FWeakObjectPtr::Get(local_148);
    this_00 = FDS_CharacterEvolvingTableRow::GetRef
                        ((longlong)(*(int *)&pUVar4[8].field_0x8 * 100 + iVar1),true);
    pFVar5 = FDS_CharacterEvolvingTableRow::ID_ReqEvolvingTable(this_00);
    UpdateEvolveLevelInfo(this,this_00,pFVar5);
    UpdateWaitCompleteData(this);
    UpdateEvolveConditionInfo(this,this_00,pFVar5);
    UpdateSkillActLevelAndPassive(this,this_00,pFVar5);
    UpdateEvolveLevelState(this);
    UpdateAnimation(this);
  }
  else {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_CharEvolveLevel::Update",0x1e,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,local_138.Ptr,0x13c,
                 L"charInfoData is Invalid. CharEntityID : %llu");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return;
}

// UpdateAnimation @ 14bded2d0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_CharEvolveLevel::UpdateAnimation(UDS_VM_CharEvolveLevel *this)

{
  FName *pFVar1;
  FName FVar2;
  FName local_res8;
  FName local_18;
  int local_10;
  
  if (this->EvolveLevelState == Complete) {
    pFVar1 = ::FName::FName(&local_res8,"Ani_Evolve_Possible_Loop");
    (this->AnimationEvent).AnimationName = *pFVar1;
    (this->AnimationEvent).AnimationEventType = StopAnimation;
    (this->AnimationEvent).NumberOfLoops = 0;
    local_10 = FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    pFVar1 = ::FName::FName(&local_res8,"Ani_Evolve_Waiting_Loop");
    (this->AnimationEvent).AnimationName = *pFVar1;
    (this->AnimationEvent).AnimationEventType = PlayForward;
  }
  else {
    if (this->EvolveLevelState == NotActivated_Ready) {
      pFVar1 = ::FName::FName(&local_res8,"Ani_Evolve_Waiting_Loop");
      (this->AnimationEvent).AnimationName = *pFVar1;
      (this->AnimationEvent).AnimationEventType = StopAnimation;
      (this->AnimationEvent).NumberOfLoops = 0;
      local_10 = FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
      local_18 = FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
      pFVar1 = ::FName::FName(&local_res8,"Ani_Evolve_Possible_Loop");
      FVar2 = *pFVar1;
      (this->AnimationEvent).AnimationEventType = PlayForward;
    }
    else {
      pFVar1 = ::FName::FName(&local_res8,"Ani_Evolve_Waiting_Loop");
      (this->AnimationEvent).AnimationName = *pFVar1;
      (this->AnimationEvent).AnimationEventType = StopAnimation;
      (this->AnimationEvent).NumberOfLoops = 0;
      local_10 = FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
      local_18 = FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
      pFVar1 = ::FName::FName(&local_res8,"Ani_Evolve_Possible_Loop");
      FVar2 = *pFVar1;
      (this->AnimationEvent).AnimationEventType = StopAnimation;
    }
    (this->AnimationEvent).AnimationName = FVar2;
  }
  (this->AnimationEvent).NumberOfLoops = 0;
  local_10 = FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// UpdateEvolveConditionInfo @ 14bdf0420

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UDS_VM_CharEvolveLevel::UpdateEvolveConditionInfo
          (UDS_VM_CharEvolveLevel *this,FDS_CharacterEvolvingTableRow *param_1,
          FDS_CharacterEvolvingTableRow *param_2)

{
  int *piVar1;
  TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> *pTVar2;
  FInstancedStruct *this_00;
  EDS_MoneyType EVar3;
  long64 lVar4;
  code *pcVar5;
  FObjectPtr_u_0 FVar6;
  FDS_ViewModelContext_MoneyDisplay *pFVar7;
  bool bVar8;
  int iVar9;
  FDS_StringBaseTableRow *pFVar10;
  FObjectPtr_u_0 *pFVar11;
  FDS_StringBaseIDFormatArg *pFVar12;
  UClass *pUVar13;
  UClass *pUVar14;
  UDS_VM_Item *pUVar15;
  UDS_UserObjectListItem *this_01;
  longlong *plVar16;
  UDS_VM_MoneyDisplay *pUVar17;
  undefined1 auStackY_1c8 [32];
  UDS_M_ItemImplBase *local_198;
  undefined8 local_190;
  TSharedPtr<FDS_ViewModelContext_MoneyDisplay,1> local_188;
  UDS_UserObjectListItem *local_178 [2];
  FName local_168;
  int local_160;
  undefined1 local_158 [72];
  longlong local_110;
  TSharedPtr<FDS_ViewModelContext,1> local_108;
  undefined1 local_f8 [8];
  TReferenceControllerBase<1> *local_f0;
  undefined1 local_e8 [8];
  TReferenceControllerBase<1> *local_e0;
  TSharedPtr<FDS_ViewModelContext,1> local_d8;
  undefined1 local_c8 [128];
  TObjectPtr<UObject>_u_0 local_48;
  
  local_48.DebugPtr = (UObject *)(__security_cookie.value ^ (ulonglong)auStackY_1c8);
  pUVar13 = (UClass *)param_1;
  bVar8 = FDS_CharacterEvolvingTableRow::IsValid(param_2);
  if (bVar8) {
    pFVar10 = FDS_CharacterEvolvingTableRow::ID_NameTable(param_1);
    FDS_Text::SetTextFromStringTable(&this->RequireCharEvolveName,pFVar10);
    local_160 = FFieldNotificationClassDescriptor::RequireCharEvolveName.BitNumber;
    local_168 = FFieldNotificationClassDescriptor::RequireCharEvolveName.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_168);
    pFVar10 = FDS_CharacterEvolvingTableRow::ID_NameTable(param_1);
    pTVar2 = &(this->RequireConditionText).FormatArgs;
    lVar4 = pFVar10->ID;
    (this->RequireConditionText).StringTableType = StringUi;
    (this->RequireConditionText).StringTableID = 0x2e632;
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)(pTVar2->AllocatorInstance).Data,
               (this->RequireConditionText).FormatArgs.ArrayNum);
    piVar1 = &(this->RequireConditionText).FormatArgs.ArrayMax;
    (this->RequireConditionText).FormatArgs.ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,&pTVar2->AllocatorInstance,0,piVar1);
    }
    iVar9 = (this->RequireConditionText).FormatArgs.ArrayNum;
    if (iVar9 == *piVar1) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x828,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->RequireConditionText).FormatArgs.ArrayNum = iVar9 + 1;
    this_00 = (FInstancedStruct *)((pTVar2->AllocatorInstance).Data + (longlong)iVar9 * 0x28);
    FInstancedStruct::FInstancedStruct(this_00);
    pFVar11 = (FObjectPtr_u_0 *)FNumberFormattingOptions::DefaultWithGrouping();
    FVar6 = pFVar11[1];
    this_00[1].ScriptStruct.field0_0x0.ObjectPtr.field0_0x0 = *pFVar11;
    this_00[1].StructMemory = (uchar *)FVar6;
    this_00[2].ScriptStruct.field0_0x0 = (TObjectPtr<UScriptStruct_const_>_u_0)pFVar11[2];
    FInstancedStruct::InitializeAs<FDS_StringBaseIDFormatArg>(this_00);
    pFVar12 = FInstancedStruct::GetMutablePtr<FDS_StringBaseIDFormatArg>(this_00);
    if (pFVar12 != (FDS_StringBaseIDFormatArg *)0x0) {
      (pFVar12->Value).ID = lVar4;
    }
    pUVar13 = (UClass *)local_158;
    local_158._8_4_ = FFieldNotificationClassDescriptor::RequireConditionText.BitNumber;
    local_158._0_4_ =
         FFieldNotificationClassDescriptor::RequireConditionText.FieldName.ComparisonIndex.Value;
    local_158._4_4_ = FFieldNotificationClassDescriptor::RequireConditionText.FieldName.Number;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,pUVar13);
  }
  if ((this->VM_EvolveMaterialItem).field0_0x0.DebugPtr == (UDS_VM_Item *)0x0) {
    local_190 = 0;
    pUVar13 = Z_Construct_UClass_UDS_VM_Item_NoRegister();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar14 = Z_Construct_UClass_UDS_VM_Item_NoRegister();
    CheckIsClassChildOf_Internal(pUVar14,pUVar13);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_c8,pUVar13);
    local_c8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_c8._56_8_ = (UPackage *)0x0;
    local_c8._16_4_ = 0;
    local_c8._20_4_ = 0;
    local_c8._24_4_ = RF_Transient;
    local_c8._40_8_ = (UObject *)0x0;
    local_c8[0x20] = false;
    local_c8._8_8_ = this;
    pUVar15 = (UDS_VM_Item *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
    if (local_c8._64_8_ != 0) {
      plVar16 = (longlong *)(local_c8 + 0x50);
      if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
        plVar16 = (longlong *)local_c8._104_8_;
      }
      pUVar13 = (UClass *)*plVar16;
      (*(code *)pUVar13->_padding_)();
    }
    if (pUVar15 != (UDS_VM_Item *)0x0) {
      *(undefined1 *)((longlong)&pUVar15->_padding_ + 4) = 0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar15 != (UDS_VM_Item *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar15);
    }
    (this->VM_EvolveMaterialItem).field0_0x0.DebugPtr = pUVar15;
  }
  FDS_EntryBindingEventField::Reset(&this->EntryBindingEventField_MaterialItem);
  if ((this->VM_EvolveMaterialItem).field0_0x0.DebugPtr != (UDS_VM_Item *)0x0) {
    this_01 = NewObject<UDS_UserObjectListItem>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this_01 != (UDS_UserObjectListItem *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this_01);
    }
    DS_ItemDataUtil::CreateItemModel
              ((EDS_ItemSlotStateType)&local_198,(int)CONCAT71((int7)((ulonglong)pUVar13 >> 8),0xd))
    ;
    if (local_198 != (UDS_M_ItemImplBase *)0x0) {
      UDS_M_ItemImplBase::SetQuantity(local_198,param_1->ReqItemCnt);
      pUVar15 = (this->VM_EvolveMaterialItem).field0_0x0.DebugPtr;
      plVar16 = (longlong *)(**(code **)(local_198->_padding_ + 0x310))(local_198,local_f8);
      local_158._64_8_ = *plVar16;
      local_110 = plVar16[1];
      if (local_110 != 0) {
        LOCK();
        *(int *)(local_110 + 8) = *(int *)(local_110 + 8) + 1;
        UNLOCK();
      }
      UDS_ViewModelBase::SetContext
                ((UDS_ViewModelBase *)pUVar15,
                 (TSharedPtr<FDS_ViewModelContext,1> *)(local_158 + 0x40));
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_f0);
      local_158._24_4_ = FFieldNotificationClassDescriptor::VM_EvolveMaterialItem.BitNumber;
      local_158._16_4_ =
           FFieldNotificationClassDescriptor::VM_EvolveMaterialItem.FieldName.ComparisonIndex.Value;
      local_158._20_4_ = FFieldNotificationClassDescriptor::VM_EvolveMaterialItem.FieldName.Number;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,local_158 + 0x10);
      if (this_01 != (UDS_UserObjectListItem *)0x0) {
        plVar16 = (longlong *)(**(code **)(local_198->_padding_ + 0x310))(local_198,local_e8);
        local_108.Object = (FDS_ViewModelContext *)*plVar16;
        local_108.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)plVar16[1];
        if (local_108.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_108.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_108.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        UDS_UserObjectListItem::AddContext(this_01,&local_108);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_e0);
        local_178[0] = this_01;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this_01);
        }
        FDS_EntryBindingEventField::Add
                  (&this->EntryBindingEventField_MaterialItem,
                   (TObjectPtr<UDS_UserObjectListItem>)local_178);
      }
    }
  }
  local_158._40_4_ =
       FFieldNotificationClassDescriptor::EntryBindingEventField_MaterialItem.BitNumber;
  local_158._32_4_ =
       FFieldNotificationClassDescriptor::EntryBindingEventField_MaterialItem.FieldName.
       ComparisonIndex.Value;
  local_158._36_4_ =
       FFieldNotificationClassDescriptor::EntryBindingEventField_MaterialItem.FieldName.Number;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,local_158 + 0x20);
  if ((this->VM_EvolveMoney).field0_0x0.DebugPtr == (UDS_VM_MoneyDisplay *)0x0) {
    pUVar17 = UDS_ViewModelBase::CreateViewModel<UDS_VM_MoneyDisplay>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar17 != (UDS_VM_MoneyDisplay *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar17);
    }
    (this->VM_EvolveMoney).field0_0x0.DebugPtr = pUVar17;
    if (pUVar17 == (UDS_VM_MoneyDisplay *)0x0) {
      return;
    }
  }
  MakeContext<FDS_ViewModelContext_MoneyDisplay>(&local_188);
  pFVar7 = local_188.Object;
  if (local_188.Object != (FDS_ViewModelContext_MoneyDisplay *)0x0) {
    EVar3 = param_1->ReqMoneyType;
    if ((local_188.Object == (FDS_ViewModelContext_MoneyDisplay *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar7->MoneyId = (ulonglong)EVar3;
    pFVar7->Quantity = param_1->ReqMoneyValue;
    pUVar17 = (this->VM_EvolveMoney).field0_0x0.DebugPtr;
    local_d8.Object = (FDS_ViewModelContext *)local_188.Object;
    local_d8.SharedReferenceCount.ReferenceController =
         local_188.SharedReferenceCount.ReferenceController;
    if (local_188.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_188.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_188.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar17,&local_d8);
    local_158._56_4_ = FFieldNotificationClassDescriptor::VM_EvolveMoney.BitNumber;
    local_158._48_4_ =
         FFieldNotificationClassDescriptor::VM_EvolveMoney.FieldName.ComparisonIndex.Value;
    local_158._52_4_ = FFieldNotificationClassDescriptor::VM_EvolveMoney.FieldName.Number;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,local_158 + 0x30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_188.SharedReferenceCount.ReferenceController);
  return;
}

// UpdateEvolveLevelInfo @ 14bdf08e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_CharEvolveLevel::UpdateEvolveLevelInfo
          (UDS_VM_CharEvolveLevel *this,FDS_CharacterEvolvingTableRow *param_1,
          FDS_CharacterEvolvingTableRow *param_2)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  FName FVar5;
  FDS_CharacterEvolvingTableRow *pFVar6;
  FDS_ViewModelContext_StatusUpgradeInfo *pFVar7;
  FSharedReferencer<1> FVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  UDS_LogManager *pUVar12;
  UObject *pUVar13;
  FDS_CharacterBaseTableRow *this_00;
  FDS_StringBaseTableRow *pFVar14;
  FDS_StatusTableRow *this_01;
  UDS_UserObjectListItem *pUVar15;
  uint uVar16;
  longlong *plVar17;
  uint uVar18;
  longlong lVar19;
  atomic<int> *paVar20;
  undefined1 auStackY_388 [32];
  FWeakObjectPtr local_348;
  FDS_CharacterEvolvingTableRow *local_340;
  TSharedPtr<FDS_ViewModelContext_StatusUpgradeInfo,1> local_338;
  UDS_VM_CharEvolveLevel *local_328;
  UDS_UserObjectListItem *local_320;
  FDS_EntryBindingEventField *local_318;
  longlong local_310;
  FDS_CharacterEvolvingTableRow *local_308;
  longlong *local_300;
  FName local_2f8;
  int local_2f0;
  FName local_2e8;
  int local_2e0;
  FName local_2d8;
  int local_2d0;
  FName local_2c8;
  int local_2c0;
  FName local_2b8;
  int local_2b0;
  FName local_2a8;
  int local_2a0;
  FName local_298;
  int local_290;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_388;
  plVar17 = &this->_padding_;
  local_2f0 = FFieldNotificationClassDescriptor::IsValidEvolveLevel.BitNumber;
  local_2f8 = FFieldNotificationClassDescriptor::IsValidEvolveLevel.FieldName;
  local_340 = param_2;
  local_328 = this;
  local_308 = param_1;
  local_300 = plVar17;
  (**(code **)(*plVar17 + 0x38))(plVar17,&local_2f8);
  bVar9 = FDS_CharacterEvolvingTableRow::IsValid(param_1);
  iVar11 = FFieldNotificationClassDescriptor::EvolveIconID.BitNumber;
  FVar5 = FFieldNotificationClassDescriptor::EvolveIconID.FieldName;
  if (bVar9) {
    if (this->EvolveIconID != param_1->ID_Icon) {
      this->EvolveIconID = param_1->ID_Icon;
      local_2e0 = iVar11;
      local_2e8 = FVar5;
      (**(code **)(*plVar17 + 0x38))(plVar17,&local_2e8);
    }
    this->IsCharMaxEvolveLevel = false;
    if (this->CharEntityID != 0) {
      UDS_CharInfoData::GetData((ulong64)&local_348);
      bVar9 = FWeakObjectPtr::IsValid(&local_348);
      if (!bVar9) {
        pUVar12 = UDS_LogManager::GetInst();
        if (pUVar12 != (UDS_LogManager *)0x0) {
          pUVar12 = UDS_LogManager::GetInst();
          local_288._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_288,"UDS_VM_CharEvolveLevel::UpdateEvolveLevelInfo",0x2d,Yes);
          UDS_LogManager::PrintLog
                    (pUVar12,1,Warning,local_288.Ptr,0x220,
                     L"charInfoData is Invalid. CharEntityID : %llu");
          if ((void *)local_288._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_288._padding_);
          }
        }
        pUVar13 = FWeakObjectPtr::Get(&local_348);
        this_00 = FDS_CharacterBaseTableRow::GetRef((longlong)*(int *)&pUVar13[8].field_0x8,true);
        bVar9 = FDS_CharacterBaseTableRow::IsValid(this_00);
        if (bVar9) {
          pUVar13 = FWeakObjectPtr::Get(&local_348);
          this->IsCharMaxEvolveLevel = this_00->MaxEvolution <= *(int *)&pUVar13[0xd].field_0x14;
        }
      }
      plVar17 = &this->_padding_;
      local_2d0 = FFieldNotificationClassDescriptor::IsCharMaxEvolveLevel.BitNumber;
      local_2d8 = FFieldNotificationClassDescriptor::IsCharMaxEvolveLevel.FieldName;
      (**(code **)(*plVar17 + 0x38))(plVar17,&local_2d8);
      pFVar14 = FDS_CharacterEvolvingTableRow::ID_NameTable(param_1);
      FDS_Text::SetTextFromStringTable(&this->CharEvolveName,StringBase,pFVar14->ID);
      local_2c0 = FFieldNotificationClassDescriptor::CharEvolveName.BitNumber;
      local_2c8 = FFieldNotificationClassDescriptor::CharEvolveName.FieldName;
      (**(code **)(*plVar17 + 0x38))(plVar17,&local_2c8);
      FDS_Text::SetTextFromSec
                (&this->CharEvolveProcessTime,param_1->EvolveProcessTime,DayHourSec,false);
      local_2b0 = FFieldNotificationClassDescriptor::CharEvolveProcessTime.BitNumber;
      local_2b8 = FFieldNotificationClassDescriptor::CharEvolveProcessTime.FieldName;
      (**(code **)(*plVar17 + 0x38))(plVar17,&local_2b8);
      local_2a0 = FFieldNotificationClassDescriptor::IsRequireEvolveActivated.BitNumber;
      local_2a8 = FFieldNotificationClassDescriptor::IsRequireEvolveActivated.FieldName;
      (**(code **)(*plVar17 + 0x38))(plVar17,&local_2a8);
      local_318 = &this->EntryBindingEventField_StatusUpgrade;
      FDS_EntryBindingEventField::Reset(local_318);
      local_310 = (longlong)(param_1->StatusType).ArrayNum;
      uVar18 = 0;
      if (0 < local_310) {
        lVar19 = 0;
        do {
          uVar16 = ~uVar18 >> 0x1f;
          uVar10 = 0;
          if ((int)uVar18 < (param_1->StatusType).ArrayNum) {
            uVar10 = uVar16;
          }
          if ((uVar10 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar11 = *(int *)((param_1->StatusType).AllocatorInstance.Data + lVar19 * 4);
          uVar10 = 0;
          if ((int)uVar18 < (param_1->StatusValue).ArrayNum) {
            uVar10 = uVar16;
          }
          if ((uVar10 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar2 = *(int *)((param_1->StatusValue).AllocatorInstance.Data + lVar19 * 4);
          this_01 = FDS_StatusTableRow::GetRef((longlong)iVar11,true);
          bVar9 = FDS_StatusTableRow::IsValid(this_01);
          if (bVar9) {
            MakeContext<FDS_ViewModelContext_StatusUpgradeInfo>(&local_338);
            pFVar7 = local_338.Object;
            if ((local_338.Object == (FDS_ViewModelContext_StatusUpgradeInfo *)0x0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar9)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            *(undefined4 *)&pFVar7->_padding_ = 0x1b9;
            pFVar7->StatusIconID = this_01->ID_StatusIcon;
            pFVar14 = FDS_StatusTableRow::ID_StatusNameTable(this_01);
            pFVar7->StatusNameID = pFVar14->ID;
            bVar9 = FDS_CharacterEvolvingTableRow::IsValid(local_340);
            pFVar6 = local_340;
            if (bVar9) {
              uVar10 = 0;
              if ((int)uVar18 < (local_340->StatusValue).ArrayNum) {
                uVar10 = uVar16;
              }
              if ((uVar10 == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              iVar11 = *(int *)((pFVar6->StatusValue).AllocatorInstance.Data + lVar19 * 4);
              if ((pFVar7 == (FDS_ViewModelContext_StatusUpgradeInfo *)0x0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar9)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              pFVar6 = local_340;
              pFVar7->IsUpagade = iVar11 < iVar2;
              uVar10 = 0;
              if ((int)uVar18 < (local_340->StatusValue).ArrayNum) {
                uVar10 = uVar16;
              }
              if ((uVar10 == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              iVar11 = *(int *)((pFVar6->StatusValue).AllocatorInstance.Data + lVar19 * 4);
              if ((pFVar7 == (FDS_ViewModelContext_StatusUpgradeInfo *)0x0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar9)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              pFVar7->BeforeStatusValue = iVar11;
              pFVar7->IsNew = false;
              this = local_328;
            }
            else {
              pFVar7->IsUpagade = false;
              pFVar7->IsNew = true;
            }
            pFVar7->AfterStatusValue = iVar2;
            pFVar7->FormatType = this_01->InfoViewValueFormat;
            pUVar15 = NewObject<UDS_UserObjectListItem>((UObject *)this);
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (pUVar15 != (UDS_UserObjectListItem *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)pUVar15);
            }
            FVar8.ReferenceController = local_338.SharedReferenceCount.ReferenceController;
            if (local_338.SharedReferenceCount.ReferenceController ==
                (TReferenceControllerBase<1> *)0x0) {
              paVar20 = (atomic<int> *)&DAT_00000008;
            }
            else {
              paVar20 = &(local_338.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
              LOCK();
              *paVar20 = (atomic<int>)((int)*paVar20 + 1);
              UNLOCK();
            }
            iVar11 = (pUVar15->ViewModelContextArray).ArrayNum;
            piVar1 = &(pUVar15->ViewModelContextArray).ArrayMax;
            if (iVar11 == *piVar1) {
              iVar11 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,&(pUVar15->ViewModelContextArray).AllocatorInstance,piVar1);
            }
            (pUVar15->ViewModelContextArray).ArrayNum = iVar11 + 1;
            pFVar3 = (pUVar15->ViewModelContextArray).AllocatorInstance.Data;
            *(FDS_ViewModelContext_StatusUpgradeInfo **)(pFVar3 + (longlong)iVar11 * 0x10) = pFVar7;
            *(TReferenceControllerBase<1> **)(pFVar3 + (longlong)iVar11 * 0x10 + 8) =
                 FVar8.ReferenceController;
            if (FVar8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              *paVar20 = (atomic<int>)((int)*paVar20 + 1);
              UNLOCK();
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (FVar8.ReferenceController);
            local_320 = pUVar15;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (pUVar15 != (UDS_UserObjectListItem *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)pUVar15);
            }
            FDS_EntryBindingEventField::Add
                      (local_318,(TObjectPtr<UDS_UserObjectListItem>)&local_320);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (FVar8.ReferenceController);
            this = local_328;
          }
          else {
            pUVar12 = UDS_LogManager::GetInst();
            if (pUVar12 != (UDS_LogManager *)0x0) {
              pUVar12 = UDS_LogManager::GetInst();
              local_168._padding_ = 0;
              TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                        (&local_168,"UDS_VM_CharEvolveLevel::UpdateEvolveLevelInfo",0x2d,Yes);
              UDS_LogManager::PrintLog
                        (pUVar12,1,Warning,local_168.Ptr,0x23d,L"statusTableRow is Invalid.");
              if ((void *)local_168._padding_ != (void *)0x0) {
                FMemory::Free((void *)local_168._padding_);
              }
            }
            bVar9 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_3446111784979660226>,false,
                               "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_CharEvolveLevel.cpp"
                               ,0x23e,"false");
            if (bVar9) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          uVar18 = uVar18 + 1;
          lVar19 = lVar19 + 1;
          plVar17 = local_300;
          param_1 = local_308;
        } while (lVar19 < local_310);
      }
      local_290 = FFieldNotificationClassDescriptor::EntryBindingEventField_StatusUpgrade.BitNumber;
      local_298 = FFieldNotificationClassDescriptor::EntryBindingEventField_StatusUpgrade.FieldName;
      (**(code **)(*plVar17 + 0x38))(plVar17,&local_298);
    }
  }
  else {
    UpdateEvolveLevelState(this);
  }
  return;
}

// UpdateEvolveLevelState @ 14bdf1010

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_CharEvolveLevel::UpdateEvolveLevelState(UDS_VM_CharEvolveLevel *this)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UObject *pUVar3;
  UDS_WaitCompleteDataSet *this_00;
  UDS_WaitCompleteData *this_01;
  EDS_CharEvolveLevelState EVar4;
  undefined8 in_R8;
  undefined1 auStackY_1a8 [32];
  FName local_168;
  int local_160;
  FWeakObjectPtr local_158;
  FWeakObjectPtr local_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if (this->CharEntityID != 0) {
    UDS_CharInfoData::GetData((ulong64)&local_158);
    bVar1 = FWeakObjectPtr::IsValid(&local_158);
    if (bVar1) {
      if (this->CharEvolveLevel < 1) {
        EVar4 = None;
      }
      else {
        pUVar3 = FWeakObjectPtr::Get(&local_158);
        if (*(int *)&pUVar3[0xd].field_0x14 < this->CharEvolveLevel) {
          TDS_DataSetGetter<UDS_WaitCompleteDataSet>::Get((ulong64)&local_150);
          bVar1 = FWeakObjectPtr::IsValid(&local_150);
          if (!bVar1) {
            pUVar2 = UDS_LogManager::GetInst();
            if (pUVar2 != (UDS_LogManager *)0x0) {
              pUVar2 = UDS_LogManager::GetInst();
              local_148._padding_ = 0;
              TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                        (&local_148,"UDS_VM_CharEvolveLevel::UpdateEvolveLevelState",0x2e,Yes);
              UDS_LogManager::PrintLog
                        (pUVar2,1,Warning,local_148.Ptr,0x166,L"waitCompleteDataSet is Invalid.");
              if ((void *)local_148._padding_ != (void *)0x0) {
                FMemory::Free((void *)local_148._padding_);
              }
            }
            this->EvolveLevelState = NotActivated;
            return;
          }
          this_00 = (UDS_WaitCompleteDataSet *)FWeakObjectPtr::Get(&local_150);
          pUVar3 = FWeakObjectPtr::Get(&local_158);
          UDS_WaitCompleteDataSet::GetWaitCompleteDataByTwoParam
                    (this_00,(EDS_WaitCompleteType)&local_168,
                     CONCAT71((int7)((ulonglong)in_R8 >> 8),5),
                     (longlong)*(int *)&pUVar3[8].field_0x8);
          bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&local_168);
          if (bVar1) {
            this_01 = (UDS_WaitCompleteData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&local_168);
            bVar1 = UDS_WaitCompleteData::IsComplete(this_01);
            EVar4 = bVar1 + Progressing;
          }
          else {
            bVar1 = IsRequireEvolveActivated(this);
            EVar4 = bVar1 + NotActivated;
          }
        }
        else {
          EVar4 = Activated;
        }
      }
      this->EvolveLevelState = EVar4;
      local_160 = FFieldNotificationClassDescriptor::IsEvolveReady.BitNumber;
      local_168 = FFieldNotificationClassDescriptor::IsEvolveReady.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_168);
      local_160 = FFieldNotificationClassDescriptor::IsProgressingEvolve.BitNumber;
      local_168 = FFieldNotificationClassDescriptor::IsProgressingEvolve.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_168);
      local_160 = FFieldNotificationClassDescriptor::IsProgressCompleteEvolve.BitNumber;
      local_168 = FFieldNotificationClassDescriptor::IsProgressCompleteEvolve.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_168);
      local_160 = FFieldNotificationClassDescriptor::IsActivatedEvolve.BitNumber;
      local_168 = FFieldNotificationClassDescriptor::IsActivatedEvolve.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_168);
      local_160 = FFieldNotificationClassDescriptor::CharEvolveLevelState.BitNumber;
      local_168 = FFieldNotificationClassDescriptor::CharEvolveLevelState.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_168);
      local_160 = FFieldNotificationClassDescriptor::CharEvolveLevelConditionIndex.BitNumber;
      local_168 = FFieldNotificationClassDescriptor::CharEvolveLevelConditionIndex.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_168);
      local_160 = FFieldNotificationClassDescriptor::CharEvolveSituationIndex.BitNumber;
      local_168 = FFieldNotificationClassDescriptor::CharEvolveSituationIndex.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_168);
      local_160 = FFieldNotificationClassDescriptor::CharEvolveSituationText.BitNumber;
      local_168 = FFieldNotificationClassDescriptor::CharEvolveSituationText.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_168);
    }
    else {
      pUVar2 = UDS_LogManager::GetInst();
      if (pUVar2 != (UDS_LogManager *)0x0) {
        pUVar2 = UDS_LogManager::GetInst();
        local_148._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"UDS_VM_CharEvolveLevel::UpdateEvolveLevelState",0x2e,Yes);
        UDS_LogManager::PrintLog
                  (pUVar2,1,Warning,local_148.Ptr,0x156,
                   L"charInfoData is Invalid. CharEntityID : %llu");
        if ((void *)local_148._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_148._padding_);
        }
      }
      this->EvolveLevelState = None;
    }
  }
  return;
}

// UpdateSkillActLevelAndPassive @ 14bdf4fb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UDS_VM_CharEvolveLevel::UpdateSkillActLevelAndPassive
          (UDS_VM_CharEvolveLevel *this,FDS_CharacterEvolvingTableRow *param_1,
          FDS_CharacterEvolvingTableRow *param_2)

{
  int *piVar1;
  code *pcVar2;
  UDS_VM_CharEvolveLevel *pUVar3;
  FDS_ViewModelContext_SkillPassive *pFVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  UDS_LogManager *pUVar11;
  UObject *pUVar12;
  FDS_CharacterBaseTableRow *this_00;
  FDS_SkillTableRow *this_01;
  FDS_SkillActLevelTableRow *this_02;
  FDS_SkillActLevelTableRow *pFVar13;
  UDS_UserObjectListItem *pUVar14;
  FDS_ViewModelContext *pFVar15;
  FDS_ViewModelContext *pFVar16;
  UScriptStruct *pUVar17;
  UDS_ViewModelContextManager *this_03;
  FDS_SkillPassiveTableRow *pFVar18;
  UClass *pUVar19;
  longlong *plVar20;
  longlong lVar21;
  FScriptContainerElement *pFVar22;
  FDS_ViewModelContext *pFVar23;
  undefined1 uVar24;
  FSharedReferencer<1> FVar25;
  uint uVar26;
  ForAnyElementType FVar27;
  uint uVar28;
  atomic<int> *paVar30;
  FDS_CharacterEvolvingTableRow *pFVar31;
  undefined1 auStackY_2d8 [32];
  undefined1 local_298;
  TArray<int,TSizedDefaultAllocator<32>_> local_290;
  undefined1 local_280;
  undefined1 local_27f [3];
  uint local_27c;
  FScriptContainerElement *local_278;
  FDS_CharacterEvolvingTableRow *local_270;
  FDS_CharacterEvolvingTableRow *local_268;
  UDS_VM_CharEvolveLevel *local_260;
  FWeakObjectPtr local_258;
  FDS_EntryBindingEventField *local_250;
  TSharedPtr<FDS_ViewModelContext_SkillPassive,1> local_248;
  UDS_UserObjectListItem *local_238;
  FDS_SkillPassiveTableRow *local_230;
  FScriptContainerElement *local_228;
  UObject *local_220;
  longlong local_218;
  FName local_208;
  int local_200;
  TSharedPtr<FDS_ViewModelContext,1> local_1f8;
  undefined1 local_1e8 [128];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  FDS_ViewModelContext *pFVar29;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  local_270 = param_1;
  local_268 = param_2;
  local_260 = this;
  UDS_CharInfoData::GetData((ulong64)&local_258);
  bVar6 = FWeakObjectPtr::IsValid(&local_258);
  if (bVar6) {
    local_250 = &this->EntryBindingEventField_Passive;
    FDS_EntryBindingEventField::Reset(local_250);
    local_290.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_290.ArrayNum = 0;
    local_290.ArrayMax = 0;
    pUVar12 = FWeakObjectPtr::Get(&local_258);
    this_00 = FDS_CharacterBaseTableRow::GetRef((longlong)*(int *)&pUVar12[8].field_0x8,true);
    bVar6 = FDS_CharacterBaseTableRow::IsValid(this_00);
    if (bVar6) {
      iVar8 = local_290.ArrayNum;
      if (local_290.ArrayNum == local_290.ArrayMax) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&local_290.AllocatorInstance,&local_290.ArrayMax);
      }
      *(int *)(local_290.AllocatorInstance.Data + (longlong)iVar8 * 4) = this_00->ID_NormalSkill;
      local_290.ArrayNum = iVar8 + 1;
      TArray<int,TSizedDefaultAllocator<32>_>::Append<int,TSizedDefaultAllocator<32>_>
                (&local_290,&this_00->ID_DefaultSkill);
      if (local_290.ArrayNum == local_290.ArrayMax) {
        local_290.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x404,&local_290.AllocatorInstance,&local_290.ArrayMax);
      }
      iVar8 = local_290.ArrayNum + 1;
      *(int *)(local_290.AllocatorInstance.Data + (longlong)local_290.ArrayNum * 4) =
           this_00->ID_TraitSkill;
      if (iVar8 == local_290.ArrayMax) {
        local_290.ArrayNum = iVar8;
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&local_290.AllocatorInstance,&local_290.ArrayMax);
      }
      local_290.ArrayNum = iVar8 + 1;
      *(int *)(local_290.AllocatorInstance.Data + (longlong)iVar8 * 4) = this_00->ID_SpecialSkill;
      if (local_290.ArrayNum == local_290.ArrayMax) {
        local_290.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x404,&local_290.AllocatorInstance,&local_290.ArrayMax);
      }
      iVar8 = local_290.ArrayNum + 1;
      *(int *)(local_290.AllocatorInstance.Data + (longlong)local_290.ArrayNum * 4) =
           this_00->ID_JumpSkill;
      if (iVar8 == local_290.ArrayMax) {
        local_290.ArrayNum = iVar8;
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&local_290.AllocatorInstance,&local_290.ArrayMax);
      }
      local_290.ArrayNum = iVar8 + 1;
      *(int *)(local_290.AllocatorInstance.Data + (longlong)iVar8 * 4) = this_00->ID_AirDashSkill;
      TArray<int,TSizedDefaultAllocator<32>_>::Append<int,TSizedDefaultAllocator<32>_>
                (&local_290,&this_00->ID_SKillList);
      if (local_290.ArrayNum == local_290.ArrayMax) {
        local_290.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x404,&local_290.AllocatorInstance,&local_290.ArrayMax);
      }
      lVar21 = (longlong)local_290.ArrayNum;
      local_290.ArrayNum = local_290.ArrayNum + 1;
      *(int *)(local_290.AllocatorInstance.Data + lVar21 * 4) = this_00->ID_NotInputRoll;
    }
    iVar8 = local_290.ArrayNum;
    pFVar22 = local_290.AllocatorInstance.Data + (longlong)local_290.ArrayNum * 4;
    FVar27.Data = local_290.AllocatorInstance.Data;
    local_278 = pFVar22;
    while( true ) {
      if (local_290.ArrayNum != iVar8) {
        local_280 = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_280);
      }
      if (FVar27.Data == pFVar22) break;
      if (*(int *)FVar27.Data != 0) {
        this_01 = FDS_SkillTableRow::GetRef((longlong)*(int *)FVar27.Data,true);
        bVar6 = FDS_SkillTableRow::IsValid(this_01);
        if (bVar6) {
          iVar9 = this_01->ID_SkillActLevelGroup;
          this_02 = FDS_SkillActLevelTableRow::GetSkillActLevelByEvolveLevel
                              (iVar9,this->CharEvolveLevel);
          bVar6 = FDS_SkillActLevelTableRow::IsValid(this_02);
          pFVar22 = local_278;
          if (bVar6) {
            bVar6 = false;
            if ((0 < this_02->SkillLevel) &&
               (bVar7 = FDS_CharacterEvolvingTableRow::IsValid(param_2), bVar7)) {
              pFVar13 = FDS_SkillActLevelTableRow::GetSkillActLevelByEvolveLevel
                                  (iVar9,param_2->EvolveLevel);
              iVar9 = (this_02->ID_AttackLink).ArrayNum;
              if ((iVar9 != (pFVar13->ID_AttackLink).ArrayNum) ||
                 ((iVar9 != 0 &&
                  (iVar9 = memcmp((this_02->ID_AttackLink).AllocatorInstance.Data,
                                  (pFVar13->ID_AttackLink).AllocatorInstance.Data,
                                  (longlong)iVar9 << 2), iVar9 != 0)))) {
                bVar6 = true;
              }
            }
            MakeContext<FDS_ViewModelContext_SkillPassive>(&local_248);
            pFVar4 = local_248.Object;
            FVar25.ReferenceController = local_248.SharedReferenceCount.ReferenceController;
            if (local_248.Object != (FDS_ViewModelContext_SkillPassive *)0x0) {
              if ((local_248.Object == (FDS_ViewModelContext_SkillPassive *)0x0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar7)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              *(undefined4 *)&pFVar4->_padding_ = 399;
              pFVar4->PassiveState = SkillActLevel;
              pFVar4->SkillID = this_01->ID;
              pFVar4->SkillActLevelID = this_02->ID;
              pFVar4->IsEnhance = bVar6;
              pUVar14 = NewObject<UDS_UserObjectListItem>((UObject *)local_260);
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (pUVar14 != (UDS_UserObjectListItem *)0x0)) {
                UE::GC::MarkAsReachable((UObject *)pUVar14);
              }
              FVar25.ReferenceController = local_248.SharedReferenceCount.ReferenceController;
              if (local_248.SharedReferenceCount.ReferenceController ==
                  (TReferenceControllerBase<1> *)0x0) {
                paVar30 = (atomic<int> *)&DAT_00000008;
              }
              else {
                paVar30 = &(local_248.SharedReferenceCount.ReferenceController)->
                           SharedReferenceCount;
                LOCK();
                *paVar30 = (atomic<int>)((int)*paVar30 + 1);
                UNLOCK();
              }
              iVar9 = (pUVar14->ViewModelContextArray).ArrayNum;
              piVar1 = &(pUVar14->ViewModelContextArray).ArrayMax;
              if (iVar9 == *piVar1) {
                iVar9 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x810,&(pUVar14->ViewModelContextArray).AllocatorInstance,piVar1)
                ;
              }
              (pUVar14->ViewModelContextArray).ArrayNum = iVar9 + 1;
              pFVar22 = (pUVar14->ViewModelContextArray).AllocatorInstance.Data;
              *(FDS_ViewModelContext_SkillPassive **)(pFVar22 + (longlong)iVar9 * 0x10) = pFVar4;
              *(TReferenceControllerBase<1> **)(pFVar22 + (longlong)iVar9 * 0x10 + 8) =
                   FVar25.ReferenceController;
              if (FVar25.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                *paVar30 = (atomic<int>)((int)*paVar30 + 1);
                UNLOCK();
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (FVar25.ReferenceController);
              local_238 = pUVar14;
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (pUVar14 != (UDS_UserObjectListItem *)0x0)) {
                UE::GC::MarkAsReachable((UObject *)pUVar14);
              }
              FDS_EntryBindingEventField::Add
                        (local_250,(TObjectPtr<UDS_UserObjectListItem>)&local_238);
              param_2 = local_268;
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (FVar25.ReferenceController);
            pFVar22 = local_278;
            this = local_260;
          }
        }
      }
      FVar27.Data = FVar27.Data + 4;
    }
    uVar28 = 0;
    pFVar29 = (FDS_ViewModelContext *)0x0;
    local_27c = 0;
    local_218 = (longlong)(local_270->ID_Passive).ArrayNum;
    if (0 < local_218) {
      local_278 = (FScriptContainerElement *)0x0;
      pFVar23 = pFVar29;
      pFVar31 = local_270;
LAB_14bdf5492:
      uVar26 = (uint)pFVar23;
      pFVar15 = ::operator_new(0x38);
      pFVar23 = pFVar29;
      if (pFVar15 != (FDS_ViewModelContext *)0x0) {
        *(undefined8 *)&pFVar15->ViewModelTemplateKey = 0;
        *(undefined8 *)((longlong)&pFVar15[1]._padding_ + 4) = 0;
        pFVar15[1].ViewModelName.Number = 0;
        *(undefined8 *)&pFVar15->DerivedStaticStruct = 0;
        (pFVar15->ViewModelName).ComparisonIndex = 0;
        (pFVar15->ViewModelName).Number = 0;
        pFVar15->_padding_ = (longlong)&___7FDS_ViewModelContext_SkillPassive__6B_;
        *(undefined4 *)&pFVar15[1]._padding_ = 0;
        *(undefined8 *)((atomic<int> *)&pFVar15[1].DerivedStaticStruct + 1) = 0;
        pFVar23 = pFVar15;
      }
      pFVar16 = ::operator_new(0x20);
      pFVar15 = pFVar29;
      if (pFVar16 != (FDS_ViewModelContext *)0x0) {
        *(code **)&(pFVar16->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
        *(atomic<int> *)&pFVar16->DerivedStaticStruct = (atomic<int>)0x1;
        ((atomic<int> *)&pFVar16->DerivedStaticStruct)[1] = (atomic<int>)0x1;
        pFVar16->_padding_ =
             (longlong)
             &
             ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_SkillPassive__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
        ;
        *(FDS_ViewModelContext **)&pFVar16->ViewModelTemplateKey = pFVar23;
        pFVar15 = pFVar16;
      }
      if ((pFVar23 == (FDS_ViewModelContext *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pUVar17 = FDS_ViewModelContext_SkillPassive::StaticStruct();
      *(UScriptStruct **)&pFVar23->DerivedStaticStruct = pUVar17;
      this_03 = UDS_ViewModelContextManager::GetInst();
      if (this_03 != (UDS_ViewModelContextManager *)0x0) {
        if (pFVar15 != (FDS_ViewModelContext *)0x0) {
          LOCK();
          *(atomic<int> *)&pFVar15->DerivedStaticStruct =
               (atomic<int>)((int)*(atomic<int> *)&pFVar15->DerivedStaticStruct + 1);
          UNLOCK();
        }
        local_1f8.Object = pFVar23;
        local_1f8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar15;
        UDS_ViewModelContextManager::RegisterContext(this_03,&local_1f8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1f8.SharedReferenceCount.ReferenceController);
      }
      uVar24 = 0;
      local_298 = 1;
      uVar10 = uVar28;
      if ((int)uVar26 < (pFVar31->ID_Passive).ArrayNum) {
        uVar10 = ~uVar26 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_230 = FDS_SkillPassiveTableRow::GetRef
                            ((longlong)
                             *(int *)((local_270->ID_Passive).AllocatorInstance.Data +
                                     (longlong)local_278 * 4),true);
      bVar6 = FDS_CharacterEvolvingTableRow::IsValid(local_268);
      if (bVar6) {
        pFVar22 = (local_268->ID_Passive).AllocatorInstance.Data;
        iVar8 = (local_268->ID_Passive).ArrayNum;
        local_228 = pFVar22 + (longlong)iVar8 * 4;
        do {
          pFVar5 = local_228;
          if ((local_268->ID_Passive).ArrayNum != iVar8) {
            local_27f[0] = 0;
            `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_27f);
          }
          if (pFVar22 == pFVar5) {
            uVar24 = 0;
            uVar26 = local_27c;
            goto LAB_14bdf56ca;
          }
          iVar9 = *(int *)pFVar22;
          pFVar18 = FDS_SkillPassiveTableRow::GetRef((longlong)iVar9,true);
          if (local_230->ContentsSubValue == pFVar18->ContentsSubValue) {
            local_298 = 0;
            uVar10 = uVar28;
            if ((int)local_27c < (local_270->ID_Passive).ArrayNum) {
              uVar10 = ~uVar26 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            if (*(int *)((local_270->ID_Passive).AllocatorInstance.Data + (longlong)local_278 * 4)
                != iVar9) goto LAB_14bdf56ae;
          }
          pFVar22 = pFVar22 + 4;
        } while( true );
      }
      local_298 = 1;
      goto LAB_14bdf56ca;
    }
LAB_14bdf5868:
    local_200 = FFieldNotificationClassDescriptor::EntryBindingEventField_Passive.BitNumber;
    local_208 = FFieldNotificationClassDescriptor::EntryBindingEventField_Passive.FieldName;
    (**(code **)(local_260->_padding_ + 0x38))(&local_260->_padding_,&local_208);
    FVar27.Data = local_290.AllocatorInstance.Data;
  }
  else {
    pUVar11 = UDS_LogManager::GetInst();
    if (pUVar11 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar11 = UDS_LogManager::GetInst();
    local_168._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_168,"UDS_VM_CharEvolveLevel::UpdateSkillActLevelAndPassive",0x35,Yes);
    UDS_LogManager::PrintLog
              (pUVar11,1,Warning,local_168.Ptr,0x199,L"charInfoData is Invalid. CharEntityID : %llu"
              );
    FVar27.Data = (FScriptContainerElement *)local_168._padding_;
  }
  if (FVar27.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar27.Data);
  }
  return;
LAB_14bdf56ae:
  uVar24 = 1;
  local_298 = 0;
  uVar26 = local_27c;
LAB_14bdf56ca:
  pFVar31 = local_270;
  pFVar23->ViewModelTemplateKey = SkillPassive;
  *(undefined4 *)((longlong)&pFVar23[1]._padding_ + 4) = 0;
  uVar10 = uVar28;
  if ((int)uVar26 < (local_270->ID_Passive).ArrayNum) {
    uVar10 = ~uVar26 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pUVar3 = local_260;
  *(undefined4 *)&pFVar23[1]._padding_ =
       *(undefined4 *)((pFVar31->ID_Passive).AllocatorInstance.Data + (longlong)local_278 * 4);
  *(atomic<int> *)&pFVar23[1].DerivedStaticStruct = (atomic<int>)0x0;
  *(undefined1 *)&pFVar23[1].ViewModelName.Number = local_298;
  *(undefined1 *)((longlong)&pFVar23[1].ViewModelName.Number + 1) = uVar24;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)local_260,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar19 = Z_Construct_UClass_UDS_UserObjectListItem_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_1e8,pUVar19);
  local_1e8._8_8_ = pUVar3;
  pUVar12 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1e8);
  if (local_1e8._64_8_ != 0) {
    plVar20 = (longlong *)(local_1e8 + 0x50);
    if ((longlong *)local_1e8._104_8_ != (longlong *)0x0) {
      plVar20 = (longlong *)local_1e8._104_8_;
    }
    (**(code **)(*plVar20 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar12);
  }
  if (pFVar15 == (FDS_ViewModelContext *)0x0) {
    paVar30 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar30 = (atomic<int> *)&pFVar15->DerivedStaticStruct;
    LOCK();
    *paVar30 = (atomic<int>)((int)*paVar30 + 1);
    UNLOCK();
  }
  iVar8 = *(int *)(pUVar12 + 4);
  if (iVar8 == *(int *)&pUVar12[4].field_0x4) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)&pUVar12[3].field_0x20,
                       (int *)&pUVar12[4].field_0x4);
  }
  *(int *)(pUVar12 + 4) = iVar8 + 1;
  lVar21 = *(longlong *)&pUVar12[3].field_0x20;
  *(FDS_ViewModelContext **)(lVar21 + (longlong)iVar8 * 0x10) = pFVar23;
  *(FDS_ViewModelContext **)(lVar21 + 8 + (longlong)iVar8 * 0x10) = pFVar15;
  if (pFVar15 != (FDS_ViewModelContext *)0x0) {
    LOCK();
    *paVar30 = (atomic<int>)((int)*paVar30 + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar15);
  local_220 = pUVar12;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar12);
  }
  FDS_EntryBindingEventField::Add(local_250,(TObjectPtr<UDS_UserObjectListItem>)&local_220);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar15);
  local_278 = local_278 + 1;
  local_27c = uVar26 + 1;
  pFVar23 = (FDS_ViewModelContext *)(ulonglong)local_27c;
  if (local_218 <= (longlong)local_278) goto LAB_14bdf5868;
  goto LAB_14bdf5492;
}

// UpdateWaitCompleteData @ 14bdfa9a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UDS_VM_CharEvolveLevel::UpdateWaitCompleteData(UDS_VM_CharEvolveLevel *this)

{
  code *pcVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  UDS_WaitCompleteDataSet *this_00;
  UObject *pUVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  UDS_VM_WaitCompleteData *pUVar7;
  FDS_ViewModelContext *pFVar8;
  UScriptStruct *pUVar9;
  UDS_ViewModelContextManager *this_01;
  longlong *plVar10;
  FDS_ViewModelContext *pFVar11;
  FDS_ViewModelContext *pFVar12;
  undefined8 in_R8;
  undefined1 auStackY_258 [32];
  FWeakObjectPtr local_218;
  FWeakObjectPtr local_210;
  undefined8 local_208;
  FWeakObjectPtr local_200;
  FName local_1f8;
  int local_1f0;
  TSharedPtr<FDS_ViewModelContext,1> local_1e8;
  TSharedPtr<FDS_ViewModelContext,1> local_1d8;
  undefined1 local_1c8 [128];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_258;
  if (this->CharEntityID != 0) {
    UDS_CharInfoData::GetData((ulong64)&local_210);
    bVar2 = FWeakObjectPtr::IsValid(&local_210);
    if (bVar2) {
      TDS_DataSetGetter<UDS_WaitCompleteDataSet>::Get((ulong64)&local_218);
      bVar2 = FWeakObjectPtr::IsValid(&local_218);
      if (bVar2) {
        this_00 = (UDS_WaitCompleteDataSet *)FWeakObjectPtr::Get(&local_218);
        pUVar4 = FWeakObjectPtr::Get(&local_210);
        UDS_WaitCompleteDataSet::GetWaitCompleteDataByTwoParam
                  (this_00,None,CONCAT71((int7)((ulonglong)in_R8 >> 8),5),
                   (longlong)*(int *)&pUVar4[8].field_0x8);
        bVar2 = FWeakObjectPtr::IsValid(&local_200);
        if (bVar2) {
          pFVar12 = (FDS_ViewModelContext *)0x0;
          if ((this->VM_WaitCompleteData).field0_0x0.DebugPtr == (UDS_VM_WaitCompleteData *)0x0) {
            local_208 = 0;
            pUVar5 = Z_Construct_UClass_UDS_VM_WaitCompleteData_NoRegister();
            FObjectInitializer::AssertIfInConstructor
                      ((UObject *)this,
                       L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                      );
            pUVar6 = Z_Construct_UClass_UDS_VM_WaitCompleteData_NoRegister();
            CheckIsClassChildOf_Internal(pUVar6,pUVar5);
            FStaticConstructObjectParameters::FStaticConstructObjectParameters
                      ((FStaticConstructObjectParameters *)local_1c8,pUVar5);
            local_1c8._48_8_ = (FObjectInstancingGraph *)0x0;
            local_1c8._56_8_ = (UPackage *)0x0;
            local_1c8._16_4_ = 0;
            local_1c8._20_4_ = 0;
            local_1c8._24_4_ = RF_Transient;
            local_1c8._40_8_ = (UObject *)0x0;
            local_1c8[0x20] = false;
            local_1c8._8_8_ = this;
            pUVar7 = (UDS_VM_WaitCompleteData *)
                     StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1c8);
            if (local_1c8._64_8_ != 0) {
              plVar10 = (longlong *)(local_1c8 + 0x50);
              if ((longlong *)local_1c8._104_8_ != (longlong *)0x0) {
                plVar10 = (longlong *)local_1c8._104_8_;
              }
              (**(code **)(*plVar10 + 0x10))();
            }
            if (pUVar7 != (UDS_VM_WaitCompleteData *)0x0) {
              *(undefined1 *)((longlong)&pUVar7->_padding_ + 4) = 0;
            }
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (pUVar7 != (UDS_VM_WaitCompleteData *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)pUVar7);
            }
            (this->VM_WaitCompleteData).field0_0x0.DebugPtr = pUVar7;
            if (pUVar7 == (UDS_VM_WaitCompleteData *)0x0) {
              return;
            }
          }
          pFVar8 = ::operator_new(0x30);
          pFVar11 = pFVar12;
          if (pFVar8 != (FDS_ViewModelContext *)0x0) {
            *(undefined8 *)&pFVar8->field_0x1c = 0;
            ((atomic<int> *)&pFVar8[1].DerivedStaticStruct)[1] = (atomic<int>)0x0;
            *(undefined8 *)&pFVar8->DerivedStaticStruct = 0;
            (pFVar8->ViewModelName).ComparisonIndex = 0;
            (pFVar8->ViewModelName).Number = 0;
            pFVar8->ViewModelTemplateKey = None;
            pFVar8->_padding_ = (longlong)&___7FDS_ViewModelContext_WaitComplete__6B_;
            *(undefined8 *)((longlong)&pFVar8[1]._padding_ + 4) = 0;
            pFVar11 = pFVar8;
          }
          pFVar8 = ::operator_new(0x20);
          if (pFVar8 != (FDS_ViewModelContext *)0x0) {
            *(atomic<int> *)&pFVar8->DerivedStaticStruct = (atomic<int>)0x1;
            *(code **)&(pFVar8->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
            pFVar8->_padding_ =
                 (longlong)
                 &
                 ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_WaitComplete__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
            ;
            ((atomic<int> *)&pFVar8->DerivedStaticStruct)[1] = (atomic<int>)0x1;
            *(FDS_ViewModelContext **)&pFVar8->ViewModelTemplateKey = pFVar11;
            pFVar12 = pFVar8;
          }
          if ((pFVar11 == (FDS_ViewModelContext *)0x0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar2)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          pUVar9 = FDS_ViewModelContext_WaitComplete::StaticStruct();
          *(UScriptStruct **)&pFVar11->DerivedStaticStruct = pUVar9;
          this_01 = UDS_ViewModelContextManager::GetInst();
          if (this_01 != (UDS_ViewModelContextManager *)0x0) {
            if (pFVar12 != (FDS_ViewModelContext *)0x0) {
              LOCK();
              *(atomic<int> *)&pFVar12->DerivedStaticStruct =
                   (atomic<int>)((int)*(atomic<int> *)&pFVar12->DerivedStaticStruct + 1);
              UNLOCK();
            }
            local_1e8.Object = pFVar11;
            local_1e8.SharedReferenceCount.ReferenceController =
                 (TReferenceControllerBase<1> *)pFVar12;
            UDS_ViewModelContextManager::RegisterContext(this_01,&local_1e8);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_1e8.SharedReferenceCount.ReferenceController);
          }
          pFVar11->ViewModelTemplateKey = Data_WaitComplete;
          *(undefined1 *)&pFVar11[1]._padding_ = 1;
          *(FWeakObjectPtr *)((longlong)&pFVar11[1]._padding_ + 4) = local_200;
          pUVar7 = (this->VM_WaitCompleteData).field0_0x0.DebugPtr;
          if (pFVar12 != (FDS_ViewModelContext *)0x0) {
            LOCK();
            *(atomic<int> *)&pFVar12->DerivedStaticStruct =
                 (atomic<int>)((int)*(atomic<int> *)&pFVar12->DerivedStaticStruct + 1);
            UNLOCK();
          }
          local_1d8.Object = pFVar11;
          local_1d8.SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)pFVar12;
          UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar7,&local_1d8);
          local_1f0 = FFieldNotificationClassDescriptor::VM_WaitCompleteData.BitNumber;
          local_1f8 = FFieldNotificationClassDescriptor::VM_WaitCompleteData.FieldName;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1f8);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)pFVar12);
        }
      }
    }
    else {
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 != (UDS_LogManager *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        local_148._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"UDS_VM_CharEvolveLevel::UpdateWaitCompleteData",0x2e,Yes);
        UDS_LogManager::PrintLog
                  (pUVar3,1,Warning,local_148.Ptr,0x268,
                   L"charInfoData is Invalid. CharEntityID : %llu");
        if ((void *)local_148._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_148._padding_);
        }
      }
    }
  }
  return;
}

