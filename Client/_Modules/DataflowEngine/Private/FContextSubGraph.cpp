// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowEngine
// Functions: 11

// AddAsset @ 1462d1a50

UObject * __thiscall
UE::Dataflow::SubGraphNodes::Private::FContextSubGraph::AddAsset
          (FContextSubGraph *this,FString *param_1,UClass *param_2)

{
  UObject *pUVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001462d1a5e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pUVar1 = (UObject *)(*(code *)**(undefined8 **)(*(longlong *)&this->CurrentArrayIndex + 8))();
  return pUVar1;
}

// ClearAssets @ 1462d52c0

void __thiscall
UE::Dataflow::SubGraphNodes::Private::FContextSubGraph::ClearAssets(FContextSubGraph *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001462d52ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(*(longlong *)&this->CurrentArrayIndex + 8) + 0x10))();
  return;
}

// CommitAsset @ 1462d5730

UObject * __thiscall
UE::Dataflow::SubGraphNodes::Private::FContextSubGraph::CommitAsset
          (FContextSubGraph *this,FString *param_1)

{
  UObject *pUVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001462d573e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pUVar1 = (UObject *)(**(code **)(*(longlong *)(*(longlong *)&this->CurrentArrayIndex + 8) + 8))();
  return pUVar1;
}

// Evaluate @ 1462d8430

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Dataflow::SubGraphNodes::Private::FContextSubGraph::Evaluate
          (FContextSubGraph *this,FDataflowNode *param_1,FDataflowOutput *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  bool bVar3;
  ulonglong uVar4;
  ForAnyElementType FVar5;
  FName FStackX_18;
  TArray<FDataflowOutput_*,TSizedDefaultAllocator<32>_> TStack_18;
  
  if (param_2 != (FDataflowOutput *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144437fe5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x50))(this,param_2);
    return;
  }
  if (param_1 != (FDataflowNode *)0x0) {
    if (*(int *)&(param_1->ExpandedOutputs).field_0x8 ==
        *(int *)&(param_1->ExpandedOutputs).field_0x34) {
      if (((param_1->bActive != false) && (bDataflowEnableGraphEval)) &&
         (param_1->bIsFrozen == false)) {
        if ((this->_padding_ == 0) &&
           (bVar3 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                               &this->_padding_), bVar3)) {
          TMulticastDelegate<void___cdecl(FDataflowNode_const_*,FDataflowOutput_const_*),FDefaultDelegateUserPolicy>
          ::Broadcast((TMulticastDelegate<void___cdecl(FDataflowNode_const_*,FDataflowOutput_const_*),FDefaultDelegateUserPolicy>
                       *)&this->_padding_,param_1,(FDataflowOutput *)0x0);
        }
        if (5 < (byte)LogChaosDataflow._0_1_) {
          FStackX_18 = param_1->Name;
          ::FName::ToString(&FStackX_18,(FString *)&TStack_18);
          Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogChaosDataflow);
          if (TStack_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(TStack_18.AllocatorInstance.Data);
          }
        }
        (**(code **)(param_1->_padding_ + 0xc0))(param_1,this);
        if ((this->_padding_ == 0) &&
           (bVar3 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                               &this->_padding_), bVar3)) {
          TMulticastDelegate<void___cdecl(FDataflowNode_const_*,FDataflowOutput_const_*),FDefaultDelegateUserPolicy>
          ::Broadcast((TMulticastDelegate<void___cdecl(FDataflowNode_const_*,FDataflowOutput_const_*),FDefaultDelegateUserPolicy>
                       *)&this->_padding_,param_1,(FDataflowOutput *)0x0);
          return;
        }
      }
    }
    else {
      TStack_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      TStack_18.ArrayNum = 0;
      TStack_18.ArrayMax = 0;
      TMapBase<UE::Dataflow::FConnectionKey,FDataflowOutput_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowOutput_*,0>_>
      ::GenerateValueArray<TSizedDefaultAllocator<32>_>
                ((TMapBase<UE::Dataflow::FConnectionKey,FDataflowOutput_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowOutput_*,0>_>
                  *)&param_1->ExpandedOutputs,&TStack_18);
      iVar2 = TStack_18.ArrayNum;
      uVar4 = (ulonglong)TStack_18.ArrayNum;
      pFVar1 = TStack_18.AllocatorInstance.Data + uVar4 * 8;
      FVar5.Data = TStack_18.AllocatorInstance.Data;
      while( true ) {
        if ((int)uVar4 != iVar2) {
          `TCheckedPointerIterator<FDataflowOutput_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&FStackX_18);
        }
        if (FVar5.Data == pFVar1) break;
        (**(code **)(this->_padding_ + 0x50))(this,*(undefined8 *)FVar5.Data);
        uVar4 = TStack_18._8_8_ & 0xffffffff;
        FVar5.Data = FVar5.Data + 8;
      }
      if (TStack_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(TStack_18.AllocatorInstance.Data);
      }
    }
    return;
  }
  `UE::Dataflow::FContext::BeginContextEvaluation'::__l46::<lambda_1>::operator()(&FStackX_18);
  return;
}

// Evaluate @ 1462d8440

bool __thiscall
UE::Dataflow::SubGraphNodes::Private::FContextSubGraph::Evaluate
          (FContextSubGraph *this,FDataflowOutput *param_1)

{
  bool bVar1;
  
  bVar1 = FDataflowOutput::EvaluateImpl(param_1,(FContext *)this);
  return bVar1;
}

// GetDataImpl @ 1462dc440

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
* __thiscall
UE::Dataflow::SubGraphNodes::Private::FContextSubGraph::GetDataImpl
          (FContextSubGraph *this,uint param_1)

{
  int iVar1;
  TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
  *pTVar2;
  TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
  *pTVar3;
  longlong *plVar4;
  TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
  *pTVar5;
  
  pTVar5 = (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            *)0x0;
  pTVar2 = pTVar5;
  if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
    plVar4 = (longlong *)this->_padding_;
    if ((longlong *)this->_padding_ == (longlong *)0x0) {
      plVar4 = &this->_padding_;
    }
    iVar1 = *(int *)((longlong)plVar4 + (ulonglong)((int)this->_padding_ - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        pTVar2 = (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
                  *)(this->_padding_ + (longlong)iVar1 * 0x18);
        if (*(uint *)(this->_padding_ + (longlong)iVar1 * 0x18) == param_1) break;
        iVar1 = *(int *)&pTVar2[2].Ptr;
        pTVar2 = pTVar5;
      } while (iVar1 != -1);
    }
  }
  pTVar3 = pTVar2 + 1;
  if (pTVar2 == (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
                 *)0x0) {
    pTVar3 = pTVar5;
  }
  return pTVar3;
}

// GetType @ 1462df010

FName __thiscall
UE::Dataflow::SubGraphNodes::Private::FContextSubGraph::GetType(FContextSubGraph *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FContextSubGraph");
  return in_RDX;
}

// HasDataImpl @ 1462df790

bool __thiscall
UE::Dataflow::SubGraphNodes::Private::FContextSubGraph::HasDataImpl
          (FContextSubGraph *this,uint param_1,FTimestamp param_2)

{
  longlong lVar1;
  int iVar2;
  TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
  *pTVar3;
  longlong *plVar4;
  
  if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
    plVar4 = (longlong *)this->_padding_;
    if ((longlong *)this->_padding_ == (longlong *)0x0) {
      plVar4 = &this->_padding_;
    }
    iVar2 = *(int *)((longlong)plVar4 + (ulonglong)((int)this->_padding_ - 1U & param_1) * 4);
    if (iVar2 != -1) {
      lVar1 = this->_padding_;
      do {
        if (*(uint *)(lVar1 + (longlong)iVar2 * 0x18) == param_1) {
          pTVar3 = TMapBase<unsigned_int,TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>,0>_>
                   ::FindChecked((TMapBase<unsigned_int,TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>,0>_>
                                  *)&this->_padding_,param_1);
          if ((pTVar3->Ptr->Timestamp).Value < param_2.Value) {
            return false;
          }
          return true;
        }
        iVar2 = *(int *)(lVar1 + 0x10 + (longlong)iVar2 * 0x18);
      } while (iVar2 != -1);
    }
  }
  return false;
}

// IsA @ 1462dfad0

bool __thiscall
UE::Dataflow::SubGraphNodes::Private::FContextSubGraph::IsA(FContextSubGraph *this,FName param_1)

{
  FName local_res10;
  FName local_res18;
  FName local_res20;
  FName local_18 [2];
  
  ::FName::FName(&local_res10,"FContextSubGraph");
  if (param_1 != local_res10) {
    ::FName::FName(&local_res18,"TEngineContext");
    if (param_1 != local_res18) {
      ::FName::FName(&local_res20,"FContextSingle");
      if (param_1 != local_res20) {
        ::FName::FName(local_18,"FContext");
        if (param_1 != local_18[0]) {
          return false;
        }
      }
    }
  }
  return true;
}

// IsEmptyImpl @ 1462dfd20

bool __thiscall
UE::Dataflow::SubGraphNodes::Private::FContextSubGraph::IsEmptyImpl(FContextSubGraph *this)

{
  return (int)this->_padding_ == *(int *)((longlong)&this->_padding_ + 4);
}

// SetDataImpl @ 1462e4f00

void __thiscall
UE::Dataflow::SubGraphNodes::Private::FContextSubGraph::SetDataImpl
          (FContextSubGraph *this,uint param_1,
          TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
          *param_2)

{
  TPairInitializer<unsigned_int_&,TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>_&&>
  local_res8 [2];
  TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
  **local_18;
  TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
  *local_10;
  
  local_18 = &local_res8[0].Value;
  local_res8[0].Value._0_4_ = param_1;
  local_10 = param_2;
  TSet<TTuple<unsigned_int,TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<unsigned_int_&,TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>_&&>_>
            ((TSet<TTuple<unsigned_int,TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>,0>,FDefaultSetAllocator>
              *)&this->_padding_,local_res8,(bool *)&local_18);
  return;
}

