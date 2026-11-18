// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_Common
// Functions: 1

// TRHIBufferInitializer<unsigned_short> @ 14948be30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TRHIBufferInitializer<unsigned_short> * __thiscall
TRHIBufferInitializer<unsigned_short>::TRHIBufferInitializer<unsigned_short>
          (TRHIBufferInitializer<unsigned_short> *this,FRHIBufferInitializer *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong *plVar10;
  undefined8 in_stack_ffffffffffffffd0;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  longlong *plStack_10;
  
  uVar8 = local_28;
  *(undefined8 *)this = *(undefined8 *)&param_1->FinalizeCallback;
  *(undefined8 *)&this->field_0x28 = *(undefined8 *)&(param_1->FinalizeCallback).field_0x28;
  *(undefined8 *)&(param_1->FinalizeCallback).field_0x28 = 0;
  uVar5 = *(undefined8 *)&(param_1->FinalizeCallback).field_0x18;
  *(undefined8 *)&this->field_0x10 = *(undefined8 *)&(param_1->FinalizeCallback).field_0x10;
  *(undefined8 *)&this->field_0x18 = uVar5;
  *(undefined8 *)&this->field_0x20 = *(undefined8 *)&(param_1->FinalizeCallback).field_0x20;
  if (*(longlong *)this != 0) {
    *(undefined8 *)&param_1->FinalizeCallback = 0;
  }
  *(FRHICommandListBase **)&this->field_0x30 = param_1->CommandList;
  *(FRHIBuffer **)&this->field_0x38 = param_1->Buffer;
  *(void **)&this->field_0x40 = param_1->WritableData;
  *(ulong64 *)&this->field_0x48 = param_1->WritableSize;
  lVar6 = *(longlong *)&param_1->FinalizeCallback;
  uVar7 = *(undefined8 *)&(param_1->FinalizeCallback).field_0x8;
  uVar1 = *(undefined4 *)&(param_1->FinalizeCallback).field_0x10;
  uVar2 = *(undefined4 *)&(param_1->FinalizeCallback).field_0x14;
  uVar3 = *(undefined4 *)&(param_1->FinalizeCallback).field_0x18;
  uVar4 = *(undefined4 *)&(param_1->FinalizeCallback).field_0x1c;
  uVar5 = *(undefined8 *)&(param_1->FinalizeCallback).field_0x20;
  plStack_10 = *(longlong **)&(param_1->FinalizeCallback).field_0x28;
  *(undefined8 *)&param_1->FinalizeCallback = 0;
  *(undefined8 *)&(param_1->FinalizeCallback).field_0x8 = in_stack_ffffffffffffffd0;
  uVar9 = (undefined4)local_18;
  *(undefined4 *)&(param_1->FinalizeCallback).field_0x10 = local_28;
  *(undefined4 *)&(param_1->FinalizeCallback).field_0x14 = uStack_24;
  *(undefined4 *)&(param_1->FinalizeCallback).field_0x18 = uStack_20;
  *(undefined4 *)&(param_1->FinalizeCallback).field_0x1c = uStack_1c;
  *(undefined4 *)&(param_1->FinalizeCallback).field_0x20 = (undefined4)local_18;
  *(undefined4 *)&(param_1->FinalizeCallback).field_0x24 = local_18._4_4_;
  *(undefined4 *)&(param_1->FinalizeCallback).field_0x28 = 0;
  *(undefined4 *)&(param_1->FinalizeCallback).field_0x2c = 0;
  local_28 = uVar1;
  uStack_24 = uVar2;
  uStack_20 = uVar3;
  uStack_1c = uVar4;
  local_18 = uVar5;
  if (lVar6 != 0) {
    plVar10 = (longlong *)&local_28;
    if (plStack_10 != (longlong *)0x0) {
      plVar10 = plStack_10;
    }
    (**(code **)(*plVar10 + 0x10))(uVar9,uVar8,uVar1,(int)lVar6,lVar6,uVar7);
  }
  param_1->CommandList = (FRHICommandListBase *)0x0;
  param_1->Buffer = (FRHIBuffer *)0x0;
  param_1->WritableData = (void *)0x0;
  param_1->WritableSize = 0;
  return this;
}

