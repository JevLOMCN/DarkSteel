// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 2

// Get @ 1461afec0

FPlaybackCapabilityIDRegistry * __cdecl UE::MovieScene::FPlaybackCapabilityIDRegistry::Get(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UE::MovieScene::FPlaybackCapabilityIDRegistry::Get'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &::Instance;
}

// RegisterNewID @ 1461c50c0

FPlaybackCapabilityID __thiscall
UE::MovieScene::FPlaybackCapabilityIDRegistry::RegisterNewID
          (FPlaybackCapabilityIDRegistry *this,wchar_t *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  wchar_t *in_R8;
  FScriptContainerElement *pFVar5;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  ::FString::operator=(&local_18,in_R8);
  pFVar5 = (this->Infos).AllocatorInstance.Data;
  if ((pFVar5 <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 < pFVar5 + (longlong)(this->Infos).ArrayMax * 0x10)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return (FPlaybackCapabilityID)iVar4;
    }
  }
  iVar4 = (this->Infos).ArrayNum;
  piVar1 = &(this->Infos).ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)this,piVar1);
  }
  (this->Infos).ArrayNum = iVar4 + 1;
  pFVar5 = (this->Infos).AllocatorInstance.Data + (longlong)iVar4 * 0x10;
  *(undefined8 *)pFVar5 = 0;
  *(FScriptContainerElement **)pFVar5 = local_18.Data.AllocatorInstance.Data;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar5 + 8) = local_18.Data.ArrayNum;
  *(int *)(pFVar5 + 0xc) = local_18.Data.ArrayMax;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  if (0x1f < (ulonglong)(longlong)iVar4) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(size_t)NewID < sizeof(uint32) * 8",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Evaluation\\IMovieScenePlaybackCapability.cpp"
                       ,0x1f,L"Exceeded the maximum possible amount of playback capabilities!");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return (FPlaybackCapabilityID)iVar4;
    }
  }
  *(int *)param_1 = iVar4;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return (FPlaybackCapabilityID)(int)param_1;
}

