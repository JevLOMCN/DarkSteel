// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowEngine
// Functions: 7

// AsType<FDataflowTerminalNode_const_> @ 1462c8310

FDataflowTerminalNode * __thiscall
FDataflowNode::AsType<FDataflowTerminalNode_const_>(FDataflowNode *this)

{
  char cVar1;
  FDataflowNode *pFVar2;
  FName local_res8 [4];
  
  ::FName::FName(local_res8,"FDataflowTerminalNode");
  cVar1 = (**(code **)(this->_padding_ + 0x128))(this);
  pFVar2 = (FDataflowNode *)0x0;
  if (cVar1 != '\0') {
    pFVar2 = this;
  }
  return (FDataflowTerminalNode *)pFVar2;
}

// GetValue<FDataflowImage> @ 1462cab10

FDataflowImage * __thiscall
FDataflowNode::GetValue<FDataflowImage>
          (FDataflowNode *this,FContext *param_1,FDataflowImage *param_2)

{
  FDataflowOutput *this_00;
  FProperty *pFVar1;
  bool bVar2;
  uint uVar3;
  FDataflowInput *this_01;
  FDataflowImage *pFVar4;
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
  pFVar4 = local_48.Reference;
  this_00 = this_01->Connection;
  if (this_00 != (FDataflowOutput *)0x0) {
    bVar2 = FDataflowOutput::HasFrozenValue(this_00);
    if (bVar2) {
      pFVar4 = (FDataflowImage *)FDataflowOutput::GetFrozenPropertyValue(this_00,(uchar *)pFVar4);
      return pFVar4;
    }
    bVar2 = FDataflowOutput::Evaluate(this_00,param_1);
    if (!bVar2) {
      FVar5 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this_01);
      uVar3 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this_01);
      pFVar6 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)this_01,&local_58);
      pFVar1 = (FProperty *)this_01->_padding_;
      uVar7 = CityHash64((char *)&this_00->_padding_,0x10);
      UE::Dataflow::FContext::SetData<FDataflowImage_const_&>
                (param_1,(uint)uVar7,pFVar1,pFVar4,pFVar6,uVar3,(FTimestamp *)FVar5.Value);
    }
    uVar7 = UE::Dataflow::FTimestamp::Invalid;
    uVar8 = CityHash64((char *)&this_00->_padding_,0x10);
    bVar2 = UE::Dataflow::FContext::HasData(param_1,(uint)uVar8,(FTimestamp)uVar7);
    if (bVar2) {
      pFVar1 = (FProperty *)this_01->_padding_;
      uVar7 = CityHash64((char *)&this_00->_padding_,0x10);
      puVar9 = (undefined8 *)(**(code **)(param_1->_padding_ + 0x30))(param_1,uVar7 & 0xffffffff);
      if (puVar9 != (undefined8 *)0x0) {
        pFVar4 = UE::Dataflow::FContextCacheElementBase::GetTypedData<FDataflowImage>
                           ((FContextCacheElementBase *)*puVar9,(IContextCacheStore *)param_1,pFVar1
                            ,pFVar4);
      }
    }
  }
  return pFVar4;
}

// SetValue<FDataflowImage_&,FDataflowImage> @ 1462cc1d0

void __thiscall
FDataflowNode::SetValue<FDataflowImage_&,FDataflowImage>
          (FDataflowNode *this,FContext *param_1,FDataflowImage *param_2,FDataflowImage *param_3)

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
    `FDataflowNode::SetValue<FDataflowImage_&,FDataflowImage>'::__l7::<lambda_1>::operator()
              (&local_res20);
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
               FContextCacheElementUStruct<FDataflowImage_&>
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

// operator() @ 1504e9140

bool __thiscall
`FDataflowNode::SetValue<TObjectPtr<UTexture2D>_&,TObjectPtr<UTexture2D>_>'::__l7::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3734611412631158242>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3734611412631158242>,
                       &`public:___cdecl_`public:_void___cdecl_FDataflowNode::SetValue<TObjectPtr<UTexture2D>&___ptr64,TObjectPtr<class_UTexture2D>_>(UE::Dataflow::FContext&___ptr64,TObjectPtr<UTexture2D>&___ptr64,TObjectPtr<class_UTexture2D>_const*___ptr64)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504e9180

bool __thiscall
`FDataflowNode::SetValue<FDataflowImage_&,FDataflowImage>'::__l7::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3734611412631158242>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3734611412631158242>,
                       &`public:___cdecl_`public:_void___cdecl_FDataflowNode::SetValue<FDataflowImage&___ptr64,FDataflowImage>(UE::Dataflow::FContext&___ptr64,FDataflowImage&___ptr64,FDataflowImage_const*___ptr64)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504e91c0

bool __thiscall
`FDataflowNode::SetValue<FDataflowImage_const_&,FDataflowImage>'::__l7::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3734611412631158242>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3734611412631158242>,
                       &`public:___cdecl_`public:_void___cdecl_FDataflowNode::SetValue<FDataflowImage_const&___ptr64,FDataflowImage>(UE::Dataflow::FContext&___ptr64,FDataflowImage_const&___ptr64,FDataflowImage_const*___ptr64)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504e9200

bool __thiscall `FDataflowNode::SetValue<int,int>'::__l7::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3734611412631158242>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3734611412631158242>,
                       &`public:___cdecl_`public:_void___cdecl_FDataflowNode::SetValue<int,int>(UE::Dataflow::FContext&___ptr64,int&&___ptr64,int_const*___ptr64)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

