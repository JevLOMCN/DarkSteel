// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// Sync @ 1487c7ec0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FRenderAssetDynamicInstanceStateTaskSync<FDynamicRenderAssetInstanceManager::FTasks>::Sync
          (FRenderAssetDynamicInstanceStateTaskSync<FDynamicRenderAssetInstanceManager::FTasks>
           *this)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  FReadAccessScope local_98;
  TArray<UStreamableRenderAsset_const_*,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
  local_80;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_b8;
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\DynamicTextureInstanceManager.cpp"
                       ,0x28,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FDynamicRenderAssetInstanceManager::FTasks::SyncResults((FTasks *)&this->_padding_);
  plVar3 = (longlong *)0x0;
  local_80.ArrayMax = 0xc;
  local_80.AllocatorInstance.SecondaryData = (ForElementType<UStreamableRenderAsset_const_*>)0x0;
  local_80.ArrayNum = 0;
  FRenderAssetInstanceState::FlushPendingRemoveComponents
            ((FRenderAssetInstanceState *)this->_padding_,&local_80);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnSyncDoneDelegate,
             &local_98);
  if (*(int *)&(this->OnSyncDoneDelegate).field_0x10 != 0) {
    plVar3 = *(longlong **)&(this->OnSyncDoneDelegate).field_0x8;
  }
  (**(code **)(*plVar3 + 0x60))(plVar3,&local_80);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_98);
  if (local_80.AllocatorInstance.SecondaryData !=
      (ForElementType<UStreamableRenderAsset_const_*>)0x0) {
    FMemory::Free((void *)local_80.AllocatorInstance.SecondaryData);
  }
  return;
}

// SyncAndGetState @ 1487c7fb0

FRenderAssetInstanceState * __thiscall
FRenderAssetDynamicInstanceStateTaskSync<FDynamicRenderAssetInstanceManager::FTasks>::
SyncAndGetState(FRenderAssetDynamicInstanceStateTaskSync<FDynamicRenderAssetInstanceManager::FTasks>
                *this)

{
  Sync(this);
  return (FRenderAssetInstanceState *)this->_padding_;
}

