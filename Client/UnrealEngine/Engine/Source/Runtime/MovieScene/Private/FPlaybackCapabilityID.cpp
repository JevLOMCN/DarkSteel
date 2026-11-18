// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 1

// Register @ 1461c4f00

FPlaybackCapabilityID __cdecl UE::MovieScene::FPlaybackCapabilityID::Register(wchar_t *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FString local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UE::MovieScene::FPlaybackCapabilityIDRegistry::Get'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  ::FString::operator=(&local_18,param_1);
  if ((::Instance.Infos.AllocatorInstance.Data <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 <
      ::Instance.Infos.AllocatorInstance.Data + (longlong)::Instance.Infos.ArrayMax * 0x10)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return (FPlaybackCapabilityID)iVar3;
    }
  }
  iVar3 = ::Instance.Infos.ArrayNum;
  if (::Instance.Infos.ArrayNum == ::Instance.Infos.ArrayMax) {
    iVar3 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)&::Instance,&::Instance.Infos.ArrayMax);
  }
  ::Instance.Infos.ArrayNum = iVar3 + 1;
  pFVar4 = ::Instance.Infos.AllocatorInstance.Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar4 = 0;
  *(FScriptContainerElement **)pFVar4 = local_18.Data.AllocatorInstance.Data;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar4 + 8) = local_18.Data.ArrayNum;
  *(int *)(pFVar4 + 0xc) = local_18.Data.ArrayMax;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  if (0x1f < (ulonglong)(longlong)iVar3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(size_t)NewID < sizeof(uint32) * 8",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Evaluation\\IMovieScenePlaybackCapability.cpp"
                       ,0x1f,L"Exceeded the maximum possible amount of playback capabilities!");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return (FPlaybackCapabilityID)iVar3;
    }
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return (FPlaybackCapabilityID)iVar3;
}

