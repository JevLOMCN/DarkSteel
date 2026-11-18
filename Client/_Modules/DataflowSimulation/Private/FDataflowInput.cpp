// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowSimulation
// Functions: 2

// GetValue<FDataflowSimulationTime> @ 1462f0840

FDataflowSimulationTime * __thiscall
FDataflowInput::GetValue<FDataflowSimulationTime>
          (FDataflowInput *this,FContext *param_1,FDataflowSimulationTime *param_2)

{
  FDataflowOutput *this_00;
  FProperty *pFVar1;
  longlong *plVar2;
  bool bVar3;
  uint uVar4;
  FDataflowSimulationTime *pFVar5;
  FTimestamp FVar6;
  FGuid *pFVar7;
  ulong64 uVar8;
  FContextCacheElementUStruct *pFVar9;
  FContextCacheElementUStruct *pFVar10;
  ulong64 uVar11;
  undefined8 *puVar12;
  FContextCacheElementUStruct *local_res8;
  FGuid local_58;
  FGuid local_48;
  
  this_00 = this->Connection;
  if (this_00 != (FDataflowOutput *)0x0) {
    bVar3 = FDataflowOutput::HasFrozenValue(this_00);
    if (bVar3) {
      pFVar5 = (FDataflowSimulationTime *)
               FDataflowOutput::GetFrozenPropertyValue(this_00,(uchar *)param_2);
      return pFVar5;
    }
    bVar3 = FDataflowOutput::Evaluate(this_00,param_1);
    if (!bVar3) {
      FVar6 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this);
      uVar4 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this);
      pFVar7 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)this,&local_48);
      pFVar1 = (FProperty *)this->_padding_;
      uVar8 = CityHash64((char *)&this_00->_padding_,0x10);
      pFVar10 = (FContextCacheElementUStruct *)0x0;
      local_res8 = (FContextCacheElementUStruct *)0x0;
      pFVar9 = ::operator_new(0x58);
      if (pFVar9 != (FContextCacheElementUStruct *)0x0) {
                    /* WARNING: Load size is inaccurate */
        local_58.A = pFVar7->A;
        local_58.B = pFVar7->B;
        local_58.C = pFVar7->C;
        local_58.D = pFVar7->D;
        pFVar10 = UE::Dataflow::FContextCacheElementUStruct::
                  FContextCacheElementUStruct<FDataflowSimulationTime_const_&>
                            (pFVar9,&local_58,pFVar1,param_2,uVar4,(FTimestamp)*FVar6.Value);
      }
      pFVar9 = local_res8;
      if (local_res8 != (FContextCacheElementUStruct *)0x0) {
        plVar2 = &local_res8->_padding_;
        local_res8 = pFVar10;
        (**(code **)*plVar2)(pFVar9,1);
        pFVar10 = local_res8;
      }
      local_res8 = pFVar10;
      if (local_res8 == (FContextCacheElementUStruct *)0x0) {
        UE::Dataflow::FContext::SetNullData
                  (param_1,(uint)uVar8,pFVar1,pFVar7,uVar4,(FTimestamp *)FVar6.Value);
      }
      else {
        (**(code **)(param_1->_padding_ + 0x28))(param_1,uVar8 & 0xffffffff,&local_res8);
      }
      if (local_res8 != (FContextCacheElementUStruct *)0x0) {
        (**(code **)local_res8->_padding_)(local_res8,1);
      }
    }
    uVar8 = UE::Dataflow::FTimestamp::Invalid;
    uVar11 = CityHash64((char *)&this_00->_padding_,0x10);
    bVar3 = UE::Dataflow::FContext::HasData(param_1,(uint)uVar11,(FTimestamp)uVar8);
    if (bVar3) {
      pFVar1 = (FProperty *)this->_padding_;
      uVar8 = CityHash64((char *)&this_00->_padding_,0x10);
      puVar12 = (undefined8 *)(**(code **)(param_1->_padding_ + 0x30))(param_1,uVar8 & 0xffffffff);
      if (puVar12 != (undefined8 *)0x0) {
        param_2 = UE::Dataflow::FContextCacheElementBase::GetTypedData<FDataflowSimulationTime>
                            ((FContextCacheElementBase *)*puVar12,(IContextCacheStore *)param_1,
                             pFVar1,param_2);
      }
    }
  }
  return param_2;
}

// GetValue<TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_>_> @ 1462f0a40

TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_> * __thiscall
FDataflowInput::GetValue<TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_>_>
          (FDataflowInput *this,FContext *param_1,
          TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_> *param_2)

{
  FDataflowOutput *this_00;
  FProperty *pFVar1;
  bool bVar2;
  uint uVar3;
  TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_> *pTVar4;
  FTimestamp FVar5;
  FGuid *pFVar6;
  ulong64 uVar7;
  ulong64 uVar8;
  undefined8 *puVar9;
  FGuid local_38;
  
  this_00 = this->Connection;
  if (this_00 != (FDataflowOutput *)0x0) {
    bVar2 = FDataflowOutput::HasFrozenValue(this_00);
    if (bVar2) {
      pTVar4 = (TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_> *)
               FDataflowOutput::GetFrozenPropertyValue(this_00,(uchar *)param_2);
      return pTVar4;
    }
    bVar2 = FDataflowOutput::Evaluate(this_00,param_1);
    if (!bVar2) {
      FVar5 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this);
      uVar3 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this);
      pFVar6 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)this,&local_38);
      pFVar1 = (FProperty *)this->_padding_;
      uVar7 = CityHash64((char *)&this_00->_padding_,0x10);
      UE::Dataflow::FContext::
      SetData<TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_>_const_&>
                (param_1,(uint)uVar7,pFVar1,param_2,pFVar6,uVar3,(FTimestamp *)FVar5.Value);
    }
    uVar7 = UE::Dataflow::FTimestamp::Invalid;
    uVar8 = CityHash64((char *)&this_00->_padding_,0x10);
    bVar2 = UE::Dataflow::FContext::HasData(param_1,(uint)uVar8,(FTimestamp)uVar7);
    if (bVar2) {
      pFVar1 = (FProperty *)this->_padding_;
      uVar7 = CityHash64((char *)&this_00->_padding_,0x10);
      puVar9 = (undefined8 *)(**(code **)(param_1->_padding_ + 0x30))(param_1,uVar7 & 0xffffffff);
      if (puVar9 != (undefined8 *)0x0) {
        param_2 = UE::Dataflow::FContextCacheElementBase::
                  GetTypedData<TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_>_>
                            ((FContextCacheElementBase *)*puVar9,(IContextCacheStore *)param_1,
                             pFVar1,param_2);
      }
    }
  }
  return param_2;
}

