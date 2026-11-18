// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 21

// StaticClass @ 14b5790d0

UClass * __cdecl UDS_RecvNpcRotationProcess::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_RecvNpcRotationProcess.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_RecvNpcRotationProcess",
               &Z_Registration_Info_UClass_UDS_RecvNpcRotationProcess.InnerSingleton,
               StaticRegisterNativesUDS_RecvNpcRotationProcess,0x110,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_RecvNpcRotationProcess>,
               InternalVTableHelperCtorCaller<UDS_RecvNpcRotationProcess>,local_res8,
               UDS_RecvMoveBaseProcess::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_RecvNpcRotationProcess.InnerSingleton;
}

// UDS_RecvNpcRotationProcess @ 14b57dea0

UDS_RecvNpcRotationProcess * __thiscall
UDS_RecvNpcRotationProcess::UDS_RecvNpcRotationProcess
          (UDS_RecvNpcRotationProcess *this,FVTableHelper *param_1)

{
  double dVar1;
  
  UDS_RecvMoveBaseProcess::UDS_RecvMoveBaseProcess((UDS_RecvMoveBaseProcess *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_RecvNpcRotationProcess__6B_;
  dVar1 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->StartRotation).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->StartRotation).Yaw = dVar1;
  (this->StartRotation).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  dVar1 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->EndRotation).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->EndRotation).Yaw = dVar1;
  dVar1 = UE::Math::TRotator<double>::ZeroRotator.Roll;
  this->RotationDeltaTime = 0.0;
  this->RotationEndTime = 0.0;
  this->ServerEndTime = 0.0;
  (this->EndRotation).Roll = dVar1;
  return this;
}

// ~UDS_RecvNpcRotationProcess @ 14b57e630

void __thiscall
UDS_RecvNpcRotationProcess::~UDS_RecvNpcRotationProcess(UDS_RecvNpcRotationProcess *this)

{
  this->_padding_ = (longlong)&___7UDS_RecvProcessBase__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_padding_);
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14b580350

UClass * __cdecl UDS_RecvNpcRotationProcess::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_RecvNpcRotationProcess.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_RecvNpcRotationProcess",
               &Z_Registration_Info_UClass_UDS_RecvNpcRotationProcess.InnerSingleton,
               StaticRegisterNativesUDS_RecvNpcRotationProcess,0x110,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_RecvNpcRotationProcess>,
               InternalVTableHelperCtorCaller<UDS_RecvNpcRotationProcess>,local_res8,
               UDS_RecvMoveBaseProcess::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_RecvNpcRotationProcess.InnerSingleton;
}

// StaticRegisterNativesUDS_RecvNpcRotationProcess @ 14b5809a0

void __cdecl UDS_RecvNpcRotationProcess::StaticRegisterNativesUDS_RecvNpcRotationProcess(void)

{
  return;
}

// UDS_RecvNpcRotationProcess @ 14bba8d50

UDS_RecvNpcRotationProcess * __thiscall
UDS_RecvNpcRotationProcess::UDS_RecvNpcRotationProcess
          (UDS_RecvNpcRotationProcess *this,FObjectInitializer *param_1)

{
  double dVar1;
  
  UDS_RecvMoveBaseProcess::UDS_RecvMoveBaseProcess((UDS_RecvMoveBaseProcess *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_RecvNpcRotationProcess__6B_;
  dVar1 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->StartRotation).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->StartRotation).Yaw = dVar1;
  (this->StartRotation).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  dVar1 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->EndRotation).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->EndRotation).Yaw = dVar1;
  dVar1 = UE::Math::TRotator<double>::ZeroRotator.Roll;
  this->RotationDeltaTime = 0.0;
  this->RotationEndTime = 0.0;
  this->ServerEndTime = 0.0;
  (this->EndRotation).Roll = dVar1;
  return this;
}

// CalculateRotationIndex @ 14bbae180

int __thiscall
UDS_RecvNpcRotationProcess::CalculateRotationIndex
          (UDS_RecvNpcRotationProcess *this,double param_1,FDS_NpcBaseTableRow *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  
  iVar4 = (param_2->RotationPlaceAngle).ArrayNum;
  uVar5 = 0;
  if (0 < iVar4) {
    lVar6 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar5 < (param_2->RotationPlaceAngle).ArrayNum) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
      if (param_1 <= (double)*(int *)((param_2->RotationPlaceAngle).AllocatorInstance.Data + lVar6))
      {
        return uVar5;
      }
      iVar4 = (param_2->RotationPlaceAngle).ArrayNum;
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 4;
    } while ((int)uVar5 < iVar4);
  }
  iVar4 = iVar4 + -1;
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  return iVar4;
}

// DisplayDebugNameTag @ 14bbb2c80

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
UDS_RecvNpcRotationProcess::DisplayDebugNameTag
          (UDS_RecvNpcRotationProcess *this,FDS_EntityBase *param_1,FDS_NetSyncData *param_2)

{
  ulong64 uVar1;
  long64 lVar2;
  bool bVar3;
  char cVar4;
  UDS_MovementCore *this_00;
  TVector<double> *pTVar5;
  UDS_EntityData *pUVar6;
  FString *pFVar7;
  wchar_t *pwVar8;
  FString local_58;
  TVector<double>_u_0 local_48;
  TVector<double>_u_0 local_28;
  
  this_00 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  pTVar5 = UDS_MovementCore::GetActorLocation(this_00,(TVector<double> *)&local_48._s_0);
  local_28._s_0.X = (pTVar5->field0_0x0)._s_0.X;
  local_28._s_0.Y = (pTVar5->field0_0x0)._s_0.Y;
  local_28._s_0.Z = (pTVar5->field0_0x0)._s_0.Z;
  bVar3 = DS_Util::CheckMainPlayerDistance((TVector<double> *)&local_28._s_0);
  if (bVar3) {
    cVar4 = (**(code **)(this->_padding_ + 0x2f0))(this,param_2);
    uVar1 = this->_padding_;
    ::FString::FString((FString *)&local_48._s_0,L"Npc Rotation ID:{1}\nBattle: {2}");
    pwVar8 = L"False";
    if (cVar4 != '\0') {
      pwVar8 = L"True";
    }
    DS_Util::GetFormatString<unsigned___int64,wchar_t_const_*>
              (&local_58,(FString *)&local_48._s_0,uVar1,pwVar8);
    if ((void *)local_48._s_0.X != (void *)0x0) {
      FMemory::Free((void *)local_48._s_0.X);
    }
    if ((char)this->_padding_ == '\x05') {
      lVar2 = param_1->TableID;
      ::FString::FString((FString *)&local_48._s_0,L"NpcBaseID:{1}\n");
      pFVar7 = DS_Util::GetFormatString<__int64>
                         ((FString *)&local_28._s_0,(FString *)&local_48._s_0,lVar2);
      ::FString::InsertAt(&local_58,0,pFVar7);
      if ((void *)local_28._s_0.X != (void *)0x0) {
        FMemory::Free((void *)local_28._s_0.X);
      }
      if ((void *)local_48._s_0.X != (void *)0x0) {
        FMemory::Free((void *)local_48._s_0.X);
      }
    }
    pUVar6 = (UDS_EntityData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    UDS_EntityData::SetDebugString(pUVar6,&local_58);
    local_48._s_0.X = (double)local_58.Data.AllocatorInstance.Data;
  }
  else {
    pUVar6 = (UDS_EntityData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    pFVar7 = ::FString::FString((FString *)&local_48._s_0,"");
    UDS_EntityData::SetDebugString(pUVar6,pFVar7);
  }
  if ((FScriptContainerElement *)local_48._s_0.X != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_48._s_0.X);
  }
  return;
}

// DrawDebugRotationLine @ 14bbb3370

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
UDS_RecvNpcRotationProcess::DrawDebugRotationLine
          (UDS_RecvNpcRotationProcess *this,FDS_NetSyncData *param_1,TQuat<double> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  FDS_EntityBase *pFVar4;
  TVector<double>_u_0 local_78;
  TVector<double>_u_0 local_60;
  TVector<double>_u_0 local_48 [2];
  
  pFVar4 = FDS_EntityBase::GetEntityBase((ulong64 *)&this->_padding_);
  if (pFVar4 != (FDS_EntityBase *)0x0) {
    dVar2 = (param_1->ServerPosition).field0_0x0._s_0.X;
    dVar3 = (param_1->ServerPosition).field0_0x0._s_0.Y;
    dVar1 = (param_1->ServerPosition).field0_0x0._s_0.Z +
            (double)(float)((uint)pFVar4->ScaledCapsuleHalfHeight ^
                           __xmm_80000000800000008000000080000000);
    local_48[0]._s_0.X = ___xmm_00000000000000003ff0000000000000;
    local_48[0]._s_0.Y = _UNK_150689518;
    local_48[0]._s_0.Z = 0.0;
    local_78._s_0.X = dVar2;
    local_78._s_0.Y = dVar3;
    local_78._s_0.Z = dVar1;
    UE::Math::TQuat<double>::RotateVector
              (param_2,(TVector<double> *)&local_60._s_0,(TVector<double> *)&local_48[0]._s_0);
    local_48[0]._0_8_ = local_60._s_0.X * __real_4094500000000000 + dVar2;
    local_48[0]._8_8_ = local_60._s_0.Y * __real_4094500000000000 + dVar3;
    local_48[0]._16_8_ = local_60._s_0.Z * __real_4094500000000000 + dVar1;
    DS_Util::ShowSyncLine
              ((TVector<double> *)&local_78._s_0,(TVector<double> *)&local_48[0]._s_0,
               &FColor::Orange,false,__real_3f800000,'\0',__real_41a00000);
  }
  return;
}

// GetRotationRemainTime @ 14bbbd020

double __thiscall
UDS_RecvNpcRotationProcess::GetRotationRemainTime(UDS_RecvNpcRotationProcess *this)

{
  double dVar1;
  
  dVar1 = UDS_TimeUtilManager::GetCurrentServerTime();
  return this->ServerEndTime - dVar1;
}

// HandleDebugInfo @ 14bbbf040

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
UDS_RecvNpcRotationProcess::HandleDebugInfo
          (UDS_RecvNpcRotationProcess *this,FDS_NetSyncData *param_1)

{
  ulong64 uVar1;
  long64 lVar2;
  bool bVar3;
  char cVar4;
  FDS_EntityBase *this_00;
  UDS_MovementCore *this_01;
  TVector<double> *pTVar5;
  UDS_EntityData *pUVar6;
  FString *pFVar7;
  wchar_t *pwVar8;
  FString local_58;
  TVector<double>_u_0 local_48;
  TVector<double>_u_0 local_28;
  
  this_00 = FDS_EntityBase::GetEntityBase((ulong64 *)&this->_padding_);
  if (this_00 != (FDS_EntityBase *)0x0) {
    bVar3 = UDS_GameInstance::IsNameTagDebug();
    FDS_EntityBase::ShowDebugUI(this_00,bVar3);
    if (bVar3) {
      this_01 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      pTVar5 = UDS_MovementCore::GetActorLocation(this_01,(TVector<double> *)&local_48._s_0);
      local_28._s_0.X = (pTVar5->field0_0x0)._s_0.X;
      local_28._s_0.Y = (pTVar5->field0_0x0)._s_0.Y;
      local_28._s_0.Z = (pTVar5->field0_0x0)._s_0.Z;
      bVar3 = DS_Util::CheckMainPlayerDistance((TVector<double> *)&local_28._s_0);
      if (bVar3) {
        cVar4 = (**(code **)(this->_padding_ + 0x2f0))(this,param_1);
        uVar1 = this->_padding_;
        ::FString::FString((FString *)&local_48._s_0,L"Npc Rotation ID:{1}\nBattle: {2}");
        pwVar8 = L"False";
        if (cVar4 != '\0') {
          pwVar8 = L"True";
        }
        DS_Util::GetFormatString<unsigned___int64,wchar_t_const_*>
                  (&local_58,(FString *)&local_48._s_0,uVar1,pwVar8);
        if ((void *)local_48._s_0.X != (void *)0x0) {
          FMemory::Free((void *)local_48._s_0.X);
        }
        if ((char)this->_padding_ == '\x05') {
          lVar2 = this_00->TableID;
          ::FString::FString((FString *)&local_48._s_0,L"NpcBaseID:{1}\n");
          pFVar7 = DS_Util::GetFormatString<__int64>
                             ((FString *)&local_28._s_0,(FString *)&local_48._s_0,lVar2);
          ::FString::InsertAt(&local_58,0,pFVar7);
          if ((void *)local_28._s_0.X != (void *)0x0) {
            FMemory::Free((void *)local_28._s_0.X);
          }
          if ((void *)local_48._s_0.X != (void *)0x0) {
            FMemory::Free((void *)local_48._s_0.X);
          }
        }
        pUVar6 = (UDS_EntityData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
        UDS_EntityData::SetDebugString(pUVar6,&local_58);
        local_48._s_0.X = (double)local_58.Data.AllocatorInstance.Data;
      }
      else {
        pUVar6 = (UDS_EntityData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
        pFVar7 = ::FString::FString((FString *)&local_48._s_0,"");
        UDS_EntityData::SetDebugString(pUVar6,pFVar7);
      }
      if ((FScriptContainerElement *)local_48._s_0.X != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_48._s_0.X);
      }
    }
  }
  return;
}

// Initialize @ 14bbc0400

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
UDS_RecvNpcRotationProcess::Initialize
          (UDS_RecvNpcRotationProcess *this,TWeakObjectPtr<AActor,FWeakObjectPtr> param_1)

{
  EDS_EntityType EVar1;
  FDS_EntityBase *pFVar2;
  longlong *plVar3;
  TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> TVar4;
  TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr> TVar5;
  TWeakObjectPtr<UDS_EntityData,FWeakObjectPtr> TVar6;
  TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr> TVar7;
  undefined1 auStackX_18 [16];
  
  pFVar2 = FDS_EntityBase::GetEntityBaseFromActor(param_1);
  if (pFVar2 != (FDS_EntityBase *)0x0) {
    this->_padding_ = pFVar2->EntityID;
    EVar1 = pFVar2->EntityType;
    *(EDS_EntityType *)&this->_padding_ = EVar1;
    this->_padding_ = pFVar2->TableID;
    if (EVar1 == DummyCharacter) {
      FDS_EntityBase::GetMainPlayerEntityBase(true);
    }
    plVar3 = (longlong *)(**(code **)(pFVar2->_padding_ + 0x150))(pFVar2,auStackX_18);
    this->_padding_ = *plVar3;
    plVar3 = (longlong *)(**(code **)(pFVar2->_padding_ + 0x78))(pFVar2,auStackX_18);
    this->_padding_ = *plVar3;
    TVar4 = UDS_CharStateData::GetData((ulong64)auStackX_18);
    this->_padding_ = *(longlong *)TVar4.WeakPtr;
    TVar5 = UDS_CharInfoData::GetData((ulong64)auStackX_18);
    this->_padding_ = *(longlong *)TVar5.WeakPtr;
    TVar6 = UDS_EntityData::GetData((ulong64)auStackX_18,this->_padding_);
    this->_padding_ = *(longlong *)TVar6.WeakPtr;
    TVar7 = UDS_CharStatusData::GetData((ulong64)auStackX_18);
    this->_padding_ = *(longlong *)TVar7.WeakPtr;
  }
  return;
}

// InitializeRotationData @ 14bbc2240

void __thiscall
UDS_RecvNpcRotationProcess::InitializeRotationData
          (UDS_RecvNpcRotationProcess *this,FDS_NetSyncData *param_1)

{
  double dVar1;
  UDS_MovementCore *this_00;
  TRotator<double> *pTVar2;
  TRotator<double> local_28;
  
  this_00 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  pTVar2 = UDS_MovementCore::GetActorRotation(this_00,&local_28);
  dVar1 = pTVar2->Yaw;
  (this->StartRotation).Pitch = pTVar2->Pitch;
  (this->StartRotation).Yaw = dVar1;
  (this->StartRotation).Roll = pTVar2->Roll;
  dVar1 = (param_1->EntityDirection).Yaw;
  (this->EndRotation).Pitch = (param_1->EntityDirection).Pitch;
  (this->EndRotation).Yaw = dVar1;
  (this->EndRotation).Roll = (param_1->EntityDirection).Roll;
  this->RotationDeltaTime = 0.0;
  this->ServerEndTime = param_1->ServerRotateTime;
  return;
}

// InterpolateRotation @ 14bbc2af0

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
UDS_RecvNpcRotationProcess::InterpolateRotation
          (UDS_RecvNpcRotationProcess *this,FDS_NetSyncData *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  code *pcVar3;
  double dVar4;
  ulonglong uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  TQuat<double> *pTVar10;
  TQuat<double> *pTVar11;
  TRotator<double> *pTVar12;
  FDS_EntityBase *pFVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  double dVar16;
  double dVar18;
  undefined1 auVar17 [16];
  undefined1 auVar19 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  uint uVar23;
  uint uVar24;
  TVector<double>_u_0 local_b8;
  TVector<double>_u_0 local_98;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  TQuat<double> local_58 [2];
  
  fVar1 = this->RotationDeltaTime;
  fVar2 = this->RotationEndTime;
  pTVar10 = UE::Math::TRotator<double>::Quaternion
                      (&this->EndRotation,(TQuat<double> *)&local_b8._s_0);
  pTVar11 = UE::Math::TRotator<double>::Quaternion
                      (&this->StartRotation,(TQuat<double> *)&local_98._s_0);
  pTVar10 = UE::Math::TQuat<double>::Slerp_NotNormalized
                      (local_58,pTVar11,pTVar10,(double)(fVar1 / fVar2));
  dVar6 = pTVar10->X;
  dVar7 = pTVar10->Y;
  dVar8 = pTVar10->Z;
  dVar9 = pTVar10->W;
  pcVar3 = *(code **)(this->_padding_ + 0x330);
  dVar16 = dVar6 * dVar6 + dVar8 * dVar8;
  dVar18 = dVar7 * dVar7 + dVar9 * dVar9;
  dVar4 = dVar18 + dVar16;
  dVar16 = dVar16 + dVar18;
  auVar20._8_4_ = SUB84(dVar16,0);
  auVar20._0_8_ = dVar4;
  auVar20._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
  auVar20 = sqrtpd(in_XMM4,auVar20);
  uVar14 = -(ulonglong)(__real_3e45798ee0000000 <= dVar4);
  uVar15 = -(ulonglong)(__real_3e45798ee0000000 <= dVar16);
  uVar23 = (uint)(uVar14 >> 0x20);
  uVar24 = (uint)(uVar15 >> 0x20);
  auVar21 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar20);
  auVar22._0_8_ = uVar14 & (ulonglong)(auVar21._0_8_ * dVar6);
  uVar5 = uVar15 & (ulonglong)(auVar21._8_8_ * dVar7);
  auVar22._8_4_ = (undefined4)uVar5;
  auVar22._12_4_ = (undefined4)(uVar5 >> 0x20);
  auVar21._0_4_ = ~(uint)uVar14 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
  auVar21._4_4_ =
       ~uVar23 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
  auVar21._8_4_ = ~(uint)uVar15 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar21._12_4_ =
       ~uVar24 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_78 = auVar22 | auVar21;
  auVar20 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar20);
  auVar19._0_4_ = ~(uint)uVar14 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
  auVar19._4_4_ =
       ~uVar23 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
  auVar19._8_4_ = ~(uint)uVar15 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  auVar19._12_4_ =
       ~uVar24 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  auVar17._0_8_ = (ulonglong)(auVar20._0_8_ * dVar8) & uVar14;
  uVar15 = (ulonglong)(auVar20._8_8_ * dVar9) & uVar15;
  auVar17._8_4_ = (undefined4)uVar15;
  auVar17._12_4_ = (undefined4)(uVar15 >> 0x20);
  local_68 = auVar19 | auVar17;
  pTVar12 = UE::Math::TQuat<double>::Rotator
                      ((TQuat<double> *)local_78,(TRotator<double> *)&local_98._s_0);
  local_b8._s_0.X = pTVar12->Pitch;
  local_b8._s_0.Y = pTVar12->Yaw;
  local_b8._s_0.Z = pTVar12->Roll;
  (*pcVar3)(this,&local_b8);
  pFVar13 = FDS_EntityBase::GetEntityBase((ulong64 *)&this->_padding_);
  if (pFVar13 != (FDS_EntityBase *)0x0) {
    local_98._s_0.X = (param_1->ServerPosition).field0_0x0._s_0.X;
    local_98._s_0.Y = (param_1->ServerPosition).field0_0x0._s_0.Y;
    dVar4 = (double)local_68._0_8_ + (double)local_68._0_8_;
    local_98._s_0.Z =
         (param_1->ServerPosition).field0_0x0._s_0.Z +
         (double)(float)((uint)pFVar13->ScaledCapsuleHalfHeight ^
                        __xmm_80000000800000008000000080000000);
    dVar16 = (double)CONCAT44((uint)((ulonglong)((double)local_78._8_8_ + (double)local_78._8_8_) >>
                                    0x20) ^ __xmm_80000000000000008000000000000000._4_4_,
                              SUB84((double)local_78._8_8_ + (double)local_78._8_8_,0) ^
                              (uint)__xmm_80000000000000008000000000000000);
    local_b8._s_0.X =
         ((dVar16 * (double)local_78._8_8_ - dVar4 * (double)local_68._0_8_) +
         __real_3ff0000000000000) * __real_4094500000000000 + local_98._s_0.X;
    local_b8._s_0.Z =
         (dVar4 * (double)local_78._0_8_ + dVar16 * (double)local_68._8_8_) *
         __real_4094500000000000 + local_98._s_0.Z;
    local_b8._s_0.Y =
         (dVar4 * (double)local_68._8_8_ - dVar16 * (double)local_78._0_8_) *
         __real_4094500000000000 + local_98._s_0.Y;
    DS_Util::ShowSyncLine
              ((TVector<double> *)&local_98._s_0,(TVector<double> *)&local_b8._s_0,&FColor::Orange,
               false,__real_3f800000,'\0',__real_41a00000);
  }
  return;
}

// IsActiveRecvProcess @ 14bbc2df0

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
UDS_RecvNpcRotationProcess::IsActiveRecvProcess
          (UDS_RecvNpcRotationProcess *this,FDS_NetSyncData *param_1)

{
  FDS_EntityBase *pFVar1;
  
  if (param_1->IsServerRotation != false) {
    pFVar1 = FDS_EntityBase::GetEntityBase((ulong64 *)&this->_padding_);
    if (pFVar1 != (FDS_EntityBase *)0x0) {
      return true;
    }
  }
  return false;
}

// OnEnter @ 14bbc8c10

void __thiscall
UDS_RecvNpcRotationProcess::OnEnter(UDS_RecvNpcRotationProcess *this,FDS_NetSyncData *param_1)

{
  double dVar1;
  bool bVar2;
  UDS_MovementCore *this_00;
  TRotator<double> *pTVar3;
  TRotator<double> local_28;
  
  UDS_RecvMoveBaseProcess::OnEnter((UDS_RecvMoveBaseProcess *)this,param_1);
  bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
  if (bVar2) {
    this_00 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    pTVar3 = UDS_MovementCore::GetActorRotation(this_00,&local_28);
    dVar1 = pTVar3->Yaw;
    (this->StartRotation).Pitch = pTVar3->Pitch;
    (this->StartRotation).Yaw = dVar1;
    (this->StartRotation).Roll = pTVar3->Roll;
    dVar1 = (param_1->EntityDirection).Yaw;
    (this->EndRotation).Pitch = (param_1->EntityDirection).Pitch;
    (this->EndRotation).Yaw = dVar1;
    (this->EndRotation).Roll = (param_1->EntityDirection).Roll;
    this->RotationDeltaTime = 0.0;
    this->ServerEndTime = param_1->ServerRotateTime;
    SetupNpcBattleRotationData(this,param_1);
  }
  return;
}

// OnExit @ 14bbc9370

void __thiscall
UDS_RecvNpcRotationProcess::OnExit(UDS_RecvNpcRotationProcess *this,FDS_NetSyncData *param_1)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res8;
  
  UDS_RecvMoveBaseProcess::OnExit((UDS_RecvMoveBaseProcess *)this,param_1);
  UDS_NPCBattleData::GetData((ulong64)&local_res8);
  bVar1 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&local_res8);
    *(undefined4 *)&pUVar2[2].field_0xc = 0xffffffff;
  }
  param_1->IsServerRotation = false;
  return;
}

// PostProcessData @ 14bbcdda0

void __thiscall
UDS_RecvNpcRotationProcess::PostProcessData
          (UDS_RecvNpcRotationProcess *this,FDS_NetSyncData *param_1,NetSyncResponse *param_2)

{
  double dVar1;
  
  UDS_RecvMoveBaseProcess::PostProcessData((UDS_RecvMoveBaseProcess *)this,param_1,param_2);
  dVar1 = this->ServerEndTime - param_1->ServerRotateTime;
  if (__real_3e45798ee2308c3a <
      (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    (**(code **)(this->_padding_ + 0x2c0))(this,param_1);
  }
  return;
}

// RecvSyncTick @ 14bbd70b0

void __thiscall
UDS_RecvNpcRotationProcess::RecvSyncTick
          (UDS_RecvNpcRotationProcess *this,FDS_NetSyncData *param_1,float param_2)

{
  double dVar1;
  double dVar2;
  bool bVar3;
  float fVar4;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  double local_38;
  
  UDS_RecvMoveBaseProcess::RecvSyncTick((UDS_RecvMoveBaseProcess *)this,param_1,param_2);
  bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
  if (bVar3) {
    dVar2 = UDS_TimeUtilManager::GetCurrentServerTime();
    dVar1 = this->ServerEndTime;
    fVar4 = param_2 + this->RotationDeltaTime;
    this->RotationDeltaTime = fVar4;
    if (this->RotationEndTime <= fVar4 && fVar4 != this->RotationEndTime) {
      local_48 = *(undefined4 *)&(this->EndRotation).Pitch;
      uStack_44 = *(undefined4 *)((longlong)&(this->EndRotation).Pitch + 4);
      uStack_40 = *(undefined4 *)&(this->EndRotation).Yaw;
      uStack_3c = *(undefined4 *)((longlong)&(this->EndRotation).Yaw + 4);
      local_38 = (this->EndRotation).Roll;
      (**(code **)(this->_padding_ + 0x330))(this,&local_48);
    }
    else {
      InterpolateRotation(this,param_1,param_2);
    }
    if (dVar1 - dVar2 < 0.0) {
      param_1->IsServerRotation = false;
      local_48 = *(undefined4 *)&(this->EndRotation).Pitch;
      uStack_44 = *(undefined4 *)((longlong)&(this->EndRotation).Pitch + 4);
      uStack_40 = *(undefined4 *)&(this->EndRotation).Yaw;
      uStack_3c = *(undefined4 *)((longlong)&(this->EndRotation).Yaw + 4);
      local_38 = (this->EndRotation).Roll;
      (**(code **)(this->_padding_ + 0x330))(this,&local_48);
    }
  }
  return;
}

// ResetNpcRotationData @ 14bbdc6b0

void __thiscall UDS_RecvNpcRotationProcess::ResetNpcRotationData(UDS_RecvNpcRotationProcess *this)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res8 [4];
  
  UDS_NPCBattleData::GetData((ulong64)local_res8);
  bVar1 = FWeakObjectPtr::IsValid(local_res8);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(local_res8);
    *(undefined4 *)&pUVar2[2].field_0xc = 0xffffffff;
  }
  return;
}

// SetupNpcBattleRotationData @ 14bbe11b0

void __thiscall
UDS_RecvNpcRotationProcess::SetupNpcBattleRotationData
          (UDS_RecvNpcRotationProcess *this,FDS_NetSyncData *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  UDS_DataBase *this_00;
  FDS_NpcBaseTableRow *pFVar8;
  UObject *pUVar9;
  TVector<double> *pTVar10;
  TVector<double> *pTVar11;
  longlong lVar12;
  uint uVar13;
  double dVar14;
  uint uVar15;
  uint uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  FWeakObjectPtr local_res8;
  TVector<double> local_78;
  TVector<double> local_60 [3];
  
  dVar1 = __real_4066800000000000;
  dVar14 = (this->StartRotation).Yaw - (this->EndRotation).Yaw;
  uVar17 = SUB84(__real_c066800000000000,0);
  uVar18 = (undefined4)((ulonglong)__real_c066800000000000 >> 0x20);
  if (__real_c066800000000000 <= dVar14) {
    uVar17 = SUB84(__real_4066800000000000,0);
    uVar18 = (undefined4)((ulonglong)__real_4066800000000000 >> 0x20);
    if (dVar14 <= __real_4066800000000000) goto LAB_14bbe1252;
    dVar14 = FGenericPlatformMath::Fmod(dVar14 - __real_4066800000000000,__real_4076800000000000);
    if (dVar14 != 0.0) {
      dVar14 = dVar14 - dVar1;
      goto LAB_14bbe1252;
    }
  }
  else {
    dVar14 = FGenericPlatformMath::Fmod(__real_c066800000000000 - dVar14,__real_4076800000000000);
    if (dVar14 != 0.0) {
      dVar14 = __real_4066800000000000 - dVar14;
      goto LAB_14bbe1252;
    }
  }
  dVar14 = (double)CONCAT44(uVar18,uVar17);
LAB_14bbe1252:
  uVar15 = SUB84(dVar14,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar16 = (uint)((ulonglong)dVar14 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  this_00 = (UDS_DataBase *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  iVar6 = UDS_DataBase::GetEntityTableID(this_00);
  pFVar8 = FDS_NpcBaseTableRow::GetRef((longlong)iVar6,true);
  uVar13 = 0;
  iVar6 = (pFVar8->RotationPlaceAngle).ArrayNum;
  if (0 < iVar6) {
    lVar12 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar13 < (pFVar8->RotationPlaceAngle).ArrayNum) {
        uVar7 = ~uVar13 >> 0x1f;
      }
      if (uVar7 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      dVar14 = (double)*(int *)((pFVar8->RotationPlaceAngle).AllocatorInstance.Data + lVar12);
      if ((double)CONCAT44(uVar16,uVar15) < dVar14 || (double)CONCAT44(uVar16,uVar15) == dVar14)
      goto LAB_14bbe131a;
      iVar6 = (pFVar8->RotationPlaceAngle).ArrayNum;
      uVar13 = uVar13 + 1;
      lVar12 = lVar12 + 4;
    } while ((int)uVar13 < iVar6);
  }
  uVar13 = iVar6 - 1;
  if ((int)uVar13 < 0) {
    uVar13 = 0;
  }
LAB_14bbe131a:
  UDS_NPCBattleData::GetData((ulong64)&local_res8);
  bVar5 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar5) {
    pUVar9 = FWeakObjectPtr::Get(&local_res8);
    *(uint *)&pUVar9[2].field_0xc = uVar13;
    pTVar10 = UE::Math::TRotator<double>::Vector(&this->EndRotation,&local_78);
    pTVar11 = UE::Math::TRotator<double>::Vector(&this->StartRotation,local_60);
    dVar14 = (pTVar10->field0_0x0)._s_0.Y;
    dVar1 = (pTVar11->field0_0x0)._s_0.Y;
    dVar2 = (pTVar10->field0_0x0)._s_0.X;
    dVar3 = (pTVar11->field0_0x0)._s_0.X;
    pUVar9 = FWeakObjectPtr::Get(&local_res8);
    pUVar9[2].field_0x10 = (0.0 < dVar14 * dVar3 - dVar1 * dVar2) + '\x01';
    if ((-1 < (int)uVar13) && ((int)uVar13 < (pFVar8->BattleRotationPlaceTime).ArrayNum)) {
      uVar15 = 0;
      if ((int)uVar13 < (pFVar8->BattleRotationPlaceTime).ArrayNum) {
        uVar15 = ~uVar13 >> 0x1f;
      }
      if (uVar15 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      this->RotationEndTime =
           *(float *)((pFVar8->BattleRotationPlaceTime).AllocatorInstance.Data +
                     (longlong)(int)uVar13 * 4);
    }
  }
  return;
}

