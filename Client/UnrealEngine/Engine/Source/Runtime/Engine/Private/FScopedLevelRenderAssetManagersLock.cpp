// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FScopedLevelRenderAssetManagersLock @ 148778a10

FScopedLevelRenderAssetManagersLock * __thiscall
FRenderAssetStreamingManager::FScopedLevelRenderAssetManagersLock::
FScopedLevelRenderAssetManagersLock
          (FScopedLevelRenderAssetManagersLock *this,FRenderAssetStreamingManager *param_1)

{
  code *pcVar1;
  bool bVar2;
  FScopedLevelRenderAssetManagersLock *pFVar3;
  
  this->StreamingManager = param_1;
  (this->PendingAddLevelManagers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingAddLevelManagers).ArrayNum = 0;
  (this->PendingAddLevelManagers).ArrayMax = 0;
  (this->PendingRemoveLevelManagers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingRemoveLevelManagers).ArrayNum = 0;
  (this->PendingRemoveLevelManagers).ArrayMax = 0;
  if (this->StreamingManager->LevelRenderAssetManagersLock !=
      (FScopedLevelRenderAssetManagersLock *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!StreamingManager->LevelRenderAssetManagersLock",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StreamingManagerTexture.cpp"
                       ,0x34b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FScopedLevelRenderAssetManagersLock *)(*pcVar1)();
      return pFVar3;
    }
  }
  this->StreamingManager->LevelRenderAssetManagersLock = this;
  return this;
}

// ~FScopedLevelRenderAssetManagersLock @ 14877f3a0

void __thiscall
FRenderAssetStreamingManager::FScopedLevelRenderAssetManagersLock::
~FScopedLevelRenderAssetManagersLock(FScopedLevelRenderAssetManagersLock *this)

{
  FScriptContainerElement *pFVar1;
  
  ProcessPendingLevelManagers(this->StreamingManager);
  this->StreamingManager->LevelRenderAssetManagersLock = (FScopedLevelRenderAssetManagersLock *)0x0;
  pFVar1 = (this->PendingRemoveLevelManagers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PendingAddLevelManagers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

