// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 2

// ExecuteTask @ 1493e0500

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FNiagaraSystemSimulation::SimCacheTick_GameThread'::__l17::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  `FNiagaraSystemSimulation::SimCacheTick_GameThread'::__l17::<lambda_1>::operator()
            ((void *)((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 1493e0520

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FNiagaraSystemSimulation::SimCacheTick_GameThread'::__l17::<lambda_2>,void,void>
::ExecuteTask(void *this)

{
  void *pvVar1;
  
  `FNiagaraSystemSimulation::SimCacheTick_GameThread'::__l17::<lambda_2>::operator()
            ((void *)((longlong)this + 0xd8));
  pvVar1 = *(void **)((longlong)this + 0xe0);
  if (pvVar1 != (void *)0x0) {
    if (*(void **)((longlong)pvVar1 + 0x20) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)pvVar1 + 0x20));
    }
    ::operator_delete(pvVar1,0x38);
    return;
  }
  return;
}

