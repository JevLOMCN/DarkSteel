// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImageWriteQueue
// Functions: 3

// Destruct @ 1446ec930

void __cdecl
UE::Core::Private::TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandList_&)>_>::Destruct
          (void *param_1)

{
  longlong *plVar1;
  
  if (*(longlong *)param_1 != 0) {
    plVar1 = (longlong *)((longlong)param_1 + 0x10);
    if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)param_1 + 0x28);
    }
                    /* WARNING: Could not recover jumptable at 0x0001446ec948. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// Destruct @ 1446ec960

void __cdecl
UE::Core::Private::TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::
Destruct(void *param_1)

{
  longlong *plVar1;
  
  if (*(longlong *)param_1 != 0) {
    plVar1 = (longlong *)((longlong)param_1 + 0x10);
    if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)param_1 + 0x28);
    }
                    /* WARNING: Could not recover jumptable at 0x0001446ec978. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// Destruct @ 1446ec990

void __cdecl
UE::Core::Private::TDestructorCaller<TUniqueFunction<void___cdecl(void)>_>::Destruct(void *param_1)

{
  longlong *plVar1;
  
  if (*(longlong *)param_1 != 0) {
    plVar1 = (longlong *)((longlong)param_1 + 0x10);
    if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)param_1 + 0x28);
    }
                    /* WARNING: Could not recover jumptable at 0x0001446ec9a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

