// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowNodes
// Functions: 24

// GetValue<TObjectPtr<USkeletalMesh_const_>_> @ 14dac92d0

TObjectPtr<USkeletalMesh_const_> * __thiscall
FDataflowNode::GetValue<TObjectPtr<USkeletalMesh_const_>_>
          (FDataflowNode *this,FContext *param_1,TObjectPtr<USkeletalMesh_const_> *param_2)

{
  FDataflowOutput *this_00;
  FProperty *pFVar1;
  bool bVar2;
  uint uVar3;
  FDataflowInput *this_01;
  TObjectPtr<USkeletalMesh_const_> *pTVar4;
  FTimestamp FVar5;
  FGuid *pFVar6;
  ulong64 uVar7;
  ulong64 uVar8;
  undefined8 *puVar9;
  FGuid local_58;
  FConnectionReference local_48;
  
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = param_2;
  this_01 = FindInput(this,&local_48);
  pTVar4 = local_48.Reference;
  this_00 = this_01->Connection;
  if (this_00 != (FDataflowOutput *)0x0) {
    bVar2 = FDataflowOutput::HasFrozenValue(this_00);
    if (bVar2) {
      pTVar4 = (TObjectPtr<USkeletalMesh_const_> *)
               FDataflowOutput::GetFrozenPropertyValue(this_00,(uchar *)pTVar4);
      return pTVar4;
    }
    bVar2 = FDataflowOutput::Evaluate(this_00,param_1);
    if (!bVar2) {
      FVar5 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this_01);
      uVar3 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this_01);
      pFVar6 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)this_01,&local_58);
      pFVar1 = (FProperty *)this_01->_padding_;
      uVar7 = CityHash64((char *)&this_00->_padding_,0x10);
      UE::Dataflow::FContext::SetData<TObjectPtr<USkeletalMesh_const_>_const_&>
                (param_1,(uint)uVar7,pFVar1,pTVar4,pFVar6,uVar3,(FTimestamp *)FVar5.Value);
    }
    uVar7 = UE::Dataflow::FTimestamp::Invalid;
    uVar8 = CityHash64((char *)&this_00->_padding_,0x10);
    bVar2 = UE::Dataflow::FContext::HasData(param_1,(uint)uVar8,(FTimestamp)uVar7);
    if (bVar2) {
      pFVar1 = (FProperty *)this_01->_padding_;
      uVar7 = CityHash64((char *)&this_00->_padding_,0x10);
      puVar9 = (undefined8 *)(**(code **)(param_1->_padding_ + 0x30))(param_1,uVar7 & 0xffffffff);
      if (puVar9 != (undefined8 *)0x0) {
        pTVar4 = UE::Dataflow::FContextCacheElementBase::
                 GetTypedData<TObjectPtr<USkeletalMesh_const_>_>
                           ((FContextCacheElementBase *)*puVar9,(IContextCacheStore *)param_1,pFVar1
                            ,pTVar4);
      }
    }
  }
  return pTVar4;
}

// GetValue<TObjectPtr<USkeletalMesh>_> @ 14dac9970

TObjectPtr<USkeletalMesh> * __thiscall
FDataflowNode::GetValue<TObjectPtr<USkeletalMesh>_>
          (FDataflowNode *this,FContext *param_1,TObjectPtr<USkeletalMesh> *param_2,
          TObjectPtr<USkeletalMesh> *param_3)

{
  FDataflowInput *this_00;
  TObjectPtr<USkeletalMesh> *pTVar1;
  FConnectionReference local_28;
  
  local_28.Index = -1;
  local_28.ContainerReference = (void *)0x0;
  local_28.Reference = param_2;
  this_00 = FindInput(this,&local_28);
  pTVar1 = FDataflowInput::GetValue<TObjectPtr<USkeletalMesh>_>(this_00,param_1,param_3);
  return pTVar1;
}

// SetValue<FString_&,FString> @ 14dacb180

void __thiscall
FDataflowNode::SetValue<FString_&,FString>
          (FDataflowNode *this,FContext *param_1,FString *param_2,FString *param_3)

{
  FProperty *pFVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  uint uVar6;
  FDataflowOutput *this_00;
  FTimestamp FVar7;
  FGuid *pFVar8;
  ulong64 uVar9;
  undefined8 *puVar10;
  undefined8 *local_res20;
  FGuid local_50;
  FConnectionReference local_40;
  
  local_40.Index = -1;
  local_40.ContainerReference = (void *)0x0;
  local_40.Reference = param_3;
  this_00 = FindOutput(this,&local_40);
  if (this_00 == (FDataflowOutput *)0x0) {
    `FDataflowNode::SetValue<FString_&,FString>'::__l7::<lambda_1>::operator()(&local_res20);
  }
  else if (this_00->_padding_ != 0) {
    FVar7 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this_00);
    uVar6 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this_00);
    pFVar8 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)this_00,&local_50);
    pFVar1 = (FProperty *)this_00->_padding_;
    uVar9 = CityHash64((char *)&this_00->_padding_,0x10);
    local_res20 = (undefined8 *)0x0;
    puVar10 = ::operator_new(0x48);
    if (puVar10 == (undefined8 *)0x0) {
      puVar10 = (undefined8 *)0x0;
    }
    else {
      uVar3 = *(undefined8 *)pFVar8;
      uVar4 = *(undefined8 *)&pFVar8->C;
      puVar10[6] = *(undefined8 *)FVar7.Value;
      *(undefined4 *)(puVar10 + 1) = 0;
      *(undefined8 *)((longlong)puVar10 + 0xc) = uVar3;
      *(undefined8 *)((longlong)puVar10 + 0x14) = uVar4;
      puVar10[4] = pFVar1;
      *(uint *)(puVar10 + 5) = uVar6;
      *puVar10 = &___7__TContextCacheElement_AEAVFString___Dataflow_UE__6B_;
      ::FString::FString((FString *)(puVar10 + 7),param_2);
    }
    puVar5 = local_res20;
    if (local_res20 != (undefined8 *)0x0) {
      puVar2 = (undefined8 *)*local_res20;
      local_res20 = puVar10;
      (*(code *)*puVar2)(puVar5,1);
      puVar10 = local_res20;
    }
    local_res20 = puVar10;
    if (local_res20 == (undefined8 *)0x0) {
      UE::Dataflow::FContext::SetNullData
                (param_1,(uint)uVar9,pFVar1,pFVar8,uVar6,(FTimestamp *)FVar7.Value);
    }
    else {
      (**(code **)(param_1->_padding_ + 0x28))(param_1,uVar9 & 0xffffffff,&local_res20);
    }
    if (local_res20 != (undefined8 *)0x0) {
      (**(code **)*local_res20)(local_res20,1);
      return;
    }
  }
  return;
}

// SetValue<TObjectPtr<UStaticMesh_const_>_const_&,TObjectPtr<UStaticMesh_const_>_> @ 14dacb330

void __thiscall
FDataflowNode::SetValue<TObjectPtr<UStaticMesh_const_>_const_&,TObjectPtr<UStaticMesh_const_>_>
          (FDataflowNode *this,FContext *param_1,TObjectPtr<UStaticMesh_const_> *param_2,
          TObjectPtr<UStaticMesh_const_> *param_3)

{
  FProperty *pFVar1;
  uint uVar2;
  FDataflowOutput *this_00;
  FTimestamp FVar3;
  FGuid *pFVar4;
  ulong64 uVar5;
  undefined1 local_res20 [8];
  FGuid local_58;
  FConnectionReference local_48;
  
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = param_3;
  this_00 = FindOutput(this,&local_48);
  if (this_00 == (FDataflowOutput *)0x0) {
    `FDataflowNode::
    SetValue<TObjectPtr<UStaticMesh_const_>_const_&,TObjectPtr<UStaticMesh_const_>_>'::__l7::
    <lambda_1>::operator()(local_res20);
  }
  else if (this_00->_padding_ != 0) {
    FVar3 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this_00);
    uVar2 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this_00);
    pFVar4 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)this_00,&local_58);
    pFVar1 = (FProperty *)this_00->_padding_;
    uVar5 = CityHash64((char *)&this_00->_padding_,0x10);
    UE::Dataflow::FContext::SetData<TObjectPtr<UStaticMesh_const_>_const_&>
              (param_1,(uint)uVar5,pFVar1,param_2,pFVar4,uVar2,(FTimestamp *)FVar3.Value);
    return;
  }
  return;
}

// SetValue<TObjectPtr<USkeleton>_const_&,TObjectPtr<USkeleton>_> @ 14dacb440

void __thiscall
FDataflowNode::SetValue<TObjectPtr<USkeleton>_const_&,TObjectPtr<USkeleton>_>
          (FDataflowNode *this,FContext *param_1,TObjectPtr<USkeleton> *param_2,
          TObjectPtr<USkeleton> *param_3)

{
  FProperty *pFVar1;
  uint uVar2;
  FDataflowOutput *this_00;
  FTimestamp FVar3;
  FGuid *pFVar4;
  ulong64 uVar5;
  undefined1 local_res20 [8];
  FGuid local_58;
  FConnectionReference local_48;
  
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = param_3;
  this_00 = FindOutput(this,&local_48);
  if (this_00 == (FDataflowOutput *)0x0) {
    `FDataflowNode::SetValue<TObjectPtr<USkeleton>_const_&,TObjectPtr<USkeleton>_>'::__l7::
    <lambda_1>::operator()(local_res20);
  }
  else if (this_00->_padding_ != 0) {
    FVar3 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this_00);
    uVar2 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this_00);
    pFVar4 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)this_00,&local_58);
    pFVar1 = (FProperty *)this_00->_padding_;
    uVar5 = CityHash64((char *)&this_00->_padding_,0x10);
    UE::Dataflow::FContext::SetData<TObjectPtr<USkeleton>_const_&>
              (param_1,(uint)uVar5,pFVar1,param_2,pFVar4,uVar2,(FTimestamp *)FVar3.Value);
    return;
  }
  return;
}

// SetValue<UE::Math::TVector<double>,UE::Math::TVector<double>_> @ 14dacb550

void __thiscall
FDataflowNode::SetValue<UE::Math::TVector<double>,UE::Math::TVector<double>_>
          (FDataflowNode *this,FContext *param_1,TVector<double> *param_2,TVector<double> *param_3)

{
  FProperty *pFVar1;
  longlong *plVar2;
  uint uVar3;
  FDataflowOutput *this_00;
  FTimestamp FVar4;
  FGuid *pFVar5;
  ulong64 uVar6;
  FContextCacheElementUStruct *pFVar7;
  FContextCacheElementUStruct *pFVar8;
  FContextCacheElementUStruct *local_res20;
  FConnectionReference local_58;
  FGuid local_38;
  
  pFVar8 = (FContextCacheElementUStruct *)0x0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = param_3;
  this_00 = FindOutput(this,&local_58);
  if (this_00 == (FDataflowOutput *)0x0) {
    `FDataflowNode::SetValue<UE::Math::TVector<double>,UE::Math::TVector<double>_>'::__l7::
    <lambda_1>::operator()(&local_res20);
  }
  else if (this_00->_padding_ != 0) {
    FVar4 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this_00);
    uVar3 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this_00);
    pFVar5 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)this_00,&local_38);
    pFVar1 = (FProperty *)this_00->_padding_;
    uVar6 = CityHash64((char *)&this_00->_padding_,0x10);
    local_res20 = (FContextCacheElementUStruct *)0x0;
    pFVar7 = ::operator_new(0x58);
    if (pFVar7 != (FContextCacheElementUStruct *)0x0) {
                    /* WARNING: Load size is inaccurate */
      local_58.Reference = *(void **)pFVar5;
      local_58.Index = pFVar5->C;
      local_58._12_4_ = pFVar5->D;
      pFVar8 = UE::Dataflow::FContextCacheElementUStruct::
               FContextCacheElementUStruct<UE::Math::TVector<double>_>
                         (pFVar7,(FGuid *)&local_58,pFVar1,param_2,uVar3,(FTimestamp)*FVar4.Value);
    }
    pFVar7 = local_res20;
    if (local_res20 != (FContextCacheElementUStruct *)0x0) {
      plVar2 = &local_res20->_padding_;
      local_res20 = pFVar8;
      (**(code **)*plVar2)(pFVar7,1);
      pFVar8 = local_res20;
    }
    local_res20 = pFVar8;
    if (local_res20 == (FContextCacheElementUStruct *)0x0) {
      UE::Dataflow::FContext::SetNullData
                (param_1,(uint)uVar6,pFVar1,pFVar5,uVar3,(FTimestamp *)FVar4.Value);
    }
    else {
      (**(code **)(param_1->_padding_ + 0x28))(param_1,uVar6 & 0xffffffff,&local_res20);
    }
    if (local_res20 != (FContextCacheElementUStruct *)0x0) {
      (**(code **)local_res20->_padding_)(local_res20,1);
      return;
    }
  }
  return;
}

// SetValue<FCollectionAttributeKey,FCollectionAttributeKey> @ 14dacb6f0

void __thiscall
FDataflowNode::SetValue<FCollectionAttributeKey,FCollectionAttributeKey>
          (FDataflowNode *this,FContext *param_1,FCollectionAttributeKey *param_2,
          FCollectionAttributeKey *param_3)

{
  FProperty *pFVar1;
  longlong *plVar2;
  uint uVar3;
  FDataflowOutput *this_00;
  FTimestamp FVar4;
  FGuid *pFVar5;
  ulong64 uVar6;
  FContextCacheElementUStruct *pFVar7;
  FContextCacheElementUStruct *pFVar8;
  FContextCacheElementUStruct *local_res20;
  FConnectionReference local_58;
  FGuid local_38;
  
  pFVar8 = (FContextCacheElementUStruct *)0x0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = param_3;
  this_00 = FindOutput(this,&local_58);
  if (this_00 == (FDataflowOutput *)0x0) {
    `FDataflowNode::SetValue<FCollectionAttributeKey,FCollectionAttributeKey>'::__l7::<lambda_1>::
    operator()(&local_res20);
  }
  else if (this_00->_padding_ != 0) {
    FVar4 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this_00);
    uVar3 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this_00);
    pFVar5 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)this_00,&local_38);
    pFVar1 = (FProperty *)this_00->_padding_;
    uVar6 = CityHash64((char *)&this_00->_padding_,0x10);
    local_res20 = (FContextCacheElementUStruct *)0x0;
    pFVar7 = ::operator_new(0x58);
    if (pFVar7 != (FContextCacheElementUStruct *)0x0) {
                    /* WARNING: Load size is inaccurate */
      local_58.Reference = *(void **)pFVar5;
      local_58.Index = pFVar5->C;
      local_58._12_4_ = pFVar5->D;
      pFVar8 = UE::Dataflow::FContextCacheElementUStruct::
               FContextCacheElementUStruct<FCollectionAttributeKey>
                         (pFVar7,(FGuid *)&local_58,pFVar1,param_2,uVar3,(FTimestamp)*FVar4.Value);
    }
    pFVar7 = local_res20;
    if (local_res20 != (FContextCacheElementUStruct *)0x0) {
      plVar2 = &local_res20->_padding_;
      local_res20 = pFVar8;
      (**(code **)*plVar2)(pFVar7,1);
      pFVar8 = local_res20;
    }
    local_res20 = pFVar8;
    if (local_res20 == (FContextCacheElementUStruct *)0x0) {
      UE::Dataflow::FContext::SetNullData
                (param_1,(uint)uVar6,pFVar1,pFVar5,uVar3,(FTimestamp *)FVar4.Value);
    }
    else {
      (**(code **)(param_1->_padding_ + 0x28))(param_1,uVar6 & 0xffffffff,&local_res20);
    }
    if (local_res20 != (FContextCacheElementUStruct *)0x0) {
      (**(code **)local_res20->_padding_)(local_res20,1);
      return;
    }
  }
  return;
}

// SetValue<FManagedArrayCollection,FManagedArrayCollection> @ 14dacb890

void __thiscall
FDataflowNode::SetValue<FManagedArrayCollection,FManagedArrayCollection>
          (FDataflowNode *this,FContext *param_1,FManagedArrayCollection *param_2,
          FManagedArrayCollection *param_3)

{
  FProperty *pFVar1;
  longlong *plVar2;
  uint uVar3;
  FDataflowOutput *this_00;
  FTimestamp FVar4;
  FGuid *pFVar5;
  ulong64 uVar6;
  FContextCacheElementUStruct *pFVar7;
  FContextCacheElementUStruct *pFVar8;
  FContextCacheElementUStruct *local_res20;
  FConnectionReference local_58;
  FGuid local_38;
  
  pFVar8 = (FContextCacheElementUStruct *)0x0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = param_3;
  this_00 = FindOutput(this,&local_58);
  if (this_00 == (FDataflowOutput *)0x0) {
    `FDataflowNode::SetValue<FManagedArrayCollection,FManagedArrayCollection>'::__l7::<lambda_1>::
    operator()(&local_res20);
  }
  else if (this_00->_padding_ != 0) {
    FVar4 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this_00);
    uVar3 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this_00);
    pFVar5 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)this_00,&local_38);
    pFVar1 = (FProperty *)this_00->_padding_;
    uVar6 = CityHash64((char *)&this_00->_padding_,0x10);
    local_res20 = (FContextCacheElementUStruct *)0x0;
    pFVar7 = ::operator_new(0x58);
    if (pFVar7 != (FContextCacheElementUStruct *)0x0) {
                    /* WARNING: Load size is inaccurate */
      local_58.Reference = *(void **)pFVar5;
      local_58.Index = pFVar5->C;
      local_58._12_4_ = pFVar5->D;
      pFVar8 = UE::Dataflow::FContextCacheElementUStruct::
               FContextCacheElementUStruct<FManagedArrayCollection>
                         (pFVar7,(FGuid *)&local_58,pFVar1,param_2,uVar3,(FTimestamp)*FVar4.Value);
    }
    pFVar7 = local_res20;
    if (local_res20 != (FContextCacheElementUStruct *)0x0) {
      plVar2 = &local_res20->_padding_;
      local_res20 = pFVar8;
      (**(code **)*plVar2)(pFVar7,1);
      pFVar8 = local_res20;
    }
    local_res20 = pFVar8;
    if (local_res20 == (FContextCacheElementUStruct *)0x0) {
      UE::Dataflow::FContext::SetNullData
                (param_1,(uint)uVar6,pFVar1,pFVar5,uVar3,(FTimestamp *)FVar4.Value);
    }
    else {
      (**(code **)(param_1->_padding_ + 0x28))(param_1,uVar6 & 0xffffffff,&local_res20);
    }
    if (local_res20 != (FContextCacheElementUStruct *)0x0) {
      (**(code **)local_res20->_padding_)(local_res20,1);
      return;
    }
  }
  return;
}

// operator() @ 150589620

bool __thiscall `FDataflowNode::SetValue<float_&,float>'::__l7::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3734611412631158242>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3734611412631158242>,
                       &`public:___cdecl_`public:_void___cdecl_FDataflowNode::SetValue<float&___ptr64,float>(UE::Dataflow::FContext&___ptr64,float&___ptr64,float_const*___ptr64)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150589660

bool __thiscall
`FDataflowNode::SetValue<UE::Math::TBox<double>_&,UE::Math::TBox<double>_>'::__l7::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3734611412631158242>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3734611412631158242>,
                       &`public:___cdecl_`public:_void___cdecl_FDataflowNode::SetValue<UE::Math::TBox<double>&___ptr64,UE::Math::TBox<double>_>(UE::Dataflow::FContext&___ptr64,UE::Math::TBox<double>&___ptr64,UE::Math::TBox<double>_const*___ptr64)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1505896a0

bool __thiscall
`FDataflowNode::SetValue<UE::Math::TTransform<double>_&,UE::Math::TTransform<double>_>'::__l7::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3734611412631158242>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3734611412631158242>,
                       &`public:___cdecl_`public:_void___cdecl_FDataflowNode::SetValue<UE::Math::TTransform<double>&___ptr64,UE::Math::TTransform<double>_>(UE::Dataflow::FContext&___ptr64,UE::Math::TTransform<double>&___ptr64,UE::Math::TTransform<double>_const*___ptr64)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1505896e0

bool __thiscall
`FDataflowNode::SetValue<FString_&,FString>'::__l7::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3734611412631158242>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3734611412631158242>,
                       &`public:___cdecl_`public:_void___cdecl_FDataflowNode::SetValue<FString&___ptr64,FString>(UE::Dataflow::FContext&___ptr64,FString&___ptr64,FString_const*___ptr64)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150589720

bool __thiscall
`FDataflowNode::
SetValue<TObjectPtr<USkeletalMesh_const_>_const_&,TObjectPtr<USkeletalMesh_const_>_>'::__l7::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3734611412631158242>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3734611412631158242>,
                       &`public:___cdecl_`public:_void___cdecl_FDataflowNode::SetValue<TObjectPtr<USkeletalMesh_const_>_const&___ptr64,TObjectPtr<class_USkeletalMesh_const_>_>(UE::Dataflow::FContext&___ptr64,TObjectPtr<USkeletalMesh_const_>_const&___ptr64,TObjectPtr<class_USkeletalMesh_const_>_const*___ptr64)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150589760

bool __thiscall
`FDataflowNode::SetValue<TObjectPtr<USkeleton_const_>_const_&,TObjectPtr<USkeleton_const_>_>'::__l7
::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3734611412631158242>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3734611412631158242>,
                       &`public:___cdecl_`public:_void___cdecl_FDataflowNode::SetValue<TObjectPtr<USkeleton_const_>_const&___ptr64,TObjectPtr<class_USkeleton_const_>_>(UE::Dataflow::FContext&___ptr64,TObjectPtr<USkeleton_const_>_const&___ptr64,TObjectPtr<class_USkeleton_const_>_const*___ptr64)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1505897a0

bool __thiscall
`FDataflowNode::SetValue<TObjectPtr<UStaticMesh_const_>_const_&,TObjectPtr<UStaticMesh_const_>_>'::
__l7::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3734611412631158242>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3734611412631158242>,
                       &`public:___cdecl_`public:_void___cdecl_FDataflowNode::SetValue<TObjectPtr<UStaticMesh_const_>_const&___ptr64,TObjectPtr<class_UStaticMesh_const_>_>(UE::Dataflow::FContext&___ptr64,TObjectPtr<UStaticMesh_const_>_const&___ptr64,TObjectPtr<class_UStaticMesh_const_>_const*___ptr64)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1505897e0

bool __thiscall
`FDataflowNode::SetValue<TObjectPtr<USkeleton>_const_&,TObjectPtr<USkeleton>_>'::__l7::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3734611412631158242>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3734611412631158242>,
                       &`public:___cdecl_`public:_void___cdecl_FDataflowNode::SetValue<TObjectPtr<USkeleton>_const&___ptr64,TObjectPtr<class_USkeleton>_>(UE::Dataflow::FContext&___ptr64,TObjectPtr<USkeleton>_const&___ptr64,TObjectPtr<class_USkeleton>_const*___ptr64)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150589820

bool __thiscall
`FDataflowNode::SetValue<UE::Math::TTransform<double>_const_&,UE::Math::TTransform<double>_>'::__l7
::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3734611412631158242>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3734611412631158242>,
                       &`public:___cdecl_`public:_void___cdecl_FDataflowNode::SetValue<UE::Math::TTransform<double>_const&___ptr64,UE::Math::TTransform<double>_>(UE::Dataflow::FContext&___ptr64,UE::Math::TTransform<double>_const&___ptr64,UE::Math::TTransform<double>_const*___ptr64)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150589860

bool __thiscall
`FDataflowNode::SetValue<TObjectPtr<UPhysicsAsset_const_>,TObjectPtr<UPhysicsAsset_const_>_>'::__l7
::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3734611412631158242>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3734611412631158242>,
                       &`public:___cdecl_`public:_void___cdecl_FDataflowNode::SetValue<TObjectPtr<UPhysicsAsset_const_>,TObjectPtr<class_UPhysicsAsset_const_>_>(UE::Dataflow::FContext&___ptr64,TObjectPtr<UPhysicsAsset_const_>&&___ptr64,TObjectPtr<class_UPhysicsAsset_const_>_const*___ptr64)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1505898a0

bool __thiscall
`FDataflowNode::SetValue<TObjectPtr<USkeletalMesh_const_>,TObjectPtr<USkeletalMesh_const_>_>'::__l7
::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3734611412631158242>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3734611412631158242>,
                       &`public:___cdecl_`public:_void___cdecl_FDataflowNode::SetValue<TObjectPtr<USkeletalMesh_const_>,TObjectPtr<class_USkeletalMesh_const_>_>(UE::Dataflow::FContext&___ptr64,TObjectPtr<USkeletalMesh_const_>&&___ptr64,TObjectPtr<class_USkeletalMesh_const_>_const*___ptr64)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1505898e0

bool __thiscall
`FDataflowNode::SetValue<TObjectPtr<USkeleton_const_>,TObjectPtr<USkeleton_const_>_>'::__l7::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3734611412631158242>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3734611412631158242>,
                       &`public:___cdecl_`public:_void___cdecl_FDataflowNode::SetValue<TObjectPtr<USkeleton_const_>,TObjectPtr<class_USkeleton_const_>_>(UE::Dataflow::FContext&___ptr64,TObjectPtr<USkeleton_const_>&&___ptr64,TObjectPtr<class_USkeleton_const_>_const*___ptr64)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150589920

bool __thiscall
`FDataflowNode::SetValue<TObjectPtr<UStaticMesh_const_>,TObjectPtr<UStaticMesh_const_>_>'::__l7::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3734611412631158242>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3734611412631158242>,
                       &`public:___cdecl_`public:_void___cdecl_FDataflowNode::SetValue<TObjectPtr<UStaticMesh_const_>,TObjectPtr<class_UStaticMesh_const_>_>(UE::Dataflow::FContext&___ptr64,TObjectPtr<UStaticMesh_const_>&&___ptr64,TObjectPtr<class_UStaticMesh_const_>_const*___ptr64)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150589960

bool __thiscall
`FDataflowNode::SetValue<UE::Math::TVector<double>,UE::Math::TVector<double>_>'::__l7::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3734611412631158242>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3734611412631158242>,
                       &`public:___cdecl_`public:_void___cdecl_FDataflowNode::SetValue<UE::Math::TVector<double>,UE::Math::TVector<double>_>(UE::Dataflow::FContext&___ptr64,UE::Math::TVector<double>&&___ptr64,UE::Math::TVector<double>_const*___ptr64)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1505899a0

bool __thiscall
`FDataflowNode::SetValue<FCollectionAttributeKey,FCollectionAttributeKey>'::__l7::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3734611412631158242>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3734611412631158242>,
                       &`public:___cdecl_`public:_void___cdecl_FDataflowNode::SetValue<FCollectionAttributeKey,FCollectionAttributeKey>(UE::Dataflow::FContext&___ptr64,FCollectionAttributeKey&&___ptr64,FCollectionAttributeKey_const*___ptr64)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1505899e0

bool __thiscall
`FDataflowNode::SetValue<FManagedArrayCollection,FManagedArrayCollection>'::__l7::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3734611412631158242>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3734611412631158242>,
                       &`public:___cdecl_`public:_void___cdecl_FDataflowNode::SetValue<FManagedArrayCollection,FManagedArrayCollection>(UE::Dataflow::FContext&___ptr64,FManagedArrayCollection&&___ptr64,FManagedArrayCollection_const*___ptr64)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

