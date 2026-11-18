// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 20

// StaticClass @ 14b5b7820

UClass * __cdecl UDS_TimeCoolDownManager::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_TimeCoolDownManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_TimeCoolDownManager",
               &Z_Registration_Info_UClass_UDS_TimeCoolDownManager.InnerSingleton,
               StaticRegisterNativesUDS_TimeCoolDownManager,0xa0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_TimeCoolDownManager>,
               InternalVTableHelperCtorCaller<UDS_TimeCoolDownManager>,local_res8,
               UDS_ManagerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_TimeCoolDownManager.InnerSingleton;
}

// UDS_TimeCoolDownManager @ 14b5bd700

UDS_TimeCoolDownManager * __thiscall
UDS_TimeCoolDownManager::UDS_TimeCoolDownManager
          (UDS_TimeCoolDownManager *this,FVTableHelper *param_1)

{
  UDS_ManagerBase::UDS_ManagerBase((UDS_ManagerBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_TimeCoolDownManager__6B_;
  *(undefined8 *)&this->OnChangedTimeCoolDownEvent = 0;
  *(undefined8 *)&(this->OnChangedTimeCoolDownEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnChangedTimeCoolDownEvent).field_0x10 = 0;
  *(undefined8 *)&this->CoolDownMap = 0;
  *(undefined8 *)&(this->CoolDownMap).field_0x8 = 0;
  *(undefined8 *)&(this->CoolDownMap).field_0x20 = 0;
  *(undefined8 *)&(this->OnChangedTimeCoolDownEvent).field_0x18 = 2;
  *(undefined4 *)&(this->CoolDownMap).field_0x28 = 0;
  *(undefined4 *)&(this->CoolDownMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->CoolDownMap).field_0x34 = 0;
  *(undefined4 *)&(this->CoolDownMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->CoolDownMap).field_0x40 = 0;
  *(undefined4 *)&(this->CoolDownMap).field_0x48 = 0;
  return this;
}

// UDS_TimeCoolDownManager @ 14b5bd770

UDS_TimeCoolDownManager * __thiscall
UDS_TimeCoolDownManager::UDS_TimeCoolDownManager
          (UDS_TimeCoolDownManager *this,FObjectInitializer *param_1)

{
  UDS_ManagerBase::UDS_ManagerBase((UDS_ManagerBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_TimeCoolDownManager__6B_;
  *(undefined8 *)&this->OnChangedTimeCoolDownEvent = 0;
  *(undefined8 *)&(this->OnChangedTimeCoolDownEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnChangedTimeCoolDownEvent).field_0x10 = 0;
  *(undefined8 *)&this->CoolDownMap = 0;
  *(undefined8 *)&(this->CoolDownMap).field_0x8 = 0;
  *(undefined8 *)&(this->CoolDownMap).field_0x20 = 0;
  *(undefined8 *)&(this->OnChangedTimeCoolDownEvent).field_0x18 = 2;
  *(undefined4 *)&(this->CoolDownMap).field_0x28 = 0;
  *(undefined4 *)&(this->CoolDownMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->CoolDownMap).field_0x34 = 0;
  *(undefined4 *)&(this->CoolDownMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->CoolDownMap).field_0x40 = 0;
  *(undefined4 *)&(this->CoolDownMap).field_0x48 = 0;
  return this;
}

// ~UDS_TimeCoolDownManager @ 14b5be290

void __thiscall UDS_TimeCoolDownManager::~UDS_TimeCoolDownManager(UDS_TimeCoolDownManager *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDS_TimeCoolDownManager__6B_;
  *(undefined4 *)&(this->CoolDownMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CoolDownMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TObjectPtr<UDS_TimeCoolDown>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TObjectPtr<UDS_TimeCoolDown>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TObjectPtr<UDS_TimeCoolDown>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CoolDownMap);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnChangedTimeCoolDownEvent).field_0x8,
             *(int *)&(this->OnChangedTimeCoolDownEvent).field_0x10);
  pvVar1 = *(void **)&(this->OnChangedTimeCoolDownEvent).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnChangedTimeCoolDownEvent);
  UDS_ManagerBase::~UDS_ManagerBase((UDS_ManagerBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b5bfdd0

UClass * __cdecl UDS_TimeCoolDownManager::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_TimeCoolDownManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_TimeCoolDownManager",
               &Z_Registration_Info_UClass_UDS_TimeCoolDownManager.InnerSingleton,
               StaticRegisterNativesUDS_TimeCoolDownManager,0xa0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_TimeCoolDownManager>,
               InternalVTableHelperCtorCaller<UDS_TimeCoolDownManager>,local_res8,
               UDS_ManagerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_TimeCoolDownManager.InnerSingleton;
}

// StaticRegisterNativesUDS_TimeCoolDownManager @ 14b5c0100

void __cdecl UDS_TimeCoolDownManager::StaticRegisterNativesUDS_TimeCoolDownManager(void)

{
  return;
}

// AddCoolDownClass @ 14bb4f3b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UDS_TimeCoolDownManager::AddCoolDownClass(UDS_TimeCoolDownManager *this,ulong64 param_1)

{
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  longlong *plVar4;
  TObjectPtr<UDS_TimeCoolDown>_u_0 local_res10;
  undefined1 auStackY_e8 [32];
  UObject *local_b8;
  TPairInitializer<unsigned___int64_&,TObjectPtr<UDS_TimeCoolDown>_&> local_b0;
  UObject **local_a0;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  local_res10 = (TObjectPtr<UDS_TimeCoolDown>_u_0)param_1;
  if (param_1 == 0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6995243256816598788>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_TimeCoolDownManager.cpp"
                       ,0xfc,"InEntityID != 0");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar3 = Z_Construct_UClass_UDS_TimeCoolDown_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar3);
  local_98._8_8_ = this;
  local_b8 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar4 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar4 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_b8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_b8);
  }
  *(TObjectPtr<UDS_TimeCoolDown>_u_0 *)(local_b8 + 1) = local_res10;
  local_b0.Value = (TObjectPtr<UDS_TimeCoolDown> *)&local_res10;
  local_a0 = &local_b8;
  TSet<TTuple<unsigned___int64,TObjectPtr<UDS_TimeCoolDown>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TObjectPtr<UDS_TimeCoolDown>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned___int64_&,TObjectPtr<UDS_TimeCoolDown>_&>_>
            ((TSet<TTuple<unsigned___int64,TObjectPtr<UDS_TimeCoolDown>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TObjectPtr<UDS_TimeCoolDown>,0>,FDefaultSetAllocator>
              *)&this->CoolDownMap,&local_b0,(bool *)&local_b0.Value);
  return;
}

// Created @ 14bb5c9d0

void __thiscall UDS_TimeCoolDownManager::Created(UDS_TimeCoolDownManager *this)

{
  *(undefined1 *)&this->_padding_ = 0;
  return;
}

// Destroyed @ 14bb5d8d0

void __thiscall UDS_TimeCoolDownManager::Destroyed(UDS_TimeCoolDownManager *this)

{
  return;
}

// GetCoolDownClass @ 14bb63c40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TWeakObjectPtr<UDS_TimeCoolDown,FWeakObjectPtr> __thiscall
UDS_TimeCoolDownManager::GetCoolDownClass(UDS_TimeCoolDownManager *this,ulong64 param_1)

{
  TMap<unsigned___int64,TObjectPtr<UDS_TimeCoolDown>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TObjectPtr<UDS_TimeCoolDown>,0>_>
  *this_00;
  UDS_TimeCoolDown *pUVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TWeakObjectPtr<UDS_TimeCoolDown,FWeakObjectPtr> TVar5;
  UClass *pUVar6;
  TObjectPtr<UDS_TimeCoolDown> *pTVar7;
  longlong *plVar8;
  ulong64 in_R8;
  undefined1 *puVar9;
  undefined1 auStackY_108 [32];
  ulonglong local_d8;
  UObject *local_d0;
  TPairInitializer<unsigned___int64_&,TObjectPtr<UDS_TimeCoolDown>_&> local_c8;
  ulonglong *local_b8;
  UObject **local_b0;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_108;
  this_00 = &this->CoolDownMap;
  if (in_R8 == 0) {
    in_R8 = UDS_PlayerData::MainPlayerEntityID;
  }
  if (*(int *)&(this->CoolDownMap).field_0x8 != *(int *)&(this->CoolDownMap).field_0x34) {
    puVar9 = *(undefined1 **)&(this->CoolDownMap).field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->CoolDownMap).field_0x38;
    }
    iVar4 = *(int *)(puVar9 + ((in_R8 >> 0x20) * 0x17 + in_R8 &
                              (ulonglong)(*(int *)&(this->CoolDownMap).field_0x48 - 1)) * 4);
    if (iVar4 != -1) {
      do {
        if (*(ulonglong *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar4 * 0x18) == in_R8)
        goto LAB_14bb63dbd;
        iVar4 = *(int *)(*(longlong *)&this_00->field_0x0 + 0x10 + (longlong)iVar4 * 0x18);
      } while (iVar4 != -1);
    }
  }
  local_d8 = in_R8;
  if (in_R8 == 0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6995243256816598788>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_TimeCoolDownManager.cpp"
                       ,0xfc,"InEntityID != 0");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      TVar5.WeakPtr = (FWeakObjectPtr)(*pcVar2)();
      return (TWeakObjectPtr<UDS_TimeCoolDown,FWeakObjectPtr>)TVar5.WeakPtr;
    }
  }
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar6 = Z_Construct_UClass_UDS_TimeCoolDown_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar6);
  local_a8._8_8_ = this;
  local_d0 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar8 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar8 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_d0 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_d0);
  }
  *(ulonglong *)(local_d0 + 1) = local_d8;
  local_b8 = &local_d8;
  local_b0 = &local_d0;
  TSet<TTuple<unsigned___int64,TObjectPtr<UDS_TimeCoolDown>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TObjectPtr<UDS_TimeCoolDown>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned___int64_&,TObjectPtr<UDS_TimeCoolDown>_&>_>
            ((TSet<TTuple<unsigned___int64,TObjectPtr<UDS_TimeCoolDown>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TObjectPtr<UDS_TimeCoolDown>,0>,FDefaultSetAllocator>
              *)this_00,&local_c8,(bool *)&local_b8);
LAB_14bb63dbd:
  pTVar7 = TMapBase<unsigned___int64,TObjectPtr<UDS_TimeCoolDown>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TObjectPtr<UDS_TimeCoolDown>,0>_>
           ::FindChecked((TMapBase<unsigned___int64,TObjectPtr<UDS_TimeCoolDown>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TObjectPtr<UDS_TimeCoolDown>,0>_>
                          *)this_00,in_R8);
  pUVar1 = (pTVar7->field0_0x0).DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (pUVar1 != (UDS_TimeCoolDown *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UDS_TimeCoolDown *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
  }
  *(undefined8 *)param_1 = 0;
  local_c8.Value = (TObjectPtr<UDS_TimeCoolDown> *)pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UDS_TimeCoolDown *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_c8.Value);
  return (TWeakObjectPtr<UDS_TimeCoolDown,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// GetCoolDownEndTime @ 14bb63e90

double __cdecl UDS_TimeCoolDownManager::GetCoolDownEndTime(EDS_CoolDownType param_1,ulong64 param_2)

{
  code *pcVar1;
  bool bVar2;
  UDS_TimeCoolDownManager *this;
  UObject *pUVar3;
  double *pdVar4;
  double dVar5;
  FWeakObjectPtr local_res18 [2];
  
  this = GetInst();
  if (this != (UDS_TimeCoolDownManager *)0x0) {
    GetCoolDownClass(this,(ulong64)local_res18);
    bVar2 = FWeakObjectPtr::IsValid(local_res18);
    if (bVar2) {
      pUVar3 = FWeakObjectPtr::Get(local_res18);
      pdVar4 = TMapBase<enum_EDS_CoolDownType,double,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_CoolDownType,double,0>_>
               ::Find(&pUVar3[1].field_0x8,param_1);
      if (pdVar4 != (double *)0x0) {
        return *pdVar4;
      }
    }
    else {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_6995243256816598862>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_TimeCoolDownManager.cpp"
                         ,0xb2,"timeCoolDown.IsValid()");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        dVar5 = (double)(*pcVar1)();
        return dVar5;
      }
    }
  }
  return 0.0;
}

// GetCoolDownRemainTime @ 14bb63f90

double __cdecl
UDS_TimeCoolDownManager::GetCoolDownRemainTime(EDS_CoolDownType param_1,ulong64 param_2)

{
  code *pcVar1;
  bool bVar2;
  UDS_TimeCoolDownManager *this;
  UObject *pUVar3;
  double *pdVar4;
  double dVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  FWeakObjectPtr local_res18 [2];
  
  this = GetInst();
  if (this != (UDS_TimeCoolDownManager *)0x0) {
    GetCoolDownClass(this,(ulong64)local_res18);
    bVar2 = FWeakObjectPtr::IsValid(local_res18);
    if (bVar2) {
      pUVar3 = FWeakObjectPtr::Get(local_res18);
      pdVar4 = TMapBase<enum_EDS_CoolDownType,double,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_CoolDownType,double,0>_>
               ::Find(&pUVar3[1].field_0x8,param_1);
      if (pdVar4 == (double *)0x0) {
        uVar6 = 0;
        uVar7 = 0;
      }
      else {
        uVar6 = SUB84(*pdVar4,0);
        uVar7 = (undefined4)((ulonglong)*pdVar4 >> 0x20);
      }
      dVar5 = UDS_TimeUtilManager::GetCurrentServerTime();
      dVar5 = (double)CONCAT44(uVar7,uVar6) - dVar5;
      if (dVar5 <= 0.0) {
        dVar5 = 0.0;
      }
      return dVar5;
    }
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6995243256816598845>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_TimeCoolDownManager.cpp"
                       ,0xc3,"timeCoolDown.IsValid()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      dVar5 = (double)(*pcVar1)();
      return dVar5;
    }
  }
  return 0.0;
}

// GetInst @ 14bb66260

UDS_TimeCoolDownManager * __cdecl UDS_TimeCoolDownManager::GetInst(void)

{
  int iVar1;
  UDS_GameInstance *this;
  UClass *pUVar2;
  UDS_TimeCoolDownManager *pUVar3;
  
  this = UDS_GameInstance::GetInst();
  if (this == (UDS_GameInstance *)0x0) {
    return (UDS_TimeCoolDownManager *)0x0;
  }
  pUVar2 = Z_Construct_UClass_UDS_TimeCoolDownManager_NoRegister();
  pUVar3 = (UDS_TimeCoolDownManager *)UDS_GameInstance::GetManager(this,(FName)pUVar2->_padding_);
  if (pUVar3 != (UDS_TimeCoolDownManager *)0x0) {
    pUVar2 = Z_Construct_UClass_UDS_TimeCoolDownManager_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      return pUVar3;
    }
  }
  return (UDS_TimeCoolDownManager *)0x0;
}

// HasCoolDown @ 14bb69990

bool __cdecl UDS_TimeCoolDownManager::HasCoolDown(EDS_CoolDownType param_1,ulong64 param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UDS_TimeCoolDownManager *this;
  UObject *pUVar4;
  double *pdVar5;
  double dVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  FWeakObjectPtr local_res18 [2];
  
  this = GetInst();
  if (this != (UDS_TimeCoolDownManager *)0x0) {
    GetCoolDownClass(this,(ulong64)local_res18);
    bVar2 = FWeakObjectPtr::IsValid(local_res18);
    if (bVar2) {
      pUVar4 = FWeakObjectPtr::Get(local_res18);
      pdVar5 = TMapBase<enum_EDS_CoolDownType,double,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_CoolDownType,double,0>_>
               ::Find(&pUVar4[1].field_0x8,param_1);
      if (pdVar5 == (double *)0x0) {
        uVar7 = 0;
        uVar8 = 0;
      }
      else {
        uVar7 = SUB84(*pdVar5,0);
        uVar8 = (undefined4)((ulonglong)*pdVar5 >> 0x20);
      }
      dVar6 = UDS_TimeUtilManager::GetCurrentServerTime();
      dVar6 = (double)CONCAT44(uVar8,uVar7) - dVar6;
      if (dVar6 <= 0.0) {
        dVar6 = 0.0;
      }
      return 0.0 < dVar6;
    }
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6995243256816598827>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_TimeCoolDownManager.cpp"
                       ,0xd5,"timeCoolDown.IsValid()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// HasCoolDownClass @ 14bb69a60

bool __thiscall
UDS_TimeCoolDownManager::HasCoolDownClass(UDS_TimeCoolDownManager *this,ulong64 param_1)

{
  int iVar1;
  undefined1 *puVar2;
  
  if (*(int *)&(this->CoolDownMap).field_0x8 != *(int *)&(this->CoolDownMap).field_0x34) {
    puVar2 = *(undefined1 **)&(this->CoolDownMap).field_0x40;
    if (puVar2 == (undefined1 *)0x0) {
      puVar2 = &(this->CoolDownMap).field_0x38;
    }
    iVar1 = *(int *)(puVar2 + (ulonglong)
                              (*(int *)&(this->CoolDownMap).field_0x48 - 1U &
                              (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4);
    if (iVar1 != -1) {
      do {
        if (*(ulong64 *)(*(longlong *)&this->CoolDownMap + (longlong)iVar1 * 0x18) == param_1)
        goto LAB_14bb69acc;
        iVar1 = *(int *)(*(longlong *)&this->CoolDownMap + 0x10 + (longlong)iVar1 * 0x18);
      } while (iVar1 != -1);
    }
  }
  iVar1 = -1;
LAB_14bb69acc:
  return iVar1 != -1;
}

// Init @ 14bb6a820

void __thiscall UDS_TimeCoolDownManager::Init(UDS_TimeCoolDownManager *this)

{
  return;
}

// OnEndCoolDown @ 14bb72f90

void __thiscall
UDS_TimeCoolDownManager::OnEndCoolDown
          (UDS_TimeCoolDownManager *this,ulong64 param_1,EDS_CoolDownType param_2)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  EDS_CoolDownType local_res20 [2];
  EDS_CoolDownType local_18 [2];
  FWeakObjectPtr local_10;
  
  GetCoolDownClass(this,(ulong64)&local_10);
  bVar2 = FWeakObjectPtr::IsValid(&local_10);
  if (bVar2) {
    pUVar3 = FWeakObjectPtr::Get(&local_10);
    local_res20[0] = param_2;
    if (*(int *)&pUVar3[1].field_0x10 != *(int *)&pUVar3[2].field_0x14) {
      TSet<TTuple<enum_EDS_CoolDownType,double>,TDefaultMapHashableKeyFuncs<enum_EDS_CoolDownType,double,0>,FDefaultSetAllocator>
      ::RemoveImpl<enum_EDS_CoolDownType>(&pUVar3[1].field_0x8,param_2,local_res20);
    }
    local_18[0] = param_2;
    if (*(int *)&pUVar3[3].field_0x10 != *(int *)&pUVar3[4].field_0x14) {
      TSet<TTuple<enum_EDS_CoolDownType,FTimerHandle>,TDefaultMapHashableKeyFuncs<enum_EDS_CoolDownType,FTimerHandle,0>,FDefaultSetAllocator>
      ::RemoveImpl<enum_EDS_CoolDownType>(&pUVar3[3].field_0x8,param_2,local_18);
    }
    TMulticastDelegate<void___cdecl(enum_EDS_CoolDownType,bool,TWeakObjectPtr<UDS_TimeCoolDown,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
    ::Broadcast(&this->OnChangedTimeCoolDownEvent,param_2,false,
                (TWeakObjectPtr<UDS_TimeCoolDown,FWeakObjectPtr>)local_10);
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6995243256816598800>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_TimeCoolDownManager.cpp"
                       ,0xf0,"timeCoolDown.IsValid()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// ReceiveSqlCoolTimeTable @ 14bb7f2f0

void __cdecl UDS_TimeCoolDownManager::ReceiveSqlCoolTimeTable(SqlCoolTimeTable *param_1)

{
  EDS_CoolDownType EVar1;
  ulong64 uVar2;
  FDateTime *pFVar3;
  longlong local_res8;
  FDateTime local_res10;
  
  uVar2 = (param_1->_impl_).player_uid_;
  EVar1 = (param_1->_impl_).cool_time_id_;
  DS_Util::ConvertTimestampToDateTime((Timestamp *)&local_res8);
  pFVar3 = FDateTime::FDateTime(&local_res10,0x7b2,1,1,0,0,0,0);
  StartCoolDown(EVar1,uVar2,(double)(local_res8 - pFVar3->Ticks) * __real_3e7ad7f29abcaf48);
  return;
}

// Reset @ 14bb86270

void __thiscall UDS_TimeCoolDownManager::Reset(UDS_TimeCoolDownManager *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  undefined8 uStack_30;
  
  iVar3 = *(int *)&(this->CoolDownMap).field_0x28;
  puVar1 = &(this->CoolDownMap).field_0x10;
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->CoolDownMap).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14bb8630d;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iVar7 = local_res10 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14bb8630d:
  uVar10 = *(uint *)&(this->CoolDownMap).field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_50._padding_ = CONCAT44(uVar6,iVar11);
  TStack_50.CurrentBitIndex = iVar7;
  TStack_50.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_50._28_4_ = iVar7;
  TStack_50.BaseBitIndex = iVar13;
  uStack_30 = CONCAT44(uStack_5c,
                       *(int *)&(this->CoolDownMap).field_0x8 -
                       *(int *)&(this->CoolDownMap).field_0x34);
  TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->CoolDownMap).field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(this->CoolDownMap).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14bb86410;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_14bb86410:
  while( true ) {
    if (*(int *)&(this->CoolDownMap).field_0x8 - *(int *)&(this->CoolDownMap).field_0x34 !=
        (int)uStack_30) {
      `TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TObjectPtr<UDS_TimeCoolDown>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_50.CurrentBitIndex == uVar10) &&
       (TStack_50.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    UDS_TimeCoolDown::ClearAll
              (*(UDS_TimeCoolDown **)
                (*(longlong *)&this->CoolDownMap + 8 + (longlong)TStack_50.CurrentBitIndex * 0x18));
    TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
  }
  return;
}

// StartCoolDown @ 14bb90dc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UDS_TimeCoolDownManager::StartCoolDown(EDS_CoolDownType param_1,ulong64 param_2,double param_3)

{
  code *pcVar1;
  double dVar2;
  bool bVar3;
  UDS_TimeCoolDownManager *this;
  UObject *pUVar4;
  FDS_TimeCoolDownTableRow *pFVar5;
  double *pdVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  FTimerManager *this_00;
  ForAnyElementType FVar9;
  ulonglong uVar10;
  int iVar11;
  double dVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 auStackY_168 [32];
  EDS_CoolDownType local_138 [2];
  undefined1 local_130;
  undefined1 local_12f;
  undefined1 local_12e;
  undefined1 local_12d;
  ForAnyElementType local_128;
  int local_120;
  FDelegateAllocation local_118;
  FWeakObjectPtr local_108;
  FTimerHandle local_100;
  undefined1 local_f8 [8];
  double *local_f0;
  UDS_TimeCoolDownManager *local_e8;
  EDS_CoolDownType *local_e0;
  double **local_d8;
  EDS_CoolDownType *local_d0;
  FTimerHandle *local_c8;
  undefined1 local_c0;
  FDelegateAllocation *local_b8;
  FTimerUnifiedDelegate local_a8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_168;
  this = GetInst();
  if (this == (UDS_TimeCoolDownManager *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6995243256816598894>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_TimeCoolDownManager.cpp"
                       ,0x92,"timeCoolDownManager");
    if (!bVar3) {
      return;
    }
code_r0x00014bb90e7b:
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  GetCoolDownClass(this,(ulong64)&local_108);
  bVar3 = FWeakObjectPtr::IsValid(&local_108);
  if (!bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6995243256816598888>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_TimeCoolDownManager.cpp"
                       ,0x98,"timeCoolDown.IsValid()");
    if (!bVar3) {
      return;
    }
    goto code_r0x00014bb90e7b;
  }
  pUVar4 = FWeakObjectPtr::Get(&local_108);
  local_138[0] = param_1;
  dVar12 = UDS_TimeUtilManager::GetCurrentServerTime();
  if (param_3 <= 0.0) {
    pFVar5 = FDS_TimeCoolDownTableRow::GetRef((longlong)(int)local_138[0],true);
    dVar2 = (double)pFVar5->CoolTime;
  }
  else {
    dVar2 = param_3 - dVar12;
  }
  local_f0 = (double *)(dVar2 + dVar12);
  pdVar6 = TMapBase<enum_EDS_CoolDownType,double,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_CoolDownType,double,0>_>
           ::Find(&pUVar4[1].field_0x8,local_138[0]);
  if (pdVar6 == (double *)0x0) {
    uVar13 = 0;
    uVar14 = 0;
  }
  else {
    uVar13 = SUB84(*pdVar6,0);
    uVar14 = (undefined4)((ulonglong)*pdVar6 >> 0x20);
  }
  dVar12 = UDS_TimeUtilManager::GetCurrentServerTime();
  dVar12 = (double)CONCAT44(uVar14,uVar13) - dVar12;
  if (dVar12 <= 0.0) {
    dVar12 = 0.0;
  }
  if ((0.0 < dVar12) &&
     (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_6995243256816599010>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_TimeCoolDownManager.cpp"
                         ,0x1e,"HasCoolDown(InCoolDownType) == false"), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_e0 = local_138;
  local_d8 = &local_f0;
  local_100.Handle = 0;
  TSet<TTuple<enum_EDS_CoolDownType,double>,TDefaultMapHashableKeyFuncs<enum_EDS_CoolDownType,double,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_CoolDownType_&,double_&>_>
            (&pUVar4[1].field_0x8,(TPairInitializer<EDS_CoolDownType_&,double_&> *)local_f8,
             (bool *)&local_e0);
  local_d0 = local_138;
  local_c8 = &local_100;
  TSet<TTuple<enum_EDS_CoolDownType,FTimerHandle>,TDefaultMapHashableKeyFuncs<enum_EDS_CoolDownType,FTimerHandle,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_CoolDownType_&,FTimerHandle_&>_>
            (&pUVar4[3].field_0x8,
             (TPairInitializer<EDS_CoolDownType_&,FTimerHandle_&> *)(local_f8 + 4),(bool *)&local_d0
            );
  TMulticastDelegate<void___cdecl(enum_EDS_CoolDownType,bool,TWeakObjectPtr<UDS_TimeCoolDown,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  ::Broadcast(&this->OnChangedTimeCoolDownEvent,param_1,true,
              (TWeakObjectPtr<UDS_TimeCoolDown,FWeakObjectPtr>)local_108);
  pUVar4 = FWeakObjectPtr::Get(&local_108);
  pdVar6 = TMapBase<enum_EDS_CoolDownType,double,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_CoolDownType,double,0>_>
           ::Find(&pUVar4[1].field_0x8,param_1);
  if (pdVar6 == (double *)0x0) {
    uVar13 = 0;
    uVar14 = 0;
  }
  else {
    uVar13 = SUB84(*pdVar6,0);
    uVar14 = (undefined4)((ulonglong)*pdVar6 >> 0x20);
  }
  dVar12 = UDS_TimeUtilManager::GetCurrentServerTime();
  local_118.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  dVar12 = (double)CONCAT44(uVar14,uVar13) - dVar12;
  local_c0 = 0;
  local_b8 = &local_118;
  local_118.DelegateSize = 0;
  if (dVar12 <= 0.0) {
    dVar12 = 0.0;
  }
  puVar7 = UE::Core::Private::DelegateAllocate(0x30,&local_118);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy___KW4EDS_CoolDownType____6B_
    ;
    puVar7[1] = param_2;
    *(EDS_CoolDownType *)(puVar7 + 2) = param_1;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar7[3] = uVar8;
    *puVar7 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_TimeCoolDownManager____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy___KW4EDS_CoolDownType____6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar7[4] = 0;
    local_e8 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar7 + 4),(FObjectPtr)&local_e8);
    puVar7[5] = OnEndCoolDown;
  }
  this_00 = FDS_TimerManager::Get((UObject *)0x0);
  local_a8.VariantDelegate._0_8_ = (FScriptContainerElement *)0x0;
  local_120 = 0;
  local_a8.VariantDelegate._8_4_ = 0;
  local_128.Data = (FScriptContainerElement *)0x0;
  local_130 = 0;
  FVar9.Data = (FScriptContainerElement *)0x0;
  iVar11 = 0;
  if ((local_118.DelegateSize != 0) &&
     (local_118.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (**(code **)(*(longlong *)local_118.DelegateAllocator + 0x48))
              (local_118.DelegateAllocator,&local_128);
    FVar9.Data = local_128.Data;
    iVar11 = local_120;
  }
  local_120 = 0;
  local_12f = 0;
  local_128.Data = (FScriptContainerElement *)0x0;
  local_12e = 0;
  if (local_a8.VariantDelegate._8_4_ == 0) {
LAB_14bb9113a:
    if ((FScriptContainerElement *)local_a8.VariantDelegate._0_8_ != (FScriptContainerElement *)0x0)
    {
      FMemory::Free((void *)local_a8.VariantDelegate._0_8_);
    }
  }
  else if ((FScriptContainerElement *)local_a8.VariantDelegate._0_8_ !=
           (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_a8.VariantDelegate._0_8_)(local_a8.VariantDelegate._0_8_);
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_a8,0,0,0x10);
    local_a8.VariantDelegate._8_4_ = 0;
    goto LAB_14bb9113a;
  }
  local_12d = 0;
  local_a8.VariantDelegate._0_8_ = FVar9.Data;
  local_a8.VariantDelegate._8_4_ = iVar11;
  if (local_120 == 0) {
LAB_14bb9118a:
    if (local_128.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data);
    }
  }
  else if (local_128.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_128.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_128,0,0,0x10);
    local_120 = 0;
    goto LAB_14bb9118a;
  }
  local_a8.VariantDelegate.TypeIndex = 1;
  FTimerManager::InternalSetTimer(this_00,&local_100,&local_a8,(float)dVar12,false,__real_bf800000);
  uVar10 = (ulonglong)local_a8.VariantDelegate.TypeIndex;
  if ((3 < local_a8.VariantDelegate.TypeIndex) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>,FTimerDynamicDelegate,TFunction<void___cdecl(void)>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar10] ==
      UE::Core::Private::
      TDestructorCaller<TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>_>::
      Destruct) {
    if (local_a8.VariantDelegate._8_4_ != 0) {
      if ((FScriptContainerElement *)local_a8.VariantDelegate._0_8_ ==
          (FScriptContainerElement *)0x0) goto LAB_14bb91252;
      (*(code *)**(undefined8 **)local_a8.VariantDelegate._0_8_)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_a8,0,0,0x10);
      local_a8.VariantDelegate._8_4_ = 0;
    }
    if ((FScriptContainerElement *)local_a8.VariantDelegate._0_8_ != (FScriptContainerElement *)0x0)
    {
      FMemory::Free((void *)local_a8.VariantDelegate._0_8_);
    }
  }
  else {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>,FTimerDynamicDelegate,TFunction<void___cdecl(void)>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar10])(&local_a8);
  }
LAB_14bb91252:
  if ((local_118.DelegateSize != 0) &&
     (local_118.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_118.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_118,0,0,0x10);
    local_118.DelegateSize = 0;
  }
  if (local_118.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_118.DelegateAllocator);
  }
  return;
}

