// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 1

// Get @ 143da8f80

FChaosPhysicsMaterialMask * __thiscall Chaos::FMaterialMaskHandle::Get(FMaterialMaskHandle *this)

{
  THandle<Chaos::FChaosPhysicsMaterialMask,24,8> TVar1;
  code *pcVar2;
  bool bVar3;
  FPhysicalMaterialManager *pFVar4;
  FChaosPhysicsMaterialMask *pFVar5;
  FChaosPhysicsMaterialMask *SRWLock;
  uint uVar6;
  ForElementType<unsigned_int> FVar7;
  
  if ((this->InnerHandle).field_0x3 == '\0') {
    return (FChaosPhysicsMaterialMask *)0x0;
  }
  pFVar4 = FPhysicalMaterialManager::Get();
  TVar1 = this->InnerHandle;
  pFVar5 = (FChaosPhysicsMaterialMask *)0x0;
  SRWLock = pFVar5;
  if (CVars::bEnableAsyncInitBody != false) {
    SRWLock = (FChaosPhysicsMaterialMask *)&pFVar4->MaterialMasksLock;
  }
  if (SRWLock != (FChaosPhysicsMaterialMask *)0x0) {
    AcquireSRWLockShared((PSRWLOCK)SRWLock);
  }
  if (0xffffff < (uint)TVar1) {
    uVar6 = (uint)TVar1 & 0xffffff;
    if ((int)uVar6 < (pFVar4->MaterialMasks).Validity.NumBits) {
      if ((pFVar4->MaterialMasks).Validity.NumBits <= (int)uVar6) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5c6,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pFVar5 = (FChaosPhysicsMaterialMask *)(*pcVar2)();
          return pFVar5;
        }
      }
      FVar7 = (pFVar4->MaterialMasks).Validity.AllocatorInstance.SecondaryData;
      if (FVar7 == (ForElementType<unsigned_int>)0x0) {
        FVar7 = (ForElementType<unsigned_int>)&(pFVar4->MaterialMasks).Validity;
      }
      if ((*(uint *)((longlong)FVar7 + (ulonglong)(uVar6 >> 5) * 4) >> ((uint)TVar1 & 0x1f) & 1) !=
          0) {
        if ((pFVar4->MaterialMasks).HandleEntries.ArrayNum <= (int)uVar6) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            pFVar5 = (FChaosPhysicsMaterialMask *)(*pcVar2)();
            return pFVar5;
          }
        }
        pFVar5 = (FChaosPhysicsMaterialMask *)0x0;
        if ((pFVar4->MaterialMasks).HandleEntries.AllocatorInstance.Data[(ulonglong)uVar6 * 4 + 3]
            == TVar1._3_1_) {
          pFVar5 = (pFVar4->MaterialMasks).Data + ((uint)TVar1 & 0xffffff);
        }
      }
    }
  }
  if (SRWLock != (FChaosPhysicsMaterialMask *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  }
  return pFVar5;
}

