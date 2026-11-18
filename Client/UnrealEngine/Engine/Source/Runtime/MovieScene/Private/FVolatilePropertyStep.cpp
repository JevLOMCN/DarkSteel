// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 1

// ResolveAddress @ 1462b9480

/* WARNING: Removing unreachable block (ram,0x0001462b9555) */
/* WARNING: Removing unreachable block (ram,0x0001462b957a) */
/* WARNING: Removing unreachable block (ram,0x0001462b94c9) */
/* WARNING: Removing unreachable block (ram,0x0001462b94ee) */
/* WARNING: Removing unreachable block (ram,0x0001462b95b1) */
/* WARNING: Removing unreachable block (ram,0x0001462b95d6) */

void * __thiscall
UE::MovieScene::FVolatilePropertyStep::ResolveAddress
          (FVolatilePropertyStep *this,void *param_1,bool *param_2)

{
  uchar uVar1;
  UObject *pUVar2;
  code *pcVar3;
  bool bVar4;
  UObject *pUVar5;
  void *pvVar6;
  
  uVar1 = (this->Data).TypeIndex;
  if (uVar1 == '\0') {
    return (void *)((ulonglong)*(uint *)&this->Data + (longlong)param_1);
  }
  if (uVar1 != '\x01') {
    if (uVar1 != '\x02') {
      return (void *)0x0;
    }
    pUVar2 = *(UObject **)param_1;
    pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
    if (pUVar5 == (UObject *)0x0) {
      bVar4 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7738840367931326826>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\TrackInstancePropertyBindings.cpp"
                         ,0x16a,"CheckStructType");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pvVar6 = (void *)(*pcVar3)();
        return pvVar6;
      }
    }
    else if (pUVar5 == pUVar2) {
      return *(void **)((longlong)param_1 + 8);
    }
    *param_2 = true;
    return (void *)0x0;
  }
  if ((-1 < *(int *)&this->Data) && (*(int *)&this->Data < *(int *)((longlong)param_1 + 8))) {
    return *(void **)param_1;
  }
  return (void *)0x0;
}

