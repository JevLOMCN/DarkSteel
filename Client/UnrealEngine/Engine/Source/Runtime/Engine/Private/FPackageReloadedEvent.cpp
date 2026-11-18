// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// GetRepointedObjectInternal @ 147a578d0

bool __thiscall
FPackageReloadedEvent::GetRepointedObjectInternal
          (FPackageReloadedEvent *this,UObject *param_1,UObject **param_2)

{
  int iVar1;
  TObjectPtr<UObject>_u_0 *pTVar2;
  uint uVar3;
  TObjectPtr<UObject_const_>_u_0 local_res10;
  
  if (param_1 != (UObject *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable(param_1);
    }
    local_res10.DebugPtr = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(param_1);
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(param_1);
      }
    }
    uVar3 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
            -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    iVar1 = TSet<TTuple<TObjectPtr<UObject>,TObjectPtr<UObject>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,TObjectPtr<UObject>,0>,FDefaultSetAllocator>
            ::FindIndexByHash<TObjectPtr<UObject_const_>_>
                      ((TSet<TTuple<TObjectPtr<UObject>,TObjectPtr<UObject>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                        *)&this->RepointedObjects,uVar3 >> 0x10 ^ uVar3,
                       (TObjectPtr<UObject_const_> *)&local_res10.ObjectPtr);
    if (iVar1 != -1) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(param_1);
      }
      local_res10.DebugPtr = param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(param_1);
      }
      pTVar2 = &TMapBase<TObjectPtr<UObject>,TObjectPtr<UObject>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,TObjectPtr<UObject>,0>_>
                ::FindChecked((TMapBase<TObjectPtr<UObject>,TObjectPtr<UObject>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,TObjectPtr<UObject>,0>_>
                               *)&this->RepointedObjects,(TObjectPtr<UObject_const_>)&local_res10)->
                field0_0x0;
      *param_2 = (UObject *)*pTVar2;
      return true;
    }
  }
  return false;
}

