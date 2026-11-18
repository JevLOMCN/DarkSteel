// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 7

// operator!= @ 14485e870

bool __thiscall UE::Math::TIntPoint<int>::operator!=(TIntPoint<int> *this,TIntPoint<int> *param_1)

{
  if (((this->field0_0x0)._s_0.X == (param_1->field0_0x0)._s_0.X) &&
     ((this->field0_0x0)._s_0.Y == (param_1->field0_0x0)._s_0.Y)) {
    return false;
  }
  return true;
}

// operator/ @ 14485eb10

TIntPoint<int> __thiscall UE::Math::TIntPoint<int>::operator/(TIntPoint<int> *this,int param_1)

{
  TIntPoint<int>_u_0_s_0 TVar1;
  undefined4 in_register_00000014;
  TIntPoint<int>_u_0 TVar2;
  int in_R8D;
  undefined8 local_res8;
  
  TVar2._s_0.Y = in_register_00000014;
  TVar2._s_0.X = param_1;
  TVar1 = (this->field0_0x0)._s_0;
  local_res8._4_4_ = TVar1.Y;
  local_res8 = CONCAT44(local_res8._4_4_ / in_R8D,
                        (int)((longlong)
                              ((ulonglong)(uint)(TVar1.X >> 0x1f) << 0x20 |
                              (ulonglong)TVar1 & 0xffffffff) / (longlong)in_R8D));
  *(undefined8 *)TVar2 = local_res8;
  return (TIntPoint<int>)TVar2;
}

// operator== @ 144c1eed0

bool __thiscall UE::Math::TIntPoint<int>::operator==(TIntPoint<int> *this,TIntPoint<int> *param_1)

{
  if (((this->field0_0x0)._s_0.X == (param_1->field0_0x0)._s_0.X) &&
     ((this->field0_0x0)._s_0.Y == (param_1->field0_0x0)._s_0.Y)) {
    return true;
  }
  return false;
}

// operator* @ 144c1f1f0

TIntPoint<int> __thiscall UE::Math::TIntPoint<int>::operator*(TIntPoint<int> *this,int param_1)

{
  TIntPoint<int>_u_0 TVar1;
  undefined4 in_register_00000014;
  int in_R8D;
  undefined8 local_res8;
  
  local_res8._4_4_ = (this->field0_0x0)._s_0.Y;
  local_res8 = CONCAT44(local_res8._4_4_ * in_R8D,(this->field0_0x0)._s_0.X * in_R8D);
  *(undefined8 *)CONCAT44(in_register_00000014,param_1) = local_res8;
  TVar1._s_0.Y = in_register_00000014;
  TVar1._s_0.X = param_1;
  return (TIntPoint<int>)TVar1;
}

// operator+ @ 145296c90

TIntPoint<int> __thiscall
UE::Math::TIntPoint<int>::operator+(TIntPoint<int> *this,TIntPoint<int> *param_1)

{
  int *in_R8;
  TIntPoint<int>_u_0 local_res8;
  
  local_res8._4_4_ = (this->field0_0x0)._s_0.Y;
  local_res8._s_0.Y = local_res8._4_4_ + in_R8[1];
  local_res8._s_0.X = *in_R8 + (this->field0_0x0)._s_0.X;
  param_1->field0_0x0 = local_res8;
  return (TIntPoint<int>)(TIntPoint<int>_u_0)param_1;
}

// DivideAndRoundUp @ 1452badd0

TIntPoint<int> __cdecl
UE::Math::TIntPoint<int>::DivideAndRoundUp(TIntPoint<int> param_1,int param_2)

{
  int in_register_00000014;
  int in_R8D;
  
  *(int *)param_1.field0_0x0 = (param_2 + -1 + in_R8D) / in_R8D;
  *(int *)((longlong)param_1.field0_0x0 + 4) = (in_R8D + -1 + in_register_00000014) / in_R8D;
  return (TIntPoint<int>)param_1.field0_0x0;
}

// Size @ 1452d5610

int __thiscall UE::Math::TIntPoint<int>::Size(TIntPoint<int> *this)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 in_XMM1 [16];
  undefined1 auVar3 [16];
  
  lVar1 = (longlong)(this->field0_0x0)._s_0.X;
  lVar2 = (longlong)(this->field0_0x0)._s_0.Y;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = (double)(lVar2 * lVar2 + lVar1 * lVar1);
  auVar3 = sqrtpd(in_XMM1,auVar3);
  return (int)auVar3._0_8_;
}

