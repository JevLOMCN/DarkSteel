// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGenerator
// Functions: 1

// ExecuteTask @ 14b2b0270

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`Metasound::FOperatorPool::ExecuteTaskAsync'::__l2::<lambda_1>,void,void>::
ExecuteTask(void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  `Metasound::FOperatorPool::ExecuteTaskAsync'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0xe0));
  if (*(longlong *)((longlong)this + 0x100) != 0) {
    plVar3 = (longlong *)((longlong)this + 0x110);
    if (*(longlong **)((longlong)this + 0x128) != (longlong *)0x0) {
      plVar3 = *(longlong **)((longlong)this + 0x128);
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  plVar3 = *(longlong **)((longlong)this + 0xe8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014b2b02cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

