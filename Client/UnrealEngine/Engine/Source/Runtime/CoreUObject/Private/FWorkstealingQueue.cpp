// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 2

// ~FWorkstealingQueue @ 142013b90

void __thiscall UE::GC::FWorkstealingQueue::~FWorkstealingQueue(FWorkstealingQueue *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->LocalBlocks).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// Pop @ 1420677c0

FWorkBlock * __thiscall UE::GC::FWorkstealingQueue::Pop(FWorkstealingQueue *this)

{
  int *piVar1;
  TArray<UE::GC::FWorkBlock_*,TSizedDefaultAllocator<32>_> *pTVar2;
  AlignedAtomicUint64 *pAVar3;
  FScriptContainerElement *_Dst;
  code *pcVar4;
  int iVar5;
  FWorkBlock *pFVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  bool bVar11;
  
  piVar1 = &(this->LocalBlocks).ArrayNum;
  iVar9 = *piVar1;
  if (iVar9 == 0) {
    uVar7 = (this->SharedBlocks).Head & 0xf;
    pFVar6 = *(FWorkBlock **)((this->SharedBlocks).Slots + uVar7);
    if ((FWorkBlock *)&DAT_00000001 < pFVar6) {
      pAVar3 = (this->SharedBlocks).Slots + uVar7;
      LOCK();
      bVar11 = pFVar6 == *(FWorkBlock **)pAVar3;
      if (bVar11) {
        *(undefined8 *)pAVar3 = 0;
      }
      UNLOCK();
      if (bVar11) {
        (this->SharedBlocks).Head = (this->SharedBlocks).Head - 1;
        return pFVar6;
      }
    }
    return (FWorkBlock *)0x0;
  }
  uVar8 = iVar9 - 1;
  uVar7 = 0;
  if ((int)uVar8 < iVar9) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar4 = (code *)swi(3);
    pFVar6 = (FWorkBlock *)(*pcVar4)();
    return pFVar6;
  }
  lVar10 = (longlong)(int)uVar8;
  pTVar2 = &this->LocalBlocks;
  pFVar6 = *(FWorkBlock **)((pTVar2->AllocatorInstance).Data + lVar10 * 8);
  if (0 < (int)uVar8) {
    iVar9 = iVar9 + -2;
    do {
      uVar7 = 0;
      if (iVar9 < *piVar1) {
        uVar7 = -uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar4 = (code *)swi(3);
        pFVar6 = (FWorkBlock *)(*pcVar4)();
        return pFVar6;
      }
      uVar7 = (this->SharedBlocks).Head + 1 & 0xf;
      if (*(longlong *)((this->SharedBlocks).Slots + uVar7) != 0) break;
      uVar8 = uVar8 - 1;
      *(undefined8 *)((this->SharedBlocks).Slots + uVar7) =
           *(undefined8 *)((pTVar2->AllocatorInstance).Data + lVar10 * 8 + -8);
      iVar9 = iVar9 + -1;
      (this->SharedBlocks).Head = (this->SharedBlocks).Head + 1;
      lVar10 = lVar10 + -1;
    } while (0 < lVar10);
  }
  iVar9 = (this->LocalBlocks).ArrayNum;
  if (iVar9 < (int)uVar8) {
    iVar5 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,uVar8 - iVar9,&pTVar2->AllocatorInstance,piVar1,
                       &(this->LocalBlocks).ArrayMax);
    memset((pTVar2->AllocatorInstance).Data + (longlong)iVar5 * 8,0,
           (longlong)(int)(uVar8 - iVar9) << 3);
  }
  else {
    if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
    }
    if ((int)uVar8 < iVar9) {
      uVar7 = iVar9 - uVar8;
      if (((int)(uVar7 | uVar8) < 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             ), bVar11)) {
        pcVar4 = (code *)swi(3);
        pFVar6 = (FWorkBlock *)(*pcVar4)();
        return pFVar6;
      }
      if (uVar7 != 0) {
        _Dst = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar8 * 8;
        iVar9 = ((this->LocalBlocks).ArrayNum - uVar7) - uVar8;
        if (iVar9 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar7 * 8,(longlong)iVar9 << 3);
        }
        piVar1 = &(this->LocalBlocks).ArrayNum;
        *piVar1 = *piVar1 - uVar7;
      }
    }
  }
  return pFVar6;
}

