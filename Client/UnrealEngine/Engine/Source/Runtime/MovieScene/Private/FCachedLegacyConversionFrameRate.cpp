// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 1

// OnChanged @ 146225960

void __thiscall FCachedLegacyConversionFrameRate::OnChanged(FCachedLegacyConversionFrameRate *this)

{
  FScriptContainerElement *_Src;
  code *pcVar1;
  TConsoleVariableData<FString> *pTVar2;
  bool bVar3;
  ForAnyElementType FVar4;
  longlong lVar5;
  ForAnyElementType local_18;
  int local_10;
  int local_c;
  
  pTVar2 = CVarLegacyConversionFrameRate.Ref;
  bVar3 = IsInParallelGameThread();
  if (!bVar3) {
    bVar3 = IsInGameThread();
    if (!bVar3) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10 = pTVar2->ShadowedValue[0].Data.ArrayNum;
  lVar5 = (longlong)local_10;
  _Src = pTVar2->ShadowedValue[0].Data.AllocatorInstance.Data;
  if (local_10 == 0) {
    local_c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_10,0,&local_18,local_10,&local_c);
    memcpy(local_18.Data,_Src,lVar5 * 2);
  }
  FVar4.Data = (FScriptContainerElement *)L"";
  if (local_10 != 0) {
    FVar4.Data = local_18.Data;
  }
  TryParseString(&this->FrameRate,(wchar_t *)FVar4.Data);
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return;
}

