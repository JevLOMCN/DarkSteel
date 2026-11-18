// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 57

// StaticClass @ 14b5909d0

UClass * __cdecl UDS_SkillMoveAbility::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_SkillMoveAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_SkillMoveAbility",
               &Z_Registration_Info_UClass_UDS_SkillMoveAbility.InnerSingleton,
               StaticRegisterNativesUDS_SkillMoveAbility,0x178,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_SkillMoveAbility>,
               InternalVTableHelperCtorCaller<UDS_SkillMoveAbility>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_SkillMoveAbility.InnerSingleton;
}

// UDS_SkillMoveAbility @ 14b5948c0

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

UDS_SkillMoveAbility * __thiscall
UDS_SkillMoveAbility::UDS_SkillMoveAbility(UDS_SkillMoveAbility *this,FVTableHelper *param_1)

{
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  this->ElapsedTime = 0.0;
  (this->SkillMoveInfoList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SkillMoveInfoList).ArrayNum = 0;
  (this->SkillMoveInfoList).ArrayMax = 0;
  (this->SkillMoveDataPtr).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// ~UDS_SkillMoveAbility @ 14b595450

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

void __thiscall UDS_SkillMoveAbility::~UDS_SkillMoveAbility(UDS_SkillMoveAbility *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  DestructItems<FSkillMoveInfo,int>
            ((FSkillMoveInfo *)(this->SkillMoveInfoList).AllocatorInstance.Data,
             (this->SkillMoveInfoList).ArrayNum);
  pFVar1 = (this->SkillMoveInfoList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_GameplayAbility::~UDS_GameplayAbility((UDS_GameplayAbility *)this);
  return;
}

// GetPrivateStaticClass @ 14b597030

UClass * __cdecl UDS_SkillMoveAbility::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_SkillMoveAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_SkillMoveAbility",
               &Z_Registration_Info_UClass_UDS_SkillMoveAbility.InnerSingleton,
               StaticRegisterNativesUDS_SkillMoveAbility,0x178,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_SkillMoveAbility>,
               InternalVTableHelperCtorCaller<UDS_SkillMoveAbility>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_SkillMoveAbility.InnerSingleton;
}

// ShouldTickComponent @ 14b5977f0

bool __thiscall UDS_SkillMoveAbility::ShouldTickComponent(UDS_SkillMoveAbility *this)

{
  return false;
}

// StaticRegisterNativesUDS_SkillMoveAbility @ 14b5978b0

void __cdecl UDS_SkillMoveAbility::StaticRegisterNativesUDS_SkillMoveAbility(void)

{
  return;
}

// UDS_SkillMoveAbility @ 14b823460

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

UDS_SkillMoveAbility * __thiscall
UDS_SkillMoveAbility::UDS_SkillMoveAbility(UDS_SkillMoveAbility *this,FObjectInitializer *param_1)

{
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  this->ElapsedTime = 0.0;
  (this->SkillMoveInfoList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SkillMoveInfoList).ArrayNum = 0;
  (this->SkillMoveInfoList).ArrayMax = 0;
  (this->SkillMoveDataPtr).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// ApplyFinalSocketTransform @ 14b824f60

void __thiscall
UDS_SkillMoveAbility::ApplyFinalSocketTransform
          (UDS_SkillMoveAbility *this,TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> param_1,
          FSkillMoveInfo *param_2,TVector<double> *param_3,TRotator<double> *param_4)

{
  UObject *pUVar1;
  UDS_MovementCore *this_00;
  FWeakObjectPtr local_res10 [3];
  TRotator<double> local_28;
  
  local_res10[0] = param_1.WeakPtr;
  pUVar1 = FWeakObjectPtr::Get(local_res10);
  (**(code **)(*(longlong *)pUVar1 + 0x358))(pUVar1,param_3);
  this_00 = (UDS_MovementCore *)FWeakObjectPtr::Get(local_res10);
  UDS_MovementCore::GetActorRotation(this_00,&local_28);
  local_28.Yaw = (param_2->SkillRotator).Yaw + param_4->Yaw;
  pUVar1 = FWeakObjectPtr::Get(local_res10);
  (**(code **)(*(longlong *)pUVar1 + 0x370))(pUVar1,&local_28);
  return;
}

// ApplyIntermediateSocketTransform @ 14b825000

void __thiscall
UDS_SkillMoveAbility::ApplyIntermediateSocketTransform
          (UDS_SkillMoveAbility *this,TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> param_1,
          FSkillMoveInfo *param_2,TVector<double> *param_3,TVector<double> *param_4,
          TRotator<double> *param_5,double param_6)

{
  double dVar1;
  UObject *pUVar2;
  UDS_MovementCore *this_00;
  TRotator<double> *pTVar3;
  FWeakObjectPtr local_res10 [3];
  TRotator<double> local_28;
  
  (param_3->field0_0x0)._s_0.Z =
       ((param_4->field0_0x0)._s_0.Z - (param_2->StartSkillLocation).field0_0x0._s_0.Z) * param_6 +
       (param_2->StartSkillLocation).field0_0x0._s_0.Z;
  local_res10[0] = param_1.WeakPtr;
  pUVar2 = FWeakObjectPtr::Get(local_res10);
  (**(code **)(*(longlong *)pUVar2 + 0x358))(pUVar2,param_3);
  this_00 = (UDS_MovementCore *)FWeakObjectPtr::Get(local_res10);
  pTVar3 = UDS_MovementCore::GetActorRotation(this_00,&local_28);
  dVar1 = pTVar3->Yaw;
  (param_2->SkillRotator).Pitch = pTVar3->Pitch;
  (param_2->SkillRotator).Yaw = dVar1;
  (param_2->SkillRotator).Roll = pTVar3->Roll;
  (param_2->SkillRotator).Yaw = (param_2->SkillRotator).Yaw - param_5->Yaw;
  return;
}

// CalculateDirectionAndDistance @ 14b825780

void __thiscall
UDS_SkillMoveAbility::CalculateDirectionAndDistance
          (UDS_SkillMoveAbility *this,FSkillMoveInfo *param_1,TVector<double> *param_2,
          TVector<double> *param_3,TVector<double> *param_4,float *param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  UDS_DataBase *this_00;
  ulong64 uVar10;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar14;
  double local_58;
  double dVar11;
  
  local_58 = (param_3->field0_0x0)._s_0.Z - (param_2->field0_0x0)._s_0.Z;
  dVar3 = (param_3->field0_0x0)._s_0.X - (param_2->field0_0x0)._s_0.X;
  dVar4 = (param_3->field0_0x0)._s_0.Y - (param_2->field0_0x0)._s_0.Y;
  this_00 = (UDS_DataBase *)FWeakObjectPtr::Get(&(this->SkillMoveDataPtr).WeakPtr);
  dVar11 = dVar4 * dVar4 + dVar3 * dVar3;
  uVar10 = UDS_DataBase::GetEntityID(this_00);
  bVar9 = IsStraightMove(this,param_1,uVar10);
  if (!bVar9) {
    dVar11 = local_58 * local_58 + dVar11;
    uVar6 = dVar3;
    uVar7 = dVar4;
    uVar8 = local_58;
    if ((dVar11 != __real_3ff0000000000000) &&
       (uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
       uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
       uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
       __real_3e45798ee0000000 <= dVar11)) {
      dVar14 = __real_3ff0000000000000 / SQRT(dVar11);
      uVar6 = dVar3 * dVar14;
      uVar7 = dVar4 * dVar14;
      uVar8 = local_58 * dVar14;
    }
    auVar13._8_8_ = 0;
    auVar13._0_8_ = uVar8;
    auVar1._8_4_ = (int)uVar7;
    auVar1._0_8_ = uVar6;
    auVar1._12_4_ = (int)((ulonglong)uVar7 >> 0x20);
    *(undefined1 (*) [16])&param_4->field0_0x0 = auVar1;
    (param_4->field0_0x0)._s_0.Z = (double)uVar8;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = dVar11;
    auVar12 = sqrtpd(auVar13,auVar2);
    dVar11 = auVar12._0_8_;
    goto LAB_14b825901;
  }
  if (dVar11 == __real_3ff0000000000000) {
    auVar12._8_8_ = dVar4;
    auVar12._0_8_ = dVar3;
    if (local_58 != 0.0) {
LAB_14b825877:
      local_58 = 0.0;
    }
  }
  else {
    if (__real_3e45798ee0000000 <= dVar11) {
      auVar12._8_8_ = dVar4 * (__real_3ff0000000000000 / SQRT(dVar11));
      auVar12._0_8_ = dVar3 * (__real_3ff0000000000000 / SQRT(dVar11));
      goto LAB_14b825877;
    }
    auVar12._8_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    auVar12._0_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_58 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  *(undefined1 (*) [16])&param_4->field0_0x0 = auVar12;
  (param_4->field0_0x0)._s_0.Z = local_58;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = dVar11;
  auVar12 = sqrtpd(auVar12,auVar5);
  dVar11 = auVar12._0_8_;
LAB_14b825901:
  *param_5 = (float)dVar11;
  return;
}

// CalculateMovementSpeed @ 14b825940

float __thiscall
UDS_SkillMoveAbility::CalculateMovementSpeed
          (UDS_SkillMoveAbility *this,FSkillMoveInfo *param_1,float param_2,float param_3)

{
  float fVar1;
  
  if ((__real_322bcc77 < (float)((uint)param_2 & __xmm_7fffffff7fffffff7fffffff7fffffff)) &&
     (fVar1 = param_1->ExpectedArrivalTime - param_1->ElapsedMoveTime,
     __real_322bcc77 < (float)((uint)fVar1 & __xmm_7fffffff7fffffff7fffffff7fffffff))) {
    fVar1 = param_2 / fVar1;
    if (param_2 < fVar1 * param_3) {
      if (param_3 <= __real_322bcc77) {
        param_3 = __real_322bcc77;
      }
      fVar1 = param_2 / param_3;
    }
    return fVar1;
  }
  return 0.0;
}

// CalculateRotatedDestLocation @ 14b8259a0

TVector<double> * __thiscall
UDS_SkillMoveAbility::CalculateRotatedDestLocation
          (UDS_SkillMoveAbility *this,TVector<double> *__return_storage_ptr__,
          TWeakObjectPtr<AActor,FWeakObjectPtr> param_1,FSkillMoveInfo *param_2)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  UObject *pUVar4;
  FPayload *pFVar5;
  TRotator<double> *pTVar6;
  int iVar7;
  FRotationConversionCache *this_00;
  uint uVar8;
  TVector<double> *pTVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  FWeakObjectPtr local_res18;
  TQuat<double> local_98;
  TRotator<double> local_78;
  TVector<double>_u_0 local_60;
  TRotator<double> local_48;
  double local_20;
  
  pTVar9 = __return_storage_ptr__;
  local_res18 = param_1.WeakPtr;
  pUVar4 = FWeakObjectPtr::Get(&local_res18);
  uVar15 = SUB84(pTVar9,0);
  lVar10 = *(longlong *)(pUVar4 + 0xb);
  if (lVar10 == 0) {
    uVar11 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
    uVar13 = (undefined4)
             ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
    uVar17 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
    uVar18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
    uVar19 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    uVar20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
  }
  else {
    uVar11 = *(undefined4 *)(lVar10 + 0x220);
    uVar13 = *(undefined4 *)(lVar10 + 0x224);
    uVar17 = *(undefined4 *)(lVar10 + 0x210);
    uVar18 = *(undefined4 *)(lVar10 + 0x214);
    uVar19 = *(undefined4 *)(lVar10 + 0x218);
    uVar20 = *(undefined4 *)(lVar10 + 0x21c);
  }
  local_20 = (double)CONCAT44(uVar13,uVar11);
  pUVar4 = FWeakObjectPtr::Get(&local_res18);
  lVar10 = *(longlong *)(pUVar4 + 0xb);
  if (lVar10 == 0) {
    uVar12 = SUB84(UE::Math::TRotator<double>::ZeroRotator.Roll,0);
    uVar14 = (undefined4)((ulonglong)UE::Math::TRotator<double>::ZeroRotator.Roll >> 0x20);
    uVar15 = UE::Math::TRotator<double>::ZeroRotator.Pitch._0_4_;
    uVar11 = UE::Math::TRotator<double>::ZeroRotator.Pitch._4_4_;
    uVar13 = UE::Math::TRotator<double>::ZeroRotator.Yaw._0_4_;
    uVar16 = UE::Math::TRotator<double>::ZeroRotator.Yaw._4_4_;
  }
  else {
    local_98.X = *(double *)(lVar10 + 0x1f0);
    local_98.Y = *(double *)(lVar10 + 0x1f8);
    local_98.Z = *(double *)(lVar10 + 0x200);
    local_98.W = *(double *)(lVar10 + 0x208);
    this_00 = (FRotationConversionCache *)(lVar10 + 0x1e0);
    pFVar5 = FRotationConversionCache::GetOrCreatePayload(this_00);
    lVar10 = -(ulonglong)((pFVar5->CachedQuat).W != local_98.W);
    auVar2._8_4_ = (int)lVar10;
    auVar2._0_8_ = -(ulonglong)((pFVar5->CachedQuat).Z != local_98.Z);
    auVar2._12_4_ = (int)((ulonglong)lVar10 >> 0x20);
    uVar8 = movmskpd(uVar15,auVar2);
    lVar10 = -(ulonglong)(local_98.Y != (pFVar5->CachedQuat).Y);
    auVar3._8_4_ = (int)lVar10;
    auVar3._0_8_ = -(ulonglong)(local_98.X != (pFVar5->CachedQuat).X);
    auVar3._12_4_ = (int)((ulonglong)lVar10 >> 0x20);
    iVar7 = movmskpd((int)this_00,auVar3);
    if ((uVar8 & 0x3fffffff) != 0 || iVar7 != 0) {
      (pFVar5->CachedQuat).X = local_98.X;
      (pFVar5->CachedQuat).Y = local_98.Y;
      (pFVar5->CachedQuat).Z = local_98.Z;
      (pFVar5->CachedQuat).W = local_98.W;
      pTVar6 = UE::Math::TQuat<double>::Rotator(&local_98,&local_48);
      dVar1 = pTVar6->Yaw;
      (pFVar5->CachedRotator).Pitch = pTVar6->Pitch;
      (pFVar5->CachedRotator).Yaw = dVar1;
      (pFVar5->CachedRotator).Roll = pTVar6->Roll;
    }
    dVar1 = (pFVar5->CachedRotator).Roll;
    uVar12 = SUB84(dVar1,0);
    uVar14 = (undefined4)((ulonglong)dVar1 >> 0x20);
    uVar15 = *(undefined4 *)&(pFVar5->CachedRotator).Pitch;
    uVar11 = *(undefined4 *)((longlong)&(pFVar5->CachedRotator).Pitch + 4);
    uVar13 = *(undefined4 *)&(pFVar5->CachedRotator).Yaw;
    uVar16 = *(undefined4 *)((longlong)&(pFVar5->CachedRotator).Yaw + 4);
  }
  local_48.Roll = (double)CONCAT44(uVar14,uVar12);
  local_78.Pitch = (double)CONCAT44(uVar11,uVar15) - (param_2->ParentStartRotation).Pitch;
  local_78.Yaw = (double)CONCAT44(uVar16,uVar13) - (param_2->ParentStartRotation).Yaw;
  local_78.Roll = local_48.Roll - (param_2->ParentStartRotation).Roll;
  UE::Math::TRotator<double>::RotateVector
            (&local_78,(TVector<double> *)&local_60._s_0,&param_2->RelativeDestLocation);
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)CONCAT44(uVar18,uVar17) + local_60._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)CONCAT44(uVar20,uVar19) + local_60._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = local_20 + local_60._s_0.Z;
  return __return_storage_ptr__;
}

// CalculateSkillDestTime @ 14b825b50

double __thiscall
UDS_SkillMoveAbility::CalculateSkillDestTime
          (UDS_SkillMoveAbility *this,TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> param_1,
          FSkillMoveInfo *param_2,TVector<double> *param_3,TVector<double> *param_4)

{
  double dVar1;
  UDS_MovementCore *this_00;
  float fVar2;
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  FWeakObjectPtr local_res10 [3];
  TVector<double>_u_0 local_38 [2];
  
  local_res10[0] = param_1.WeakPtr;
  this_00 = (UDS_MovementCore *)FWeakObjectPtr::Get(local_res10);
  UDS_MovementCore::GetActorLocation(this_00,(TVector<double> *)&local_38[0]._s_0);
  fVar2 = param_2->ExpectedArrivalTime - param_2->ElapsedMoveTime;
  dVar3 = (double)local_38[0]._8_8_ - (param_3->field0_0x0)._s_0.Y;
  dVar1 = (double)local_38[0]._8_8_ - (param_4->field0_0x0)._s_0.Y;
  dVar6 = (double)local_38[0]._0_8_ - (param_4->field0_0x0)._s_0.X;
  dVar7 = (double)local_38[0]._0_8_ - (param_3->field0_0x0)._s_0.X;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = dVar1 * dVar1 + dVar6 * dVar6;
  auVar4 = sqrtpd(ZEXT416((uint)fVar2),auVar4);
  auVar5._8_8_ = 0;
  auVar5._0_8_ = dVar3 * dVar3 + dVar7 * dVar7;
  auVar5 = sqrtpd(auVar4,auVar5);
  dVar1 = (__real_3ff0000000000000 / auVar4._0_8_) * auVar5._0_8_;
  if (dVar1 <= __real_3e45798ee0000000) {
    dVar1 = __real_3e45798ee0000000;
  }
  dVar3 = UDS_TimeUtilManager::GetCurrentServerTime();
  return dVar3 + (double)fVar2 / dVar1;
}

// CalculateSocketDestination @ 14b825c20

TVector<double> * __thiscall
UDS_SkillMoveAbility::CalculateSocketDestination
          (UDS_SkillMoveAbility *this,TVector<double> *__return_storage_ptr__,
          TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> param_1,
          TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> param_2,FSkillMoveInfo *param_3)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  FScriptContainerElement *pFVar4;
  double dVar5;
  bool bVar6;
  FString *pFVar7;
  UDS_DataBase *this_00;
  ulong64 uVar8;
  UDS_MovementCore *pUVar9;
  TVector<double> *pTVar10;
  UObject *pUVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  FWeakObjectPtr local_res8 [2];
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  undefined1 local_d8 [16];
  double local_c8;
  TVector<double>_u_0 local_c0;
  TVector<double> local_a8;
  TVector<double> local_90 [4];
  
  local_res18 = param_1.WeakPtr;
  local_res20 = param_2.WeakPtr;
  pFVar7 = ::FString::FString((FString *)local_d8,&param_3->AtkAttachSocket);
  this_00 = (UDS_DataBase *)FWeakObjectPtr::Get(&(this->SkillMoveDataPtr).WeakPtr);
  uVar8 = UDS_DataBase::GetEntityID(this_00);
  DS_Util::GetSocketLocation((TVector<double> *)&local_c0._s_0,uVar8,pFVar7);
  dVar5 = __real_3f1a36e2e0000000;
  uVar17 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar14 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  local_d8._0_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_d8._8_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_c8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  if (((__real_3f1a36e2e0000000 <
        (double)CONCAT44((uint)((ulonglong)local_c0._0_8_ >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(local_c0._s_0.X,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))
      || (uVar12 = SUB84(local_c0._s_0.Y,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
         uVar15 = (uint)((ulonglong)local_c0._8_8_ >> 0x20) &
                  __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
         __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar15,uVar12) &&
         (double)CONCAT44(uVar15,uVar12) != __real_3f1a36e2e0000000)) ||
     (uVar12 = SUB84(local_c0._s_0.Z,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
     uVar15 = (uint)((ulonglong)local_c0._16_8_ >> 0x20) &
              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
     __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar15,uVar12) &&
     (double)CONCAT44(uVar15,uVar12) != __real_3f1a36e2e0000000)) {
    pUVar9 = (UDS_MovementCore *)FWeakObjectPtr::Get(&local_res18);
    pTVar10 = UDS_MovementCore::GetActorLocation(pUVar9,local_90);
    pFVar4 = (FScriptContainerElement *)((pTVar10->field0_0x0)._s_0.X - local_c0._s_0.X);
    dVar3 = (pTVar10->field0_0x0)._s_0.Y - local_c0._s_0.Y;
    dVar2 = (pTVar10->field0_0x0)._s_0.Z - local_c0._s_0.Z;
  }
  else {
    pUVar9 = (UDS_MovementCore *)FWeakObjectPtr::Get(&local_res18);
    pTVar10 = UDS_MovementCore::GetActorLocation(pUVar9,local_90);
    local_c0._s_0.X = (pTVar10->field0_0x0)._s_0.X;
    local_c0._s_0.Y = (pTVar10->field0_0x0)._s_0.Y;
    local_c0._s_0.Z = (pTVar10->field0_0x0)._s_0.Z;
    pFVar4 = (FScriptContainerElement *)local_d8._0_8_;
    dVar3 = (double)local_d8._8_8_;
    dVar2 = local_c8;
  }
  UDS_AbilityDataSet::GetAbilityData<UDS_FindTargetAbilityData>
            ((ulong64 *)local_res8,(EDS_AbilityTagType *)&this->_padding_);
  uVar8 = 0;
  bVar6 = FWeakObjectPtr::IsValid(local_res8);
  if (bVar6) {
    pUVar11 = FWeakObjectPtr::Get(local_res8);
    uVar8 = *(ulong64 *)&pUVar11[2].field_0x10;
  }
  pFVar7 = ::FString::FString((FString *)local_d8,&param_3->DefAttachSocket);
  DS_Util::GetSocketLocation(&local_a8,uVar8,pFVar7);
  uVar12 = local_a8.field0_0x0._0_4_;
  uVar15 = local_a8.field0_0x0._4_4_;
  if ((((double)CONCAT44(uVar15 & uVar17,uVar12 & uVar14) < dVar5 ||
        (double)CONCAT44(uVar15 & uVar17,uVar12 & uVar14) == dVar5) &&
      (uVar13 = local_a8.field0_0x0._8_4_ & uVar14, uVar16 = local_a8.field0_0x0._12_4_ & uVar17,
      (double)CONCAT44(uVar16,uVar13) < dVar5 || (double)CONCAT44(uVar16,uVar13) == dVar5)) &&
     (uVar14 = SUB84(local_a8.field0_0x0._s_0.Z,0) & uVar14,
     uVar17 = (uint)((ulonglong)local_a8.field0_0x0._16_8_ >> 0x20) & uVar17,
     (double)CONCAT44(uVar17,uVar14) < dVar5 || (double)CONCAT44(uVar17,uVar14) == dVar5)) {
    pUVar9 = (UDS_MovementCore *)FWeakObjectPtr::Get(&local_res20);
    pTVar10 = UDS_MovementCore::GetActorLocation(pUVar9,local_90);
    auVar1 = *(undefined1 (*) [16])&pTVar10->field0_0x0;
    uVar12 = auVar1._0_4_;
    uVar15 = auVar1._4_4_;
    local_a8.field0_0x0._s_0.Z = (pTVar10->field0_0x0)._s_0.Z;
    local_a8.field0_0x0._s_0.Y = (double)auVar1._8_8_;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar2 + local_a8.field0_0x0._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)pFVar4 + (double)CONCAT44(uVar15,uVar12);
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar3 + local_a8.field0_0x0._s_0.Y;
  return __return_storage_ptr__;
}

// CalculateSocketLerpValue @ 14b825e60

double __thiscall
UDS_SkillMoveAbility::CalculateSocketLerpValue(UDS_SkillMoveAbility *this,FSkillMoveInfo *param_1)

{
  double dVar1;
  
  dVar1 = (double)(param_1->ExpectedArrivalTime - param_1->MoveStartTime);
  if (dVar1 <= __real_3e45798ee0000000) {
    dVar1 = __real_3e45798ee0000000;
  }
  dVar1 = (double)param_1->ElapsedMoveTime / dVar1;
  if (__real_3ff0000000000000 <= dVar1) {
    dVar1 = __real_3ff0000000000000;
  }
  if (dVar1 <= 0.0) {
    dVar1 = 0.0;
  }
  return dVar1;
}

// CheckAbnormalAction @ 14b826120

bool __thiscall
UDS_SkillMoveAbility::CheckAbnormalAction(UDS_SkillMoveAbility *this,FSkillMoveInfo *param_1)

{
  bool bVar1;
  UDS_DataBase *this_00;
  UDS_AbnormalAbilityData *this_01;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  ulong64 local_18 [2];
  
  if (param_1->CheckTargetAbnormalAction == 0) {
    return true;
  }
  UDS_AbilityDataSet::GetAbilityData<UDS_FindTargetAbilityData>
            ((ulong64 *)&local_res18,(EDS_AbilityTagType *)&this->_padding_);
  bVar1 = FWeakObjectPtr::IsValid(&local_res18);
  if (bVar1) {
    this_00 = (UDS_DataBase *)FWeakObjectPtr::Get(&local_res18);
    local_18[0] = UDS_DataBase::GetEntityID(this_00);
    UDS_AbilityDataSet::GetAbilityData<UDS_AbnormalAbilityData>
              ((ulong64 *)&local_res20,(EDS_AbilityTagType *)local_18);
    bVar1 = FWeakObjectPtr::IsValid(&local_res20);
    if (bVar1) {
      this_01 = (UDS_AbnormalAbilityData *)FWeakObjectPtr::Get(&local_res20);
      bVar1 = UDS_AbnormalAbilityData::HasAbnormalInfoByID
                        (this_01,param_1->CheckTargetAbnormalAction);
      return bVar1;
    }
  }
  return false;
}

// ClearVariables @ 14b827e90

void __thiscall UDS_SkillMoveAbility::ClearVariables(UDS_SkillMoveAbility *this)

{
  int *piVar1;
  
  this->ElapsedTime = 0.0;
  DestructItems<FSkillMoveInfo,int>
            ((FSkillMoveInfo *)(this->SkillMoveInfoList).AllocatorInstance.Data,
             (this->SkillMoveInfoList).ArrayNum);
  piVar1 = &(this->SkillMoveInfoList).ArrayMax;
  (this->SkillMoveInfoList).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x100,8,0,&(this->SkillMoveInfoList).AllocatorInstance,0,piVar1);
  }
  (this->SkillMoveDataPtr).WeakPtr = (FWeakObjectPtr)0x0;
  return;
}

// CreateServerMoveData @ 14b82c450

FDS_AtomicSkillMoveData * __thiscall
UDS_SkillMoveAbility::CreateServerMoveData
          (UDS_SkillMoveAbility *this,FDS_AtomicSkillMoveData *__return_storage_ptr__)

{
  UObject *pUVar1;
  
  __return_storage_ptr__->MoveTime = 0.1;
  __return_storage_ptr__->AttachHoldingTime = 0.0;
  __return_storage_ptr__->SkillID = 0;
  __return_storage_ptr__->MoveAngle = 0;
  __return_storage_ptr__->MoveAngleMin = 0;
  __return_storage_ptr__->MoveAngleMax = 0;
  __return_storage_ptr__->MoveRange = 0;
  __return_storage_ptr__->EmptyTargetMoveRange = 0;
  __return_storage_ptr__->MoveStartTime = 0.0;
  __return_storage_ptr__->DelayMove = 0.0;
  (__return_storage_ptr__->AtkAttachSocket).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AtkAttachSocket).Data.ArrayNum = 0;
  (__return_storage_ptr__->AtkAttachSocket).Data.ArrayMax = 0;
  (__return_storage_ptr__->DefAttachSocket).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->DefAttachSocket).Data.ArrayNum = 0;
  (__return_storage_ptr__->DefAttachSocket).Data.ArrayMax = 0;
  __return_storage_ptr__->CheckTargetAbnormalAction = 0;
  __return_storage_ptr__->LastSkillMove = false;
  __return_storage_ptr__->bIsJumpSkill = false;
  __return_storage_ptr__->bIsSetLocationPoint = false;
  __return_storage_ptr__->SkillAttackID = 1;
  __return_storage_ptr__->SkillMoveType = DirectMov;
  pUVar1 = FWeakObjectPtr::Get(&(this->SkillMoveDataPtr).WeakPtr);
  __return_storage_ptr__->bIsJumpSkill = (bool)pUVar1[8].field_0x10;
  return __return_storage_ptr__;
}

// GetCollisionProfileNameByEntityType @ 14b8314b0

FName __thiscall
UDS_SkillMoveAbility::GetCollisionProfileNameByEntityType
          (UDS_SkillMoveAbility *this,EDS_EntityType param_1)

{
  FName FVar1;
  undefined7 in_register_00000011;
  char in_R8B;
  
  FVar1 = ::COLLISION_PROFILE_NPC_NOCOLLISION;
  if ((byte)(in_R8B - 2U) < 2) {
    FVar1 = ::COLLISION_PROFILE_PLAYER_IGNORE_COLLISION;
  }
  *(FName *)CONCAT71(in_register_00000011,param_1) = FVar1;
  FVar1._1_7_ = in_register_00000011;
  FVar1.ComparisonIndex.Value._0_1_ = param_1;
  return FVar1;
}

// GetFinalDestLocation @ 14b831bd0

TVector<double> * __thiscall
UDS_SkillMoveAbility::GetFinalDestLocation
          (UDS_SkillMoveAbility *this,TVector<double> *__return_storage_ptr__,
          FSkillMoveInfo *param_1)

{
  if (param_1->MoveType == TargetAttachMov) {
    GetSocketDestLocation(this,__return_storage_ptr__,param_1);
    return __return_storage_ptr__;
  }
  GetSkillDestLocation(this,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetSkillDestLocation @ 14b831fc0

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

TVector<double> * __thiscall
UDS_SkillMoveAbility::GetSkillDestLocation
          (UDS_SkillMoveAbility *this,TVector<double> *__return_storage_ptr__,
          FSkillMoveInfo *param_1)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  bool bVar6;
  UDS_DataBase *pUVar7;
  FDS_EntityBase *pFVar8;
  FDS_EntityBase *pFVar9;
  UObject *pUVar10;
  FPayload *pFVar11;
  TRotator<double> *pTVar12;
  int iVar13;
  FRotationConversionCache *this_00;
  uint uVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_e8;
  TVector<double>_u_0 local_e0;
  ulong64 local_c8 [2];
  TQuat<double> local_b8;
  TRotator<double> local_98;
  TVector<double>_u_0 local_80;
  TRotator<double> local_68;
  double local_40;
  
  pUVar7 = (UDS_DataBase *)FWeakObjectPtr::Get(&(this->SkillMoveDataPtr).WeakPtr);
  local_c8[0] = UDS_DataBase::GetEntityID(pUVar7);
  pFVar8 = FDS_EntityBase::GetEntityBase(local_c8);
  if (pFVar8 != (FDS_EntityBase *)0x0) {
    (**(code **)(pFVar8->_padding_ + 0x78))(pFVar8,&local_e8);
    bVar6 = FWeakObjectPtr::IsValid(&local_e8);
    if (bVar6) {
      pUVar7 = (UDS_DataBase *)FWeakObjectPtr::Get(&(this->SkillMoveDataPtr).WeakPtr);
      local_res20 = (FWeakObjectPtr)UDS_DataBase::GetEntityID(pUVar7);
      pFVar9 = FDS_EntityBase::GetEntityBase((ulong64 *)&local_res20);
      uVar20 = SUB84(&local_res8,0);
      (**(code **)(pFVar9->_padding_ + 0x1d0))(pFVar9);
      bVar6 = FWeakObjectPtr::IsValid(&local_res8);
      if (bVar6) {
        local_res20 = local_res8;
        pUVar10 = FWeakObjectPtr::Get(&local_res20);
        lVar15 = *(longlong *)(pUVar10 + 0xb);
        if (lVar15 == 0) {
          uVar16 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
          uVar18 = (undefined4)
                   ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
          uVar22 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
          uVar23 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
          uVar24 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
          uVar25 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
        }
        else {
          uVar16 = *(undefined4 *)(lVar15 + 0x220);
          uVar18 = *(undefined4 *)(lVar15 + 0x224);
          uVar22 = *(undefined4 *)(lVar15 + 0x210);
          uVar23 = *(undefined4 *)(lVar15 + 0x214);
          uVar24 = *(undefined4 *)(lVar15 + 0x218);
          uVar25 = *(undefined4 *)(lVar15 + 0x21c);
        }
        local_40 = (double)CONCAT44(uVar18,uVar16);
        pUVar10 = FWeakObjectPtr::Get(&local_res20);
        lVar15 = *(longlong *)(pUVar10 + 0xb);
        if (lVar15 == 0) {
          uVar17 = SUB84(UE::Math::TRotator<double>::ZeroRotator.Roll,0);
          uVar19 = (undefined4)((ulonglong)UE::Math::TRotator<double>::ZeroRotator.Roll >> 0x20);
          uVar20 = UE::Math::TRotator<double>::ZeroRotator.Pitch._0_4_;
          uVar16 = UE::Math::TRotator<double>::ZeroRotator.Pitch._4_4_;
          uVar18 = UE::Math::TRotator<double>::ZeroRotator.Yaw._0_4_;
          uVar21 = UE::Math::TRotator<double>::ZeroRotator.Yaw._4_4_;
        }
        else {
          local_b8.X = *(double *)(lVar15 + 0x1f0);
          local_b8.Y = *(double *)(lVar15 + 0x1f8);
          local_b8.Z = *(double *)(lVar15 + 0x200);
          local_b8.W = *(double *)(lVar15 + 0x208);
          this_00 = (FRotationConversionCache *)(lVar15 + 0x1e0);
          pFVar11 = FRotationConversionCache::GetOrCreatePayload(this_00);
          lVar15 = -(ulonglong)((pFVar11->CachedQuat).W != local_b8.W);
          auVar2._8_4_ = (int)lVar15;
          auVar2._0_8_ = -(ulonglong)((pFVar11->CachedQuat).Z != local_b8.Z);
          auVar2._12_4_ = (int)((ulonglong)lVar15 >> 0x20);
          uVar14 = movmskpd(uVar20,auVar2);
          lVar15 = -(ulonglong)((pFVar11->CachedQuat).Y != local_b8.Y);
          auVar3._8_4_ = (int)lVar15;
          auVar3._0_8_ = -(ulonglong)((pFVar11->CachedQuat).X != local_b8.X);
          auVar3._12_4_ = (int)((ulonglong)lVar15 >> 0x20);
          iVar13 = movmskpd((int)this_00,auVar3);
          if ((uVar14 & 0x3fffffff) != 0 || iVar13 != 0) {
            (pFVar11->CachedQuat).X = local_b8.X;
            (pFVar11->CachedQuat).Y = local_b8.Y;
            (pFVar11->CachedQuat).Z = local_b8.Z;
            (pFVar11->CachedQuat).W = local_b8.W;
            pTVar12 = UE::Math::TQuat<double>::Rotator(&local_b8,&local_68);
            dVar1 = pTVar12->Yaw;
            (pFVar11->CachedRotator).Pitch = pTVar12->Pitch;
            (pFVar11->CachedRotator).Yaw = dVar1;
            (pFVar11->CachedRotator).Roll = pTVar12->Roll;
          }
          dVar1 = (pFVar11->CachedRotator).Roll;
          uVar17 = SUB84(dVar1,0);
          uVar19 = (undefined4)((ulonglong)dVar1 >> 0x20);
          uVar20 = *(undefined4 *)&(pFVar11->CachedRotator).Pitch;
          uVar16 = *(undefined4 *)((longlong)&(pFVar11->CachedRotator).Pitch + 4);
          uVar18 = *(undefined4 *)&(pFVar11->CachedRotator).Yaw;
          uVar21 = *(undefined4 *)((longlong)&(pFVar11->CachedRotator).Yaw + 4);
        }
        local_68.Roll = (double)CONCAT44(uVar19,uVar17);
        local_98.Pitch = (double)CONCAT44(uVar16,uVar20) - (param_1->ParentStartRotation).Pitch;
        local_98.Yaw = (double)CONCAT44(uVar21,uVar18) - (param_1->ParentStartRotation).Yaw;
        local_98.Roll = local_68.Roll - (param_1->ParentStartRotation).Roll;
        UE::Math::TRotator<double>::RotateVector
                  (&local_98,(TVector<double> *)&local_80._s_0,&param_1->RelativeDestLocation);
        local_e0._s_0.Z = local_40 + local_80._s_0.Z;
        local_e0._s_0.X = (double)CONCAT44(uVar23,uVar22) + local_80._s_0.X;
        local_e0._s_0.Y = (double)CONCAT44(uVar25,uVar24) + local_80._s_0.Y;
      }
      else {
        local_e0._s_0.Z = (param_1->DestSkillLocation).field0_0x0._s_0.Z;
        local_e0._s_0.X = (double)*(undefined8 *)&(param_1->DestSkillLocation).field0_0x0;
        local_e0._s_0.Y = *(double *)((longlong)&(param_1->DestSkillLocation).field0_0x0 + 8);
      }
      auVar4._8_4_ = SUB84(local_e0._s_0.Y,0);
      auVar4._0_8_ = local_e0._s_0.X;
      auVar4._12_4_ = (int)((ulonglong)local_e0._s_0.Y >> 0x20);
      if (param_1->IsFixedDestLocation == false) {
        local_e0._0_16_ = auVar4;
        UpdateDestLocationByEntityType
                  (this,param_1,(TVector<double> *)&local_e0._s_0,pFVar8,
                   (TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>)local_e8);
        param_1->IsFixedDestLocation = true;
        *(double *)&(param_1->DestSkillLocation).field0_0x0 = local_e0._s_0.X;
        *(double *)((longlong)&(param_1->DestSkillLocation).field0_0x0 + 8) = local_e0._s_0.Y;
        (param_1->DestSkillLocation).field0_0x0._s_0.Z = local_e0._s_0.Z;
      }
      auVar5._8_4_ = SUB84(local_e0._s_0.Y,0);
      auVar5._0_8_ = local_e0._s_0.X;
      auVar5._12_4_ = (int)((ulonglong)local_e0._s_0.Y >> 0x20);
      *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar5;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = local_e0._s_0.Z;
      return __return_storage_ptr__;
    }
  }
  dVar1 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                           UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                        UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return __return_storage_ptr__;
}

// GetSkillVelocity @ 14b832290

TVector<double> * __thiscall
UDS_SkillMoveAbility::GetSkillVelocity
          (UDS_SkillMoveAbility *this,TVector<double> *__return_storage_ptr__,
          FSkillMoveInfo *param_1,TVector<double> *param_2,TVector<double> *param_3,float param_4)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  UDS_DataBase *this_00;
  UObject *pUVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  double dVar10;
  float local_res8 [2];
  FWeakObjectPtr local_38;
  TVector<double>_u_0 local_30;
  
  this_00 = (UDS_DataBase *)FWeakObjectPtr::Get(&(this->SkillMoveDataPtr).WeakPtr);
  UDS_DataBase::GetEntityID(this_00);
  UDS_MovementCore::GetMovementCore((ulong64)&local_38);
  bVar4 = FWeakObjectPtr::IsValid(&local_38);
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  if ((bVar4) &&
     (((uVar7 = (uint)*(undefined8 *)&param_3->field0_0x0 &
                (uint)__xmm_7fffffffffffffff7fffffffffffffff,
       uVar8 = (uint)((ulonglong)*(undefined8 *)&param_3->field0_0x0 >> 0x20) &
               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
       __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar8,uVar7) &&
       (double)CONCAT44(uVar8,uVar7) != __real_3f1a36e2e0000000 ||
       (uVar1 = *(undefined8 *)((longlong)&param_3->field0_0x0 + 8),
       uVar7 = (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
       uVar8 = (uint)((ulonglong)uVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
       __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar8,uVar7) &&
       (double)CONCAT44(uVar8,uVar7) != __real_3f1a36e2e0000000)) ||
      (uVar1 = *(undefined8 *)((longlong)&param_3->field0_0x0 + 0x10),
      uVar7 = (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
      uVar8 = (uint)((ulonglong)uVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
      __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar8,uVar7) &&
      (double)CONCAT44(uVar8,uVar7) != __real_3f1a36e2e0000000)))) {
    pUVar6 = FWeakObjectPtr::Get(&local_38);
    iVar5 = (**(code **)(*(longlong *)pUVar6 + 0x438))(pUVar6);
    if (iVar5 == 3) {
      (param_3->field0_0x0)._s_0.Z = (param_2->field0_0x0)._s_0.Z;
    }
    CalculateDirectionAndDistance
              (this,param_1,param_2,param_3,(TVector<double> *)&local_30._s_0,local_res8);
    if (((float)((uint)local_res8[0] & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77)
       || (fVar9 = param_1->ExpectedArrivalTime - param_1->ElapsedMoveTime,
          (float)((uint)fVar9 & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77)) {
      fVar9 = 0.0;
    }
    else {
      fVar9 = local_res8[0] / fVar9;
      if (local_res8[0] < fVar9 * param_4) {
        if (param_4 <= __real_322bcc77) {
          param_4 = __real_322bcc77;
        }
        fVar9 = local_res8[0] / param_4;
      }
    }
    dVar10 = (double)fVar9;
    auVar2._8_4_ = SUB84(local_30._s_0.Y * dVar10,0);
    auVar2._0_8_ = local_30._s_0.X * dVar10;
    auVar2._12_4_ = (int)((ulonglong)(local_30._s_0.Y * dVar10) >> 0x20);
    *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar2;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar10 * local_30._s_0.Z;
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return __return_storage_ptr__;
}

// GetSocketDestLocation @ 14b832430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TVector<double> * __thiscall
UDS_SkillMoveAbility::GetSocketDestLocation
          (UDS_SkillMoveAbility *this,TVector<double> *__return_storage_ptr__,
          FSkillMoveInfo *param_1)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  FScriptContainerElement *pFVar4;
  double dVar5;
  undefined8 uVar6;
  bool bVar7;
  UDS_DataBase *pUVar8;
  UDS_LogManager *pUVar9;
  UObject *pUVar10;
  FString *pFVar11;
  ulong64 uVar12;
  UDS_MovementCore *pUVar13;
  TVector<double> *pTVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  undefined1 auStackY_278 [32];
  uint uVar20;
  wchar_t *pwVar21;
  FWeakObjectPtr local_240;
  FWeakObjectPtr local_238;
  FWeakObjectPtr local_230;
  FWeakObjectPtr local_228;
  FWeakObjectPtr local_220;
  TVector<double>_u_0 local_218;
  TVector<double> local_200;
  undefined1 local_1e8 [16];
  double local_1d8;
  FWeakObjectPtr local_1d0;
  TVector<double> local_1c8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_1a8;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_278;
  pUVar8 = (UDS_DataBase *)FWeakObjectPtr::Get(&(this->SkillMoveDataPtr).WeakPtr);
  UDS_DataBase::GetEntityID(pUVar8);
  UDS_MovementCore::GetMovementCore((ulong64)&local_230);
  bVar7 = FWeakObjectPtr::IsValid(&local_230);
  if (bVar7) {
    UDS_AbilityDataSet::GetAbilityData<UDS_FindTargetAbilityData>
              ((ulong64 *)&local_240,(EDS_AbilityTagType *)&this->_padding_);
    bVar7 = FWeakObjectPtr::IsValid(&local_240);
    if (bVar7) {
      pUVar10 = FWeakObjectPtr::Get(&local_240);
      if (*(longlong *)&pUVar10[2].field_0x10 == 0) {
        pUVar9 = UDS_LogManager::GetInst();
        if (pUVar9 == (UDS_LogManager *)0x0) goto LAB_14b83265b;
        pUVar9 = UDS_LogManager::GetInst();
        local_1a8._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_1a8,"UDS_SkillMoveAbility::GetSocketDestLocation",0x2b,Yes);
        pwVar21 = L"targetEntityID 0";
        uVar20 = 0x26a;
      }
      else {
        UDS_MovementCore::GetMovementCore((ulong64)&local_238);
        bVar7 = FWeakObjectPtr::IsValid(&local_238);
        if (bVar7) {
          local_1d0 = local_238;
          local_228 = local_230;
          pFVar11 = ::FString::FString((FString *)local_1e8,&param_1->AtkAttachSocket);
          pUVar8 = (UDS_DataBase *)FWeakObjectPtr::Get(&(this->SkillMoveDataPtr).WeakPtr);
          uVar12 = UDS_DataBase::GetEntityID(pUVar8);
          DS_Util::GetSocketLocation((TVector<double> *)&local_218._s_0,uVar12,pFVar11);
          dVar5 = __real_3f1a36e2e0000000;
          uVar19 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
          uVar20 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
          local_1e8._0_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          local_1e8._8_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          local_1d8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          if (((__real_3f1a36e2e0000000 <
                (double)CONCAT44((uint)((ulonglong)local_218._0_8_ >> 0x20) &
                                 __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                 SUB84(local_218._s_0.X,0) &
                                 (uint)__xmm_7fffffffffffffff7fffffffffffffff)) ||
              (uVar15 = SUB84(local_218._s_0.Y,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
              uVar17 = (uint)((ulonglong)local_218._8_8_ >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
              __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar17,uVar15) &&
              (double)CONCAT44(uVar17,uVar15) != __real_3f1a36e2e0000000)) ||
             (uVar15 = SUB84(local_218._s_0.Z,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
             uVar17 = (uint)((ulonglong)local_218._16_8_ >> 0x20) &
                      __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
             __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar17,uVar15) &&
             (double)CONCAT44(uVar17,uVar15) != __real_3f1a36e2e0000000)) {
            pUVar13 = (UDS_MovementCore *)FWeakObjectPtr::Get(&local_228);
            pTVar14 = UDS_MovementCore::GetActorLocation(pUVar13,&local_1c8);
            pFVar4 = (FScriptContainerElement *)((pTVar14->field0_0x0)._s_0.X - local_218._s_0.X);
            dVar3 = (pTVar14->field0_0x0)._s_0.Y - local_218._s_0.Y;
            dVar2 = (pTVar14->field0_0x0)._s_0.Z - local_218._s_0.Z;
          }
          else {
            pUVar13 = (UDS_MovementCore *)FWeakObjectPtr::Get(&local_228);
            pTVar14 = UDS_MovementCore::GetActorLocation(pUVar13,&local_1c8);
            local_218._s_0.X = (pTVar14->field0_0x0)._s_0.X;
            local_218._s_0.Y = (pTVar14->field0_0x0)._s_0.Y;
            local_218._s_0.Z = (pTVar14->field0_0x0)._s_0.Z;
            pFVar4 = (FScriptContainerElement *)local_1e8._0_8_;
            dVar3 = (double)local_1e8._8_8_;
            dVar2 = local_1d8;
          }
          UDS_AbilityDataSet::GetAbilityData<UDS_FindTargetAbilityData>
                    ((ulong64 *)&local_220,(EDS_AbilityTagType *)&this->_padding_);
          uVar12 = 0;
          bVar7 = FWeakObjectPtr::IsValid(&local_220);
          if (bVar7) {
            pUVar10 = FWeakObjectPtr::Get(&local_220);
            uVar12 = *(ulong64 *)&pUVar10[2].field_0x10;
          }
          pFVar11 = ::FString::FString((FString *)local_1e8,&param_1->DefAttachSocket);
          DS_Util::GetSocketLocation(&local_200,uVar12,pFVar11);
          uVar15 = local_200.field0_0x0._0_4_;
          uVar17 = local_200.field0_0x0._4_4_;
          if ((((double)CONCAT44(uVar17 & uVar19,uVar15 & uVar20) < dVar5 ||
                (double)CONCAT44(uVar17 & uVar19,uVar15 & uVar20) == dVar5) &&
              (uVar16 = local_200.field0_0x0._8_4_ & uVar20,
              uVar18 = local_200.field0_0x0._12_4_ & uVar19,
              (double)CONCAT44(uVar18,uVar16) < dVar5 || (double)CONCAT44(uVar18,uVar16) == dVar5))
             && (uVar20 = SUB84(local_200.field0_0x0._s_0.Z,0) & uVar20,
                uVar19 = (uint)((ulonglong)local_200.field0_0x0._16_8_ >> 0x20) & uVar19,
                (double)CONCAT44(uVar19,uVar20) < dVar5 || (double)CONCAT44(uVar19,uVar20) == dVar5)
             ) {
            pUVar13 = (UDS_MovementCore *)FWeakObjectPtr::Get(&local_1d0);
            pTVar14 = UDS_MovementCore::GetActorLocation(pUVar13,&local_1c8);
            auVar1 = *(undefined1 (*) [16])&pTVar14->field0_0x0;
            uVar15 = auVar1._0_4_;
            uVar17 = auVar1._4_4_;
            local_200.field0_0x0._s_0.Z = (pTVar14->field0_0x0)._s_0.Z;
            local_200.field0_0x0._s_0.Y = (double)auVar1._8_8_;
          }
          (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar2 + local_200.field0_0x0._s_0.Z;
          (__return_storage_ptr__->field0_0x0)._s_0.X =
               (double)pFVar4 + (double)CONCAT44(uVar17,uVar15);
          (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar3 + local_200.field0_0x0._s_0.Y;
          return __return_storage_ptr__;
        }
        pUVar9 = UDS_LogManager::GetInst();
        if (pUVar9 == (UDS_LogManager *)0x0) goto LAB_14b83265b;
        pUVar9 = UDS_LogManager::GetInst();
        local_1a8._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_1a8,"UDS_SkillMoveAbility::GetSocketDestLocation",0x2b,Yes);
        pwVar21 = L"defenderMovementCore null";
        uVar20 = 0x271;
      }
    }
    else {
      pUVar9 = UDS_LogManager::GetInst();
      if (pUVar9 == (UDS_LogManager *)0x0) goto LAB_14b83265b;
      pUVar9 = UDS_LogManager::GetInst();
      local_1a8._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_1a8,"UDS_SkillMoveAbility::GetSocketDestLocation",0x2b,Yes);
      pwVar21 = L"findTargetData null";
      uVar20 = 0x263;
    }
  }
  else {
    pUVar9 = UDS_LogManager::GetInst();
    if (pUVar9 == (UDS_LogManager *)0x0) goto LAB_14b83265b;
    pUVar9 = UDS_LogManager::GetInst();
    local_1a8._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_1a8,"UDS_SkillMoveAbility::GetSocketDestLocation",0x2b,Yes);
    pwVar21 = L"sourceMovementCore null";
    uVar20 = 0x25b;
  }
  UDS_LogManager::PrintLog(pUVar9,1,Warning,local_1a8.Ptr,uVar20,pwVar21);
  if ((void *)local_1a8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_1a8._padding_);
  }
LAB_14b83265b:
  uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar6;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return __return_storage_ptr__;
}

// InitServerMove @ 14b834c00

void __thiscall UDS_SkillMoveAbility::InitServerMove(UDS_SkillMoveAbility *this)

{
  int *piVar1;
  undefined1 uVar2;
  longlong lVar3;
  int iVar4;
  UObject *pUVar5;
  FSkillMoveInfo local_108;
  
  pUVar5 = FWeakObjectPtr::Get(&(this->SkillMoveDataPtr).WeakPtr);
  uVar2 = pUVar5[8].field_0x10;
  FSkillMoveInfo::FSkillMoveInfo(&local_108);
  lVar3 = this->_padding_;
  if (lVar3 == 0) {
    local_108.ErrorReason = InvalidCharacter;
  }
  else {
    local_108.SkillAttackID = 1;
    local_108.MoveType = DirectMov;
    local_108.MoveRange = 0.0;
    local_108.MoveAngle = 0.0;
    local_108.EmptyTargetMoveRange = 0.0;
    local_108.MoveStartTime = 0.0;
    local_108.DelayTime = 0.0;
    local_108.ExpectedArrivalTime = 0.1;
    local_108.IsLastSkillMove = false;
    local_108.AttachHoldingTime = 0.0;
    local_108.AtkAttachSocket.Data.ArrayNum = 0;
    if (local_108.AtkAttachSocket.Data.ArrayMax == 0) {
      local_108.AtkAttachSocket.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,0,local_108.AtkAttachSocket.Data.ArrayMax,
                 (ForAnyElementType *)&local_108.AtkAttachSocket,0,
                 &local_108.AtkAttachSocket.Data.ArrayMax);
    }
    local_108.DefAttachSocket.Data.ArrayNum = 0;
    if (local_108.DefAttachSocket.Data.ArrayMax == 0) {
      local_108.DefAttachSocket.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,0,local_108.DefAttachSocket.Data.ArrayMax,
                 (ForAnyElementType *)&local_108.DefAttachSocket,0,
                 &local_108.DefAttachSocket.Data.ArrayMax);
    }
    local_108.CheckTargetAbnormalAction = 0;
    local_108.bIsSetLocationPoint = false;
    local_108.ScaledCapsuleRadius = *(float *)(lVar3 + 0x5c);
    local_108.ElapsedMoveTime = 0.0;
    local_108.IsSkillMoveStarted = false;
    local_108.SkillRotator.Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
    local_108.SkillRotator.Yaw = UE::Math::TRotator<double>::ZeroRotator.Yaw;
    local_108.SkillRotator.Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
    local_108.bIsJumpSkill = (bool)uVar2;
  }
  iVar4 = (this->SkillMoveInfoList).ArrayNum;
  piVar1 = &(this->SkillMoveInfoList).ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x100,8,&(this->SkillMoveInfoList).AllocatorInstance,piVar1);
  }
  (this->SkillMoveInfoList).ArrayNum = iVar4 + 1;
  FSkillMoveInfo::FSkillMoveInfo
            ((FSkillMoveInfo *)
             ((this->SkillMoveInfoList).AllocatorInstance.Data + (longlong)iVar4 * 0x100),&local_108
            );
  if (local_108.DefAttachSocket.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.DefAttachSocket.Data.AllocatorInstance.Data);
  }
  if (local_108.AtkAttachSocket.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.AtkAttachSocket.Data.AllocatorInstance.Data);
  }
  return;
}

// InitSkillMoveInfo @ 14b834dd0

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

void __thiscall UDS_SkillMoveAbility::InitSkillMoveInfo(UDS_SkillMoveAbility *this)

{
  int *piVar1;
  FDS_EntityBase *pFVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  UObject *pUVar6;
  FWeakObjectPtr local_res10;
  FSkillMoveInfo local_118;
  
  bVar4 = FWeakObjectPtr::IsValid(&(this->SkillMoveDataPtr).WeakPtr);
  if (bVar4) {
    pUVar6 = FWeakObjectPtr::Get(&(this->SkillMoveDataPtr).WeakPtr);
    pFVar2 = (FDS_EntityBase *)this->_padding_;
    if (*(int *)&pUVar6[4].field_0x8 == 1) {
      lVar3 = *(longlong *)(pUVar6 + 4);
      FSkillMoveInfo::FSkillMoveInfo(&local_118);
      if (pFVar2 == (FDS_EntityBase *)0x0) {
        local_118.ErrorReason = InvalidCharacter;
      }
      else {
        local_118.SkillAttackID = (long64)*(int *)(lVar3 + 4);
        local_118.MoveRange = (float)*(int *)(lVar3 + 0x14);
        local_118.MoveType = *(EDS_SkillMoveType *)(lVar3 + 0x54);
        local_118.IsLastSkillMove = *(bool *)(lVar3 + 0x55);
        local_118.MoveAngle = (float)*(int *)(lVar3 + 8);
        local_118.EmptyTargetMoveRange = (float)*(int *)(lVar3 + 0x18);
        local_118.MoveStartTime = *(float *)(lVar3 + 0x1c);
        local_118.DelayTime = *(float *)(lVar3 + 0x20);
        local_118.AttachHoldingTime = *(float *)(lVar3 + 0x28);
        local_118.ExpectedArrivalTime = *(float *)(lVar3 + 0x24);
        ::FString::operator=(&local_118.AtkAttachSocket,(FString *)(lVar3 + 0x30));
        ::FString::operator=(&local_118.DefAttachSocket,(FString *)(lVar3 + 0x40));
        local_118.CheckTargetAbnormalAction = *(int *)(lVar3 + 0x50);
        local_118.ScaledCapsuleRadius = pFVar2->ScaledCapsuleRadius;
        local_118.bIsJumpSkill = *(bool *)(lVar3 + 0x56);
        local_118.bIsSetLocationPoint = *(bool *)(lVar3 + 0x57);
        local_118.ElapsedMoveTime = 0.0;
        local_118.IsSkillMoveStarted = false;
        local_118.SkillRotator.Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
        local_118.SkillRotator.Yaw = UE::Math::TRotator<double>::ZeroRotator.Yaw;
        local_118.SkillRotator.Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
      }
      if ((float)((uint)local_118.MoveStartTime & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
          __real_322bcc77) {
        UDS_AbilityDataSet::GetAbilityData<UDS_FindTargetAbilityData>
                  ((ulong64 *)&local_res10,(EDS_AbilityTagType *)&this->_padding_);
        bVar4 = FWeakObjectPtr::IsValid(&local_res10);
        if (bVar4) {
          FSkillMoveInfo::StartSkillMove
                    (&local_118,
                     (TWeakObjectPtr<UDS_SkillMoveAbilityData,FWeakObjectPtr>)
                     (this->SkillMoveDataPtr).WeakPtr,
                     (TWeakObjectPtr<UDS_FindTargetAbilityData,FWeakObjectPtr>)local_res10,true);
        }
      }
      iVar5 = (this->SkillMoveInfoList).ArrayNum;
      piVar1 = &(this->SkillMoveInfoList).ArrayMax;
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x100,8,&(this->SkillMoveInfoList).AllocatorInstance,piVar1);
      }
      (this->SkillMoveInfoList).ArrayNum = iVar5 + 1;
      FSkillMoveInfo::FSkillMoveInfo
                ((FSkillMoveInfo *)
                 ((this->SkillMoveInfoList).AllocatorInstance.Data + (longlong)iVar5 * 0x100),
                 &local_118);
      if (local_118.DefAttachSocket.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.DefAttachSocket.Data.AllocatorInstance.Data);
      }
      if (local_118.AtkAttachSocket.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.AtkAttachSocket.Data.AllocatorInstance.Data);
      }
    }
    else {
      ProcessMultipleSkillMoves
                (this,(TArray<FDS_AtomicSkillMoveData,TSizedDefaultAllocator<32>_> *)(pUVar6 + 4),
                 pFVar2);
    }
  }
  return;
}

// InitializeSkillMove @ 14b8356a0

void __thiscall
UDS_SkillMoveAbility::InitializeSkillMove(UDS_SkillMoveAbility *this,FSkillMoveInfo *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  UObject *pUVar5;
  UDS_DataBase *this_00;
  UDS_MovementCore *this_01;
  TWeakObjectPtr<UDS_SkillMoveAbilityData,FWeakObjectPtr> *this_02;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  float fVar10;
  double dVar11;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res18 [2];
  TVector<double>_u_0 local_58 [3];
  
  local_res8.ObjectIndex._0_1_ = 0x1b;
  UDS_AbilityDataSet::GetAbilityData<UDS_FindTargetAbilityData>
            ((ulong64 *)local_res18,(EDS_AbilityTagType *)&this->_padding_);
  bVar4 = FWeakObjectPtr::IsValid(local_res18);
  if (bVar4) {
    this_02 = &this->SkillMoveDataPtr;
    FSkillMoveInfo::StartSkillMove
              (param_1,(TWeakObjectPtr<UDS_SkillMoveAbilityData,FWeakObjectPtr>)this_02->WeakPtr,
               (TWeakObjectPtr<UDS_FindTargetAbilityData,FWeakObjectPtr>)local_res18[0],false);
    pUVar5 = FWeakObjectPtr::Get(&this_02->WeakPtr);
    if (pUVar5[3].field_0x21 == '\x01') {
      this_00 = (UDS_DataBase *)FWeakObjectPtr::Get(&this_02->WeakPtr);
      UDS_DataBase::GetEntityID(this_00);
      UDS_MovementCore::GetMovementCore((ulong64)&local_res8);
      bVar4 = FWeakObjectPtr::IsValid(&local_res8);
      if (bVar4) {
        this_01 = (UDS_MovementCore *)FWeakObjectPtr::Get(&local_res8);
        UDS_MovementCore::GetActorLocation(this_01,(TVector<double> *)&local_58[0]._s_0);
        pUVar5 = FWeakObjectPtr::Get(&this_02->WeakPtr);
        dVar11 = (param_1->DestSkillLocation).field0_0x0._s_0.Y - (double)local_58[0]._8_8_;
        dVar3 = *(double *)&pUVar5[3].field_0x10;
        dVar2 = (param_1->DestSkillLocation).field0_0x0._s_0.X - (double)local_58[0]._0_8_;
        dVar1 = *(double *)&pUVar5[3].field_0x18;
        dVar8 = dVar3 - (double)local_58[0]._8_8_;
        dVar9 = *(double *)&pUVar5[3].field_0x8 - (double)local_58[0]._0_8_;
        (param_1->DestSkillLocation).field0_0x0._s_0.X = *(double *)&pUVar5[3].field_0x8;
        (param_1->DestSkillLocation).field0_0x0._s_0.Y = dVar3;
        (param_1->DestSkillLocation).field0_0x0._s_0.Z = dVar1;
        auVar6._0_8_ = SQRT(dVar8 * dVar8 + dVar9 * dVar9);
        auVar6._8_8_ = 0;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = dVar11 * dVar11 + dVar2 * dVar2;
        auVar7 = sqrtpd(auVar6,auVar7);
        fVar10 = (float)auVar7._0_8_;
        if ((float)auVar7._0_8_ <= __real_322bcc77) {
          fVar10 = __real_322bcc77;
        }
        fVar10 = ((float)auVar6._0_8_ * param_1->ExpectedArrivalTime) / fVar10;
        param_1->ServerArriveTime = fVar10;
        param_1->ExpectedArrivalTime = fVar10;
      }
    }
  }
  return;
}

// IsFloorSkillMove @ 14b836070

bool __thiscall
UDS_SkillMoveAbility::IsFloorSkillMove
          (UDS_SkillMoveAbility *this,FSkillMoveInfo *param_1,ulong64 param_2)

{
  bool bVar1;
  
  if (param_1->MoveType != TargetAttachMov) {
    bVar1 = IsStraightMove(this,param_1,param_2);
    if (!bVar1) {
      return param_1->bIsJumpSkill != true;
    }
  }
  return false;
}

// IsStraightMove @ 14b836970

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
UDS_SkillMoveAbility::IsStraightMove
          (UDS_SkillMoveAbility *this,FSkillMoveInfo *param_1,ulong64 param_2)

{
  bool bVar1;
  EDS_HeightConditionType EVar2;
  FDS_EntityBase *pFVar3;
  UDS_EntityData *this_00;
  ulong64 local_res18;
  FWeakObjectPtr local_res20;
  
  local_res18 = param_2;
  pFVar3 = FDS_EntityBase::GetEntityBase(&local_res18);
  if ((pFVar3 != (FDS_EntityBase *)0x0) && (pFVar3->EntityType != MainCharacter)) {
    UDS_EntityData::GetData((ulong64)&local_res20,local_res18);
    bVar1 = FWeakObjectPtr::IsValid(&local_res20);
    if (bVar1) {
      bVar1 = UDS_SyncRecvComponent::HasHeightMoveData(this->_padding_);
      if (bVar1) {
        return true;
      }
      this_00 = (UDS_EntityData *)FWeakObjectPtr::Get(&local_res20);
      EVar2 = UDS_EntityData::GetCurHeightConditionType(this_00);
      return EVar2 == Air;
    }
  }
  return false;
}

// IsValidSkillMoveInfo @ 14b836aa0

bool __thiscall
UDS_SkillMoveAbility::IsValidSkillMoveInfo(UDS_SkillMoveAbility *this,FSkillMoveInfo *param_1)

{
  bool bVar1;
  
  if (param_1->SkillAttackID != 0) {
    bVar1 = FWeakObjectPtr::IsValid(&(this->SkillMoveDataPtr).WeakPtr);
    if (bVar1) {
      return true;
    }
  }
  return false;
}

// IsValidSourceEntity @ 14b836ad0

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
UDS_SkillMoveAbility::IsValidSourceEntity(UDS_SkillMoveAbility *this,FDS_EntityBase *param_1)

{
  bool bVar1;
  
  if (param_1 != (FDS_EntityBase *)0x0) {
    bVar1 = FWeakObjectPtr::IsValid(&(this->SkillMoveDataPtr).WeakPtr);
    if (bVar1) {
      return true;
    }
  }
  return false;
}

// OnCanActivate @ 14b83a5b0

bool __thiscall UDS_SkillMoveAbility::OnCanActivate(UDS_SkillMoveAbility *this)

{
  bool bVar1;
  TWeakObjectPtr<UDS_SkillMoveAbilityData,FWeakObjectPtr> TVar2;
  ulong64 local_res18 [2];
  
  bVar1 = UWN_Ability::OnCanActivate((UWN_Ability *)this);
  if (!bVar1) {
    return false;
  }
  TVar2 = UDS_AbilityDataSet::GetAbilityData<UDS_SkillMoveAbilityData>
                    (local_res18,(EDS_AbilityTagType *)&this->_padding_);
                    /* WARNING: Load size is inaccurate */
  (this->SkillMoveDataPtr).WeakPtr = *TVar2.WeakPtr;
  bVar1 = FWeakObjectPtr::IsValid(&(this->SkillMoveDataPtr).WeakPtr);
  return bVar1;
}

// OnDeactivateAbility @ 14b83f930

void __thiscall UDS_SkillMoveAbility::OnDeactivateAbility(UDS_SkillMoveAbility *this,bool *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014b83f93a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this->_padding_ + 0x30))();
  return;
}

// OnPostActivateAbility @ 14b8459f0

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

void __thiscall UDS_SkillMoveAbility::OnPostActivateAbility(UDS_SkillMoveAbility *this)

{
  int *piVar1;
  undefined1 uVar2;
  longlong lVar3;
  longlong *plVar4;
  bool bVar5;
  int iVar6;
  FDS_GetTargetLocationResult *pFVar7;
  UObject *pUVar8;
  undefined8 *puVar9;
  ulong64 uVar10;
  FName FVar11;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  uint uStack_17c;
  FDS_GetTargetLocationResult local_178;
  FSkillMoveInfo local_148;
  FDS_GetTargetLocationResult local_48;
  
  if ((this->_padding_ == 0) ||
     (bVar5 = FWeakObjectPtr::IsValid(&(this->SkillMoveDataPtr).WeakPtr), !bVar5)) {
    local_res8.ObjectIndex._0_1_ = 2;
    UDS_GameplayAbility::DeactivateAbility
              ((UDS_GameplayAbility *)this,(EDS_AbilityDeactivateType *)&local_res8);
    return;
  }
  local_res8.ObjectIndex._0_1_ = 0x1b;
  UDS_AbilityDataSet::GetAbilityData<UDS_FindTargetAbilityData>
            ((ulong64 *)&local_res10,(EDS_AbilityTagType *)&this->_padding_);
  bVar5 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar5) {
    pFVar7 = UDS_FindTargetAbility::GetTargetLocation
                       (&local_48,
                        (TWeakObjectPtr<UDS_FindTargetAbilityData,FWeakObjectPtr>)local_res10,true);
    local_178.bIsValid = pFVar7->bIsValid;
    local_178._1_7_ = *(undefined7 *)&pFVar7->field_0x1;
    local_178.TargetLocation.field0_0x0._s_0.X = (pFVar7->TargetLocation).field0_0x0._s_0.X;
    local_178.TargetLocation.field0_0x0._s_0.Y = (pFVar7->TargetLocation).field0_0x0._s_0.Y;
    local_178.TargetLocation.field0_0x0._s_0.Z = (pFVar7->TargetLocation).field0_0x0._s_0.Z;
    local_178.TargetRadius = pFVar7->TargetRadius;
    local_178._36_4_ = *(undefined4 *)&pFVar7->field_0x24;
    bVar5 = FDS_GetTargetLocationResult::IsValidData(&local_178);
    if (bVar5) {
      pUVar8 = FWeakObjectPtr::Get(&(this->SkillMoveDataPtr).WeakPtr);
      *(double *)&pUVar8[4].field_0x10 = local_178.TargetLocation.field0_0x0._s_0.X;
      *(double *)&pUVar8[4].field_0x18 = local_178.TargetLocation.field0_0x0._s_0.Y;
      *(double *)&pUVar8[4].field_0x20 = local_178.TargetLocation.field0_0x0._s_0.Z;
    }
  }
  InitSkillMoveInfo(this);
  if (((this->SkillMoveInfoList).ArrayNum == 0) && (*(char *)(this->_padding_ + 0x10) != '\x02')) {
    pUVar8 = FWeakObjectPtr::Get(&(this->SkillMoveDataPtr).WeakPtr);
    uVar2 = pUVar8[8].field_0x10;
    FSkillMoveInfo::FSkillMoveInfo(&local_148);
    lVar3 = this->_padding_;
    if (lVar3 == 0) {
      local_148.ErrorReason = InvalidCharacter;
    }
    else {
      local_148.MoveRange = 0.0;
      local_148.MoveAngle = 0.0;
      local_148.EmptyTargetMoveRange = 0.0;
      local_148.MoveStartTime = 0.0;
      local_148.SkillAttackID = 1;
      local_148.MoveType = DirectMov;
      local_148.DelayTime = 0.0;
      local_148.ExpectedArrivalTime = 0.1;
      local_148.IsLastSkillMove = false;
      local_148.AttachHoldingTime = 0.0;
      local_148.AtkAttachSocket.Data.ArrayNum = 0;
      if (local_148.AtkAttachSocket.Data.ArrayMax == 0) {
        local_148.AtkAttachSocket.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,0,local_148.AtkAttachSocket.Data.ArrayMax,
                   (ForAnyElementType *)&local_148.AtkAttachSocket,0,
                   &local_148.AtkAttachSocket.Data.ArrayMax);
      }
      local_148.DefAttachSocket.Data.ArrayNum = 0;
      if (local_148.DefAttachSocket.Data.ArrayMax == 0) {
        local_148.DefAttachSocket.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,0,local_148.DefAttachSocket.Data.ArrayMax,
                   (ForAnyElementType *)&local_148.DefAttachSocket,0,
                   &local_148.DefAttachSocket.Data.ArrayMax);
      }
      local_148.CheckTargetAbnormalAction = 0;
      local_148.bIsSetLocationPoint = false;
      local_148.ScaledCapsuleRadius = *(float *)(lVar3 + 0x5c);
      local_148.ElapsedMoveTime = 0.0;
      local_148.IsSkillMoveStarted = false;
      local_148.SkillRotator.Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
      local_148.SkillRotator.Yaw = UE::Math::TRotator<double>::ZeroRotator.Yaw;
      local_148.SkillRotator.Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
      local_148.bIsJumpSkill = (bool)uVar2;
    }
    iVar6 = (this->SkillMoveInfoList).ArrayNum;
    piVar1 = &(this->SkillMoveInfoList).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x100,8,&(this->SkillMoveInfoList).AllocatorInstance,piVar1);
    }
    (this->SkillMoveInfoList).ArrayNum = iVar6 + 1;
    FSkillMoveInfo::FSkillMoveInfo
              ((FSkillMoveInfo *)
               ((this->SkillMoveInfoList).AllocatorInstance.Data + (longlong)iVar6 * 0x100),
               &local_148);
    if (local_148.DefAttachSocket.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.DefAttachSocket.Data.AllocatorInstance.Data);
    }
    if (local_148.AtkAttachSocket.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.AtkAttachSocket.Data.AllocatorInstance.Data);
    }
  }
  else {
    plVar4 = (longlong *)this->_padding_;
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x160))(plVar4,&local_res8);
      bVar5 = FWeakObjectPtr::IsValid(&local_res8);
      if (bVar5) {
        if (((char)plVar4[2] == '\x02') ||
           (FVar11 = ::COLLISION_PROFILE_NPC_NOCOLLISION, (char)plVar4[2] == '\x03')) {
          FVar11 = ::COLLISION_PROFILE_PLAYER_IGNORE_COLLISION;
        }
        pUVar8 = FWeakObjectPtr::Get(&local_res8);
        (**(code **)(*(longlong *)pUVar8 + 0x788))(pUVar8,FVar11,1);
      }
    }
  }
  pUVar8 = FWeakObjectPtr::Get(&(this->SkillMoveDataPtr).WeakPtr);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pUVar8[2].field_0x8,
             (FWriteAccessScope *)&local_178);
  local_178.TargetLocation.field0_0x0._s_0.Z = (double)&pUVar8[2].field_0x10;
  puVar9 = UE::Core::Private::DelegateAllocate
                     (0x30,(FDelegateAllocation *)local_178.TargetLocation.field0_0x0._s_0.Z);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &
              ___7__TCommonDelegateInstanceState___A6AXHU__TVector_N_Math_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar9[2] = uVar10;
    *puVar9 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_SkillMoveAbility____A6AXHU__TVector_N_Math_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar9[3] = 0;
    local_res8 = (FWeakObjectPtr)this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar9 + 3),(FObjectPtr)&local_res8);
    puVar9[4] = OnServerSkillDestLocationDelegate;
    puVar9[5] = (ulonglong)uStack_17c << 0x20;
  }
  if (local_178.TargetLocation.field0_0x0._8_1_ != '\0') {
    return;
  }
  FMRSWRecursiveAccessDetector::ReleaseWriteAccess
            ((FMRSWRecursiveAccessDetector *)local_178.TargetLocation.field0_0x0._s_0.X,
             (FDestructionSentinel *)&local_178);
  return;
}

// OnServerSkillDestLocationDelegate @ 14b846f50

void __thiscall
UDS_SkillMoveAbility::OnServerSkillDestLocationDelegate
          (UDS_SkillMoveAbility *this,int param_1,TVector<double> *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->SkillMoveInfoList).ArrayNum;
  pFVar2 = (this->SkillMoveInfoList).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x100;
  while( true ) {
    if ((this->SkillMoveInfoList).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FSkillMoveInfo,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar2 == pFVar3) break;
    if (*(longlong *)(pFVar2 + 8) == (longlong)param_1) {
      pFVar2[0xc4] = (FScriptContainerElement)0x0;
    }
    pFVar2 = pFVar2 + 0x100;
  }
  return;
}

// OnTickComponent @ 14b849b70

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

void __thiscall UDS_SkillMoveAbility::OnTickComponent(UDS_SkillMoveAbility *this,float param_1)

{
  int iVar1;
  FSkillMoveInfo *pFVar2;
  FSkillMoveInfo *pFVar3;
  undefined1 local_res10 [8];
  
  UDS_GameplayAbility::OnTickComponent((UDS_GameplayAbility *)this,param_1);
  this->ElapsedTime = param_1 + this->ElapsedTime;
  iVar1 = (this->SkillMoveInfoList).ArrayNum;
  pFVar2 = (FSkillMoveInfo *)(this->SkillMoveInfoList).AllocatorInstance.Data;
  pFVar3 = pFVar2 + iVar1;
  while( true ) {
    if ((this->SkillMoveInfoList).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FSkillMoveInfo,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar2 == pFVar3) break;
    UpdateMoveProcess(this,pFVar2,param_1);
    pFVar2 = pFVar2 + 1;
  }
  return;
}

// ProcessMultipleSkillMoves @ 14b84bac0

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
UDS_SkillMoveAbility::ProcessMultipleSkillMoves
          (UDS_SkillMoveAbility *this,
          TArray<FDS_AtomicSkillMoveData,TSizedDefaultAllocator<32>_> *param_1,
          FDS_EntityBase *param_2)

{
  int *piVar1;
  TArray<FSkillMoveInfo,TSizedDefaultAllocator<32>_> *pTVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  FSkillMoveInfo local_128;
  
  pTVar2 = &this->SkillMoveInfoList;
  uVar3 = param_1->ArrayNum;
  if (-1 < (int)uVar3) {
    piVar1 = &(this->SkillMoveInfoList).ArrayMax;
    if (*piVar1 < (int)uVar3) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x100,8,uVar3,&pTVar2->AllocatorInstance,(this->SkillMoveInfoList).ArrayNum,piVar1)
      ;
    }
    iVar4 = param_1->ArrayNum;
    pFVar7 = (param_1->AllocatorInstance).Data;
    pFVar8 = pFVar7 + (longlong)iVar4 * 0x58;
    while( true ) {
      if (param_1->ArrayNum != iVar4) {
        `TCheckedPointerIterator<FDS_AtomicSkillMoveData_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar7 == pFVar8) break;
      local_128.MoveType = None;
      local_128.ErrorReason = None;
      local_128.SkillAttackID = 0;
      local_128.DelayTime = 0.0;
      local_128.ElapsedMoveTime = 0.0;
      local_128.ExpectedArrivalTime = 0.0;
      local_128.ScaledCapsuleRadius = 0.0;
      local_128.ServerArriveTime = 0.0;
      local_128.MoveRange = 0.0;
      local_128.MoveAngle = 0.0;
      local_128.EmptyTargetMoveRange = 0.0;
      local_128.MoveStartTime = 0.0;
      local_128.ParentStartRotation.Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
      local_128.ParentStartRotation.Yaw = UE::Math::TRotator<double>::ZeroRotator.Yaw;
      local_128.SkillRotator.Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
      local_128.SkillRotator.Yaw = UE::Math::TRotator<double>::ZeroRotator.Yaw;
      local_128.IsFixedDestLocation = false;
      local_128.StartSkillLocation.field0_0x0._s_0.X =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_128.StartSkillLocation.field0_0x0._s_0.Y =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_128.StartSkillLocation.field0_0x0._s_0.Z =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_128.DestSkillLocation.field0_0x0._s_0.X =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_128.DestSkillLocation.field0_0x0._s_0.Y =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_128.AttachHoldingTime = 0.0;
      local_128.DestSkillLocation.field0_0x0._s_0.Z =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_128.ParentStartRotation.Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
      local_128.RelativeStartLocation.field0_0x0._s_0.X =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_128.RelativeStartLocation.field0_0x0._s_0.Y =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_128.RelativeStartLocation.field0_0x0._s_0.Z =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_128.RelativeDestLocation.field0_0x0._s_0.X =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_128.RelativeDestLocation.field0_0x0._s_0.Y =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_128.RelativeDestLocation.field0_0x0._s_0.Z =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_128.SkillRotator.Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
      ::FString::FString(&local_128.AtkAttachSocket,L"");
      ::FString::FString(&local_128.DefAttachSocket,L"");
      local_128.CheckTargetAbnormalAction = 0;
      local_128.MoveAtOnce = false;
      local_128.bIsJumpSkill = false;
      local_128.IsSkillMoveStarted = false;
      local_128.IsLastSkillMove = false;
      local_128.bIsSetLocationPoint = false;
      if (param_2 == (FDS_EntityBase *)0x0) {
        local_128.ErrorReason = InvalidCharacter;
      }
      else {
        local_128.SkillAttackID = (long64)*(int *)(pFVar7 + 4);
        local_128.MoveType = (EDS_SkillMoveType)pFVar7[0x54];
        local_128._240_8_ = (ulonglong)(byte)pFVar7[0x55] << 0x38;
        local_128.MoveAngle = (float)*(int *)(pFVar7 + 8);
        local_128.MoveRange = (float)*(int *)(pFVar7 + 0x14);
        local_128.DelayTime = (float)*(undefined4 *)(pFVar7 + 0x20);
        local_128.AttachHoldingTime = *(float *)(pFVar7 + 0x28);
        local_128.MoveStartTime = *(float *)(pFVar7 + 0x1c);
        local_128.EmptyTargetMoveRange = (float)*(int *)(pFVar7 + 0x18);
        local_128.ExpectedArrivalTime = *(float *)(pFVar7 + 0x24);
        ::FString::operator=(&local_128.AtkAttachSocket,(FString *)(pFVar7 + 0x30));
        ::FString::operator=(&local_128.DefAttachSocket,(FString *)(pFVar7 + 0x40));
        uVar5 = local_128._240_8_;
        local_128.ScaledCapsuleRadius = param_2->ScaledCapsuleRadius;
        local_128.CheckTargetAbnormalAction = *(int *)(pFVar7 + 0x50);
        local_128.SkillRotator.Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
        local_128.SkillRotator.Yaw = UE::Math::TRotator<double>::ZeroRotator.Yaw;
        local_128.bIsJumpSkill = (bool)pFVar7[0x56];
        local_128.bIsSetLocationPoint = *(bool *)(pFVar7 + 0x57);
        local_128.SkillRotator.Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
        local_128._32_8_ = local_128._32_8_ & 0xffffffff;
        local_128.IsLastSkillMove = SUB81(uVar5,7);
        local_128.IsSkillMoveStarted = false;
      }
      iVar6 = (this->SkillMoveInfoList).ArrayNum;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x100,8,&pTVar2->AllocatorInstance,piVar1);
      }
      (this->SkillMoveInfoList).ArrayNum = iVar6 + 1;
      FSkillMoveInfo::FSkillMoveInfo
                ((FSkillMoveInfo *)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 0x100),
                 &local_128);
      if (local_128.DefAttachSocket.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.DefAttachSocket.Data.AllocatorInstance.Data);
      }
      if (local_128.AtkAttachSocket.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.AtkAttachSocket.Data.AllocatorInstance.Data);
      }
      pFVar7 = pFVar7 + 0x58;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
}

// ProcessNormalMove @ 14b84bd80

void __thiscall
UDS_SkillMoveAbility::ProcessNormalMove
          (UDS_SkillMoveAbility *this,FSkillMoveInfo *param_1,float param_2)

{
  if (param_1->ExpectedArrivalTime - param_1->ElapsedMoveTime <= 0.0) {
    if (param_1->IsLastSkillMove != true) {
      return;
    }
    param_1->ElapsedMoveTime = param_1->ExpectedArrivalTime;
  }
  UpdateSkillMove(this,param_1,param_2);
  return;
}

// ProcessSingleSkillMove @ 14b84beb0

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
UDS_SkillMoveAbility::ProcessSingleSkillMove
          (UDS_SkillMoveAbility *this,FDS_AtomicSkillMoveData *param_1,FDS_EntityBase *param_2)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  FWeakObjectPtr local_res18 [2];
  FSkillMoveInfo local_118;
  
  FSkillMoveInfo::FSkillMoveInfo(&local_118);
  if (param_2 == (FDS_EntityBase *)0x0) {
    local_118.ErrorReason = InvalidCharacter;
  }
  else {
    local_118.SkillAttackID = (long64)param_1->SkillAttackID;
    local_118.MoveRange = (float)param_1->MoveRange;
    local_118.MoveType = param_1->SkillMoveType;
    local_118.IsLastSkillMove = param_1->LastSkillMove;
    local_118.MoveAngle = (float)param_1->MoveAngle;
    local_118.EmptyTargetMoveRange = (float)param_1->EmptyTargetMoveRange;
    local_118.MoveStartTime = param_1->MoveStartTime;
    local_118.DelayTime = param_1->DelayMove;
    local_118.AttachHoldingTime = param_1->AttachHoldingTime;
    local_118.ExpectedArrivalTime = param_1->MoveTime;
    ::FString::operator=(&local_118.AtkAttachSocket,&param_1->AtkAttachSocket);
    ::FString::operator=(&local_118.DefAttachSocket,&param_1->DefAttachSocket);
    local_118.CheckTargetAbnormalAction = param_1->CheckTargetAbnormalAction;
    local_118.ScaledCapsuleRadius = param_2->ScaledCapsuleRadius;
    local_118.bIsJumpSkill = param_1->bIsJumpSkill;
    local_118.bIsSetLocationPoint = param_1->bIsSetLocationPoint;
    local_118.ElapsedMoveTime = 0.0;
    local_118.IsSkillMoveStarted = false;
    local_118.SkillRotator.Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
    local_118.SkillRotator.Yaw = UE::Math::TRotator<double>::ZeroRotator.Yaw;
    local_118.SkillRotator.Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  }
  if ((float)((uint)local_118.MoveStartTime & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
      __real_322bcc77) {
    UDS_AbilityDataSet::GetAbilityData<UDS_FindTargetAbilityData>
              ((ulong64 *)local_res18,(EDS_AbilityTagType *)&this->_padding_);
    bVar2 = FWeakObjectPtr::IsValid(local_res18);
    if (bVar2) {
      FSkillMoveInfo::StartSkillMove
                (&local_118,
                 (TWeakObjectPtr<UDS_SkillMoveAbilityData,FWeakObjectPtr>)
                 (this->SkillMoveDataPtr).WeakPtr,
                 (TWeakObjectPtr<UDS_FindTargetAbilityData,FWeakObjectPtr>)local_res18[0],true);
    }
  }
  iVar3 = (this->SkillMoveInfoList).ArrayNum;
  piVar1 = &(this->SkillMoveInfoList).ArrayMax;
  if (iVar3 == *piVar1) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x100,8,&(this->SkillMoveInfoList).AllocatorInstance,piVar1);
  }
  (this->SkillMoveInfoList).ArrayNum = iVar3 + 1;
  FSkillMoveInfo::FSkillMoveInfo
            ((FSkillMoveInfo *)
             ((this->SkillMoveInfoList).AllocatorInstance.Data + (longlong)iVar3 * 0x100),&local_118
            );
  if (local_118.DefAttachSocket.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.DefAttachSocket.Data.AllocatorInstance.Data);
  }
  if (local_118.AtkAttachSocket.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.AtkAttachSocket.Data.AllocatorInstance.Data);
  }
  return;
}

// ProcessSkillMoveByType @ 14b84c090

void __thiscall
UDS_SkillMoveAbility::ProcessSkillMoveByType
          (UDS_SkillMoveAbility *this,FSkillMoveInfo *param_1,float param_2)

{
  bool bVar1;
  UDS_AbnormalAbilityData *this_00;
  UDS_DataBase *pUVar2;
  UObject *pUVar3;
  FWeakObjectPtr aFStackX_10 [2];
  FWeakObjectPtr FStackX_20;
  FWeakObjectPtr FStack_38;
  FWeakObjectPtr aFStack_30 [3];
  
  if (param_1->MoveType != TargetAttachMov) {
    if (param_1->ExpectedArrivalTime - param_1->ElapsedMoveTime <= 0.0) {
      if (param_1->IsLastSkillMove != true) {
        return;
      }
      param_1->ElapsedMoveTime = param_1->ExpectedArrivalTime;
    }
    UpdateSkillMove(this,param_1,param_2);
    return;
  }
  if (param_1->ExpectedArrivalTime + param_1->AttachHoldingTime < param_1->ElapsedMoveTime) {
    return;
  }
  if (param_1->ElapsedMoveTime <= param_1->ExpectedArrivalTime) {
    UpdateSkillMove(this,param_1,param_2);
  }
  if (param_1->CheckTargetAbnormalAction == 0) {
LAB_14b84c488:
    pUVar2 = (UDS_DataBase *)FWeakObjectPtr::Get(&(this->SkillMoveDataPtr).WeakPtr);
    UDS_DataBase::GetEntityID(pUVar2);
    UDS_MovementCore::GetMovementCore((ulong64)aFStack_30);
    bVar1 = FWeakObjectPtr::IsValid(aFStack_30);
    if (bVar1) {
      aFStackX_10[0].ObjectIndex._0_1_ = 0x1b;
      UDS_AbilityDataSet::GetAbilityData<UDS_FindTargetAbilityData>
                ((ulong64 *)&FStackX_20,(EDS_AbilityTagType *)&this->_padding_);
      bVar1 = FWeakObjectPtr::IsValid(&FStackX_20);
      if ((bVar1) &&
         (pUVar3 = FWeakObjectPtr::Get(&FStackX_20), *(longlong *)&pUVar3[2].field_0x10 != 0)) {
        UDS_MovementCore::GetMovementCore((ulong64)&FStack_38);
        bVar1 = FWeakObjectPtr::IsValid(&FStack_38);
        if (bVar1) {
          ProcessSocketMovement
                    (this,(TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>)aFStack_30[0],
                     (TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>)FStack_38,param_1,param_2);
        }
      }
    }
  }
  else {
    aFStackX_10[0].ObjectIndex._0_1_ = 0x1b;
    UDS_AbilityDataSet::GetAbilityData<UDS_FindTargetAbilityData>
              ((ulong64 *)&FStackX_20,(EDS_AbilityTagType *)&this->_padding_);
    bVar1 = FWeakObjectPtr::IsValid(&FStackX_20);
    if (bVar1) {
      aFStackX_10[0].ObjectIndex._0_1_ = 0x30;
      pUVar2 = (UDS_DataBase *)FWeakObjectPtr::Get(&FStackX_20);
      aFStack_30[0] = (FWeakObjectPtr)UDS_DataBase::GetEntityID(pUVar2);
      UDS_AbilityDataSet::GetAbilityData<UDS_AbnormalAbilityData>
                ((ulong64 *)&FStack_38,(EDS_AbilityTagType *)aFStack_30);
      bVar1 = FWeakObjectPtr::IsValid(&FStack_38);
      if (bVar1) {
        this_00 = (UDS_AbnormalAbilityData *)FWeakObjectPtr::Get(&FStack_38);
        bVar1 = UDS_AbnormalAbilityData::HasAbnormalInfoByID
                          (this_00,param_1->CheckTargetAbnormalAction);
        if (bVar1) goto LAB_14b84c488;
      }
    }
    pUVar2 = (UDS_DataBase *)FWeakObjectPtr::Get(&(this->SkillMoveDataPtr).WeakPtr);
    UDS_DataBase::GetEntityID(pUVar2);
    UDS_MovementCore::GetMovementCore((ulong64)aFStackX_10);
    bVar1 = FWeakObjectPtr::IsValid(aFStackX_10);
    if (bVar1) {
      pUVar3 = FWeakObjectPtr::Get(aFStackX_10);
      (**(code **)(*(longlong *)pUVar3 + 0x2f0))(pUVar3,1,0);
    }
  }
  return;
}

// ProcessSocketMovement @ 14b84c0d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UDS_SkillMoveAbility::ProcessSocketMovement
          (UDS_SkillMoveAbility *this,TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> param_1,
          TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> param_2,FSkillMoveInfo *param_3,
          float param_4)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  int iVar10;
  UDS_MovementCore *pUVar11;
  TRotator<double> *pTVar12;
  UObject *pUVar13;
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
  double dVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  double dVar36;
  double dVar38;
  undefined1 auVar37 [16];
  undefined1 auVar39 [16];
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  TRotator<double> local_b8;
  TVector<double> local_a0;
  TVector<double> local_88;
  TRotator<double> local_70 [3];
  
  local_res10 = param_1.WeakPtr;
  local_res18 = param_2.WeakPtr;
  GetSocketDestLocation(this,&local_a0,param_3);
  dVar28 = (double)(param_3->ExpectedArrivalTime - param_3->MoveStartTime);
  if (dVar28 <= __real_3e45798ee0000000) {
    dVar28 = __real_3e45798ee0000000;
  }
  auVar29._8_8_ = 0;
  auVar29._0_8_ = dVar28;
  dVar28 = (double)param_3->ElapsedMoveTime / dVar28;
  if (__real_3ff0000000000000 <= dVar28) {
    dVar28 = __real_3ff0000000000000;
  }
  if (dVar28 <= 0.0) {
    dVar28 = 0.0;
  }
  pUVar11 = (UDS_MovementCore *)FWeakObjectPtr::Get(&local_res10);
  UDS_MovementCore::GetActorLocation(pUVar11,&local_88);
  pUVar11 = (UDS_MovementCore *)FWeakObjectPtr::Get(&local_res18);
  pTVar12 = UDS_MovementCore::GetActorRotation(pUVar11,local_70);
  if (__real_3ff0000000000000 <= dVar28) {
    auVar2._0_8_ = (param_3->SkillRotator).Pitch;
    auVar2._8_8_ = (param_3->SkillRotator).Yaw;
    dVar1 = (param_3->SkillRotator).Roll;
    auVar21 = divpd(auVar2,(undefined1  [16])GlobalVectorConstants::Double360.XY.m128d_f64);
    auVar29 = roundpd(auVar29,auVar21,3);
    dVar7 = GlobalVectorConstants::Double360.XY.m128d_f64[0];
    auVar30._0_8_ = auVar29._0_8_ * dVar7;
    dVar8 = GlobalVectorConstants::Double360.XY.m128d_f64[1];
    auVar30._8_8_ = auVar29._8_8_ * dVar8;
    auVar22._8_8_ = 0;
    auVar22._0_8_ = dVar1;
    dVar36 = (double)auVar2._0_8_ - auVar30._0_8_;
    dVar38 = (double)auVar2._8_8_ - auVar30._8_8_;
    auVar29 = divpd(auVar22,(undefined1  [16])GlobalVectorConstants::Double360.ZW.m128d_f64);
    auVar29 = roundpd(auVar30,auVar29,3);
    dVar5 = GlobalVectorConstants::Double360.ZW.m128d_f64[0];
    dVar6 = GlobalVectorConstants::Double360.ZW.m128d_f64[1];
    auVar23._8_4_ = SUB84(dVar38,0);
    auVar23._0_8_ = dVar36;
    auVar23._12_4_ = (int)((ulonglong)dVar38 >> 0x20);
    dVar1 = dVar1 - auVar29._0_8_ * dVar5;
    dVar4 = 0.0 - auVar29._8_8_ * dVar6;
    uVar15 = -(ulonglong)(0.0 <= dVar36);
    uVar17 = -(ulonglong)(0.0 <= dVar38);
    auVar31._0_8_ = uVar15 & (ulonglong)dVar36;
    auVar31._8_4_ = (undefined4)(uVar17 & (ulonglong)dVar38);
    auVar31._12_4_ = (undefined4)((uVar17 & (ulonglong)dVar38) >> 0x20);
    dVar38 = auVar23._8_8_ + dVar8;
    uVar16 = -(ulonglong)(0.0 <= dVar1);
    uVar18 = -(ulonglong)(0.0 <= dVar4);
    auVar39._0_4_ = ~(uint)uVar15 & SUB84(dVar36 + dVar7,0);
    auVar39._4_4_ = ~(uint)(uVar15 >> 0x20) & (uint)((ulonglong)(dVar36 + dVar7) >> 0x20);
    auVar39._8_4_ = ~(uint)uVar17 & SUB84(dVar38,0);
    auVar39._12_4_ = ~(uint)(uVar17 >> 0x20) & (uint)((ulonglong)dVar38 >> 0x20);
    auVar39 = auVar39 | auVar31;
    auVar24._8_4_ = SUB84(dVar4,0);
    auVar24._0_8_ = dVar1;
    auVar24._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
    dVar38 = auVar24._8_8_ + dVar6;
    auVar37._0_4_ = ~(uint)uVar16 & SUB84(dVar1 + dVar5,0);
    auVar37._4_4_ = ~(uint)(uVar16 >> 0x20) & (uint)((ulonglong)(dVar1 + dVar5) >> 0x20);
    auVar37._8_4_ = ~(uint)uVar18 & SUB84(dVar38,0);
    auVar37._12_4_ = ~(uint)(uVar18 >> 0x20) & (uint)((ulonglong)dVar38 >> 0x20);
    auVar21._8_4_ = (int)((ulonglong)dVar4 & uVar18);
    auVar21._0_8_ = (ulonglong)dVar1 & uVar16;
    auVar21._12_4_ = (int)(((ulonglong)dVar4 & uVar18) >> 0x20);
    auVar37 = auVar37 | auVar21;
    uVar16 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[0] < auVar37._0_8_);
    uVar18 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[1] < auVar37._8_8_);
    uVar17 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[0] < auVar39._0_8_);
    uVar19 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[1] < auVar39._8_8_);
    auVar32._0_8_ = uVar16 & (ulonglong)(auVar37._0_8_ - dVar5);
    uVar15 = uVar18 & (ulonglong)(auVar37._8_8_ - dVar6);
    auVar32._8_4_ = (undefined4)uVar15;
    auVar32._12_4_ = (undefined4)(uVar15 >> 0x20);
    auVar25._0_4_ = ~(uint)uVar16 & auVar37._0_4_;
    auVar25._4_4_ = ~(uint)(uVar16 >> 0x20) & auVar37._4_4_;
    auVar25._8_4_ = ~(uint)uVar18 & auVar37._8_4_;
    auVar25._12_4_ = ~(uint)(uVar18 >> 0x20) & auVar37._12_4_;
    auVar32 = auVar32 | auVar25;
    auVar26._8_4_ = SUB84(__real_3f1a36e2e0000000,0);
    auVar26._0_8_ = __real_3f1a36e2e0000000;
    auVar26._12_4_ = (int)((ulonglong)__real_3f1a36e2e0000000 >> 0x20);
    auVar33._0_8_ =
         (double)CONCAT44(auVar32._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          auVar32._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    auVar33._8_4_ = auVar32._8_4_ & _UNK_15061cc88;
    auVar33._12_4_ = auVar32._12_4_ & _UNK_15061cc8c;
    auVar27._8_8_ = -(ulonglong)(auVar26._8_8_ < auVar33._8_8_);
    auVar27._0_8_ = -(ulonglong)(__real_3f1a36e2e0000000 < auVar33._0_8_);
    uVar14 = movmskpd((int)pUVar11,auVar27);
    auVar34._0_8_ = uVar17 & (ulonglong)(auVar39._0_8_ - dVar7);
    uVar15 = uVar19 & (ulonglong)(auVar39._8_8_ - dVar8);
    auVar34._8_4_ = (undefined4)uVar15;
    auVar34._12_4_ = (undefined4)(uVar15 >> 0x20);
    auVar3._4_4_ = ~(uint)(uVar17 >> 0x20) & auVar39._4_4_;
    auVar3._0_4_ = ~(uint)uVar17 & auVar39._0_4_;
    auVar3._8_4_ = ~(uint)uVar19 & auVar39._8_4_;
    auVar3._12_4_ = ~(uint)(uVar19 >> 0x20) & auVar39._12_4_;
    auVar34 = auVar34 | auVar3;
    auVar35._0_8_ =
         (double)CONCAT44(auVar34._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          auVar34._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    auVar35._8_4_ = auVar34._8_4_ & _UNK_15061cc88;
    auVar35._12_4_ = auVar34._12_4_ & _UNK_15061cc8c;
    lVar20 = -(ulonglong)(__real_3f1a36e2e0000000 < auVar35._8_8_);
    auVar9._8_4_ = (int)lVar20;
    auVar9._0_8_ = -(ulonglong)(__real_3f1a36e2e0000000 < auVar35._0_8_);
    auVar9._12_4_ = (int)((ulonglong)lVar20 >> 0x20);
    iVar10 = movmskpd((int)pTVar12,auVar9);
    if ((uVar14 & 0x3fffffff) != 0 || iVar10 != 0) {
      local_res20 = local_res10;
      pUVar13 = FWeakObjectPtr::Get(&local_res20);
      (**(code **)(*(longlong *)pUVar13 + 0x358))(pUVar13,&local_a0);
      pUVar11 = (UDS_MovementCore *)FWeakObjectPtr::Get(&local_res20);
      UDS_MovementCore::GetActorRotation(pUVar11,&local_b8);
      local_b8.Yaw = local_70[0].Yaw + (param_3->SkillRotator).Yaw;
      pUVar13 = FWeakObjectPtr::Get(&local_res20);
      (**(code **)(*(longlong *)pUVar13 + 0x370))(pUVar13,&local_b8);
      return;
    }
  }
  local_res20 = local_res10;
  local_88.field0_0x0._s_0.Z =
       (local_a0.field0_0x0._s_0.Z - (param_3->StartSkillLocation).field0_0x0._s_0.Z) * dVar28 +
       (param_3->StartSkillLocation).field0_0x0._s_0.Z;
  pUVar13 = FWeakObjectPtr::Get(&local_res20);
  (**(code **)(*(longlong *)pUVar13 + 0x358))(pUVar13,&local_88);
  pUVar11 = (UDS_MovementCore *)FWeakObjectPtr::Get(&local_res20);
  pTVar12 = UDS_MovementCore::GetActorRotation(pUVar11,&local_b8);
  dVar28 = pTVar12->Yaw;
  (param_3->SkillRotator).Pitch = pTVar12->Pitch;
  (param_3->SkillRotator).Yaw = dVar28;
  (param_3->SkillRotator).Roll = pTVar12->Roll;
  (param_3->SkillRotator).Yaw = (param_3->SkillRotator).Yaw - local_70[0].Yaw;
  return;
}

// ProcessTargetAttachMove @ 14b84c3a0

void __thiscall
UDS_SkillMoveAbility::ProcessTargetAttachMove
          (UDS_SkillMoveAbility *this,FSkillMoveInfo *param_1,float param_2)

{
  bool bVar1;
  UDS_AbnormalAbilityData *this_00;
  UDS_DataBase *pUVar2;
  UObject *pUVar3;
  FWeakObjectPtr local_res10 [2];
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_38;
  FWeakObjectPtr local_30 [3];
  
  if (param_1->ExpectedArrivalTime + param_1->AttachHoldingTime < param_1->ElapsedMoveTime) {
    return;
  }
  if (param_1->ElapsedMoveTime <= param_1->ExpectedArrivalTime) {
    UpdateSkillMove(this,param_1,param_2);
  }
  if (param_1->CheckTargetAbnormalAction == 0) {
LAB_14b84c488:
    pUVar2 = (UDS_DataBase *)FWeakObjectPtr::Get(&(this->SkillMoveDataPtr).WeakPtr);
    UDS_DataBase::GetEntityID(pUVar2);
    UDS_MovementCore::GetMovementCore((ulong64)local_30);
    bVar1 = FWeakObjectPtr::IsValid(local_30);
    if (bVar1) {
      local_res10[0].ObjectIndex._0_1_ = 0x1b;
      UDS_AbilityDataSet::GetAbilityData<UDS_FindTargetAbilityData>
                ((ulong64 *)&local_res20,(EDS_AbilityTagType *)&this->_padding_);
      bVar1 = FWeakObjectPtr::IsValid(&local_res20);
      if ((bVar1) &&
         (pUVar3 = FWeakObjectPtr::Get(&local_res20), *(longlong *)&pUVar3[2].field_0x10 != 0)) {
        UDS_MovementCore::GetMovementCore((ulong64)&local_38);
        bVar1 = FWeakObjectPtr::IsValid(&local_38);
        if (bVar1) {
          ProcessSocketMovement
                    (this,(TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>)local_30[0],
                     (TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>)local_38,param_1,param_2);
        }
      }
    }
  }
  else {
    local_res10[0].ObjectIndex._0_1_ = 0x1b;
    UDS_AbilityDataSet::GetAbilityData<UDS_FindTargetAbilityData>
              ((ulong64 *)&local_res20,(EDS_AbilityTagType *)&this->_padding_);
    bVar1 = FWeakObjectPtr::IsValid(&local_res20);
    if (bVar1) {
      local_res10[0].ObjectIndex._0_1_ = 0x30;
      pUVar2 = (UDS_DataBase *)FWeakObjectPtr::Get(&local_res20);
      local_30[0] = (FWeakObjectPtr)UDS_DataBase::GetEntityID(pUVar2);
      UDS_AbilityDataSet::GetAbilityData<UDS_AbnormalAbilityData>
                ((ulong64 *)&local_38,(EDS_AbilityTagType *)local_30);
      bVar1 = FWeakObjectPtr::IsValid(&local_38);
      if (bVar1) {
        this_00 = (UDS_AbnormalAbilityData *)FWeakObjectPtr::Get(&local_38);
        bVar1 = UDS_AbnormalAbilityData::HasAbnormalInfoByID
                          (this_00,param_1->CheckTargetAbnormalAction);
        if (bVar1) goto LAB_14b84c488;
      }
    }
    pUVar2 = (UDS_DataBase *)FWeakObjectPtr::Get(&(this->SkillMoveDataPtr).WeakPtr);
    UDS_DataBase::GetEntityID(pUVar2);
    UDS_MovementCore::GetMovementCore((ulong64)local_res10);
    bVar1 = FWeakObjectPtr::IsValid(local_res10);
    if (bVar1) {
      pUVar3 = FWeakObjectPtr::Get(local_res10);
      (**(code **)(*(longlong *)pUVar3 + 0x2f0))(pUVar3,1,0);
    }
  }
  return;
}

// RecalculateCollision @ 14b84d1d0

void __thiscall
UDS_SkillMoveAbility::RecalculateCollision(UDS_SkillMoveAbility *this,FSkillMoveInfo *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  UDS_DataBase *this_00;
  UDS_MovementCore *this_01;
  UObject *pUVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  float fVar10;
  double dVar11;
  FWeakObjectPtr local_res8;
  TVector<double>_u_0 local_58 [3];
  
  this_00 = (UDS_DataBase *)FWeakObjectPtr::Get(&(this->SkillMoveDataPtr).WeakPtr);
  UDS_DataBase::GetEntityID(this_00);
  UDS_MovementCore::GetMovementCore((ulong64)&local_res8);
  bVar4 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar4) {
    this_01 = (UDS_MovementCore *)FWeakObjectPtr::Get(&local_res8);
    UDS_MovementCore::GetActorLocation(this_01,(TVector<double> *)&local_58[0]._s_0);
    pUVar5 = FWeakObjectPtr::Get(&(this->SkillMoveDataPtr).WeakPtr);
    dVar11 = (param_1->DestSkillLocation).field0_0x0._s_0.Y - (double)local_58[0]._8_8_;
    dVar3 = *(double *)&pUVar5[3].field_0x10;
    dVar2 = (param_1->DestSkillLocation).field0_0x0._s_0.X - (double)local_58[0]._0_8_;
    dVar1 = *(double *)&pUVar5[3].field_0x18;
    dVar8 = dVar3 - (double)local_58[0]._8_8_;
    dVar9 = *(double *)&pUVar5[3].field_0x8 - (double)local_58[0]._0_8_;
    (param_1->DestSkillLocation).field0_0x0._s_0.X = *(double *)&pUVar5[3].field_0x8;
    (param_1->DestSkillLocation).field0_0x0._s_0.Y = dVar3;
    (param_1->DestSkillLocation).field0_0x0._s_0.Z = dVar1;
    auVar6._0_8_ = SQRT(dVar8 * dVar8 + dVar9 * dVar9);
    auVar6._8_8_ = 0;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = dVar11 * dVar11 + dVar2 * dVar2;
    auVar7 = sqrtpd(auVar6,auVar7);
    fVar10 = (float)auVar7._0_8_;
    if ((float)auVar7._0_8_ <= __real_322bcc77) {
      fVar10 = __real_322bcc77;
    }
    fVar10 = ((float)auVar6._0_8_ * param_1->ExpectedArrivalTime) / fVar10;
    param_1->ServerArriveTime = fVar10;
    param_1->ExpectedArrivalTime = fVar10;
  }
  return;
}

// RestoreDefaultCollisionProfile @ 14b84d7a0

void __thiscall UDS_SkillMoveAbility::RestoreDefaultCollisionProfile(UDS_SkillMoveAbility *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014b84d7aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this->_padding_ + 0x30))();
  return;
}

// SaveInitialTargetLocation @ 14b84e9c0

void __thiscall UDS_SkillMoveAbility::SaveInitialTargetLocation(UDS_SkillMoveAbility *this)

{
  bool bVar1;
  FDS_GetTargetLocationResult *pFVar2;
  UObject *pUVar3;
  FWeakObjectPtr local_res10 [3];
  FDS_GetTargetLocationResult local_58;
  FDS_GetTargetLocationResult local_30;
  
  UDS_AbilityDataSet::GetAbilityData<UDS_FindTargetAbilityData>
            ((ulong64 *)local_res10,(EDS_AbilityTagType *)&this->_padding_);
  bVar1 = FWeakObjectPtr::IsValid(local_res10);
  if (bVar1) {
    pFVar2 = UDS_FindTargetAbility::GetTargetLocation
                       (&local_30,
                        (TWeakObjectPtr<UDS_FindTargetAbilityData,FWeakObjectPtr>)local_res10[0],
                        true);
    local_58.bIsValid = pFVar2->bIsValid;
    local_58._1_7_ = *(undefined7 *)&pFVar2->field_0x1;
    local_58.TargetLocation.field0_0x0._s_0.X = (pFVar2->TargetLocation).field0_0x0._s_0.X;
    local_58.TargetLocation.field0_0x0._s_0.Y = (pFVar2->TargetLocation).field0_0x0._s_0.Y;
    local_58.TargetLocation.field0_0x0._s_0.Z = (pFVar2->TargetLocation).field0_0x0._s_0.Z;
    local_58.TargetRadius = pFVar2->TargetRadius;
    local_58._36_4_ = *(undefined4 *)&pFVar2->field_0x24;
    bVar1 = FDS_GetTargetLocationResult::IsValidData(&local_58);
    if (bVar1) {
      pUVar3 = FWeakObjectPtr::Get(&(this->SkillMoveDataPtr).WeakPtr);
      *(double *)&pUVar3[4].field_0x10 = local_58.TargetLocation.field0_0x0._s_0.X;
      *(double *)&pUVar3[4].field_0x18 = local_58.TargetLocation.field0_0x0._s_0.Y;
      *(double *)&pUVar3[4].field_0x20 = local_58.TargetLocation.field0_0x0._s_0.Z;
    }
  }
  return;
}

// SetMoveToFloorIfValid @ 14b850010

void __thiscall UDS_SkillMoveAbility::SetMoveToFloorIfValid(UDS_SkillMoveAbility *this)

{
  bool bVar1;
  UDS_DataBase *this_00;
  UObject *pUVar2;
  FWeakObjectPtr local_res8 [4];
  
  this_00 = (UDS_DataBase *)FWeakObjectPtr::Get(&(this->SkillMoveDataPtr).WeakPtr);
  UDS_DataBase::GetEntityID(this_00);
  UDS_MovementCore::GetMovementCore((ulong64)local_res8);
  bVar1 = FWeakObjectPtr::IsValid(local_res8);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(local_res8);
    (**(code **)(*(longlong *)pUVar2 + 0x2f0))(pUVar2,1,0);
  }
  return;
}

// SetSkillMoveCollisionProfile @ 14b850130

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
UDS_SkillMoveAbility::SetSkillMoveCollisionProfile
          (UDS_SkillMoveAbility *this,FDS_EntityBase *param_1)

{
  bool bVar1;
  UObject *pUVar2;
  FName FVar3;
  FWeakObjectPtr local_res10 [3];
  
  if (param_1 != (FDS_EntityBase *)0x0) {
    (**(code **)(param_1->_padding_ + 0x160))(param_1,local_res10);
    bVar1 = FWeakObjectPtr::IsValid(local_res10);
    if (bVar1) {
      if ((param_1->EntityType == MainCharacter) ||
         (FVar3 = ::COLLISION_PROFILE_NPC_NOCOLLISION, param_1->EntityType == NetCharacter)) {
        FVar3 = ::COLLISION_PROFILE_PLAYER_IGNORE_COLLISION;
      }
      pUVar2 = FWeakObjectPtr::Get(local_res10);
      (**(code **)(*(longlong *)pUVar2 + 0x788))(pUVar2,FVar3,1);
    }
  }
  return;
}

// ShouldInitServerMove @ 14b8506d0

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
UDS_SkillMoveAbility::ShouldInitServerMove(UDS_SkillMoveAbility *this,FDS_EntityBase *param_1)

{
  if (((this->SkillMoveInfoList).ArrayNum == 0) && (param_1->EntityType != MainCharacter)) {
    return true;
  }
  return false;
}

// UpdateActorMovement @ 14b8556a0

void __thiscall
UDS_SkillMoveAbility::UpdateActorMovement
          (UDS_SkillMoveAbility *this,TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> param_1,
          FSkillMoveInfo *param_2,TVector<double> *param_3,float param_4)

{
  UDS_MovementCore *this_00;
  UObject *pUVar1;
  double dVar2;
  FWeakObjectPtr local_res10;
  TVector<double>_u_0 local_88;
  TVector<double>_u_0 local_70;
  TVector<double>_u_0 local_58;
  TVector<double>_u_0 local_38 [2];
  
  local_res10 = param_1.WeakPtr;
  this_00 = (UDS_MovementCore *)FWeakObjectPtr::Get(&local_res10);
  UDS_MovementCore::GetActorLocation(this_00,(TVector<double> *)&local_88._s_0);
  local_58._s_0.X = (param_3->field0_0x0)._s_0.X;
  local_58._s_0.Y = (param_3->field0_0x0)._s_0.Y;
  local_58._s_0.Z = (param_3->field0_0x0)._s_0.Z;
  local_38[0]._s_0.X = local_88._s_0.X;
  local_38[0]._s_0.Y = local_88._s_0.Y;
  local_38[0]._s_0.Z = local_88._s_0.Z;
  GetSkillVelocity(this,(TVector<double> *)&local_70._s_0,param_2,
                   (TVector<double> *)&local_38[0]._s_0,(TVector<double> *)&local_58._s_0,param_4);
  if (param_2->MoveType == TargetAttachMov) {
    dVar2 = (double)param_4;
    local_88._s_0.X = local_88._s_0.X + dVar2 * local_70._s_0.X;
    local_88._s_0.Y = local_88._s_0.Y + dVar2 * local_70._s_0.Y;
    local_88._s_0.Z = local_88._s_0.Z + dVar2 * local_70._s_0.Z;
    pUVar1 = FWeakObjectPtr::Get(&local_res10);
    (**(code **)(*(longlong *)pUVar1 + 0x358))(pUVar1,&local_88);
  }
  else {
    pUVar1 = FWeakObjectPtr::Get(&local_res10);
    (**(code **)(*(longlong *)pUVar1 + 0x2c8))(pUVar1,&local_70,param_4,1);
  }
  return;
}

// UpdateChangeDestLocation @ 14b856630

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

TVector<double> * __thiscall
UDS_SkillMoveAbility::UpdateChangeDestLocation
          (UDS_SkillMoveAbility *this,TVector<double> *__return_storage_ptr__,
          FSkillMoveInfo *param_1)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  bool bVar5;
  UDS_DataBase *this_00;
  FDS_EntityBase *pFVar6;
  UObject *pUVar7;
  FPayload *pFVar8;
  TRotator<double> *pTVar9;
  int iVar10;
  FRotationConversionCache *this_01;
  uint uVar11;
  longlong lVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res20;
  TQuat<double> local_a8;
  TRotator<double> local_88;
  TVector<double>_u_0 local_70;
  TRotator<double> local_58;
  double local_30;
  
  this_00 = (UDS_DataBase *)FWeakObjectPtr::Get(&(this->SkillMoveDataPtr).WeakPtr);
  local_res20 = (FWeakObjectPtr)UDS_DataBase::GetEntityID(this_00);
  pFVar6 = FDS_EntityBase::GetEntityBase((ulong64 *)&local_res20);
  uVar17 = SUB84(&local_res8,0);
  (**(code **)(pFVar6->_padding_ + 0x1d0))(pFVar6);
  bVar5 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar5) {
    local_res20 = local_res8;
    pUVar7 = FWeakObjectPtr::Get(&local_res20);
    lVar12 = *(longlong *)(pUVar7 + 0xb);
    if (lVar12 == 0) {
      uVar13 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
      uVar15 = (undefined4)
               ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
      uVar19 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
      uVar20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
      uVar21 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
      uVar22 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    }
    else {
      uVar13 = *(undefined4 *)(lVar12 + 0x220);
      uVar15 = *(undefined4 *)(lVar12 + 0x224);
      uVar19 = *(undefined4 *)(lVar12 + 0x210);
      uVar20 = *(undefined4 *)(lVar12 + 0x214);
      uVar21 = *(undefined4 *)(lVar12 + 0x218);
      uVar22 = *(undefined4 *)(lVar12 + 0x21c);
    }
    local_30 = (double)CONCAT44(uVar15,uVar13);
    pUVar7 = FWeakObjectPtr::Get(&local_res20);
    lVar12 = *(longlong *)(pUVar7 + 0xb);
    if (lVar12 == 0) {
      uVar14 = SUB84(UE::Math::TRotator<double>::ZeroRotator.Roll,0);
      uVar16 = (undefined4)((ulonglong)UE::Math::TRotator<double>::ZeroRotator.Roll >> 0x20);
      uVar17 = UE::Math::TRotator<double>::ZeroRotator.Pitch._0_4_;
      uVar13 = UE::Math::TRotator<double>::ZeroRotator.Pitch._4_4_;
      uVar15 = UE::Math::TRotator<double>::ZeroRotator.Yaw._0_4_;
      uVar18 = UE::Math::TRotator<double>::ZeroRotator.Yaw._4_4_;
    }
    else {
      local_a8.X = *(double *)(lVar12 + 0x1f0);
      local_a8.Y = *(double *)(lVar12 + 0x1f8);
      local_a8.Z = *(double *)(lVar12 + 0x200);
      local_a8.W = *(double *)(lVar12 + 0x208);
      this_01 = (FRotationConversionCache *)(lVar12 + 0x1e0);
      pFVar8 = FRotationConversionCache::GetOrCreatePayload(this_01);
      lVar12 = -(ulonglong)((pFVar8->CachedQuat).W != local_a8.W);
      auVar2._8_4_ = (int)lVar12;
      auVar2._0_8_ = -(ulonglong)((pFVar8->CachedQuat).Z != local_a8.Z);
      auVar2._12_4_ = (int)((ulonglong)lVar12 >> 0x20);
      uVar11 = movmskpd(uVar17,auVar2);
      lVar12 = -(ulonglong)((pFVar8->CachedQuat).Y != local_a8.Y);
      auVar3._8_4_ = (int)lVar12;
      auVar3._0_8_ = -(ulonglong)((pFVar8->CachedQuat).X != local_a8.X);
      auVar3._12_4_ = (int)((ulonglong)lVar12 >> 0x20);
      iVar10 = movmskpd((int)this_01,auVar3);
      if ((uVar11 & 0x3fffffff) != 0 || iVar10 != 0) {
        (pFVar8->CachedQuat).X = local_a8.X;
        (pFVar8->CachedQuat).Y = local_a8.Y;
        (pFVar8->CachedQuat).Z = local_a8.Z;
        (pFVar8->CachedQuat).W = local_a8.W;
        pTVar9 = UE::Math::TQuat<double>::Rotator(&local_a8,&local_58);
        dVar1 = pTVar9->Yaw;
        (pFVar8->CachedRotator).Pitch = pTVar9->Pitch;
        (pFVar8->CachedRotator).Yaw = dVar1;
        (pFVar8->CachedRotator).Roll = pTVar9->Roll;
      }
      dVar1 = (pFVar8->CachedRotator).Roll;
      uVar14 = SUB84(dVar1,0);
      uVar16 = (undefined4)((ulonglong)dVar1 >> 0x20);
      uVar17 = *(undefined4 *)&(pFVar8->CachedRotator).Pitch;
      uVar13 = *(undefined4 *)((longlong)&(pFVar8->CachedRotator).Pitch + 4);
      uVar15 = *(undefined4 *)&(pFVar8->CachedRotator).Yaw;
      uVar18 = *(undefined4 *)((longlong)&(pFVar8->CachedRotator).Yaw + 4);
    }
    local_58.Roll = (double)CONCAT44(uVar16,uVar14);
    local_88.Pitch = (double)CONCAT44(uVar13,uVar17) - (param_1->ParentStartRotation).Pitch;
    local_88.Yaw = (double)CONCAT44(uVar18,uVar15) - (param_1->ParentStartRotation).Yaw;
    local_88.Roll = local_58.Roll - (param_1->ParentStartRotation).Roll;
    UE::Math::TRotator<double>::RotateVector
              (&local_88,(TVector<double> *)&local_70._s_0,&param_1->RelativeDestLocation);
    (__return_storage_ptr__->field0_0x0)._s_0.X = (double)CONCAT44(uVar20,uVar19) + local_70._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)CONCAT44(uVar22,uVar21) + local_70._s_0.Y;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = local_30 + local_70._s_0.Z;
    return __return_storage_ptr__;
  }
  dVar4 = (param_1->DestSkillLocation).field0_0x0._s_0.Y;
  dVar1 = (param_1->DestSkillLocation).field0_0x0._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (param_1->DestSkillLocation).field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// UpdateDestLocationByEntityType @ 14b856840

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
UDS_SkillMoveAbility::UpdateDestLocationByEntityType
          (UDS_SkillMoveAbility *this,FSkillMoveInfo *param_1,TVector<double> *param_2,
          FDS_EntityBase *param_3,TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> param_4)

{
  char cVar1;
  UObject *pUVar2;
  UDS_MovementCore *this_00;
  UDS_SendPacketManager *this_01;
  UDS_SkillMoveAbilityData *pUVar3;
  UDS_LogManager *pUVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  undefined1 auStackY_1f8 [32];
  TVector<double>_u_0 local_1b8;
  FWeakObjectPtr local_1a0;
  FString local_198;
  TVector<double>_u_0 local_188;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  if (param_3->EntityType == MainCharacter) {
    local_1a0 = param_4.WeakPtr;
    pUVar2 = FWeakObjectPtr::Get(&local_1a0);
    cVar1 = (**(code **)(*(longlong *)pUVar2 + 0x300))(pUVar2,param_2,&local_1b8);
    if (cVar1 == '\0') {
      local_198.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_1a0;
      this_00 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&local_198);
      UDS_MovementCore::GetActorLocation(this_00,(TVector<double> *)&local_188._s_0);
      fVar5 = param_1->ExpectedArrivalTime - param_1->ElapsedMoveTime;
      dVar8 = local_188._s_0.Y - (param_2->field0_0x0)._s_0.Y;
      dVar9 = local_188._s_0.X - (param_2->field0_0x0)._s_0.X;
      auVar6._0_8_ = (local_188._s_0.Y - local_1b8._s_0.Y) * (local_188._s_0.Y - local_1b8._s_0.Y) +
                     (local_188._s_0.X - local_1b8._s_0.X) * (local_188._s_0.X - local_1b8._s_0.X);
      auVar6._8_8_ = 0;
      auVar6 = sqrtpd(ZEXT416((uint)fVar5),auVar6);
      auVar7._8_8_ = 0;
      auVar7._0_8_ = dVar8 * dVar8 + dVar9 * dVar9;
      auVar7 = sqrtpd(auVar6,auVar7);
      dVar8 = (__real_3ff0000000000000 / auVar6._0_8_) * auVar7._0_8_;
      if (dVar8 <= __real_3e45798ee0000000) {
        dVar8 = __real_3e45798ee0000000;
      }
      dVar9 = UDS_TimeUtilManager::GetCurrentServerTime();
      this_01 = UDS_SendPacketManager::GetInst();
      local_188._s_0.X = local_1b8._s_0.X;
      local_188._s_0.Y = local_1b8._s_0.Y;
      local_188._s_0.Z = local_1b8._s_0.Z;
      UDS_SendPacketManager::StopSkillMoveRequest
                (this_01,param_3->EntityID,(int)param_1->SkillAttackID,
                 (TVector<double> *)&local_188._s_0,(double)fVar5 / dVar8 + dVar9);
      (param_2->field0_0x0)._s_0.X = local_1b8._s_0.X;
      (param_2->field0_0x0)._s_0.Y = local_1b8._s_0.Y;
      (param_2->field0_0x0)._s_0.Z = local_1b8._s_0.Z;
    }
  }
  else if ((byte)(param_3->EntityType - NetCharacter) < 2) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_168._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_168,"UDS_SkillMoveAbility::UpdateDestLocationByEntityType",0x34,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Display,local_168.Ptr,0x1f9,L"SERIN UpdateNetCharacterDestLocation");
      if ((void *)local_168._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_168._padding_);
      }
    }
    pUVar3 = (UDS_SkillMoveAbilityData *)FWeakObjectPtr::Get(&(this->SkillMoveDataPtr).WeakPtr);
    UDS_SkillMoveAbilityData::GetServerSkillDestLocation
              (pUVar3,(TVector<double> *)&local_1b8._s_0,(int)param_1->SkillAttackID);
    if (((__real_3f1a36e2e0000000 <
          (double)CONCAT44((uint)((ulonglong)local_1b8._0_8_ >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(local_1b8._s_0.X,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
         ) || (__real_3f1a36e2e0000000 <
               (double)CONCAT44((uint)((ulonglong)local_1b8._8_8_ >> 0x20) &
                                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                SUB84(local_1b8._s_0.Y,0) &
                                (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
       (__real_3f1a36e2e0000000 <
        (double)CONCAT44((uint)((ulonglong)local_1b8._16_8_ >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(local_1b8._s_0.Z,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)))
    {
      *(double *)&param_2->field0_0x0 = local_1b8._s_0.X;
      *(double *)((longlong)&param_2->field0_0x0 + 8) = local_1b8._s_0.Y;
      *(double *)((longlong)&param_2->field0_0x0 + 0x10) = local_1b8._s_0.Z;
      pUVar3 = (UDS_SkillMoveAbilityData *)FWeakObjectPtr::Get(&(this->SkillMoveDataPtr).WeakPtr);
      UDS_SkillMoveAbilityData::ResetServerSkillDestLocation(pUVar3,(int)param_1->SkillAttackID);
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 != (UDS_LogManager *)0x0) {
        pUVar4 = UDS_LogManager::GetInst();
        ::FString::PrintfImpl(&local_198,L"X=%3.3f Y=%3.3f Z=%3.3f");
        local_168._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_168,"UDS_SkillMoveAbility::UpdateNetCharacterDestLocation",0x34,Yes);
        UDS_LogManager::PrintLog
                  (pUVar4,1,Display,local_168.Ptr,0x226,
                   L"SERIN ServerLocationChanged UpdateNetCharacter %s");
        if ((void *)local_168._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_168._padding_);
        }
        if ((FWeakObjectPtr)local_198.Data.AllocatorInstance.Data != (FWeakObjectPtr)0x0) {
          FMemory::Free(local_198.Data.AllocatorInstance.Data);
        }
      }
    }
  }
  else {
    pUVar3 = (UDS_SkillMoveAbilityData *)FWeakObjectPtr::Get(&(this->SkillMoveDataPtr).WeakPtr);
    UDS_SkillMoveAbilityData::GetServerSkillDestLocation
              (pUVar3,(TVector<double> *)&local_1b8._s_0,(int)param_1->SkillAttackID);
    if (((__real_3f1a36e2e0000000 <
          (double)CONCAT44((uint)((ulonglong)local_1b8._0_8_ >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(local_1b8._s_0.X,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
         ) || (__real_3f1a36e2e0000000 <
               (double)CONCAT44((uint)((ulonglong)local_1b8._8_8_ >> 0x20) &
                                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                SUB84(local_1b8._s_0.Y,0) &
                                (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
       (__real_3f1a36e2e0000000 <
        (double)CONCAT44((uint)((ulonglong)local_1b8._16_8_ >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(local_1b8._s_0.Z,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)))
    {
      *(double *)&param_2->field0_0x0 = local_1b8._s_0.X;
      *(double *)((longlong)&param_2->field0_0x0 + 8) = local_1b8._s_0.Y;
      *(double *)((longlong)&param_2->field0_0x0 + 0x10) = local_1b8._s_0.Z;
      pUVar3 = (UDS_SkillMoveAbilityData *)FWeakObjectPtr::Get(&(this->SkillMoveDataPtr).WeakPtr);
      UDS_SkillMoveAbilityData::ResetServerSkillDestLocation(pUVar3,(int)param_1->SkillAttackID);
    }
    else {
      pUVar2 = FWeakObjectPtr::Get(&(this->SkillMoveDataPtr).WeakPtr);
      if (pUVar2[3].field_0x21 == '\x01') {
        pUVar2 = FWeakObjectPtr::Get(&(this->SkillMoveDataPtr).WeakPtr);
        dVar9 = *(double *)&pUVar2[3].field_0x10;
        dVar8 = *(double *)&pUVar2[3].field_0x18;
        (param_2->field0_0x0)._s_0.X = *(double *)&pUVar2[3].field_0x8;
        (param_2->field0_0x0)._s_0.Y = dVar9;
        (param_2->field0_0x0)._s_0.Z = dVar8;
      }
    }
  }
  return;
}

// UpdateMainCharacterDestLocation @ 14b857be0

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
UDS_SkillMoveAbility::UpdateMainCharacterDestLocation
          (UDS_SkillMoveAbility *this,FSkillMoveInfo *param_1,TVector<double> *param_2,
          FDS_EntityBase *param_3,TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> param_4)

{
  double dVar1;
  char cVar2;
  UObject *pUVar3;
  UDS_MovementCore *this_00;
  UDS_SendPacketManager *this_01;
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  FWeakObjectPtr local_58;
  double local_50;
  double dStack_48;
  double local_40;
  TVector<double>_u_0 local_38 [2];
  
  pUVar3 = FWeakObjectPtr::Get(&param_4.WeakPtr);
  cVar2 = (**(code **)(*(longlong *)pUVar3 + 0x300))(pUVar3,param_2,&local_50);
  if (cVar2 == '\0') {
    local_58 = param_4.WeakPtr;
    this_00 = (UDS_MovementCore *)FWeakObjectPtr::Get(&local_58);
    UDS_MovementCore::GetActorLocation(this_00,(TVector<double> *)&local_38[0]._s_0);
    fVar4 = param_1->ExpectedArrivalTime - param_1->ElapsedMoveTime;
    dVar1 = (double)local_38[0]._8_8_ - (param_2->field0_0x0)._s_0.Y;
    dVar7 = (double)local_38[0]._0_8_ - (param_2->field0_0x0)._s_0.X;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = ((double)local_38[0]._8_8_ - dStack_48) * ((double)local_38[0]._8_8_ - dStack_48)
                   + ((double)local_38[0]._0_8_ - local_50) * ((double)local_38[0]._0_8_ - local_50)
    ;
    auVar5 = sqrtpd(ZEXT416((uint)fVar4),auVar5);
    auVar6._8_8_ = 0;
    auVar6._0_8_ = dVar1 * dVar1 + dVar7 * dVar7;
    auVar6 = sqrtpd(auVar5,auVar6);
    dVar1 = (__real_3ff0000000000000 / auVar5._0_8_) * auVar6._0_8_;
    if (dVar1 <= __real_3e45798ee0000000) {
      dVar1 = __real_3e45798ee0000000;
    }
    dVar7 = UDS_TimeUtilManager::GetCurrentServerTime();
    this_01 = UDS_SendPacketManager::GetInst();
    local_38[0]._s_0.X = local_50;
    local_38[0]._s_0.Y = dStack_48;
    local_38[0]._s_0.Z = local_40;
    UDS_SendPacketManager::StopSkillMoveRequest
              (this_01,param_3->EntityID,(int)param_1->SkillAttackID,
               (TVector<double> *)&local_38[0]._s_0,(double)fVar4 / dVar1 + dVar7);
    (param_2->field0_0x0)._s_0.X = local_50;
    (param_2->field0_0x0)._s_0.Y = dStack_48;
    (param_2->field0_0x0)._s_0.Z = local_40;
  }
  return;
}

// UpdateMoveProcess @ 14b859790

void __thiscall
UDS_SkillMoveAbility::UpdateMoveProcess
          (UDS_SkillMoveAbility *this,FSkillMoveInfo *param_1,float param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  UObject *pUVar5;
  UDS_DataBase *this_00;
  UDS_MovementCore *this_01;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  float fVar10;
  double dVar11;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res20;
  TVector<double>_u_0 local_68 [4];
  
  if (param_1->SkillAttackID == 0) {
    return;
  }
  bVar4 = FWeakObjectPtr::IsValid(&(this->SkillMoveDataPtr).WeakPtr);
  if (!bVar4) {
    return;
  }
  if (this->ElapsedTime < param_1->MoveStartTime) {
    return;
  }
  if (param_1->IsSkillMoveStarted == false) {
    local_res10.ObjectIndex._0_1_ = 0x1b;
    UDS_AbilityDataSet::GetAbilityData<UDS_FindTargetAbilityData>
              ((ulong64 *)&local_res20,(EDS_AbilityTagType *)&this->_padding_);
    bVar4 = FWeakObjectPtr::IsValid(&local_res20);
    if (bVar4) {
      FSkillMoveInfo::StartSkillMove
                (param_1,(TWeakObjectPtr<UDS_SkillMoveAbilityData,FWeakObjectPtr>)
                         (this->SkillMoveDataPtr).WeakPtr,
                 (TWeakObjectPtr<UDS_FindTargetAbilityData,FWeakObjectPtr>)local_res20,false);
      pUVar5 = FWeakObjectPtr::Get(&(this->SkillMoveDataPtr).WeakPtr);
      if (pUVar5[3].field_0x21 == '\x01') {
        this_00 = (UDS_DataBase *)FWeakObjectPtr::Get(&(this->SkillMoveDataPtr).WeakPtr);
        UDS_DataBase::GetEntityID(this_00);
        UDS_MovementCore::GetMovementCore((ulong64)&local_res10);
        bVar4 = FWeakObjectPtr::IsValid(&local_res10);
        if (bVar4) {
          this_01 = (UDS_MovementCore *)FWeakObjectPtr::Get(&local_res10);
          UDS_MovementCore::GetActorLocation(this_01,(TVector<double> *)&local_68[0]._s_0);
          pUVar5 = FWeakObjectPtr::Get(&(this->SkillMoveDataPtr).WeakPtr);
          dVar11 = (param_1->DestSkillLocation).field0_0x0._s_0.Y - (double)local_68[0]._8_8_;
          dVar3 = *(double *)&pUVar5[3].field_0x10;
          dVar2 = (param_1->DestSkillLocation).field0_0x0._s_0.X - (double)local_68[0]._0_8_;
          dVar1 = *(double *)&pUVar5[3].field_0x18;
          dVar8 = dVar3 - (double)local_68[0]._8_8_;
          dVar9 = *(double *)&pUVar5[3].field_0x8 - (double)local_68[0]._0_8_;
          (param_1->DestSkillLocation).field0_0x0._s_0.X = *(double *)&pUVar5[3].field_0x8;
          (param_1->DestSkillLocation).field0_0x0._s_0.Y = dVar3;
          (param_1->DestSkillLocation).field0_0x0._s_0.Z = dVar1;
          auVar6._0_8_ = SQRT(dVar8 * dVar8 + dVar9 * dVar9);
          auVar6._8_8_ = 0;
          auVar7._8_8_ = 0;
          auVar7._0_8_ = dVar11 * dVar11 + dVar2 * dVar2;
          auVar7 = sqrtpd(auVar6,auVar7);
          fVar10 = (float)auVar7._0_8_;
          if ((float)auVar7._0_8_ <= __real_322bcc77) {
            fVar10 = __real_322bcc77;
          }
          fVar10 = ((float)auVar6._0_8_ * param_1->ExpectedArrivalTime) / fVar10;
          param_1->ServerArriveTime = fVar10;
          param_1->ExpectedArrivalTime = fVar10;
        }
      }
    }
  }
  if (this->ElapsedTime < param_1->DelayTime) {
    return;
  }
  if (param_1->MoveType == TargetAttachMov) {
    ProcessTargetAttachMove(this,param_1,param_2);
  }
  else {
    if (param_1->ExpectedArrivalTime - param_1->ElapsedMoveTime <= 0.0) {
      if (param_1->IsLastSkillMove != true) goto LAB_14b8599cc;
      param_1->ElapsedMoveTime = param_1->ExpectedArrivalTime;
    }
    UpdateSkillMove(this,param_1,param_2);
  }
LAB_14b8599cc:
  param_1->ElapsedMoveTime = param_2 + param_1->ElapsedMoveTime;
  return;
}

// UpdateNPCDestLocation @ 14b859a00

void __thiscall
UDS_SkillMoveAbility::UpdateNPCDestLocation
          (UDS_SkillMoveAbility *this,FSkillMoveInfo *param_1,TVector<double> *param_2)

{
  TWeakObjectPtr<UDS_SkillMoveAbilityData,FWeakObjectPtr> *this_00;
  double dVar1;
  double dVar2;
  UDS_SkillMoveAbilityData *pUVar3;
  UObject *pUVar4;
  uint uVar5;
  uint uVar6;
  TVector<double>_u_0 local_28;
  
  this_00 = &this->SkillMoveDataPtr;
  pUVar3 = (UDS_SkillMoveAbilityData *)FWeakObjectPtr::Get(&this_00->WeakPtr);
  UDS_SkillMoveAbilityData::GetServerSkillDestLocation
            (pUVar3,(TVector<double> *)&local_28._s_0,(int)param_1->SkillAttackID);
  uVar5 = SUB84(local_28._s_0.X,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar6 = (uint)((ulonglong)local_28._0_8_ >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if (((__real_3f1a36e2e0000000 <= (double)CONCAT44(uVar6,uVar5) &&
        (double)CONCAT44(uVar6,uVar5) != __real_3f1a36e2e0000000) ||
      (uVar5 = SUB84(local_28._s_0.Y,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
      uVar6 = (uint)((ulonglong)local_28._8_8_ >> 0x20) &
              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
      __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar6,uVar5) &&
      (double)CONCAT44(uVar6,uVar5) != __real_3f1a36e2e0000000)) ||
     (uVar5 = SUB84(local_28._s_0.Z,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
     uVar6 = (uint)((ulonglong)local_28._16_8_ >> 0x20) &
             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
     __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar6,uVar5) &&
     (double)CONCAT44(uVar6,uVar5) != __real_3f1a36e2e0000000)) {
    *(double *)&param_2->field0_0x0 = local_28._s_0.X;
    *(double *)((longlong)&param_2->field0_0x0 + 8) = local_28._s_0.Y;
    *(double *)((longlong)&param_2->field0_0x0 + 0x10) = local_28._s_0.Z;
    pUVar3 = (UDS_SkillMoveAbilityData *)FWeakObjectPtr::Get(&this_00->WeakPtr);
    UDS_SkillMoveAbilityData::ResetServerSkillDestLocation(pUVar3,(int)param_1->SkillAttackID);
  }
  else {
    pUVar4 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    if (pUVar4[3].field_0x21 == '\x01') {
      pUVar4 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      dVar2 = *(double *)&pUVar4[3].field_0x10;
      dVar1 = *(double *)&pUVar4[3].field_0x18;
      (param_2->field0_0x0)._s_0.X = *(double *)&pUVar4[3].field_0x8;
      (param_2->field0_0x0)._s_0.Y = dVar2;
      (param_2->field0_0x0)._s_0.Z = dVar1;
      return;
    }
  }
  return;
}

// UpdateNetCharacterDestLocation @ 14b859af0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_SkillMoveAbility::UpdateNetCharacterDestLocation
          (UDS_SkillMoveAbility *this,FSkillMoveInfo *param_1,TVector<double> *param_2)

{
  UDS_SkillMoveAbilityData *pUVar1;
  UDS_LogManager *pUVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auStackY_1b8 [32];
  FString local_178;
  TVector<double>_u_0 local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  pUVar1 = (UDS_SkillMoveAbilityData *)FWeakObjectPtr::Get(&(this->SkillMoveDataPtr).WeakPtr);
  UDS_SkillMoveAbilityData::GetServerSkillDestLocation
            (pUVar1,(TVector<double> *)&local_168._s_0,(int)param_1->SkillAttackID);
  uVar3 = SUB84(local_168._s_0.X,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar4 = (uint)((ulonglong)local_168._0_8_ >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if (((__real_3f1a36e2e0000000 <= (double)CONCAT44(uVar4,uVar3) &&
        (double)CONCAT44(uVar4,uVar3) != __real_3f1a36e2e0000000) ||
      (uVar3 = SUB84(local_168._s_0.Y,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
      uVar4 = (uint)((ulonglong)local_168._8_8_ >> 0x20) &
              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
      __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar4,uVar3) &&
      (double)CONCAT44(uVar4,uVar3) != __real_3f1a36e2e0000000)) ||
     (uVar3 = SUB84(local_168._s_0.Z,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
     uVar4 = (uint)((ulonglong)local_168._16_8_ >> 0x20) &
             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
     __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar4,uVar3) &&
     (double)CONCAT44(uVar4,uVar3) != __real_3f1a36e2e0000000)) {
    *(double *)&param_2->field0_0x0 = local_168._s_0.X;
    *(double *)((longlong)&param_2->field0_0x0 + 8) = local_168._s_0.Y;
    *(double *)((longlong)&param_2->field0_0x0 + 0x10) = local_168._s_0.Z;
    pUVar1 = (UDS_SkillMoveAbilityData *)FWeakObjectPtr::Get(&(this->SkillMoveDataPtr).WeakPtr);
    UDS_SkillMoveAbilityData::ResetServerSkillDestLocation(pUVar1,(int)param_1->SkillAttackID);
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      ::FString::PrintfImpl(&local_178,L"X=%3.3f Y=%3.3f Z=%3.3f");
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_SkillMoveAbility::UpdateNetCharacterDestLocation",0x34,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Display,local_148.Ptr,0x226,
                 L"SERIN ServerLocationChanged UpdateNetCharacter %s");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
      if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_178.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// UpdateServerMovement @ 14b859ec0

void __thiscall
UDS_SkillMoveAbility::UpdateServerMovement
          (UDS_SkillMoveAbility *this,TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> param_1,
          FSkillMoveInfo *param_2,TVector<double> *param_3,float param_4)

{
  UObject *pUVar1;
  FWeakObjectPtr local_res10;
  double local_98;
  double dStack_90;
  double local_88;
  TVector<double>_u_0 local_78;
  TVector<double>_u_0 local_58;
  TVector<double> local_38 [2];
  
  local_res10 = param_1.WeakPtr;
  pUVar1 = FWeakObjectPtr::Get(&local_res10);
  (**(code **)(*(longlong *)pUVar1 + 0x330))(pUVar1,&local_98);
  local_78._s_0.X = (param_3->field0_0x0)._s_0.X;
  local_78._s_0.Y = (param_3->field0_0x0)._s_0.Y;
  local_78._s_0.Z = (param_3->field0_0x0)._s_0.Z;
  local_58._s_0.X = local_98;
  local_58._s_0.Y = dStack_90;
  local_58._s_0.Z = local_88;
  GetSkillVelocity(this,local_38,param_2,(TVector<double> *)&local_58._s_0,
                   (TVector<double> *)&local_78._s_0,param_4);
  pUVar1 = FWeakObjectPtr::Get(&local_res10);
  (**(code **)(*(longlong *)pUVar1 + 0x2d0))(pUVar1,local_38,param_4);
  return;
}

// UpdateSkillMove @ 14b85a3e0

void __thiscall
UDS_SkillMoveAbility::UpdateSkillMove
          (UDS_SkillMoveAbility *this,FSkillMoveInfo *param_1,float param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  UDS_DataBase *pUVar5;
  UObject *pUVar6;
  UDS_MovementCore *this_00;
  ulong64 uVar7;
  undefined4 in_XMM2_Db;
  double dVar8;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res20;
  TVector<double>_u_0 local_c8;
  TVector<double>_u_0 local_a8;
  TVector<double>_u_0 local_88;
  TVector<double>_u_0 local_68 [3];
  
  pUVar5 = (UDS_DataBase *)FWeakObjectPtr::Get(&(this->SkillMoveDataPtr).WeakPtr);
  UDS_DataBase::GetEntityID(pUVar5);
  UDS_MovementCore::GetMovementCore((ulong64)&local_res8);
  bVar4 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar4) {
    if (param_1->MoveType == TargetAttachMov) {
      GetSocketDestLocation(this,(TVector<double> *)&local_a8._s_0,param_1);
    }
    else {
      GetSkillDestLocation(this,(TVector<double> *)&local_a8._s_0,param_1);
    }
    local_res20 = local_res8;
    pUVar6 = FWeakObjectPtr::Get(&local_res20);
    (**(code **)(*(longlong *)pUVar6 + 0x330))(pUVar6,&local_c8);
    uVar3 = local_a8._s_0.Z;
    uVar2 = local_a8._s_0.Y;
    uVar1 = local_a8._s_0.X;
    local_a8._s_0.X = local_c8._s_0.X;
    local_a8._s_0.Y = local_c8._s_0.Y;
    local_88._s_0.X = (double)uVar1;
    local_88._s_0.Y = (double)uVar2;
    local_88._s_0.Z = local_a8._s_0.Z;
    local_a8._s_0.Z = local_c8._s_0.Z;
    GetSkillVelocity(this,(TVector<double> *)&local_68[0]._s_0,param_1,
                     (TVector<double> *)&local_a8._s_0,(TVector<double> *)&local_88._s_0,param_2);
    pUVar6 = FWeakObjectPtr::Get(&local_res20);
    (**(code **)(*(longlong *)pUVar6 + 0x2d0))(pUVar6,local_68,CONCAT44(in_XMM2_Db,param_2));
    local_res20 = local_res8;
    this_00 = (UDS_MovementCore *)FWeakObjectPtr::Get(&local_res20);
    UDS_MovementCore::GetActorLocation(this_00,(TVector<double> *)&local_c8._s_0);
    local_68[0]._s_0.X = local_c8._s_0.X;
    local_68[0]._s_0.Y = local_c8._s_0.Y;
    local_88._s_0.X = (double)uVar1;
    local_88._s_0.Y = (double)uVar2;
    local_88._s_0.Z = (double)uVar3;
    local_68[0]._s_0.Z = local_c8._s_0.Z;
    GetSkillVelocity(this,(TVector<double> *)&local_a8._s_0,param_1,
                     (TVector<double> *)&local_68[0]._s_0,(TVector<double> *)&local_88._s_0,param_2)
    ;
    if (param_1->MoveType == TargetAttachMov) {
      dVar8 = (double)param_2;
      local_c8._s_0.X = local_c8._s_0.X + dVar8 * local_a8._s_0.X;
      local_c8._s_0.Y = local_c8._s_0.Y + dVar8 * local_a8._s_0.Y;
      local_c8._s_0.Z = local_c8._s_0.Z + dVar8 * local_a8._s_0.Z;
      pUVar6 = FWeakObjectPtr::Get(&local_res20);
      (**(code **)(*(longlong *)pUVar6 + 0x358))(pUVar6,&local_c8);
    }
    else {
      pUVar6 = FWeakObjectPtr::Get(&local_res20);
      (**(code **)(*(longlong *)pUVar6 + 0x2c8))(pUVar6,&local_a8,CONCAT44(in_XMM2_Db,param_2),1);
    }
    pUVar5 = (UDS_DataBase *)FWeakObjectPtr::Get(&(this->SkillMoveDataPtr).WeakPtr);
    uVar7 = UDS_DataBase::GetEntityID(pUVar5);
    if (param_1->MoveType != TargetAttachMov) {
      bVar4 = IsStraightMove(this,param_1,uVar7);
      if ((!bVar4) && (param_1->bIsJumpSkill != true)) {
        pUVar6 = FWeakObjectPtr::Get(&local_res8);
        (**(code **)(*(longlong *)pUVar6 + 0x2f0))(pUVar6,1,0);
      }
    }
  }
  return;
}

// UpdateSkillSocketMove @ 14b85a660

void __thiscall
UDS_SkillMoveAbility::UpdateSkillSocketMove
          (UDS_SkillMoveAbility *this,FSkillMoveInfo *param_1,float param_2)

{
  bool bVar1;
  UDS_DataBase *this_00;
  UObject *pUVar2;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_28;
  FWeakObjectPtr local_20 [3];
  
  this_00 = (UDS_DataBase *)FWeakObjectPtr::Get(&(this->SkillMoveDataPtr).WeakPtr);
  UDS_DataBase::GetEntityID(this_00);
  UDS_MovementCore::GetMovementCore((ulong64)local_20);
  bVar1 = FWeakObjectPtr::IsValid(local_20);
  if (bVar1) {
    UDS_AbilityDataSet::GetAbilityData<UDS_FindTargetAbilityData>
              ((ulong64 *)&local_res20,(EDS_AbilityTagType *)&this->_padding_);
    bVar1 = FWeakObjectPtr::IsValid(&local_res20);
    if (bVar1) {
      pUVar2 = FWeakObjectPtr::Get(&local_res20);
      if (*(longlong *)&pUVar2[2].field_0x10 != 0) {
        UDS_MovementCore::GetMovementCore((ulong64)&local_28);
        bVar1 = FWeakObjectPtr::IsValid(&local_28);
        if (bVar1) {
          ProcessSocketMovement
                    (this,(TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>)local_20[0],
                     (TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>)local_28,param_1,param_2);
        }
      }
    }
  }
  return;
}

