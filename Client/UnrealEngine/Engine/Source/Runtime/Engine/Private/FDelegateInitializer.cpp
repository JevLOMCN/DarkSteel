// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// FDelegateInitializer @ 147379910

FDelegateInitializer * __thiscall
UNavCollisionBase::FDelegateInitializer::FDelegateInitializer(FDelegateInitializer *this)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  FDestructionSentinel local_28;
  undefined8 local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&ConstructNewInstanceDelegate
             ,(FWriteAccessScope *)&local_28);
  local_10 = 0x1551e9410;
  puVar1 = UE::Core::Private::DelegateAllocate
                     (0x20,(FDelegateAllocation *)&ConstructNewInstanceDelegate.field_0x8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6APEAVUNavCollisionBase__AEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<UNavCollisionBase_*___cdecl(UObject_&),FDefaultDelegateUserPolicy,`UNavCollisionBase::FDelegateInitializer::FDelegateInitializer'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return this;
}

