// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaFrameworkUtilities
// Functions: 4

// DestroyObject @ 14d7d6700

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<MediaProfilePlaybackManager::FActiveViewport,1>::DestroyObject
          (TIntrusiveReferenceController<MediaProfilePlaybackManager::FActiveViewport,1> *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((this->ObjectStorage).Pad + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014d7d6720. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// DestroyObject @ 14d7d6730

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<MediaProfilePlaybackManager::FManagedViewport,1>::DestroyObject
          (TIntrusiveReferenceController<MediaProfilePlaybackManager::FManagedViewport,1> *this)

{
  void *pvVar1;
  
  (this->ObjectStorage).Pad[0x70] = '\0';
  (this->ObjectStorage).Pad[0x71] = '\0';
  (this->ObjectStorage).Pad[0x72] = '\0';
  (this->ObjectStorage).Pad[0x73] = '\0';
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x68);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<void_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<void_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<void_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((this->ObjectStorage).Pad + 0x28));
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x20));
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x10));
  return;
}

// DestroyObject @ 14d7d6780

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<MediaProfilePlaybackManager::FMediaCaptureGameViewportClient,1>::
DestroyObject(TIntrusiveReferenceController<MediaProfilePlaybackManager::FMediaCaptureGameViewportClient,1>
              *this)

{
  FCommonViewportClient::~FCommonViewportClient((FCommonViewportClient *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14d7d6790

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FSceneViewport,1>::DestroyObject
          (TIntrusiveReferenceController<FSceneViewport,1> *this)

{
  FSceneViewport::~FSceneViewport((FSceneViewport *)&this->ObjectStorage);
  return;
}

