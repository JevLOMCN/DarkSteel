// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 1

// FInvalidateWidgetReasonAttribute @ 1425bd260

FInvalidateWidgetReasonAttribute * __thiscall
FSlateAttributeDescriptor::FInvalidateWidgetReasonAttribute::FInvalidateWidgetReasonAttribute
          (FInvalidateWidgetReasonAttribute *this,FInvalidateWidgetReasonAttribute *param_1)

{
  TDelegate<EInvalidateWidgetReason___cdecl(SWidget_const_&),FNotThreadSafeNotCheckedDelegateUserPolicy>
  *this_00;
  longlong *plVar1;
  undefined8 *puVar2;
  ForAnyElementType FVar3;
  int iVar4;
  ForAnyElementType local_18;
  int local_10;
  
  this_00 = &this->Getter;
  this->Reason = param_1->Reason;
  *(undefined8 *)this_00 = 0;
  *(undefined4 *)&(this->Getter).field_0x8 = 0;
  if (&param_1->Getter != this_00) {
    local_18.Data = (FScriptContainerElement *)0x0;
    local_10 = 0;
    FVar3.Data = (FScriptContainerElement *)0x0;
    iVar4 = 0;
    if ((*(int *)&(param_1->Getter).field_0x8 != 0) &&
       (plVar1 = *(longlong **)&param_1->Getter, FVar3.Data = (FScriptContainerElement *)0x0,
       plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x48))();
      FVar3.Data = local_18.Data;
      iVar4 = local_10;
    }
    local_10 = 0;
    local_18.Data = (FScriptContainerElement *)0x0;
    if ((*(int *)&(this->Getter).field_0x8 != 0) &&
       (puVar2 = *(undefined8 **)this_00, puVar2 != (undefined8 *)0x0)) {
      (**(code **)*puVar2)(puVar2);
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)this_00,0,0,0x10);
      *(undefined4 *)&(this->Getter).field_0x8 = 0;
    }
    if (*(void **)this_00 != (void *)0x0) {
      FMemory::Free(*(void **)this_00);
    }
    *(FScriptContainerElement **)this_00 = FVar3.Data;
    *(int *)&(this->Getter).field_0x8 = iVar4;
    if (local_10 != 0) {
      if (local_18.Data == (FScriptContainerElement *)0x0) {
        return this;
      }
      (*(code *)**(undefined8 **)local_18.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_18,0,0,0x10);
      local_10 = 0;
    }
    if (local_18.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data);
    }
  }
  return this;
}

