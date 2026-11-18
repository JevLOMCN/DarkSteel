// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 11

// StaticClass @ 14b578700

UClass * __cdecl UDS_RecvMoveTotemProcess::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_RecvMoveTotemProcess.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_RecvMoveTotemProcess",
               &Z_Registration_Info_UClass_UDS_RecvMoveTotemProcess.InnerSingleton,
               StaticRegisterNativesUDS_RecvMoveTotemProcess,0xd0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_RecvMoveTotemProcess>,
               InternalVTableHelperCtorCaller<UDS_RecvMoveTotemProcess>,local_res8,
               UDS_RecvMoveBaseProcess::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_RecvMoveTotemProcess.InnerSingleton;
}

// UDS_RecvMoveTotemProcess @ 14b57ddc0

UDS_RecvMoveTotemProcess * __thiscall
UDS_RecvMoveTotemProcess::UDS_RecvMoveTotemProcess
          (UDS_RecvMoveTotemProcess *this,FVTableHelper *param_1)

{
  UDS_RecvMoveBaseProcess::UDS_RecvMoveBaseProcess((UDS_RecvMoveBaseProcess *)this,param_1);
  *(undefined ***)this = &___7UDS_RecvMoveTotemProcess__6B_;
  return this;
}

// ~UDS_RecvMoveTotemProcess @ 14b57e510

void __thiscall UDS_RecvMoveTotemProcess::~UDS_RecvMoveTotemProcess(UDS_RecvMoveTotemProcess *this)

{
  *(undefined ***)this = &___7UDS_RecvProcessBase__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0x28);
  if (*(void **)&this->field_0x30 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x30);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->field_0x28);
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14b580110

UClass * __cdecl UDS_RecvMoveTotemProcess::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_RecvMoveTotemProcess.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_RecvMoveTotemProcess",
               &Z_Registration_Info_UClass_UDS_RecvMoveTotemProcess.InnerSingleton,
               StaticRegisterNativesUDS_RecvMoveTotemProcess,0xd0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_RecvMoveTotemProcess>,
               InternalVTableHelperCtorCaller<UDS_RecvMoveTotemProcess>,local_res8,
               UDS_RecvMoveBaseProcess::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_RecvMoveTotemProcess.InnerSingleton;
}

// StaticRegisterNativesUDS_RecvMoveTotemProcess @ 14b580970

void __cdecl UDS_RecvMoveTotemProcess::StaticRegisterNativesUDS_RecvMoveTotemProcess(void)

{
  return;
}

// UDS_RecvMoveTotemProcess @ 14bba8ca0

UDS_RecvMoveTotemProcess * __thiscall
UDS_RecvMoveTotemProcess::UDS_RecvMoveTotemProcess
          (UDS_RecvMoveTotemProcess *this,FObjectInitializer *param_1)

{
  UDS_RecvMoveBaseProcess::UDS_RecvMoveBaseProcess((UDS_RecvMoveBaseProcess *)this,param_1);
  *(undefined ***)this = &___7UDS_RecvMoveTotemProcess__6B_;
  return this;
}

// Initialize @ 14bbc03d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_RecvMoveTotemProcess::Initialize
          (UDS_RecvMoveTotemProcess *this,TWeakObjectPtr<AActor,FWeakObjectPtr> param_1)

{
  EDS_EntityType EVar1;
  FDS_EntityBase *pFVar2;
  undefined8 *puVar3;
  TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> TVar4;
  TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr> TVar5;
  TWeakObjectPtr<UDS_EntityData,FWeakObjectPtr> TVar6;
  TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr> TVar7;
  undefined1 auStackX_18 [16];
  
  pFVar2 = FDS_EntityBase::GetEntityBaseFromActor(param_1);
  if (pFVar2 != (FDS_EntityBase *)0x0) {
    *(ulong64 *)&this->field_0x70 = pFVar2->EntityID;
    EVar1 = pFVar2->EntityType;
    this->field_0x78 = EVar1;
    *(long64 *)&this->field_0x80 = pFVar2->TableID;
    if (EVar1 == DummyCharacter) {
      FDS_EntityBase::GetMainPlayerEntityBase(true);
    }
    puVar3 = (undefined8 *)(**(code **)(pFVar2->_padding_ + 0x150))(pFVar2,auStackX_18);
    *(undefined8 *)&this->field_0x40 = *puVar3;
    puVar3 = (undefined8 *)(**(code **)(pFVar2->_padding_ + 0x78))(pFVar2,auStackX_18);
    *(undefined8 *)&this->field_0x48 = *puVar3;
    TVar4 = UDS_CharStateData::GetData((ulong64)auStackX_18);
    *(undefined8 *)&this->field_0x50 = *(undefined8 *)TVar4.WeakPtr;
    TVar5 = UDS_CharInfoData::GetData((ulong64)auStackX_18);
    *(undefined8 *)&this->field_0x58 = *(undefined8 *)TVar5.WeakPtr;
    TVar6 = UDS_EntityData::GetData((ulong64)auStackX_18,*(ulong64 *)&this->field_0x70);
    *(undefined8 *)&this->field_0x60 = *(undefined8 *)TVar6.WeakPtr;
    TVar7 = UDS_CharStatusData::GetData((ulong64)auStackX_18);
    *(undefined8 *)&this->field_0x68 = *(undefined8 *)TVar7.WeakPtr;
  }
  return;
}

// OnEnter @ 14bbc89b0

void __thiscall
UDS_RecvMoveTotemProcess::OnEnter(UDS_RecvMoveTotemProcess *this,FDS_NetSyncData *param_1)

{
  undefined8 uVar1;
  
  UDS_RecvProcessBase::OnEnter((UDS_RecvProcessBase *)this,param_1);
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)&this->field_0x98 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)&this->field_0xa0 = uVar1;
  *(double *)&this->field_0xa8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)&this->field_0xb8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)&this->field_0xc0 = uVar1;
  *(double *)&this->field_0xc8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return;
}

// OnExit @ 14bbc91e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_RecvMoveTotemProcess::OnExit(UDS_RecvMoveTotemProcess *this,FDS_NetSyncData *param_1)

{
  bool bVar1;
  FDS_EntityBase *pFVar2;
  UDS_InputData *this_00;
  FWeakObjectPtr aFStackX_18 [2];
  
  UDS_RecvProcessBase::OnExit((UDS_RecvProcessBase *)this,param_1);
  pFVar2 = UDS_RecvProcessBase::GetOwnerEntity((UDS_RecvProcessBase *)this);
  if (pFVar2 != (FDS_EntityBase *)0x0) {
    bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->field_0x48);
    if (bVar1) {
      (**(code **)(pFVar2->_padding_ + 0x1b8))(pFVar2);
      bVar1 = FWeakObjectPtr::IsValid(aFStackX_18);
      if (bVar1) {
        this_00 = (UDS_InputData *)FWeakObjectPtr::Get(aFStackX_18);
        UDS_InputData::SetIsActiveInput(this_00,false);
      }
    }
  }
  return;
}

// PostProcessData @ 14bbcdc80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_RecvMoveTotemProcess::PostProcessData
          (UDS_RecvMoveTotemProcess *this,FDS_NetSyncData *param_1,NetSyncResponse *param_2)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_EntityData *this_00;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  bVar1 = TWeakObjectPtr<UDS_EntityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_EntityData,FWeakObjectPtr> *)&this->field_0x60,(void *)0x0)
  ;
  if (bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_RecvMoveTotemProcess::PostProcessData",0x29,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_148.Ptr,0x2a,L"OwnerEntityData null");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  else {
    this_00 = (UDS_EntityData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x60);
    UDS_EntityData::SetMoveMode
              (this_00,(EDS_MoveMode)((uint)(param_1->StateFlags).Packed >> 4) & 0x7f);
    UDS_RecvMoveBaseProcess::PostProcessData((UDS_RecvMoveBaseProcess *)this,param_1,param_2);
  }
  return;
}

// RecvSyncTick @ 14bbd6d90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_RecvMoveTotemProcess::RecvSyncTick
          (UDS_RecvMoveTotemProcess *this,FDS_NetSyncData *param_1,float param_2)

{
  bool bVar1;
  UDS_CharStateData *this_00;
  FDS_EntityBase *pFVar2;
  EDS_CharState local_res8;
  
  bVar1 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *)&this->field_0x50,
                     (void *)0x0);
  if (!bVar1) {
    this_00 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x50);
    local_res8 = Abnormal;
    bVar1 = UDS_CharStateData::HasCharState(this_00,&local_res8);
    if (!bVar1) {
      UDS_RecvMoveBaseProcess::RecvSyncTick((UDS_RecvMoveBaseProcess *)this,param_1,param_2);
      pFVar2 = FDS_EntityBase::GetEntityBase((ulong64 *)&this->field_0x70);
      if (pFVar2 != (FDS_EntityBase *)0x0) {
        bVar1 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> *)&this->field_0x48,
                           (void *)0x0);
        if (!bVar1) {
          (**(code **)(*(longlong *)this + 0x308))(this,param_1,param_2);
        }
      }
    }
  }
  return;
}

