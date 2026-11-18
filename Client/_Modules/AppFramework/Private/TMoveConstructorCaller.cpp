// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 2

// Construct @ 14301fcd0

void __cdecl
UE::Core::Private::
TMoveConstructorCaller<TDelegate<enum_EOrientation___cdecl(void),FDefaultDelegateUserPolicy>_>::
Construct(void *param_1,void *param_2)

{
  FDestructionSentinel FStack_28;
  
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (param_2,(FWriteAccessScope *)&FStack_28);
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
  }
  *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_2 + 8);
  *(undefined8 *)((longlong)param_2 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = *(undefined4 *)((longlong)param_2 + 0x10);
  *(undefined4 *)((longlong)param_2 + 0x10) = 0;
  if (FStack_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_28.Accessor,&FStack_28);
  }
  return;
}

// Construct @ 14301fce0

void __cdecl
UE::Core::Private::TMoveConstructorCaller<enum_EOrientation>::Construct(void *param_1,void *param_2)

{
  *(undefined4 *)param_1 = *(undefined4 *)param_2;
  return;
}

