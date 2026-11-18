// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowSimulation
// Functions: 5

// GetValue<TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_>_> @ 1462f0ba0

TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_> * __thiscall
FDataflowNode::GetValue<TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_>_>
          (FDataflowNode *this,FContext *param_1,
          TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_> *param_2)

{
  FDataflowOutput *this_00;
  FProperty *pFVar1;
  bool bVar2;
  uint uVar3;
  FDataflowInput *this_01;
  TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_> *pTVar4;
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
      pTVar4 = (TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_> *)
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
      UE::Dataflow::FContext::
      SetData<TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_>_const_&>
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
                 GetTypedData<TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_>_>
                           ((FContextCacheElementBase *)*puVar9,(IContextCacheStore *)param_1,pFVar1
                            ,pTVar4);
      }
    }
  }
  return pTVar4;
}

// SetValue<TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_>_&,TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_>_> @ 1462f1650

void __thiscall
FDataflowNode::
SetValue<TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_>_&,TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_>_>
          (FDataflowNode *this,FContext *param_1,
          TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_> *param_3)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  FProperty *pFVar3;
  undefined8 uVar4;
  FScriptContainerElement *_Src;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  uint uVar9;
  FDataflowOutput *this_00;
  FTimestamp FVar10;
  FGuid *pFVar11;
  ulong64 uVar12;
  undefined8 *puVar13;
  undefined8 *local_res20;
  FGuid local_50;
  FConnectionReference local_40;
  
  local_40.Index = -1;
  local_40.ContainerReference = (void *)0x0;
  local_40.Reference = param_3;
  this_00 = FindOutput(this,&local_40);
  if (this_00 == (FDataflowOutput *)0x0) {
    `FDataflowNode::
    SetValue<TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_>_&,TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_>_>'
    ::__l7::<lambda_1>::operator()(&local_res20);
  }
  else if (this_00->_padding_ != 0) {
    FVar10 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this_00);
    uVar9 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this_00);
    pFVar11 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)this_00,&local_50);
    pFVar3 = (FProperty *)this_00->_padding_;
    uVar12 = CityHash64((char *)&this_00->_padding_,0x10);
    local_res20 = (undefined8 *)0x0;
    puVar13 = ::operator_new(0x48);
    if (puVar13 == (undefined8 *)0x0) {
      puVar13 = (undefined8 *)0x0;
    }
    else {
      uVar6 = *(undefined8 *)pFVar11;
      uVar7 = *(undefined8 *)&pFVar11->C;
      uVar4 = *(undefined8 *)FVar10.Value;
      puVar13[4] = pFVar3;
      pFVar1 = (ForAnyElementType *)(puVar13 + 7);
      *(undefined8 *)((longlong)puVar13 + 0xc) = uVar6;
      *(undefined8 *)((longlong)puVar13 + 0x14) = uVar7;
      *(undefined4 *)(puVar13 + 1) = 0;
      *(uint *)(puVar13 + 5) = uVar9;
      puVar13[6] = uVar4;
      *puVar13 = &
                 ___7__TContextCacheElement_AEAV__TArray_UFDataflowSimulationProperty__V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
      ;
      pFVar1->Data = (FScriptContainerElement *)0x0;
      iVar2 = param_2->ArrayNum;
      _Src = (param_2->AllocatorInstance).Data;
      *(int *)(puVar13 + 8) = iVar2;
      if (iVar2 == 0) {
        *(int *)((longlong)puVar13 + 0x44) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,iVar2,0,pFVar1,iVar2,(int *)((longlong)puVar13 + 0x44));
        memcpy(pFVar1->Data,_Src,(longlong)iVar2 << 3);
      }
    }
    puVar8 = local_res20;
    if (local_res20 != (undefined8 *)0x0) {
      puVar5 = (undefined8 *)*local_res20;
      local_res20 = puVar13;
      (*(code *)*puVar5)(puVar8,1);
      puVar13 = local_res20;
    }
    local_res20 = puVar13;
    if (local_res20 == (undefined8 *)0x0) {
      UE::Dataflow::FContext::SetNullData
                (param_1,(uint)uVar12,pFVar3,pFVar11,uVar9,(FTimestamp *)FVar10.Value);
    }
    else {
      (**(code **)(param_1->_padding_ + 0x28))(param_1,uVar12 & 0xffffffff,&local_res20);
    }
    if (local_res20 != (undefined8 *)0x0) {
      (**(code **)*local_res20)(local_res20,1);
      return;
    }
  }
  return;
}

// operator() @ 1504e9400

bool __thiscall
`FDataflowNode::
SetValue<TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_>_&,TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_>_>'
::__l7::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3734611412631158242>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3734611412631158242>,
                       &`public:___cdecl_`public:_void___cdecl_FDataflowNode::SetValue<TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_>&___ptr64,TArray<struct_FDataflowSimulationProperty,class_TSizedDefaultAllocator<32>_>_>(UE::Dataflow::FContext&___ptr64,TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_>&___ptr64,TArray<struct_FDataflowSimulationProperty,class_TSizedDefaultAllocator<32>_>_const*___ptr64)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504e9440

bool __thiscall
`FDataflowNode::
SetValue<TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_>_const_&,TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_>_>'
::__l7::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3734611412631158242>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3734611412631158242>,
                       &`public:___cdecl_`public:_void___cdecl_FDataflowNode::SetValue<TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_>_const&___ptr64,TArray<struct_FDataflowSimulationProperty,class_TSizedDefaultAllocator<32>_>_>(UE::Dataflow::FContext&___ptr64,TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_>_const&___ptr64,TArray<struct_FDataflowSimulationProperty,class_TSizedDefaultAllocator<32>_>_const*___ptr64)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504e9480

bool __thiscall
`FDataflowNode::SetValue<FDataflowSimulationTime,FDataflowSimulationTime>'::__l7::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3734611412631158242>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3734611412631158242>,
                       &`public:___cdecl_`public:_void___cdecl_FDataflowNode::SetValue<FDataflowSimulationTime,FDataflowSimulationTime>(UE::Dataflow::FContext&___ptr64,FDataflowSimulationTime&&___ptr64,FDataflowSimulationTime_const*___ptr64)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

