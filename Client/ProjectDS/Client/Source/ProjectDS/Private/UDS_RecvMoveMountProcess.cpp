// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 18

// StaticClass @ 14b57ba90

UClass * __cdecl UDS_RecvMoveMountProcess::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_RecvMoveMountProcess.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_RecvMoveMountProcess",
               &Z_Registration_Info_UClass_UDS_RecvMoveMountProcess.InnerSingleton,
               StaticRegisterNativesUDS_RecvMoveMountProcess,0xd0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_RecvMoveMountProcess>,
               InternalVTableHelperCtorCaller<UDS_RecvMoveMountProcess>,local_res8,
               UDS_RecvMoveBaseProcess::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_RecvMoveMountProcess.InnerSingleton;
}

// UDS_RecvMoveMountProcess @ 14b57dca0

UDS_RecvMoveMountProcess * __thiscall
UDS_RecvMoveMountProcess::UDS_RecvMoveMountProcess
          (UDS_RecvMoveMountProcess *this,FVTableHelper *param_1)

{
  UDS_RecvMoveBaseProcess::UDS_RecvMoveBaseProcess((UDS_RecvMoveBaseProcess *)this,param_1);
  *(undefined ***)this = &___7UDS_RecvMoveMountProcess__6B_;
  return this;
}

// ~UDS_RecvMoveMountProcess @ 14b57e420

void __thiscall UDS_RecvMoveMountProcess::~UDS_RecvMoveMountProcess(UDS_RecvMoveMountProcess *this)

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

// GetPrivateStaticClass @ 14b57fed0

UClass * __cdecl UDS_RecvMoveMountProcess::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_RecvMoveMountProcess.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_RecvMoveMountProcess",
               &Z_Registration_Info_UClass_UDS_RecvMoveMountProcess.InnerSingleton,
               StaticRegisterNativesUDS_RecvMoveMountProcess,0xd0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_RecvMoveMountProcess>,
               InternalVTableHelperCtorCaller<UDS_RecvMoveMountProcess>,local_res8,
               UDS_RecvMoveBaseProcess::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_RecvMoveMountProcess.InnerSingleton;
}

// StaticRegisterNativesUDS_RecvMoveMountProcess @ 14b580940

void __cdecl UDS_RecvMoveMountProcess::StaticRegisterNativesUDS_RecvMoveMountProcess(void)

{
  return;
}

// UDS_RecvMoveMountProcess @ 14bb4cd10

UDS_RecvMoveMountProcess * __thiscall
UDS_RecvMoveMountProcess::UDS_RecvMoveMountProcess
          (UDS_RecvMoveMountProcess *this,FObjectInitializer *param_1)

{
  UDS_RecvMoveBaseProcess::UDS_RecvMoveBaseProcess((UDS_RecvMoveBaseProcess *)this,param_1);
  *(undefined ***)this = &___7UDS_RecvMoveMountProcess__6B_;
  return this;
}

// HandleDebugInfo @ 14bb69750

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
UDS_RecvMoveMountProcess::HandleDebugInfo(UDS_RecvMoveMountProcess *this,FDS_NetSyncData *param_1)

{
  double dVar1;
  double dVar2;
  int iVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  long64 lVar6;
  undefined1 auVar7 [16];
  bool bVar8;
  char cVar9;
  FDS_EntityBase *this_00;
  UDS_MovementCore *pUVar10;
  TVector<double> *pTVar11;
  FDS_EntityBase *pFVar12;
  TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> *this_01;
  FWeakObjectPtr *this_02;
  UDS_CharStatusData *pUVar13;
  FDS_StatusInfo *pFVar14;
  FString *pFVar15;
  FString *pFVar16;
  UDS_EntityData *pUVar17;
  wchar_t *pwVar18;
  int iVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  float fVar24;
  int aiStackX_8 [2];
  int iStackX_18;
  int iStackX_20;
  FString FStack_e8;
  FString FStack_d8;
  ulong64 uStack_c8;
  FString FStack_c0;
  TVector<double>_u_0 TStack_a8;
  FString FStack_88;
  TVector<double> aTStack_78 [2];
  
  this_00 = FDS_EntityBase::GetEntityBase((ulong64 *)&this->field_0x70);
  if ((this_00 != (FDS_EntityBase *)0x0) &&
     (bVar8 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> *)&this->field_0x48,
                         (void *)0x0), !bVar8)) {
    bVar8 = UDS_GameInstance::IsNameTagDebug();
    FDS_EntityBase::ShowDebugUI(this_00,bVar8);
    if (bVar8) {
      pUVar10 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x48);
      pTVar11 = UDS_MovementCore::GetActorLocation(pUVar10,aTStack_78);
      TStack_a8._s_0.X = (pTVar11->field0_0x0)._s_0.X;
      TStack_a8._s_0.Y = (pTVar11->field0_0x0)._s_0.Y;
      TStack_a8._s_0.Z = (pTVar11->field0_0x0)._s_0.Z;
      bVar8 = DS_Util::CheckMainPlayerDistance((TVector<double> *)&TStack_a8._s_0);
      if (bVar8) {
        uStack_c8 = *(ulong64 *)&this->field_0x70;
        pUVar10 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x48);
        pTVar11 = UDS_MovementCore::GetVelocity(pUVar10,(TVector<double> *)&TStack_a8._s_0);
        fVar24 = param_1->ServerMoveSpeed;
        dVar1 = (pTVar11->field0_0x0)._s_0.X;
        dVar2 = (pTVar11->field0_0x0)._s_0.Y;
        auVar20._0_8_ = dVar1 * dVar1;
        auVar20._8_8_ = 0;
        auVar21._8_8_ = 0;
        auVar21._0_8_ = dVar2 * dVar2 + auVar20._0_8_;
        auVar21 = sqrtpd(auVar20,auVar21);
        fVar23 = (float)auVar21._0_8_;
        if ((this->field_0x78 == '\x04') &&
           (pFVar12 = FDS_EntityBase::GetMainPlayerEntityBase(true),
           pFVar12 != (FDS_EntityBase *)0x0)) {
          uStack_c8 = pFVar12->EntityID;
          this_01 = (TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> *)
                    (**(code **)(pFVar12->_padding_ + 0x78))(pFVar12);
          bVar8 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals(this_01,(void *)0x0);
          if (!bVar8) {
            this_02 = (FWeakObjectPtr *)(**(code **)(pFVar12->_padding_ + 0x78))(pFVar12,aiStackX_8)
            ;
            pUVar10 = (UDS_MovementCore *)FWeakObjectPtr::Get(this_02);
            pTVar11 = UDS_MovementCore::GetVelocity(pUVar10,(TVector<double> *)&TStack_a8._s_0);
            fVar24 = param_1->ServerMoveSpeed;
            dVar1 = (pTVar11->field0_0x0)._s_0.X;
            dVar2 = (pTVar11->field0_0x0)._s_0.Y;
            auVar22._0_8_ = dVar1 * dVar1;
            auVar22._8_8_ = 0;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = dVar2 * dVar2 + auVar22._0_8_;
            auVar21 = sqrtpd(auVar22,auVar7);
            fVar23 = (float)auVar21._0_8_;
          }
        }
        iVar19 = 0;
        iStackX_20 = 0;
        iStackX_18 = 0;
        aiStackX_8[0] = 0;
        bVar8 = TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr> *)&this->field_0x68,
                           (void *)0x0);
        if (!bVar8) {
          pUVar13 = (UDS_CharStatusData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x68);
          pFVar14 = UDS_CharStatusData::GetStatusInfo(pUVar13,Hp);
          if (pFVar14 != (FDS_StatusInfo *)0x0) {
            iVar19 = pFVar14->CurrentValue;
            iStackX_20 = (int)pFVar14->MaxValue;
          }
          pUVar13 = (UDS_CharStatusData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x68);
          pFVar14 = UDS_CharStatusData::GetStatusInfo(pUVar13,Mp);
          if (pFVar14 != (FDS_StatusInfo *)0x0) {
            iStackX_18 = pFVar14->CurrentValue;
            aiStackX_8[0] = (int)pFVar14->MaxValue;
          }
        }
        uVar4 = (param_1->StateFlags).Packed;
        ::FString::FString(&FStack_e8,"EDS_HeightConditionType");
        pFVar15 = DS_Util::GetEnumToString
                            ((FString *)aTStack_78,&FStack_e8,(ulonglong)((uint)(uVar4 >> 0x23) & 3)
                            );
        cVar9 = (**(code **)(*(longlong *)this + 0x2f0))(this,param_1);
        uVar5 = (param_1->StateFlags).Packed;
        ::FString::FString(&FStack_d8,"EDS_MoveMode");
        pFVar16 = DS_Util::GetEnumToString
                            ((FString *)&TStack_a8._s_0,&FStack_d8,
                             (ulonglong)((uint)(uVar5 >> 4) & 0x7f));
        ::FString::FString(&FStack_88,
                           L"Moving - ID:{1}\nMoveMode: {2}\nBattleMode: {3}\nheightType: {4}\nSpeed {5} {6}"
                          );
        pwVar18 = L"False";
        if (cVar9 == '\x01') {
          pwVar18 = L"True";
        }
        DS_Util::GetFormatString<unsigned___int64,FString,wchar_t_const_*,FString,int,int>
                  (&FStack_c0,&FStack_88,uStack_c8,pFVar16,pwVar18,pFVar15,(int)fVar24,(int)fVar23);
        if (FStack_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_88.Data.AllocatorInstance.Data);
        }
        if (FStack_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_d8.Data.AllocatorInstance.Data);
        }
        if (FStack_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_e8.Data.AllocatorInstance.Data);
        }
        if (this->field_0x78 == '\x05') {
          iVar3 = this_00->SpawnTableID;
          lVar6 = this_00->TableID;
          ::FString::FString(&FStack_e8,L"NpcBaseID:{1}, SpawnID:{2}\n");
          pFVar15 = DS_Util::GetFormatString<__int64,int>(&FStack_d8,&FStack_e8,lVar6,iVar3);
          ::FString::InsertAt(&FStack_c0,0,pFVar15);
          if (FStack_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_d8.Data.AllocatorInstance.Data);
          }
          if (FStack_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_e8.Data.AllocatorInstance.Data);
          }
        }
        ::FString::FString(&FStack_e8,L"HP:{1}/{2}, MP:{3}/{4}\n");
        pFVar15 = DS_Util::GetFormatString<int,int,int,int>
                            (&FStack_d8,&FStack_e8,iVar19,iStackX_20,iStackX_18,aiStackX_8[0]);
        ::FString::InsertAt(&FStack_c0,0,pFVar15);
        if (FStack_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_d8.Data.AllocatorInstance.Data);
        }
        if (FStack_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_e8.Data.AllocatorInstance.Data);
        }
        pUVar17 = (UDS_EntityData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x60);
        UDS_EntityData::SetDebugString(pUVar17,&FStack_c0);
      }
      else {
        pUVar17 = (UDS_EntityData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x60);
        pFVar15 = ::FString::FString(&FStack_e8,"");
        UDS_EntityData::SetDebugString(pUVar17,pFVar15);
        FStack_c0.Data.AllocatorInstance.Data = FStack_e8.Data.AllocatorInstance.Data;
      }
      if (FStack_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_c0.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// Initialize @ 14bb6dd60

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
UDS_RecvMoveMountProcess::Initialize
          (UDS_RecvMoveMountProcess *this,TWeakObjectPtr<AActor,FWeakObjectPtr> param_1)

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

// IsActiveRecvProcess @ 14bb6e1f0

bool __thiscall
UDS_RecvMoveMountProcess::IsActiveRecvProcess
          (UDS_RecvMoveMountProcess *this,FDS_NetSyncData *param_1)

{
  byte bVar1;
  
  bVar1 = (byte)((uint)(param_1->StateFlags).Packed >> 4) & 0x7f;
  if ((bVar1 != 0x1d) && (0x18 < (byte)(bVar1 - 0x1e))) {
    return bVar1 == 0x37;
  }
  return true;
}

// IsStopMove @ 14bb6f990

bool __thiscall
UDS_RecvMoveMountProcess::IsStopMove
          (UDS_RecvMoveMountProcess *this,FDS_NetSyncData *param_1,float param_2)

{
  undefined8 uVar1;
  
  if (((param_1->StateFlags).Packed & 3) == 0) {
    uVar1 = *(undefined8 *)&(param_1->VelocityVector).field0_0x0;
    if ((((double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
          __real_3f1a36e2e0000000) &&
        (uVar1 = *(undefined8 *)((longlong)&(param_1->VelocityVector).field0_0x0 + 8),
        (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
        __real_3f1a36e2e0000000)) &&
       (uVar1 = *(undefined8 *)((longlong)&(param_1->VelocityVector).field0_0x0 + 0x10),
       (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
       __real_3f1a36e2e0000000)) {
      return true;
    }
  }
  return false;
}

// OnChangeMoveMode @ 14bb72080

void __thiscall
UDS_RecvMoveMountProcess::OnChangeMoveMode(UDS_RecvMoveMountProcess *this,EDS_MoveMode param_1)

{
  return;
}

// OnChangedCharState @ 14bb72090

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
UDS_RecvMoveMountProcess::OnChangedCharState
          (UDS_RecvMoveMountProcess *this,TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> param_1,
          FDS_ChangedCharStateInfo *param_2)

{
  FDS_CharStateInfo *pFVar1;
  FDS_EntityBase *pFVar2;
  FWeakObjectPtr local_res10;
  EDS_AbilityDeactivateType local_res18 [8];
  EDS_AbilityTagType local_res20 [8];
  int local_18;
  
  local_res10 = param_1.WeakPtr;
  FWeakObjectPtr::Get(&local_res10);
  pFVar1 = UDS_CharStateData::GetCharStateInfo(&param_2->StateTag);
  local_18 = (int)*(undefined8 *)&pFVar1->DetailState;
  if (local_18 == 0x66) {
    if (param_2->bIsStateTagOn == true) {
      pFVar2 = UDS_RecvProcessBase::GetOwnerEntity((UDS_RecvProcessBase *)this);
      if (pFVar2 != (FDS_EntityBase *)0x0) {
        local_res20[0] = None;
        local_res20[1] = None;
        local_res20[2] = None;
        local_res20[3] = None;
        local_res20[4] = None;
        local_res20[5] = None;
        local_res20[6] = None;
        local_res20[7] = None;
        local_res18[0] = 0x4e;
        FDS_EntityBase::TryActivateAbility
                  (pFVar2,local_res18,(TObjectPtr<UWN_AbilityContext>)local_res20);
        return;
      }
    }
    else {
      pFVar2 = UDS_RecvProcessBase::GetOwnerEntity((UDS_RecvProcessBase *)this);
      if (pFVar2 != (FDS_EntityBase *)0x0) {
        local_res18[0] = Cancel;
        local_res20[0] = 0x4e;
        FDS_EntityBase::DeactivateAbility(pFVar2,local_res20,local_res18);
      }
    }
  }
  return;
}

// OnEnter @ 14bb73310

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
UDS_RecvMoveMountProcess::OnEnter(UDS_RecvMoveMountProcess *this,FDS_NetSyncData *param_1)

{
  undefined8 uVar1;
  bool bVar2;
  FDS_EntityBase *this_00;
  UObject *pUVar3;
  EDS_AbilityTagType local_res8 [8];
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
    local_res8[0] = Mount;
    bVar2 = FDS_EntityBase::IsActiveAbility(this_00,local_res8);
    if (!bVar2) {
      local_res18[0] = 0;
      local_res8[0] = Mount;
      FDS_EntityBase::TryActivateAbility
                (this_00,local_res8,(TObjectPtr<UWN_AbilityContext>)local_res18);
    }
    bVar2 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *)&this->field_0x50,
                       (void *)0x0);
    if (!bVar2) {
      pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x50);
      TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>,FDS_ChangedCharStateInfo),FDefaultDelegateUserPolicy>
      ::AddUObject<UDS_RecvMoveMountProcess>
                ((TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>,FDS_ChangedCharStateInfo),FDefaultDelegateUserPolicy>
                  *)&pUVar3[7].field_0x20,(UDS_RecvMoveMountProcess *)local_res8,(pmf_d16fe1b3)this)
      ;
    }
    bVar2 = TWeakObjectPtr<UDS_EntityData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_EntityData,FWeakObjectPtr> *)&this->field_0x60,
                       (void *)0x0);
    if (!bVar2) {
      pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x60);
      TMulticastDelegateRegistration<void___cdecl(enum_EDS_MoveMode),FDefaultDelegateUserPolicy>::
      AddUObject<UDS_RecvMoveMountProcess>
                (&pUVar3[5].field_0x20,(UDS_RecvMoveMountProcess *)local_res8,(pmf_006b3db9)this);
    }
  }
  return;
}

// OnExit @ 14bb73640

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
UDS_RecvMoveMountProcess::OnExit(UDS_RecvMoveMountProcess *this,FDS_NetSyncData *param_1)

{
  bool bVar1;
  FDS_EntityBase *this_00;
  UObject *pUVar2;
  EDS_AbilityDeactivateType local_res18 [8];
  EDS_AbilityTagType local_res20 [8];
  
  UDS_RecvMoveBaseProcess::OnExit((UDS_RecvMoveBaseProcess *)this,param_1);
  this_00 = UDS_RecvProcessBase::GetOwnerEntity((UDS_RecvProcessBase *)this);
  if ((this_00 != (FDS_EntityBase *)0x0) &&
     (bVar1 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *)&this->field_0x50,
                         (void *)0x0), !bVar1)) {
    local_res18[0] = 0x4a;
    bVar1 = FDS_EntityBase::IsActiveAbility(this_00,local_res18);
    if (bVar1) {
      local_res18[0] = Cancel;
      local_res20[0] = Mount;
      FDS_EntityBase::DeactivateAbility(this_00,local_res20,local_res18);
    }
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x50);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[7].field_0x20,this);
    bVar1 = TWeakObjectPtr<UDS_EntityData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_EntityData,FWeakObjectPtr> *)&this->field_0x60,
                       (void *)0x0);
    if (!bVar1) {
      pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x60);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[5].field_0x20,this);
    }
  }
  return;
}

// PostProcessData @ 14bb7e140

void __thiscall
UDS_RecvMoveMountProcess::PostProcessData
          (UDS_RecvMoveMountProcess *this,FDS_NetSyncData *param_1,NetSyncResponse *param_2)

{
  ulonglong uVar1;
  bool bVar2;
  UDS_EntityData *this_00;
  UDS_CharStateData *this_01;
  EDS_MoveMode EVar3;
  double dVar4;
  EDS_CharDetailState local_res8 [2];
  FWeakObjectPtr local_res20;
  
  UDS_CharInfoData::GetData((ulong64)&local_res20);
  bVar2 = FWeakObjectPtr::IsValid(&local_res20);
  if (!bVar2) {
    return;
  }
  UDS_RecvMoveBaseProcess::PostProcessData((UDS_RecvMoveBaseProcess *)this,param_1,param_2);
  uVar1 = (param_1->StateFlags).Packed;
  if ((uVar1 >> 4 & 0x7f) == 0) {
    if ((uVar1 >> 0xb & 0x7f) == 0) {
      dVar4 = (param_1->PrevPosition).field0_0x0._s_0.X -
              (param_1->ServerPosition).field0_0x0._s_0.X;
      if ((((double)CONCAT44((uint)((ulonglong)dVar4 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar4,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
            __real_3f1a36e2e0000000) &&
          (dVar4 = (param_1->PrevPosition).field0_0x0._s_0.Y -
                   (param_1->ServerPosition).field0_0x0._s_0.Y,
          (double)CONCAT44((uint)((ulonglong)dVar4 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar4,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
          __real_3f1a36e2e0000000)) &&
         (dVar4 = (param_1->PrevPosition).field0_0x0._s_0.Z -
                  (param_1->ServerPosition).field0_0x0._s_0.Z,
         (double)CONCAT44((uint)((ulonglong)dVar4 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar4,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
         __real_3f1a36e2e0000000)) {
        return;
      }
      this_01 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x50);
      local_res8[0] = Battle;
      bVar2 = UDS_CharStateData::HasCharDetailState(this_01,local_res8);
      if (bVar2) {
        this_00 = (UDS_EntityData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x60);
        EVar3 = Walk;
      }
      else {
        this_00 = (UDS_EntityData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x60);
        EVar3 = Run;
      }
      goto LAB_14bb7e257;
    }
    this_00 = (UDS_EntityData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x60);
    EVar3 = (EDS_MoveMode)((uint)(param_1->StateFlags).Packed >> 0xb);
  }
  else {
    this_00 = (UDS_EntityData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x60);
    EVar3 = (EDS_MoveMode)((uint)(param_1->StateFlags).Packed >> 4);
  }
  EVar3 = EVar3 & 0x7f;
LAB_14bb7e257:
  UDS_EntityData::SetMoveMode(this_00,EVar3);
  return;
}

// RecvSyncTick @ 14bb7f870

void __thiscall
UDS_RecvMoveMountProcess::RecvSyncTick
          (UDS_RecvMoveMountProcess *this,FDS_NetSyncData *param_1,float param_2)

{
  bool bVar1;
  UDS_CharStateData *this_00;
  EDS_CharState local_res8;
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
  
  bVar1 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *)&this->field_0x50,
                     (void *)0x0);
  if (!bVar1) {
    this_00 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x50);
    local_res8 = Abnormal;
    bVar1 = UDS_CharStateData::HasCharState(this_00,&local_res8);
    if (!bVar1) {
      bVar1 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> *)&this->field_0x48,
                         (void *)0x0);
      if (!bVar1) {
        UDS_RecvMoveBaseProcess::RecvSyncTick((UDS_RecvMoveBaseProcess *)this,param_1,param_2);
        (**(code **)(*(longlong *)this + 0x308))(this,param_1,param_2);
        (**(code **)(*(longlong *)this + 0x358))(this,param_1,param_2);
        (**(code **)(*(longlong *)this + 0x360))(this,&local_58,param_2,&param_1->EntityDirection);
        local_38 = local_58;
        uStack_34 = uStack_54;
        uStack_30 = uStack_50;
        uStack_2c = uStack_4c;
        local_28 = local_48;
        (**(code **)(*(longlong *)this + 0x330))(this,&local_38);
      }
    }
  }
  return;
}

// StopMoveAction @ 14bb91b90

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

bool __thiscall
UDS_RecvMoveMountProcess::StopMoveAction
          (UDS_RecvMoveMountProcess *this,FDS_NetSyncData *param_1,float param_2)

{
  double dVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  char cVar6;
  bool bVar7;
  FDS_EntityBase *pFVar8;
  UDS_InputData *this_00;
  FWeakObjectPtr local_res20;
  
  pFVar8 = UDS_RecvProcessBase::GetOwnerEntity((UDS_RecvProcessBase *)this);
  if ((pFVar8 == (FDS_EntityBase *)0x0) ||
     (bVar5 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->field_0x48), !bVar5)) {
    bVar5 = false;
  }
  else {
    cVar6 = (**(code **)(*(longlong *)this + 0x370))(this,param_1,param_2);
    bVar5 = cVar6 == '\x01';
    if (bVar5) {
      uVar2 = *(undefined4 *)((longlong)&(param_1->PrevVelocityVector).field0_0x0 + 4);
      uVar3 = *(undefined4 *)((longlong)&(param_1->PrevVelocityVector).field0_0x0 + 8);
      uVar4 = *(undefined4 *)((longlong)&(param_1->PrevVelocityVector).field0_0x0 + 0xc);
      dVar1 = (param_1->PrevVelocityVector).field0_0x0._s_0.Z;
      *(undefined4 *)&(param_1->VelocityVector).field0_0x0 =
           *(undefined4 *)&(param_1->PrevVelocityVector).field0_0x0;
      *(undefined4 *)((longlong)&(param_1->VelocityVector).field0_0x0 + 4) = uVar2;
      *(undefined4 *)((longlong)&(param_1->VelocityVector).field0_0x0 + 8) = uVar3;
      *(undefined4 *)((longlong)&(param_1->VelocityVector).field0_0x0 + 0xc) = uVar4;
      (param_1->VelocityVector).field0_0x0._s_0.Z = dVar1;
    }
    (**(code **)(pFVar8->_padding_ + 0x1b8))(pFVar8);
    bVar7 = FWeakObjectPtr::IsValid(&local_res20);
    if (bVar7) {
      this_00 = (UDS_InputData *)FWeakObjectPtr::Get(&local_res20);
      if (bVar5) {
        UDS_InputData::SetIsActiveInput(this_00,false);
      }
      else {
        UDS_InputData::SetIsActiveInput(this_00,true);
      }
    }
  }
  return bVar5;
}

// UpdateVelocity @ 14bb98e20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
UDS_RecvMoveMountProcess::UpdateVelocity
          (UDS_RecvMoveMountProcess *this,FDS_NetSyncData *param_1,float param_2)

{
  undefined1 *puVar1;
  double dVar2;
  TWeakObjectPtr<AActor,FWeakObjectPtr> TVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  bool bVar12;
  UDS_CharStateData *pUVar13;
  UDS_MovementCore *this_00;
  double *pdVar14;
  FDS_EntityBase *pFVar15;
  longlong lVar16;
  FWeakObjectPtr *pFVar17;
  UObject *pUVar18;
  double *pdVar19;
  float fVar20;
  float fVar21;
  double dVar22;
  double dVar23;
  undefined8 uVar24;
  double dVar25;
  undefined4 in_XMM2_Db;
  float fVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  double dStackX_8;
  EDS_CharDetailState aEStackX_18 [2];
  FHitResult *in_stack_fffffffffffffda8;
  double dStack_238;
  double dStack_230;
  double dStack_228;
  TVector<double>_u_0 TStack_218;
  TVector<double>_u_0 TStack_1f8;
  undefined1 auStack_1d8 [68];
  undefined4 uStack_194;
  double dStack_160;
  double dStack_140;
  double dStack_138;
  double dStack_130;
  int iStack_f4;
  FName FStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  
  bVar11 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                     ((TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *)&this->field_0x50,
                      (void *)0x0);
  if (!bVar11) {
    pUVar13 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x50);
    aEStackX_18[0] = Jump1;
    bVar11 = UDS_CharStateData::HasCharDetailState(pUVar13,aEStackX_18);
    if (!bVar11) {
      pUVar13 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x50);
      aEStackX_18[0] = Jump2;
      bVar11 = UDS_CharStateData::HasCharDetailState(pUVar13,aEStackX_18);
      if (!bVar11) {
        pUVar13 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x50);
        aEStackX_18[0] = Falling;
        bVar11 = UDS_CharStateData::HasCharDetailState(pUVar13,aEStackX_18);
        if (!bVar11) {
          *(undefined4 *)&this->field_0xb4 = 0;
          this->field_0xb0 = 0;
          goto LAB_14bb986ad;
        }
      }
    }
    *(float *)&this->field_0xb4 = *(float *)&this->field_0xb4 - param_2 * ___real_44dac000;
  }
LAB_14bb986ad:
  (**(code **)(*(longlong *)this + 0x338))(this,&dStack_238);
  dVar22 = __real_3f1a36e2e0000000;
  uVar10 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar9 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar8 = __real_3ff0000000000000;
  dVar25 = (param_1->VelocityVector).field0_0x0._s_0.X;
  dVar23 = 0.0;
  if (((__real_3f1a36e2e0000000 <
        (double)CONCAT44((uint)((ulonglong)dVar25 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar25,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) ||
      (uVar24 = *(undefined8 *)((longlong)&(param_1->VelocityVector).field0_0x0 + 8),
      __real_3f1a36e2e0000000 <
      (double)CONCAT44((uint)((ulonglong)uVar24 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       (uint)uVar24 & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
     (uVar24 = *(undefined8 *)((longlong)&(param_1->VelocityVector).field0_0x0 + 0x10),
     __real_3f1a36e2e0000000 <
     (double)CONCAT44((uint)((ulonglong)uVar24 >> 0x20) &
                      __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                      (uint)uVar24 & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) {
    uVar27 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
    uVar28 = (undefined4)
             ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
    dVar2 = (param_1->VelocityVector).field0_0x0._s_0.Y;
    dVar6 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                             UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
    auVar7._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    auVar7._0_8_ = dVar6;
    auVar7._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    dVar5 = dVar25 * dVar25 + dVar2 * dVar2;
    if (dVar5 == __real_3ff0000000000000) {
      if ((param_1->VelocityVector).field0_0x0._s_0.Z == 0.0) {
        dVar2 = *(double *)((longlong)&(param_1->VelocityVector).field0_0x0 + 8);
        uVar24 = (param_1->VelocityVector).field0_0x0._s_0.Z;
        dVar6 = (param_1->VelocityVector).field0_0x0._s_0.X;
      }
      else {
LAB_14bb987e6:
        TStack_218._s_0.Z = 0.0;
        uVar24 = 0.0;
        dVar6 = dVar25;
      }
    }
    else {
      if (__real_3e45798ee0000000 <= dVar5) {
        dStackX_8 = __real_3ff0000000000000 / SQRT(dVar5);
        dVar25 = dVar25 * dStackX_8;
        dVar2 = dVar2 * dStackX_8;
        goto LAB_14bb987e6;
      }
      dVar2 = auVar7._8_8_;
      uVar24 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    }
    if ((((double)CONCAT44((uint)((ulonglong)*(undefined8 *)&this->field_0xb8 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           (uint)*(undefined8 *)&this->field_0xb8 &
                           (uint)__xmm_7fffffffffffffff7fffffffffffffff) <= __real_3f1a36e2e0000000)
        && ((double)CONCAT44((uint)((ulonglong)*(undefined8 *)&this->field_0xc0 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             (uint)*(undefined8 *)&this->field_0xc0 &
                             (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
            __real_3f1a36e2e0000000)) &&
       ((double)CONCAT44((uint)((ulonglong)*(undefined8 *)&this->field_0xc8 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         (uint)*(undefined8 *)&this->field_0xc8 &
                         (uint)__xmm_7fffffffffffffff7fffffffffffffff) <= __real_3f1a36e2e0000000))
    {
      auVar4._8_4_ = SUB84(dVar2,0);
      auVar4._0_8_ = dVar6;
      auVar4._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
      *(undefined1 (*) [16])&this->field_0xb8 = auVar4;
      *(undefined8 *)&this->field_0xc8 = uVar24;
      uVar27 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
      uVar28 = (undefined4)
               ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
    }
  }
  else {
    uVar24 = CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                      UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
    *(ulonglong *)&this->field_0xb8 =
         CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                  UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
    *(undefined8 *)&this->field_0xc0 = uVar24;
    *(double *)&this->field_0xc8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar27 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
    uVar28 = (undefined4)
             ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
  }
  pdVar19 = &(param_1->VelocityVector).field0_0x0._s_0.Y;
  pdVar14 = &(param_1->VelocityVector).field0_0x0._s_0.Z;
  dVar25 = (param_1->VelocityVector).field0_0x0._s_0.X;
  puVar1 = &this->field_0x98;
  if (((((double)CONCAT44((uint)((ulonglong)dVar25 >> 0x20) & uVar10,SUB84(dVar25,0) & uVar9) <=
         dVar22) &&
       (dVar2 = *pdVar19,
       (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) & uVar10,SUB84(dVar2,0) & uVar9) <= dVar22)
       ) && (dVar2 = *pdVar14,
            (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) & uVar10,SUB84(dVar2,0) & uVar9) <=
            dVar22)) ||
     ((((double)CONCAT44((uint)((ulonglong)*(undefined8 *)puVar1 >> 0x20) & uVar10,
                         (uint)*(undefined8 *)puVar1 & uVar9) <= dVar22 &&
       ((double)CONCAT44((uint)((ulonglong)*(undefined8 *)&this->field_0xa0 >> 0x20) & uVar10,
                         (uint)*(undefined8 *)&this->field_0xa0 & uVar9) <= dVar22)) &&
      ((double)CONCAT44((uint)((ulonglong)*(undefined8 *)&this->field_0xa8 >> 0x20) & uVar10,
                        (uint)*(undefined8 *)&this->field_0xa8 & uVar9) <= dVar22)))) {
    bVar11 = false;
  }
  else {
    dVar2 = *pdVar19;
    dVar5 = dVar2 * dVar2 + dVar25 * dVar25;
    if (dVar5 == dVar8) {
      if (*pdVar14 == 0.0) {
        dVar25 = (param_1->VelocityVector).field0_0x0._s_0.X;
        dVar2 = (param_1->VelocityVector).field0_0x0._s_0.Y;
        dVar23 = (param_1->VelocityVector).field0_0x0._s_0.Z;
        TStack_218._s_0.Z = dVar23;
      }
    }
    else if (__real_3e45798ee0000000 <= dVar5) {
      dStackX_8 = dVar8 / SQRT(dVar5);
      dVar25 = dVar25 * dStackX_8;
      dVar2 = dVar2 * dStackX_8;
    }
    else {
      TStack_218._s_0.Z = (double)CONCAT44(uVar28,uVar27);
      dVar23 = (double)CONCAT44(uVar28,uVar27);
      dVar2 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                               UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
      dVar25 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                                UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
    }
    dVar5 = *(double *)&this->field_0xb8;
    if (((dVar22 < (double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) & uVar10,SUB84(dVar5,0) & uVar9
                                   )) ||
        (dVar22 < (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&this->field_0xc0 >> 0x20) &
                                   uVar10,(uint)*(undefined8 *)&this->field_0xc0 & uVar9))) ||
       (dVar22 < (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&this->field_0xc8 >> 0x20) &
                                  uVar10,(uint)*(undefined8 *)&this->field_0xc8 & uVar9))) {
      bVar11 = (float)(dVar2 * *(double *)&this->field_0xc0 + dVar5 * dVar25 +
                      dVar23 * *(double *)&this->field_0xc8) < __real_3f34fdf4;
      if (bVar11) {
        UDS_RecvMoveBaseProcess::AdjustVelocityOnDirectionChange
                  ((UDS_RecvMoveBaseProcess *)this,param_1,(TVector<double> *)puVar1,param_2);
      }
    }
    else {
      bVar11 = false;
    }
  }
  fVar26 = __real_42700000;
  fVar21 = __real_3f800000;
  fVar20 = param_2;
  if (param_2 <= __real_38d1b717) {
    fVar20 = __real_38d1b717;
  }
  auStack_1d8._4_4_ = 1000.0;
  fVar20 = __real_3f800000 / fVar20;
  auStack_1d8._0_4_ = __real_3e800000;
  if ((__real_41f00000 < fVar20) && (auStack_1d8._0_4_ = __real_3dcccccd, fVar20 < __real_42700000))
  {
    auStack_1d8._0_4_ = __real_3e800000 - (fVar20 - __real_41f00000) * __real_3ba3d70a;
  }
  auStack_1d8._12_8_ = ___xmm_3c23d70a3f80000041700000459c4000;
  auStack_1d8._20_8_ = _UNK_15278a2c8;
  auStack_1d8._8_4_ = 3.4028235e+38;
  bVar12 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->field_0x48);
  if (bVar12) {
    this_00 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x48);
    auStack_1d8._4_4_ = UDS_MovementCore::GetMaxMoveSpeed(this_00);
    auStack_1d8._4_4_ = (float)auStack_1d8._4_4_ * __real_3f99999a;
  }
  dVar25 = dStack_228;
  if (bVar11) {
    auStack_1d8._0_4_ = (float)auStack_1d8._0_4_ * __real_3f000000;
  }
  fVar20 = fVar21 / param_2;
  if (fVar26 <= fVar21 / param_2) {
    fVar20 = fVar26;
  }
  dVar23 = (double)(__real_43960000 / fVar20);
  dVar22 = dStack_228 - (param_1->ServerPosition).field0_0x0._s_0.Z;
  if (((dVar23 < (double)CONCAT44((uint)((ulonglong)dVar22 >> 0x20) & uVar10,SUB84(dVar22,0) & uVar9
                                 )) ||
      (dVar22 = dStack_238 - (param_1->ServerPosition).field0_0x0._s_0.X,
      dVar23 < (double)CONCAT44((uint)((ulonglong)dVar22 >> 0x20) & uVar10,SUB84(dVar22,0) & uVar9))
      ) || (dVar22 = dStack_230 - (param_1->ServerPosition).field0_0x0._s_0.Y,
           dVar23 < (double)CONCAT44((uint)((ulonglong)dVar22 >> 0x20) & uVar10,
                                     SUB84(dVar22,0) & uVar9))) {
    lVar16 = *(longlong *)this;
LAB_14bb98b69:
    (**(code **)(lVar16 + 0x310))(this,0x82,0x83);
    TStack_1f8._s_0.X = (param_1->ServerPosition).field0_0x0._s_0.X;
    TStack_1f8._s_0.Y = (param_1->ServerPosition).field0_0x0._s_0.Y;
    in_stack_fffffffffffffda8 = (FHitResult *)auStack_1d8;
    TStack_1f8._s_0.Z = (param_1->ServerPosition).field0_0x0._s_0.Z;
    TStack_218._s_0.X = dStack_238;
    TStack_218._s_0.Y = dStack_230;
    TStack_218._s_0.Z = dStack_228;
    pdVar14 = (double *)
              (**(code **)(*(longlong *)this + 0x368))
                        (this,auStack_1d8 + 0x20,&TStack_218,&TStack_1f8,in_stack_fffffffffffffda8,
                         param_2,puVar1);
    dStack_238 = *pdVar14;
    dStack_230 = pdVar14[1];
    dStack_228 = pdVar14[2];
  }
  else {
    lVar16 = *(longlong *)this;
    if (__real_4079000000000000 <
        *(double *)&this->field_0xa0 * *(double *)&this->field_0xa0 +
        *(double *)puVar1 * *(double *)puVar1 +
        *(double *)&this->field_0xa8 * *(double *)&this->field_0xa8) goto LAB_14bb98b69;
    (**(code **)(lVar16 + 0x310))(this,0x83,0x82);
  }
  pFVar15 = UDS_RecvProcessBase::GetOwnerEntity((UDS_RecvProcessBase *)this);
  if (pFVar15 == (FDS_EntityBase *)0x0) {
    return;
  }
  if ((__real_322bcc77 <
       (float)(*(uint *)&this->field_0xb4 & __xmm_7fffffff7fffffff7fffffff7fffffff)) &&
     (lVar16 = (**(code **)(pFVar15->_padding_ + 0x1d8))(pFVar15), lVar16 == 0)) {
    memset(auStack_1d8 + 0x40,0,0x100);
    auStack_1d8._61_2_ = 0;
    FStack_e0.ComparisonIndex.Value = 0;
    FStack_e0.Number = 0;
    uStack_d8 = 0;
    auStack_1d8[0x3f] = 0;
    TStack_1f8._s_0.X = dStack_238;
    TStack_218._s_0.X = dStack_238;
    TStack_218._s_0.Y = dStack_230;
    auStack_1d8._48_8_ = 0;
    auStack_1d8._56_4_ = 0xffffffff;
    auStack_1d8[0x3c] = 0;
    uStack_c8 = 0xffffffff;
    uStack_194 = 0x3f800000;
    TStack_1f8._s_0.Y = dStack_230;
    uStack_d0 = 0;
    iStack_f4 = -1;
    TStack_218._s_0.Z = dStack_228;
    TStack_1f8._s_0.Z = dStack_228 - ___real_40dd4c0000000000;
    pFVar17 = (FWeakObjectPtr *)(**(code **)(pFVar15->_padding_ + 0x160))(pFVar15,&dStackX_8);
    TVar3.WeakPtr.ObjectIndex = *(int *)&this->field_0x40;
    TVar3.WeakPtr.ObjectSerialNumber = *(int *)&this->field_0x44;
    in_stack_fffffffffffffda8 = (FHitResult *)(auStack_1d8 + 0x40);
    bVar11 = DS_Util::GetNpcLocationSweepTest
                       ((TVector<double> *)&TStack_218._s_0,(TVector<double> *)&TStack_1f8._s_0,
                        TVar3,(TWeakObjectPtr<UCapsuleComponent,FWeakObjectPtr>)*pFVar17,
                        in_stack_fffffffffffffda8);
    dVar23 = dStack_228;
    if (!bVar11) goto LAB_14bb98dae;
    dVar22 = dStack_138 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y +
             dStack_140 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X +
             dStack_130 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
    dVar23 = __real_bff0000000000000;
    if ((__real_bff0000000000000 <= dVar22) && (dVar23 = dVar22, dVar8 <= dVar22)) {
      dVar23 = dVar8;
    }
    pUVar18 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x48);
    dVar23 = acos(dVar23);
    fVar26 = (float)dVar23 * __real_42652ee0;
    fVar21 = (float)(**(code **)(*(longlong *)pUVar18 + 0x480))(pUVar18);
    dVar23 = dStack_228;
    if (fVar21 <= fVar26) goto LAB_14bb98dae;
    dVar23 = (double)(param_2 * *(float *)&this->field_0xb4 + (float)dVar25);
    dStack_228 = (double)(float)((double)pFVar15->ScaledCapsuleHalfHeight + dStack_160);
    if (dStack_228 <= dVar23) goto LAB_14bb98dae;
  }
  this->field_0xb0 = 1;
  dVar23 = dStack_228;
LAB_14bb98dae:
  dStack_228 = dVar23;
  TStack_218._s_0.X = dStack_238;
  TStack_218._s_0.Y = dStack_230;
  TStack_218._s_0.Z = dStack_228;
  (**(code **)(*(longlong *)this + 800))
            (this,param_1,CONCAT44(in_XMM2_Db,param_2),&TStack_218,
             (ulonglong)in_stack_fffffffffffffda8 & 0xffffffffffffff00);
  return;
}

