// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowEngine
// Functions: 5

// SetValue<int> @ 1462cc370

void __thiscall FDataflowOutput::SetValue<int>(FDataflowOutput *this,int *param_1,FContext *param_2)

{
  FProperty *pFVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *puVar7;
  uint uVar8;
  FTimestamp FVar9;
  FGuid *pFVar10;
  ulong64 uVar11;
  undefined8 *puVar12;
  undefined8 *local_res8;
  FGuid local_38;
  
  if (this->_padding_ != 0) {
    FVar9 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this);
    uVar8 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this);
    pFVar10 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)this,&local_38);
    pFVar1 = (FProperty *)this->_padding_;
    uVar11 = CityHash64((char *)&this->_padding_,0x10);
    local_res8 = (undefined8 *)0x0;
    puVar12 = ::operator_new(0x40);
    puVar7 = local_res8;
    if (puVar12 != (undefined8 *)0x0) {
      uVar3 = pFVar10->A;
      uVar4 = pFVar10->B;
      uVar5 = pFVar10->C;
      uVar6 = pFVar10->D;
      puVar12[6] = *(undefined8 *)FVar9.Value;
      *puVar12 = &___7__TContextCacheElement_H_Dataflow_UE__6B_;
      *(undefined4 *)(puVar12 + 1) = 0;
      *(uint *)((longlong)puVar12 + 0xc) = uVar3;
      *(uint *)(puVar12 + 2) = uVar4;
      *(uint *)((longlong)puVar12 + 0x14) = uVar5;
      *(uint *)(puVar12 + 3) = uVar6;
      puVar12[4] = pFVar1;
      *(uint *)(puVar12 + 5) = uVar8;
      *(int *)(puVar12 + 7) = *param_1;
    }
    if (local_res8 != (undefined8 *)0x0) {
      puVar2 = (undefined8 *)*local_res8;
      local_res8 = puVar12;
      (*(code *)*puVar2)(puVar7,1);
      puVar12 = local_res8;
    }
    local_res8 = puVar12;
    if (local_res8 == (undefined8 *)0x0) {
      UE::Dataflow::FContext::SetNullData
                (param_2,(uint)uVar11,pFVar1,pFVar10,uVar8,(FTimestamp *)FVar9.Value);
    }
    else {
      (**(code **)(param_2->_padding_ + 0x28))(param_2,uVar11 & 0xffffffff,&local_res8);
    }
    if (local_res8 != (undefined8 *)0x0) {
      (**(code **)*local_res8)(local_res8,1);
    }
  }
  return;
}

// SetValue<float> @ 1462cc4a0

void __thiscall
FDataflowOutput::SetValue<float>(FDataflowOutput *this,float *param_1,FContext *param_2)

{
  FProperty *pFVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *puVar7;
  uint uVar8;
  FTimestamp FVar9;
  FGuid *pFVar10;
  ulong64 uVar11;
  undefined8 *puVar12;
  undefined8 *local_res8;
  FGuid local_38;
  
  if (this->_padding_ != 0) {
    FVar9 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this);
    uVar8 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this);
    pFVar10 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)this,&local_38);
    pFVar1 = (FProperty *)this->_padding_;
    uVar11 = CityHash64((char *)&this->_padding_,0x10);
    local_res8 = (undefined8 *)0x0;
    puVar12 = ::operator_new(0x40);
    puVar7 = local_res8;
    if (puVar12 != (undefined8 *)0x0) {
      uVar3 = pFVar10->A;
      uVar4 = pFVar10->B;
      uVar5 = pFVar10->C;
      uVar6 = pFVar10->D;
      puVar12[6] = *(undefined8 *)FVar9.Value;
      *puVar12 = &___7__TContextCacheElement_M_Dataflow_UE__6B_;
      *(undefined4 *)(puVar12 + 1) = 0;
      *(uint *)((longlong)puVar12 + 0xc) = uVar3;
      *(uint *)(puVar12 + 2) = uVar4;
      *(uint *)((longlong)puVar12 + 0x14) = uVar5;
      *(uint *)(puVar12 + 3) = uVar6;
      puVar12[4] = pFVar1;
      *(uint *)(puVar12 + 5) = uVar8;
      *(float *)(puVar12 + 7) = *param_1;
    }
    if (local_res8 != (undefined8 *)0x0) {
      puVar2 = (undefined8 *)*local_res8;
      local_res8 = puVar12;
      (*(code *)*puVar2)(puVar7,1);
      puVar12 = local_res8;
    }
    local_res8 = puVar12;
    if (local_res8 == (undefined8 *)0x0) {
      UE::Dataflow::FContext::SetNullData
                (param_2,(uint)uVar11,pFVar1,pFVar10,uVar8,(FTimestamp *)FVar9.Value);
    }
    else {
      (**(code **)(param_2->_padding_ + 0x28))(param_2,uVar11 & 0xffffffff,&local_res8);
    }
    if (local_res8 != (undefined8 *)0x0) {
      (**(code **)*local_res8)(local_res8,1);
    }
  }
  return;
}

// SetValue<TArray<float,TSizedDefaultAllocator<32>_>_> @ 1462cc5d0

void __thiscall
FDataflowOutput::SetValue<TArray<float,TSizedDefaultAllocator<32>_>_>
          (FDataflowOutput *this,TArray<float,TSizedDefaultAllocator<32>_> *param_1,
          FContext *param_2)

{
  FProperty *pFVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *puVar6;
  uint uVar7;
  FTimestamp FVar8;
  FGuid *pFVar9;
  ulong64 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *local_res8;
  FGuid local_48;
  
  if (this->_padding_ != 0) {
    FVar8 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this);
    uVar7 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this);
    pFVar9 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)this,&local_48);
    pFVar1 = (FProperty *)this->_padding_;
    uVar10 = CityHash64((char *)&this->_padding_,0x10);
    puVar12 = (undefined8 *)0x0;
    local_res8 = (undefined8 *)0x0;
    puVar11 = ::operator_new(0x48);
    puVar6 = local_res8;
    if (puVar11 != (undefined8 *)0x0) {
      uVar2 = pFVar9->A;
      uVar3 = pFVar9->B;
      uVar4 = pFVar9->C;
      uVar5 = pFVar9->D;
      puVar11[6] = *(undefined8 *)FVar8.Value;
      *puVar11 = &
                 ___7__TContextCacheElement_V__TArray_MV__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
      ;
      *(undefined4 *)(puVar11 + 1) = 0;
      *(uint *)((longlong)puVar11 + 0xc) = uVar2;
      *(uint *)(puVar11 + 2) = uVar3;
      *(uint *)((longlong)puVar11 + 0x14) = uVar4;
      *(uint *)(puVar11 + 3) = uVar5;
      puVar11[4] = pFVar1;
      *(uint *)(puVar11 + 5) = uVar7;
      puVar11[7] = 0;
      puVar11[7] = (param_1->AllocatorInstance).Data;
      (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      *(int *)(puVar11 + 8) = param_1->ArrayNum;
      *(int *)((longlong)puVar11 + 0x44) = param_1->ArrayMax;
      param_1->ArrayNum = 0;
      param_1->ArrayMax = 0;
      puVar12 = puVar11;
    }
    if (local_res8 != (undefined8 *)0x0) {
      puVar11 = (undefined8 *)*local_res8;
      local_res8 = puVar12;
      (*(code *)*puVar11)(puVar6,1);
      puVar12 = local_res8;
    }
    local_res8 = puVar12;
    if (local_res8 == (undefined8 *)0x0) {
      UE::Dataflow::FContext::SetNullData
                (param_2,(uint)uVar10,pFVar1,pFVar9,uVar7,(FTimestamp *)FVar8.Value);
    }
    else {
      (**(code **)(param_2->_padding_ + 0x28))(param_2,uVar10 & 0xffffffff,&local_res8);
    }
    if (local_res8 != (undefined8 *)0x0) {
      (**(code **)*local_res8)(local_res8,1);
    }
  }
  return;
}

// SetValue<TArray<FString,TSizedDefaultAllocator<32>_>_> @ 1462cc740

void __thiscall
FDataflowOutput::SetValue<TArray<FString,TSizedDefaultAllocator<32>_>_>
          (FDataflowOutput *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          FContext *param_2)

{
  FProperty *pFVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *puVar6;
  uint uVar7;
  FTimestamp FVar8;
  FGuid *pFVar9;
  ulong64 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *local_res8;
  FGuid local_48;
  
  if (this->_padding_ != 0) {
    FVar8 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this);
    uVar7 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this);
    pFVar9 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)this,&local_48);
    pFVar1 = (FProperty *)this->_padding_;
    uVar10 = CityHash64((char *)&this->_padding_,0x10);
    puVar12 = (undefined8 *)0x0;
    local_res8 = (undefined8 *)0x0;
    puVar11 = ::operator_new(0x48);
    puVar6 = local_res8;
    if (puVar11 != (undefined8 *)0x0) {
      uVar2 = pFVar9->A;
      uVar3 = pFVar9->B;
      uVar4 = pFVar9->C;
      uVar5 = pFVar9->D;
      puVar11[6] = *(undefined8 *)FVar8.Value;
      *puVar11 = &
                 ___7__TContextCacheElement_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
      ;
      *(undefined4 *)(puVar11 + 1) = 0;
      *(uint *)((longlong)puVar11 + 0xc) = uVar2;
      *(uint *)(puVar11 + 2) = uVar3;
      *(uint *)((longlong)puVar11 + 0x14) = uVar4;
      *(uint *)(puVar11 + 3) = uVar5;
      puVar11[4] = pFVar1;
      *(uint *)(puVar11 + 5) = uVar7;
      puVar11[7] = 0;
      puVar11[7] = (param_1->AllocatorInstance).Data;
      (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      *(int *)(puVar11 + 8) = param_1->ArrayNum;
      *(int *)((longlong)puVar11 + 0x44) = param_1->ArrayMax;
      param_1->ArrayNum = 0;
      param_1->ArrayMax = 0;
      puVar12 = puVar11;
    }
    if (local_res8 != (undefined8 *)0x0) {
      puVar11 = (undefined8 *)*local_res8;
      local_res8 = puVar12;
      (*(code *)*puVar11)(puVar6,1);
      puVar12 = local_res8;
    }
    local_res8 = puVar12;
    if (local_res8 == (undefined8 *)0x0) {
      UE::Dataflow::FContext::SetNullData
                (param_2,(uint)uVar10,pFVar1,pFVar9,uVar7,(FTimestamp *)FVar8.Value);
    }
    else {
      (**(code **)(param_2->_padding_ + 0x28))(param_2,uVar10 & 0xffffffff,&local_res8);
    }
    if (local_res8 != (undefined8 *)0x0) {
      (**(code **)*local_res8)(local_res8,1);
    }
  }
  return;
}

// SetValue<FString> @ 1462cc8b0

void __thiscall
FDataflowOutput::SetValue<FString>(FDataflowOutput *this,FString *param_1,FContext *param_2)

{
  FProperty *pFVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *puVar6;
  uint uVar7;
  FTimestamp FVar8;
  FGuid *pFVar9;
  ulong64 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *local_res8;
  FGuid local_48;
  
  if (this->_padding_ != 0) {
    FVar8 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this);
    uVar7 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this);
    pFVar9 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)this,&local_48);
    pFVar1 = (FProperty *)this->_padding_;
    uVar10 = CityHash64((char *)&this->_padding_,0x10);
    puVar12 = (undefined8 *)0x0;
    local_res8 = (undefined8 *)0x0;
    puVar11 = ::operator_new(0x48);
    puVar6 = local_res8;
    if (puVar11 != (undefined8 *)0x0) {
      uVar2 = pFVar9->A;
      uVar3 = pFVar9->B;
      uVar4 = pFVar9->C;
      uVar5 = pFVar9->D;
      puVar11[6] = *(undefined8 *)FVar8.Value;
      *puVar11 = &___7__TContextCacheElement_VFString___Dataflow_UE__6B_;
      *(undefined4 *)(puVar11 + 1) = 0;
      *(uint *)((longlong)puVar11 + 0xc) = uVar2;
      *(uint *)(puVar11 + 2) = uVar3;
      *(uint *)((longlong)puVar11 + 0x14) = uVar4;
      *(uint *)(puVar11 + 3) = uVar5;
      puVar11[4] = pFVar1;
      *(uint *)(puVar11 + 5) = uVar7;
      puVar11[7] = 0;
      puVar11[7] = (param_1->Data).AllocatorInstance.Data;
      (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(puVar11 + 8) = (param_1->Data).ArrayNum;
      *(int *)((longlong)puVar11 + 0x44) = (param_1->Data).ArrayMax;
      (param_1->Data).ArrayNum = 0;
      (param_1->Data).ArrayMax = 0;
      puVar12 = puVar11;
    }
    if (local_res8 != (undefined8 *)0x0) {
      puVar11 = (undefined8 *)*local_res8;
      local_res8 = puVar12;
      (*(code *)*puVar11)(puVar6,1);
      puVar12 = local_res8;
    }
    local_res8 = puVar12;
    if (local_res8 == (undefined8 *)0x0) {
      UE::Dataflow::FContext::SetNullData
                (param_2,(uint)uVar10,pFVar1,pFVar9,uVar7,(FTimestamp *)FVar8.Value);
    }
    else {
      (**(code **)(param_2->_padding_ + 0x28))(param_2,uVar10 & 0xffffffff,&local_res8);
    }
    if (local_res8 != (undefined8 *)0x0) {
      (**(code **)*local_res8)(local_res8,1);
    }
  }
  return;
}

