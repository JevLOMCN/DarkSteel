// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 1

// WaitUntilTaskCompletes @ 145ccd550

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTaskGraphInterface::WaitUntilTaskCompletes
          (FTaskGraphInterface *this,TRefCountPtr<FBaseGraphTask> *param_1,Type param_2)

{
  undefined1 *puVar1;
  int iVar2;
  code *pcVar3;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar4;
  undefined1 auStackY_98 [32];
  TRefCountPtr<FBaseGraphTask> local_58;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> local_50;
  int local_28;
  int local_24;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_98;
  local_28 = 1;
  pcVar3 = *(code **)((longlong)*this + 0x60);
  local_58 = (TRefCountPtr<FBaseGraphTask>)param_1->Reference;
  param_1->Reference = (FBaseGraphTask *)0x0;
  local_50.SecondaryData = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
  UE::Core::Private::
  ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
            (8,8,1,0,&local_50,1,&local_24);
  FVar4 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_50;
  if (local_50.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FVar4 = local_50.SecondaryData;
  }
  ConstructItems<TRefCountPtr<FBaseGraphTask>,TRefCountPtr<FBaseGraphTask>,int>
            ((void *)FVar4,&local_58,1);
  (*pcVar3)(this,&local_50,param_2);
  FVar4 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_50;
  if (local_50.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FVar4 = local_50.SecondaryData;
  }
  DestructItems<TRefCountPtr<FBaseGraphTask>,int>((TRefCountPtr<FBaseGraphTask> *)FVar4,local_28);
  if (local_50.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FMemory::Free((void *)local_50.SecondaryData);
  }
  if (local_58.Reference != (FBaseGraphTask *)0x0) {
    LOCK();
    puVar1 = &(local_58.Reference)->field_0x30;
    iVar2 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)**(undefined8 **)local_58.Reference)(local_58.Reference,1);
    }
  }
  return;
}

