// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PakFile
// Functions: 3

// Destruct @ 142a67e10

void __cdecl
UE::Core::Private::
TDestructorCaller<TValueOrError<UE::FMountPaksExArgs::FMountResult,UE::UnifiedError::FError>::FEmptyType>
::Destruct(void *param_1)

{
  return;
}

// Destruct @ 142a67e20

void __cdecl
UE::Core::Private::TDestructorCaller<UE::FMountPaksExArgs::FMountResult>::Destruct(void *param_1)

{
  return;
}

// Destruct @ 142a67e30

void __cdecl
UE::Core::Private::
TDestructorCaller<TValueOrError<UE::FMountPaksExArgs::FMountResult,UE::UnifiedError::FError>::FWrapErrorType>
::Destruct(void *param_1)

{
  longlong *plVar1;
  
  *(undefined8 *)param_1 = 0;
  plVar1 = *(longlong **)((longlong)param_1 + 8);
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)((longlong)param_1 + 8) = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(longlong **)((longlong)param_1 + 8) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142a67e62. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)((longlong)param_1 + 8) + 0x10))();
    return;
  }
  return;
}

