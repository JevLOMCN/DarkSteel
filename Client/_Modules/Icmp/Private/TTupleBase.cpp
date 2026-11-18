// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Icmp
// Functions: 1

// ApplyAfter<TFunction<void___cdecl(FIcmpEchoManyCompleteResult)>_&,FIcmpEchoManyCompleteResult> @ 14454ebb0

void __thiscall
UE::Core::Private::Tuple::TTupleBase<TIntegerSequence<unsigned_int>_>::
ApplyAfter<TFunction<void___cdecl(FIcmpEchoManyCompleteResult)>_&,FIcmpEchoManyCompleteResult>
          (TTupleBase<TIntegerSequence<unsigned_int>_> *this,
          TFunction<void___cdecl(FIcmpEchoManyCompleteResult)> *param_1,
          FIcmpEchoManyCompleteResult *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  FIcmpEchoManyResult *local_28;
  int local_20;
  int local_1c;
  EIcmpEchoManyStatus local_18;
  
  local_28 = (FIcmpEchoManyResult *)(param_2->AllResults).AllocatorInstance.Data;
  (param_2->AllResults).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_20 = (param_2->AllResults).ArrayNum;
  local_1c = (param_2->AllResults).ArrayMax;
  (param_2->AllResults).ArrayNum = 0;
  (param_2->AllResults).ArrayMax = 0;
  local_18 = param_2->Status;
  Function::CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar3 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar3 = *(longlong **)&param_1->field_0x28;
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2,&local_28);
  DestructItems<FIcmpEchoManyResult,int>(local_28,local_20);
  if (local_28 != (FIcmpEchoManyResult *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

