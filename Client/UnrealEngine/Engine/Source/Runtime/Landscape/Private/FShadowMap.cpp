// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 6

// ~FShadowMap @ 145f43780

void __thiscall FShadowMap::~FShadowMap(FShadowMap *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  this->_padding_ = (longlong)&___7FShadowMap__6B_;
  if (this->NumRefs != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumRefs == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\ShadowMap.h"
                       ,0xfb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (this->LightGuids).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FDeferredCleanupInterface__6B_;
  return;
}

// AddRef @ 145f497e0

void __thiscall FShadowMap::AddRef(FShadowMap *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = (*IsInAsyncLoadingThread)();
    if (!bVar2) {
      bVar2 = IsInParallelLoadingThread();
      if (!bVar2) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInGameThread() || IsInAsyncLoadingThread() || IsInParallelLoadingThread()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\ShadowMap.h"
                           ,0x113,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
    }
  }
  this->NumRefs = this->NumRefs + 1;
  return;
}

// AddReferencedObjects @ 145f49850

void __thiscall FShadowMap::AddReferencedObjects(FShadowMap *this,FReferenceCollector *param_1)

{
  return;
}

// GetShadowMap2D @ 145f54f40

FShadowMap2D * __thiscall FShadowMap::GetShadowMap2D(FShadowMap *this)

{
  return (FShadowMap2D *)0x0;
}

// GetShadowMap2D @ 145f54f50

FShadowMap2D * __thiscall FShadowMap::GetShadowMap2D(FShadowMap *this)

{
  return (FShadowMap2D *)0x0;
}

// Release @ 145f5bb40

void __thiscall FShadowMap::Release(FShadowMap *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  
  bVar3 = IsInGameThread();
  if (!bVar3) {
    bVar3 = (*IsInAsyncLoadingThread)();
    if (!bVar3) {
      bVar3 = IsInParallelLoadingThread();
      if (!bVar3) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInGameThread() || IsInAsyncLoadingThread() || IsInParallelLoadingThread()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\ShadowMap.h"
                           ,0x118,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
    }
  }
  piVar1 = &this->NumRefs;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145f5bb9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x30))(this);
    return;
  }
  return;
}

