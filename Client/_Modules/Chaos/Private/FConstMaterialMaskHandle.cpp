// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 1

// Get @ 143da8d80

FChaosPhysicsMaterialMask * __thiscall
Chaos::FConstMaterialMaskHandle::Get(FConstMaterialMaskHandle *this)

{
  code *pcVar1;
  bool bVar2;
  FPhysicalMaterialManager *pFVar3;
  FChaosPhysicsMaterialMask *pFVar4;
  ForElementType<unsigned_int> FVar5;
  FChaosPhysicsMaterialMask *SRWLock;
  uint uVar6;
  TConstHandle<Chaos::FChaosPhysicsMaterialMask,24,8> local_res8 [2];
  TConstHandle<Chaos::FChaosPhysicsMaterialMask,24,8> *local_28;
  THandleArray<Chaos::FChaosPhysicsMaterialMask,24,8> *local_20;
  
  if ((this->InnerHandle).field_0x3 == '\0') {
    return (FChaosPhysicsMaterialMask *)0x0;
  }
  pFVar3 = FPhysicalMaterialManager::Get();
  local_res8[0] = this->InnerHandle;
  pFVar4 = (FChaosPhysicsMaterialMask *)0x0;
  SRWLock = pFVar4;
  if (CVars::bEnableAsyncInitBody != false) {
    SRWLock = (FChaosPhysicsMaterialMask *)&pFVar3->MaterialMasksLock;
  }
  if (SRWLock != (FChaosPhysicsMaterialMask *)0x0) {
    AcquireSRWLockShared((PSRWLOCK)SRWLock);
  }
  if (0xffffff < (uint)local_res8[0]) {
    if ((int)((uint)local_res8[0] & 0xffffff) < (pFVar3->MaterialMasks).Validity.NumBits) {
      FVar5 = (pFVar3->MaterialMasks).Validity.AllocatorInstance.SecondaryData;
      if (FVar5 == (ForElementType<unsigned_int>)0x0) {
        FVar5 = (ForElementType<unsigned_int>)&(pFVar3->MaterialMasks).Validity;
      }
      if ((*(uint *)((longlong)FVar5 + (ulonglong)(((uint)local_res8[0] & 0xffffff) >> 5) * 4) >>
           ((uint)local_res8[0] & 0x1f) & 1) != 0) {
        uVar6 = (uint)local_res8[0] & 0xffffff;
        if (((pFVar3->MaterialMasks).HandleEntries.ArrayNum <= (int)uVar6) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          pFVar4 = (FChaosPhysicsMaterialMask *)(*pcVar1)();
          return pFVar4;
        }
        if ((pFVar3->MaterialMasks).HandleEntries.AllocatorInstance.Data[(ulonglong)uVar6 * 4 + 3]
            == local_res8[0]._3_1_) {
          pFVar4 = (pFVar3->MaterialMasks).Data + ((uint)local_res8[0] & 0xffffff);
        }
      }
    }
    else {
      local_28 = local_res8;
      local_20 = &pFVar3->MaterialMasks;
      `Chaos::THandleArray<Chaos::FChaosPhysicsMaterialMask,24,8>::Get'::__l13::<lambda_1>::
      operator()(&local_28);
      pFVar4 = (FChaosPhysicsMaterialMask *)0x0;
    }
  }
  if (SRWLock != (FChaosPhysicsMaterialMask *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  }
  return pFVar4;
}

