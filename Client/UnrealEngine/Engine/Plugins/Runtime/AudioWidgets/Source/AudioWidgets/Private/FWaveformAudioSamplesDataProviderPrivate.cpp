// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 1

// GetTriggerThresholdBufferIndex @ 14d937170

int __cdecl
AudioWidgets::FWaveformAudioSamplesDataProviderPrivate::GetTriggerThresholdBufferIndex
          (EAudioOscilloscopeTriggerMode param_1,float param_2,
          TArray<float,TSizedDefaultAllocator<32>_> *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  
  iVar5 = param_3->ArrayNum;
  uVar6 = 1;
  if (1 < iVar5) {
    lVar7 = 4;
    do {
      if (param_1 == Rising) {
        uVar4 = 0;
        if ((int)(uVar6 - 1) < iVar5) {
          uVar4 = -uVar6 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          iVar5 = (*pcVar2)();
          return iVar5;
        }
        pFVar1 = (param_3->AllocatorInstance).Data + lVar7 + -4;
        if (*(float *)pFVar1 <= param_2 && param_2 != *(float *)pFVar1) {
          uVar4 = 0;
          if ((int)uVar6 < param_3->ArrayNum) {
            uVar4 = ~uVar6 >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            iVar5 = (*pcVar2)();
            return iVar5;
          }
          pFVar1 = (param_3->AllocatorInstance).Data + lVar7;
          if (param_2 < *(float *)pFVar1 || param_2 == *(float *)pFVar1) {
LAB_14d937269:
            return uVar6 - 1;
          }
        }
      }
      else if (param_1 == Falling) {
        uVar4 = 0;
        if ((int)(uVar6 - 1) < iVar5) {
          uVar4 = -uVar6 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          iVar5 = (*pcVar2)();
          return iVar5;
        }
        if (param_2 < *(float *)((param_3->AllocatorInstance).Data + lVar7 + -4)) {
          uVar4 = 0;
          if ((int)uVar6 < param_3->ArrayNum) {
            uVar4 = ~uVar6 >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            iVar5 = (*pcVar2)();
            return iVar5;
          }
          if (*(float *)((param_3->AllocatorInstance).Data + lVar7) <= param_2) goto LAB_14d937269;
        }
      }
      iVar5 = param_3->ArrayNum;
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 4;
    } while ((int)uVar6 < iVar5);
  }
  return -1;
}

