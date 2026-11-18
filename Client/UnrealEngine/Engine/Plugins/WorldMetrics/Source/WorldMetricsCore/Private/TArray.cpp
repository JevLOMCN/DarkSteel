// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WorldMetricsCore
// Functions: 2

// RemoveAt @ 14f1387c0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<TObjectPtr<UWorldMetricInterface>,TSizedDefaultAllocator<32>_>::RemoveAt
          (TArray<TObjectPtr<UWorldMetricInterface>,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  FScriptContainerElement *_Dst;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 8;
  iVar4 = this->ArrayNum + ~param_1;
  if (iVar4 != 0) {
    memmove(_Dst,_Dst + 8,(longlong)iVar4 << 3);
  }
  iVar4 = this->ArrayNum + -1;
  this->ArrayNum = iVar4;
  if (param_2 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,&this->AllocatorInstance,iVar4,&this->ArrayMax);
  }
  return;
}

// RemoveSwap @ 14f138d50

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

int __thiscall
TArray<IWorldMetricsActorTrackerSubscriber_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
::RemoveSwap(TArray<IWorldMetricsActorTrackerSubscriber_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
             *this,IWorldMetricsActorTrackerSubscriber **param_1,EAllowShrinking param_2)

{
  ForElementType<IWorldMetricsActorTrackerSubscriber_*> FVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  ForElementType<IWorldMetricsActorTrackerSubscriber_*> FVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  
  FVar1 = (this->AllocatorInstance).SecondaryData;
  FVar7 = (ForElementType<IWorldMetricsActorTrackerSubscriber_*>)this;
  if (FVar1 != (ForElementType<IWorldMetricsActorTrackerSubscriber_*>)0x0) {
    FVar7 = FVar1;
  }
  if ((ulonglong)FVar7 <= param_1) {
    FVar7 = (ForElementType<IWorldMetricsActorTrackerSubscriber_*>)this;
    if (FVar1 != (ForElementType<IWorldMetricsActorTrackerSubscriber_*>)0x0) {
      FVar7 = FVar1;
    }
    if ((param_1 < (IWorldMetricsActorTrackerSubscriber **)
                   ((longlong)FVar7 + (longlong)this->ArrayMax * 8)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
  }
  iVar5 = this->ArrayNum;
  uVar10 = 0;
  if (0 < iVar5) {
    lVar8 = 0;
    bVar3 = false;
    iVar11 = iVar5;
    do {
      uVar9 = 0;
      if ((int)uVar10 < iVar11) {
        uVar9 = ~uVar10 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
      FVar1 = (this->AllocatorInstance).SecondaryData;
      FVar7 = (ForElementType<IWorldMetricsActorTrackerSubscriber_*>)this;
      if (FVar1 != (ForElementType<IWorldMetricsActorTrackerSubscriber_*>)0x0) {
        FVar7 = FVar1;
      }
      uVar9 = uVar10;
      if (*(IWorldMetricsActorTrackerSubscriber **)((longlong)FVar7 + lVar8) == *param_1) {
        uVar9 = uVar10 - 1;
        lVar8 = lVar8 + -8;
        bVar3 = true;
        uVar6 = 0;
        if ((int)uVar10 < this->ArrayNum) {
          uVar6 = ~uVar10 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          iVar5 = (*pcVar2)();
          return iVar5;
        }
        FVar1 = (this->AllocatorInstance).SecondaryData;
        FVar7 = (ForElementType<IWorldMetricsActorTrackerSubscriber_*>)this;
        if (FVar1 != (ForElementType<IWorldMetricsActorTrackerSubscriber_*>)0x0) {
          FVar7 = FVar1;
        }
        iVar11 = ~uVar10 + this->ArrayNum;
        if (1 < iVar11) {
          iVar11 = 1;
        }
        if (iVar11 != 0) {
          memmove((void *)((longlong)FVar7 + (longlong)(int)uVar10 * 8),
                  (void *)((longlong)FVar7 + (longlong)(this->ArrayNum - iVar11) * 8),
                  (longlong)iVar11 << 3);
        }
        this->ArrayNum = this->ArrayNum + -1;
      }
      iVar11 = this->ArrayNum;
      uVar10 = uVar9 + 1;
      lVar8 = lVar8 + 8;
    } while ((int)uVar10 < iVar11);
    if ((bVar3) && (param_2 == Default)) {
      UE::Core::Private::
      ReallocShrink<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<IWorldMetricsActorTrackerSubscriber_*>_>
                (8,8,&this->AllocatorInstance,iVar11,&this->ArrayMax);
    }
  }
  return iVar5 - this->ArrayNum;
}

