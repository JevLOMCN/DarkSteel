// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 3

// StaticStruct @ 14df951a0

UScriptStruct * __cdecl FHairCollisionConstraint::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FHairCollisionConstraint.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_HairStrandsCore();
    Z_Registration_Info_UScriptStruct_FHairCollisionConstraint.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FHairCollisionConstraint,(UObject *)pUVar1,
                         L"HairCollisionConstraint");
  }
  return Z_Registration_Info_UScriptStruct_FHairCollisionConstraint.OuterSingleton;
}

// FHairCollisionConstraint @ 14dfabfe0

FHairCollisionConstraint * __thiscall
FHairCollisionConstraint::FHairCollisionConstraint(FHairCollisionConstraint *this)

{
  FKeyHandle FVar1;
  FRichCurve *pFVar2;
  FRichCurve *pFVar3;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined1 in_R9B;
  float in_XMM1_Da;
  FKeyHandle local_res8 [4];
  uint in_stack_ffffffffffffffd8;
  FKeyHandle FVar4;
  
  FRuntimeFloatCurve::FRuntimeFloatCurve(&this->RadiusScale);
  this->SolveCollision = true;
  this->ProjectCollision = true;
  this->KineticFriction = 0.1;
  this->StaticFriction = 0.1;
  this->StrandsViscosity = 1.0;
  this->CollisionRadius = 0.1;
  (this->GridDimension).field0_0x0._s_0.X = 0x1e;
  (this->GridDimension).field0_0x0._s_0.Y = 0x1e;
  (this->GridDimension).field0_0x0._s_0.Z = 0x1e;
  pFVar2 = FRuntimeFloatCurve::GetRichCurve(&this->RadiusScale);
  pFVar3 = FRuntimeFloatCurve::GetRichCurve(&this->RadiusScale);
  FKeyHandle::FKeyHandle(local_res8);
  FVar4.Index = in_stack_ffffffffffffffd8 & 0xffffff00;
  FVar1 = FRichCurve::AddKey(pFVar3,in_XMM1_Da,0.0,(bool)in_R9B,FVar4);
  FRichCurve::SetKeyInterpMode
            (pFVar2,(FKeyHandle)*(uint *)CONCAT44(extraout_var,FVar1.Index),RCIM_Cubic);
  pFVar2 = FRuntimeFloatCurve::GetRichCurve(&this->RadiusScale);
  pFVar3 = FRuntimeFloatCurve::GetRichCurve(&this->RadiusScale);
  FKeyHandle::FKeyHandle(local_res8);
  FVar1 = FRichCurve::AddKey(pFVar3,in_XMM1_Da,__real_3f800000,(bool)in_R9B,FVar4.Index & 0xffffff00
                            );
  FRichCurve::SetKeyInterpMode
            (pFVar2,(FKeyHandle)*(uint *)CONCAT44(extraout_var_00,FVar1.Index),RCIM_Cubic);
  return this;
}

// operator== @ 14dfb1bf0

bool __thiscall
FHairCollisionConstraint::operator==
          (FHairCollisionConstraint *this,FHairCollisionConstraint *param_1)

{
  if ((((((this->SolveCollision == param_1->SolveCollision) &&
         (this->ProjectCollision == param_1->ProjectCollision)) &&
        (param_1->KineticFriction == this->KineticFriction)) &&
       ((param_1->StaticFriction == this->StaticFriction &&
        (param_1->StrandsViscosity == this->StrandsViscosity)))) &&
      ((param_1->CollisionRadius == this->CollisionRadius &&
       (((this->GridDimension).field0_0x0._s_0.X == (param_1->GridDimension).field0_0x0._s_0.X &&
        ((this->GridDimension).field0_0x0._s_0.Y == (param_1->GridDimension).field0_0x0._s_0.Y))))))
     && ((this->GridDimension).field0_0x0._s_0.Z == (param_1->GridDimension).field0_0x0._s_0.Z)) {
    return true;
  }
  return false;
}

