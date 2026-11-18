// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeEngine
// Functions: 4

// operator() @ 14e4de1c0

void __thiscall
`FInterchangeReset::ExecuteReset'::__l5::<lambda_1>::operator()
          (void *this,FString *param_1,UInterchangeFactoryBaseNode *param_2)

{
  FScriptContainerElement *pFVar1;
  FInterchangeResetParameters *this_00;
  undefined8 uVar2;
  bool bVar3;
  int iVar4;
  ForAnyElementType FVar5;
  UInterchangeFactoryBase *local_res8;
  TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> local_38;
  
  this_00 = *(FInterchangeResetParameters **)this;
  bVar3 = UE::Interchange::InterchangeReset::Private::CanExecuteResetPhaseForNode
                    (this_00,param_2,
                     (TDelegate<bool___cdecl(FInterchangeResetParameters_&,UInterchangeFactoryBaseNode_const_*),FDefaultDelegateUserPolicy>
                      *)this_00);
  if (bVar3) {
    FInterchangeResetParameters::SetupFactoryNode(this_00,param_2);
    FInterchangeResetParameters::GetFactoryForNode
              (this_00,(UInterchangeFactoryBaseNode *)&local_res8);
    if ((local_res8 != (UInterchangeFactoryBase *)0x0) &&
       (((uint)local_res8->_padding_ >> 0x1e & 1) == 0)) {
      FInterchangeResetParameters::GetObjectInstancesForFactoryNode(this_00,&local_38,param_2);
      iVar4 = local_38.ArrayNum;
      pFVar1 = local_38.AllocatorInstance.Data + (longlong)iVar4 * 8;
      FVar5.Data = local_38.AllocatorInstance.Data;
      while( true ) {
        if (local_38.ArrayNum != iVar4) {
          `TCheckedPointerIterator<TObjectPtr<UObject>,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_res8);
        }
        if (FVar5.Data == pFVar1) break;
        uVar2 = *(undefined8 *)FVar5.Data;
        UInterchangeFactoryBaseNode::RestoreAllCustomAttributeDelegates(param_2);
        (**(code **)(local_res8->_padding_ + 0x350))(local_res8,0,param_2,uVar2);
        FVar5.Data = FVar5.Data + 8;
      }
      TDelegate<void___cdecl(FInterchangeResetParameters_&,UInterchangeFactoryBase_const_*,UInterchangeFactoryBaseNode_const_*),FDefaultDelegateUserPolicy>
      ::ExecuteIfBound(&(this_00->PreResetDelegates).OnNodeProcessed,this_00,local_res8,param_2);
      if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// operator() @ 14e4df1b0

void __thiscall
`FInterchangeReset::ExecuteReset'::__l5::<lambda_2>::operator()
          (void *this,FString *param_1,UInterchangeFactoryBaseNode *param_2)

{
  FScriptContainerElement *pFVar1;
  FInterchangeResetParameters *this_00;
  undefined8 uVar2;
  UInterchangeFactoryBase *pUVar3;
  bool bVar4;
  int iVar5;
  ForAnyElementType FVar6;
  EReimportStrategyFlags local_res8;
  undefined7 uStackX_9;
  EReimportStrategyFlags local_res20 [8];
  TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> local_48;
  
  this_00 = *(FInterchangeResetParameters **)this;
  bVar4 = UE::Interchange::InterchangeReset::Private::CanExecuteResetPhaseForNode
                    (this_00,param_2,&(this_00->ResetDelegates).OnNodeFilter);
  if (bVar4) {
    FInterchangeResetParameters::GetFactoryForNode
              (this_00,(UInterchangeFactoryBaseNode *)&local_res8);
    pUVar3 = (UInterchangeFactoryBase *)CONCAT71(uStackX_9,local_res8);
    if ((pUVar3 != (UInterchangeFactoryBase *)0x0) && (((uint)pUVar3->_padding_ >> 0x1e & 1) == 0))
    {
      FInterchangeResetParameters::GetObjectInstancesForFactoryNode(this_00,&local_48,param_2);
      iVar5 = local_48.ArrayNum;
      pFVar1 = local_48.AllocatorInstance.Data + (longlong)iVar5 * 8;
      FVar6.Data = local_48.AllocatorInstance.Data;
      while( true ) {
        if (local_48.ArrayNum != iVar5) {
          `TCheckedPointerIterator<TObjectPtr<UObject>,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_res8);
        }
        if (FVar6.Data == pFVar1) break;
        uVar2 = *(undefined8 *)FVar6.Data;
        local_res20[0] = UInterchangeFactoryBaseNode::GetReimportStrategyFlags(param_2);
        local_res8 = ApplyPipelineProperties;
        UInterchangeFactoryBaseNode::SetReimportStrategyFlags(param_2,&local_res8);
        (**(code **)(pUVar3->_padding_ + 0x358))(pUVar3,0,param_2,uVar2);
        UInterchangeFactoryBaseNode::SetReimportStrategyFlags(param_2,local_res20);
        FVar6.Data = FVar6.Data + 8;
      }
      TDelegate<void___cdecl(FInterchangeResetParameters_&,UInterchangeFactoryBase_const_*,UInterchangeFactoryBaseNode_const_*),FDefaultDelegateUserPolicy>
      ::ExecuteIfBound(&(this_00->ResetDelegates).OnNodeProcessed,this_00,pUVar3,param_2);
      if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// operator() @ 14e4dfb60

void __thiscall
`FInterchangeReset::ExecuteReset'::__l5::<lambda_3>::operator()
          (void *this,FString *param_1,UInterchangeFactoryBaseNode *param_2)

{
  FScriptContainerElement *pFVar1;
  FInterchangeResetParameters *this_00;
  bool bVar2;
  int iVar3;
  ForAnyElementType FVar4;
  UInterchangeFactoryBase *local_res8;
  TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> local_38;
  
  this_00 = *(FInterchangeResetParameters **)this;
  bVar2 = UE::Interchange::InterchangeReset::Private::CanExecuteResetPhaseForNode
                    (this_00,param_2,&(this_00->PostResetDelegates).OnNodeFilter);
  if (((bVar2) &&
      (FInterchangeResetParameters::GetFactoryForNode
                 (this_00,(UInterchangeFactoryBaseNode *)&local_res8),
      local_res8 != (UInterchangeFactoryBase *)0x0)) &&
     (((uint)local_res8->_padding_ >> 0x1e & 1) == 0)) {
    FInterchangeResetParameters::GetObjectInstancesForFactoryNode(this_00,&local_38,param_2);
    iVar3 = local_38.ArrayNum;
    pFVar1 = local_38.AllocatorInstance.Data + (longlong)iVar3 * 8;
    FVar4.Data = local_38.AllocatorInstance.Data;
    while( true ) {
      if (local_38.ArrayNum != iVar3) {
        `TCheckedPointerIterator<TObjectPtr<UObject>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res8);
      }
      if (FVar4.Data == pFVar1) break;
      (**(code **)(local_res8->_padding_ + 0x360))(local_res8,0,param_2,*(undefined8 *)FVar4.Data);
      UInterchangeFactoryBaseNode::RemoveAllCustomAttributeDelegates(param_2);
      FVar4.Data = FVar4.Data + 8;
    }
    TDelegate<void___cdecl(FInterchangeResetParameters_&,UInterchangeFactoryBase_const_*,UInterchangeFactoryBaseNode_const_*),FDefaultDelegateUserPolicy>
    ::ExecuteIfBound(&(this_00->PostResetDelegates).OnNodeProcessed,this_00,local_res8,param_2);
    if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.AllocatorInstance.Data);
    }
  }
  return;
}

// ExecuteReset @ 14e4f24e0

void __cdecl FInterchangeReset::ExecuteReset(FInterchangeResetParameters *param_1)

{
  if (-1 < CpuChannel->Enabled) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId259,"FInterchangeReset::ExecuteReset",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Engine\\Private\\InterchangeImportReset.cpp"
               ,0x103);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId259);
    FCpuProfilerTrace::OutputEndEvent();
    return;
  }
  return;
}

