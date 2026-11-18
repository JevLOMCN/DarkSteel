// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 13

// StaticClass @ 14b5795d0

UClass * __cdecl UDS_RecvResurrectProcess::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_RecvResurrectProcess.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_RecvResurrectProcess",
               &Z_Registration_Info_UClass_UDS_RecvResurrectProcess.InnerSingleton,
               StaticRegisterNativesUDS_RecvResurrectProcess,0xd0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_RecvResurrectProcess>,
               InternalVTableHelperCtorCaller<UDS_RecvResurrectProcess>,local_res8,
               UDS_RecvMoveBaseProcess::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_RecvResurrectProcess.InnerSingleton;
}

// UDS_RecvResurrectProcess @ 14b57df80

UDS_RecvResurrectProcess * __thiscall
UDS_RecvResurrectProcess::UDS_RecvResurrectProcess
          (UDS_RecvResurrectProcess *this,FVTableHelper *param_1)

{
  UDS_RecvMoveBaseProcess::UDS_RecvMoveBaseProcess((UDS_RecvMoveBaseProcess *)this,param_1);
  *(undefined ***)this = &___7UDS_RecvResurrectProcess__6B_;
  return this;
}

// ~UDS_RecvResurrectProcess @ 14b57e6d0

void __thiscall UDS_RecvResurrectProcess::~UDS_RecvResurrectProcess(UDS_RecvResurrectProcess *this)

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

// GetPrivateStaticClass @ 14b5804c0

UClass * __cdecl UDS_RecvResurrectProcess::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_RecvResurrectProcess.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_RecvResurrectProcess",
               &Z_Registration_Info_UClass_UDS_RecvResurrectProcess.InnerSingleton,
               StaticRegisterNativesUDS_RecvResurrectProcess,0xd0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_RecvResurrectProcess>,
               InternalVTableHelperCtorCaller<UDS_RecvResurrectProcess>,local_res8,
               UDS_RecvMoveBaseProcess::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_RecvResurrectProcess.InnerSingleton;
}

// StaticRegisterNativesUDS_RecvResurrectProcess @ 14b5809c0

void __cdecl UDS_RecvResurrectProcess::StaticRegisterNativesUDS_RecvResurrectProcess(void)

{
  return;
}

// UDS_RecvResurrectProcess @ 14bba90b0

UDS_RecvResurrectProcess * __thiscall
UDS_RecvResurrectProcess::UDS_RecvResurrectProcess
          (UDS_RecvResurrectProcess *this,FObjectInitializer *param_1)

{
  UDS_RecvMoveBaseProcess::UDS_RecvMoveBaseProcess((UDS_RecvMoveBaseProcess *)this,param_1);
  *(undefined ***)this = &___7UDS_RecvResurrectProcess__6B_;
  return this;
}

// GetNowMoveStateType @ 14bbbc9e0

EDS_MoveStateType __thiscall
UDS_RecvResurrectProcess::GetNowMoveStateType
          (UDS_RecvResurrectProcess *this,FDS_NetSyncData *param_1)

{
  return Stop;
}

// HandleDebugInfo @ 14bbbf650

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
UDS_RecvResurrectProcess::HandleDebugInfo(UDS_RecvResurrectProcess *this,FDS_NetSyncData *param_1)

{
  long64 lVar1;
  bool bVar2;
  FDS_EntityBase *this_00;
  UDS_MovementCore *this_01;
  TVector<double> *pTVar3;
  FString *pFVar4;
  UDS_EntityData *pUVar5;
  FString local_58;
  TVector<double>_u_0 local_48;
  TVector<double>_u_0 local_28;
  
  bVar2 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> *)&this->field_0x48,
                     (void *)0x0);
  if (!bVar2) {
    bVar2 = UDS_GameInstance::IsNameTagDebug();
    this_00 = FDS_EntityBase::GetEntityBase((ulong64 *)&this->field_0x70);
    if ((this_00 != (FDS_EntityBase *)0x0) && (FDS_EntityBase::ShowDebugUI(this_00,bVar2), bVar2)) {
      this_01 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x48);
      pTVar3 = UDS_MovementCore::GetActorLocation(this_01,(TVector<double> *)&local_48._s_0);
      local_28._s_0.X = (pTVar3->field0_0x0)._s_0.X;
      local_28._s_0.Y = (pTVar3->field0_0x0)._s_0.Y;
      local_28._s_0.Z = (pTVar3->field0_0x0)._s_0.Z;
      bVar2 = DS_Util::CheckMainPlayerDistance((TVector<double> *)&local_28._s_0);
      if (bVar2) {
        ::FString::FString(&local_58,"Resurrect");
        if (this->field_0x78 == '\x05') {
          lVar1 = this_00->TableID;
          ::FString::FString((FString *)&local_48._s_0,L"NpcBaseID:{1}\n");
          pFVar4 = DS_Util::GetFormatString<__int64>
                             ((FString *)&local_28._s_0,(FString *)&local_48._s_0,lVar1);
          ::FString::InsertAt(&local_58,0,pFVar4);
          if ((void *)local_28._s_0.X != (void *)0x0) {
            FMemory::Free((void *)local_28._s_0.X);
          }
          if ((void *)local_48._s_0.X != (void *)0x0) {
            FMemory::Free((void *)local_48._s_0.X);
          }
        }
        pUVar5 = (UDS_EntityData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x60);
        UDS_EntityData::SetDebugString(pUVar5,&local_58);
      }
      else {
        pUVar5 = (UDS_EntityData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x60);
        pFVar4 = ::FString::FString((FString *)&local_28._s_0,"");
        UDS_EntityData::SetDebugString(pUVar5,pFVar4);
        local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_28._s_0.X;
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// Initialize @ 14bbc0510

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
UDS_RecvResurrectProcess::Initialize
          (UDS_RecvResurrectProcess *this,TWeakObjectPtr<AActor,FWeakObjectPtr> param_1)

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

// IsActiveRecvProcess @ 14bbc2e30

bool __thiscall
UDS_RecvResurrectProcess::IsActiveRecvProcess
          (UDS_RecvResurrectProcess *this,FDS_NetSyncData *param_1)

{
  bool bVar1;
  UDS_CharStateData *this_00;
  EDS_CharState local_res8 [4];
  
  bVar1 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *)&this->field_0x50,
                     (void *)0x0);
  if (!bVar1) {
    this_00 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x50);
    local_res8[0] = Resurrect;
    bVar1 = UDS_CharStateData::HasCharState(this_00,local_res8);
    return bVar1;
  }
  return false;
}

// OnEnter @ 14bbc8cd0

void __thiscall
UDS_RecvResurrectProcess::OnEnter(UDS_RecvResurrectProcess *this,FDS_NetSyncData *param_1)

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

// OnExit @ 14bbc93e0

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
UDS_RecvResurrectProcess::OnExit(UDS_RecvResurrectProcess *this,FDS_NetSyncData *param_1)

{
  FDS_EntityBase *this_00;
  EDS_AbilityDeactivateType local_res8 [8];
  EDS_AbilityTagType local_res10 [8];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  double local_18;
  
  UDS_RecvMoveBaseProcess::OnExit((UDS_RecvMoveBaseProcess *)this,param_1);
  this_00 = FDS_EntityBase::GetEntityBase((ulong64 *)&this->field_0x70);
  if (this_00 != (FDS_EntityBase *)0x0) {
    local_res8[0] = Cancel;
    local_res10[0] = Resurrect;
    FDS_EntityBase::DeactivateAbility(this_00,local_res10,local_res8);
  }
  local_28 = *(undefined4 *)&(param_1->ServerPosition).field0_0x0;
  uStack_24 = *(undefined4 *)((longlong)&(param_1->ServerPosition).field0_0x0 + 4);
  uStack_20 = *(undefined4 *)((longlong)&(param_1->ServerPosition).field0_0x0 + 8);
  uStack_1c = *(undefined4 *)((longlong)&(param_1->ServerPosition).field0_0x0 + 0xc);
  local_18 = (param_1->ServerPosition).field0_0x0._s_0.Z;
  (**(code **)(*(longlong *)this + 800))(this,param_1,0,&local_28,1);
  local_28 = *(undefined4 *)&(param_1->EntityDirection).Pitch;
  uStack_24 = *(undefined4 *)((longlong)&(param_1->EntityDirection).Pitch + 4);
  uStack_20 = *(undefined4 *)&(param_1->EntityDirection).Yaw;
  uStack_1c = *(undefined4 *)((longlong)&(param_1->EntityDirection).Yaw + 4);
  local_18 = (param_1->EntityDirection).Roll;
  (**(code **)(*(longlong *)this + 0x330))(this,&local_28);
  return;
}

// RecvSyncTick @ 14bbd71b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_RecvResurrectProcess::RecvSyncTick
          (UDS_RecvResurrectProcess *this,FDS_NetSyncData *param_1,float param_2)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  undefined1 auStackY_1d8 [32];
  float afStack_198 [2];
  TVector<double>_u_0 TStack_190;
  FString FStack_178;
  double dStack_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_158;
  ulonglong uStack_38;
  
  uStack_38 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  UDS_RecvProcessBase::RecvSyncTick((UDS_RecvProcessBase *)this,param_1,param_2);
  bVar1 = UDS_SyncRecvComponent::HasHeightMoveData(*(ulong64 *)&this->field_0x70);
  if (bVar1) {
    TStack_190._s_0.X = (double)UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_;
    TStack_190._s_0.Y = (double)UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_;
    afStack_198[0] = 0.0;
    TStack_190._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    bVar1 = UDS_SyncRecvComponent::UpdateHeightMove
                      (*(ulong64 *)&this->field_0x70,param_2,afStack_198,
                       (TVector<double> *)&TStack_190._s_0);
    if (bVar1) {
      *(undefined4 *)&(param_1->ServerPosition).field0_0x0 = TStack_190._0_4_;
      *(undefined4 *)((longlong)&(param_1->ServerPosition).field0_0x0 + 4) = TStack_190._4_4_;
      *(undefined4 *)((longlong)&(param_1->ServerPosition).field0_0x0 + 8) = TStack_190._8_4_;
      *(undefined4 *)((longlong)&(param_1->ServerPosition).field0_0x0 + 0xc) = TStack_190._12_4_;
      (param_1->ServerPosition).field0_0x0._s_0.Z = TStack_190._s_0.Z;
      FStack_178.Data.AllocatorInstance.Data._0_4_ = TStack_190._0_4_;
      FStack_178.Data.AllocatorInstance.Data._4_4_ = TStack_190._4_4_;
      FStack_178.Data.ArrayNum = TStack_190._8_4_;
      FStack_178.Data.ArrayMax = TStack_190._12_4_;
      dStack_168 = TStack_190._s_0.Z;
      (**(code **)(*(longlong *)this + 800))(this,param_1,param_2,&FStack_178);
      pUVar2 = UDS_LogManager::GetInst();
      if ((pUVar2 != (UDS_LogManager *)0x0) && (UDS_LogManager::IsEnable_SyncLog != false)) {
        pUVar2 = UDS_LogManager::GetInst();
        ::FString::PrintfImpl(&FStack_178,L"X=%3.3f Y=%3.3f Z=%3.3f");
        TStack_158._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&TStack_158,"UDS_RecvMoveBaseProcess::RecvSyncTick",0x25,Yes);
        UDS_LogManager::PrintLog
                  (pUVar2,1,Display,TStack_158.Ptr,0x67,L"OutDeltaZ: %f OutPosition: %s");
        if ((void *)TStack_158._padding_ != (void *)0x0) {
          FMemory::Free((void *)TStack_158._padding_);
        }
        if ((void *)CONCAT44(FStack_178.Data.AllocatorInstance.Data._4_4_,
                             FStack_178.Data.AllocatorInstance.Data._0_4_) != (void *)0x0) {
          FMemory::Free((void *)CONCAT44(FStack_178.Data.AllocatorInstance.Data._4_4_,
                                         FStack_178.Data.AllocatorInstance.Data._0_4_));
        }
      }
    }
  }
  (**(code **)(*(longlong *)this + 0x2d8))(this,param_1);
  return;
}

