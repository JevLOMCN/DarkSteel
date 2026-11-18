// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 43

// StaticClass @ 14b590810

UClass * __cdecl UDS_SkillDataSet::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_SkillDataSet.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_SkillDataSet",
               &Z_Registration_Info_UClass_UDS_SkillDataSet.InnerSingleton,
               StaticRegisterNativesUDS_SkillDataSet,0x1f0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_SkillDataSet>,
               InternalVTableHelperCtorCaller<UDS_SkillDataSet>,local_res8,
               UDS_DataSetBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_SkillDataSet.InnerSingleton;
}

// UDS_SkillDataSet @ 14b594540

UDS_SkillDataSet * __thiscall
UDS_SkillDataSet::UDS_SkillDataSet(UDS_SkillDataSet *this,FVTableHelper *param_1)

{
  UDS_EventManager *this_00;
  
  UDS_DataSetBase::UDS_DataSetBase((UDS_DataSetBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_SkillDataSet__6B_;
  (this->OnSkillDeckChanged)._padding_ = (longlong)&___7__FDS_FilteredEventDelegate_HH__6B_;
  *(undefined8 *)&(this->OnActivateSkillEvent).Delegate = 0;
  *(undefined8 *)&(this->OnActivateSkillEvent).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnActivateSkillEvent).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnActivateSkillEvent).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnActivateSubSkillEvent).Delegate = 0;
  *(undefined8 *)&(this->OnActivateSubSkillEvent).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnActivateSubSkillEvent).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnActivateSubSkillEvent).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnSkillDeckChanged).Subscriptions = 0;
  *(undefined8 *)&(this->OnSkillDeckChanged).Subscriptions.field_0x8 = 0;
  *(undefined8 *)&(this->OnSkillDeckChanged).Subscriptions.field_0x20 = 0;
  *(undefined4 *)&(this->OnSkillDeckChanged).Subscriptions.field_0x28 = 0;
  *(undefined4 *)&(this->OnSkillDeckChanged).Subscriptions.field_0x2c = 0x80;
  *(undefined4 *)&(this->OnSkillDeckChanged).Subscriptions.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->OnSkillDeckChanged).Subscriptions.field_0x34 = 0;
  *(undefined8 *)&(this->OnSkillDeckChanged).Subscriptions.field_0x40 = 0;
  *(undefined4 *)&(this->OnSkillDeckChanged).Subscriptions.field_0x48 = 0;
  this_00 = UDS_EventManager::GetInst();
  if (this_00 != (UDS_EventManager *)0x0) {
    UDS_EventManager::RegisterCleanableDelegate
              (this_00,(FDS_IDelegateCleanable *)&this->OnSkillDeckChanged);
  }
  (this->SkillDeckInfo).SkillDeckItemList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SkillDeckInfo).SkillDeckItemList.ArrayNum = 0;
  (this->SkillDeckInfo).SkillDeckItemList.ArrayMax = 0;
  (this->PopupSkillHelperList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PopupSkillHelperList).ArrayNum = 0;
  (this->PopupSkillHelperList).ArrayMax = 0;
  (this->SkillUseHelperList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SkillUseHelperList).ArrayNum = 0;
  (this->SkillUseHelperList).ArrayMax = 0;
  *(undefined8 *)&this->SkillModeDeckMap = 0;
  *(undefined8 *)&(this->SkillModeDeckMap).field_0x8 = 0;
  *(undefined8 *)&(this->SkillModeDeckMap).field_0x20 = 0;
  this->GlobalCoolTime = 0.0;
  this->LastActivatedSkillID = 0;
  this->CurrentSkillModeID = 0;
  *(undefined4 *)&(this->SkillModeDeckMap).field_0x28 = 0;
  *(undefined4 *)&(this->SkillModeDeckMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->SkillModeDeckMap).field_0x34 = 0;
  *(undefined4 *)&(this->SkillModeDeckMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->SkillModeDeckMap).field_0x40 = 0;
  *(undefined4 *)&(this->SkillModeDeckMap).field_0x48 = 0;
  this->bIsTryActivateByInput = false;
  this->bIsTryActivateByConditionChecker = false;
  this->ReservedSkillID = 0;
  this->ReservedNormalAttack = false;
  return this;
}

// ~UDS_SkillDataSet @ 14b595240

void __thiscall UDS_SkillDataSet::~UDS_SkillDataSet(UDS_SkillDataSet *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  UDS_EventManager *this_00;
  
  this->_padding_ = (longlong)&___7UDS_SkillDataSet__6B_;
  *(undefined4 *)&(this->SkillModeDeckMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->SkillModeDeckMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FDS_SkillDeckInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FDS_SkillDeckInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FDS_SkillDeckInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SkillModeDeckMap);
  pFVar2 = (this->SkillUseHelperList).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->PopupSkillHelperList).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->SkillDeckInfo).SkillDeckItemList.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  (this->OnSkillDeckChanged)._padding_ = (longlong)&___7__FDS_FilteredEventDelegate_HH__6B_;
  this_00 = UDS_EventManager::GetInst();
  if (this_00 != (UDS_EventManager *)0x0) {
    UDS_EventManager::UnregisterCleanableDelegate
              (this_00,(FDS_IDelegateCleanable *)&this->OnSkillDeckChanged);
  }
  TSet<TTuple<int,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<int,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<int,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<int,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
           *)&(this->OnSkillDeckChanged).Subscriptions);
  *(undefined4 *)&(this->OnSkillDeckChanged).Subscriptions.field_0x48 = 0;
  pvVar1 = *(void **)&(this->OnSkillDeckChanged).Subscriptions.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->OnSkillDeckChanged).Subscriptions);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnActivateSubSkillEvent).Delegate.field_0x8,
             *(int *)&(this->OnActivateSubSkillEvent).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnActivateSubSkillEvent).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnActivateSubSkillEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnActivateSkillEvent).Delegate.field_0x8,
             *(int *)&(this->OnActivateSkillEvent).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnActivateSkillEvent).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnActivateSkillEvent);
  UDS_DataSetBase::~UDS_DataSetBase((UDS_DataSetBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b596c70

UClass * __cdecl UDS_SkillDataSet::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_SkillDataSet.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_SkillDataSet",
               &Z_Registration_Info_UClass_UDS_SkillDataSet.InnerSingleton,
               StaticRegisterNativesUDS_SkillDataSet,0x1f0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_SkillDataSet>,
               InternalVTableHelperCtorCaller<UDS_SkillDataSet>,local_res8,
               UDS_DataSetBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_SkillDataSet.InnerSingleton;
}

// StaticRegisterNativesUDS_SkillDataSet @ 14b597860

void __cdecl UDS_SkillDataSet::StaticRegisterNativesUDS_SkillDataSet(void)

{
  return;
}

// UDS_SkillDataSet @ 14ba33400

UDS_SkillDataSet * __thiscall
UDS_SkillDataSet::UDS_SkillDataSet(UDS_SkillDataSet *this,FObjectInitializer *param_1)

{
  UDS_EventManager *this_00;
  
  UDS_DataSetBase::UDS_DataSetBase((UDS_DataSetBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_SkillDataSet__6B_;
  (this->OnSkillDeckChanged)._padding_ = (longlong)&___7__FDS_FilteredEventDelegate_HH__6B_;
  *(undefined8 *)&(this->OnActivateSkillEvent).Delegate = 0;
  *(undefined8 *)&(this->OnActivateSkillEvent).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnActivateSkillEvent).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnActivateSkillEvent).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnActivateSubSkillEvent).Delegate = 0;
  *(undefined8 *)&(this->OnActivateSubSkillEvent).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnActivateSubSkillEvent).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnActivateSubSkillEvent).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnSkillDeckChanged).Subscriptions = 0;
  *(undefined8 *)&(this->OnSkillDeckChanged).Subscriptions.field_0x8 = 0;
  *(undefined8 *)&(this->OnSkillDeckChanged).Subscriptions.field_0x20 = 0;
  *(undefined4 *)&(this->OnSkillDeckChanged).Subscriptions.field_0x28 = 0;
  *(undefined4 *)&(this->OnSkillDeckChanged).Subscriptions.field_0x2c = 0x80;
  *(undefined4 *)&(this->OnSkillDeckChanged).Subscriptions.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->OnSkillDeckChanged).Subscriptions.field_0x34 = 0;
  *(undefined8 *)&(this->OnSkillDeckChanged).Subscriptions.field_0x40 = 0;
  *(undefined4 *)&(this->OnSkillDeckChanged).Subscriptions.field_0x48 = 0;
  this_00 = UDS_EventManager::GetInst();
  if (this_00 != (UDS_EventManager *)0x0) {
    UDS_EventManager::RegisterCleanableDelegate
              (this_00,(FDS_IDelegateCleanable *)&this->OnSkillDeckChanged);
  }
  (this->SkillDeckInfo).SkillDeckItemList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SkillDeckInfo).SkillDeckItemList.ArrayNum = 0;
  (this->SkillDeckInfo).SkillDeckItemList.ArrayMax = 0;
  (this->PopupSkillHelperList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PopupSkillHelperList).ArrayNum = 0;
  (this->PopupSkillHelperList).ArrayMax = 0;
  (this->SkillUseHelperList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SkillUseHelperList).ArrayNum = 0;
  (this->SkillUseHelperList).ArrayMax = 0;
  *(undefined8 *)&this->SkillModeDeckMap = 0;
  *(undefined8 *)&(this->SkillModeDeckMap).field_0x8 = 0;
  *(undefined8 *)&(this->SkillModeDeckMap).field_0x20 = 0;
  this->GlobalCoolTime = 0.0;
  this->LastActivatedSkillID = 0;
  this->CurrentSkillModeID = 0;
  *(undefined4 *)&(this->SkillModeDeckMap).field_0x28 = 0;
  *(undefined4 *)&(this->SkillModeDeckMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->SkillModeDeckMap).field_0x34 = 0;
  *(undefined4 *)&(this->SkillModeDeckMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->SkillModeDeckMap).field_0x40 = 0;
  *(undefined4 *)&(this->SkillModeDeckMap).field_0x48 = 0;
  this->bIsTryActivateByInput = false;
  this->bIsTryActivateByConditionChecker = false;
  this->ReservedSkillID = 0;
  this->ReservedNormalAttack = false;
  return this;
}

// AddSkillData @ 14ba35d90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr> __thiscall
UDS_SkillDataSet::AddSkillData(UDS_SkillDataSet *this,FDS_SkillTableRow *param_1,int param_2)

{
  bool bVar1;
  UClass *pUVar2;
  UDS_SkillData *pUVar3;
  longlong *plVar4;
  undefined4 in_register_00000084;
  int in_R9D;
  undefined1 auStack_d8 [32];
  UDS_SkillData *local_b8 [2];
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  if (*(char *)(CONCAT44(in_register_00000084,param_2) + 0x41) == '\x03') {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar2 = Z_Construct_UClass_UDS_StackSkillData_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_a8,pUVar2);
    local_a8._8_8_ = this;
    pUVar3 = (UDS_SkillData *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
    if (local_a8._64_8_ != 0) {
      plVar4 = (longlong *)(local_a8 + 0x50);
      if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
        plVar4 = (longlong *)local_a8._104_8_;
      }
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  else {
    pUVar3 = NewObject<UDS_SkillData>((UObject *)this);
  }
  local_b8[0] = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UDS_SkillData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  bVar1 = UDS_DataSetBase::AddData
                    ((UDS_DataSetBase *)this,(longlong)in_R9D,(TObjectPtr<UDS_DataBase>)local_b8);
  if (bVar1) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UDS_SkillData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    param_1->_padding_ = 0;
    local_b8[0] = pUVar3;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UDS_SkillData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
  }
  else {
    param_1->_padding_ = 0;
    local_b8[0] = (UDS_SkillData *)0x0;
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)local_b8);
  return (TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// CheckGlobalCoolTime @ 14ba38b40

bool __thiscall UDS_SkillDataSet::CheckGlobalCoolTime(UDS_SkillDataSet *this)

{
  UDS_GameInstance::IsUseSkillCoolTime();
  return false;
}

// ClearReservedSkill @ 14ba39fd0

void __thiscall UDS_SkillDataSet::ClearReservedSkill(UDS_SkillDataSet *this)

{
  this->ReservedSkillID = 0;
  this->ReservedNormalAttack = false;
  return;
}

// GetActivatedPopupSkill @ 14ba43950

TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr> __thiscall
UDS_SkillDataSet::GetActivatedPopupSkill(UDS_SkillDataSet *this)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  undefined4 uVar3;
  int iVar4;
  UDS_SkillDataSet *pUVar5;
  bool bVar6;
  int iVar7;
  UObject *pUVar8;
  UObject *pUVar9;
  UClass *pUVar10;
  FWeakObjectPtr in_RDX;
  ulong64 uVar11;
  longlong *plVar12;
  FWeakObjectPtr *pFVar13;
  FWeakObjectPtr FVar14;
  FScriptContainerElement *pFVar15;
  int iVar16;
  ForAnyElementType this_00;
  double dVar17;
  UDS_SkillDataSet *local_res8;
  FWeakObjectPtr local_res10;
  UObject *local_res18;
  FWeakObjectPtr *local_res20;
  FWeakObjectPtr local_78;
  FWeakObjectPtr local_70;
  ForAnyElementType local_68;
  undefined8 local_60;
  
  pFVar15 = (this->PopupSkillHelperList).AllocatorInstance.Data;
  local_60._0_4_ = 0;
  iVar16 = (this->PopupSkillHelperList).ArrayNum;
  local_68.Data = (FScriptContainerElement *)0x0;
  local_60 = 0;
  pFVar1 = pFVar15 + (longlong)iVar16 * 8;
  local_res8 = this;
  local_res10 = in_RDX;
  while( true ) {
    iVar7 = (int)local_60;
    if ((local_res8->PopupSkillHelperList).ArrayNum != iVar16) {
      `TCheckedPointerIterator<TObjectPtr<UDS_ConditionHelper_PopupSkill>,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(&local_res18);
      iVar7 = (int)local_60;
    }
    if (pFVar15 == pFVar1) break;
    if (iVar7 == local_60._4_4_) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&local_68,(int *)((longlong)&local_60 + 4));
    }
    local_60 = CONCAT44(local_60._4_4_,iVar7 + 1);
    pUVar8 = *(UObject **)pFVar15;
    pFVar13 = (FWeakObjectPtr *)(local_68.Data + (longlong)iVar7 * 8);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar8 != (UObject *)0x0) {
        UE::GC::MarkAsReachable(pUVar8);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar8);
      }
    }
    pFVar13->ObjectIndex = 0;
    pFVar13->ObjectSerialNumber = 0;
    local_res18 = pUVar8;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar8);
    }
    FWeakObjectPtr::operator=(pFVar13,(FObjectPtr)&local_res18);
    pFVar15 = pFVar15 + 8;
  }
  pFVar13 = (FWeakObjectPtr *)(local_68.Data + (longlong)iVar7 * 8);
  this_00.Data = local_68.Data;
  iVar16 = iVar7;
  local_res20 = pFVar13;
  do {
    if (iVar16 != iVar7) {
      `TCheckedPointerIterator<TWeakObjectPtr<UDS_ConditionHelper_PopupSkill,FWeakObjectPtr>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&local_res18);
    }
    if ((FWeakObjectPtr *)this_00.Data == pFVar13) {
      local_res8 = (UDS_SkillDataSet *)0x0;
      *(undefined8 *)local_res10 = 0;
      FWeakObjectPtr::operator=((FWeakObjectPtr *)local_res10,(FObjectPtr)&local_res8);
      FVar14 = local_res10;
      goto LAB_14ba43c22;
    }
    bVar6 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_00.Data);
    if (bVar6) {
      pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00.Data);
      pUVar5 = local_res8;
      uVar3 = *(undefined4 *)&pUVar8[2].field_0x20;
      bVar6 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)
                         &local_res8->_padding_,(void *)0x0);
      if (bVar6) {
        uVar11 = 0;
      }
      else {
        pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)&pUVar5->_padding_);
        uVar11 = *(ulong64 *)(pUVar8 + 1);
      }
      UDS_SkillData::GetData((ulong64)&local_70,uVar11,SUB41(uVar3,0));
      bVar6 = FWeakObjectPtr::IsValid(&local_70);
      pFVar13 = local_res20;
      if (bVar6) {
        pUVar8 = FWeakObjectPtr::Get(&local_70);
        pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)&pUVar8[1].field_0x20);
        if (pUVar9 == (UObject *)0x0) {
LAB_14ba43b1a:
          pUVar9 = (UObject *)0x0;
        }
        else {
          pUVar10 = Z_Construct_UClass_UDS_SkillDataSet_NoRegister();
          iVar16 = (int)pUVar10->_padding_;
          if ((*(int *)(*(longlong *)&pUVar9->field_0x10 + 0x38) < iVar16) ||
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&pUVar9->field_0x10 + 0x30) + (longlong)iVar16 * 8) !=
              &pUVar10->_padding_)) goto LAB_14ba43b1a;
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar9);
        }
        local_78.ObjectIndex = 0;
        local_78.ObjectSerialNumber = 0;
        local_res18 = pUVar9;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar9);
        }
        FWeakObjectPtr::operator=(&local_78,(FObjectPtr)&local_res18);
        bVar6 = FWeakObjectPtr::IsValid(&local_78);
        pFVar13 = local_res20;
        if (bVar6) {
          pUVar9 = FWeakObjectPtr::Get(&local_78);
          iVar16 = *(int *)&pUVar8[2].field_0x1c;
          plVar12 = *(longlong **)&pUVar9[8].field_0x20;
          iVar4 = *(int *)(pUVar9 + 9);
          plVar2 = plVar12 + iVar4;
          while( true ) {
            if (*(int *)(pUVar9 + 9) != iVar4) {
              `TCheckedPointerIterator<TObjectPtr<UDS_ConditionHelper_PopupSkill>,int,0>::
              operator!='::__l2::<lambda_1>::operator()(&local_res18);
            }
            pFVar13 = local_res20;
            if (plVar12 == plVar2) goto LAB_14ba43be9;
            if (*(int *)(*plVar12 + 0x70) == iVar16) break;
            plVar12 = plVar12 + 1;
          }
          pUVar8 = FWeakObjectPtr::Get(&local_70);
          dVar17 = UDS_TimeUtilManager::GetCurrentServerTime();
          pFVar13 = local_res20;
          if ((dVar17 < *(double *)(pUVar8 + 6)) &&
             (0.0 < (float)(*(double *)(pUVar8 + 6) - dVar17))) {
            *(FWeakObjectPtr *)local_res10 = local_70;
            FVar14 = local_res10;
LAB_14ba43c22:
            if ((FWeakObjectPtr *)local_68.Data != (FWeakObjectPtr *)0x0) {
              FMemory::Free(local_68.Data);
            }
            return (TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>)FVar14;
          }
        }
      }
    }
LAB_14ba43be9:
    this_00.Data = this_00.Data + 8;
    iVar16 = (int)local_60;
  } while( true );
}

// GetAllSkillData @ 14ba43f30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TMap<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,0>_>
* __thiscall
UDS_SkillDataSet::GetAllSkillData
          (UDS_SkillDataSet *this,
          TMap<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,0>_>
          *__return_storage_ptr__)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  ulonglong uVar5;
  UClass *pUVar6;
  UDS_LogManager *pUVar7;
  TMap<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,0>_>
  *pTVar8;
  int iVar9;
  undefined1 *puVar10;
  UObject *pUVar11;
  uint uVar12;
  UObject *pUVar13;
  ulonglong uVar14;
  uint uVar15;
  uint *puVar16;
  UObject *pUVar17;
  longlong *plVar18;
  UObject *pUVar19;
  undefined1 auStackY_278 [32];
  FWeakObjectPtr local_238;
  uint local_230;
  uint uStack_22c;
  undefined1 *puStack_228;
  undefined4 local_220;
  uint uStack_21c;
  uint uStack_218;
  undefined4 uStack_214;
  longlong *local_210;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_208;
  undefined4 local_1e8;
  int local_1e4;
  int local_1e0;
  undefined1 local_1dc [20];
  uint uStack_1c8;
  uint uStack_1c4;
  longlong *local_1c0;
  undefined4 uStack_1b8;
  uint uStack_1b4;
  uint local_1b0;
  uint uStack_1ac;
  TMap<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,0>_>
  *local_1a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_198;
  longlong local_178;
  FWeakObjectPtr *local_170;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_278;
  pUVar19 = (UObject *)0x0;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
  uVar12 = (int)this->_padding_ - *(int *)((longlong)&this->_padding_ + 4);
  uVar15 = 0;
  if (uVar12 == 0) goto LAB_14ba441b9;
  if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar12);
  }
  TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)__return_storage_ptr__,uVar12);
  if (uVar12 < 4) {
    uVar12 = 1;
  }
  else {
    uVar14 = (ulonglong)((uVar12 >> 1) + 7) * 2 + 1;
    lVar1 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    local_1e8 = (undefined4)lVar1;
    uVar12 = 1 << ((byte)lVar1 & 0x1f);
  }
  if ((*(int *)&__return_storage_ptr__->field_0x48 != 0) &&
     ((int)uVar12 <= *(int *)&__return_storage_ptr__->field_0x48)) goto LAB_14ba441b9;
  *(uint *)&__return_storage_ptr__->field_0x48 = uVar12;
  if (*(longlong *)&__return_storage_ptr__->field_0x40 != 0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&__return_storage_ptr__->field_0x40,0,0,4);
  }
  if (uVar12 != 0) {
    uVar4 = uVar12;
    if (uVar12 < 2) {
      if (*(longlong *)&__return_storage_ptr__->field_0x40 != 0) {
        uVar4 = 0;
        goto LAB_14ba44015;
      }
    }
    else {
LAB_14ba44015:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&__return_storage_ptr__->field_0x40,0,uVar4,4);
    }
    if (0 < (int)uVar12) {
      uVar14 = (ulonglong)uVar12;
      pUVar11 = pUVar19;
      do {
        puVar10 = &__return_storage_ptr__->field_0x38;
        if (*(undefined1 **)&__return_storage_ptr__->field_0x40 != (undefined1 *)0x0) {
          puVar10 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
        }
        uVar5 = (ulonglong)pUVar11 & (longlong)(int)uVar12 - 1U;
        pUVar11 = (UObject *)&pUVar11->field_0x1;
        *(undefined4 *)(puVar10 + uVar5 * 4) = 0xffffffff;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
  }
  if (*(int *)&__return_storage_ptr__->field_0x48 != 0) {
    uVar12 = *(uint *)&__return_storage_ptr__->field_0x28;
    puStack_228 = &__return_storage_ptr__->field_0x10;
    uStack_22c = 1;
    local_230 = 0;
    uStack_21c = 0;
    uStack_218 = 0;
    pUVar11 = pUVar19;
    if (uVar12 != 0) {
      puVar16 = *(uint **)&__return_storage_ptr__->field_0x20;
      if (*(uint **)&__return_storage_ptr__->field_0x20 == (uint *)0x0) {
        puVar16 = (uint *)puStack_228;
      }
      uVar4 = *puVar16;
      pUVar13 = pUVar19;
      while (uVar4 == 0) {
        uStack_218 = (int)pUVar13 + 0x20;
        pUVar13 = (UObject *)(ulonglong)uStack_218;
        iVar9 = (int)pUVar11;
        local_230 = iVar9 + 1;
        pUVar11 = (UObject *)(ulonglong)local_230;
        if ((int)(((int)(uVar12 - 1) >> 0x1f & 0x1fU) + (uVar12 - 1)) >> 5 < (int)local_230)
        goto LAB_14ba44122;
        uVar4 = puVar16[(longlong)iVar9 + 1];
      }
      uStack_22c = -uVar4 & uVar4;
      uVar14 = (ulonglong)uStack_22c * 2 + 1;
      lVar1 = 0x3f;
      if (uVar14 != 0) {
        for (; uVar14 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      local_1e4 = (int)lVar1;
      uStack_21c = local_1e4 + -1 + uStack_218;
      pUVar11 = (UObject *)(ulonglong)uStack_21c;
      if ((int)uVar12 < (int)uStack_21c) {
LAB_14ba44122:
        pUVar11 = (UObject *)(ulonglong)uVar12;
        uStack_21c = uVar12;
      }
    }
    local_220 = 0xffffffff;
    local_198._padding_ = CONCAT44(uStack_22c,local_230);
    local_198.CurrentBitIndex = uStack_21c;
    local_198.UnvisitedBitMask = 0xffffffff;
    local_198._28_4_ = uStack_214;
    local_198.BaseBitIndex = uStack_218;
    local_1a0 = __return_storage_ptr__;
    local_198.Array = (TBitArray<FDefaultBitArrayAllocator> *)puStack_228;
    if ((int)pUVar11 < (int)uVar12) {
      do {
        iVar9 = (int)pUVar11;
        uVar12 = *(int *)&__return_storage_ptr__->field_0x48 - 1U &
                 *(uint *)(*(longlong *)local_1a0 + (longlong)iVar9 * 0x14);
        lVar1 = *(longlong *)local_1a0 + (longlong)iVar9 * 0x14;
        *(uint *)(lVar1 + 0x10) = uVar12;
        puVar10 = &__return_storage_ptr__->field_0x38;
        if (*(undefined1 **)&__return_storage_ptr__->field_0x40 != (undefined1 *)0x0) {
          puVar10 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
        }
        uVar14 = (longlong)*(int *)&__return_storage_ptr__->field_0x48 - 1U & (longlong)(int)uVar12;
        *(undefined4 *)(lVar1 + 0xc) = *(undefined4 *)(puVar10 + uVar14 * 4);
        *(int *)(puVar10 + uVar14 * 4) = iVar9;
        local_198.UnvisitedBitMask = local_198.UnvisitedBitMask & ~local_198._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_198);
        pUVar11 = (UObject *)(ulonglong)(uint)local_198.CurrentBitIndex;
      } while (local_198.CurrentBitIndex < (local_198.Array)->NumBits);
    }
  }
LAB_14ba441b9:
  local_210 = &this->_padding_;
  uVar12 = (uint)this->_padding_;
  TStack_208.Array = (TBitArray<FDefaultBitArrayAllocator> *)&this->_padding_;
  uStack_1c4 = 1;
  pUVar11 = pUVar19;
  local_1b0 = uVar15;
  if (uVar12 != 0) {
    pUVar11 = (UObject *)(ulonglong)uVar12;
    plVar18 = (longlong *)this->_padding_;
    if ((longlong *)this->_padding_ == (longlong *)0x0) {
      plVar18 = (longlong *)TStack_208.Array;
    }
    uVar4 = (uint)*plVar18;
    pUVar13 = pUVar19;
    pUVar17 = pUVar19;
    local_1b0 = 0;
    uVar15 = 0;
    while (uVar4 == 0) {
      iVar9 = (int)pUVar13;
      local_1b0 = (int)pUVar17 + 0x20;
      pUVar17 = (UObject *)(ulonglong)local_1b0;
      uVar15 = iVar9 + 1;
      pUVar13 = (UObject *)(ulonglong)uVar15;
      if ((int)(((int)(uVar12 - 1) >> 0x1f & 0x1fU) + (uVar12 - 1)) >> 5 < (int)uVar15)
      goto LAB_14ba4423e;
      uVar4 = *(uint *)((longlong)plVar18 + (longlong)iVar9 * 4 + 4);
    }
    uStack_1c4 = -uVar4 & uVar4;
    uVar14 = (ulonglong)uStack_1c4 * 2 + 1;
    lVar1 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    local_1e0 = (int)lVar1;
    uVar4 = (local_1b0 - 1) + local_1e0;
    if ((int)uVar12 < (int)uVar4) {
      uVar4 = uVar12;
    }
    pUVar11 = (UObject *)(ulonglong)uVar4;
  }
LAB_14ba4423e:
  uStack_1b4 = (uint)pUVar11;
  uStack_1b8 = 0xffffffff;
  TStack_208._padding_ = CONCAT44(uStack_1c4,uVar15);
  TStack_208.UnvisitedBitMask = 0xffffffff;
  TStack_208._28_4_ = uStack_1b4;
  TStack_208.BaseBitIndex = local_1b0;
  local_1dc._12_8_ = local_210;
  uStack_1c8 = uVar15;
  local_1c0 = (longlong *)TStack_208.Array;
  uStack_1ac = uStack_1b4;
  TStack_208.CurrentBitIndex = uStack_1b4;
  if ((int)uStack_1b4 < (int)uVar12) {
    do {
      iVar9 = TStack_208.CurrentBitIndex;
      plVar18 = local_210;
      lVar1 = *local_210 + (longlong)(int)pUVar11 * 0x18;
      pUVar13 = pUVar19;
      if (*(longlong *)((longlong)(int)pUVar11 * 0x18 + 8 + *local_210) != 0) {
        pUVar6 = Z_Construct_UClass_UDS_SkillData_NoRegister();
        bVar3 = FObjectPtr::IsA((FObjectPtr *)(lVar1 + 8),pUVar6);
        if (bVar3) {
          pUVar13 = *(UObject **)(lVar1 + 8);
        }
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar13 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar13);
      }
      local_238.ObjectIndex = 0;
      local_238.ObjectSerialNumber = 0;
      local_1dc._4_8_ = pUVar13;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar13 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar13);
      }
      FWeakObjectPtr::operator=(&local_238,(FObjectPtr)((longlong)local_1dc + 4));
      bVar3 = TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr> *)&local_238,(void *)0x0);
      if (bVar3) {
        pUVar7 = UDS_LogManager::GetInst();
        if (pUVar7 != (UDS_LogManager *)0x0) {
          pUVar7 = UDS_LogManager::GetInst();
          local_168._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_168,"UDS_SkillDataSet::GetAllSkillData",0x21,Yes);
          UDS_LogManager::PrintLog
                    (pUVar7,1,Warning,local_168.Ptr,0x9d5,L"[CCSAI] skillData is nullptr. (%d)");
          if ((void *)local_168._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_168._padding_);
          }
        }
        bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_2890360493099185706>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\DS_SkillData.cpp"
                           ,0x9d6,"false");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pTVar8 = (TMap<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,0>_>
                    *)(*pcVar2)();
          return pTVar8;
        }
      }
      else {
        local_178 = *plVar18 + (longlong)iVar9 * 0x18;
        local_170 = &local_238;
        TSet<TTuple<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,0>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<unsigned___int64_const_&,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>_&>_>
                  ((TSet<TTuple<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                    *)__return_storage_ptr__,
                   (TPairInitializer<unsigned___int64_const_&,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>_&>
                    *)local_1dc,(bool *)&local_178);
      }
      TStack_208.UnvisitedBitMask = TStack_208.UnvisitedBitMask & ~TStack_208._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_208);
      pUVar11 = (UObject *)(ulonglong)(uint)TStack_208.CurrentBitIndex;
    } while (TStack_208.CurrentBitIndex < (int)*(longlong *)&(TStack_208.Array)->NumBits);
  }
  return __return_storage_ptr__;
}

// GetAllSkillList_SkillMode @ 14ba44480

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
UDS_SkillDataSet::GetAllSkillList_SkillMode
          (UDS_SkillDataSet *this,TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          int param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  FDS_SkillModeTableRow *pFVar8;
  FScriptContainerElement *pFVar9;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res10 [8];
  undefined1 local_res18 [16];
  int local_38;
  int local_34 [3];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if (param_1 == 0) {
    return __return_storage_ptr__;
  }
  pFVar8 = FDS_SkillModeTableRow::Get((longlong)param_1,true);
  if (pFVar8 == (FDS_SkillModeTableRow *)0x0) {
    return __return_storage_ptr__;
  }
  iVar7 = (pFVar8->ModeNormalSkill).ArrayNum;
  pFVar11 = (pFVar8->ModeNormalSkill).AllocatorInstance.Data;
  pFVar3 = pFVar11 + (longlong)iVar7 * 4;
  while( true ) {
    if ((pFVar8->ModeNormalSkill).ArrayNum != iVar7) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (pFVar11 == pFVar3) break;
    local_38 = *(int *)pFVar11;
    if (local_38 != 0) {
      pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
      for (pFVar9 = pFVar2; pFVar9 != pFVar2 + (longlong)__return_storage_ptr__->ArrayNum * 4;
          pFVar9 = pFVar9 + 4) {
        if (*(int *)pFVar9 == local_38) goto LAB_14ba445c5;
      }
      if (((pFVar2 <= (FScriptContainerElement *)&local_38) &&
          ((FScriptContainerElement *)&local_38 <
           pFVar2 + (longlong)__return_storage_ptr__->ArrayMax * 4)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar10 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar10;
      }
      iVar6 = __return_storage_ptr__->ArrayNum;
      if (iVar6 == __return_storage_ptr__->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar6 + 1;
      *(int *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 4) = local_38;
    }
LAB_14ba445c5:
    pFVar11 = pFVar11 + 4;
  }
  pFVar11 = (pFVar8->ModeSkill).AllocatorInstance.Data;
  iVar7 = (pFVar8->ModeSkill).ArrayNum;
  pFVar3 = pFVar11 + (longlong)iVar7 * 4;
  while( true ) {
    if ((pFVar8->ModeSkill).ArrayNum != iVar7) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar11 == pFVar3) break;
    local_34[0] = *(int *)pFVar11;
    if (local_34[0] != 0) {
      pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
      for (pFVar9 = pFVar2; pFVar9 != pFVar2 + (longlong)__return_storage_ptr__->ArrayNum * 4;
          pFVar9 = pFVar9 + 4) {
        if (*(int *)pFVar9 == local_34[0]) goto LAB_14ba446ca;
      }
      if (((pFVar2 <= (FScriptContainerElement *)local_34) &&
          ((FScriptContainerElement *)local_34 <
           pFVar2 + (longlong)__return_storage_ptr__->ArrayMax * 4)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar10 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar10;
      }
      iVar6 = __return_storage_ptr__->ArrayNum;
      if (iVar6 == __return_storage_ptr__->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar6 + 1;
      *(int *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 4) = local_34[0]
      ;
    }
LAB_14ba446ca:
    pFVar11 = pFVar11 + 4;
  }
  piVar1 = &pFVar8->ModeTraitSkill;
  if (pFVar8->ModeTraitSkill != 0) {
    pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
    for (pFVar11 = pFVar3; pFVar11 != pFVar3 + (longlong)__return_storage_ptr__->ArrayNum * 4;
        pFVar11 = pFVar11 + 4) {
      if (*(int *)pFVar11 == pFVar8->ModeTraitSkill) goto LAB_14ba44793;
    }
    if (((pFVar3 <= piVar1) && (piVar1 < pFVar3 + (longlong)__return_storage_ptr__->ArrayMax * 4))
       && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar5)) {
      pcVar4 = (code *)swi(3);
      pTVar10 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
      return pTVar10;
    }
    iVar7 = __return_storage_ptr__->ArrayNum;
    if (iVar7 == __return_storage_ptr__->ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar7 + 1;
    *(int *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 4) = *piVar1;
  }
LAB_14ba44793:
  piVar1 = &pFVar8->ModeSpecialSkill;
  if (pFVar8->ModeSpecialSkill != 0) {
    pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
    for (pFVar11 = pFVar3; pFVar11 != pFVar3 + (longlong)__return_storage_ptr__->ArrayNum * 4;
        pFVar11 = pFVar11 + 4) {
      if (*(int *)pFVar11 == pFVar8->ModeSpecialSkill) goto LAB_14ba44846;
    }
    if (((pFVar3 <= piVar1) && (piVar1 < pFVar3 + (longlong)__return_storage_ptr__->ArrayMax * 4))
       && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar5)) {
      pcVar4 = (code *)swi(3);
      pTVar10 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
      return pTVar10;
    }
    iVar7 = __return_storage_ptr__->ArrayNum;
    if (iVar7 == __return_storage_ptr__->ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar7 + 1;
    *(int *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 4) = *piVar1;
  }
LAB_14ba44846:
  piVar1 = &pFVar8->ModeJumpSkill;
  if (pFVar8->ModeJumpSkill != 0) {
    pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
    for (pFVar11 = pFVar3; pFVar11 != pFVar3 + (longlong)__return_storage_ptr__->ArrayNum * 4;
        pFVar11 = pFVar11 + 4) {
      if (*(int *)pFVar11 == pFVar8->ModeJumpSkill) goto LAB_14ba44900;
    }
    if (((pFVar3 <= piVar1) && (piVar1 < pFVar3 + (longlong)__return_storage_ptr__->ArrayMax * 4))
       && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar5)) {
      pcVar4 = (code *)swi(3);
      pTVar10 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
      return pTVar10;
    }
    iVar7 = __return_storage_ptr__->ArrayNum;
    if (iVar7 == __return_storage_ptr__->ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar7 + 1;
    *(int *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 4) = *piVar1;
  }
LAB_14ba44900:
  piVar1 = &pFVar8->ModeAirDashSkill;
  if (pFVar8->ModeAirDashSkill != 0) {
    pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
    for (pFVar11 = pFVar3; pFVar11 != pFVar3 + (longlong)__return_storage_ptr__->ArrayNum * 4;
        pFVar11 = pFVar11 + 4) {
      if (*(int *)pFVar11 == pFVar8->ModeAirDashSkill) {
        return __return_storage_ptr__;
      }
    }
    if (((pFVar3 <= piVar1) && (piVar1 < pFVar3 + (longlong)__return_storage_ptr__->ArrayMax * 4))
       && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar5)) {
      pcVar4 = (code *)swi(3);
      pTVar10 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
      return pTVar10;
    }
    iVar7 = __return_storage_ptr__->ArrayNum;
    if (iVar7 == __return_storage_ptr__->ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar7 + 1;
    *(int *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 4) = *piVar1;
  }
  return __return_storage_ptr__;
}

// GetAllSkillList_SkillMode @ 14ba449f0

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
UDS_SkillDataSet::GetAllSkillList_SkillMode
          (UDS_SkillDataSet *this,TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  GetAllSkillList_SkillMode(this,__return_storage_ptr__,this->CurrentSkillModeID);
  return __return_storage_ptr__;
}

// GetAllSkillModeList @ 14ba44a20

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
UDS_SkillDataSet::GetAllSkillModeList
          (UDS_SkillDataSet *this,TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  ulonglong uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  UClass *pUVar8;
  UObject *pUVar9;
  FDS_SkillModeTableRow *pFVar10;
  UObject *pUVar11;
  UObject *pUVar12;
  longlong *plVar13;
  UObject *pUVar14;
  FWeakObjectPtr local_res8;
  UObject *local_res10;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_90;
  longlong *local_70;
  uint uStack_68;
  uint uStack_64;
  longlong *local_60;
  undefined4 uStack_58;
  uint uStack_54;
  uint local_50;
  int iStack_4c;
  
  pUVar14 = (UObject *)0x0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  TStack_90.Array = (TBitArray<FDefaultBitArrayAllocator> *)&this->_padding_;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  uVar2 = (uint)this->_padding_;
  uStack_68 = 0;
  uStack_64 = 1;
  local_50 = 0;
  pUVar9 = pUVar14;
  if (uVar2 != 0) {
    pUVar9 = (UObject *)(ulonglong)uVar2;
    plVar13 = (longlong *)this->_padding_;
    if ((longlong *)this->_padding_ == (longlong *)0x0) {
      plVar13 = (longlong *)TStack_90.Array;
    }
    uVar6 = (uint)*plVar13;
    pUVar11 = pUVar14;
    pUVar12 = pUVar14;
    local_50 = 0;
    uStack_68 = 0;
    while (uVar6 == 0) {
      iVar7 = (int)pUVar11;
      local_50 = (int)pUVar12 + 0x20;
      pUVar12 = (UObject *)(ulonglong)local_50;
      uStack_68 = iVar7 + 1;
      pUVar11 = (UObject *)(ulonglong)uStack_68;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_68)
      goto LAB_14ba44acd;
      uVar6 = *(uint *)((longlong)plVar13 + (longlong)iVar7 * 4 + 4);
    }
    uStack_64 = -uVar6 & uVar6;
    uVar1 = (ulonglong)uStack_64 * 2 + 1;
    lVar4 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar6 = (local_50 - 1) + (int)lVar4;
    if ((int)uVar2 < (int)uVar6) {
      uVar6 = uVar2;
    }
    pUVar9 = (UObject *)(ulonglong)uVar6;
  }
LAB_14ba44acd:
  uStack_58 = 0xffffffff;
  uStack_54 = (uint)pUVar9;
  iStack_4c = TStack_90.CurrentBitIndex;
  TStack_90._padding_ = CONCAT44(uStack_64,uStack_68);
  TStack_90.UnvisitedBitMask = 0xffffffff;
  TStack_90._28_4_ = TStack_90.CurrentBitIndex;
  TStack_90.BaseBitIndex = local_50;
  local_70 = &this->_padding_;
  local_60 = (longlong *)TStack_90.Array;
  TStack_90.CurrentBitIndex = uStack_54;
  if ((int)uStack_54 < (int)uVar2) {
    do {
      lVar3 = this->_padding_;
      lVar4 = lVar3 + (longlong)(int)pUVar9 * 0x18;
      pUVar11 = pUVar14;
      if (*(longlong *)(lVar3 + 8 + (longlong)(int)pUVar9 * 0x18) != 0) {
        pUVar8 = Z_Construct_UClass_UDS_SkillData_NoRegister();
        bVar5 = FObjectPtr::IsA((FObjectPtr *)(lVar4 + 8),pUVar8);
        if (bVar5) {
          pUVar11 = *(UObject **)(lVar4 + 8);
        }
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar11 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar11);
      }
      local_res8.ObjectIndex = 0;
      local_res8.ObjectSerialNumber = 0;
      local_res10 = pUVar11;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar11 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar11);
      }
      FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
      bVar5 = TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr> *)&local_res8,(void *)0x0);
      if ((!bVar5) && (pUVar9 = FWeakObjectPtr::Get(&local_res8), *(int *)&pUVar9[3].field_0x4 != 0)
         ) {
        pUVar9 = FWeakObjectPtr::Get(&local_res8);
        pFVar10 = FDS_SkillModeTableRow::Get((longlong)*(int *)&pUVar9[3].field_0x4,true);
        if (pFVar10 != (FDS_SkillModeTableRow *)0x0) {
          iVar7 = __return_storage_ptr__->ArrayNum;
          if (iVar7 == __return_storage_ptr__->ArrayMax) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&__return_storage_ptr__->AllocatorInstance,
                               &__return_storage_ptr__->ArrayMax);
          }
          __return_storage_ptr__->ArrayNum = iVar7 + 1;
          *(int *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 4) =
               pFVar10->ID;
        }
      }
      TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_90);
      pUVar9 = (UObject *)(ulonglong)(uint)TStack_90.CurrentBitIndex;
    } while (TStack_90.CurrentBitIndex < (int)*(longlong *)&(TStack_90.Array)->NumBits);
  }
  return __return_storage_ptr__;
}

// GetAvoidSkillList @ 14ba44e40

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
UDS_SkillDataSet::GetAvoidSkillList
          (UDS_SkillDataSet *this,TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar4;
  UObject *pUVar5;
  FDS_WeaponTypeBaseTableRow *pFVar6;
  FWeakObjectPtr local_res8;
  int local_res10;
  int iStackX_14;
  TArray<int,TSizedDefaultAllocator<32>_> local_28;
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  if (this->CurrentSkillModeID == 0) {
    bVar3 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)&this->_padding_,
                       (void *)0x0);
    if (!bVar3) {
      FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    }
    UDS_CharInfoData::GetData((ulong64)&local_res8);
    bVar3 = FWeakObjectPtr::IsValid(&local_res8);
    if (bVar3) {
      pUVar5 = FWeakObjectPtr::Get(&local_res8);
      pFVar6 = FDS_WeaponTypeBaseTableRow::GetRef((ulonglong)(byte)pUVar5[0x17].field_0x10,true);
      local_res10 = pFVar6->ID_InputRoll;
      iStackX_14 = pFVar6->ID_NotInputRoll;
      __return_storage_ptr__->ArrayNum = 2;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,2,*piVar1,&__return_storage_ptr__->AllocatorInstance,2,piVar1);
      *(ulonglong *)(__return_storage_ptr__->AllocatorInstance).Data =
           CONCAT44(iStackX_14,local_res10);
    }
  }
  else {
    pTVar4 = GetAvoidSkillList_SkillMode(this,&local_28);
    if (__return_storage_ptr__ != pTVar4) {
      pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (__return_storage_ptr__->AllocatorInstance).Data = (pTVar4->AllocatorInstance).Data;
      (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      __return_storage_ptr__->ArrayNum = pTVar4->ArrayNum;
      *piVar1 = pTVar4->ArrayMax;
      pTVar4->ArrayNum = 0;
      pTVar4->ArrayMax = 0;
    }
    if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// GetAvoidSkillList_SkillMode @ 14ba44f70

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
UDS_SkillDataSet::GetAvoidSkillList_SkillMode
          (UDS_SkillDataSet *this,TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FDS_SkillModeTableRow *pFVar6;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar7;
  int *piVar8;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if (this->CurrentSkillModeID != 0) {
    pFVar6 = FDS_SkillModeTableRow::Get((longlong)this->CurrentSkillModeID,true);
    if (pFVar6 != (FDS_SkillModeTableRow *)0x0) {
      pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
      piVar1 = &pFVar6->ModeInputRoll;
      if ((pFVar2 <= piVar1) && (piVar1 < pFVar2 + (longlong)__return_storage_ptr__->ArrayMax * 4))
      {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pTVar7 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar7;
        }
      }
      iVar5 = __return_storage_ptr__->ArrayNum;
      if (iVar5 == __return_storage_ptr__->ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar5 + 1;
      piVar8 = &pFVar6->ModeNotInputRoll;
      *(int *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 4) = *piVar1;
      pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
      if ((pFVar2 <= piVar8) && (piVar8 < pFVar2 + (longlong)__return_storage_ptr__->ArrayMax * 4))
      {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pTVar7 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar7;
        }
      }
      iVar5 = __return_storage_ptr__->ArrayNum;
      if (iVar5 == __return_storage_ptr__->ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar5 + 1;
      *(int *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 4) = *piVar8;
    }
  }
  return __return_storage_ptr__;
}

// GetCurrentActiveSkillList @ 14ba46760

TArray<TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> * __thiscall
UDS_SkillDataSet::GetCurrentActiveSkillList
          (UDS_SkillDataSet *this,
          TArray<TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  longlong *plVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TArray<TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar8;
  UObject *pUVar9;
  UClass *pUVar10;
  int iVar11;
  uint uVar12;
  longlong *plVar13;
  longlong *plVar14;
  uint uVar15;
  undefined1 local_res8 [8];
  int local_res10;
  FWeakObjectPtr local_res18;
  longlong *local_res20;
  FWeakObjectPtr local_c0;
  longlong *local_b8;
  int iStack_b0;
  uint uStack_ac;
  longlong *local_a8;
  undefined4 uStack_a0;
  int iStack_9c;
  int local_98;
  int iStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  UObject *local_88;
  UObject *local_80;
  longlong *local_78;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  local_res20 = &this->_padding_;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  plVar1 = &this->_padding_;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar7 = (int)this->_padding_;
  iStack_b0 = 0;
  uStack_ac = 1;
  iStack_9c = 0;
  local_98 = iStack_b0;
  if (iVar7 != 0) {
    plVar14 = (longlong *)this->_padding_;
    if ((longlong *)this->_padding_ == (longlong *)0x0) {
      plVar14 = plVar1;
    }
    uVar12 = (uint)*plVar14;
    iStack_b0 = 0;
    local_98 = 0;
    while (uVar12 == 0) {
      iStack_b0 = iStack_b0 + 1;
      local_98 = local_98 + 0x20;
      iStack_9c = iVar7;
      if ((int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_b0) goto LAB_14ba4680c;
      uVar12 = *(uint *)((longlong)plVar14 + (longlong)iStack_b0 * 4);
    }
    uStack_ac = ~(uVar12 - 1) & uVar12;
    uVar2 = (ulonglong)uStack_ac * 2 + 1;
    lVar4 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    local_res10 = (int)lVar4;
    iStack_9c = local_res10 + -1 + local_98;
    if (iVar7 < iStack_9c) {
      iStack_9c = iVar7;
    }
  }
LAB_14ba4680c:
  uVar12 = (uint)this->_padding_;
  iStack_90 = (int)this->_padding_ - *(int *)((longlong)&this->_padding_ + 4);
  uVar15 = uVar12 & 0xffffffe0;
  TStack_70._padding_ = CONCAT44(uStack_ac,iStack_b0);
  uStack_a0 = 0xffffffff;
  TStack_70.CurrentBitIndex = iStack_9c;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar12 >> 5;
  TStack_70._28_4_ = iStack_9c;
  TStack_70.BaseBitIndex = local_98;
  uStack_50 = CONCAT44(uStack_8c,iStack_90);
  local_b8 = local_res20;
  local_a8 = plVar1;
  iStack_94 = iStack_9c;
  local_78 = local_res20;
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)plVar1;
  if ((((int)uVar12 < 0) || (iVar7 < (int)uVar12)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar8 = (TArray<TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *)
             (*pcVar5)();
    return pTVar8;
  }
  plVar14 = local_res20;
  uVar3 = (uint)this->_padding_;
  if (uVar12 != uVar3) {
    plVar13 = plVar1;
    if ((longlong *)this->_padding_ != (longlong *)0x0) {
      plVar13 = (longlong *)this->_padding_;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)((longlong)plVar13 + (longlong)iVar11 * 4);
    while (uVar12 == 0) {
      iVar11 = iVar11 + 1;
      uVar15 = uVar15 + 0x20;
      uVar12 = uVar3;
      if ((int)(((int)(uVar3 - 1) >> 0x1f & 0x1fU) + (uVar3 - 1)) >> 5 < iVar11) goto LAB_14ba4690a;
      uVar12 = *(uint *)((longlong)plVar13 + (longlong)iVar11 * 4);
    }
    uVar2 = (ulonglong)(~(uVar12 - 1) & uVar12) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar12 = (int)lVar4 + -1 + uVar15;
    if ((int)uVar3 < (int)uVar12) {
      uVar12 = uVar3;
    }
  }
LAB_14ba4690a:
  do {
    plVar13 = local_78;
    if ((int)local_78[1] - *(int *)((longlong)local_78 + 0x34) != (int)uStack_50) {
      `TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TObjectPtr<UDS_DataBase>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_70.CurrentBitIndex == uVar12) &&
        (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)plVar1)) && (plVar13 == plVar14)
       ) {
      return __return_storage_ptr__;
    }
    pUVar9 = *(UObject **)(*plVar13 + (longlong)TStack_70.CurrentBitIndex * 0x18 + 8);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar9 != (UObject *)0x0) {
        UE::GC::MarkAsReachable(pUVar9);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar9);
      }
    }
    local_c0.ObjectIndex = 0;
    local_c0.ObjectSerialNumber = 0;
    local_88 = pUVar9;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar9);
    }
    FWeakObjectPtr::operator=(&local_c0,(FObjectPtr)&local_88);
    pUVar9 = FWeakObjectPtr::Get(&local_c0);
    if (pUVar9 == (UObject *)0x0) {
LAB_14ba469e9:
      pUVar9 = (UObject *)0x0;
    }
    else {
      pUVar10 = Z_Construct_UClass_UDS_SkillData_NoRegister();
      iVar7 = (int)pUVar10->_padding_;
      if ((*(int *)(*(longlong *)&pUVar9->field_0x10 + 0x38) < iVar7) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar9->field_0x10 + 0x30) + (longlong)iVar7 * 8) !=
          &pUVar10->_padding_)) goto LAB_14ba469e9;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar9);
    }
    local_res18.ObjectIndex = 0;
    local_res18.ObjectSerialNumber = 0;
    local_80 = pUVar9;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar9);
    }
    FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_80);
    bVar6 = FWeakObjectPtr::IsValid(&local_res18);
    if ((bVar6) && (pUVar9 = FWeakObjectPtr::Get(&local_res18), pUVar9[2].field_0x19 == '\x01')) {
      iVar7 = __return_storage_ptr__->ArrayNum;
      if (iVar7 == __return_storage_ptr__->ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar7 + 1;
      *(FWeakObjectPtr *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 8) =
           local_res18;
    }
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  } while( true );
}

// GetCurrentDeckSkillModeList @ 14ba46e50

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
UDS_SkillDataSet::GetCurrentDeckSkillModeList
          (UDS_SkillDataSet *this,TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FWeakObjectPtr *pFVar1;
  bool bVar2;
  int iVar3;
  UObject *pUVar4;
  FDS_SkillModeTableRow *pFVar5;
  int iVar6;
  ForAnyElementType FVar7;
  FWeakObjectPtr local_res8;
  TArray<TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_28;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  FDS_SkillDeckInfo::GetSkillList(&this->SkillDeckInfo,&local_28);
  iVar6 = local_28.ArrayNum;
  pFVar1 = (FWeakObjectPtr *)(local_28.AllocatorInstance.Data + (longlong)iVar6 * 8);
  FVar7.Data = local_28.AllocatorInstance.Data;
  while( true ) {
    if (local_28.ArrayNum != iVar6) {
      `TCheckedPointerIterator<TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,int,0>::operator!='::
      __l2::<lambda_1>::operator()(&local_res8);
    }
    if ((FWeakObjectPtr *)FVar7.Data == pFVar1) break;
    local_res8 = *(FWeakObjectPtr *)FVar7.Data;
    bVar2 = FWeakObjectPtr::IsValid(&local_res8);
    if (bVar2) {
      pUVar4 = FWeakObjectPtr::Get(&local_res8);
      if (*(int *)&pUVar4[3].field_0x4 != 0) {
        pUVar4 = FWeakObjectPtr::Get(&local_res8);
        pFVar5 = FDS_SkillModeTableRow::Get((longlong)*(int *)&pUVar4[3].field_0x4,true);
        if (pFVar5 != (FDS_SkillModeTableRow *)0x0) {
          iVar3 = __return_storage_ptr__->ArrayNum;
          if (iVar3 == __return_storage_ptr__->ArrayMax) {
            iVar3 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&__return_storage_ptr__->AllocatorInstance,
                               &__return_storage_ptr__->ArrayMax);
          }
          __return_storage_ptr__->ArrayNum = iVar3 + 1;
          *(int *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar3 * 4) =
               pFVar5->ID;
        }
      }
    }
    FVar7.Data = FVar7.Data + 8;
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetJumpSkillID @ 14ba4c670

int __thiscall UDS_SkillDataSet::GetJumpSkillID(UDS_SkillDataSet *this)

{
  bool bVar1;
  UObject *pUVar2;
  FDS_WeaponTypeBaseTableRow *pFVar3;
  FWeakObjectPtr local_res8 [4];
  
  bVar1 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)&this->_padding_,
                     (void *)0x0);
  if (!bVar1) {
    FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  }
  UDS_CharInfoData::GetData((ulong64)local_res8);
  bVar1 = FWeakObjectPtr::IsValid(local_res8);
  if (!bVar1) {
    return 0;
  }
  pUVar2 = FWeakObjectPtr::Get(local_res8);
  pFVar3 = FDS_WeaponTypeBaseTableRow::GetRef((ulonglong)(byte)pUVar2[0x17].field_0x10,true);
  return pFVar3->ID_JumpSkill;
}

// GetObjectHandlingSkillList @ 14ba4daf0

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
UDS_SkillDataSet::GetObjectHandlingSkillList
          (UDS_SkillDataSet *this,TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  ForAnyElementType FVar6;
  undefined1 local_res10 [8];
  TArray<FDS_ActionHandlingTableRow_const_*,TSizedDefaultAllocator<32>_> local_28;
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  FDS_ActionHandlingTableRow::GetAll(&local_28);
  uVar4 = local_28.ArrayNum * 2;
  if (-1 < (int)uVar4) {
    if (*piVar1 < (int)uVar4) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar4,&__return_storage_ptr__->AllocatorInstance,
                 __return_storage_ptr__->ArrayNum,piVar1);
    }
    iVar5 = local_28.ArrayNum;
    pFVar2 = local_28.AllocatorInstance.Data + (longlong)local_28.ArrayNum * 8;
    FVar6.Data = local_28.AllocatorInstance.Data;
    while( true ) {
      if (local_28.ArrayNum != iVar5) {
        `TCheckedPointerIterator<FDS_ActionHandlingTableRow_const_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (FVar6.Data == pFVar2) break;
      lVar3 = *(longlong *)FVar6.Data;
      if (0 < *(int *)(lVar3 + 0x1c)) {
        TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                  (__return_storage_ptr__,(int *)(lVar3 + 0x1c));
      }
      if (0 < *(int *)(lVar3 + 0x20)) {
        TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                  (__return_storage_ptr__,(int *)(lVar3 + 0x20));
      }
      FVar6.Data = FVar6.Data + 8;
    }
    if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
    }
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
}

// GetPopupSkillHelperList @ 14ba4e400

TArray<TWeakObjectPtr<UDS_ConditionHelper_PopupSkill,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *
__thiscall
UDS_SkillDataSet::GetPopupSkillHelperList
          (UDS_SkillDataSet *this,
          TArray<TWeakObjectPtr<UDS_ConditionHelper_PopupSkill,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  FWeakObjectPtr *this_00;
  int iVar2;
  UObject *pUVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  UObject *local_res8;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar5 = (this->PopupSkillHelperList).AllocatorInstance.Data;
  iVar2 = (this->PopupSkillHelperList).ArrayNum;
  pFVar1 = pFVar5 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->PopupSkillHelperList).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UDS_ConditionHelper_PopupSkill>,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(&local_res8);
    }
    if (pFVar5 == pFVar1) break;
    iVar4 = __return_storage_ptr__->ArrayNum;
    if (iVar4 == __return_storage_ptr__->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar4 + 1;
    pUVar3 = *(UObject **)pFVar5;
    this_00 = (FWeakObjectPtr *)
              ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar4 * 8);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar3 != (UObject *)0x0) {
        UE::GC::MarkAsReachable(pUVar3);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar3);
      }
    }
    this_00->ObjectIndex = 0;
    this_00->ObjectSerialNumber = 0;
    local_res8 = pUVar3;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar3);
    }
    FWeakObjectPtr::operator=(this_00,(FObjectPtr)&local_res8);
    pFVar5 = pFVar5 + 8;
  }
  return __return_storage_ptr__;
}

// GetSkillDeckInfo @ 14ba4ef00

FDS_SkillDeckInfo * __thiscall UDS_SkillDataSet::GetSkillDeckInfo(UDS_SkillDataSet *this)

{
  return &this->SkillDeckInfo;
}

// GetSkillListFromSkillMode @ 14ba4f0f0

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
UDS_SkillDataSet::GetSkillListFromSkillMode
          (UDS_SkillDataSet *this,TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FDS_SkillTableRow *pFVar8;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar9;
  ulonglong uVar10;
  longlong lVar11;
  ForAnyElementType FVar12;
  ForAnyElementType FVar13;
  FScriptContainerElement *pFVar14;
  undefined1 local_res10 [8];
  TArray<int,TSizedDefaultAllocator<32>_> *local_res18;
  undefined1 local_res20 [8];
  ForAnyElementType local_70;
  undefined8 local_68;
  TArray<int,TSizedDefaultAllocator<32>_> local_60;
  TArray<FDS_SkillActLevelTableRow_const_*,TSizedDefaultAllocator<32>_> local_50;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  uVar3 = param_1->ArrayNum;
  uVar10 = (ulonglong)(int)uVar3;
  pFVar14 = (param_1->AllocatorInstance).Data;
  pFVar1 = pFVar14 + uVar10 * 4;
  local_res18 = param_1;
  while( true ) {
    FVar12.Data = (FScriptContainerElement *)0x0;
    if (local_res18->ArrayNum != (int)uVar10) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar14 == pFVar1) break;
    pFVar8 = FDS_SkillTableRow::Get((longlong)*(int *)pFVar14,true);
    if (pFVar8 != (FDS_SkillTableRow *)0x0) {
      iVar4 = pFVar8->ID_SkillActLevelGroup;
      FDS_SkillActLevelTableRow::GetAll(&local_50);
      local_70.Data = (FScriptContainerElement *)0x0;
      local_68 = 0;
      pFVar2 = local_50.AllocatorInstance.Data + (longlong)local_50.ArrayNum * 8;
      for (FVar13.Data = local_50.AllocatorInstance.Data; FVar13.Data != pFVar2;
          FVar13.Data = FVar13.Data + 8) {
        if (*(int *)(*(longlong *)FVar13.Data + 0x10) == iVar4) {
          if (((FVar12.Data <= FVar13.Data) &&
              (local_68._4_4_ = (int)((ulonglong)local_68 >> 0x20),
              lVar11 = (longlong)local_68._4_4_, FVar13.Data < FVar12.Data + lVar11 * 8)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), FVar12.Data = local_70.Data, bVar6)) {
            pcVar5 = (code *)swi(3);
            pTVar9 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
            return pTVar9;
          }
          if ((int)local_68 == local_68._4_4_) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&local_70,(int *)((longlong)&local_68 + 4));
            local_68 = CONCAT44(local_68._4_4_,iVar7);
            FVar12.Data = local_70.Data;
          }
          lVar11 = (longlong)(int)local_68;
          local_68 = CONCAT44(local_68._4_4_,(int)local_68 + 1);
          *(longlong *)(FVar12.Data + lVar11 * 8) = *(longlong *)FVar13.Data;
          FVar12.Data = local_70.Data;
        }
      }
      if (local_50.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.AllocatorInstance.Data);
        FVar12.Data = local_70.Data;
      }
      iVar4 = (int)local_68;
      pFVar2 = FVar12.Data + (longlong)(int)local_68 * 8;
      while( true ) {
        if ((int)local_68 != iVar4) {
          local_res20[0] = 0;
          `TCheckedPointerIterator<FDS_SkillActLevelTableRow_const_*,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res20);
        }
        if (FVar12.Data == pFVar2) break;
        if (*(longlong *)FVar12.Data != 0) {
          GetAllSkillList_SkillMode(this,&local_60,*(int *)(*(longlong *)FVar12.Data + 0x68));
          if ((__return_storage_ptr__ == &local_60) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(void*)this != (void*)&Source",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x96e,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            pTVar9 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
            return pTVar9;
          }
          lVar11 = (longlong)local_60.ArrayNum;
          if (local_60.ArrayNum != 0) {
            iVar7 = UE::Core::Private::
                    ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (4,4,local_60.ArrayNum,&__return_storage_ptr__->AllocatorInstance,
                               &__return_storage_ptr__->ArrayNum,&__return_storage_ptr__->ArrayMax);
            memcpy((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 4,
                   local_60.AllocatorInstance.Data,lVar11 << 2);
          }
          if (local_60.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_60.AllocatorInstance.Data);
          }
        }
        FVar12.Data = FVar12.Data + 8;
      }
      if (local_70.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.Data);
      }
    }
    pFVar14 = pFVar14 + 4;
    uVar10 = (ulonglong)uVar3;
  }
  return __return_storage_ptr__;
}

// GetSkillSlotDataMap @ 14ba4f5d0

TMap<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,0>_>
* __thiscall
UDS_SkillDataSet::GetSkillSlotDataMap
          (UDS_SkillDataSet *this,
          TMap<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,0>_>
          *__return_storage_ptr__)

{
  if (this->CurrentSkillModeID != 0) {
    GetSkillSlotDataMap_SkillMode(this,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  FDS_SkillDeckInfo::GetSkillSlotDataMap(&this->SkillDeckInfo,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetSkillSlotDataMap_SkillMode @ 14ba4f610

TMap<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,0>_>
* __thiscall
UDS_SkillDataSet::GetSkillSlotDataMap_SkillMode
          (UDS_SkillDataSet *this,
          TMap<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,0>_>
          *__return_storage_ptr__)

{
  int iVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FDS_SkillModeTableRow *pFVar7;
  TMap<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,0>_>
  *pTVar8;
  UObject *pUVar9;
  UClass *pUVar10;
  int *piVar11;
  uint local_res8 [2];
  undefined1 local_res10 [24];
  TArray<int,TSizedDefaultAllocator<32>_> local_a8;
  FWeakObjectPtr local_98;
  FWeakObjectPtr local_90;
  undefined8 local_88;
  UObject *local_80;
  undefined8 local_78;
  uint *local_70;
  undefined8 *local_68;
  uint *local_60;
  undefined8 *local_58;
  uint *local_50;
  FWeakObjectPtr *local_48;
  
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
  if (this->CurrentSkillModeID == 0) {
    return __return_storage_ptr__;
  }
  local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayNum = 0;
  local_a8.ArrayMax = 0;
  pFVar7 = FDS_SkillModeTableRow::Get((longlong)this->CurrentSkillModeID,true);
  if (pFVar7 != (FDS_SkillModeTableRow *)0x0) {
    if (0 < (pFVar7->ModeNormalSkill).ArrayNum) {
      pFVar3 = (pFVar7->ModeNormalSkill).AllocatorInstance.Data;
      if (((local_a8.AllocatorInstance.Data <= pFVar3) &&
          (pFVar3 < local_a8.AllocatorInstance.Data + (longlong)local_a8.ArrayMax * 4)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TMap<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,0>_>
                  *)(*pcVar4)();
        return pTVar8;
      }
      if (local_a8.ArrayNum == local_a8.ArrayMax) {
        local_a8.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x404,&local_a8.AllocatorInstance,&local_a8.ArrayMax);
      }
      *(undefined4 *)(local_a8.AllocatorInstance.Data + (longlong)local_a8.ArrayNum * 4) =
           *(undefined4 *)pFVar3;
      local_a8.ArrayNum = local_a8.ArrayNum + 1;
    }
    TArray<int,TSizedDefaultAllocator<32>_>::Append<int,TSizedDefaultAllocator<32>_>
              (&local_a8,&pFVar7->ModeSkill);
    piVar2 = &pFVar7->ModeTraitSkill;
    if (((local_a8.AllocatorInstance.Data <= piVar2) &&
        (piVar2 < local_a8.AllocatorInstance.Data + (longlong)local_a8.ArrayMax * 4)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TMap<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,0>_>
                *)(*pcVar4)();
      return pTVar8;
    }
    if (local_a8.ArrayNum == local_a8.ArrayMax) {
      local_a8.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x404,&local_a8.AllocatorInstance,&local_a8.ArrayMax);
    }
    iVar1 = local_a8.ArrayNum + 1;
    piVar11 = &pFVar7->ModeSpecialSkill;
    *(int *)(local_a8.AllocatorInstance.Data + (longlong)local_a8.ArrayNum * 4) = *piVar2;
    local_a8.ArrayNum = iVar1;
    if (((local_a8.AllocatorInstance.Data <= piVar11) &&
        (piVar11 < local_a8.AllocatorInstance.Data + (longlong)local_a8.ArrayMax * 4)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TMap<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,0>_>
                *)(*pcVar4)();
      return pTVar8;
    }
    if (local_a8.ArrayNum == local_a8.ArrayMax) {
      local_a8.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x404,&local_a8.AllocatorInstance,&local_a8.ArrayMax);
    }
    iVar1 = local_a8.ArrayNum + 1;
    local_res8[0] = 0;
    *(int *)(local_a8.AllocatorInstance.Data + (longlong)local_a8.ArrayNum * 4) = *piVar11;
    pUVar9 = (UObject *)0x0;
    local_a8.ArrayNum = iVar1;
    if (0 < iVar1) {
      do {
        uVar6 = 0;
        if ((int)(uint)pUVar9 < local_a8.ArrayNum) {
          uVar6 = ~(uint)pUVar9 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TMap<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,0>_>
                    *)(*pcVar4)();
          return pTVar8;
        }
        UDS_DataSetBase::GetData((UDS_DataSetBase *)this,(ulong64)&local_90);
        bVar5 = FWeakObjectPtr::IsValid(&local_90);
        if (bVar5) {
          pUVar9 = FWeakObjectPtr::Get(&local_90);
          if (pUVar9 == (UObject *)0x0) {
LAB_14ba4f94d:
            pUVar9 = (UObject *)0x0;
          }
          else {
            pUVar10 = Z_Construct_UClass_UDS_SkillData_NoRegister();
            iVar1 = (int)pUVar10->_padding_;
            if ((*(int *)(*(longlong *)&pUVar9->field_0x10 + 0x38) < iVar1) ||
               ((longlong *)
                *(undefined1 **)
                 (*(longlong *)(*(longlong *)&pUVar9->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
                &pUVar10->_padding_)) goto LAB_14ba4f94d;
          }
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar9);
          }
          local_98.ObjectIndex = 0;
          local_98.ObjectSerialNumber = 0;
          local_80 = pUVar9;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar9);
          }
          FWeakObjectPtr::operator=(&local_98,(FObjectPtr)&local_80);
          bVar5 = FWeakObjectPtr::IsValid(&local_98);
          if (bVar5) {
            local_48 = &local_98;
            local_50 = local_res8;
            TSet<TTuple<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<int_&,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>_&>_>
                      ((TSet<TTuple<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                        *)__return_storage_ptr__,
                       (TPairInitializer<int_&,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>_&> *)
                       (local_res10 + 0x10),(bool *)&local_50);
          }
          else {
            local_58 = &local_78;
            local_78 = 0;
            local_60 = local_res8;
            TSet<TTuple<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<int_&,std::nullptr_t_&&>_>
                      ((TSet<TTuple<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                        *)__return_storage_ptr__,
                       (TPairInitializer<int_&,std::nullptr_t_&&> *)(local_res10 + 8),
                       (bool *)&local_60);
          }
        }
        else {
          local_70 = local_res8;
          local_88 = 0;
          local_68 = &local_88;
          TSet<TTuple<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<int_&,std::nullptr_t_&&>_>
                    ((TSet<TTuple<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                      *)__return_storage_ptr__,
                     (TPairInitializer<int_&,std::nullptr_t_&&> *)local_res10,(bool *)&local_70);
        }
        local_res8[0] = local_res8[0] + 1;
        pUVar9 = (UObject *)(ulonglong)local_res8[0];
      } while ((int)local_res8[0] < local_a8.ArrayNum);
    }
  }
  if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetSkillUseHelperList @ 14ba4fa40

TArray<TWeakObjectPtr<UDS_ConditionHelper_SkillUse,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *
__thiscall
UDS_SkillDataSet::GetSkillUseHelperList
          (UDS_SkillDataSet *this,
          TArray<TWeakObjectPtr<UDS_ConditionHelper_SkillUse,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  FWeakObjectPtr *this_00;
  int iVar2;
  UObject *pUVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  UObject *local_res8;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar5 = (this->SkillUseHelperList).AllocatorInstance.Data;
  iVar2 = (this->SkillUseHelperList).ArrayNum;
  pFVar1 = pFVar5 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->SkillUseHelperList).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UDS_ConditionHelper_SkillUse>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_res8);
    }
    if (pFVar5 == pFVar1) break;
    iVar4 = __return_storage_ptr__->ArrayNum;
    if (iVar4 == __return_storage_ptr__->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar4 + 1;
    pUVar3 = *(UObject **)pFVar5;
    this_00 = (FWeakObjectPtr *)
              ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar4 * 8);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar3 != (UObject *)0x0) {
        UE::GC::MarkAsReachable(pUVar3);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar3);
      }
    }
    this_00->ObjectIndex = 0;
    this_00->ObjectSerialNumber = 0;
    local_res8 = pUVar3;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar3);
    }
    FWeakObjectPtr::operator=(this_00,(FObjectPtr)&local_res8);
    pFVar5 = pFVar5 + 8;
  }
  return __return_storage_ptr__;
}

// GetSubSkillList @ 14ba501c0

TArray<TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> * __thiscall
UDS_SkillDataSet::GetSubSkillList
          (UDS_SkillDataSet *this,
          TArray<TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  void *_Src;
  FWeakObjectPtr *pFVar2;
  bool bVar3;
  int iVar4;
  UObject *pUVar5;
  UDS_DataSetBase *this_00;
  TWeakObjectPtr<UDS_DataBase,FWeakObjectPtr> this_01;
  UClass *pUVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  ForAnyElementType FVar11;
  UObject *local_res10;
  uint local_res18;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_98;
  FWeakObjectPtr local_90;
  FWeakObjectPtr *local_88;
  FWeakObjectPtr local_80;
  FWeakObjectPtr *local_78;
  undefined1 local_70 [8];
  ForAnyElementType local_68;
  int local_60;
  int local_5c;
  TArray<TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_58;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  FDS_SkillDeckInfo::GetSkillList(&this->SkillDeckInfo,&local_58);
  uVar7 = (ulonglong)local_58.ArrayNum;
  local_res18 = local_58.ArrayNum;
  local_78 = (FWeakObjectPtr *)(local_58.AllocatorInstance.Data + uVar7 * 8);
  uVar8 = uVar7;
  FVar11.Data = local_58.AllocatorInstance.Data;
  do {
    pFVar2 = local_78;
    local_88 = (FWeakObjectPtr *)FVar11.Data;
    if ((int)uVar7 != (int)uVar8) {
      `TCheckedPointerIterator<TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,int,0>::operator!='::
      __l2::<lambda_1>::operator()(&local_res10);
    }
    if ((FWeakObjectPtr *)FVar11.Data == pFVar2) {
      if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.AllocatorInstance.Data);
      }
      return __return_storage_ptr__;
    }
    local_80 = *(FWeakObjectPtr *)FVar11.Data;
    pUVar5 = FWeakObjectPtr::Get(&local_80);
    local_68.Data = (FScriptContainerElement *)0x0;
    local_60 = *(int *)&pUVar5[3].field_0x10;
    lVar10 = (longlong)local_60;
    _Src = *(void **)&pUVar5[3].field_0x8;
    if (local_60 == 0) {
      local_5c = 0;
      iVar9 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_60,0,&local_68,local_60,&local_5c);
      memcpy(local_68.Data,_Src,lVar10 << 2);
      iVar9 = local_60;
    }
    pFVar1 = local_68.Data + (longlong)iVar9 * 4;
    FVar11.Data = local_68.Data;
    iVar4 = iVar9;
    while( true ) {
      if (iVar4 != iVar9) {
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_res10)
        ;
      }
      if (FVar11.Data == pFVar1) break;
      bVar3 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)&this->_padding_,
                         (void *)0x0);
      if (!bVar3) {
        FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      }
      TDS_DataSetGetter<UDS_SkillDataSet>::Get((ulong64)&local_90);
      bVar3 = TWeakObjectPtr<UDS_SkillDataSet,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_SkillDataSet,FWeakObjectPtr> *)&local_90,(void *)0x0);
      if (bVar3) {
LAB_14ba503be:
        local_res20.ObjectIndex = 0;
        local_res20.ObjectSerialNumber = 0;
        local_res10 = (UObject *)0x0;
        FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_res10);
      }
      else {
        this_00 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_90);
        this_01 = UDS_DataSetBase::GetData(this_00,(ulong64)local_70);
        pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_01.WeakPtr);
        if (pUVar5 == (UObject *)0x0) {
LAB_14ba50356:
          pUVar5 = (UObject *)0x0;
        }
        else {
          pUVar6 = Z_Construct_UClass_UDS_SkillData_NoRegister();
          iVar4 = (int)pUVar6->_padding_;
          if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar4) ||
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar4 * 8) !=
              &pUVar6->_padding_)) goto LAB_14ba50356;
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar5);
        }
        local_98.ObjectIndex = 0;
        local_98.ObjectSerialNumber = 0;
        local_res10 = pUVar5;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar5);
        }
        FWeakObjectPtr::operator=(&local_98,(FObjectPtr)&local_res10);
        bVar3 = TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr> *)&local_98,(void *)0x0);
        if (bVar3) goto LAB_14ba503be;
        local_res20 = local_98;
      }
      bVar3 = FWeakObjectPtr::IsValid(&local_res20);
      if (bVar3) {
        iVar4 = __return_storage_ptr__->ArrayNum;
        if (iVar4 == __return_storage_ptr__->ArrayMax) {
          iVar4 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar4 + 1;
        *(FWeakObjectPtr *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar4 * 8)
             = local_res20;
      }
      FVar11.Data = FVar11.Data + 4;
      iVar4 = local_60;
    }
    if (local_68.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data);
    }
    uVar7 = (ulonglong)(uint)local_58.ArrayNum;
    FVar11.Data = (FScriptContainerElement *)(local_88 + 1);
    uVar8 = (ulonglong)local_res18;
  } while( true );
}

// InitSkillDataByWeaponType @ 14ba56090

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_SkillDataSet::InitSkillDataByWeaponType(UDS_SkillDataSet *this,EDS_WeaponType param_1)

{
  FScriptContainerElement *pFVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  code *pcVar4;
  EDS_WeaponType EVar5;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *pTVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  FDS_WeaponTypeBaseTableRow *pFVar10;
  FDS_SkillTableRow *pFVar11;
  UDS_LogManager *pUVar12;
  byte bVar13;
  longlong lVar14;
  ForElementType<FSetElementId> FVar15;
  FScriptContainerElement *pFVar16;
  ForAnyElementType FVar17;
  int *piVar18;
  uint uVar19;
  uint uVar20;
  uint *puVar21;
  undefined1 auStackY_2b8 [32];
  TArray<int,TSizedDefaultAllocator<32>_> local_278;
  undefined1 local_268;
  undefined1 local_267;
  EDS_WeaponType local_266;
  undefined1 local_265;
  undefined4 local_264;
  undefined1 local_260 [16];
  int local_250;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *local_248;
  uint uStack_240;
  uint uStack_23c;
  TBitArray<FDefaultBitArrayAllocator> *local_238;
  undefined4 uStack_230;
  uint uStack_22c;
  uint local_228;
  undefined4 uStack_224;
  int iStack_220;
  undefined4 uStack_21c;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *local_218;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_210;
  undefined8 uStack_1f0;
  FScriptContainerElement *local_1e8;
  undefined4 *local_1e0;
  undefined4 local_1bc;
  undefined1 local_1b8 [32];
  uint *local_198;
  uint local_190;
  undefined4 local_18c;
  undefined4 local_188;
  int local_184;
  undefined1 local_180 [8];
  ForElementType<FSetElementId> local_178;
  int local_170;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  piVar18 = &(this->SkillDeckInfo).SkillDeckItemList.ArrayMax;
  (this->SkillDeckInfo).SkillDeckItemList.ArrayNum = 0;
  local_266 = param_1;
  if (*piVar18 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&(this->SkillDeckInfo).SkillDeckItemList.AllocatorInstance,0,piVar18);
  }
  local_278.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_278.ArrayNum = 0;
  local_278.ArrayMax = 0;
  local_1b8._0_8_ = 0;
  local_1b8._8_8_ = 0;
  local_198 = (uint *)0x0;
  local_190 = 0;
  local_18c = 0x80;
  local_188 = 0xffffffff;
  local_184 = 0;
  local_178 = (ForElementType<FSetElementId>)0x0;
  local_170 = 0;
  pFVar10 = FDS_WeaponTypeBaseTableRow::GetRef((ulonglong)param_1,true);
  if (0 < (pFVar10->ID_NormalAttack).ArrayNum) {
    UpdateSkillDeckInfo(this,0,*(int *)(pFVar10->ID_NormalAttack).AllocatorInstance.Data,1);
  }
  pFVar16 = (pFVar10->ID_NormalAttack).AllocatorInstance.Data;
  iVar9 = (pFVar10->ID_NormalAttack).ArrayNum;
  pFVar1 = pFVar16 + (longlong)iVar9 * 4;
  while( true ) {
    if ((pFVar10->ID_NormalAttack).ArrayNum != iVar9) {
      local_268 = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_268);
    }
    if (pFVar16 == pFVar1) break;
    uVar3 = *(undefined4 *)pFVar16;
    iVar8 = local_278.ArrayNum;
    if (local_278.ArrayNum == local_278.ArrayMax) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&local_278.AllocatorInstance,&local_278.ArrayMax);
    }
    pFVar16 = pFVar16 + 4;
    local_278.ArrayNum = iVar8 + 1;
    *(undefined4 *)(local_278.AllocatorInstance.Data + (longlong)iVar8 * 4) = uVar3;
  }
  iVar9 = local_278.ArrayNum;
  if (local_278.ArrayNum == local_278.ArrayMax) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&local_278.AllocatorInstance,&local_278.ArrayMax);
  }
  iVar8 = iVar9 + 1;
  *(int *)(local_278.AllocatorInstance.Data + (longlong)iVar9 * 4) = pFVar10->ID_BaseSkill01;
  if (iVar8 == local_278.ArrayMax) {
    local_278.ArrayNum = iVar8;
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&local_278.AllocatorInstance,&local_278.ArrayMax);
  }
  local_278.ArrayNum = iVar8 + 1;
  *(int *)(local_278.AllocatorInstance.Data + (longlong)iVar8 * 4) = pFVar10->ID_BaseSkill02;
  if (local_278.ArrayNum == local_278.ArrayMax) {
    local_278.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x404,&local_278.AllocatorInstance,&local_278.ArrayMax);
  }
  iVar9 = local_278.ArrayNum + 1;
  *(int *)(local_278.AllocatorInstance.Data + (longlong)local_278.ArrayNum * 4) =
       pFVar10->ID_BaseSkill03;
  if (iVar9 == local_278.ArrayMax) {
    local_278.ArrayNum = iVar9;
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&local_278.AllocatorInstance,&local_278.ArrayMax);
  }
  local_278.ArrayNum = iVar9 + 1;
  *(int *)(local_278.AllocatorInstance.Data + (longlong)iVar9 * 4) = pFVar10->ID_BaseSkill04;
  if (local_278.ArrayNum == local_278.ArrayMax) {
    local_278.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x404,&local_278.AllocatorInstance,&local_278.ArrayMax);
  }
  iVar9 = local_278.ArrayNum + 1;
  *(int *)(local_278.AllocatorInstance.Data + (longlong)local_278.ArrayNum * 4) =
       pFVar10->ID_BaseSkill05;
  if (iVar9 == local_278.ArrayMax) {
    local_278.ArrayNum = iVar9;
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&local_278.AllocatorInstance,&local_278.ArrayMax);
  }
  local_278.ArrayNum = iVar9 + 1;
  *(int *)(local_278.AllocatorInstance.Data + (longlong)iVar9 * 4) = pFVar10->ID_BaseSkill06;
  if ((&local_278 == &pFVar10->ID_LinkSkillList) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)this != (void*)&Source",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x96e,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar9 = (pFVar10->ID_LinkSkillList).ArrayNum;
  if (iVar9 != 0) {
    iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,iVar9,&local_278.AllocatorInstance,&local_278.ArrayNum,
                       &local_278.ArrayMax);
    memcpy(local_278.AllocatorInstance.Data + (longlong)iVar8 * 4,
           (pFVar10->ID_LinkSkillList).AllocatorInstance.Data,(longlong)iVar9 << 2);
  }
  iVar9 = local_278.ArrayNum;
  if (local_278.ArrayNum == local_278.ArrayMax) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&local_278.AllocatorInstance,&local_278.ArrayMax);
  }
  iVar8 = iVar9 + 1;
  *(int *)(local_278.AllocatorInstance.Data + (longlong)iVar9 * 4) = pFVar10->ID_JumpSkill;
  if (iVar8 == local_278.ArrayMax) {
    local_278.ArrayNum = iVar8;
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&local_278.AllocatorInstance,&local_278.ArrayMax);
  }
  local_278.ArrayNum = iVar8 + 1;
  *(int *)(local_278.AllocatorInstance.Data + (longlong)iVar8 * 4) = pFVar10->ID_InputRoll;
  if (local_278.ArrayNum == local_278.ArrayMax) {
    local_278.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x404,&local_278.AllocatorInstance,&local_278.ArrayMax);
  }
  iVar9 = local_278.ArrayNum + 1;
  *(int *)(local_278.AllocatorInstance.Data + (longlong)local_278.ArrayNum * 4) =
       pFVar10->ID_NotInputRoll;
  if (iVar9 == local_278.ArrayMax) {
    local_278.ArrayNum = iVar9;
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&local_278.AllocatorInstance,&local_278.ArrayMax);
  }
  iVar8 = iVar9 + 1;
  *(int *)(local_278.AllocatorInstance.Data + (longlong)iVar9 * 4) = pFVar10->ID_BattleInputRoll;
  if (iVar8 == local_278.ArrayMax) {
    local_278.ArrayNum = iVar8;
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&local_278.AllocatorInstance,&local_278.ArrayMax);
  }
  local_278.ArrayNum = iVar8 + 1;
  *(int *)(local_278.AllocatorInstance.Data + (longlong)iVar8 * 4) = pFVar10->ID_BattleNotInputRoll;
  GetSkillListFromSkillMode
            (this,(TArray<int,TSizedDefaultAllocator<32>_> *)(local_260 + 8),&local_278);
  if (local_250 != 0) {
    iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,local_250,&local_278.AllocatorInstance,&local_278.ArrayNum,
                       &local_278.ArrayMax);
    memcpy(local_278.AllocatorInstance.Data + (longlong)iVar9 * 4,(void *)local_260._8_8_,
           (longlong)local_250 << 2);
  }
  iVar9 = local_278.ArrayNum;
  pFVar1 = local_278.AllocatorInstance.Data + (longlong)local_278.ArrayNum * 4;
  FVar17.Data = local_278.AllocatorInstance.Data;
  while( true ) {
    if (local_278.ArrayNum != iVar9) {
      local_267 = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_267);
    }
    uVar20 = local_190;
    if (FVar17.Data == pFVar1) break;
    if (local_1b8._8_4_ != local_184) {
      FVar15 = (ForElementType<FSetElementId>)local_180;
      if (local_178 != (ForElementType<FSetElementId>)0x0) {
        FVar15 = local_178;
      }
      for (iVar8 = *(int *)((longlong)FVar15 +
                           (ulonglong)(local_170 - 1U & *(uint *)FVar17.Data) * 4); iVar8 != -1;
          iVar8 = *(int *)(local_1b8._0_8_ + 8 + (longlong)iVar8 * 0x10)) {
        if (*(uint *)(local_1b8._0_8_ + (longlong)iVar8 * 0x10) == *(uint *)FVar17.Data)
        goto LAB_14ba56563;
      }
    }
    local_1e0 = &local_264;
    local_264 = 1;
    local_1e8 = FVar17.Data;
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_const_&,int_&&>_>
              ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
               local_1b8,(TPairInitializer<int_const_&,int_&&> *)local_260,(bool *)&local_1e8);
LAB_14ba56563:
    FVar17.Data = FVar17.Data + 4;
  }
  uStack_240 = 0;
  uStack_23c = 1;
  local_228 = 0;
  uStack_22c = local_228;
  if (local_190 != 0) {
    puVar21 = (uint *)(local_1b8 + 0x10);
    if (local_198 != (uint *)0x0) {
      puVar21 = local_198;
    }
    uVar19 = *puVar21;
    local_228 = 0;
    uStack_240 = 0;
    while (uVar19 == 0) {
      lVar14 = (longlong)(int)uStack_240;
      local_228 = local_228 + 0x20;
      uStack_240 = uStack_240 + 1;
      uStack_22c = local_190;
      if ((int)((local_190 - 1) + ((int)(local_190 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_240)
      goto LAB_14ba565f1;
      uVar19 = puVar21[lVar14 + 1];
    }
    uStack_23c = -uVar19 & uVar19;
    uVar2 = (ulonglong)uStack_23c * 2 + 1;
    lVar14 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_260._4_4_ = (undefined4)lVar14;
    uStack_22c = local_260._4_4_ + -1 + local_228;
    if ((int)local_190 < (int)uStack_22c) {
      uStack_22c = local_190;
    }
  }
LAB_14ba565f1:
  uStack_224 = local_1bc;
  local_238 = (TBitArray<FDefaultBitArrayAllocator> *)(local_1b8 + 0x10);
  uVar19 = local_190 & 0xffffffe0;
  iStack_220 = local_1b8._8_4_ - local_184;
  uStack_230 = 0xffffffff;
  TStack_210.CurrentBitIndex = uStack_22c;
  TStack_210.UnvisitedBitMask = 0xffffffff;
  TStack_210._padding_ = CONCAT44(uStack_23c,uStack_240);
  iVar9 = (int)local_190 >> 5;
  TStack_210._28_4_ = local_1bc;
  TStack_210.BaseBitIndex = local_228;
  uStack_1f0 = CONCAT44(uStack_21c,iStack_220);
  bVar13 = (byte)local_190;
  local_248 = (TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
              local_1b8;
  local_218 = (TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
              local_1b8;
  TStack_210.Array = local_238;
  if (((int)local_190 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  EVar5 = local_266;
  if (uVar20 != local_190) {
    puVar21 = (uint *)(local_1b8 + 0x10);
    if (local_198 != (uint *)0x0) {
      puVar21 = local_198;
    }
    uVar20 = -1 << (bVar13 & 0x1f) & puVar21[iVar9];
    while (uVar20 == 0) {
      lVar14 = (longlong)iVar9;
      uVar19 = uVar19 + 0x20;
      iVar9 = iVar9 + 1;
      uVar20 = local_190;
      if ((int)((local_190 - 1) + ((int)(local_190 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9)
      goto LAB_14ba56700;
      uVar20 = puVar21[lVar14 + 1];
    }
    uVar2 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    uVar20 = (int)lVar14 + -1 + uVar19;
    if ((int)local_190 < (int)uVar20) {
      uVar20 = local_190;
    }
  }
LAB_14ba56700:
  while( true ) {
    pTVar6 = local_218;
    if (*(int *)&(local_218->Elements).field_0x8 - *(int *)&(local_218->Elements).field_0x34 !=
        (int)uStack_1f0) {
      `TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_265);
    }
    if (((TStack_210.CurrentBitIndex == uVar20) &&
        (TStack_210.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_1b8 + 0x10))) &&
       (pTVar6 == (TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                   *)local_1b8)) break;
    piVar18 = (int *)(*(longlong *)&pTVar6->Elements + (longlong)TStack_210.CurrentBitIndex * 0x10);
    pFVar11 = FDS_SkillTableRow::Get((longlong)*piVar18,true);
    if (pFVar11 == (FDS_SkillTableRow *)0x0) {
      pUVar12 = UDS_LogManager::GetInst();
      if (pUVar12 != (UDS_LogManager *)0x0) {
        pUVar12 = UDS_LogManager::GetInst();
        local_168._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_168,"UDS_SkillDataSet::InitSkillDataByWeaponType",0x2b,Yes);
        UDS_LogManager::PrintLog
                  (pUVar12,1,Warning,local_168.Ptr,0x812,L"SkillTableRow is nullptr. SkillID : %d");
        if ((void *)local_168._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_168._padding_);
        }
      }
    }
    else {
      RefreshData(this,pFVar11,*piVar18,piVar18[1],EVar5);
    }
    TStack_210.UnvisitedBitMask = TStack_210.UnvisitedBitMask & ~TStack_210._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_210);
  }
  if ((int *)local_260._8_8_ != (int *)0x0) {
    FMemory::Free((void *)local_260._8_8_);
  }
  local_170 = 0;
  if (local_178 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_178);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_1b8);
  if (local_278.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_278.AllocatorInstance.Data);
  }
  return;
}

// IsAutoUseSkill @ 14ba5a1b0

bool __cdecl UDS_SkillDataSet::IsAutoUseSkill(int *param_1)

{
  FScriptContainerElement *pFVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int *piVar6;
  ForAnyElementType FVar7;
  undefined1 local_res10 [8];
  TArray<FDS_SkillConditionTableRow_const_*,TSizedDefaultAllocator<32>_> local_38;
  
  if (AutoUseSkillList.ArrayNum == 0) {
    FDS_SkillConditionTableRow::GetAll(&local_38);
    iVar5 = local_38.ArrayNum;
    pFVar1 = local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 8;
    FVar7.Data = local_38.AllocatorInstance.Data;
    while( true ) {
      if (local_38.ArrayNum != iVar5) {
        `TCheckedPointerIterator<FDS_SkillConditionTableRow_const_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (FVar7.Data == pFVar1) break;
      lVar4 = *(longlong *)FVar7.Data;
      if (lVar4 != 0) {
        piVar6 = *(int **)(lVar4 + 0x1b0);
        iVar3 = *(int *)(lVar4 + 0x1b8);
        piVar2 = piVar6 + iVar3;
        while( true ) {
          if (*(int *)(lVar4 + 0x1b8) != iVar3) {
            `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_res10);
          }
          if (piVar6 == piVar2) break;
          if (*piVar6 != 0) {
            TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                      (&AutoUseSkillList,piVar6);
          }
          piVar6 = piVar6 + 1;
        }
      }
      FVar7.Data = FVar7.Data + 8;
    }
    if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.AllocatorInstance.Data);
    }
  }
  if (AutoUseSkillList.AllocatorInstance.Data !=
      AutoUseSkillList.AllocatorInstance.Data + (longlong)AutoUseSkillList.ArrayNum * 4) {
    FVar7.Data = AutoUseSkillList.AllocatorInstance.Data;
    do {
      if (*(int *)FVar7.Data == *param_1) {
        return true;
      }
      FVar7.Data = FVar7.Data + 4;
    } while (FVar7.Data !=
             AutoUseSkillList.AllocatorInstance.Data + (longlong)AutoUseSkillList.ArrayNum * 4);
  }
  return false;
}

// IsPopupSkill @ 14ba5c6e0

bool __thiscall UDS_SkillDataSet::IsPopupSkill(UDS_SkillDataSet *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->PopupSkillHelperList).AllocatorInstance.Data;
  iVar2 = (this->PopupSkillHelperList).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->PopupSkillHelperList).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UDS_ConditionHelper_PopupSkill>,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if (*(int *)(*(longlong *)pFVar3 + 0x70) == param_1) {
      return true;
    }
    pFVar3 = pFVar3 + 8;
  }
  return false;
}

// IsSwitchingSkill @ 14ba5d2e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_SkillDataSet::IsSwitchingSkill(UDS_SkillDataSet *this,int *param_1)

{
  longlong *this_00;
  bool bVar1;
  UObject *pUVar2;
  FDS_CharacterBaseTableRow *pFVar3;
  UDS_LogManager *pUVar4;
  int iVar5;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  this_00 = &this->_padding_;
  bVar1 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)this_00,(void *)0x0);
  if (bVar1) {
    iVar5 = 0;
  }
  else {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
    iVar5 = *(int *)&pUVar2[1].field_0xc;
  }
  pFVar3 = FDS_CharacterBaseTableRow::Get((longlong)iVar5,true);
  if (pFVar3 == (FDS_CharacterBaseTableRow *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      bVar1 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)this_00,(void *)0x0)
      ;
      if (!bVar1) {
        FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
      }
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_SkillDataSet::IsSwitchingSkill",0x22,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Warning,local_138.Ptr,0x707,L"characterBaseTable is nullptr. (%d)");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    bVar1 = false;
  }
  else {
    bVar1 = pFVar3->ID_SwitchingSkill == *param_1;
  }
  return bVar1;
}

// OnAdded @ 14ba5f160

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_SkillDataSet::OnAdded(UDS_SkillDataSet *this)

{
  TArray<FDS_SkillDeckItem,TSizedDefaultAllocator<32>_> *pTVar1;
  char cVar2;
  code *pcVar3;
  longlong *plVar4;
  bool bVar5;
  int iVar6;
  UObject *pUVar7;
  FDS_NpcBaseTableRow *pFVar8;
  UDS_LogManager *pUVar9;
  FDS_NpcBattleTableRow *pFVar10;
  FDS_InteractionTableRow *pFVar11;
  FDS_ActionHandlingTableRow *pFVar12;
  FDS_SkillTotemTableRow *pFVar13;
  TWeakObjectPtr<AActor,FWeakObjectPtr> this_00;
  UClass *pUVar14;
  FDS_SkillTableRow *pFVar15;
  byte bVar16;
  ulong64 uVar17;
  ulonglong uVar18;
  ForElementType<FSetElementId> FVar19;
  int iVar20;
  ulonglong uVar21;
  FScriptContainerElement *pFVar22;
  int *piVar23;
  uint uVar24;
  uint uVar25;
  longlong lVar26;
  ForAnyElementType FVar27;
  uint *puVar28;
  FScriptContainerElement *pFVar29;
  undefined1 auStackY_5e8 [32];
  undefined1 local_598;
  undefined1 local_597;
  undefined1 local_596 [6];
  TArray<int,TSizedDefaultAllocator<32>_> local_590;
  undefined1 local_580 [4];
  uint local_57c;
  undefined4 local_578 [2];
  FDS_NpcBaseTableRow *local_570;
  FScriptContainerElement *local_568;
  TArray<FDS_MountBaseTableRow_const_*,TSizedDefaultAllocator<32>_> local_560;
  undefined1 local_550 [8];
  undefined1 local_548 [8];
  undefined1 local_540 [8];
  TPairInitializer<int_const_&,int_&&> local_538;
  UDS_SkillDataSet *local_528;
  longlong *local_520;
  uint uStack_518;
  uint uStack_514;
  TBitArray<FDefaultBitArrayAllocator> *local_510;
  undefined4 uStack_508;
  uint uStack_504;
  uint local_500;
  undefined4 uStack_4fc;
  int iStack_4f8;
  undefined4 uStack_4f4;
  TArray<int,TSizedDefaultAllocator<32>_> local_4f0;
  TArray<int,TSizedDefaultAllocator<32>_> local_4e0;
  longlong *local_4d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_4c8;
  undefined8 uStack_4a8;
  FScriptContainerElement *local_4a0;
  int *local_498;
  FScriptContainerElement *local_490;
  int *local_488;
  FScriptContainerElement *local_480;
  int *local_478;
  int *local_470;
  int *local_468;
  int *local_460;
  UObject *local_458;
  FScriptContainerElement *local_450;
  undefined4 *local_448;
  FScriptContainerElement *local_440;
  int *local_438;
  ulong64 local_430 [2];
  undefined8 local_420 [5];
  undefined4 local_3f4;
  undefined1 local_3e8 [32];
  uint *local_3c8;
  uint local_3c0;
  undefined4 local_3bc;
  undefined4 local_3b8;
  int local_3b4;
  undefined1 local_3b0 [8];
  ForElementType<FSetElementId> local_3a8;
  int local_3a0;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_398;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_5e8;
  local_528 = this;
  bVar5 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)&this->_padding_,
                     (void *)0x0);
  uVar17 = 0;
  if (!bVar5) {
    pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    uVar17 = *(ulong64 *)(pUVar7 + 1);
  }
  pTVar1 = &(this->SkillDeckInfo).SkillDeckItemList;
  (this->SkillDeckInfo).DataContainerKey = uVar17;
  if (pTVar1 != (TArray<FDS_SkillDeckItem,TSizedDefaultAllocator<32>_> *)local_420) {
    pFVar29 = (pTVar1->AllocatorInstance).Data;
    if (pFVar29 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar29);
    }
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->SkillDeckInfo).SkillDeckItemList.ArrayNum = 0;
    (this->SkillDeckInfo).SkillDeckItemList.ArrayMax = 0;
  }
  local_3e8._0_8_ = 0;
  local_3e8._8_8_ = 0;
  local_3c8 = (uint *)0x0;
  local_3c0 = 0;
  local_3bc = 0x80;
  local_3b8 = 0xffffffff;
  local_3b4 = 0;
  local_3a8 = (ForElementType<FSetElementId>)0x0;
  local_3a0 = 0;
  bVar5 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)&this->_padding_,
                     (void *)0x0);
  if (!bVar5) {
    pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    cVar2 = pUVar7[1].field_0x8;
    if (((cVar2 == '\x02') || (cVar2 == '\x03')) || (cVar2 == '\x04')) {
      local_590.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_590.ArrayNum = 0;
      local_590.ArrayMax = 0;
      FDS_MountBaseTableRow::GetAll(&local_560);
      iVar6 = local_560.ArrayNum;
      pFVar29 = local_560.AllocatorInstance.Data + (longlong)local_560.ArrayNum * 8;
      FVar27.Data = local_560.AllocatorInstance.Data;
      while( true ) {
        if (local_560.ArrayNum != iVar6) {
          local_597 = 0;
          `TCheckedPointerIterator<FDS_MountBaseTableRow_const_*_const,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_597);
        }
        if (FVar27.Data == pFVar29) break;
        if ((*(longlong *)FVar27.Data != 0) &&
           (pFVar22 = (FScriptContainerElement *)(*(longlong *)FVar27.Data + 0x30),
           *(uint *)pFVar22 != 0)) {
          if ((local_590.AllocatorInstance.Data <= pFVar22) &&
             ((pFVar22 < local_590.AllocatorInstance.Data + (longlong)local_590.ArrayMax * 4 &&
              (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar5)))) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar20 = local_590.ArrayNum;
          if (local_590.ArrayNum == local_590.ArrayMax) {
            iVar20 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&local_590.AllocatorInstance,&local_590.ArrayMax);
          }
          local_590.ArrayNum = iVar20 + 1;
          *(uint *)(local_590.AllocatorInstance.Data + (longlong)iVar20 * 4) = *(uint *)pFVar22;
        }
        FVar27.Data = FVar27.Data + 8;
      }
      GetSkillListFromSkillMode(this,&local_4e0,&local_590);
      if (local_4e0.ArrayNum != 0) {
        iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,local_4e0.ArrayNum,&local_590.AllocatorInstance,&local_590.ArrayNum,
                           &local_590.ArrayMax);
        memcpy(local_590.AllocatorInstance.Data + (longlong)iVar6 * 4,
               local_4e0.AllocatorInstance.Data,(longlong)local_4e0.ArrayNum << 2);
      }
      GetObjectHandlingSkillList(this,&local_4f0);
      if (local_4f0.ArrayNum != 0) {
        iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,local_4f0.ArrayNum,&local_590.AllocatorInstance,&local_590.ArrayNum,
                           &local_590.ArrayMax);
        memcpy(local_590.AllocatorInstance.Data + (longlong)iVar6 * 4,
               local_4f0.AllocatorInstance.Data,(longlong)local_4f0.ArrayNum << 2);
      }
      iVar6 = local_590.ArrayNum;
      pFVar29 = local_590.AllocatorInstance.Data + (longlong)local_590.ArrayNum * 4;
      FVar27.Data = local_590.AllocatorInstance.Data;
      while( true ) {
        if (local_590.ArrayNum != iVar6) {
          local_596[0] = 0;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_596);
        }
        if (FVar27.Data == pFVar29) break;
        if (local_3e8._8_4_ != local_3b4) {
          FVar19 = (ForElementType<FSetElementId>)local_3b0;
          if (local_3a8 != (ForElementType<FSetElementId>)0x0) {
            FVar19 = local_3a8;
          }
          for (iVar20 = *(int *)((longlong)FVar19 +
                                (ulonglong)(local_3a0 - 1U & *(uint *)FVar27.Data) * 4);
              iVar20 != -1; iVar20 = *(int *)(local_3e8._0_8_ + 8 + (longlong)iVar20 * 0x10)) {
            if (*(uint *)(local_3e8._0_8_ + (longlong)iVar20 * 0x10) == *(uint *)FVar27.Data)
            goto LAB_14ba5fae1;
          }
        }
        local_448 = local_578;
        local_578[0] = 1;
        local_450 = FVar27.Data;
        TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
        Emplace<TPairInitializer<int_const_&,int_&&>_>
                  ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                    *)local_3e8,&local_538,(bool *)&local_450);
LAB_14ba5fae1:
        FVar27.Data = FVar27.Data + 4;
      }
      if (local_4f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4f0.AllocatorInstance.Data);
      }
      if (local_4e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4e0.AllocatorInstance.Data);
      }
      if (local_560.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_560.AllocatorInstance.Data);
      }
      if (local_590.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_590.AllocatorInstance.Data);
      }
    }
    else if (cVar2 == '\x05') {
      iVar6 = UDS_DataSetBase::GetEntityTableID((UDS_DataSetBase *)this);
      pFVar8 = FDS_NpcBaseTableRow::Get((longlong)iVar6,true);
      local_570 = pFVar8;
      if (pFVar8 == (FDS_NpcBaseTableRow *)0x0) {
        pUVar9 = UDS_LogManager::GetInst();
        if (pUVar9 != (UDS_LogManager *)0x0) {
          pUVar9 = UDS_LogManager::GetInst();
          UDS_DataSetBase::GetEntityTableID((UDS_DataSetBase *)this);
          local_398._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_398,"UDS_SkillDataSet::OnAdded",0x19,Yes);
          UDS_LogManager::PrintLog
                    (pUVar9,1,Warning,local_398.Ptr,0x60b,L"npcBaseTable is nullptr. (%d)");
          if ((void *)local_398._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_398._padding_);
          }
        }
        goto LAB_14ba5fdf9;
      }
      pFVar10 = FDS_NpcBattleTableRow::Get((longlong)pFVar8->ID_NpcBattle,false);
      if (pFVar10 != (FDS_NpcBattleTableRow *)0x0) {
        iVar6 = (pFVar10->ID_NormalAttack).ArrayNum;
        iVar20 = 0;
        if (0 < iVar6) {
          lVar26 = 0;
          do {
            if (((pFVar10->ID_NormalAttack).ArrayNum <= iVar20) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            local_440 = (pFVar10->ID_NormalAttack).AllocatorInstance.Data + lVar26 * 4;
            local_438 = &pFVar10->NpcEvolveLevel;
            TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
            Emplace<TPairInitializer<int_const_&,int_const_&>_>
                      ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                        *)local_3e8,(TPairInitializer<int_const_&,int_const_&> *)local_550,
                       (bool *)&local_440);
            iVar20 = iVar20 + 1;
            lVar26 = lVar26 + 1;
          } while (iVar20 < iVar6);
        }
        iVar6 = (pFVar10->ID_SkillAttack).ArrayNum;
        iVar20 = 0;
        if (0 < iVar6) {
          lVar26 = 0;
          do {
            if (((pFVar10->ID_SkillAttack).ArrayNum <= iVar20) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            local_4a0 = (pFVar10->ID_SkillAttack).AllocatorInstance.Data + lVar26 * 4;
            local_498 = &pFVar10->NpcEvolveLevel;
            TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
            Emplace<TPairInitializer<int_const_&,int_const_&>_>
                      ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                        *)local_3e8,(TPairInitializer<int_const_&,int_const_&> *)(local_550 + 4),
                       (bool *)&local_4a0);
            iVar20 = iVar20 + 1;
            lVar26 = lVar26 + 1;
          } while (iVar20 < iVar6);
        }
        iVar6 = (pFVar10->ID_RangedSkillAttack).ArrayNum;
        iVar20 = 0;
        if (0 < iVar6) {
          lVar26 = 0;
          do {
            if (((pFVar10->ID_RangedSkillAttack).ArrayNum <= iVar20) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            local_490 = (pFVar10->ID_RangedSkillAttack).AllocatorInstance.Data + lVar26 * 4;
            local_488 = &pFVar10->NpcEvolveLevel;
            TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
            Emplace<TPairInitializer<int_const_&,int_const_&>_>
                      ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                        *)local_3e8,(TPairInitializer<int_const_&,int_const_&> *)local_548,
                       (bool *)&local_490);
            iVar20 = iVar20 + 1;
            lVar26 = lVar26 + 1;
          } while (iVar20 < iVar6);
        }
        iVar20 = 0;
        iVar6 = (pFVar10->ID_EventActionSkill).ArrayNum;
        if (0 < iVar6) {
          lVar26 = 0;
          do {
            if (((pFVar10->ID_EventActionSkill).ArrayNum <= iVar20) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            local_480 = (pFVar10->ID_EventActionSkill).AllocatorInstance.Data + lVar26 * 4;
            local_478 = &pFVar10->NpcEvolveLevel;
            TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
            Emplace<TPairInitializer<int_const_&,int_const_&>_>
                      ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                        *)local_3e8,(TPairInitializer<int_const_&,int_const_&> *)(local_548 + 4),
                       (bool *)&local_480);
            iVar20 = iVar20 + 1;
            lVar26 = lVar26 + 1;
          } while (iVar20 < iVar6);
        }
        local_57c = (pFVar8->ID_Interaction).ArrayNum;
        uVar18 = (ulonglong)(int)local_57c;
        pFVar29 = (pFVar8->ID_Interaction).AllocatorInstance.Data;
        pFVar22 = pFVar29 + uVar18 * 4;
        local_568 = pFVar22;
        while( true ) {
          uVar21 = 0;
          if ((pFVar8->ID_Interaction).ArrayNum != (int)uVar18) {
            local_598 = 0;
            `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (&local_598);
          }
          this = local_528;
          if (pFVar29 == pFVar22) break;
          pFVar11 = FDS_InteractionTableRow::Get((longlong)*(int *)pFVar29,false);
          if ((pFVar11 != (FDS_InteractionTableRow *)0x0) &&
             (lVar26 = (longlong)(pFVar11->FunctionType).ArrayNum, pFVar22 = local_568,
             uVar18 = uVar21, pFVar8 = local_570, 0 < lVar26)) {
            do {
              iVar6 = (int)uVar21;
              pFVar22 = local_568;
              pFVar8 = local_570;
              if ((iVar6 < 0) || ((pFVar11->FunctionValue1).ArrayNum <= iVar6)) break;
              if (((pFVar11->FunctionType).ArrayNum <= iVar6) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              pFVar22 = (pFVar11->FunctionType).AllocatorInstance.Data;
              if (((pFVar11->FunctionValue1).ArrayNum <= iVar6) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              if (((pFVar22[uVar18] == (FScriptContainerElement)0x4) &&
                  (pFVar12 = FDS_ActionHandlingTableRow::Get
                                       ((longlong)
                                        *(int *)((pFVar11->FunctionValue1).AllocatorInstance.Data +
                                                uVar18 * 4),false),
                  pFVar12 != (FDS_ActionHandlingTableRow *)0x0)) && (0 < pFVar12->ID_ThrowSkillEnd))
              {
                local_468 = &pFVar10->NpcEvolveLevel;
                local_470 = &pFVar12->ID_ThrowSkillEnd;
                TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
                Emplace<TPairInitializer<int_const_&,int_const_&>_>
                          ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                            *)local_3e8,(TPairInitializer<int_const_&,int_const_&> *)local_540,
                           (bool *)&local_470);
              }
              uVar21 = (ulonglong)(iVar6 + 1);
              uVar18 = uVar18 + 1;
              pFVar22 = local_568;
              pFVar8 = local_570;
            } while ((longlong)uVar18 < lVar26);
          }
          uVar18 = (ulonglong)local_57c;
          pFVar29 = pFVar29 + 4;
        }
      }
    }
    else if (cVar2 == '\a') {
      iVar6 = UDS_DataSetBase::GetEntityTableID((UDS_DataSetBase *)this);
      pFVar13 = FDS_SkillTotemTableRow::Get((longlong)iVar6,true);
      if (pFVar13 == (FDS_SkillTotemTableRow *)0x0) {
        pUVar9 = UDS_LogManager::GetInst();
        if (pUVar9 != (UDS_LogManager *)0x0) {
          pUVar9 = UDS_LogManager::GetInst();
          UDS_DataSetBase::GetEntityTableID((UDS_DataSetBase *)this);
          local_278._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_278,"UDS_SkillDataSet::OnAdded",0x19,Yes);
          UDS_LogManager::PrintLog
                    (pUVar9,1,Warning,local_278.Ptr,0x656,
                     L"totemSkillTable is nullptr. totemSkillTableID : %d");
          if ((void *)local_278._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_278._padding_);
          }
        }
        goto LAB_14ba5fdf9;
      }
      local_538.Value = (int *)UDS_DataSetBase::GetEntityID((UDS_DataSetBase *)this);
      this_00 = FDS_EntityBase::GetActorFromEntityID(local_430);
      pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00.WeakPtr);
      if (pUVar7 != (UObject *)0x0) {
        pUVar14 = Z_Construct_UClass_ADS_TotemActor_NoRegister();
        iVar6 = (int)pUVar14->_padding_;
        if ((iVar6 <= *(int *)(*(longlong *)&pUVar7->field_0x10 + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar7->field_0x10 + 0x30) + (longlong)iVar6 * 8) ==
            &pUVar14->_padding_)) {
          local_460 = &pFVar13->ID_TotemSkill;
          local_458 = pUVar7 + 0x2e;
          TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
          Emplace<TPairInitializer<int_const_&,int_const_&>_>
                    ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                      *)local_3e8,(TPairInitializer<int_const_&,int_const_&> *)(local_540 + 4),
                     (bool *)&local_460);
        }
      }
    }
  }
  uVar25 = local_3c0;
  uStack_518 = 0;
  uStack_514 = 1;
  uStack_504 = uStack_518;
  local_500 = uStack_518;
  if (local_3c0 != 0) {
    puVar28 = (uint *)(local_3e8 + 0x10);
    if (local_3c8 != (uint *)0x0) {
      puVar28 = local_3c8;
    }
    uVar24 = *puVar28;
    while (uVar24 == 0) {
      uStack_518 = uStack_518 + 1;
      local_500 = local_500 + 0x20;
      uStack_504 = local_3c0;
      if ((int)((local_3c0 - 1) + ((int)(local_3c0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_518)
      goto LAB_14ba5fbaf;
      uVar24 = puVar28[(int)uStack_518];
    }
    uStack_514 = -uVar24 & uVar24;
    uVar18 = (ulonglong)uStack_514 * 2 + 1;
    lVar26 = 0x3f;
    if (uVar18 != 0) {
      for (; uVar18 >> lVar26 == 0; lVar26 = lVar26 + -1) {
      }
    }
    local_538.Key._4_4_ = (int)lVar26;
    uStack_504 = (local_500 - 1) + local_538.Key._4_4_;
    if ((int)local_3c0 < (int)uStack_504) {
      uStack_504 = local_3c0;
    }
  }
LAB_14ba5fbaf:
  local_520 = (longlong *)local_3e8;
  uStack_4fc = local_3f4;
  local_510 = (TBitArray<FDefaultBitArrayAllocator> *)(local_3e8 + 0x10);
  uVar24 = local_3c0 & 0xffffffe0;
  iStack_4f8 = local_3e8._8_4_ - local_3b4;
  uStack_508 = 0xffffffff;
  TStack_4c8.CurrentBitIndex = uStack_504;
  TStack_4c8.UnvisitedBitMask = 0xffffffff;
  TStack_4c8._padding_ = CONCAT44(uStack_514,uStack_518);
  iVar6 = (int)local_3c0 >> 5;
  TStack_4c8._28_4_ = local_3f4;
  TStack_4c8.BaseBitIndex = local_500;
  uStack_4a8 = CONCAT44(uStack_4f4,iStack_4f8);
  bVar16 = (byte)local_3c0;
  local_4d0 = local_520;
  TStack_4c8.Array = local_510;
  if (((int)local_3c0 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (uVar25 != local_3c0) {
    puVar28 = (uint *)(local_3e8 + 0x10);
    if (local_3c8 != (uint *)0x0) {
      puVar28 = local_3c8;
    }
    uVar25 = -1 << (bVar16 & 0x1f) & puVar28[iVar6];
    while (uVar25 == 0) {
      iVar6 = iVar6 + 1;
      uVar24 = uVar24 + 0x20;
      uVar25 = local_3c0;
      if ((int)(((int)(local_3c0 - 1) >> 0x1f & 0x1fU) + (local_3c0 - 1)) >> 5 < iVar6)
      goto LAB_14ba5fcd0;
      uVar25 = puVar28[iVar6];
    }
    uVar18 = (ulonglong)(-uVar25 & uVar25) * 2 + 1;
    lVar26 = 0x3f;
    if (uVar18 != 0) {
      for (; uVar18 >> lVar26 == 0; lVar26 = lVar26 + -1) {
      }
    }
    uVar25 = (uVar24 - 1) + (int)lVar26;
    if ((int)local_3c0 < (int)uVar25) {
      uVar25 = local_3c0;
    }
  }
LAB_14ba5fcd0:
  while( true ) {
    plVar4 = local_4d0;
    if ((int)local_4d0[1] - *(int *)((longlong)local_4d0 + 0x34) != (int)uStack_4a8) {
      `TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_580);
    }
    if (((TStack_4c8.CurrentBitIndex == uVar25) &&
        (TStack_4c8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_3e8 + 0x10))) &&
       (plVar4 == (longlong *)local_3e8)) break;
    piVar23 = (int *)(*plVar4 + (longlong)TStack_4c8.CurrentBitIndex * 0x10);
    pFVar15 = FDS_SkillTableRow::Get((longlong)*piVar23,true);
    if (pFVar15 == (FDS_SkillTableRow *)0x0) {
      pUVar9 = UDS_LogManager::GetInst();
      if (pUVar9 != (UDS_LogManager *)0x0) {
        pUVar9 = UDS_LogManager::GetInst();
        local_158._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_158,"UDS_SkillDataSet::OnAdded",0x19,Yes);
        UDS_LogManager::PrintLog
                  (pUVar9,1,Warning,local_158.Ptr,0x669,L"SkillTableRow is nullptr. SkillID : %d");
        if ((void *)local_158._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_158._padding_);
        }
      }
    }
    else {
      RefreshData(this,pFVar15,*piVar23,piVar23[1],None);
    }
    TStack_4c8.UnvisitedBitMask = TStack_4c8.UnvisitedBitMask & ~TStack_4c8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_4c8);
  }
LAB_14ba5fdf9:
  local_3a0 = 0;
  if (local_3a8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_3a8);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_3e8);
  return;
}

// OnNotifySkillActiveChanged @ 14ba61210

void __thiscall
UDS_SkillDataSet::OnNotifySkillActiveChanged
          (UDS_SkillDataSet *this,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr> param_1,bool param_2,
          bool param_3)

{
  bool bVar1;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_00;
  
  this_00 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->OnActivateSkillEvent;
  if (!param_2) {
    this_00 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->OnActivateSubSkillEvent;
  }
  bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound(this_00);
  if (bVar1) {
    TMulticastDelegate<void___cdecl(TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,bool),FDefaultDelegateUserPolicy>
    ::Broadcast((TMulticastDelegate<void___cdecl(TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,bool),FDefaultDelegateUserPolicy>
                 *)this_00,param_1,param_3);
  }
  return;
}

// RefreshData @ 14ba61620

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UDS_SkillDataSet::RefreshData
          (UDS_SkillDataSet *this,FDS_SkillTableRow *param_1,int param_2,int param_3,
          EDS_WeaponType param_4)

{
  int iVar1;
  bool bVar2;
  TWeakObjectPtr<UDS_DataBase,FWeakObjectPtr> this_00;
  FWeakObjectPtr FVar3;
  UClass *pUVar4;
  UDS_SkillData *pUVar5;
  UObject *pUVar6;
  longlong *plVar7;
  FWeakObjectPtr FVar8;
  undefined1 auStack_108 [32];
  FWeakObjectPtr local_e8;
  FWeakObjectPtr local_e0;
  UDS_SkillData *local_d8 [2];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_108;
  this_00 = UDS_DataSetBase::GetData((UDS_DataSetBase *)this,(ulong64)local_d8);
  FVar3 = (FWeakObjectPtr)FWeakObjectPtr::Get(this_00.WeakPtr);
  FVar8.ObjectIndex = 0;
  FVar8.ObjectSerialNumber = 0;
  if (FVar3 != (FWeakObjectPtr)0x0) {
    pUVar4 = Z_Construct_UClass_UDS_SkillData_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)((longlong)FVar3 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)((longlong)FVar3 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) goto LAB_14ba6169c;
  }
  FVar3 = FVar8;
LAB_14ba6169c:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar3 != (FWeakObjectPtr)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FVar3);
  }
  local_e0.ObjectIndex = 0;
  local_e0.ObjectSerialNumber = 0;
  local_e8 = FVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar3 != (FWeakObjectPtr)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FVar3);
  }
  FWeakObjectPtr::operator=(&local_e0,(FObjectPtr)&local_e8);
  bVar2 = FWeakObjectPtr::IsValid(&local_e0);
  if (!bVar2) {
    if (param_1->SkillUseType == StackSkill) {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)this,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar4 = Z_Construct_UClass_UDS_StackSkillData_NoRegister();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_c8,pUVar4);
      local_c8._8_8_ = this;
      pUVar5 = (UDS_SkillData *)
               StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
      if (local_c8._64_8_ != 0) {
        plVar7 = (longlong *)(local_c8 + 0x50);
        if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
          plVar7 = (longlong *)local_c8._104_8_;
        }
        (**(code **)(*plVar7 + 0x10))();
      }
    }
    else {
      pUVar5 = NewObject<UDS_SkillData>((UObject *)this);
    }
    local_d8[0] = pUVar5;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UDS_SkillData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    bVar2 = UDS_DataSetBase::AddData
                      ((UDS_DataSetBase *)this,(longlong)param_2,(TObjectPtr<UDS_DataBase>)local_d8)
    ;
    if (bVar2) {
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UDS_SkillData *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)pUVar5);
      }
      local_e8.ObjectIndex = 0;
      local_e8.ObjectSerialNumber = 0;
      local_d8[0] = pUVar5;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UDS_SkillData *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)pUVar5);
      }
    }
    else {
      local_e8.ObjectIndex = 0;
      local_e8.ObjectSerialNumber = 0;
      local_d8[0] = (UDS_SkillData *)0x0;
    }
    FWeakObjectPtr::operator=(&local_e8,(FObjectPtr)local_d8);
    local_e0 = local_e8;
  }
  bVar2 = FWeakObjectPtr::IsValid(&local_e0);
  if (bVar2) {
    pUVar6 = FWeakObjectPtr::Get(&local_e0);
    pUVar6[0xf].field_0xc = param_4;
    pUVar5 = (UDS_SkillData *)FWeakObjectPtr::Get(&local_e0);
    UDS_SkillData::InitSkillData(pUVar5,param_2,param_3);
  }
  return;
}

// RefreshMainSkill @ 14ba61900

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_SkillDataSet::RefreshMainSkill
          (UDS_SkillDataSet *this,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr> *param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  UObject *pUVar4;
  FDS_SkillConditionTableRow *pFVar5;
  UDS_LogManager *pUVar6;
  TObjectPtr<UDS_ConditionHelper> TVar7;
  UDS_ConditionHelper_PopupSkill *pUVar8;
  UDS_ConditionHelper_SkillUse *pUVar9;
  undefined1 auStackY_198 [32];
  undefined1 local_158 [272];
  void *local_48;
  wchar_t *local_40;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_198;
  bVar2 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)&this->_padding_,
                     (void *)0x0);
  if ((((!bVar2) &&
       (pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_),
       pUVar4[1].field_0x8 == '\x02')) &&
      (pUVar4 = FWeakObjectPtr::Get(&param_1->WeakPtr),
      *(int *)&pUVar4[2].field_0x20 == *(int *)&pUVar4[2].field_0x1c)) &&
     (bVar2 = FWeakObjectPtr::IsValid(&param_1->WeakPtr), bVar2)) {
    pUVar4 = FWeakObjectPtr::Get(&param_1->WeakPtr);
    iVar3 = *(int *)&pUVar4[2].field_0x20;
    if (iVar3 < 1) {
      iVar3 = *(int *)&pUVar4[2].field_0x1c;
    }
    pFVar5 = FDS_SkillConditionTableRow::Get((longlong)iVar3,true);
    if (pFVar5 == (FDS_SkillConditionTableRow *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      if (pUVar6 != (UDS_LogManager *)0x0) {
        pUVar6 = UDS_LogManager::GetInst();
        FWeakObjectPtr::Get(&param_1->WeakPtr);
        local_48 = (void *)0x0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(local_158 + 0x10),
                   "UDS_SkillDataSet::RefreshMainSkill",0x22,Yes);
        UDS_LogManager::PrintLog
                  (pUVar6,1,Warning,local_40,0x6a8,
                   L"SkillConditionTableRow is nullptr. SkillID : %d");
        if (local_48 != (void *)0x0) {
          FMemory::Free(local_48);
        }
      }
    }
    else {
      if ((pFVar5->ConditionSkillType != None) && (0 < pFVar5->ID_PopupSkill)) {
        TVar7 = UDS_ConditionHelper::CreateConditionHelper
                          ((UObject *)local_158,(EDS_ConditionResultType)this);
        pUVar8 = Cast<UDS_ConditionHelper_PopupSkill,UDS_ConditionHelper>
                           ((TObjectPtr<UDS_ConditionHelper> *)TVar7.field0_0x0);
        if (pUVar8 != (UDS_ConditionHelper_PopupSkill *)0x0) {
          (**(code **)(pUVar8->_padding_ + 0x2b8))(pUVar8,pFVar5);
          iVar3 = (this->PopupSkillHelperList).ArrayNum;
          piVar1 = &(this->PopupSkillHelperList).ArrayMax;
          if (iVar3 == *piVar1) {
            iVar3 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&(this->PopupSkillHelperList).AllocatorInstance,piVar1);
          }
          (this->PopupSkillHelperList).ArrayNum = iVar3 + 1;
          *(UDS_ConditionHelper_PopupSkill **)
           ((this->PopupSkillHelperList).AllocatorInstance.Data + (longlong)iVar3 * 8) = pUVar8;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)pUVar8);
          }
        }
      }
      if (pFVar5->IsAutoUseSkill == true) {
        TVar7 = UDS_ConditionHelper::CreateConditionHelper
                          ((UObject *)local_158,(EDS_ConditionResultType)this);
        pUVar9 = Cast<UDS_ConditionHelper_SkillUse,UDS_ConditionHelper>
                           ((TObjectPtr<UDS_ConditionHelper> *)TVar7.field0_0x0);
        if (pUVar9 != (UDS_ConditionHelper_SkillUse *)0x0) {
          (**(code **)(pUVar9->_padding_ + 0x2b8))(pUVar9,pFVar5);
          iVar3 = (this->SkillUseHelperList).ArrayNum;
          piVar1 = &(this->SkillUseHelperList).ArrayMax;
          if (iVar3 == *piVar1) {
            iVar3 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&(this->SkillUseHelperList).AllocatorInstance,piVar1);
          }
          (this->SkillUseHelperList).ArrayNum = iVar3 + 1;
          *(UDS_ConditionHelper_SkillUse **)
           ((this->SkillUseHelperList).AllocatorInstance.Data + (longlong)iVar3 * 8) = pUVar9;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)pUVar9);
          }
        }
      }
    }
  }
  return;
}

// RefreshPopupSkillHelperList @ 14ba61ba0

void __thiscall UDS_SkillDataSet::RefreshPopupSkillHelperList(UDS_SkillDataSet *this)

{
  int *piVar1;
  TArray<TObjectPtr<UDS_ConditionHelper_PopupSkill>,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  UObject *pUVar5;
  bool bVar6;
  int iVar7;
  FDS_SkillConditionTableRow *pFVar8;
  TObjectPtr<UDS_ConditionHelper> this_00;
  UClass *pUVar9;
  ForAnyElementType FVar10;
  undefined1 local_res8 [16];
  ForAnyElementType local_48;
  int local_40;
  int local_3c;
  
  pTVar2 = &this->PopupSkillHelperList;
  iVar3 = (this->PopupSkillHelperList).ArrayNum;
  pFVar4 = (pTVar2->AllocatorInstance).Data;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = iVar3;
  if (iVar3 == 0) {
    local_3c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar3,0,&local_48,iVar3,&local_3c);
    ConstructItems<TObjectPtr<UDS_ConditionHelper_PopupSkill>,TObjectPtr<UDS_ConditionHelper_PopupSkill>,int>
              (local_48.Data,(TObjectPtr<UDS_ConditionHelper_PopupSkill> *)pFVar4,iVar3);
  }
  piVar1 = &(this->PopupSkillHelperList).ArrayMax;
  (this->PopupSkillHelperList).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  iVar3 = local_40;
  pFVar4 = local_48.Data + (longlong)local_40 * 8;
  FVar10.Data = local_48.Data;
  while( true ) {
    if (local_40 != iVar3) {
      `TCheckedPointerIterator<TObjectPtr<UDS_ConditionHelper_PopupSkill>,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res8);
    }
    if (FVar10.Data == pFVar4) break;
    pFVar8 = FDS_SkillConditionTableRow::Get
                       ((longlong)*(int *)(*(longlong *)FVar10.Data + 0x78),true);
    if (pFVar8 != (FDS_SkillConditionTableRow *)0x0) {
      this_00 = UDS_ConditionHelper::CreateConditionHelper
                          ((UObject *)(local_res8 + 8),(EDS_ConditionResultType)this);
      if (*(longlong *)this_00.field0_0x0 != 0) {
        pUVar9 = Z_Construct_UClass_UDS_ConditionHelper_PopupSkill_NoRegister();
        bVar6 = FObjectPtr::IsA((FObjectPtr *)this_00.field0_0x0,pUVar9);
        if ((bVar6) && (pUVar5 = *(UObject **)this_00.field0_0x0, pUVar5 != (UObject *)0x0)) {
          (**(code **)(*(longlong *)pUVar5 + 0x2b8))(pUVar5,pFVar8);
          iVar7 = (this->PopupSkillHelperList).ArrayNum;
          if (iVar7 == *piVar1) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&pTVar2->AllocatorInstance,piVar1);
          }
          (this->PopupSkillHelperList).ArrayNum = iVar7 + 1;
          *(UObject **)((pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 8) = pUVar5;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable(pUVar5);
          }
        }
      }
    }
    FVar10.Data = FVar10.Data + 8;
  }
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  return;
}

// RefreshSkillUseHelperList @ 14ba61d40

void __thiscall UDS_SkillDataSet::RefreshSkillUseHelperList(UDS_SkillDataSet *this)

{
  int *piVar1;
  TArray<TObjectPtr<UDS_ConditionHelper_SkillUse>,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  UObject *pUVar5;
  bool bVar6;
  int iVar7;
  FDS_SkillConditionTableRow *pFVar8;
  TObjectPtr<UDS_ConditionHelper> this_00;
  UClass *pUVar9;
  ForAnyElementType FVar10;
  undefined1 local_res8 [16];
  ForAnyElementType local_48;
  int local_40;
  int local_3c;
  
  pTVar2 = &this->SkillUseHelperList;
  iVar3 = (this->SkillUseHelperList).ArrayNum;
  pFVar4 = (pTVar2->AllocatorInstance).Data;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = iVar3;
  if (iVar3 == 0) {
    local_3c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar3,0,&local_48,iVar3,&local_3c);
    ConstructItems<TObjectPtr<UDS_ConditionHelper_SkillUse>,TObjectPtr<UDS_ConditionHelper_SkillUse>,int>
              (local_48.Data,(TObjectPtr<UDS_ConditionHelper_SkillUse> *)pFVar4,iVar3);
  }
  piVar1 = &(this->SkillUseHelperList).ArrayMax;
  (this->SkillUseHelperList).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  iVar3 = local_40;
  pFVar4 = local_48.Data + (longlong)local_40 * 8;
  FVar10.Data = local_48.Data;
  while( true ) {
    if (local_40 != iVar3) {
      `TCheckedPointerIterator<TObjectPtr<UDS_ConditionHelper_SkillUse>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (FVar10.Data == pFVar4) break;
    pFVar8 = FDS_SkillConditionTableRow::Get
                       ((longlong)*(int *)(*(longlong *)FVar10.Data + 0x70),true);
    if (pFVar8 != (FDS_SkillConditionTableRow *)0x0) {
      this_00 = UDS_ConditionHelper::CreateConditionHelper
                          ((UObject *)(local_res8 + 8),(EDS_ConditionResultType)this);
      if (*(longlong *)this_00.field0_0x0 != 0) {
        pUVar9 = Z_Construct_UClass_UDS_ConditionHelper_SkillUse_NoRegister();
        bVar6 = FObjectPtr::IsA((FObjectPtr *)this_00.field0_0x0,pUVar9);
        if ((bVar6) && (pUVar5 = *(UObject **)this_00.field0_0x0, pUVar5 != (UObject *)0x0)) {
          (**(code **)(*(longlong *)pUVar5 + 0x2b8))(pUVar5,pFVar8);
          iVar7 = (this->SkillUseHelperList).ArrayNum;
          if (iVar7 == *piVar1) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&pTVar2->AllocatorInstance,piVar1);
          }
          (this->SkillUseHelperList).ArrayNum = iVar7 + 1;
          *(UObject **)((pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 8) = pUVar5;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable(pUVar5);
          }
        }
      }
    }
    FVar10.Data = FVar10.Data + 8;
  }
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  return;
}

// RemoveSkillData @ 14ba673a0

void __thiscall UDS_SkillDataSet::RemoveSkillData(UDS_SkillDataSet *this,int param_1)

{
  UDS_DataSetBase::RemoveData((UDS_DataSetBase *)this,(longlong)param_1);
  return;
}

// SetReservedNormalAttack @ 14ba74060

void __thiscall UDS_SkillDataSet::SetReservedNormalAttack(UDS_SkillDataSet *this,bool *param_1)

{
  this->ReservedSkillID = 0;
  this->ReservedNormalAttack = *param_1;
  return;
}

// SetReservedSkillID @ 14ba74080

void __thiscall UDS_SkillDataSet::SetReservedSkillID(UDS_SkillDataSet *this,int *param_1)

{
  this->ReservedSkillID = *param_1;
  this->ReservedNormalAttack = false;
  return;
}

// Update @ 14ba7b7f0

void __thiscall UDS_SkillDataSet::Update(UDS_SkillDataSet *this,float *param_1)

{
  FObjectPtr_u_0 *pFVar1;
  int iVar2;
  bool bVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  FObjectPtr_u_0 *this_00;
  UObject *local_res8;
  FWeakObjectPtr local_res18;
  
  iVar2 = (int)this->_padding_;
  if (iVar2 != 0) {
    this_00 = (FObjectPtr_u_0 *)this->_padding_;
    pFVar1 = this_00 + iVar2;
    while( true ) {
      if ((int)this->_padding_ != iVar2) {
        `TCheckedPointerIterator<TObjectPtr<UDS_DataBase>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res8);
      }
      if (this_00 == pFVar1) break;
      pUVar5 = (UObject *)0x0;
      if (this_00->Handle != (UObject *)0x0) {
        pUVar4 = Z_Construct_UClass_UDS_SkillData_NoRegister();
        bVar3 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar4);
        if (bVar3) {
          pUVar5 = this_00->Handle;
        }
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar5);
      }
      local_res18.ObjectIndex = 0;
      local_res18.ObjectSerialNumber = 0;
      local_res8 = pUVar5;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar5);
      }
      FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_res8);
      bVar3 = FWeakObjectPtr::IsValid(&local_res18);
      if ((bVar3) && (pUVar5 = FWeakObjectPtr::Get(&local_res18), pUVar5[2].field_0x1a != '\0')) {
        pUVar5 = FWeakObjectPtr::Get(&local_res18);
        (**(code **)(*(longlong *)pUVar5 + 0x2e0))(pUVar5,*param_1);
      }
      this_00 = this_00 + 1;
    }
  }
  return;
}

// UpdateSkillDeckInfo @ 14ba80c60

void __thiscall
UDS_SkillDataSet::UpdateSkillDeckInfo(UDS_SkillDataSet *this,int param_1,int param_2,int param_3)

{
  TArray<FDS_SkillDeckItem,TSizedDefaultAllocator<32>_> *pTVar1;
  FDS_SkillDeckItem *pFVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  int iVar5;
  FDS_SkillDeckItem *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  int local_res10 [2];
  
  pTVar1 = &(this->SkillDeckInfo).SkillDeckItemList;
  iVar4 = (this->SkillDeckInfo).SkillDeckItemList.ArrayNum;
  pFVar6 = (FDS_SkillDeckItem *)(pTVar1->AllocatorInstance).Data;
  pFVar2 = pFVar6 + iVar4;
  local_res10[0] = param_1;
  while( true ) {
    if ((this->SkillDeckInfo).SkillDeckItemList.ArrayNum != iVar4) {
      `TCheckedPointerIterator<FDS_SkillDeckItem_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar6 == pFVar2) break;
    if (pFVar6->SlotIndex == param_1) goto LAB_14ba80cc5;
    pFVar6 = pFVar6 + 1;
  }
  pFVar6 = &emptyItem;
LAB_14ba80cc5:
  if (pFVar6->SkillID == 0) {
    iVar4 = (this->SkillDeckInfo).SkillDeckItemList.ArrayNum;
    pFVar7 = (pTVar1->AllocatorInstance).Data;
    pFVar3 = pFVar7 + (longlong)iVar4 * 0xc;
    while( true ) {
      iVar5 = (this->SkillDeckInfo).SkillDeckItemList.ArrayNum;
      if (iVar5 != iVar4) {
        `TCheckedPointerIterator<FDS_SkillDeckItem,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
        iVar5 = (this->SkillDeckInfo).SkillDeckItemList.ArrayNum;
      }
      if (pFVar7 == pFVar3) {
        if (iVar5 == (this->SkillDeckInfo).SkillDeckItemList.ArrayMax) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x40c,&pTVar1->AllocatorInstance,
                             &(this->SkillDeckInfo).SkillDeckItemList.ArrayMax);
        }
        (this->SkillDeckInfo).SkillDeckItemList.ArrayNum = iVar5 + 1;
        pFVar3 = (pTVar1->AllocatorInstance).Data;
        *(ulonglong *)(pFVar3 + (longlong)iVar5 * 0xc) = CONCAT44(param_2,param_1);
        *(int *)(pFVar3 + (longlong)iVar5 * 0xc + 8) = param_3;
        goto LAB_14ba80d4e;
      }
      if (*(int *)pFVar7 == param_1) break;
      pFVar7 = pFVar7 + 0xc;
    }
    *(int *)(pFVar7 + 4) = param_2;
  }
LAB_14ba80d4e:
  iVar4 = (this->SkillDeckInfo).SkillDeckItemList.ArrayNum;
  pFVar7 = (pTVar1->AllocatorInstance).Data;
  pFVar3 = pFVar7 + (longlong)iVar4 * 0xc;
  while( true ) {
    if ((this->SkillDeckInfo).SkillDeckItemList.ArrayNum != iVar4) {
      `TCheckedPointerIterator<FDS_SkillDeckItem,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar7 == pFVar3) goto LAB_14ba80d8a;
    if (*(int *)pFVar7 == param_1) break;
    pFVar7 = pFVar7 + 0xc;
  }
  *(int *)(pFVar7 + 4) = param_2;
  *(int *)(pFVar7 + 8) = param_3;
LAB_14ba80d8a:
  FDS_FilteredEventDelegate<int,int>::Broadcast(&this->OnSkillDeckChanged,local_res10,param_2);
  return;
}

// UpdateSkillMoveRandomAnglesData @ 14ba80ec0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_SkillDataSet::UpdateSkillMoveRandomAnglesData
          (UDS_SkillDataSet *this,SkillMoveRandomAnglesResponse *param_1)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  UObject *pUVar7;
  UDS_LogManager *pUVar8;
  int *piVar9;
  ulong64 uVar10;
  undefined1 *puVar11;
  RepeatedPtrField<server_msg::SkillMoveAngle> *pRVar12;
  undefined1 auStackY_1f8 [32];
  int local_1b8 [2];
  uint local_1b0 [2];
  FWeakObjectPtr local_1a8;
  undefined1 local_1a0 [32];
  uint local_180;
  int local_17c;
  uint *local_178;
  int *local_170;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  iVar1 = (param_1->_impl_).skill_id_;
  uVar10 = 0;
  bVar5 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)&this->_padding_,
                     (void *)0x0);
  if (!bVar5) {
    pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    uVar10 = *(ulong64 *)(pUVar7 + 1);
  }
  UDS_SkillData::GetData((ulong64)&local_1a8,uVar10,SUB41(iVar1,0));
  bVar5 = FWeakObjectPtr::IsValid(&local_1a8);
  if (bVar5) {
    pUVar7 = FWeakObjectPtr::Get(&local_1a8);
    puVar11 = &pUVar7[0xc].field_0x20;
    bVar5 = 1 < *(int *)&pUVar7[0xe].field_0x18;
    if (!bVar5) {
      TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
      UnhashElements((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                      *)puVar11);
    }
    *(undefined4 *)(pUVar7 + 0xd) = 0;
    if (*(int *)&pUVar7[0xd].field_0x4 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,(ForAnyElementType *)puVar11,0,(int *)&pUVar7[0xd].field_0x4);
    }
    *(undefined4 *)(pUVar7 + 0xe) = 0xffffffff;
    *(undefined4 *)&pUVar7[0xe].field_0x4 = 0;
    *(undefined4 *)&pUVar7[0xd].field_0x20 = 0;
    if ((*(int *)&pUVar7[0xd].field_0x24 < 0) || (0x80 < *(int *)&pUVar7[0xd].field_0x24)) {
      *(undefined4 *)&pUVar7[0xd].field_0x24 = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&pUVar7[0xd].field_0x8,0);
    }
    if (bVar5) {
      *(undefined4 *)&pUVar7[0xe].field_0x18 = 1;
      TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Rehash
                ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                  *)puVar11);
    }
    uVar2 = *(ulonglong *)&(param_1->_impl_).random_move_angles_;
    if ((uVar2 & 1) == 0) {
      pRVar12 = &(param_1->_impl_).random_move_angles_;
    }
    else {
      pRVar12 = (RepeatedPtrField<server_msg::SkillMoveAngle> *)(uVar2 + 7);
    }
    iVar1 = *(int *)&(param_1->_impl_).random_move_angles_.field_0x8;
    puVar3 = (undefined8 *)&pRVar12->field_0x0;
    for (; pRVar12 != (RepeatedPtrField<server_msg::SkillMoveAngle> *)(puVar3 + iVar1);
        pRVar12 = (RepeatedPtrField<server_msg::SkillMoveAngle> *)&pRVar12->field_0x8) {
      server_msg::SkillMoveAngle::SkillMoveAngle
                ((SkillMoveAngle *)(local_1a0 + 8),(Arena *)0x0,*(SkillMoveAngle **)pRVar12);
      local_1a0._8_8_ = &___7SkillMoveAngle_server_msg__6B_;
      pUVar7 = FWeakObjectPtr::Get(&local_1a8);
      iVar4 = local_17c;
      local_1b8[0] = local_17c;
      local_1b0[0] = local_180;
      if (*(int *)(pUVar7 + 0xd) != *(int *)&pUVar7[0xe].field_0x4) {
        puVar11 = &pUVar7[0xe].field_0x8;
        if (*(undefined1 **)&pUVar7[0xe].field_0x10 != (undefined1 *)0x0) {
          puVar11 = *(undefined1 **)&pUVar7[0xe].field_0x10;
        }
        iVar6 = *(int *)(puVar11 + (ulonglong)(*(int *)&pUVar7[0xe].field_0x18 - 1U & local_180) * 4
                        );
        if (iVar6 != -1) {
          do {
            if (*(uint *)(*(longlong *)&pUVar7[0xc].field_0x20 + (longlong)iVar6 * 0x10) ==
                local_180) {
              if (iVar6 != -1) {
                piVar9 = TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                         ::FindChecked((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                                        *)&pUVar7[0xc].field_0x20,local_180);
                *piVar9 = iVar4;
                goto LAB_14ba810e2;
              }
              break;
            }
            iVar6 = *(int *)(*(longlong *)&pUVar7[0xc].field_0x20 + 8 + (longlong)iVar6 * 0x10);
          } while (iVar6 != -1);
        }
      }
      local_178 = local_1b0;
      local_170 = local_1b8;
      TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<int_&,int_&>_>
                ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                  *)&pUVar7[0xc].field_0x20,(TPairInitializer<int_&,int_&> *)local_1a0,
                 (bool *)&local_178);
LAB_14ba810e2:
      pUVar8 = UDS_LogManager::GetInst();
      if (pUVar8 != (UDS_LogManager *)0x0) {
        pUVar8 = UDS_LogManager::GetInst();
        local_168._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_168,"UDS_SkillDataSet::UpdateSkillMoveRandomAnglesData",0x31,Yes);
        UDS_LogManager::PrintLog(pUVar8,1,Display,local_168.Ptr,0x827,L"%d %d");
        if ((void *)local_168._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_168._padding_);
        }
      }
      server_msg::SkillMoveAngle::~SkillMoveAngle((SkillMoveAngle *)(local_1a0 + 8));
    }
  }
  return;
}

