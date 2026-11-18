// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NetCore
// Functions: 3

// StartupModule @ 1441c7d80

void __thiscall FNetCoreModule::StartupModule(FNetCoreModule *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (UE::Net::FNetHandleManager::Instance != (FPimpl *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Instance == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Private\\Net\\Core\\NetHandle\\NetHandleManager.cpp"
                       ,0x82,L"%s");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  UE::Net::FNetHandleManager::Instance = ::operator_new(0xa0);
  if (UE::Net::FNetHandleManager::Instance != (FPimpl *)0x0) {
    *(undefined8 *)&(UE::Net::FNetHandleManager::Instance->ObjectToNetHandle).field_0x10 = 0;
    *(undefined8 *)&(UE::Net::FNetHandleManager::Instance->ObjectToNetHandle).field_0x18 = 0;
    *(undefined8 *)&(UE::Net::FNetHandleManager::Instance->ObjectToNetHandle).field_0x38 = 0;
    *(undefined8 *)&(UE::Net::FNetHandleManager::Instance->ObjectToNetHandle).field_0x48 = 0;
    *(undefined8 *)&(UE::Net::FNetHandleManager::Instance->NetHandleToObject).field_0x10 = 0;
    *(undefined8 *)&(UE::Net::FNetHandleManager::Instance->NetHandleToObject).field_0x18 = 0;
    *(undefined8 *)&(UE::Net::FNetHandleManager::Instance->NetHandleToObject).field_0x38 = 0;
    *(undefined8 *)&(UE::Net::FNetHandleManager::Instance->NetHandleToObject).field_0x48 = 0;
    *(undefined8 *)&UE::Net::FNetHandleManager::Instance->ObjectToNetHandle = 0;
    *(undefined8 *)&(UE::Net::FNetHandleManager::Instance->ObjectToNetHandle).field_0x8 = 0;
    *(undefined8 *)&(UE::Net::FNetHandleManager::Instance->ObjectToNetHandle).field_0x20 = 0;
    *(undefined4 *)&(UE::Net::FNetHandleManager::Instance->ObjectToNetHandle).field_0x28 = 0;
    *(undefined4 *)&(UE::Net::FNetHandleManager::Instance->ObjectToNetHandle).field_0x2c = 0x80;
    *(undefined4 *)&(UE::Net::FNetHandleManager::Instance->ObjectToNetHandle).field_0x30 =
         0xffffffff;
    *(undefined4 *)&(UE::Net::FNetHandleManager::Instance->ObjectToNetHandle).field_0x34 = 0;
    *(undefined8 *)&(UE::Net::FNetHandleManager::Instance->ObjectToNetHandle).field_0x40 = 0;
    *(undefined8 *)&UE::Net::FNetHandleManager::Instance->NetHandleToObject = 0;
    *(undefined8 *)&(UE::Net::FNetHandleManager::Instance->NetHandleToObject).field_0x8 = 0;
    *(undefined8 *)&(UE::Net::FNetHandleManager::Instance->NetHandleToObject).field_0x20 = 0;
    *(undefined4 *)&(UE::Net::FNetHandleManager::Instance->NetHandleToObject).field_0x28 = 0;
    *(undefined4 *)&(UE::Net::FNetHandleManager::Instance->NetHandleToObject).field_0x2c = 0x80;
    *(undefined4 *)&(UE::Net::FNetHandleManager::Instance->NetHandleToObject).field_0x30 =
         0xffffffff;
    *(undefined4 *)&(UE::Net::FNetHandleManager::Instance->NetHandleToObject).field_0x34 = 0;
    *(undefined8 *)&(UE::Net::FNetHandleManager::Instance->NetHandleToObject).field_0x40 = 0;
    UE::Net::FGlobalDirtyNetObjectTracker::Init();
    return;
  }
  UE::Net::FNetHandleManager::Instance = (FPimpl *)0x0;
  UE::Net::FGlobalDirtyNetObjectTracker::Init();
  return;
}

// ShutdownModule @ 1441c7e70

void __thiscall FNetCoreModule::ShutdownModule(FNetCoreModule *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  ForElementType<FSetElementId> FVar3;
  FPimpl *this_00;
  FPimpl *this_01;
  
  this_01 = UE::Net::FGlobalDirtyNetObjectTracker::Instance;
  if (UE::Net::FGlobalDirtyNetObjectTracker::Instance != (FPimpl *)0x0) {
    DestructItems<UE::Net::FGlobalDirtyNetObjectTracker::FPimpl::FPollerStatus,int>
              ((FPollerStatus *)
               (UE::Net::FGlobalDirtyNetObjectTracker::Instance->PollerStatuses).AllocatorInstance.
               Data,(UE::Net::FGlobalDirtyNetObjectTracker::Instance->PollerStatuses).ArrayNum);
    pFVar1 = (this_01->PollerStatuses).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (this_01->Pollers).Storage.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (this_01->AssignedHandleIndices).Storage.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    *(undefined4 *)&(this_01->DirtyObjectsAndProperties).field_0x48 = 0;
    pvVar2 = *(void **)&(this_01->DirtyObjectsAndProperties).field_0x40;
    if (pvVar2 != (void *)0x0) {
      FMemory::Free(pvVar2);
    }
    TSparseArray<TSparseSetElement<TTuple<UE::Net::FNetHandle,TArray<unsigned_int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<UE::Net::FNetHandle,TArray<unsigned_int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<UE::Net::FNetHandle,TArray<unsigned_int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&this_01->DirtyObjectsAndProperties);
    (this_01->DirtyObjects).HashSize = 0;
    FVar3 = (this_01->DirtyObjects).Hash.SecondaryData;
    if (FVar3 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)FVar3);
    }
    TSparseArray<TSparseSetElement<UE::Net::FNetHandle>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<UE::Net::FNetHandle>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<UE::Net::FNetHandle>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)this_01);
    ::operator_delete(this_01,0xe8);
  }
  this_00 = UE::Net::FNetHandleManager::Instance;
  UE::Net::FGlobalDirtyNetObjectTracker::Instance = (FPimpl *)0x0;
  if (UE::Net::FNetHandleManager::Instance != (FPimpl *)0x0) {
    *(undefined4 *)&(UE::Net::FNetHandleManager::Instance->NetHandleToObject).field_0x48 = 0;
    pvVar2 = *(void **)&(this_00->NetHandleToObject).field_0x40;
    if (pvVar2 != (void *)0x0) {
      FMemory::Free(pvVar2);
    }
    TSparseArray<TSparseSetElement<TTuple<UE::Net::FNetHandle,UObject_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<UE::Net::FNetHandle,UObject_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<UE::Net::FNetHandle,UObject_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&this_00->NetHandleToObject);
    *(undefined4 *)&(this_00->ObjectToNetHandle).field_0x48 = 0;
    pvVar2 = *(void **)&(this_00->ObjectToNetHandle).field_0x40;
    if (pvVar2 != (void *)0x0) {
      FMemory::Free(pvVar2);
    }
    TSparseArray<TSparseSetElement<TTuple<UObject_const_*,UE::Net::FNetHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<UObject_const_*,UE::Net::FNetHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<UObject_const_*,UE::Net::FNetHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)this_00);
    ::operator_delete(this_00,0xa0);
  }
  UE::Net::FNetHandleManager::Instance = (FPimpl *)0x0;
  return;
}

// SupportsDynamicReloading @ 1441c7fa0

bool __thiscall FNetCoreModule::SupportsDynamicReloading(FNetCoreModule *this)

{
  return false;
}

