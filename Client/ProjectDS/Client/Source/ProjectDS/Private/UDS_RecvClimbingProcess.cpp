// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 11

// StaticClass @ 14b57b290

UClass * __cdecl UDS_RecvClimbingProcess::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_RecvClimbingProcess.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_RecvClimbingProcess",
               &Z_Registration_Info_UClass_UDS_RecvClimbingProcess.InnerSingleton,
               StaticRegisterNativesUDS_RecvClimbingProcess,0xd0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_RecvClimbingProcess>,
               InternalVTableHelperCtorCaller<UDS_RecvClimbingProcess>,local_res8,
               UDS_RecvMoveBaseProcess::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_RecvClimbingProcess.InnerSingleton;
}

// UDS_RecvClimbingProcess @ 14b57db40

UDS_RecvClimbingProcess * __thiscall
UDS_RecvClimbingProcess::UDS_RecvClimbingProcess
          (UDS_RecvClimbingProcess *this,FVTableHelper *param_1)

{
  UDS_RecvMoveBaseProcess::UDS_RecvMoveBaseProcess((UDS_RecvMoveBaseProcess *)this,param_1);
  *(undefined ***)this = &___7UDS_RecvClimbingProcess__6B_;
  return this;
}

// ~UDS_RecvClimbingProcess @ 14b57e2e0

void __thiscall UDS_RecvClimbingProcess::~UDS_RecvClimbingProcess(UDS_RecvClimbingProcess *this)

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

// GetPrivateStaticClass @ 14b57fbd0

UClass * __cdecl UDS_RecvClimbingProcess::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_RecvClimbingProcess.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_RecvClimbingProcess",
               &Z_Registration_Info_UClass_UDS_RecvClimbingProcess.InnerSingleton,
               StaticRegisterNativesUDS_RecvClimbingProcess,0xd0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_RecvClimbingProcess>,
               InternalVTableHelperCtorCaller<UDS_RecvClimbingProcess>,local_res8,
               UDS_RecvMoveBaseProcess::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_RecvClimbingProcess.InnerSingleton;
}

// StaticRegisterNativesUDS_RecvClimbingProcess @ 14b580900

void __cdecl UDS_RecvClimbingProcess::StaticRegisterNativesUDS_RecvClimbingProcess(void)

{
  return;
}

// UDS_RecvClimbingProcess @ 14bb4caf0

UDS_RecvClimbingProcess * __thiscall
UDS_RecvClimbingProcess::UDS_RecvClimbingProcess
          (UDS_RecvClimbingProcess *this,FObjectInitializer *param_1)

{
  UDS_RecvMoveBaseProcess::UDS_RecvMoveBaseProcess((UDS_RecvMoveBaseProcess *)this,param_1);
  *(undefined ***)this = &___7UDS_RecvClimbingProcess__6B_;
  return this;
}

// Initialize @ 14bb6dd20

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
UDS_RecvClimbingProcess::Initialize
          (UDS_RecvClimbingProcess *this,TWeakObjectPtr<AActor,FWeakObjectPtr> param_1)

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

// IsActiveRecvProcess @ 14bb6e120

bool __thiscall
UDS_RecvClimbingProcess::IsActiveRecvProcess(UDS_RecvClimbingProcess *this,FDS_NetSyncData *param_1)

{
  bool bVar1;
  
  bVar1 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *)&this->field_0x50,
                     (void *)0x0);
  if (!bVar1) {
    return ((byte)((uint)(param_1->StateFlags).Packed >> 4) & 0x7f) == 0xc;
  }
  return false;
}

// OnEnter @ 14bb73080

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
UDS_RecvClimbingProcess::OnEnter(UDS_RecvClimbingProcess *this,FDS_NetSyncData *param_1)

{
  undefined8 uVar1;
  FDS_EntityBase *this_00;
  EDS_AbilityTagType local_res8 [16];
  undefined8 local_res18 [2];
  
  UDS_RecvProcessBase::OnEnter((UDS_RecvProcessBase *)this,param_1);
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)&this->field_0x98 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)&this->field_0xa0 = uVar1;
  *(double *)&this->field_0xa8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)&this->field_0xb8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)&this->field_0xc0 = uVar1;
  *(double *)&this->field_0xc8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this_00 = UDS_RecvProcessBase::GetOwnerEntity((UDS_RecvProcessBase *)this);
  if (this_00 != (FDS_EntityBase *)0x0) {
    local_res18[0] = 0;
    local_res8[0] = Climbing;
    FDS_EntityBase::TryActivateAbility
              (this_00,local_res8,(TObjectPtr<UWN_AbilityContext>)local_res18);
  }
  return;
}

// OnExit @ 14bb73530

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
UDS_RecvClimbingProcess::OnExit(UDS_RecvClimbingProcess *this,FDS_NetSyncData *param_1)

{
  FDS_EntityBase *this_00;
  EDS_AbilityDeactivateType local_res18 [8];
  EDS_AbilityTagType local_res20 [8];
  
  UDS_RecvMoveBaseProcess::OnExit((UDS_RecvMoveBaseProcess *)this,param_1);
  this_00 = UDS_RecvProcessBase::GetOwnerEntity((UDS_RecvProcessBase *)this);
  if (this_00 != (FDS_EntityBase *)0x0) {
    local_res18[0] = Cancel;
    local_res20[0] = Climbing;
    FDS_EntityBase::DeactivateAbility(this_00,local_res20,local_res18);
  }
  return;
}

// RecvSyncTick @ 14bb7f390

void __thiscall
UDS_RecvClimbingProcess::RecvSyncTick
          (UDS_RecvClimbingProcess *this,FDS_NetSyncData *param_1,float param_2)

{
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  
  UDS_RecvMoveBaseProcess::RecvSyncTick((UDS_RecvMoveBaseProcess *)this,param_1,param_2);
  (**(code **)(*(longlong *)this + 0x358))(this,param_1,param_2);
  (**(code **)(*(longlong *)this + 0x360))(this,&local_58,param_2,&param_1->EntityDirection);
  local_38 = local_58;
  uStack_34 = uStack_54;
  uStack_30 = uStack_50;
  uStack_2c = uStack_4c;
  local_28 = local_48;
  (**(code **)(*(longlong *)this + 0x330))(this,&local_38);
  return;
}

