// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 13

// StaticClass @ 14b4815b0

UClass * __cdecl UDS_DeathData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_DeathData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_DeathData",
               &Z_Registration_Info_UClass_UDS_DeathData.InnerSingleton,
               StaticRegisterNativesUDS_DeathData,0xd8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_DeathData>,InternalVTableHelperCtorCaller<UDS_DeathData>,
               local_res8,UDS_DataBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_DeathData.InnerSingleton;
}

// UDS_DeathData @ 14b483850

UDS_DeathData * __thiscall UDS_DeathData::UDS_DeathData(UDS_DeathData *this,FVTableHelper *param_1)

{
  UDS_DataBase::UDS_DataBase((UDS_DataBase *)this,param_1);
  this->EntityDeathType = None;
  this->_padding_ = (longlong)&___7UDS_DeathData__6B_;
  this->WarpLocationID = 0;
  this->TotalDeathCount = 0;
  this->ResurrectRemainTime = 0.0;
  this->AutoResurrectRemainTime = 0.0;
  this->DeathReasonType = Alive;
  this->AttackerID = 0;
  (this->AttackerName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttackerName).Data.ArrayNum = 0;
  (this->AttackerName).Data.ArrayMax = 0;
  this->ResurrectionWaitingID = 0;
  this->bIsDied = false;
  *(undefined8 *)&this->OnDeadEvent = 0;
  *(undefined8 *)&(this->OnDeadEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnDeadEvent).field_0x10 = 0;
  *(undefined8 *)&this->OnResurrectEvent = 0;
  *(undefined8 *)&(this->OnResurrectEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnResurrectEvent).field_0x10 = 0;
  *(undefined8 *)&(this->OnDeadEvent).field_0x18 = 2;
  *(undefined8 *)&(this->OnResurrectEvent).field_0x18 = 2;
  return this;
}

// ~UDS_DeathData @ 14b484010

void __thiscall UDS_DeathData::~UDS_DeathData(UDS_DeathData *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UDS_DeathData__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnResurrectEvent).field_0x8,*(int *)&(this->OnResurrectEvent).field_0x10);
  pvVar1 = *(void **)&(this->OnResurrectEvent).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnResurrectEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)&(this->OnDeadEvent).field_0x8
             ,*(int *)&(this->OnDeadEvent).field_0x10);
  pvVar1 = *(void **)&(this->OnDeadEvent).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnDeadEvent);
  pFVar2 = (this->AttackerName).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UDS_DataBase::~UDS_DataBase((UDS_DataBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b4851a0

UClass * __cdecl UDS_DeathData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_DeathData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_DeathData",
               &Z_Registration_Info_UClass_UDS_DeathData.InnerSingleton,
               StaticRegisterNativesUDS_DeathData,0xd8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_DeathData>,InternalVTableHelperCtorCaller<UDS_DeathData>,
               local_res8,UDS_DataBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_DeathData.InnerSingleton;
}

// StaticRegisterNativesUDS_DeathData @ 14b485620

void __cdecl UDS_DeathData::StaticRegisterNativesUDS_DeathData(void)

{
  return;
}

// UDS_DeathData @ 14ba32a80

UDS_DeathData * __thiscall
UDS_DeathData::UDS_DeathData(UDS_DeathData *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = 0;
  (this->AttackerName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttackerName).Data.ArrayNum = 0;
  (this->AttackerName).Data.ArrayMax = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->ResurrectionWaitingID = 0;
  *(undefined8 *)&this->OnDeadEvent = 0;
  *(undefined8 *)&(this->OnDeadEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnDeadEvent).field_0x10 = 0;
  *(undefined8 *)&(this->OnDeadEvent).field_0x18 = 2;
  *(undefined8 *)&this->OnResurrectEvent = 0;
  *(undefined8 *)&(this->OnResurrectEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnResurrectEvent).field_0x10 = 0;
  *(undefined8 *)&(this->OnResurrectEvent).field_0x18 = 2;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UDS_DeathData__6B_;
  this->EntityDeathType = None;
  this->bIsDied = false;
  this->WarpLocationID = 0;
  this->TotalDeathCount = 0;
  this->ResurrectRemainTime = 0.0;
  this->AutoResurrectRemainTime = 0.0;
  this->DeathReasonType = Alive;
  this->AttackerID = 0;
  ::FString::Empty(&this->AttackerName);
  this->ResurrectionWaitingID = 0;
  return this;
}

// FindOrAddData @ 14ba40b30

TWeakObjectPtr<UDS_DeathData,FWeakObjectPtr> __cdecl
UDS_DeathData::FindOrAddData(ulong64 param_1,ulong64 param_2)

{
  bool in_R8B;
  
  GetData(param_1,param_2,in_R8B);
  return (TWeakObjectPtr<UDS_DeathData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// GetData @ 14ba48570

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TWeakObjectPtr<UDS_DeathData,FWeakObjectPtr> __cdecl
UDS_DeathData::GetData(ulong64 param_1,ulong64 param_2,bool param_3)

{
  int iVar1;
  bool bVar2;
  UDS_DataSetBase *pUVar3;
  TWeakObjectPtr<UDS_DataBase,FWeakObjectPtr> TVar4;
  UObject *pUVar5;
  UClass *pUVar6;
  longlong *plVar7;
  undefined7 in_register_00000081;
  char in_R9B;
  undefined1 auStack_f8 [32];
  FWeakObjectPtr local_d8;
  UObject *local_d0;
  FWeakObjectPtr local_c8;
  undefined1 local_c0 [8];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_f8;
  if (in_R9B == '\0') {
    TDS_DataSetGetter<UDS_DeathDataSet>::Get((ulong64)&local_c8);
    bVar2 = TWeakObjectPtr<UDS_DeathDataSet,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DeathDataSet,FWeakObjectPtr> *)&local_c8,(void *)0x0);
    if (bVar2) goto LAB_14ba487ff;
    pUVar3 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_c8);
    TVar4 = UDS_DataSetBase::GetData(pUVar3,(ulong64)local_c0);
    pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)TVar4.WeakPtr);
    if (pUVar5 == (UObject *)0x0) {
LAB_14ba4860b:
      pUVar5 = (UObject *)0x0;
    }
    else {
      pUVar6 = Z_Construct_UClass_UDS_DeathData_NoRegister();
      iVar1 = (int)pUVar6->_padding_;
      if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar6->_padding_)) goto LAB_14ba4860b;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    local_d8.ObjectIndex = 0;
    local_d8.ObjectSerialNumber = 0;
    local_d0 = pUVar5;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    FWeakObjectPtr::operator=(&local_d8,(FObjectPtr)&local_d0);
    bVar2 = TWeakObjectPtr<UDS_DeathData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DeathData,FWeakObjectPtr> *)&local_d8,(void *)0x0);
    if (!bVar2) {
      *(FWeakObjectPtr *)param_1 = local_d8;
      return (TWeakObjectPtr<UDS_DeathData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
    }
  }
  else {
    TDS_DataSetGetter<UDS_DeathDataSet>::Get((ulong64)&local_c8);
    bVar2 = TWeakObjectPtr<UDS_DeathDataSet,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DeathDataSet,FWeakObjectPtr> *)&local_c8,(void *)0x0);
    if (!bVar2) {
      pUVar3 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_c8);
      TVar4 = UDS_DataSetBase::GetData(pUVar3,(ulong64)local_c0);
      pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)TVar4.WeakPtr);
      if (pUVar5 == (UObject *)0x0) {
LAB_14ba486d5:
        pUVar5 = (UObject *)0x0;
      }
      else {
        pUVar6 = Z_Construct_UClass_UDS_DeathData_NoRegister();
        iVar1 = (int)pUVar6->_padding_;
        if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar1) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar6->_padding_)) goto LAB_14ba486d5;
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar5);
      }
      local_d8.ObjectIndex = 0;
      local_d8.ObjectSerialNumber = 0;
      local_d0 = pUVar5;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar5);
      }
      FWeakObjectPtr::operator=(&local_d8,(FObjectPtr)&local_d0);
      bVar2 = TWeakObjectPtr<UDS_DeathData,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_DeathData,FWeakObjectPtr> *)&local_d8,(void *)0x0);
      if (!bVar2) {
        *(FWeakObjectPtr *)param_1 = local_d8;
        return (TWeakObjectPtr<UDS_DeathData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
      }
      pUVar5 = GetTransientPackageAsObject();
      FObjectInitializer::AssertIfInConstructor
                (pUVar5,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar6 = Z_Construct_UClass_UDS_DeathData_NoRegister();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_b8,pUVar6);
      local_b8._8_8_ = pUVar5;
      pUVar5 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
      if (local_b8._64_8_ != 0) {
        plVar7 = (longlong *)(local_b8 + 0x50);
        if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
          plVar7 = (longlong *)local_b8._104_8_;
        }
        (**(code **)(*plVar7 + 0x10))();
      }
      if (pUVar5 != (UObject *)0x0) {
        pUVar3 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_c8);
        local_d0 = pUVar5;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar5);
        }
        bVar2 = UDS_DataSetBase::AddData
                          (pUVar3,CONCAT71(in_register_00000081,param_3),
                           (TObjectPtr<UDS_DataBase>)&local_d0);
        if (bVar2) {
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable(pUVar5);
          }
          *(undefined8 *)param_1 = 0;
          local_d0 = pUVar5;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable(pUVar5);
          }
          goto LAB_14ba48806;
        }
      }
    }
  }
LAB_14ba487ff:
  *(undefined8 *)param_1 = 0;
  local_d0 = (UObject *)0x0;
LAB_14ba48806:
  FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_d0);
  return (TWeakObjectPtr<UDS_DeathData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// ResetData @ 14ba68b20

void __thiscall UDS_DeathData::ResetData(UDS_DeathData *this)

{
  this->bIsDied = false;
  this->WarpLocationID = 0;
  this->TotalDeathCount = 0;
  this->ResurrectRemainTime = 0.0;
  this->AutoResurrectRemainTime = 0.0;
  this->DeathReasonType = Alive;
  this->AttackerID = 0;
  ::FString::Empty(&this->AttackerName);
  this->ResurrectionWaitingID = 0;
  return;
}

// Resurrect @ 14ba69830

void __thiscall UDS_DeathData::Resurrect(UDS_DeathData *this,EDS_ResurrectType param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  FWeakObjectPtr FVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  undefined7 in_register_00000011;
  longlong lVar10;
  uint uVar11;
  FWeakObjectPtr local_res8;
  UDS_DeathData *local_res18;
  FDestructionSentinel local_48;
  
  (**(code **)(this->_padding_ + 0x2c8))(this,CONCAT71(in_register_00000011,param_1));
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res18 = this;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res18);
  FVar6 = local_res8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnResurrectEvent,
             (FWriteAccessScope *)&local_48);
  puVar1 = &(this->OnResurrectEvent).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  bVar5 = false;
  uVar11 = *(int *)&(this->OnResurrectEvent).field_0x10 - 1;
  if (-1 < (int)uVar11) {
    lVar10 = (longlong)(int)uVar11 << 4;
    bVar5 = false;
    do {
      uVar9 = 0;
      if ((int)uVar11 < *(int *)&(this->OnResurrectEvent).field_0x10) {
        uVar9 = ~uVar11 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar2 = *(longlong *)&(this->OnResurrectEvent).field_0x8;
      if (((*(int *)(lVar2 + 8 + lVar10) == 0) ||
          (plVar3 = *(longlong **)(lVar2 + lVar10), plVar3 == (longlong *)0x0)) ||
         (cVar8 = (**(code **)(*plVar3 + 0x68))(plVar3,FVar6,param_1), cVar8 == '\0')) {
        bVar5 = true;
      }
      lVar10 = lVar10 + -0x10;
      uVar11 = uVar11 - 1;
    } while (-1 < (int)uVar11);
  }
  puVar1 = &(this->OnResurrectEvent).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (bVar5) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->OnResurrectEvent,false);
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  return;
}

// SetDeathDataResponse @ 14ba70ba0

void __thiscall UDS_DeathData::SetDeathDataResponse(UDS_DeathData *this,EntityDied *param_1)

{
  EntityDead *pEVar1;
  EntityDead *pEVar2;
  FWeakObjectPtr local_res8;
  UDS_DeathData *local_res10 [3];
  
  this->bIsDied = true;
  this->EntityDeathType = Dead;
  if (((param_1->_impl_)._has_bits_.has_bits_[0] & 1) != 0) {
    pEVar1 = (param_1->_impl_).entity_dead_;
    pEVar2 = &server_msg::_EntityDead_default_instance_._instance;
    if (pEVar1 != (EntityDead *)0x0) {
      pEVar2 = pEVar1;
    }
    this->EntityDeathType = (pEVar2->_impl_).dead_type_;
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10[0] = this;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res10);
  TMulticastDelegate<void___cdecl(TWeakObjectPtr<UDS_DeathData,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  ::Broadcast(&this->OnDeadEvent,(TWeakObjectPtr<UDS_DeathData,FWeakObjectPtr>)local_res8);
  return;
}

// SetDeathDataResponse @ 14ba70c40

void __thiscall UDS_DeathData::SetDeathDataResponse(UDS_DeathData *this,MainDied *param_1)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  FString *pFVar3;
  char *pcVar4;
  FWeakObjectPtr local_res8;
  UDS_DeathData *local_res10;
  FString local_28;
  
  this->bIsDied = true;
  this->WarpLocationID = (param_1->_impl_).warp_name_id_;
  this->TotalDeathCount = (param_1->_impl_).acc_count_;
  this->ResurrectRemainTime = (param_1->_impl_).wait_resurrect_;
  this->AutoResurrectRemainTime = (param_1->_impl_).auto_resurrect_;
  this->DeathReasonType = (EDS_DeathType)(param_1->_impl_).death_type_;
  this->AttackerID = (param_1->_impl_).attacker_uid_;
  pcVar4 = (char *)((ulonglong)(param_1->_impl_).attacker_name_.tagged_ptr_.ptr_ &
                   0xfffffffffffffffc);
  if (0xf < *(ulonglong *)(pcVar4 + 0x18)) {
    pcVar4 = *(char **)pcVar4;
  }
  pFVar3 = DS_Util::ConvertUTF8ToFString(&local_28,pcVar4);
  pFVar1 = &this->AttackerName;
  if (pFVar1 != pFVar3) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->AttackerName).Data.ArrayNum = (pFVar3->Data).ArrayNum;
    (this->AttackerName).Data.ArrayMax = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  this->ResurrectionWaitingID = (param_1->_impl_).resurrect_wait_id_;
  this->EntityDeathType = Dead;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = this;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  TMulticastDelegate<void___cdecl(TWeakObjectPtr<UDS_DeathData,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  ::Broadcast(&this->OnDeadEvent,(TWeakObjectPtr<UDS_DeathData,FWeakObjectPtr>)local_res8);
  return;
}

// SetDeathDataResponse_Stuff @ 14ba70d70

void __thiscall UDS_DeathData::SetDeathDataResponse_Stuff(UDS_DeathData *this)

{
  FWeakObjectPtr local_res8;
  UDS_DeathData *local_res10 [3];
  
  this->bIsDied = true;
  this->EntityDeathType = Disappear;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10[0] = this;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res10);
  TMulticastDelegate<void___cdecl(TWeakObjectPtr<UDS_DeathData,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  ::Broadcast(&this->OnDeadEvent,(TWeakObjectPtr<UDS_DeathData,FWeakObjectPtr>)local_res8);
  return;
}

