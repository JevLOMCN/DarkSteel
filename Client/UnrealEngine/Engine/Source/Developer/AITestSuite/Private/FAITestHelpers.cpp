// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AITestSuite
// Functions: 3

// FramesCounter @ 147052280

ulong64 __cdecl FAITestHelpers::FramesCounter(void)

{
  return UpdatesCounter;
}

// GetWorld @ 1470535d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorld * __cdecl FAITestHelpers::GetWorld(void)

{
  code *pcVar1;
  UEngine *pUVar2;
  bool bVar3;
  UWorld *pUVar4;
  
  pUVar2 = GEngine;
  if ((GEngine->WorldList).Array.ArrayNum < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pUVar4 = (UWorld *)(*pcVar1)();
      return pUVar4;
    }
  }
  return *(UWorld **)(*(longlong *)(pUVar2->WorldList).Array.AllocatorInstance.Data + 0x2c0);
}

// UpdateFrameCounter @ 14705a650

void __cdecl FAITestHelpers::UpdateFrameCounter(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      PreviousFramesCounter = GFrameCounter;
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (PreviousFramesCounter != GFrameCounter) {
    UpdatesCounter = UpdatesCounter + 1;
    PreviousFramesCounter = GFrameCounter;
  }
  return;
}

