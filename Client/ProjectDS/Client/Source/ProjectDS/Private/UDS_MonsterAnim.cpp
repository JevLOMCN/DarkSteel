// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 31

// StaticClass @ 14b4f4f80

UClass * __cdecl UDS_MonsterAnim::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_MonsterAnim.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UAnimInstance::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_MonsterAnim",
               &Z_Registration_Info_UClass_UDS_MonsterAnim.InnerSingleton,
               StaticRegisterNativesUDS_MonsterAnim,0x7b0,0x10,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_MonsterAnim>,
               InternalVTableHelperCtorCaller<UDS_MonsterAnim>,local_res8,
               UDS_BattleAnim::StaticClass,USkeletalMeshComponent::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_MonsterAnim.InnerSingleton;
}

// UDS_MonsterAnim @ 14b4f74d0

UDS_MonsterAnim * __thiscall
UDS_MonsterAnim::UDS_MonsterAnim(UDS_MonsterAnim *this,FVTableHelper *param_1)

{
  UDS_BattleAnim::UDS_BattleAnim((UDS_BattleAnim *)this,param_1);
  this->DuringSpawnStatus = false;
  this->DuringSealStatus = false;
  *(undefined ***)this = &___7UDS_MonsterAnim__6B_;
  this->SealAnimIndex = 0;
  this->GroggyAnimState = None;
  this->PatrolAnimState = None;
  (this->AniIndexList_Patrol).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AniIndexList_Patrol).ArrayNum = 0;
  (this->AniIndexList_Patrol).ArrayMax = 0;
  this->EventAnimIndex = 0;
  this->ObjectHandlingAnimState = None;
  this->ShouldUpdateLookAt = false;
  this->IsTamingState = false;
  this->RunSpeed = 0.0;
  this->JogSpeed = 0.0;
  this->TamingState = Max;
  this->AnimSpeedMultiplier = 1.0;
  this->WalkSpeed = 0.0;
  return this;
}

// ~UDS_MonsterAnim @ 14b4f8470

void __thiscall UDS_MonsterAnim::~UDS_MonsterAnim(UDS_MonsterAnim *this)

{
  FScriptContainerElement *pFVar1;
  
  *(undefined ***)this = &___7UDS_MonsterAnim__6B_;
  pFVar1 = (this->AniIndexList_Patrol).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_BattleAnim::~UDS_BattleAnim((UDS_BattleAnim *)this);
  return;
}

// GetPrivateStaticClass @ 14b4f99b0

UClass * __cdecl UDS_MonsterAnim::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_MonsterAnim.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UAnimInstance::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_MonsterAnim",
               &Z_Registration_Info_UClass_UDS_MonsterAnim.InnerSingleton,
               StaticRegisterNativesUDS_MonsterAnim,0x7b0,0x10,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_MonsterAnim>,
               InternalVTableHelperCtorCaller<UDS_MonsterAnim>,local_res8,
               UDS_BattleAnim::StaticClass,USkeletalMeshComponent::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_MonsterAnim.InnerSingleton;
}

// ShouldUseLookAt @ 14b4fa750

bool __thiscall UDS_MonsterAnim::ShouldUseLookAt(UDS_MonsterAnim *this)

{
  return this->ShouldUpdateLookAt;
}

// StaticRegisterNativesUDS_MonsterAnim @ 14b4fa770

void __cdecl UDS_MonsterAnim::StaticRegisterNativesUDS_MonsterAnim(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 5;
  local_18.DataPtr = Z_Construct_UClass_UDS_MonsterAnim_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetEventAnimIndex @ 14b4fb8a0

void __cdecl UDS_MonsterAnim::execGetEventAnimIndex(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[0x30].field_0x10;
  return;
}

// execGetIsTamingState @ 14b4fb900

void __cdecl UDS_MonsterAnim::execGetIsTamingState(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = GetIsTamingState((UDS_MonsterAnim *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execHasEventAnim @ 14b4fbcd0

void __cdecl UDS_MonsterAnim::execHasEventAnim(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = HasEventAnim((UDS_MonsterAnim *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execIsRunState @ 14b4fc010

void __cdecl UDS_MonsterAnim::execIsRunState(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsRunState((UDS_MonsterAnim *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execIsWalkState @ 14b4fc090

void __cdecl UDS_MonsterAnim::execIsWalkState(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsWalkState((UDS_MonsterAnim *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// UDS_MonsterAnim @ 14b865080

UDS_MonsterAnim * __thiscall
UDS_MonsterAnim::UDS_MonsterAnim(UDS_MonsterAnim *this,FObjectInitializer *param_1)

{
  UDS_BattleAnim::UDS_BattleAnim((UDS_BattleAnim *)this,param_1);
  this->DuringSpawnStatus = false;
  this->DuringSealStatus = false;
  *(undefined ***)this = &___7UDS_MonsterAnim__6B_;
  this->SealAnimIndex = 0;
  this->GroggyAnimState = None;
  this->PatrolAnimState = None;
  (this->AniIndexList_Patrol).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AniIndexList_Patrol).ArrayNum = 0;
  (this->AniIndexList_Patrol).ArrayMax = 0;
  this->EventAnimIndex = 0;
  this->ObjectHandlingAnimState = None;
  this->ShouldUpdateLookAt = false;
  this->IsTamingState = false;
  this->RunSpeed = 0.0;
  this->JogSpeed = 0.0;
  this->TamingState = Max;
  this->AnimSpeedMultiplier = 1.0;
  this->WalkSpeed = 0.0;
  return this;
}

// CalculateGlobalAnimRateScale @ 14b869af0

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

void __thiscall UDS_MonsterAnim::CalculateGlobalAnimRateScale(UDS_MonsterAnim *this)

{
  float fVar1;
  float fVar2;
  float local_res8 [2];
  EDS_GlobalAnimRateScaleType local_res10 [6];
  
  local_res8[0] = 1.0;
  if ((this->field_0x598 == '\x01') && (fVar1 = *(float *)&this->field_0x5c0, 0.0 < fVar1)) {
    if (fVar1 < this->JogSpeed || fVar1 == this->JogSpeed) {
      fVar2 = this->WalkSpeed;
    }
    else {
      fVar2 = this->RunSpeed;
    }
    local_res8[0] = (fVar1 / fVar2) * this->AnimSpeedMultiplier;
  }
  if (*(FDS_EntityBase **)&this->field_0x430 != (FDS_EntityBase *)0x0) {
    local_res10[0] = MoveSpeed;
    FDS_EntityBase::SetGlobalAnimRateScale
              (*(FDS_EntityBase **)&this->field_0x430,local_res10,local_res8);
  }
  return;
}

// GetIsTamingState @ 14b877c30

bool __thiscall UDS_MonsterAnim::GetIsTamingState(UDS_MonsterAnim *this)

{
  return this->IsTamingState;
}

// HasEventAnim @ 14b879980

bool __thiscall UDS_MonsterAnim::HasEventAnim(UDS_MonsterAnim *this)

{
  return 0 < this->EventAnimIndex;
}

// IsMoving @ 14b87dba0

bool __thiscall UDS_MonsterAnim::IsMoving(UDS_MonsterAnim *this)

{
  if (((this->field_0x44a != '\x01') && (this->field_0x44a != '\x02')) &&
     (this->field_0x598 == '\0')) {
    return false;
  }
  return true;
}

// IsRunState @ 14b87de40

bool __thiscall UDS_MonsterAnim::IsRunState(UDS_MonsterAnim *this)

{
  return this->field_0x44a == '\x02';
}

// IsValidReferencedPtr @ 14b87ebe0

bool __thiscall UDS_MonsterAnim::IsValidReferencedPtr(UDS_MonsterAnim *this)

{
  bool bVar1;
  
  bVar1 = UDS_BattleAnim::IsValidReferencedPtr((UDS_BattleAnim *)this);
  return bVar1;
}

// IsWalkState @ 14b87ed20

bool __thiscall UDS_MonsterAnim::IsWalkState(UDS_MonsterAnim *this)

{
  return this->field_0x44a == '\x01';
}

// OnChangedCharState @ 14b885eb0

void __thiscall
UDS_MonsterAnim::OnChangedCharState
          (UDS_MonsterAnim *this,TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> param_1,
          FDS_ChangedCharStateInfo *param_2)

{
  FScriptContainerElement *_Src;
  code *pcVar1;
  bool bVar2;
  UDS_CharStateData *pUVar3;
  FGameplayTag *pFVar4;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar5;
  FDS_NpcBaseTableRow *pFVar6;
  FDS_NpcSealStateTableRow *pFVar7;
  longlong lVar8;
  EDS_StateTagType local_res8 [8];
  FWeakObjectPtr local_res10 [2];
  EDS_CharDetailState local_res20 [2];
  EDS_CharDetailState local_b8 [2];
  ForAnyElementType local_b0;
  int local_a8;
  int local_a4;
  FWeakObjectPtr local_a0;
  FWeakObjectPtr local_98;
  EDS_CharState local_90 [2];
  FWeakObjectPtr local_80;
  FWeakObjectPtr local_78;
  EDS_CharState local_70 [3];
  FDS_ChangedCharStateInfo local_58;
  
  local_res10[0] = param_1.WeakPtr;
  pUVar3 = (UDS_CharStateData *)FWeakObjectPtr::Get(local_res10);
  local_90[0] = Spawn;
  bVar2 = UDS_CharStateData::HasCharState(pUVar3,local_90);
  this->DuringSpawnStatus = bVar2;
  if (!bVar2) {
    local_58.StateTag.TagName = (param_2->StateTag).TagName;
    local_58.bIsStateTagOn = param_2->bIsStateTagOn;
    local_58._9_7_ = *(undefined7 *)&param_2->field_0x9;
    local_58.AddedCharState = param_2->AddedCharState;
    local_58.RemovedCharState = param_2->RemovedCharState;
    local_58.AddedCharDetailState = param_2->AddedCharDetailState;
    local_58.RemovedCharDetailState = param_2->RemovedCharDetailState;
    UDS_BattleAnim::OnChangedCharState
              ((UDS_BattleAnim *)this,
               (TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>)local_res10[0],&local_58);
    local_a0 = local_res10[0];
    this->GroggyAnimState = None;
    pUVar3 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_a0);
    local_90[1] = 0x80;
    bVar2 = UDS_CharStateData::HasCharState(pUVar3,local_90 + 1);
    if (bVar2) {
      pUVar3 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_a0);
      local_res20[0] = Groggy_StartAndLoop;
      bVar2 = UDS_CharStateData::HasCharDetailState(pUVar3,local_res20);
      this->GroggyAnimState = !bVar2 + Groggy_StartAndLoop;
    }
    local_80 = local_res10[0];
    pUVar3 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_80);
    local_b8[0] = EventAnim;
    bVar2 = UDS_CharStateData::HasCharDetailState(pUVar3,local_b8);
    if (bVar2) {
      pUVar3 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x438);
      local_res8[0] = EventAnim;
      pFVar4 = FDS_GameplayTags::GetStateTag(local_res8);
      pTVar5 = UDS_CharStateData::GetAniIndexList(pUVar3,pFVar4);
      local_b0.Data = (FScriptContainerElement *)0x0;
      local_a8 = pTVar5->ArrayNum;
      lVar8 = (longlong)local_a8;
      _Src = (pTVar5->AllocatorInstance).Data;
      if (local_a8 == 0) {
        local_a4 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,local_a8,0,&local_b0,local_a8,&local_a4);
        memcpy(local_b0.Data,_Src,lVar8 << 2);
      }
      if (1 < local_a8) {
        this->EventAnimIndex = *(int *)(local_b0.Data + 4);
      }
      if (local_b0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b0.Data);
      }
    }
    else {
      this->EventAnimIndex = 0;
    }
    local_78 = local_res10[0];
    this->DuringSealStatus = false;
    this->SealAnimIndex = 0;
    pUVar3 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_78);
    local_70[0] = Seal;
    bVar2 = UDS_CharStateData::HasCharState(pUVar3,local_70);
    if (bVar2) {
      pFVar6 = FDS_NpcBaseTableRow::Get(*(long64 *)(*(longlong *)&this->field_0x430 + 0x18),true);
      if ((pFVar6 != (FDS_NpcBaseTableRow *)0x0) && (pFVar6->ID_NpcSealState != 0)) {
        pFVar7 = FDS_NpcSealStateTableRow::Get((longlong)pFVar6->ID_NpcSealState,true);
        if ((pFVar7 == (FDS_NpcSealStateTableRow *)0x0) || (pFVar7->AnimIndex == 0)) {
          bVar2 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_772743416315379428>,false,
                             "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Animation\\DS_MonsterAnim.cpp"
                             ,0x11c,"false");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        else {
          this->DuringSealStatus = true;
          this->SealAnimIndex = pFVar7->AnimIndex + -1;
        }
      }
    }
    RefreshTamingAnimState(this,(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>)local_res10[0]);
    local_98 = local_res10[0];
    this->ObjectHandlingAnimState = None;
    pUVar3 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_98);
    local_70[1] = 0x8000000;
    bVar2 = UDS_CharStateData::HasCharState(pUVar3,local_70 + 1);
    if (bVar2) {
      pUVar3 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_98);
      local_b8[1] = 0x7b;
      bVar2 = UDS_CharStateData::HasCharDetailState(pUVar3,local_b8 + 1);
      if (bVar2) {
        this->ObjectHandlingAnimState = Lifted;
      }
    }
  }
  return;
}

// OnClearVariables @ 14b887ac0

void __thiscall UDS_MonsterAnim::OnClearVariables(UDS_MonsterAnim *this)

{
  FWeakObjectPtr FStackX_8;
  undefined8 uStackX_10;
  
  *(undefined8 *)&this->field_0x428 = 0;
  *(undefined8 *)&this->field_0x430 = 0;
  *(undefined8 *)&this->field_0x438 = 0;
  FStackX_8.ObjectIndex = 0;
  FStackX_8.ObjectSerialNumber = 0;
  uStackX_10 = 0;
  FWeakObjectPtr::operator=(&FStackX_8,(FObjectPtr)&uStackX_10);
  *(int *)&this->field_0x6c0 = FStackX_8.ObjectIndex;
  *(int *)&this->field_0x6c4 = FStackX_8.ObjectSerialNumber;
  FStackX_8.ObjectIndex = 0;
  FStackX_8.ObjectSerialNumber = 0;
  uStackX_10 = 0;
  FWeakObjectPtr::operator=(&FStackX_8,(FObjectPtr)&uStackX_10);
  *(int *)&this->field_0x438 = FStackX_8.ObjectIndex;
  *(int *)&this->field_0x43c = FStackX_8.ObjectSerialNumber;
  FStackX_8.ObjectIndex = 0;
  FStackX_8.ObjectSerialNumber = 0;
  uStackX_10 = 0;
  FWeakObjectPtr::operator=(&FStackX_8,(FObjectPtr)&uStackX_10);
  *(int *)&this->field_0x6c8 = FStackX_8.ObjectIndex;
  *(int *)&this->field_0x6cc = FStackX_8.ObjectSerialNumber;
  FStackX_8.ObjectIndex = 0;
  FStackX_8.ObjectSerialNumber = 0;
  uStackX_10 = 0;
  FWeakObjectPtr::operator=(&FStackX_8,(FObjectPtr)&uStackX_10);
  *(int *)&this->field_0x6d0 = FStackX_8.ObjectIndex;
  *(int *)&this->field_0x6d4 = FStackX_8.ObjectSerialNumber;
  FStackX_8.ObjectIndex = 0;
  FStackX_8.ObjectSerialNumber = 0;
  uStackX_10 = 0;
  FWeakObjectPtr::operator=(&FStackX_8,(FObjectPtr)&uStackX_10);
  *(int *)&this->field_0x764 = FStackX_8.ObjectIndex;
  *(int *)&this->field_0x768 = FStackX_8.ObjectSerialNumber;
  FStackX_8.ObjectIndex = 0;
  FStackX_8.ObjectSerialNumber = 0;
  uStackX_10 = 0;
  FWeakObjectPtr::operator=(&FStackX_8,(FObjectPtr)&uStackX_10);
  *(int *)&this->field_0x75c = FStackX_8.ObjectIndex;
  *(int *)&this->field_0x760 = FStackX_8.ObjectSerialNumber;
  return;
}

// OnInitVariables @ 14b889d80

void __thiscall UDS_MonsterAnim::OnInitVariables(UDS_MonsterAnim *this)

{
  code *pcVar1;
  bool bVar2;
  FDS_NpcBaseTableRow *pFVar3;
  
  UDS_BattleAnim::OnInitVariables((UDS_BattleAnim *)this);
  if (*(longlong *)&this->field_0x430 != 0) {
    pFVar3 = FDS_NpcBaseTableRow::GetRef(*(long64 *)(*(longlong *)&this->field_0x430 + 0x18),true);
    this->ShouldUpdateLookAt = pFVar3->IsNpcLookAt;
    this->WalkSpeed = (float)pFVar3->WalkSpeed;
    this->RunSpeed = (float)pFVar3->RunSpeed;
    if (0.0 < pFVar3->NpcScale) {
      this->AnimSpeedMultiplier = __real_3f800000 / pFVar3->NpcScale;
    }
    else {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_772743416315379671>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Animation\\DS_MonsterAnim.cpp"
                         ,0x29,"npcBaseTableRow.NpcScale > 0.0f");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (0.0 < pFVar3->RunSpeed) {
      this->JogSpeed =
           (float)((pFVar3->RunSpeed - pFVar3->WalkSpeed) * __real_3fe0000000000000 +
                  pFVar3->WalkSpeed);
    }
  }
  return;
}

// OnNativeThreadSafeUpdateAnimation @ 14b88b2d0

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
UDS_MonsterAnim::OnNativeThreadSafeUpdateAnimation(UDS_MonsterAnim *this,float param_1)

{
  float fVar1;
  float fVar2;
  float local_res8 [4];
  EDS_GlobalAnimRateScaleType local_res18 [4];
  
  UDS_BattleAnim::OnNativeThreadSafeUpdateAnimation((UDS_BattleAnim *)this,param_1);
  local_res8[0] = 1.0;
  if ((this->field_0x598 == '\x01') && (fVar1 = *(float *)&this->field_0x5c0, 0.0 < fVar1)) {
    if (fVar1 < this->JogSpeed || fVar1 == this->JogSpeed) {
      fVar2 = this->WalkSpeed;
    }
    else {
      fVar2 = this->RunSpeed;
    }
    local_res8[0] = (fVar1 / fVar2) * this->AnimSpeedMultiplier;
  }
  if (*(FDS_EntityBase **)&this->field_0x430 != (FDS_EntityBase *)0x0) {
    local_res18[0] = MoveSpeed;
    FDS_EntityBase::SetGlobalAnimRateScale
              (*(FDS_EntityBase **)&this->field_0x430,local_res18,local_res8);
  }
  return;
}

// OnNativeUpdateAnimation @ 14b88be00

void __thiscall UDS_MonsterAnim::OnNativeUpdateAnimation(UDS_MonsterAnim *this,float param_1)

{
  bool bVar1;
  undefined1 auVar2 [16];
  double dVar3;
  undefined1 uVar4;
  double dVar5;
  
  dVar5 = (double)param_1;
  if ((double)param_1 <= __real_3f50624dd2f1a9fc) {
    dVar5 = __real_3f50624dd2f1a9fc;
  }
  dVar5 = __real_3ff0000000000000 / dVar5;
  *(double *)&this->field_0x520 =
       (*(double *)&this->field_0x4d8 - *(double *)&this->field_0x4f0) * dVar5;
  dVar3 = (*(double *)&this->field_0x4e8 - *(double *)&this->field_0x500) * dVar5;
  auVar2._8_4_ = SUB84(dVar3,0);
  auVar2._0_8_ = (*(double *)&this->field_0x4e0 - *(double *)&this->field_0x4f8) * dVar5;
  auVar2._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  *(undefined1 (*) [16])&this->field_0x528 = auVar2;
  *(undefined8 *)&this->field_0x4f0 = *(undefined8 *)&this->field_0x4d8;
  *(undefined8 *)&this->field_0x4f8 = *(undefined8 *)&this->field_0x4e0;
  bVar1 = __real_40a00000 < *(float *)&this->field_0x5bc;
  *(undefined8 *)&this->field_0x500 = *(undefined8 *)&this->field_0x4e8;
  if (bVar1) {
    *(undefined4 *)&this->field_0x508 = *(undefined4 *)&this->field_0x4d8;
    *(undefined4 *)&this->field_0x50c = *(undefined4 *)&this->field_0x4dc;
    *(undefined4 *)&this->field_0x510 = *(undefined4 *)&this->field_0x4e0;
    *(undefined4 *)&this->field_0x514 = *(undefined4 *)&this->field_0x4e4;
    *(undefined8 *)&this->field_0x518 = *(undefined8 *)&this->field_0x4e8;
  }
  this->field_0x561 = this->field_0x560;
  uVar4 = (**(code **)(*(longlong *)this + 0x400))();
  this->field_0x560 = uVar4;
  return;
}

// RefreshAttackState @ 14b8962e0

bool __thiscall
UDS_MonsterAnim::RefreshAttackState(UDS_MonsterAnim *this,FGameplayTag *param_1,bool param_2)

{
  FScriptContainerElement *_Src;
  bool bVar1;
  int iVar2;
  UDS_CharStateData *pUVar3;
  FGameplayTag *pFVar4;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar5;
  int iVar6;
  int iVar7;
  EDS_CharDetailState local_res20 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_18;
  
  bVar1 = UDS_BattleAnim::RefreshAttackState((UDS_BattleAnim *)this,param_1,param_2);
  if (!bVar1) {
    return false;
  }
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  this->field_0x758 = param_2;
  this->field_0x6dc = 2;
  pUVar3 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x438);
  local_res20[0] = NormalAttack;
  bVar1 = UDS_CharStateData::HasCharDetailState(pUVar3,local_res20);
  if (bVar1) {
    pUVar3 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x438);
    local_res20[0] = CONCAT31(local_res20[0]._1_3_,0x14);
  }
  else {
    pUVar3 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x438);
    local_res20[0] = CONCAT31(local_res20[0]._1_3_,0x15);
  }
  pFVar4 = FDS_GameplayTags::GetStateTag((EDS_StateTagType *)local_res20);
  pTVar5 = UDS_CharStateData::GetAniIndexList(pUVar3,pFVar4);
  if (&local_18 != pTVar5) {
    iVar2 = pTVar5->ArrayNum;
    _Src = (pTVar5->AllocatorInstance).Data;
    local_18.ArrayNum = iVar2;
    if ((iVar2 == 0) && (iVar7 = 0, local_18.ArrayMax == 0)) goto LAB_14b8963e2;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar2,local_18.ArrayMax,&local_18.AllocatorInstance,iVar2,&local_18.ArrayMax);
    if (iVar2 != 0) {
      memcpy(local_18.AllocatorInstance.Data,_Src,(longlong)iVar2 << 2);
    }
  }
  iVar7 = local_18.ArrayNum;
LAB_14b8963e2:
  this->field_0x6db = this->field_0x6dc;
  iVar2 = -1;
  if (iVar7 < 1) {
    iVar6 = -1;
  }
  else {
    iVar6 = *(int *)local_18.AllocatorInstance.Data + -1;
  }
  *(int *)&this->field_0x74c = iVar6;
  if (iVar7 < 2) {
    iVar6 = -1;
  }
  else {
    iVar6 = *(int *)(local_18.AllocatorInstance.Data + 4) + -1;
  }
  *(int *)&this->field_0x750 = iVar6;
  if (2 < iVar7) {
    iVar2 = *(int *)(local_18.AllocatorInstance.Data + 8) + -1;
  }
  *(int *)&this->field_0x754 = iVar2;
  this->field_0x758 = 1;
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return true;
}

// RefreshEventAnimState @ 14b896860

void __thiscall
UDS_MonsterAnim::RefreshEventAnimState
          (UDS_MonsterAnim *this,TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> param_1)

{
  FScriptContainerElement *_Src;
  bool bVar1;
  UDS_CharStateData *pUVar2;
  FGameplayTag *pFVar3;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar4;
  longlong lVar5;
  FWeakObjectPtr local_res10;
  EDS_CharDetailState local_res18 [2];
  ForAnyElementType local_18;
  int local_10;
  int local_c;
  
  local_res10 = param_1.WeakPtr;
  pUVar2 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res10);
  local_res18[0] = EventAnim;
  bVar1 = UDS_CharStateData::HasCharDetailState(pUVar2,local_res18);
  if (bVar1) {
    pUVar2 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x438);
    local_res18[0] = CONCAT31(local_res18[0]._1_3_,0x85);
    pFVar3 = FDS_GameplayTags::GetStateTag((EDS_StateTagType *)local_res18);
    pTVar4 = UDS_CharStateData::GetAniIndexList(pUVar2,pFVar3);
    local_18.Data = (FScriptContainerElement *)0x0;
    local_10 = pTVar4->ArrayNum;
    lVar5 = (longlong)local_10;
    _Src = (pTVar4->AllocatorInstance).Data;
    if (local_10 == 0) {
      local_c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_10,0,&local_18,local_10,&local_c);
      memcpy(local_18.Data,_Src,lVar5 << 2);
    }
    if (1 < local_10) {
      this->EventAnimIndex = *(int *)(local_18.Data + 4);
    }
    if (local_18.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data);
      return;
    }
  }
  else {
    this->EventAnimIndex = 0;
  }
  return;
}

// RefreshGroggyAnimState @ 14b896970

void __thiscall
UDS_MonsterAnim::RefreshGroggyAnimState
          (UDS_MonsterAnim *this,TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> param_1)

{
  bool bVar1;
  UDS_CharStateData *pUVar2;
  EDS_CharState local_res8;
  FWeakObjectPtr local_res10 [3];
  
  this->GroggyAnimState = None;
  local_res10[0] = param_1.WeakPtr;
  pUVar2 = (UDS_CharStateData *)FWeakObjectPtr::Get(local_res10);
  local_res8 = Groggy;
  bVar1 = UDS_CharStateData::HasCharState(pUVar2,&local_res8);
  if (bVar1) {
    pUVar2 = (UDS_CharStateData *)FWeakObjectPtr::Get(local_res10);
    local_res8 = CONCAT44(local_res8._4_4_,0x17);
    bVar1 = UDS_CharStateData::HasCharDetailState(pUVar2,(EDS_CharDetailState *)&local_res8);
    this->GroggyAnimState = !bVar1 + Groggy_StartAndLoop;
  }
  return;
}

// RefreshObjectHandlingAnimState @ 14b8972a0

void __thiscall
UDS_MonsterAnim::RefreshObjectHandlingAnimState
          (UDS_MonsterAnim *this,TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> param_1)

{
  bool bVar1;
  UDS_CharStateData *pUVar2;
  EDS_CharState local_res8;
  FWeakObjectPtr local_res10 [3];
  
  this->ObjectHandlingAnimState = None;
  local_res10[0] = param_1.WeakPtr;
  pUVar2 = (UDS_CharStateData *)FWeakObjectPtr::Get(local_res10);
  local_res8 = NPCClientControl;
  bVar1 = UDS_CharStateData::HasCharState(pUVar2,&local_res8);
  if (bVar1) {
    pUVar2 = (UDS_CharStateData *)FWeakObjectPtr::Get(local_res10);
    local_res8 = CONCAT44(local_res8._4_4_,0x7b);
    bVar1 = UDS_CharStateData::HasCharDetailState(pUVar2,(EDS_CharDetailState *)&local_res8);
    if (bVar1) {
      this->ObjectHandlingAnimState = Lifted;
    }
  }
  return;
}

// RefreshSealAnimState @ 14b897310

void __thiscall
UDS_MonsterAnim::RefreshSealAnimState
          (UDS_MonsterAnim *this,TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> param_1)

{
  code *pcVar1;
  bool bVar2;
  UDS_CharStateData *this_00;
  FDS_NpcBaseTableRow *pFVar3;
  FDS_NpcSealStateTableRow *pFVar4;
  EDS_CharState local_res8;
  FWeakObjectPtr local_res10 [3];
  
  this->DuringSealStatus = false;
  this->SealAnimIndex = 0;
  local_res10[0] = param_1.WeakPtr;
  this_00 = (UDS_CharStateData *)FWeakObjectPtr::Get(local_res10);
  local_res8 = Seal;
  bVar2 = UDS_CharStateData::HasCharState(this_00,&local_res8);
  if (bVar2) {
    pFVar3 = FDS_NpcBaseTableRow::Get(*(long64 *)(*(longlong *)&this->field_0x430 + 0x18),true);
    if ((pFVar3 != (FDS_NpcBaseTableRow *)0x0) && (pFVar3->ID_NpcSealState != 0)) {
      pFVar4 = FDS_NpcSealStateTableRow::Get((longlong)pFVar3->ID_NpcSealState,true);
      if ((pFVar4 != (FDS_NpcSealStateTableRow *)0x0) && (pFVar4->AnimIndex != 0)) {
        this->DuringSealStatus = true;
        this->SealAnimIndex = pFVar4->AnimIndex + -1;
        return;
      }
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_772743416315379428>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Animation\\DS_MonsterAnim.cpp"
                         ,0x11c,"false");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  return;
}

// RefreshTamingAnimState @ 14b897450

void __thiscall
UDS_MonsterAnim::RefreshTamingAnimState
          (UDS_MonsterAnim *this,TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> param_1)

{
  bool bVar1;
  UDS_CharStateData *pUVar2;
  EDS_CharState local_res8;
  FWeakObjectPtr local_res10;
  
  this->IsTamingState = false;
  local_res10 = param_1.WeakPtr;
  pUVar2 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res10);
  local_res8 = Taming;
  bVar1 = UDS_CharStateData::HasCharState(pUVar2,&local_res8);
  if (bVar1) {
    this->IsTamingState = true;
    pUVar2 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res10);
    local_res8._0_4_ = Groggy|AutoMove;
    bVar1 = UDS_CharStateData::HasCharDetailState(pUVar2,(EDS_CharDetailState *)&local_res8);
    if (bVar1) {
      this->TamingState = MoveToFood;
      return;
    }
    pUVar2 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res10);
    local_res8._0_4_ = Groggy|AutoMove|Swim;
    bVar1 = UDS_CharStateData::HasCharDetailState(pUVar2,(EDS_CharDetailState *)&local_res8);
    if (bVar1) {
      this->TamingState = ReturnToStart;
      return;
    }
    pUVar2 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res10);
    local_res8._0_4_ = Groggy|AutoMove|Shield;
    bVar1 = UDS_CharStateData::HasCharDetailState(pUVar2,(EDS_CharDetailState *)&local_res8);
    if (bVar1) {
      this->TamingState = Think;
      return;
    }
    pUVar2 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res10);
    local_res8._0_4_ = Groggy|AutoMove|Shield|Swim;
    bVar1 = UDS_CharStateData::HasCharDetailState(pUVar2,(EDS_CharDetailState *)&local_res8);
    if (bVar1) {
      this->TamingState = Eat;
      return;
    }
    pUVar2 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res10);
    local_res8._0_4_ = Groggy|Avoid;
    bVar1 = UDS_CharStateData::HasCharDetailState(pUVar2,(EDS_CharDetailState *)&local_res8);
    if (bVar1) {
      this->TamingState = Mounting;
      return;
    }
    pUVar2 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res10);
    local_res8._0_4_ = Groggy|Avoid|Swim;
    bVar1 = UDS_CharStateData::HasCharDetailState(pUVar2,(EDS_CharDetailState *)&local_res8);
    if (bVar1) {
      this->TamingState = MiniGame;
      return;
    }
    pUVar2 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res10);
    local_res8._0_4_ = Groggy|Avoid|Shield;
    bVar1 = UDS_CharStateData::HasCharDetailState(pUVar2,(EDS_CharDetailState *)&local_res8);
    if (bVar1) {
      this->TamingState = FailDismounting;
      return;
    }
    pUVar2 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res10);
    local_res8._0_4_ = Groggy|Avoid|Shield|Swim;
    bVar1 = UDS_CharStateData::HasCharDetailState(pUVar2,(EDS_CharDetailState *)&local_res8);
    if (bVar1) {
      this->TamingState = SuccessDismounting;
      return;
    }
    pUVar2 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res10);
    local_res8._0_4_ = Groggy|Avoid|AutoMove;
    bVar1 = UDS_CharStateData::HasCharDetailState(pUVar2,(EDS_CharDetailState *)&local_res8);
    if (bVar1) {
      this->TamingState = Success;
      return;
    }
    pUVar2 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res10);
    local_res8 = CONCAT44(local_res8._4_4_,0x8d);
    bVar1 = UDS_CharStateData::HasCharDetailState(pUVar2,(EDS_CharDetailState *)&local_res8);
    if (bVar1) {
      this->TamingState = Fail;
    }
  }
  return;
}

// UpdateLookAt @ 14b8a2d70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UDS_MonsterAnim::UpdateLookAt(UDS_MonsterAnim *this,float param_1)

{
  double dVar1;
  char cVar2;
  USceneComponent *this_00;
  double dVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  UObject *pUVar8;
  AActor *pAVar9;
  TVector<double>_u_0 *pTVar10;
  float fVar11;
  uint uVar12;
  uint uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined8 uVar18;
  double dVar19;
  undefined8 uVar20;
  TVector<double>_u_0 local_c8 [8];
  
  pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x438);
  cVar2 = pUVar8[6].field_0x20;
  this->field_0x44c = cVar2 != '\0';
  if (cVar2 == '\0') {
    if (0.0 < *(float *)&this->field_0x468) {
      pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x6d0);
      fVar11 = *(float *)&this->field_0x468 - param_1 * *(float *)(pUVar8 + 5);
      if (__real_3f800000 <= fVar11) {
        fVar11 = __real_3f800000;
      }
      if (fVar11 <= 0.0) {
        fVar11 = 0.0;
      }
      *(float *)&this->field_0x468 = fVar11;
    }
  }
  else {
    pAVar9 = UAnimInstance::GetOwningActor((UAnimInstance *)this);
    this_00 = (pAVar9->RootComponent).field0_0x0.DebugPtr;
    if (this_00 == (USceneComponent *)0x0) {
      pTVar10 = local_c8;
      local_c8[0]._s_0.X = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.X;
      local_c8[0]._s_0.Y = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Y;
      local_c8[0]._s_0.Z = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z;
    }
    else {
      pTVar10 = &USceneComponent::GetForwardVector(this_00,(TVector<double> *)&local_c8[0]._s_0)->
                 field0_0x0;
    }
    dVar1 = __real_4059000000000000;
    dVar5 = (((TVector<double>_u_0 *)&(pTVar10->_s_0).X)->_s_0).X;
    dVar6 = (pTVar10->_s_0).Y;
    uVar12 = (uint)*(undefined8 *)&this->field_0x450 & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar13 = (uint)((ulonglong)*(undefined8 *)&this->field_0x450 >> 0x20) &
             __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    dVar16 = (pTVar10->_s_0).Z;
    dVar17 = *(double *)&this->field_0x4a0 + *(double *)&this->field_0x470;
    dVar19 = *(double *)&this->field_0x478 + *(double *)&this->field_0x4a8;
    dVar3 = *(double *)&this->field_0x480 + *(double *)&this->field_0x4b0;
    if ((((double)CONCAT44(uVar13,uVar12) < __real_3f1a36e2e0000000 ||
          (double)CONCAT44(uVar13,uVar12) == __real_3f1a36e2e0000000) &&
        (uVar12 = (uint)*(undefined8 *)&this->field_0x458 &
                  (uint)__xmm_7fffffffffffffff7fffffffffffffff,
        uVar13 = (uint)((ulonglong)*(undefined8 *)&this->field_0x458 >> 0x20) &
                 __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
        (double)CONCAT44(uVar13,uVar12) < __real_3f1a36e2e0000000 ||
        (double)CONCAT44(uVar13,uVar12) == __real_3f1a36e2e0000000)) &&
       (uVar12 = (uint)*(undefined8 *)&this->field_0x460 &
                 (uint)__xmm_7fffffffffffffff7fffffffffffffff,
       uVar13 = (uint)((ulonglong)*(undefined8 *)&this->field_0x460 >> 0x20) &
                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
       (double)CONCAT44(uVar13,uVar12) < __real_3f1a36e2e0000000 ||
       (double)CONCAT44(uVar13,uVar12) == __real_3f1a36e2e0000000)) {
      dVar14 = dVar16 * __real_4059000000000000;
      *(double *)&this->field_0x450 = dVar5 * __real_4059000000000000 + dVar17;
      *(double *)&this->field_0x458 = dVar6 * dVar1 + dVar19;
      *(double *)&this->field_0x460 = dVar14 + dVar3;
    }
    pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x438);
    dVar14 = *(double *)(pUVar8 + 7);
    dVar7 = *(double *)&pUVar8[7].field_0x8;
    dVar1 = *(double *)&pUVar8[7].field_0x10;
    dVar17 = dVar14 - dVar17;
    dVar19 = dVar7 - dVar19;
    dVar3 = dVar1 - dVar3;
    dVar15 = dVar19 * dVar19 + dVar17 * dVar17 + dVar3 * dVar3;
    uVar18 = dVar17;
    uVar20 = dVar19;
    uVar4 = dVar3;
    if ((dVar15 != __real_3ff0000000000000) &&
       (uVar18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
       uVar20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
       uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
       __real_3e45798ee0000000 <= dVar15)) {
      dVar15 = __real_3ff0000000000000 / SQRT(dVar15);
      uVar18 = dVar17 * dVar15;
      uVar20 = dVar19 * dVar15;
      uVar4 = dVar3 * dVar15;
    }
    fVar11 = (float)(dVar6 * (double)uVar20 + dVar5 * (double)uVar18 + dVar16 * (double)uVar4);
    dVar16 = __real_bff0000000000000;
    if ((__real_bf800000 <= fVar11) && (dVar16 = (double)fVar11, __real_3ff0000000000000 <= dVar16))
    {
      dVar16 = __real_3ff0000000000000;
    }
    dVar16 = acos(dVar16);
    if (__real_42b40000 <= (float)(dVar16 * __real_404ca5dc1a63c1f8)) {
      pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x6d0);
      fVar11 = *(float *)&this->field_0x468 - param_1 * *(float *)(pUVar8 + 5);
    }
    else {
      pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x6d0);
      dVar16 = (double)(param_1 * *(float *)&pUVar8[4].field_0x1c);
      *(double *)&this->field_0x450 =
           (dVar14 - *(double *)&this->field_0x450) * dVar16 + *(double *)&this->field_0x450;
      *(double *)&this->field_0x458 =
           (dVar7 - *(double *)&this->field_0x458) * dVar16 + *(double *)&this->field_0x458;
      *(double *)&this->field_0x460 =
           (dVar1 - *(double *)&this->field_0x460) * dVar16 + *(double *)&this->field_0x460;
      pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x6d0);
      fVar11 = param_1 * *(float *)&pUVar8[4].field_0x24 + *(float *)&this->field_0x468;
    }
    *(float *)&this->field_0x468 = fVar11;
    if (__real_3f800000 <= fVar11) {
      fVar11 = __real_3f800000;
    }
    if (fVar11 <= 0.0) {
      fVar11 = 0.0;
    }
    *(float *)&this->field_0x468 = fVar11;
  }
  return;
}

