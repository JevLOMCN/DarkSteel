// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowNodes
// Functions: 7

// GetValue<TObjectPtr<USkeletalMesh_const_>_> @ 14dac9170

TObjectPtr<USkeletalMesh_const_> * __thiscall
FDataflowInput::GetValue<TObjectPtr<USkeletalMesh_const_>_>
          (FDataflowInput *this,FContext *param_1,TObjectPtr<USkeletalMesh_const_> *param_2)

{
  FDataflowOutput *this_00;
  FProperty *pFVar1;
  bool bVar2;
  uint uVar3;
  TObjectPtr<USkeletalMesh_const_> *pTVar4;
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
      pTVar4 = (TObjectPtr<USkeletalMesh_const_> *)
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
      UE::Dataflow::FContext::SetData<TObjectPtr<USkeletalMesh_const_>_const_&>
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
                  GetTypedData<TObjectPtr<USkeletalMesh_const_>_>
                            ((FContextCacheElementBase *)*puVar9,(IContextCacheStore *)param_1,
                             pFVar1,param_2);
      }
    }
  }
  return param_2;
}

// GetValue<TObjectPtr<USkeleton_const_>_> @ 14dac9460

TObjectPtr<USkeleton_const_> * __thiscall
FDataflowInput::GetValue<TObjectPtr<USkeleton_const_>_>
          (FDataflowInput *this,FContext *param_1,TObjectPtr<USkeleton_const_> *param_2)

{
  FDataflowOutput *this_00;
  FProperty *pFVar1;
  bool bVar2;
  uint uVar3;
  TObjectPtr<USkeleton_const_> *pTVar4;
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
      pTVar4 = (TObjectPtr<USkeleton_const_> *)
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
      UE::Dataflow::FContext::SetData<TObjectPtr<USkeleton_const_>_const_&>
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
                  GetTypedData<TObjectPtr<USkeleton_const_>_>
                            ((FContextCacheElementBase *)*puVar9,(IContextCacheStore *)param_1,
                             pFVar1,param_2);
      }
    }
  }
  return param_2;
}

// GetValue<TObjectPtr<UStaticMesh_const_>_> @ 14dac95c0

TObjectPtr<UStaticMesh_const_> * __thiscall
FDataflowInput::GetValue<TObjectPtr<UStaticMesh_const_>_>
          (FDataflowInput *this,FContext *param_1,TObjectPtr<UStaticMesh_const_> *param_2)

{
  FDataflowOutput *this_00;
  FProperty *pFVar1;
  bool bVar2;
  uint uVar3;
  TObjectPtr<UStaticMesh_const_> *pTVar4;
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
      pTVar4 = (TObjectPtr<UStaticMesh_const_> *)
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
      UE::Dataflow::FContext::SetData<TObjectPtr<UStaticMesh_const_>_const_&>
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
                  GetTypedData<TObjectPtr<UStaticMesh_const_>_>
                            ((FContextCacheElementBase *)*puVar9,(IContextCacheStore *)param_1,
                             pFVar1,param_2);
      }
    }
  }
  return param_2;
}

// GetValue<TObjectPtr<USkeletalMesh>_> @ 14dac9720

TObjectPtr<USkeletalMesh> * __thiscall
FDataflowInput::GetValue<TObjectPtr<USkeletalMesh>_>
          (FDataflowInput *this,FContext *param_1,TObjectPtr<USkeletalMesh> *param_2)

{
  FDataflowOutput *this_00;
  FProperty *pFVar1;
  USkeletalMesh *pUVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  bool bVar7;
  uint uVar8;
  TObjectPtr<USkeletalMesh> *pTVar9;
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
      pTVar9 = (TObjectPtr<USkeletalMesh> *)
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
                    TContextCacheElementUObject<TObjectPtr<USkeletalMesh>_const&___ptr64>::
                    _vftable__for__UE__Dataflow__FContextCacheElementBase__;
        puVar13[7] = &UE::Dataflow::
                      TContextCacheElementUObject<TObjectPtr<USkeletalMesh>_const&___ptr64>::
                      _vftable__for__FGCObject__;
        pUVar2 = (param_2->field0_0x0).DebugPtr;
        puVar13[9] = pUVar2;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (USkeletalMesh *)0x0)
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
        param_2 = UE::Dataflow::FContextCacheElementBase::GetTypedData<TObjectPtr<USkeletalMesh>_>
                            ((FContextCacheElementBase *)*puVar13,(IContextCacheStore *)param_1,
                             pFVar1,param_2);
      }
    }
  }
  return param_2;
}

// GetValue<TObjectPtr<USkeleton>_> @ 14dac99c0

TObjectPtr<USkeleton> * __thiscall
FDataflowInput::GetValue<TObjectPtr<USkeleton>_>
          (FDataflowInput *this,FContext *param_1,TObjectPtr<USkeleton> *param_2)

{
  FDataflowOutput *this_00;
  FProperty *pFVar1;
  bool bVar2;
  uint uVar3;
  TObjectPtr<USkeleton> *pTVar4;
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
      pTVar4 = (TObjectPtr<USkeleton> *)
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
      UE::Dataflow::FContext::SetData<TObjectPtr<USkeleton>_const_&>
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
        param_2 = UE::Dataflow::FContextCacheElementBase::GetTypedData<TObjectPtr<USkeleton>_>
                            ((FContextCacheElementBase *)*puVar9,(IContextCacheStore *)param_1,
                             pFVar1,param_2);
      }
    }
  }
  return param_2;
}

// GetValue<FCollectionAttributeKey> @ 14dac9b20

FCollectionAttributeKey * __thiscall
FDataflowInput::GetValue<FCollectionAttributeKey>
          (FDataflowInput *this,FContext *param_1,FCollectionAttributeKey *param_2)

{
  FDataflowOutput *this_00;
  FProperty *pFVar1;
  longlong *plVar2;
  bool bVar3;
  uint uVar4;
  FCollectionAttributeKey *pFVar5;
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
      pFVar5 = (FCollectionAttributeKey *)
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
                  FContextCacheElementUStruct<FCollectionAttributeKey_const_&>
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
        param_2 = UE::Dataflow::FContextCacheElementBase::GetTypedData<FCollectionAttributeKey>
                            ((FContextCacheElementBase *)*puVar12,(IContextCacheStore *)param_1,
                             pFVar1,param_2);
      }
    }
  }
  return param_2;
}

// GetValue<FDataflowGeometrySelection> @ 14dac9d20

FDataflowGeometrySelection * __thiscall
FDataflowInput::GetValue<FDataflowGeometrySelection>
          (FDataflowInput *this,FContext *param_1,FDataflowGeometrySelection *param_2)

{
  FDataflowOutput *this_00;
  FProperty *pFVar1;
  longlong *plVar2;
  bool bVar3;
  uint uVar4;
  FDataflowGeometrySelection *pFVar5;
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
      pFVar5 = (FDataflowGeometrySelection *)
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
                  FContextCacheElementUStruct<FDataflowGeometrySelection_const_&>
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
        param_2 = UE::Dataflow::FContextCacheElementBase::GetTypedData<FDataflowGeometrySelection>
                            ((FContextCacheElementBase *)*puVar12,(IContextCacheStore *)param_1,
                             pFVar1,param_2);
      }
    }
  }
  return param_2;
}

