// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 30

// SetEventExpUpEnd_WrapperImpl @ 14b5fc9a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_CharacterLevelup::SetEventExpUpEnd_WrapperImpl(void *param_1,void *param_2)

{
  code *pcVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  UDS_CharacterUIEvent *pUVar4;
  UDS_CharInfoData *this;
  undefined1 auStackY_188 [32];
  FWeakObjectPtr aFStack_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  UDS_CharInfoData::GetData((ulong64)aFStack_148);
  bVar2 = FWeakObjectPtr::IsValid(aFStack_148);
  if (bVar2) {
    this = (UDS_CharInfoData *)FWeakObjectPtr::Get(aFStack_148);
    bVar2 = UDS_CharInfoData::CanAscend(this);
    if (bVar2) {
      pUVar4 = UDS_CharacterUIEvent::GetEvent();
      if (pUVar4 != (UDS_CharacterUIEvent *)0x0) {
        FDS_EventDelegate<enum_EDS_CharStatusPanelType_const_>::Broadcast
                  (&pUVar4->OnChangeDetailPanel,Ascend);
      }
    }
    else {
      pUVar4 = UDS_CharacterUIEvent::GetEvent();
      if (pUVar4 != (UDS_CharacterUIEvent *)0x0) {
        FDS_EventDelegate<int_const_,__int64_const_,__int64_const_>::Broadcast
                  (&pUVar4->OnUpdateTargetExp,0,0,0);
      }
    }
    *(undefined1 *)((longlong)param_1 + 0x1e8) = 0;
  }
  else {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      TStack_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_138,"UDS_VM_CharacterLevelup::OnEventExpUpEnd",0x28,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,TStack_138.Ptr,0x315,
                 L"charInfoData is Invalid. CharEntityID : %llu");
      if ((void *)TStack_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)TStack_138._padding_);
      }
    }
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1915500876521274602>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_CharacterLevelup.cpp"
                       ,0x316,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pUVar4 = UDS_CharacterUIEvent::GetEvent();
    if (pUVar4 != (UDS_CharacterUIEvent *)0x0) {
      FDS_EventDelegate<enum_EDS_CharStatusPanelType_const_>::Broadcast
                (&pUVar4->OnChangeDetailPanel,Info);
    }
  }
  return;
}

// StaticClass @ 14b5fc9b0

UClass * __cdecl UDS_VM_CharacterLevelup::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_CharacterLevelup.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_CharacterLevelup",
               &Z_Registration_Info_UClass_UDS_VM_CharacterLevelup.InnerSingleton,
               StaticRegisterNativesUDS_VM_CharacterLevelup,0x1f0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_CharacterLevelup>,
               InternalVTableHelperCtorCaller<UDS_VM_CharacterLevelup>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_CharacterLevelup.InnerSingleton;
}

// UDS_VM_CharacterLevelup @ 14b6012f0

UDS_VM_CharacterLevelup * __thiscall
UDS_VM_CharacterLevelup::UDS_VM_CharacterLevelup
          (UDS_VM_CharacterLevelup *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_CharacterLevelup__6B_;
  (this->VM_CommonQuantityControl).field0_0x0.DebugPtr = (UDS_VM_W_CommonQuantityControl *)0x0;
  (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField).UserObjectList.ArrayMax = 0;
  this->EventExpUpStart = false;
  this->EventExpUpEnd = false;
  (this->VM_MoneyFirst).field0_0x0.DebugPtr = (UDS_VM_MoneyDisplay *)0x0;
  (this->VM_MoneySecond).field0_0x0.DebugPtr = (UDS_VM_MoneyDisplay *)0x0;
  *(undefined8 *)&this->OnTargetSlotModelUpdateDelegate = 0;
  *(undefined8 *)&(this->OnTargetSlotModelUpdateDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnTargetSlotModelUpdateDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnQuantityChangeDelegate = 0;
  *(undefined8 *)&(this->OnQuantityChangeDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnQuantityChangeDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnClickAutoDelegate = 0;
  *(undefined8 *)&(this->OnClickAutoDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnClickAutoDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnSuccessCharacterExpUpEvent = 0;
  *(undefined8 *)&(this->OnSuccessCharacterExpUpEvent).field_0x8 = 0;
  *(undefined4 *)&(this->OnSuccessCharacterExpUpEvent).field_0x10 = 0;
  *(undefined8 *)&this->LevelUpCostMap = 0;
  *(undefined8 *)&(this->LevelUpCostMap).field_0x8 = 0;
  *(undefined8 *)&(this->LevelUpCostMap).field_0x20 = 0;
  this->ExecuteBtnStringID = 0;
  this->CharEntityID = 0;
  this->SelectedItemTID = 0;
  *(undefined8 *)&(this->OnQuantityChangeDelegate).field_0x18 = 2;
  *(undefined4 *)&(this->LevelUpCostMap).field_0x28 = 0;
  *(undefined4 *)&(this->LevelUpCostMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->LevelUpCostMap).field_0x34 = 0;
  *(undefined4 *)&(this->LevelUpCostMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->LevelUpCostMap).field_0x40 = 0;
  *(undefined4 *)&(this->LevelUpCostMap).field_0x48 = 0;
  *(undefined8 *)&this->LevelUpMoneyMap = 0;
  *(undefined8 *)&(this->LevelUpMoneyMap).field_0x8 = 0;
  *(undefined8 *)&(this->LevelUpMoneyMap).field_0x20 = 0;
  *(undefined4 *)&(this->LevelUpMoneyMap).field_0x28 = 0;
  *(undefined4 *)&(this->LevelUpMoneyMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->LevelUpMoneyMap).field_0x34 = 0;
  *(undefined4 *)&(this->LevelUpMoneyMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->LevelUpMoneyMap).field_0x40 = 0;
  *(undefined4 *)&(this->LevelUpMoneyMap).field_0x48 = 0;
  this->IsExpIncreasing = false;
  return this;
}

// UDS_VM_CharacterLevelup @ 14b601460

UDS_VM_CharacterLevelup * __thiscall
UDS_VM_CharacterLevelup::UDS_VM_CharacterLevelup
          (UDS_VM_CharacterLevelup *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_CharacterLevelup__6B_;
  (this->VM_CommonQuantityControl).field0_0x0.DebugPtr = (UDS_VM_W_CommonQuantityControl *)0x0;
  (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField).UserObjectList.ArrayMax = 0;
  this->EventExpUpStart = false;
  this->EventExpUpEnd = false;
  (this->VM_MoneyFirst).field0_0x0.DebugPtr = (UDS_VM_MoneyDisplay *)0x0;
  (this->VM_MoneySecond).field0_0x0.DebugPtr = (UDS_VM_MoneyDisplay *)0x0;
  *(undefined8 *)&this->OnTargetSlotModelUpdateDelegate = 0;
  *(undefined8 *)&(this->OnTargetSlotModelUpdateDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnTargetSlotModelUpdateDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnQuantityChangeDelegate = 0;
  *(undefined8 *)&(this->OnQuantityChangeDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnQuantityChangeDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnClickAutoDelegate = 0;
  *(undefined8 *)&(this->OnClickAutoDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnClickAutoDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnSuccessCharacterExpUpEvent = 0;
  *(undefined8 *)&(this->OnSuccessCharacterExpUpEvent).field_0x8 = 0;
  *(undefined4 *)&(this->OnSuccessCharacterExpUpEvent).field_0x10 = 0;
  *(undefined8 *)&this->LevelUpCostMap = 0;
  *(undefined8 *)&(this->LevelUpCostMap).field_0x8 = 0;
  *(undefined8 *)&(this->LevelUpCostMap).field_0x20 = 0;
  this->ExecuteBtnStringID = 0;
  this->CharEntityID = 0;
  this->SelectedItemTID = 0;
  *(undefined8 *)&(this->OnQuantityChangeDelegate).field_0x18 = 2;
  *(undefined4 *)&(this->LevelUpCostMap).field_0x28 = 0;
  *(undefined4 *)&(this->LevelUpCostMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->LevelUpCostMap).field_0x34 = 0;
  *(undefined4 *)&(this->LevelUpCostMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->LevelUpCostMap).field_0x40 = 0;
  *(undefined4 *)&(this->LevelUpCostMap).field_0x48 = 0;
  *(undefined8 *)&this->LevelUpMoneyMap = 0;
  *(undefined8 *)&(this->LevelUpMoneyMap).field_0x8 = 0;
  *(undefined8 *)&(this->LevelUpMoneyMap).field_0x20 = 0;
  *(undefined4 *)&(this->LevelUpMoneyMap).field_0x28 = 0;
  *(undefined4 *)&(this->LevelUpMoneyMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->LevelUpMoneyMap).field_0x34 = 0;
  *(undefined4 *)&(this->LevelUpMoneyMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->LevelUpMoneyMap).field_0x40 = 0;
  *(undefined4 *)&(this->LevelUpMoneyMap).field_0x48 = 0;
  this->IsExpIncreasing = false;
  return this;
}

// ~UDS_VM_CharacterLevelup @ 14b6022b0

void __thiscall UDS_VM_CharacterLevelup::~UDS_VM_CharacterLevelup(UDS_VM_CharacterLevelup *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_CharacterLevelup__6B_;
  *(undefined4 *)&(this->LevelUpMoneyMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->LevelUpMoneyMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_MoneyType,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_MoneyType,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->LevelUpMoneyMap);
  *(undefined4 *)&(this->LevelUpCostMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->LevelUpCostMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->LevelUpCostMap);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnSuccessCharacterExpUpEvent);
  pvVar1 = *(void **)&(this->OnSuccessCharacterExpUpEvent).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSuccessCharacterExpUpEvent);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnClickAutoDelegate);
  pvVar1 = *(void **)&(this->OnClickAutoDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnClickAutoDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnQuantityChangeDelegate).field_0x8,
             *(int *)&(this->OnQuantityChangeDelegate).field_0x10);
  pvVar1 = *(void **)&(this->OnQuantityChangeDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnQuantityChangeDelegate);
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

// GetFieldNotificationDescriptor @ 14b603df0

IClassDescriptor * __thiscall
UDS_VM_CharacterLevelup::GetFieldNotificationDescriptor(UDS_VM_CharacterLevelup *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_CharacterLevelup::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b604760

UClass * __cdecl UDS_VM_CharacterLevelup::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_CharacterLevelup.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_CharacterLevelup",
               &Z_Registration_Info_UClass_UDS_VM_CharacterLevelup.InnerSingleton,
               StaticRegisterNativesUDS_VM_CharacterLevelup,0x1f0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_CharacterLevelup>,
               InternalVTableHelperCtorCaller<UDS_VM_CharacterLevelup>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_CharacterLevelup.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_CharacterLevelup @ 14b6049b0

void __cdecl UDS_VM_CharacterLevelup::StaticRegisterNativesUDS_VM_CharacterLevelup(void)

{
  return;
}

// operator() @ 14bdacb10

bool __thiscall
`UDS_VM_CharacterLevelup::UpdateMaterialItemList'::__l2::<lambda_1>::operator()
          (void *this,FDS_CharacterLevelUpCostTableRow *param_1,
          FDS_CharacterLevelUpCostTableRow *param_2)

{
  bool bVar1;
  bool bVar2;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  
  DS_ItemDataUtil::GetItemDataByTID((int)&local_res10);
  DS_ItemDataUtil::GetItemDataByTID((int)&local_res18);
  bVar1 = FWeakObjectPtr::IsValid(&local_res10);
  bVar2 = FWeakObjectPtr::IsValid(&local_res18);
  if (bVar1 == bVar2) {
    return param_1->ID < param_2->ID;
  }
  bVar1 = FWeakObjectPtr::IsValid(&local_res10);
  bVar2 = FWeakObjectPtr::IsValid(&local_res18);
  return !bVar2 && bVar1;
}

// operator() @ 14bdacbb0

void __thiscall
`UDS_VM_CharacterLevelup::UpdateNeedMoneyDisplay'::__l2::<lambda_1>::operator()
          (void *this,TObjectPtr<UDS_VM_MoneyDisplay> *param_1,EDS_MoneyType param_2,long64 param_3)

{
  code *pcVar1;
  FDS_ViewModelContext_MoneyDisplay *pFVar2;
  bool bVar3;
  UDS_VM_MoneyDisplay *pUVar4;
  TSharedPtr<FDS_ViewModelContext_MoneyDisplay,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  if ((param_1->field0_0x0).DebugPtr == (UDS_VM_MoneyDisplay *)0x0) {
    pUVar4 = UDS_ViewModelBase::CreateViewModel<UDS_VM_MoneyDisplay>(*(UObject **)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar4 != (UDS_VM_MoneyDisplay *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (param_1->field0_0x0).DebugPtr = pUVar4;
    if (pUVar4 == (UDS_VM_MoneyDisplay *)0x0) {
      return;
    }
  }
  MakeContext<FDS_ViewModelContext_MoneyDisplay>(&local_28);
  pFVar2 = local_28.Object;
  if ((local_28.Object == (FDS_ViewModelContext_MoneyDisplay *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *(undefined4 *)&pFVar2->_padding_ = 0x192;
  pFVar2->MoneyId = (ulonglong)param_2;
  pFVar2->Quantity = param_3;
  pUVar4 = (param_1->field0_0x0).DebugPtr;
  local_18.Object = (FDS_ViewModelContext *)local_28.Object;
  local_18.SharedReferenceCount.ReferenceController =
       local_28.SharedReferenceCount.ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar4,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return;
}

// CalcAllMaterialItemExp @ 14bdb2960

long64 __thiscall UDS_VM_CharacterLevelup::CalcAllMaterialItemExp(UDS_VM_CharacterLevelup *this)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  long64 lVar9;
  longlong lVar10;
  FDS_CharacterLevelUpCostTableRow *this_00;
  undefined1 *puVar11;
  int iVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar16;
  uint *puVar18;
  uint uVar19;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  ulonglong uVar15;
  ulonglong uVar17;
  
  uVar13 = 0;
  puVar1 = &(this->LevelUpCostMap).field_0x10;
  uVar2 = *(uint *)&(this->LevelUpCostMap).field_0x28;
  uVar14 = 0;
  uVar6 = 1;
  uVar16 = 0;
  uVar7 = uVar14;
  if (uVar2 != 0) {
    puVar18 = *(uint **)&(this->LevelUpCostMap).field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)puVar1;
    }
    uVar7 = *puVar18;
    uVar15 = uVar13;
    uVar17 = uVar13;
    uVar16 = 0;
    uVar14 = 0;
    while (uVar7 == 0) {
      iVar12 = (int)uVar15;
      uVar16 = (int)uVar17 + 0x20;
      uVar17 = (ulonglong)uVar16;
      uVar14 = iVar12 + 1;
      uVar15 = (ulonglong)uVar14;
      uVar7 = uVar2;
      if ((int)(((int)(uVar2 - 1) >> 0x1f & 0x1fU) + (uVar2 - 1)) >> 5 < (int)uVar14)
      goto LAB_14bdb2a0d;
      uVar7 = puVar18[(longlong)iVar12 + 1];
    }
    uVar6 = -uVar7 & uVar7;
    uVar15 = (ulonglong)uVar6 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res10 = (int)lVar10;
    uVar7 = (uVar16 - 1) + local_res10;
    if ((int)uVar2 < (int)uVar7) {
      uVar7 = uVar2;
    }
  }
LAB_14bdb2a0d:
  uVar8 = *(uint *)&(this->LevelUpCostMap).field_0x28;
  uVar19 = uVar8 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,uVar14);
  TStack_60.CurrentBitIndex = uVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar8 >> 5;
  TStack_60._28_4_ = uVar7;
  TStack_60.BaseBitIndex = uVar16;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->LevelUpCostMap).field_0x8 -
                       *(int *)&(this->LevelUpCostMap).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar8 < 0) || ((int)uVar2 < (int)uVar8)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    lVar9 = (*pcVar4)();
    return lVar9;
  }
  uVar2 = *(uint *)&(this->LevelUpCostMap).field_0x28;
  if (uVar8 != uVar2) {
    puVar11 = *(undefined1 **)&(this->LevelUpCostMap).field_0x20;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = puVar1;
    }
    uVar16 = -1 << ((byte)uVar8 & 0x1f) & *(uint *)(puVar11 + (longlong)iVar12 * 4);
    while (uVar16 == 0) {
      lVar10 = (longlong)iVar12;
      uVar19 = uVar19 + 0x20;
      iVar12 = iVar12 + 1;
      uVar8 = uVar2;
      if ((int)(((int)(uVar2 - 1) >> 0x1f & 0x1fU) + (uVar2 - 1)) >> 5 < iVar12) goto LAB_14bdb2b10;
      uVar16 = *(uint *)(puVar11 + lVar10 * 4 + 4);
    }
    uVar15 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar8 = (int)lVar10 + -1 + uVar19;
    if ((int)uVar2 < (int)uVar8) {
      uVar8 = uVar2;
    }
  }
LAB_14bdb2b10:
  while( true ) {
    if (*(int *)&(this->LevelUpCostMap).field_0x8 - *(int *)&(this->LevelUpCostMap).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar8) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    uVar3 = *(undefined8 *)
             (*(longlong *)&this->LevelUpCostMap + (longlong)TStack_60.CurrentBitIndex * 0x10);
    this_00 = FDS_CharacterLevelUpCostTableRow::GetRef((longlong)(int)uVar3,true);
    bVar5 = FDS_CharacterLevelUpCostTableRow::IsValid(this_00);
    if (bVar5) {
      uVar13 = uVar13 + (longlong)(int)((ulonglong)uVar3 >> 0x20) * this_00->RewardCharExp;
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return uVar13;
}

// CalcNeedExpToLimitLevel @ 14bdb2bb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

long64 __thiscall UDS_VM_CharacterLevelup::CalcNeedExpToLimitLevel(UDS_VM_CharacterLevelup *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  UDS_LogManager *pUVar4;
  long64 lVar5;
  UObject *pUVar6;
  UDS_CharInfoData *pUVar7;
  FDS_CharacterLevelTableRow *pFVar8;
  atomic<unsigned_char> *paVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  undefined1 auStackY_2a8 [32];
  FWeakObjectPtr local_268;
  FWeakObjectPtr local_260;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_258;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  UDS_PlayerData::GetData((ulong64)&local_260,this->CharEntityID,false);
  bVar2 = FWeakObjectPtr::IsValid(&local_260);
  if (bVar2) {
    FWeakObjectPtr::Get(&local_260);
    UDS_CharInfoData::GetData((ulong64)&local_268);
    bVar2 = FWeakObjectPtr::IsValid(&local_268);
    if (bVar2) {
      pUVar6 = FWeakObjectPtr::Get(&local_268);
      iVar12 = *(int *)&pUVar6[8].field_0xc;
      pUVar7 = (UDS_CharInfoData *)FWeakObjectPtr::Get(&local_268);
      iVar3 = UDS_CharInfoData::GetAscendLimitLevel(pUVar7);
      pUVar7 = (UDS_CharInfoData *)FWeakObjectPtr::Get(&local_268);
      lVar5 = UDS_CharInfoData::GetLevelTableRowID(pUVar7,iVar12);
      pFVar8 = FDS_CharacterLevelTableRow::GetRef(lVar5,true);
      bVar2 = FDS_CharacterLevelTableRow::IsValid(pFVar8);
      lVar11 = 0;
      if (bVar2) {
        pUVar6 = FWeakObjectPtr::Get(&local_268);
        lVar10 = pFVar8->ReqCharExp - *(longlong *)&pUVar6[8].field_0x10;
        if (0 < lVar10) {
          lVar11 = lVar10;
        }
      }
      if (iVar3 <= iVar12) {
        return lVar11;
      }
      while (iVar12 = iVar12 + 1, iVar12 <= iVar3) {
        pUVar7 = (UDS_CharInfoData *)FWeakObjectPtr::Get(&local_268);
        lVar5 = UDS_CharInfoData::GetLevelTableRowID(pUVar7,iVar12);
        pFVar8 = FDS_CharacterLevelTableRow::GetRef(lVar5,true);
        bVar2 = FDS_CharacterLevelTableRow::IsValid(pFVar8);
        if (bVar2) {
          lVar11 = lVar11 + pFVar8->ReqCharExp;
        }
      }
      return lVar11;
    }
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      FWeakObjectPtr::Get(&local_260);
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_CharacterLevelup::CalcNeedExpToLimitLevel",0x30,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Warning,local_138.Ptr,0x265,
                 L"charInfoData is Invalid. CharEntityID : %llu");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    iVar12 = 0x266;
    paVar9 = &bGEnsureHasExecuted<_1915500876521274778>;
  }
  else {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_258._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_258,"UDS_VM_CharacterLevelup::CalcNeedExpToLimitLevel",0x30,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Warning,local_258.Ptr,0x25d,L"playerData is Invalid. CharEntityID : %llu")
      ;
      if ((void *)local_258._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_258._padding_);
      }
    }
    iVar12 = 0x25e;
    paVar9 = &bGEnsureHasExecuted<_1915500876521274786>;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (paVar9,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_CharacterLevelup.cpp"
                     ,iVar12,"false");
  if (!bVar2) {
    return 0;
  }
  pcVar1 = (code *)swi(3);
  lVar5 = (*pcVar1)();
  return lVar5;
}

// CalcNeedExpToMaxLevel @ 14bdb2e80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

long64 __thiscall UDS_VM_CharacterLevelup::CalcNeedExpToMaxLevel(UDS_VM_CharacterLevelup *this)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  UDS_LogManager *pUVar5;
  long64 lVar6;
  UObject *pUVar7;
  FDS_CharacterBaseTableRow *this_00;
  UDS_CharInfoData *pUVar8;
  FDS_CharacterLevelTableRow *pFVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStackY_2a8 [32];
  FWeakObjectPtr local_268;
  FWeakObjectPtr local_260;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_258;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  UDS_PlayerData::GetData((ulong64)&local_260,this->CharEntityID,false);
  bVar4 = FWeakObjectPtr::IsValid(&local_260);
  if (bVar4) {
    FWeakObjectPtr::Get(&local_260);
    UDS_CharInfoData::GetData((ulong64)&local_268);
    bVar4 = FWeakObjectPtr::IsValid(&local_268);
    if (bVar4) {
      pUVar7 = FWeakObjectPtr::Get(&local_268);
      this_00 = FDS_CharacterBaseTableRow::GetRef((longlong)*(int *)&pUVar7[8].field_0x8,true);
      bVar4 = FDS_CharacterBaseTableRow::IsValid(this_00);
      if (bVar4) {
        pUVar7 = FWeakObjectPtr::Get(&local_268);
        iVar1 = this_00->MaxLevel;
        iVar2 = *(int *)&pUVar7[8].field_0xc;
        pUVar8 = (UDS_CharInfoData *)FWeakObjectPtr::Get(&local_268);
        lVar6 = UDS_CharInfoData::GetLevelTableRowID(pUVar8,iVar2);
        pFVar9 = FDS_CharacterLevelTableRow::GetRef(lVar6,true);
        bVar4 = FDS_CharacterLevelTableRow::IsValid(pFVar9);
        lVar11 = 0;
        if (bVar4) {
          pUVar7 = FWeakObjectPtr::Get(&local_268);
          lVar10 = pFVar9->ReqCharExp - *(longlong *)&pUVar7[8].field_0x10;
          if (0 < lVar10) {
            lVar11 = lVar10;
          }
        }
        if (iVar1 <= iVar2) {
          return lVar11;
        }
        while (iVar2 = iVar2 + 1, iVar2 <= iVar1) {
          pUVar8 = (UDS_CharInfoData *)FWeakObjectPtr::Get(&local_268);
          lVar6 = UDS_CharInfoData::GetLevelTableRowID(pUVar8,iVar2);
          pFVar9 = FDS_CharacterLevelTableRow::GetRef(lVar6,true);
          bVar4 = FDS_CharacterLevelTableRow::IsValid(pFVar9);
          if (bVar4) {
            lVar11 = lVar11 + pFVar9->ReqCharExp;
          }
        }
        return lVar11;
      }
    }
    else {
      pUVar5 = UDS_LogManager::GetInst();
      if (pUVar5 != (UDS_LogManager *)0x0) {
        pUVar5 = UDS_LogManager::GetInst();
        FWeakObjectPtr::Get(&local_260);
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_VM_CharacterLevelup::CalcNeedExpToMaxLevel",0x2e,Yes);
        UDS_LogManager::PrintLog
                  (pUVar5,1,Warning,local_138.Ptr,0x298,
                   L"charInfoData is Invalid. CharEntityID : %llu");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_1915500876521274727>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_CharacterLevelup.cpp"
                         ,0x299,"false");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        lVar6 = (*pcVar3)();
        return lVar6;
      }
    }
  }
  else {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_258._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_258,"UDS_VM_CharacterLevelup::CalcNeedExpToMaxLevel",0x2e,Yes);
      UDS_LogManager::PrintLog
                (pUVar5,1,Warning,local_258.Ptr,0x290,L"playerData is Invalid. CharEntityID : %llu")
      ;
      if ((void *)local_258._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_258._padding_);
      }
    }
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1915500876521274735>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_CharacterLevelup.cpp"
                       ,0x291,"false");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      lVar6 = (*pcVar3)();
      return lVar6;
    }
  }
  return 0;
}

// ExecuteExpUp @ 14bdbd3a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_CharacterLevelup::ExecuteExpUp(UDS_VM_CharacterLevelup *this)

{
  undefined1 *puVar1;
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *pTVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  code *pcVar8;
  TMap<EDS_MoneyType,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_MoneyType,__int64,0>_>
  *pTVar9;
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *pTVar10;
  bool bVar11;
  UDS_LogManager *pUVar12;
  FDS_CharacterLevelUpCostTableRow *pFVar13;
  UObject *pUVar14;
  long64 lVar15;
  TDelegate<void___cdecl(int,bool),FDefaultDelegateUserPolicy> *pTVar16;
  longlong lVar17;
  long64 lVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  undefined1 *puVar22;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> *pTVar23;
  uint *puVar24;
  int iVar25;
  undefined1 auStackY_5a8 [32];
  undefined1 local_568;
  undefined1 local_567;
  undefined1 local_566 [6];
  TMap<EDS_MoneyType,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_MoneyType,__int64,0>_>
  *local_560;
  int iStack_558;
  uint uStack_554;
  undefined1 *local_550;
  undefined4 uStack_548;
  int iStack_544;
  int local_540;
  int iStack_53c;
  int iStack_538;
  undefined4 uStack_534;
  FWeakObjectPtr local_530;
  FWeakObjectPtr local_528;
  FWeakObjectPtr local_520;
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *local_518;
  int iStack_510;
  uint uStack_50c;
  undefined1 *local_508;
  undefined4 uStack_500;
  int iStack_4fc;
  int local_4f8;
  int iStack_4f0;
  undefined4 uStack_4ec;
  int local_4e8;
  int local_4e4;
  int local_4e0;
  int local_4dc;
  int local_4d8;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_4d0;
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *local_4b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_4b0;
  undefined8 uStack_490;
  TMap<EDS_MoneyType,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_MoneyType,__int64,0>_>
  *local_488;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_480;
  undefined8 uStack_460;
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *local_458;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_450;
  undefined8 uStack_430;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_428;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_410;
  TDelegate<void___cdecl(int,bool),FDefaultDelegateUserPolicy> local_3f8 [2];
  undefined4 local_3c4;
  int local_3a4;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_398;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_5a8;
  local_518 = &this->LevelUpCostMap;
  iVar25 = 0;
  iVar5 = *(int *)&(this->LevelUpCostMap).field_0x28;
  local_508 = &(this->LevelUpCostMap).field_0x10;
  iStack_510 = 0;
  local_4f8 = 0;
  uStack_50c = 1;
  iStack_4fc = 0;
  if (iVar5 != 0) {
    puVar24 = *(uint **)&(this->LevelUpCostMap).field_0x20;
    if (puVar24 == (uint *)0x0) {
      puVar24 = (uint *)local_508;
    }
    uVar21 = *puVar24;
    while (uVar21 == 0) {
      lVar17 = (longlong)iStack_510;
      local_4f8 = local_4f8 + 0x20;
      iStack_510 = iStack_510 + 1;
      iStack_4fc = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_510) goto LAB_14bdbd45f;
      uVar21 = puVar24[lVar17 + 1];
    }
    uStack_50c = -uVar21 & uVar21;
    uVar4 = (ulonglong)uStack_50c * 2 + 1;
    lVar17 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    local_4e8 = (int)lVar17;
    iStack_4fc = local_4f8 + -1 + local_4e8;
    if (iVar5 < iStack_4fc) {
      iStack_4fc = iVar5;
    }
  }
LAB_14bdbd45f:
  puVar1 = &(this->LevelUpCostMap).field_0x10;
  iStack_4f0 = *(int *)&(this->LevelUpCostMap).field_0x8 -
               *(int *)&(this->LevelUpCostMap).field_0x34;
  uVar21 = *(uint *)&(this->LevelUpCostMap).field_0x28;
  TStack_4b0._padding_ = CONCAT44(uStack_50c,iStack_510);
  uStack_500 = 0xffffffff;
  uVar20 = uVar21 & 0xffffffe0;
  TStack_4b0.CurrentBitIndex = iStack_4fc;
  TStack_4b0.UnvisitedBitMask = 0xffffffff;
  iVar19 = (int)uVar21 >> 5;
  TStack_4b0._28_4_ = local_3c4;
  TStack_4b0.BaseBitIndex = local_4f8;
  uStack_490 = CONCAT44(uStack_4ec,iStack_4f0);
  local_4b8 = local_518;
  TStack_4b0.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_508;
  if ((((int)uVar21 < 0) || (iVar5 < (int)uVar21)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar6 = *(uint *)&(this->LevelUpCostMap).field_0x28;
  if (uVar21 != uVar6) {
    puVar22 = *(undefined1 **)&(this->LevelUpCostMap).field_0x20;
    if (puVar22 == (undefined1 *)0x0) {
      puVar22 = puVar1;
    }
    uVar21 = -1 << ((byte)uVar21 & 0x1f) & *(uint *)(puVar22 + (longlong)iVar19 * 4);
    while (uVar21 == 0) {
      lVar17 = (longlong)iVar19;
      uVar20 = uVar20 + 0x20;
      iVar19 = iVar19 + 1;
      uVar21 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19) goto LAB_14bdbd56d;
      uVar21 = *(uint *)(puVar22 + lVar17 * 4 + 4);
    }
    uVar4 = (ulonglong)(-uVar21 & uVar21) * 2 + 1;
    lVar17 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    local_4e4 = (int)lVar17;
    uVar21 = local_4e4 + -1 + uVar20;
    if ((int)uVar6 < (int)uVar21) {
      uVar21 = uVar6;
    }
  }
LAB_14bdbd56d:
  while( true ) {
    pTVar2 = local_4b8;
    if (*(int *)&local_4b8->field_0x8 - *(int *)&local_4b8->field_0x34 != (int)uStack_490) {
      local_568 = 0;
      `TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_568);
    }
    if (((TStack_4b0.CurrentBitIndex == uVar21) &&
        (TStack_4b0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
       (pTVar2 == &this->LevelUpCostMap)) break;
    TStack_4b0.UnvisitedBitMask = TStack_4b0.UnvisitedBitMask & ~TStack_4b0._padding_._4_4_;
    iVar25 = iVar25 + (int)((ulonglong)
                            *(undefined8 *)
                             (*(longlong *)pTVar2 + (longlong)TStack_4b0.CurrentBitIndex * 0x10) >>
                           0x20);
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_4b0);
  }
  if (iVar25 < 1) {
    pTVar23 = &local_428;
    local_428._0_8_ = 0;
    lVar18 = 0x2b751;
    local_428._8_8_ = 0;
    local_428._16_4_ = 0;
  }
  else {
    TDS_DataSetGetter<UDS_MoneyDataSet>::Get((ulong64)&local_530);
    bVar11 = FWeakObjectPtr::IsValid(&local_530);
    if (!bVar11) {
      pUVar12 = UDS_LogManager::GetInst();
      if (pUVar12 != (UDS_LogManager *)0x0) {
        pUVar12 = UDS_LogManager::GetInst();
        local_398._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_398,"UDS_VM_CharacterLevelup::ExecuteExpUp",0x25,Yes);
        UDS_LogManager::PrintLog(pUVar12,1,Warning,local_398.Ptr,0x54,L"moneyDataSet is Invalid.");
        if ((void *)local_398._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_398._padding_);
        }
      }
      bVar11 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_1915500876521275307>,true,
                          "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_CharacterLevelup.cpp"
                          ,0x55,"false");
      if (bVar11) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      return;
    }
    puVar1 = &(this->LevelUpMoneyMap).field_0x10;
    iVar5 = *(int *)&(this->LevelUpMoneyMap).field_0x28;
    local_560 = &this->LevelUpMoneyMap;
    iStack_558 = 0;
    uStack_554 = 1;
    local_540 = 0;
    iStack_544 = 0;
    if (iVar5 != 0) {
      puVar24 = *(uint **)&(this->LevelUpMoneyMap).field_0x20;
      if (puVar24 == (uint *)0x0) {
        puVar24 = (uint *)puVar1;
      }
      uVar21 = *puVar24;
      local_540 = 0;
      while (uVar21 == 0) {
        lVar17 = (longlong)iStack_558;
        local_540 = local_540 + 0x20;
        iStack_558 = iStack_558 + 1;
        iStack_544 = iVar5;
        if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_558) goto LAB_14bdbd75d;
        uVar21 = puVar24[lVar17 + 1];
      }
      uStack_554 = -uVar21 & uVar21;
      uVar4 = (ulonglong)uStack_554 * 2 + 1;
      lVar17 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      local_4e0 = (int)lVar17;
      iStack_544 = local_540 + -1 + local_4e0;
      if (iVar5 < iStack_544) {
        iStack_544 = iVar5;
      }
    }
LAB_14bdbd75d:
    uVar21 = *(uint *)&(this->LevelUpMoneyMap).field_0x28;
    iStack_53c = local_3a4;
    iStack_538 = *(int *)&(this->LevelUpMoneyMap).field_0x8 -
                 *(int *)&(this->LevelUpMoneyMap).field_0x34;
    uVar20 = uVar21 & 0xffffffe0;
    TStack_480._padding_ = CONCAT44(uStack_554,iStack_558);
    uStack_548 = 0xffffffff;
    TStack_480.CurrentBitIndex = iStack_544;
    TStack_480.UnvisitedBitMask = 0xffffffff;
    iVar25 = (int)uVar21 >> 5;
    TStack_480._28_4_ = local_3a4;
    TStack_480.BaseBitIndex = local_540;
    uStack_460 = CONCAT44(uStack_534,iStack_538);
    local_550 = puVar1;
    local_488 = local_560;
    TStack_480.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar21 < 0) || (iVar5 < (int)uVar21)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar11)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    uVar6 = *(uint *)&(this->LevelUpMoneyMap).field_0x28;
    if (uVar21 != uVar6) {
      puVar22 = *(undefined1 **)&(this->LevelUpMoneyMap).field_0x20;
      if (puVar22 == (undefined1 *)0x0) {
        puVar22 = puVar1;
      }
      uVar21 = -1 << ((byte)uVar21 & 0x1f) & *(uint *)(puVar22 + (longlong)iVar25 * 4);
      while (uVar21 == 0) {
        lVar17 = (longlong)iVar25;
        uVar20 = uVar20 + 0x20;
        iVar25 = iVar25 + 1;
        uVar21 = uVar6;
        if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar25)
        goto LAB_14bdbd870;
        uVar21 = *(uint *)(puVar22 + lVar17 * 4 + 4);
      }
      uVar4 = (ulonglong)(-uVar21 & uVar21) * 2 + 1;
      lVar17 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      local_4dc = (int)lVar17;
      uVar21 = (uVar20 - 1) + local_4dc;
      if ((int)uVar6 < (int)uVar21) {
        uVar21 = uVar6;
      }
    }
LAB_14bdbd870:
    while( true ) {
      pTVar9 = local_488;
      if (*(int *)&local_488->field_0x8 - *(int *)&local_488->field_0x34 != (int)uStack_460) {
        local_567 = 0;
        `TSparseArray<TSparseSetElement<TTuple<enum_EDS_MoneyType,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_567);
      }
      if (((TStack_480.CurrentBitIndex == uVar21) &&
          (TStack_480.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
         (pTVar9 == &this->LevelUpMoneyMap)) {
        puVar1 = &(this->LevelUpCostMap).field_0x10;
        iStack_558 = 0;
        iVar5 = *(int *)&(this->LevelUpCostMap).field_0x28;
        local_540 = 0;
        uStack_554 = 1;
        iStack_544 = 0;
        if (iVar5 == 0) goto LAB_14bdbd98d;
        puVar24 = *(uint **)&(this->LevelUpCostMap).field_0x20;
        if (puVar24 == (uint *)0x0) {
          puVar24 = (uint *)puVar1;
        }
        uVar21 = *puVar24;
        goto joined_r0x00014bdbd941;
      }
      puVar3 = (undefined8 *)(*(longlong *)pTVar9 + (longlong)TStack_480.CurrentBitIndex * 0x18);
      local_4d0._0_8_ = *puVar3;
      local_4d0._8_8_ = puVar3[1];
      FWeakObjectPtr::Get(&local_530);
      bVar11 = UDS_MoneyDataSet::CheckEnoughMoney(local_4d0._0_1_,local_4d0._8_8_);
      if (!bVar11) break;
      TStack_480.UnvisitedBitMask = TStack_480.UnvisitedBitMask & ~TStack_480._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_480);
    }
    pTVar23 = &local_4d0;
    local_4d0._0_8_ = 0;
    lVar18 = 0x2b752;
    local_4d0._8_8_ = 0;
    local_4d0._16_4_ = 0;
  }
LAB_14bdbdd65:
  UDS_UIMessageManager::OpenMsgByStringUi(lVar18,Alert_None_01,pTVar23);
  return;
joined_r0x00014bdbd941:
  if (uVar21 != 0) goto LAB_14bdbd968;
  lVar17 = (longlong)iStack_558;
  local_540 = local_540 + 0x20;
  iStack_558 = iStack_558 + 1;
  iStack_544 = iVar5;
  if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_558) goto LAB_14bdbd98d;
  uVar21 = puVar24[lVar17 + 1];
  goto joined_r0x00014bdbd941;
LAB_14bdbd968:
  uStack_554 = -uVar21 & uVar21;
  uVar4 = (ulonglong)uStack_554 * 2 + 1;
  lVar17 = 0x3f;
  if (uVar4 != 0) {
    for (; uVar4 >> lVar17 == 0; lVar17 = lVar17 + -1) {
    }
  }
  local_4d8 = (int)lVar17;
  iStack_544 = local_4d8 + -1 + local_540;
  if (iVar5 < iStack_544) {
    iStack_544 = iVar5;
  }
LAB_14bdbd98d:
  uVar21 = *(uint *)&(this->LevelUpCostMap).field_0x28;
  pTVar2 = &this->LevelUpCostMap;
  iStack_53c = iStack_4fc;
  uVar20 = uVar21 & 0xffffffe0;
  iStack_538 = *(int *)&(this->LevelUpCostMap).field_0x8 -
               *(int *)&(this->LevelUpCostMap).field_0x34;
  uStack_548 = 0xffffffff;
  TStack_450._padding_ = CONCAT44(uStack_554,iStack_558);
  TStack_450.CurrentBitIndex = iStack_544;
  TStack_450.UnvisitedBitMask = 0xffffffff;
  TStack_450._28_4_ = iStack_4fc;
  TStack_450.BaseBitIndex = local_540;
  uStack_430 = CONCAT44(uStack_534,iStack_538);
  iVar25 = (int)uVar21 >> 5;
  local_560 = (TMap<EDS_MoneyType,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_MoneyType,__int64,0>_>
               *)pTVar2;
  local_550 = puVar1;
  local_458 = pTVar2;
  TStack_450.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar21 < 0) || (iVar5 < (int)uVar21)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar6 = *(uint *)&(this->LevelUpCostMap).field_0x28;
  if (uVar21 != uVar6) {
    puVar22 = *(undefined1 **)&(this->LevelUpCostMap).field_0x20;
    if (puVar22 == (undefined1 *)0x0) {
      puVar22 = puVar1;
    }
    uVar21 = -1 << ((byte)uVar21 & 0x1f) & *(uint *)(puVar22 + (longlong)iVar25 * 4);
    while (uVar21 == 0) {
      lVar17 = (longlong)iVar25;
      uVar20 = uVar20 + 0x20;
      iVar25 = iVar25 + 1;
      uVar21 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar25) goto LAB_14bdbdaa0;
      uVar21 = *(uint *)(puVar22 + lVar17 * 4 + 4);
    }
    uVar4 = (ulonglong)(-uVar21 & uVar21) * 2 + 1;
    lVar17 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    uVar21 = (uVar20 - 1) + (int)lVar17;
    if ((int)uVar6 < (int)uVar21) {
      uVar21 = uVar6;
    }
  }
LAB_14bdbdaa0:
  do {
    pTVar10 = local_458;
    if (*(int *)&local_458->field_0x8 - *(int *)&local_458->field_0x34 != (int)uStack_430) {
      `TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_566);
    }
    if (((TStack_450.CurrentBitIndex == uVar21) &&
        (TStack_450.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar10 == pTVar2)
       ) {
      lVar18 = CalcNeedExpToLimitLevel(this);
      lVar15 = CalcAllMaterialItemExp(this);
      if (lVar18 < lVar15) {
        lVar18 = CalcNeedExpToLimitLevel(this);
        lVar15 = CalcAllMaterialItemExp(this);
        OpenExpUpWarningPopup(this,0x2b819,lVar15 - lVar18);
        return;
      }
      lVar18 = CalcNeedExpToMaxLevel(this);
      lVar15 = CalcAllMaterialItemExp(this);
      if (lVar15 <= lVar18) {
        UDS_CharInfoData::GetData((ulong64)&local_520);
        bVar11 = FWeakObjectPtr::IsValid(&local_520);
        if (bVar11) {
          pTVar16 = TDelegate<void___cdecl(int,bool),FDefaultDelegateUserPolicy>::
                    TDelegate<void___cdecl(int,bool),FDefaultDelegateUserPolicy>
                              (local_3f8,&this->OnSuccessCharacterExpUpEvent);
          pUVar14 = FWeakObjectPtr::Get(&local_520);
          FDS_CharacterService::RequestCharacterExpUp(*(int *)&pUVar14[8].field_0x8,pTVar2,pTVar16);
          return;
        }
        return;
      }
      lVar18 = CalcNeedExpToMaxLevel(this);
      lVar15 = CalcAllMaterialItemExp(this);
      OpenExpUpWarningPopup(this,0x2b81a,lVar15 - lVar18);
      return;
    }
    uVar7 = *(undefined8 *)(*(longlong *)pTVar10 + (longlong)TStack_450.CurrentBitIndex * 0x10);
    if (0 < (int)((ulonglong)uVar7 >> 0x20)) {
      pFVar13 = FDS_CharacterLevelUpCostTableRow::Get((longlong)(int)uVar7,true);
      if (pFVar13 == (FDS_CharacterLevelUpCostTableRow *)0x0) {
        pUVar12 = UDS_LogManager::GetInst();
        if (pUVar12 == (UDS_LogManager *)0x0) {
          return;
        }
        pUVar12 = UDS_LogManager::GetInst();
        local_158._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_158,"UDS_VM_CharacterLevelup::ExecuteExpUp",0x25,Yes);
        UDS_LogManager::PrintLog
                  (pUVar12,1,Warning,local_158.Ptr,0x6d,L"levelUpCostTable is nullptr.");
        if ((void *)local_158._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_158._padding_);
          return;
        }
        return;
      }
      DS_ItemDataUtil::GetItemDataByTID((int)&local_528);
      bVar11 = FWeakObjectPtr::IsValid(&local_528);
      if (!bVar11) {
        pUVar12 = UDS_LogManager::GetInst();
        if (pUVar12 == (UDS_LogManager *)0x0) {
          return;
        }
        pUVar12 = UDS_LogManager::GetInst();
        local_278._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_278,"UDS_VM_CharacterLevelup::ExecuteExpUp",0x25,Yes);
        UDS_LogManager::PrintLog
                  (pUVar12,1,Warning,local_278.Ptr,0x74,L"itemData is Invalid. ItemTID : %d");
        if ((void *)local_278._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_278._padding_);
          return;
        }
        return;
      }
      pUVar14 = FWeakObjectPtr::Get(&local_528);
      if (pUVar14[0x11].field_0x9 != '\0') break;
    }
    TStack_450.UnvisitedBitMask = TStack_450.UnvisitedBitMask & ~TStack_450._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_450);
  } while( true );
  pTVar23 = &local_410;
  local_410._0_8_ = 0;
  lVar18 = 0x2b753;
  local_410._8_8_ = 0;
  local_410._16_4_ = 0;
  goto LAB_14bdbdd65;
}

// GetCharLevelupData @ 14bdc2740

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FDS_CharLevelupData * __thiscall
UDS_VM_CharacterLevelup::GetCharLevelupData
          (UDS_VM_CharacterLevelup *this,FDS_CharLevelupData *__return_storage_ptr__)

{
  uint uVar1;
  undefined8 uVar2;
  code *pcVar3;
  ForElementType<unsigned_int> FVar4;
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *pTVar5;
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *pTVar6;
  bool bVar7;
  uint uVar8;
  UDS_LogManager *pUVar9;
  FDS_CharLevelupData *pFVar10;
  FDS_CharacterLevelUpCostTableRow *this_00;
  UObject *pUVar11;
  UDS_CharInfoData *this_01;
  long64 lVar12;
  FDS_CharacterLevelTableRow *this_02;
  FDS_CharacterBaseTableRow *this_03;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  int iVar16;
  ulonglong uVar17;
  uint uVar18;
  ForElementType<unsigned_int> FVar19;
  ulonglong uVar20;
  uint *puVar21;
  ulonglong uVar22;
  uint uVar23;
  int iVar24;
  undefined1 auStackY_358 [32];
  undefined1 local_318 [8];
  FWeakObjectPtr local_310;
  ForElementType<unsigned_int> local_308;
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *local_300;
  undefined8 uStack_2f8;
  undefined1 *local_2f0;
  undefined4 uStack_2e8;
  uint uStack_2e4;
  uint local_2e0;
  uint uStack_2dc;
  int iStack_2d8;
  undefined4 uStack_2d4;
  int local_2d0;
  int local_2cc;
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *local_2c8;
  FDS_CharLevelupData *local_2c0;
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *local_2b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_2b0;
  undefined8 uStack_290;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_358;
  local_2c0 = __return_storage_ptr__;
  UDS_CharInfoData::GetData((ulong64)&local_310);
  bVar7 = FWeakObjectPtr::IsValid(&local_310);
  if (bVar7) {
    uVar15 = 0;
    local_308 = (ForElementType<unsigned_int>)&(this->LevelUpCostMap).field_0x10;
    uVar23 = *(uint *)&(this->LevelUpCostMap).field_0x28;
    local_300 = &this->LevelUpCostMap;
    uVar18 = 0;
    uVar8 = 1;
    iVar24 = 0;
    uStack_2e4 = uVar18;
    local_2e0 = uVar18;
    if (uVar23 != 0) {
      puVar21 = *(uint **)&(this->LevelUpCostMap).field_0x20;
      if (puVar21 == (uint *)0x0) {
        puVar21 = (uint *)local_308;
      }
      uVar1 = *puVar21;
      uVar14 = uVar15;
      uVar20 = uVar15;
      local_2e0 = 0;
      uVar18 = 0;
      while (uVar1 == 0) {
        iVar24 = (int)uVar14;
        local_2e0 = (int)uVar20 + 0x20;
        uVar20 = (ulonglong)local_2e0;
        uVar18 = iVar24 + 1;
        uVar14 = (ulonglong)uVar18;
        if ((int)((uVar23 - 1) + ((int)(uVar23 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar18) {
          iVar24 = *(int *)&(this->LevelUpCostMap).field_0x28;
          uStack_2e4 = uVar23;
          goto LAB_14bdc2905;
        }
        uVar1 = (puVar21 + 1)[iVar24];
      }
      iVar24 = *(int *)&(this->LevelUpCostMap).field_0x28;
      uVar8 = -uVar1 & uVar1;
      uVar14 = (ulonglong)uVar8 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar14 != 0) {
        for (; uVar14 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      local_2d0 = (int)lVar13;
      uStack_2e4 = (local_2e0 - 1) + local_2d0;
      if (iVar24 < (int)uStack_2e4) {
        uStack_2e4 = uVar23;
      }
    }
LAB_14bdc2905:
    iStack_2d8 = *(int *)&(this->LevelUpCostMap).field_0x8 -
                 *(int *)&(this->LevelUpCostMap).field_0x34;
    uVar23 = *(uint *)&(this->LevelUpCostMap).field_0x28;
    uStack_2e8 = 0xffffffff;
    uStack_2f8 = CONCAT44(uVar8,uVar18);
    uVar18 = uVar23 & 0xffffffe0;
    TStack_2b0.CurrentBitIndex = uStack_2e4;
    TStack_2b0.UnvisitedBitMask = 0xffffffff;
    TStack_2b0._padding_ = uStack_2f8;
    iVar16 = (int)uVar23 >> 5;
    TStack_2b0._28_4_ = uStack_2e4;
    TStack_2b0.BaseBitIndex = local_2e0;
    uStack_290 = CONCAT44(uStack_2d4,iStack_2d8);
    local_2f0 = (undefined1 *)local_308;
    uStack_2dc = uStack_2e4;
    local_2c8 = local_300;
    local_2b8 = local_300;
    TStack_2b0.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_308;
    if ((((int)uVar23 < 0) || (iVar24 < (int)uVar23)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      pFVar10 = (FDS_CharLevelupData *)(*pcVar3)();
      return pFVar10;
    }
    pTVar5 = local_2c8;
    FVar4 = local_308;
    uVar8 = *(int *)((longlong)local_308 + 0x18);
    uVar14 = uVar15;
    if (uVar23 != uVar8) {
      FVar19 = *(ForElementType<unsigned_int> *)((longlong)local_308 + 0x10);
      if (*(ForElementType<unsigned_int> *)((longlong)local_308 + 0x10) ==
          (ForElementType<unsigned_int>)0x0) {
        FVar19 = local_308;
      }
      uVar23 = -1 << ((byte)uVar23 & 0x1f) & *(uint *)((longlong)FVar19 + (longlong)iVar16 * 4);
      while (uVar23 == 0) {
        lVar13 = (longlong)iVar16;
        uVar18 = uVar18 + 0x20;
        iVar16 = iVar16 + 1;
        uVar23 = uVar8;
        if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16)
        goto LAB_14bdc2a30;
        uVar23 = *(uint *)((undefined1 *)((longlong)FVar19 + 4) + lVar13 * 4);
      }
      uVar20 = (ulonglong)(-uVar23 & uVar23) * 2 + 1;
      lVar13 = 0x3f;
      if (uVar20 != 0) {
        for (; uVar20 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      local_2cc = (int)lVar13;
      uVar23 = local_2cc + -1 + uVar18;
      if ((int)uVar8 < (int)uVar23) {
        uVar23 = uVar8;
      }
    }
LAB_14bdc2a30:
    while( true ) {
      pTVar6 = local_2b8;
      if (*(int *)&local_2b8->field_0x8 - *(int *)&local_2b8->field_0x34 != (int)uStack_290) {
        local_318[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_318);
      }
      if (((TStack_2b0.CurrentBitIndex == uVar23) &&
          ((ForElementType<unsigned_int>)TStack_2b0.Array == FVar4)) && (pTVar6 == pTVar5)) break;
      uVar2 = *(undefined8 *)(*(longlong *)pTVar6 + (longlong)TStack_2b0.CurrentBitIndex * 0x10);
      this_00 = FDS_CharacterLevelUpCostTableRow::GetRef((longlong)(int)uVar2,true);
      bVar7 = FDS_CharacterLevelUpCostTableRow::IsValid(this_00);
      if (bVar7) {
        uVar14 = uVar14 + (longlong)(int)((ulonglong)uVar2 >> 0x20) * this_00->RewardCharExp;
      }
      TStack_2b0.UnvisitedBitMask = TStack_2b0.UnvisitedBitMask & ~TStack_2b0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_2b0);
    }
    pUVar11 = FWeakObjectPtr::Get(&local_310);
    iVar24 = *(int *)&pUVar11[8].field_0xc;
    pUVar11 = FWeakObjectPtr::Get(&local_310);
    __return_storage_ptr__ = local_2c0;
    uVar20 = *(ulonglong *)&pUVar11[8].field_0x10;
    uVar22 = uVar15;
    for (; uVar17 = uVar20, 0 < (longlong)uVar14; uVar14 = uVar14 - lVar13) {
      this_01 = (UDS_CharInfoData *)FWeakObjectPtr::Get(&local_310);
      lVar12 = UDS_CharInfoData::GetLevelTableRowID(this_01,iVar24);
      this_02 = FDS_CharacterLevelTableRow::GetRef(lVar12,true);
      bVar7 = FDS_CharacterLevelTableRow::IsValid(this_02);
      if (!bVar7) break;
      uVar17 = uVar14 + uVar20;
      if ((longlong)uVar17 <= this_02->ReqCharExp) break;
      lVar13 = this_02->ReqCharExp - uVar20;
      iVar24 = iVar24 + 1;
      uVar22 = uVar22 + lVar13;
      uVar20 = uVar15;
    }
    pUVar11 = FWeakObjectPtr::Get(&local_310);
    this_03 = FDS_CharacterBaseTableRow::GetRef((longlong)*(int *)&pUVar11[8].field_0x8,true);
    bVar7 = FDS_CharacterBaseTableRow::IsValid(this_03);
    if (bVar7) {
      iVar16 = this_03->MaxLevel;
      if (iVar24 < this_03->MaxLevel) {
        iVar16 = iVar24;
      }
      local_300 = (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
                  CONCAT44(local_300._4_4_,iVar16);
      *(TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> **)
       __return_storage_ptr__ = local_300;
      __return_storage_ptr__->AddExp = uVar22;
      __return_storage_ptr__->PostLevelUpExp = uVar17;
    }
    else {
      pUVar9 = UDS_LogManager::GetInst();
      if (pUVar9 != (UDS_LogManager *)0x0) {
        pUVar9 = UDS_LogManager::GetInst();
        local_168._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_168,"UDS_VM_CharacterLevelup::GetCharLevelupData",0x2b,Yes);
        UDS_LogManager::PrintLog
                  (pUVar9,1,Warning,local_168.Ptr,0xcb,L"characterBaseTableRow is Invalid.");
        if ((void *)local_168._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_168._padding_);
        }
      }
      bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_1915500876521275188>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_CharacterLevelup.cpp"
                         ,0xcc,"false");
      if (bVar7) {
        pcVar3 = (code *)swi(3);
        pFVar10 = (FDS_CharLevelupData *)(*pcVar3)();
        return pFVar10;
      }
      *(undefined8 *)__return_storage_ptr__ = 0;
      __return_storage_ptr__->AddExp = 0;
      __return_storage_ptr__->PostLevelUpExp = 0;
    }
  }
  else {
    pUVar9 = UDS_LogManager::GetInst();
    if (pUVar9 != (UDS_LogManager *)0x0) {
      pUVar9 = UDS_LogManager::GetInst();
      local_288._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_288,"UDS_VM_CharacterLevelup::GetCharLevelupData",0x2b,Yes);
      UDS_LogManager::PrintLog
                (pUVar9,1,Warning,local_288.Ptr,0x9d,L"charInfoData is Invalid. CharEntityID : %llu"
                );
      if ((void *)local_288._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_288._padding_);
      }
    }
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1915500876521275234>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_CharacterLevelup.cpp"
                       ,0x9e,"false");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      pFVar10 = (FDS_CharLevelupData *)(*pcVar3)();
      return pFVar10;
    }
    *(undefined8 *)__return_storage_ptr__ = 0;
    __return_storage_ptr__->AddExp = 0;
    __return_storage_ptr__->PostLevelUpExp = 0;
  }
  return __return_storage_ptr__;
}

// GetLevelUpCostIDByItemTID @ 14bdc3410

int __thiscall
UDS_VM_CharacterLevelup::GetLevelUpCostIDByItemTID(UDS_VM_CharacterLevelup *this,long64 *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  undefined8 uVar3;
  ForAnyElementType FVar4;
  undefined1 local_res18 [8];
  TArray<FDS_CharacterLevelUpCostTableRow_const_*,TSizedDefaultAllocator<32>_> local_18;
  
  FDS_CharacterLevelUpCostTableRow::GetAll(&local_18);
  iVar2 = local_18.ArrayNum;
  pFVar1 = local_18.AllocatorInstance.Data + (longlong)iVar2 * 8;
  uVar3 = local_18._8_8_;
  FVar4.Data = local_18.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar3 != iVar2) {
      `TCheckedPointerIterator<FDS_CharacterLevelUpCostTableRow_const_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res18);
      uVar3 = local_18._8_8_;
    }
    if (FVar4.Data == pFVar1) break;
    if ((longlong)*(int *)(*(longlong *)FVar4.Data + 0x10) == *param_1) {
      iVar2 = *(int *)(*(longlong *)FVar4.Data + 8);
LAB_14bdc3474:
      if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.AllocatorInstance.Data);
      }
      return iVar2;
    }
    FVar4.Data = FVar4.Data + 8;
  }
  iVar2 = 0;
  goto LAB_14bdc3474;
}

// OnAutoMaterialAdd @ 14bdca080

void __thiscall UDS_VM_CharacterLevelup::OnAutoMaterialAdd(UDS_VM_CharacterLevelup *this)

{
  FDS_CharacterLevelUpCostTableRow *pFVar1;
  longlong lVar2;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *this_00;
  int iVar3;
  bool bVar4;
  long64 lVar5;
  UObject *pUVar6;
  int *piVar7;
  int *piVar8;
  longlong lVar9;
  ForAnyElementType FVar10;
  FScriptContainerElement *pFVar11;
  FIdentityFunctor local_res8;
  uint local_res10 [2];
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *local_res18 [2]
  ;
  TPairInitializer<int_const_&,int_&> local_98;
  FScriptContainerElement *local_88;
  TArray<FDS_CharacterLevelUpCostTableRow_const_*,TSizedDefaultAllocator<32>_> local_80;
  int *local_70;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> **local_68;
  int *local_60;
  uint *local_58;
  
  local_res18[0] =
       (TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
       &this->LevelUpCostMap;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Reset
            (local_res18[0]);
  lVar5 = CalcNeedExpToLimitLevel(this);
  FDS_CharacterLevelUpCostTableRow::GetAll(&local_80);
  local_res8 = SUB81(this,0);
  AlgoImpl::
  IntroSortInternal<FDS_CharacterLevelUpCostTableRow_const_*,int,FIdentityFunctor,TDereferenceWrapper<FDS_CharacterLevelUpCostTableRow_const_*,_UDS_VM_CharacterLevelup::OnAutoMaterialAdd_::__l2::<lambda_1>_>_>
            ((FDS_CharacterLevelUpCostTableRow **)local_80.AllocatorInstance.Data,local_80.ArrayNum,
             local_res8,(<lambda_1> *)local_res10);
  iVar3 = local_80.ArrayNum;
  this_00 = local_res18[0];
  local_88 = local_80.AllocatorInstance.Data + (longlong)local_80.ArrayNum * 8;
  FVar10.Data = local_80.AllocatorInstance.Data;
  pFVar11 = local_88;
LAB_14bdca110:
  do {
    if (local_80.ArrayNum != iVar3) {
      `TCheckedPointerIterator<FDS_CharacterLevelUpCostTableRow_const_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (FVar10.Data == pFVar11) {
      UpdateMaterialItemList(this);
      UpdateQuantityControl(this);
      UpdateNeedMoneyDisplay(this);
      UpdateTargetExpUp(this);
      if (local_80.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_80.AllocatorInstance.Data);
      }
      return;
    }
    pFVar1 = *(FDS_CharacterLevelUpCostTableRow **)FVar10.Data;
    DS_ItemDataUtil::GetItemDataByTID((int)&local_98 + 8);
    bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&local_98.Value);
    if (bVar4) {
      pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)&local_98.Value);
      local_res10[0] = CONCAT31(local_res10[0]._1_3_,1);
      piVar7 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
               ::FindOrAddImpl<enum_EDS_InventoryType_const_&>
                         (&pUVar6[10].field_0x18,1,(EDS_InventoryType *)local_res10);
      piVar8 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
               ::FindOrAddImpl<enum_EDS_InventoryType_const_&>
                         (&pUVar6[8].field_0x18,local_res10[0] & 0xff,
                          (EDS_InventoryType *)local_res10);
      lVar2 = pFVar1->RewardCharExp;
      lVar9 = (*piVar8 + *piVar7) * lVar2;
      if (lVar9 <= lVar5) {
        lVar5 = lVar5 - lVar9;
        pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)&local_98.Value);
        local_res10[0] = CONCAT31(local_res10[0]._1_3_,1);
        piVar7 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
                 ::FindOrAddImpl<enum_EDS_InventoryType_const_&>
                           (&pUVar6[10].field_0x18,1,(EDS_InventoryType *)local_res10);
        piVar8 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
                 ::FindOrAddImpl<enum_EDS_InventoryType_const_&>
                           (&pUVar6[8].field_0x18,local_res10[0] & 0xff,
                            (EDS_InventoryType *)local_res10);
        local_70 = &pFVar1->ID;
        local_68 = local_res18;
        local_res18[0] =
             (TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
             CONCAT44(local_res18[0]._4_4_,*piVar7 + *piVar8);
        TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
        Emplace<TPairInitializer<int_const_&,int_&&>_>
                  (this_00,(TPairInitializer<int_const_&,int_&&> *)(local_res18 + 1),
                   (bool *)&local_70);
        FVar10.Data = FVar10.Data + 8;
        pFVar11 = local_88;
        goto LAB_14bdca110;
      }
      local_res10[0] = (uint)(lVar5 / lVar2);
      local_60 = &pFVar1->ID;
      lVar5 = lVar5 - (int)local_res10[0] * lVar2;
      local_58 = local_res10;
      TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<int_const_&,int_&>_>(this_00,&local_98,(bool *)&local_60);
      pFVar11 = local_88;
    }
    FVar10.Data = FVar10.Data + 8;
  } while( true );
}

// OnEventExpUpEnd @ 14bdce1a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_CharacterLevelup::OnEventExpUpEnd
          (UDS_VM_CharacterLevelup *this,FDS_WidgetEventField *param_1)

{
  code *pcVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  UDS_CharacterUIEvent *pUVar4;
  UDS_CharInfoData *this_00;
  undefined1 auStackY_188 [32];
  FWeakObjectPtr local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  UDS_CharInfoData::GetData((ulong64)local_148);
  bVar2 = FWeakObjectPtr::IsValid(local_148);
  if (bVar2) {
    this_00 = (UDS_CharInfoData *)FWeakObjectPtr::Get(local_148);
    bVar2 = UDS_CharInfoData::CanAscend(this_00);
    if (bVar2) {
      pUVar4 = UDS_CharacterUIEvent::GetEvent();
      if (pUVar4 != (UDS_CharacterUIEvent *)0x0) {
        FDS_EventDelegate<enum_EDS_CharStatusPanelType_const_>::Broadcast
                  (&pUVar4->OnChangeDetailPanel,Ascend);
      }
    }
    else {
      pUVar4 = UDS_CharacterUIEvent::GetEvent();
      if (pUVar4 != (UDS_CharacterUIEvent *)0x0) {
        FDS_EventDelegate<int_const_,__int64_const_,__int64_const_>::Broadcast
                  (&pUVar4->OnUpdateTargetExp,0,0,0);
      }
    }
    this->IsExpIncreasing = false;
  }
  else {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_CharacterLevelup::OnEventExpUpEnd",0x28,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,local_138.Ptr,0x315,
                 L"charInfoData is Invalid. CharEntityID : %llu");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1915500876521274602>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_CharacterLevelup.cpp"
                       ,0x316,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pUVar4 = UDS_CharacterUIEvent::GetEvent();
    if (pUVar4 != (UDS_CharacterUIEvent *)0x0) {
      FDS_EventDelegate<enum_EDS_CharStatusPanelType_const_>::Broadcast
                (&pUVar4->OnChangeDetailPanel,Info);
    }
  }
  return;
}

// OnEventMaterialItemSlot @ 14bdce4a0

void __thiscall
UDS_VM_CharacterLevelup::OnEventMaterialItemSlot
          (UDS_VM_CharacterLevelup *this,TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr> param_1)

{
  undefined1 *puVar1;
  FDS_EventDelegate<__int64_const_> *this_00;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  UObject *pUVar9;
  UClass *pUVar10;
  UDS_CharacterUIEvent *pUVar11;
  longlong lVar12;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  UObject *local_res20;
  FDestructionSentinel local_58;
  
  local_res10 = param_1.WeakPtr;
  bVar5 = FWeakObjectPtr::IsValid(&local_res10);
  if (!bVar5) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1915500876521275103>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_CharacterLevelup.cpp"
                       ,0x121,"false");
    if (!bVar5) {
      return;
    }
    goto code_r0x00014bdce5d5;
  }
  pUVar9 = FWeakObjectPtr::Get(&local_res10);
  pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar9 + 1));
  if (pUVar9 == (UObject *)0x0) {
LAB_14bdce53c:
    pUVar9 = (UObject *)0x0;
  }
  else {
    pUVar10 = Z_Construct_UClass_UDS_M_ItemImplBase_NoRegister();
    iVar8 = (int)pUVar10->_padding_;
    if ((*(int *)(*(longlong *)&pUVar9->field_0x10 + 0x38) < iVar8) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar9->field_0x10 + 0x30) + (longlong)iVar8 * 8) !=
        &pUVar10->_padding_)) goto LAB_14bdce53c;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar9);
  }
  local_res18.ObjectIndex = 0;
  local_res18.ObjectSerialNumber = 0;
  local_res20 = pUVar9;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar9);
  }
  FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_res20);
  bVar5 = FWeakObjectPtr::IsValid(&local_res18);
  if (bVar5) {
    pUVar9 = FWeakObjectPtr::Get(&local_res18);
    iVar8 = (**(code **)(*(longlong *)pUVar9 + 0x380))(pUVar9);
    this->SelectedItemTID = (longlong)iVar8;
    pUVar11 = UDS_CharacterUIEvent::GetEvent();
    if (pUVar11 != (UDS_CharacterUIEvent *)0x0) {
      this_00 = &pUVar11->OnSelectCharLevelUpItem;
      bVar5 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                        ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00);
      if (bVar5) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
                   (FWriteAccessScope *)&local_58);
        puVar1 = &(pUVar11->OnSelectCharLevelUpItem).Delegate.field_0x1c;
        *(int *)puVar1 = *(int *)puVar1 + 1;
        bVar5 = false;
        iVar8 = *(int *)&(pUVar11->OnSelectCharLevelUpItem).Delegate.field_0x10 + -1;
        if (-1 < iVar8) {
          lVar12 = (longlong)iVar8 << 4;
          bVar5 = false;
          do {
            if ((*(int *)&(pUVar11->OnSelectCharLevelUpItem).Delegate.field_0x10 <= iVar8) &&
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
            lVar2 = *(longlong *)&(pUVar11->OnSelectCharLevelUpItem).Delegate.field_0x8;
            if (((*(int *)(lVar12 + 8 + lVar2) == 0) ||
                (plVar3 = *(longlong **)(lVar12 + lVar2), plVar3 == (longlong *)0x0)) ||
               (cVar7 = (**(code **)(*plVar3 + 0x68))(), cVar7 == '\0')) {
              bVar5 = true;
            }
            lVar12 = lVar12 + -0x10;
            iVar8 = iVar8 + -1;
          } while (-1 < iVar8);
        }
        puVar1 = &(pUVar11->OnSelectCharLevelUpItem).Delegate.field_0x1c;
        *(int *)puVar1 = *(int *)puVar1 + -1;
        if (bVar5) {
          TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,false);
        }
        if (local_58.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
        }
      }
    }
    UpdateQuantityControl(this);
  }
  else {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1915500876521275100>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_CharacterLevelup.cpp"
                       ,0x124,"false");
    if (bVar5) {
code_r0x00014bdce5d5:
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  return;
}

// OnExpUpWarningPopupCancelClicked @ 14bdcebd0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_CharacterLevelup::OnExpUpWarningPopupCancelClicked
          (UDS_VM_CharacterLevelup *this,TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1)

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

// OnExpUpWarningPopupConfirmClicked @ 14bdcec30

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_CharacterLevelup::OnExpUpWarningPopupConfirmClicked
          (UDS_VM_CharacterLevelup *this,TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1)

{
  bool bVar1;
  TDelegate<void___cdecl(int,bool),FDefaultDelegateUserPolicy> *pTVar2;
  UObject *pUVar3;
  UDS_WindowManager *this_00;
  float local_res8 [2];
  uint local_res18 [2];
  FWeakObjectPtr local_res20;
  TDelegate<void___cdecl(int,bool),FDefaultDelegateUserPolicy> local_28;
  
  UDS_CharInfoData::GetData((ulong64)&local_res20);
  bVar1 = FWeakObjectPtr::IsValid(&local_res20);
  if (bVar1) {
    pTVar2 = TDelegate<void___cdecl(int,bool),FDefaultDelegateUserPolicy>::
             TDelegate<void___cdecl(int,bool),FDefaultDelegateUserPolicy>
                       (&local_28,&this->OnSuccessCharacterExpUpEvent);
    pUVar3 = FWeakObjectPtr::Get(&local_res20);
    FDS_CharacterService::RequestCharacterExpUp
              (*(int *)&pUVar3[8].field_0x8,&this->LevelUpCostMap,pTVar2);
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
    local_res8[0] = 0.0;
    local_res18[0] = 0;
    UDS_WindowManager::CloseWindow(this_00,PopupCommon,local_res18,local_res8);
  }
  return;
}

// OnQuantityChanged @ 14bdd14c0

void __thiscall
UDS_VM_CharacterLevelup::OnQuantityChanged(UDS_VM_CharacterLevelup *this,float param_1)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined1 *puVar5;
  
  uVar2 = GetLevelUpCostIDByItemTID(this,&this->SelectedItemTID);
  if (*(int *)&(this->LevelUpCostMap).field_0x8 != *(int *)&(this->LevelUpCostMap).field_0x34) {
    puVar5 = *(undefined1 **)&(this->LevelUpCostMap).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->LevelUpCostMap).field_0x38;
    }
    iVar3 = *(int *)(puVar5 + (ulonglong)(*(int *)&(this->LevelUpCostMap).field_0x48 - 1U & uVar2) *
                              4);
    if (iVar3 != -1) {
      lVar1 = *(longlong *)&this->LevelUpCostMap;
      do {
        if (*(uint *)(lVar1 + (longlong)iVar3 * 0x10) == uVar2) {
          piVar4 = TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::
                   FindChecked((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                                *)&this->LevelUpCostMap,uVar2);
          *piVar4 = (int)param_1;
          UpdateMaterialItemList(this);
          break;
        }
        iVar3 = *(int *)(lVar1 + 8 + (longlong)iVar3 * 0x10);
      } while (iVar3 != -1);
    }
  }
  UpdateNeedMoneyDisplay(this);
  UpdateTargetExpUp(this);
  return;
}

// OnSelectedMaterialItem @ 14bdd1cf0

void __thiscall
UDS_VM_CharacterLevelup::OnSelectedMaterialItem(UDS_VM_CharacterLevelup *this,long64 *param_1)

{
  undefined1 *puVar1;
  FDS_EventDelegate<__int64_const_> *this_00;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  UDS_CharacterUIEvent *pUVar9;
  uint uVar10;
  longlong lVar11;
  FDestructionSentinel local_38;
  
  this->SelectedItemTID = *param_1;
  pUVar9 = UDS_CharacterUIEvent::GetEvent();
  if (pUVar9 != (UDS_CharacterUIEvent *)0x0) {
    this_00 = &pUVar9->OnSelectCharLevelUpItem;
    bVar5 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00);
    if (bVar5) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
                 (FWriteAccessScope *)&local_38);
      puVar1 = &(pUVar9->OnSelectCharLevelUpItem).Delegate.field_0x1c;
      *(int *)puVar1 = *(int *)puVar1 + 1;
      bVar5 = false;
      uVar10 = *(int *)&(pUVar9->OnSelectCharLevelUpItem).Delegate.field_0x10 - 1;
      if (-1 < (int)uVar10) {
        lVar11 = (longlong)(int)uVar10 << 4;
        bVar5 = false;
        do {
          uVar8 = 0;
          if ((int)uVar10 < *(int *)&(pUVar9->OnSelectCharLevelUpItem).Delegate.field_0x10) {
            uVar8 = ~uVar10 >> 0x1f;
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
          lVar2 = *(longlong *)&(pUVar9->OnSelectCharLevelUpItem).Delegate.field_0x8;
          if (((*(int *)(lVar2 + 8 + lVar11) == 0) ||
              (plVar3 = *(longlong **)(lVar2 + lVar11), plVar3 == (longlong *)0x0)) ||
             (cVar7 = (**(code **)(*plVar3 + 0x68))(), cVar7 == '\0')) {
            bVar5 = true;
          }
          lVar11 = lVar11 + -0x10;
          uVar10 = uVar10 - 1;
        } while (-1 < (int)uVar10);
      }
      puVar1 = &(pUVar9->OnSelectCharLevelUpItem).Delegate.field_0x1c;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      if (bVar5) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,false);
      }
      if (local_38.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
      }
    }
  }
  UpdateQuantityControl(this);
  return;
}

// OnSetViewModel @ 14bdd55a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_CharacterLevelup::OnSetViewModel
          (UDS_VM_CharacterLevelup *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  ulonglong uVar3;
  bool bVar4;
  UDS_LogManager *pUVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  undefined1 auStackY_248 [32];
  uint uStack_20c;
  TSharedPtr<FDS_ViewModelContext_CharLevelUp,1> local_208;
  code *local_1f8;
  ulonglong uStack_1f0;
  UDS_VM_CharacterLevelup *local_1e8;
  UDS_VM_CharacterLevelup *local_1e0;
  UDS_VM_CharacterLevelup *local_1d8;
  TSharedPtr<FDS_ViewModelContext,1> local_1d0;
  FDestructionSentinel local_1c0;
  undefined1 *local_1a8;
  FDestructionSentinel local_1a0;
  undefined1 *local_188;
  FDestructionSentinel local_180;
  undefined1 *local_168;
  undefined1 local_160 [264];
  void *local_58;
  wchar_t *local_50;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_248;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  local_1d0.Object = param_1->Object;
  local_1d0.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_1d0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1d0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1d0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_CharLevelUp>(&local_208,&local_1d0);
  if (local_208.Object == (FDS_ViewModelContext_CharLevelUp *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_58 = (void *)0x0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(local_160 + 8),
                 "UDS_VM_CharacterLevelup::OnSetViewModel",0x27,Yes);
      UDS_LogManager::PrintLog(pUVar5,1,Warning,local_50,0x2c,L"context is Invalid.");
      if (local_58 != (void *)0x0) {
        FMemory::Free(local_58);
      }
    }
  }
  else {
    if (local_208.Object == (FDS_ViewModelContext_CharLevelUp *)0x0) {
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
    this->CharEntityID = (local_208.Object)->CharEntityID;
    uStack_1f0 = (ulonglong)uStack_20c << 0x20;
    local_1f8 = OnQuantityChanged;
    TMulticastDelegateRegistration<void___cdecl(float),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_CharacterLevelup>
              ((TMulticastDelegateRegistration<void___cdecl(float),FDefaultDelegateUserPolicy> *)
               &this->OnQuantityChangeDelegate,(UDS_VM_CharacterLevelup *)local_160,
               (pmf_6942bd38 *)this);
    uVar3 = uStack_1f0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnClickAutoDelegate,
               (FWriteAccessScope *)&local_1c0);
    local_1a8 = &(this->OnClickAutoDelegate).field_0x8;
    puVar6 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_1a8);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar6[2] = uVar7;
      *puVar6 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_CharacterLevelup____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar6[3] = 0;
      local_1e8 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 3),(FObjectPtr)&local_1e8);
      puVar6[4] = OnAutoMaterialAdd;
      puVar6[5] = uVar3 & 0xffffffff00000000;
    }
    if (local_1c0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1c0.Accessor,&local_1c0);
    }
    uVar3 = uStack_1f0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnTargetSlotModelUpdateDelegate,(FWriteAccessScope *)&local_1a0);
    local_188 = &(this->OnTargetSlotModelUpdateDelegate).field_0x8;
    puVar6 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_188);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &
                ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_ModelEventBase__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar6[2] = uVar7;
      *puVar6 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_CharacterLevelup____A6AXU__TWeakObjectPtr_VUDS_ModelEventBase__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar6[3] = 0;
      local_1e0 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 3),(FObjectPtr)&local_1e0);
      puVar6[4] = OnEventMaterialItemSlot;
      puVar6[5] = uVar3 & 0xffffffff00000000;
    }
    if (local_1a0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1a0.Accessor,&local_1a0);
    }
    uVar3 = uStack_1f0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnSuccessCharacterExpUpEvent,(FWriteAccessScope *)&local_180);
    local_168 = &(this->OnSuccessCharacterExpUpEvent).field_0x8;
    puVar6 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_168);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &___7__TCommonDelegateInstanceState___A6AXH_N_ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar6[2] = uVar7;
      *puVar6 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_CharacterLevelup____A6AXH_N_ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar6[3] = 0;
      local_1d8 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 3),(FObjectPtr)&local_1d8);
      puVar6[4] = OnSuccessCharacterExpUp;
      puVar6[5] = uVar3 & 0xffffffff00000000;
    }
    if (local_180.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_180.Accessor,&local_180);
    }
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Reset
              ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
               &this->LevelUpCostMap);
    TSet<TTuple<enum_EDS_MoneyType,__int64>,TDefaultMapHashableKeyFuncs<enum_EDS_MoneyType,__int64,0>,FDefaultSetAllocator>
    ::Reset(&this->LevelUpMoneyMap);
    this->SelectedItemTID = 0;
    UpdateMaterialItemList(this);
    UpdateQuantityControl(this);
    UpdateNeedMoneyDisplay(this);
    UpdateTargetExpUp(this);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_208.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnSuccessCharacterExpUp @ 14bdde5a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_CharacterLevelup::OnSuccessCharacterExpUp
          (UDS_VM_CharacterLevelup *this,int param_1,bool param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UDS_LogManager *pUVar5;
  UDS_CharacterUIEvent *pUVar6;
  UDS_CharInfoData *pUVar7;
  UObject *pUVar8;
  long64 lVar9;
  undefined1 auStackY_198 [32];
  FWeakObjectPtr local_158 [2];
  FName local_148;
  int local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Reset
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
             &this->LevelUpCostMap);
  UpdateMaterialItemList(this);
  UpdateQuantityControl(this);
  UpdateNeedMoneyDisplay(this);
  UDS_CharInfoData::GetData((ulong64)local_158);
  bVar3 = FWeakObjectPtr::IsValid(local_158);
  if (bVar3) {
    if (!param_2) {
      this->IsExpIncreasing = true;
      local_140 = FFieldNotificationClassDescriptor::EventExpUpStart.BitNumber;
      local_148 = FFieldNotificationClassDescriptor::EventExpUpStart.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_148);
      return;
    }
    pUVar7 = (UDS_CharInfoData *)FWeakObjectPtr::Get(local_158);
    bVar3 = UDS_CharInfoData::IsMaxLevel(pUVar7);
    if (!bVar3) {
      pUVar7 = (UDS_CharInfoData *)FWeakObjectPtr::Get(local_158);
      iVar4 = UDS_CharInfoData::GetAscendLimitLevel(pUVar7);
      if (iVar4 <= param_1) {
        pUVar8 = FWeakObjectPtr::Get(local_158);
        pUVar7 = (UDS_CharInfoData *)FWeakObjectPtr::Get(local_158);
        lVar1 = *(longlong *)&pUVar8[8].field_0x10;
        lVar9 = UDS_CharInfoData::GetRequiredCharExp(pUVar7);
        if (lVar9 <= lVar1) {
          pUVar6 = UDS_CharacterUIEvent::GetEvent();
          if (pUVar6 == (UDS_CharacterUIEvent *)0x0) {
            return;
          }
          FDS_EventDelegate<enum_EDS_CharStatusPanelType_const_>::Broadcast
                    (&pUVar6->OnChangeDetailPanel,Ascend);
          return;
        }
      }
      pUVar6 = UDS_CharacterUIEvent::GetEvent();
      if (pUVar6 == (UDS_CharacterUIEvent *)0x0) {
        return;
      }
      FDS_EventDelegate<int_const_,__int64_const_,__int64_const_>::Broadcast
                (&pUVar6->OnUpdateTargetExp,0,0,0);
      return;
    }
  }
  else {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_CharacterLevelup::OnSuccessCharacterExpUp",0x30,Yes);
      UDS_LogManager::PrintLog
                (pUVar5,1,Warning,local_138.Ptr,0xe7,L"charInfoData is Invalid. CharEntityID : %llu"
                );
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1915500876521275160>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_CharacterLevelup.cpp"
                       ,0xe8,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pUVar6 = UDS_CharacterUIEvent::GetEvent();
  if (pUVar6 != (UDS_CharacterUIEvent *)0x0) {
    FDS_EventDelegate<enum_EDS_CharStatusPanelType_const_>::Broadcast
              (&pUVar6->OnChangeDetailPanel,Info);
  }
  return;
}

// OpenExpUpWarningPopup @ 14bde1550

void __thiscall
UDS_VM_CharacterLevelup::OpenExpUpWarningPopup
          (UDS_VM_CharacterLevelup *this,int param_1,long64 param_2)

{
  FInstancedStruct *this_00;
  code *pcVar1;
  FObjectPtr_u_0 FVar2;
  bool bVar3;
  int iVar4;
  UDS_CommonPopupManager *this_01;
  UDS_M_CommonPopup *pUVar5;
  FObjectPtr_u_0 *pFVar6;
  FDS_Int64StringFormatArg *pFVar7;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  *pTVar8;
  FWeakObjectPtr local_res20;
  TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> local_148;
  FWeakObjectPtr local_138;
  FWeakObjectPtr local_130;
  UDS_GameInstance *local_128;
  UDS_CommonPopupManager *local_120;
  FDS_Text local_118;
  FDS_Text local_c8;
  code *local_78;
  ulonglong uStack_70;
  code *local_68;
  ulonglong uStack_60;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  local_58;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  local_40;
  
  local_128 = UDS_GameInstance::GetInst();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_128 != (UDS_GameInstance *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)local_128);
  }
  local_130.ObjectIndex = 0;
  local_130.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_128 != (UDS_GameInstance *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)local_128);
  }
  FWeakObjectPtr::operator=(&local_130,(FObjectPtr)&local_128);
  bVar3 = FWeakObjectPtr::IsValid(&local_130);
  if (bVar3) {
    local_120 = UDS_CommonPopupManager::GetInst();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_120 != (UDS_CommonPopupManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_120);
    }
    local_138.ObjectIndex = 0;
    local_138.ObjectSerialNumber = 0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_120 != (UDS_CommonPopupManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_120);
    }
    FWeakObjectPtr::operator=(&local_138,(FObjectPtr)&local_120);
    bVar3 = FWeakObjectPtr::IsValid(&local_138);
    if (bVar3) {
      this_01 = (UDS_CommonPopupManager *)FWeakObjectPtr::Get(&local_138);
      UDS_CommonPopupManager::CreateCommonPopup(this_01);
      bVar3 = FWeakObjectPtr::IsValid(&local_res20);
      if (bVar3) {
        pUVar5 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res20);
        local_118.StringTableType = None;
        local_118.StringTableID = 0;
        local_118.StringEnumTableNameID.ComparisonIndex.Value = 0;
        local_118.StringEnumTableNameID.Number = 0;
        local_118.TimeExpressionType = None;
        local_118.IsExpression = false;
        local_118.DateTime.Ticks = 0;
        local_118.TimeSpan.Ticks = 0;
        local_118.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_118.UniqueString.Data.ArrayNum = 0;
        local_118.UniqueString.Data.ArrayMax = 0;
        local_118.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_118.FormatArgs.ArrayNum = 0;
        local_118.FormatArgs.ArrayMax = 0;
        FDS_Text::SetTextFromStringTable(&local_118,StringUi,2);
        UDS_M_CommonPopup::SetTitle(pUVar5,&local_118);
        pUVar5 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res20);
        local_c8.StringTableType = None;
        local_c8.StringTableID = 0;
        local_c8.StringEnumTableNameID.ComparisonIndex.Value = 0;
        local_c8.StringEnumTableNameID.Number = 0;
        local_c8.TimeExpressionType = None;
        local_c8.DateTime.Ticks = 0;
        local_c8.TimeSpan.Ticks = 0;
        local_c8.IsExpression = false;
        local_c8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_c8.UniqueString.Data.ArrayNum = 0;
        local_c8.UniqueString.Data.ArrayMax = 0;
        local_c8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_c8.FormatArgs.ArrayNum = 0;
        local_c8.FormatArgs.ArrayMax = 0;
        local_148.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_148.ArrayNum = 0;
        local_148.ArrayMax = 0;
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x828,&local_148.AllocatorInstance,&local_148.ArrayMax);
        local_148.ArrayNum = iVar4 + 1;
        this_00 = (FInstancedStruct *)(local_148.AllocatorInstance.Data + (longlong)iVar4 * 0x28);
        FInstancedStruct::FInstancedStruct(this_00);
        pFVar6 = (FObjectPtr_u_0 *)FNumberFormattingOptions::DefaultWithGrouping();
        FVar2 = pFVar6[1];
        this_00[1].ScriptStruct.field0_0x0.ObjectPtr.field0_0x0 = *pFVar6;
        this_00[1].StructMemory = (uchar *)FVar2;
        this_00[2].ScriptStruct.field0_0x0 = (TObjectPtr<UScriptStruct_const_>_u_0)pFVar6[2];
        FInstancedStruct::InitializeAs<FDS_Int64StringFormatArg>(this_00);
        pFVar7 = FInstancedStruct::GetMutablePtr<FDS_Int64StringFormatArg>(this_00);
        if (pFVar7 != (FDS_Int64StringFormatArg *)0x0) {
          pFVar7->Value = param_2;
        }
        FDS_Text::SetTextFormatFromStringTable(&local_c8,StringUi,(longlong)param_1,&local_148);
        DestructItems<FDS_TextFormatArg,int>
                  ((FDS_TextFormatArg *)local_148.AllocatorInstance.Data,local_148.ArrayNum);
        if ((FDS_TextFormatArg *)local_148.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0) {
          FMemory::Free(local_148.AllocatorInstance.Data);
        }
        UDS_M_CommonPopup::SetMainContent(pUVar5,&local_c8);
        pUVar5 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res20);
        UDS_M_CommonPopup::SetButton(pUVar5,ButtonCancel,StringUi,0x66,false);
        pUVar5 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res20);
        local_148._8_8_ = local_148._8_8_ & 0xffffffff00000000;
        local_148.AllocatorInstance.Data =
             (FScriptContainerElement *)OnExpUpWarningPopupCancelClicked;
        local_78 = OnExpUpWarningPopupCancelClicked;
        uStack_70._0_4_ = local_148.ArrayNum;
        uStack_70._4_4_ = local_148.ArrayMax;
        pTVar8 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                 ::CreateUObject<UDS_VM_CharacterLevelup>(&local_58,this,(pmf_1d13ddb7 *)&local_78);
        UDS_M_CommonPopup::SetDelegate(pUVar5,ButtonCancel,pTVar8);
        pUVar5 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res20);
        UDS_M_CommonPopup::SetButton(pUVar5,ButtonConfirm,StringUi,0x65,false);
        pUVar5 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res20);
        local_148._8_8_ = local_148._8_8_ & 0xffffffff00000000;
        local_148.AllocatorInstance.Data =
             (FScriptContainerElement *)OnExpUpWarningPopupConfirmClicked;
        local_68 = OnExpUpWarningPopupConfirmClicked;
        uStack_60._0_4_ = local_148.ArrayNum;
        uStack_60._4_4_ = local_148.ArrayMax;
        pTVar8 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                 ::CreateUObject<UDS_VM_CharacterLevelup>(&local_40,this,(pmf_1d13ddb7 *)&local_68);
        UDS_M_CommonPopup::SetDelegate(pUVar5,ButtonConfirm,pTVar8);
        pUVar5 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res20);
        UDS_M_CommonPopup::OpenCommonPopup(pUVar5);
      }
      else {
        bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_1915500876521274645>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_CharacterLevelup.cpp"
                           ,0x2eb,"false");
        if (bVar3) goto code_r0x00014bde16ef;
      }
    }
    else {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_1915500876521274648>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_CharacterLevelup.cpp"
                         ,0x2e8,"false");
      if (bVar3) goto code_r0x00014bde16ef;
    }
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1915500876521274651>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_CharacterLevelup.cpp"
                       ,0x2e5,"false");
    if (bVar3) {
code_r0x00014bde16ef:
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// UpdateMaterialItemList @ 14bdf2a30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_CharacterLevelup::UpdateMaterialItemList(UDS_VM_CharacterLevelup *this)

{
  uint uVar1;
  longlong lVar2;
  undefined1 *puVar3;
  TReferenceControllerBase<1> *pTVar4;
  undefined8 uVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  UDS_M_ItemImplBase *this_00;
  FName FVar8;
  bool bVar9;
  int iVar10;
  UDS_LogManager *pUVar11;
  UDS_UserObjectListItem *pUVar12;
  int *piVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  undefined1 *puVar16;
  TPairInitializer<int_const_&,int_&&> *pTVar17;
  atomic<int> *paVar18;
  FName FVar19;
  undefined1 auStackY_208 [32];
  FIdentityFunctor local_1d8 [8];
  UDS_M_ItemImplBase *local_1d0;
  undefined4 local_1c8;
  uint local_1c4;
  TArray<FDS_CharacterLevelUpCostTableRow_const_*,TSizedDefaultAllocator<32>_> local_1c0;
  FName local_1a8;
  int local_1a0;
  FWeakObjectPtr local_198;
  TPairInitializer<int_const_&,int_&&> local_190;
  UDS_UserObjectListItem *local_180;
  uint *local_178;
  undefined4 *local_170;
  undefined1 local_168 [8];
  TReferenceControllerBase<1> *local_160;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_208;
  TDS_DataSetGetter<UDS_ItemDataSet>::Get((ulong64)&local_198);
  bVar9 = FWeakObjectPtr::IsValid(&local_198);
  if (!bVar9) {
    pUVar11 = UDS_LogManager::GetInst();
    if (pUVar11 != (UDS_LogManager *)0x0) {
      pUVar11 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_VM_CharacterLevelup::UpdateMaterialItemList",0x2f,Yes);
      UDS_LogManager::PrintLog(pUVar11,1,Warning,local_158.Ptr,0x165,L"itemDataSet is Invalid.");
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
    bVar9 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1915500876521275034>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_CharacterLevelup.cpp"
                       ,0x166,"false");
    if (!bVar9) {
      return;
    }
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FDS_EntryBindingEventField::Reset(&this->EntryBindingEventField);
  FDS_CharacterLevelUpCostTableRow::GetAll(&local_1c0);
  local_190._4_8_ = local_198;
  AlgoImpl::
  IntroSortInternal<FDS_CharacterLevelUpCostTableRow_const_*,int,FIdentityFunctor,TDereferenceWrapper<FDS_CharacterLevelUpCostTableRow_const_*,_UDS_VM_CharacterLevelup::UpdateMaterialItemList_::__l2::<lambda_1>_>_>
            ((FDS_CharacterLevelUpCostTableRow **)local_1c0.AllocatorInstance.Data,
             local_1c0.ArrayNum,local_1d8[0],(<lambda_1> *)((longlong)&local_190.Key + 4));
  uVar15 = (ulonglong)local_1c0.ArrayNum;
  local_1c4 = local_1c0.ArrayNum;
  local_1a8 = (FName)((longlong)local_1c0.AllocatorInstance.Data + uVar15 * 8);
  FVar19 = (FName)local_1c0.AllocatorInstance;
  do {
    FVar8 = local_1a8;
    if (local_1c0.ArrayNum != (uint)uVar15) {
      local_1d8[0] = (FIdentityFunctor)0x0;
      `TCheckedPointerIterator<FDS_CharacterLevelUpCostTableRow_const_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_1d8);
    }
    if (FVar19 == FVar8) {
      local_1a0 = FFieldNotificationClassDescriptor::EntryBindingEventField.BitNumber;
      local_1a8 = FFieldNotificationClassDescriptor::EntryBindingEventField.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1a8);
      goto LAB_14bdf2df2;
    }
    lVar2 = *(longlong *)FVar19;
    uVar1 = *(uint *)(lVar2 + 8);
    if (*(int *)&(this->LevelUpCostMap).field_0x8 != *(int *)&(this->LevelUpCostMap).field_0x34) {
      puVar3 = *(undefined1 **)&(this->LevelUpCostMap).field_0x40;
      puVar16 = &(this->LevelUpCostMap).field_0x38;
      if (puVar3 != (undefined1 *)0x0) {
        puVar16 = puVar3;
      }
      iVar10 = *(int *)(puVar16 +
                       (ulonglong)(*(int *)&(this->LevelUpCostMap).field_0x48 - 1U & uVar1) * 4);
      if (iVar10 != -1) {
        pTVar17 = *(TPairInitializer<int_const_&,int_&&> **)&(this->LevelUpCostMap).field_0x0;
        do {
          if (*(uint *)&pTVar17[iVar10].Key == uVar1) goto LAB_14bdf2c3e;
          iVar10 = *(int *)&pTVar17[iVar10].Value;
        } while (iVar10 != -1);
      }
    }
    local_170 = &local_1c8;
    local_1c8 = 0;
    pTVar17 = &local_190;
    local_178 = (uint *)(lVar2 + 8);
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_const_&,int_&&>_>
              ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
               &this->LevelUpCostMap,pTVar17,(bool *)&local_178);
LAB_14bdf2c3e:
    if (this->SelectedItemTID == 0) {
      this->SelectedItemTID = (longlong)*(int *)(lVar2 + 0x10);
    }
    pUVar12 = NewObject<UDS_UserObjectListItem>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar12 != (UDS_UserObjectListItem *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar12);
    }
    DS_ItemDataUtil::CreateItemModel
              ((EDS_ItemSlotStateType)&local_1d0,(int)CONCAT71((int7)((ulonglong)pTVar17 >> 8),0xe))
    ;
    this_00 = local_1d0;
    if (local_1d0 == (UDS_M_ItemImplBase *)0x0) {
      bVar9 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_1915500876521274998>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_CharacterLevelup.cpp"
                         ,0x18a,"false");
      if (bVar9) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
LAB_14bdf2df2:
      if ((FName)local_1c0.AllocatorInstance.Data == (FName)0x0) {
        return;
      }
      FMemory::Free(local_1c0.AllocatorInstance.Data);
      return;
    }
    piVar13 = TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::
              FindChecked((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                           *)&this->LevelUpCostMap,*(int *)(lVar2 + 8));
    UDS_M_ItemImplBase::SetQuantity(this_00,*piVar13);
    UDS_M_ItemImplBase::SetSelected
              (local_1d0,this->SelectedItemTID == (longlong)*(int *)(lVar2 + 0x10));
    UDS_ModelBase::AddUpdateModelDelegate
              ((UDS_ModelBase *)local_1d0,&this->OnTargetSlotModelUpdateDelegate);
    puVar14 = (undefined8 *)(**(code **)(local_1d0->_padding_ + 0x310))(local_1d0,local_168);
    pTVar4 = (TReferenceControllerBase<1> *)puVar14[1];
    uVar5 = *puVar14;
    if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
      paVar18 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar18 = &pTVar4->SharedReferenceCount;
      LOCK();
      *paVar18 = (atomic<int>)((int)*paVar18 + 1);
      UNLOCK();
    }
    iVar10 = (pUVar12->ViewModelContextArray).ArrayNum;
    piVar13 = &(pUVar12->ViewModelContextArray).ArrayMax;
    if (iVar10 == *piVar13) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&(pUVar12->ViewModelContextArray).AllocatorInstance,piVar13);
    }
    (pUVar12->ViewModelContextArray).ArrayNum = iVar10 + 1;
    pFVar6 = (pUVar12->ViewModelContextArray).AllocatorInstance.Data;
    *(undefined8 *)(pFVar6 + (longlong)iVar10 * 0x10) = uVar5;
    *(TReferenceControllerBase<1> **)(pFVar6 + (longlong)iVar10 * 0x10 + 8) = pTVar4;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar18 = (atomic<int>)((int)*paVar18 + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_160);
    local_180 = pUVar12;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar12 != (UDS_UserObjectListItem *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar12);
    }
    FDS_EntryBindingEventField::Add
              (&this->EntryBindingEventField,(TObjectPtr<UDS_UserObjectListItem>)&local_180);
    FVar19 = (FName)((longlong)FVar19 + 8);
    uVar15 = (ulonglong)local_1c4;
  } while( true );
}

// UpdateNeedMoneyDisplay @ 14bdf3170

void __thiscall UDS_VM_CharacterLevelup::UpdateNeedMoneyDisplay(UDS_VM_CharacterLevelup *this)

{
  TMap<EDS_MoneyType,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_MoneyType,__int64,0>_>
  *this_00;
  ulonglong uVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  code *pcVar5;
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *pTVar6;
  bool bVar7;
  int iVar8;
  FDS_CharacterLevelUpCostTableRow *pFVar9;
  long64 *plVar10;
  longlong lVar11;
  undefined1 *puVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  undefined1 *puVar16;
  uint *puVar17;
  longlong lVar18;
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *pTVar19;
  longlong lVar20;
  TBitArray<FDefaultBitArrayAllocator> *pTVar21;
  FScriptContainerElement local_res10 [8];
  undefined1 local_res18 [8];
  uint local_res20;
  TArray<TTuple<EDS_MoneyType,__int64>,TSizedDefaultAllocator<32>_> local_118;
  TBitArray<FDefaultBitArrayAllocator> *local_108;
  UDS_VM_CharacterLevelup *local_100;
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *local_f8;
  int iStack_f0;
  uint uStack_ec;
  undefined1 *local_e8;
  undefined4 uStack_e0;
  int iStack_dc;
  int local_d8;
  int iStack_d4;
  int iStack_d0;
  undefined4 uStack_cc;
  int local_c8;
  int local_c4;
  TPairInitializer<EDS_MoneyType_&,__int64_&&> local_c0;
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *local_b0;
  FName local_a8;
  int local_a0;
  FName local_98;
  int local_90;
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *local_88;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  undefined8 uStack_60;
  FScriptContainerElement *local_58;
  long64 **local_50;
  
  this_00 = &this->LevelUpMoneyMap;
  TSet<TTuple<enum_EDS_MoneyType,__int64>,TDefaultMapHashableKeyFuncs<enum_EDS_MoneyType,__int64,0>,FDefaultSetAllocator>
  ::Reset(this_00);
  pTVar21 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->LevelUpCostMap).field_0x10;
  iStack_f0 = 0;
  iVar8 = *(int *)&(this->LevelUpCostMap).field_0x28;
  pTVar19 = &this->LevelUpCostMap;
  local_d8 = 0;
  uStack_ec = 1;
  iStack_dc = 0;
  if (iVar8 != 0) {
    puVar17 = *(uint **)&(this->LevelUpCostMap).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)pTVar21;
    }
    uVar15 = *puVar17;
    while (uVar15 == 0) {
      lVar11 = (longlong)iStack_f0;
      local_d8 = local_d8 + 0x20;
      iStack_f0 = iStack_f0 + 1;
      iStack_dc = iVar8;
      if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_f0) goto LAB_14bdf322d;
      uVar15 = puVar17[lVar11 + 1];
    }
    uStack_ec = -uVar15 & uVar15;
    uVar1 = (ulonglong)uStack_ec * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_c8 = (int)lVar11;
    iStack_dc = local_d8 + -1 + local_c8;
    if (iVar8 < iStack_dc) {
      iStack_dc = iVar8;
    }
  }
LAB_14bdf322d:
  iStack_d0 = *(int *)&(this->LevelUpCostMap).field_0x8 - *(int *)&(this->LevelUpCostMap).field_0x34
  ;
  uVar15 = *(uint *)&(this->LevelUpCostMap).field_0x28;
  uStack_e0 = 0xffffffff;
  uVar14 = uVar15 & 0xffffffe0;
  TStack_80._padding_ = CONCAT44(uStack_ec,iStack_f0);
  TStack_80.CurrentBitIndex = iStack_dc;
  TStack_80.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar15 >> 5;
  TStack_80._28_4_ = iStack_dc;
  TStack_80.BaseBitIndex = local_d8;
  uStack_60 = CONCAT44(uStack_cc,iStack_d0);
  local_res20 = uVar15;
  local_108 = pTVar21;
  local_f8 = pTVar19;
  local_e8 = (undefined1 *)pTVar21;
  iStack_d4 = iStack_dc;
  local_b0 = pTVar19;
  local_88 = pTVar19;
  TStack_80.Array = pTVar21;
  if ((((int)uVar15 < 0) || (iVar8 < (int)uVar15)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar2 = *(uint *)&(this->LevelUpCostMap).field_0x28;
  if (uVar15 != uVar2) {
    puVar16 = *(undefined1 **)&(this->LevelUpCostMap).field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = (undefined1 *)pTVar21;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar13 * 4);
    while (uVar15 == 0) {
      lVar11 = (longlong)iVar13;
      uVar14 = uVar14 + 0x20;
      iVar13 = iVar13 + 1;
      uVar15 = uVar2;
      local_res20 = uVar2;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14bdf3350;
      uVar15 = *(uint *)(puVar16 + lVar11 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_c4 = (int)lVar11;
    uVar15 = local_c4 + -1 + uVar14;
    local_res20 = uVar15;
    if ((int)uVar2 < (int)uVar15) {
      uVar15 = uVar2;
      local_res20 = uVar2;
    }
  }
LAB_14bdf3350:
  do {
    pTVar6 = local_88;
    if (*(int *)&local_88->field_0x8 - *(int *)&local_88->field_0x34 != (int)uStack_60) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_80.CurrentBitIndex == uVar15) && (TStack_80.Array == pTVar21)) &&
       (pTVar6 == pTVar19)) {
      local_100 = this;
      TSet<TTuple<enum_EDS_MoneyType,__int64>,TDefaultMapHashableKeyFuncs<enum_EDS_MoneyType,__int64,0>,FDefaultSetAllocator>
      ::Array(this_00,&local_118);
      if (0 < local_118.ArrayNum) {
        `UDS_VM_CharacterLevelup::UpdateNeedMoneyDisplay'::__l2::<lambda_1>::operator()
                  (&local_100,&this->VM_MoneyFirst,(EDS_MoneyType)*local_118.AllocatorInstance.Data,
                   *(undefined8 *)(local_118.AllocatorInstance.Data + 8));
        local_a0 = FFieldNotificationClassDescriptor::VM_MoneyFirst.BitNumber;
        local_a8 = FFieldNotificationClassDescriptor::VM_MoneyFirst.FieldName;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_a8);
      }
      if (1 < local_118.ArrayNum) {
        `UDS_VM_CharacterLevelup::UpdateNeedMoneyDisplay'::__l2::<lambda_1>::operator()
                  (&local_100,&this->VM_MoneySecond,
                   (EDS_MoneyType)local_118.AllocatorInstance.Data[0x10],
                   *(undefined8 *)(local_118.AllocatorInstance.Data + 0x18));
        local_90 = FFieldNotificationClassDescriptor::VM_MoneySecond.BitNumber;
        local_98 = FFieldNotificationClassDescriptor::VM_MoneySecond.FieldName;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_98);
      }
      if (local_118.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.AllocatorInstance.Data);
      }
      return;
    }
    uVar3 = *(undefined8 *)(*(longlong *)pTVar6 + (longlong)TStack_80.CurrentBitIndex * 0x10);
    pFVar9 = FDS_CharacterLevelUpCostTableRow::Get((longlong)(int)uVar3,true);
    if (pFVar9 != (FDS_CharacterLevelUpCostTableRow *)0x0) {
      lVar20 = (longlong)(pFVar9->ReqMoneyType).ArrayNum;
      uVar15 = 0;
      lVar11 = 0;
      pTVar21 = local_108;
      if (0 < lVar20) {
        lVar18 = (longlong)(int)((ulonglong)uVar3 >> 0x20);
        do {
          uVar14 = 0;
          if ((int)uVar15 < (pFVar9->ReqMoneyType).ArrayNum) {
            uVar14 = ~uVar15 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          local_res10[0] = (pFVar9->ReqMoneyType).AllocatorInstance.Data[lVar11];
          uVar14 = 0;
          if ((int)uVar15 < (pFVar9->ReqMoneyValue).ArrayNum) {
            uVar14 = ~uVar15 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          lVar4 = *(longlong *)((pFVar9->ReqMoneyValue).AllocatorInstance.Data + lVar11 * 8);
          if (*(int *)&(this->LevelUpMoneyMap).field_0x8 !=
              *(int *)&(this->LevelUpMoneyMap).field_0x34) {
            puVar16 = *(undefined1 **)&(this->LevelUpMoneyMap).field_0x40;
            puVar12 = &(this->LevelUpMoneyMap).field_0x38;
            if (puVar16 != (undefined1 *)0x0) {
              puVar12 = puVar16;
            }
            iVar8 = *(int *)(puVar12 +
                            ((ulonglong)(*(int *)&(this->LevelUpMoneyMap).field_0x48 - 1) &
                            (ulonglong)(byte)local_res10[0]) * 4);
            if (iVar8 != -1) {
              do {
                if (*(FScriptContainerElement *)(*(longlong *)this_00 + (longlong)iVar8 * 0x18) ==
                    local_res10[0]) {
                  if (iVar8 != -1) {
                    plVar10 = TMapBase<enum_EDS_MoneyType,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_MoneyType,__int64,0>_>
                              ::FindChecked(this_00,(EDS_MoneyType)local_res10[0]);
                    *plVar10 = *plVar10 + lVar18 * lVar4;
                    goto LAB_14bdf34e5;
                  }
                  break;
                }
                iVar8 = *(int *)(*(longlong *)this_00 + 0x10 + (longlong)iVar8 * 0x18);
              } while (iVar8 != -1);
            }
          }
          local_c0.Value = (long64 *)(lVar18 * lVar4);
          local_58 = local_res10;
          local_50 = &local_c0.Value;
          TSet<TTuple<enum_EDS_MoneyType,__int64>,TDefaultMapHashableKeyFuncs<enum_EDS_MoneyType,__int64,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<enum_EDS_MoneyType_&,__int64_&&>_>
                    (this_00,&local_c0,(bool *)&local_58);
LAB_14bdf34e5:
          uVar15 = uVar15 + 1;
          lVar11 = lVar11 + 1;
          pTVar19 = local_b0;
          pTVar21 = local_108;
        } while (lVar11 < lVar20);
      }
    }
    TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
    uVar15 = local_res20;
  } while( true );
}

// UpdateQuantityControl @ 14bdf3cd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_CharacterLevelup::UpdateQuantityControl(UDS_VM_CharacterLevelup *this)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *this_00;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  UClass *pUVar7;
  UClass *pUVar8;
  UDS_VM_W_CommonQuantityControl *pUVar9;
  UDS_LogManager *pUVar10;
  long64 lVar11;
  long64 lVar12;
  UDS_ItemData *this_01;
  FDS_ViewModelContext *pFVar13;
  TReferenceControllerBase<1> *pTVar14;
  UScriptStruct *pUVar15;
  UDS_ViewModelContextManager *this_02;
  int *piVar16;
  longlong *plVar17;
  undefined1 *puVar18;
  FDS_ViewModelContext *pFVar19;
  int iVar20;
  int iVar21;
  undefined1 auStackY_288 [32];
  uint local_248 [4];
  FName local_238;
  int local_230;
  undefined8 local_228;
  FWeakObjectPtr local_220;
  undefined1 local_218 [16];
  TReferenceControllerBase<1> *local_208;
  uint *local_200;
  uint *local_1f8;
  TSharedPtr<FDS_ViewModelContext,1> local_1f0;
  undefined1 local_1d8 [128];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_288;
  iVar21 = 0;
  if ((this->VM_CommonQuantityControl).field0_0x0.DebugPtr == (UDS_VM_W_CommonQuantityControl *)0x0)
  {
    local_228 = 0;
    pUVar7 = Z_Construct_UClass_UDS_VM_W_CommonQuantityControl_NoRegister();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar8 = Z_Construct_UClass_UDS_VM_W_CommonQuantityControl_NoRegister();
    CheckIsClassChildOf_Internal(pUVar8,pUVar7);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_1d8,pUVar7);
    local_1d8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_1d8._56_8_ = (UPackage *)0x0;
    local_1d8._16_4_ = 0;
    local_1d8._20_4_ = 0;
    local_1d8._24_4_ = RF_Transient;
    local_1d8._40_8_ = (UObject *)0x0;
    local_1d8[0x20] = false;
    local_1d8._8_8_ = this;
    pUVar9 = (UDS_VM_W_CommonQuantityControl *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1d8);
    if (local_1d8._64_8_ != 0) {
      plVar17 = (longlong *)(local_1d8 + 0x50);
      if ((longlong *)local_1d8._104_8_ != (longlong *)0x0) {
        plVar17 = (longlong *)local_1d8._104_8_;
      }
      (**(code **)(*plVar17 + 0x10))();
    }
    if (pUVar9 != (UDS_VM_W_CommonQuantityControl *)0x0) {
      *(undefined1 *)((longlong)&pUVar9->_padding_ + 4) = 0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar9 != (UDS_VM_W_CommonQuantityControl *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    (this->VM_CommonQuantityControl).field0_0x0.DebugPtr = pUVar9;
    if (pUVar9 == (UDS_VM_W_CommonQuantityControl *)0x0) {
      return;
    }
  }
  local_248[0] = GetLevelUpCostIDByItemTID(this,&this->SelectedItemTID);
  if ((int)local_248[0] < 1) {
    pUVar10 = UDS_LogManager::GetInst();
    if (pUVar10 != (UDS_LogManager *)0x0) {
      pUVar10 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_VM_CharacterLevelup::UpdateQuantityControl",0x2e,Yes);
      UDS_LogManager::PrintLog
                (pUVar10,1,Warning,local_158.Ptr,0x1a3,L"levelUpCostID is Invalid. ID : %d");
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1915500876521274972>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_CharacterLevelup.cpp"
                       ,0x1a4,"false");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    DS_ItemDataUtil::GetItemDataByTID((int)&local_220);
    this_00 = &this->LevelUpCostMap;
    puVar1 = &(this->LevelUpCostMap).field_0x38;
    puVar2 = &(this->LevelUpCostMap).field_0x48;
    if (*(int *)&(this->LevelUpCostMap).field_0x8 != *(int *)&(this->LevelUpCostMap).field_0x34) {
      puVar18 = *(undefined1 **)&(this->LevelUpCostMap).field_0x40;
      if (puVar18 == (undefined1 *)0x0) {
        puVar18 = puVar1;
      }
      iVar20 = *(int *)(puVar18 + (ulonglong)(*(int *)puVar2 - 1U & local_248[0]) * 4);
      if (iVar20 != -1) {
        do {
          if (*(uint *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar20 * 0x10) == local_248[0])
          {
            if (iVar20 != -1) goto LAB_14bdf3f50;
            break;
          }
          iVar20 = *(int *)(*(longlong *)&this_00->field_0x0 + 8 + (longlong)iVar20 * 0x10);
        } while (iVar20 != -1);
      }
    }
    local_200 = local_248;
    local_248[1] = 0;
    local_1f8 = local_248 + 1;
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&,int_&&>_>
              ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
               this_00,(TPairInitializer<int_&,int_&&> *)local_218,(bool *)&local_200);
LAB_14bdf3f50:
    pFVar19 = (FDS_ViewModelContext *)0x0;
    bVar4 = FWeakObjectPtr::IsValid(&local_220);
    iVar20 = 0;
    if (bVar4) {
      local_238 = (FName)FDS_CharacterLevelUpCostTableRow::GetRef((longlong)(int)local_248[0],true);
      bVar4 = FDS_CharacterLevelUpCostTableRow::IsValid
                        ((FDS_CharacterLevelUpCostTableRow *)local_238);
      if (bVar4) {
        lVar11 = CalcNeedExpToLimitLevel(this);
        lVar12 = CalcAllMaterialItemExp(this);
        uVar5 = GetLevelUpCostIDByItemTID(this,&this->SelectedItemTID);
        if (*(int *)&(this->LevelUpCostMap).field_0x8 != *(int *)&(this->LevelUpCostMap).field_0x34)
        {
          puVar18 = *(undefined1 **)&(this->LevelUpCostMap).field_0x40;
          if (puVar18 == (undefined1 *)0x0) {
            puVar18 = puVar1;
          }
          iVar20 = *(int *)(puVar18 + (ulonglong)(*(int *)puVar2 - 1U & uVar5) * 4);
          if (iVar20 != -1) {
            do {
              if (*(uint *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar20 * 0x10) == uVar5) {
                iVar21 = GetLevelUpCostIDByItemTID(this,&this->SelectedItemTID);
                piVar16 = TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                          ::FindChecked((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                                         *)this_00,iVar21);
                iVar21 = *piVar16;
                break;
              }
              iVar20 = *(int *)(*(longlong *)&this_00->field_0x0 + 8 + (longlong)iVar20 * 0x10);
            } while (iVar20 != -1);
          }
        }
        if (0 < lVar11 - lVar12) {
          iVar21 = iVar21 + (int)((lVar11 - lVar12) / *(long64 *)((longlong)local_238 + 0x18)) + 1;
        }
        this_01 = (UDS_ItemData *)FWeakObjectPtr::Get(&local_220);
        iVar6 = UDS_ItemData::GetStackCount_Total(this_01,PlayerNormal);
        iVar20 = iVar21;
        if (iVar6 < iVar21) {
          iVar20 = iVar6;
        }
      }
    }
    pFVar13 = ::operator_new(0x88);
    if (pFVar13 != (FDS_ViewModelContext *)0x0) {
      *(undefined8 *)&pFVar13->ViewModelTemplateKey = 0;
      *(undefined8 *)&pFVar13[1].ViewModelName.Number = 0;
      *(undefined8 *)&pFVar13[1].field_0x1c = 0;
      piVar16 = (int *)((longlong)&pFVar13[2]._padding_ + 4);
      piVar16[0] = 0;
      piVar16[1] = 0;
      *(undefined8 *)((longlong)&pFVar13[2].DerivedStaticStruct + 4) = 0;
      *(undefined8 *)&pFVar13[2].ViewModelName.Number = 0;
      *(undefined8 *)&pFVar13[2].field_0x1c = 0;
      piVar16 = (int *)((longlong)&pFVar13[3]._padding_ + 4);
      piVar16[0] = 0;
      piVar16[1] = 0;
      *(undefined8 *)((longlong)&pFVar13[3].DerivedStaticStruct + 4) = 0;
      *(undefined8 *)&pFVar13[3].ViewModelName.Number = 0;
      *(undefined8 *)&pFVar13[3].field_0x1c = 0;
      *(int *)((longlong)&pFVar13[4]._padding_ + 4) = 0;
      (pFVar13->ViewModelName).ComparisonIndex = 0;
      (pFVar13->ViewModelName).Number = 0;
      pFVar13->_padding_ = (longlong)&___7FDS_ViewModelContext_CommonQuantityControl__6B_;
      pFVar13->DerivedStaticStruct = (UStruct *)0x0;
      pFVar13[1]._padding_ = 0;
      *(undefined4 *)&pFVar13[1].DerivedStaticStruct = 0;
      *(undefined8 *)((longlong)&pFVar13[1].DerivedStaticStruct + 4) = 0x3f800000;
      FText::FromString((FText *)&pFVar13[1].ViewModelTemplateKey,L"Quantity");
      *(undefined1 *)&pFVar13[2].DerivedStaticStruct = 1;
      pFVar13[2].ViewModelName.ComparisonIndex = 0;
      pFVar13[2].ViewModelName.Number = 0;
      *(undefined8 *)&pFVar13[2].ViewModelTemplateKey = 0;
      pFVar13[3]._padding_ = 0;
      pFVar13[3].DerivedStaticStruct = (UStruct *)&DAT_00000002;
      pFVar13[3].ViewModelName.ComparisonIndex = 0;
      pFVar13[3].ViewModelName.Number = 0;
      *(undefined8 *)&pFVar13[3].ViewModelTemplateKey = 0;
      *(int *)&pFVar13[4]._padding_ = 0;
      pFVar19 = pFVar13;
    }
    pTVar14 = ::operator_new(0x20);
    if (pTVar14 == (TReferenceControllerBase<1> *)0x0) {
      pTVar14 = (TReferenceControllerBase<1> *)0x0;
    }
    else {
      pTVar14->SharedReferenceCount = (atomic<int>)0x1;
      pTVar14[1]._padding_ = (longlong)ViewModelContextDeleter;
      pTVar14->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_CommonQuantityControl__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
      ;
      pTVar14->WeakReferenceCount = (atomic<int>)0x1;
      *(FDS_ViewModelContext **)&pTVar14[1].SharedReferenceCount = pFVar19;
    }
    if ((pFVar19 == (FDS_ViewModelContext *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pUVar15 = FDS_ViewModelContext_CommonQuantityControl::StaticStruct();
    pFVar19->DerivedStaticStruct = (UStruct *)pUVar15;
    this_02 = UDS_ViewModelContextManager::GetInst();
    if (this_02 != (UDS_ViewModelContextManager *)0x0) {
      if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_218._8_8_ = pFVar19;
      local_208 = pTVar14;
      UDS_ViewModelContextManager::RegisterContext
                (this_02,(TSharedPtr<FDS_ViewModelContext,1> *)(local_218 + 8));
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_208)
      ;
    }
    pFVar19->ViewModelTemplateKey = W_CommonQuantityControl;
    *(int *)&pFVar19[1]._padding_ = 0;
    *(float *)((longlong)&pFVar19[1]._padding_ + 4) = (float)iVar20;
    piVar16 = TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::
              FindChecked((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                           *)this_00,local_248[0]);
    *(float *)&pFVar19[1].DerivedStaticStruct = (float)*piVar16;
    if (&this->OnQuantityChangeDelegate !=
        (TMulticastDelegate<void___cdecl(float),FDefaultDelegateUserPolicy> *)
        &pFVar19[2].ViewModelName) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
      CopyFrom<IBaseDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy>_>
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pFVar19[2].ViewModelName,
                 (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &this->OnQuantityChangeDelegate);
    }
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&pFVar19[3].ViewModelName
               ,&this->OnClickAutoDelegate);
    pUVar9 = (this->VM_CommonQuantityControl).field0_0x0.DebugPtr;
    if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_1f0.Object = pFVar19;
    local_1f0.SharedReferenceCount.ReferenceController = pTVar14;
    UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar9,&local_1f0);
    local_230 = FFieldNotificationClassDescriptor::VM_CommonQuantityControl.BitNumber;
    local_238 = FFieldNotificationClassDescriptor::VM_CommonQuantityControl.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_238);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
  }
  return;
}

// UpdateTargetExpUp @ 14bdf91e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_CharacterLevelup::UpdateTargetExpUp(UDS_VM_CharacterLevelup *this)

{
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *pTVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined8 uVar5;
  code *pcVar6;
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *pTVar7;
  bool bVar8;
  UDS_LogManager *pUVar9;
  FDS_CharacterLevelUpCostTableRow *this_00;
  UObject *pUVar10;
  UDS_CharInfoData *this_01;
  long64 lVar11;
  FDS_CharacterLevelTableRow *this_02;
  FDS_CharacterBaseTableRow *this_03;
  UDS_CharacterUIEvent *pUVar12;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  longlong lVar19;
  undefined1 *puVar20;
  uint *puVar21;
  longlong lVar22;
  undefined1 auStackY_458 [32];
  undefined1 local_418 [8];
  FWeakObjectPtr local_410;
  FWeakObjectPtr local_408;
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *local_400;
  int iStack_3f8;
  uint uStack_3f4;
  undefined1 *local_3f0;
  undefined4 uStack_3e8;
  int iStack_3e4;
  int local_3e0;
  int iStack_3dc;
  int iStack_3d8;
  undefined4 uStack_3d4;
  int local_3d0;
  int local_3cc;
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *local_3c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_3c0;
  undefined8 uStack_3a0;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_398;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_458;
  UDS_PlayerData::GetData((ulong64)&local_408,this->CharEntityID,false);
  bVar8 = FWeakObjectPtr::IsValid(&local_408);
  if (bVar8) {
    FWeakObjectPtr::Get(&local_408);
    UDS_CharInfoData::GetData((ulong64)&local_410);
    bVar8 = FWeakObjectPtr::IsValid(&local_410);
    if (bVar8) {
      lVar22 = 0;
      pTVar1 = &this->LevelUpCostMap;
      puVar2 = &(this->LevelUpCostMap).field_0x10;
      iStack_3f8 = 0;
      iVar17 = *(int *)&(this->LevelUpCostMap).field_0x28;
      local_3e0 = 0;
      uStack_3f4 = 1;
      iStack_3e4 = 0;
      if (iVar17 != 0) {
        puVar21 = *(uint **)&(this->LevelUpCostMap).field_0x20;
        if (puVar21 == (uint *)0x0) {
          puVar21 = (uint *)puVar2;
        }
        uVar18 = *puVar21;
        while (uVar18 == 0) {
          lVar13 = (longlong)iStack_3f8;
          local_3e0 = local_3e0 + 0x20;
          iStack_3f8 = iStack_3f8 + 1;
          iStack_3e4 = iVar17;
          if ((int)(iVar17 + -1 + (iVar17 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_3f8)
          goto LAB_14bdf947d;
          uVar18 = puVar21[lVar13 + 1];
        }
        uStack_3f4 = -uVar18 & uVar18;
        uVar3 = (ulonglong)uStack_3f4 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        local_3d0 = (int)lVar13;
        iStack_3e4 = local_3e0 + -1 + local_3d0;
        if (iVar17 < iStack_3e4) {
          iStack_3e4 = iVar17;
        }
      }
LAB_14bdf947d:
      iStack_3d8 = *(int *)&(this->LevelUpCostMap).field_0x8 -
                   *(int *)&(this->LevelUpCostMap).field_0x34;
      uVar18 = *(uint *)&(this->LevelUpCostMap).field_0x28;
      uStack_3e8 = 0xffffffff;
      uVar16 = uVar18 & 0xffffffe0;
      TStack_3c0._padding_ = CONCAT44(uStack_3f4,iStack_3f8);
      TStack_3c0.CurrentBitIndex = iStack_3e4;
      TStack_3c0.UnvisitedBitMask = 0xffffffff;
      iVar14 = (int)uVar18 >> 5;
      TStack_3c0._28_4_ = iStack_3e4;
      TStack_3c0.BaseBitIndex = local_3e0;
      uStack_3a0 = CONCAT44(uStack_3d4,iStack_3d8);
      local_400 = pTVar1;
      local_3f0 = puVar2;
      iStack_3dc = iStack_3e4;
      local_3c8 = pTVar1;
      TStack_3c0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
      if ((((int)uVar18 < 0) || (iVar17 < (int)uVar18)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar4 = *(uint *)&(this->LevelUpCostMap).field_0x28;
      if (uVar18 != uVar4) {
        puVar20 = *(undefined1 **)&(this->LevelUpCostMap).field_0x20;
        if (puVar20 == (undefined1 *)0x0) {
          puVar20 = puVar2;
        }
        uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar14 * 4);
        while (uVar18 == 0) {
          lVar13 = (longlong)iVar14;
          uVar16 = uVar16 + 0x20;
          iVar14 = iVar14 + 1;
          uVar18 = uVar4;
          if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
          goto LAB_14bdf9590;
          uVar18 = *(uint *)(puVar20 + lVar13 * 4 + 4);
        }
        uVar3 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
        lVar13 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        local_3cc = (int)lVar13;
        uVar18 = local_3cc + -1 + uVar16;
        if ((int)uVar4 < (int)uVar18) {
          uVar18 = uVar4;
        }
      }
LAB_14bdf9590:
      while( true ) {
        pTVar7 = local_3c8;
        if (*(int *)&local_3c8->field_0x8 - *(int *)&local_3c8->field_0x34 != (int)uStack_3a0) {
          local_418[0] = 0;
          `TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_418);
        }
        if (((TStack_3c0.CurrentBitIndex == uVar18) &&
            (TStack_3c0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) &&
           (pTVar7 == pTVar1)) break;
        uVar5 = *(undefined8 *)(*(longlong *)pTVar7 + (longlong)TStack_3c0.CurrentBitIndex * 0x10);
        this_00 = FDS_CharacterLevelUpCostTableRow::GetRef((longlong)(int)uVar5,true);
        bVar8 = FDS_CharacterLevelUpCostTableRow::IsValid(this_00);
        if (bVar8) {
          lVar22 = lVar22 + (longlong)(int)((ulonglong)uVar5 >> 0x20) * this_00->RewardCharExp;
        }
        TStack_3c0.UnvisitedBitMask = TStack_3c0.UnvisitedBitMask & ~TStack_3c0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_3c0);
      }
      pUVar10 = FWeakObjectPtr::Get(&local_410);
      iVar17 = *(int *)&pUVar10[8].field_0xc;
      pUVar10 = FWeakObjectPtr::Get(&local_410);
      lVar13 = *(longlong *)&pUVar10[8].field_0x10;
      for (lVar19 = lVar22; lVar15 = lVar13, 0 < lVar19; lVar19 = lVar19 + lVar15) {
        this_01 = (UDS_CharInfoData *)FWeakObjectPtr::Get(&local_410);
        lVar11 = UDS_CharInfoData::GetLevelTableRowID(this_01,iVar17);
        this_02 = FDS_CharacterLevelTableRow::GetRef(lVar11,true);
        bVar8 = FDS_CharacterLevelTableRow::IsValid(this_02);
        if (!bVar8) break;
        lVar15 = lVar19 + lVar13;
        if (lVar15 <= this_02->ReqCharExp) break;
        lVar15 = lVar13 - this_02->ReqCharExp;
        iVar17 = iVar17 + 1;
        lVar13 = 0;
      }
      pUVar10 = FWeakObjectPtr::Get(&local_410);
      this_03 = FDS_CharacterBaseTableRow::GetRef((longlong)*(int *)&pUVar10[8].field_0x8,true);
      bVar8 = FDS_CharacterBaseTableRow::IsValid(this_03);
      if (bVar8) {
        iVar14 = this_03->MaxLevel;
        pUVar12 = UDS_CharacterUIEvent::GetEvent();
        if (pUVar12 != (UDS_CharacterUIEvent *)0x0) {
          if (iVar17 < iVar14) {
            iVar14 = iVar17;
          }
          FDS_EventDelegate<int_const_,__int64_const_,__int64_const_>::Broadcast
                    (&pUVar12->OnUpdateTargetExp,iVar14,lVar15,lVar22);
        }
      }
      else {
        pUVar9 = UDS_LogManager::GetInst();
        if (pUVar9 != (UDS_LogManager *)0x0) {
          pUVar9 = UDS_LogManager::GetInst();
          local_158._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_158,"UDS_VM_CharacterLevelup::UpdateTargetExpUp",0x2a,Yes);
          UDS_LogManager::PrintLog
                    (pUVar9,1,Warning,local_158.Ptr,0x248,L"characterBaseTableRow is Invalid.");
          if ((void *)local_158._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_158._padding_);
          }
        }
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_1915500876521274807>,true,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_CharacterLevelup.cpp"
                           ,0x249,"false");
        if (bVar8) goto code_r0x00014bdf9763;
      }
    }
    else {
      pUVar9 = UDS_LogManager::GetInst();
      if (pUVar9 != (UDS_LogManager *)0x0) {
        pUVar9 = UDS_LogManager::GetInst();
        FWeakObjectPtr::Get(&local_408);
        local_278._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_278,"UDS_VM_CharacterLevelup::UpdateTargetExpUp",0x2a,Yes);
        UDS_LogManager::PrintLog
                  (pUVar9,1,Warning,local_278.Ptr,0x21d,
                   L"charInfoData is Invalid. CharEntityID : %llu");
        if ((void *)local_278._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_278._padding_);
        }
      }
      bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_1915500876521274850>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_CharacterLevelup.cpp"
                         ,0x21e,"false");
      if (bVar8) goto code_r0x00014bdf9763;
    }
  }
  else {
    pUVar9 = UDS_LogManager::GetInst();
    if (pUVar9 != (UDS_LogManager *)0x0) {
      pUVar9 = UDS_LogManager::GetInst();
      local_398._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_398,"UDS_VM_CharacterLevelup::UpdateTargetExpUp",0x2a,Yes);
      UDS_LogManager::PrintLog
                (pUVar9,1,Warning,local_398.Ptr,0x215,L"playerData is Invalid. CharEntityID : %llu")
      ;
      if ((void *)local_398._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_398._padding_);
      }
    }
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1915500876521274858>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_CharacterLevelup.cpp"
                       ,0x216,"false");
    if (bVar8) {
code_r0x00014bdf9763:
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  return;
}

