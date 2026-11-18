// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 25

// StaticClass @ 14b579910

UClass * __cdecl UDS_RecvSkillProcess::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_RecvSkillProcess.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_RecvSkillProcess",
               &Z_Registration_Info_UClass_UDS_RecvSkillProcess.InnerSingleton,
               StaticRegisterNativesUDS_RecvSkillProcess,0xe8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_RecvSkillProcess>,
               InternalVTableHelperCtorCaller<UDS_RecvSkillProcess>,local_res8,
               UDS_RecvMoveBaseProcess::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_RecvSkillProcess.InnerSingleton;
}

// UDS_RecvSkillProcess @ 14b57dfb0

UDS_RecvSkillProcess * __thiscall
UDS_RecvSkillProcess::UDS_RecvSkillProcess(UDS_RecvSkillProcess *this,FVTableHelper *param_1)

{
  UDS_RecvMoveBaseProcess::UDS_RecvMoveBaseProcess((UDS_RecvMoveBaseProcess *)this,param_1);
  this->LastSkillID = -1;
  this->_padding_ = (longlong)&___7UDS_RecvSkillProcess__6B_;
  this->LastSkillEndTime = 0.0;
  (this->CurSkillContext).field0_0x0.DebugPtr = (UDS_SkillAbilityContext *)0x0;
  return this;
}

// ~UDS_RecvSkillProcess @ 14b57e720

void __thiscall UDS_RecvSkillProcess::~UDS_RecvSkillProcess(UDS_RecvSkillProcess *this)

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

// GetPrivateStaticClass @ 14b580580

UClass * __cdecl UDS_RecvSkillProcess::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_RecvSkillProcess.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_RecvSkillProcess",
               &Z_Registration_Info_UClass_UDS_RecvSkillProcess.InnerSingleton,
               StaticRegisterNativesUDS_RecvSkillProcess,0xe8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_RecvSkillProcess>,
               InternalVTableHelperCtorCaller<UDS_RecvSkillProcess>,local_res8,
               UDS_RecvMoveBaseProcess::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_RecvSkillProcess.InnerSingleton;
}

// StaticRegisterNativesUDS_RecvSkillProcess @ 14b5809d0

void __cdecl UDS_RecvSkillProcess::StaticRegisterNativesUDS_RecvSkillProcess(void)

{
  return;
}

// UDS_RecvSkillProcess @ 14bba90e0

UDS_RecvSkillProcess * __thiscall
UDS_RecvSkillProcess::UDS_RecvSkillProcess(UDS_RecvSkillProcess *this,FObjectInitializer *param_1)

{
  UDS_RecvMoveBaseProcess::UDS_RecvMoveBaseProcess((UDS_RecvMoveBaseProcess *)this,param_1);
  this->LastSkillID = -1;
  this->_padding_ = (longlong)&___7UDS_RecvSkillProcess__6B_;
  this->LastSkillEndTime = 0.0;
  (this->CurSkillContext).field0_0x0.DebugPtr = (UDS_SkillAbilityContext *)0x0;
  return this;
}

// CalculateSkillDestinationLocation @ 14bbae250

void __thiscall
UDS_RecvSkillProcess::CalculateSkillDestinationLocation
          (UDS_RecvSkillProcess *this,FDS_NetSyncData *param_1)

{
  double dVar1;
  UDS_SkillAbilityContext *pUVar2;
  double dVar3;
  
  pUVar2 = (this->CurSkillContext).field0_0x0.DebugPtr;
  if (pUVar2->IsCollision == true) {
    dVar3 = (param_1->ServerPosition).field0_0x0._s_0.Y;
    dVar1 = (param_1->ServerPosition).field0_0x0._s_0.Z;
    (pUVar2->DestinationLocation).field0_0x0._s_0.X = (param_1->ServerPosition).field0_0x0._s_0.X;
    (pUVar2->DestinationLocation).field0_0x0._s_0.Y = dVar3;
    (pUVar2->DestinationLocation).field0_0x0._s_0.Z = dVar1;
    return;
  }
  dVar3 = (param_1->DestinationPosition).field0_0x0._s_0.Y;
  dVar1 = (param_1->DestinationPosition).field0_0x0._s_0.Z;
  (pUVar2->DestinationLocation).field0_0x0._s_0.X = (param_1->DestinationPosition).field0_0x0._s_0.X
  ;
  (pUVar2->DestinationLocation).field0_0x0._s_0.Y = dVar3;
  (pUVar2->DestinationLocation).field0_0x0._s_0.Z = dVar1;
  return;
}

// CalculateSkillStartLocation @ 14bbae2a0

void __thiscall
UDS_RecvSkillProcess::CalculateSkillStartLocation
          (UDS_RecvSkillProcess *this,SkillInfo *param_1,FDS_NetSyncData *param_2)

{
  Vector *pVVar1;
  ulonglong uVar2;
  VectorF *pVVar3;
  UObject *pUVar4;
  UDS_EntityData *this_00;
  byte bVar5;
  VectorF *pVVar6;
  Vector *pVVar7;
  bool bVar8;
  TVector<double> local_28;
  
  pVVar1 = (param_1->_impl_).start_position_;
  pVVar7 = &_Vector_default_instance_._instance;
  if (pVVar1 != (Vector *)0x0) {
    pVVar7 = pVVar1;
  }
  DS_Util::SetSyncLocation(this->_padding_,&local_28,pVVar7,false);
  uVar2 = (param_2->StateFlags).Packed;
  if ((((uVar2 >> 0x23 & 3) == 0) && (bVar5 = (byte)(uVar2 >> 0xb) & 0x7f, bVar5 != 6)) &&
     (bVar5 != 7)) {
    pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    bVar8 = pUVar4[3].field_0x6 != '\x01';
  }
  else {
    bVar8 = false;
  }
  (param_2->StateFlags).Packed = (param_2->StateFlags).Packed & 0xfffffffffffff8af;
  (param_2->StateFlags).Packed = (param_2->StateFlags).Packed | 0xa0;
  this_00 = (UDS_EntityData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  UDS_EntityData::SetMoveMode(this_00,SkillMode);
  DS_Util::SetSyncLocation
            (this->_padding_,&((this->CurSkillContext).field0_0x0.DebugPtr)->StartLocation,&local_28
             ,bVar8);
  pVVar3 = (param_1->_impl_).start_direction_;
  pVVar6 = &_VectorF_default_instance_._instance;
  if (pVVar3 != (VectorF *)0x0) {
    pVVar6 = pVVar3;
  }
  DS_Util::GetNetRotate(&((this->CurSkillContext).field0_0x0.DebugPtr)->SkillRotation,pVVar6);
  return;
}

// DrawSkillDebugVisualization @ 14bbb34c0

void __thiscall UDS_RecvSkillProcess::DrawSkillDebugVisualization(UDS_RecvSkillProcess *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  UDS_SkillAbilityContext *pUVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  TQuat<double> *pTVar8;
  TVector<double> *pTVar9;
  undefined8 uVar10;
  double dVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  TVector<double>_u_0 local_88 [2];
  TQuat<double> local_58 [2];
  
  pTVar8 = UE::Math::TRotator<double>::Quaternion
                     (&((this->CurSkillContext).field0_0x0.DebugPtr)->SkillRotation,local_58);
  fVar7 = __real_43480000;
  fVar6 = __real_40000000;
  fVar5 = __real_3f800000;
  DS_Util::ShowSyncCapsule
            (&((this->CurSkillContext).field0_0x0.DebugPtr)->StartLocation,__real_43480000,
             __real_42480000,pTVar8,&FColor::Red,false,__real_3f800000,'\0',__real_40000000);
  pTVar8 = UE::Math::TRotator<double>::Quaternion
                     (&((this->CurSkillContext).field0_0x0.DebugPtr)->SkillRotation,local_58);
  DS_Util::ShowSyncCapsule
            (&((this->CurSkillContext).field0_0x0.DebugPtr)->DestinationLocation,fVar7,
             __real_42480000,pTVar8,&FColor::Purple,false,fVar5,'\0',fVar6);
  pUVar4 = (this->CurSkillContext).field0_0x0.DebugPtr;
  pTVar9 = UE::Math::TRotator<double>::Vector(&pUVar4->SkillRotation,(TVector<double> *)local_58);
  dVar1 = (pTVar9->field0_0x0)._s_0.X;
  dVar2 = (pTVar9->field0_0x0)._s_0.Y;
  dVar3 = (pTVar9->field0_0x0)._s_0.Z;
  dVar11 = dVar2 * dVar2 + dVar1 * dVar1 + dVar3 * dVar3;
  if (dVar11 == __real_3ff0000000000000) {
    uVar10 = (pTVar9->field0_0x0)._s_0.Y;
    uVar12 = (pTVar9->field0_0x0)._s_0.X;
    uVar13 = (pTVar9->field0_0x0)._s_0.Z;
  }
  else {
    uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    uVar13 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    if (__real_3e45798ee0000000 <= dVar11) {
      dVar11 = __real_3ff0000000000000 / SQRT(dVar11);
      uVar10 = dVar2 * dVar11;
      uVar12 = dVar1 * dVar11;
      uVar13 = dVar3 * dVar11;
    }
  }
  local_88[0]._16_8_ =
       (double)uVar13 * __real_4059000000000000 + (pUVar4->StartLocation).field0_0x0._s_0.Z;
  local_88[0]._8_8_ =
       (double)uVar10 * __real_4059000000000000 + (pUVar4->StartLocation).field0_0x0._s_0.Y;
  local_88[0]._0_8_ =
       (double)uVar12 * __real_4059000000000000 + (pUVar4->StartLocation).field0_0x0._s_0.X;
  DS_Util::ShowSyncLine
            (&((this->CurSkillContext).field0_0x0.DebugPtr)->StartLocation,
             (TVector<double> *)&local_88[0]._s_0,&FColor::Cyan,false,fVar5,'\0',fVar6);
  return;
}

// HandleDebugInfo @ 14bbbf7e0

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
UDS_RecvSkillProcess::HandleDebugInfo(UDS_RecvSkillProcess *this,FDS_NetSyncData *param_1)

{
  int iVar1;
  long64 lVar2;
  bool bVar3;
  char cVar4;
  FDS_EntityBase *this_00;
  UDS_MovementCore *this_01;
  TVector<double> *pTVar5;
  UDS_EntityData *pUVar6;
  FString *pFVar7;
  FDS_EntityBase *pFVar8;
  UDS_CharStatusData *pUVar9;
  FDS_StatusInfo *pFVar10;
  wchar_t *pwVar11;
  ulong64 uVar12;
  int iVar13;
  int iVar14;
  int local_res8;
  int local_res18;
  FString local_88;
  TVector<double>_u_0 local_78;
  TVector<double>_u_0 local_58;
  
  bVar3 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> *)&this->_padding_,(void *)0x0
                    );
  if (!bVar3) {
    bVar3 = UDS_GameInstance::IsNameTagDebug();
    this_00 = FDS_EntityBase::GetEntityBase((ulong64 *)&this->_padding_);
    if ((this_00 != (FDS_EntityBase *)0x0) && (FDS_EntityBase::ShowDebugUI(this_00,bVar3), bVar3)) {
      this_01 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      pTVar5 = UDS_MovementCore::GetActorLocation(this_01,(TVector<double> *)&local_78._s_0);
      local_58._s_0.X = (pTVar5->field0_0x0)._s_0.X;
      local_58._s_0.Y = (pTVar5->field0_0x0)._s_0.Y;
      local_58._s_0.Z = (pTVar5->field0_0x0)._s_0.Z;
      bVar3 = DS_Util::CheckMainPlayerDistance((TVector<double> *)&local_58._s_0);
      if (bVar3) {
        uVar12 = this->_padding_;
        if (((char)this->_padding_ == '\x04') &&
           (pFVar8 = FDS_EntityBase::GetMainPlayerEntityBase(true), pFVar8 != (FDS_EntityBase *)0x0)
           ) {
          uVar12 = pFVar8->EntityID;
        }
        iVar14 = 0;
        local_res18 = 0;
        local_res8 = 0;
        bVar3 = TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr> *)&this->_padding_,
                           (void *)0x0);
        iVar13 = 0;
        if (!bVar3) {
          pUVar9 = (UDS_CharStatusData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
          pFVar10 = UDS_CharStatusData::GetStatusInfo(pUVar9,Hp);
          if (pFVar10 != (FDS_StatusInfo *)0x0) {
            iVar14 = pFVar10->CurrentValue;
            local_res18 = (int)pFVar10->MaxValue;
          }
          pUVar9 = (UDS_CharStatusData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
          pFVar10 = UDS_CharStatusData::GetStatusInfo(pUVar9,Mp);
          iVar13 = 0;
          if (pFVar10 != (FDS_StatusInfo *)0x0) {
            iVar13 = pFVar10->CurrentValue;
            local_res8 = (int)pFVar10->MaxValue;
          }
        }
        cVar4 = (**(code **)(this->_padding_ + 0x2f0))(this,param_1);
        iVar1 = this->LastSkillID;
        ::FString::FString((FString *)&local_78._s_0,L"PlaySkill ID:{1} - ID:{2}\nBattle: {3}");
        pwVar11 = L"False";
        if (cVar4 != '\0') {
          pwVar11 = L"True";
        }
        DS_Util::GetFormatString<int,unsigned___int64,wchar_t_const_*>
                  (&local_88,(FString *)&local_78._s_0,iVar1,uVar12,pwVar11);
        if ((void *)local_78._s_0.X != (void *)0x0) {
          FMemory::Free((void *)local_78._s_0.X);
        }
        if ((char)this->_padding_ == '\x05') {
          lVar2 = this_00->TableID;
          ::FString::FString((FString *)&local_78._s_0,L"NpcBaseID:{1}\n");
          pFVar7 = DS_Util::GetFormatString<__int64>
                             ((FString *)&local_58._s_0,(FString *)&local_78._s_0,lVar2);
          ::FString::InsertAt(&local_88,0,pFVar7);
          if ((void *)local_58._s_0.X != (void *)0x0) {
            FMemory::Free((void *)local_58._s_0.X);
          }
          if ((void *)local_78._s_0.X != (void *)0x0) {
            FMemory::Free((void *)local_78._s_0.X);
          }
        }
        ::FString::FString((FString *)&local_78._s_0,L"HP:{1}/{2}, MP:{3}/{4}\n");
        pFVar7 = DS_Util::GetFormatString<int,int,int,int>
                           ((FString *)&local_58._s_0,(FString *)&local_78._s_0,iVar14,local_res18,
                            iVar13,local_res8);
        ::FString::InsertAt(&local_88,0,pFVar7);
        if ((void *)local_58._s_0.X != (void *)0x0) {
          FMemory::Free((void *)local_58._s_0.X);
        }
        if ((void *)local_78._s_0.X != (void *)0x0) {
          FMemory::Free((void *)local_78._s_0.X);
        }
        pUVar6 = (UDS_EntityData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
        UDS_EntityData::SetDebugString(pUVar6,&local_88);
        local_78._s_0.X = (double)local_88.Data.AllocatorInstance.Data;
      }
      else {
        pUVar6 = (UDS_EntityData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
        pFVar7 = ::FString::FString((FString *)&local_78._s_0,"");
        UDS_EntityData::SetDebugString(pUVar6,pFVar7);
      }
      if ((FScriptContainerElement *)local_78._s_0.X != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_78._s_0.X);
      }
    }
  }
  return;
}

// HandleSkillCollision @ 14bbbfad0

void __thiscall
UDS_RecvSkillProcess::HandleSkillCollision
          (UDS_RecvSkillProcess *this,
          TWeakObjectPtr<UDS_SkillMoveAbilityData,FWeakObjectPtr> param_1,FDS_NetSyncData *param_2)

{
  UObject *pUVar1;
  UDS_SkillMoveAbilityData *pUVar2;
  FWeakObjectPtr local_res10 [3];
  
  if (((byte)((uint)(param_2->StateFlags).Packed >> 4) & 0x7f) == 0xe) {
    local_res10[0] = param_1.WeakPtr;
    pUVar1 = FWeakObjectPtr::Get(local_res10);
    if (pUVar1[3].field_0x21 == '\0') {
      pUVar2 = (UDS_SkillMoveAbilityData *)FWeakObjectPtr::Get(local_res10);
      UDS_SkillMoveAbilityData::SetIsCollision(pUVar2,true);
      pUVar2 = (UDS_SkillMoveAbilityData *)FWeakObjectPtr::Get(local_res10);
      UDS_SkillMoveAbilityData::SetChangedDestLocation(pUVar2,&param_2->ServerPosition);
    }
  }
  return;
}

// Initialize @ 14bbc0520

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UDS_RecvSkillProcess::Initialize
          (UDS_RecvSkillProcess *this,TWeakObjectPtr<AActor,FWeakObjectPtr> param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDS_SkillAbilityContext *pUVar3;
  longlong *plVar4;
  FWeakObjectPtr local_res10;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_res10 = param_1.WeakPtr;
  UDS_RecvMoveBaseProcess::Initialize((UDS_RecvMoveBaseProcess *)this,param_1);
  pUVar1 = FWeakObjectPtr::Get(&local_res10);
  FObjectInitializer::AssertIfInConstructor
            (pUVar1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar2 = Z_Construct_UClass_UDS_SkillAbilityContext_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar2);
  local_98._8_8_ = pUVar1;
  pUVar3 = (UDS_SkillAbilityContext *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar4 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar4 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar3 != (UDS_SkillAbilityContext *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  (this->CurSkillContext).field0_0x0.DebugPtr = pUVar3;
  return;
}

// IsActiveRecvProcess @ 14bbc2e80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
UDS_RecvSkillProcess::IsActiveRecvProcess(UDS_RecvSkillProcess *this,FDS_NetSyncData *param_1)

{
  UDS_SkillAbilityContext *pUVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  bool bVar10;
  bool bVar11;
  int iVar12;
  UDS_CharStateData *pUVar13;
  undefined7 extraout_var;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong lVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  double dVar35;
  double dVar37;
  undefined1 auVar36 [16];
  undefined1 auVar38 [16];
  EDS_CharState local_res8;
  
  pUVar1 = (this->CurSkillContext).field0_0x0.DebugPtr;
  if ((pUVar1 != (UDS_SkillAbilityContext *)0x0) && (pUVar1->SkillID != 0)) {
    return true;
  }
  pUVar13 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  local_res8 = Skill;
  bVar10 = UDS_CharStateData::HasCharState(pUVar13,&local_res8);
  pUVar13 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  local_res8 = ToggleSkill;
  bVar11 = UDS_CharStateData::HasCharState(pUVar13,&local_res8);
  uVar14 = (uint)(param_1->StateFlags).Packed >> 4;
  if (((uVar14 & 0x7f) == 0) && ((!bVar11 && (bVar10)))) {
    dVar35 = (param_1->EntityDirection).Pitch - (param_1->PrevEntityDirection).Pitch;
    dVar37 = (param_1->EntityDirection).Yaw - (param_1->PrevEntityDirection).Yaw;
    dVar3 = (param_1->EntityDirection).Roll - (param_1->PrevEntityDirection).Roll;
    auVar21._8_4_ = SUB84(dVar37,0);
    auVar21._0_8_ = dVar35;
    auVar21._12_4_ = (int)((ulonglong)dVar37 >> 0x20);
    auVar22 = divpd(auVar21,(undefined1  [16])GlobalVectorConstants::Double360.XY.m128d_f64);
    auVar22 = roundpd(in_XMM1,auVar22,3);
    dVar7 = GlobalVectorConstants::Double360.XY.m128d_f64[0];
    auVar29._0_8_ = auVar22._0_8_ * dVar7;
    dVar8 = GlobalVectorConstants::Double360.XY.m128d_f64[1];
    auVar29._8_8_ = auVar22._8_8_ * dVar8;
    auVar23._8_8_ = 0;
    auVar23._0_8_ = dVar3;
    dVar35 = dVar35 - auVar29._0_8_;
    dVar37 = dVar37 - auVar29._8_8_;
    auVar22 = divpd(auVar23,(undefined1  [16])GlobalVectorConstants::Double360.ZW.m128d_f64);
    auVar22 = roundpd(auVar29,auVar22,3);
    dVar5 = GlobalVectorConstants::Double360.ZW.m128d_f64[0];
    dVar6 = GlobalVectorConstants::Double360.ZW.m128d_f64[1];
    auVar24._8_4_ = SUB84(dVar37,0);
    auVar24._0_8_ = dVar35;
    auVar24._12_4_ = (int)((ulonglong)dVar37 >> 0x20);
    dVar3 = dVar3 - auVar22._0_8_ * dVar5;
    dVar4 = 0.0 - auVar22._8_8_ * dVar6;
    uVar15 = -(ulonglong)(0.0 <= dVar35);
    uVar17 = -(ulonglong)(0.0 <= dVar37);
    auVar30._0_8_ = uVar15 & (ulonglong)dVar35;
    auVar30._8_4_ = (undefined4)(uVar17 & (ulonglong)dVar37);
    auVar30._12_4_ = (undefined4)((uVar17 & (ulonglong)dVar37) >> 0x20);
    dVar37 = auVar24._8_8_ + dVar8;
    uVar16 = -(ulonglong)(0.0 <= dVar3);
    uVar18 = -(ulonglong)(0.0 <= dVar4);
    auVar38._0_4_ = ~(uint)uVar15 & SUB84(dVar35 + dVar7,0);
    auVar38._4_4_ = ~(uint)(uVar15 >> 0x20) & (uint)((ulonglong)(dVar35 + dVar7) >> 0x20);
    auVar38._8_4_ = ~(uint)uVar17 & SUB84(dVar37,0);
    auVar38._12_4_ = ~(uint)(uVar17 >> 0x20) & (uint)((ulonglong)dVar37 >> 0x20);
    auVar38 = auVar38 | auVar30;
    auVar25._8_4_ = SUB84(dVar4,0);
    auVar25._0_8_ = dVar3;
    auVar25._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
    dVar37 = auVar25._8_8_ + dVar6;
    auVar36._0_4_ = ~(uint)uVar16 & SUB84(dVar3 + dVar5,0);
    auVar36._4_4_ = ~(uint)(uVar16 >> 0x20) & (uint)((ulonglong)(dVar3 + dVar5) >> 0x20);
    auVar36._8_4_ = ~(uint)uVar18 & SUB84(dVar37,0);
    auVar36._12_4_ = ~(uint)(uVar18 >> 0x20) & (uint)((ulonglong)dVar37 >> 0x20);
    auVar22._8_4_ = (int)((ulonglong)dVar4 & uVar18);
    auVar22._0_8_ = (ulonglong)dVar3 & uVar16;
    auVar22._12_4_ = (int)(((ulonglong)dVar4 & uVar18) >> 0x20);
    auVar36 = auVar36 | auVar22;
    uVar16 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[0] < auVar36._0_8_);
    uVar18 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[1] < auVar36._8_8_);
    uVar17 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[0] < auVar38._0_8_);
    uVar19 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[1] < auVar38._8_8_);
    auVar31._0_8_ = uVar16 & (ulonglong)(auVar36._0_8_ - dVar5);
    uVar15 = uVar18 & (ulonglong)(auVar36._8_8_ - dVar6);
    auVar31._8_4_ = (undefined4)uVar15;
    auVar31._12_4_ = (undefined4)(uVar15 >> 0x20);
    auVar26._0_4_ = ~(uint)uVar16 & auVar36._0_4_;
    auVar26._4_4_ = ~(uint)(uVar16 >> 0x20) & auVar36._4_4_;
    auVar26._8_4_ = ~(uint)uVar18 & auVar36._8_4_;
    auVar26._12_4_ = ~(uint)(uVar18 >> 0x20) & auVar36._12_4_;
    auVar31 = auVar31 | auVar26;
    auVar27._8_4_ = SUB84(__real_3f1a36e2e0000000,0);
    auVar27._0_8_ = __real_3f1a36e2e0000000;
    auVar27._12_4_ = (int)((ulonglong)__real_3f1a36e2e0000000 >> 0x20);
    auVar32._0_8_ =
         (double)CONCAT44(auVar31._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          auVar31._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    auVar32._8_4_ = auVar31._8_4_ & _UNK_15061cc88;
    auVar32._12_4_ = auVar31._12_4_ & _UNK_15061cc8c;
    auVar28._8_8_ = -(ulonglong)(auVar27._8_8_ < auVar32._8_8_);
    auVar28._0_8_ = -(ulonglong)(__real_3f1a36e2e0000000 < auVar32._0_8_);
    uVar14 = movmskpd(uVar14,auVar28);
    auVar33._0_8_ = uVar17 & (ulonglong)(auVar38._0_8_ - dVar7);
    uVar15 = uVar19 & (ulonglong)(auVar38._8_8_ - dVar8);
    auVar33._8_4_ = (undefined4)uVar15;
    auVar33._12_4_ = (undefined4)(uVar15 >> 0x20);
    auVar2._4_4_ = ~(uint)(uVar17 >> 0x20) & auVar38._4_4_;
    auVar2._0_4_ = ~(uint)uVar17 & auVar38._0_4_;
    auVar2._8_4_ = ~(uint)uVar19 & auVar38._8_4_;
    auVar2._12_4_ = ~(uint)(uVar19 >> 0x20) & auVar38._12_4_;
    auVar33 = auVar33 | auVar2;
    auVar34._0_8_ =
         (double)CONCAT44(auVar33._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          auVar33._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    auVar34._8_4_ = auVar33._8_4_ & _UNK_15061cc88;
    auVar34._12_4_ = auVar33._12_4_ & _UNK_15061cc8c;
    lVar20 = -(ulonglong)(__real_3f1a36e2e0000000 < auVar34._8_8_);
    auVar9._8_4_ = (int)lVar20;
    auVar9._0_8_ = -(ulonglong)(__real_3f1a36e2e0000000 < auVar34._0_8_);
    auVar9._12_4_ = (int)((ulonglong)lVar20 >> 0x20);
    iVar12 = movmskpd((int)CONCAT71(extraout_var,bVar11),auVar9);
    return (uVar14 & 0x3fffffff) == 0 && iVar12 == 0;
  }
  return false;
}

// IsSameSkill @ 14bbc4e20

bool __thiscall
UDS_RecvSkillProcess::IsSameSkill(UDS_RecvSkillProcess *this,int param_1,double param_2)

{
  UDS_SkillAbilityContext *pUVar1;
  double dVar2;
  
  pUVar1 = (this->CurSkillContext).field0_0x0.DebugPtr;
  if ((pUVar1 != (UDS_SkillAbilityContext *)0x0) && (param_1 == pUVar1->SkillID)) {
    dVar2 = param_2 - pUVar1->SkillEndTime;
    return (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
           __real_3e45798ee2308c3a;
  }
  return false;
}

// NeedsFloorLocation @ 14bbc6ae0

bool __thiscall
UDS_RecvSkillProcess::NeedsFloorLocation(UDS_RecvSkillProcess *this,FDS_NetSyncData *param_1)

{
  ulonglong uVar1;
  UObject *pUVar2;
  byte bVar3;
  
  uVar1 = (param_1->StateFlags).Packed;
  if ((((uVar1 >> 0x23 & 3) == 0) && (bVar3 = (byte)(uVar1 >> 0xb) & 0x7f, bVar3 != 6)) &&
     (bVar3 != 7)) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    if (pUVar2[3].field_0x6 != '\x01') {
      return true;
    }
  }
  return false;
}

// OnEnter @ 14bbc8ce0

void __thiscall UDS_RecvSkillProcess::OnEnter(UDS_RecvSkillProcess *this,FDS_NetSyncData *param_1)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res8 [4];
  
  TDS_DataSetGetter<UDS_InputData>::Get((ulong64)local_res8);
  bVar1 = FWeakObjectPtr::IsValid(local_res8);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(local_res8);
    pUVar2[6].field_0x11 = 0;
    TMulticastDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>::Broadcast
              ((TMulticastDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy> *)
               &pUVar2[4].field_0x10,false);
  }
  return;
}

// OnExit @ 14bbc9490

void __thiscall UDS_RecvSkillProcess::OnExit(UDS_RecvSkillProcess *this,FDS_NetSyncData *param_1)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res8 [4];
  
  TDS_DataSetGetter<UDS_InputData>::Get((ulong64)local_res8);
  bVar1 = FWeakObjectPtr::IsValid(local_res8);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(local_res8);
    pUVar2[6].field_0x11 = 1;
    TMulticastDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>::Broadcast
              ((TMulticastDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy> *)
               &pUVar2[4].field_0x10,true);
  }
  return;
}

// PostProcessData @ 14bbcde10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_RecvSkillProcess::PostProcessData
          (UDS_RecvSkillProcess *this,FDS_NetSyncData *param_1,NetSyncResponse *param_2)

{
  int iVar1;
  SkillInfo *pSVar2;
  UDS_SkillAbilityContext *pUVar3;
  MultiTargetHitPoint *pMVar4;
  Vector *pVVar5;
  ulonglong uVar6;
  VectorF *pVVar7;
  SkillMoveAngles *pSVar8;
  longlong lVar9;
  ProjectileInfo *pPVar10;
  RepeatedPtrField<server_msg::SkillMoveAngle> *pRVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  bool bVar14;
  UObject *pUVar15;
  UDS_SkillMoveAbilityData *pUVar16;
  UDS_LogManager *pUVar17;
  MultiTargetHitPoint *pMVar18;
  UDS_EntityData *this_00;
  UDS_SkillData *pUVar19;
  SkillMoveAngles *pSVar20;
  byte bVar21;
  VectorF *pVVar22;
  Vector *pVVar23;
  Impl_ *pIVar24;
  ProjectileInfo *pPVar25;
  SkillInfo *pSVar26;
  double dVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined1 auStackY_1d8 [32];
  FWeakObjectPtr local_190;
  FWeakObjectPtr local_188;
  FWeakObjectPtr local_180;
  TVector<double> local_178;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  if (((param_2->_impl_)._has_bits_.has_bits_[0] & 0x10) == 0) {
    ((this->CurSkillContext).field0_0x0.DebugPtr)->SkillID = 0;
    this->LastSkillID = -1;
  }
  else {
    UDS_AbilityDataSet::GetAbilityData<UDS_SkillMoveAbilityData>
              ((ulong64 *)&local_180,(EDS_AbilityTagType *)&this->_padding_);
    bVar14 = TWeakObjectPtr<UDS_SkillMoveAbilityData,FWeakObjectPtr>::UEOpEquals
                       ((TWeakObjectPtr<UDS_SkillMoveAbilityData,FWeakObjectPtr> *)&local_180,
                        (void *)0x0);
    if (!bVar14) {
      pSVar2 = (param_2->_impl_).skill_info_;
      pUVar3 = (this->CurSkillContext).field0_0x0.DebugPtr;
      pSVar26 = &server_msg::_SkillInfo_default_instance_._instance;
      if (pSVar2 != (SkillInfo *)0x0) {
        pSVar26 = pSVar2;
      }
      if (((pUVar3 == (UDS_SkillAbilityContext *)0x0) ||
          ((pSVar26->_impl_).skill_id_ != pUVar3->SkillID)) ||
         (dVar27 = (pSVar26->_impl_).end_ticks_ - pUVar3->SkillEndTime,
         __real_3e45798ee2308c3a <
         (double)CONCAT44((uint)((ulonglong)dVar27 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar27,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) {
        UDS_SkillData::GetData
                  ((ulong64)&local_190,this->_padding_,SUB41((pSVar26->_impl_).skill_id_,0));
        bVar14 = FWeakObjectPtr::IsValid(&local_190);
        if (bVar14) {
          ((this->CurSkillContext).field0_0x0.DebugPtr)->TargetEntityID =
               (pSVar26->_impl_).target_entity_id_;
          ((this->CurSkillContext).field0_0x0.DebugPtr)->SkillID = (pSVar26->_impl_).skill_id_;
          ((this->CurSkillContext).field0_0x0.DebugPtr)->SkillStartTime =
               (pSVar26->_impl_).start_ticks_;
          ((this->CurSkillContext).field0_0x0.DebugPtr)->SkillEndTime = (pSVar26->_impl_).end_ticks_
          ;
          ((this->CurSkillContext).field0_0x0.DebugPtr)->LocationLerpTime = 0.1;
          ((this->CurSkillContext).field0_0x0.DebugPtr)->IsCollision =
               ((byte)((uint)(param_1->StateFlags).Packed >> 4) & 0x7f) == 0xe;
          uVar13 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          pUVar3 = (this->CurSkillContext).field0_0x0.DebugPtr;
          (pUVar3->TargetSkillLocation).field0_0x0._s_0.X =
               UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          (pUVar3->TargetSkillLocation).field0_0x0._s_0.Y = (double)uVar12;
          (pUVar3->TargetSkillLocation).field0_0x0._s_0.Z = (double)uVar13;
          if (((pSVar26->_impl_)._has_bits_.has_bits_[0] & 8) != 0) {
            pMVar4 = (pSVar26->_impl_).multi_target_hit_point_;
            pMVar18 = &messages::_MultiTargetHitPoint_default_instance_._instance;
            if (pMVar4 != (MultiTargetHitPoint *)0x0) {
              pMVar18 = pMVar4;
            }
            pVVar5 = (pMVar18->_impl_).target_move_reference_position_;
            pVVar23 = &_Vector_default_instance_._instance;
            if (pVVar5 != (Vector *)0x0) {
              pVVar23 = pVVar5;
            }
            DS_Util::SetFVector(&((this->CurSkillContext).field0_0x0.DebugPtr)->TargetSkillLocation,
                                pVVar23);
          }
          pVVar5 = (pSVar26->_impl_).start_position_;
          pVVar23 = &_Vector_default_instance_._instance;
          if (pVVar5 != (Vector *)0x0) {
            pVVar23 = pVVar5;
          }
          DS_Util::SetSyncLocation(this->_padding_,&local_178,pVVar23,false);
          uVar6 = (param_1->StateFlags).Packed;
          if ((((uVar6 >> 0x23 & 3) == 0) && (bVar21 = (byte)(uVar6 >> 0xb) & 0x7f, bVar21 != 6)) &&
             (bVar21 != 7)) {
            pUVar15 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
            bVar14 = pUVar15[3].field_0x6 != '\x01';
          }
          else {
            bVar14 = false;
          }
          (param_1->StateFlags).Packed = (param_1->StateFlags).Packed & 0xfffffffffffff8af;
          (param_1->StateFlags).Packed = (param_1->StateFlags).Packed | 0xa0;
          this_00 = (UDS_EntityData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
          UDS_EntityData::SetMoveMode(this_00,SkillMode);
          DS_Util::SetSyncLocation
                    (this->_padding_,&((this->CurSkillContext).field0_0x0.DebugPtr)->StartLocation,
                     &local_178,bVar14);
          pVVar7 = (pSVar26->_impl_).start_direction_;
          pVVar22 = &_VectorF_default_instance_._instance;
          if (pVVar7 != (VectorF *)0x0) {
            pVVar22 = pVVar7;
          }
          DS_Util::GetNetRotate
                    (&((this->CurSkillContext).field0_0x0.DebugPtr)->SkillRotation,pVVar22);
          pUVar3 = (this->CurSkillContext).field0_0x0.DebugPtr;
          if (pUVar3->IsCollision == true) {
            uVar28 = *(undefined4 *)&(param_1->ServerPosition).field0_0x0;
            uVar29 = *(undefined4 *)((longlong)&(param_1->ServerPosition).field0_0x0 + 4);
            uVar30 = *(undefined4 *)((longlong)&(param_1->ServerPosition).field0_0x0 + 8);
            uVar31 = *(undefined4 *)((longlong)&(param_1->ServerPosition).field0_0x0 + 0xc);
            dVar27 = (param_1->ServerPosition).field0_0x0._s_0.Z;
          }
          else {
            uVar28 = *(undefined4 *)&(param_1->DestinationPosition).field0_0x0;
            uVar29 = *(undefined4 *)((longlong)&(param_1->DestinationPosition).field0_0x0 + 4);
            uVar30 = *(undefined4 *)((longlong)&(param_1->DestinationPosition).field0_0x0 + 8);
            uVar31 = *(undefined4 *)((longlong)&(param_1->DestinationPosition).field0_0x0 + 0xc);
            dVar27 = (param_1->DestinationPosition).field0_0x0._s_0.Z;
          }
          *(undefined4 *)&(pUVar3->DestinationLocation).field0_0x0 = uVar28;
          *(undefined4 *)((longlong)&(pUVar3->DestinationLocation).field0_0x0 + 4) = uVar29;
          *(undefined4 *)((longlong)&(pUVar3->DestinationLocation).field0_0x0 + 8) = uVar30;
          *(undefined4 *)((longlong)&(pUVar3->DestinationLocation).field0_0x0 + 0xc) = uVar31;
          (pUVar3->DestinationLocation).field0_0x0._s_0.Z = dVar27;
          pUVar19 = (UDS_SkillData *)FWeakObjectPtr::Get(&local_190);
          bVar14 = UDS_SkillData::IsRotationPlace(pUVar19);
          ((this->CurSkillContext).field0_0x0.DebugPtr)->IsSkillRotationPlace = bVar14;
          pSVar8 = (pSVar26->_impl_).skill_move_random_angles_;
          pSVar20 = &server_msg::_SkillMoveAngles_default_instance_._instance;
          if (pSVar8 != (SkillMoveAngles *)0x0) {
            pSVar20 = pSVar8;
          }
          uVar6 = *(ulonglong *)&(pSVar20->_impl_).random_move_angles_;
          if ((uVar6 & 1) == 0) {
            pIVar24 = &pSVar20->_impl_;
          }
          else {
            pIVar24 = (Impl_ *)(uVar6 + 7);
          }
          iVar1 = *(int *)&(pSVar20->_impl_).random_move_angles_.field_0x8;
          pRVar11 = &pIVar24->random_move_angles_;
          for (; pIVar24 != (Impl_ *)(&pRVar11->field_0x0 + (longlong)iVar1 * 8);
              pIVar24 = (Impl_ *)&(pIVar24->random_move_angles_).field_0x8) {
            lVar9 = *(longlong *)&pIVar24->random_move_angles_;
            pUVar19 = (UDS_SkillData *)FWeakObjectPtr::Get(&local_188);
            UDS_SkillData::UpdateSkillMoveAngle
                      (pUVar19,*(int *)(lVar9 + 0x18),*(int *)(lVar9 + 0x1c));
          }
          DrawSkillDebugVisualization(this);
          ((this->CurSkillContext).field0_0x0.DebugPtr)->TryActiveSkillAbility = false;
          pUVar15 = FWeakObjectPtr::Get(&local_190);
          ((this->CurSkillContext).field0_0x0.DebugPtr)->IsMoveToggleSkill =
               *(int *)&pUVar15[9].field_0xc != 3;
          pUVar3 = (this->CurSkillContext).field0_0x0.DebugPtr;
          this->LastSkillID = pUVar3->SkillID;
          this->LastSkillEndTime = pUVar3->SkillEndTime;
          if (((pSVar26->_impl_)._has_bits_.has_bits_[0] & 0x10) != 0) {
            pPVar10 = (pSVar26->_impl_).projectile_info_;
            pPVar25 = &messages::_ProjectileInfo_default_instance_._instance;
            if (pPVar10 != (ProjectileInfo *)0x0) {
              pPVar25 = pPVar10;
            }
            (pUVar3->ThrowStartSkillInfo).ImpactTime = (pPVar25->_impl_).impact_delay_sec_;
            pVVar5 = (pPVar25->_impl_).target_position_;
            pVVar23 = &_Vector_default_instance_._instance;
            if (pVVar5 != (Vector *)0x0) {
              pVVar23 = pVVar5;
            }
            DS_Util::SetFVector(&(((this->CurSkillContext).field0_0x0.DebugPtr)->ThrowStartSkillInfo
                                 ).ImpactLocation,pVVar23);
            pVVar5 = (pPVar25->_impl_).aim_position_;
            pVVar23 = &_Vector_default_instance_._instance;
            if (pVVar5 != (Vector *)0x0) {
              pVVar23 = pVVar5;
            }
            DS_Util::SetFVector(&(((this->CurSkillContext).field0_0x0.DebugPtr)->ThrowStartSkillInfo
                                 ).EndLocation,pVVar23);
          }
        }
        else {
          pUVar17 = UDS_LogManager::GetInst();
          if (pUVar17 != (UDS_LogManager *)0x0) {
            pUVar17 = UDS_LogManager::GetInst();
            local_158._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_158,"UDS_RecvSkillProcess::PostProcessData",0x25,Yes);
            UDS_LogManager::PrintLog(pUVar17,1,Warning,local_158.Ptr,0x45,L"null skilldata %d");
            if ((void *)local_158._padding_ != (void *)0x0) {
              FMemory::Free((void *)local_158._padding_);
            }
          }
        }
      }
      else {
        local_188 = local_180;
        if ((((byte)((uint)(param_1->StateFlags).Packed >> 4) & 0x7f) == 0xe) &&
           (pUVar15 = FWeakObjectPtr::Get(&local_188), pUVar15[3].field_0x21 == '\0')) {
          pUVar16 = (UDS_SkillMoveAbilityData *)FWeakObjectPtr::Get(&local_188);
          UDS_SkillMoveAbilityData::SetIsCollision(pUVar16,true);
          pUVar16 = (UDS_SkillMoveAbilityData *)FWeakObjectPtr::Get(&local_188);
          UDS_SkillMoveAbilityData::SetChangedDestLocation(pUVar16,&param_1->ServerPosition);
        }
      }
    }
  }
  return;
}

// RecvSyncTick @ 14bbd71c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
UDS_RecvSkillProcess::RecvSyncTick
          (UDS_RecvSkillProcess *this,FDS_NetSyncData *param_1,float param_2)

{
  UDS_SkillAbilityContext *pUVar1;
  bool bVar2;
  FDS_EntityBase *this_00;
  UDS_LogManager *pUVar3;
  double dVar4;
  undefined1 auStackY_1a8 [32];
  EDS_AbilityTagType local_168 [8];
  UDS_SkillAbilityContext *local_160;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  UDS_RecvMoveBaseProcess::RecvSyncTick((UDS_RecvMoveBaseProcess *)this,param_1,param_2);
  this_00 = FDS_EntityBase::GetEntityBase((ulong64 *)&this->_padding_);
  if ((((this_00 != (FDS_EntityBase *)0x0) &&
       (pUVar1 = (this->CurSkillContext).field0_0x0.DebugPtr,
       pUVar1 != (UDS_SkillAbilityContext *)0x0)) && (pUVar1->SkillID != 0)) &&
     (((this->LastSkillID != pUVar1->SkillID ||
       (dVar4 = this->LastSkillEndTime - pUVar1->SkillEndTime,
       __real_3e45798ee2308c3a <
       (double)CONCAT44((uint)((ulonglong)dVar4 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar4,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
      (pUVar1->TryActiveSkillAbility != true)))) {
    local_160 = pUVar1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    local_168[0] = NetSyncSkill;
    bVar2 = FDS_EntityBase::TryActivateAbility
                      (this_00,local_168,(TObjectPtr<UWN_AbilityContext>)&local_160);
    if (!bVar2) {
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 != (UDS_LogManager *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        local_158._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_158,"UDS_RecvSkillProcess::UpdateSkillActive",0x27,Yes);
        UDS_LogManager::PrintLog
                  (pUVar3,1,Warning,local_158.Ptr,0x164,L"SERIN Failed NetSyncSkill %d");
        if ((void *)local_158._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_158._padding_);
        }
      }
    }
    ((this->CurSkillContext).field0_0x0.DebugPtr)->TryActiveSkillAbility = true;
  }
  bVar2 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *)&this->_padding_,
                     (void *)0x0);
  if (((!bVar2) &&
      (pUVar1 = (this->CurSkillContext).field0_0x0.DebugPtr,
      pUVar1 != (UDS_SkillAbilityContext *)0x0)) &&
     ((pUVar1->SkillID != 0 && (pUVar1->IsMoveToggleSkill == true)))) {
    bVar2 = UE::Math::TVector<double>::IsNearlyZero
                      (&param_1->VelocityVector,__real_3f1a36e2e0000000);
    if (!bVar2) {
      (**(code **)(this->_padding_ + 0x358))(this,param_1,param_2);
    }
  }
  return;
}

// ResetSkillContext @ 14bbdc6f0

void __thiscall UDS_RecvSkillProcess::ResetSkillContext(UDS_RecvSkillProcess *this)

{
  ((this->CurSkillContext).field0_0x0.DebugPtr)->SkillID = 0;
  this->LastSkillID = -1;
  return;
}

// SetupProjectileInfo @ 14bbe1450

void __thiscall
UDS_RecvSkillProcess::SetupProjectileInfo(UDS_RecvSkillProcess *this,SkillInfo *param_1)

{
  ProjectileInfo *pPVar1;
  Vector *pVVar2;
  Vector *pVVar3;
  ProjectileInfo *pPVar4;
  
  if (((param_1->_impl_)._has_bits_.has_bits_[0] & 0x10) != 0) {
    pPVar1 = (param_1->_impl_).projectile_info_;
    pPVar4 = &messages::_ProjectileInfo_default_instance_._instance;
    if (pPVar1 != (ProjectileInfo *)0x0) {
      pPVar4 = pPVar1;
    }
    (((this->CurSkillContext).field0_0x0.DebugPtr)->ThrowStartSkillInfo).ImpactTime =
         (pPVar4->_impl_).impact_delay_sec_;
    pVVar2 = (pPVar4->_impl_).target_position_;
    pVVar3 = &_Vector_default_instance_._instance;
    if (pVVar2 != (Vector *)0x0) {
      pVVar3 = pVVar2;
    }
    DS_Util::SetFVector(&(((this->CurSkillContext).field0_0x0.DebugPtr)->ThrowStartSkillInfo).
                         ImpactLocation,pVVar3);
    pVVar2 = (pPVar4->_impl_).aim_position_;
    pVVar3 = &_Vector_default_instance_._instance;
    if (pVVar2 != (Vector *)0x0) {
      pVVar3 = pVVar2;
    }
    DS_Util::SetFVector(&(((this->CurSkillContext).field0_0x0.DebugPtr)->ThrowStartSkillInfo).
                         EndLocation,pVVar3);
  }
  return;
}

// SetupSkillContextBase @ 14bbe14f0

void __thiscall
UDS_RecvSkillProcess::SetupSkillContextBase
          (UDS_RecvSkillProcess *this,SkillInfo *param_1,FDS_NetSyncData *param_2)

{
  UDS_SkillAbilityContext *pUVar1;
  MultiTargetHitPoint *pMVar2;
  Vector *pVVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  MultiTargetHitPoint *pMVar6;
  Vector *pVVar7;
  
  ((this->CurSkillContext).field0_0x0.DebugPtr)->TargetEntityID =
       (param_1->_impl_).target_entity_id_;
  ((this->CurSkillContext).field0_0x0.DebugPtr)->SkillID = (param_1->_impl_).skill_id_;
  ((this->CurSkillContext).field0_0x0.DebugPtr)->SkillStartTime = (param_1->_impl_).start_ticks_;
  ((this->CurSkillContext).field0_0x0.DebugPtr)->SkillEndTime = (param_1->_impl_).end_ticks_;
  ((this->CurSkillContext).field0_0x0.DebugPtr)->LocationLerpTime = 0.1;
  ((this->CurSkillContext).field0_0x0.DebugPtr)->IsCollision =
       ((byte)((uint)(param_2->StateFlags).Packed >> 4) & 0x7f) == 0xe;
  uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  pUVar1 = (this->CurSkillContext).field0_0x0.DebugPtr;
  (pUVar1->TargetSkillLocation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (pUVar1->TargetSkillLocation).field0_0x0._s_0.Y = (double)uVar4;
  (pUVar1->TargetSkillLocation).field0_0x0._s_0.Z = (double)uVar5;
  if (((param_1->_impl_)._has_bits_.has_bits_[0] & 8) != 0) {
    pMVar2 = (param_1->_impl_).multi_target_hit_point_;
    pMVar6 = &messages::_MultiTargetHitPoint_default_instance_._instance;
    if (pMVar2 != (MultiTargetHitPoint *)0x0) {
      pMVar6 = pMVar2;
    }
    pVVar3 = (pMVar6->_impl_).target_move_reference_position_;
    pVVar7 = &_Vector_default_instance_._instance;
    if (pVVar3 != (Vector *)0x0) {
      pVVar7 = pVVar3;
    }
    DS_Util::SetFVector(&((this->CurSkillContext).field0_0x0.DebugPtr)->TargetSkillLocation,pVVar7);
    return;
  }
  return;
}

// UpdateSkillActive @ 14bbe5840

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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

void __thiscall UDS_RecvSkillProcess::UpdateSkillActive(UDS_RecvSkillProcess *this)

{
  bool bVar1;
  FDS_EntityBase *this_00;
  UDS_LogManager *pUVar2;
  double dVar3;
  undefined1 auStackY_188 [32];
  EDS_AbilityTagType local_148 [8];
  UDS_SkillAbilityContext *local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  this_00 = FDS_EntityBase::GetEntityBase((ulong64 *)&this->_padding_);
  if ((((this_00 != (FDS_EntityBase *)0x0) &&
       (local_140 = (this->CurSkillContext).field0_0x0.DebugPtr,
       local_140 != (UDS_SkillAbilityContext *)0x0)) && (local_140->SkillID != 0)) &&
     (((this->LastSkillID != local_140->SkillID ||
       (dVar3 = this->LastSkillEndTime - local_140->SkillEndTime,
       __real_3e45798ee2308c3a <
       (double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
      (local_140->TryActiveSkillAbility != true)))) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)local_140);
    }
    local_148[0] = NetSyncSkill;
    bVar1 = FDS_EntityBase::TryActivateAbility
                      (this_00,local_148,(TObjectPtr<UWN_AbilityContext>)&local_140);
    if (!bVar1) {
      pUVar2 = UDS_LogManager::GetInst();
      if (pUVar2 != (UDS_LogManager *)0x0) {
        pUVar2 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_RecvSkillProcess::UpdateSkillActive",0x27,Yes);
        UDS_LogManager::PrintLog
                  (pUVar2,1,Warning,local_138.Ptr,0x164,L"SERIN Failed NetSyncSkill %d");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
    }
    ((this->CurSkillContext).field0_0x0.DebugPtr)->TryActiveSkillAbility = true;
  }
  return;
}

// UpdateSkillMove @ 14bbe59d0

void __thiscall
UDS_RecvSkillProcess::UpdateSkillMove
          (UDS_RecvSkillProcess *this,FDS_NetSyncData *param_1,float param_2)

{
  UDS_SkillAbilityContext *pUVar1;
  bool bVar2;
  
  bVar2 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *)&this->_padding_,
                     (void *)0x0);
  if ((((!bVar2) &&
       (pUVar1 = (this->CurSkillContext).field0_0x0.DebugPtr,
       pUVar1 != (UDS_SkillAbilityContext *)0x0)) && (pUVar1->SkillID != 0)) &&
     (pUVar1->IsMoveToggleSkill == true)) {
    bVar2 = UE::Math::TVector<double>::IsNearlyZero
                      (&param_1->VelocityVector,__real_3f1a36e2e0000000);
    if (!bVar2) {
      (**(code **)(this->_padding_ + 0x358))(this,param_1,param_2);
    }
  }
  return;
}

// UpdateSkillMoveAngles @ 14bbe5a60

void __thiscall
UDS_RecvSkillProcess::UpdateSkillMoveAngles
          (UDS_RecvSkillProcess *this,SkillInfo *param_1,
          TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr> param_2)

{
  int iVar1;
  SkillMoveAngles *pSVar2;
  ulonglong uVar3;
  longlong lVar4;
  RepeatedPtrField<server_msg::SkillMoveAngle> *pRVar5;
  SkillMoveAngles *pSVar6;
  UDS_SkillData *this_00;
  Impl_ *pIVar7;
  FWeakObjectPtr local_res18;
  
  pSVar2 = (param_1->_impl_).skill_move_random_angles_;
  pSVar6 = &server_msg::_SkillMoveAngles_default_instance_._instance;
  if (pSVar2 != (SkillMoveAngles *)0x0) {
    pSVar6 = pSVar2;
  }
  uVar3 = *(ulonglong *)&(pSVar6->_impl_).random_move_angles_;
  if ((uVar3 & 1) == 0) {
    pIVar7 = &pSVar6->_impl_;
  }
  else {
    pIVar7 = (Impl_ *)(uVar3 + 7);
  }
  iVar1 = *(int *)&(pSVar6->_impl_).random_move_angles_.field_0x8;
  pRVar5 = &pIVar7->random_move_angles_;
  local_res18 = param_2.WeakPtr;
  for (; pIVar7 != (Impl_ *)(&pRVar5->field_0x0 + (longlong)iVar1 * 8);
      pIVar7 = (Impl_ *)&(pIVar7->random_move_angles_).field_0x8) {
    lVar4 = *(longlong *)&pIVar7->random_move_angles_;
    this_00 = (UDS_SkillData *)FWeakObjectPtr::Get(&local_res18);
    UDS_SkillData::UpdateSkillMoveAngle(this_00,*(int *)(lVar4 + 0x18),*(int *)(lVar4 + 0x1c));
  }
  return;
}

