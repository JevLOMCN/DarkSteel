// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 17

// CreateNewKey @ 14726e980

int __thiscall FCurveEdInterface::CreateNewKey(FCurveEdInterface *this,float param_1)

{
  return -1;
}

// DeleteKey @ 14726e9b0

void __thiscall FCurveEdInterface::DeleteKey(FCurveEdInterface *this,int param_1)

{
  return;
}

// EvalSub @ 14726ec50

float __thiscall FCurveEdInterface::EvalSub(FCurveEdInterface *this,int param_1,float param_2)

{
  return 0.0;
}

// GetInRange @ 14726eca0

void __thiscall FCurveEdInterface::GetInRange(FCurveEdInterface *this,float *param_1,float *param_2)

{
  *param_1 = 0.0;
  *param_2 = 0.0;
  return;
}

// GetKeyColor @ 14726ecb0

FColor __thiscall
FCurveEdInterface::GetKeyColor(FCurveEdInterface *this,int param_1,int param_2,FColor *param_3)

{
  undefined4 in_register_00000014;
  undefined4 *in_stack_00000028;
  
  *(undefined4 *)CONCAT44(in_register_00000014,param_1) = *in_stack_00000028;
  return (FColor)(FColor_u_0)param_1;
}

// GetKeyIn @ 14726ecd0

float __thiscall FCurveEdInterface::GetKeyIn(FCurveEdInterface *this,int param_1)

{
  return 0.0;
}

// GetKeyInterpMode @ 14726ece0

EInterpCurveMode __thiscall FCurveEdInterface::GetKeyInterpMode(FCurveEdInterface *this,int param_1)

{
  return CIM_Linear;
}

// GetKeyOut @ 14726ecf0

float __thiscall FCurveEdInterface::GetKeyOut(FCurveEdInterface *this,int param_1,int param_2)

{
  return 0.0;
}

// GetNumKeys @ 14726ed30

int __thiscall FCurveEdInterface::GetNumKeys(FCurveEdInterface *this)

{
  return 0;
}

// GetNumSubCurves @ 14726ed40

int __thiscall FCurveEdInterface::GetNumSubCurves(FCurveEdInterface *this)

{
  return 0;
}

// GetOutRange @ 14726ed70

void __thiscall
FCurveEdInterface::GetOutRange(FCurveEdInterface *this,float *param_1,float *param_2)

{
  *param_1 = 0.0;
  *param_2 = 0.0;
  return;
}

// GetSubCurveButtonColor @ 147270350

FColor __thiscall
FCurveEdInterface::GetSubCurveButtonColor(FCurveEdInterface *this,int param_1,bool param_2)

{
  undefined1 uVar1;
  undefined4 in_register_00000014;
  char in_R9B;
  
  *(undefined2 *)CONCAT44(in_register_00000014,param_1) = 0;
  uVar1 = 0x20;
  if (in_R9B == '\0') {
    uVar1 = 0xff;
  }
  *(undefined1 *)(CONCAT44(in_register_00000014,param_1) + 2) = uVar1;
  *(undefined1 *)(CONCAT44(in_register_00000014,param_1) + 3) = 0xff;
  return (FColor)(FColor_u_0)param_1;
}

// GetTangents @ 147270390

void __thiscall
FCurveEdInterface::GetTangents
          (FCurveEdInterface *this,int param_1,int param_2,float *param_3,float *param_4)

{
  *param_3 = 0.0;
  *param_4 = 0.0;
  return;
}

// SetKeyIn @ 147270880

int __thiscall FCurveEdInterface::SetKeyIn(FCurveEdInterface *this,int param_1,float param_2)

{
  return param_1;
}

// SetKeyInterpMode @ 147270890

void __thiscall
FCurveEdInterface::SetKeyInterpMode(FCurveEdInterface *this,int param_1,EInterpCurveMode param_2)

{
  return;
}

// SetKeyOut @ 1472708a0

void __thiscall
FCurveEdInterface::SetKeyOut(FCurveEdInterface *this,int param_1,int param_2,float param_3)

{
  return;
}

// SetTangents @ 1472708b0

void __thiscall
FCurveEdInterface::SetTangents
          (FCurveEdInterface *this,int param_1,int param_2,float param_3,float param_4)

{
  return;
}

