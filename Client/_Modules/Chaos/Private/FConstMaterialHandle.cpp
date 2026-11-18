// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 1

// Get @ 143da8c10

FChaosPhysicsMaterial * __thiscall Chaos::FConstMaterialHandle::Get(FConstMaterialHandle *this)

{
  code *pcVar1;
  bool bVar2;
  FPhysicalMaterialManager *pFVar3;
  FChaosPhysicsMaterial *pFVar4;
  ForElementType<unsigned_int> FVar5;
  FChaosPhysicsMaterial *SRWLock;
  uint uVar6;
  TConstHandle<Chaos::FChaosPhysicsMaterial,24,8> local_res8 [2];
  TConstHandle<Chaos::FChaosPhysicsMaterial,24,8> *local_28;
  THandleArray<Chaos::FChaosPhysicsMaterial,24,8> *local_20;
  
  if ((this->InnerHandle).field_0x3 == '\0') {
    return (FChaosPhysicsMaterial *)0x0;
  }
  pFVar3 = FPhysicalMaterialManager::Get();
  local_res8[0] = this->InnerHandle;
  pFVar4 = (FChaosPhysicsMaterial *)0x0;
  SRWLock = pFVar4;
  if (CVars::bEnableAsyncInitBody != false) {
    SRWLock = (FChaosPhysicsMaterial *)&pFVar3->MaterialsLock;
  }
  if (SRWLock != (FChaosPhysicsMaterial *)0x0) {
    AcquireSRWLockShared((PSRWLOCK)SRWLock);
  }
  if (0xffffff < (uint)local_res8[0]) {
    if ((int)((uint)local_res8[0] & 0xffffff) < (pFVar3->Materials).Validity.NumBits) {
      FVar5 = (pFVar3->Materials).Validity.AllocatorInstance.SecondaryData;
      if (FVar5 == (ForElementType<unsigned_int>)0x0) {
        FVar5 = (ForElementType<unsigned_int>)&(pFVar3->Materials).Validity;
      }
      if ((*(uint *)((longlong)FVar5 + (ulonglong)(((uint)local_res8[0] & 0xffffff) >> 5) * 4) >>
           ((uint)local_res8[0] & 0x1f) & 1) != 0) {
        uVar6 = (uint)local_res8[0] & 0xffffff;
        if (((pFVar3->Materials).HandleEntries.ArrayNum <= (int)uVar6) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          pFVar4 = (FChaosPhysicsMaterial *)(*pcVar1)();
          return pFVar4;
        }
        if ((pFVar3->Materials).HandleEntries.AllocatorInstance.Data[(ulonglong)uVar6 * 4 + 3] ==
            local_res8[0]._3_1_) {
          pFVar4 = (pFVar3->Materials).Data + ((uint)local_res8[0] & 0xffffff);
        }
      }
    }
    else {
      local_28 = local_res8;
      local_20 = &pFVar3->Materials;
      `Chaos::THandleArray<Chaos::FChaosPhysicsMaterial,24,8>::Get'::__l13::<lambda_1>::operator()
                (&local_28);
      pFVar4 = (FChaosPhysicsMaterial *)0x0;
    }
  }
  if (SRWLock != (FChaosPhysicsMaterial *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  }
  return pFVar4;
}

