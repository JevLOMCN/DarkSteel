// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 42

// GetValue<float> @ 14e8fa270

float * __thiscall
FDataflowInput::GetValue<float>(FDataflowInput *this,FContext *param_1,float *param_2)

{
  FDataflowOutput *this_00;
  FProperty *pFVar1;
  bool bVar2;
  uint uVar3;
  float *pfVar4;
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
      pfVar4 = (float *)FDataflowOutput::GetFrozenPropertyValue(this_00,(uchar *)param_2);
      return pfVar4;
    }
    bVar2 = FDataflowOutput::Evaluate(this_00,param_1);
    if (!bVar2) {
      FVar5 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this);
      uVar3 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this);
      pFVar6 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)this,&local_38);
      pFVar1 = (FProperty *)this->_padding_;
      uVar7 = CityHash64((char *)&this_00->_padding_,0x10);
      UE::Dataflow::FContext::SetData<float_const_&>
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
        param_2 = UE::Dataflow::FContextCacheElementBase::GetTypedData<float>
                            ((FContextCacheElementBase *)*puVar9,(IContextCacheStore *)param_1,
                             pFVar1,param_2);
      }
    }
  }
  return param_2;
}

// GetValue<double> @ 14e8fa420

double * __thiscall
FDataflowInput::GetValue<double>(FDataflowInput *this,FContext *param_1,double *param_2)

{
  FDataflowOutput *this_00;
  FProperty *pFVar1;
  bool bVar2;
  uint uVar3;
  double *pdVar4;
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
      pdVar4 = (double *)FDataflowOutput::GetFrozenPropertyValue(this_00,(uchar *)param_2);
      return pdVar4;
    }
    bVar2 = FDataflowOutput::Evaluate(this_00,param_1);
    if (!bVar2) {
      FVar5 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this);
      uVar3 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this);
      pFVar6 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)this,&local_38);
      pFVar1 = (FProperty *)this->_padding_;
      uVar7 = CityHash64((char *)&this_00->_padding_,0x10);
      UE::Dataflow::FContext::SetData<double_const_&>
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
        param_2 = UE::Dataflow::FContextCacheElementBase::GetTypedData<double>
                            ((FContextCacheElementBase *)*puVar9,(IContextCacheStore *)param_1,
                             pFVar1,param_2);
      }
    }
  }
  return param_2;
}

// GetValue<UE::Math::TBox<double>_> @ 14e8fa710

TBox<double> * __thiscall
FDataflowInput::GetValue<UE::Math::TBox<double>_>
          (FDataflowInput *this,FContext *param_1,TBox<double> *param_2)

{
  FDataflowOutput *this_00;
  FProperty *pFVar1;
  bool bVar2;
  uint uVar3;
  TBox<double> *pTVar4;
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
      pTVar4 = (TBox<double> *)FDataflowOutput::GetFrozenPropertyValue(this_00,(uchar *)param_2);
      return pTVar4;
    }
    bVar2 = FDataflowOutput::Evaluate(this_00,param_1);
    if (!bVar2) {
      FVar5 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this);
      uVar3 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this);
      pFVar6 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)this,&local_38);
      pFVar1 = (FProperty *)this->_padding_;
      uVar7 = CityHash64((char *)&this_00->_padding_,0x10);
      UE::Dataflow::FContext::SetData<UE::Math::TBox<double>_const_&>
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
        param_2 = UE::Dataflow::FContextCacheElementBase::GetTypedData<UE::Math::TBox<double>_>
                            ((FContextCacheElementBase *)*puVar9,(IContextCacheStore *)param_1,
                             pFVar1,param_2);
      }
    }
  }
  return param_2;
}

// GetValue<TObjectPtr<UDataflowMesh_const_>_> @ 14e8faa00

TObjectPtr<UDataflowMesh_const_> * __thiscall
FDataflowInput::GetValue<TObjectPtr<UDataflowMesh_const_>_>
          (FDataflowInput *this,FContext *param_1,TObjectPtr<UDataflowMesh_const_> *param_2)

{
  FDataflowOutput *this_00;
  FProperty *pFVar1;
  UDataflowMesh *pUVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  bool bVar7;
  uint uVar8;
  TObjectPtr<UDataflowMesh_const_> *pTVar9;
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
      pTVar9 = (TObjectPtr<UDataflowMesh_const_> *)
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
                    TContextCacheElementUObject<TObjectPtr<UDataflowMesh_const_>_const&___ptr64>::
                    _vftable__for__UE__Dataflow__FContextCacheElementBase__;
        puVar13[7] = &UE::Dataflow::
                      TContextCacheElementUObject<TObjectPtr<UDataflowMesh_const_>_const&___ptr64>::
                      _vftable__for__FGCObject__;
        pUVar2 = (param_2->field0_0x0).DebugPtr;
        puVar13[9] = pUVar2;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UDataflowMesh *)0x0)
           ) {
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
        param_2 = UE::Dataflow::FContextCacheElementBase::
                  GetTypedData<TObjectPtr<UDataflowMesh_const_>_>
                            ((FContextCacheElementBase *)*puVar13,(IContextCacheStore *)param_1,
                             pFVar1,param_2);
      }
    }
  }
  return param_2;
}

// GetValue<TObjectPtr<UDynamicMesh_const_>_> @ 14e8fac50

TObjectPtr<UDynamicMesh_const_> * __thiscall
FDataflowInput::GetValue<TObjectPtr<UDynamicMesh_const_>_>
          (FDataflowInput *this,FContext *param_1,TObjectPtr<UDynamicMesh_const_> *param_2)

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
  TObjectPtr<UDynamicMesh_const_> *pTVar9;
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
      pTVar9 = (TObjectPtr<UDynamicMesh_const_> *)
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
                    TContextCacheElementUObject<TObjectPtr<UDynamicMesh_const_>_const&___ptr64>::
                    _vftable__for__UE__Dataflow__FContextCacheElementBase__;
        puVar13[7] = &UE::Dataflow::
                      TContextCacheElementUObject<TObjectPtr<UDynamicMesh_const_>_const&___ptr64>::
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
        param_2 = UE::Dataflow::FContextCacheElementBase::
                  GetTypedData<TObjectPtr<UDynamicMesh_const_>_>
                            ((FContextCacheElementBase *)*puVar13,(IContextCacheStore *)param_1,
                             pFVar1,param_2);
      }
    }
  }
  return param_2;
}

// GetValue<TObjectPtr<UDataflowMesh>_> @ 14e8faea0

TObjectPtr<UDataflowMesh> * __thiscall
FDataflowInput::GetValue<TObjectPtr<UDataflowMesh>_>
          (FDataflowInput *this,FContext *param_1,TObjectPtr<UDataflowMesh> *param_2)

{
  FDataflowOutput *this_00;
  FProperty *pFVar1;
  bool bVar2;
  uint uVar3;
  TObjectPtr<UDataflowMesh> *pTVar4;
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
      pTVar4 = (TObjectPtr<UDataflowMesh> *)
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
      UE::Dataflow::FContext::SetData<TObjectPtr<UDataflowMesh>_const_&>
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
        param_2 = UE::Dataflow::FContextCacheElementBase::GetTypedData<TObjectPtr<UDataflowMesh>_>
                            ((FContextCacheElementBase *)*puVar9,(IContextCacheStore *)param_1,
                             pFVar1,param_2);
      }
    }
  }
  return param_2;
}

// GetValue<TObjectPtr<UGeometryCollection>_> @ 14e8fb320

TObjectPtr<UGeometryCollection> * __thiscall
FDataflowInput::GetValue<TObjectPtr<UGeometryCollection>_>
          (FDataflowInput *this,FContext *param_1,TObjectPtr<UGeometryCollection> *param_2)

{
  FDataflowOutput *this_00;
  FProperty *pFVar1;
  UGeometryCollection *pUVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  bool bVar7;
  uint uVar8;
  TObjectPtr<UGeometryCollection> *pTVar9;
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
      pTVar9 = (TObjectPtr<UGeometryCollection> *)
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
                    TContextCacheElementUObject<TObjectPtr<UGeometryCollection>_const&___ptr64>::
                    _vftable__for__UE__Dataflow__FContextCacheElementBase__;
        puVar13[7] = &UE::Dataflow::
                      TContextCacheElementUObject<TObjectPtr<UGeometryCollection>_const&___ptr64>::
                      _vftable__for__FGCObject__;
        pUVar2 = (param_2->field0_0x0).DebugPtr;
        puVar13[9] = pUVar2;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar2 != (UGeometryCollection *)0x0)) {
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
        param_2 = UE::Dataflow::FContextCacheElementBase::
                  GetTypedData<TObjectPtr<UGeometryCollection>_>
                            ((FContextCacheElementBase *)*puVar13,(IContextCacheStore *)param_1,
                             pFVar1,param_2);
      }
    }
  }
  return param_2;
}

// GetValue<TObjectPtr<UMaterial>_> @ 14e8fb570

TObjectPtr<UMaterial> * __thiscall
FDataflowInput::GetValue<TObjectPtr<UMaterial>_>
          (FDataflowInput *this,FContext *param_1,TObjectPtr<UMaterial> *param_2)

{
  FDataflowOutput *this_00;
  FProperty *pFVar1;
  bool bVar2;
  uint uVar3;
  TObjectPtr<UMaterial> *pTVar4;
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
      pTVar4 = (TObjectPtr<UMaterial> *)
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
      UE::Dataflow::FContext::SetData<TObjectPtr<UMaterial>_const_&>
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
        param_2 = UE::Dataflow::FContextCacheElementBase::GetTypedData<TObjectPtr<UMaterial>_>
                            ((FContextCacheElementBase *)*puVar9,(IContextCacheStore *)param_1,
                             pFVar1,param_2);
      }
    }
  }
  return param_2;
}

// GetValue<TObjectPtr<UMaterialInterface>_> @ 14e8fb860

TObjectPtr<UMaterialInterface> * __thiscall
FDataflowInput::GetValue<TObjectPtr<UMaterialInterface>_>
          (FDataflowInput *this,FContext *param_1,TObjectPtr<UMaterialInterface> *param_2)

{
  FDataflowOutput *this_00;
  FProperty *pFVar1;
  bool bVar2;
  uint uVar3;
  TObjectPtr<UMaterialInterface> *pTVar4;
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
      pTVar4 = (TObjectPtr<UMaterialInterface> *)
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
      UE::Dataflow::FContext::SetData<TObjectPtr<UMaterialInterface>_const_&>
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
                  GetTypedData<TObjectPtr<UMaterialInterface>_>
                            ((FContextCacheElementBase *)*puVar9,(IContextCacheStore *)param_1,
                             pFVar1,param_2);
      }
    }
  }
  return param_2;
}

// GetValue<TObjectPtr<UStaticMesh>_> @ 14e8fbb30

TObjectPtr<UStaticMesh> * __thiscall
FDataflowInput::GetValue<TObjectPtr<UStaticMesh>_>
          (FDataflowInput *this,FContext *param_1,TObjectPtr<UStaticMesh> *param_2)

{
  FDataflowOutput *this_00;
  FProperty *pFVar1;
  UStaticMesh *pUVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  bool bVar7;
  uint uVar8;
  TObjectPtr<UStaticMesh> *pTVar9;
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
      pTVar9 = (TObjectPtr<UStaticMesh> *)
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
                    TContextCacheElementUObject<TObjectPtr<UStaticMesh>_const&___ptr64>::
                    _vftable__for__UE__Dataflow__FContextCacheElementBase__;
        puVar13[7] = &UE::Dataflow::
                      TContextCacheElementUObject<TObjectPtr<UStaticMesh>_const&___ptr64>::
                      _vftable__for__FGCObject__;
        pUVar2 = (param_2->field0_0x0).DebugPtr;
        puVar13[9] = pUVar2;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UStaticMesh *)0x0))
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
        param_2 = UE::Dataflow::FContextCacheElementBase::GetTypedData<TObjectPtr<UStaticMesh>_>
                            ((FContextCacheElementBase *)*puVar13,(IContextCacheStore *)param_1,
                             pFVar1,param_2);
      }
    }
  }
  return param_2;
}

// GetValue<UE::Math::TQuat<double>_> @ 14e8fbd80

TQuat<double> * __thiscall
FDataflowInput::GetValue<UE::Math::TQuat<double>_>
          (FDataflowInput *this,FContext *param_1,TQuat<double> *param_2)

{
  FDataflowOutput *this_00;
  FProperty *pFVar1;
  bool bVar2;
  uint uVar3;
  TQuat<double> *pTVar4;
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
      pTVar4 = (TQuat<double> *)FDataflowOutput::GetFrozenPropertyValue(this_00,(uchar *)param_2);
      return pTVar4;
    }
    bVar2 = FDataflowOutput::Evaluate(this_00,param_1);
    if (!bVar2) {
      FVar5 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this);
      uVar3 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this);
      pFVar6 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)this,&local_38);
      pFVar1 = (FProperty *)this->_padding_;
      uVar7 = CityHash64((char *)&this_00->_padding_,0x10);
      UE::Dataflow::FContext::SetData<UE::Math::TQuat<double>_const_&>
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
        param_2 = UE::Dataflow::FContextCacheElementBase::GetTypedData<UE::Math::TQuat<double>_>
                            ((FContextCacheElementBase *)*puVar9,(IContextCacheStore *)param_1,
                             pFVar1,param_2);
      }
    }
  }
  return param_2;
}

// GetValue<UE::Math::TRotator<double>_> @ 14e8fbee0

TRotator<double> * __thiscall
FDataflowInput::GetValue<UE::Math::TRotator<double>_>
          (FDataflowInput *this,FContext *param_1,TRotator<double> *param_2)

{
  FDataflowOutput *this_00;
  FProperty *pFVar1;
  bool bVar2;
  uint uVar3;
  TRotator<double> *pTVar4;
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
      pTVar4 = (TRotator<double> *)FDataflowOutput::GetFrozenPropertyValue(this_00,(uchar *)param_2)
      ;
      return pTVar4;
    }
    bVar2 = FDataflowOutput::Evaluate(this_00,param_1);
    if (!bVar2) {
      FVar5 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this);
      uVar3 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this);
      pFVar6 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)this,&local_38);
      pFVar1 = (FProperty *)this->_padding_;
      uVar7 = CityHash64((char *)&this_00->_padding_,0x10);
      UE::Dataflow::FContext::SetData<UE::Math::TRotator<double>_const_&>
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
        param_2 = UE::Dataflow::FContextCacheElementBase::GetTypedData<UE::Math::TRotator<double>_>
                            ((FContextCacheElementBase *)*puVar9,(IContextCacheStore *)param_1,
                             pFVar1,param_2);
      }
    }
  }
  return param_2;
}

// GetValue<UE::Math::TSphere<double>_> @ 14e8fc040

TSphere<double> * __thiscall
FDataflowInput::GetValue<UE::Math::TSphere<double>_>
          (FDataflowInput *this,FContext *param_1,TSphere<double> *param_2)

{
  FDataflowOutput *this_00;
  FProperty *pFVar1;
  bool bVar2;
  uint uVar3;
  TSphere<double> *pTVar4;
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
      pTVar4 = (TSphere<double> *)FDataflowOutput::GetFrozenPropertyValue(this_00,(uchar *)param_2);
      return pTVar4;
    }
    bVar2 = FDataflowOutput::Evaluate(this_00,param_1);
    if (!bVar2) {
      FVar5 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this);
      uVar3 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this);
      pFVar6 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)this,&local_38);
      pFVar1 = (FProperty *)this->_padding_;
      uVar7 = CityHash64((char *)&this_00->_padding_,0x10);
      UE::Dataflow::FContext::SetData<UE::Math::TSphere<double>_const_&>
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
        param_2 = UE::Dataflow::FContextCacheElementBase::GetTypedData<UE::Math::TSphere<double>_>
                            ((FContextCacheElementBase *)*puVar9,(IContextCacheStore *)param_1,
                             pFVar1,param_2);
      }
    }
  }
  return param_2;
}

// GetValue<UE::Math::TTransform<double>_> @ 14e8fc330

TTransform<double> * __thiscall
FDataflowInput::GetValue<UE::Math::TTransform<double>_>
          (FDataflowInput *this,FContext *param_1,TTransform<double> *param_2)

{
  FDataflowOutput *this_00;
  FProperty *pFVar1;
  bool bVar2;
  uint uVar3;
  TTransform<double> *pTVar4;
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
      pTVar4 = (TTransform<double> *)
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
      UE::Dataflow::FContext::SetData<UE::Math::TTransform<double>_const_&>
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
                  GetTypedData<UE::Math::TTransform<double>_>
                            ((FContextCacheElementBase *)*puVar9,(IContextCacheStore *)param_1,
                             pFVar1,param_2);
      }
    }
  }
  return param_2;
}

// GetValue<UE::Math::TVector2<float>_> @ 14e8fc490

TVector2<float> * __thiscall
FDataflowInput::GetValue<UE::Math::TVector2<float>_>
          (FDataflowInput *this,FContext *param_1,TVector2<float> *param_2)

{
  FDataflowOutput *this_00;
  FProperty *pFVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  uint uVar8;
  TVector2<float> *pTVar9;
  FTimestamp FVar10;
  FGuid *pFVar11;
  ulong64 uVar12;
  undefined8 *puVar13;
  ulong64 uVar14;
  undefined8 *puVar15;
  undefined8 *local_res8;
  FGuid local_50;
  
  this_00 = this->Connection;
  if (this_00 != (FDataflowOutput *)0x0) {
    bVar7 = FDataflowOutput::HasFrozenValue(this_00);
    if (bVar7) {
      pTVar9 = (TVector2<float> *)FDataflowOutput::GetFrozenPropertyValue(this_00,(uchar *)param_2);
      return pTVar9;
    }
    bVar7 = FDataflowOutput::Evaluate(this_00,param_1);
    if (!bVar7) {
      FVar10 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this);
      uVar8 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this);
      pFVar11 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)this,&local_50);
      pFVar1 = (FProperty *)this->_padding_;
      uVar12 = CityHash64((char *)&this_00->_padding_,0x10);
      local_res8 = (undefined8 *)0x0;
      puVar13 = ::operator_new(0x40);
      puVar15 = local_res8;
      if (puVar13 != (undefined8 *)0x0) {
        uVar3 = pFVar11->A;
        uVar4 = pFVar11->B;
        uVar5 = pFVar11->C;
        uVar6 = pFVar11->D;
        puVar13[6] = *(undefined8 *)FVar10.Value;
        *puVar13 = &___7__TContextCacheElement_AEBU__TVector2_M_Math_UE___Dataflow_UE__6B_;
        *(undefined4 *)(puVar13 + 1) = 0;
        *(uint *)((longlong)puVar13 + 0xc) = uVar3;
        *(uint *)(puVar13 + 2) = uVar4;
        *(uint *)((longlong)puVar13 + 0x14) = uVar5;
        *(uint *)(puVar13 + 3) = uVar6;
        puVar13[4] = pFVar1;
        *(uint *)(puVar13 + 5) = uVar8;
        ((TVector2<float>_u_0 *)(puVar13 + 7))->_s_0 = (TVector2<float>_u_0_s_0)param_2->field0_0x0;
      }
      if (local_res8 != (undefined8 *)0x0) {
        puVar2 = (undefined8 *)*local_res8;
        local_res8 = puVar13;
        (*(code *)*puVar2)(puVar15,1);
        puVar13 = local_res8;
      }
      local_res8 = puVar13;
      if (local_res8 == (undefined8 *)0x0) {
        UE::Dataflow::FContext::SetNullData
                  (param_1,(uint)uVar12,pFVar1,pFVar11,uVar8,(FTimestamp *)FVar10.Value);
      }
      else {
        (**(code **)(param_1->_padding_ + 0x28))(param_1,uVar12 & 0xffffffff,&local_res8);
      }
      if (local_res8 != (undefined8 *)0x0) {
        (**(code **)*local_res8)(local_res8,1);
      }
    }
    uVar12 = UE::Dataflow::FTimestamp::Invalid;
    uVar14 = CityHash64((char *)&this_00->_padding_,0x10);
    bVar7 = UE::Dataflow::FContext::HasData(param_1,(uint)uVar14,(FTimestamp)uVar12);
    if (bVar7) {
      pFVar1 = (FProperty *)this->_padding_;
      uVar12 = CityHash64((char *)&this_00->_padding_,0x10);
      puVar15 = (undefined8 *)(**(code **)(param_1->_padding_ + 0x30))(param_1,uVar12 & 0xffffffff);
      if (puVar15 != (undefined8 *)0x0) {
        param_2 = UE::Dataflow::FContextCacheElementBase::GetTypedData<UE::Math::TVector2<float>_>
                            ((FContextCacheElementBase *)*puVar15,(IContextCacheStore *)param_1,
                             pFVar1,param_2);
      }
    }
  }
  return param_2;
}

// GetValue<UE::Math::TVector<double>_> @ 14e8fc690

TVector<double> * __thiscall
FDataflowInput::GetValue<UE::Math::TVector<double>_>
          (FDataflowInput *this,FContext *param_1,TVector<double> *param_2)

{
  FDataflowOutput *this_00;
  FProperty *pFVar1;
  bool bVar2;
  uint uVar3;
  TVector<double> *pTVar4;
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
      pTVar4 = (TVector<double> *)FDataflowOutput::GetFrozenPropertyValue(this_00,(uchar *)param_2);
      return pTVar4;
    }
    bVar2 = FDataflowOutput::Evaluate(this_00,param_1);
    if (!bVar2) {
      FVar5 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this);
      uVar3 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this);
      pFVar6 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)this,&local_38);
      pFVar1 = (FProperty *)this->_padding_;
      uVar7 = CityHash64((char *)&this_00->_padding_,0x10);
      UE::Dataflow::FContext::SetData<UE::Math::TVector<double>_const_&>
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
        param_2 = UE::Dataflow::FContextCacheElementBase::GetTypedData<UE::Math::TVector<double>_>
                            ((FContextCacheElementBase *)*puVar9,(IContextCacheStore *)param_1,
                             pFVar1,param_2);
      }
    }
  }
  return param_2;
}

// GetValue<FDataflowConvexDecompositionSettings> @ 14e8fc8c0

FDataflowConvexDecompositionSettings * __thiscall
FDataflowInput::GetValue<FDataflowConvexDecompositionSettings>
          (FDataflowInput *this,FContext *param_1,FDataflowConvexDecompositionSettings *param_2)

{
  FDataflowOutput *this_00;
  FProperty *pFVar1;
  longlong *plVar2;
  bool bVar3;
  uint uVar4;
  FDataflowConvexDecompositionSettings *pFVar5;
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
      pFVar5 = (FDataflowConvexDecompositionSettings *)
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
                  FContextCacheElementUStruct<FDataflowConvexDecompositionSettings_const_&>
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
        param_2 = UE::Dataflow::FContextCacheElementBase::
                  GetTypedData<FDataflowConvexDecompositionSettings>
                            ((FContextCacheElementBase *)*puVar12,(IContextCacheStore *)param_1,
                             pFVar1,param_2);
      }
    }
  }
  return param_2;
}

// GetValue<FDataflowFaceSelection> @ 14e8fcac0

FDataflowFaceSelection * __thiscall
FDataflowInput::GetValue<FDataflowFaceSelection>
          (FDataflowInput *this,FContext *param_1,FDataflowFaceSelection *param_2)

{
  FDataflowOutput *this_00;
  FProperty *pFVar1;
  bool bVar2;
  uint uVar3;
  FDataflowFaceSelection *pFVar4;
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
      pFVar4 = (FDataflowFaceSelection *)
               FDataflowOutput::GetFrozenPropertyValue(this_00,(uchar *)param_2);
      return pFVar4;
    }
    bVar2 = FDataflowOutput::Evaluate(this_00,param_1);
    if (!bVar2) {
      FVar5 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this);
      uVar3 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this);
      pFVar6 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)this,&local_38);
      pFVar1 = (FProperty *)this->_padding_;
      uVar7 = CityHash64((char *)&this_00->_padding_,0x10);
      UE::Dataflow::FContext::SetData<FDataflowFaceSelection_const_&>
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
        param_2 = UE::Dataflow::FContextCacheElementBase::GetTypedData<FDataflowFaceSelection>
                            ((FContextCacheElementBase *)*puVar9,(IContextCacheStore *)param_1,
                             pFVar1,param_2);
      }
    }
  }
  return param_2;
}

// GetValue<FDataflowRootProxyMesh> @ 14e8fcec0

FDataflowRootProxyMesh * __thiscall
FDataflowInput::GetValue<FDataflowRootProxyMesh>
          (FDataflowInput *this,FContext *param_1,FDataflowRootProxyMesh *param_2)

{
  FDataflowOutput *this_00;
  FProperty *pFVar1;
  longlong *plVar2;
  bool bVar3;
  uint uVar4;
  FDataflowRootProxyMesh *pFVar5;
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
      pFVar5 = (FDataflowRootProxyMesh *)
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
                  FContextCacheElementUStruct<FDataflowRootProxyMesh_const_&>
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
        param_2 = UE::Dataflow::FContextCacheElementBase::GetTypedData<FDataflowRootProxyMesh>
                            ((FContextCacheElementBase *)*puVar12,(IContextCacheStore *)param_1,
                             pFVar1,param_2);
      }
    }
  }
  return param_2;
}

// GetValue<FDataflowSphereCovering> @ 14e8fd0c0

FDataflowSphereCovering * __thiscall
FDataflowInput::GetValue<FDataflowSphereCovering>
          (FDataflowInput *this,FContext *param_1,FDataflowSphereCovering *param_2)

{
  FDataflowOutput *this_00;
  FProperty *pFVar1;
  longlong *plVar2;
  bool bVar3;
  uint uVar4;
  FDataflowSphereCovering *pFVar5;
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
      pFVar5 = (FDataflowSphereCovering *)
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
                  FContextCacheElementUStruct<FDataflowSphereCovering_const_&>
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
        param_2 = UE::Dataflow::FContextCacheElementBase::GetTypedData<FDataflowSphereCovering>
                            ((FContextCacheElementBase *)*puVar12,(IContextCacheStore *)param_1,
                             pFVar1,param_2);
      }
    }
  }
  return param_2;
}

// GetValue<FDataflowTransformSelection> @ 14e8fd2c0

FDataflowTransformSelection * __thiscall
FDataflowInput::GetValue<FDataflowTransformSelection>
          (FDataflowInput *this,FContext *param_1,FDataflowTransformSelection *param_2)

{
  FDataflowOutput *this_00;
  FProperty *pFVar1;
  bool bVar2;
  uint uVar3;
  FDataflowTransformSelection *pFVar4;
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
      pFVar4 = (FDataflowTransformSelection *)
               FDataflowOutput::GetFrozenPropertyValue(this_00,(uchar *)param_2);
      return pFVar4;
    }
    bVar2 = FDataflowOutput::Evaluate(this_00,param_1);
    if (!bVar2) {
      FVar5 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this);
      uVar3 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this);
      pFVar6 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)this,&local_38);
      pFVar1 = (FProperty *)this->_padding_;
      uVar7 = CityHash64((char *)&this_00->_padding_,0x10);
      UE::Dataflow::FContext::SetData<FDataflowTransformSelection_const_&>
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
        param_2 = UE::Dataflow::FContextCacheElementBase::GetTypedData<FDataflowTransformSelection>
                            ((FContextCacheElementBase *)*puVar9,(IContextCacheStore *)param_1,
                             pFVar1,param_2);
      }
    }
  }
  return param_2;
}

// GetValue<FDataflowVertexSelection> @ 14e8fd5b0

FDataflowVertexSelection * __thiscall
FDataflowInput::GetValue<FDataflowVertexSelection>
          (FDataflowInput *this,FContext *param_1,FDataflowVertexSelection *param_2)

{
  FDataflowOutput *this_00;
  FProperty *pFVar1;
  bool bVar2;
  uint uVar3;
  FDataflowVertexSelection *pFVar4;
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
      pFVar4 = (FDataflowVertexSelection *)
               FDataflowOutput::GetFrozenPropertyValue(this_00,(uchar *)param_2);
      return pFVar4;
    }
    bVar2 = FDataflowOutput::Evaluate(this_00,param_1);
    if (!bVar2) {
      FVar5 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this);
      uVar3 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this);
      pFVar6 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)this,&local_38);
      pFVar1 = (FProperty *)this->_padding_;
      uVar7 = CityHash64((char *)&this_00->_padding_,0x10);
      UE::Dataflow::FContext::SetData<FDataflowVertexSelection_const_&>
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
        param_2 = UE::Dataflow::FContextCacheElementBase::GetTypedData<FDataflowVertexSelection>
                            ((FContextCacheElementBase *)*puVar9,(IContextCacheStore *)param_1,
                             pFVar1,param_2);
      }
    }
  }
  return param_2;
}

// GetValue<TArray<float,TSizedDefaultAllocator<32>_>_> @ 14e8fda30

TArray<float,TSizedDefaultAllocator<32>_> * __thiscall
FDataflowInput::GetValue<TArray<float,TSizedDefaultAllocator<32>_>_>
          (FDataflowInput *this,FContext *param_1,TArray<float,TSizedDefaultAllocator<32>_> *param_2
          )

{
  FDataflowOutput *this_00;
  FProperty *pFVar1;
  bool bVar2;
  uint uVar3;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar4;
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
      pTVar4 = (TArray<float,TSizedDefaultAllocator<32>_> *)
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
      UE::Dataflow::FContext::SetData<TArray<float,TSizedDefaultAllocator<32>_>_const_&>
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
                  GetTypedData<TArray<float,TSizedDefaultAllocator<32>_>_>
                            ((FContextCacheElementBase *)*puVar9,(IContextCacheStore *)param_1,
                             pFVar1,param_2);
      }
    }
  }
  return param_2;
}

// GetValue<TArray<double,TSizedDefaultAllocator<32>_>_> @ 14e8fdd20

TArray<double,TSizedDefaultAllocator<32>_> * __thiscall
FDataflowInput::GetValue<TArray<double,TSizedDefaultAllocator<32>_>_>
          (FDataflowInput *this,FContext *param_1,
          TArray<double,TSizedDefaultAllocator<32>_> *param_2)

{
  FDataflowOutput *this_00;
  FProperty *pFVar1;
  bool bVar2;
  uint uVar3;
  TArray<double,TSizedDefaultAllocator<32>_> *pTVar4;
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
      pTVar4 = (TArray<double,TSizedDefaultAllocator<32>_> *)
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
      UE::Dataflow::FContext::SetData<TArray<double,TSizedDefaultAllocator<32>_>_const_&>
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
                  GetTypedData<TArray<double,TSizedDefaultAllocator<32>_>_>
                            ((FContextCacheElementBase *)*puVar9,(IContextCacheStore *)param_1,
                             pFVar1,param_2);
      }
    }
  }
  return param_2;
}

// GetValue<TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_>_> @ 14e8fde80

TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_> * __thiscall
FDataflowInput::GetValue<TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_>_>
          (FDataflowInput *this,FContext *param_1,
          TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_> *param_2)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  FDataflowOutput *this_00;
  FProperty *pFVar3;
  undefined8 uVar4;
  FScriptContainerElement *_Src;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  bool bVar9;
  uint uVar10;
  TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_> *pTVar11;
  FTimestamp FVar12;
  FGuid *pFVar13;
  ulong64 uVar14;
  undefined8 *puVar15;
  ulong64 uVar16;
  undefined8 *local_res20;
  FGuid local_50;
  
  this_00 = this->Connection;
  if (this_00 != (FDataflowOutput *)0x0) {
    bVar9 = FDataflowOutput::HasFrozenValue(this_00);
    if (bVar9) {
      pTVar11 = (TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_> *)
                FDataflowOutput::GetFrozenPropertyValue(this_00,(uchar *)param_2);
      return pTVar11;
    }
    bVar9 = FDataflowOutput::Evaluate(this_00,param_1);
    if (!bVar9) {
      FVar12 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this);
      uVar10 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this);
      pFVar13 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)this,&local_50);
      pFVar3 = (FProperty *)this->_padding_;
      uVar14 = CityHash64((char *)&this_00->_padding_,0x10);
      local_res20 = (undefined8 *)0x0;
      puVar15 = ::operator_new(0x48);
      if (puVar15 == (undefined8 *)0x0) {
        puVar15 = (undefined8 *)0x0;
      }
      else {
        uVar4 = *(undefined8 *)FVar12.Value;
        uVar6 = *(undefined8 *)pFVar13;
        uVar7 = *(undefined8 *)&pFVar13->C;
        puVar15[4] = pFVar3;
        *(uint *)(puVar15 + 5) = uVar10;
        pFVar1 = (ForAnyElementType *)(puVar15 + 7);
        *puVar15 = &
                   ___7__TContextCacheElement_AEBV__TArray_U__TBox_N_Math_UE__V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
        ;
        *(undefined4 *)(puVar15 + 1) = 0;
        *(undefined8 *)((longlong)puVar15 + 0xc) = uVar6;
        *(undefined8 *)((longlong)puVar15 + 0x14) = uVar7;
        puVar15[6] = uVar4;
        pFVar1->Data = (FScriptContainerElement *)0x0;
        _Src = (param_2->AllocatorInstance).Data;
        iVar2 = param_2->ArrayNum;
        *(int *)(puVar15 + 8) = iVar2;
        if (iVar2 == 0) {
          *(int *)((longlong)puVar15 + 0x44) = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x38,8,iVar2,0,pFVar1,iVar2,(int *)((longlong)puVar15 + 0x44));
          memcpy(pFVar1->Data,_Src,(longlong)iVar2 * 0x38);
        }
      }
      puVar8 = local_res20;
      if (local_res20 != (undefined8 *)0x0) {
        puVar5 = (undefined8 *)*local_res20;
        local_res20 = puVar15;
        (*(code *)*puVar5)(puVar8,1);
        puVar15 = local_res20;
      }
      local_res20 = puVar15;
      if (local_res20 == (undefined8 *)0x0) {
        UE::Dataflow::FContext::SetNullData
                  (param_1,(uint)uVar14,pFVar3,pFVar13,uVar10,(FTimestamp *)FVar12.Value);
      }
      else {
        (**(code **)(param_1->_padding_ + 0x28))(param_1,uVar14 & 0xffffffff,&local_res20);
      }
      if (local_res20 != (undefined8 *)0x0) {
        (**(code **)*local_res20)(local_res20,1);
      }
    }
    uVar14 = UE::Dataflow::FTimestamp::Invalid;
    uVar16 = CityHash64((char *)&this_00->_padding_,0x10);
    bVar9 = UE::Dataflow::FContext::HasData(param_1,(uint)uVar16,(FTimestamp)uVar14);
    if (bVar9) {
      pFVar3 = (FProperty *)this->_padding_;
      uVar14 = CityHash64((char *)&this_00->_padding_,0x10);
      puVar15 = (undefined8 *)(**(code **)(param_1->_padding_ + 0x30))(param_1,uVar14 & 0xffffffff);
      if (puVar15 != (undefined8 *)0x0) {
        param_2 = UE::Dataflow::FContextCacheElementBase::
                  GetTypedData<TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_>_>
                            ((FContextCacheElementBase *)*puVar15,(IContextCacheStore *)param_1,
                             pFVar3,param_2);
      }
    }
  }
  return param_2;
}

// GetValue<TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_>_> @ 14e8fe120

TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_> * __thiscall
FDataflowInput::GetValue<TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_>_>
          (FDataflowInput *this,FContext *param_1,
          TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_> *param_2)

{
  FDataflowOutput *this_00;
  FProperty *pFVar1;
  longlong *plVar2;
  bool bVar3;
  uint uVar4;
  TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_> *pTVar5;
  FTimestamp FVar6;
  FGuid *pFVar7;
  ulong64 uVar8;
  TContextCacheElementUObjectArray<TObjectPtr<UDynamicMesh>_> *pTVar9;
  TContextCacheElementUObjectArray<TObjectPtr<UDynamicMesh>_> *pTVar10;
  ulong64 uVar11;
  undefined8 *puVar12;
  TContextCacheElementUObjectArray<TObjectPtr<UDynamicMesh>_> *local_res8;
  FGuid local_58;
  FGuid local_48;
  
  this_00 = this->Connection;
  if (this_00 != (FDataflowOutput *)0x0) {
    bVar3 = FDataflowOutput::HasFrozenValue(this_00);
    if (bVar3) {
      pTVar5 = (TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_> *)
               FDataflowOutput::GetFrozenPropertyValue(this_00,(uchar *)param_2);
      return pTVar5;
    }
    bVar3 = FDataflowOutput::Evaluate(this_00,param_1);
    if (!bVar3) {
      FVar6 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this);
      uVar4 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this);
      pFVar7 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)this,&local_48);
      pFVar1 = (FProperty *)this->_padding_;
      uVar8 = CityHash64((char *)&this_00->_padding_,0x10);
      pTVar10 = (TContextCacheElementUObjectArray<TObjectPtr<UDynamicMesh>_> *)0x0;
      local_res8 = (TContextCacheElementUObjectArray<TObjectPtr<UDynamicMesh>_> *)0x0;
      pTVar9 = ::operator_new(0x58);
      if (pTVar9 != (TContextCacheElementUObjectArray<TObjectPtr<UDynamicMesh>_> *)0x0) {
                    /* WARNING: Load size is inaccurate */
        local_58.A = pFVar7->A;
        local_58.B = pFVar7->B;
        local_58.C = pFVar7->C;
        local_58.D = pFVar7->D;
        pTVar10 = UE::Dataflow::TContextCacheElementUObjectArray<TObjectPtr<UDynamicMesh>_>::
                  TContextCacheElementUObjectArray<TObjectPtr<UDynamicMesh>_><TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_>_const_&>
                            (pTVar9,&local_58,pFVar1,param_2,uVar4,(FTimestamp)*FVar6.Value);
      }
      pTVar9 = local_res8;
      if (local_res8 != (TContextCacheElementUObjectArray<TObjectPtr<UDynamicMesh>_> *)0x0) {
        plVar2 = &local_res8->_padding_;
        local_res8 = pTVar10;
        (**(code **)*plVar2)(pTVar9,1);
        pTVar10 = local_res8;
      }
      local_res8 = pTVar10;
      if (local_res8 == (TContextCacheElementUObjectArray<TObjectPtr<UDynamicMesh>_> *)0x0) {
        UE::Dataflow::FContext::SetNullData
                  (param_1,(uint)uVar8,pFVar1,pFVar7,uVar4,(FTimestamp *)FVar6.Value);
      }
      else {
        (**(code **)(param_1->_padding_ + 0x28))(param_1,uVar8 & 0xffffffff,&local_res8);
      }
      if (local_res8 != (TContextCacheElementUObjectArray<TObjectPtr<UDynamicMesh>_> *)0x0) {
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
        param_2 = UE::Dataflow::FContextCacheElementBase::
                  GetTypedData<TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_>_>
                            ((FContextCacheElementBase *)*puVar12,(IContextCacheStore *)param_1,
                             pFVar1,param_2);
      }
    }
  }
  return param_2;
}

// GetValue<TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_>_> @ 14e8fe320

TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_> * __thiscall
FDataflowInput::GetValue<TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_>_>
          (FDataflowInput *this,FContext *param_1,
          TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_> *param_2)

{
  FDataflowOutput *this_00;
  FProperty *pFVar1;
  bool bVar2;
  uint uVar3;
  TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_> *pTVar4;
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
      pTVar4 = (TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_> *)
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
      SetData<TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_>_const_&>
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
                  GetTypedData<TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_>_>
                            ((FContextCacheElementBase *)*puVar9,(IContextCacheStore *)param_1,
                             pFVar1,param_2);
      }
    }
  }
  return param_2;
}

// GetValue<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_> @ 14e8fe610

TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> * __thiscall
FDataflowInput::GetValue<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_>
          (FDataflowInput *this,FContext *param_1,
          TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *param_2)

{
  FDataflowOutput *this_00;
  FProperty *pFVar1;
  bool bVar2;
  uint uVar3;
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *pTVar4;
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
      pTVar4 = (TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *)
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
      SetData<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_const_&>
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
                  GetTypedData<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_>
                            ((FContextCacheElementBase *)*puVar9,(IContextCacheStore *)param_1,
                             pFVar1,param_2);
      }
    }
  }
  return param_2;
}

// GetValue<TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_>_> @ 14e8fe900

TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_> * __thiscall
FDataflowInput::GetValue<TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_>_>
          (FDataflowInput *this,FContext *param_1,
          TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_> *param_2)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  FDataflowOutput *this_00;
  FProperty *pFVar3;
  undefined8 uVar4;
  FScriptContainerElement *_Src;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  bool bVar9;
  uint uVar10;
  TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_> *pTVar11;
  FTimestamp FVar12;
  FGuid *pFVar13;
  ulong64 uVar14;
  undefined8 *puVar15;
  ulong64 uVar16;
  undefined8 *local_res20;
  FGuid local_50;
  
  this_00 = this->Connection;
  if (this_00 != (FDataflowOutput *)0x0) {
    bVar9 = FDataflowOutput::HasFrozenValue(this_00);
    if (bVar9) {
      pTVar11 = (TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_> *)
                FDataflowOutput::GetFrozenPropertyValue(this_00,(uchar *)param_2);
      return pTVar11;
    }
    bVar9 = FDataflowOutput::Evaluate(this_00,param_1);
    if (!bVar9) {
      FVar12 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this);
      uVar10 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this);
      pFVar13 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)this,&local_50);
      pFVar3 = (FProperty *)this->_padding_;
      uVar14 = CityHash64((char *)&this_00->_padding_,0x10);
      local_res20 = (undefined8 *)0x0;
      puVar15 = ::operator_new(0x48);
      if (puVar15 == (undefined8 *)0x0) {
        puVar15 = (undefined8 *)0x0;
      }
      else {
        uVar4 = *(undefined8 *)FVar12.Value;
        uVar6 = *(undefined8 *)pFVar13;
        uVar7 = *(undefined8 *)&pFVar13->C;
        puVar15[4] = pFVar3;
        *(uint *)(puVar15 + 5) = uVar10;
        pFVar1 = (ForAnyElementType *)(puVar15 + 7);
        *puVar15 = &
                   ___7__TContextCacheElement_AEBV__TArray_U__TSphere_N_Math_UE__V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
        ;
        *(undefined4 *)(puVar15 + 1) = 0;
        *(undefined8 *)((longlong)puVar15 + 0xc) = uVar6;
        *(undefined8 *)((longlong)puVar15 + 0x14) = uVar7;
        puVar15[6] = uVar4;
        pFVar1->Data = (FScriptContainerElement *)0x0;
        _Src = (param_2->AllocatorInstance).Data;
        iVar2 = param_2->ArrayNum;
        *(int *)(puVar15 + 8) = iVar2;
        if (iVar2 == 0) {
          *(int *)((longlong)puVar15 + 0x44) = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,iVar2,0,pFVar1,iVar2,(int *)((longlong)puVar15 + 0x44));
          memcpy(pFVar1->Data,_Src,(longlong)iVar2 << 5);
        }
      }
      puVar8 = local_res20;
      if (local_res20 != (undefined8 *)0x0) {
        puVar5 = (undefined8 *)*local_res20;
        local_res20 = puVar15;
        (*(code *)*puVar5)(puVar8,1);
        puVar15 = local_res20;
      }
      local_res20 = puVar15;
      if (local_res20 == (undefined8 *)0x0) {
        UE::Dataflow::FContext::SetNullData
                  (param_1,(uint)uVar14,pFVar3,pFVar13,uVar10,(FTimestamp *)FVar12.Value);
      }
      else {
        (**(code **)(param_1->_padding_ + 0x28))(param_1,uVar14 & 0xffffffff,&local_res20);
      }
      if (local_res20 != (undefined8 *)0x0) {
        (**(code **)*local_res20)(local_res20,1);
      }
    }
    uVar14 = UE::Dataflow::FTimestamp::Invalid;
    uVar16 = CityHash64((char *)&this_00->_padding_,0x10);
    bVar9 = UE::Dataflow::FContext::HasData(param_1,(uint)uVar16,(FTimestamp)uVar14);
    if (bVar9) {
      pFVar3 = (FProperty *)this->_padding_;
      uVar14 = CityHash64((char *)&this_00->_padding_,0x10);
      puVar15 = (undefined8 *)(**(code **)(param_1->_padding_ + 0x30))(param_1,uVar14 & 0xffffffff);
      if (puVar15 != (undefined8 *)0x0) {
        param_2 = UE::Dataflow::FContextCacheElementBase::
                  GetTypedData<TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_>_>
                            ((FContextCacheElementBase *)*puVar15,(IContextCacheStore *)param_1,
                             pFVar3,param_2);
      }
    }
  }
  return param_2;
}

// GetValue<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_> @ 14e8feba0

TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> * __thiscall
FDataflowInput::GetValue<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_>
          (FDataflowInput *this,FContext *param_1,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_2)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  FDataflowOutput *this_00;
  FProperty *pFVar3;
  undefined8 uVar4;
  FScriptContainerElement *_Src;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  bool bVar9;
  uint uVar10;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar11;
  FTimestamp FVar12;
  FGuid *pFVar13;
  ulong64 uVar14;
  undefined8 *puVar15;
  ulong64 uVar16;
  undefined8 *local_res20;
  FGuid local_50;
  
  this_00 = this->Connection;
  if (this_00 != (FDataflowOutput *)0x0) {
    bVar9 = FDataflowOutput::HasFrozenValue(this_00);
    if (bVar9) {
      pTVar11 = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
                FDataflowOutput::GetFrozenPropertyValue(this_00,(uchar *)param_2);
      return pTVar11;
    }
    bVar9 = FDataflowOutput::Evaluate(this_00,param_1);
    if (!bVar9) {
      FVar12 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this);
      uVar10 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this);
      pFVar13 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)this,&local_50);
      pFVar3 = (FProperty *)this->_padding_;
      uVar14 = CityHash64((char *)&this_00->_padding_,0x10);
      local_res20 = (undefined8 *)0x0;
      puVar15 = ::operator_new(0x48);
      if (puVar15 == (undefined8 *)0x0) {
        puVar15 = (undefined8 *)0x0;
      }
      else {
        uVar4 = *(undefined8 *)FVar12.Value;
        uVar6 = *(undefined8 *)pFVar13;
        uVar7 = *(undefined8 *)&pFVar13->C;
        puVar15[4] = pFVar3;
        *(uint *)(puVar15 + 5) = uVar10;
        pFVar1 = (ForAnyElementType *)(puVar15 + 7);
        *puVar15 = &
                   ___7__TContextCacheElement_AEBV__TArray_U__TTransform_N_Math_UE__V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
        ;
        *(undefined4 *)(puVar15 + 1) = 0;
        *(undefined8 *)((longlong)puVar15 + 0xc) = uVar6;
        *(undefined8 *)((longlong)puVar15 + 0x14) = uVar7;
        puVar15[6] = uVar4;
        pFVar1->Data = (FScriptContainerElement *)0x0;
        _Src = (param_2->AllocatorInstance).Data;
        iVar2 = param_2->ArrayNum;
        *(int *)(puVar15 + 8) = iVar2;
        if (iVar2 == 0) {
          *(int *)((longlong)puVar15 + 0x44) = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x60,0x10,iVar2,0,pFVar1,iVar2,(int *)((longlong)puVar15 + 0x44));
          memcpy(pFVar1->Data,_Src,(longlong)iVar2 * 0x60);
        }
      }
      puVar8 = local_res20;
      if (local_res20 != (undefined8 *)0x0) {
        puVar5 = (undefined8 *)*local_res20;
        local_res20 = puVar15;
        (*(code *)*puVar5)(puVar8,1);
        puVar15 = local_res20;
      }
      local_res20 = puVar15;
      if (local_res20 == (undefined8 *)0x0) {
        UE::Dataflow::FContext::SetNullData
                  (param_1,(uint)uVar14,pFVar3,pFVar13,uVar10,(FTimestamp *)FVar12.Value);
      }
      else {
        (**(code **)(param_1->_padding_ + 0x28))(param_1,uVar14 & 0xffffffff,&local_res20);
      }
      if (local_res20 != (undefined8 *)0x0) {
        (**(code **)*local_res20)(local_res20,1);
      }
    }
    uVar14 = UE::Dataflow::FTimestamp::Invalid;
    uVar16 = CityHash64((char *)&this_00->_padding_,0x10);
    bVar9 = UE::Dataflow::FContext::HasData(param_1,(uint)uVar16,(FTimestamp)uVar14);
    if (bVar9) {
      pFVar3 = (FProperty *)this->_padding_;
      uVar14 = CityHash64((char *)&this_00->_padding_,0x10);
      puVar15 = (undefined8 *)(**(code **)(param_1->_padding_ + 0x30))(param_1,uVar14 & 0xffffffff);
      if (puVar15 != (undefined8 *)0x0) {
        param_2 = UE::Dataflow::FContextCacheElementBase::
                  GetTypedData<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_>
                            ((FContextCacheElementBase *)*puVar15,(IContextCacheStore *)param_1,
                             pFVar3,param_2);
      }
    }
  }
  return param_2;
}

// GetValue<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_> @ 14e8fee40

TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> * __thiscall
FDataflowInput::GetValue<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>
          (FDataflowInput *this,FContext *param_1,
          TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *param_2)

{
  FDataflowOutput *this_00;
  FProperty *pFVar1;
  bool bVar2;
  uint uVar3;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *pTVar4;
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
      pTVar4 = (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
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
      SetData<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_const_&>
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
                  GetTypedData<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>
                            ((FContextCacheElementBase *)*puVar9,(IContextCacheStore *)param_1,
                             pFVar1,param_2);
      }
    }
  }
  return param_2;
}

// GetValue<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_> @ 14e8ff130

TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> * __thiscall
FDataflowInput::GetValue<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>
          (FDataflowInput *this,FContext *param_1,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_2)

{
  FDataflowOutput *this_00;
  FProperty *pFVar1;
  bool bVar2;
  uint uVar3;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar4;
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
      pTVar4 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
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
      SetData<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_const_&>
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
                  GetTypedData<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>
                            ((FContextCacheElementBase *)*puVar9,(IContextCacheStore *)param_1,
                             pFVar1,param_2);
      }
    }
  }
  return param_2;
}

// GetValue<TArray<FDataflowRootProxyMesh,TSizedDefaultAllocator<32>_>_> @ 14e8ff420

TArray<FDataflowRootProxyMesh,TSizedDefaultAllocator<32>_> * __thiscall
FDataflowInput::GetValue<TArray<FDataflowRootProxyMesh,TSizedDefaultAllocator<32>_>_>
          (FDataflowInput *this,FContext *param_1,
          TArray<FDataflowRootProxyMesh,TSizedDefaultAllocator<32>_> *param_2)

{
  FDataflowOutput *this_00;
  FProperty *pFVar1;
  bool bVar2;
  uint uVar3;
  TArray<FDataflowRootProxyMesh,TSizedDefaultAllocator<32>_> *pTVar4;
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
      pTVar4 = (TArray<FDataflowRootProxyMesh,TSizedDefaultAllocator<32>_> *)
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
      SetData<TArray<FDataflowRootProxyMesh,TSizedDefaultAllocator<32>_>_const_&>
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
                  GetTypedData<TArray<FDataflowRootProxyMesh,TSizedDefaultAllocator<32>_>_>
                            ((FContextCacheElementBase *)*puVar9,(IContextCacheStore *)param_1,
                             pFVar1,param_2);
      }
    }
  }
  return param_2;
}

// GetValue<TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_>_> @ 14e8ff580

TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_> * __thiscall
FDataflowInput::GetValue<TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_>_>
          (FDataflowInput *this,FContext *param_1,
          TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_> *param_2)

{
  FDataflowOutput *this_00;
  FProperty *pFVar1;
  bool bVar2;
  uint uVar3;
  TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_> *pTVar4;
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
      pTVar4 = (TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_> *)
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
      SetData<TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_>_const_&>
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
                  GetTypedData<TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_>_>
                            ((FContextCacheElementBase *)*puVar9,(IContextCacheStore *)param_1,
                             pFVar1,param_2);
      }
    }
  }
  return param_2;
}

// GetValue<TArray<FGeometryCollectionSource,TSizedDefaultAllocator<32>_>_> @ 14e8ff870

TArray<FGeometryCollectionSource,TSizedDefaultAllocator<32>_> * __thiscall
FDataflowInput::GetValue<TArray<FGeometryCollectionSource,TSizedDefaultAllocator<32>_>_>
          (FDataflowInput *this,FContext *param_1,
          TArray<FGeometryCollectionSource,TSizedDefaultAllocator<32>_> *param_2)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  FDataflowOutput *this_00;
  FProperty *pFVar3;
  undefined8 uVar4;
  FGeometryCollectionSource *pFVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  bool bVar10;
  uint uVar11;
  TArray<FGeometryCollectionSource,TSizedDefaultAllocator<32>_> *pTVar12;
  FTimestamp FVar13;
  FGuid *pFVar14;
  ulong64 uVar15;
  undefined8 *puVar16;
  ulong64 uVar17;
  undefined8 *local_res20;
  FGuid local_50;
  
  this_00 = this->Connection;
  if (this_00 != (FDataflowOutput *)0x0) {
    bVar10 = FDataflowOutput::HasFrozenValue(this_00);
    if (bVar10) {
      pTVar12 = (TArray<FGeometryCollectionSource,TSizedDefaultAllocator<32>_> *)
                FDataflowOutput::GetFrozenPropertyValue(this_00,(uchar *)param_2);
      return pTVar12;
    }
    bVar10 = FDataflowOutput::Evaluate(this_00,param_1);
    if (!bVar10) {
      FVar13 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this);
      uVar11 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this);
      pFVar14 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)this,&local_50);
      pFVar3 = (FProperty *)this->_padding_;
      uVar15 = CityHash64((char *)&this_00->_padding_,0x10);
      local_res20 = (undefined8 *)0x0;
      puVar16 = ::operator_new(0x48);
      if (puVar16 == (undefined8 *)0x0) {
        puVar16 = (undefined8 *)0x0;
      }
      else {
        uVar4 = *(undefined8 *)FVar13.Value;
        uVar7 = *(undefined8 *)pFVar14;
        uVar8 = *(undefined8 *)&pFVar14->C;
        puVar16[4] = pFVar3;
        *(uint *)(puVar16 + 5) = uVar11;
        pFVar1 = (ForAnyElementType *)(puVar16 + 7);
        *puVar16 = &
                   ___7__TContextCacheElement_AEBV__TArray_UFGeometryCollectionSource__V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
        ;
        *(undefined4 *)(puVar16 + 1) = 0;
        *(undefined8 *)((longlong)puVar16 + 0xc) = uVar7;
        *(undefined8 *)((longlong)puVar16 + 0x14) = uVar8;
        puVar16[6] = uVar4;
        pFVar1->Data = (FScriptContainerElement *)0x0;
        pFVar5 = (FGeometryCollectionSource *)(param_2->AllocatorInstance).Data;
        iVar2 = param_2->ArrayNum;
        *(int *)(puVar16 + 8) = iVar2;
        if (iVar2 == 0) {
          *(int *)((longlong)puVar16 + 0x44) = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xb0,0x10,iVar2,0,pFVar1,iVar2,(int *)((longlong)puVar16 + 0x44));
          ConstructItems<FGeometryCollectionSource,FGeometryCollectionSource,int>
                    (pFVar1->Data,pFVar5,iVar2);
        }
      }
      puVar9 = local_res20;
      if (local_res20 != (undefined8 *)0x0) {
        puVar6 = (undefined8 *)*local_res20;
        local_res20 = puVar16;
        (*(code *)*puVar6)(puVar9,1);
        puVar16 = local_res20;
      }
      local_res20 = puVar16;
      if (local_res20 == (undefined8 *)0x0) {
        UE::Dataflow::FContext::SetNullData
                  (param_1,(uint)uVar15,pFVar3,pFVar14,uVar11,(FTimestamp *)FVar13.Value);
      }
      else {
        (**(code **)(param_1->_padding_ + 0x28))(param_1,uVar15 & 0xffffffff,&local_res20);
      }
      if (local_res20 != (undefined8 *)0x0) {
        (**(code **)*local_res20)(local_res20,1);
      }
    }
    uVar15 = UE::Dataflow::FTimestamp::Invalid;
    uVar17 = CityHash64((char *)&this_00->_padding_,0x10);
    bVar10 = UE::Dataflow::FContext::HasData(param_1,(uint)uVar17,(FTimestamp)uVar15);
    if (bVar10) {
      pFVar3 = (FProperty *)this->_padding_;
      uVar15 = CityHash64((char *)&this_00->_padding_,0x10);
      puVar16 = (undefined8 *)(**(code **)(param_1->_padding_ + 0x30))(param_1,uVar15 & 0xffffffff);
      if (puVar16 != (undefined8 *)0x0) {
        param_2 = UE::Dataflow::FContextCacheElementBase::
                  GetTypedData<TArray<FGeometryCollectionSource,TSizedDefaultAllocator<32>_>_>
                            ((FContextCacheElementBase *)*puVar16,(IContextCacheStore *)param_1,
                             pFVar3,param_2);
      }
    }
  }
  return param_2;
}

// GetValue<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_> @ 14e8ffb10

TArray<FLinearColor,TSizedDefaultAllocator<32>_> * __thiscall
FDataflowInput::GetValue<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_>
          (FDataflowInput *this,FContext *param_1,
          TArray<FLinearColor,TSizedDefaultAllocator<32>_> *param_2)

{
  FDataflowOutput *this_00;
  FProperty *pFVar1;
  bool bVar2;
  uint uVar3;
  TArray<FLinearColor,TSizedDefaultAllocator<32>_> *pTVar4;
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
      pTVar4 = (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)
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
      UE::Dataflow::FContext::SetData<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_const_&>
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
                  GetTypedData<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_>
                            ((FContextCacheElementBase *)*puVar9,(IContextCacheStore *)param_1,
                             pFVar1,param_2);
      }
    }
  }
  return param_2;
}

// GetValue<TArray<FManagedArrayCollection,TSizedDefaultAllocator<32>_>_> @ 14e8ffc70

TArray<FManagedArrayCollection,TSizedDefaultAllocator<32>_> * __thiscall
FDataflowInput::GetValue<TArray<FManagedArrayCollection,TSizedDefaultAllocator<32>_>_>
          (FDataflowInput *this,FContext *param_1,
          TArray<FManagedArrayCollection,TSizedDefaultAllocator<32>_> *param_2)

{
  FDataflowOutput *this_00;
  FProperty *pFVar1;
  bool bVar2;
  uint uVar3;
  TArray<FManagedArrayCollection,TSizedDefaultAllocator<32>_> *pTVar4;
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
      pTVar4 = (TArray<FManagedArrayCollection,TSizedDefaultAllocator<32>_> *)
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
      SetData<TArray<FManagedArrayCollection,TSizedDefaultAllocator<32>_>_const_&>
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
                  GetTypedData<TArray<FManagedArrayCollection,TSizedDefaultAllocator<32>_>_>
                            ((FContextCacheElementBase *)*puVar9,(IContextCacheStore *)param_1,
                             pFVar1,param_2);
      }
    }
  }
  return param_2;
}

// GetValue<TArray<FString,TSizedDefaultAllocator<32>_>_> @ 14e8ffdd0

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
FDataflowInput::GetValue<TArray<FString,TSizedDefaultAllocator<32>_>_>
          (FDataflowInput *this,FContext *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  FDataflowOutput *this_00;
  FProperty *pFVar1;
  bool bVar2;
  uint uVar3;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar4;
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
      pTVar4 = (TArray<FString,TSizedDefaultAllocator<32>_> *)
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
      UE::Dataflow::FContext::SetData<TArray<FString,TSizedDefaultAllocator<32>_>_const_&>
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
                  GetTypedData<TArray<FString,TSizedDefaultAllocator<32>_>_>
                            ((FContextCacheElementBase *)*puVar9,(IContextCacheStore *)param_1,
                             pFVar1,param_2);
      }
    }
  }
  return param_2;
}

// GetValue<TArray<bool,TSizedDefaultAllocator<32>_>_> @ 14e8fff30

TArray<bool,TSizedDefaultAllocator<32>_> * __thiscall
FDataflowInput::GetValue<TArray<bool,TSizedDefaultAllocator<32>_>_>
          (FDataflowInput *this,FContext *param_1,TArray<bool,TSizedDefaultAllocator<32>_> *param_2)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  FDataflowOutput *this_00;
  FProperty *pFVar3;
  undefined8 uVar4;
  FScriptContainerElement *_Src;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  bool bVar9;
  uint uVar10;
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar11;
  FTimestamp FVar12;
  FGuid *pFVar13;
  ulong64 uVar14;
  undefined8 *puVar15;
  ulong64 uVar16;
  undefined8 *local_res20;
  FGuid local_50;
  
  this_00 = this->Connection;
  if (this_00 != (FDataflowOutput *)0x0) {
    bVar9 = FDataflowOutput::HasFrozenValue(this_00);
    if (bVar9) {
      pTVar11 = (TArray<bool,TSizedDefaultAllocator<32>_> *)
                FDataflowOutput::GetFrozenPropertyValue(this_00,(uchar *)param_2);
      return pTVar11;
    }
    bVar9 = FDataflowOutput::Evaluate(this_00,param_1);
    if (!bVar9) {
      FVar12 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this);
      uVar10 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this);
      pFVar13 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)this,&local_50);
      pFVar3 = (FProperty *)this->_padding_;
      uVar14 = CityHash64((char *)&this_00->_padding_,0x10);
      local_res20 = (undefined8 *)0x0;
      puVar15 = ::operator_new(0x48);
      if (puVar15 == (undefined8 *)0x0) {
        puVar15 = (undefined8 *)0x0;
      }
      else {
        uVar4 = *(undefined8 *)FVar12.Value;
        uVar6 = *(undefined8 *)pFVar13;
        uVar7 = *(undefined8 *)&pFVar13->C;
        puVar15[4] = pFVar3;
        *(uint *)(puVar15 + 5) = uVar10;
        pFVar1 = (ForAnyElementType *)(puVar15 + 7);
        *puVar15 = &
                   ___7__TContextCacheElement_AEBV__TArray__NV__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
        ;
        *(undefined4 *)(puVar15 + 1) = 0;
        *(undefined8 *)((longlong)puVar15 + 0xc) = uVar6;
        *(undefined8 *)((longlong)puVar15 + 0x14) = uVar7;
        puVar15[6] = uVar4;
        pFVar1->Data = (FScriptContainerElement *)0x0;
        _Src = (param_2->AllocatorInstance).Data;
        iVar2 = param_2->ArrayNum;
        *(int *)(puVar15 + 8) = iVar2;
        if (iVar2 == 0) {
          *(int *)((longlong)puVar15 + 0x44) = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,iVar2,0,pFVar1,iVar2,(int *)((longlong)puVar15 + 0x44));
          memcpy(pFVar1->Data,_Src,(longlong)iVar2);
        }
      }
      puVar8 = local_res20;
      if (local_res20 != (undefined8 *)0x0) {
        puVar5 = (undefined8 *)*local_res20;
        local_res20 = puVar15;
        (*(code *)*puVar5)(puVar8,1);
        puVar15 = local_res20;
      }
      local_res20 = puVar15;
      if (local_res20 == (undefined8 *)0x0) {
        UE::Dataflow::FContext::SetNullData
                  (param_1,(uint)uVar14,pFVar3,pFVar13,uVar10,(FTimestamp *)FVar12.Value);
      }
      else {
        (**(code **)(param_1->_padding_ + 0x28))(param_1,uVar14 & 0xffffffff,&local_res20);
      }
      if (local_res20 != (undefined8 *)0x0) {
        (**(code **)*local_res20)(local_res20,1);
      }
    }
    uVar14 = UE::Dataflow::FTimestamp::Invalid;
    uVar16 = CityHash64((char *)&this_00->_padding_,0x10);
    bVar9 = UE::Dataflow::FContext::HasData(param_1,(uint)uVar16,(FTimestamp)uVar14);
    if (bVar9) {
      pFVar3 = (FProperty *)this->_padding_;
      uVar14 = CityHash64((char *)&this_00->_padding_,0x10);
      puVar15 = (undefined8 *)(**(code **)(param_1->_padding_ + 0x30))(param_1,uVar14 & 0xffffffff);
      if (puVar15 != (undefined8 *)0x0) {
        param_2 = UE::Dataflow::FContextCacheElementBase::
                  GetTypedData<TArray<bool,TSizedDefaultAllocator<32>_>_>
                            ((FContextCacheElementBase *)*puVar15,(IContextCacheStore *)param_1,
                             pFVar3,param_2);
      }
    }
  }
  return param_2;
}

// GetValue<enum_ERotationOrderEnum> @ 14e9001c0

ERotationOrderEnum * __thiscall
FDataflowInput::GetValue<enum_ERotationOrderEnum>
          (FDataflowInput *this,FContext *param_1,ERotationOrderEnum *param_2)

{
  FDataflowOutput *this_00;
  FProperty *pFVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  uint uVar8;
  ERotationOrderEnum *pEVar9;
  FTimestamp FVar10;
  FGuid *pFVar11;
  ulong64 uVar12;
  undefined8 *puVar13;
  ulong64 uVar14;
  undefined8 *puVar15;
  undefined8 *local_res8;
  FGuid local_50;
  
  this_00 = this->Connection;
  if (this_00 != (FDataflowOutput *)0x0) {
    bVar7 = FDataflowOutput::HasFrozenValue(this_00);
    if (bVar7) {
      pEVar9 = FDataflowOutput::GetFrozenPropertyValue(this_00,param_2);
      return pEVar9;
    }
    bVar7 = FDataflowOutput::Evaluate(this_00,param_1);
    if (!bVar7) {
      FVar10 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this);
      uVar8 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this);
      pFVar11 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)this,&local_50);
      pFVar1 = (FProperty *)this->_padding_;
      uVar12 = CityHash64((char *)&this_00->_padding_,0x10);
      local_res8 = (undefined8 *)0x0;
      puVar13 = ::operator_new(0x40);
      puVar15 = local_res8;
      if (puVar13 != (undefined8 *)0x0) {
        uVar3 = pFVar11->A;
        uVar4 = pFVar11->B;
        uVar5 = pFVar11->C;
        uVar6 = pFVar11->D;
        puVar13[6] = *(undefined8 *)FVar10.Value;
        *puVar13 = &___7__TContextCacheElement_AEBW4ERotationOrderEnum___Dataflow_UE__6B_;
        *(undefined4 *)(puVar13 + 1) = 0;
        *(uint *)((longlong)puVar13 + 0xc) = uVar3;
        *(uint *)(puVar13 + 2) = uVar4;
        *(uint *)((longlong)puVar13 + 0x14) = uVar5;
        *(uint *)(puVar13 + 3) = uVar6;
        puVar13[4] = pFVar1;
        *(uint *)(puVar13 + 5) = uVar8;
        *(ERotationOrderEnum *)(puVar13 + 7) = *param_2;
      }
      if (local_res8 != (undefined8 *)0x0) {
        puVar2 = (undefined8 *)*local_res8;
        local_res8 = puVar13;
        (*(code *)*puVar2)(puVar15,1);
        puVar13 = local_res8;
      }
      local_res8 = puVar13;
      if (local_res8 == (undefined8 *)0x0) {
        UE::Dataflow::FContext::SetNullData
                  (param_1,(uint)uVar12,pFVar1,pFVar11,uVar8,(FTimestamp *)FVar10.Value);
      }
      else {
        (**(code **)(param_1->_padding_ + 0x28))(param_1,uVar12 & 0xffffffff,&local_res8);
      }
      if (local_res8 != (undefined8 *)0x0) {
        (**(code **)*local_res8)(local_res8,1);
      }
    }
    uVar12 = UE::Dataflow::FTimestamp::Invalid;
    uVar14 = CityHash64((char *)&this_00->_padding_,0x10);
    bVar7 = UE::Dataflow::FContext::HasData(param_1,(uint)uVar14,(FTimestamp)uVar12);
    if (bVar7) {
      pFVar1 = (FProperty *)this->_padding_;
      uVar12 = CityHash64((char *)&this_00->_padding_,0x10);
      puVar15 = (undefined8 *)(**(code **)(param_1->_padding_ + 0x30))(param_1,uVar12 & 0xffffffff);
      if (puVar15 != (undefined8 *)0x0) {
        param_2 = UE::Dataflow::FContextCacheElementBase::GetTypedData<enum_ERotationOrderEnum>
                            ((FContextCacheElementBase *)*puVar15,(IContextCacheStore *)param_1,
                             pFVar1,param_2);
      }
    }
  }
  return param_2;
}

// GetValueFromAnyType<FDataflowAllTypes> @ 14e900410

FContextValue * __thiscall
FDataflowInput::GetValueFromAnyType<FDataflowAllTypes>
          (FDataflowInput *this,FContextValue *__return_storage_ptr__,FContext *param_1)

{
  FDataflowOutput *this_00;
  code *pcVar1;
  bool bVar2;
  FContextValue *pFVar3;
  ulong64 uVar4;
  uint uVar5;
  
  this_00 = this->Connection;
  uVar5 = 0;
  if (this_00 != (FDataflowOutput *)0x0) {
    bVar2 = FDataflowOutput::HasFrozenValue(this_00);
    if (bVar2) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4141872740057481682>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowInputOutput.h"
                         ,0x1d2,"false");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FContextValue *)(*pcVar1)();
        return pFVar3;
      }
    }
    else {
      bVar2 = FDataflowOutput::Evaluate(this_00,param_1);
      if (bVar2) {
        uVar4 = CityHash64((char *)&this_00->_padding_,0x10);
        uVar5 = (uint)uVar4;
      }
    }
  }
  UE::Dataflow::FContextValue::FContextValue
            (__return_storage_ptr__,(IContextCacheStore *)param_1,uVar5);
  return __return_storage_ptr__;
}

// GetValueFromAnyType<FDataflowArrayTypes> @ 14e9004c0

FContextValue * __thiscall
FDataflowInput::GetValueFromAnyType<FDataflowArrayTypes>
          (FDataflowInput *this,FContextValue *__return_storage_ptr__,FContext *param_1)

{
  FDataflowOutput *this_00;
  code *pcVar1;
  bool bVar2;
  FContextValue *pFVar3;
  ulong64 uVar4;
  uint uVar5;
  
  this_00 = this->Connection;
  uVar5 = 0;
  if (this_00 != (FDataflowOutput *)0x0) {
    bVar2 = FDataflowOutput::HasFrozenValue(this_00);
    if (bVar2) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4141872740057481682>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowInputOutput.h"
                         ,0x1d2,"false");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FContextValue *)(*pcVar1)();
        return pFVar3;
      }
    }
    else {
      bVar2 = FDataflowOutput::Evaluate(this_00,param_1);
      if (bVar2) {
        uVar4 = CityHash64((char *)&this_00->_padding_,0x10);
        uVar5 = (uint)uVar4;
      }
    }
  }
  UE::Dataflow::FContextValue::FContextValue
            (__return_storage_ptr__,(IContextCacheStore *)param_1,uVar5);
  return __return_storage_ptr__;
}

