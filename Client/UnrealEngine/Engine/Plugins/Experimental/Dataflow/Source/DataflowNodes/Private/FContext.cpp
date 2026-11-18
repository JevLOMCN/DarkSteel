// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowNodes
// Functions: 4

// SetData<TObjectPtr<USkeletalMesh_const_>_const_&> @ 14dacab80

void __thiscall
UE::Dataflow::FContext::SetData<TObjectPtr<USkeletalMesh_const_>_const_&>
          (FContext *this,uint param_1,FProperty *param_2,TObjectPtr<USkeletalMesh_const_> *param_3,
          FGuid *param_4,uint param_5,FTimestamp *param_6)

{
  USkeletalMesh *pUVar1;
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
    *puVar6 = &TContextCacheElementUObject<TObjectPtr<USkeletalMesh_const_>_const&___ptr64>::
               _vftable__for__UE__Dataflow__FContextCacheElementBase__;
    puVar6[7] = &TContextCacheElementUObject<TObjectPtr<USkeletalMesh_const_>_const&___ptr64>::
                 _vftable__for__FGCObject__;
    pUVar1 = (param_3->field0_0x0).DebugPtr;
    puVar6[9] = pUVar1;
    if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (USkeletalMesh *)0x0)) {
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

// SetData<TObjectPtr<USkeleton_const_>_const_&> @ 14dacad00

void __thiscall
UE::Dataflow::FContext::SetData<TObjectPtr<USkeleton_const_>_const_&>
          (FContext *this,uint param_1,FProperty *param_2,TObjectPtr<USkeleton_const_> *param_3,
          FGuid *param_4,uint param_5,FTimestamp *param_6)

{
  USkeleton *pUVar1;
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
    *puVar6 = &TContextCacheElementUObject<TObjectPtr<USkeleton_const_>_const&___ptr64>::
               _vftable__for__UE__Dataflow__FContextCacheElementBase__;
    puVar6[7] = &TContextCacheElementUObject<TObjectPtr<USkeleton_const_>_const&___ptr64>::
                 _vftable__for__FGCObject__;
    pUVar1 = (param_3->field0_0x0).DebugPtr;
    puVar6[9] = pUVar1;
    if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (USkeleton *)0x0)) {
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

// SetData<TObjectPtr<UStaticMesh_const_>_const_&> @ 14dacae80

void __thiscall
UE::Dataflow::FContext::SetData<TObjectPtr<UStaticMesh_const_>_const_&>
          (FContext *this,uint param_1,FProperty *param_2,TObjectPtr<UStaticMesh_const_> *param_3,
          FGuid *param_4,uint param_5,FTimestamp *param_6)

{
  UStaticMesh *pUVar1;
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
    *puVar6 = &TContextCacheElementUObject<TObjectPtr<UStaticMesh_const_>_const&___ptr64>::
               _vftable__for__UE__Dataflow__FContextCacheElementBase__;
    puVar6[7] = &TContextCacheElementUObject<TObjectPtr<UStaticMesh_const_>_const&___ptr64>::
                 _vftable__for__FGCObject__;
    pUVar1 = (param_3->field0_0x0).DebugPtr;
    puVar6[9] = pUVar1;
    if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UStaticMesh *)0x0)) {
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

// SetData<TObjectPtr<USkeleton>_const_&> @ 14dacb000

void __thiscall
UE::Dataflow::FContext::SetData<TObjectPtr<USkeleton>_const_&>
          (FContext *this,uint param_1,FProperty *param_2,TObjectPtr<USkeleton> *param_3,
          FGuid *param_4,uint param_5,FTimestamp *param_6)

{
  USkeleton *pUVar1;
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
    *puVar6 = &TContextCacheElementUObject<TObjectPtr<USkeleton>_const&___ptr64>::
               _vftable__for__UE__Dataflow__FContextCacheElementBase__;
    puVar6[7] = &TContextCacheElementUObject<TObjectPtr<USkeleton>_const&___ptr64>::
                 _vftable__for__FGCObject__;
    pUVar1 = (param_3->field0_0x0).DebugPtr;
    puVar6[9] = pUVar1;
    if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (USkeleton *)0x0)) {
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

