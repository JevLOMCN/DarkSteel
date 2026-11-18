// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 17

// StaticClass @ 14b57aaa0

UClass * __cdecl UDS_RecvProcessBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_RecvProcessBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_RecvProcessBase",
               &Z_Registration_Info_UClass_UDS_RecvProcessBase.InnerSingleton,
               StaticRegisterNativesUDS_RecvProcessBase,0x90,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_RecvProcessBase>,
               InternalVTableHelperCtorCaller<UDS_RecvProcessBase>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_RecvProcessBase.InnerSingleton;
}

// UDS_RecvProcessBase @ 14b57df20

UDS_RecvProcessBase * __thiscall
UDS_RecvProcessBase::UDS_RecvProcessBase(UDS_RecvProcessBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_RecvProcessBase__6B_;
  *(undefined8 *)&this->DelayedChangedMoveModeEvent = 0;
  *(undefined8 *)&(this->DelayedChangedMoveModeEvent).field_0x8 = 0;
  *(undefined4 *)&(this->DelayedChangedMoveModeEvent).field_0x10 = 0;
  (this->OwnerActor).WeakPtr = (FWeakObjectPtr)0x0;
  (this->OwnerMovementCore).WeakPtr = (FWeakObjectPtr)0x0;
  (this->OwnerCharStateData).WeakPtr = (FWeakObjectPtr)0x0;
  (this->OwnerCharInfoData).WeakPtr = (FWeakObjectPtr)0x0;
  (this->OwnerEntityData).WeakPtr = (FWeakObjectPtr)0x0;
  (this->OwnerCharStatusData).WeakPtr = (FWeakObjectPtr)0x0;
  this->OwnerEntityID = 0;
  this->OwnerEntityType = None;
  this->OwnerTableID = 0;
  return this;
}

// ~UDS_RecvProcessBase @ 14b57e680

void __thiscall UDS_RecvProcessBase::~UDS_RecvProcessBase(UDS_RecvProcessBase *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDS_RecvProcessBase__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->DelayedChangedMoveModeEvent);
  pvVar1 = *(void **)&(this->DelayedChangedMoveModeEvent).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->DelayedChangedMoveModeEvent);
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14b580410

UClass * __cdecl UDS_RecvProcessBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_RecvProcessBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_RecvProcessBase",
               &Z_Registration_Info_UClass_UDS_RecvProcessBase.InnerSingleton,
               StaticRegisterNativesUDS_RecvProcessBase,0x90,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_RecvProcessBase>,
               InternalVTableHelperCtorCaller<UDS_RecvProcessBase>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_RecvProcessBase.InnerSingleton;
}

// StaticRegisterNativesUDS_RecvProcessBase @ 14b5809b0

void __cdecl UDS_RecvProcessBase::StaticRegisterNativesUDS_RecvProcessBase(void)

{
  return;
}

// UDS_RecvProcessBase @ 14bba8dd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_RecvProcessBase * __thiscall
UDS_RecvProcessBase::UDS_RecvProcessBase(UDS_RecvProcessBase *this,FObjectInitializer *param_1)

{
  FString *pFVar1;
  size_t sVar2;
  UClass *pUVar3;
  UEnum *this_00;
  FName *pFVar4;
  long64 lVar5;
  UDS_LogManager *pUVar6;
  longlong lVar7;
  ForAnyElementType FVar8;
  int iVar9;
  undefined1 auStackY_1d8 [32];
  FString local_198;
  TStringView<wchar_t> local_188;
  ForAnyElementType local_178;
  int local_170;
  int local_16c;
  FString local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_RecvProcessBase__6B_;
  *(undefined8 *)&this->DelayedChangedMoveModeEvent = 0;
  *(undefined8 *)&(this->DelayedChangedMoveModeEvent).field_0x8 = 0;
  iVar9 = 0;
  *(undefined4 *)&(this->DelayedChangedMoveModeEvent).field_0x10 = 0;
  (this->OwnerActor).WeakPtr = (FWeakObjectPtr)0x0;
  (this->OwnerMovementCore).WeakPtr = (FWeakObjectPtr)0x0;
  (this->OwnerCharStateData).WeakPtr = (FWeakObjectPtr)0x0;
  (this->OwnerCharInfoData).WeakPtr = (FWeakObjectPtr)0x0;
  (this->OwnerEntityData).WeakPtr = (FWeakObjectPtr)0x0;
  (this->OwnerCharStatusData).WeakPtr = (FWeakObjectPtr)0x0;
  this->OwnerEntityID = 0;
  this->OwnerEntityType = None;
  this->OwnerTableID = 0;
  local_198.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_198.Data.ArrayNum = 0;
  local_198.Data.ArrayMax = 0;
  if (this->_padding_ != 0) {
    local_188.DataPtr = *(wchar_t **)(this->_padding_ + 0x18);
    ::FName::ToString((FName *)&local_188,&local_198);
  }
  pFVar1 = ::FString::Replace(&local_198,&local_168,L"DS_",L"",IgnoreCase);
  if (&local_198 != pFVar1) {
    if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.Data.AllocatorInstance.Data);
    }
    local_198.Data.AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_198.Data.ArrayNum = (pFVar1->Data).ArrayNum;
    local_198.Data.ArrayMax = (pFVar1->Data).ArrayMax;
    (pFVar1->Data).ArrayNum = 0;
    (pFVar1->Data).ArrayMax = 0;
  }
  if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_168,"EDS_SyncRecvType");
  FVar8.Data = local_198.Data.AllocatorInstance.Data;
  lVar7 = (longlong)local_198.Data.ArrayNum;
  local_178.Data = (FScriptContainerElement *)0x0;
  local_170 = local_198.Data.ArrayNum;
  if (local_198.Data.ArrayNum == 0) {
    local_16c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_198.Data.ArrayNum,0,&local_178,local_198.Data.ArrayNum,&local_16c);
    memcpy(local_178.Data,FVar8.Data,lVar7 * 2);
  }
  if (local_168.Data.ArrayNum == 0) {
    local_188.DataPtr = L"";
  }
  else {
    local_188.DataPtr = (wchar_t *)local_168.Data.AllocatorInstance.Data;
    if (local_168.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) goto LAB_14bba8f73;
  }
  sVar2 = wcslen(local_188.DataPtr);
  iVar9 = (int)sVar2;
LAB_14bba8f73:
  local_188.Size = iVar9;
  pUVar3 = Z_Construct_UClass_UEnum_NoRegister();
  this_00 = (UEnum *)StaticFindFirstObjectSafe(pUVar3,&local_188,None,NoLogging,(wchar_t *)0x0);
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_170 != 0) {
    FVar8.Data = local_178.Data;
  }
  pFVar4 = ::FName::FName((FName *)&local_188,(wchar_t *)FVar8.Data);
  lVar5 = UEnum::GetValueByName(this_00,*pFVar4,None);
  if (local_178.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data);
  }
  this->SyncRecvType = (EDS_SyncRecvType)lVar5;
  if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Data.AllocatorInstance.Data);
  }
  if ((this->SyncRecvType == ~RecvProcessBase) &&
     (pUVar6 = UDS_LogManager::GetInst(), pUVar6 != (UDS_LogManager *)0x0)) {
    pUVar6 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_RecvProcessBase::UDS_RecvProcessBase",0x28,Yes);
    UDS_LogManager::PrintLog(pUVar6,1,Warning,local_158.Ptr,0x25,L"Null EDS_SyncRecvType");
    if ((void *)local_158._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_158._padding_);
    }
  }
  if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.Data.AllocatorInstance.Data);
  }
  return this;
}

// GetOwnerEntity @ 14bbbcf90

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

FDS_EntityBase * __thiscall UDS_RecvProcessBase::GetOwnerEntity(UDS_RecvProcessBase *this)

{
  FDS_EntityBase *pFVar1;
  
  pFVar1 = FDS_EntityBase::GetEntityBase(&this->OwnerEntityID);
  return pFVar1;
}

// HandleDebugInfo @ 14bbbf200

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
UDS_RecvProcessBase::HandleDebugInfo(UDS_RecvProcessBase *this,FDS_NetSyncData *param_1)

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
  int local_res8 [2];
  int local_res18;
  int local_res20;
  FString local_e8;
  FString local_d8;
  ulong64 local_c8;
  FString local_c0;
  TVector<double>_u_0 local_a8;
  FString local_88;
  TVector<double> local_78 [2];
  
  this_00 = FDS_EntityBase::GetEntityBase(&this->OwnerEntityID);
  if ((this_00 != (FDS_EntityBase *)0x0) &&
     (bVar8 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                        (&this->OwnerMovementCore,(void *)0x0), !bVar8)) {
    bVar8 = UDS_GameInstance::IsNameTagDebug();
    FDS_EntityBase::ShowDebugUI(this_00,bVar8);
    if (bVar8) {
      pUVar10 = (UDS_MovementCore *)FWeakObjectPtr::Get(&(this->OwnerMovementCore).WeakPtr);
      pTVar11 = UDS_MovementCore::GetActorLocation(pUVar10,local_78);
      local_a8._s_0.X = (pTVar11->field0_0x0)._s_0.X;
      local_a8._s_0.Y = (pTVar11->field0_0x0)._s_0.Y;
      local_a8._s_0.Z = (pTVar11->field0_0x0)._s_0.Z;
      bVar8 = DS_Util::CheckMainPlayerDistance((TVector<double> *)&local_a8._s_0);
      if (bVar8) {
        local_c8 = this->OwnerEntityID;
        pUVar10 = (UDS_MovementCore *)FWeakObjectPtr::Get(&(this->OwnerMovementCore).WeakPtr);
        pTVar11 = UDS_MovementCore::GetVelocity(pUVar10,(TVector<double> *)&local_a8._s_0);
        fVar24 = param_1->ServerMoveSpeed;
        dVar1 = (pTVar11->field0_0x0)._s_0.X;
        dVar2 = (pTVar11->field0_0x0)._s_0.Y;
        auVar20._0_8_ = dVar1 * dVar1;
        auVar20._8_8_ = 0;
        auVar21._8_8_ = 0;
        auVar21._0_8_ = dVar2 * dVar2 + auVar20._0_8_;
        auVar21 = sqrtpd(auVar20,auVar21);
        fVar23 = (float)auVar21._0_8_;
        if ((this->OwnerEntityType == DummyCharacter) &&
           (pFVar12 = FDS_EntityBase::GetMainPlayerEntityBase(true),
           pFVar12 != (FDS_EntityBase *)0x0)) {
          local_c8 = pFVar12->EntityID;
          this_01 = (TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> *)
                    (**(code **)(pFVar12->_padding_ + 0x78))(pFVar12);
          bVar8 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals(this_01,(void *)0x0);
          if (!bVar8) {
            this_02 = (FWeakObjectPtr *)(**(code **)(pFVar12->_padding_ + 0x78))(pFVar12,local_res8)
            ;
            pUVar10 = (UDS_MovementCore *)FWeakObjectPtr::Get(this_02);
            pTVar11 = UDS_MovementCore::GetVelocity(pUVar10,(TVector<double> *)&local_a8._s_0);
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
        local_res20 = 0;
        local_res18 = 0;
        local_res8[0] = 0;
        bVar8 = TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr>::UEOpEquals
                          (&this->OwnerCharStatusData,(void *)0x0);
        if (!bVar8) {
          pUVar13 = (UDS_CharStatusData *)FWeakObjectPtr::Get(&(this->OwnerCharStatusData).WeakPtr);
          pFVar14 = UDS_CharStatusData::GetStatusInfo(pUVar13,Hp);
          if (pFVar14 != (FDS_StatusInfo *)0x0) {
            iVar19 = pFVar14->CurrentValue;
            local_res20 = (int)pFVar14->MaxValue;
          }
          pUVar13 = (UDS_CharStatusData *)FWeakObjectPtr::Get(&(this->OwnerCharStatusData).WeakPtr);
          pFVar14 = UDS_CharStatusData::GetStatusInfo(pUVar13,Mp);
          if (pFVar14 != (FDS_StatusInfo *)0x0) {
            local_res18 = pFVar14->CurrentValue;
            local_res8[0] = (int)pFVar14->MaxValue;
          }
        }
        uVar4 = (param_1->StateFlags).Packed;
        ::FString::FString(&local_e8,"EDS_HeightConditionType");
        pFVar15 = DS_Util::GetEnumToString
                            ((FString *)local_78,&local_e8,(ulonglong)((uint)(uVar4 >> 0x23) & 3));
        cVar9 = (**(code **)(this->_padding_ + 0x2f0))(this,param_1);
        uVar5 = (param_1->StateFlags).Packed;
        ::FString::FString(&local_d8,"EDS_MoveMode");
        pFVar16 = DS_Util::GetEnumToString
                            ((FString *)&local_a8._s_0,&local_d8,
                             (ulonglong)((uint)(uVar5 >> 4) & 0x7f));
        ::FString::FString(&local_88,
                           L"Moving - ID:{1}\nMoveMode: {2}\nBattleMode: {3}\nheightType: {4}\nSpeed {5} {6}"
                          );
        pwVar18 = L"False";
        if (cVar9 == '\x01') {
          pwVar18 = L"True";
        }
        DS_Util::GetFormatString<unsigned___int64,FString,wchar_t_const_*,FString,int,int>
                  (&local_c0,&local_88,local_c8,pFVar16,pwVar18,pFVar15,(int)fVar24,(int)fVar23);
        if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
        if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.Data.AllocatorInstance.Data);
        }
        if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e8.Data.AllocatorInstance.Data);
        }
        if (this->OwnerEntityType == NPC) {
          iVar3 = this_00->SpawnTableID;
          lVar6 = this_00->TableID;
          ::FString::FString(&local_e8,L"NpcBaseID:{1}, SpawnID:{2}\n");
          pFVar15 = DS_Util::GetFormatString<__int64,int>(&local_d8,&local_e8,lVar6,iVar3);
          ::FString::InsertAt(&local_c0,0,pFVar15);
          if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d8.Data.AllocatorInstance.Data);
          }
          if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_e8.Data.AllocatorInstance.Data);
          }
        }
        ::FString::FString(&local_e8,L"HP:{1}/{2}, MP:{3}/{4}\n");
        pFVar15 = DS_Util::GetFormatString<int,int,int,int>
                            (&local_d8,&local_e8,iVar19,local_res20,local_res18,local_res8[0]);
        ::FString::InsertAt(&local_c0,0,pFVar15);
        if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.Data.AllocatorInstance.Data);
        }
        if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e8.Data.AllocatorInstance.Data);
        }
        pUVar17 = (UDS_EntityData *)FWeakObjectPtr::Get(&(this->OwnerEntityData).WeakPtr);
        UDS_EntityData::SetDebugString(pUVar17,&local_c0);
      }
      else {
        pUVar17 = (UDS_EntityData *)FWeakObjectPtr::Get(&(this->OwnerEntityData).WeakPtr);
        pFVar15 = ::FString::FString(&local_e8,"");
        UDS_EntityData::SetDebugString(pUVar17,pFVar15);
        local_c0.Data.AllocatorInstance.Data = local_e8.Data.AllocatorInstance.Data;
      }
      if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c0.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// HasManualAnimStateTag @ 14bbbfbc0

bool __thiscall
UDS_RecvProcessBase::HasManualAnimStateTag(UDS_RecvProcessBase *this,FDS_NetSyncData *param_1)

{
  return false;
}

// Initialize @ 14bbc0410

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
UDS_RecvProcessBase::Initialize
          (UDS_RecvProcessBase *this,TWeakObjectPtr<AActor,FWeakObjectPtr> param_1)

{
  EDS_EntityType EVar1;
  ulong64 uVar2;
  FDS_EntityBase *pFVar3;
  FWeakObjectPtr *pFVar4;
  TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> TVar5;
  TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr> TVar6;
  TWeakObjectPtr<UDS_EntityData,FWeakObjectPtr> TVar7;
  TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr> TVar8;
  undefined1 local_res18 [16];
  
  pFVar3 = FDS_EntityBase::GetEntityBaseFromActor(param_1);
  if (pFVar3 != (FDS_EntityBase *)0x0) {
    this->OwnerEntityID = pFVar3->EntityID;
    EVar1 = pFVar3->EntityType;
    this->OwnerEntityType = EVar1;
    this->OwnerTableID = pFVar3->TableID;
    if (EVar1 == DummyCharacter) {
      FDS_EntityBase::GetMainPlayerEntityBase(true);
    }
    pFVar4 = (FWeakObjectPtr *)(**(code **)(pFVar3->_padding_ + 0x150))(pFVar3,local_res18);
    (this->OwnerActor).WeakPtr = *pFVar4;
    pFVar4 = (FWeakObjectPtr *)(**(code **)(pFVar3->_padding_ + 0x78))(pFVar3,local_res18);
    (this->OwnerMovementCore).WeakPtr = *pFVar4;
    TVar5 = UDS_CharStateData::GetData((ulong64)local_res18);
                    /* WARNING: Load size is inaccurate */
    (this->OwnerCharStateData).WeakPtr = *TVar5.WeakPtr;
    TVar6 = UDS_CharInfoData::GetData((ulong64)local_res18);
    uVar2 = this->OwnerEntityID;
                    /* WARNING: Load size is inaccurate */
    (this->OwnerCharInfoData).WeakPtr = *TVar6.WeakPtr;
    TVar7 = UDS_EntityData::GetData((ulong64)local_res18,uVar2);
                    /* WARNING: Load size is inaccurate */
    (this->OwnerEntityData).WeakPtr = *TVar7.WeakPtr;
    TVar8 = UDS_CharStatusData::GetData((ulong64)local_res18);
                    /* WARNING: Load size is inaccurate */
    (this->OwnerCharStatusData).WeakPtr = *TVar8.WeakPtr;
  }
  return;
}

// IsActiveRecvProcess @ 14bbc2e20

bool __thiscall
UDS_RecvProcessBase::IsActiveRecvProcess(UDS_RecvProcessBase *this,FDS_NetSyncData *param_1)

{
  return false;
}

// IsBattleMode @ 14bbc4210

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
UDS_RecvProcessBase::IsBattleMode(UDS_RecvProcessBase *this,FDS_NetSyncData *param_1)

{
  bool bVar1;
  FDS_EntityBase *pFVar2;
  UDS_CharStateData *this_00;
  EDS_CharState local_res8 [4];
  
  pFVar2 = FDS_EntityBase::GetEntityBase(&this->OwnerEntityID);
  if (pFVar2 != (FDS_EntityBase *)0x0) {
    bVar1 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                      (&this->OwnerCharStateData,(void *)0x0);
    if (!bVar1) {
      this_00 = (UDS_CharStateData *)FWeakObjectPtr::Get(&(this->OwnerCharStateData).WeakPtr);
      local_res8[0] = Battle;
      bVar1 = UDS_CharStateData::HasCharState(this_00,local_res8);
      if (bVar1) {
        return true;
      }
    }
  }
  return false;
}

// OnEnter @ 14bbc8cc0

void __thiscall UDS_RecvProcessBase::OnEnter(UDS_RecvProcessBase *this,FDS_NetSyncData *param_1)

{
  return;
}

// OnExit @ 14bbc93d0

void __thiscall UDS_RecvProcessBase::OnExit(UDS_RecvProcessBase *this,FDS_NetSyncData *param_1)

{
  return;
}

// PostProcessData @ 14bbcde00

void __thiscall
UDS_RecvProcessBase::PostProcessData
          (UDS_RecvProcessBase *this,FDS_NetSyncData *param_1,NetSyncResponse *param_2)

{
  return;
}

// RecvSyncTick @ 14bbd71a0

void __thiscall
UDS_RecvProcessBase::RecvSyncTick(UDS_RecvProcessBase *this,FDS_NetSyncData *param_1,float param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014bbd71a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2e0))();
  return;
}

// UpdateManualAnimStateTag @ 14bbe5720

void __thiscall
UDS_RecvProcessBase::UpdateManualAnimStateTag(UDS_RecvProcessBase *this,FDS_NetSyncData *param_1)

{
  return;
}

