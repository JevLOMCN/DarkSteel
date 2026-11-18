// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PhysicsControl
// Functions: 6

// FPhysicsControlRecord @ 14d9bf4a0

FPhysicsControlRecord * __thiscall
FPhysicsControlRecord::FPhysicsControlRecord
          (FPhysicsControlRecord *this,FPhysicsControlRecord *param_1)

{
  FName FVar1;
  double dVar2;
  longlong lVar3;
  undefined3 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  undefined7 uVar13;
  short sVar14;
  short sVar15;
  
  FVar1 = (param_1->PhysicsControl).ChildBoneName;
  (this->PhysicsControl).ParentBoneName = (param_1->PhysicsControl).ParentBoneName;
  (this->PhysicsControl).ChildBoneName = FVar1;
  uVar4 = *(undefined3 *)&(param_1->PhysicsControl).ControlData.field_0x1;
  fVar5 = (param_1->PhysicsControl).ControlData.LinearStrength;
  fVar6 = (param_1->PhysicsControl).ControlData.LinearDampingRatio;
  fVar7 = (param_1->PhysicsControl).ControlData.LinearExtraDamping;
  (this->PhysicsControl).ControlData.bEnabled = (param_1->PhysicsControl).ControlData.bEnabled;
  *(undefined3 *)&(this->PhysicsControl).ControlData.field_0x1 = uVar4;
  (this->PhysicsControl).ControlData.LinearStrength = fVar5;
  (this->PhysicsControl).ControlData.LinearDampingRatio = fVar6;
  (this->PhysicsControl).ControlData.LinearExtraDamping = fVar7;
  fVar5 = (param_1->PhysicsControl).ControlData.AngularStrength;
  fVar6 = (param_1->PhysicsControl).ControlData.AngularDampingRatio;
  fVar7 = (param_1->PhysicsControl).ControlData.AngularExtraDamping;
  (this->PhysicsControl).ControlData.MaxForce = (param_1->PhysicsControl).ControlData.MaxForce;
  (this->PhysicsControl).ControlData.AngularStrength = fVar5;
  (this->PhysicsControl).ControlData.AngularDampingRatio = fVar6;
  (this->PhysicsControl).ControlData.AngularExtraDamping = fVar7;
  fVar5 = (param_1->PhysicsControl).ControlData.LinearTargetVelocityMultiplier;
  fVar6 = (param_1->PhysicsControl).ControlData.AngularTargetVelocityMultiplier;
  uVar8 = *(undefined4 *)&(param_1->PhysicsControl).ControlData.field_0x2c;
  (this->PhysicsControl).ControlData.MaxTorque = (param_1->PhysicsControl).ControlData.MaxTorque;
  (this->PhysicsControl).ControlData.LinearTargetVelocityMultiplier = fVar5;
  (this->PhysicsControl).ControlData.AngularTargetVelocityMultiplier = fVar6;
  *(undefined4 *)&(this->PhysicsControl).ControlData.field_0x2c = uVar8;
  dVar2 = (param_1->PhysicsControl).ControlData.CustomControlPoint.field0_0x0._s_0.Y;
  (this->PhysicsControl).ControlData.CustomControlPoint.field0_0x0._s_0.X =
       (param_1->PhysicsControl).ControlData.CustomControlPoint.field0_0x0._s_0.X;
  (this->PhysicsControl).ControlData.CustomControlPoint.field0_0x0._s_0.Y = dVar2;
  bVar9 = (param_1->PhysicsControl).ControlData.bUseCustomControlPoint;
  bVar10 = (param_1->PhysicsControl).ControlData.bUseSkeletalAnimation;
  bVar11 = (param_1->PhysicsControl).ControlData.bDisableCollision;
  bVar12 = (param_1->PhysicsControl).ControlData.bOnlyControlChildObject;
  uVar8 = *(undefined4 *)&(param_1->PhysicsControl).ControlData.field_0x4c;
  (this->PhysicsControl).ControlData.CustomControlPoint.field0_0x0._s_0.Z =
       (param_1->PhysicsControl).ControlData.CustomControlPoint.field0_0x0._s_0.Z;
  (this->PhysicsControl).ControlData.bUseCustomControlPoint = bVar9;
  (this->PhysicsControl).ControlData.bUseSkeletalAnimation = bVar10;
  (this->PhysicsControl).ControlData.bDisableCollision = bVar11;
  (this->PhysicsControl).ControlData.bOnlyControlChildObject = bVar12;
  *(undefined4 *)&(this->PhysicsControl).ControlData.field_0x4c = uVar8;
  dVar2 = (param_1->PhysicsControl).ControlMultiplier.LinearStrengthMultiplier.field0_0x0._s_0.Y;
  (this->PhysicsControl).ControlMultiplier.LinearStrengthMultiplier.field0_0x0._s_0.X =
       (param_1->PhysicsControl).ControlMultiplier.LinearStrengthMultiplier.field0_0x0._s_0.X;
  (this->PhysicsControl).ControlMultiplier.LinearStrengthMultiplier.field0_0x0._s_0.Y = dVar2;
  dVar2 = (param_1->PhysicsControl).ControlMultiplier.LinearDampingRatioMultiplier.field0_0x0._s_0.X
  ;
  (this->PhysicsControl).ControlMultiplier.LinearStrengthMultiplier.field0_0x0._s_0.Z =
       (param_1->PhysicsControl).ControlMultiplier.LinearStrengthMultiplier.field0_0x0._s_0.Z;
  (this->PhysicsControl).ControlMultiplier.LinearDampingRatioMultiplier.field0_0x0._s_0.X = dVar2;
  dVar2 = (param_1->PhysicsControl).ControlMultiplier.LinearDampingRatioMultiplier.field0_0x0._s_0.Z
  ;
  (this->PhysicsControl).ControlMultiplier.LinearDampingRatioMultiplier.field0_0x0._s_0.Y =
       (param_1->PhysicsControl).ControlMultiplier.LinearDampingRatioMultiplier.field0_0x0._s_0.Y;
  (this->PhysicsControl).ControlMultiplier.LinearDampingRatioMultiplier.field0_0x0._s_0.Z = dVar2;
  dVar2 = (param_1->PhysicsControl).ControlMultiplier.LinearExtraDampingMultiplier.field0_0x0._s_0.Y
  ;
  (this->PhysicsControl).ControlMultiplier.LinearExtraDampingMultiplier.field0_0x0._s_0.X =
       (param_1->PhysicsControl).ControlMultiplier.LinearExtraDampingMultiplier.field0_0x0._s_0.X;
  (this->PhysicsControl).ControlMultiplier.LinearExtraDampingMultiplier.field0_0x0._s_0.Y = dVar2;
  dVar2 = (param_1->PhysicsControl).ControlMultiplier.MaxForceMultiplier.field0_0x0._s_0.X;
  (this->PhysicsControl).ControlMultiplier.LinearExtraDampingMultiplier.field0_0x0._s_0.Z =
       (param_1->PhysicsControl).ControlMultiplier.LinearExtraDampingMultiplier.field0_0x0._s_0.Z;
  (this->PhysicsControl).ControlMultiplier.MaxForceMultiplier.field0_0x0._s_0.X = dVar2;
  dVar2 = (param_1->PhysicsControl).ControlMultiplier.MaxForceMultiplier.field0_0x0._s_0.Z;
  (this->PhysicsControl).ControlMultiplier.MaxForceMultiplier.field0_0x0._s_0.Y =
       (param_1->PhysicsControl).ControlMultiplier.MaxForceMultiplier.field0_0x0._s_0.Y;
  (this->PhysicsControl).ControlMultiplier.MaxForceMultiplier.field0_0x0._s_0.Z = dVar2;
  fVar5 = (param_1->PhysicsControl).ControlMultiplier.AngularDampingRatioMultiplier;
  fVar6 = (param_1->PhysicsControl).ControlMultiplier.AngularExtraDampingMultiplier;
  fVar7 = (param_1->PhysicsControl).ControlMultiplier.MaxTorqueMultiplier;
  (this->PhysicsControl).ControlMultiplier.AngularStrengthMultiplier =
       (param_1->PhysicsControl).ControlMultiplier.AngularStrengthMultiplier;
  (this->PhysicsControl).ControlMultiplier.AngularDampingRatioMultiplier = fVar5;
  (this->PhysicsControl).ControlMultiplier.AngularExtraDampingMultiplier = fVar6;
  (this->PhysicsControl).ControlMultiplier.MaxTorqueMultiplier = fVar7;
  dVar2 = (param_1->ControlTarget).TargetPosition.field0_0x0._s_0.Y;
  (this->ControlTarget).TargetPosition.field0_0x0._s_0.X =
       (param_1->ControlTarget).TargetPosition.field0_0x0._s_0.X;
  (this->ControlTarget).TargetPosition.field0_0x0._s_0.Y = dVar2;
  dVar2 = (param_1->ControlTarget).TargetVelocity.field0_0x0._s_0.X;
  (this->ControlTarget).TargetPosition.field0_0x0._s_0.Z =
       (param_1->ControlTarget).TargetPosition.field0_0x0._s_0.Z;
  (this->ControlTarget).TargetVelocity.field0_0x0._s_0.X = dVar2;
  dVar2 = (param_1->ControlTarget).TargetVelocity.field0_0x0._s_0.Z;
  (this->ControlTarget).TargetVelocity.field0_0x0._s_0.Y =
       (param_1->ControlTarget).TargetVelocity.field0_0x0._s_0.Y;
  (this->ControlTarget).TargetVelocity.field0_0x0._s_0.Z = dVar2;
  dVar2 = (param_1->ControlTarget).TargetOrientation.Yaw;
  (this->ControlTarget).TargetOrientation.Pitch = (param_1->ControlTarget).TargetOrientation.Pitch;
  (this->ControlTarget).TargetOrientation.Yaw = dVar2;
  dVar2 = (param_1->ControlTarget).TargetAngularVelocity.field0_0x0._s_0.X;
  (this->ControlTarget).TargetOrientation.Roll = (param_1->ControlTarget).TargetOrientation.Roll;
  (this->ControlTarget).TargetAngularVelocity.field0_0x0._s_0.X = dVar2;
  dVar2 = (param_1->ControlTarget).TargetAngularVelocity.field0_0x0._s_0.Z;
  (this->ControlTarget).TargetAngularVelocity.field0_0x0._s_0.Y =
       (param_1->ControlTarget).TargetAngularVelocity.field0_0x0._s_0.Y;
  (this->ControlTarget).TargetAngularVelocity.field0_0x0._s_0.Z = dVar2;
  uVar13 = *(undefined7 *)&(param_1->ControlTarget).field_0x61;
  (this->ControlTarget).bApplyControlPointToTarget =
       (param_1->ControlTarget).bApplyControlPointToTarget;
  *(undefined7 *)&(this->ControlTarget).field_0x61 = uVar13;
  dVar2 = (param_1->PreviousSkeletalTargetTM).Translation.field0_0x0._s_0.Y;
  (this->PreviousSkeletalTargetTM).Translation.field0_0x0._s_0.X =
       (param_1->PreviousSkeletalTargetTM).Translation.field0_0x0._s_0.X;
  (this->PreviousSkeletalTargetTM).Translation.field0_0x0._s_0.Y = dVar2;
  lVar3 = (param_1->PreviousSkeletalTargetTM)._padding_;
  (this->PreviousSkeletalTargetTM).Translation.field0_0x0._s_0.Z =
       (param_1->PreviousSkeletalTargetTM).Translation.field0_0x0._s_0.Z;
  (this->PreviousSkeletalTargetTM)._padding_ = lVar3;
  dVar2 = (param_1->PreviousSkeletalTargetTM).Rotation.Y;
  (this->PreviousSkeletalTargetTM).Rotation.X = (param_1->PreviousSkeletalTargetTM).Rotation.X;
  (this->PreviousSkeletalTargetTM).Rotation.Y = dVar2;
  dVar2 = (param_1->PreviousSkeletalTargetTM).Rotation.W;
  (this->PreviousSkeletalTargetTM).Rotation.Z = (param_1->PreviousSkeletalTargetTM).Rotation.Z;
  (this->PreviousSkeletalTargetTM).Rotation.W = dVar2;
  sVar14 = (param_1->ExpectedUpdateCounter).Counter;
  sVar15 = (param_1->ExpectedUpdateCounter).SkipFrames;
  uVar8 = *(undefined4 *)&(param_1->ExpectedUpdateCounter).field_0xc;
  (this->ExpectedUpdateCounter).LastSyncronizedFrame =
       (param_1->ExpectedUpdateCounter).LastSyncronizedFrame;
  (this->ExpectedUpdateCounter).Counter = sVar14;
  (this->ExpectedUpdateCounter).SkipFrames = sVar15;
  *(undefined4 *)&(this->ExpectedUpdateCounter).field_0xc = uVar8;
  (this->ParentComponent).WeakPtr = (param_1->ParentComponent).WeakPtr;
  (this->ChildComponent).WeakPtr = (param_1->ChildComponent).WeakPtr;
  (this->ConstraintInstance).Object = (param_1->ConstraintInstance).Object;
  (this->ConstraintInstance).SharedReferenceCount.ReferenceController =
       (param_1->ConstraintInstance).SharedReferenceCount.ReferenceController;
  (param_1->ConstraintInstance).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (param_1->ConstraintInstance).Object = (FConstraintInstance *)0x0;
  return this;
}

// GetControlPoint @ 14d9dd9d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TVector<double> * __thiscall
FPhysicsControlRecord::GetControlPoint
          (FPhysicsControlRecord *this,TVector<double> *__return_storage_ptr__)

{
  FName FVar1;
  double dVar2;
  UPrimitiveComponent *pUVar3;
  FBodyInstance *this_00;
  TTransform<double> *pTVar4;
  undefined1 auStack_b8 [32];
  double local_98;
  double dStack_90;
  double local_88;
  TTransform<double> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  if ((this->PhysicsControl).ControlData.bUseCustomControlPoint == false) {
    FVar1 = (this->PhysicsControl).ChildBoneName;
    pUVar3 = (UPrimitiveComponent *)FWeakObjectPtr::Get(&(this->ChildComponent).WeakPtr);
    this_00 = UE::PhysicsControl::GetBodyInstance(pUVar3,FVar1);
    if (this_00 == (FBodyInstance *)0x0) {
      local_98 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_90 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_88 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    }
    else {
      pTVar4 = FBodyInstance::GetMassSpaceLocal(this_00,&local_78);
      local_98 = (pTVar4->Translation).XY.m128d_f64[0];
      dStack_90 = (pTVar4->Translation).XY.m128d_f64[1];
      local_88 = (pTVar4->Translation).ZW.m128d_f64[0];
    }
    (__return_storage_ptr__->field0_0x0)._s_0.X = local_98;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dStack_90;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = local_88;
  }
  else {
    dVar2 = (this->PhysicsControl).ControlData.CustomControlPoint.field0_0x0._s_0.Y;
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         (this->PhysicsControl).ControlData.CustomControlPoint.field0_0x0._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         (this->PhysicsControl).ControlData.CustomControlPoint.field0_0x0._s_0.Z;
  }
  return __return_storage_ptr__;
}

// InitConstraint @ 14d9df8f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FPhysicsControlRecord::InitConstraint
          (FPhysicsControlRecord *this,UObject *param_1,FName param_2,bool param_3)

{
  TSharedPtr<FConstraintInstance,1> *pTVar1;
  uchar uVar2;
  uchar uVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  FName FVar8;
  UObject *pUVar9;
  UClass *pUVar10;
  FName FVar11;
  FBodyInstance *pFVar12;
  undefined7 uVar13;
  FConstraintInstance *pFVar14;
  FName local_res18;
  char local_res20;
  short *local_d8;
  FName FStack_d0;
  undefined8 local_c8;
  TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy> local_c0;
  TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy> local_a8;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60 [2];
  
  pTVar1 = &this->ConstraintInstance;
  FVar11.ComparisonIndex.Value = 0;
  FVar11.Number = 0;
  local_res18 = param_2;
  local_res20 = param_3;
  if (pTVar1->Object == (FConstraintInstance *)0x0) {
    FVar8 = (FName)::operator_new(0x2b0);
    if (FVar8 == (FName)0x0) {
      local_d8 = ___xmm_00000000000000000000000000000010;
      pFVar14 = (FConstraintInstance *)&DAT_00000010;
      FStack_d0 = _UNK_150651568;
      FVar8 = FVar11;
    }
    else {
      *(undefined4 *)((longlong)FVar8 + 8) = 1;
      *(undefined4 *)((longlong)FVar8 + 0xc) = 1;
      *(undefined ***)FVar8 =
           &
           ___7__TIntrusiveReferenceController_UFConstraintInstance___00_SharedPointerInternals__6B_
      ;
      FConstraintInstance::FConstraintInstance((FConstraintInstance *)((longlong)FVar8 + 0x10));
      pFVar14 = (FConstraintInstance *)((longlong)FVar8 + 0x10);
      if ((pFVar14 == (FConstraintInstance *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      LOCK();
      *(int *)((longlong)FVar8 + 8) = *(int *)((longlong)FVar8 + 8) + 1;
      UNLOCK();
      FStack_d0 = FVar8;
      local_d8 = (short *)pFVar14;
    }
    if (pTVar1 != (TSharedPtr<FConstraintInstance,1> *)&local_d8) {
      pTVar1->Object = pFVar14;
      local_d8 = (short *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->ConstraintInstance).SharedReferenceCount,(FSharedReferencer<1> *)&FStack_d0
                );
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)FStack_d0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)FVar8);
    if ((pTVar1->Object == (FConstraintInstance *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ConstraintInstance.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\PhysicsControl\\Source\\PhysicsControl\\Private\\PhysicsControlRecord.cpp"
                           ,0x2a,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  FVar8 = (this->PhysicsControl).ParentBoneName;
  pUVar9 = FWeakObjectPtr::Get(&(this->ParentComponent).WeakPtr);
  if (pUVar9 != (UObject *)0x0) {
    pUVar10 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
    iVar4 = (int)pUVar10->_padding_;
    if ((iVar4 <= *(int *)(*(longlong *)&pUVar9->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar9->field_0x10 + 0x30) + (longlong)iVar4 * 8) ==
        &pUVar10->_padding_)) {
      FVar11 = FVar8;
    }
    FVar11 = (FName)(**(code **)(*(longlong *)pUVar9 + 0x818))
                              (pUVar9,FVar11,CONCAT71((int7)((ulonglong)&pUVar10->_padding_ >> 8),1)
                               ,0xffffffff);
  }
  FVar8 = (this->PhysicsControl).ChildBoneName;
  pUVar9 = FWeakObjectPtr::Get(&(this->ChildComponent).WeakPtr);
  if (pUVar9 == (UObject *)0x0) {
    pFVar12 = (FBodyInstance *)0x0;
  }
  else {
    pUVar10 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
    iVar4 = (int)pUVar10->_padding_;
    uVar13 = (undefined7)((ulonglong)&pUVar10->_padding_ >> 8);
    if ((*(int *)(*(longlong *)&pUVar9->field_0x10 + 0x38) < iVar4) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar9->field_0x10 + 0x30) + (longlong)iVar4 * 8) !=
        &pUVar10->_padding_)) {
      local_c8 = 0;
      pFVar12 = (FBodyInstance *)
                (**(code **)(*(longlong *)pUVar9 + 0x818))(pUVar9,0,CONCAT71(uVar13,1),0xffffffff);
    }
    else {
      pFVar12 = (FBodyInstance *)
                (**(code **)(*(longlong *)pUVar9 + 0x818))
                          (pUVar9,FVar8,CONCAT71(uVar13,1),0xffffffff);
    }
  }
  bVar6 = FWeakObjectPtr::IsValid(&(this->ParentComponent).WeakPtr);
  if (((bVar6) && ((this->PhysicsControl).ParentBoneName != (FName)0x0)) && (FVar11 == (FName)0x0))
  {
    if (local_res20 == '\0') {
      return false;
    }
    if ((byte)LogPhysicsControl._0_1_ < 3) {
      return false;
    }
    ::FName::ToString(&local_res18,&local_80);
    ::FName::ToString((FName *)this,&local_90);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPhysicsControl);
    local_60[0].Data.AllocatorInstance.Data = local_80.Data.AllocatorInstance.Data;
    if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data.AllocatorInstance.Data);
      local_60[0].Data.AllocatorInstance.Data = local_80.Data.AllocatorInstance.Data;
    }
  }
  else {
    bVar6 = FWeakObjectPtr::IsValid(&(this->ChildComponent).WeakPtr);
    if (((!bVar6) || ((this->PhysicsControl).ChildBoneName == (FName)0x0)) ||
       (pFVar12 != (FBodyInstance *)0x0)) {
      if ((pTVar1->Object == (FConstraintInstance *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      local_c0._16_8_ = 0;
      local_c0._0_8_ = 0;
      local_c0._8_8_ = 0;
      local_a8._16_8_ = 0;
      local_a8._0_8_ = 0;
      local_a8._8_8_ = 0;
      FConstraintInstance::InitConstraint
                (pTVar1->Object,pFVar12,(FBodyInstance *)FVar11,__real_3f800000,param_1,&local_a8,
                 &local_c0);
      if ((pTVar1->Object == (FConstraintInstance *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      FConstraintInstance::SetDisableCollision
                (pTVar1->Object,(this->PhysicsControl).ControlData.bDisableCollision);
      if ((pTVar1->Object == (FConstraintInstance *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      pFVar14 = pTVar1->Object;
      uVar2 = (pFVar14->ProfileInstance).LinearLimit.ZMotion.Value;
      uVar3 = (pFVar14->ProfileInstance).LinearLimit.YMotion.Value;
      (pFVar14->ProfileInstance).LinearLimit.Limit = (pFVar14->ProfileInstance).LinearLimit.Limit;
      (pFVar14->ProfileInstance).LinearLimit.YMotion.Value = uVar3;
      (pFVar14->ProfileInstance).LinearLimit.ZMotion.Value = uVar2;
      (pFVar14->ProfileInstance).LinearLimit.XMotion.Value = '\0';
      FConstraintInstance::UpdateLinearLimit(pFVar14);
      if ((pTVar1->Object == (FConstraintInstance *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      pFVar14 = pTVar1->Object;
      uVar2 = (pFVar14->ProfileInstance).LinearLimit.ZMotion.Value;
      uVar3 = (pFVar14->ProfileInstance).LinearLimit.XMotion.Value;
      (pFVar14->ProfileInstance).LinearLimit.Limit = (pFVar14->ProfileInstance).LinearLimit.Limit;
      (pFVar14->ProfileInstance).LinearLimit.XMotion.Value = uVar3;
      (pFVar14->ProfileInstance).LinearLimit.ZMotion.Value = uVar2;
      (pFVar14->ProfileInstance).LinearLimit.YMotion.Value = '\0';
      FConstraintInstance::UpdateLinearLimit(pFVar14);
      if ((pTVar1->Object == (FConstraintInstance *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      pFVar14 = pTVar1->Object;
      uVar2 = (pFVar14->ProfileInstance).LinearLimit.YMotion.Value;
      uVar3 = (pFVar14->ProfileInstance).LinearLimit.XMotion.Value;
      (pFVar14->ProfileInstance).LinearLimit.Limit = (pFVar14->ProfileInstance).LinearLimit.Limit;
      (pFVar14->ProfileInstance).LinearLimit.XMotion.Value = uVar3;
      (pFVar14->ProfileInstance).LinearLimit.YMotion.Value = uVar2;
      (pFVar14->ProfileInstance).LinearLimit.ZMotion.Value = '\0';
      FConstraintInstance::UpdateLinearLimit(pFVar14);
      if ((pTVar1->Object == (FConstraintInstance *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      pFVar14 = pTVar1->Object;
      (pFVar14->ProfileInstance).ConeLimit.Swing1Motion.Value = '\0';
      FConstraintInstance::UpdateAngularLimit(pFVar14);
      if ((pTVar1->Object == (FConstraintInstance *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      pFVar14 = pTVar1->Object;
      (pFVar14->ProfileInstance).ConeLimit.Swing2Motion.Value = '\0';
      FConstraintInstance::UpdateAngularLimit(pFVar14);
      if ((pTVar1->Object == (FConstraintInstance *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      pFVar14 = pTVar1->Object;
      (pFVar14->ProfileInstance).TwistLimit.TwistMotion.Value = '\0';
      FConstraintInstance::UpdateAngularLimit(pFVar14);
      if ((pTVar1->Object == (FConstraintInstance *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      FConstraintInstance::SetAngularDriveMode(pTVar1->Object,SLERP);
      if ((pTVar1->Object == (FConstraintInstance *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      FConstraintInstance::SetOrientationDriveSLERP(pTVar1->Object,true);
      if ((pTVar1->Object == (FConstraintInstance *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      FConstraintInstance::SetAngularVelocityDriveSLERP(pTVar1->Object,true);
      if ((pTVar1->Object == (FConstraintInstance *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      FConstraintInstance::SetLinearPositionDrive(pTVar1->Object,true,true,true);
      if ((pTVar1->Object == (FConstraintInstance *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      FConstraintInstance::SetLinearVelocityDrive(pTVar1->Object,true,true,true);
      UpdateConstraintControlPoint(this);
      return true;
    }
    if (local_res20 == '\0') {
      return false;
    }
    if ((byte)LogPhysicsControl._0_1_ < 3) {
      return false;
    }
    ::FName::ToString(&local_res18,local_60);
    ::FName::ToString(&(this->PhysicsControl).ChildBoneName,&local_70);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPhysicsControl);
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
  }
  if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
  }
  return false;
}

// ResetConstraint @ 14d9e8280

void __thiscall FPhysicsControlRecord::ResetConstraint(FPhysicsControlRecord *this)

{
  TSharedPtr<FConstraintInstance,1> *pTVar1;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  pTVar1 = &this->ConstraintInstance;
  if (pTVar1->Object != (FConstraintInstance *)0x0) {
    FConstraintInstance::TermConstraint(pTVar1->Object);
  }
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (pTVar1 != (TSharedPtr<FConstraintInstance,1> *)&local_18) {
    pTVar1->Object = (FConstraintInstance *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ConstraintInstance).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  return;
}

// ResetControlPoint @ 14d9e82e0

void __thiscall FPhysicsControlRecord::ResetControlPoint(FPhysicsControlRecord *this)

{
  (this->PhysicsControl).ControlData.bUseCustomControlPoint = false;
  UpdateConstraintControlPoint(this);
  return;
}

// UpdateConstraintControlPoint @ 14d9f0d50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FPhysicsControlRecord::UpdateConstraintControlPoint(FPhysicsControlRecord *this)

{
  FConstraintInstance *this_00;
  code *pcVar1;
  bool bVar2;
  TVector<double> *pTVar3;
  undefined1 auStack_b8 [32];
  TVector<double> local_98;
  TTransform<double> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  this_00 = (this->ConstraintInstance).Object;
  if (this_00 != (FConstraintInstance *)0x0) {
    FConstraintInstance::GetRefFrame(this_00,&local_78,Frame1);
    pTVar3 = GetControlPoint(this,&local_98);
    local_78.Translation.XY.m128d_f64[0] = (pTVar3->field0_0x0)._s_0.X;
    local_78.Translation.XY.m128d_f64[1] = (pTVar3->field0_0x0)._s_0.Y;
    local_78.Translation.ZW.m128d_f64[0] = (pTVar3->field0_0x0)._s_0.Z;
    local_78.Translation.ZW.m128d_f64[1] = 0.0;
    if ((this->ConstraintInstance).Object == (FConstraintInstance *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    FConstraintInstance::SetRefFrame((this->ConstraintInstance).Object,Frame1,&local_78);
  }
  return;
}

