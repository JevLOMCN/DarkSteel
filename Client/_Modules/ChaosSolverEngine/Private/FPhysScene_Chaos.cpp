// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosSolverEngine
// Functions: 1

// GetOwnedPhysicsProxies @ 146313040

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TArray<IPhysicsProxyBase_*,TSizedDefaultAllocator<32>_> * __thiscall
FPhysScene_Chaos::GetOwnedPhysicsProxies(FPhysScene_Chaos *this,UPrimitiveComponent *param_1)

{
  TArray<IPhysicsProxyBase_*,TSizedDefaultAllocator<32>_> *pTVar1;
  FPlatformRWLock *SRWLock;
  
  SRWLock = (FPlatformRWLock *)0x0;
  if (Chaos::CVars::bEnableAsyncInitBody) {
    SRWLock = &this->PhysicsProxyComponentMapsLock;
  }
  if (SRWLock != (FPlatformRWLock *)0x0) {
    AcquireSRWLockShared((PSRWLOCK)SRWLock);
    pTVar1 = TMapBase<UPrimitiveComponent_*,TArray<IPhysicsProxyBase_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_*,TArray<IPhysicsProxyBase_*,TSizedDefaultAllocator<32>_>,0>_>
             ::Find((TMapBase<UPrimitiveComponent_*,TArray<IPhysicsProxyBase_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_*,TArray<IPhysicsProxyBase_*,TSizedDefaultAllocator<32>_>,0>_>
                     *)&this->ComponentToPhysicsProxyMap,param_1);
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
    return pTVar1;
  }
  pTVar1 = TMapBase<UPrimitiveComponent_*,TArray<IPhysicsProxyBase_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_*,TArray<IPhysicsProxyBase_*,TSizedDefaultAllocator<32>_>,0>_>
           ::Find((TMapBase<UPrimitiveComponent_*,TArray<IPhysicsProxyBase_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_*,TArray<IPhysicsProxyBase_*,TSizedDefaultAllocator<32>_>,0>_>
                   *)&this->ComponentToPhysicsProxyMap,param_1);
  return pTVar1;
}

