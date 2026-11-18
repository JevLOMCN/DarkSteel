// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 3

// Add @ 1465458f0

void __thiscall
Audio::FQuartzMetronome::FPendingMetronomeEvents::Add
          (FPendingMetronomeEvents *this,EQuartzCommandQuantization param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  int *piVar3;
  bool bVar4;
  int iVar5;
  FMetronomeEventEntry *pFVar6;
  int local_res18 [4];
  
  pFVar6 = this->CurrentMetronomeEvents + param_1;
  pFVar1 = (pFVar6->EventFrames).AllocatorInstance.Data;
  local_res18[0] = param_2;
  if ((pFVar1 <= (FScriptContainerElement *)local_res18) &&
     ((FScriptContainerElement *)local_res18 < pFVar1 + (longlong)(pFVar6->EventFrames).ArrayMax * 4
     )) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar5 = (pFVar6->EventFrames).ArrayNum;
  piVar3 = &(pFVar6->EventFrames).ArrayMax;
  if (iVar5 == *piVar3) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,(ForAnyElementType *)pFVar6,piVar3);
  }
  (pFVar6->EventFrames).ArrayNum = iVar5 + 1;
  *(int *)((pFVar6->EventFrames).AllocatorInstance.Data + (longlong)iVar5 * 4) = local_res18[0];
  return;
}

// HasPendingEvent @ 14655c520

bool __thiscall
Audio::FQuartzMetronome::FPendingMetronomeEvents::HasPendingEvent
          (FPendingMetronomeEvents *this,EQuartzCommandQuantization param_1)

{
  return this->CurrentMetronomeEvents[param_1].EventFrames.ArrayNum != 0;
}

// Reset @ 14656fb50

void __thiscall
Audio::FQuartzMetronome::FPendingMetronomeEvents::Reset(FPendingMetronomeEvents *this)

{
  FPendingMetronomeEvents *pFVar1;
  int *piVar2;
  
  if (this != this + 1) {
    piVar2 = &this->CurrentMetronomeEvents[0].EventFrames.ArrayMax;
    do {
      piVar2[-1] = 0;
      if (*piVar2 < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,(ForAnyElementType *)(piVar2 + -3),0,piVar2);
      }
      pFVar1 = (FPendingMetronomeEvents *)(piVar2 + 1);
      piVar2 = piVar2 + 4;
    } while (pFVar1 != this + 1);
  }
  return;
}

