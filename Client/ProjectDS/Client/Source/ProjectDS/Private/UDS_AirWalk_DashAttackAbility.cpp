// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 15

// StaticClass @ 14b40ec90

UClass * __cdecl UDS_AirWalk_DashAttackAbility::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_AirWalk_DashAttackAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AirWalk_DashAttackAbility",
               &Z_Registration_Info_UClass_UDS_AirWalk_DashAttackAbility.InnerSingleton,
               StaticRegisterNativesUDS_AirWalk_DashAttackAbility,400,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_AirWalk_DashAttackAbility>,
               InternalVTableHelperCtorCaller<UDS_AirWalk_DashAttackAbility>,local_res8,
               UDS_AirWalk_BaseAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_AirWalk_DashAttackAbility.InnerSingleton;
}

// UDS_AirWalk_DashAttackAbility @ 14b4117a0

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

UDS_AirWalk_DashAttackAbility * __thiscall
UDS_AirWalk_DashAttackAbility::UDS_AirWalk_DashAttackAbility
          (UDS_AirWalk_DashAttackAbility *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->DashDirection).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->DashDirection).field0_0x0._s_0.Y = (double)uVar1;
  (this->DashDirection).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->DashVelocity).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->DashVelocity).field0_0x0._s_0.Y = (double)uVar1;
  (this->DashVelocity).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return this;
}

// UDS_AirWalk_DashAttackAbility @ 14b411820

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

UDS_AirWalk_DashAttackAbility * __thiscall
UDS_AirWalk_DashAttackAbility::UDS_AirWalk_DashAttackAbility
          (UDS_AirWalk_DashAttackAbility *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->DashDirection).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->DashDirection).field0_0x0._s_0.Y = (double)uVar1;
  (this->DashDirection).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->DashVelocity).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->DashVelocity).field0_0x0._s_0.Y = (double)uVar1;
  (this->DashVelocity).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return this;
}

// ~UDS_AirWalk_DashAttackAbility @ 14b412090

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
UDS_AirWalk_DashAttackAbility::~UDS_AirWalk_DashAttackAbility(UDS_AirWalk_DashAttackAbility *this)

{
  this->_padding_ = (longlong)&UDS_AirWalk_BaseAbility::_vftable__for__UObject__;
  this->_padding_ = (longlong)&UDS_AirWalk_BaseAbility::_vftable__for__IGameplayTaskOwnerInterface__
  ;
  UDS_GameplayAbility::~UDS_GameplayAbility((UDS_GameplayAbility *)this);
  return;
}

// GetAirWalkStep @ 14b4130c0

EDS_AirWalkStep __thiscall
UDS_AirWalk_DashAttackAbility::GetAirWalkStep(UDS_AirWalk_DashAttackAbility *this)

{
  return UseSkillAirDash;
}

// GetPrivateStaticClass @ 14b413ba0

UClass * __cdecl UDS_AirWalk_DashAttackAbility::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_AirWalk_DashAttackAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AirWalk_DashAttackAbility",
               &Z_Registration_Info_UClass_UDS_AirWalk_DashAttackAbility.InnerSingleton,
               StaticRegisterNativesUDS_AirWalk_DashAttackAbility,400,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_AirWalk_DashAttackAbility>,
               InternalVTableHelperCtorCaller<UDS_AirWalk_DashAttackAbility>,local_res8,
               UDS_AirWalk_BaseAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_AirWalk_DashAttackAbility.InnerSingleton;
}

// ShouldTickComponent @ 14b414170

bool __thiscall
UDS_AirWalk_DashAttackAbility::ShouldTickComponent(UDS_AirWalk_DashAttackAbility *this)

{
  return true;
}

// StaticRegisterNativesUDS_AirWalk_DashAttackAbility @ 14b414350

void __cdecl UDS_AirWalk_DashAttackAbility::StaticRegisterNativesUDS_AirWalk_DashAttackAbility(void)

{
  return;
}

// CheckCrash @ 14b79f3a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UDS_AirWalk_DashAttackAbility::CheckCrash(UDS_AirWalk_DashAttackAbility *this,bool *param_1)

{
  longlong *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  ECollisionChannel EVar4;
  UDS_MovementCore *pUVar5;
  TRotator<double> *this_01;
  TStatId TVar6;
  AActor *pAVar7;
  UWorld *this_02;
  UObject *pUVar8;
  FCollisionShape *pFVar9;
  undefined4 uVar10;
  float fVar11;
  undefined4 uVar12;
  double dVar13;
  float fVar14;
  undefined1 auStackY_2d8 [32];
  FWeakObjectPtr local_288;
  undefined8 local_280;
  TVector<double>_u_0 local_278;
  undefined8 local_250;
  undefined4 uStack_248;
  undefined1 uStack_244;
  undefined2 uStack_243;
  undefined1 uStack_241;
  TVector<double>_u_0 local_240;
  undefined1 local_220 [24];
  TQuat<double> local_208;
  TRotator<double> local_1e8;
  undefined1 local_1c8 [164];
  int local_124;
  FWeakObjectPtr local_110;
  FWeakObjectPtr FStack_108;
  IActorInstanceManagerInterface *local_100;
  undefined8 uStack_f8;
  FCollisionQueryParams local_c8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  (**(code **)(*(longlong *)this->_padding_ + 0x160))((longlong *)this->_padding_,&local_288);
  bVar2 = FWeakObjectPtr::IsValid(&local_288);
  if (bVar2) {
    this_00 = &this->_padding_;
    pUVar5 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
    UDS_MovementCore::GetActorLocation(pUVar5,(TVector<double> *)&local_278._s_0);
    dVar13 = (double)*(float *)(this->_padding_ + 0x58);
    local_240._s_0.X = dVar13 * (this->DashDirection).field0_0x0._s_0.X + local_278._s_0.X;
    local_240._s_0.Y = dVar13 * (this->DashDirection).field0_0x0._s_0.Y + local_278._s_0.Y;
    local_240._s_0.Z = dVar13 * (this->DashDirection).field0_0x0._s_0.Z + local_278._s_0.Z;
    pUVar5 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
    this_01 = UDS_MovementCore::GetActorRotation(pUVar5,&local_1e8);
    UE::Math::TRotator<double>::Quaternion(this_01,&local_208);
    memset(local_1c8,0,0x100);
    uStack_248 = 0xffffffff;
    uStack_243 = 0;
    uStack_241 = 0;
    local_250 = 0;
    uStack_244 = 0;
    local_110.ObjectIndex = 0;
    local_110.ObjectSerialNumber = 0;
    FStack_108.ObjectIndex = 0;
    FStack_108.ObjectSerialNumber = 0;
    local_1c8._4_4_ = 1.0;
    uStack_f8._0_4_ = -1;
    uStack_f8._4_1_ = Invalid;
    uStack_f8._5_3_ = 0;
    local_124 = -1;
    local_c8.OwnerTag.ComparisonIndex.Value = 0;
    local_c8.OwnerTag.Number = 0;
    local_100 = (IActorInstanceManagerInterface *)0x0;
    local_c8.IgnoreComponents.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_c8.IgnoreComponents.ArrayNum = 0;
    local_c8.IgnoreComponents.ArrayMax = 8;
    local_c8.IgnoreSourceObjects.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0
    ;
    local_c8.IgnoreSourceObjects.ArrayNum = 0;
    local_c8.IgnoreSourceObjects.ArrayMax = 4;
    local_c8.bTraceComplex = false;
    local_c8.bFindInitialOverlaps = true;
    local_c8.bReturnFaceIndex = false;
    local_c8.bReturnPhysicalMaterial = false;
    local_c8.MobilityType = Any;
    local_280 = 0;
    local_c8.TraceTag.ComparisonIndex.Value = 0;
    local_c8.TraceTag.Number = 0;
    local_c8.bComponentListUnique = true;
    local_c8.IgnoreMask = '\0';
    local_c8.bIgnoreBlocks = false;
    local_c8.bIgnoreTouches = false;
    local_c8.bSkipNarrowPhase = false;
    TVar6 = FCollisionQueryParams::GetUnknownStatId();
    local_c8.StatId.StatIdPtr = *(TStatIdData **)&(TVar6.StatIdPtr)->Name;
    local_c8.bDebugQuery = false;
    local_c8.bTraceIntoSubComponents = true;
    local_c8.bReplaceHitWithSubComponents = true;
    pAVar7 = (AActor *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    FCollisionQueryParams::AddIgnoredActor(&local_c8,pAVar7);
    this_02 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
    pUVar8 = FWeakObjectPtr::Get(&local_288);
    pFVar9 = (FCollisionShape *)(**(code **)(*(longlong *)pUVar8 + 0x8b8))(pUVar8,local_220,0);
    pUVar8 = FWeakObjectPtr::Get(&local_288);
    EVar4 = (**(code **)(*(longlong *)pUVar8 + 0x5f0))(pUVar8);
    bVar2 = UWorld::SweepSingleByChannel
                      (this_02,(FHitResult *)local_1c8,(TVector<double> *)&local_278._s_0,
                       (TVector<double> *)&local_240._s_0,&local_208,EVar4,pFVar9,&local_c8,
                       &FCollisionResponseParams::DefaultResponseParam);
    if (bVar2) {
      uVar10 = (undefined4)local_1c8._104_8_;
      uVar12 = SUB84(local_1c8._104_8_,4);
      dVar13 = __real_bff0000000000000;
      if (__real_bff0000000000000 <= (double)local_1c8._104_8_) {
        if (__real_3ff0000000000000 <= (double)local_1c8._104_8_) {
          uVar10 = SUB84(__real_3ff0000000000000,0);
          uVar12 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
        }
        dVar13 = (double)CONCAT44(uVar12,uVar10);
      }
      dVar13 = acos(dVar13);
      fVar14 = (float)dVar13 * __real_42652ee0;
      if (__real_42b40000 < fVar14) {
        fVar14 = __real_43340000 - fVar14;
      }
      pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
      fVar11 = (float)(**(code **)(*(longlong *)pUVar8 + 0x480))(pUVar8);
      *param_1 = fVar14 < fVar11;
    }
    if (local_c8.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_c8.IgnoreSourceObjects.AllocatorInstance.SecondaryData);
    }
    if (local_c8.IgnoreComponents.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_c8.IgnoreComponents.AllocatorInstance.SecondaryData);
    }
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_617687739650801548>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Ability\\DS_AirWalk_DashAttackAbility.cpp"
                       ,0x74,"capsuleComponent.IsValid()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    bVar2 = false;
  }
  return bVar2;
}

// GetFinishSkillID @ 14b7ab910

int __thiscall UDS_AirWalk_DashAttackAbility::GetFinishSkillID(UDS_AirWalk_DashAttackAbility *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  UDS_DataBase *this_00;
  FDS_CharacterBaseTableRow *pFVar4;
  FWeakObjectPtr local_res8 [4];
  
  UDS_CharInfoData::GetData((ulong64)local_res8);
  bVar2 = FWeakObjectPtr::IsValid(local_res8);
  if (bVar2) {
    this_00 = (UDS_DataBase *)FWeakObjectPtr::Get(local_res8);
    iVar3 = UDS_DataBase::GetEntityTableID(this_00);
    pFVar4 = FDS_CharacterBaseTableRow::GetRef((longlong)iVar3,true);
    return pFVar4->ID_AirDashSkill;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_617687739650801511>,true,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Ability\\DS_AirWalk_DashAttackAbility.cpp"
                     ,0x99,"charInfo.IsValid()");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  return 0;
}

// OnCanActivate @ 14b7b5640

bool __thiscall UDS_AirWalk_DashAttackAbility::OnCanActivate(UDS_AirWalk_DashAttackAbility *this)

{
  bool bVar1;
  
  bVar1 = UDS_AirWalk_BaseAbility::OnCanActivate((UDS_AirWalk_BaseAbility *)this);
  return bVar1;
}

// OnDeactivateAbility @ 14b7b7d80

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
UDS_AirWalk_DashAttackAbility::OnDeactivateAbility
          (UDS_AirWalk_DashAttackAbility *this,bool *param_1)

{
  double dVar1;
  bool bVar2;
  UDS_AirWalkAbilityData *this_00;
  UObject *pUVar3;
  EDS_AbilityInputPolicy local_res8 [8];
  undefined1 local_38 [16];
  double local_28;
  TRotator<double> local_20;
  
  bVar2 = TWeakObjectPtr<UDS_AirWalkAbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AirWalkAbilityData,FWeakObjectPtr> *)&this->_padding_,
                     (void *)0x0);
  if (!bVar2) {
    this_00 = (UDS_AirWalkAbilityData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    UDS_AirWalkAbilityData::DeActivateStep(this_00,UseSkillAirDash);
  }
  local_res8[0] = None;
  UDS_GameplayAbility::SetInputPolicy((UDS_GameplayAbility *)this,local_res8);
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  (**(code **)(*(longlong *)pUVar3 + 0x448))(pUVar3,3);
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  dVar1 = (this->DashVelocity).field0_0x0._s_0.Y * _UNK_150d9fb18;
  local_28 = (this->DashVelocity).field0_0x0._s_0.Z * ___xmm_3fe33333400000003fe3333340000000;
  local_38._8_4_ = SUB84(dVar1,0);
  local_38._0_8_ = (this->DashVelocity).field0_0x0._s_0.X * ___xmm_3fe33333400000003fe3333340000000;
  local_38._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  (**(code **)(*(longlong *)pUVar3 + 0x398))(pUVar3,local_38);
  local_res8[0] = 0x2a;
  UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,local_res8);
  UE::Math::TVector<double>::ToOrientationRotator(&this->DashDirection,&local_20);
  local_20.Pitch = 0.0;
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  (**(code **)(*(longlong *)pUVar3 + 0x370))(pUVar3,&local_20);
  UDS_AirWalk_BaseAbility::OnDeactivateAbility((UDS_AirWalk_BaseAbility *)this,param_1);
  return;
}

// OnPostActivateAbility @ 14b7baf70

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
UDS_AirWalk_DashAttackAbility::OnPostActivateAbility(UDS_AirWalk_DashAttackAbility *this)

{
  APlayerCameraManager *pAVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  UDS_AirWalkAbilityData *pUVar7;
  longlong lVar8;
  UWorld *pUVar9;
  APlayerController *pAVar10;
  UObject *pUVar11;
  TVector<double>_u_0 *pTVar12;
  FDS_AirWalkStepInfo *pFVar13;
  FWeakObjectPtr local_res8;
  APlayerCameraManager *local_res10;
  TVector<double>_u_0 local_38;
  TRotator<double> local_20;
  
  UDS_AirWalk_BaseAbility::OnPostActivateAbility((UDS_AirWalk_BaseAbility *)this);
  pUVar7 = (UDS_AirWalkAbilityData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  UDS_AirWalkAbilityData::DoNextStep(pUVar7,UseSkillAirDash);
  local_res8.ObjectIndex._0_1_ = 0x2a;
  UDS_GameplayAbility::AddStateTagToASC((UDS_GameplayAbility *)this,(EDS_StateTagType *)&local_res8)
  ;
  local_res8.ObjectIndex._0_1_ = 3;
  UDS_GameplayAbility::SetInputPolicy
            ((UDS_GameplayAbility *)this,(EDS_AbilityInputPolicy *)&local_res8);
  lVar8 = (**(code **)(this->_padding_ + 0x180))(this);
  if (lVar8 != 0) {
    pUVar9 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
    pAVar10 = UWorld::GetFirstPlayerController(pUVar9);
    if (pAVar10 != (APlayerController *)0x0) {
      pUVar9 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
      pAVar10 = UWorld::GetFirstPlayerController(pUVar9);
      pAVar1 = (pAVar10->PlayerCameraManager).field0_0x0.DebugPtr;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (pAVar1 != (APlayerCameraManager *)0x0) {
          UE::GC::MarkAsReachable((UObject *)pAVar1);
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pAVar1 != (APlayerCameraManager *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pAVar1);
        }
      }
      local_res8.ObjectIndex = 0;
      local_res8.ObjectSerialNumber = 0;
      local_res10 = pAVar1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pAVar1 != (APlayerCameraManager *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pAVar1);
      }
      FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
      bVar6 = FWeakObjectPtr::IsValid(&local_res8);
      if (bVar6) {
        pUVar11 = FWeakObjectPtr::Get(&local_res8);
        if (*(USceneComponent **)(pUVar11 + 0xb) == (USceneComponent *)0x0) {
          pTVar12 = &local_38;
          local_38._s_0.X = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.X;
          local_38._s_0.Y = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Y;
          local_38._s_0.Z = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z;
        }
        else {
          pTVar12 = &USceneComponent::GetForwardVector
                               (*(USceneComponent **)(pUVar11 + 0xb),
                                (TVector<double> *)&local_38._s_0)->field0_0x0;
        }
        dVar3 = (pTVar12->_s_0).Y;
        (this->DashDirection).field0_0x0._s_0.X =
             (((TVector<double>_u_0 *)&(pTVar12->_s_0).X)->_s_0).X;
        (this->DashDirection).field0_0x0._s_0.Y = dVar3;
        (this->DashDirection).field0_0x0._s_0.Z = (pTVar12->_s_0).Z;
      }
    }
  }
  pUVar7 = (UDS_AirWalkAbilityData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  pFVar13 = UDS_AirWalkAbilityData::GetAirWalkStepInfo(pUVar7,UseSkillAirDash);
  dVar5 = (this->DashDirection).field0_0x0._s_0.Y;
  dVar3 = (double)pFVar13->AirWalkSpeed;
  dVar4 = dVar3 * (this->DashDirection).field0_0x0._s_0.Z;
  (this->DashVelocity).field0_0x0._s_0.X = dVar3 * (this->DashDirection).field0_0x0._s_0.X;
  auVar2._8_4_ = SUB84(dVar4,0);
  auVar2._0_8_ = dVar3 * dVar5;
  auVar2._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  *(undefined1 (*) [16])((longlong)&(this->DashVelocity).field0_0x0 + 8) = auVar2;
  UE::Math::TVector<double>::ToOrientationRotator(&this->DashDirection,&local_20);
  pUVar11 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  (**(code **)(*(longlong *)pUVar11 + 0x370))(pUVar11,&local_20);
  pUVar11 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  (**(code **)(*(longlong *)pUVar11 + 0x448))(pUVar11,5);
  return;
}

// OnTickComponent @ 14b7bd2b0

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
UDS_AirWalk_DashAttackAbility::OnTickComponent(UDS_AirWalk_DashAttackAbility *this,float param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  UDS_SkillAbilityContext *pUVar4;
  UDS_DataBase *this_00;
  FDS_CharacterBaseTableRow *pFVar5;
  UDS_AirWalkAbilityData *this_01;
  UObject *pUVar6;
  bool local_res18 [8];
  EDS_AbilityTagType local_res20 [8];
  EDS_AbilityDeactivateType local_38 [8];
  FWeakObjectPtr local_30;
  UDS_SkillAbilityContext *local_28 [4];
  
  UDS_GameplayAbility::OnTickComponent((UDS_GameplayAbility *)this,param_1);
  bVar2 = CheckCrash(this,local_res18);
  if (!bVar2) {
    this_01 = (UDS_AirWalkAbilityData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    bVar2 = UDS_AirWalkAbilityData::CheckAirWalkTime(this_01,UseSkillAirDash);
    if (!bVar2) {
      local_38[1] = 2;
      UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_38 + 1);
      return;
    }
    pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    (**(code **)(*(longlong *)pUVar6 + 0x3a0))(pUVar6,&this->DashVelocity);
    pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
                    /* WARNING: Could not recover jumptable at 0x00014b7bd46c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar6 + 0x2c8))(pUVar6,&this->DashVelocity,param_1,1);
    return;
  }
  if (local_res18[0] != false) {
    pUVar4 = NewObject<UDS_SkillAbilityContext>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar4 != (UDS_SkillAbilityContext *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    UDS_CharInfoData::GetData((ulong64)&local_30);
    bVar2 = FWeakObjectPtr::IsValid(&local_30);
    if (bVar2) {
      this_00 = (UDS_DataBase *)FWeakObjectPtr::Get(&local_30);
      iVar3 = UDS_DataBase::GetEntityTableID(this_00);
      pFVar5 = FDS_CharacterBaseTableRow::GetRef((longlong)iVar3,true);
      iVar3 = pFVar5->ID_AirDashSkill;
    }
    else {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_617687739650801511>,true,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Ability\\DS_AirWalk_DashAttackAbility.cpp"
                         ,0x99,"charInfo.IsValid()");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      iVar3 = 0;
    }
    pUVar4->SkillID = iVar3;
    local_28[0] = pUVar4;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    local_res20[0] = Skill_ActiveSkill;
    UDS_GameplayAbility::TryActivateAbility
              ((UDS_GameplayAbility *)this,local_res20,(TObjectPtr<UWN_AbilityContext>)local_28);
  }
  local_38[0] = Success;
  UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_38);
  return;
}

// UpdateAirDash @ 14b7c8020

void __thiscall
UDS_AirWalk_DashAttackAbility::UpdateAirDash(UDS_AirWalk_DashAttackAbility *this,float param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  (**(code **)(*(longlong *)pUVar1 + 0x3a0))(pUVar1,&this->DashVelocity);
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
                    /* WARNING: Could not recover jumptable at 0x00014b7c808a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)pUVar1 + 0x2c8))(pUVar1,&this->DashVelocity,param_1,1);
  return;
}

