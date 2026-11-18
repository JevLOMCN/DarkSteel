// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Voice
// Functions: 1

// Init @ 14ec3f120

void __thiscall FVoiceDelayBuffer<short>::Init(FVoiceDelayBuffer<short> *this,int param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  undefined2 local_18 [8];
  
  uVar6 = (ulonglong)(uint)param_1;
  if (param_1 < 2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("MaxLength > 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\Voice\\Private\\VoiceDelayBuffer.h"
                       ,0x18,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_18[0] = 0;
  if (-1 < param_1) {
    piVar1 = &(this->InternalBuffer).ArrayMax;
    (this->InternalBuffer).ArrayNum = 0;
    if (*piVar1 != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,param_1,(ForAnyElementType *)this,0,piVar1);
    }
    if (0 < param_1) {
      do {
        pFVar2 = (this->InternalBuffer).AllocatorInstance.Data;
        if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
           ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)*piVar1 * 2)) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        iVar5 = (this->InternalBuffer).ArrayNum;
        if (iVar5 == *piVar1) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x202,(ForAnyElementType *)this,piVar1);
        }
        (this->InternalBuffer).ArrayNum = iVar5 + 1;
        *(undefined2 *)((this->InternalBuffer).AllocatorInstance.Data + (longlong)iVar5 * 2) =
             local_18[0];
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    this->WriteIndex = 0;
    this->ReadIndex = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum(uVar6);
}

