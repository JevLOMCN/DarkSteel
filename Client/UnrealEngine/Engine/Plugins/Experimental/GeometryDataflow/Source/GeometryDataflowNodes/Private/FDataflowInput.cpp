// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryDataflowNodes
// Functions: 1

// GetValue<TObjectPtr<UDynamicMesh>_> @ 14e8001b0

TObjectPtr<UDynamicMesh> * __thiscall
FDataflowInput::GetValue<TObjectPtr<UDynamicMesh>_>
          (FDataflowInput *this,FContext *param_1,TObjectPtr<UDynamicMesh> *param_2)

{
  FDataflowOutput *this_00;
  FProperty *pFVar1;
  UDynamicMesh *pUVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  bool bVar7;
  uint uVar8;
  TObjectPtr<UDynamicMesh> *pTVar9;
  FTimestamp FVar10;
  FGuid *pFVar11;
  ulong64 uVar12;
  undefined8 *puVar13;
  ulong64 uVar14;
  undefined8 *local_res20;
  FGuid local_50;
  
  this_00 = this->Connection;
  if (this_00 != (FDataflowOutput *)0x0) {
    bVar7 = FDataflowOutput::HasFrozenValue(this_00);
    if (bVar7) {
      pTVar9 = (TObjectPtr<UDynamicMesh> *)
               FDataflowOutput::GetFrozenPropertyValue(this_00,(uchar *)param_2);
      return pTVar9;
    }
    bVar7 = FDataflowOutput::Evaluate(this_00,param_1);
    if (!bVar7) {
      FVar10 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this);
      uVar8 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this);
      pFVar11 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)this,&local_50);
      pFVar1 = (FProperty *)this->_padding_;
      uVar12 = CityHash64((char *)&this_00->_padding_,0x10);
      local_res20 = (undefined8 *)0x0;
      puVar13 = ::operator_new(0x50);
      if (puVar13 == (undefined8 *)0x0) {
        puVar13 = (undefined8 *)0x0;
      }
      else {
        uVar4 = *(undefined8 *)pFVar11;
        uVar5 = *(undefined8 *)&pFVar11->C;
        puVar13[6] = *(undefined8 *)FVar10.Value;
        *puVar13 = &___7FContextCacheElementBase_Dataflow_UE__6B_;
        puVar13[4] = pFVar1;
        *(undefined4 *)(puVar13 + 1) = 3;
        *(undefined8 *)((longlong)puVar13 + 0xc) = uVar4;
        *(undefined8 *)((longlong)puVar13 + 0x14) = uVar5;
        *(uint *)(puVar13 + 5) = uVar8;
        puVar13[7] = &___7FGCObject__6B_;
        *(undefined2 *)(puVar13 + 8) = 0;
        FGCObject::RegisterGCObject((FGCObject *)(puVar13 + 7));
        *puVar13 = &UE::Dataflow::
                    TContextCacheElementUObject<TObjectPtr<UDynamicMesh>_const&___ptr64>::
                    _vftable__for__UE__Dataflow__FContextCacheElementBase__;
        puVar13[7] = &UE::Dataflow::
                      TContextCacheElementUObject<TObjectPtr<UDynamicMesh>_const&___ptr64>::
                      _vftable__for__FGCObject__;
        pUVar2 = (param_2->field0_0x0).DebugPtr;
        puVar13[9] = pUVar2;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UDynamicMesh *)0x0))
        {
          UE::GC::MarkAsReachable((UObject *)pUVar2);
        }
      }
      puVar6 = local_res20;
      if (local_res20 != (undefined8 *)0x0) {
        puVar3 = (undefined8 *)*local_res20;
        local_res20 = puVar13;
        (*(code *)*puVar3)(puVar6,1);
        puVar13 = local_res20;
      }
      local_res20 = puVar13;
      if (local_res20 == (undefined8 *)0x0) {
        UE::Dataflow::FContext::SetNullData
                  (param_1,(uint)uVar12,pFVar1,pFVar11,uVar8,(FTimestamp *)FVar10.Value);
      }
      else {
        (**(code **)(param_1->_padding_ + 0x28))(param_1,uVar12 & 0xffffffff,&local_res20);
      }
      if (local_res20 != (undefined8 *)0x0) {
        (**(code **)*local_res20)(local_res20,1);
      }
    }
    uVar12 = UE::Dataflow::FTimestamp::Invalid;
    uVar14 = CityHash64((char *)&this_00->_padding_,0x10);
    bVar7 = UE::Dataflow::FContext::HasData(param_1,(uint)uVar14,(FTimestamp)uVar12);
    if (bVar7) {
      pFVar1 = (FProperty *)this->_padding_;
      uVar12 = CityHash64((char *)&this_00->_padding_,0x10);
      puVar13 = (undefined8 *)(**(code **)(param_1->_padding_ + 0x30))(param_1,uVar12 & 0xffffffff);
      if (puVar13 != (undefined8 *)0x0) {
        param_2 = UE::Dataflow::FContextCacheElementBase::GetTypedData<TObjectPtr<UDynamicMesh>_>
                            ((FContextCacheElementBase *)*puVar13,(IContextCacheStore *)param_1,
                             pFVar1,param_2);
      }
    }
  }
  return param_2;
}

