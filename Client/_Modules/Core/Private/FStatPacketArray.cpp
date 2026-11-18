// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// Empty @ 1419f3a30

void __thiscall FStatPacketArray::Empty(FStatPacketArray *this)

{
  int *piVar1;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FStatsThreadState *pFVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  
  pFVar6 = FStatsThreadState::GetLocalState();
  iVar7 = (this->Packets).ArrayNum;
  uVar8 = 0;
  if (0 < iVar7) {
    lVar9 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar8 < iVar7) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      LOCK();
      (pFVar6->NumStatMessages).Counter =
           (pFVar6->NumStatMessages).Counter -
           *(int *)(*(longlong *)((this->Packets).AllocatorInstance.Data + lVar9) + 0x28);
      UNLOCK();
      uVar5 = 0;
      if ((int)uVar8 < (this->Packets).ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pvVar2 = *(void **)((this->Packets).AllocatorInstance.Data + lVar9);
      if (pvVar2 != (void *)0x0) {
        if (*(void **)((longlong)pvVar2 + 0x30) != (void *)0x0) {
          FMemory::Free(*(void **)((longlong)pvVar2 + 0x30));
        }
        TIndirectArray<TChunkedArray<FStatMessage,65536,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
        ::
        ~TIndirectArray<TChunkedArray<FStatMessage,65536,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
                  ((TIndirectArray<TChunkedArray<FStatMessage,65536,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
                    *)((longlong)pvVar2 + 0x18));
        ::operator_delete(pvVar2,0x40);
      }
      iVar7 = (this->Packets).ArrayNum;
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 8;
    } while ((int)uVar8 < iVar7);
  }
  piVar1 = &(this->Packets).ArrayMax;
  (this->Packets).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)this,0,piVar1);
  }
  return;
}

