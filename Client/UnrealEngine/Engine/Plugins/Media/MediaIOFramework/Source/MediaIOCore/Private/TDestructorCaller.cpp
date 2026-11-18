// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaIOCore
// Functions: 2

// Destruct @ 14d7a36c0

void __cdecl
UE::Core::Private::TDestructorCaller<TRefCountPtr<IPooledRenderTarget>_>::Destruct(void *param_1)

{
  if (*(longlong **)param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014d7a36cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)param_1 + 0x38))();
    return;
  }
  return;
}

// Destruct @ 14d7a36e0

void __cdecl
UE::Core::Private::TDestructorCaller<TRefCountPtr<FRDGPooledBuffer>_>::Destruct(void *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)param_1;
  if (puVar3 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar3 + 1);
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (piVar1 != (int *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014d7a3707. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)(puVar3,1);
      return;
    }
  }
  return;
}

