// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PhysicsControl
// Functions: 4

// StaticStruct @ 14d9af6b0

UScriptStruct * __cdecl FPhysicsControlCharacterSetupData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPhysicsControlCharacterSetupData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PhysicsControl();
    Z_Registration_Info_UScriptStruct_FPhysicsControlCharacterSetupData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPhysicsControlCharacterSetupData,
                         (UObject *)pUVar1,L"PhysicsControlCharacterSetupData");
  }
  return Z_Registration_Info_UScriptStruct_FPhysicsControlCharacterSetupData.OuterSingleton;
}

// FPhysicsControlCharacterSetupData @ 14d9bf290

FPhysicsControlCharacterSetupData * __thiscall
FPhysicsControlCharacterSetupData::FPhysicsControlCharacterSetupData
          (FPhysicsControlCharacterSetupData *this)

{
  undefined8 uVar1;
  
  (this->DefaultWorldSpaceControlData).bEnabled = true;
  (this->LimbSetupData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LimbSetupData).ArrayNum = 0;
  (this->LimbSetupData).ArrayMax = 0;
  (this->DefaultWorldSpaceControlData).LinearStrength = 0.0;
  (this->DefaultWorldSpaceControlData).MaxForce = 0.0;
  (this->DefaultWorldSpaceControlData).AngularStrength = 0.0;
  (this->DefaultWorldSpaceControlData).MaxTorque = 0.0;
  (this->DefaultWorldSpaceControlData).LinearDampingRatio = 1.0;
  (this->DefaultWorldSpaceControlData).LinearExtraDamping = 0.0;
  (this->DefaultWorldSpaceControlData).AngularDampingRatio = 1.0;
  (this->DefaultWorldSpaceControlData).AngularExtraDamping = 0.0;
  (this->DefaultWorldSpaceControlData).LinearTargetVelocityMultiplier = 1.0;
  (this->DefaultWorldSpaceControlData).AngularTargetVelocityMultiplier = 1.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->DefaultWorldSpaceControlData).CustomControlPoint.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->DefaultWorldSpaceControlData).CustomControlPoint.field0_0x0._s_0.Y = (double)uVar1;
  (this->DefaultWorldSpaceControlData).CustomControlPoint.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->DefaultWorldSpaceControlData).bUseCustomControlPoint = false;
  (this->DefaultWorldSpaceControlData).bUseSkeletalAnimation = true;
  (this->DefaultWorldSpaceControlData).bDisableCollision = false;
  (this->DefaultWorldSpaceControlData).bOnlyControlChildObject = false;
  (this->DefaultParentSpaceControlData).LinearStrength = 0.0;
  (this->DefaultParentSpaceControlData).MaxForce = 0.0;
  (this->DefaultParentSpaceControlData).AngularStrength = 0.0;
  (this->DefaultParentSpaceControlData).MaxTorque = 0.0;
  (this->DefaultParentSpaceControlData).bEnabled = true;
  (this->DefaultParentSpaceControlData).LinearDampingRatio = 1.0;
  (this->DefaultParentSpaceControlData).LinearExtraDamping = 0.0;
  (this->DefaultParentSpaceControlData).AngularDampingRatio = 1.0;
  (this->DefaultParentSpaceControlData).AngularExtraDamping = 0.0;
  (this->DefaultParentSpaceControlData).LinearTargetVelocityMultiplier = 1.0;
  (this->DefaultParentSpaceControlData).AngularTargetVelocityMultiplier = 1.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->DefaultParentSpaceControlData).CustomControlPoint.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->DefaultParentSpaceControlData).CustomControlPoint.field0_0x0._s_0.Y = (double)uVar1;
  (this->DefaultParentSpaceControlData).CustomControlPoint.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->DefaultParentSpaceControlData).bUseCustomControlPoint = false;
  (this->DefaultParentSpaceControlData).bUseSkeletalAnimation = true;
  (this->DefaultParentSpaceControlData).bDisableCollision = false;
  (this->DefaultParentSpaceControlData).bOnlyControlChildObject = false;
  (this->DefaultBodyModifierData).MovementType = Simulated;
  (this->DefaultBodyModifierData).CollisionType = '\x03';
  (this->DefaultBodyModifierData).KinematicTargetSpace = OffsetInBoneSpace;
  (this->DefaultBodyModifierData).GravityMultiplier = 1.0;
  (this->DefaultBodyModifierData).PhysicsBlendWeight = 1.0;
  (this->DefaultBodyModifierData).bUpdateKinematicFromSimulation = true;
  return this;
}

// operator= @ 14d9c3110

FPhysicsControlCharacterSetupData * __thiscall
FPhysicsControlCharacterSetupData::operator=
          (FPhysicsControlCharacterSetupData *this,FPhysicsControlCharacterSetupData *param_1)

{
  double dVar1;
  undefined3 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  TEnumAsByte<ECollisionEnabled::Type> TVar11;
  EPhysicsControlKinematicTargetSpace EVar12;
  undefined1 uVar13;
  
  TArray<FPhysicsControlLimbSetupData,TSizedDefaultAllocator<32>_>::operator=
            (&this->LimbSetupData,&param_1->LimbSetupData);
  uVar2 = *(undefined3 *)&(param_1->DefaultWorldSpaceControlData).field_0x1;
  fVar3 = (param_1->DefaultWorldSpaceControlData).LinearStrength;
  fVar4 = (param_1->DefaultWorldSpaceControlData).LinearDampingRatio;
  fVar5 = (param_1->DefaultWorldSpaceControlData).LinearExtraDamping;
  (this->DefaultWorldSpaceControlData).bEnabled = (param_1->DefaultWorldSpaceControlData).bEnabled;
  *(undefined3 *)&(this->DefaultWorldSpaceControlData).field_0x1 = uVar2;
  (this->DefaultWorldSpaceControlData).LinearStrength = fVar3;
  (this->DefaultWorldSpaceControlData).LinearDampingRatio = fVar4;
  (this->DefaultWorldSpaceControlData).LinearExtraDamping = fVar5;
  fVar3 = (param_1->DefaultWorldSpaceControlData).AngularStrength;
  fVar4 = (param_1->DefaultWorldSpaceControlData).AngularDampingRatio;
  fVar5 = (param_1->DefaultWorldSpaceControlData).AngularExtraDamping;
  (this->DefaultWorldSpaceControlData).MaxForce = (param_1->DefaultWorldSpaceControlData).MaxForce;
  (this->DefaultWorldSpaceControlData).AngularStrength = fVar3;
  (this->DefaultWorldSpaceControlData).AngularDampingRatio = fVar4;
  (this->DefaultWorldSpaceControlData).AngularExtraDamping = fVar5;
  fVar3 = (param_1->DefaultWorldSpaceControlData).LinearTargetVelocityMultiplier;
  fVar4 = (param_1->DefaultWorldSpaceControlData).AngularTargetVelocityMultiplier;
  uVar6 = *(undefined4 *)&(param_1->DefaultWorldSpaceControlData).field_0x2c;
  (this->DefaultWorldSpaceControlData).MaxTorque = (param_1->DefaultWorldSpaceControlData).MaxTorque
  ;
  (this->DefaultWorldSpaceControlData).LinearTargetVelocityMultiplier = fVar3;
  (this->DefaultWorldSpaceControlData).AngularTargetVelocityMultiplier = fVar4;
  *(undefined4 *)&(this->DefaultWorldSpaceControlData).field_0x2c = uVar6;
  dVar1 = (param_1->DefaultWorldSpaceControlData).CustomControlPoint.field0_0x0._s_0.Y;
  (this->DefaultWorldSpaceControlData).CustomControlPoint.field0_0x0._s_0.X =
       (param_1->DefaultWorldSpaceControlData).CustomControlPoint.field0_0x0._s_0.X;
  (this->DefaultWorldSpaceControlData).CustomControlPoint.field0_0x0._s_0.Y = dVar1;
  bVar7 = (param_1->DefaultWorldSpaceControlData).bUseCustomControlPoint;
  bVar8 = (param_1->DefaultWorldSpaceControlData).bUseSkeletalAnimation;
  bVar9 = (param_1->DefaultWorldSpaceControlData).bDisableCollision;
  bVar10 = (param_1->DefaultWorldSpaceControlData).bOnlyControlChildObject;
  uVar6 = *(undefined4 *)&(param_1->DefaultWorldSpaceControlData).field_0x4c;
  (this->DefaultWorldSpaceControlData).CustomControlPoint.field0_0x0._s_0.Z =
       (param_1->DefaultWorldSpaceControlData).CustomControlPoint.field0_0x0._s_0.Z;
  (this->DefaultWorldSpaceControlData).bUseCustomControlPoint = bVar7;
  (this->DefaultWorldSpaceControlData).bUseSkeletalAnimation = bVar8;
  (this->DefaultWorldSpaceControlData).bDisableCollision = bVar9;
  (this->DefaultWorldSpaceControlData).bOnlyControlChildObject = bVar10;
  *(undefined4 *)&(this->DefaultWorldSpaceControlData).field_0x4c = uVar6;
  uVar2 = *(undefined3 *)&(param_1->DefaultParentSpaceControlData).field_0x1;
  fVar3 = (param_1->DefaultParentSpaceControlData).LinearStrength;
  fVar4 = (param_1->DefaultParentSpaceControlData).LinearDampingRatio;
  fVar5 = (param_1->DefaultParentSpaceControlData).LinearExtraDamping;
  (this->DefaultParentSpaceControlData).bEnabled = (param_1->DefaultParentSpaceControlData).bEnabled
  ;
  *(undefined3 *)&(this->DefaultParentSpaceControlData).field_0x1 = uVar2;
  (this->DefaultParentSpaceControlData).LinearStrength = fVar3;
  (this->DefaultParentSpaceControlData).LinearDampingRatio = fVar4;
  (this->DefaultParentSpaceControlData).LinearExtraDamping = fVar5;
  fVar3 = (param_1->DefaultParentSpaceControlData).AngularStrength;
  fVar4 = (param_1->DefaultParentSpaceControlData).AngularDampingRatio;
  fVar5 = (param_1->DefaultParentSpaceControlData).AngularExtraDamping;
  (this->DefaultParentSpaceControlData).MaxForce = (param_1->DefaultParentSpaceControlData).MaxForce
  ;
  (this->DefaultParentSpaceControlData).AngularStrength = fVar3;
  (this->DefaultParentSpaceControlData).AngularDampingRatio = fVar4;
  (this->DefaultParentSpaceControlData).AngularExtraDamping = fVar5;
  fVar3 = (param_1->DefaultParentSpaceControlData).LinearTargetVelocityMultiplier;
  fVar4 = (param_1->DefaultParentSpaceControlData).AngularTargetVelocityMultiplier;
  uVar6 = *(undefined4 *)&(param_1->DefaultParentSpaceControlData).field_0x2c;
  (this->DefaultParentSpaceControlData).MaxTorque =
       (param_1->DefaultParentSpaceControlData).MaxTorque;
  (this->DefaultParentSpaceControlData).LinearTargetVelocityMultiplier = fVar3;
  (this->DefaultParentSpaceControlData).AngularTargetVelocityMultiplier = fVar4;
  *(undefined4 *)&(this->DefaultParentSpaceControlData).field_0x2c = uVar6;
  dVar1 = (param_1->DefaultParentSpaceControlData).CustomControlPoint.field0_0x0._s_0.Y;
  (this->DefaultParentSpaceControlData).CustomControlPoint.field0_0x0._s_0.X =
       (param_1->DefaultParentSpaceControlData).CustomControlPoint.field0_0x0._s_0.X;
  (this->DefaultParentSpaceControlData).CustomControlPoint.field0_0x0._s_0.Y = dVar1;
  bVar7 = (param_1->DefaultParentSpaceControlData).bUseCustomControlPoint;
  bVar8 = (param_1->DefaultParentSpaceControlData).bUseSkeletalAnimation;
  bVar9 = (param_1->DefaultParentSpaceControlData).bDisableCollision;
  bVar10 = (param_1->DefaultParentSpaceControlData).bOnlyControlChildObject;
  uVar6 = *(undefined4 *)&(param_1->DefaultParentSpaceControlData).field_0x4c;
  (this->DefaultParentSpaceControlData).CustomControlPoint.field0_0x0._s_0.Z =
       (param_1->DefaultParentSpaceControlData).CustomControlPoint.field0_0x0._s_0.Z;
  (this->DefaultParentSpaceControlData).bUseCustomControlPoint = bVar7;
  (this->DefaultParentSpaceControlData).bUseSkeletalAnimation = bVar8;
  (this->DefaultParentSpaceControlData).bDisableCollision = bVar9;
  (this->DefaultParentSpaceControlData).bOnlyControlChildObject = bVar10;
  *(undefined4 *)&(this->DefaultParentSpaceControlData).field_0x4c = uVar6;
  TVar11.Value = (param_1->DefaultBodyModifierData).CollisionType.Value;
  EVar12 = (param_1->DefaultBodyModifierData).KinematicTargetSpace;
  uVar13 = (param_1->DefaultBodyModifierData).field_0x3;
  fVar3 = (param_1->DefaultBodyModifierData).GravityMultiplier;
  fVar4 = (param_1->DefaultBodyModifierData).PhysicsBlendWeight;
  bVar7 = (param_1->DefaultBodyModifierData).bUpdateKinematicFromSimulation;
  uVar2 = *(undefined3 *)&(param_1->DefaultBodyModifierData).field_0xd;
  (this->DefaultBodyModifierData).MovementType = (param_1->DefaultBodyModifierData).MovementType;
  (this->DefaultBodyModifierData).CollisionType = (TEnumAsByte<ECollisionEnabled::Type>)TVar11.Value
  ;
  (this->DefaultBodyModifierData).KinematicTargetSpace = EVar12;
  (this->DefaultBodyModifierData).field_0x3 = uVar13;
  (this->DefaultBodyModifierData).GravityMultiplier = fVar3;
  (this->DefaultBodyModifierData).PhysicsBlendWeight = fVar4;
  (this->DefaultBodyModifierData).bUpdateKinematicFromSimulation = bVar7;
  *(undefined3 *)&(this->DefaultBodyModifierData).field_0xd = uVar2;
  return this;
}

// operator+= @ 14d9c4ed0

FPhysicsControlCharacterSetupData * __thiscall
FPhysicsControlCharacterSetupData::operator+=
          (FPhysicsControlCharacterSetupData *this,FPhysicsControlCharacterSetupData *param_1)

{
  int iVar1;
  code *pcVar2;
  double dVar3;
  undefined3 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  TEnumAsByte<ECollisionEnabled::Type> TVar12;
  EPhysicsControlKinematicTargetSpace EVar13;
  undefined1 uVar14;
  bool bVar15;
  int iVar16;
  FPhysicsControlCharacterSetupData *pFVar17;
  
  if (this == param_1) {
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("(void*)this != (void*)&Source",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x96e,L"");
    if (bVar15) {
      pcVar2 = (code *)swi(3);
      pFVar17 = (FPhysicsControlCharacterSetupData *)(*pcVar2)();
      return pFVar17;
    }
  }
  iVar1 = (param_1->LimbSetupData).ArrayNum;
  if (iVar1 != 0) {
    iVar16 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x14,4,iVar1,(ForAnyElementType *)this,&(this->LimbSetupData).ArrayNum,
                        &(this->LimbSetupData).ArrayMax);
    memcpy((this->LimbSetupData).AllocatorInstance.Data + (longlong)iVar16 * 0x14,
           (param_1->LimbSetupData).AllocatorInstance.Data,(longlong)iVar1 * 0x14);
  }
  uVar4 = *(undefined3 *)&(param_1->DefaultWorldSpaceControlData).field_0x1;
  fVar5 = (param_1->DefaultWorldSpaceControlData).LinearStrength;
  fVar6 = (param_1->DefaultWorldSpaceControlData).LinearDampingRatio;
  fVar7 = (param_1->DefaultWorldSpaceControlData).LinearExtraDamping;
  (this->DefaultWorldSpaceControlData).bEnabled = (param_1->DefaultWorldSpaceControlData).bEnabled;
  *(undefined3 *)&(this->DefaultWorldSpaceControlData).field_0x1 = uVar4;
  (this->DefaultWorldSpaceControlData).LinearStrength = fVar5;
  (this->DefaultWorldSpaceControlData).LinearDampingRatio = fVar6;
  (this->DefaultWorldSpaceControlData).LinearExtraDamping = fVar7;
  fVar5 = (param_1->DefaultWorldSpaceControlData).AngularStrength;
  fVar6 = (param_1->DefaultWorldSpaceControlData).AngularDampingRatio;
  fVar7 = (param_1->DefaultWorldSpaceControlData).AngularExtraDamping;
  (this->DefaultWorldSpaceControlData).MaxForce = (param_1->DefaultWorldSpaceControlData).MaxForce;
  (this->DefaultWorldSpaceControlData).AngularStrength = fVar5;
  (this->DefaultWorldSpaceControlData).AngularDampingRatio = fVar6;
  (this->DefaultWorldSpaceControlData).AngularExtraDamping = fVar7;
  fVar5 = (param_1->DefaultWorldSpaceControlData).LinearTargetVelocityMultiplier;
  fVar6 = (param_1->DefaultWorldSpaceControlData).AngularTargetVelocityMultiplier;
  uVar8 = *(undefined4 *)&(param_1->DefaultWorldSpaceControlData).field_0x2c;
  (this->DefaultWorldSpaceControlData).MaxTorque = (param_1->DefaultWorldSpaceControlData).MaxTorque
  ;
  (this->DefaultWorldSpaceControlData).LinearTargetVelocityMultiplier = fVar5;
  (this->DefaultWorldSpaceControlData).AngularTargetVelocityMultiplier = fVar6;
  *(undefined4 *)&(this->DefaultWorldSpaceControlData).field_0x2c = uVar8;
  dVar3 = (param_1->DefaultWorldSpaceControlData).CustomControlPoint.field0_0x0._s_0.Y;
  (this->DefaultWorldSpaceControlData).CustomControlPoint.field0_0x0._s_0.X =
       (param_1->DefaultWorldSpaceControlData).CustomControlPoint.field0_0x0._s_0.X;
  (this->DefaultWorldSpaceControlData).CustomControlPoint.field0_0x0._s_0.Y = dVar3;
  bVar15 = (param_1->DefaultWorldSpaceControlData).bUseCustomControlPoint;
  bVar9 = (param_1->DefaultWorldSpaceControlData).bUseSkeletalAnimation;
  bVar10 = (param_1->DefaultWorldSpaceControlData).bDisableCollision;
  bVar11 = (param_1->DefaultWorldSpaceControlData).bOnlyControlChildObject;
  uVar8 = *(undefined4 *)&(param_1->DefaultWorldSpaceControlData).field_0x4c;
  (this->DefaultWorldSpaceControlData).CustomControlPoint.field0_0x0._s_0.Z =
       (param_1->DefaultWorldSpaceControlData).CustomControlPoint.field0_0x0._s_0.Z;
  (this->DefaultWorldSpaceControlData).bUseCustomControlPoint = bVar15;
  (this->DefaultWorldSpaceControlData).bUseSkeletalAnimation = bVar9;
  (this->DefaultWorldSpaceControlData).bDisableCollision = bVar10;
  (this->DefaultWorldSpaceControlData).bOnlyControlChildObject = bVar11;
  *(undefined4 *)&(this->DefaultWorldSpaceControlData).field_0x4c = uVar8;
  uVar4 = *(undefined3 *)&(param_1->DefaultParentSpaceControlData).field_0x1;
  fVar5 = (param_1->DefaultParentSpaceControlData).LinearStrength;
  fVar6 = (param_1->DefaultParentSpaceControlData).LinearDampingRatio;
  fVar7 = (param_1->DefaultParentSpaceControlData).LinearExtraDamping;
  (this->DefaultParentSpaceControlData).bEnabled = (param_1->DefaultParentSpaceControlData).bEnabled
  ;
  *(undefined3 *)&(this->DefaultParentSpaceControlData).field_0x1 = uVar4;
  (this->DefaultParentSpaceControlData).LinearStrength = fVar5;
  (this->DefaultParentSpaceControlData).LinearDampingRatio = fVar6;
  (this->DefaultParentSpaceControlData).LinearExtraDamping = fVar7;
  fVar5 = (param_1->DefaultParentSpaceControlData).AngularStrength;
  fVar6 = (param_1->DefaultParentSpaceControlData).AngularDampingRatio;
  fVar7 = (param_1->DefaultParentSpaceControlData).AngularExtraDamping;
  (this->DefaultParentSpaceControlData).MaxForce = (param_1->DefaultParentSpaceControlData).MaxForce
  ;
  (this->DefaultParentSpaceControlData).AngularStrength = fVar5;
  (this->DefaultParentSpaceControlData).AngularDampingRatio = fVar6;
  (this->DefaultParentSpaceControlData).AngularExtraDamping = fVar7;
  fVar5 = (param_1->DefaultParentSpaceControlData).LinearTargetVelocityMultiplier;
  fVar6 = (param_1->DefaultParentSpaceControlData).AngularTargetVelocityMultiplier;
  uVar8 = *(undefined4 *)&(param_1->DefaultParentSpaceControlData).field_0x2c;
  (this->DefaultParentSpaceControlData).MaxTorque =
       (param_1->DefaultParentSpaceControlData).MaxTorque;
  (this->DefaultParentSpaceControlData).LinearTargetVelocityMultiplier = fVar5;
  (this->DefaultParentSpaceControlData).AngularTargetVelocityMultiplier = fVar6;
  *(undefined4 *)&(this->DefaultParentSpaceControlData).field_0x2c = uVar8;
  dVar3 = (param_1->DefaultParentSpaceControlData).CustomControlPoint.field0_0x0._s_0.Y;
  (this->DefaultParentSpaceControlData).CustomControlPoint.field0_0x0._s_0.X =
       (param_1->DefaultParentSpaceControlData).CustomControlPoint.field0_0x0._s_0.X;
  (this->DefaultParentSpaceControlData).CustomControlPoint.field0_0x0._s_0.Y = dVar3;
  bVar15 = (param_1->DefaultParentSpaceControlData).bUseCustomControlPoint;
  bVar9 = (param_1->DefaultParentSpaceControlData).bUseSkeletalAnimation;
  bVar10 = (param_1->DefaultParentSpaceControlData).bDisableCollision;
  bVar11 = (param_1->DefaultParentSpaceControlData).bOnlyControlChildObject;
  uVar8 = *(undefined4 *)&(param_1->DefaultParentSpaceControlData).field_0x4c;
  (this->DefaultParentSpaceControlData).CustomControlPoint.field0_0x0._s_0.Z =
       (param_1->DefaultParentSpaceControlData).CustomControlPoint.field0_0x0._s_0.Z;
  (this->DefaultParentSpaceControlData).bUseCustomControlPoint = bVar15;
  (this->DefaultParentSpaceControlData).bUseSkeletalAnimation = bVar9;
  (this->DefaultParentSpaceControlData).bDisableCollision = bVar10;
  (this->DefaultParentSpaceControlData).bOnlyControlChildObject = bVar11;
  *(undefined4 *)&(this->DefaultParentSpaceControlData).field_0x4c = uVar8;
  TVar12.Value = (param_1->DefaultBodyModifierData).CollisionType.Value;
  EVar13 = (param_1->DefaultBodyModifierData).KinematicTargetSpace;
  uVar14 = (param_1->DefaultBodyModifierData).field_0x3;
  fVar5 = (param_1->DefaultBodyModifierData).GravityMultiplier;
  fVar6 = (param_1->DefaultBodyModifierData).PhysicsBlendWeight;
  bVar15 = (param_1->DefaultBodyModifierData).bUpdateKinematicFromSimulation;
  uVar4 = *(undefined3 *)&(param_1->DefaultBodyModifierData).field_0xd;
  (this->DefaultBodyModifierData).MovementType = (param_1->DefaultBodyModifierData).MovementType;
  (this->DefaultBodyModifierData).CollisionType = (TEnumAsByte<ECollisionEnabled::Type>)TVar12.Value
  ;
  (this->DefaultBodyModifierData).KinematicTargetSpace = EVar13;
  (this->DefaultBodyModifierData).field_0x3 = uVar14;
  (this->DefaultBodyModifierData).GravityMultiplier = fVar5;
  (this->DefaultBodyModifierData).PhysicsBlendWeight = fVar6;
  (this->DefaultBodyModifierData).bUpdateKinematicFromSimulation = bVar15;
  *(undefined3 *)&(this->DefaultBodyModifierData).field_0xd = uVar4;
  return this;
}

