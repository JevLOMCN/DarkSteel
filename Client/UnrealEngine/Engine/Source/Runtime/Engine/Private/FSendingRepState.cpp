// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// CountBytes @ 1484cda80

void __thiscall FSendingRepState::CountBytes(FSendingRepState *this,FArchive *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  FString local_58;
  FScopeMarker local_48;
  
  ::FString::FString(&local_58,"FSendingRepState::CountBytes");
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::FScopeMarker(&local_48,param_1,&local_58);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_48);
  if (this->ChangeHistory != (FRepChangedHistory *)&this->Retirement) {
    piVar4 = &this->ChangeHistory[0].Changed.ArrayNum;
    do {
      (**(code **)(*(longlong *)param_1 + 0x10))
                (param_1,(longlong)*piVar4 * 2,(longlong)piVar4[1] * 2);
      piVar1 = piVar4 + 4;
      piVar4 = piVar4 + 8;
    } while ((TArray<FPropertyRetirement,TSizedDefaultAllocator<32>_> *)piVar1 != &this->Retirement)
    ;
  }
  ::FString::FString(&local_58,"ChangeHistory");
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_48,&local_58);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_48);
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)(this->PreOpenAckHistory).ArrayNum << 5,
             (longlong)(this->PreOpenAckHistory).ArrayMax << 5);
  iVar2 = (this->PreOpenAckHistory).ArrayNum;
  pFVar5 = (this->PreOpenAckHistory).AllocatorInstance.Data;
  pFVar6 = pFVar5 + (longlong)iVar2 * 0x20;
  while( true ) {
    if ((this->PreOpenAckHistory).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FRepChangedHistory_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar5 == pFVar6) break;
    (**(code **)(*(longlong *)param_1 + 0x10))
              (param_1,(longlong)*(int *)(pFVar5 + 0x10) * 2,(longlong)*(int *)(pFVar5 + 0x14) * 2);
    pFVar5 = pFVar5 + 0x20;
  }
  ::FString::FString(&local_58,"PreOpenAckHistory");
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_48,&local_58);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_48);
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)(this->LifetimeChangelist).ArrayNum * 2,
             (longlong)(this->LifetimeChangelist).ArrayMax * 2);
  ::FString::FString(&local_58,"LifetimeChangelist");
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_48,&local_58);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_48);
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)(this->InactiveChangelist).ArrayNum * 2,
             (longlong)(this->InactiveChangelist).ArrayMax * 2);
  ::FString::FString(&local_58,"InactiveChangelist");
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_48,&local_58);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_48);
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(ulonglong)((this->InactiveParents).NumBits + 0x1fU >> 5) << 2,
             (ulonglong)((this->InactiveParents).MaxBits + 0x1fU >> 5) << 2);
  ::FString::FString(&local_58,"InactiveParents");
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_48,&local_58);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_48);
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)(this->Retirement).ArrayNum * 0x28,
             (longlong)(this->Retirement).ArrayMax * 0x28);
  ::FString::FString(&local_58,"Retirement");
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_48,&local_58);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_48);
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)(this->RecentCustomDeltaState).ArrayNum << 4,
             (longlong)(this->RecentCustomDeltaState).ArrayMax << 4);
  iVar2 = (this->RecentCustomDeltaState).ArrayNum;
  pFVar5 = (this->RecentCustomDeltaState).AllocatorInstance.Data;
  pFVar6 = pFVar5 + (longlong)iVar2 * 0x10;
  while( true ) {
    if ((this->RecentCustomDeltaState).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TSharedPtr<INetDeltaBaseState,1>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar6) break;
    plVar3 = *(longlong **)pFVar5;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,param_1);
    }
    pFVar5 = pFVar5 + 0x10;
  }
  ::FString::FString(&local_58,"RecentCustomDeltaState");
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_48,&local_58);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_48);
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)(this->CDOCustomDeltaState).ArrayNum << 4,
             (longlong)(this->CDOCustomDeltaState).ArrayMax << 4);
  iVar2 = (this->CDOCustomDeltaState).ArrayNum;
  pFVar5 = (this->CDOCustomDeltaState).AllocatorInstance.Data;
  pFVar6 = pFVar5 + (longlong)iVar2 * 0x10;
  while( true ) {
    if ((this->CDOCustomDeltaState).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TSharedPtr<INetDeltaBaseState,1>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar6) break;
    plVar3 = *(longlong **)pFVar5;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,param_1);
    }
    pFVar5 = pFVar5 + 0x10;
  }
  ::FString::FString(&local_58,"CDOCustomDeltaState");
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_48,&local_58);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_48);
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)(this->CheckpointCustomDeltaState).ArrayNum << 4,
             (longlong)(this->CheckpointCustomDeltaState).ArrayMax << 4);
  iVar2 = (this->CheckpointCustomDeltaState).ArrayNum;
  pFVar5 = (this->CheckpointCustomDeltaState).AllocatorInstance.Data;
  pFVar6 = pFVar5 + (longlong)iVar2 * 0x10;
  while( true ) {
    if ((this->CheckpointCustomDeltaState).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TSharedPtr<INetDeltaBaseState,1>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar6) break;
    plVar3 = *(longlong **)pFVar5;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,param_1);
    }
    pFVar5 = pFVar5 + 0x10;
  }
  ::FString::FString(&local_58,"CheckpointCustomDeltaState");
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_48,&local_58);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::~FScopeMarker(&local_48);
  return;
}

// HasAnyPendingRetirements @ 1484dbf10

bool __thiscall FSendingRepState::HasAnyPendingRetirements(FSendingRepState *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar2 = (this->Retirement).ArrayNum;
  pFVar3 = (this->Retirement).AllocatorInstance.Data;
  pFVar1 = pFVar3 + (longlong)iVar2 * 0x28;
  while( true ) {
    if ((this->Retirement).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FPropertyRetirement_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if (*(longlong *)pFVar3 != 0) {
      return true;
    }
    pFVar3 = pFVar3 + 0x28;
  }
  return false;
}

