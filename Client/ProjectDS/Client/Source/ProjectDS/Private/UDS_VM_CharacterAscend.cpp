// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 18

// StaticClass @ 14b5fbb40

UClass * __cdecl UDS_VM_CharacterAscend::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_CharacterAscend.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_CharacterAscend",
               &Z_Registration_Info_UClass_UDS_VM_CharacterAscend.InnerSingleton,
               StaticRegisterNativesUDS_VM_CharacterAscend,0x148,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_CharacterAscend>,
               InternalVTableHelperCtorCaller<UDS_VM_CharacterAscend>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_CharacterAscend.InnerSingleton;
}

// UDS_VM_CharacterAscend @ 14b600dd0

UDS_VM_CharacterAscend * __thiscall
UDS_VM_CharacterAscend::UDS_VM_CharacterAscend(UDS_VM_CharacterAscend *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->VisibilityQuantityControl = Collapsed;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_CharacterAscend__6B_;
  this->TitleStringID = 0;
  (this->VM_CommonQuantityControl).field0_0x0.DebugPtr = (UDS_VM_W_CommonQuantityControl *)0x0;
  (this->VM_MoneyFirst).field0_0x0.DebugPtr = (UDS_VM_MoneyDisplay *)0x0;
  (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField).UserObjectList.ArrayMax = 0;
  this->AscendPlayerLevelLimit = 0;
  *(undefined8 *)&this->OnTargetSlotModelUpdateDelegate = 0;
  *(undefined8 *)&(this->OnTargetSlotModelUpdateDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnTargetSlotModelUpdateDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnSuccessCharacterAscendEvent = 0;
  *(undefined8 *)&(this->OnSuccessCharacterAscendEvent).field_0x8 = 0;
  *(undefined4 *)&(this->OnSuccessCharacterAscendEvent).field_0x10 = 0;
  *(undefined8 *)&this->RequestAscendDelegate = 0;
  *(undefined8 *)&(this->RequestAscendDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->RequestAscendDelegate).field_0x10 = 0;
  *(undefined8 *)&this->DeficitMoneyAscendDelegate = 0;
  *(undefined8 *)&(this->DeficitMoneyAscendDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->DeficitMoneyAscendDelegate).field_0x10 = 0;
  this->CharEntityID = 0;
  this->SelectedItemTID = 0;
  return this;
}

// UDS_VM_CharacterAscend @ 14b600ea0

UDS_VM_CharacterAscend * __thiscall
UDS_VM_CharacterAscend::UDS_VM_CharacterAscend
          (UDS_VM_CharacterAscend *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->VisibilityQuantityControl = Collapsed;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_CharacterAscend__6B_;
  this->TitleStringID = 0;
  (this->VM_CommonQuantityControl).field0_0x0.DebugPtr = (UDS_VM_W_CommonQuantityControl *)0x0;
  (this->VM_MoneyFirst).field0_0x0.DebugPtr = (UDS_VM_MoneyDisplay *)0x0;
  (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField).UserObjectList.ArrayMax = 0;
  this->AscendPlayerLevelLimit = 0;
  *(undefined8 *)&this->OnTargetSlotModelUpdateDelegate = 0;
  *(undefined8 *)&(this->OnTargetSlotModelUpdateDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnTargetSlotModelUpdateDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnSuccessCharacterAscendEvent = 0;
  *(undefined8 *)&(this->OnSuccessCharacterAscendEvent).field_0x8 = 0;
  *(undefined4 *)&(this->OnSuccessCharacterAscendEvent).field_0x10 = 0;
  *(undefined8 *)&this->RequestAscendDelegate = 0;
  *(undefined8 *)&(this->RequestAscendDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->RequestAscendDelegate).field_0x10 = 0;
  *(undefined8 *)&this->DeficitMoneyAscendDelegate = 0;
  *(undefined8 *)&(this->DeficitMoneyAscendDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->DeficitMoneyAscendDelegate).field_0x10 = 0;
  this->CharEntityID = 0;
  this->SelectedItemTID = 0;
  return this;
}

// ~UDS_VM_CharacterAscend @ 14b602000

void __thiscall UDS_VM_CharacterAscend::~UDS_VM_CharacterAscend(UDS_VM_CharacterAscend *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_CharacterAscend__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->DeficitMoneyAscendDelegate);
  pvVar1 = *(void **)&(this->DeficitMoneyAscendDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->DeficitMoneyAscendDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->RequestAscendDelegate);
  pvVar1 = *(void **)&(this->RequestAscendDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->RequestAscendDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnSuccessCharacterAscendEvent);
  pvVar1 = *(void **)&(this->OnSuccessCharacterAscendEvent).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSuccessCharacterAscendEvent);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnTargetSlotModelUpdateDelegate);
  pvVar1 = *(void **)&(this->OnTargetSlotModelUpdateDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnTargetSlotModelUpdateDelegate);
  pFVar2 = (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b603d10

IClassDescriptor * __thiscall
UDS_VM_CharacterAscend::GetFieldNotificationDescriptor(UDS_VM_CharacterAscend *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_CharacterAscend::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6045e0

UClass * __cdecl UDS_VM_CharacterAscend::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_CharacterAscend.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_CharacterAscend",
               &Z_Registration_Info_UClass_UDS_VM_CharacterAscend.InnerSingleton,
               StaticRegisterNativesUDS_VM_CharacterAscend,0x148,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_CharacterAscend>,
               InternalVTableHelperCtorCaller<UDS_VM_CharacterAscend>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_CharacterAscend.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_CharacterAscend @ 14b604990

void __cdecl UDS_VM_CharacterAscend::StaticRegisterNativesUDS_VM_CharacterAscend(void)

{
  return;
}

// ExecuteAscend @ 14bdbd230

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_CharacterAscend::ExecuteAscend(UDS_VM_CharacterAscend *this)

{
  code *pcVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  UObject *pUVar4;
  undefined1 auStackY_198 [32];
  FWeakObjectPtr local_158;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  UDS_CharInfoData::GetData((ulong64)&local_158);
  bVar2 = FWeakObjectPtr::IsValid(&local_158);
  if (bVar2) {
    local_150._0_8_ = 0;
    local_150._8_8_ = 0;
    local_150._16_4_ = 0;
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              (&local_150,&this->OnSuccessCharacterAscendEvent);
    pUVar4 = FWeakObjectPtr::Get(&local_158);
    FDS_CharacterService::RequestCharacterAscend(*(int *)&pUVar4[8].field_0x8,&local_150);
  }
  else {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_CharacterAscend::ExecuteAscend",0x25,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,local_138.Ptr,0xc3,L"charInfoData is Invalid. CharEntityID : %llu"
                );
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5494883941917654844>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_CharacterAscend.cpp"
                       ,0xc4,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// IsAscendPlayerLevelLimit @ 14bdc7940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_VM_CharacterAscend::IsAscendPlayerLevelLimit(UDS_VM_CharacterAscend *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UDS_LogManager *pUVar4;
  UDS_CharInfoData *this_00;
  UObject *pUVar5;
  long64 lVar6;
  FDS_CharacterAscendTableRow *this_01;
  undefined1 auStackY_3c8 [32];
  FWeakObjectPtr local_388;
  FWeakObjectPtr local_380;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_378;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_258;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_3c8;
  UDS_PlayerData::GetData((ulong64)&local_380,this->CharEntityID,false);
  bVar2 = FWeakObjectPtr::IsValid(&local_380);
  if (bVar2) {
    UDS_CharInfoData::GetData((ulong64)&local_388);
    bVar2 = FWeakObjectPtr::IsValid(&local_388);
    if (bVar2) {
      this_00 = (UDS_CharInfoData *)FWeakObjectPtr::Get(&local_388);
      pUVar5 = FWeakObjectPtr::Get(&local_388);
      lVar6 = UDS_CharInfoData::GetAscendTableRowID(this_00,*(int *)&pUVar5[0xd].field_0x10);
      this_01 = FDS_CharacterAscendTableRow::GetRef(lVar6,true);
      bVar2 = FDS_CharacterAscendTableRow::IsValid(this_01);
      if (bVar2) {
        pUVar5 = FWeakObjectPtr::Get(&local_380);
        return *(int *)&pUVar5[6].field_0x10 < this_01->ReqPlayerLevel;
      }
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 != (UDS_LogManager *)0x0) {
        pUVar4 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_VM_CharacterAscend::IsAscendPlayerLevelLimit",0x30,Yes);
        UDS_LogManager::PrintLog
                  (pUVar4,1,Warning,local_138.Ptr,0xb7,L"charAscendTableRow is Invalid. rowID : %d")
        ;
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
    }
    else {
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 != (UDS_LogManager *)0x0) {
        pUVar4 = UDS_LogManager::GetInst();
        local_258._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_258,"UDS_VM_CharacterAscend::IsAscendPlayerLevelLimit",0x30,Yes);
        UDS_LogManager::PrintLog
                  (pUVar4,1,Warning,local_258.Ptr,0xae,
                   L"charInfoData is Invalid. CharEntityID : %llu");
        if ((void *)local_258._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_258._padding_);
        }
      }
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_5494883941917654865>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_CharacterAscend.cpp"
                         ,0xaf,"false");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
  }
  else {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_378._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_378,"UDS_VM_CharacterAscend::IsAscendPlayerLevelLimit",0x30,Yes);
      UDS_LogManager::PrintLog(pUVar4,1,Warning,local_378.Ptr,0xa6,L"playerData is Invalid.");
      if ((void *)local_378._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_378._padding_);
      }
    }
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5494883941917654873>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_CharacterAscend.cpp"
                       ,0xa7,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// OnEventMaterialItemSlot @ 14bdce340

void __thiscall
UDS_VM_CharacterAscend::OnEventMaterialItemSlot
          (UDS_VM_CharacterAscend *this,TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr> param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  UObject *local_res20;
  
  local_res10 = param_1.WeakPtr;
  bVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if (!bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5494883941917654806>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_CharacterAscend.cpp"
                       ,0xea,"false");
    if (!bVar2) {
      return;
    }
    goto code_r0x00014bdce461;
  }
  pUVar4 = FWeakObjectPtr::Get(&local_res10);
  pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar4 + 1));
  if (pUVar4 == (UObject *)0x0) {
LAB_14bdce3d3:
    pUVar4 = (UObject *)0x0;
  }
  else {
    pUVar5 = Z_Construct_UClass_UDS_M_ItemImplBase_NoRegister();
    iVar3 = (int)pUVar5->_padding_;
    if ((*(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38) < iVar3) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar3 * 8) !=
        &pUVar5->_padding_)) goto LAB_14bdce3d3;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  local_res18.ObjectIndex = 0;
  local_res18.ObjectSerialNumber = 0;
  local_res20 = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_res20);
  bVar2 = FWeakObjectPtr::IsValid(&local_res18);
  if (bVar2) {
    pUVar4 = FWeakObjectPtr::Get(&local_res18);
    iVar3 = (**(code **)(*(longlong *)pUVar4 + 0x380))(pUVar4);
    this->SelectedItemTID = (longlong)iVar3;
    UpdateMaterialItemList(this);
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5494883941917654803>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_CharacterAscend.cpp"
                       ,0xed,"false");
    if (bVar2) {
code_r0x00014bdce461:
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// OnSelectedMaterialItem @ 14bdd1cd0

void __thiscall
UDS_VM_CharacterAscend::OnSelectedMaterialItem(UDS_VM_CharacterAscend *this,long64 *param_1)

{
  this->SelectedItemTID = *param_1;
  UpdateMaterialItemList(this);
  return;
}

// OnSetViewModel @ 14bdd4e60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_CharacterAscend::OnSetViewModel
          (UDS_VM_CharacterAscend *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  UDS_LogManager *pUVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  UDS_CharInfoData *this_00;
  UObject *pUVar8;
  long64 lVar9;
  FDS_CharacterAscendTableRow *this_01;
  UDS_CharacterUIEvent *pUVar10;
  undefined1 auStackY_5a8 [32];
  FWeakObjectPtr local_568 [2];
  code *local_558;
  undefined4 uStack_550;
  undefined4 uStack_54c;
  TSharedPtr<FDS_ViewModelContext_CharAscend,1> local_548;
  FWeakObjectPtr local_538;
  TSharedPtr<FDS_ViewModelContext,1> local_530;
  UDS_VM_CharacterAscend *local_520;
  UDS_VM_CharacterAscend *local_518 [2];
  FName local_508;
  int local_500;
  FDestructionSentinel local_4f8;
  undefined1 *local_4e0;
  FDestructionSentinel local_4d8;
  undefined1 *local_4c0;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_4b8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_398;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_5a8;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  local_530.Object = param_1->Object;
  local_530.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_530.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_530.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_530.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_CharAscend>(&local_548,&local_530);
  if (local_548.Object == (FDS_ViewModelContext_CharAscend *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_4b8._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_4b8,"UDS_VM_CharacterAscend::OnSetViewModel",0x26,Yes);
      UDS_LogManager::PrintLog(pUVar5,1,Warning,local_4b8.Ptr,0x25,L"context is Invalid.");
      if ((void *)local_4b8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_4b8._padding_);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_548.SharedReferenceCount.ReferenceController);
  }
  else {
    if (local_548.Object == (FDS_ViewModelContext_CharAscend *)0x0) {
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
    this->CharEntityID = (local_548.Object)->CharEntityID;
    local_558 = OnEventMaterialItemSlot;
    uStack_54c = local_530.SharedReferenceCount.ReferenceController._4_4_;
    this->SelectedItemTID = 0;
    uStack_550 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnTargetSlotModelUpdateDelegate,(FWriteAccessScope *)&local_4f8);
    local_4e0 = &(this->OnTargetSlotModelUpdateDelegate).field_0x8;
    puVar6 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_4e0);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &
                ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_ModelEventBase__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar6[2] = uVar7;
      *puVar6 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_CharacterAscend____A6AXU__TWeakObjectPtr_VUDS_ModelEventBase__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar6[3] = 0;
      local_520 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 3),(FObjectPtr)&local_520);
      puVar6[4] = local_558;
      puVar6[5] = CONCAT44(uStack_54c,uStack_550);
    }
    if (local_4f8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4f8.Accessor,&local_4f8);
    }
    uStack_550 = 0;
    local_558 = OnSuccessCharacterAscend;
    uStack_54c = local_530.SharedReferenceCount.ReferenceController._4_4_;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnSuccessCharacterAscendEvent,(FWriteAccessScope *)&local_4d8);
    local_4c0 = &(this->OnSuccessCharacterAscendEvent).field_0x8;
    puVar6 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_4c0);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar6[2] = uVar7;
      *puVar6 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_CharacterAscend____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar6[3] = 0;
      local_518[0] = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 3),(FObjectPtr)local_518);
      puVar6[4] = local_558;
      puVar6[5] = CONCAT44(uStack_54c,uStack_550);
    }
    if (local_4d8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4d8.Accessor,&local_4d8);
    }
    UDS_CharInfoData::GetData((ulong64)local_568);
    bVar4 = FWeakObjectPtr::IsValid(local_568);
    if (bVar4) {
      this_00 = (UDS_CharInfoData *)FWeakObjectPtr::Get(local_568);
      pUVar8 = FWeakObjectPtr::Get(local_568);
      lVar9 = UDS_CharInfoData::GetAscendTableRowID(this_00,*(int *)&pUVar8[0xd].field_0x10);
      this_01 = FDS_CharacterAscendTableRow::GetRef(lVar9,true);
      bVar4 = FDS_CharacterAscendTableRow::IsValid(this_01);
      FVar3 = FFieldNotificationClassDescriptor::AscendPlayerLevelLimit.FieldName;
      if (bVar4) {
        if (this->AscendPlayerLevelLimit != this_01->ReqPlayerLevel) {
          local_500 = FFieldNotificationClassDescriptor::AscendPlayerLevelLimit.BitNumber;
          this->AscendPlayerLevelLimit = this_01->ReqPlayerLevel;
          local_508 = FVar3;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_508);
        }
        UpdateMaterialItemList(this);
        UpdateNeedMoneyDisplay(this);
        UDS_CharInfoData::GetData((ulong64)&local_538);
        bVar4 = FWeakObjectPtr::IsValid(&local_538);
        if (bVar4) {
          pUVar10 = UDS_CharacterUIEvent::GetEvent();
          if (pUVar10 != (UDS_CharacterUIEvent *)0x0) {
            pUVar8 = FWeakObjectPtr::Get(&local_538);
            FDS_EventDelegate<int_const_,__int64_const_,__int64_const_>::Broadcast
                      (&pUVar10->OnUpdateTargetExp,*(int *)&pUVar8[8].field_0xc + 1,0,0);
          }
        }
        else {
          pUVar5 = UDS_LogManager::GetInst();
          if (pUVar5 != (UDS_LogManager *)0x0) {
            pUVar5 = UDS_LogManager::GetInst();
            local_158._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_158,"UDS_VM_CharacterAscend::UpdateTargetExpUp",0x29,Yes);
            UDS_LogManager::PrintLog
                      (pUVar5,1,Warning,local_158.Ptr,0x157,
                       L"charInfoData is Invalid. CharEntityID : %llu");
            if ((void *)local_158._padding_ != (void *)0x0) {
              FMemory::Free((void *)local_158._padding_);
            }
          }
          bVar4 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_5494883941917654696>,false,
                             "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_CharacterAscend.cpp"
                             ,0x158,"false");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
      }
      else {
        pUVar5 = UDS_LogManager::GetInst();
        if (pUVar5 != (UDS_LogManager *)0x0) {
          pUVar5 = UDS_LogManager::GetInst();
          local_278._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_278,"UDS_VM_CharacterAscend::OnSetViewModel",0x26,Yes);
          UDS_LogManager::PrintLog
                    (pUVar5,1,Warning,local_278.Ptr,0x3b,
                     L"charAscendTableRow is Invalid. rowID : %d");
          if ((void *)local_278._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_278._padding_);
          }
        }
      }
    }
    else {
      pUVar5 = UDS_LogManager::GetInst();
      if (pUVar5 != (UDS_LogManager *)0x0) {
        pUVar5 = UDS_LogManager::GetInst();
        local_398._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_398,"UDS_VM_CharacterAscend::OnSetViewModel",0x26,Yes);
        UDS_LogManager::PrintLog
                  (pUVar5,1,Warning,local_398.Ptr,0x32,
                   L"charInfoData is Invalid. CharEntityID : %llu");
        if ((void *)local_398._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_398._padding_);
        }
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_5494883941917654989>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_CharacterAscend.cpp"
                         ,0x33,"false");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_548.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnSuccessCharacterAscend @ 14bdde430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_CharacterAscend::OnSuccessCharacterAscend(UDS_VM_CharacterAscend *this)

{
  code *pcVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  UDS_CharacterUIEvent *pUVar4;
  EDS_CharStatusPanelType EVar5;
  undefined1 auStackY_188 [32];
  FWeakObjectPtr local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  UpdateMaterialItemList(this);
  UpdateNeedMoneyDisplay(this);
  UDS_CharInfoData::GetData((ulong64)local_148);
  bVar2 = FWeakObjectPtr::IsValid(local_148);
  if (bVar2) {
    pUVar4 = UDS_CharacterUIEvent::GetEvent();
    if (pUVar4 == (UDS_CharacterUIEvent *)0x0) {
      return;
    }
    bVar2 = FDS_CharacterService::CanUseItemForLevelUp
                      ((TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr>)local_148[0]);
    EVar5 = (EDS_CharStatusPanelType)bVar2;
  }
  else {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_CharacterAscend::OnSuccessCharacterAscend",0x30,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,local_138.Ptr,0xd8,L"charInfoData is Invalid. CharEntityID : %llu"
                );
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5494883941917654823>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_CharacterAscend.cpp"
                       ,0xd9,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pUVar4 = UDS_CharacterUIEvent::GetEvent();
    if (pUVar4 == (UDS_CharacterUIEvent *)0x0) {
      return;
    }
    EVar5 = Info;
  }
  FDS_EventDelegate<enum_EDS_CharStatusPanelType_const_>::Broadcast
            (&pUVar4->OnChangeDetailPanel,EVar5);
  return;
}

// RequestAscend @ 14bde26c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_CharacterAscend::RequestAscend(UDS_VM_CharacterAscend *this)

{
  int iVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  uint uVar4;
  int iVar5;
  UDS_LogManager *pUVar6;
  UDS_CharInfoData *this_00;
  UObject *pUVar7;
  long64 lVar8;
  FDS_CharacterAscendTableRow *this_01;
  int *piVar9;
  int *piVar10;
  undefined8 *puVar11;
  ulong64 uVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  undefined1 auStackY_588 [32];
  EDS_InventoryType local_548 [16];
  FString local_538;
  longlong local_528;
  ForAnyElementType local_518;
  undefined8 local_510;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_508;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_4f8;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_4e8;
  FWeakObjectPtr local_4d8;
  FWeakObjectPtr local_4d0;
  TArray<DS_MoneyDataUtil::FDS_BuyData,TSizedDefaultAllocator<32>_> local_4c8;
  FWeakObjectPtr local_4b8;
  FString local_4b0;
  FString local_4a0;
  longlong local_490;
  UDS_VM_CharacterAscend *local_488;
  UDS_VM_CharacterAscend *local_480;
  UDS_VM_CharacterAscend *local_478;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_470;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_458;
  FDestructionSentinel local_440;
  undefined1 *local_428;
  FDestructionSentinel local_420;
  undefined1 *local_408;
  FStringFormatArg local_400;
  FStringFormatArg local_3e0;
  FStringFormatArg local_3c0;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_398;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_588;
  local_488 = this;
  UDS_CharInfoData::GetData((ulong64)&local_4d8);
  bVar3 = FWeakObjectPtr::IsValid(&local_4d8);
  if (bVar3) {
    this_00 = (UDS_CharInfoData *)FWeakObjectPtr::Get(&local_4d8);
    pUVar7 = FWeakObjectPtr::Get(&local_4d8);
    lVar8 = UDS_CharInfoData::GetAscendTableRowID(this_00,*(int *)&pUVar7[0xd].field_0x10);
    this_01 = FDS_CharacterAscendTableRow::GetRef(lVar8,true);
    bVar3 = FDS_CharacterAscendTableRow::IsValid(this_01);
    if (bVar3) {
      UDS_PlayerData::GetData((ulong64)&local_4b8,this->CharEntityID,false);
      bVar3 = FWeakObjectPtr::IsValid(&local_4b8);
      if (bVar3) {
        pUVar7 = FWeakObjectPtr::Get(&local_4b8);
        uVar14 = 0;
        if (*(int *)&pUVar7[6].field_0x10 < this_01->ReqPlayerLevel) {
          local_4b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_4b0.Data.ArrayNum = 0;
          local_4b0.Data.ArrayMax = 0;
          ::FString::AppendInt(&local_4b0,this_01->ReqPlayerLevel);
          FStringFormatArg::FStringFormatArg(&local_400,&local_4b0);
          local_508.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_508.ArrayNum = 1;
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,1,0,&local_508.AllocatorInstance,1,&local_508.ArrayMax);
          ConstructItems<FStringFormatArg,FStringFormatArg,int>
                    (local_508.AllocatorInstance.Data,&local_400,1);
          UDS_UIMessageManager::OpenMsgByStringUi
                    (0x2bb3c,Alert_None_01,&local_508,
                     (TMap<EDS_MessageArgsType,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_MessageArgsType,__int64,0>_>
                      *)0x0);
          DestructItems<FStringFormatArg,int>
                    ((FStringFormatArg *)local_508.AllocatorInstance.Data,local_508.ArrayNum);
          if ((FStringFormatArg *)local_508.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
            FMemory::Free(local_508.AllocatorInstance.Data);
          }
          if (local_400.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_400.StringValue.Data.AllocatorInstance.Data);
          }
        }
        else {
          local_490 = (longlong)(this_01->ReqItem).ArrayNum;
          uVar16 = uVar14;
          if (0 < local_490) {
            do {
              uVar15 = (uint)uVar16;
              uVar4 = 0;
              if ((int)uVar15 < (this_01->ReqItem).ArrayNum) {
                uVar4 = ~uVar15 >> 0x1f;
              }
              if ((uVar4 == 0) &&
                 (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar3)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              DS_ItemDataUtil::GetItemDataByTID((int)&local_4d0);
              bVar3 = FWeakObjectPtr::IsValid(&local_4d0);
              if (!bVar3) {
LAB_14bde2ecc:
                local_538.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_538.Data.ArrayNum = 0;
                local_538.Data.ArrayMax = 0;
                ::FString::AppendInt(&local_538,this_01->ReqPlayerLevel);
                FStringFormatArg::FStringFormatArg(&local_3c0,&local_538);
                local_4e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_4e8.ArrayNum = 1;
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x20,8,1,0,&local_4e8.AllocatorInstance,1,&local_4e8.ArrayMax);
                ConstructItems<FStringFormatArg,FStringFormatArg,int>
                          (local_4e8.AllocatorInstance.Data,&local_3c0,1);
                UDS_UIMessageManager::OpenMsgByStringUi
                          (0x2bb39,Alert_None_01,&local_4e8,
                           (TMap<EDS_MessageArgsType,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_MessageArgsType,__int64,0>_>
                            *)0x0);
                DestructItems<FStringFormatArg,int>
                          ((FStringFormatArg *)local_4e8.AllocatorInstance.Data,local_4e8.ArrayNum);
                if ((FStringFormatArg *)local_4e8.AllocatorInstance.Data != (FStringFormatArg *)0x0)
                {
                  FMemory::Free(local_4e8.AllocatorInstance.Data);
                }
                goto LAB_14bde2fde;
              }
              pUVar7 = FWeakObjectPtr::Get(&local_4d0);
              local_548[0] = PlayerNormal;
              piVar9 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
                       ::FindOrAddImpl<enum_EDS_InventoryType_const_&>
                                 (&pUVar7[10].field_0x18,1,local_548);
              piVar10 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
                        ::FindOrAddImpl<enum_EDS_InventoryType_const_&>
                                  (&pUVar7[8].field_0x18,(uint)local_548[0],local_548);
              iVar5 = *piVar9;
              iVar1 = *piVar10;
              uVar4 = 0;
              if ((int)uVar15 < (this_01->ReqItemCnt).ArrayNum) {
                uVar4 = ~uVar15 >> 0x1f;
              }
              if ((uVar4 == 0) &&
                 (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar3)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              if (iVar5 + iVar1 <
                  *(int *)((this_01->ReqItemCnt).AllocatorInstance.Data + uVar14 * 4))
              goto LAB_14bde2ecc;
              pUVar7 = FWeakObjectPtr::Get(&local_4d0);
              if (pUVar7[0x11].field_0x9 != '\0') {
                local_4a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_4a0.Data.ArrayNum = 0;
                local_4a0.Data.ArrayMax = 0;
                ::FString::AppendInt(&local_4a0,this_01->ReqPlayerLevel);
                FStringFormatArg::FStringFormatArg(&local_3e0,&local_4a0);
                local_4f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_4f8.ArrayNum = 1;
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x20,8,1,0,&local_4f8.AllocatorInstance,1,&local_4f8.ArrayMax);
                ConstructItems<FStringFormatArg,FStringFormatArg,int>
                          (local_4f8.AllocatorInstance.Data,&local_3e0,1);
                UDS_UIMessageManager::OpenMsgByStringUi
                          (0x2bb3b,Alert_None_01,&local_4f8,
                           (TMap<EDS_MessageArgsType,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_MessageArgsType,__int64,0>_>
                            *)0x0);
                DestructItems<FStringFormatArg,int>
                          ((FStringFormatArg *)local_4f8.AllocatorInstance.Data,local_4f8.ArrayNum);
                local_3c0.StringValue.Data.AllocatorInstance.Data =
                     local_3e0.StringValue.Data.AllocatorInstance.Data;
                if ((FStringFormatArg *)local_4f8.AllocatorInstance.Data != (FStringFormatArg *)0x0)
                {
                  FMemory::Free(local_4f8.AllocatorInstance.Data);
                  local_3c0.StringValue.Data.AllocatorInstance.Data =
                       local_3e0.StringValue.Data.AllocatorInstance.Data;
                }
                goto LAB_14bde2fde;
              }
              uVar14 = uVar14 + 1;
              uVar16 = (ulonglong)(uVar15 + 1);
              this = local_488;
            } while ((longlong)uVar14 < local_490);
          }
          bVar3 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
                             &this->RequestAscendDelegate);
          if (!bVar3) {
            local_538.Data.AllocatorInstance.Data = (FScriptContainerElement *)ExecuteAscend;
            local_538.Data._8_8_ = local_538.Data._8_8_ & 0xffffffff00000000;
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                       &this->RequestAscendDelegate,(FWriteAccessScope *)&local_440);
            local_428 = &(this->RequestAscendDelegate).field_0x8;
            puVar11 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_428);
            if (puVar11 != (undefined8 *)0x0) {
              *puVar11 = &
                         ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_
              ;
              uVar12 = FDelegateHandle::GenerateNewID();
              puVar11[2] = uVar12;
              *puVar11 = &
                         ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_CharacterAscend____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
              ;
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable((UObject *)this);
              }
              puVar11[3] = 0;
              local_480 = this;
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable((UObject *)this);
              }
              FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 3),(FObjectPtr)&local_480);
              puVar11[4] = local_538.Data.AllocatorInstance.Data;
              puVar11[5] = local_538.Data._8_8_;
            }
            if (local_440.bDestroyed == false) {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_440.Accessor,&local_440);
            }
          }
          bVar3 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
                             &this->DeficitMoneyAscendDelegate);
          if (!bVar3) {
            local_538.Data.AllocatorInstance.Data =
                 (FScriptContainerElement *)ShowMsgDeficitMoneyAscend;
            local_538.Data._8_8_ = local_538.Data._8_8_ & 0xffffffff00000000;
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                       &this->DeficitMoneyAscendDelegate,(FWriteAccessScope *)&local_420);
            local_408 = &(this->DeficitMoneyAscendDelegate).field_0x8;
            puVar11 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_408);
            if (puVar11 != (undefined8 *)0x0) {
              *puVar11 = &
                         ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_
              ;
              uVar12 = FDelegateHandle::GenerateNewID();
              puVar11[2] = uVar12;
              *puVar11 = &
                         ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_CharacterAscend____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
              ;
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable((UObject *)this);
              }
              puVar11[3] = 0;
              local_478 = this;
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable((UObject *)this);
              }
              FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 3),(FObjectPtr)&local_478);
              puVar11[4] = local_538.Data.AllocatorInstance.Data;
              puVar11[5] = local_538.Data._8_8_;
            }
            if (local_420.bDestroyed == false) {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_420.Accessor,&local_420);
            }
          }
          local_538.Data.AllocatorInstance.Data._0_1_ = this_01->ReqMoneyType;
          local_538.Data._8_8_ = this_01->ReqMoneyValue;
          local_528 = (longlong)this_01->ID_MoneyExchange;
          local_518.Data = (FScriptContainerElement *)0x0;
          local_510 = 0;
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&local_518,(int *)((longlong)&local_510 + 4));
          local_470._0_8_ = 0;
          local_470._8_8_ = 0;
          local_510 = CONCAT44(local_510._4_4_,iVar5 + 1);
          local_470._16_4_ = 0;
          *(FScriptContainerElement **)(local_518.Data + (longlong)iVar5 * 0x18) =
               local_538.Data.AllocatorInstance.Data;
          *(undefined8 *)(local_518.Data + (longlong)iVar5 * 0x18 + 8) = local_538.Data._8_8_;
          *(longlong *)(local_518.Data + (longlong)iVar5 * 0x18 + 0x10) = local_528;
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
          CopyFrom<FDefaultDelegateUserPolicy>(&local_470,&this->DeficitMoneyAscendDelegate);
          local_458._0_8_ = 0;
          local_458._8_8_ = 0;
          local_458._16_4_ = 0;
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
          CopyFrom<FDefaultDelegateUserPolicy>(&local_458,&this->RequestAscendDelegate);
          _Src.Data = local_518.Data;
          lVar13 = (longlong)(int)local_510;
          local_4c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_4c8.ArrayNum = (int)local_510;
          if ((int)local_510 == 0) {
            local_4c8.ArrayMax = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,(int)local_510,0,&local_4c8.AllocatorInstance,(int)local_510,
                       &local_4c8.ArrayMax);
            memcpy(local_4c8.AllocatorInstance.Data,_Src.Data,lVar13 * 0x18);
          }
          DS_MoneyDataUtil::RequestBuy(&local_4c8,&local_458,&local_470);
          local_3c0.StringValue.Data.AllocatorInstance.Data = local_518.Data;
LAB_14bde2fde:
          if (local_3c0.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_3c0.StringValue.Data.AllocatorInstance.Data);
          }
        }
      }
      else {
        pUVar6 = UDS_LogManager::GetInst();
        if (pUVar6 != (UDS_LogManager *)0x0) {
          pUVar6 = UDS_LogManager::GetInst();
          local_158._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_158,"UDS_VM_CharacterAscend::RequestAscend",0x25,Yes);
          UDS_LogManager::PrintLog
                    (pUVar6,1,Warning,local_158.Ptr,0x5c,
                     L"playerData is Invalid. CharEntityID : %llu");
          if ((void *)local_158._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_158._padding_);
          }
        }
        bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_5494883941917654947>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_CharacterAscend.cpp"
                           ,0x5d,"false");
        if (bVar3) goto code_r0x00014bde2977;
      }
    }
    else {
      pUVar6 = UDS_LogManager::GetInst();
      if (pUVar6 != (UDS_LogManager *)0x0) {
        pUVar6 = UDS_LogManager::GetInst();
        local_278._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_278,"UDS_VM_CharacterAscend::RequestAscend",0x25,Yes);
        UDS_LogManager::PrintLog
                  (pUVar6,1,Warning,local_278.Ptr,0x54,L"charAscendTableRow is Invalid. rowID : %d")
        ;
        if ((void *)local_278._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_278._padding_);
        }
      }
    }
  }
  else {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      local_398._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_398,"UDS_VM_CharacterAscend::RequestAscend",0x25,Yes);
      UDS_LogManager::PrintLog
                (pUVar6,1,Warning,local_398.Ptr,0x4b,L"charInfoData is Invalid. CharEntityID : %llu"
                );
      if ((void *)local_398._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_398._padding_);
      }
    }
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5494883941917654964>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_CharacterAscend.cpp"
                       ,0x4c,"false");
    if (bVar3) {
code_r0x00014bde2977:
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// ShowMsgDeficitMoneyAscend @ 14bdea9a0

void __thiscall UDS_VM_CharacterAscend::ShowMsgDeficitMoneyAscend(UDS_VM_CharacterAscend *this)

{
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_28;
  
  local_28._0_8_ = 0;
  local_28._8_8_ = 0;
  local_28._16_4_ = 0;
  UDS_UIMessageManager::OpenMsgByStringUi(0x2bb3a,Alert_None_01,&local_28);
  return;
}

// UpdateMaterialItemList @ 14bdf2400

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_CharacterAscend::UpdateMaterialItemList(UDS_VM_CharacterAscend *this)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  UDS_M_ItemImplBase *pUVar5;
  longlong lVar6;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  UDS_LogManager *pUVar11;
  UDS_CharInfoData *this_00;
  UObject *pUVar12;
  long64 lVar13;
  FDS_CharacterAscendTableRow *this_01;
  UDS_UserObjectListItem *pUVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  TObjectPtr<UDS_UserObjectListItem>_u_0 TVar17;
  atomic<int> *paVar18;
  uint uVar19;
  uint uVar20;
  int *piVar21;
  undefined1 auStackY_438 [32];
  UDS_M_ItemImplBase *local_3f8;
  longlong local_3f0;
  FWeakObjectPtr local_3e8;
  FDS_CharacterAscendTableRow *local_3e0;
  FWeakObjectPtr local_3d8;
  UDS_UserObjectListItem *local_3d0;
  longlong local_3c8;
  TArray<int,TSizedDefaultAllocator<32>_> *local_3c0;
  FName local_3b8;
  int local_3b0;
  undefined1 local_3a8 [8];
  TReferenceControllerBase<1> *local_3a0;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_398;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_438;
  TDS_DataSetGetter<UDS_ItemDataSet>::Get((ulong64)&local_3d8);
  bVar8 = FWeakObjectPtr::IsValid(&local_3d8);
  if (bVar8) {
    FDS_EntryBindingEventField::Reset(&this->EntryBindingEventField);
    UDS_CharInfoData::GetData((ulong64)&local_3e8);
    bVar8 = FWeakObjectPtr::IsValid(&local_3e8);
    if (bVar8) {
      this_00 = (UDS_CharInfoData *)FWeakObjectPtr::Get(&local_3e8);
      pUVar12 = FWeakObjectPtr::Get(&local_3e8);
      uVar16 = (ulonglong)*(uint *)&pUVar12[0xd].field_0x10;
      lVar13 = UDS_CharInfoData::GetAscendTableRowID(this_00,*(uint *)&pUVar12[0xd].field_0x10);
      TVar17._1_7_ = (undefined7)(uVar16 >> 8);
      TVar17._0_1_ = 1;
      this_01 = FDS_CharacterAscendTableRow::GetRef(lVar13,true);
      local_3e0 = this_01;
      bVar8 = FDS_CharacterAscendTableRow::IsValid(this_01);
      if (bVar8) {
        local_3c8 = (longlong)(this_01->ReqItem).ArrayNum;
        uVar19 = 0;
        if (0 < local_3c8) {
          local_3c0 = &this_01->ReqItem;
          local_3f0 = 0;
          do {
            pTVar7 = local_3c0;
            lVar6 = local_3f0;
            piVar21 = &local_3c0->ArrayNum;
            uVar20 = ~uVar19 >> 0x1f;
            if (this->SelectedItemTID == 0) {
              uVar9 = 0;
              if ((int)uVar19 < *piVar21) {
                uVar9 = uVar20;
              }
              if (uVar9 == 0) {
                TVar17.DebugPtr = (UDS_UserObjectListItem *)0x1506109c0;
                bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar8) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
              }
              this->SelectedItemTID =
                   (longlong)*(int *)((pTVar7->AllocatorInstance).Data + lVar6 * 4);
            }
            pUVar14 = NewObject<UDS_UserObjectListItem>((UObject *)this);
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (pUVar14 != (UDS_UserObjectListItem *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)pUVar14);
            }
            uVar9 = 0;
            if ((int)uVar19 < *piVar21) {
              uVar9 = uVar20;
            }
            if (uVar9 == 0) {
              TVar17.DebugPtr = (UDS_UserObjectListItem *)0x1506109c0;
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar8) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
            }
            DS_ItemDataUtil::CreateItemModel
                      ((EDS_ItemSlotStateType)&local_3f8,(int)CONCAT71(TVar17._1_7_,0xd));
            pUVar5 = local_3f8;
            if (local_3f8 == (UDS_M_ItemImplBase *)0x0) {
              bVar8 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<_5494883941917654752>,false,
                                 "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_CharacterAscend.cpp"
                                 ,0x120,"false");
              if (!bVar8) {
                return;
              }
              goto code_r0x00014bdf2a1e;
            }
            uVar9 = 0;
            if ((int)uVar19 < (local_3e0->ReqItemCnt).ArrayNum) {
              uVar9 = uVar20;
            }
            if ((uVar9 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            UDS_M_ItemImplBase::SetQuantity
                      (pUVar5,*(int *)((local_3e0->ReqItemCnt).AllocatorInstance.Data +
                                      local_3f0 * 4));
            pUVar5 = local_3f8;
            uVar9 = 0;
            if ((int)uVar19 < *piVar21) {
              uVar9 = uVar20;
            }
            if ((uVar9 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            UDS_M_ItemImplBase::SetSelected
                      (pUVar5,this->SelectedItemTID ==
                              (longlong)*(int *)((pTVar7->AllocatorInstance).Data + local_3f0 * 4));
            UDS_ModelBase::AddUpdateModelDelegate
                      ((UDS_ModelBase *)local_3f8,&this->OnTargetSlotModelUpdateDelegate);
            puVar15 = (undefined8 *)(**(code **)(local_3f8->_padding_ + 0x310))(local_3f8,local_3a8)
            ;
            pTVar1 = (TReferenceControllerBase<1> *)puVar15[1];
            uVar2 = *puVar15;
            if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
              paVar18 = (atomic<int> *)&DAT_00000008;
            }
            else {
              paVar18 = &pTVar1->SharedReferenceCount;
              LOCK();
              *paVar18 = (atomic<int>)((int)*paVar18 + 1);
              UNLOCK();
            }
            iVar10 = (pUVar14->ViewModelContextArray).ArrayNum;
            piVar21 = &(pUVar14->ViewModelContextArray).ArrayMax;
            if (iVar10 == *piVar21) {
              iVar10 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,&(pUVar14->ViewModelContextArray).AllocatorInstance,piVar21)
              ;
            }
            (pUVar14->ViewModelContextArray).ArrayNum = iVar10 + 1;
            pFVar3 = (pUVar14->ViewModelContextArray).AllocatorInstance.Data;
            *(undefined8 *)(pFVar3 + (longlong)iVar10 * 0x10) = uVar2;
            *(TReferenceControllerBase<1> **)(pFVar3 + (longlong)iVar10 * 0x10 + 8) = pTVar1;
            if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              *paVar18 = (atomic<int>)((int)*paVar18 + 1);
              UNLOCK();
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar1);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_3a0);
            local_3d0 = pUVar14;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (pUVar14 != (UDS_UserObjectListItem *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)pUVar14);
            }
            TVar17.DebugPtr = (UDS_UserObjectListItem *)&local_3d0;
            FDS_EntryBindingEventField::Add
                      (&this->EntryBindingEventField,
                       (TObjectPtr<UDS_UserObjectListItem>)TVar17.ObjectPtr.field0_0x0);
            uVar19 = uVar19 + 1;
            local_3f0 = local_3f0 + 1;
          } while (local_3f0 < local_3c8);
        }
        local_3b0 = FFieldNotificationClassDescriptor::EntryBindingEventField.BitNumber;
        local_3b8 = FFieldNotificationClassDescriptor::EntryBindingEventField.FieldName;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_3b8);
      }
      else {
        pUVar11 = UDS_LogManager::GetInst();
        if (pUVar11 != (UDS_LogManager *)0x0) {
          pUVar11 = UDS_LogManager::GetInst();
          local_158._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_158,"UDS_VM_CharacterAscend::UpdateMaterialItemList",0x2e,Yes);
          UDS_LogManager::PrintLog
                    (pUVar11,1,Warning,local_158.Ptr,0x111,
                     L"charAscendTableRow is Invalid. rowID : %d");
          if ((void *)local_158._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_158._padding_);
          }
        }
      }
    }
    else {
      pUVar11 = UDS_LogManager::GetInst();
      if (pUVar11 != (UDS_LogManager *)0x0) {
        pUVar11 = UDS_LogManager::GetInst();
        local_278._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_278,"UDS_VM_CharacterAscend::UpdateMaterialItemList",0x2e,Yes);
        UDS_LogManager::PrintLog
                  (pUVar11,1,Warning,local_278.Ptr,0x108,
                   L"charInfoData is Invalid. CharEntityID : %llu");
        if ((void *)local_278._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_278._padding_);
        }
      }
      bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_5494883941917654775>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_CharacterAscend.cpp"
                         ,0x109,"false");
      if (bVar8) goto code_r0x00014bdf2a1e;
    }
  }
  else {
    pUVar11 = UDS_LogManager::GetInst();
    if (pUVar11 != (UDS_LogManager *)0x0) {
      pUVar11 = UDS_LogManager::GetInst();
      local_398._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_398,"UDS_VM_CharacterAscend::UpdateMaterialItemList",0x2e,Yes);
      UDS_LogManager::PrintLog(pUVar11,1,Warning,local_398.Ptr,0xfe,L"itemDataSet is Invalid.");
      if ((void *)local_398._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_398._padding_);
      }
    }
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5494883941917654785>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_CharacterAscend.cpp"
                       ,0xff,"false");
    if (bVar8) {
code_r0x00014bdf2a1e:
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  return;
}

// UpdateNeedMoneyDisplay @ 14bdf2e50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_CharacterAscend::UpdateNeedMoneyDisplay(UDS_VM_CharacterAscend *this)

{
  EDS_MoneyType EVar1;
  code *pcVar2;
  FDS_ViewModelContext_MoneyDisplay *pFVar3;
  bool bVar4;
  UDS_LogManager *pUVar5;
  UDS_CharInfoData *this_00;
  UObject *pUVar6;
  long64 lVar7;
  FDS_CharacterAscendTableRow *this_01;
  UDS_VM_MoneyDisplay *pUVar8;
  undefined1 auStackY_2d8 [32];
  FWeakObjectPtr local_298 [2];
  TSharedPtr<FDS_ViewModelContext_MoneyDisplay,1> local_288;
  FName local_278;
  int local_270;
  TSharedPtr<FDS_ViewModelContext,1> local_268;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_258;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  UDS_CharInfoData::GetData((ulong64)local_298);
  bVar4 = FWeakObjectPtr::IsValid(local_298);
  if (bVar4) {
    this_00 = (UDS_CharInfoData *)FWeakObjectPtr::Get(local_298);
    pUVar6 = FWeakObjectPtr::Get(local_298);
    lVar7 = UDS_CharInfoData::GetAscendTableRowID(this_00,*(int *)&pUVar6[0xd].field_0x10);
    this_01 = FDS_CharacterAscendTableRow::GetRef(lVar7,true);
    bVar4 = FDS_CharacterAscendTableRow::IsValid(this_01);
    if (bVar4) {
      if ((this->VM_MoneyFirst).field0_0x0.DebugPtr == (UDS_VM_MoneyDisplay *)0x0) {
        pUVar8 = UDS_ViewModelBase::CreateViewModel<UDS_VM_MoneyDisplay>((UObject *)this);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar8 != (UDS_VM_MoneyDisplay *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar8);
        }
        (this->VM_MoneyFirst).field0_0x0.DebugPtr = pUVar8;
        if (pUVar8 == (UDS_VM_MoneyDisplay *)0x0) {
          return;
        }
      }
      MakeContext<FDS_ViewModelContext_MoneyDisplay>(&local_288);
      pFVar3 = local_288.Object;
      if (local_288.Object != (FDS_ViewModelContext_MoneyDisplay *)0x0) {
        EVar1 = this_01->ReqMoneyType;
        if ((local_288.Object == (FDS_ViewModelContext_MoneyDisplay *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar3->MoneyId = (ulonglong)EVar1;
        pFVar3->Quantity = this_01->ReqMoneyValue;
        pUVar8 = (this->VM_MoneyFirst).field0_0x0.DebugPtr;
        local_268.Object = (FDS_ViewModelContext *)local_288.Object;
        local_268.SharedReferenceCount.ReferenceController =
             local_288.SharedReferenceCount.ReferenceController;
        if (local_288.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_288.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_288.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar8,&local_268);
        local_270 = FFieldNotificationClassDescriptor::VM_MoneyFirst.BitNumber;
        local_278 = FFieldNotificationClassDescriptor::VM_MoneyFirst.FieldName;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_278);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_288.SharedReferenceCount.ReferenceController);
    }
    else {
      pUVar5 = UDS_LogManager::GetInst();
      if (pUVar5 != (UDS_LogManager *)0x0) {
        pUVar5 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_VM_CharacterAscend::UpdateNeedMoneyDisplay",0x2e,Yes);
        UDS_LogManager::PrintLog
                  (pUVar5,1,Warning,local_138.Ptr,0x13c,L"charAscendTableRow is Invalid. rowID : %d"
                  );
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
    }
  }
  else {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_258._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_258,"UDS_VM_CharacterAscend::UpdateNeedMoneyDisplay",0x2e,Yes);
      UDS_LogManager::PrintLog
                (pUVar5,1,Warning,local_258.Ptr,0x133,
                 L"charInfoData is Invalid. CharEntityID : %llu");
      if ((void *)local_258._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_258._padding_);
      }
    }
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5494883941917654732>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_CharacterAscend.cpp"
                       ,0x134,"false");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// UpdateTargetExpUp @ 14bdf9080

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_CharacterAscend::UpdateTargetExpUp(UDS_VM_CharacterAscend *this)

{
  code *pcVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  UDS_CharacterUIEvent *pUVar4;
  UObject *pUVar5;
  undefined1 auStackY_188 [32];
  FWeakObjectPtr local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  UDS_CharInfoData::GetData((ulong64)local_148);
  bVar2 = FWeakObjectPtr::IsValid(local_148);
  if (bVar2) {
    pUVar4 = UDS_CharacterUIEvent::GetEvent();
    if (pUVar4 != (UDS_CharacterUIEvent *)0x0) {
      pUVar5 = FWeakObjectPtr::Get(local_148);
      FDS_EventDelegate<int_const_,__int64_const_,__int64_const_>::Broadcast
                (&pUVar4->OnUpdateTargetExp,*(int *)&pUVar5[8].field_0xc + 1,0,0);
    }
  }
  else {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_CharacterAscend::UpdateTargetExpUp",0x29,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,local_138.Ptr,0x157,
                 L"charInfoData is Invalid. CharEntityID : %llu");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5494883941917654696>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_CharacterAscend.cpp"
                       ,0x158,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

