// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// TRHIBufferInitializer<FSimpleElementVertex> @ 147685700

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TRHIBufferInitializer<FSimpleElementVertex> * __thiscall
TRHIBufferInitializer<FSimpleElementVertex>::TRHIBufferInitializer<FSimpleElementVertex>
          (TRHIBufferInitializer<FSimpleElementVertex> *this,FRHIBufferInitializer *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  longlong *plStack_10;
  
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
  uVar1 = *(undefined4 *)&(param_1->FinalizeCallback).field_0x10;
  uVar2 = *(undefined4 *)&(param_1->FinalizeCallback).field_0x14;
  uVar3 = *(undefined4 *)&(param_1->FinalizeCallback).field_0x18;
  uVar4 = *(undefined4 *)&(param_1->FinalizeCallback).field_0x1c;
  uVar5 = *(undefined8 *)&(param_1->FinalizeCallback).field_0x20;
  plStack_10 = *(longlong **)&(param_1->FinalizeCallback).field_0x28;
  *(undefined8 *)&param_1->FinalizeCallback = 0;
  *(undefined8 *)&(param_1->FinalizeCallback).field_0x8 = uStack_30;
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
    plVar7 = (longlong *)&local_28;
    if (plStack_10 != (longlong *)0x0) {
      plVar7 = plStack_10;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  param_1->CommandList = (FRHICommandListBase *)0x0;
  param_1->Buffer = (FRHIBuffer *)0x0;
  param_1->WritableData = (void *)0x0;
  param_1->WritableSize = 0;
  return this;
}

// TRHIBufferInitializer<UE::Math::TVector4<float>_> @ 147c2b7c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TRHIBufferInitializer<UE::Math::TVector4<float>_> * __thiscall
TRHIBufferInitializer<UE::Math::TVector4<float>_>::TRHIBufferInitializer<UE::Math::TVector4<float>_>
          (TRHIBufferInitializer<UE::Math::TVector4<float>_> *this,FRHIBufferInitializer *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  longlong *plStack_10;
  
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
  uVar1 = *(undefined4 *)&(param_1->FinalizeCallback).field_0x10;
  uVar2 = *(undefined4 *)&(param_1->FinalizeCallback).field_0x14;
  uVar3 = *(undefined4 *)&(param_1->FinalizeCallback).field_0x18;
  uVar4 = *(undefined4 *)&(param_1->FinalizeCallback).field_0x1c;
  uVar5 = *(undefined8 *)&(param_1->FinalizeCallback).field_0x20;
  plStack_10 = *(longlong **)&(param_1->FinalizeCallback).field_0x28;
  *(undefined8 *)&param_1->FinalizeCallback = 0;
  *(undefined8 *)&(param_1->FinalizeCallback).field_0x8 = uStack_30;
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
    plVar7 = (longlong *)&local_28;
    if (plStack_10 != (longlong *)0x0) {
      plVar7 = plStack_10;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  param_1->CommandList = (FRHICommandListBase *)0x0;
  param_1->Buffer = (FRHIBuffer *)0x0;
  param_1->WritableData = (void *)0x0;
  param_1->WritableSize = 0;
  return this;
}

