// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 1

// SetVectorParameterValue @ 14a295bf0

void __thiscall
UMaterialInstanceDynamic::SetVectorParameterValue
          (UMaterialInstanceDynamic *this,FName param_1,TVector<double> *param_2)

{
  FLinearColor *pFVar1;
  FLinearColor_u_0 local_28;
  FLinearColor local_18;
  
  pFVar1 = FLinearColor::FLinearColor(&local_18,param_2);
  local_28._0_8_ = *(undefined8 *)&pFVar1->field0_0x0;
  local_28._8_8_ = *(undefined8 *)((longlong)&pFVar1->field0_0x0 + 8);
  SetVectorParameterValue(this,param_1,(FLinearColor *)&local_28._s_0);
  return;
}

