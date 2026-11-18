// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 1

// ~FWriteAccessScope @ 14230aad0

void __thiscall
TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FWriteAccessScope::~FWriteAccessScope
          (FWriteAccessScope *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*> FVar5;
  TArray<FMRSWRecursiveAccessDetector::FDestructionSentinel_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  *pTVar6;
  uint uVar7;
  ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*> FVar8;
  
  if ((this->DestructionSentinel).bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess((this->DestructionSentinel).Accessor);
    FMRSWRecursiveAccessDetector::GetDestructionSentinelStackTls();
    FVar5 = (ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*>)
            FMRSWRecursiveAccessDetector::GetDestructionSentinelStackTls();
    pTVar6 = FMRSWRecursiveAccessDetector::GetDestructionSentinelStackTls();
    uVar7 = pTVar6->ArrayNum - 1;
    uVar3 = 0;
    if ((int)uVar7 < *(int *)((longlong)FVar5 + 0x28)) {
      uVar3 = ~uVar7 >> 0x1f;
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
    FVar8 = FVar5;
    if (*(ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*> *)
         ((longlong)FVar5 + 0x20) !=
        (ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*>)0x0) {
      FVar8 = *(ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*> *)
               ((longlong)FVar5 + 0x20);
    }
    iVar4 = *(int *)((longlong)FVar5 + 0x28) + ~uVar7;
    if (1 < iVar4) {
      iVar4 = 1;
    }
    if (iVar4 != 0) {
      memmove((void *)((longlong)FVar8 + (longlong)(int)uVar7 * 8),
              (void *)((longlong)FVar8 + (longlong)(*(int *)((longlong)FVar5 + 0x28) - iVar4) * 8),
              (longlong)iVar4 << 3);
    }
    *(int *)((longlong)FVar5 + 0x28) = *(int *)((longlong)FVar5 + 0x28) + -1;
    UE::Core::Private::
    ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*>_>
              (8,8,(ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*> *)FVar5,
               *(int *)((longlong)FVar5 + 0x28),(int *)((longlong)FVar5 + 0x2c));
  }
  return;
}

