// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// StaticClass @ 1482c8740

UClass * __cdecl UPhysicsConstraintTemplate::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPhysicsConstraintTemplate.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PhysicsConstraintTemplate",
               &Z_Registration_Info_UClass_UPhysicsConstraintTemplate.InnerSingleton,
               StaticRegisterNativesUPhysicsConstraintTemplate,0x438,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPhysicsConstraintTemplate>,
               InternalVTableHelperCtorCaller<UPhysicsConstraintTemplate>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPhysicsConstraintTemplate.InnerSingleton;
}

// UPhysicsConstraintTemplate @ 1482dbc30

UPhysicsConstraintTemplate * __thiscall
UPhysicsConstraintTemplate::UPhysicsConstraintTemplate
          (UPhysicsConstraintTemplate *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UPhysicsConstraintTemplate__6B_;
  FConstraintInstance::FConstraintInstance(&this->DefaultInstance);
  (this->ProfileHandles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ProfileHandles).ArrayNum = 0;
  (this->ProfileHandles).ArrayMax = 0;
  FConstraintProfileProperties::FConstraintProfileProperties(&this->DefaultProfile);
  return this;
}

// UPhysicsConstraintTemplate @ 1482dbc80

UPhysicsConstraintTemplate * __thiscall
UPhysicsConstraintTemplate::UPhysicsConstraintTemplate
          (UPhysicsConstraintTemplate *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UPhysicsConstraintTemplate__6B_;
  FConstraintInstance::FConstraintInstance(&this->DefaultInstance);
  (this->ProfileHandles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ProfileHandles).ArrayNum = 0;
  (this->ProfileHandles).ArrayMax = 0;
  FConstraintProfileProperties::FConstraintProfileProperties(&this->DefaultProfile);
  return this;
}

// ~UPhysicsConstraintTemplate @ 1482de200

void __thiscall
UPhysicsConstraintTemplate::~UPhysicsConstraintTemplate(UPhysicsConstraintTemplate *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UPhysicsConstraintTemplate__6B_;
  pFVar1 = (this->ProfileHandles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->DefaultInstance)._padding_);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->DefaultInstance)._padding_);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->DefaultInstance)._padding_);
  UObject::~UObject((UObject *)this);
  return;
}

// CopySetupPropsToInstance @ 1482f0ad0

void __thiscall
UPhysicsConstraintTemplate::CopySetupPropsToInstance
          (UPhysicsConstraintTemplate *this,FConstraintInstance *param_1)

{
  return;
}

// GetPrivateStaticClass @ 14830c650

UClass * __cdecl UPhysicsConstraintTemplate::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPhysicsConstraintTemplate.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PhysicsConstraintTemplate",
               &Z_Registration_Info_UClass_UPhysicsConstraintTemplate.InnerSingleton,
               StaticRegisterNativesUPhysicsConstraintTemplate,0x438,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPhysicsConstraintTemplate>,
               InternalVTableHelperCtorCaller<UPhysicsConstraintTemplate>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPhysicsConstraintTemplate.InnerSingleton;
}

// Serialize @ 148320540

void __thiscall
UPhysicsConstraintTemplate::Serialize(UPhysicsConstraintTemplate *this,FArchive *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  TEnumAsByte<EAngularConstraintMotion> TVar16;
  undefined3 uVar17;
  undefined4 uVar18;
  FConstraintProfileProperties *pFVar19;
  FConstraintProfileProperties *pFVar20;
  FConstraintProfileProperties *pFVar21;
  longlong lVar22;
  FConstraintProfileProperties *pFVar23;
  
  UObject::Serialize((UObject *)this,param_1);
  if ((param_1->field_0x28 & 1) != 0) {
    lVar22 = 2;
    pFVar19 = &(this->DefaultInstance).ProfileInstance;
    pFVar20 = &this->DefaultProfile;
    do {
      pFVar23 = pFVar20;
      pFVar21 = pFVar19;
      fVar8 = pFVar21->ProjectionAngularTolerance;
      fVar9 = pFVar21->ProjectionLinearAlpha;
      fVar10 = pFVar21->ProjectionAngularAlpha;
      fVar11 = pFVar21->ShockPropagationAlpha;
      fVar12 = pFVar21->LinearBreakThreshold;
      fVar13 = pFVar21->LinearPlasticityThreshold;
      fVar14 = pFVar21->AngularBreakThreshold;
      pFVar23->ProjectionLinearTolerance = pFVar21->ProjectionLinearTolerance;
      pFVar23->ProjectionAngularTolerance = fVar8;
      pFVar23->ProjectionLinearAlpha = fVar9;
      pFVar23->ProjectionAngularAlpha = fVar10;
      fVar8 = pFVar21->AngularPlasticityThreshold;
      fVar9 = pFVar21->ContactTransferScale;
      uVar1 = *(undefined8 *)&pFVar21->LinearLimit;
      pFVar23->ShockPropagationAlpha = fVar11;
      pFVar23->LinearBreakThreshold = fVar12;
      pFVar23->LinearPlasticityThreshold = fVar13;
      pFVar23->AngularBreakThreshold = fVar14;
      uVar2 = *(undefined8 *)&(pFVar21->LinearLimit).field_0x8;
      uVar15 = *(undefined4 *)&(pFVar21->LinearLimit).field_0x10;
      fVar10 = (pFVar21->LinearLimit).Limit;
      pFVar23->AngularPlasticityThreshold = fVar8;
      pFVar23->ContactTransferScale = fVar9;
      *(undefined8 *)&pFVar23->LinearLimit = uVar1;
      uVar1 = *(undefined8 *)&(pFVar21->LinearLimit).XMotion;
      uVar3 = *(undefined8 *)((longlong)&(pFVar21->ConeLimit)._padding_ + 4);
      *(undefined8 *)&(pFVar23->LinearLimit).field_0x8 = uVar2;
      *(undefined4 *)&(pFVar23->LinearLimit).field_0x10 = uVar15;
      (pFVar23->LinearLimit).Limit = fVar10;
      uVar2 = *(undefined8 *)((longlong)&(pFVar21->ConeLimit)._padding_ + 4);
      fVar8 = (pFVar21->ConeLimit).Swing1LimitDegrees;
      fVar9 = (pFVar21->ConeLimit).Swing2LimitDegrees;
      *(undefined8 *)&(pFVar23->LinearLimit).XMotion = uVar1;
      *(undefined8 *)((longlong)&(pFVar23->ConeLimit)._padding_ + 4) = uVar3;
      uVar1 = *(undefined8 *)&(pFVar21->ConeLimit).Swing1Motion;
      uVar3 = *(undefined8 *)&(pFVar21->TwistLimit).field_0x4;
      *(undefined8 *)((longlong)&(pFVar23->ConeLimit)._padding_ + 4) = uVar2;
      (pFVar23->ConeLimit).Swing1LimitDegrees = fVar8;
      (pFVar23->ConeLimit).Swing2LimitDegrees = fVar9;
      uVar2 = *(undefined8 *)&(pFVar21->TwistLimit).field_0xc;
      fVar8 = (pFVar21->TwistLimit).TwistLimitDegrees;
      TVar16.Value = (pFVar21->TwistLimit).TwistMotion.Value;
      uVar17 = *(undefined3 *)&(pFVar21->TwistLimit).field_0x19;
      *(undefined8 *)&(pFVar23->ConeLimit).Swing1Motion = uVar1;
      *(undefined8 *)&(pFVar23->TwistLimit).field_0x4 = uVar3;
      *(undefined8 *)&(pFVar23->TwistLimit).field_0xc = uVar2;
      (pFVar23->TwistLimit).TwistLimitDegrees = fVar8;
      (pFVar23->TwistLimit).TwistMotion = (TEnumAsByte<EAngularConstraintMotion>)TVar16.Value;
      *(undefined3 *)&(pFVar23->TwistLimit).field_0x19 = uVar17;
      lVar22 = lVar22 + -1;
      pFVar19 = (FConstraintProfileProperties *)&pFVar21->field_0x80;
      pFVar20 = (FConstraintProfileProperties *)&pFVar23->field_0x80;
    } while (lVar22 != 0);
    dVar4 = (pFVar21->LinearDrive).PositionTarget.field0_0x0._s_0.X;
    dVar5 = (pFVar21->LinearDrive).PositionTarget.field0_0x0._s_0.Y;
    dVar6 = (pFVar21->LinearDrive).PositionTarget.field0_0x0._s_0.Z;
    *(undefined8 *)&pFVar23->field_0x80 = *(undefined8 *)&pFVar21->field_0x80;
    (pFVar23->LinearDrive).PositionTarget.field0_0x0._s_0.X = dVar4;
    dVar4 = (pFVar21->LinearDrive).VelocityTarget.field0_0x0._s_0.X;
    dVar7 = (pFVar21->LinearDrive).VelocityTarget.field0_0x0._s_0.Y;
    (pFVar23->LinearDrive).PositionTarget.field0_0x0._s_0.Y = dVar5;
    (pFVar23->LinearDrive).PositionTarget.field0_0x0._s_0.Z = dVar6;
    dVar5 = (pFVar21->LinearDrive).VelocityTarget.field0_0x0._s_0.Z;
    fVar8 = (pFVar21->LinearDrive).XDrive.Stiffness;
    fVar9 = (pFVar21->LinearDrive).XDrive.Damping;
    (pFVar23->LinearDrive).VelocityTarget.field0_0x0._s_0.X = dVar4;
    (pFVar23->LinearDrive).VelocityTarget.field0_0x0._s_0.Y = dVar7;
    fVar10 = (pFVar21->LinearDrive).XDrive.MaxForce;
    uVar15 = *(undefined4 *)&(pFVar21->LinearDrive).XDrive.field_0xc;
    fVar11 = (pFVar21->LinearDrive).YDrive.Stiffness;
    fVar12 = (pFVar21->LinearDrive).YDrive.Damping;
    (pFVar23->LinearDrive).VelocityTarget.field0_0x0._s_0.Z = dVar5;
    (pFVar23->LinearDrive).XDrive.Stiffness = fVar8;
    (pFVar23->LinearDrive).XDrive.Damping = fVar9;
    fVar8 = (pFVar21->LinearDrive).YDrive.MaxForce;
    uVar18 = *(undefined4 *)&(pFVar21->LinearDrive).YDrive.field_0xc;
    fVar9 = (pFVar21->LinearDrive).ZDrive.Stiffness;
    fVar13 = (pFVar21->LinearDrive).ZDrive.Damping;
    (pFVar23->LinearDrive).XDrive.MaxForce = fVar10;
    *(undefined4 *)&(pFVar23->LinearDrive).XDrive.field_0xc = uVar15;
    (pFVar23->LinearDrive).YDrive.Stiffness = fVar11;
    (pFVar23->LinearDrive).YDrive.Damping = fVar12;
    (pFVar23->LinearDrive).YDrive.MaxForce = fVar8;
    *(undefined4 *)&(pFVar23->LinearDrive).YDrive.field_0xc = uVar18;
    (pFVar23->LinearDrive).ZDrive.Stiffness = fVar9;
    (pFVar23->LinearDrive).ZDrive.Damping = fVar13;
  }
  return;
}

// Serialize @ 148320610

void __thiscall
UPhysicsConstraintTemplate::Serialize
          (UPhysicsConstraintTemplate *this,FStructuredArchiveRecord param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  TEnumAsByte<EAngularConstraintMotion> TVar16;
  undefined3 uVar17;
  undefined4 uVar18;
  FConstraintProfileProperties *pFVar19;
  FConstraintProfileProperties *pFVar20;
  FArchive *pFVar21;
  FConstraintProfileProperties *pFVar22;
  longlong lVar23;
  FConstraintProfileProperties *pFVar24;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar21 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  UObject::Serialize((UObject *)this,pFVar21);
  if ((pFVar21->field_0x28 & 1) != 0) {
    lVar23 = 2;
    pFVar19 = &(this->DefaultInstance).ProfileInstance;
    pFVar20 = &this->DefaultProfile;
    do {
      pFVar24 = pFVar20;
      pFVar22 = pFVar19;
      fVar8 = pFVar22->ProjectionAngularTolerance;
      fVar9 = pFVar22->ProjectionLinearAlpha;
      fVar10 = pFVar22->ProjectionAngularAlpha;
      fVar11 = pFVar22->ShockPropagationAlpha;
      fVar12 = pFVar22->LinearBreakThreshold;
      fVar13 = pFVar22->LinearPlasticityThreshold;
      fVar14 = pFVar22->AngularBreakThreshold;
      pFVar24->ProjectionLinearTolerance = pFVar22->ProjectionLinearTolerance;
      pFVar24->ProjectionAngularTolerance = fVar8;
      pFVar24->ProjectionLinearAlpha = fVar9;
      pFVar24->ProjectionAngularAlpha = fVar10;
      fVar8 = pFVar22->AngularPlasticityThreshold;
      fVar9 = pFVar22->ContactTransferScale;
      uVar1 = *(undefined8 *)&pFVar22->LinearLimit;
      pFVar24->ShockPropagationAlpha = fVar11;
      pFVar24->LinearBreakThreshold = fVar12;
      pFVar24->LinearPlasticityThreshold = fVar13;
      pFVar24->AngularBreakThreshold = fVar14;
      uVar2 = *(undefined8 *)&(pFVar22->LinearLimit).field_0x8;
      uVar15 = *(undefined4 *)&(pFVar22->LinearLimit).field_0x10;
      fVar10 = (pFVar22->LinearLimit).Limit;
      pFVar24->AngularPlasticityThreshold = fVar8;
      pFVar24->ContactTransferScale = fVar9;
      *(undefined8 *)&pFVar24->LinearLimit = uVar1;
      uVar1 = *(undefined8 *)&(pFVar22->LinearLimit).XMotion;
      uVar3 = *(undefined8 *)((longlong)&(pFVar22->ConeLimit)._padding_ + 4);
      *(undefined8 *)&(pFVar24->LinearLimit).field_0x8 = uVar2;
      *(undefined4 *)&(pFVar24->LinearLimit).field_0x10 = uVar15;
      (pFVar24->LinearLimit).Limit = fVar10;
      uVar2 = *(undefined8 *)((longlong)&(pFVar22->ConeLimit)._padding_ + 4);
      fVar8 = (pFVar22->ConeLimit).Swing1LimitDegrees;
      fVar9 = (pFVar22->ConeLimit).Swing2LimitDegrees;
      *(undefined8 *)&(pFVar24->LinearLimit).XMotion = uVar1;
      *(undefined8 *)((longlong)&(pFVar24->ConeLimit)._padding_ + 4) = uVar3;
      uVar1 = *(undefined8 *)&(pFVar22->ConeLimit).Swing1Motion;
      uVar3 = *(undefined8 *)&(pFVar22->TwistLimit).field_0x4;
      *(undefined8 *)((longlong)&(pFVar24->ConeLimit)._padding_ + 4) = uVar2;
      (pFVar24->ConeLimit).Swing1LimitDegrees = fVar8;
      (pFVar24->ConeLimit).Swing2LimitDegrees = fVar9;
      uVar2 = *(undefined8 *)&(pFVar22->TwistLimit).field_0xc;
      fVar8 = (pFVar22->TwistLimit).TwistLimitDegrees;
      TVar16.Value = (pFVar22->TwistLimit).TwistMotion.Value;
      uVar17 = *(undefined3 *)&(pFVar22->TwistLimit).field_0x19;
      *(undefined8 *)&(pFVar24->ConeLimit).Swing1Motion = uVar1;
      *(undefined8 *)&(pFVar24->TwistLimit).field_0x4 = uVar3;
      *(undefined8 *)&(pFVar24->TwistLimit).field_0xc = uVar2;
      (pFVar24->TwistLimit).TwistLimitDegrees = fVar8;
      (pFVar24->TwistLimit).TwistMotion = (TEnumAsByte<EAngularConstraintMotion>)TVar16.Value;
      *(undefined3 *)&(pFVar24->TwistLimit).field_0x19 = uVar17;
      lVar23 = lVar23 + -1;
      pFVar19 = (FConstraintProfileProperties *)&pFVar22->field_0x80;
      pFVar20 = (FConstraintProfileProperties *)&pFVar24->field_0x80;
    } while (lVar23 != 0);
    dVar4 = (pFVar22->LinearDrive).PositionTarget.field0_0x0._s_0.X;
    dVar5 = (pFVar22->LinearDrive).PositionTarget.field0_0x0._s_0.Y;
    dVar6 = (pFVar22->LinearDrive).PositionTarget.field0_0x0._s_0.Z;
    *(undefined8 *)&pFVar24->field_0x80 = *(undefined8 *)&pFVar22->field_0x80;
    (pFVar24->LinearDrive).PositionTarget.field0_0x0._s_0.X = dVar4;
    dVar4 = (pFVar22->LinearDrive).VelocityTarget.field0_0x0._s_0.X;
    dVar7 = (pFVar22->LinearDrive).VelocityTarget.field0_0x0._s_0.Y;
    (pFVar24->LinearDrive).PositionTarget.field0_0x0._s_0.Y = dVar5;
    (pFVar24->LinearDrive).PositionTarget.field0_0x0._s_0.Z = dVar6;
    dVar5 = (pFVar22->LinearDrive).VelocityTarget.field0_0x0._s_0.Z;
    fVar8 = (pFVar22->LinearDrive).XDrive.Stiffness;
    fVar9 = (pFVar22->LinearDrive).XDrive.Damping;
    (pFVar24->LinearDrive).VelocityTarget.field0_0x0._s_0.X = dVar4;
    (pFVar24->LinearDrive).VelocityTarget.field0_0x0._s_0.Y = dVar7;
    fVar10 = (pFVar22->LinearDrive).XDrive.MaxForce;
    uVar15 = *(undefined4 *)&(pFVar22->LinearDrive).XDrive.field_0xc;
    fVar11 = (pFVar22->LinearDrive).YDrive.Stiffness;
    fVar12 = (pFVar22->LinearDrive).YDrive.Damping;
    (pFVar24->LinearDrive).VelocityTarget.field0_0x0._s_0.Z = dVar5;
    (pFVar24->LinearDrive).XDrive.Stiffness = fVar8;
    (pFVar24->LinearDrive).XDrive.Damping = fVar9;
    fVar8 = (pFVar22->LinearDrive).YDrive.MaxForce;
    uVar18 = *(undefined4 *)&(pFVar22->LinearDrive).YDrive.field_0xc;
    fVar9 = (pFVar22->LinearDrive).ZDrive.Stiffness;
    fVar13 = (pFVar22->LinearDrive).ZDrive.Damping;
    (pFVar24->LinearDrive).XDrive.MaxForce = fVar10;
    *(undefined4 *)&(pFVar24->LinearDrive).XDrive.field_0xc = uVar15;
    (pFVar24->LinearDrive).YDrive.Stiffness = fVar11;
    (pFVar24->LinearDrive).YDrive.Damping = fVar12;
    (pFVar24->LinearDrive).YDrive.MaxForce = fVar8;
    *(undefined4 *)&(pFVar24->LinearDrive).YDrive.field_0xc = uVar18;
    (pFVar24->LinearDrive).ZDrive.Stiffness = fVar9;
    (pFVar24->LinearDrive).ZDrive.Damping = fVar13;
  }
  return;
}

// StaticRegisterNativesUPhysicsConstraintTemplate @ 148323b90

void __cdecl UPhysicsConstraintTemplate::StaticRegisterNativesUPhysicsConstraintTemplate(void)

{
  return;
}

