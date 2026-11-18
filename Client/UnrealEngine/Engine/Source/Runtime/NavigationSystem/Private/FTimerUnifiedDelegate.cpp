// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 1

// FTimerUnifiedDelegate @ 146dd7d80

FTimerUnifiedDelegate * __thiscall
FTimerUnifiedDelegate::FTimerUnifiedDelegate
          (FTimerUnifiedDelegate *this,
          TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy> *param_1)

{
  undefined8 *puVar1;
  ForAnyElementType FVar2;
  int iVar3;
  ForAnyElementType local_18;
  int local_10;
  
  *(undefined8 *)&this->VariantDelegate = 0;
  *(undefined4 *)&(this->VariantDelegate).field_0x8 = 0;
  if (param_1 == (TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy> *)this) {
    (this->VariantDelegate).TypeIndex = '\x01';
    return this;
  }
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10 = 0;
  FVar2.Data = (FScriptContainerElement *)0x0;
  iVar3 = 0;
  if ((*(int *)&param_1->field_0x8 != 0) &&
     (FVar2.Data = (FScriptContainerElement *)0x0, *(longlong **)param_1 != (longlong *)0x0)) {
    (**(code **)(**(longlong **)param_1 + 0x48))();
    FVar2.Data = local_18.Data;
    iVar3 = local_10;
  }
  local_10 = 0;
  local_18.Data = (FScriptContainerElement *)0x0;
  if ((*(int *)&(this->VariantDelegate).field_0x8 != 0) &&
     (puVar1 = *(undefined8 **)&this->VariantDelegate, puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1);
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)this,0,0,0x10);
    *(undefined4 *)&(this->VariantDelegate).field_0x8 = 0;
  }
  if (*(void **)&this->VariantDelegate != (void *)0x0) {
    FMemory::Free(*(void **)&this->VariantDelegate);
  }
  *(FScriptContainerElement **)&this->VariantDelegate = FVar2.Data;
  *(int *)&(this->VariantDelegate).field_0x8 = iVar3;
  if (local_10 != 0) {
    if (local_18.Data == (FScriptContainerElement *)0x0) goto LAB_146dd7e73;
    (*(code *)**(undefined8 **)local_18.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_18,0,0,0x10);
    local_10 = 0;
  }
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
LAB_146dd7e73:
  (this->VariantDelegate).TypeIndex = '\x01';
  return this;
}

