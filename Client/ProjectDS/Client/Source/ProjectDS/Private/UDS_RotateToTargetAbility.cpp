// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 23

// StaticClass @ 14b583de0

UClass * __cdecl UDS_RotateToTargetAbility::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_RotateToTargetAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_RotateToTargetAbility",
               &Z_Registration_Info_UClass_UDS_RotateToTargetAbility.InnerSingleton,
               StaticRegisterNativesUDS_RotateToTargetAbility,0x168,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_RotateToTargetAbility>,
               InternalVTableHelperCtorCaller<UDS_RotateToTargetAbility>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_RotateToTargetAbility.InnerSingleton;
}

// UDS_RotateToTargetAbility @ 14b5873a0

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

UDS_RotateToTargetAbility * __thiscall
UDS_RotateToTargetAbility::UDS_RotateToTargetAbility
          (UDS_RotateToTargetAbility *this,FVTableHelper *param_1)

{
  undefined8 local_res8 [4];
  
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  this->ElapsedTime = 0.0;
  (this->RotateData).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&(this->RotateData).WeakPtr,(FObjectPtr)local_res8);
  return this;
}

// UDS_RotateToTargetAbility @ 14b587400

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

UDS_RotateToTargetAbility * __thiscall
UDS_RotateToTargetAbility::UDS_RotateToTargetAbility
          (UDS_RotateToTargetAbility *this,FObjectInitializer *param_1)

{
  undefined8 local_res8 [4];
  
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  this->ElapsedTime = 0.0;
  (this->RotateData).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&(this->RotateData).WeakPtr,(FObjectPtr)local_res8);
  return this;
}

// ~UDS_RotateToTargetAbility @ 14b587ba0

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
UDS_RotateToTargetAbility::~UDS_RotateToTargetAbility(UDS_RotateToTargetAbility *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  UDS_GameplayAbility::~UDS_GameplayAbility((UDS_GameplayAbility *)this);
  return;
}

// GetPrivateStaticClass @ 14b589430

UClass * __cdecl UDS_RotateToTargetAbility::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_RotateToTargetAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_RotateToTargetAbility",
               &Z_Registration_Info_UClass_UDS_RotateToTargetAbility.InnerSingleton,
               StaticRegisterNativesUDS_RotateToTargetAbility,0x168,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_RotateToTargetAbility>,
               InternalVTableHelperCtorCaller<UDS_RotateToTargetAbility>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_RotateToTargetAbility.InnerSingleton;
}

// ShouldTickComponent @ 14b589b40

bool __thiscall UDS_RotateToTargetAbility::ShouldTickComponent(UDS_RotateToTargetAbility *this)

{
  return false;
}

// StaticRegisterNativesUDS_RotateToTargetAbility @ 14b589bf0

void __cdecl UDS_RotateToTargetAbility::StaticRegisterNativesUDS_RotateToTargetAbility(void)

{
  return;
}

// ClearVariables @ 14b827cf0

void __thiscall UDS_RotateToTargetAbility::ClearVariables(UDS_RotateToTargetAbility *this)

{
  bool bVar1;
  UObject *pUVar2;
  
  this->ElapsedTime = 0.0;
  bVar1 = TWeakObjectPtr<UDS_RotateToTargetAbilityData,FWeakObjectPtr>::UEOpEquals
                    (&this->RotateData,(void *)0x0);
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->RotateData).WeakPtr);
                    /* WARNING: Could not recover jumptable at 0x00014b827d2f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar2 + 0x2c8))(pUVar2,*(code **)(*(longlong *)pUVar2 + 0x2c8));
    return;
  }
  return;
}

// GetDestLocation @ 14b8315d0

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

bool __cdecl
UDS_RotateToTargetAbility::GetDestLocation
          (TVector<double> *param_1,int *param_2,int *param_3,FDS_EntityBase *param_4,
          TVector<double> *param_5,float *param_6)

{
  float fVar1;
  double dVar2;
  EDS_SkillMoveType EVar3;
  bool bVar4;
  int iVar5;
  FDS_SkillAttackTableRow *pFVar6;
  UObject *pUVar7;
  UDS_SkillData *this;
  TVector<double> *pTVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_d8;
  TVector<double>_u_0 local_d0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  TVector<double> local_a0 [5];
  
  if ((((*param_2 < 1) || (*param_3 < 1)) ||
      (pFVar6 = FDS_SkillAttackTableRow::Get((longlong)*param_3,true),
      pFVar6 == (FDS_SkillAttackTableRow *)0x0)) || (param_4 == (FDS_EntityBase *)0x0)) {
    return false;
  }
  (**(code **)(param_4->_padding_ + 0x78))(param_4);
  bVar4 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> *)&local_res10,(void *)0x0);
  if (bVar4) {
    return false;
  }
  bVar4 = UE::Math::TVector<double>::IsNearlyZero(param_5,__real_3f1a36e2e0000000);
  if (bVar4) {
    return false;
  }
  pUVar7 = FWeakObjectPtr::Get(&local_res10);
  (**(code **)(*(longlong *)pUVar7 + 0x338))(pUVar7,&local_b8);
  fVar9 = param_4->ScaledCapsuleRadius;
  (param_1->field0_0x0)._s_0.X = local_b8;
  (param_1->field0_0x0)._s_0.Y = dStack_b0;
  (param_1->field0_0x0)._s_0.Z = local_a8;
  EVar3 = pFVar6->SkillMoveType;
  if (EVar3 == TargetMov) {
    dVar12 = (param_5->field0_0x0)._s_0.X;
    dVar2 = (param_5->field0_0x0)._s_0.Y;
    local_d0._s_0.X = local_b8 - dVar12;
    local_d0._s_0.Y = dStack_b0 - dVar2;
    local_d0._s_0.Z = 0.0;
    UE::Math::TVector<double>::Normalize((TVector<double> *)&local_d0._s_0,__real_3e45798ee0000000);
    dVar10 = pFVar6->MoveRange;
    fVar9 = (float)((double)CONCAT44((uint)((ulonglong)dVar10 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar10,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
                    + (double)fVar9 + (double)*param_6);
    if (dVar10 < 0.0) {
      fVar9 = (float)((uint)fVar9 ^ __xmm_80000000800000008000000080000000);
    }
    dVar10 = (double)fVar9;
    dStack_b0 = dVar10 * local_d0._s_0.Y + dVar2;
    dVar12 = dVar10 * local_d0._s_0.X + dVar12;
  }
  else {
    if (EVar3 == DirectMov) {
      pUVar7 = FWeakObjectPtr::Get(&local_res10);
      local_d0._s_0.X = (double)*(undefined8 *)&pUVar7[10].field_0x10;
      local_d0._s_0.Y = (double)*(undefined8 *)&pUVar7[10].field_0x18;
      local_d0._s_0.Z = (double)*(undefined8 *)&pUVar7[10].field_0x20;
      UDS_SkillData::GetData((ulong64)&local_d8,param_4->EntityID,SUB41(*param_2,0));
      bVar4 = TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr> *)&local_d8,(void *)0x0);
      if (!bVar4) {
        this = (UDS_SkillData *)FWeakObjectPtr::Get(&local_d8);
        iVar5 = UDS_SkillData::GetSkillMoveAngle(this,*param_3);
        if (iVar5 != 0) {
          local_d0._s_0.Y = local_d0._s_0.Y + (double)iVar5;
        }
      }
      pTVar8 = UE::Math::TRotator<double>::Vector((TRotator<double> *)&local_d0._s_0,local_a0);
      dVar12 = pFVar6->MoveRange;
      dStack_b0 = dVar12 * (pTVar8->field0_0x0)._s_0.Y + dStack_b0;
      local_a8 = dVar12 * (pTVar8->field0_0x0)._s_0.Z + local_a8;
      dVar12 = dVar12 * (pTVar8->field0_0x0)._s_0.X + local_b8;
      goto LAB_14b831944;
    }
    if (EVar3 != TargetFrontMov) {
      return true;
    }
    dVar10 = (param_5->field0_0x0)._s_0.Z - local_a8;
    dVar12 = (param_5->field0_0x0)._s_0.X;
    dVar2 = pFVar6->MoveRange;
    fVar1 = *param_6;
    dVar13 = (param_5->field0_0x0)._s_0.Y - dStack_b0;
    dVar11 = (double)(fVar1 + fVar9) + dVar2;
    if ((float)(dVar13 * dVar13 + (dVar12 - local_b8) * (dVar12 - local_b8) + dVar10 * dVar10) <
        (float)(dVar11 * dVar11)) {
      (param_1->field0_0x0)._s_0.X = local_b8;
      (param_1->field0_0x0)._s_0.Y = dStack_b0;
      (param_1->field0_0x0)._s_0.Z = local_a8;
      return true;
    }
    local_d0._s_0.Y = dStack_b0 - (param_5->field0_0x0)._s_0.Y;
    local_d0._s_0.X = local_b8 - dVar12;
    local_d0._s_0.Z = 0.0;
    UE::Math::TVector<double>::Normalize((TVector<double> *)&local_d0._s_0,__real_3e45798ee0000000);
    fVar9 = (float)((double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
                    + (double)fVar9 + (double)fVar1);
    if (dVar2 < 0.0) {
      fVar9 = (float)((uint)fVar9 ^ __xmm_80000000800000008000000080000000);
    }
    dVar10 = (double)fVar9;
    dStack_b0 = dVar10 * local_d0._s_0.Y + (param_5->field0_0x0)._s_0.Y;
    dVar12 = dVar10 * local_d0._s_0.X + dVar12;
  }
  local_a8 = dVar10 * local_d0._s_0.Z + (param_5->field0_0x0)._s_0.Z;
LAB_14b831944:
  (param_1->field0_0x0)._s_0.X = dVar12;
  (param_1->field0_0x0)._s_0.Y = dStack_b0;
  (param_1->field0_0x0)._s_0.Z = local_a8;
  return true;
}

// InitStepInfoOnActivated @ 14b835000

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

void __cdecl
UDS_RotateToTargetAbility::InitStepInfoOnActivated
          (FDS_RotateStepInfo *param_1,FDS_EntityBase *param_2,
          TWeakObjectPtr<UDS_RotateToTargetAbilityData,FWeakObjectPtr> param_3,
          TWeakObjectPtr<UDS_FindTargetAbilityData,FWeakObjectPtr> param_4)

{
  EDS_ViewTarget EVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  UDS_LogManager *pUVar5;
  TRotator<double> *pTVar6;
  UObject *pUVar7;
  FDS_EntityBase *this;
  FDS_GetTargetLocationResult *pFVar8;
  double *pdVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  undefined1 auStackY_468 [32];
  FWeakObjectPtr local_438;
  float local_430 [2];
  TVector<double>_u_0 local_428;
  TVector<double>_u_0 local_410;
  ulong64 local_3f8;
  TVector<double>_u_0 local_3f0;
  FDS_GetTargetLocationResult local_3d8;
  TRotator<double> local_3b0;
  TRotator<double> local_398;
  TRotator<double> local_380;
  TRotator<double> local_368;
  TRotator<double> local_350;
  TRotator<double> local_338;
  TRotator<double> local_320;
  undefined1 local_308 [24];
  FDS_GetTargetLocationResult local_2f0;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_2c8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_1a8;
  ulonglong local_88;
  
  if (param_2 == (FDS_EntityBase *)0x0) {
    return;
  }
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_468;
  local_res18 = param_3.WeakPtr;
  local_res20 = param_4.WeakPtr;
  (**(code **)(param_2->_padding_ + 0x78))(param_2);
  bVar4 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> *)&local_438,(void *)0x0);
  if (bVar4) {
    return;
  }
  EVar1 = param_1->ViewTarget;
  if (EVar1 == TargetView) {
LAB_14b835177:
    pTVar6 = FDS_EntityBase::GetEntityRotation(param_2,&local_320);
    dVar3 = pTVar6->Yaw;
    (param_1->SourceRotatorOnStartStep).Pitch = pTVar6->Pitch;
    (param_1->SourceRotatorOnStartStep).Yaw = dVar3;
    (param_1->SourceRotatorOnStartStep).Roll = pTVar6->Roll;
    param_1->HasTargetOnStartStep = false;
    bVar4 = TWeakObjectPtr<UDS_FindTargetAbilityData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_FindTargetAbilityData,FWeakObjectPtr> *)&local_res20,
                       (void *)0x0);
    if (!bVar4) {
      pUVar7 = FWeakObjectPtr::Get(&local_res20);
      local_3f8 = *(ulong64 *)&pUVar7[2].field_0x10;
      if ((local_3f8 != 0) &&
         (this = FDS_EntityBase::GetEntityBase(&local_3f8), this != (FDS_EntityBase *)0x0)) {
        param_1->HasTargetOnStartStep = true;
        uVar16 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
        uVar15 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
        uVar14 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
        uVar13 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
        local_430[0] = 0.0;
        local_410._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
        local_410._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
        local_410._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
        local_410._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
        local_410._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        bVar4 = FDS_EntityBase::GetIsMultiHitCollision(this);
        if (bVar4) {
          pUVar7 = FWeakObjectPtr::Get(&local_res18);
          uVar11 = (undefined4)*(undefined8 *)&pUVar7[7].field_0x18;
          uVar12 = (undefined4)((ulonglong)*(undefined8 *)&pUVar7[7].field_0x18 >> 0x20);
          local_430[0] = this->ScaledCapsuleRadius;
          uVar13 = *(undefined4 *)&pUVar7[7].field_0x8;
          uVar14 = *(undefined4 *)&pUVar7[7].field_0xc;
          uVar15 = *(undefined4 *)&pUVar7[7].field_0x10;
          uVar16 = *(undefined4 *)&pUVar7[7].field_0x14;
LAB_14b8352b4:
          local_410._s_0.Z = (double)CONCAT44(uVar12,uVar11);
          local_410._0_4_ = uVar13;
          local_410._4_4_ = uVar14;
          local_410._8_4_ = uVar15;
          local_410._12_4_ = uVar16;
        }
        else {
          pFVar8 = UDS_FindTargetAbility::GetTargetLocation
                             (&local_2f0,
                              (TWeakObjectPtr<UDS_FindTargetAbilityData,FWeakObjectPtr>)local_res20,
                              true);
          local_3d8.bIsValid = pFVar8->bIsValid;
          local_3d8._1_7_ = *(undefined7 *)&pFVar8->field_0x1;
          local_3d8.TargetLocation.field0_0x0._s_0.X =
               (double)*(undefined8 *)&(pFVar8->TargetLocation).field0_0x0;
          local_3d8.TargetLocation.field0_0x0._s_0.Y =
               *(double *)((longlong)&(pFVar8->TargetLocation).field0_0x0 + 8);
          local_3d8.TargetLocation.field0_0x0._s_0.Z =
               *(double *)((longlong)&(pFVar8->TargetLocation).field0_0x0 + 0x10);
          local_3d8.TargetRadius = pFVar8->TargetRadius;
          local_3d8._36_4_ = *(undefined4 *)&pFVar8->field_0x24;
          bVar4 = FDS_GetTargetLocationResult::IsValidData(&local_3d8);
          if (bVar4) {
            uVar11 = SUB84(local_3d8.TargetLocation.field0_0x0._s_0.Z,0);
            uVar12 = (undefined4)((ulonglong)local_3d8.TargetLocation.field0_0x0._16_8_ >> 0x20);
            local_430[0] = local_3d8.TargetRadius;
            uVar13 = local_3d8.TargetLocation.field0_0x0._0_4_;
            uVar14 = local_3d8.TargetLocation.field0_0x0._4_4_;
            uVar15 = local_3d8.TargetLocation.field0_0x0._8_4_;
            uVar16 = local_3d8.TargetLocation.field0_0x0._12_4_;
            goto LAB_14b8352b4;
          }
        }
        pUVar7 = FWeakObjectPtr::Get(&local_438);
        pdVar9 = (double *)(**(code **)(*(longlong *)pUVar7 + 0x338))(pUVar7,local_308);
        local_428._s_0.Y = (double)CONCAT44(uVar16,uVar15) - pdVar9[1];
        local_428._s_0.X = (double)CONCAT44(uVar14,uVar13) - *pdVar9;
        local_428._s_0.Z = 0.0;
        UE::Math::TVector<double>::Normalize
                  ((TVector<double> *)&local_428._s_0,__real_3e45798ee0000000);
        UE::Math::TVector<double>::ToOrientationRotator
                  ((TVector<double> *)&local_428._s_0,&local_368);
        (param_1->SourceToTargetRotatorOnStartStep).Pitch = local_368.Pitch;
        (param_1->SourceToTargetRotatorOnStartStep).Yaw = local_368.Yaw;
        (param_1->DestToTargetRotatorOnStartStep).Pitch = local_368.Pitch;
        (param_1->DestToTargetRotatorOnStartStep).Yaw = local_368.Yaw;
        (param_1->SourceToTargetRotatorOnStartStep).Roll = local_368.Roll;
        (param_1->DestToTargetRotatorOnStartStep).Roll = local_368.Roll;
        local_3f0._s_0.X =
             (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                              UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
        local_3f0._s_0.Y =
             (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                              UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
        local_3f0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        bVar4 = GetDestLocation((TVector<double> *)&local_3f0._s_0,&param_1->SkillID,
                                &param_1->AttackLinkID,param_2,(TVector<double> *)&local_410._s_0,
                                local_430);
        if (bVar4) {
          local_428._s_0.X = (double)CONCAT44(uVar14,uVar13) - local_3f0._s_0.X;
          local_428._s_0.Y = (double)CONCAT44(uVar16,uVar15) - local_3f0._s_0.Y;
          local_428._s_0.Z = 0.0;
          UE::Math::TVector<double>::Normalize
                    ((TVector<double> *)&local_428._s_0,__real_3e45798ee0000000);
          UE::Math::TVector<double>::ToOrientationRotator
                    ((TVector<double> *)&local_428._s_0,&local_350);
          (param_1->DestToTargetRotatorOnStartStep).Pitch = local_350.Pitch;
          (param_1->DestToTargetRotatorOnStartStep).Yaw = local_350.Yaw;
          (param_1->DestToTargetRotatorOnStartStep).Roll = local_350.Roll;
        }
      }
    }
  }
  else {
    if ((EVar1 != RotationView) && (EVar1 != Stand)) {
      if ((EVar1 != AttackStand) && (EVar1 != AttachTargetView)) {
        pUVar5 = UDS_LogManager::GetInst();
        if (pUVar5 != (UDS_LogManager *)0x0) {
          pUVar5 = UDS_LogManager::GetInst();
          local_2c8._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_2c8,"UDS_RotateToTargetAbility::InitStepInfoOnActivated",0x32,Yes);
          UDS_LogManager::PrintLog
                    (pUVar5,1,Warning,local_2c8.Ptr,0xe3,
                     L"Need to define behavior according to ViewTarget.");
          if ((void *)local_2c8._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_2c8._padding_);
          }
        }
        bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<3386909766793036004>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Ability\\DS_RotateToTargetAbility.cpp"
                           ,0xe4,"false");
        if (!bVar4) {
          return;
        }
        goto code_r0x00014b8354ec;
      }
      goto LAB_14b835177;
    }
    pTVar6 = FDS_EntityBase::GetEntityRotation(param_2,&local_338);
    dVar3 = pTVar6->Yaw;
    (param_1->SourceRotatorOnStartStep).Pitch = pTVar6->Pitch;
    (param_1->SourceRotatorOnStartStep).Yaw = dVar3;
    (param_1->SourceRotatorOnStartStep).Roll = pTVar6->Roll;
  }
  pTVar6 = &param_1->SourceRotatorOnStartStep;
  EVar1 = param_1->ViewTarget;
  if (EVar1 == TargetView) {
LAB_14b835564:
    if (param_1->HasTargetOnStartStep != true) {
      pUVar7 = FWeakObjectPtr::Get(&local_438);
      (**(code **)(*(longlong *)pUVar7 + 0x4e8))(pUVar7,pTVar6);
      bVar4 = FDS_RotateStepInfo::IsInterpolationStep(param_1);
      if (!bVar4) {
        pUVar7 = FWeakObjectPtr::Get(&local_438);
        pdVar9 = &pTVar6->Pitch;
        pTVar6 = &local_380;
        local_380.Pitch = *pdVar9 + (param_1->ViewRotation).Pitch;
        lVar10 = *(longlong *)pUVar7;
        local_380.Yaw = (param_1->ViewRotation).Yaw + (param_1->SourceRotatorOnStartStep).Yaw;
        local_380.Roll = (param_1->ViewRotation).Roll + (param_1->SourceRotatorOnStartStep).Roll;
        goto LAB_14b835652;
      }
      goto LAB_14b835647;
    }
    pUVar7 = FWeakObjectPtr::Get(&local_438);
    (**(code **)(*(longlong *)pUVar7 + 0x4e8))(pUVar7,&param_1->SourceToTargetRotatorOnStartStep);
    bVar4 = FDS_RotateStepInfo::IsInterpolationStep(param_1);
    if (!bVar4) {
      pUVar7 = FWeakObjectPtr::Get(&local_438);
      pTVar6 = &local_398;
      local_398.Pitch =
           (param_1->SourceToTargetRotatorOnStartStep).Pitch + (param_1->ViewRotation).Pitch;
      lVar10 = *(longlong *)pUVar7;
      local_398.Yaw = (param_1->ViewRotation).Yaw + (param_1->SourceToTargetRotatorOnStartStep).Yaw;
      local_398.Roll =
           (param_1->ViewRotation).Roll + (param_1->SourceToTargetRotatorOnStartStep).Roll;
      goto LAB_14b835652;
    }
    pUVar7 = FWeakObjectPtr::Get(&local_438);
    pTVar6 = &param_1->SourceToTargetRotatorOnStartStep;
  }
  else {
    if ((EVar1 != RotationView) && (EVar1 != Stand)) {
      if ((EVar1 != AttackStand) && (EVar1 != AttachTargetView)) {
        pUVar5 = UDS_LogManager::GetInst();
        if (pUVar5 != (UDS_LogManager *)0x0) {
          pUVar5 = UDS_LogManager::GetInst();
          local_1a8._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_1a8,"UDS_RotateToTargetAbility::InitStepInfoOnActivated",0x32,Yes);
          UDS_LogManager::PrintLog
                    (pUVar5,1,Warning,local_1a8.Ptr,0x126,
                     L"Need to define behavior according to ViewTarget.");
          if ((void *)local_1a8._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_1a8._padding_);
          }
        }
        bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<3386909766793036071>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Ability\\DS_RotateToTargetAbility.cpp"
                           ,0x127,"false");
        if (!bVar4) {
          return;
        }
code_r0x00014b8354ec:
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      goto LAB_14b835564;
    }
    pUVar7 = FWeakObjectPtr::Get(&local_438);
    (**(code **)(*(longlong *)pUVar7 + 0x4e8))(pUVar7,pTVar6);
    bVar4 = FDS_RotateStepInfo::IsInterpolationStep(param_1);
    if (!bVar4) {
      pUVar7 = FWeakObjectPtr::Get(&local_438);
      pdVar9 = &pTVar6->Pitch;
      pTVar6 = &local_3b0;
      local_3b0.Pitch = *pdVar9 + (param_1->ViewRotation).Pitch;
      lVar10 = *(longlong *)pUVar7;
      local_3b0.Yaw = (param_1->ViewRotation).Yaw + (param_1->SourceRotatorOnStartStep).Yaw;
      local_3b0.Roll = (param_1->ViewRotation).Roll + (param_1->SourceRotatorOnStartStep).Roll;
      goto LAB_14b835652;
    }
LAB_14b835647:
    pUVar7 = FWeakObjectPtr::Get(&local_438);
  }
  lVar10 = *(longlong *)pUVar7;
LAB_14b835652:
  (**(code **)(lVar10 + 0x4f0))(pUVar7,pTVar6);
  return;
}

// OnCanActivate @ 14b83a180

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_RotateToTargetAbility::OnCanActivate(UDS_RotateToTargetAbility *this)

{
  bool bVar1;
  TWeakObjectPtr<UDS_RotateToTargetAbilityData,FWeakObjectPtr> TVar2;
  UDS_LogManager *pUVar3;
  undefined1 auStackY_178 [32];
  ulong64 local_144;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  bVar1 = UWN_Ability::OnCanActivate((UWN_Ability *)this);
  if (bVar1) {
    bVar1 = TWeakObjectPtr<UDS_RotateToTargetAbilityData,FWeakObjectPtr>::UEOpEquals
                      (&this->RotateData,(void *)0x0);
    if (bVar1) {
      TVar2 = UDS_AbilityDataSet::GetAbilityData<UDS_RotateToTargetAbilityData>
                        (&local_144,(EDS_AbilityTagType *)&this->_padding_);
                    /* WARNING: Load size is inaccurate */
      (this->RotateData).WeakPtr = *TVar2.WeakPtr;
    }
    bVar1 = TWeakObjectPtr<UDS_RotateToTargetAbilityData,FWeakObjectPtr>::UEOpEquals
                      (&this->RotateData,(void *)0x0);
    if (!bVar1) {
      return true;
    }
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_RotateToTargetAbility::OnCanActivate",0x28,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0x22,L"RotateData is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return false;
}

// OnDeactivateAbility @ 14b83f890

void __thiscall
UDS_RotateToTargetAbility::OnDeactivateAbility(UDS_RotateToTargetAbility *this,bool *param_1)

{
  return;
}

// OnPostActivateAbility @ 14b845390

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

void __thiscall UDS_RotateToTargetAbility::OnPostActivateAbility(UDS_RotateToTargetAbility *this)

{
  FDS_EntityBase *this_00;
  bool bVar1;
  FDS_GetTargetLocationResult *pFVar2;
  UObject *pUVar3;
  TRotator<double> *pTVar4;
  double *pdVar5;
  double dVar6;
  float local_res8 [2];
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18 [2];
  TVector<double>_u_0 local_d8;
  FDS_GetTargetLocationResult local_c0;
  TRotator<double> local_98;
  TRotator<double> local_80;
  FDS_GetTargetLocationResult local_68;
  TRotator<double> local_40;
  
  bVar1 = TWeakObjectPtr<UDS_RotateToTargetAbilityData,FWeakObjectPtr>::UEOpEquals
                    (&this->RotateData,(void *)0x0);
  if (bVar1) {
    local_res8[0] = (float)CONCAT31(local_res8[0]._1_3_,2);
    UDS_GameplayAbility::DeactivateAbility
              ((UDS_GameplayAbility *)this,(EDS_AbilityDeactivateType *)local_res8);
    return;
  }
  local_res8[0] = (float)CONCAT31(local_res8[0]._1_3_,0x1b);
  UDS_AbilityDataSet::GetAbilityData<UDS_FindTargetAbilityData>
            ((ulong64 *)&local_res10,(EDS_AbilityTagType *)&this->_padding_);
  bVar1 = TWeakObjectPtr<UDS_FindTargetAbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_FindTargetAbilityData,FWeakObjectPtr> *)&local_res10,
                     (void *)0x0);
  if (!bVar1) {
    pFVar2 = UDS_FindTargetAbility::GetTargetLocation
                       (&local_68,
                        (TWeakObjectPtr<UDS_FindTargetAbilityData,FWeakObjectPtr>)local_res10,true);
    local_c0.bIsValid = pFVar2->bIsValid;
    local_c0._1_7_ = *(undefined7 *)&pFVar2->field_0x1;
    local_c0.TargetLocation.field0_0x0._s_0.X = (pFVar2->TargetLocation).field0_0x0._s_0.X;
    local_c0.TargetLocation.field0_0x0._s_0.Y = (pFVar2->TargetLocation).field0_0x0._s_0.Y;
    local_c0.TargetLocation.field0_0x0._s_0.Z = (pFVar2->TargetLocation).field0_0x0._s_0.Z;
    local_c0.TargetRadius = pFVar2->TargetRadius;
    local_c0._36_4_ = *(undefined4 *)&pFVar2->field_0x24;
    bVar1 = FDS_GetTargetLocationResult::IsValidData(&local_c0);
    if (bVar1) {
      pUVar3 = FWeakObjectPtr::Get(&(this->RotateData).WeakPtr);
      *(double *)&pUVar3[7].field_0x8 = local_c0.TargetLocation.field0_0x0._s_0.X;
      *(double *)&pUVar3[7].field_0x10 = local_c0.TargetLocation.field0_0x0._s_0.Y;
      *(double *)&pUVar3[7].field_0x18 = local_c0.TargetLocation.field0_0x0._s_0.Z;
      pUVar3 = FWeakObjectPtr::Get(&(this->RotateData).WeakPtr);
      if (((pUVar3[2].field_0x8 == '\x01') && (*(char *)((longlong)&this->_padding_ + 1) == '\x01'))
         && (this_00 = (FDS_EntityBase *)this->_padding_, this_00 != (FDS_EntityBase *)0x0)) {
        (**(code **)(this_00->_padding_ + 0x78))(this_00);
        bVar1 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> *)local_res18,
                           (void *)0x0);
        if (!bVar1) {
          local_res8[0] = 1.0;
          pTVar4 = FDS_EntityBase::GetEntityRotation(this_00,&local_40);
          pUVar3 = FWeakObjectPtr::Get(local_res18);
          pdVar5 = (double *)(**(code **)(*(longlong *)pUVar3 + 0x338))(pUVar3,&local_68);
          local_d8._s_0.Z = 0.0;
          local_d8._s_0.X = local_c0.TargetLocation.field0_0x0._s_0.X - *pdVar5;
          local_d8._s_0.Y = local_c0.TargetLocation.field0_0x0._s_0.Y - pdVar5[1];
          dVar6 = local_d8._s_0.Y * local_d8._s_0.Y + local_d8._s_0.X * local_d8._s_0.X;
          if (__real_3e45798ee0000000 < dVar6) {
            dVar6 = __real_3ff0000000000000 / SQRT(dVar6);
            local_d8._s_0.X = local_d8._s_0.X * dVar6;
            local_d8._s_0.Y = local_d8._s_0.Y * dVar6;
          }
          UE::Math::TVector<double>::ToOrientationRotator
                    ((TVector<double> *)&local_d8._s_0,&local_80);
          RotateByDirRotator(this_00,&local_80,pTVar4,local_res8);
        }
      }
    }
  }
  FDS_EntityBase::GetEntityRotation((FDS_EntityBase *)this->_padding_,&local_98);
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  (**(code **)(*(longlong *)pUVar3 + 0x4e8))(pUVar3,&local_98);
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  (**(code **)(*(longlong *)pUVar3 + 0x4f0))(pUVar3,&local_98);
  (**(code **)(this->_padding_ + 0x368))(this,0);
  return;
}

// OnTickComponent @ 14b849690

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
UDS_RotateToTargetAbility::OnTickComponent(UDS_RotateToTargetAbility *this,float param_1)

{
  bool bVar1;
  UDS_RotateToTargetAbilityData *this_00;
  FDS_RotateStepInfo *this_01;
  FWeakObjectPtr local_res8;
  EDS_AbilityDeactivateType local_res10 [8];
  FWeakObjectPtr local_res18 [2];
  
  UDS_GameplayAbility::OnTickComponent((UDS_GameplayAbility *)this,param_1);
  this->ElapsedTime = param_1 + this->ElapsedTime;
  bVar1 = TWeakObjectPtr<UDS_RotateToTargetAbilityData,FWeakObjectPtr>::UEOpEquals
                    (&this->RotateData,(void *)0x0);
  if (bVar1) {
    local_res10[0] = Cancel;
    UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_res10);
    return;
  }
  this_00 = (UDS_RotateToTargetAbilityData *)FWeakObjectPtr::Get(&(this->RotateData).WeakPtr);
  this_01 = UDS_RotateToTargetAbilityData::GetStepInfoByTime(this_00,this->ElapsedTime);
  bVar1 = FDS_RotateStepInfo::IsValidData(this_01);
  if (bVar1) {
    local_res10[0] = 0x1b;
    UDS_AbilityDataSet::GetAbilityData<UDS_FindTargetAbilityData>
              ((ulong64 *)&local_res8,(EDS_AbilityTagType *)&this->_padding_);
    local_res10[0] = 0x1f;
    UDS_AbilityDataSet::GetAbilityData<UDS_SkillMoveAbilityData>
              ((ulong64 *)local_res18,(EDS_AbilityTagType *)&this->_padding_);
    if (this_01->bIsActivated == false) {
      this_01->bIsActivated = true;
      InitStepInfoOnActivated
                (this_01,(FDS_EntityBase *)this->_padding_,
                 (TWeakObjectPtr<UDS_RotateToTargetAbilityData,FWeakObjectPtr>)
                 (this->RotateData).WeakPtr,
                 (TWeakObjectPtr<UDS_FindTargetAbilityData,FWeakObjectPtr>)local_res8);
    }
    RotateByStepInfo(this_01,(FDS_EntityBase *)this->_padding_,&this->ElapsedTime,
                     (TWeakObjectPtr<UDS_FindTargetAbilityData,FWeakObjectPtr>)local_res8,
                     (TWeakObjectPtr<UDS_SkillMoveAbilityData,FWeakObjectPtr>)local_res18[0]);
  }
  return;
}

// RotateByDirRotator @ 14b84d7c0

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

bool __cdecl
UDS_RotateToTargetAbility::RotateByDirRotator
          (FDS_EntityBase *param_1,TRotator<double> *param_2,TRotator<double> *param_3,
          float *param_4)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  float fVar5;
  bool bVar6;
  UObject *pUVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  double dVar27;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  double dVar28;
  double dVar29;
  undefined1 in_XMM1 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  double dVar45;
  double dVar49;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  double dVar50;
  double dVar51;
  double dVar53;
  double dVar54;
  undefined1 auVar52 [16];
  undefined1 auVar55 [16];
  FWeakObjectPtr local_res8;
  double local_b8;
  double local_b0;
  double local_a8;
  
  if (param_1 != (FDS_EntityBase *)0x0) {
    (**(code **)(param_1->_padding_ + 0x78))();
    bVar6 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> *)&local_res8,(void *)0x0);
    if (!bVar6) {
      auVar15._0_8_ = param_3->Pitch;
      auVar15._8_8_ = param_3->Yaw;
      auVar36._0_8_ = param_2->Pitch;
      auVar36._8_8_ = param_2->Yaw;
      auVar13 = divpd(auVar15,(undefined1  [16])GlobalVectorConstants::Double360.XY.m128d_f64);
      auVar13 = roundpd(in_XMM1,auVar13,3);
      dVar2 = GlobalVectorConstants::Double360.XY.m128d_f64[0];
      auVar30._0_8_ = auVar13._0_8_ * dVar2;
      dVar3 = GlobalVectorConstants::Double360.XY.m128d_f64[1];
      auVar30._8_8_ = auVar13._8_8_ * dVar3;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = param_3->Roll;
      dVar45 = (double)auVar15._0_8_ - auVar30._0_8_;
      dVar49 = (double)auVar15._8_8_ - auVar30._8_8_;
      auVar15 = divpd(auVar14,(undefined1  [16])GlobalVectorConstants::Double360.ZW.m128d_f64);
      auVar15 = roundpd(auVar30,auVar15,3);
      dVar4 = GlobalVectorConstants::Double360.ZW.m128d_f64[0];
      dVar28 = GlobalVectorConstants::Double360.ZW.m128d_f64[1];
      auVar16._8_4_ = SUB84(dVar49,0);
      auVar16._0_8_ = dVar45;
      auVar16._12_4_ = (int)((ulonglong)dVar49 >> 0x20);
      dVar50 = param_3->Roll - auVar15._0_8_ * dVar4;
      dVar53 = 0.0 - auVar15._8_8_ * dVar28;
      dVar27 = auVar16._8_8_ + dVar3;
      uVar8 = -(ulonglong)(0.0 <= dVar45);
      uVar10 = -(ulonglong)(0.0 <= dVar49);
      auVar31._0_8_ = uVar8 & (ulonglong)dVar45;
      auVar31._8_4_ = (undefined4)(uVar10 & (ulonglong)dVar49);
      auVar31._12_4_ = (undefined4)((uVar10 & (ulonglong)dVar49) >> 0x20);
      auVar43._0_4_ = ~(uint)uVar8 & SUB84(dVar45 + dVar2,0);
      auVar43._4_4_ = ~(uint)(uVar8 >> 0x20) & (uint)((ulonglong)(dVar45 + dVar2) >> 0x20);
      auVar43._8_4_ = ~(uint)uVar10 & SUB84(dVar27,0);
      auVar43._12_4_ = ~(uint)(uVar10 >> 0x20) & (uint)((ulonglong)dVar27 >> 0x20);
      auVar17._8_4_ = SUB84(dVar53,0);
      auVar17._0_8_ = dVar50;
      auVar17._12_4_ = (int)((ulonglong)dVar53 >> 0x20);
      auVar43 = auVar43 | auVar31;
      dVar27 = auVar17._8_8_ + dVar28;
      uVar8 = -(ulonglong)(0.0 <= dVar50);
      uVar10 = -(ulonglong)(0.0 <= dVar53);
      auVar46._0_4_ = ~(uint)uVar8 & SUB84(dVar50 + dVar4,0);
      auVar46._4_4_ = ~(uint)(uVar8 >> 0x20) & (uint)((ulonglong)(dVar50 + dVar4) >> 0x20);
      auVar46._8_4_ = ~(uint)uVar10 & SUB84(dVar27,0);
      auVar46._12_4_ = ~(uint)(uVar10 >> 0x20) & (uint)((ulonglong)dVar27 >> 0x20);
      auVar40._0_8_ = uVar8 & (ulonglong)dVar50;
      auVar40._8_4_ = (undefined4)(uVar10 & (ulonglong)dVar53);
      auVar40._12_4_ = (undefined4)((uVar10 & (ulonglong)dVar53) >> 0x20);
      auVar46 = auVar46 | auVar40;
      dVar29 = GlobalVectorConstants::Double180.ZW.m128d_f64[0];
      uVar10 = -(ulonglong)(dVar29 < auVar46._0_8_);
      lVar11 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[1] < auVar46._8_8_);
      dVar49 = GlobalVectorConstants::Double180.XY.m128d_f64[0];
      dVar50 = GlobalVectorConstants::Double180.XY.m128d_f64[1];
      uVar9 = -(ulonglong)(dVar49 < auVar43._0_8_);
      uVar12 = -(ulonglong)(dVar50 < auVar43._8_8_);
      auVar55._0_8_ = uVar9 & (ulonglong)(auVar43._0_8_ - dVar2);
      uVar8 = uVar12 & (ulonglong)(auVar43._8_8_ - dVar3);
      auVar55._8_4_ = (undefined4)uVar8;
      auVar55._12_4_ = (undefined4)(uVar8 >> 0x20);
      auVar18._0_4_ = ~(uint)uVar9 & auVar43._0_4_;
      auVar18._4_4_ = ~(uint)(uVar9 >> 0x20) & auVar43._4_4_;
      auVar18._8_4_ = ~(uint)uVar12 & auVar43._8_4_;
      auVar18._12_4_ = ~(uint)(uVar12 >> 0x20) & auVar43._12_4_;
      auVar15 = divpd(auVar36,(undefined1  [16])GlobalVectorConstants::Double360.XY.m128d_f64);
      auVar32._0_8_ =
           CONCAT44(~(uint)(uVar10 >> 0x20) & auVar46._4_4_,~(uint)uVar10 & auVar46._0_4_);
      auVar32._8_4_ = ~(uint)lVar11 & auVar46._8_4_;
      auVar32._12_4_ = ~(uint)((ulonglong)lVar11 >> 0x20) & auVar46._12_4_;
      local_a8 = (double)(uVar10 & (ulonglong)(auVar46._0_8_ - dVar4) | auVar32._0_8_);
      auVar15 = roundpd(auVar32,auVar15,3);
      auVar33._0_8_ = auVar15._0_8_ * dVar2;
      auVar33._8_8_ = auVar15._8_8_ * dVar3;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = param_2->Roll;
      auVar15 = divpd(auVar19,(undefined1  [16])GlobalVectorConstants::Double360.ZW.m128d_f64);
      dVar27 = (double)auVar36._0_8_ - auVar33._0_8_;
      dVar45 = (double)auVar36._8_8_ - auVar33._8_8_;
      auVar15 = roundpd(auVar33,auVar15,3);
      auVar20._8_4_ = SUB84(dVar45,0);
      auVar20._0_8_ = dVar27;
      auVar20._12_4_ = (int)((ulonglong)dVar45 >> 0x20);
      dVar51 = param_2->Roll - auVar15._0_8_ * dVar4;
      dVar54 = 0.0 - auVar15._8_8_ * dVar28;
      dVar53 = auVar20._8_8_ + dVar3;
      uVar8 = -(ulonglong)(0.0 <= dVar27);
      uVar10 = -(ulonglong)(0.0 <= dVar45);
      auVar34._0_8_ = uVar8 & (ulonglong)dVar27;
      auVar34._8_4_ = (undefined4)(uVar10 & (ulonglong)dVar45);
      auVar34._12_4_ = (undefined4)((uVar10 & (ulonglong)dVar45) >> 0x20);
      auVar44._0_4_ = ~(uint)uVar8 & SUB84(dVar27 + dVar2,0);
      auVar44._4_4_ = ~(uint)(uVar8 >> 0x20) & (uint)((ulonglong)(dVar27 + dVar2) >> 0x20);
      auVar44._8_4_ = ~(uint)uVar10 & SUB84(dVar53,0);
      auVar44._12_4_ = ~(uint)(uVar10 >> 0x20) & (uint)((ulonglong)dVar53 >> 0x20);
      auVar21._8_4_ = SUB84(dVar54,0);
      auVar21._0_8_ = dVar51;
      auVar21._12_4_ = (int)((ulonglong)dVar54 >> 0x20);
      dVar27 = auVar21._8_8_ + dVar28;
      uVar8 = -(ulonglong)(0.0 <= dVar51);
      uVar10 = -(ulonglong)(0.0 <= dVar54);
      auVar44 = auVar44 | auVar34;
      auVar47._0_4_ = ~(uint)uVar8 & SUB84(dVar51 + dVar4,0);
      auVar47._4_4_ = ~(uint)(uVar8 >> 0x20) & (uint)((ulonglong)(dVar51 + dVar4) >> 0x20);
      auVar47._8_4_ = ~(uint)uVar10 & SUB84(dVar27,0);
      auVar47._12_4_ = ~(uint)(uVar10 >> 0x20) & (uint)((ulonglong)dVar27 >> 0x20);
      auVar41._0_8_ = uVar8 & (ulonglong)dVar51;
      auVar41._8_4_ = (undefined4)(uVar10 & (ulonglong)dVar54);
      auVar41._12_4_ = (undefined4)((uVar10 & (ulonglong)dVar54) >> 0x20);
      auVar47 = auVar47 | auVar41;
      uVar10 = -(ulonglong)(dVar49 < auVar44._0_8_);
      uVar9 = -(ulonglong)(dVar50 < auVar44._8_8_);
      auVar52._0_8_ = uVar10 & (ulonglong)(auVar44._0_8_ - dVar2);
      uVar8 = uVar9 & (ulonglong)(auVar44._8_8_ - dVar3);
      auVar52._8_4_ = (undefined4)uVar8;
      auVar52._12_4_ = (undefined4)(uVar8 >> 0x20);
      auVar22._0_4_ = ~(uint)uVar10 & auVar44._0_4_;
      auVar22._4_4_ = ~(uint)(uVar10 >> 0x20) & auVar44._4_4_;
      auVar22._8_4_ = ~(uint)uVar9 & auVar44._8_4_;
      auVar22._12_4_ = ~(uint)(uVar9 >> 0x20) & auVar44._12_4_;
      uVar8 = -(ulonglong)(dVar29 < auVar47._0_8_);
      lVar11 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[1] < auVar47._8_8_);
      auVar35._0_8_ = CONCAT44(~(uint)(uVar8 >> 0x20) & auVar47._4_4_,~(uint)uVar8 & auVar47._0_4_);
      auVar35._8_4_ = ~(uint)lVar11 & auVar47._8_4_;
      auVar35._12_4_ = ~(uint)((ulonglong)lVar11 >> 0x20) & auVar47._12_4_;
      local_b8 = SUB168(auVar55 | auVar18,0);
      dVar53 = SUB168(auVar52 | auVar22,0) - local_b8;
      local_b0 = SUB168(auVar55 | auVar18,8);
      dVar27 = SUB168(auVar52 | auVar22,8) - local_b0;
      dVar45 = (double)(uVar8 & (ulonglong)(auVar47._0_8_ - dVar4) | auVar35._0_8_) - local_a8;
      auVar23._8_4_ = SUB84(dVar27,0);
      auVar23._0_8_ = dVar53;
      auVar23._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
      auVar15 = divpd(auVar23,(undefined1  [16])GlobalVectorConstants::Double360.XY.m128d_f64);
      auVar36 = roundpd(auVar35,auVar15,3);
      auVar24._8_8_ = 0;
      auVar24._0_8_ = dVar45;
      auVar15 = divpd(auVar24,(undefined1  [16])GlobalVectorConstants::Double360.ZW.m128d_f64);
      auVar37._0_8_ = auVar36._0_8_ * dVar2;
      auVar37._8_8_ = auVar36._8_8_ * dVar3;
      dVar53 = dVar53 - auVar37._0_8_;
      dVar27 = dVar27 - auVar37._8_8_;
      auVar15 = roundpd(auVar37,auVar15,3);
      auVar25._8_4_ = SUB84(dVar27,0);
      auVar25._0_8_ = dVar53;
      auVar25._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
      dVar45 = dVar45 - auVar15._0_8_ * dVar4;
      dVar51 = 0.0 - auVar15._8_8_ * dVar28;
      uVar8 = -(ulonglong)(0.0 <= dVar53);
      uVar9 = -(ulonglong)(0.0 <= dVar27);
      uVar10 = -(ulonglong)(0.0 <= dVar45);
      uVar12 = -(ulonglong)(0.0 <= dVar51);
      auVar38._0_8_ = uVar8 & (ulonglong)dVar53;
      auVar38._8_4_ = (undefined4)(uVar9 & (ulonglong)dVar27);
      auVar38._12_4_ = (undefined4)((uVar9 & (ulonglong)dVar27) >> 0x20);
      dVar27 = auVar25._8_8_ + dVar3;
      auVar42._0_4_ = ~(uint)uVar8 & SUB84(dVar53 + dVar2,0);
      auVar42._4_4_ = ~(uint)(uVar8 >> 0x20) & (uint)((ulonglong)(dVar53 + dVar2) >> 0x20);
      auVar42._8_4_ = ~(uint)uVar9 & SUB84(dVar27,0);
      auVar42._12_4_ = ~(uint)(uVar9 >> 0x20) & (uint)((ulonglong)dVar27 >> 0x20);
      auVar26._8_4_ = SUB84(dVar51,0);
      auVar26._0_8_ = dVar45;
      auVar26._12_4_ = (int)((ulonglong)dVar51 >> 0x20);
      auVar42 = auVar42 | auVar38;
      dVar28 = auVar26._8_8_ + dVar28;
      auVar39._0_4_ = ~(uint)uVar10 & SUB84(dVar45 + dVar4,0);
      auVar39._4_4_ = ~(uint)(uVar10 >> 0x20) & (uint)((ulonglong)(dVar45 + dVar4) >> 0x20);
      auVar39._8_4_ = ~(uint)uVar12 & SUB84(dVar28,0);
      auVar39._12_4_ = ~(uint)(uVar12 >> 0x20) & (uint)((ulonglong)dVar28 >> 0x20);
      auVar1._8_4_ = (int)(uVar12 & (ulonglong)dVar51);
      auVar1._0_8_ = uVar10 & (ulonglong)dVar45;
      auVar1._12_4_ = (int)((uVar12 & (ulonglong)dVar51) >> 0x20);
      auVar39 = auVar39 | auVar1;
      uVar10 = -(ulonglong)(dVar29 < auVar39._0_8_);
      uVar9 = -(ulonglong)(dVar49 < auVar42._0_8_);
      uVar12 = -(ulonglong)(dVar50 < auVar42._8_8_);
      auVar48._0_8_ = uVar9 & (ulonglong)(auVar42._0_8_ - dVar2);
      uVar8 = uVar12 & (ulonglong)(auVar42._8_8_ - dVar3);
      auVar48._8_4_ = (undefined4)uVar8;
      auVar48._12_4_ = (undefined4)(uVar8 >> 0x20);
      auVar13._4_4_ = ~(uint)(uVar9 >> 0x20) & auVar42._4_4_;
      auVar13._0_4_ = ~(uint)uVar9 & auVar42._0_4_;
      auVar13._8_4_ = ~(uint)uVar12 & auVar42._8_4_;
      auVar13._12_4_ = ~(uint)(uVar12 >> 0x20) & auVar42._12_4_;
      fVar5 = *param_4;
      if (__real_3f800000 <= *param_4) {
        fVar5 = __real_3f800000;
      }
      if (fVar5 <= 0.0) {
        fVar5 = 0.0;
      }
      dVar27 = (double)fVar5;
      local_b8 = SUB168(auVar48 | auVar13,0) * dVar27 + local_b8;
      local_b0 = SUB168(auVar48 | auVar13,8) * dVar27 + local_b0;
      local_a8 = (double)(uVar10 & (ulonglong)(auVar39._0_8_ - dVar4) |
                         CONCAT44(~(uint)(uVar10 >> 0x20) & auVar39._4_4_,
                                  ~(uint)uVar10 & auVar39._0_4_)) * dVar27 + local_a8;
      pUVar7 = FWeakObjectPtr::Get(&local_res8);
      (**(code **)(*(longlong *)pUVar7 + 0x370))(pUVar7,&local_b8);
      return true;
    }
  }
  return false;
}

// RotateByDirRotator @ 14b84db40

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

bool __cdecl
UDS_RotateToTargetAbility::RotateByDirRotator(FDS_EntityBase *param_1,TRotator<double> *param_2)

{
  bool bVar1;
  TRotator<double> *pTVar2;
  float local_res8 [2];
  TRotator<double> local_28;
  
  if (param_1 == (FDS_EntityBase *)0x0) {
    return false;
  }
  local_res8[0] = 1.0;
  pTVar2 = FDS_EntityBase::GetEntityRotation(param_1,&local_28);
  bVar1 = RotateByDirRotator(param_1,param_2,pTVar2,local_res8);
  return bVar1;
}

// RotateByDirVector @ 14b84dba0

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

bool __cdecl
UDS_RotateToTargetAbility::RotateByDirVector(FDS_EntityBase *param_1,TVector<double> *param_2)

{
  bool bVar1;
  TRotator<double> *pTVar2;
  float local_res8 [2];
  TRotator<double> local_28;
  
  if (param_1 == (FDS_EntityBase *)0x0) {
    return false;
  }
  local_res8[0] = 1.0;
  pTVar2 = FDS_EntityBase::GetEntityRotation(param_1,&local_28);
  bVar1 = RotateByDirVector(param_1,param_2,pTVar2,local_res8);
  return bVar1;
}

// RotateByDirVector @ 14b84dc00

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

bool __cdecl
UDS_RotateToTargetAbility::RotateByDirVector
          (FDS_EntityBase *param_1,TVector<double> *param_2,TRotator<double> *param_3,float *param_4
          )

{
  bool bVar1;
  double dVar2;
  TVector<double>_u_0 local_38;
  TRotator<double> local_20;
  
  local_38._s_0.X = (param_2->field0_0x0)._s_0.X;
  local_38._s_0.Y = (param_2->field0_0x0)._s_0.Y;
  local_38._s_0.Z = 0.0;
  dVar2 = local_38._s_0.Y * local_38._s_0.Y + local_38._s_0.X * local_38._s_0.X;
  if (__real_3e45798ee0000000 < dVar2) {
    dVar2 = __real_3ff0000000000000 / SQRT(dVar2);
    local_38._s_0.X = local_38._s_0.X * dVar2;
    local_38._s_0.Y = local_38._s_0.Y * dVar2;
  }
  UE::Math::TVector<double>::ToOrientationRotator((TVector<double> *)&local_38._s_0,&local_20);
  bVar1 = RotateByDirRotator(param_1,&local_20,param_3,param_4);
  return bVar1;
}

// RotateByInput @ 14b84dcb0

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

bool __cdecl
UDS_RotateToTargetAbility::RotateByInput(FDS_EntityBase *param_1,TVector2<double> *param_2)

{
  int iVar1;
  bool bVar2;
  TRotator<double> *pTVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  APawn *this;
  TRotator<double> *pTVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  float local_res8 [4];
  FWeakObjectPtr local_res18 [2];
  double local_c8;
  double dStack_c0;
  undefined8 local_b8;
  TRotator<double> local_b0;
  TVector<double>_u_0 local_98;
  TVector<double>_u_0 local_80;
  TRotator<double> local_68;
  TRotator<double> local_50;
  
  if (param_1 == (FDS_EntityBase *)0x0) {
    return false;
  }
  local_res8[0] = 1.0;
  pTVar3 = FDS_EntityBase::GetEntityRotation(param_1,&local_50);
  (**(code **)(param_1->_padding_ + 0x150))(param_1);
  bVar2 = TWeakObjectPtr<AActor,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<AActor,FWeakObjectPtr> *)local_res18,(void *)0x0);
  if (!bVar2) {
    pUVar4 = FWeakObjectPtr::Get(local_res18);
    pUVar5 = Z_Construct_UClass_ACharacter_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if (((iVar1 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
        ((longlong *)
         *(undefined1 **)
          (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
         &pUVar5->_padding_)) &&
       (this = (APawn *)FWeakObjectPtr::Get(local_res18), this != (APawn *)0x0)) {
      pUVar5 = Z_Construct_UClass_ACharacter_NoRegister();
      iVar1 = (int)pUVar5->_padding_;
      if ((iVar1 <= *(int *)(this->_padding_ + 0x38)) &&
         ((longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar1 * 8)
          == &pUVar5->_padding_)) {
        pTVar6 = APawn::GetControlRotation(this,&local_68);
        local_b0.Yaw = pTVar6->Yaw;
        local_b0.Pitch = 0.0;
        local_b0.Roll = 0.0;
        UE::Math::TRotator<double>::RotateVector
                  (&local_b0,(TVector<double> *)&local_80._s_0,
                   &UE::Math::TVector<double>::RightVector);
        UE::Math::TRotator<double>::RotateVector
                  (&local_b0,(TVector<double> *)&local_98._s_0,
                   &UE::Math::TVector<double>::ForwardVector);
        dVar7 = (param_2->field0_0x0)._s_0.X;
        dVar9 = (param_2->field0_0x0)._s_0.Y;
        dVar8 = dVar9 * local_98._s_0.X + dVar7 * local_80._s_0.X;
        local_68.Roll = dVar9 * local_98._s_0.Z + dVar7 * local_80._s_0.Z;
        dVar9 = dVar9 * local_98._s_0.Y + dVar7 * local_80._s_0.Y;
        unique0x100000ac = SUB84(dVar9,0);
        local_c8 = dVar8;
        unique0x100000b0 = (int)((ulonglong)dVar9 >> 0x20);
        dVar7 = dVar9 * dVar9 + dVar8 * dVar8;
        if (__real_3e45798ee0000000 < dVar7) {
          dVar7 = __real_3ff0000000000000 / SQRT(dVar7);
          dStack_c0 = dVar9 * dVar7;
          local_c8 = dVar8 * dVar7;
        }
        local_b8 = 0.0;
        UE::Math::TVector<double>::ToOrientationRotator((TVector<double> *)&local_c8,&local_68);
        bVar2 = RotateByDirRotator(param_1,&local_68,pTVar3,local_res8);
        return bVar2;
      }
    }
  }
  return false;
}

// RotateByInput @ 14b84dee0

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

bool __cdecl
UDS_RotateToTargetAbility::RotateByInput
          (FDS_EntityBase *param_1,TVector2<double> *param_2,TRotator<double> *param_3,
          float *param_4)

{
  double dVar1;
  double dVar2;
  int iVar3;
  bool bVar4;
  UObject *pUVar5;
  UClass *pUVar6;
  APawn *this;
  TRotator<double> *pTVar7;
  FWeakObjectPtr local_res8;
  TRotator<double> local_78;
  TVector<double>_u_0 local_60;
  TVector<double>_u_0 local_48;
  TVector<double>_u_0 local_30;
  
  if (param_1 != (FDS_EntityBase *)0x0) {
    (**(code **)(param_1->_padding_ + 0x150))();
    bVar4 = TWeakObjectPtr<AActor,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<AActor,FWeakObjectPtr> *)&local_res8,(void *)0x0);
    if (!bVar4) {
      pUVar5 = FWeakObjectPtr::Get(&local_res8);
      pUVar6 = Z_Construct_UClass_ACharacter_NoRegister();
      iVar3 = (int)pUVar6->_padding_;
      if (((iVar3 <= *(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38)) &&
          ((longlong *)
           *(undefined1 **)
            (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar3 * 8) ==
           &pUVar6->_padding_)) &&
         (this = (APawn *)FWeakObjectPtr::Get(&local_res8), this != (APawn *)0x0)) {
        pUVar6 = Z_Construct_UClass_ACharacter_NoRegister();
        iVar3 = (int)pUVar6->_padding_;
        if ((iVar3 <= *(int *)(this->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar3 * 8) ==
            &pUVar6->_padding_)) {
          pTVar7 = APawn::GetControlRotation(this,(TRotator<double> *)&local_30._s_0);
          local_78.Yaw = pTVar7->Yaw;
          local_78.Pitch = 0.0;
          local_78.Roll = 0.0;
          UE::Math::TRotator<double>::RotateVector
                    (&local_78,(TVector<double> *)&local_48._s_0,
                     &UE::Math::TVector<double>::RightVector);
          UE::Math::TRotator<double>::RotateVector
                    (&local_78,(TVector<double> *)&local_60._s_0,
                     &UE::Math::TVector<double>::ForwardVector);
          dVar1 = (param_2->field0_0x0)._s_0.X;
          dVar2 = (param_2->field0_0x0)._s_0.Y;
          local_30._s_0.X = dVar2 * local_60._s_0.X + dVar1 * local_48._s_0.X;
          local_30._s_0.Y = dVar2 * local_60._s_0.Y + dVar1 * local_48._s_0.Y;
          local_30._s_0.Z = dVar2 * local_60._s_0.Z + dVar1 * local_48._s_0.Z;
          bVar4 = RotateByDirVector(param_1,(TVector<double> *)&local_30._s_0,param_3,param_4);
          return bVar4;
        }
      }
    }
  }
  return false;
}

// RotateByLocation @ 14b84e090

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

bool __cdecl
UDS_RotateToTargetAbility::RotateByLocation
          (FDS_EntityBase *param_1,TVector<double> *param_2,TVector<double> *param_3,
          TRotator<double> *param_4,float *param_5)

{
  bool bVar1;
  double dVar2;
  TVector<double>_u_0 local_38;
  TRotator<double> local_20;
  
  local_38._s_0.X = (param_2->field0_0x0)._s_0.X - (param_3->field0_0x0)._s_0.X;
  local_38._s_0.Y = (param_2->field0_0x0)._s_0.Y - (param_3->field0_0x0)._s_0.Y;
  local_38._s_0.Z = 0.0;
  dVar2 = local_38._s_0.Y * local_38._s_0.Y + local_38._s_0.X * local_38._s_0.X;
  if (__real_3e45798ee0000000 < dVar2) {
    dVar2 = __real_3ff0000000000000 / SQRT(dVar2);
    local_38._s_0.Y = dVar2 * local_38._s_0.Y;
    local_38._s_0.X = dVar2 * local_38._s_0.X;
  }
  UE::Math::TVector<double>::ToOrientationRotator((TVector<double> *)&local_38._s_0,&local_20);
  bVar1 = RotateByDirRotator(param_1,&local_20,param_4,param_5);
  return bVar1;
}

// RotateByLocation @ 14b84e150

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

bool __cdecl
UDS_RotateToTargetAbility::RotateByLocation(FDS_EntityBase *param_1,TVector<double> *param_2)

{
  bool bVar1;
  TRotator<double> *pTVar2;
  UObject *pUVar3;
  double *pdVar4;
  double dVar5;
  float local_res8 [4];
  FWeakObjectPtr local_res18 [2];
  TVector<double>_u_0 local_78;
  TRotator<double> local_60;
  TRotator<double> local_48;
  undefined1 local_30 [24];
  
  if (param_1 != (FDS_EntityBase *)0x0) {
    (**(code **)(param_1->_padding_ + 0x78))();
    bVar1 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> *)local_res18,(void *)0x0);
    if (!bVar1) {
      local_res8[0] = 1.0;
      pTVar2 = FDS_EntityBase::GetEntityRotation(param_1,&local_48);
      pUVar3 = FWeakObjectPtr::Get(local_res18);
      pdVar4 = (double *)(**(code **)(*(longlong *)pUVar3 + 0x338))(pUVar3,local_30);
      local_78._s_0.Z = 0.0;
      local_78._s_0.X = (param_2->field0_0x0)._s_0.X - *pdVar4;
      local_78._s_0.Y = (param_2->field0_0x0)._s_0.Y - pdVar4[1];
      dVar5 = local_78._s_0.Y * local_78._s_0.Y + local_78._s_0.X * local_78._s_0.X;
      if (__real_3e45798ee0000000 < dVar5) {
        dVar5 = __real_3ff0000000000000 / SQRT(dVar5);
        local_78._s_0.X = local_78._s_0.X * dVar5;
        local_78._s_0.Y = local_78._s_0.Y * dVar5;
      }
      UE::Math::TVector<double>::ToOrientationRotator((TVector<double> *)&local_78._s_0,&local_60);
      bVar1 = RotateByDirRotator(param_1,&local_60,pTVar2,local_res8);
      return bVar1;
    }
  }
  return false;
}

// RotateByStepInfo @ 14b84e290

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

bool __cdecl
UDS_RotateToTargetAbility::RotateByStepInfo
          (FDS_RotateStepInfo *param_1,FDS_EntityBase *param_2,float *param_3,
          TWeakObjectPtr<UDS_FindTargetAbilityData,FWeakObjectPtr> param_4,
          TWeakObjectPtr<UDS_SkillMoveAbilityData,FWeakObjectPtr> param_5)

{
  double dVar1;
  EDS_ViewTarget EVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  UDS_LogManager *pUVar7;
  UObject *pUVar8;
  FString *pFVar9;
  TRotator<double> *pTVar10;
  FDS_GetTargetLocationResult *pFVar11;
  double *pdVar12;
  float fVar13;
  undefined1 auVar14 [16];
  float fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  FWeakObjectPtr local_res20;
  undefined1 auStackY_328 [32];
  float local_2f8;
  float local_2f4;
  float local_2f0;
  float local_2ec;
  FWeakObjectPtr local_2e8;
  TRotator<double> local_2e0;
  TVector<double>_u_0 local_2c8;
  TVector<double>_u_0 local_2b0;
  TRotator<double> local_298;
  FDS_GetTargetLocationResult local_280;
  TVector<double>_u_0 local_258;
  TVector<double>_u_0 local_240;
  TRotator<double> local_228;
  TRotator<double> local_210;
  FString local_1f8;
  FString local_1e8;
  TRotator<double> local_1d8;
  undefined1 local_1c0 [24];
  TRotator<double> local_1a8;
  FDS_GetTargetLocationResult local_190;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_328;
  if (param_2 != (FDS_EntityBase *)0x0) {
    local_res20 = param_4.WeakPtr;
    (**(code **)(param_2->_padding_ + 0x78))(param_2);
    bVar5 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> *)&local_2e8,(void *)0x0);
    if (!bVar5) {
      EVar2 = param_1->ViewTarget;
      if (EVar2 == TargetView) {
        fVar13 = param_1->DelayViewRotation + param_1->LinkStartTime;
        fVar15 = *param_3 - fVar13;
        if ((fVar13 <= 0.0) || (0.0 <= fVar15)) {
          local_2f4 = 1.0;
          if (0.0 < param_1->ViewRotationTime) {
            local_2f4 = fVar15 / param_1->ViewRotationTime;
          }
          if (param_1->HasTargetOnStartStep == true) {
            bVar5 = FDS_RotateStepInfo::IsInterpolationStep(param_1);
            if (bVar5) {
              local_2e0.Pitch =
                   (param_1->DestToTargetRotatorOnStartStep).Pitch + (param_1->ViewRotation).Pitch;
              dVar1 = (param_1->DestToTargetRotatorOnStartStep).Yaw;
              uVar16 = SUB84(dVar1,0);
              uVar17 = (undefined4)((ulonglong)dVar1 >> 0x20);
              local_2e0.Roll = (param_1->DestToTargetRotatorOnStartStep).Roll;
            }
            else {
              local_2e0.Pitch =
                   (param_1->SourceToTargetRotatorOnStartStep).Pitch + (param_1->ViewRotation).Pitch
              ;
              dVar1 = (param_1->SourceToTargetRotatorOnStartStep).Yaw;
              uVar16 = SUB84(dVar1,0);
              uVar17 = (undefined4)((ulonglong)dVar1 >> 0x20);
              local_2e0.Roll = (param_1->SourceToTargetRotatorOnStartStep).Roll;
            }
          }
          else {
            local_2e0.Pitch =
                 (param_1->SourceRotatorOnStartStep).Pitch + (param_1->ViewRotation).Pitch;
            dVar1 = (param_1->SourceRotatorOnStartStep).Yaw;
            uVar16 = SUB84(dVar1,0);
            uVar17 = (undefined4)((ulonglong)dVar1 >> 0x20);
            local_2e0.Roll = (param_1->SourceRotatorOnStartStep).Roll;
          }
          local_2e0.Roll = local_2e0.Roll + (param_1->ViewRotation).Roll;
          local_2e0.Yaw = (double)CONCAT44(uVar17,uVar16) + (param_1->ViewRotation).Yaw;
          bVar5 = RotateByDirRotator(param_2,&local_2e0,&param_1->SourceRotatorOnStartStep,
                                     &local_2f4);
          return bVar5;
        }
      }
      else if (EVar2 == RotationView) {
        fVar13 = param_1->DelayViewRotation + param_1->LinkStartTime;
        fVar15 = *param_3 - fVar13;
        if ((fVar13 <= 0.0) || (0.0 <= fVar15)) {
          local_2f8 = 1.0;
          if (0.0 < param_1->ViewRotationTime) {
            local_2f8 = fVar15 / param_1->ViewRotationTime;
          }
          local_298.Pitch =
               (param_1->ViewRotation).Pitch + (param_1->SourceRotatorOnStartStep).Pitch;
          local_298.Yaw = (param_1->ViewRotation).Yaw + (param_1->SourceRotatorOnStartStep).Yaw;
          local_298.Roll = (param_1->ViewRotation).Roll + (param_1->SourceRotatorOnStartStep).Roll;
          bVar5 = RotateByDirRotator(param_2,&local_298,&param_1->SourceRotatorOnStartStep,
                                     &local_2f8);
          return bVar5;
        }
      }
      else if (EVar2 != Stand) {
        if (EVar2 == AttackStand) {
          fVar13 = *param_3 - param_1->LinkStartTime;
          if ((0.0 < param_1->LinkStartTime) && (fVar13 < 0.0)) {
            return true;
          }
          if (param_1->FirstImpactTime <= fVar13) {
            return true;
          }
          bVar5 = TWeakObjectPtr<UDS_FindTargetAbilityData,FWeakObjectPtr>::UEOpEquals
                            ((TWeakObjectPtr<UDS_FindTargetAbilityData,FWeakObjectPtr> *)
                             &local_res20,(void *)0x0);
          if (bVar5) {
            return false;
          }
          pFVar11 = UDS_FindTargetAbility::GetTargetLocation
                              (&local_190,
                               (TWeakObjectPtr<UDS_FindTargetAbilityData,FWeakObjectPtr>)local_res20
                               ,true);
          local_280.bIsValid = pFVar11->bIsValid;
          local_280._1_7_ = *(undefined7 *)&pFVar11->field_0x1;
          local_280.TargetLocation.field0_0x0._s_0.X = (pFVar11->TargetLocation).field0_0x0._s_0.X;
          local_280.TargetLocation.field0_0x0._s_0.Y = (pFVar11->TargetLocation).field0_0x0._s_0.Y;
          local_280.TargetLocation.field0_0x0._s_0.Z = (pFVar11->TargetLocation).field0_0x0._s_0.Z;
          local_280.TargetRadius = pFVar11->TargetRadius;
          local_280._36_4_ = *(undefined4 *)&pFVar11->field_0x24;
          bVar5 = FDS_GetTargetLocationResult::IsValidData(&local_280);
          if (!bVar5) {
            return false;
          }
          pUVar8 = FWeakObjectPtr::Get(&local_2e8);
          pdVar12 = (double *)(**(code **)(*(longlong *)pUVar8 + 0x338))(pUVar8,local_1c0);
          local_2b0._s_0.X = local_280.TargetLocation.field0_0x0._s_0.X - *pdVar12;
          local_2b0._s_0.Y = local_280.TargetLocation.field0_0x0._s_0.Y - pdVar12[1];
          local_2b0._s_0.Z = 0.0;
          UE::Math::TVector<double>::Normalize
                    ((TVector<double> *)&local_2b0._s_0,__real_3e45798ee0000000);
          UE::Math::TVector<double>::ToOrientationRotator
                    ((TVector<double> *)&local_2b0._s_0,&local_228);
          pUVar8 = FWeakObjectPtr::Get(&local_2e8);
          (**(code **)(*(longlong *)pUVar8 + 0x4f0))(pUVar8,&local_228);
          local_2ec = 1.0;
          pTVar10 = FDS_EntityBase::GetEntityRotation(param_2,&local_1a8);
          bVar5 = RotateByDirRotator(param_2,&local_228,pTVar10,&local_2ec);
          return bVar5;
        }
        if (EVar2 != AttachTargetView) {
          pUVar7 = UDS_LogManager::GetInst();
          if (pUVar7 != (UDS_LogManager *)0x0) {
            pUVar7 = UDS_LogManager::GetInst();
            local_168._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_168,"UDS_RotateToTargetAbility::RotateByStepInfo",0x2b,Yes);
            UDS_LogManager::PrintLog
                      (pUVar7,1,Warning,local_168.Ptr,0x1ff,
                       L"Need to define behavior according to ViewTarget.");
            if ((void *)local_168._padding_ != (void *)0x0) {
              FMemory::Free((void *)local_168._padding_);
            }
          }
          bVar5 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<3386909766793036288>,false,
                             "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Ability\\DS_RotateToTargetAbility.cpp"
                             ,0x200,"false");
          if (!bVar5) {
            return false;
          }
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        bVar5 = TWeakObjectPtr<UDS_SkillMoveAbilityData,FWeakObjectPtr>::UEOpEquals
                          (&param_5,(void *)0x0);
        if (bVar5) {
          return false;
        }
        pUVar8 = FWeakObjectPtr::Get(&param_5.WeakPtr);
        iVar3 = param_1->StepIndex;
        if (iVar3 < 0) {
          return false;
        }
        if (*(int *)&pUVar8[4].field_0x8 <= iVar3) {
          return false;
        }
        if ((iVar3 < 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        fVar13 = *(float *)((longlong)iVar3 * 0x58 + 0x20 + *(longlong *)(pUVar8 + 4)) +
                 param_1->LinkStartTime;
        fVar15 = *param_3 - fVar13;
        if ((0.0 < fVar13) && (fVar15 < 0.0)) {
          return true;
        }
        if (*(float *)((longlong)iVar3 * 0x58 + 0x24 + *(longlong *)(pUVar8 + 4)) <= fVar15) {
          return true;
        }
        bVar5 = TWeakObjectPtr<UDS_FindTargetAbilityData,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<UDS_FindTargetAbilityData,FWeakObjectPtr> *)&local_res20,
                           (void *)0x0);
        if (bVar5) {
          return false;
        }
        pUVar8 = FWeakObjectPtr::Get(&local_res20);
        bVar5 = FDS_TargetInfo::IsValidData((FDS_TargetInfo *)&pUVar8[2].field_0x8);
        if (!bVar5) {
          return false;
        }
        if ((param_1->AtkAttachSocket).Data.ArrayNum < 2) {
          return false;
        }
        if ((param_1->DefAttachSocket).Data.ArrayNum < 2) {
          return false;
        }
        pFVar9 = ::FString::FString(&local_1f8,&param_1->AtkAttachSocket);
        DS_Util::GetSocketLocation((TVector<double> *)&local_240._s_0,param_2->EntityID,pFVar9);
        pFVar9 = ::FString::FString(&local_1e8,&param_1->DefAttachSocket);
        DS_Util::GetSocketLocation
                  ((TVector<double> *)&local_258._s_0,*(ulong64 *)&pUVar8[2].field_0x10,pFVar9);
        local_2c8._s_0.X = local_258._s_0.X - local_240._s_0.X;
        local_2c8._s_0.Y = local_258._s_0.Y - local_240._s_0.Y;
        auVar14._0_8_ = local_2c8._s_0.Y * local_2c8._s_0.Y + local_2c8._s_0.X * local_2c8._s_0.X;
        auVar14._8_8_ = 0;
        auVar14 = sqrtpd(auVar14,auVar14);
        if ((float)auVar14._0_8_ < param_2->ScaledCapsuleRadius ||
            (float)auVar14._0_8_ == param_2->ScaledCapsuleRadius) {
          return true;
        }
        local_2c8._s_0.Z = 0.0;
        UE::Math::TVector<double>::Normalize
                  ((TVector<double> *)&local_2c8._s_0,__real_3e45798ee0000000);
        UE::Math::TVector<double>::ToOrientationRotator
                  ((TVector<double> *)&local_2c8._s_0,&local_210);
        local_2f0 = 1.0;
        pTVar10 = FDS_EntityBase::GetEntityRotation(param_2,&local_1d8);
        bVar5 = RotateByDirRotator(param_2,&local_210,pTVar10,&local_2f0);
        return bVar5;
      }
      return true;
    }
  }
  return false;
}

