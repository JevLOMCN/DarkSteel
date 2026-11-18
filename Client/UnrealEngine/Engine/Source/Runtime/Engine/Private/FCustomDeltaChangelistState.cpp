// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// CountBytes @ 1484cbdd0

void __thiscall
FCustomDeltaChangelistState::CountBytes(FCustomDeltaChangelistState *this,FArchive *param_1)

{
  int iVar1;
  ulonglong uVar2;
  FDeltaArrayHistoryItem *this_00;
  FDeltaArrayHistoryItem *pFVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  uint local_res10;
  FString local_d8;
  FString local_c8;
  FScopeMarker local_b8;
  FString local_90;
  FString local_80;
  FString local_70;
  FScopeMarker local_60;
  
  ::FString::FString(&local_d8,"FCustomDeltaChangelistState::CountBytes");
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::FScopeMarker(&local_60,param_1,&local_d8);
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_60);
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)(this->ArrayStates).ArrayNum * 0x90,
             (longlong)(this->ArrayStates).ArrayMax * 0x90);
  local_res10 = (this->ArrayStates).ArrayNum;
  uVar2 = (ulonglong)(int)local_res10;
  pFVar4 = (this->ArrayStates).AllocatorInstance.Data;
  pFVar5 = pFVar4 + uVar2 * 0x90;
  while( true ) {
    if ((this->ArrayStates).ArrayNum != (int)uVar2) {
      `TCheckedPointerIterator<FDeltaArrayHistoryState_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar4 == pFVar5) break;
    ::FString::FString(&local_d8,"FDeltaArrayHistoryState::CountBytes");
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::FScopeMarker
              (&local_b8,param_1,&local_d8);
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_b8);
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::CountBytes
              ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
               (pFVar4 + 0x30),param_1);
    ::FString::FString(&local_90,"IDToIndexMap");
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_b8,&local_90);
    if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data.AllocatorInstance.Data);
    }
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_b8);
    (**(code **)(*(longlong *)param_1 + 0x10))
              (param_1,(longlong)*(int *)(pFVar4 + 8) * 0x50,(longlong)*(int *)(pFVar4 + 0xc) * 0x50
              );
    ::FString::FString(&local_80,"ChangeHistory");
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_b8,&local_80);
    if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data.AllocatorInstance.Data);
    }
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_b8);
    iVar1 = *(int *)(pFVar4 + 8);
    this_00 = *(FDeltaArrayHistoryItem **)pFVar4;
    pFVar3 = this_00 + iVar1;
    while( true ) {
      if (*(int *)(pFVar4 + 8) != iVar1) {
        `TCheckedPointerIterator<FDeltaArrayHistoryItem_const_,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res8);
      }
      if (this_00 == pFVar3) break;
      FDeltaArrayHistoryItem::CountBytes(this_00,param_1);
      this_00 = this_00 + 1;
    }
    ::FString::FString(&local_70,"ChangeHistoryElements");
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_b8,&local_70);
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_b8);
    (**(code **)(*(longlong *)param_1 + 0x10))
              (param_1,(ulonglong)(*(int *)(pFVar4 + 0x28) + 0x1fU >> 5) << 2,
               (ulonglong)(*(int *)(pFVar4 + 0x2c) + 0x1fU >> 5) << 2);
    ::FString::FString(&local_c8,"ChangeHistoryUpdated");
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_b8,&local_c8);
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::~FScopeMarker(&local_b8);
    uVar2 = (ulonglong)local_res10;
    pFVar4 = pFVar4 + 0x90;
  }
  ::FString::FString(&local_c8,"ArrayStates");
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_60,&local_c8);
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::~FScopeMarker(&local_60);
  return;
}

