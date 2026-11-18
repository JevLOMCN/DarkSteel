// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 3

// StaticStruct @ 14df95150

UScriptStruct * __cdecl FHairStretchConstraint::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FHairStretchConstraint.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_HairStrandsCore();
    Z_Registration_Info_UScriptStruct_FHairStretchConstraint.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FHairStretchConstraint,(UObject *)pUVar1,
                         L"HairStretchConstraint");
  }
  return Z_Registration_Info_UScriptStruct_FHairStretchConstraint.OuterSingleton;
}

// FHairStretchConstraint @ 14dfae130

FHairStretchConstraint * __thiscall
FHairStretchConstraint::FHairStretchConstraint(FHairStretchConstraint *this)

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
  
  FRuntimeFloatCurve::FRuntimeFloatCurve(&this->StretchScale);
  this->SolveStretch = true;
  this->ProjectStretch = false;
  this->StretchDamping = 0.005;
  this->StretchStiffness = 1.0;
  pFVar2 = FRuntimeFloatCurve::GetRichCurve(&this->StretchScale);
  pFVar3 = FRuntimeFloatCurve::GetRichCurve(&this->StretchScale);
  FKeyHandle::FKeyHandle(local_res8);
  FVar4.Index = in_stack_ffffffffffffffd8 & 0xffffff00;
  FVar1 = FRichCurve::AddKey(pFVar3,in_XMM1_Da,0.0,(bool)in_R9B,FVar4);
  FRichCurve::SetKeyInterpMode
            (pFVar2,(FKeyHandle)*(uint *)CONCAT44(extraout_var,FVar1.Index),RCIM_Cubic);
  pFVar2 = FRuntimeFloatCurve::GetRichCurve(&this->StretchScale);
  pFVar3 = FRuntimeFloatCurve::GetRichCurve(&this->StretchScale);
  FKeyHandle::FKeyHandle(local_res8);
  FVar1 = FRichCurve::AddKey(pFVar3,in_XMM1_Da,__real_3f800000,(bool)in_R9B,FVar4.Index & 0xffffff00
                            );
  FRichCurve::SetKeyInterpMode
            (pFVar2,(FKeyHandle)*(uint *)CONCAT44(extraout_var_00,FVar1.Index),RCIM_Cubic);
  return this;
}

// operator== @ 14dfb2490

bool __thiscall
FHairStretchConstraint::operator==(FHairStretchConstraint *this,FHairStretchConstraint *param_1)

{
  if ((((this->SolveStretch == param_1->SolveStretch) &&
       (this->ProjectStretch == param_1->ProjectStretch)) &&
      (param_1->StretchDamping == this->StretchDamping)) &&
     (param_1->StretchStiffness == this->StretchStiffness)) {
    return true;
  }
  return false;
}

