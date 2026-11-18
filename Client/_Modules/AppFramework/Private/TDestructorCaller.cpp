// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 2

// Destruct @ 14302fbb0

void __cdecl
UE::Core::Private::
TDestructorCaller<TDelegate<enum_EOrientation___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct
          (void *param_1)

{
  FDestructionSentinel FStack_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (param_1,(FWriteAccessScope *)&FStack_28);
  if ((*(int *)((longlong)param_1 + 0x10) != 0) &&
     (*(undefined8 **)((longlong)param_1 + 8) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)((longlong)param_1 + 8))();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)((longlong)param_1 + 8),0,0,0x10);
    *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  }
  if (FStack_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_28.Accessor,&FStack_28);
  }
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(param_1);
  return;
}

// Destruct @ 14302fbc0

void __cdecl UE::Core::Private::TDestructorCaller<enum_EOrientation>::Destruct(void *param_1)

{
  return;
}

