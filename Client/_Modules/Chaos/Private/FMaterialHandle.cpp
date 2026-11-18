// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 2

// Get @ 143da8ef0

FChaosPhysicsMaterial * __thiscall Chaos::FMaterialHandle::Get(FMaterialHandle *this)

{
  THandle<Chaos::FChaosPhysicsMaterial,24,8> TVar1;
  FPhysicalMaterialManager *pFVar2;
  FChaosPhysicsMaterial *pFVar3;
  FPlatformRWLock *SRWLock;
  
  if ((this->InnerHandle).field_0x3 != '\0') {
    pFVar2 = FPhysicalMaterialManager::Get();
    TVar1 = this->InnerHandle;
    SRWLock = (FPlatformRWLock *)0x0;
    if (CVars::bEnableAsyncInitBody != false) {
      SRWLock = &pFVar2->MaterialsLock;
    }
    if (SRWLock != (FPlatformRWLock *)0x0) {
      AcquireSRWLockShared((PSRWLOCK)SRWLock);
    }
    pFVar3 = THandleArray<Chaos::FChaosPhysicsMaterial,24,8>::Get(&pFVar2->Materials,TVar1);
    if (SRWLock != (FPlatformRWLock *)0x0) {
      ReleaseSRWLockShared((PSRWLOCK)SRWLock);
    }
    return pFVar3;
  }
  return (FChaosPhysicsMaterial *)0x0;
}

// GetInternal @ 143dab930

FChaosPhysicsMaterial * __thiscall
Chaos::FMaterialHandle::GetInternal
          (FMaterialHandle *this,THandleArray<Chaos::FChaosPhysicsMaterial,24,8> *param_1)

{
  FChaosPhysicsMaterial *pFVar1;
  
  if ((param_1 != (THandleArray<Chaos::FChaosPhysicsMaterial,24,8> *)0x0) &&
     ((this->InnerHandle).field_0x3 != '\0')) {
    pFVar1 = THandleArray<Chaos::FChaosPhysicsMaterial,24,8>::Get(param_1,this->InnerHandle);
    return pFVar1;
  }
  return (FChaosPhysicsMaterial *)0x0;
}

