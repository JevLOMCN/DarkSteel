// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 1

// ResolveDeferredInitialization @ 141eb9160

bool __thiscall
FDeferredSubObjInitializationTracker::ResolveDeferredInitialization
          (FDeferredSubObjInitializationTracker *this,UObject *param_1,UObject *param_2)

{
  bool bVar1;
  FObjectInitializer *pFVar2;
  TPairInitializer<UObject_const_*_const_&,UObject_*_const_&> local_res10;
  UObject *local_res20;
  UObject **local_28;
  UObject ***local_20;
  
  local_res10.Value = (UObject **)param_2;
  if ((*(uint *)&param_1->field_0x8 & 0x10) == 0) {
    bVar1 = FDeferredInitializationTrackerBase::ResolveDeferredInitialization
                      ((FDeferredInitializationTrackerBase *)this,param_1,param_2);
    return bVar1;
  }
  pFVar2 = TMapBase<UObject_*,FObjectInitializer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,FObjectInitializer,0>_>
           ::Find((TMapBase<UObject_*,FObjectInitializer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,FObjectInitializer,0>_>
                   *)&this->field_0x58,param_2);
  if (pFVar2 != (FObjectInitializer *)0x0) {
    local_res20 = pFVar2->ObjectArchetype;
    if ((*(uint *)&param_2->field_0x8 & 0x10) != 0) {
      local_res20 = UObject::GetArchetypeFromRequiredInfo
                              (*(UClass **)((longlong)local_res10.Value + 0x10),
                               *(UObject **)((longlong)local_res10.Value + 0x20),
                               *(FName *)((longlong)local_res10.Value + 0x18),
                               *(EObjectFlags *)((longlong)local_res10.Value + 8));
    }
    if ((local_res20 == (UObject *)0x0) ||
       (((*(uint *)&local_res20->field_0x8 >> 10 & 1) == 0 &&
        (((*(uint *)&local_res20->field_0x8 >> 0x13 & 1) == 0 ||
         ((*(uint *)&local_res20->field_0x8 >> 0x15 & 1) != 0)))))) {
      bVar1 = FDeferredInitializationTrackerBase::ResolveDeferredInitialization
                        ((FDeferredInitializationTrackerBase *)this,param_1,
                         (UObject *)local_res10.Value);
      return bVar1;
    }
    local_28 = &local_res20;
    local_20 = &local_res10.Value;
    TSet<TTuple<UObject_const_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_const_*,UObject_*,1>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<UObject_const_*_const_&,UObject_*_const_&>_>
              ((TSet<TTuple<UObject_const_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_const_*,UObject_*,1>,FDefaultSetAllocator>
                *)&this->field_0x8,&local_res10,(bool *)&local_28);
  }
  return false;
}

