// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 5

// Size @ 1448a29c0

TIntPoint<int> __thiscall UE::Math::TIntRect<int>::Size(TIntRect<int> *this)

{
  TIntPoint<int>_u_0 in_RDX;
  
  *(int *)in_RDX = *(int *)((longlong)&this->field0_0x0 + 8) - *(int *)&this->field0_0x0;
  *(int *)((longlong)in_RDX + 4) =
       *(int *)((longlong)&this->field0_0x0 + 0xc) - *(int *)((longlong)&this->field0_0x0 + 4);
  return (TIntPoint<int>)in_RDX;
}

// TIntRect<int> @ 1450aeb90

TIntRect<int> * __thiscall UE::Math::TIntRect<int>::TIntRect<int>(TIntRect<int> *this)

{
  (this->field0_0x0)._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->field0_0x0)._s_0.Max.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  return this;
}

// operator== @ 145196790

bool __thiscall UE::Math::TIntRect<int>::operator==(TIntRect<int> *this,TIntRect<int> *param_1)

{
  if ((((*(int *)&this->field0_0x0 == *(int *)&param_1->field0_0x0) &&
       (*(int *)((longlong)&this->field0_0x0 + 4) == *(int *)((longlong)&param_1->field0_0x0 + 4)))
      && (*(int *)((longlong)&this->field0_0x0 + 8) == *(int *)((longlong)&param_1->field0_0x0 + 8))
      ) && (*(int *)((longlong)&this->field0_0x0 + 0xc) ==
            *(int *)((longlong)&param_1->field0_0x0 + 0xc))) {
    return true;
  }
  return false;
}

// operator!= @ 145296ad0

bool __thiscall UE::Math::TIntRect<int>::operator!=(TIntRect<int> *this,TIntRect<int> *param_1)

{
  if ((((*(int *)&this->field0_0x0 == *(int *)&param_1->field0_0x0) &&
       (*(int *)((longlong)&this->field0_0x0 + 4) == *(int *)((longlong)&param_1->field0_0x0 + 4)))
      && (*(int *)((longlong)&this->field0_0x0 + 8) == *(int *)((longlong)&param_1->field0_0x0 + 8))
      ) && (*(int *)((longlong)&this->field0_0x0 + 0xc) ==
            *(int *)((longlong)&param_1->field0_0x0 + 0xc))) {
    return false;
  }
  return true;
}

// operator- @ 145296c40

TIntRect<int> * __thiscall
UE::Math::TIntRect<int>::operator-
          (TIntRect<int> *this,TIntRect<int> *__return_storage_ptr__,TIntPoint<int> *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  TIntPoint<int>_u_0 local_res8;
  TIntPoint<int>_u_0 local_res10;
  
  uVar3 = *(undefined8 *)((longlong)&this->field0_0x0 + 8);
  iVar1 = (param_1->field0_0x0)._s_0.X;
  iVar2 = (param_1->field0_0x0)._s_0.Y;
  local_res10._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
  local_res10._s_0.Y = local_res10._4_4_ - iVar2;
  local_res10._s_0.X = (int)uVar3 - iVar1;
  local_res8._4_4_ = (undefined4)((ulonglong)*(undefined8 *)&this->field0_0x0 >> 0x20);
  local_res8._s_0.Y = local_res8._4_4_ - iVar2;
  local_res8._s_0.X = (int)*(undefined8 *)&this->field0_0x0 - iVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Min.field0_0x0 = local_res8;
  (__return_storage_ptr__->field0_0x0)._s_0.Max.field0_0x0 = local_res10;
  return __return_storage_ptr__;
}

