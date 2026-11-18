// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 42

// SetData<int_const_&> @ 14e901c90

void __thiscall
UE::Dataflow::FContext::SetData<int_const_&>
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
    *puVar8 = &___7__TContextCacheElement_AEBH_Dataflow_UE__6B_;
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

// SetData<float_const_&> @ 14e901da0

void __thiscall
UE::Dataflow::FContext::SetData<float_const_&>
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
    *puVar8 = &___7__TContextCacheElement_AEBM_Dataflow_UE__6B_;
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

// SetData<double_const_&> @ 14e901eb0

void __thiscall
UE::Dataflow::FContext::SetData<double_const_&>
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
    *puVar8 = &___7__TContextCacheElement_AEBN_Dataflow_UE__6B_;
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

// SetData<UE::Math::TBox<double>_const_&> @ 14e901fc0

void __thiscall
UE::Dataflow::FContext::SetData<UE::Math::TBox<double>_const_&>
          (FContext *this,uint param_1,FProperty *param_2,TBox<double> *param_3,FGuid *param_4,
          uint param_5,FTimestamp *param_6)

{
  ulong64 uVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  double dVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *local_28 [2];
  
  local_28[0] = (undefined8 *)0x0;
  puVar10 = ::operator_new(0x70);
  puVar9 = local_28[0];
  if (puVar10 != (undefined8 *)0x0) {
    uVar6 = *(undefined8 *)param_4;
    uVar7 = *(undefined8 *)&param_4->C;
    uVar1 = param_6->Value;
    *(undefined4 *)(puVar10 + 1) = 0;
    *(undefined8 *)((longlong)puVar10 + 0xc) = uVar6;
    *(undefined8 *)((longlong)puVar10 + 0x14) = uVar7;
    puVar10[4] = param_2;
    *(uint *)(puVar10 + 5) = param_5;
    puVar10[6] = uVar1;
    *puVar10 = &___7__TContextCacheElement_AEBU__TBox_N_Math_UE___Dataflow_UE__6B_;
    dVar8 = (param_3->Min).field0_0x0._s_0.Y;
    puVar10[7] = (param_3->Min).field0_0x0._s_0.X;
    puVar10[8] = dVar8;
    dVar8 = (param_3->Max).field0_0x0._s_0.X;
    puVar10[9] = (param_3->Min).field0_0x0._s_0.Z;
    puVar10[10] = dVar8;
    uVar3 = *(undefined4 *)((longlong)&(param_3->Max).field0_0x0 + 0xc);
    uVar4 = *(undefined4 *)((longlong)&(param_3->Max).field0_0x0 + 0x10);
    uVar5 = *(undefined4 *)((longlong)&(param_3->Max).field0_0x0 + 0x14);
    *(undefined4 *)(puVar10 + 0xb) = *(undefined4 *)((longlong)&(param_3->Max).field0_0x0 + 8);
    *(undefined4 *)((longlong)puVar10 + 0x5c) = uVar3;
    *(undefined4 *)(puVar10 + 0xc) = uVar4;
    *(undefined4 *)((longlong)puVar10 + 100) = uVar5;
    puVar10[0xd] = *(undefined8 *)&param_3->IsValid;
  }
  if (local_28[0] != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*local_28[0];
    local_28[0] = puVar10;
    (*(code *)*puVar2)(puVar9,1);
    puVar10 = local_28[0];
  }
  local_28[0] = puVar10;
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

// SetData<TObjectPtr<UDataflowMesh>_const_&> @ 14e9020f0

void __thiscall
UE::Dataflow::FContext::SetData<TObjectPtr<UDataflowMesh>_const_&>
          (FContext *this,uint param_1,FProperty *param_2,TObjectPtr<UDataflowMesh> *param_3,
          FGuid *param_4,uint param_5,FTimestamp *param_6)

{
  UDataflowMesh *pUVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *local_38 [2];
  
  local_38[0] = (undefined8 *)0x0;
  puVar6 = ::operator_new(0x50);
  if (puVar6 == (undefined8 *)0x0) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    uVar3 = *(undefined8 *)param_4;
    uVar4 = *(undefined8 *)&param_4->C;
    puVar6[6] = param_6->Value;
    *puVar6 = &___7FContextCacheElementBase_Dataflow_UE__6B_;
    *(undefined8 *)((longlong)puVar6 + 0xc) = uVar3;
    *(undefined8 *)((longlong)puVar6 + 0x14) = uVar4;
    *(undefined4 *)(puVar6 + 1) = 3;
    puVar6[4] = param_2;
    *(uint *)(puVar6 + 5) = param_5;
    puVar6[7] = &___7FGCObject__6B_;
    *(undefined2 *)(puVar6 + 8) = 0;
    FGCObject::RegisterGCObject((FGCObject *)(puVar6 + 7));
    *puVar6 = &TContextCacheElementUObject<TObjectPtr<UDataflowMesh>_const&___ptr64>::
               _vftable__for__UE__Dataflow__FContextCacheElementBase__;
    puVar6[7] = &TContextCacheElementUObject<TObjectPtr<UDataflowMesh>_const&___ptr64>::
                 _vftable__for__FGCObject__;
    pUVar1 = (param_3->field0_0x0).DebugPtr;
    puVar6[9] = pUVar1;
    if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UDataflowMesh *)0x0)) {
      GC::MarkAsReachable((UObject *)pUVar1);
    }
  }
  puVar5 = local_38[0];
  if (local_38[0] != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*local_38[0];
    local_38[0] = puVar6;
    (*(code *)*puVar2)(puVar5,1);
    puVar6 = local_38[0];
  }
  local_38[0] = puVar6;
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

// SetData<TObjectPtr<UDynamicMesh>_const_&> @ 14e902270

void __thiscall
UE::Dataflow::FContext::SetData<TObjectPtr<UDynamicMesh>_const_&>
          (FContext *this,uint param_1,FProperty *param_2,TObjectPtr<UDynamicMesh> *param_3,
          FGuid *param_4,uint param_5,FTimestamp *param_6)

{
  UDynamicMesh *pUVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *local_38 [2];
  
  local_38[0] = (undefined8 *)0x0;
  puVar6 = ::operator_new(0x50);
  if (puVar6 == (undefined8 *)0x0) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    uVar3 = *(undefined8 *)param_4;
    uVar4 = *(undefined8 *)&param_4->C;
    puVar6[6] = param_6->Value;
    *puVar6 = &___7FContextCacheElementBase_Dataflow_UE__6B_;
    *(undefined8 *)((longlong)puVar6 + 0xc) = uVar3;
    *(undefined8 *)((longlong)puVar6 + 0x14) = uVar4;
    *(undefined4 *)(puVar6 + 1) = 3;
    puVar6[4] = param_2;
    *(uint *)(puVar6 + 5) = param_5;
    puVar6[7] = &___7FGCObject__6B_;
    *(undefined2 *)(puVar6 + 8) = 0;
    FGCObject::RegisterGCObject((FGCObject *)(puVar6 + 7));
    *puVar6 = &TContextCacheElementUObject<TObjectPtr<UDynamicMesh>_const&___ptr64>::
               _vftable__for__UE__Dataflow__FContextCacheElementBase__;
    puVar6[7] = &TContextCacheElementUObject<TObjectPtr<UDynamicMesh>_const&___ptr64>::
                 _vftable__for__FGCObject__;
    pUVar1 = (param_3->field0_0x0).DebugPtr;
    puVar6[9] = pUVar1;
    if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UDynamicMesh *)0x0)) {
      GC::MarkAsReachable((UObject *)pUVar1);
    }
  }
  puVar5 = local_38[0];
  if (local_38[0] != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*local_38[0];
    local_38[0] = puVar6;
    (*(code *)*puVar2)(puVar5,1);
    puVar6 = local_38[0];
  }
  local_38[0] = puVar6;
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

// SetData<TObjectPtr<UMaterial>_const_&> @ 14e9023f0

void __thiscall
UE::Dataflow::FContext::SetData<TObjectPtr<UMaterial>_const_&>
          (FContext *this,uint param_1,FProperty *param_2,TObjectPtr<UMaterial> *param_3,
          FGuid *param_4,uint param_5,FTimestamp *param_6)

{
  UMaterial *pUVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *local_38 [2];
  
  local_38[0] = (undefined8 *)0x0;
  puVar6 = ::operator_new(0x50);
  if (puVar6 == (undefined8 *)0x0) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    uVar3 = *(undefined8 *)param_4;
    uVar4 = *(undefined8 *)&param_4->C;
    puVar6[6] = param_6->Value;
    *puVar6 = &___7FContextCacheElementBase_Dataflow_UE__6B_;
    *(undefined8 *)((longlong)puVar6 + 0xc) = uVar3;
    *(undefined8 *)((longlong)puVar6 + 0x14) = uVar4;
    *(undefined4 *)(puVar6 + 1) = 3;
    puVar6[4] = param_2;
    *(uint *)(puVar6 + 5) = param_5;
    puVar6[7] = &___7FGCObject__6B_;
    *(undefined2 *)(puVar6 + 8) = 0;
    FGCObject::RegisterGCObject((FGCObject *)(puVar6 + 7));
    *puVar6 = &TContextCacheElementUObject<TObjectPtr<UMaterial>_const&___ptr64>::
               _vftable__for__UE__Dataflow__FContextCacheElementBase__;
    puVar6[7] = &TContextCacheElementUObject<TObjectPtr<UMaterial>_const&___ptr64>::
                 _vftable__for__FGCObject__;
    pUVar1 = (param_3->field0_0x0).DebugPtr;
    puVar6[9] = pUVar1;
    if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UMaterial *)0x0)) {
      GC::MarkAsReachable((UObject *)pUVar1);
    }
  }
  puVar5 = local_38[0];
  if (local_38[0] != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*local_38[0];
    local_38[0] = puVar6;
    (*(code *)*puVar2)(puVar5,1);
    puVar6 = local_38[0];
  }
  local_38[0] = puVar6;
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

// SetData<TObjectPtr<UMaterialInterface>_const_&> @ 14e902570

void __thiscall
UE::Dataflow::FContext::SetData<TObjectPtr<UMaterialInterface>_const_&>
          (FContext *this,uint param_1,FProperty *param_2,TObjectPtr<UMaterialInterface> *param_3,
          FGuid *param_4,uint param_5,FTimestamp *param_6)

{
  UMaterialInterface *pUVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *local_38 [2];
  
  local_38[0] = (undefined8 *)0x0;
  puVar6 = ::operator_new(0x50);
  if (puVar6 == (undefined8 *)0x0) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    uVar3 = *(undefined8 *)param_4;
    uVar4 = *(undefined8 *)&param_4->C;
    puVar6[6] = param_6->Value;
    *puVar6 = &___7FContextCacheElementBase_Dataflow_UE__6B_;
    *(undefined8 *)((longlong)puVar6 + 0xc) = uVar3;
    *(undefined8 *)((longlong)puVar6 + 0x14) = uVar4;
    *(undefined4 *)(puVar6 + 1) = 3;
    puVar6[4] = param_2;
    *(uint *)(puVar6 + 5) = param_5;
    puVar6[7] = &___7FGCObject__6B_;
    *(undefined2 *)(puVar6 + 8) = 0;
    FGCObject::RegisterGCObject((FGCObject *)(puVar6 + 7));
    *puVar6 = &TContextCacheElementUObject<TObjectPtr<UMaterialInterface>_const&___ptr64>::
               _vftable__for__UE__Dataflow__FContextCacheElementBase__;
    puVar6[7] = &TContextCacheElementUObject<TObjectPtr<UMaterialInterface>_const&___ptr64>::
                 _vftable__for__FGCObject__;
    pUVar1 = (param_3->field0_0x0).DebugPtr;
    puVar6[9] = pUVar1;
    if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UMaterialInterface *)0x0)) {
      GC::MarkAsReachable((UObject *)pUVar1);
    }
  }
  puVar5 = local_38[0];
  if (local_38[0] != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*local_38[0];
    local_38[0] = puVar6;
    (*(code *)*puVar2)(puVar5,1);
    puVar6 = local_38[0];
  }
  local_38[0] = puVar6;
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

// SetData<UE::Math::TQuat<double>_const_&> @ 14e9026f0

void __thiscall
UE::Dataflow::FContext::SetData<UE::Math::TQuat<double>_const_&>
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
    pFVar3 = FContextCacheElementUStruct::
             FContextCacheElementUStruct<UE::Math::TQuat<double>_const_&>
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

// SetData<UE::Math::TRotator<double>_const_&> @ 14e902800

void __thiscall
UE::Dataflow::FContext::SetData<UE::Math::TRotator<double>_const_&>
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
    pFVar3 = FContextCacheElementUStruct::
             FContextCacheElementUStruct<UE::Math::TRotator<double>_const_&>
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

// SetData<UE::Math::TSphere<double>_const_&> @ 14e902910

void __thiscall
UE::Dataflow::FContext::SetData<UE::Math::TSphere<double>_const_&>
          (FContext *this,uint param_1,FProperty *param_2,TSphere<double> *param_3,FGuid *param_4,
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
    pFVar3 = FContextCacheElementUStruct::
             FContextCacheElementUStruct<UE::Math::TSphere<double>_const_&>
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

// SetData<UE::Math::TTransform<double>_const_&> @ 14e902a20

void __thiscall
UE::Dataflow::FContext::SetData<UE::Math::TTransform<double>_const_&>
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
    pFVar3 = FContextCacheElementUStruct::
             FContextCacheElementUStruct<UE::Math::TTransform<double>_const_&>
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

// SetData<UE::Math::TVector<double>_const_&> @ 14e902b30

void __thiscall
UE::Dataflow::FContext::SetData<UE::Math::TVector<double>_const_&>
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
    pFVar3 = FContextCacheElementUStruct::
             FContextCacheElementUStruct<UE::Math::TVector<double>_const_&>
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

// SetData<FDataflowFaceSelection_const_&> @ 14e902c40

void __thiscall
UE::Dataflow::FContext::SetData<FDataflowFaceSelection_const_&>
          (FContext *this,uint param_1,FProperty *param_2,FDataflowFaceSelection *param_3,
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
             FContextCacheElementUStruct<FDataflowFaceSelection_const_&>
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

// SetData<FDataflowTransformSelection_const_&> @ 14e902d50

void __thiscall
UE::Dataflow::FContext::SetData<FDataflowTransformSelection_const_&>
          (FContext *this,uint param_1,FProperty *param_2,FDataflowTransformSelection *param_3,
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
             FContextCacheElementUStruct<FDataflowTransformSelection_const_&>
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

// SetData<FDataflowVertexSelection_const_&> @ 14e902e60

void __thiscall
UE::Dataflow::FContext::SetData<FDataflowVertexSelection_const_&>
          (FContext *this,uint param_1,FProperty *param_2,FDataflowVertexSelection *param_3,
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
             FContextCacheElementUStruct<FDataflowVertexSelection_const_&>
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

// SetData<TArray<int,TSizedDefaultAllocator<32>_>_const_&> @ 14e902f70

void __thiscall
UE::Dataflow::FContext::SetData<TArray<int,TSizedDefaultAllocator<32>_>_const_&>
          (FContext *this,uint param_1,FProperty *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3,FGuid *param_4,uint param_5,
          FTimestamp *param_6)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *local_38;
  FScriptContainerElement *local_30;
  
  local_38 = (undefined8 *)0x0;
  puVar7 = ::operator_new(0x48);
  if (puVar7 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)0x0;
  }
  else {
    uVar4 = *(undefined8 *)param_4;
    uVar5 = *(undefined8 *)&param_4->C;
    puVar7[6] = param_6->Value;
    *(undefined4 *)(puVar7 + 1) = 0;
    *puVar7 = &
              ___7__TContextCacheElement_AEBV__TArray_HV__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
    ;
    pFVar1 = (ForAnyElementType *)(puVar7 + 7);
    *(undefined8 *)((longlong)puVar7 + 0xc) = uVar4;
    *(undefined8 *)((longlong)puVar7 + 0x14) = uVar5;
    puVar7[4] = param_2;
    *(uint *)(puVar7 + 5) = param_5;
    pFVar1->Data = (FScriptContainerElement *)0x0;
    local_30 = (param_3->AllocatorInstance).Data;
    iVar2 = param_3->ArrayNum;
    *(int *)(puVar7 + 8) = iVar2;
    if (iVar2 == 0) {
      *(int *)((longlong)puVar7 + 0x44) = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar2,0,pFVar1,iVar2,(int *)((longlong)puVar7 + 0x44));
      memcpy(pFVar1->Data,local_30,(longlong)iVar2 << 2);
    }
  }
  puVar6 = local_38;
  if (local_38 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)*local_38;
    local_38 = puVar7;
    (*(code *)*puVar3)(puVar6,1);
    puVar7 = local_38;
  }
  local_38 = puVar7;
  if (local_38 == (undefined8 *)0x0) {
    SetNullData(this,param_1,param_2,param_4,param_5,param_6);
  }
  else {
    (**(code **)(this->_padding_ + 0x28))(this,param_1,&local_38);
  }
  if (local_38 != (undefined8 *)0x0) {
    (**(code **)*local_38)(local_38,1);
  }
  return;
}

// SetData<TArray<float,TSizedDefaultAllocator<32>_>_const_&> @ 14e9030f0

void __thiscall
UE::Dataflow::FContext::SetData<TArray<float,TSizedDefaultAllocator<32>_>_const_&>
          (FContext *this,uint param_1,FProperty *param_2,
          TArray<float,TSizedDefaultAllocator<32>_> *param_3,FGuid *param_4,uint param_5,
          FTimestamp *param_6)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *local_38;
  FScriptContainerElement *local_30;
  
  local_38 = (undefined8 *)0x0;
  puVar7 = ::operator_new(0x48);
  if (puVar7 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)0x0;
  }
  else {
    uVar4 = *(undefined8 *)param_4;
    uVar5 = *(undefined8 *)&param_4->C;
    puVar7[6] = param_6->Value;
    *(undefined4 *)(puVar7 + 1) = 0;
    *puVar7 = &
              ___7__TContextCacheElement_AEBV__TArray_MV__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
    ;
    pFVar1 = (ForAnyElementType *)(puVar7 + 7);
    *(undefined8 *)((longlong)puVar7 + 0xc) = uVar4;
    *(undefined8 *)((longlong)puVar7 + 0x14) = uVar5;
    puVar7[4] = param_2;
    *(uint *)(puVar7 + 5) = param_5;
    pFVar1->Data = (FScriptContainerElement *)0x0;
    local_30 = (param_3->AllocatorInstance).Data;
    iVar2 = param_3->ArrayNum;
    *(int *)(puVar7 + 8) = iVar2;
    if (iVar2 == 0) {
      *(int *)((longlong)puVar7 + 0x44) = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar2,0,pFVar1,iVar2,(int *)((longlong)puVar7 + 0x44));
      memcpy(pFVar1->Data,local_30,(longlong)iVar2 << 2);
    }
  }
  puVar6 = local_38;
  if (local_38 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)*local_38;
    local_38 = puVar7;
    (*(code *)*puVar3)(puVar6,1);
    puVar7 = local_38;
  }
  local_38 = puVar7;
  if (local_38 == (undefined8 *)0x0) {
    SetNullData(this,param_1,param_2,param_4,param_5,param_6);
  }
  else {
    (**(code **)(this->_padding_ + 0x28))(this,param_1,&local_38);
  }
  if (local_38 != (undefined8 *)0x0) {
    (**(code **)*local_38)(local_38,1);
  }
  return;
}

// SetData<TArray<double,TSizedDefaultAllocator<32>_>_const_&> @ 14e903270

void __thiscall
UE::Dataflow::FContext::SetData<TArray<double,TSizedDefaultAllocator<32>_>_const_&>
          (FContext *this,uint param_1,FProperty *param_2,
          TArray<double,TSizedDefaultAllocator<32>_> *param_3,FGuid *param_4,uint param_5,
          FTimestamp *param_6)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *local_38;
  FScriptContainerElement *local_30;
  
  local_38 = (undefined8 *)0x0;
  puVar7 = ::operator_new(0x48);
  if (puVar7 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)0x0;
  }
  else {
    uVar4 = *(undefined8 *)param_4;
    uVar5 = *(undefined8 *)&param_4->C;
    puVar7[6] = param_6->Value;
    *(undefined4 *)(puVar7 + 1) = 0;
    *puVar7 = &
              ___7__TContextCacheElement_AEBV__TArray_NV__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
    ;
    pFVar1 = (ForAnyElementType *)(puVar7 + 7);
    *(undefined8 *)((longlong)puVar7 + 0xc) = uVar4;
    *(undefined8 *)((longlong)puVar7 + 0x14) = uVar5;
    puVar7[4] = param_2;
    *(uint *)(puVar7 + 5) = param_5;
    pFVar1->Data = (FScriptContainerElement *)0x0;
    local_30 = (param_3->AllocatorInstance).Data;
    iVar2 = param_3->ArrayNum;
    *(int *)(puVar7 + 8) = iVar2;
    if (iVar2 == 0) {
      *(int *)((longlong)puVar7 + 0x44) = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar2,0,pFVar1,iVar2,(int *)((longlong)puVar7 + 0x44));
      memcpy(pFVar1->Data,local_30,(longlong)iVar2 << 3);
    }
  }
  puVar6 = local_38;
  if (local_38 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)*local_38;
    local_38 = puVar7;
    (*(code *)*puVar3)(puVar6,1);
    puVar7 = local_38;
  }
  local_38 = puVar7;
  if (local_38 == (undefined8 *)0x0) {
    SetNullData(this,param_1,param_2,param_4,param_5,param_6);
  }
  else {
    (**(code **)(this->_padding_ + 0x28))(this,param_1,&local_38);
  }
  if (local_38 != (undefined8 *)0x0) {
    (**(code **)*local_38)(local_38,1);
  }
  return;
}

// SetData<TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_>_const_&> @ 14e9033f0

void __thiscall
UE::Dataflow::FContext::SetData<TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_>_const_&>
          (FContext *this,uint param_1,FProperty *param_2,
          TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_> *param_3,FGuid *param_4,
          uint param_5,FTimestamp *param_6)

{
  longlong *plVar1;
  TContextCacheElementUObjectArray<TObjectPtr<UMaterial>_> *pTVar2;
  TContextCacheElementUObjectArray<TObjectPtr<UMaterial>_> *pTVar3;
  TContextCacheElementUObjectArray<TObjectPtr<UMaterial>_> *local_48 [2];
  FGuid local_38;
  
  pTVar3 = (TContextCacheElementUObjectArray<TObjectPtr<UMaterial>_> *)0x0;
  local_48[0] = (TContextCacheElementUObjectArray<TObjectPtr<UMaterial>_> *)0x0;
  pTVar2 = ::operator_new(0x58);
  if (pTVar2 != (TContextCacheElementUObjectArray<TObjectPtr<UMaterial>_> *)0x0) {
    local_38.A = param_4->A;
    local_38.B = param_4->B;
    local_38.C = param_4->C;
    local_38.D = param_4->D;
    pTVar3 = TContextCacheElementUObjectArray<TObjectPtr<UMaterial>_>::
             TContextCacheElementUObjectArray<TObjectPtr<UMaterial>_><TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_>_const_&>
                       (pTVar2,&local_38,param_2,param_3,param_5,(FTimestamp)param_6->Value);
  }
  pTVar2 = local_48[0];
  if (local_48[0] != (TContextCacheElementUObjectArray<TObjectPtr<UMaterial>_> *)0x0) {
    plVar1 = &local_48[0]->_padding_;
    local_48[0] = pTVar3;
    (**(code **)*plVar1)(pTVar2,1);
    pTVar3 = local_48[0];
  }
  local_48[0] = pTVar3;
  if (local_48[0] == (TContextCacheElementUObjectArray<TObjectPtr<UMaterial>_> *)0x0) {
    SetNullData(this,param_1,param_2,param_4,param_5,param_6);
  }
  else {
    (**(code **)(this->_padding_ + 0x28))(this,param_1,local_48);
  }
  if (local_48[0] != (TContextCacheElementUObjectArray<TObjectPtr<UMaterial>_> *)0x0) {
    (**(code **)local_48[0]->_padding_)(local_48[0],1);
  }
  return;
}

// SetData<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_const_&> @ 14e903500

void __thiscall
UE::Dataflow::FContext::
SetData<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_const_&>
          (FContext *this,uint param_1,FProperty *param_2,
          TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *param_3,FGuid *param_4
          ,uint param_5,FTimestamp *param_6)

{
  longlong *plVar1;
  TContextCacheElementUObjectArray<TObjectPtr<UMaterialInterface>_> *pTVar2;
  TContextCacheElementUObjectArray<TObjectPtr<UMaterialInterface>_> *pTVar3;
  TContextCacheElementUObjectArray<TObjectPtr<UMaterialInterface>_> *local_48 [2];
  FGuid local_38;
  
  pTVar3 = (TContextCacheElementUObjectArray<TObjectPtr<UMaterialInterface>_> *)0x0;
  local_48[0] = (TContextCacheElementUObjectArray<TObjectPtr<UMaterialInterface>_> *)0x0;
  pTVar2 = ::operator_new(0x58);
  if (pTVar2 != (TContextCacheElementUObjectArray<TObjectPtr<UMaterialInterface>_> *)0x0) {
    local_38.A = param_4->A;
    local_38.B = param_4->B;
    local_38.C = param_4->C;
    local_38.D = param_4->D;
    pTVar3 = TContextCacheElementUObjectArray<TObjectPtr<UMaterialInterface>_>::
             TContextCacheElementUObjectArray<TObjectPtr<UMaterialInterface>_><TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_const_&>
                       (pTVar2,&local_38,param_2,param_3,param_5,(FTimestamp)param_6->Value);
  }
  pTVar2 = local_48[0];
  if (local_48[0] != (TContextCacheElementUObjectArray<TObjectPtr<UMaterialInterface>_> *)0x0) {
    plVar1 = &local_48[0]->_padding_;
    local_48[0] = pTVar3;
    (**(code **)*plVar1)(pTVar2,1);
    pTVar3 = local_48[0];
  }
  local_48[0] = pTVar3;
  if (local_48[0] == (TContextCacheElementUObjectArray<TObjectPtr<UMaterialInterface>_> *)0x0) {
    SetNullData(this,param_1,param_2,param_4,param_5,param_6);
  }
  else {
    (**(code **)(this->_padding_ + 0x28))(this,param_1,local_48);
  }
  if (local_48[0] != (TContextCacheElementUObjectArray<TObjectPtr<UMaterialInterface>_> *)0x0) {
    (**(code **)local_48[0]->_padding_)(local_48[0],1);
  }
  return;
}

// SetData<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_const_&> @ 14e903610

void __thiscall
UE::Dataflow::FContext::
SetData<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_const_&>
          (FContext *this,uint param_1,FProperty *param_2,
          TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *param_3,FGuid *param_4,
          uint param_5,FTimestamp *param_6)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *local_38;
  FScriptContainerElement *local_30;
  
  local_38 = (undefined8 *)0x0;
  puVar7 = ::operator_new(0x48);
  if (puVar7 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)0x0;
  }
  else {
    uVar4 = *(undefined8 *)param_4;
    uVar5 = *(undefined8 *)&param_4->C;
    puVar7[6] = param_6->Value;
    *(undefined4 *)(puVar7 + 1) = 0;
    *puVar7 = &
              ___7__TContextCacheElement_AEBV__TArray_U__TVector_M_Math_UE__V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
    ;
    pFVar1 = (ForAnyElementType *)(puVar7 + 7);
    *(undefined8 *)((longlong)puVar7 + 0xc) = uVar4;
    *(undefined8 *)((longlong)puVar7 + 0x14) = uVar5;
    puVar7[4] = param_2;
    *(uint *)(puVar7 + 5) = param_5;
    pFVar1->Data = (FScriptContainerElement *)0x0;
    local_30 = (param_3->AllocatorInstance).Data;
    iVar2 = param_3->ArrayNum;
    *(int *)(puVar7 + 8) = iVar2;
    if (iVar2 == 0) {
      *(int *)((longlong)puVar7 + 0x44) = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,iVar2,0,pFVar1,iVar2,(int *)((longlong)puVar7 + 0x44));
      memcpy(pFVar1->Data,local_30,(longlong)iVar2 * 0xc);
    }
  }
  puVar6 = local_38;
  if (local_38 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)*local_38;
    local_38 = puVar7;
    (*(code *)*puVar3)(puVar6,1);
    puVar7 = local_38;
  }
  local_38 = puVar7;
  if (local_38 == (undefined8 *)0x0) {
    SetNullData(this,param_1,param_2,param_4,param_5,param_6);
  }
  else {
    (**(code **)(this->_padding_ + 0x28))(this,param_1,&local_38);
  }
  if (local_38 != (undefined8 *)0x0) {
    (**(code **)*local_38)(local_38,1);
  }
  return;
}

// SetData<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_const_&> @ 14e903790

void __thiscall
UE::Dataflow::FContext::
SetData<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_const_&>
          (FContext *this,uint param_1,FProperty *param_2,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_3,FGuid *param_4,
          uint param_5,FTimestamp *param_6)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *local_38;
  FScriptContainerElement *local_30;
  
  local_38 = (undefined8 *)0x0;
  puVar7 = ::operator_new(0x48);
  if (puVar7 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)0x0;
  }
  else {
    uVar4 = *(undefined8 *)param_4;
    uVar5 = *(undefined8 *)&param_4->C;
    puVar7[6] = param_6->Value;
    *(undefined4 *)(puVar7 + 1) = 0;
    *puVar7 = &
              ___7__TContextCacheElement_AEBV__TArray_U__TVector_N_Math_UE__V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
    ;
    pFVar1 = (ForAnyElementType *)(puVar7 + 7);
    *(undefined8 *)((longlong)puVar7 + 0xc) = uVar4;
    *(undefined8 *)((longlong)puVar7 + 0x14) = uVar5;
    puVar7[4] = param_2;
    *(uint *)(puVar7 + 5) = param_5;
    pFVar1->Data = (FScriptContainerElement *)0x0;
    local_30 = (param_3->AllocatorInstance).Data;
    iVar2 = param_3->ArrayNum;
    *(int *)(puVar7 + 8) = iVar2;
    if (iVar2 == 0) {
      *(int *)((longlong)puVar7 + 0x44) = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,iVar2,0,pFVar1,iVar2,(int *)((longlong)puVar7 + 0x44));
      memcpy(pFVar1->Data,local_30,(longlong)iVar2 * 0x18);
    }
  }
  puVar6 = local_38;
  if (local_38 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)*local_38;
    local_38 = puVar7;
    (*(code *)*puVar3)(puVar6,1);
    puVar7 = local_38;
  }
  local_38 = puVar7;
  if (local_38 == (undefined8 *)0x0) {
    SetNullData(this,param_1,param_2,param_4,param_5,param_6);
  }
  else {
    (**(code **)(this->_padding_ + 0x28))(this,param_1,&local_38);
  }
  if (local_38 != (undefined8 *)0x0) {
    (**(code **)*local_38)(local_38,1);
  }
  return;
}

// SetData<TArray<FDataflowRootProxyMesh,TSizedDefaultAllocator<32>_>_const_&> @ 14e903910

void __thiscall
UE::Dataflow::FContext::SetData<TArray<FDataflowRootProxyMesh,TSizedDefaultAllocator<32>_>_const_&>
          (FContext *this,uint param_1,FProperty *param_2,
          TArray<FDataflowRootProxyMesh,TSizedDefaultAllocator<32>_> *param_3,FGuid *param_4,
          uint param_5,FTimestamp *param_6)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *local_38;
  FDataflowRootProxyMesh *local_30;
  
  local_38 = (undefined8 *)0x0;
  puVar7 = ::operator_new(0x48);
  if (puVar7 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)0x0;
  }
  else {
    uVar4 = *(undefined8 *)param_4;
    uVar5 = *(undefined8 *)&param_4->C;
    puVar7[6] = param_6->Value;
    *(undefined4 *)(puVar7 + 1) = 0;
    *puVar7 = &
              ___7__TContextCacheElement_AEBV__TArray_UFDataflowRootProxyMesh__V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
    ;
    pFVar1 = (ForAnyElementType *)(puVar7 + 7);
    *(undefined8 *)((longlong)puVar7 + 0xc) = uVar4;
    *(undefined8 *)((longlong)puVar7 + 0x14) = uVar5;
    puVar7[4] = param_2;
    *(uint *)(puVar7 + 5) = param_5;
    pFVar1->Data = (FScriptContainerElement *)0x0;
    local_30 = (FDataflowRootProxyMesh *)(param_3->AllocatorInstance).Data;
    iVar2 = param_3->ArrayNum;
    *(int *)(puVar7 + 8) = iVar2;
    if (iVar2 == 0) {
      *(int *)((longlong)puVar7 + 0x44) = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x80,0x10,iVar2,0,pFVar1,iVar2,(int *)((longlong)puVar7 + 0x44));
      ConstructItems<FDataflowRootProxyMesh,FDataflowRootProxyMesh,int>(pFVar1->Data,local_30,iVar2)
      ;
    }
  }
  puVar6 = local_38;
  if (local_38 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)*local_38;
    local_38 = puVar7;
    (*(code *)*puVar3)(puVar6,1);
    puVar7 = local_38;
  }
  local_38 = puVar7;
  if (local_38 == (undefined8 *)0x0) {
    SetNullData(this,param_1,param_2,param_4,param_5,param_6);
  }
  else {
    (**(code **)(this->_padding_ + 0x28))(this,param_1,&local_38);
  }
  if (local_38 != (undefined8 *)0x0) {
    (**(code **)*local_38)(local_38,1);
  }
  return;
}

// SetData<TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_>_const_&> @ 14e903a90

void __thiscall
UE::Dataflow::FContext::
SetData<TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_>_const_&>
          (FContext *this,uint param_1,FProperty *param_2,
          TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_> *param_3,
          FGuid *param_4,uint param_5,FTimestamp *param_6)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *local_38;
  FGeometryCollectionAutoInstanceMesh *local_30;
  
  local_38 = (undefined8 *)0x0;
  puVar7 = ::operator_new(0x48);
  if (puVar7 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)0x0;
  }
  else {
    uVar4 = *(undefined8 *)param_4;
    uVar5 = *(undefined8 *)&param_4->C;
    puVar7[6] = param_6->Value;
    *(undefined4 *)(puVar7 + 1) = 0;
    *puVar7 = &
              ___7__TContextCacheElement_AEBV__TArray_UFGeometryCollectionAutoInstanceMesh__V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
    ;
    pFVar1 = (ForAnyElementType *)(puVar7 + 7);
    *(undefined8 *)((longlong)puVar7 + 0xc) = uVar4;
    *(undefined8 *)((longlong)puVar7 + 0x14) = uVar5;
    puVar7[4] = param_2;
    *(uint *)(puVar7 + 5) = param_5;
    pFVar1->Data = (FScriptContainerElement *)0x0;
    local_30 = (FGeometryCollectionAutoInstanceMesh *)(param_3->AllocatorInstance).Data;
    iVar2 = param_3->ArrayNum;
    *(int *)(puVar7 + 8) = iVar2;
    if (iVar2 == 0) {
      *(int *)((longlong)puVar7 + 0x44) = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,iVar2,0,pFVar1,iVar2,(int *)((longlong)puVar7 + 0x44));
      ConstructItems<FGeometryCollectionAutoInstanceMesh,FGeometryCollectionAutoInstanceMesh,int>
                (pFVar1->Data,local_30,iVar2);
    }
  }
  puVar6 = local_38;
  if (local_38 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)*local_38;
    local_38 = puVar7;
    (*(code *)*puVar3)(puVar6,1);
    puVar7 = local_38;
  }
  local_38 = puVar7;
  if (local_38 == (undefined8 *)0x0) {
    SetNullData(this,param_1,param_2,param_4,param_5,param_6);
  }
  else {
    (**(code **)(this->_padding_ + 0x28))(this,param_1,&local_38);
  }
  if (local_38 != (undefined8 *)0x0) {
    (**(code **)*local_38)(local_38,1);
  }
  return;
}

// SetData<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_const_&> @ 14e903c10

void __thiscall
UE::Dataflow::FContext::SetData<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_const_&>
          (FContext *this,uint param_1,FProperty *param_2,
          TArray<FLinearColor,TSizedDefaultAllocator<32>_> *param_3,FGuid *param_4,uint param_5,
          FTimestamp *param_6)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *local_38;
  FScriptContainerElement *local_30;
  
  local_38 = (undefined8 *)0x0;
  puVar7 = ::operator_new(0x48);
  if (puVar7 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)0x0;
  }
  else {
    uVar4 = *(undefined8 *)param_4;
    uVar5 = *(undefined8 *)&param_4->C;
    puVar7[6] = param_6->Value;
    *(undefined4 *)(puVar7 + 1) = 0;
    *puVar7 = &
              ___7__TContextCacheElement_AEBV__TArray_UFLinearColor__V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
    ;
    pFVar1 = (ForAnyElementType *)(puVar7 + 7);
    *(undefined8 *)((longlong)puVar7 + 0xc) = uVar4;
    *(undefined8 *)((longlong)puVar7 + 0x14) = uVar5;
    puVar7[4] = param_2;
    *(uint *)(puVar7 + 5) = param_5;
    pFVar1->Data = (FScriptContainerElement *)0x0;
    local_30 = (param_3->AllocatorInstance).Data;
    iVar2 = param_3->ArrayNum;
    *(int *)(puVar7 + 8) = iVar2;
    if (iVar2 == 0) {
      *(int *)((longlong)puVar7 + 0x44) = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,iVar2,0,pFVar1,iVar2,(int *)((longlong)puVar7 + 0x44));
      memcpy(pFVar1->Data,local_30,(longlong)iVar2 << 4);
    }
  }
  puVar6 = local_38;
  if (local_38 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)*local_38;
    local_38 = puVar7;
    (*(code *)*puVar3)(puVar6,1);
    puVar7 = local_38;
  }
  local_38 = puVar7;
  if (local_38 == (undefined8 *)0x0) {
    SetNullData(this,param_1,param_2,param_4,param_5,param_6);
  }
  else {
    (**(code **)(this->_padding_ + 0x28))(this,param_1,&local_38);
  }
  if (local_38 != (undefined8 *)0x0) {
    (**(code **)*local_38)(local_38,1);
  }
  return;
}

// SetData<TArray<FManagedArrayCollection,TSizedDefaultAllocator<32>_>_const_&> @ 14e903d90

void __thiscall
UE::Dataflow::FContext::SetData<TArray<FManagedArrayCollection,TSizedDefaultAllocator<32>_>_const_&>
          (FContext *this,uint param_1,FProperty *param_2,
          TArray<FManagedArrayCollection,TSizedDefaultAllocator<32>_> *param_3,FGuid *param_4,
          uint param_5,FTimestamp *param_6)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *local_38;
  FManagedArrayCollection *local_30;
  
  local_38 = (undefined8 *)0x0;
  puVar7 = ::operator_new(0x48);
  if (puVar7 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)0x0;
  }
  else {
    uVar4 = *(undefined8 *)param_4;
    uVar5 = *(undefined8 *)&param_4->C;
    puVar7[6] = param_6->Value;
    *(undefined4 *)(puVar7 + 1) = 0;
    *puVar7 = &
              ___7__TContextCacheElement_AEBV__TArray_UFManagedArrayCollection__V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
    ;
    pFVar1 = (ForAnyElementType *)(puVar7 + 7);
    *(undefined8 *)((longlong)puVar7 + 0xc) = uVar4;
    *(undefined8 *)((longlong)puVar7 + 0x14) = uVar5;
    puVar7[4] = param_2;
    *(uint *)(puVar7 + 5) = param_5;
    pFVar1->Data = (FScriptContainerElement *)0x0;
    local_30 = (FManagedArrayCollection *)(param_3->AllocatorInstance).Data;
    iVar2 = param_3->ArrayNum;
    *(int *)(puVar7 + 8) = iVar2;
    if (iVar2 == 0) {
      *(int *)((longlong)puVar7 + 0x44) = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xb0,8,iVar2,0,pFVar1,iVar2,(int *)((longlong)puVar7 + 0x44));
      ConstructItems<FManagedArrayCollection,FManagedArrayCollection,int>
                (pFVar1->Data,local_30,iVar2);
    }
  }
  puVar6 = local_38;
  if (local_38 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)*local_38;
    local_38 = puVar7;
    (*(code *)*puVar3)(puVar6,1);
    puVar7 = local_38;
  }
  local_38 = puVar7;
  if (local_38 == (undefined8 *)0x0) {
    SetNullData(this,param_1,param_2,param_4,param_5,param_6);
  }
  else {
    (**(code **)(this->_padding_ + 0x28))(this,param_1,&local_38);
  }
  if (local_38 != (undefined8 *)0x0) {
    (**(code **)*local_38)(local_38,1);
  }
  return;
}

// SetData<TArray<FString,TSizedDefaultAllocator<32>_>_const_&> @ 14e903f10

void __thiscall
UE::Dataflow::FContext::SetData<TArray<FString,TSizedDefaultAllocator<32>_>_const_&>
          (FContext *this,uint param_1,FProperty *param_2,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_3,FGuid *param_4,uint param_5,
          FTimestamp *param_6)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *local_38;
  FScriptContainerElement *local_30;
  
  local_38 = (undefined8 *)0x0;
  puVar7 = ::operator_new(0x48);
  if (puVar7 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)0x0;
  }
  else {
    uVar4 = *(undefined8 *)param_4;
    uVar5 = *(undefined8 *)&param_4->C;
    puVar7[6] = param_6->Value;
    *(undefined4 *)(puVar7 + 1) = 0;
    *puVar7 = &
              ___7__TContextCacheElement_AEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
    ;
    pFVar1 = (ForAnyElementType *)(puVar7 + 7);
    *(undefined8 *)((longlong)puVar7 + 0xc) = uVar4;
    *(undefined8 *)((longlong)puVar7 + 0x14) = uVar5;
    puVar7[4] = param_2;
    *(uint *)(puVar7 + 5) = param_5;
    pFVar1->Data = (FScriptContainerElement *)0x0;
    local_30 = (param_3->AllocatorInstance).Data;
    iVar2 = param_3->ArrayNum;
    *(int *)(puVar7 + 8) = iVar2;
    if (iVar2 == 0) {
      *(int *)((longlong)puVar7 + 0x44) = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar2,0,pFVar1,iVar2,(int *)((longlong)puVar7 + 0x44));
      ConstructItems<FString,FString,int>(pFVar1->Data,(FString *)local_30,iVar2);
    }
  }
  puVar6 = local_38;
  if (local_38 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)*local_38;
    local_38 = puVar7;
    (*(code *)*puVar3)(puVar6,1);
    puVar7 = local_38;
  }
  local_38 = puVar7;
  if (local_38 == (undefined8 *)0x0) {
    SetNullData(this,param_1,param_2,param_4,param_5,param_6);
  }
  else {
    (**(code **)(this->_padding_ + 0x28))(this,param_1,&local_38);
  }
  if (local_38 != (undefined8 *)0x0) {
    (**(code **)*local_38)(local_38,1);
  }
  return;
}

// SetData<FString_const_&> @ 14e904090

void __thiscall
UE::Dataflow::FContext::SetData<FString_const_&>
          (FContext *this,uint param_1,FProperty *param_2,FString *param_3,FGuid *param_4,
          uint param_5,FTimestamp *param_6)

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
    *puVar5 = &___7__TContextCacheElement_AEBVFString___Dataflow_UE__6B_;
    *(undefined8 *)((longlong)puVar5 + 0xc) = uVar2;
    *(undefined8 *)((longlong)puVar5 + 0x14) = uVar3;
    puVar5[4] = param_2;
    *(uint *)(puVar5 + 5) = param_5;
    ::FString::FString((FString *)(puVar5 + 7),param_3);
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

// SetData<bool_const_&> @ 14e9041b0

void __thiscall
UE::Dataflow::FContext::SetData<bool_const_&>
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
    *puVar8 = &___7__TContextCacheElement_AEB_N_Dataflow_UE__6B_;
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

// SetData<FDataflowCurveSelection> @ 14e9042c0

void __thiscall
UE::Dataflow::FContext::SetData<FDataflowCurveSelection>
          (FContext *this,uint param_1,FProperty *param_2,FDataflowCurveSelection *param_3,
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
    pFVar3 = FContextCacheElementUStruct::FContextCacheElementUStruct<FDataflowCurveSelection>
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

// SetData<FDataflowFaceSelection> @ 14e9043d0

void __thiscall
UE::Dataflow::FContext::SetData<FDataflowFaceSelection>
          (FContext *this,uint param_1,FProperty *param_2,FDataflowFaceSelection *param_3,
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
    pFVar3 = FContextCacheElementUStruct::FContextCacheElementUStruct<FDataflowFaceSelection>
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

// SetData<FDataflowGeometrySelection> @ 14e9044e0

void __thiscall
UE::Dataflow::FContext::SetData<FDataflowGeometrySelection>
          (FContext *this,uint param_1,FProperty *param_2,FDataflowGeometrySelection *param_3,
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
    pFVar3 = FContextCacheElementUStruct::FContextCacheElementUStruct<FDataflowGeometrySelection>
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

// SetData<FDataflowMaterialSelection> @ 14e9045f0

void __thiscall
UE::Dataflow::FContext::SetData<FDataflowMaterialSelection>
          (FContext *this,uint param_1,FProperty *param_2,FDataflowMaterialSelection *param_3,
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
    pFVar3 = FContextCacheElementUStruct::FContextCacheElementUStruct<FDataflowMaterialSelection>
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

// SetData<FDataflowTransformSelection> @ 14e904700

void __thiscall
UE::Dataflow::FContext::SetData<FDataflowTransformSelection>
          (FContext *this,uint param_1,FProperty *param_2,FDataflowTransformSelection *param_3,
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
    pFVar3 = FContextCacheElementUStruct::FContextCacheElementUStruct<FDataflowTransformSelection>
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

// SetData<FDataflowVertexSelection> @ 14e904810

void __thiscall
UE::Dataflow::FContext::SetData<FDataflowVertexSelection>
          (FContext *this,uint param_1,FProperty *param_2,FDataflowVertexSelection *param_3,
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
    pFVar3 = FContextCacheElementUStruct::FContextCacheElementUStruct<FDataflowVertexSelection>
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

// SetData<TArray<float,TSizedDefaultAllocator<32>_>_> @ 14e904920

void __thiscall
UE::Dataflow::FContext::SetData<TArray<float,TSizedDefaultAllocator<32>_>_>
          (FContext *this,uint param_1,FProperty *param_2,
          TArray<float,TSizedDefaultAllocator<32>_> *param_3,FGuid *param_4,uint param_5,
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
              ___7__TContextCacheElement_V__TArray_MV__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
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

// SetData<TArray<double,TSizedDefaultAllocator<32>_>_> @ 14e904a50

void __thiscall
UE::Dataflow::FContext::SetData<TArray<double,TSizedDefaultAllocator<32>_>_>
          (FContext *this,uint param_1,FProperty *param_2,
          TArray<double,TSizedDefaultAllocator<32>_> *param_3,FGuid *param_4,uint param_5,
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
              ___7__TContextCacheElement_V__TArray_NV__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
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

// SetData<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_> @ 14e904b80

void __thiscall
UE::Dataflow::FContext::SetData<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>
          (FContext *this,uint param_1,FProperty *param_2,
          TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *param_3,FGuid *param_4,
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
    *puVar7 = &
              ___7__TContextCacheElement_V__TArray_U__TVector_M_Math_UE__V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
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

// SetData<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_> @ 14e904cb0

void __thiscall
UE::Dataflow::FContext::SetData<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>
          (FContext *this,uint param_1,FProperty *param_2,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_3,FGuid *param_4,
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
    *puVar7 = &
              ___7__TContextCacheElement_V__TArray_U__TVector_N_Math_UE__V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
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

// SetData<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_> @ 14e904de0

void __thiscall
UE::Dataflow::FContext::SetData<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_>
          (FContext *this,uint param_1,FProperty *param_2,
          TArray<FLinearColor,TSizedDefaultAllocator<32>_> *param_3,FGuid *param_4,uint param_5,
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
              ___7__TContextCacheElement_V__TArray_UFLinearColor__V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
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

// SetData<TArray<FString,TSizedDefaultAllocator<32>_>_> @ 14e904f10

void __thiscall
UE::Dataflow::FContext::SetData<TArray<FString,TSizedDefaultAllocator<32>_>_>
          (FContext *this,uint param_1,FProperty *param_2,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_3,FGuid *param_4,uint param_5,
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
              ___7__TContextCacheElement_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
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

