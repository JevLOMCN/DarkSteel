// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowCore
// Functions: 85

// SetData<FManagedArrayCollection_const_&> @ 14441c5b0

void __thiscall
UE::Dataflow::FContext::SetData<FManagedArrayCollection_const_&>
          (FContext *this,uint param_1,FProperty *param_2,FManagedArrayCollection *param_3,
          FGuid *param_4,uint param_5,FTimestamp *param_6)

{
  longlong *plVar1;
  FContextCacheElementUStruct *pFVar2;
  FContextCacheElementUStruct *pFVar3;
  FContextCacheElementUStruct *local_48 [2];
  FGuid local_38;
  
  pFVar3 = (FContextCacheElementUStruct *)0x0;
  local_48[0] = (FContextCacheElementUStruct *)0x0;
  pFVar2 = ::operator_new(0x58);
  if (pFVar2 != (FContextCacheElementUStruct *)0x0) {
    local_38.A = param_4->A;
    local_38.B = param_4->B;
    local_38.C = param_4->C;
    local_38.D = param_4->D;
    pFVar3 = FContextCacheElementUStruct::
             FContextCacheElementUStruct<FManagedArrayCollection_const_&>
                       (pFVar2,&local_38,param_2,param_3,param_5,(FTimestamp)param_6->Value);
  }
  pFVar2 = local_48[0];
  if (local_48[0] != (FContextCacheElementUStruct *)0x0) {
    plVar1 = &local_48[0]->_padding_;
    local_48[0] = pFVar3;
    (**(code **)*plVar1)(pFVar2,1);
    pFVar3 = local_48[0];
  }
  local_48[0] = pFVar3;
  if (local_48[0] == (FContextCacheElementUStruct *)0x0) {
    SetNullData(this,param_1,param_2,param_4,param_5,param_6);
  }
  else {
    (**(code **)(this->_padding_ + 0x28))(this,param_1,local_48);
  }
  if (local_48[0] != (FContextCacheElementUStruct *)0x0) {
    (**(code **)local_48[0]->_padding_)(local_48[0],1);
  }
  return;
}

// SetData<signed_char> @ 14441c6c0

void __thiscall
UE::Dataflow::FContext::SetData<signed_char>
          (FContext *this,uint param_1,FProperty *param_2,schar *param_3,FGuid *param_4,uint param_5
          ,FTimestamp *param_6)

{
  ulong64 uVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *local_28 [2];
  
  local_28[0] = (undefined8 *)0x0;
  puVar8 = ::operator_new(0x40);
  puVar7 = local_28[0];
  if (puVar8 != (undefined8 *)0x0) {
    uVar3 = param_4->A;
    uVar4 = param_4->B;
    uVar5 = param_4->C;
    uVar6 = param_4->D;
    uVar1 = param_6->Value;
    *(undefined4 *)(puVar8 + 1) = 0;
    *(uint *)((longlong)puVar8 + 0xc) = uVar3;
    *(uint *)(puVar8 + 2) = uVar4;
    *(uint *)((longlong)puVar8 + 0x14) = uVar5;
    *(uint *)(puVar8 + 3) = uVar6;
    puVar8[4] = param_2;
    *(uint *)(puVar8 + 5) = param_5;
    puVar8[6] = uVar1;
    *puVar8 = &___7__TContextCacheElement_C_Dataflow_UE__6B_;
    *(schar *)(puVar8 + 7) = *param_3;
  }
  if (local_28[0] != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*local_28[0];
    local_28[0] = puVar8;
    (*(code *)*puVar2)(puVar7,1);
    puVar8 = local_28[0];
  }
  local_28[0] = puVar8;
  if (local_28[0] == (undefined8 *)0x0) {
    SetNullData(this,param_1,param_2,param_4,param_5,param_6);
  }
  else {
    (**(code **)(this->_padding_ + 0x28))(this,param_1,local_28);
  }
  if (local_28[0] != (undefined8 *)0x0) {
    (**(code **)*local_28[0])(local_28[0],1);
  }
  return;
}

// SetData<unsigned_char> @ 14441c7d0

void __thiscall
UE::Dataflow::FContext::SetData<unsigned_char>
          (FContext *this,uint param_1,FProperty *param_2,uchar *param_3,FGuid *param_4,uint param_5
          ,FTimestamp *param_6)

{
  ulong64 uVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *local_28 [2];
  
  local_28[0] = (undefined8 *)0x0;
  puVar8 = ::operator_new(0x40);
  puVar7 = local_28[0];
  if (puVar8 != (undefined8 *)0x0) {
    uVar3 = param_4->A;
    uVar4 = param_4->B;
    uVar5 = param_4->C;
    uVar6 = param_4->D;
    uVar1 = param_6->Value;
    *(undefined4 *)(puVar8 + 1) = 0;
    *(uint *)((longlong)puVar8 + 0xc) = uVar3;
    *(uint *)(puVar8 + 2) = uVar4;
    *(uint *)((longlong)puVar8 + 0x14) = uVar5;
    *(uint *)(puVar8 + 3) = uVar6;
    puVar8[4] = param_2;
    *(uint *)(puVar8 + 5) = param_5;
    puVar8[6] = uVar1;
    *puVar8 = &___7__TContextCacheElement_E_Dataflow_UE__6B_;
    *(uchar *)(puVar8 + 7) = *param_3;
  }
  if (local_28[0] != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*local_28[0];
    local_28[0] = puVar8;
    (*(code *)*puVar2)(puVar7,1);
    puVar8 = local_28[0];
  }
  local_28[0] = puVar8;
  if (local_28[0] == (undefined8 *)0x0) {
    SetNullData(this,param_1,param_2,param_4,param_5,param_6);
  }
  else {
    (**(code **)(this->_padding_ + 0x28))(this,param_1,local_28);
  }
  if (local_28[0] != (undefined8 *)0x0) {
    (**(code **)*local_28[0])(local_28[0],1);
  }
  return;
}

// SetData<short> @ 14441c8e0

void __thiscall
UE::Dataflow::FContext::SetData<short>
          (FContext *this,uint param_1,FProperty *param_2,short *param_3,FGuid *param_4,uint param_5
          ,FTimestamp *param_6)

{
  ulong64 uVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *local_28 [2];
  
  local_28[0] = (undefined8 *)0x0;
  puVar8 = ::operator_new(0x40);
  puVar7 = local_28[0];
  if (puVar8 != (undefined8 *)0x0) {
    uVar3 = param_4->A;
    uVar4 = param_4->B;
    uVar5 = param_4->C;
    uVar6 = param_4->D;
    uVar1 = param_6->Value;
    *(undefined4 *)(puVar8 + 1) = 0;
    *(uint *)((longlong)puVar8 + 0xc) = uVar3;
    *(uint *)(puVar8 + 2) = uVar4;
    *(uint *)((longlong)puVar8 + 0x14) = uVar5;
    *(uint *)(puVar8 + 3) = uVar6;
    puVar8[4] = param_2;
    *(uint *)(puVar8 + 5) = param_5;
    puVar8[6] = uVar1;
    *puVar8 = &___7__TContextCacheElement_F_Dataflow_UE__6B_;
    *(short *)(puVar8 + 7) = *param_3;
  }
  if (local_28[0] != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*local_28[0];
    local_28[0] = puVar8;
    (*(code *)*puVar2)(puVar7,1);
    puVar8 = local_28[0];
  }
  local_28[0] = puVar8;
  if (local_28[0] == (undefined8 *)0x0) {
    SetNullData(this,param_1,param_2,param_4,param_5,param_6);
  }
  else {
    (**(code **)(this->_padding_ + 0x28))(this,param_1,local_28);
  }
  if (local_28[0] != (undefined8 *)0x0) {
    (**(code **)*local_28[0])(local_28[0],1);
  }
  return;
}

// SetData<unsigned_short> @ 14441c9f0

void __thiscall
UE::Dataflow::FContext::SetData<unsigned_short>
          (FContext *this,uint param_1,FProperty *param_2,ushort *param_3,FGuid *param_4,
          uint param_5,FTimestamp *param_6)

{
  ulong64 uVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *local_28 [2];
  
  local_28[0] = (undefined8 *)0x0;
  puVar8 = ::operator_new(0x40);
  puVar7 = local_28[0];
  if (puVar8 != (undefined8 *)0x0) {
    uVar3 = param_4->A;
    uVar4 = param_4->B;
    uVar5 = param_4->C;
    uVar6 = param_4->D;
    uVar1 = param_6->Value;
    *(undefined4 *)(puVar8 + 1) = 0;
    *(uint *)((longlong)puVar8 + 0xc) = uVar3;
    *(uint *)(puVar8 + 2) = uVar4;
    *(uint *)((longlong)puVar8 + 0x14) = uVar5;
    *(uint *)(puVar8 + 3) = uVar6;
    puVar8[4] = param_2;
    *(uint *)(puVar8 + 5) = param_5;
    puVar8[6] = uVar1;
    *puVar8 = &___7__TContextCacheElement_G_Dataflow_UE__6B_;
    *(ushort *)(puVar8 + 7) = *param_3;
  }
  if (local_28[0] != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*local_28[0];
    local_28[0] = puVar8;
    (*(code *)*puVar2)(puVar7,1);
    puVar8 = local_28[0];
  }
  local_28[0] = puVar8;
  if (local_28[0] == (undefined8 *)0x0) {
    SetNullData(this,param_1,param_2,param_4,param_5,param_6);
  }
  else {
    (**(code **)(this->_padding_ + 0x28))(this,param_1,local_28);
  }
  if (local_28[0] != (undefined8 *)0x0) {
    (**(code **)*local_28[0])(local_28[0],1);
  }
  return;
}

// SetData<int> @ 14441cb00

void __thiscall
UE::Dataflow::FContext::SetData<int>
          (FContext *this,uint param_1,FProperty *param_2,int *param_3,FGuid *param_4,uint param_5,
          FTimestamp *param_6)

{
  ulong64 uVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *local_28 [2];
  
  local_28[0] = (undefined8 *)0x0;
  puVar8 = ::operator_new(0x40);
  puVar7 = local_28[0];
  if (puVar8 != (undefined8 *)0x0) {
    uVar3 = param_4->A;
    uVar4 = param_4->B;
    uVar5 = param_4->C;
    uVar6 = param_4->D;
    uVar1 = param_6->Value;
    *(undefined4 *)(puVar8 + 1) = 0;
    *(uint *)((longlong)puVar8 + 0xc) = uVar3;
    *(uint *)(puVar8 + 2) = uVar4;
    *(uint *)((longlong)puVar8 + 0x14) = uVar5;
    *(uint *)(puVar8 + 3) = uVar6;
    puVar8[4] = param_2;
    *(uint *)(puVar8 + 5) = param_5;
    puVar8[6] = uVar1;
    *puVar8 = &___7__TContextCacheElement_H_Dataflow_UE__6B_;
    *(int *)(puVar8 + 7) = *param_3;
  }
  if (local_28[0] != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*local_28[0];
    local_28[0] = puVar8;
    (*(code *)*puVar2)(puVar7,1);
    puVar8 = local_28[0];
  }
  local_28[0] = puVar8;
  if (local_28[0] == (undefined8 *)0x0) {
    SetNullData(this,param_1,param_2,param_4,param_5,param_6);
  }
  else {
    (**(code **)(this->_padding_ + 0x28))(this,param_1,local_28);
  }
  if (local_28[0] != (undefined8 *)0x0) {
    (**(code **)*local_28[0])(local_28[0],1);
  }
  return;
}

// SetData<unsigned_int> @ 14441cc10

void __thiscall
UE::Dataflow::FContext::SetData<unsigned_int>
          (FContext *this,uint param_1,FProperty *param_2,uint *param_3,FGuid *param_4,uint param_5,
          FTimestamp *param_6)

{
  ulong64 uVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *local_28 [2];
  
  local_28[0] = (undefined8 *)0x0;
  puVar8 = ::operator_new(0x40);
  puVar7 = local_28[0];
  if (puVar8 != (undefined8 *)0x0) {
    uVar3 = param_4->A;
    uVar4 = param_4->B;
    uVar5 = param_4->C;
    uVar6 = param_4->D;
    uVar1 = param_6->Value;
    *(undefined4 *)(puVar8 + 1) = 0;
    *(uint *)((longlong)puVar8 + 0xc) = uVar3;
    *(uint *)(puVar8 + 2) = uVar4;
    *(uint *)((longlong)puVar8 + 0x14) = uVar5;
    *(uint *)(puVar8 + 3) = uVar6;
    puVar8[4] = param_2;
    *(uint *)(puVar8 + 5) = param_5;
    puVar8[6] = uVar1;
    *puVar8 = &___7__TContextCacheElement_I_Dataflow_UE__6B_;
    *(uint *)(puVar8 + 7) = *param_3;
  }
  if (local_28[0] != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*local_28[0];
    local_28[0] = puVar8;
    (*(code *)*puVar2)(puVar7,1);
    puVar8 = local_28[0];
  }
  local_28[0] = puVar8;
  if (local_28[0] == (undefined8 *)0x0) {
    SetNullData(this,param_1,param_2,param_4,param_5,param_6);
  }
  else {
    (**(code **)(this->_padding_ + 0x28))(this,param_1,local_28);
  }
  if (local_28[0] != (undefined8 *)0x0) {
    (**(code **)*local_28[0])(local_28[0],1);
  }
  return;
}

// SetData<float> @ 14441cd20

void __thiscall
UE::Dataflow::FContext::SetData<float>
          (FContext *this,uint param_1,FProperty *param_2,float *param_3,FGuid *param_4,uint param_5
          ,FTimestamp *param_6)

{
  ulong64 uVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *local_28 [2];
  
  local_28[0] = (undefined8 *)0x0;
  puVar8 = ::operator_new(0x40);
  puVar7 = local_28[0];
  if (puVar8 != (undefined8 *)0x0) {
    uVar3 = param_4->A;
    uVar4 = param_4->B;
    uVar5 = param_4->C;
    uVar6 = param_4->D;
    uVar1 = param_6->Value;
    *(undefined4 *)(puVar8 + 1) = 0;
    *(uint *)((longlong)puVar8 + 0xc) = uVar3;
    *(uint *)(puVar8 + 2) = uVar4;
    *(uint *)((longlong)puVar8 + 0x14) = uVar5;
    *(uint *)(puVar8 + 3) = uVar6;
    puVar8[4] = param_2;
    *(uint *)(puVar8 + 5) = param_5;
    puVar8[6] = uVar1;
    *puVar8 = &___7__TContextCacheElement_M_Dataflow_UE__6B_;
    *(float *)(puVar8 + 7) = *param_3;
  }
  if (local_28[0] != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*local_28[0];
    local_28[0] = puVar8;
    (*(code *)*puVar2)(puVar7,1);
    puVar8 = local_28[0];
  }
  local_28[0] = puVar8;
  if (local_28[0] == (undefined8 *)0x0) {
    SetNullData(this,param_1,param_2,param_4,param_5,param_6);
  }
  else {
    (**(code **)(this->_padding_ + 0x28))(this,param_1,local_28);
  }
  if (local_28[0] != (undefined8 *)0x0) {
    (**(code **)*local_28[0])(local_28[0],1);
  }
  return;
}

// SetData<double> @ 14441ce30

void __thiscall
UE::Dataflow::FContext::SetData<double>
          (FContext *this,uint param_1,FProperty *param_2,double *param_3,FGuid *param_4,
          uint param_5,FTimestamp *param_6)

{
  ulong64 uVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *local_28 [2];
  
  local_28[0] = (undefined8 *)0x0;
  puVar8 = ::operator_new(0x40);
  puVar7 = local_28[0];
  if (puVar8 != (undefined8 *)0x0) {
    uVar3 = param_4->A;
    uVar4 = param_4->B;
    uVar5 = param_4->C;
    uVar6 = param_4->D;
    uVar1 = param_6->Value;
    *(undefined4 *)(puVar8 + 1) = 0;
    *(uint *)((longlong)puVar8 + 0xc) = uVar3;
    *(uint *)(puVar8 + 2) = uVar4;
    *(uint *)((longlong)puVar8 + 0x14) = uVar5;
    *(uint *)(puVar8 + 3) = uVar6;
    puVar8[4] = param_2;
    *(uint *)(puVar8 + 5) = param_5;
    puVar8[6] = uVar1;
    *puVar8 = &___7__TContextCacheElement_N_Dataflow_UE__6B_;
    puVar8[7] = *param_3;
  }
  if (local_28[0] != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*local_28[0];
    local_28[0] = puVar8;
    (*(code *)*puVar2)(puVar7,1);
    puVar8 = local_28[0];
  }
  local_28[0] = puVar8;
  if (local_28[0] == (undefined8 *)0x0) {
    SetNullData(this,param_1,param_2,param_4,param_5,param_6);
  }
  else {
    (**(code **)(this->_padding_ + 0x28))(this,param_1,local_28);
  }
  if (local_28[0] != (undefined8 *)0x0) {
    (**(code **)*local_28[0])(local_28[0],1);
  }
  return;
}

// SetData<UE::Math::TIntPoint<int>_> @ 14441cf40

void __thiscall
UE::Dataflow::FContext::SetData<UE::Math::TIntPoint<int>_>
          (FContext *this,uint param_1,FProperty *param_2,TIntPoint<int> *param_3,FGuid *param_4,
          uint param_5,FTimestamp *param_6)

{
  longlong *plVar1;
  FContextCacheElementUStruct *pFVar2;
  FContextCacheElementUStruct *pFVar3;
  FContextCacheElementUStruct *local_48 [2];
  FGuid local_38;
  
  pFVar3 = (FContextCacheElementUStruct *)0x0;
  local_48[0] = (FContextCacheElementUStruct *)0x0;
  pFVar2 = ::operator_new(0x58);
  if (pFVar2 != (FContextCacheElementUStruct *)0x0) {
    local_38.A = param_4->A;
    local_38.B = param_4->B;
    local_38.C = param_4->C;
    local_38.D = param_4->D;
    pFVar3 = FContextCacheElementUStruct::FContextCacheElementUStruct<UE::Math::TIntPoint<int>_>
                       (pFVar2,&local_38,param_2,param_3,param_5,(FTimestamp)param_6->Value);
  }
  pFVar2 = local_48[0];
  if (local_48[0] != (FContextCacheElementUStruct *)0x0) {
    plVar1 = &local_48[0]->_padding_;
    local_48[0] = pFVar3;
    (**(code **)*plVar1)(pFVar2,1);
    pFVar3 = local_48[0];
  }
  local_48[0] = pFVar3;
  if (local_48[0] == (FContextCacheElementUStruct *)0x0) {
    SetNullData(this,param_1,param_2,param_4,param_5,param_6);
  }
  else {
    (**(code **)(this->_padding_ + 0x28))(this,param_1,local_48);
  }
  if (local_48[0] != (FContextCacheElementUStruct *)0x0) {
    (**(code **)local_48[0]->_padding_)(local_48[0],1);
  }
  return;
}

// SetData<UE::Math::TIntVector3<int>_> @ 14441d050

void __thiscall
UE::Dataflow::FContext::SetData<UE::Math::TIntVector3<int>_>
          (FContext *this,uint param_1,FProperty *param_2,TIntVector3<int> *param_3,FGuid *param_4,
          uint param_5,FTimestamp *param_6)

{
  longlong *plVar1;
  FContextCacheElementUStruct *pFVar2;
  FContextCacheElementUStruct *pFVar3;
  FContextCacheElementUStruct *local_48 [2];
  FGuid local_38;
  
  pFVar3 = (FContextCacheElementUStruct *)0x0;
  local_48[0] = (FContextCacheElementUStruct *)0x0;
  pFVar2 = ::operator_new(0x58);
  if (pFVar2 != (FContextCacheElementUStruct *)0x0) {
    local_38.A = param_4->A;
    local_38.B = param_4->B;
    local_38.C = param_4->C;
    local_38.D = param_4->D;
    pFVar3 = FContextCacheElementUStruct::FContextCacheElementUStruct<UE::Math::TIntVector3<int>_>
                       (pFVar2,&local_38,param_2,param_3,param_5,(FTimestamp)param_6->Value);
  }
  pFVar2 = local_48[0];
  if (local_48[0] != (FContextCacheElementUStruct *)0x0) {
    plVar1 = &local_48[0]->_padding_;
    local_48[0] = pFVar3;
    (**(code **)*plVar1)(pFVar2,1);
    pFVar3 = local_48[0];
  }
  local_48[0] = pFVar3;
  if (local_48[0] == (FContextCacheElementUStruct *)0x0) {
    SetNullData(this,param_1,param_2,param_4,param_5,param_6);
  }
  else {
    (**(code **)(this->_padding_ + 0x28))(this,param_1,local_48);
  }
  if (local_48[0] != (FContextCacheElementUStruct *)0x0) {
    (**(code **)local_48[0]->_padding_)(local_48[0],1);
  }
  return;
}

// SetData<UE::Math::TIntVector4<int>_> @ 14441d160

void __thiscall
UE::Dataflow::FContext::SetData<UE::Math::TIntVector4<int>_>
          (FContext *this,uint param_1,FProperty *param_2,TIntVector4<int> *param_3,FGuid *param_4,
          uint param_5,FTimestamp *param_6)

{
  longlong *plVar1;
  FContextCacheElementUStruct *pFVar2;
  FContextCacheElementUStruct *pFVar3;
  FContextCacheElementUStruct *local_48 [2];
  FGuid local_38;
  
  pFVar3 = (FContextCacheElementUStruct *)0x0;
  local_48[0] = (FContextCacheElementUStruct *)0x0;
  pFVar2 = ::operator_new(0x58);
  if (pFVar2 != (FContextCacheElementUStruct *)0x0) {
    local_38.A = param_4->A;
    local_38.B = param_4->B;
    local_38.C = param_4->C;
    local_38.D = param_4->D;
    pFVar3 = FContextCacheElementUStruct::FContextCacheElementUStruct<UE::Math::TIntVector4<int>_>
                       (pFVar2,&local_38,param_2,param_3,param_5,(FTimestamp)param_6->Value);
  }
  pFVar2 = local_48[0];
  if (local_48[0] != (FContextCacheElementUStruct *)0x0) {
    plVar1 = &local_48[0]->_padding_;
    local_48[0] = pFVar3;
    (**(code **)*plVar1)(pFVar2,1);
    pFVar3 = local_48[0];
  }
  local_48[0] = pFVar3;
  if (local_48[0] == (FContextCacheElementUStruct *)0x0) {
    SetNullData(this,param_1,param_2,param_4,param_5,param_6);
  }
  else {
    (**(code **)(this->_padding_ + 0x28))(this,param_1,local_48);
  }
  if (local_48[0] != (FContextCacheElementUStruct *)0x0) {
    (**(code **)local_48[0]->_padding_)(local_48[0],1);
  }
  return;
}

// SetData<UE::Math::TQuat<float>_> @ 14441d270

void __thiscall
UE::Dataflow::FContext::SetData<UE::Math::TQuat<float>_>
          (FContext *this,uint param_1,FProperty *param_2,TQuat<float> *param_3,FGuid *param_4,
          uint param_5,FTimestamp *param_6)

{
  ulong64 uVar1;
  undefined8 *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *local_28 [2];
  
  local_28[0] = (undefined8 *)0x0;
  puVar9 = ::operator_new(0x50);
  puVar8 = local_28[0];
  if (puVar9 != (undefined8 *)0x0) {
    uVar6 = *(undefined8 *)param_4;
    uVar7 = *(undefined8 *)&param_4->C;
    uVar1 = param_6->Value;
    *(undefined4 *)(puVar9 + 1) = 0;
    *(undefined8 *)((longlong)puVar9 + 0xc) = uVar6;
    *(undefined8 *)((longlong)puVar9 + 0x14) = uVar7;
    puVar9[4] = param_2;
    *(uint *)(puVar9 + 5) = param_5;
    puVar9[6] = uVar1;
    *puVar9 = &___7__TContextCacheElement_U__TQuat_M_Math_UE___Dataflow_UE__6B_;
    fVar3 = param_3->Y;
    fVar4 = param_3->Z;
    fVar5 = param_3->W;
    *(float *)(puVar9 + 8) = param_3->X;
    *(float *)((longlong)puVar9 + 0x44) = fVar3;
    *(float *)(puVar9 + 9) = fVar4;
    *(float *)((longlong)puVar9 + 0x4c) = fVar5;
  }
  if (local_28[0] != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*local_28[0];
    local_28[0] = puVar9;
    (*(code *)*puVar2)(puVar8,1);
    puVar9 = local_28[0];
  }
  local_28[0] = puVar9;
  if (local_28[0] == (undefined8 *)0x0) {
    SetNullData(this,param_1,param_2,param_4,param_5,param_6);
  }
  else {
    (**(code **)(this->_padding_ + 0x28))(this,param_1,local_28);
  }
  if (local_28[0] != (undefined8 *)0x0) {
    (**(code **)*local_28[0])(local_28[0],1);
  }
  return;
}

// SetData<UE::Math::TQuat<double>_> @ 14441d380

void __thiscall
UE::Dataflow::FContext::SetData<UE::Math::TQuat<double>_>
          (FContext *this,uint param_1,FProperty *param_2,TQuat<double> *param_3,FGuid *param_4,
          uint param_5,FTimestamp *param_6)

{
  longlong *plVar1;
  FContextCacheElementUStruct *pFVar2;
  FContextCacheElementUStruct *pFVar3;
  FContextCacheElementUStruct *local_48 [2];
  FGuid local_38;
  
  pFVar3 = (FContextCacheElementUStruct *)0x0;
  local_48[0] = (FContextCacheElementUStruct *)0x0;
  pFVar2 = ::operator_new(0x58);
  if (pFVar2 != (FContextCacheElementUStruct *)0x0) {
    local_38.A = param_4->A;
    local_38.B = param_4->B;
    local_38.C = param_4->C;
    local_38.D = param_4->D;
    pFVar3 = FContextCacheElementUStruct::FContextCacheElementUStruct<UE::Math::TQuat<double>_>
                       (pFVar2,&local_38,param_2,param_3,param_5,(FTimestamp)param_6->Value);
  }
  pFVar2 = local_48[0];
  if (local_48[0] != (FContextCacheElementUStruct *)0x0) {
    plVar1 = &local_48[0]->_padding_;
    local_48[0] = pFVar3;
    (**(code **)*plVar1)(pFVar2,1);
    pFVar3 = local_48[0];
  }
  local_48[0] = pFVar3;
  if (local_48[0] == (FContextCacheElementUStruct *)0x0) {
    SetNullData(this,param_1,param_2,param_4,param_5,param_6);
  }
  else {
    (**(code **)(this->_padding_ + 0x28))(this,param_1,local_48);
  }
  if (local_48[0] != (FContextCacheElementUStruct *)0x0) {
    (**(code **)local_48[0]->_padding_)(local_48[0],1);
  }
  return;
}

// SetData<UE::Math::TRotator<double>_> @ 14441d490

void __thiscall
UE::Dataflow::FContext::SetData<UE::Math::TRotator<double>_>
          (FContext *this,uint param_1,FProperty *param_2,TRotator<double> *param_3,FGuid *param_4,
          uint param_5,FTimestamp *param_6)

{
  longlong *plVar1;
  FContextCacheElementUStruct *pFVar2;
  FContextCacheElementUStruct *pFVar3;
  FContextCacheElementUStruct *local_48 [2];
  FGuid local_38;
  
  pFVar3 = (FContextCacheElementUStruct *)0x0;
  local_48[0] = (FContextCacheElementUStruct *)0x0;
  pFVar2 = ::operator_new(0x58);
  if (pFVar2 != (FContextCacheElementUStruct *)0x0) {
    local_38.A = param_4->A;
    local_38.B = param_4->B;
    local_38.C = param_4->C;
    local_38.D = param_4->D;
    pFVar3 = FContextCacheElementUStruct::FContextCacheElementUStruct<UE::Math::TRotator<double>_>
                       (pFVar2,&local_38,param_2,param_3,param_5,(FTimestamp)param_6->Value);
  }
  pFVar2 = local_48[0];
  if (local_48[0] != (FContextCacheElementUStruct *)0x0) {
    plVar1 = &local_48[0]->_padding_;
    local_48[0] = pFVar3;
    (**(code **)*plVar1)(pFVar2,1);
    pFVar3 = local_48[0];
  }
  local_48[0] = pFVar3;
  if (local_48[0] == (FContextCacheElementUStruct *)0x0) {
    SetNullData(this,param_1,param_2,param_4,param_5,param_6);
  }
  else {
    (**(code **)(this->_padding_ + 0x28))(this,param_1,local_48);
  }
  if (local_48[0] != (FContextCacheElementUStruct *)0x0) {
    (**(code **)local_48[0]->_padding_)(local_48[0],1);
  }
  return;
}

// SetData<UE::Math::TTransform<double>_> @ 14441d5a0

void __thiscall
UE::Dataflow::FContext::SetData<UE::Math::TTransform<double>_>
          (FContext *this,uint param_1,FProperty *param_2,TTransform<double> *param_3,FGuid *param_4
          ,uint param_5,FTimestamp *param_6)

{
  longlong *plVar1;
  FContextCacheElementUStruct *pFVar2;
  FContextCacheElementUStruct *pFVar3;
  FContextCacheElementUStruct *local_48 [2];
  FGuid local_38;
  
  pFVar3 = (FContextCacheElementUStruct *)0x0;
  local_48[0] = (FContextCacheElementUStruct *)0x0;
  pFVar2 = ::operator_new(0x58);
  if (pFVar2 != (FContextCacheElementUStruct *)0x0) {
    local_38.A = param_4->A;
    local_38.B = param_4->B;
    local_38.C = param_4->C;
    local_38.D = param_4->D;
    pFVar3 = FContextCacheElementUStruct::FContextCacheElementUStruct<UE::Math::TTransform<double>_>
                       (pFVar2,&local_38,param_2,param_3,param_5,(FTimestamp)param_6->Value);
  }
  pFVar2 = local_48[0];
  if (local_48[0] != (FContextCacheElementUStruct *)0x0) {
    plVar1 = &local_48[0]->_padding_;
    local_48[0] = pFVar3;
    (**(code **)*plVar1)(pFVar2,1);
    pFVar3 = local_48[0];
  }
  local_48[0] = pFVar3;
  if (local_48[0] == (FContextCacheElementUStruct *)0x0) {
    SetNullData(this,param_1,param_2,param_4,param_5,param_6);
  }
  else {
    (**(code **)(this->_padding_ + 0x28))(this,param_1,local_48);
  }
  if (local_48[0] != (FContextCacheElementUStruct *)0x0) {
    (**(code **)local_48[0]->_padding_)(local_48[0],1);
  }
  return;
}

// SetData<UE::Math::TVector2<float>_> @ 14441d6b0

void __thiscall
UE::Dataflow::FContext::SetData<UE::Math::TVector2<float>_>
          (FContext *this,uint param_1,FProperty *param_2,TVector2<float> *param_3,FGuid *param_4,
          uint param_5,FTimestamp *param_6)

{
  ulong64 uVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *local_28 [2];
  
  local_28[0] = (undefined8 *)0x0;
  puVar8 = ::operator_new(0x40);
  puVar7 = local_28[0];
  if (puVar8 != (undefined8 *)0x0) {
    uVar3 = param_4->A;
    uVar4 = param_4->B;
    uVar5 = param_4->C;
    uVar6 = param_4->D;
    uVar1 = param_6->Value;
    *(undefined4 *)(puVar8 + 1) = 0;
    *(uint *)((longlong)puVar8 + 0xc) = uVar3;
    *(uint *)(puVar8 + 2) = uVar4;
    *(uint *)((longlong)puVar8 + 0x14) = uVar5;
    *(uint *)(puVar8 + 3) = uVar6;
    puVar8[4] = param_2;
    *(uint *)(puVar8 + 5) = param_5;
    puVar8[6] = uVar1;
    *puVar8 = &___7__TContextCacheElement_U__TVector2_M_Math_UE___Dataflow_UE__6B_;
    ((TVector2<float>_u_0 *)(puVar8 + 7))->_s_0 = (TVector2<float>_u_0_s_0)param_3->field0_0x0;
  }
  if (local_28[0] != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*local_28[0];
    local_28[0] = puVar8;
    (*(code *)*puVar2)(puVar7,1);
    puVar8 = local_28[0];
  }
  local_28[0] = puVar8;
  if (local_28[0] == (undefined8 *)0x0) {
    SetNullData(this,param_1,param_2,param_4,param_5,param_6);
  }
  else {
    (**(code **)(this->_padding_ + 0x28))(this,param_1,local_28);
  }
  if (local_28[0] != (undefined8 *)0x0) {
    (**(code **)*local_28[0])(local_28[0],1);
  }
  return;
}

// SetData<UE::Math::TVector2<double>_> @ 14441d7c0

void __thiscall
UE::Dataflow::FContext::SetData<UE::Math::TVector2<double>_>
          (FContext *this,uint param_1,FProperty *param_2,TVector2<double> *param_3,FGuid *param_4,
          uint param_5,FTimestamp *param_6)

{
  longlong *plVar1;
  FContextCacheElementUStruct *pFVar2;
  FContextCacheElementUStruct *pFVar3;
  FContextCacheElementUStruct *local_48 [2];
  FGuid local_38;
  
  pFVar3 = (FContextCacheElementUStruct *)0x0;
  local_48[0] = (FContextCacheElementUStruct *)0x0;
  pFVar2 = ::operator_new(0x58);
  if (pFVar2 != (FContextCacheElementUStruct *)0x0) {
    local_38.A = param_4->A;
    local_38.B = param_4->B;
    local_38.C = param_4->C;
    local_38.D = param_4->D;
    pFVar3 = FContextCacheElementUStruct::FContextCacheElementUStruct<UE::Math::TVector2<double>_>
                       (pFVar2,&local_38,param_2,param_3,param_5,(FTimestamp)param_6->Value);
  }
  pFVar2 = local_48[0];
  if (local_48[0] != (FContextCacheElementUStruct *)0x0) {
    plVar1 = &local_48[0]->_padding_;
    local_48[0] = pFVar3;
    (**(code **)*plVar1)(pFVar2,1);
    pFVar3 = local_48[0];
  }
  local_48[0] = pFVar3;
  if (local_48[0] == (FContextCacheElementUStruct *)0x0) {
    SetNullData(this,param_1,param_2,param_4,param_5,param_6);
  }
  else {
    (**(code **)(this->_padding_ + 0x28))(this,param_1,local_48);
  }
  if (local_48[0] != (FContextCacheElementUStruct *)0x0) {
    (**(code **)local_48[0]->_padding_)(local_48[0],1);
  }
  return;
}

// SetData<UE::Math::TVector4<float>_> @ 14441d8d0

void __thiscall
UE::Dataflow::FContext::SetData<UE::Math::TVector4<float>_>
          (FContext *this,uint param_1,FProperty *param_2,TVector4<float> *param_3,FGuid *param_4,
          uint param_5,FTimestamp *param_6)

{
  ulong64 uVar1;
  undefined8 *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *local_28 [2];
  
  local_28[0] = (undefined8 *)0x0;
  puVar9 = ::operator_new(0x50);
  puVar8 = local_28[0];
  if (puVar9 != (undefined8 *)0x0) {
    uVar6 = *(undefined8 *)param_4;
    uVar7 = *(undefined8 *)&param_4->C;
    uVar1 = param_6->Value;
    *(undefined4 *)(puVar9 + 1) = 0;
    *(undefined8 *)((longlong)puVar9 + 0xc) = uVar6;
    *(undefined8 *)((longlong)puVar9 + 0x14) = uVar7;
    puVar9[4] = param_2;
    *(uint *)(puVar9 + 5) = param_5;
    puVar9[6] = uVar1;
    *puVar9 = &___7__TContextCacheElement_U__TVector4_M_Math_UE___Dataflow_UE__6B_;
    fVar3 = (param_3->field0_0x0)._s_0.Y;
    fVar4 = (param_3->field0_0x0)._s_0.Z;
    fVar5 = (param_3->field0_0x0)._s_0.W;
    *(float *)(puVar9 + 8) = (param_3->field0_0x0)._s_0.X;
    *(float *)((longlong)puVar9 + 0x44) = fVar3;
    *(float *)(puVar9 + 9) = fVar4;
    *(float *)((longlong)puVar9 + 0x4c) = fVar5;
  }
  if (local_28[0] != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*local_28[0];
    local_28[0] = puVar9;
    (*(code *)*puVar2)(puVar8,1);
    puVar9 = local_28[0];
  }
  local_28[0] = puVar9;
  if (local_28[0] == (undefined8 *)0x0) {
    SetNullData(this,param_1,param_2,param_4,param_5,param_6);
  }
  else {
    (**(code **)(this->_padding_ + 0x28))(this,param_1,local_28);
  }
  if (local_28[0] != (undefined8 *)0x0) {
    (**(code **)*local_28[0])(local_28[0],1);
  }
  return;
}

// SetData<UE::Math::TVector4<double>_> @ 14441d9e0

void __thiscall
UE::Dataflow::FContext::SetData<UE::Math::TVector4<double>_>
          (FContext *this,uint param_1,FProperty *param_2,TVector4<double> *param_3,FGuid *param_4,
          uint param_5,FTimestamp *param_6)

{
  longlong *plVar1;
  FContextCacheElementUStruct *pFVar2;
  FContextCacheElementUStruct *pFVar3;
  FContextCacheElementUStruct *local_48 [2];
  FGuid local_38;
  
  pFVar3 = (FContextCacheElementUStruct *)0x0;
  local_48[0] = (FContextCacheElementUStruct *)0x0;
  pFVar2 = ::operator_new(0x58);
  if (pFVar2 != (FContextCacheElementUStruct *)0x0) {
    local_38.A = param_4->A;
    local_38.B = param_4->B;
    local_38.C = param_4->C;
    local_38.D = param_4->D;
    pFVar3 = FContextCacheElementUStruct::FContextCacheElementUStruct<UE::Math::TVector4<double>_>
                       (pFVar2,&local_38,param_2,param_3,param_5,(FTimestamp)param_6->Value);
  }
  pFVar2 = local_48[0];
  if (local_48[0] != (FContextCacheElementUStruct *)0x0) {
    plVar1 = &local_48[0]->_padding_;
    local_48[0] = pFVar3;
    (**(code **)*plVar1)(pFVar2,1);
    pFVar3 = local_48[0];
  }
  local_48[0] = pFVar3;
  if (local_48[0] == (FContextCacheElementUStruct *)0x0) {
    SetNullData(this,param_1,param_2,param_4,param_5,param_6);
  }
  else {
    (**(code **)(this->_padding_ + 0x28))(this,param_1,local_48);
  }
  if (local_48[0] != (FContextCacheElementUStruct *)0x0) {
    (**(code **)local_48[0]->_padding_)(local_48[0],1);
  }
  return;
}

// SetData<UE::Math::TVector<float>_> @ 14441daf0

void __thiscall
UE::Dataflow::FContext::SetData<UE::Math::TVector<float>_>
          (FContext *this,uint param_1,FProperty *param_2,TVector<float> *param_3,FGuid *param_4,
          uint param_5,FTimestamp *param_6)

{
  ulong64 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *local_28 [2];
  
  local_28[0] = (undefined8 *)0x0;
  puVar6 = ::operator_new(0x48);
  puVar5 = local_28[0];
  if (puVar6 != (undefined8 *)0x0) {
    uVar3 = *(undefined8 *)param_4;
    uVar4 = *(undefined8 *)&param_4->C;
    uVar1 = param_6->Value;
    *(undefined4 *)(puVar6 + 1) = 0;
    *(undefined8 *)((longlong)puVar6 + 0xc) = uVar3;
    *(undefined8 *)((longlong)puVar6 + 0x14) = uVar4;
    puVar6[4] = param_2;
    *(uint *)(puVar6 + 5) = param_5;
    puVar6[6] = uVar1;
    *puVar6 = &___7__TContextCacheElement_U__TVector_M_Math_UE___Dataflow_UE__6B_;
    puVar6[7] = *(undefined8 *)&param_3->field0_0x0;
    *(float *)(puVar6 + 8) = (param_3->field0_0x0)._s_0.Z;
  }
  if (local_28[0] != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*local_28[0];
    local_28[0] = puVar6;
    (*(code *)*puVar2)(puVar5,1);
    puVar6 = local_28[0];
  }
  local_28[0] = puVar6;
  if (local_28[0] == (undefined8 *)0x0) {
    SetNullData(this,param_1,param_2,param_4,param_5,param_6);
  }
  else {
    (**(code **)(this->_padding_ + 0x28))(this,param_1,local_28);
  }
  if (local_28[0] != (undefined8 *)0x0) {
    (**(code **)*local_28[0])(local_28[0],1);
  }
  return;
}

// SetData<UE::Math::TVector<double>_> @ 14441dc10

void __thiscall
UE::Dataflow::FContext::SetData<UE::Math::TVector<double>_>
          (FContext *this,uint param_1,FProperty *param_2,TVector<double> *param_3,FGuid *param_4,
          uint param_5,FTimestamp *param_6)

{
  longlong *plVar1;
  FContextCacheElementUStruct *pFVar2;
  FContextCacheElementUStruct *pFVar3;
  FContextCacheElementUStruct *local_48 [2];
  FGuid local_38;
  
  pFVar3 = (FContextCacheElementUStruct *)0x0;
  local_48[0] = (FContextCacheElementUStruct *)0x0;
  pFVar2 = ::operator_new(0x58);
  if (pFVar2 != (FContextCacheElementUStruct *)0x0) {
    local_38.A = param_4->A;
    local_38.B = param_4->B;
    local_38.C = param_4->C;
    local_38.D = param_4->D;
    pFVar3 = FContextCacheElementUStruct::FContextCacheElementUStruct<UE::Math::TVector<double>_>
                       (pFVar2,&local_38,param_2,param_3,param_5,(FTimestamp)param_6->Value);
  }
  pFVar2 = local_48[0];
  if (local_48[0] != (FContextCacheElementUStruct *)0x0) {
    plVar1 = &local_48[0]->_padding_;
    local_48[0] = pFVar3;
    (**(code **)*plVar1)(pFVar2,1);
    pFVar3 = local_48[0];
  }
  local_48[0] = pFVar3;
  if (local_48[0] == (FContextCacheElementUStruct *)0x0) {
    SetNullData(this,param_1,param_2,param_4,param_5,param_6);
  }
  else {
    (**(code **)(this->_padding_ + 0x28))(this,param_1,local_48);
  }
  if (local_48[0] != (FContextCacheElementUStruct *)0x0) {
    (**(code **)local_48[0]->_padding_)(local_48[0],1);
  }
  return;
}

// SetData<FLinearColor> @ 14441dd20

void __thiscall
UE::Dataflow::FContext::SetData<FLinearColor>
          (FContext *this,uint param_1,FProperty *param_2,FLinearColor *param_3,FGuid *param_4,
          uint param_5,FTimestamp *param_6)

{
  longlong *plVar1;
  FContextCacheElementUStruct *pFVar2;
  FContextCacheElementUStruct *pFVar3;
  FContextCacheElementUStruct *local_48 [2];
  FGuid local_38;
  
  pFVar3 = (FContextCacheElementUStruct *)0x0;
  local_48[0] = (FContextCacheElementUStruct *)0x0;
  pFVar2 = ::operator_new(0x58);
  if (pFVar2 != (FContextCacheElementUStruct *)0x0) {
    local_38.A = param_4->A;
    local_38.B = param_4->B;
    local_38.C = param_4->C;
    local_38.D = param_4->D;
    pFVar3 = FContextCacheElementUStruct::FContextCacheElementUStruct<FLinearColor>
                       (pFVar2,&local_38,param_2,param_3,param_5,(FTimestamp)param_6->Value);
  }
  pFVar2 = local_48[0];
  if (local_48[0] != (FContextCacheElementUStruct *)0x0) {
    plVar1 = &local_48[0]->_padding_;
    local_48[0] = pFVar3;
    (**(code **)*plVar1)(pFVar2,1);
    pFVar3 = local_48[0];
  }
  local_48[0] = pFVar3;
  if (local_48[0] == (FContextCacheElementUStruct *)0x0) {
    SetNullData(this,param_1,param_2,param_4,param_5,param_6);
  }
  else {
    (**(code **)(this->_padding_ + 0x28))(this,param_1,local_48);
  }
  if (local_48[0] != (FContextCacheElementUStruct *)0x0) {
    (**(code **)local_48[0]->_padding_)(local_48[0],1);
  }
  return;
}

// SetData<TArray<int,TSizedDefaultAllocator<32>_>_> @ 14441de30

void __thiscall
UE::Dataflow::FContext::SetData<TArray<int,TSizedDefaultAllocator<32>_>_>
          (FContext *this,uint param_1,FProperty *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3,FGuid *param_4,uint param_5,
          FTimestamp *param_6)

{
  ulong64 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *local_38 [2];
  
  puVar8 = (undefined8 *)0x0;
  local_38[0] = (undefined8 *)0x0;
  puVar7 = ::operator_new(0x48);
  puVar6 = local_38[0];
  if (puVar7 != (undefined8 *)0x0) {
    uVar2 = param_4->A;
    uVar3 = param_4->B;
    uVar4 = param_4->C;
    uVar5 = param_4->D;
    uVar1 = param_6->Value;
    *(undefined4 *)(puVar7 + 1) = 0;
    *(uint *)((longlong)puVar7 + 0xc) = uVar2;
    *(uint *)(puVar7 + 2) = uVar3;
    *(uint *)((longlong)puVar7 + 0x14) = uVar4;
    *(uint *)(puVar7 + 3) = uVar5;
    puVar7[4] = param_2;
    *(uint *)(puVar7 + 5) = param_5;
    puVar7[6] = uVar1;
    *puVar7 = &
              ___7__TContextCacheElement_V__TArray_HV__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
    ;
    puVar7[7] = 0;
    puVar7[7] = (param_3->AllocatorInstance).Data;
    (param_3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(int *)(puVar7 + 8) = param_3->ArrayNum;
    *(int *)((longlong)puVar7 + 0x44) = param_3->ArrayMax;
    param_3->ArrayNum = 0;
    param_3->ArrayMax = 0;
    puVar8 = puVar7;
  }
  if (local_38[0] != (undefined8 *)0x0) {
    puVar7 = (undefined8 *)*local_38[0];
    local_38[0] = puVar8;
    (*(code *)*puVar7)(puVar6,1);
    puVar8 = local_38[0];
  }
  local_38[0] = puVar8;
  if (local_38[0] == (undefined8 *)0x0) {
    SetNullData(this,param_1,param_2,param_4,param_5,param_6);
  }
  else {
    (**(code **)(this->_padding_ + 0x28))(this,param_1,local_38);
  }
  if (local_38[0] != (undefined8 *)0x0) {
    (**(code **)*local_38[0])(local_38[0],1);
  }
  return;
}

// SetData<FName> @ 14441df60

void __thiscall
UE::Dataflow::FContext::SetData<FName>
          (FContext *this,uint param_1,FProperty *param_2,FName *param_3,FGuid *param_4,uint param_5
          ,FTimestamp *param_6)

{
  ulong64 uVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *local_28 [2];
  
  local_28[0] = (undefined8 *)0x0;
  puVar8 = ::operator_new(0x40);
  puVar7 = local_28[0];
  if (puVar8 != (undefined8 *)0x0) {
    uVar3 = param_4->A;
    uVar4 = param_4->B;
    uVar5 = param_4->C;
    uVar6 = param_4->D;
    uVar1 = param_6->Value;
    *(undefined4 *)(puVar8 + 1) = 0;
    *(uint *)((longlong)puVar8 + 0xc) = uVar3;
    *(uint *)(puVar8 + 2) = uVar4;
    *(uint *)((longlong)puVar8 + 0x14) = uVar5;
    *(uint *)(puVar8 + 3) = uVar6;
    puVar8[4] = param_2;
    *(uint *)(puVar8 + 5) = param_5;
    puVar8[6] = uVar1;
    *puVar8 = &___7__TContextCacheElement_VFName___Dataflow_UE__6B_;
    *(FName *)(puVar8 + 7) = *param_3;
  }
  if (local_28[0] != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*local_28[0];
    local_28[0] = puVar8;
    (*(code *)*puVar2)(puVar7,1);
    puVar8 = local_28[0];
  }
  local_28[0] = puVar8;
  if (local_28[0] == (undefined8 *)0x0) {
    SetNullData(this,param_1,param_2,param_4,param_5,param_6);
  }
  else {
    (**(code **)(this->_padding_ + 0x28))(this,param_1,local_28);
  }
  if (local_28[0] != (undefined8 *)0x0) {
    (**(code **)*local_28[0])(local_28[0],1);
  }
  return;
}

// SetData<FString> @ 14441e070

void __thiscall
UE::Dataflow::FContext::SetData<FString>
          (FContext *this,uint param_1,FProperty *param_2,FString *param_3,FGuid *param_4,
          uint param_5,FTimestamp *param_6)

{
  ulong64 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *local_38 [2];
  
  puVar8 = (undefined8 *)0x0;
  local_38[0] = (undefined8 *)0x0;
  puVar7 = ::operator_new(0x48);
  puVar6 = local_38[0];
  if (puVar7 != (undefined8 *)0x0) {
    uVar2 = param_4->A;
    uVar3 = param_4->B;
    uVar4 = param_4->C;
    uVar5 = param_4->D;
    uVar1 = param_6->Value;
    *(undefined4 *)(puVar7 + 1) = 0;
    *(uint *)((longlong)puVar7 + 0xc) = uVar2;
    *(uint *)(puVar7 + 2) = uVar3;
    *(uint *)((longlong)puVar7 + 0x14) = uVar4;
    *(uint *)(puVar7 + 3) = uVar5;
    puVar7[4] = param_2;
    *(uint *)(puVar7 + 5) = param_5;
    puVar7[6] = uVar1;
    *puVar7 = &___7__TContextCacheElement_VFString___Dataflow_UE__6B_;
    puVar7[7] = 0;
    puVar7[7] = (param_3->Data).AllocatorInstance.Data;
    (param_3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(puVar7 + 8) = (param_3->Data).ArrayNum;
    *(int *)((longlong)puVar7 + 0x44) = (param_3->Data).ArrayMax;
    (param_3->Data).ArrayNum = 0;
    (param_3->Data).ArrayMax = 0;
    puVar8 = puVar7;
  }
  if (local_38[0] != (undefined8 *)0x0) {
    puVar7 = (undefined8 *)*local_38[0];
    local_38[0] = puVar8;
    (*(code *)*puVar7)(puVar6,1);
    puVar8 = local_38[0];
  }
  local_38[0] = puVar8;
  if (local_38[0] == (undefined8 *)0x0) {
    SetNullData(this,param_1,param_2,param_4,param_5,param_6);
  }
  else {
    (**(code **)(this->_padding_ + 0x28))(this,param_1,local_38);
  }
  if (local_38[0] != (undefined8 *)0x0) {
    (**(code **)*local_38[0])(local_38[0],1);
  }
  return;
}

// SetData<FText> @ 14441e1a0

void __thiscall
UE::Dataflow::FContext::SetData<FText>
          (FContext *this,uint param_1,FProperty *param_2,FText *param_3,FGuid *param_4,uint param_5
          ,FTimestamp *param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *local_38 [2];
  
  local_38[0] = (undefined8 *)0x0;
  puVar5 = ::operator_new(0x48);
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)0x0;
  }
  else {
    uVar2 = *(undefined8 *)param_4;
    uVar3 = *(undefined8 *)&param_4->C;
    puVar5[6] = param_6->Value;
    *(undefined4 *)(puVar5 + 1) = 0;
    *puVar5 = &___7__TContextCacheElement_VFText___Dataflow_UE__6B_;
    *(undefined8 *)((longlong)puVar5 + 0xc) = uVar2;
    *(undefined8 *)((longlong)puVar5 + 0x14) = uVar3;
    puVar5[4] = param_2;
    *(uint *)(puVar5 + 5) = param_5;
    FText::FText((FText *)(puVar5 + 7),param_3);
  }
  puVar4 = local_38[0];
  if (local_38[0] != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*local_38[0];
    local_38[0] = puVar5;
    (*(code *)*puVar1)(puVar4,1);
    puVar5 = local_38[0];
  }
  local_38[0] = puVar5;
  if (local_38[0] == (undefined8 *)0x0) {
    SetNullData(this,param_1,param_2,param_4,param_5,param_6);
  }
  else {
    (**(code **)(this->_padding_ + 0x28))(this,param_1,local_38);
  }
  if (local_38[0] != (undefined8 *)0x0) {
    (**(code **)*local_38[0])(local_38[0],1);
  }
  return;
}

// SetData<__int64> @ 14441e2c0

void __thiscall
UE::Dataflow::FContext::SetData<__int64>
          (FContext *this,uint param_1,FProperty *param_2,long64 *param_3,FGuid *param_4,
          uint param_5,FTimestamp *param_6)

{
  ulong64 uVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *local_28 [2];
  
  local_28[0] = (undefined8 *)0x0;
  puVar8 = ::operator_new(0x40);
  puVar7 = local_28[0];
  if (puVar8 != (undefined8 *)0x0) {
    uVar3 = param_4->A;
    uVar4 = param_4->B;
    uVar5 = param_4->C;
    uVar6 = param_4->D;
    uVar1 = param_6->Value;
    *(undefined4 *)(puVar8 + 1) = 0;
    *(uint *)((longlong)puVar8 + 0xc) = uVar3;
    *(uint *)(puVar8 + 2) = uVar4;
    *(uint *)((longlong)puVar8 + 0x14) = uVar5;
    *(uint *)(puVar8 + 3) = uVar6;
    puVar8[4] = param_2;
    *(uint *)(puVar8 + 5) = param_5;
    puVar8[6] = uVar1;
    *puVar8 = &___7__TContextCacheElement__J_Dataflow_UE__6B_;
    puVar8[7] = *param_3;
  }
  if (local_28[0] != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*local_28[0];
    local_28[0] = puVar8;
    (*(code *)*puVar2)(puVar7,1);
    puVar8 = local_28[0];
  }
  local_28[0] = puVar8;
  if (local_28[0] == (undefined8 *)0x0) {
    SetNullData(this,param_1,param_2,param_4,param_5,param_6);
  }
  else {
    (**(code **)(this->_padding_ + 0x28))(this,param_1,local_28);
  }
  if (local_28[0] != (undefined8 *)0x0) {
    (**(code **)*local_28[0])(local_28[0],1);
  }
  return;
}

// SetData<unsigned___int64> @ 14441e3d0

void __thiscall
UE::Dataflow::FContext::SetData<unsigned___int64>
          (FContext *this,uint param_1,FProperty *param_2,ulong64 *param_3,FGuid *param_4,
          uint param_5,FTimestamp *param_6)

{
  ulong64 uVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *local_28 [2];
  
  local_28[0] = (undefined8 *)0x0;
  puVar8 = ::operator_new(0x40);
  puVar7 = local_28[0];
  if (puVar8 != (undefined8 *)0x0) {
    uVar3 = param_4->A;
    uVar4 = param_4->B;
    uVar5 = param_4->C;
    uVar6 = param_4->D;
    uVar1 = param_6->Value;
    *(undefined4 *)(puVar8 + 1) = 0;
    *(uint *)((longlong)puVar8 + 0xc) = uVar3;
    *(uint *)(puVar8 + 2) = uVar4;
    *(uint *)((longlong)puVar8 + 0x14) = uVar5;
    *(uint *)(puVar8 + 3) = uVar6;
    puVar8[4] = param_2;
    *(uint *)(puVar8 + 5) = param_5;
    puVar8[6] = uVar1;
    *puVar8 = &___7__TContextCacheElement__K_Dataflow_UE__6B_;
    puVar8[7] = *param_3;
  }
  if (local_28[0] != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*local_28[0];
    local_28[0] = puVar8;
    (*(code *)*puVar2)(puVar7,1);
    puVar8 = local_28[0];
  }
  local_28[0] = puVar8;
  if (local_28[0] == (undefined8 *)0x0) {
    SetNullData(this,param_1,param_2,param_4,param_5,param_6);
  }
  else {
    (**(code **)(this->_padding_ + 0x28))(this,param_1,local_28);
  }
  if (local_28[0] != (undefined8 *)0x0) {
    (**(code **)*local_28[0])(local_28[0],1);
  }
  return;
}

// SetData<bool> @ 14441e4e0

void __thiscall
UE::Dataflow::FContext::SetData<bool>
          (FContext *this,uint param_1,FProperty *param_2,bool *param_3,FGuid *param_4,uint param_5,
          FTimestamp *param_6)

{
  ulong64 uVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *local_28 [2];
  
  local_28[0] = (undefined8 *)0x0;
  puVar8 = ::operator_new(0x40);
  puVar7 = local_28[0];
  if (puVar8 != (undefined8 *)0x0) {
    uVar3 = param_4->A;
    uVar4 = param_4->B;
    uVar5 = param_4->C;
    uVar6 = param_4->D;
    uVar1 = param_6->Value;
    *(undefined4 *)(puVar8 + 1) = 0;
    *(uint *)((longlong)puVar8 + 0xc) = uVar3;
    *(uint *)(puVar8 + 2) = uVar4;
    *(uint *)((longlong)puVar8 + 0x14) = uVar5;
    *(uint *)(puVar8 + 3) = uVar6;
    puVar8[4] = param_2;
    *(uint *)(puVar8 + 5) = param_5;
    puVar8[6] = uVar1;
    *puVar8 = &___7__TContextCacheElement__N_Dataflow_UE__6B_;
    *(bool *)(puVar8 + 7) = *param_3;
  }
  if (local_28[0] != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*local_28[0];
    local_28[0] = puVar8;
    (*(code *)*puVar2)(puVar7,1);
    puVar8 = local_28[0];
  }
  local_28[0] = puVar8;
  if (local_28[0] == (undefined8 *)0x0) {
    SetNullData(this,param_1,param_2,param_4,param_5,param_6);
  }
  else {
    (**(code **)(this->_padding_ + 0x28))(this,param_1,local_28);
  }
  if (local_28[0] != (undefined8 *)0x0) {
    (**(code **)*local_28[0])(local_28[0],1);
  }
  return;
}

// AddAsset @ 144436dc0

UObject * __thiscall
UE::Dataflow::FContext::AddAsset(FContext *this,FString *param_1,UClass *param_2)

{
  UObject *pUVar1;
  
  pUVar1 = FContextAssetStore::AddAsset
                     ((FContextAssetStore *)&(this->NodesFailed).HashSize,param_1,param_2);
  return pUVar1;
}

// AddExternalPerfData @ 144437150

void __thiscall
UE::Dataflow::FContext::AddExternalPerfData(FContext *this,FContextPerfData *param_1)

{
  return;
}

// BeginContextEvaluation @ 144437fc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Dataflow::FContext::BeginContextEvaluation
          (FContext *this,FDataflowNode *param_1,FDataflowOutput *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  bool bVar3;
  ulonglong uVar4;
  ForAnyElementType FVar5;
  FName local_res18;
  TArray<FDataflowOutput_*,TSizedDefaultAllocator<32>_> local_18;
  
  if (param_2 != (FDataflowOutput *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144437fe5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x50))(this,param_2);
    return;
  }
  if (param_1 != (FDataflowNode *)0x0) {
    if (*(int *)&(param_1->ExpandedOutputs).field_0x8 ==
        *(int *)&(param_1->ExpandedOutputs).field_0x34) {
      if (((param_1->bActive != false) && (bDataflowEnableGraphEval)) &&
         (param_1->bIsFrozen == false)) {
        if (((this->DataLock).Ptr == (FWindowsRecursiveMutex *)0x0) &&
           (bVar3 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                               &this->OnNodeBeginEvaluateMulticast), bVar3)) {
          TMulticastDelegate<void___cdecl(FDataflowNode_const_*,FDataflowOutput_const_*),FDefaultDelegateUserPolicy>
          ::Broadcast(&this->OnNodeBeginEvaluateMulticast,param_1,(FDataflowOutput *)0x0);
        }
        if (5 < (byte)LogChaosDataflow._0_1_) {
          local_res18 = param_1->Name;
          ::FName::ToString(&local_res18,(FString *)&local_18);
          Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogChaosDataflow);
          if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_18.AllocatorInstance.Data);
          }
        }
        (**(code **)(param_1->_padding_ + 0xc0))(param_1,this);
        if (((this->DataLock).Ptr == (FWindowsRecursiveMutex *)0x0) &&
           (bVar3 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                               &this->OnNodeFinishEvaluateMulticast), bVar3)) {
          TMulticastDelegate<void___cdecl(FDataflowNode_const_*,FDataflowOutput_const_*),FDefaultDelegateUserPolicy>
          ::Broadcast(&this->OnNodeFinishEvaluateMulticast,param_1,(FDataflowOutput *)0x0);
          return;
        }
      }
    }
    else {
      local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_18.ArrayNum = 0;
      local_18.ArrayMax = 0;
      TMapBase<UE::Dataflow::FConnectionKey,FDataflowOutput_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowOutput_*,0>_>
      ::GenerateValueArray<TSizedDefaultAllocator<32>_>
                ((TMapBase<UE::Dataflow::FConnectionKey,FDataflowOutput_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowOutput_*,0>_>
                  *)&param_1->ExpandedOutputs,&local_18);
      iVar2 = local_18.ArrayNum;
      uVar4 = (ulonglong)local_18.ArrayNum;
      pFVar1 = local_18.AllocatorInstance.Data + uVar4 * 8;
      FVar5.Data = local_18.AllocatorInstance.Data;
      while( true ) {
        if ((int)uVar4 != iVar2) {
          `TCheckedPointerIterator<FDataflowOutput_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_res18);
        }
        if (FVar5.Data == pFVar1) break;
        (**(code **)(this->_padding_ + 0x50))(this,*(undefined8 *)FVar5.Data);
        uVar4 = local_18._8_8_ & 0xffffffff;
        FVar5.Data = FVar5.Data + 8;
      }
      if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.AllocatorInstance.Data);
      }
    }
    return;
  }
  `UE::Dataflow::FContext::BeginContextEvaluation'::__l46::<lambda_1>::operator()(&local_res18);
  return;
}

// CancelAsyncEvaluation @ 1444385a0

void __thiscall UE::Dataflow::FContext::CancelAsyncEvaluation(FContext *this)

{
  int iVar1;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *this_00;
  
  TSet<TTuple<FGuid,UE::Dataflow::FContextEvaluator::FEvaluationEntry>,TDefaultMapHashableKeyFuncs<FGuid,UE::Dataflow::FContextEvaluator::FEvaluationEntry,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FGuid,UE::Dataflow::FContextEvaluator::FEvaluationEntry>,TDefaultMapHashableKeyFuncs<FGuid,UE::Dataflow::FContextEvaluator::FEvaluationEntry,0>,FDefaultSetAllocator>
           *)&(this->AsyncEvaluator).PendingEvaluationEntries);
  this_00 = &(this->AsyncEvaluator).CompletedTasks;
  if (*(int *)&(this->AsyncEvaluator).CompletedTasks.Elements.field_0x8 !=
      *(int *)&(this->AsyncEvaluator).CompletedTasks.Elements.field_0x34) {
    TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::UnhashElements(this_00);
    iVar1 = *(int *)&(this->AsyncEvaluator).CompletedTasks.Elements.field_0xc;
    *(undefined4 *)&(this->AsyncEvaluator).CompletedTasks.Elements.field_0x8 = 0;
    if (iVar1 < 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,4,0,(ForAnyElementType *)this_00,0,
                 (int *)&(this->AsyncEvaluator).CompletedTasks.Elements.field_0xc);
    }
    *(undefined4 *)&(this->AsyncEvaluator).CompletedTasks.Elements.field_0x34 = 0;
    *(undefined4 *)&(this->AsyncEvaluator).CompletedTasks.Elements.field_0x28 = 0;
    *(undefined4 *)&(this->AsyncEvaluator).CompletedTasks.Elements.field_0x30 = 0xffffffff;
  }
  return;
}

// CheckIntrinsicInputs @ 144438620

void __thiscall
UE::Dataflow::FContext::CheckIntrinsicInputs(FContext *this,FDataflowOutput *param_1)

{
  return;
}

// ClearAllData @ 1444386f0

void __thiscall UE::Dataflow::FContext::ClearAllData(FContext *this)

{
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(this->DataLock).Ptr;
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    EnterCriticalSection(lpCriticalSection);
    TSet<TTuple<unsigned_int,TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<unsigned_int,TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>,0>,FDefaultSetAllocator>
             *)&this->DataStore);
                    /* WARNING: Could not recover jumptable at 0x000144438725. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(lpCriticalSection);
    return;
  }
  TSet<TTuple<unsigned_int,TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<unsigned_int,TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>,0>,FDefaultSetAllocator>
           *)&this->DataStore);
  return;
}

// ClearAllPerfData @ 144438750

void __thiscall UE::Dataflow::FContext::ClearAllPerfData(FContext *this)

{
  return;
}

// ClearAssets @ 144438760

void __thiscall UE::Dataflow::FContext::ClearAssets(FContext *this)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = &(this->AssetStore)._padding_;
  DestructItems<UE::Dataflow::FContextAssetStore::FAssetData,int>
            ((FAssetData *)*plVar2,*(int *)&(this->AssetStore).AssetData.AllocatorInstance.Data);
  piVar1 = (int *)((longlong)&(this->AssetStore).AssetData.AllocatorInstance.Data + 4);
  *(undefined4 *)&(this->AssetStore).AssetData.AllocatorInstance.Data = 0;
  if (*piVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)plVar2,0,piVar1);
  }
  return;
}

// ClearNodeData @ 144438dc0

void __thiscall UE::Dataflow::FContext::ClearNodeData(FContext *this,FDataflowNode *param_1)

{
  TSet<FDataflowNode_const_*,DefaultKeyFuncs<FDataflowNode_const_*,0>,FDefaultSetAllocator>::Remove
            (&this->NodesWithInfo,param_1);
  TSet<FDataflowNode_const_*,DefaultKeyFuncs<FDataflowNode_const_*,0>,FDefaultSetAllocator>::Remove
            (&this->NodesWithWarning,param_1);
  TSet<FDataflowNode_const_*,DefaultKeyFuncs<FDataflowNode_const_*,0>,FDefaultSetAllocator>::Remove
            (&this->NodesWithError,param_1);
  TSet<FDataflowNode_const_*,DefaultKeyFuncs<FDataflowNode_const_*,0>,FDefaultSetAllocator>::Remove
            (&this->NodesFailed,param_1);
  return;
}

// ClearNodesData @ 144438e20

void __thiscall UE::Dataflow::FContext::ClearNodesData(FContext *this)

{
  undefined1 *puVar1;
  TSet<FDataflowNode_const_*,DefaultKeyFuncs<FDataflowNode_const_*,0>,FDefaultSetAllocator> *pTVar2;
  int iVar3;
  bool bVar4;
  
  pTVar2 = &this->NodesWithInfo;
  bVar4 = 1 < (this->NodesWithInfo).HashSize;
  if (!bVar4) {
    TSet<FDataflowNode_const_*,DefaultKeyFuncs<FDataflowNode_const_*,0>,FDefaultSetAllocator>::
    UnhashElements(pTVar2);
  }
  puVar1 = &(this->NodesWithInfo).Elements.field_0xc;
  *(undefined4 *)&(this->NodesWithInfo).Elements.field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)pTVar2,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->NodesWithInfo).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NodesWithInfo).Elements.field_0x34 = 0;
  iVar3 = *(int *)&(this->NodesWithInfo).Elements.field_0x2c;
  *(undefined4 *)&(this->NodesWithInfo).Elements.field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(this->NodesWithInfo).Elements.field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->NodesWithInfo).Elements.field_0x10,0)
    ;
  }
  if (bVar4) {
    (this->NodesWithInfo).HashSize = 1;
    TSet<FDataflowNode_const_*,DefaultKeyFuncs<FDataflowNode_const_*,0>,FDefaultSetAllocator>::
    Rehash(pTVar2);
  }
  pTVar2 = &this->NodesWithWarning;
  bVar4 = 1 < (this->NodesWithWarning).HashSize;
  if (!bVar4) {
    TSet<FDataflowNode_const_*,DefaultKeyFuncs<FDataflowNode_const_*,0>,FDefaultSetAllocator>::
    UnhashElements(pTVar2);
  }
  puVar1 = &(this->NodesWithWarning).Elements.field_0xc;
  *(undefined4 *)&(this->NodesWithWarning).Elements.field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)pTVar2,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->NodesWithWarning).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NodesWithWarning).Elements.field_0x34 = 0;
  iVar3 = *(int *)&(this->NodesWithWarning).Elements.field_0x2c;
  *(undefined4 *)&(this->NodesWithWarning).Elements.field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(this->NodesWithWarning).Elements.field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->NodesWithWarning).Elements.field_0x10
               ,0);
  }
  if (bVar4) {
    (this->NodesWithWarning).HashSize = 1;
    TSet<FDataflowNode_const_*,DefaultKeyFuncs<FDataflowNode_const_*,0>,FDefaultSetAllocator>::
    Rehash(pTVar2);
  }
  pTVar2 = &this->NodesWithError;
  bVar4 = 1 < (this->NodesWithError).HashSize;
  if (!bVar4) {
    TSet<FDataflowNode_const_*,DefaultKeyFuncs<FDataflowNode_const_*,0>,FDefaultSetAllocator>::
    UnhashElements(pTVar2);
  }
  puVar1 = &(this->NodesWithError).Elements.field_0xc;
  *(undefined4 *)&(this->NodesWithError).Elements.field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)pTVar2,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->NodesWithError).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NodesWithError).Elements.field_0x34 = 0;
  iVar3 = *(int *)&(this->NodesWithError).Elements.field_0x2c;
  *(undefined4 *)&(this->NodesWithError).Elements.field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(this->NodesWithError).Elements.field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->NodesWithError).Elements.field_0x10,0
              );
  }
  if (bVar4) {
    (this->NodesWithError).HashSize = 1;
    TSet<FDataflowNode_const_*,DefaultKeyFuncs<FDataflowNode_const_*,0>,FDefaultSetAllocator>::
    Rehash(pTVar2);
  }
  pTVar2 = &this->NodesFailed;
  bVar4 = 1 < (this->NodesFailed).HashSize;
  if (!bVar4) {
    TSet<FDataflowNode_const_*,DefaultKeyFuncs<FDataflowNode_const_*,0>,FDefaultSetAllocator>::
    UnhashElements(pTVar2);
  }
  puVar1 = &(this->NodesFailed).Elements.field_0xc;
  *(undefined4 *)&(this->NodesFailed).Elements.field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)pTVar2,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->NodesFailed).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NodesFailed).Elements.field_0x34 = 0;
  iVar3 = *(int *)&(this->NodesFailed).Elements.field_0x2c;
  *(undefined4 *)&(this->NodesFailed).Elements.field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(this->NodesFailed).Elements.field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->NodesFailed).Elements.field_0x10,0);
  }
  if (bVar4) {
    (this->NodesFailed).HashSize = 1;
    TSet<FDataflowNode_const_*,DefaultKeyFuncs<FDataflowNode_const_*,0>,FDefaultSetAllocator>::
    Rehash(pTVar2);
  }
  return;
}

// CommitAsset @ 14443bd20

UObject * __thiscall UE::Dataflow::FContext::CommitAsset(FContext *this,FString *param_1)

{
  FAssetData *pFVar1;
  UObject *pUVar2;
  
  pFVar1 = TArray<UE::Dataflow::FContextAssetStore::FAssetData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_UE::Dataflow::FContextAssetStore::FindByTransientPath_::__l2::<lambda_1>_>
                     ((TArray<UE::Dataflow::FContextAssetStore::FAssetData,TSizedDefaultAllocator<32>_>
                       *)&(this->AssetStore)._padding_,(<lambda_1>)param_1);
  if (pFVar1 != (FAssetData *)0x0) {
    pUVar2 = FContextAssetStore::CommitAsset
                       ((FContextAssetStore *)&(this->NodesFailed).HashSize,pFVar1);
    return pUVar2;
  }
  return (UObject *)0x0;
}

// CopyDataToAnotherContext @ 14443d090

bool __thiscall
UE::Dataflow::FContext::CopyDataToAnotherContext
          (FContext *this,uint param_1,FContext *param_2,uint param_3,FProperty *param_4,
          FGuid *param_5,uint param_6,FTimestamp *param_7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  longlong *plVar5;
  undefined4 in_register_00000014;
  undefined8 *local_res8;
  
  plVar5 = (longlong *)
           (**(code **)(this->_padding_ + 0x30))(this,CONCAT44(in_register_00000014,param_1));
  if ((plVar5 != (longlong *)0x0) && (plVar5 = (longlong *)*plVar5, plVar5 != (longlong *)0x0)) {
    (**(code **)(*plVar5 + 8))(plVar5,&local_res8,this);
    if (local_res8 != (undefined8 *)0x0) {
      local_res8[4] = param_4;
      uVar1 = param_5->A;
      uVar2 = param_5->B;
      uVar3 = param_5->C;
      uVar4 = param_5->D;
      *(uint *)(local_res8 + 5) = param_6;
      *(uint *)((longlong)local_res8 + 0xc) = uVar1;
      *(uint *)(local_res8 + 2) = uVar2;
      *(uint *)((longlong)local_res8 + 0x14) = uVar3;
      *(uint *)(local_res8 + 3) = uVar4;
      local_res8[6] = param_7->Value;
      (**(code **)(param_2->_padding_ + 0x28))(param_2,param_3,&local_res8);
      if (local_res8 != (undefined8 *)0x0) {
        (**(code **)*local_res8)(local_res8,1);
      }
    }
    return true;
  }
  return false;
}

// EnablePerfData @ 144445480

void __thiscall UE::Dataflow::FContext::EnablePerfData(FContext *this,bool param_1)

{
  return;
}

// Error @ 144445490

void __thiscall
UE::Dataflow::FContext::Error
          (FContext *this,FString *param_1,FDataflowNode *param_2,FDataflowOutput *param_3)

{
  bool bVar1;
  FDataflowNode *local_res8;
  FDataflowNode *local_res18;
  
  if ((this->DataLock).Ptr == (FWindowsRecursiveMutex *)0x0) {
    local_res18 = param_2;
    bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &this->OnContextHasError);
    if (bVar1) {
      TMulticastDelegate<void___cdecl(FDataflowNode_const_*,FDataflowOutput_const_*,FString_const_&),FDefaultDelegateUserPolicy>
      ::Broadcast(&this->OnContextHasError,param_2,param_3,param_1);
    }
    TSet<FDataflowNode_const_*,DefaultKeyFuncs<FDataflowNode_const_*,0>,FDefaultSetAllocator>::
    Emplace<FDataflowNode_const_*_const_&>(&this->NodesWithError,&local_res8,(bool *)&local_res18);
  }
  return;
}

// Evaluate @ 144445520

void __thiscall
UE::Dataflow::FContext::Evaluate
          (FContext *this,FDataflowNode *param_1,FDataflowOutput *param_2,
          TFunction<void___cdecl(UE::Dataflow::FContext_&)> *param_3)

{
  longlong lVar1;
  FDataflowNode *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong local_78 [3];
  longlong *local_60;
  TFunction<void___cdecl(UE::Dataflow::FContext_&)> local_58;
  
  if ((this->DataLock).Ptr == (FWindowsRecursiveMutex *)0x0) {
    (**(code **)(this->_padding_ + 0x58))();
    if (*(void **)param_3 != (void *)0x0) {
      Core::Private::Function::CheckCallable(*(void **)param_3);
      pcVar3 = *(code **)param_3;
      plVar5 = (longlong *)&param_3->field_0x10;
      if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
        plVar5 = *(longlong **)&param_3->field_0x28;
      }
      uVar4 = (**(code **)(*plVar5 + 8))();
      (*pcVar3)(uVar4,this);
    }
  }
  else if (param_2 == (FDataflowOutput *)0x0) {
    if (param_1 != (FDataflowNode *)0x0) {
      local_58._0_8_ = *(undefined8 *)param_3;
      local_58._40_8_ = 0;
      if (local_58._0_8_ != 0) {
        puVar6 = (undefined8 *)&param_3->field_0x10;
        if (*(undefined8 **)&param_3->field_0x28 != (undefined8 *)0x0) {
          puVar6 = *(undefined8 **)&param_3->field_0x28;
        }
        (**(code **)*puVar6)(puVar6,&local_58.field_0x10);
      }
      FContextEvaluator::ScheduleNodeEvaluation(&this->AsyncEvaluator,param_1,&local_58);
    }
  }
  else {
    lVar1 = *(longlong *)param_3;
    local_60 = (longlong *)0x0;
    if (lVar1 != 0) {
      puVar6 = (undefined8 *)&param_3->field_0x10;
      if (*(undefined8 **)&param_3->field_0x28 != (undefined8 *)0x0) {
        puVar6 = *(undefined8 **)&param_3->field_0x28;
      }
      (**(code **)*puVar6)(puVar6,local_78);
    }
    pFVar2 = (FDataflowNode *)param_2->_padding_;
    if (pFVar2 != (FDataflowNode *)0x0) {
      local_58._0_8_ = lVar1;
      local_58._40_8_ = 0;
      if (lVar1 != 0) {
        plVar5 = local_78;
        if (local_60 != (longlong *)0x0) {
          plVar5 = local_60;
        }
        (**(code **)*plVar5)(plVar5,&local_58.field_0x10);
      }
      FContextEvaluator::ScheduleNodeEvaluation(&this->AsyncEvaluator,pFVar2,&local_58);
    }
    if (lVar1 != 0) {
      plVar5 = local_78;
      if (local_60 != (longlong *)0x0) {
        plVar5 = local_60;
      }
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  if (*(longlong *)param_3 != 0) {
    plVar5 = (longlong *)&param_3->field_0x10;
    if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
      plVar5 = *(longlong **)&param_3->field_0x28;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  return;
}

// Evaluate @ 1444456a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Dataflow::FContext::Evaluate(FContext *this,FDataflowNode *param_1,FDataflowOutput *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  bool bVar3;
  ulonglong uVar4;
  ForAnyElementType FVar5;
  FName local_res8;
  TArray<FDataflowOutput_*,TSizedDefaultAllocator<32>_> local_48;
  TFunction<void___cdecl(UE::Dataflow::FContext_&)> local_38;
  
  if ((this->DataLock).Ptr != (FWindowsRecursiveMutex *)0x0) {
    `UE::Dataflow::FContext::Evaluate'::__l2::<lambda_1>::operator()(&local_res8);
  }
  if ((this->DataLock).Ptr != (FWindowsRecursiveMutex *)0x0) {
    local_38._0_8_ = 0;
    local_38._40_8_ = 0;
    Evaluate(this,param_1,param_2,&local_38);
    return;
  }
  if (param_2 != (FDataflowOutput *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144445720. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x50))(this,param_2);
    return;
  }
  if (param_1 == (FDataflowNode *)0x0) {
    `UE::Dataflow::FContext::BeginContextEvaluation'::__l46::<lambda_1>::operator()(&local_res8);
  }
  else if (*(int *)&(param_1->ExpandedOutputs).field_0x8 ==
           *(int *)&(param_1->ExpandedOutputs).field_0x34) {
    if (((param_1->bActive != false) && (bDataflowEnableGraphEval != false)) &&
       (param_1->bIsFrozen == false)) {
      bVar3 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                        ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                         &this->OnNodeBeginEvaluateMulticast);
      if (bVar3) {
        TMulticastDelegate<void___cdecl(FDataflowNode_const_*,FDataflowOutput_const_*),FDefaultDelegateUserPolicy>
        ::Broadcast(&this->OnNodeBeginEvaluateMulticast,param_1,(FDataflowOutput *)0x0);
      }
      if (5 < (byte)LogChaosDataflow._0_1_) {
        local_res8 = param_1->Name;
        ::FName::ToString(&local_res8,(FString *)&local_48);
        Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogChaosDataflow);
        if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.AllocatorInstance.Data);
        }
      }
      (**(code **)(param_1->_padding_ + 0xc0))(param_1,this);
      if (((this->DataLock).Ptr == (FWindowsRecursiveMutex *)0x0) &&
         (bVar3 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                             &this->OnNodeFinishEvaluateMulticast), bVar3)) {
        TMulticastDelegate<void___cdecl(FDataflowNode_const_*,FDataflowOutput_const_*),FDefaultDelegateUserPolicy>
        ::Broadcast(&this->OnNodeFinishEvaluateMulticast,param_1,(FDataflowOutput *)0x0);
        return;
      }
    }
  }
  else {
    local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.ArrayNum = 0;
    local_48.ArrayMax = 0;
    TMapBase<UE::Dataflow::FConnectionKey,FDataflowOutput_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowOutput_*,0>_>
    ::GenerateValueArray<TSizedDefaultAllocator<32>_>
              ((TMapBase<UE::Dataflow::FConnectionKey,FDataflowOutput_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowOutput_*,0>_>
                *)&param_1->ExpandedOutputs,&local_48);
    iVar2 = local_48.ArrayNum;
    uVar4 = (ulonglong)local_48.ArrayNum;
    pFVar1 = local_48.AllocatorInstance.Data + uVar4 * 8;
    FVar5.Data = local_48.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar4 != iVar2) {
        `TCheckedPointerIterator<FDataflowOutput_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_res8);
      }
      if (FVar5.Data == pFVar1) break;
      (**(code **)(this->_padding_ + 0x50))(this,*(undefined8 *)FVar5.Data);
      uVar4 = local_48._8_8_ & 0xffffffff;
      FVar5.Data = FVar5.Data + 8;
    }
    if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.AllocatorInstance.Data);
      return;
    }
  }
  return;
}

// Evaluate @ 1444458e0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UE::Dataflow::FContext::Evaluate(FContext *this,FDataflowOutput *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  FDataflowNode *pFVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  ulong64 uVar5;
  ulong64 uVar6;
  FName local_res8;
  FName local_res18;
  FString local_38;
  FString local_28;
  
  if ((this->DataLock).Ptr == (FWindowsRecursiveMutex *)0x0) {
    bVar3 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &this->OnNodeBeginEvaluateMulticast);
    if (bVar3) {
      TMulticastDelegate<void___cdecl(FDataflowNode_const_*,FDataflowOutput_const_*),FDefaultDelegateUserPolicy>
      ::Broadcast(&this->OnNodeBeginEvaluateMulticast,(FDataflowNode *)param_1->_padding_,param_1);
    }
    if (6 < (byte)LogChaosDataflow._0_1_) {
      local_res8 = (FName)param_1->_padding_;
      ::FName::ToString(&local_res8,&local_28);
      local_res18 = *(FName *)(param_1->_padding_ + 0x8c);
      ::FName::ToString(&local_res18,&local_38);
      Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogChaosDataflow);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    if (((this->DataLock).Ptr == (FWindowsRecursiveMutex *)0x0) ||
       (lpCriticalSection = (LPCRITICAL_SECTION)(param_1->OutputLock).Object,
       lpCriticalSection == (LPCRITICAL_SECTION)0x0)) {
      bVar3 = FDataflowOutput::EvaluateImpl(param_1,this);
    }
    else {
      EnterCriticalSection(lpCriticalSection);
      bVar3 = FDataflowOutput::EvaluateImpl(param_1,this);
      LeaveCriticalSection(lpCriticalSection);
    }
    bVar4 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &this->OnNodeFinishEvaluateMulticast);
    if (bVar4) {
      TMulticastDelegate<void___cdecl(FDataflowNode_const_*,FDataflowOutput_const_*),FDefaultDelegateUserPolicy>
      ::Broadcast(&this->OnNodeFinishEvaluateMulticast,(FDataflowNode *)param_1->_padding_,param_1);
    }
    pFVar1 = (FDataflowNode *)param_1->_padding_;
    bVar4 = NodeHasError(this,pFVar1);
    if (((bVar4) || (bVar4 = NodeFailed(this,pFVar1), bVar4)) || (bVar3 == false)) {
      return false;
    }
  }
  else {
    uVar6 = FTimestamp::Invalid;
    if (param_1->_padding_ != 0) {
      uVar6 = *(ulong64 *)(param_1->_padding_ + 0x98);
    }
    uVar5 = CityHash64((char *)&param_1->_padding_,0x10);
    cVar2 = (**(code **)(this->_padding_ + 0x38))(this,uVar5 & 0xffffffff,uVar6);
    if (cVar2 == '\0') {
      FDataflowOutput::SetNullValue(param_1,this);
    }
  }
  return true;
}

// FindCacheElement @ 144446450

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
* __thiscall UE::Dataflow::FContext::FindCacheElement(FContext *this,uint param_1)

{
  TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
  *pTVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000144446453. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pTVar1 = (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            *)(**(code **)(this->_padding_ + 0x30))();
  return pTVar1;
}

// GetArraySizeFromData @ 14444a510

int __thiscall UE::Dataflow::FContext::GetArraySizeFromData(FContext *this,uint param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined4 in_register_00000014;
  
  plVar2 = (longlong *)
           (**(code **)(this->_padding_ + 0x30))(this,CONCAT44(in_register_00000014,param_1));
  if ((plVar2 != (longlong *)0x0) && (plVar2 = (longlong *)*plVar2, plVar2 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014444a537. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (**(code **)(*plVar2 + 0x20))(plVar2,this);
    return iVar1;
  }
  return 0;
}

// GetAsyncEvaluationStats @ 14444a550

void __thiscall
UE::Dataflow::FContext::GetAsyncEvaluationStats
          (FContext *this,int *param_1,int *param_2,int *param_3)

{
  FContextEvaluator::ClearCompletedTasks(&this->AsyncEvaluator);
  *param_1 = *(int *)&(this->AsyncEvaluator).PendingEvaluationEntries.field_0x8 -
             *(int *)&(this->AsyncEvaluator).PendingEvaluationEntries.field_0x34;
  *param_2 = *(int *)&(this->AsyncEvaluator).RunningTasks.field_0x8 -
             *(int *)&(this->AsyncEvaluator).RunningTasks.field_0x34;
  *param_3 = *(int *)&(this->AsyncEvaluator).CompletedTasks.Elements.field_0x8 -
             *(int *)&(this->AsyncEvaluator).CompletedTasks.Elements.field_0x34;
  return;
}

// GetDataImpl @ 14444b3b0

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
* __thiscall UE::Dataflow::FContext::GetDataImpl(FContext *this,uint param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
  *pTVar2;
  undefined1 *puVar3;
  TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
  *pTVar4;
  TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
  *pTVar5;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(this->DataLock).Ptr;
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    EnterCriticalSection(lpCriticalSection);
  }
  pTVar5 = (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            *)0x0;
  pTVar2 = pTVar5;
  if (*(int *)&(this->DataStore).field_0x8 != *(int *)&(this->DataStore).field_0x34) {
    puVar3 = *(undefined1 **)&(this->DataStore).field_0x40;
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &(this->DataStore).field_0x38;
    }
    iVar1 = *(int *)(puVar3 + (ulonglong)(*(int *)&(this->DataStore).field_0x48 - 1U & param_1) * 4)
    ;
    if (iVar1 != -1) {
      do {
        pTVar2 = (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
                  *)(*(longlong *)&this->DataStore + (longlong)iVar1 * 0x18);
        if (*(uint *)(*(longlong *)&this->DataStore + (longlong)iVar1 * 0x18) == param_1) break;
        iVar1 = *(int *)&pTVar2[2].Ptr;
        pTVar2 = pTVar5;
      } while (iVar1 != -1);
    }
  }
  pTVar4 = pTVar2 + 1;
  if (pTVar2 == (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
                 *)0x0) {
    pTVar4 = pTVar5;
  }
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  return pTVar4;
}

// GetKeys @ 14444bab0

int __thiscall
UE::Dataflow::FContext::GetKeys
          (FContext *this,
          TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(this->DataLock).Ptr;
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    EnterCriticalSection(lpCriticalSection);
    iVar1 = TMapBase<unsigned_int,TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>,0>_>
            ::GetKeys<DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>
                      ((TMapBase<unsigned_int,TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>,0>_>
                        *)&this->DataStore,param_1);
    LeaveCriticalSection(lpCriticalSection);
    return iVar1;
  }
  iVar1 = TMapBase<unsigned_int,TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>,0>_>
          ::GetKeys<DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>
                    ((TMapBase<unsigned_int,TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>,0>_>
                      *)&this->DataStore,param_1);
  return iVar1;
}

// GetNumErrors @ 14444c730

int __thiscall UE::Dataflow::FContext::GetNumErrors(FContext *this)

{
  return *(int *)&(this->NodesWithError).Elements.field_0x8 -
         *(int *)&(this->NodesWithError).Elements.field_0x34;
}

// GetNumInfo @ 14444c750

int __thiscall UE::Dataflow::FContext::GetNumInfo(FContext *this)

{
  return *(int *)&(this->NodesWithInfo).Elements.field_0x8 -
         *(int *)&(this->NodesWithInfo).Elements.field_0x34;
}

// GetNumWarnings @ 14444c800

int __thiscall UE::Dataflow::FContext::GetNumWarnings(FContext *this)

{
  return *(int *)&(this->NodesWithWarning).Elements.field_0x8 -
         *(int *)&(this->NodesWithWarning).Elements.field_0x34;
}

// GetPerfData @ 14444cb20

FContextPerfData * __thiscall UE::Dataflow::FContext::GetPerfData(FContext *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UE::Dataflow::FContext::GetPerfData'::__l2::_dynamic_atexit_destructor_for__Default__)
      ;
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &::Default;
}

// GetPerfDataForNode @ 14444cb90

FData * __thiscall
UE::Dataflow::FContext::GetPerfDataForNode
          (FContext *this,FData *__return_storage_ptr__,FDataflowNode *param_1)

{
  (__return_storage_ptr__->LastTimestamp).Value = 0;
  __return_storage_ptr__->InclusiveTimeMs = 0.0;
  __return_storage_ptr__->ExclusiveTimeMs = 0.0;
  __return_storage_ptr__->NumCalls = 0;
  (__return_storage_ptr__->LastTimestamp).Value = (param_1->LastModifiedTimestamp).Value;
  return __return_storage_ptr__;
}

// GetTimestamp @ 14444e2c0

FTimestamp __thiscall UE::Dataflow::FContext::GetTimestamp(FContext *this,uint param_1)

{
  longlong *plVar1;
  undefined4 in_register_00000014;
  ulong64 *puVar2;
  undefined4 in_R8D;
  
  puVar2 = (ulong64 *)CONCAT44(in_register_00000014,param_1);
  plVar1 = (longlong *)(**(code **)(this->_padding_ + 0x30))(this,in_R8D);
  if (plVar1 != (longlong *)0x0) {
    *puVar2 = *(ulong64 *)(*plVar1 + 0x30);
    return (FTimestamp)(ulong64)puVar2;
  }
  *puVar2 = FTimestamp::Invalid;
  return (FTimestamp)(ulong64)puVar2;
}

// GetUntypedData @ 14444eb80

void * __thiscall
UE::Dataflow::FContext::GetUntypedData(FContext *this,uint param_1,FProperty *param_2)

{
  undefined8 *puVar1;
  void *pvVar2;
  undefined4 in_register_00000014;
  
  puVar1 = (undefined8 *)
           (**(code **)(this->_padding_ + 0x30))(this,CONCAT44(in_register_00000014,param_1));
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014444ebb1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pvVar2 = (void *)(**(code **)(*(longlong *)*puVar1 + 0x10))((longlong *)*puVar1,this,param_2);
    return pvVar2;
  }
  return (void *)0x0;
}

// HasCacheElement @ 14444f570

bool __thiscall
UE::Dataflow::FContext::HasCacheElement(FContext *this,uint param_1,FTimestamp param_2)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014444f573. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->_padding_ + 0x38))();
  return (bool)uVar1;
}

// HasData @ 14444f580

bool __thiscall UE::Dataflow::FContext::HasData(FContext *this,uint param_1,FTimestamp param_2)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014444f583. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->_padding_ + 0x38))();
  return (bool)uVar1;
}

// HasDataImpl @ 14444f590

bool __thiscall UE::Dataflow::FContext::HasDataImpl(FContext *this,uint param_1,FTimestamp param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
  *pTVar2;
  undefined1 *puVar3;
  bool bVar4;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(this->DataLock).Ptr;
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    EnterCriticalSection(lpCriticalSection);
  }
  if (*(int *)&(this->DataStore).field_0x8 != *(int *)&(this->DataStore).field_0x34) {
    puVar3 = *(undefined1 **)&(this->DataStore).field_0x40;
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &(this->DataStore).field_0x38;
    }
    iVar1 = *(int *)(puVar3 + (ulonglong)(*(int *)&(this->DataStore).field_0x48 - 1U & param_1) * 4)
    ;
    if (iVar1 != -1) {
      do {
        if (*(uint *)(*(longlong *)&this->DataStore + (longlong)iVar1 * 0x18) == param_1) {
          pTVar2 = TMapBase<unsigned_int,TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>,0>_>
                   ::FindChecked((TMapBase<unsigned_int,TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>,0>_>
                                  *)&this->DataStore,param_1);
          if (param_2.Value <= (pTVar2->Ptr->Timestamp).Value) {
            bVar4 = true;
            goto LAB_14444f607;
          }
          break;
        }
        iVar1 = *(int *)(*(longlong *)&this->DataStore + 0x10 + (longlong)iVar1 * 0x18);
      } while (iVar1 != -1);
    }
  }
  bVar4 = false;
LAB_14444f607:
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  return bVar4;
}

// Info @ 144450030

void __thiscall
UE::Dataflow::FContext::Info
          (FContext *this,FString *param_1,FDataflowNode *param_2,FDataflowOutput *param_3)

{
  bool bVar1;
  FDataflowNode *local_res8;
  FDataflowNode *local_res18;
  
  if ((this->DataLock).Ptr == (FWindowsRecursiveMutex *)0x0) {
    local_res18 = param_2;
    bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->OnContextHasInfo
                      );
    if (bVar1) {
      TMulticastDelegate<void___cdecl(FDataflowNode_const_*,FDataflowOutput_const_*,FString_const_&),FDefaultDelegateUserPolicy>
      ::Broadcast(&this->OnContextHasInfo,param_2,param_3,param_1);
    }
    TSet<FDataflowNode_const_*,DefaultKeyFuncs<FDataflowNode_const_*,0>,FDefaultSetAllocator>::
    Emplace<FDataflowNode_const_*_const_&>(&this->NodesWithInfo,&local_res8,(bool *)&local_res18);
  }
  return;
}

// IsAsyncEvaluating @ 1444513a0

bool __thiscall UE::Dataflow::FContext::IsAsyncEvaluating(FContext *this)

{
  if (((this->DataLock).Ptr != (FWindowsRecursiveMutex *)0x0) &&
     (0 < *(int *)&(this->AsyncEvaluator).RunningTasks.field_0x8 -
          *(int *)&(this->AsyncEvaluator).RunningTasks.field_0x34)) {
    return true;
  }
  return false;
}

// IsCacheEntryAfterTimestamp @ 1444513d0

bool __thiscall
UE::Dataflow::FContext::IsCacheEntryAfterTimestamp(FContext *this,uint param_1,FTimestamp param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined4 in_register_00000014;
  
  cVar1 = (**(code **)(this->_padding_ + 0x38))
                    (this,CONCAT44(in_register_00000014,param_1),FTimestamp::Invalid);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)(**(code **)(this->_padding_ + 0x30))(this,param_1);
    if ((plVar2 != (longlong *)0x0) && (*plVar2 != 0)) {
      return param_2.Value <= *(ulonglong *)(*plVar2 + 0x30);
    }
  }
  return false;
}

// IsEmpty @ 1444514b0

bool __thiscall UE::Dataflow::FContext::IsEmpty(FContext *this)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001444514b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->_padding_ + 0x40))();
  return (bool)uVar1;
}

// IsEmptyImpl @ 1444514c0

bool __thiscall UE::Dataflow::FContext::IsEmptyImpl(FContext *this)

{
  int iVar1;
  int iVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(this->DataLock).Ptr;
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    EnterCriticalSection(lpCriticalSection);
    iVar1 = *(int *)&(this->DataStore).field_0x34;
    iVar2 = *(int *)&(this->DataStore).field_0x8;
    LeaveCriticalSection(lpCriticalSection);
    return iVar2 == iVar1;
  }
  return *(int *)&(this->DataStore).field_0x8 == *(int *)&(this->DataStore).field_0x34;
}

// IsInCallstack @ 144451600

bool __thiscall UE::Dataflow::FContext::IsInCallstack(FContext *this,FDataflowConnection *param_1)

{
  return false;
}

// IsPerfDataEnabled @ 144451700

bool __thiscall UE::Dataflow::FContext::IsPerfDataEnabled(FContext *this)

{
  return false;
}

// NodeFailed @ 144452700

bool __thiscall UE::Dataflow::FContext::NodeFailed(FContext *this,FDataflowNode *param_1)

{
  longlong lVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  
  uVar4 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  if (*(int *)&(this->NodesFailed).Elements.field_0x8 !=
      *(int *)&(this->NodesFailed).Elements.field_0x34) {
    FVar3 = (this->NodesFailed).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->NodesFailed).Hash;
    }
    iVar2 = *(int *)((longlong)FVar3 +
                    (ulonglong)((this->NodesFailed).HashSize - 1U & (uVar4 >> 0x10 ^ uVar4)) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&(this->NodesFailed).Elements;
      do {
        if (*(FDataflowNode **)(lVar1 + (longlong)iVar2 * 0x10) == param_1) goto LAB_14445279a;
        iVar2 = *(int *)(lVar1 + 8 + (longlong)iVar2 * 0x10);
      } while (iVar2 != -1);
    }
  }
  iVar2 = -1;
LAB_14445279a:
  return iVar2 != -1;
}

// NodeHasError @ 1444527b0

bool __thiscall UE::Dataflow::FContext::NodeHasError(FContext *this,FDataflowNode *param_1)

{
  longlong lVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  
  uVar4 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  if (*(int *)&(this->NodesWithError).Elements.field_0x8 !=
      *(int *)&(this->NodesWithError).Elements.field_0x34) {
    FVar3 = (this->NodesWithError).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->NodesWithError).Hash;
    }
    iVar2 = *(int *)((longlong)FVar3 +
                    (ulonglong)((this->NodesWithError).HashSize - 1U & (uVar4 >> 0x10 ^ uVar4)) * 4)
    ;
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&(this->NodesWithError).Elements;
      do {
        if (*(FDataflowNode **)(lVar1 + (longlong)iVar2 * 0x10) == param_1) goto LAB_14445284a;
        iVar2 = *(int *)(lVar1 + 8 + (longlong)iVar2 * 0x10);
      } while (iVar2 != -1);
    }
  }
  iVar2 = -1;
LAB_14445284a:
  return iVar2 != -1;
}

// PopFromCallstack @ 144453130

void __thiscall
UE::Dataflow::FContext::PopFromCallstack(FContext *this,FDataflowConnection *param_1)

{
  return;
}

// PushToCallstack @ 144453740

void __thiscall UE::Dataflow::FContext::PushToCallstack(FContext *this,FDataflowConnection *param_1)

{
  return;
}

// ResetPerfDataForNode @ 14445ed10

void __thiscall UE::Dataflow::FContext::ResetPerfDataForNode(FContext *this,FDataflowNode *param_1)

{
  return;
}

// Serialize @ 14445f890

void __thiscall UE::Dataflow::FContext::Serialize(FContext *this,FArchive *param_1)

{
  FTimestamp local_res8;
  
  local_res8.Value = FTimestamp::Invalid;
  ::operator<<(param_1,&local_res8);
  FContextCache::Serialize(&this->DataStore,param_1);
  return;
}

// SetArrayElementFromData @ 144463310

void __thiscall
UE::Dataflow::FContext::SetArrayElementFromData
          (FContext *this,uint param_1,int param_2,uint param_3,FProperty *param_4,FGuid *param_5,
          uint param_6,FTimestamp *param_7)

{
  longlong *plVar1;
  undefined4 in_register_00000014;
  undefined8 *local_res8;
  
  plVar1 = (longlong *)
           (**(code **)(this->_padding_ + 0x30))(this,CONCAT44(in_register_00000014,param_1));
  if (((plVar1 != (longlong *)0x0) && (plVar1 = (longlong *)*plVar1, plVar1 != (longlong *)0x0)) &&
     ((**(code **)(*plVar1 + 0x28))(plVar1,&local_res8,this,param_2,param_4,param_5,param_6,param_7)
     , local_res8 != (undefined8 *)0x0)) {
    (**(code **)(this->_padding_ + 0x28))(this,param_3,&local_res8);
    if (local_res8 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*local_res8)(local_res8,1);
    return;
  }
  SetNullData(this,param_3,param_4,param_5,param_6,param_7);
  return;
}

// SetDataFromStructArrayView @ 144463c30

void __thiscall
UE::Dataflow::FContext::SetDataFromStructArrayView
          (FContext *this,uint param_1,FProperty *param_2,FConstStructArrayView *param_3,
          FGuid *param_4,uint param_5,FTimestamp *param_6)

{
  ulong64 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *local_res8;
  
  local_res8 = ::operator_new(0x60);
  if (local_res8 != (undefined8 *)0x0) {
    uVar1 = param_6->Value;
    uVar2 = *(undefined8 *)param_4;
    uVar3 = *(undefined8 *)&param_4->C;
    *local_res8 = &___7FContextCacheElementBase_Dataflow_UE__6B_;
    *(uint *)(local_res8 + 5) = param_5;
    *(undefined4 *)(local_res8 + 1) = 6;
    *(undefined8 *)((longlong)local_res8 + 0xc) = uVar2;
    *(undefined8 *)((longlong)local_res8 + 0x14) = uVar3;
    local_res8[4] = param_2;
    local_res8[6] = uVar1;
    local_res8[7] = &___7FGCObject__6B_;
    *(undefined2 *)(local_res8 + 8) = 0;
    FGCObject::RegisterGCObject((FGCObject *)(local_res8 + 7));
    *local_res8 = &FContextCacheElementUStructArray::
                   _vftable__for__UE__Dataflow__FContextCacheElementBase__;
    local_res8[7] = &FContextCacheElementUStructArray::_vftable__for__FGCObject__;
    ((FInstancedStructArray *)(local_res8 + 9))->_padding_ = 0;
    local_res8[10] = 0;
    local_res8[0xb] = param_3->ScriptStruct;
    FContextCacheElementUStructArray::FInstancedStructArray::InitFromRawData
              ((FInstancedStructArray *)(local_res8 + 9),param_3->DataPtr,param_3->ArrayNum);
  }
  (**(code **)(this->_padding_ + 0x28))(this,param_1,&local_res8);
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  return;
}

// SetDataFromStructView @ 144463d30

void __thiscall
UE::Dataflow::FContext::SetDataFromStructView
          (FContext *this,uint param_1,FProperty *param_2,FConstStructView *param_3,FGuid *param_4,
          uint param_5,FTimestamp *param_6)

{
  ulong64 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *local_res8;
  FConstStructView local_28;
  
  local_res8 = ::operator_new(0x58);
  if (local_res8 == (undefined8 *)0x0) {
    local_res8 = (undefined8 *)0x0;
  }
  else {
    uVar1 = param_6->Value;
    uVar2 = *(undefined8 *)param_4;
    uVar3 = *(undefined8 *)&param_4->C;
    *local_res8 = &___7FContextCacheElementBase_Dataflow_UE__6B_;
    *(uint *)(local_res8 + 5) = param_5;
    *(undefined4 *)(local_res8 + 1) = 5;
    *(undefined8 *)((longlong)local_res8 + 0xc) = uVar2;
    *(undefined8 *)((longlong)local_res8 + 0x14) = uVar3;
    local_res8[4] = param_2;
    local_res8[6] = uVar1;
    local_res8[7] = &___7FGCObject__6B_;
    *(undefined2 *)(local_res8 + 8) = 0;
    FGCObject::RegisterGCObject((FGCObject *)(local_res8 + 7));
    *local_res8 = &FContextCacheElementUStruct::
                   _vftable__for__UE__Dataflow__FContextCacheElementBase__;
    local_res8[7] = &FContextCacheElementUStruct::_vftable__for__FGCObject__;
    local_28.ScriptStruct = param_3->ScriptStruct;
    local_28.StructMemory = param_3->StructMemory;
    FInstancedStruct::FInstancedStruct((FInstancedStruct *)(local_res8 + 9),&local_28);
  }
  (**(code **)(this->_padding_ + 0x28))(this,param_1,&local_res8);
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  return;
}

// SetDataImpl @ 144463e30

void __thiscall
UE::Dataflow::FContext::SetDataImpl
          (FContext *this,uint param_1,
          TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  TPairInitializer<unsigned_int_&,TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>_&&>
  local_res8;
  TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
  **local_18;
  TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
  *local_10;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(this->DataLock).Ptr;
  local_res8.Value._0_4_ = param_1;
  local_10 = param_2;
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    EnterCriticalSection(lpCriticalSection);
    local_18 = &local_res8.Value;
    TSet<TTuple<unsigned_int,TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<unsigned_int_&,TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>_&&>_>
              ((TSet<TTuple<unsigned_int,TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>,0>,FDefaultSetAllocator>
                *)&this->DataStore,&local_res8,(bool *)&local_18);
    LeaveCriticalSection(lpCriticalSection);
    return;
  }
  local_18 = &local_res8.Value;
  TSet<TTuple<unsigned_int,TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<unsigned_int_&,TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>_&&>_>
            ((TSet<TTuple<unsigned_int,TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>,0>,FDefaultSetAllocator>
              *)&this->DataStore,&local_res8,(bool *)&local_18);
  return;
}

// SetDataReference @ 144463ee0

void __thiscall
UE::Dataflow::FContext::SetDataReference
          (FContext *this,uint param_1,FProperty *param_2,uint param_3,FTimestamp *param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  bool bVar10;
  longlong *plVar11;
  undefined8 *local_res8;
  
  plVar11 = (longlong *)(**(code **)(this->_padding_ + 0x30))();
  if (plVar11 == (longlong *)0x0) {
    bVar10 = Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_5258191021539327867>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowNodeParameters.cpp"
                        ,0x85,"false");
    if (bVar10) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    lVar2 = *plVar11;
    uVar1 = *(undefined4 *)(lVar2 + 0x28);
    uVar3 = *(undefined8 *)(lVar2 + 0x20);
    local_res8 = ::operator_new(0x40);
    if (local_res8 == (undefined8 *)0x0) {
      local_res8 = (undefined8 *)0x0;
    }
    else {
      uVar6 = *(undefined4 *)(lVar2 + 0xc);
      uVar7 = *(undefined4 *)(lVar2 + 0x10);
      uVar8 = *(undefined4 *)(lVar2 + 0x14);
      uVar9 = *(undefined4 *)(lVar2 + 0x18);
      uVar4 = *(undefined8 *)(lVar2 + 0x30);
      *(undefined4 *)(local_res8 + 1) = 1;
      *(undefined4 *)((longlong)local_res8 + 0xc) = uVar6;
      *(undefined4 *)(local_res8 + 2) = uVar7;
      *(undefined4 *)((longlong)local_res8 + 0x14) = uVar8;
      *(undefined4 *)(local_res8 + 3) = uVar9;
      local_res8[4] = uVar3;
      *(undefined4 *)(local_res8 + 5) = uVar1;
      local_res8[6] = uVar4;
      *local_res8 = &___7FContextCacheElementReference_Dataflow_UE__6B_;
      *(uint *)(local_res8 + 7) = param_3;
    }
    local_res8[6] = param_4->Value;
    (**(code **)(this->_padding_ + 0x28))(this,param_1,&local_res8);
    if (local_res8 != (undefined8 *)0x0) {
      (**(code **)*local_res8)(local_res8,1);
      return;
    }
  }
  return;
}

// SetNullData @ 1444644d0

void __thiscall
UE::Dataflow::FContext::SetNullData
          (FContext *this,uint param_1,FProperty *param_2,FGuid *param_3,uint param_4,
          FTimestamp *param_5)

{
  ulong64 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 *local_res8;
  
  local_res8 = ::operator_new(0x38);
  if (local_res8 == (undefined8 *)0x0) {
    local_res8 = (undefined8 *)0x0;
  }
  else {
    uVar2 = param_3->A;
    uVar3 = param_3->B;
    uVar4 = param_3->C;
    uVar5 = param_3->D;
    uVar1 = param_5->Value;
    *(uint *)(local_res8 + 5) = param_4;
    *(undefined4 *)(local_res8 + 1) = 2;
    *(uint *)((longlong)local_res8 + 0xc) = uVar2;
    *(uint *)(local_res8 + 2) = uVar3;
    *(uint *)((longlong)local_res8 + 0x14) = uVar4;
    *(uint *)(local_res8 + 3) = uVar5;
    local_res8[4] = param_2;
    lVar6 = 0;
    if (uVar1 != 0) {
      lVar6 = uVar1 - 1;
    }
    *local_res8 = &___7FContextCacheElementNull_Dataflow_UE__6B_;
    local_res8[6] = lVar6;
  }
  (**(code **)(this->_padding_ + 0x28))(this,param_1,&local_res8);
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  return;
}

// SetThreaded @ 144464dc0

void __thiscall UE::Dataflow::FContext::SetThreaded(FContext *this,bool param_1)

{
  TUniquePtr<UE::FWindowsRecursiveMutex,TDefaultDelete<UE::FWindowsRecursiveMutex>_> *pTVar1;
  LPCRITICAL_SECTION p_Var2;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong local_18 [2];
  
  lpCriticalSection = (LPCRITICAL_SECTION)(this->DataLock).Ptr;
  pTVar1 = &this->DataLock;
  if (param_1 == (lpCriticalSection != (LPCRITICAL_SECTION)0x0)) {
    return;
  }
  if (param_1) {
    lpCriticalSection = ::operator_new(0x28);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
      lpCriticalSection = (LPCRITICAL_SECTION)0x0;
    }
    else {
      InitializeCriticalSectionAndSpinCount(lpCriticalSection,4000);
    }
    if (pTVar1 == (TUniquePtr<UE::FWindowsRecursiveMutex,TDefaultDelete<UE::FWindowsRecursiveMutex>_>
                   *)local_18) {
      if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
        return;
      }
      DeleteCriticalSection(lpCriticalSection);
      goto LAB_144464e49;
    }
    p_Var2 = (LPCRITICAL_SECTION)pTVar1->Ptr;
    pTVar1->Ptr = (FWindowsRecursiveMutex *)lpCriticalSection;
    lpCriticalSection = p_Var2;
    if (p_Var2 == (LPCRITICAL_SECTION)0x0) {
      return;
    }
  }
  else {
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
      return;
    }
    pTVar1->Ptr = (FWindowsRecursiveMutex *)0x0;
  }
  DeleteCriticalSection(lpCriticalSection);
LAB_144464e49:
  ::operator_delete(lpCriticalSection,0x28);
  return;
}

// Warning @ 144469e40

void __thiscall
UE::Dataflow::FContext::Warning
          (FContext *this,FString *param_1,FDataflowNode *param_2,FDataflowOutput *param_3)

{
  bool bVar1;
  FDataflowNode *local_res8;
  FDataflowNode *local_res18;
  
  if ((this->DataLock).Ptr == (FWindowsRecursiveMutex *)0x0) {
    local_res18 = param_2;
    bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &this->OnContextHasWarning);
    if (bVar1) {
      TMulticastDelegate<void___cdecl(FDataflowNode_const_*,FDataflowOutput_const_*,FString_const_&),FDefaultDelegateUserPolicy>
      ::Broadcast(&this->OnContextHasWarning,param_2,param_3,param_1);
    }
    TSet<FDataflowNode_const_*,DefaultKeyFuncs<FDataflowNode_const_*,0>,FDefaultSetAllocator>::
    Emplace<FDataflowNode_const_*_const_&>(&this->NodesWithWarning,&local_res8,(bool *)&local_res18)
    ;
  }
  return;
}

// operator() @ 1504be500

bool __thiscall `UE::Dataflow::FContext::Evaluate'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_5258191021539327371>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5258191021539327371>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504beb60

bool __thiscall
`UE::Dataflow::FContext::BeginContextEvaluation'::__l46::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_5258191021539327404>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5258191021539327404>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

