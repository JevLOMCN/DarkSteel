// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PhysicsControl
// Functions: 2

// StaticStruct @ 14d9b0fb0

UScriptStruct * __cdecl FPhysicsControlMultiplier::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPhysicsControlMultiplier.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PhysicsControl();
    Z_Registration_Info_UScriptStruct_FPhysicsControlMultiplier.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPhysicsControlMultiplier,(UObject *)pUVar1,
                         L"PhysicsControlMultiplier");
  }
  return Z_Registration_Info_UScriptStruct_FPhysicsControlMultiplier.OuterSingleton;
}

// UpdateFromSparseData @ 14d9f19f0

void __thiscall
FPhysicsControlMultiplier::UpdateFromSparseData
          (FPhysicsControlMultiplier *this,FPhysicsControlSparseMultiplier *param_1)

{
  double dVar1;
  FPhysicsControlSparseMultiplier *pFVar2;
  
  pFVar2 = param_1;
  if (param_1->bEnableLinearStrengthMultiplier == 0) {
    pFVar2 = (FPhysicsControlSparseMultiplier *)this;
  }
  dVar1 = (pFVar2->LinearStrengthMultiplier).field0_0x0._s_0.Y;
  (this->LinearStrengthMultiplier).field0_0x0._s_0.X =
       (pFVar2->LinearStrengthMultiplier).field0_0x0._s_0.X;
  (this->LinearStrengthMultiplier).field0_0x0._s_0.Y = dVar1;
  (this->LinearStrengthMultiplier).field0_0x0._s_0.Z =
       (pFVar2->LinearStrengthMultiplier).field0_0x0._s_0.Z;
  pFVar2 = param_1;
  if (param_1->bEnableLinearDampingRatioMultiplier == '\0') {
    pFVar2 = (FPhysicsControlSparseMultiplier *)this;
  }
  dVar1 = (pFVar2->LinearDampingRatioMultiplier).field0_0x0._s_0.Y;
  (this->LinearDampingRatioMultiplier).field0_0x0._s_0.X =
       (pFVar2->LinearDampingRatioMultiplier).field0_0x0._s_0.X;
  (this->LinearDampingRatioMultiplier).field0_0x0._s_0.Y = dVar1;
  (this->LinearDampingRatioMultiplier).field0_0x0._s_0.Z =
       (pFVar2->LinearDampingRatioMultiplier).field0_0x0._s_0.Z;
  pFVar2 = param_1;
  if (param_1->bEnableLinearExtraDampingMultiplier == '\0') {
    pFVar2 = (FPhysicsControlSparseMultiplier *)this;
  }
  dVar1 = (pFVar2->LinearExtraDampingMultiplier).field0_0x0._s_0.Y;
  (this->LinearExtraDampingMultiplier).field0_0x0._s_0.X =
       (pFVar2->LinearExtraDampingMultiplier).field0_0x0._s_0.X;
  (this->LinearExtraDampingMultiplier).field0_0x0._s_0.Y = dVar1;
  (this->LinearExtraDampingMultiplier).field0_0x0._s_0.Z =
       (pFVar2->LinearExtraDampingMultiplier).field0_0x0._s_0.Z;
  pFVar2 = param_1;
  if (param_1->bEnableMaxForceMultiplier == '\0') {
    pFVar2 = (FPhysicsControlSparseMultiplier *)this;
  }
  dVar1 = (pFVar2->MaxForceMultiplier).field0_0x0._s_0.Y;
  (this->MaxForceMultiplier).field0_0x0._s_0.X = (pFVar2->MaxForceMultiplier).field0_0x0._s_0.X;
  (this->MaxForceMultiplier).field0_0x0._s_0.Y = dVar1;
  (this->MaxForceMultiplier).field0_0x0._s_0.Z = (pFVar2->MaxForceMultiplier).field0_0x0._s_0.Z;
  pFVar2 = param_1;
  if (param_1->bEnableAngularStrengthMultiplier == '\0') {
    pFVar2 = (FPhysicsControlSparseMultiplier *)this;
  }
  this->AngularStrengthMultiplier = pFVar2->AngularStrengthMultiplier;
  pFVar2 = param_1;
  if (param_1->bEnableAngularDampingRatioMultiplier == '\0') {
    pFVar2 = (FPhysicsControlSparseMultiplier *)this;
  }
  this->AngularDampingRatioMultiplier = pFVar2->AngularDampingRatioMultiplier;
  pFVar2 = param_1;
  if (param_1->bEnableAngularExtraDampingMultiplier == '\0') {
    pFVar2 = (FPhysicsControlSparseMultiplier *)this;
  }
  this->AngularExtraDampingMultiplier = pFVar2->AngularExtraDampingMultiplier;
  if (!(bool)param_1->bEnableMaxTorqueMultiplier) {
    param_1 = (FPhysicsControlSparseMultiplier *)this;
  }
  this->MaxTorqueMultiplier = param_1->MaxTorqueMultiplier;
  return;
}

