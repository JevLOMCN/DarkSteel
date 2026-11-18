// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PhysicsControl
// Functions: 3

// StaticStruct @ 14d9b14c0

UScriptStruct * __cdecl FPhysicsControlCreationData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPhysicsControlCreationData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PhysicsControl();
    Z_Registration_Info_UScriptStruct_FPhysicsControlCreationData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPhysicsControlCreationData,(UObject *)pUVar1,
                         L"PhysicsControlCreationData");
  }
  return Z_Registration_Info_UScriptStruct_FPhysicsControlCreationData.OuterSingleton;
}

// FPhysicsControlCreationData @ 14d9bf380

FPhysicsControlCreationData * __thiscall
FPhysicsControlCreationData::FPhysicsControlCreationData
          (FPhysicsControlCreationData *this,FPhysicsControlCreationData *param_1)

{
  int *piVar1;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  FName FVar4;
  double dVar5;
  undefined3 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  
  FVar4 = (param_1->Control).ChildBoneName;
  pTVar2 = &this->Sets;
  (this->Control).ParentBoneName = (param_1->Control).ParentBoneName;
  (this->Control).ChildBoneName = FVar4;
  piVar1 = &(this->Sets).ArrayMax;
  uVar6 = *(undefined3 *)&(param_1->Control).ControlData.field_0x1;
  fVar7 = (param_1->Control).ControlData.LinearStrength;
  fVar8 = (param_1->Control).ControlData.LinearDampingRatio;
  fVar9 = (param_1->Control).ControlData.LinearExtraDamping;
  (this->Control).ControlData.bEnabled = (param_1->Control).ControlData.bEnabled;
  *(undefined3 *)&(this->Control).ControlData.field_0x1 = uVar6;
  (this->Control).ControlData.LinearStrength = fVar7;
  (this->Control).ControlData.LinearDampingRatio = fVar8;
  (this->Control).ControlData.LinearExtraDamping = fVar9;
  fVar7 = (param_1->Control).ControlData.AngularStrength;
  fVar8 = (param_1->Control).ControlData.AngularDampingRatio;
  fVar9 = (param_1->Control).ControlData.AngularExtraDamping;
  (this->Control).ControlData.MaxForce = (param_1->Control).ControlData.MaxForce;
  (this->Control).ControlData.AngularStrength = fVar7;
  (this->Control).ControlData.AngularDampingRatio = fVar8;
  (this->Control).ControlData.AngularExtraDamping = fVar9;
  fVar7 = (param_1->Control).ControlData.LinearTargetVelocityMultiplier;
  fVar8 = (param_1->Control).ControlData.AngularTargetVelocityMultiplier;
  uVar10 = *(undefined4 *)&(param_1->Control).ControlData.field_0x2c;
  (this->Control).ControlData.MaxTorque = (param_1->Control).ControlData.MaxTorque;
  (this->Control).ControlData.LinearTargetVelocityMultiplier = fVar7;
  (this->Control).ControlData.AngularTargetVelocityMultiplier = fVar8;
  *(undefined4 *)&(this->Control).ControlData.field_0x2c = uVar10;
  dVar5 = (param_1->Control).ControlData.CustomControlPoint.field0_0x0._s_0.Y;
  (this->Control).ControlData.CustomControlPoint.field0_0x0._s_0.X =
       (param_1->Control).ControlData.CustomControlPoint.field0_0x0._s_0.X;
  (this->Control).ControlData.CustomControlPoint.field0_0x0._s_0.Y = dVar5;
  bVar11 = (param_1->Control).ControlData.bUseCustomControlPoint;
  bVar12 = (param_1->Control).ControlData.bUseSkeletalAnimation;
  bVar13 = (param_1->Control).ControlData.bDisableCollision;
  bVar14 = (param_1->Control).ControlData.bOnlyControlChildObject;
  uVar10 = *(undefined4 *)&(param_1->Control).ControlData.field_0x4c;
  (this->Control).ControlData.CustomControlPoint.field0_0x0._s_0.Z =
       (param_1->Control).ControlData.CustomControlPoint.field0_0x0._s_0.Z;
  (this->Control).ControlData.bUseCustomControlPoint = bVar11;
  (this->Control).ControlData.bUseSkeletalAnimation = bVar12;
  (this->Control).ControlData.bDisableCollision = bVar13;
  (this->Control).ControlData.bOnlyControlChildObject = bVar14;
  *(undefined4 *)&(this->Control).ControlData.field_0x4c = uVar10;
  dVar5 = (param_1->Control).ControlMultiplier.LinearStrengthMultiplier.field0_0x0._s_0.Y;
  (this->Control).ControlMultiplier.LinearStrengthMultiplier.field0_0x0._s_0.X =
       (param_1->Control).ControlMultiplier.LinearStrengthMultiplier.field0_0x0._s_0.X;
  (this->Control).ControlMultiplier.LinearStrengthMultiplier.field0_0x0._s_0.Y = dVar5;
  dVar5 = (param_1->Control).ControlMultiplier.LinearDampingRatioMultiplier.field0_0x0._s_0.X;
  (this->Control).ControlMultiplier.LinearStrengthMultiplier.field0_0x0._s_0.Z =
       (param_1->Control).ControlMultiplier.LinearStrengthMultiplier.field0_0x0._s_0.Z;
  (this->Control).ControlMultiplier.LinearDampingRatioMultiplier.field0_0x0._s_0.X = dVar5;
  dVar5 = (param_1->Control).ControlMultiplier.LinearDampingRatioMultiplier.field0_0x0._s_0.Z;
  (this->Control).ControlMultiplier.LinearDampingRatioMultiplier.field0_0x0._s_0.Y =
       (param_1->Control).ControlMultiplier.LinearDampingRatioMultiplier.field0_0x0._s_0.Y;
  (this->Control).ControlMultiplier.LinearDampingRatioMultiplier.field0_0x0._s_0.Z = dVar5;
  dVar5 = (param_1->Control).ControlMultiplier.LinearExtraDampingMultiplier.field0_0x0._s_0.Y;
  (this->Control).ControlMultiplier.LinearExtraDampingMultiplier.field0_0x0._s_0.X =
       (param_1->Control).ControlMultiplier.LinearExtraDampingMultiplier.field0_0x0._s_0.X;
  (this->Control).ControlMultiplier.LinearExtraDampingMultiplier.field0_0x0._s_0.Y = dVar5;
  dVar5 = (param_1->Control).ControlMultiplier.MaxForceMultiplier.field0_0x0._s_0.X;
  (this->Control).ControlMultiplier.LinearExtraDampingMultiplier.field0_0x0._s_0.Z =
       (param_1->Control).ControlMultiplier.LinearExtraDampingMultiplier.field0_0x0._s_0.Z;
  (this->Control).ControlMultiplier.MaxForceMultiplier.field0_0x0._s_0.X = dVar5;
  dVar5 = (param_1->Control).ControlMultiplier.MaxForceMultiplier.field0_0x0._s_0.Z;
  (this->Control).ControlMultiplier.MaxForceMultiplier.field0_0x0._s_0.Y =
       (param_1->Control).ControlMultiplier.MaxForceMultiplier.field0_0x0._s_0.Y;
  (this->Control).ControlMultiplier.MaxForceMultiplier.field0_0x0._s_0.Z = dVar5;
  fVar7 = (param_1->Control).ControlMultiplier.AngularDampingRatioMultiplier;
  fVar8 = (param_1->Control).ControlMultiplier.AngularExtraDampingMultiplier;
  fVar9 = (param_1->Control).ControlMultiplier.MaxTorqueMultiplier;
  (this->Control).ControlMultiplier.AngularStrengthMultiplier =
       (param_1->Control).ControlMultiplier.AngularStrengthMultiplier;
  (this->Control).ControlMultiplier.AngularDampingRatioMultiplier = fVar7;
  (this->Control).ControlMultiplier.AngularExtraDampingMultiplier = fVar8;
  (this->Control).ControlMultiplier.MaxTorqueMultiplier = fVar9;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->Sets).ArrayNum;
  _Src = (param_1->Sets).AllocatorInstance.Data;
  (this->Sets).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar3,0,&pTVar2->AllocatorInstance,iVar3,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,_Src,(longlong)iVar3 << 3);
  }
  return this;
}

// operator== @ 14d9c3a60

bool __thiscall
FPhysicsControlCreationData::operator==
          (FPhysicsControlCreationData *this,FPhysicsControlCreationData *param_1)

{
  int iVar1;
  bool bVar2;
  
  if (((((((((this->Control).ParentBoneName == (param_1->Control).ParentBoneName) &&
           ((this->Control).ChildBoneName == (param_1->Control).ChildBoneName)) &&
          ((this->Control).ControlData.bEnabled == (param_1->Control).ControlData.bEnabled)) &&
         (((param_1->Control).ControlData.LinearStrength ==
           (this->Control).ControlData.LinearStrength &&
          ((param_1->Control).ControlData.LinearDampingRatio ==
           (this->Control).ControlData.LinearDampingRatio)))) &&
        (((param_1->Control).ControlData.LinearExtraDamping ==
          (this->Control).ControlData.LinearExtraDamping &&
         (((param_1->Control).ControlData.MaxForce == (this->Control).ControlData.MaxForce &&
          ((param_1->Control).ControlData.AngularStrength ==
           (this->Control).ControlData.AngularStrength)))))) &&
       ((param_1->Control).ControlData.AngularDampingRatio ==
        (this->Control).ControlData.AngularDampingRatio)) &&
      ((((((param_1->Control).ControlData.AngularExtraDamping ==
           (this->Control).ControlData.AngularExtraDamping &&
          ((param_1->Control).ControlData.MaxTorque == (this->Control).ControlData.MaxTorque)) &&
         ((param_1->Control).ControlData.LinearTargetVelocityMultiplier ==
          (this->Control).ControlData.LinearTargetVelocityMultiplier)) &&
        ((((param_1->Control).ControlData.AngularTargetVelocityMultiplier ==
           (this->Control).ControlData.AngularTargetVelocityMultiplier &&
          ((param_1->Control).ControlData.CustomControlPoint.field0_0x0._s_0.X ==
           (this->Control).ControlData.CustomControlPoint.field0_0x0._s_0.X)) &&
         (((param_1->Control).ControlData.CustomControlPoint.field0_0x0._s_0.Y ==
           (this->Control).ControlData.CustomControlPoint.field0_0x0._s_0.Y &&
          (((param_1->Control).ControlData.CustomControlPoint.field0_0x0._s_0.Z ==
            (this->Control).ControlData.CustomControlPoint.field0_0x0._s_0.Z &&
           ((this->Control).ControlData.bUseCustomControlPoint ==
            (param_1->Control).ControlData.bUseCustomControlPoint)))))))) &&
       (((((this->Control).ControlData.bUseSkeletalAnimation ==
           (param_1->Control).ControlData.bUseSkeletalAnimation &&
          ((((this->Control).ControlData.bDisableCollision ==
             (param_1->Control).ControlData.bDisableCollision &&
            ((this->Control).ControlData.bOnlyControlChildObject ==
             (param_1->Control).ControlData.bOnlyControlChildObject)) &&
           ((param_1->Control).ControlMultiplier.LinearStrengthMultiplier.field0_0x0._s_0.X ==
            (this->Control).ControlMultiplier.LinearStrengthMultiplier.field0_0x0._s_0.X)))) &&
         ((((param_1->Control).ControlMultiplier.LinearStrengthMultiplier.field0_0x0._s_0.Y ==
            (this->Control).ControlMultiplier.LinearStrengthMultiplier.field0_0x0._s_0.Y &&
           ((param_1->Control).ControlMultiplier.LinearStrengthMultiplier.field0_0x0._s_0.Z ==
            (this->Control).ControlMultiplier.LinearStrengthMultiplier.field0_0x0._s_0.Z)) &&
          ((((param_1->Control).ControlMultiplier.LinearDampingRatioMultiplier.field0_0x0._s_0.X ==
             (this->Control).ControlMultiplier.LinearDampingRatioMultiplier.field0_0x0._s_0.X &&
            (((param_1->Control).ControlMultiplier.LinearDampingRatioMultiplier.field0_0x0._s_0.Y ==
              (this->Control).ControlMultiplier.LinearDampingRatioMultiplier.field0_0x0._s_0.Y &&
             ((param_1->Control).ControlMultiplier.LinearDampingRatioMultiplier.field0_0x0._s_0.Z ==
              (this->Control).ControlMultiplier.LinearDampingRatioMultiplier.field0_0x0._s_0.Z))))
           && ((param_1->Control).ControlMultiplier.LinearExtraDampingMultiplier.field0_0x0._s_0.X
               == (this->Control).ControlMultiplier.LinearExtraDampingMultiplier.field0_0x0._s_0.X))
          )))) && (((((param_1->Control).ControlMultiplier.LinearExtraDampingMultiplier.field0_0x0.
                      _s_0.Y == (this->Control).ControlMultiplier.LinearExtraDampingMultiplier.
                                field0_0x0._s_0.Y &&
                     ((param_1->Control).ControlMultiplier.LinearExtraDampingMultiplier.field0_0x0.
                      _s_0.Z == (this->Control).ControlMultiplier.LinearExtraDampingMultiplier.
                                field0_0x0._s_0.Z)) &&
                    ((param_1->Control).ControlMultiplier.MaxForceMultiplier.field0_0x0._s_0.X ==
                     (this->Control).ControlMultiplier.MaxForceMultiplier.field0_0x0._s_0.X)) &&
                   (((param_1->Control).ControlMultiplier.MaxForceMultiplier.field0_0x0._s_0.Y ==
                     (this->Control).ControlMultiplier.MaxForceMultiplier.field0_0x0._s_0.Y &&
                    ((param_1->Control).ControlMultiplier.MaxForceMultiplier.field0_0x0._s_0.Z ==
                     (this->Control).ControlMultiplier.MaxForceMultiplier.field0_0x0._s_0.Z)))))))))
      ) && (((((param_1->Control).ControlMultiplier.AngularStrengthMultiplier ==
               (this->Control).ControlMultiplier.AngularStrengthMultiplier &&
              (((param_1->Control).ControlMultiplier.AngularDampingRatioMultiplier ==
                (this->Control).ControlMultiplier.AngularDampingRatioMultiplier &&
               ((param_1->Control).ControlMultiplier.AngularExtraDampingMultiplier ==
                (this->Control).ControlMultiplier.AngularExtraDampingMultiplier)))) &&
             ((param_1->Control).ControlMultiplier.MaxTorqueMultiplier ==
              (this->Control).ControlMultiplier.MaxTorqueMultiplier)) &&
            (iVar1 = (this->Sets).ArrayNum, iVar1 == (param_1->Sets).ArrayNum)))) {
    bVar2 = CompareItems<FName,int>
                      ((FName *)(this->Sets).AllocatorInstance.Data,
                       (FName *)(param_1->Sets).AllocatorInstance.Data,iVar1);
    if (bVar2) {
      return true;
    }
  }
  return false;
}

