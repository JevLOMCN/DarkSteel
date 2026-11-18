// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 4

// operator* @ 143063d00

FLinearColor * __thiscall
FLinearColor::operator*
          (FLinearColor *this,FLinearColor *__return_storage_ptr__,FLinearColor *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = (param_1->field0_0x0)._s_0.G;
  fVar2 = (param_1->field0_0x0)._s_0.B;
  fVar3 = (param_1->field0_0x0)._s_0.A;
  fVar4 = (this->field0_0x0)._s_0.G;
  fVar5 = (this->field0_0x0)._s_0.B;
  fVar6 = (this->field0_0x0)._s_0.A;
  (__return_storage_ptr__->field0_0x0)._s_0.R =
       (param_1->field0_0x0)._s_0.R * (this->field0_0x0)._s_0.R;
  (__return_storage_ptr__->field0_0x0)._s_0.G = fVar1 * fVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.B = fVar2 * fVar5;
  (__return_storage_ptr__->field0_0x0)._s_0.A = fVar3 * fVar6;
  return __return_storage_ptr__;
}

// operator* @ 143063d20

FLinearColor * __thiscall
FLinearColor::operator*(FLinearColor *this,FLinearColor *__return_storage_ptr__,float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (this->field0_0x0)._s_0.G;
  fVar2 = (this->field0_0x0)._s_0.B;
  fVar3 = (this->field0_0x0)._s_0.A;
  (__return_storage_ptr__->field0_0x0)._s_0.R = param_1 * (this->field0_0x0)._s_0.R;
  (__return_storage_ptr__->field0_0x0)._s_0.G = param_1 * fVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.B = param_1 * fVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.A = param_1 * fVar3;
  return __return_storage_ptr__;
}

// operator- @ 143063d70

FLinearColor * __thiscall
FLinearColor::operator-
          (FLinearColor *this,FLinearColor *__return_storage_ptr__,FLinearColor *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = (param_1->field0_0x0)._s_0.G;
  fVar2 = (param_1->field0_0x0)._s_0.B;
  fVar3 = (param_1->field0_0x0)._s_0.A;
  fVar4 = (this->field0_0x0)._s_0.G;
  fVar5 = (this->field0_0x0)._s_0.B;
  fVar6 = (this->field0_0x0)._s_0.A;
  (__return_storage_ptr__->field0_0x0)._s_0.R =
       (this->field0_0x0)._s_0.R - (param_1->field0_0x0)._s_0.R;
  (__return_storage_ptr__->field0_0x0)._s_0.G = fVar4 - fVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.B = fVar5 - fVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.A = fVar6 - fVar3;
  return __return_storage_ptr__;
}

// operator+ @ 143063f70

FLinearColor * __thiscall
FLinearColor::operator+
          (FLinearColor *this,FLinearColor *__return_storage_ptr__,FLinearColor *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = (param_1->field0_0x0)._s_0.G;
  fVar2 = (param_1->field0_0x0)._s_0.B;
  fVar3 = (param_1->field0_0x0)._s_0.A;
  fVar4 = (this->field0_0x0)._s_0.G;
  fVar5 = (this->field0_0x0)._s_0.B;
  fVar6 = (this->field0_0x0)._s_0.A;
  (__return_storage_ptr__->field0_0x0)._s_0.R =
       (param_1->field0_0x0)._s_0.R + (this->field0_0x0)._s_0.R;
  (__return_storage_ptr__->field0_0x0)._s_0.G = fVar1 + fVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.B = fVar2 + fVar5;
  (__return_storage_ptr__->field0_0x0)._s_0.A = fVar3 + fVar6;
  return __return_storage_ptr__;
}

