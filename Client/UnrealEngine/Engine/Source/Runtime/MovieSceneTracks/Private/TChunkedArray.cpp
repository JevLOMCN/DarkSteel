// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 2

// TChunkedArray<TOptional<UMovieSceneDeferredComponentMovementSystem::FScopedMovementUpdateContainer>,8192,TSizedDefaultAllocator<32>_> @ 146805ff0

TChunkedArray<TOptional<UMovieSceneDeferredComponentMovementSystem::FScopedMovementUpdateContainer>,8192,TSizedDefaultAllocator<32>_>
* __thiscall
TChunkedArray<TOptional<UMovieSceneDeferredComponentMovementSystem::FScopedMovementUpdateContainer>,8192,TSizedDefaultAllocator<32>_>
::
TChunkedArray<TOptional<UMovieSceneDeferredComponentMovementSystem::FScopedMovementUpdateContainer>,8192,TSizedDefaultAllocator<32>_>
          (TChunkedArray<TOptional<UMovieSceneDeferredComponentMovementSystem::FScopedMovementUpdateContainer>,8192,TSizedDefaultAllocator<32>_>
           *this,int param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  void *pvVar7;
  TChunkedArray<TOptional<UMovieSceneDeferredComponentMovementSystem::FScopedMovementUpdateContainer>,8192,TSizedDefaultAllocator<32>_>
  *pTVar8;
  ulonglong uVar9;
  void *local_18 [2];
  
  this->NumElements = param_1;
  (this->Chunks).Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Chunks).Array.ArrayNum = 0;
  piVar1 = &(this->Chunks).Array.ArrayMax;
  *piVar1 = 0;
  uVar4 = (param_1 + 4) / 5;
  uVar9 = (ulonglong)uVar4;
  if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
  }
  if ((uVar4 != 0) &&
     (UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar4,(ForAnyElementType *)this,0,piVar1), 0 < (int)uVar4)) {
    do {
      pvVar7 = ::operator_new(0x1ea0);
      local_18[0] = (void *)0x0;
      if (pvVar7 != (void *)0x0) {
        *(undefined1 *)((longlong)pvVar7 + 0x610) = 0;
        *(undefined1 *)((longlong)pvVar7 + 0xc30) = 0;
        *(undefined1 *)((longlong)pvVar7 + 0x1250) = 0;
        *(undefined1 *)((longlong)pvVar7 + 0x1870) = 0;
        *(undefined1 *)((longlong)pvVar7 + 0x1e90) = 0;
        local_18[0] = pvVar7;
      }
      pFVar2 = (this->Chunks).Array.AllocatorInstance.Data;
      if (((pFVar2 <= (FScriptContainerElement *)local_18) &&
          ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)*piVar1 * 8)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TChunkedArray<TOptional<UMovieSceneDeferredComponentMovementSystem::FScopedMovementUpdateContainer>,8192,TSizedDefaultAllocator<32>_>
                  *)(*pcVar3)();
        return pTVar8;
      }
      iVar6 = (this->Chunks).Array.ArrayNum;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)this,piVar1);
      }
      (this->Chunks).Array.ArrayNum = iVar6 + 1;
      *(void **)((this->Chunks).Array.AllocatorInstance.Data + (longlong)iVar6 * 8) = local_18[0];
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  return this;
}

// operator[] @ 1468103d0

TOptional<UMovieSceneDeferredComponentMovementSystem::FScopedMovementUpdateContainer> * __thiscall
TChunkedArray<TOptional<UMovieSceneDeferredComponentMovementSystem::FScopedMovementUpdateContainer>,8192,TSizedDefaultAllocator<32>_>
::operator[](TChunkedArray<TOptional<UMovieSceneDeferredComponentMovementSystem::FScopedMovementUpdateContainer>,8192,TSizedDefaultAllocator<32>_>
             *this,int param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  TOptional<UMovieSceneDeferredComponentMovementSystem::FScopedMovementUpdateContainer> *pTVar5;
  
  uVar2 = param_1 / 5;
  uVar4 = 0;
  if ((int)uVar2 < (this->Chunks).Array.ArrayNum) {
    uVar4 = ~uVar2 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TOptional<UMovieSceneDeferredComponentMovementSystem::FScopedMovementUpdateContainer>
                *)(*pcVar1)();
      return pTVar5;
    }
  }
  return (TOptional<UMovieSceneDeferredComponentMovementSystem::FScopedMovementUpdateContainer> *)
         ((ulonglong)(uint)(param_1 % 5) * 0x620 +
         *(longlong *)((this->Chunks).Array.AllocatorInstance.Data + (longlong)(int)uVar2 * 8));
}

