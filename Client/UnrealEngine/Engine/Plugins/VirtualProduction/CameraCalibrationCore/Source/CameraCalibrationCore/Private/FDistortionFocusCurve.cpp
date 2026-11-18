// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CameraCalibrationCore
// Functions: 8

// StaticStruct @ 14d67d560

UScriptStruct * __cdecl FDistortionFocusCurve::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDistortionFocusCurve.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_CameraCalibrationCore();
    Z_Registration_Info_UScriptStruct_FDistortionFocusCurve.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDistortionFocusCurve,(UObject *)pUVar1,
                         L"DistortionFocusCurve");
  }
  return Z_Registration_Info_UScriptStruct_FDistortionFocusCurve.OuterSingleton;
}

// AddPoint @ 14d6b4e00

void __thiscall
FDistortionFocusCurve::AddPoint
          (FDistortionFocusCurve *this,float param_1,FDistortionInfo *param_2,float param_3)

{
  float in_XMM2_Da;
  undefined1 local_38 [48];
  
  FKeyHandle::FKeyHandle((FKeyHandle *)&stack0x00000008);
  FBaseFocusCurve::AddPointToCurve
            ((FBaseFocusCurve *)this,(FRichCurve *)local_38,in_XMM2_Da,param_1,param_1,
             (FKeyHandle)param_3);
  return;
}

// ChangeFocus @ 14d6b92d0

void __thiscall
FDistortionFocusCurve::ChangeFocus
          (FDistortionFocusCurve *this,float param_1,float param_2,float param_3)

{
  FKeyHandle FVar1;
  undefined4 extraout_var;
  undefined4 local_res8;
  
  FRealCurve::FindKey((FRealCurve *)this,param_1,param_1);
  FVar1 = FKeyHandle::Invalid();
  if (local_res8 != *(uint *)CONCAT44(extraout_var,FVar1.Index)) {
    FRichCurve::SetKeyTime(&this->MapBlendingCurve,local_res8,param_2);
  }
  return;
}

// GetCurveForParameter @ 14d6d3130

FRichCurve * __thiscall
FDistortionFocusCurve::GetCurveForParameter(FDistortionFocusCurve *this,int param_1)

{
  if (param_1 != -1) {
    this = (FDistortionFocusCurve *)0x0;
  }
  return &this->MapBlendingCurve;
}

// IsEmpty @ 14d6e18d0

bool __thiscall FDistortionFocusCurve::IsEmpty(FDistortionFocusCurve *this)

{
  return (this->MapBlendingCurve).Keys.ArrayNum == 0;
}

// MergeFocus @ 14d6e3a10

void __thiscall
FDistortionFocusCurve::MergeFocus
          (FDistortionFocusCurve *this,float param_1,float param_2,bool param_3,float param_4)

{
  FBaseFocusCurve::MergeFocusInCurve
            ((FBaseFocusCurve *)this,&this->MapBlendingCurve,param_1,param_2,param_3,param_4);
  return;
}

// RemovePoint @ 14d6e8180

void __thiscall
FDistortionFocusCurve::RemovePoint(FDistortionFocusCurve *this,float param_1,float param_2)

{
  FKeyHandle FVar1;
  undefined4 extraout_var;
  undefined4 local_res8;
  
  FRealCurve::FindKey((FRealCurve *)this,param_1,param_1);
  FVar1 = FKeyHandle::Invalid();
  if (local_res8 != *(uint *)CONCAT44(extraout_var,FVar1.Index)) {
    FRichCurve::DeleteKey(&this->MapBlendingCurve,local_res8);
  }
  return;
}

// SetPoint @ 14d6ed4b0

void __thiscall
FDistortionFocusCurve::SetPoint
          (FDistortionFocusCurve *this,float param_1,FDistortionInfo *param_2,float param_3)

{
  return;
}

