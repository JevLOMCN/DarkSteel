// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 3

// StaticStruct @ 14df95270

UScriptStruct * __cdecl FHairStrandsParameters::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FHairStrandsParameters.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_HairStrandsCore();
    Z_Registration_Info_UScriptStruct_FHairStrandsParameters.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FHairStrandsParameters,(UObject *)pUVar1,
                         L"HairStrandsParameters");
  }
  return Z_Registration_Info_UScriptStruct_FHairStrandsParameters.OuterSingleton;
}

// FHairStrandsParameters @ 14dfae030

FHairStrandsParameters * __thiscall
FHairStrandsParameters::FHairStrandsParameters(FHairStrandsParameters *this)

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
  
  FRuntimeFloatCurve::FRuntimeFloatCurve(&this->ThicknessScale);
  this->StrandsSize = Size8;
  this->StrandsDensity = 1.0;
  this->StrandsSmoothing = 0.1;
  this->StrandsThickness = 0.01;
  pFVar2 = FRuntimeFloatCurve::GetRichCurve(&this->ThicknessScale);
  pFVar3 = FRuntimeFloatCurve::GetRichCurve(&this->ThicknessScale);
  FKeyHandle::FKeyHandle(local_res8);
  FVar4.Index = in_stack_ffffffffffffffd8 & 0xffffff00;
  FVar1 = FRichCurve::AddKey(pFVar3,in_XMM1_Da,0.0,(bool)in_R9B,FVar4);
  FRichCurve::SetKeyInterpMode
            (pFVar2,(FKeyHandle)*(uint *)CONCAT44(extraout_var,FVar1.Index),RCIM_Cubic);
  pFVar2 = FRuntimeFloatCurve::GetRichCurve(&this->ThicknessScale);
  pFVar3 = FRuntimeFloatCurve::GetRichCurve(&this->ThicknessScale);
  FKeyHandle::FKeyHandle(local_res8);
  FVar1 = FRichCurve::AddKey(pFVar3,in_XMM1_Da,__real_3f800000,(bool)in_R9B,FVar4.Index & 0xffffff00
                            );
  FRichCurve::SetKeyInterpMode
            (pFVar2,(FKeyHandle)*(uint *)CONCAT44(extraout_var_00,FVar1.Index),RCIM_Cubic);
  return this;
}

// operator== @ 14dfb2450

bool __thiscall
FHairStrandsParameters::operator==(FHairStrandsParameters *this,FHairStrandsParameters *param_1)

{
  if ((((this->StrandsSize == param_1->StrandsSize) &&
       (param_1->StrandsDensity == this->StrandsDensity)) &&
      (param_1->StrandsSmoothing == this->StrandsSmoothing)) &&
     (param_1->StrandsThickness == this->StrandsThickness)) {
    return true;
  }
  return false;
}

