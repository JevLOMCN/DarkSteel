// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 7

// AddRef @ 145f08a00

void __thiscall FLightMap::AddRef(FLightMap *this)

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
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\LightMap.h"
                           ,0x5b,L"");
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

// Release @ 145f19fa0

void __thiscall FLightMap::Release(FLightMap *this)

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
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\LightMap.h"
                           ,0x60,L"");
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
                    /* WARNING: Could not recover jumptable at 0x000145f19ffc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x38))(this);
    return;
  }
  return;
}

// ~FLightMap @ 145f435b0

void __thiscall FLightMap::~FLightMap(FLightMap *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  this->_padding_ = (longlong)&___7FLightMap__6B_;
  if (this->NumRefs != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumRefs == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\LightMap.h"
                       ,0x42,L"");
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

// AddReferencedObjects @ 145f49840

void __thiscall FLightMap::AddReferencedObjects(FLightMap *this,FReferenceCollector *param_1)

{
  return;
}

// GetLightMap2D @ 145f53ad0

FLightMap2D * __thiscall FLightMap::GetLightMap2D(FLightMap *this)

{
  return (FLightMap2D *)0x0;
}

// GetLightMap2D @ 145f53ae0

FLightMap2D * __thiscall FLightMap::GetLightMap2D(FLightMap *this)

{
  return (FLightMap2D *)0x0;
}

// GetShadowInteraction @ 145f54ef0

FShadowMapInteraction * __thiscall
FLightMap::GetShadowInteraction
          (FLightMap *this,FShadowMapInteraction *__return_storage_ptr__,Type param_1)

{
  *(undefined8 *)&(__return_storage_ptr__->InvUniformPenumbraSize).field0_0x0 = 0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->InvUniformPenumbraSize).field0_0x0 + 8) = 0;
  __return_storage_ptr__->ShadowTexture = (UShadowMapTexture2D *)0x0;
  __return_storage_ptr__->VirtualTexture = (ULightMapVirtualTexture2D *)0x0;
  __return_storage_ptr__->bChannelValid[0] = false;
  __return_storage_ptr__->bChannelValid[1] = false;
  __return_storage_ptr__->bChannelValid[2] = false;
  __return_storage_ptr__->bChannelValid[3] = false;
  __return_storage_ptr__->Type = SMIT_None;
  return __return_storage_ptr__;
}

