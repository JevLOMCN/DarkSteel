// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 3

// StaticStruct @ 14df95110

UScriptStruct * __cdecl FHairBendConstraint::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FHairBendConstraint.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_HairStrandsCore();
    Z_Registration_Info_UScriptStruct_FHairBendConstraint.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FHairBendConstraint,(UObject *)pUVar1,
                         L"HairBendConstraint");
  }
  return Z_Registration_Info_UScriptStruct_FHairBendConstraint.OuterSingleton;
}

// FHairBendConstraint @ 14dfabc70

FHairBendConstraint * __thiscall FHairBendConstraint::FHairBendConstraint(FHairBendConstraint *this)

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
  
  FRuntimeFloatCurve::FRuntimeFloatCurve(&this->BendScale);
  this->SolveBend = true;
  this->ProjectBend = false;
  this->BendDamping = 0.005;
  this->BendStiffness = 0.01;
  pFVar2 = FRuntimeFloatCurve::GetRichCurve(&this->BendScale);
  pFVar3 = FRuntimeFloatCurve::GetRichCurve(&this->BendScale);
  FKeyHandle::FKeyHandle(local_res8);
  FVar4.Index = in_stack_ffffffffffffffd8 & 0xffffff00;
  FVar1 = FRichCurve::AddKey(pFVar3,in_XMM1_Da,0.0,(bool)in_R9B,FVar4);
  FRichCurve::SetKeyInterpMode
            (pFVar2,(FKeyHandle)*(uint *)CONCAT44(extraout_var,FVar1.Index),RCIM_Cubic);
  pFVar2 = FRuntimeFloatCurve::GetRichCurve(&this->BendScale);
  pFVar3 = FRuntimeFloatCurve::GetRichCurve(&this->BendScale);
  FKeyHandle::FKeyHandle(local_res8);
  FVar1 = FRichCurve::AddKey(pFVar3,in_XMM1_Da,__real_3f800000,(bool)in_R9B,FVar4.Index & 0xffffff00
                            );
  FRichCurve::SetKeyInterpMode
            (pFVar2,(FKeyHandle)*(uint *)CONCAT44(extraout_var_00,FVar1.Index),RCIM_Cubic);
  return this;
}

// operator== @ 14dfb1bb0

bool __thiscall
FHairBendConstraint::operator==(FHairBendConstraint *this,FHairBendConstraint *param_1)

{
  if ((((this->SolveBend == param_1->SolveBend) && (this->ProjectBend == param_1->ProjectBend)) &&
      (param_1->BendDamping == this->BendDamping)) &&
     (param_1->BendStiffness == this->BendStiffness)) {
    return true;
  }
  return false;
}

