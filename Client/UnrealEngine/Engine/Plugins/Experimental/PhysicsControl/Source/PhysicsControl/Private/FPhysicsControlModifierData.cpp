// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PhysicsControl
// Functions: 2

// StaticStruct @ 14d9b0b30

UScriptStruct * __cdecl FPhysicsControlModifierData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPhysicsControlModifierData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PhysicsControl();
    Z_Registration_Info_UScriptStruct_FPhysicsControlModifierData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPhysicsControlModifierData,(UObject *)pUVar1,
                         L"PhysicsControlModifierData");
  }
  return Z_Registration_Info_UScriptStruct_FPhysicsControlModifierData.OuterSingleton;
}

// UpdateFromSparseData @ 14d9f1970

void __thiscall
FPhysicsControlModifierData::UpdateFromSparseData
          (FPhysicsControlModifierData *this,FPhysicsControlModifierSparseData *param_1)

{
  FPhysicsControlModifierData *pFVar1;
  EPhysicsControlKinematicTargetSpace EVar2;
  
  pFVar1 = (FPhysicsControlModifierData *)param_1;
  if (param_1->bEnableMovementType == '\0') {
    pFVar1 = this;
  }
  this->MovementType = pFVar1->MovementType;
  pFVar1 = (FPhysicsControlModifierData *)param_1;
  if (param_1->bEnableCollisionType == '\0') {
    pFVar1 = this;
  }
  (this->CollisionType).Value = (pFVar1->CollisionType).Value;
  pFVar1 = (FPhysicsControlModifierData *)param_1;
  if (param_1->bEnableGravityMultiplier == '\0') {
    pFVar1 = this;
  }
  this->GravityMultiplier = pFVar1->GravityMultiplier;
  pFVar1 = (FPhysicsControlModifierData *)param_1;
  if (param_1->bEnablePhysicsBlendWeight == '\0') {
    pFVar1 = this;
  }
  this->PhysicsBlendWeight = pFVar1->PhysicsBlendWeight;
  if (param_1->bEnableKinematicTargetSpace == '\0') {
    EVar2 = this->KinematicTargetSpace;
  }
  else {
    EVar2 = param_1->KinematicTargetSpace;
  }
  this->KinematicTargetSpace = EVar2;
  if (param_1->bEnablebUpdateKinematicFromSimulation != '\0') {
    this->bUpdateKinematicFromSimulation = param_1->bUpdateKinematicFromSimulation;
    return;
  }
  this->bUpdateKinematicFromSimulation = this->bUpdateKinematicFromSimulation;
  return;
}

