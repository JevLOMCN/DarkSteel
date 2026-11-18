// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TimeManagement
// Functions: 3

// Destruct @ 146047cb0

void __cdecl
UE::Core::Private::TDestructorCaller<TValueOrError<FFrameTime,FExpressionError>::FEmptyType>::
Destruct(void *param_1)

{
  return;
}

// Destruct @ 146047cc0

void __cdecl UE::Core::Private::TDestructorCaller<FFrameTime>::Destruct(void *param_1)

{
  return;
}

// Destruct @ 146047cd0

void __cdecl
UE::Core::Private::TDestructorCaller<TValueOrError<FFrameTime,FExpressionError>::FWrapErrorType>::
Destruct(void *param_1)

{
  if (*(longlong **)param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146047cdb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)param_1 + 0x10))();
    return;
  }
  return;
}

