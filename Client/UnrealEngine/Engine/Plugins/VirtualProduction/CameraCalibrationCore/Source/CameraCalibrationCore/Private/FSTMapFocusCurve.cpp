// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CameraCalibrationCore
// Functions: 7

// StaticStruct @ 14d67b460

UScriptStruct * __cdecl FSTMapFocusCurve::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSTMapFocusCurve.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CameraCalibrationCore();
    Z_Registration_Info_UScriptStruct_FSTMapFocusCurve.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSTMapFocusCurve,(UObject *)pUVar1,
                         L"STMapFocusCurve");
  }
  return Z_Registration_Info_UScriptStruct_FSTMapFocusCurve.OuterSingleton;
}

// AddPoint @ 14d6b5f30

void __thiscall
FSTMapFocusCurve::AddPoint(FSTMapFocusCurve *this,float param_1,FSTMapInfo *param_2,float param_3)

{
  float in_XMM2_Da;
  undefined1 local_38 [48];
  
  FKeyHandle::FKeyHandle((FKeyHandle *)&stack0x00000008);
  FBaseFocusCurve::AddPointToCurve
            ((FBaseFocusCurve *)this,(FRichCurve *)local_38,in_XMM2_Da,param_1,param_1,
             (FKeyHandle)param_3);
  return;
}

// ChangeFocus @ 14d6b9590

void __thiscall
FSTMapFocusCurve::ChangeFocus(FSTMapFocusCurve *this,float param_1,float param_2,float param_3)

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

// IsEmpty @ 14d6e19b0

bool __thiscall FSTMapFocusCurve::IsEmpty(FSTMapFocusCurve *this)

{
  return (this->MapBlendingCurve).Keys.ArrayNum == 0;
}

// MergeFocus @ 14d6e3f60

void __thiscall
FSTMapFocusCurve::MergeFocus
          (FSTMapFocusCurve *this,float param_1,float param_2,bool param_3,float param_4)

{
  FBaseFocusCurve::MergeFocusInCurve
            ((FBaseFocusCurve *)this,&this->MapBlendingCurve,param_1,param_2,param_3,param_4);
  return;
}

// RemovePoint @ 14d6e88a0

void __thiscall FSTMapFocusCurve::RemovePoint(FSTMapFocusCurve *this,float param_1,float param_2)

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

// SetPoint @ 14d6ee550

void __thiscall
FSTMapFocusCurve::SetPoint(FSTMapFocusCurve *this,float param_1,FSTMapInfo *param_2,float param_3)

{
  return;
}

