// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 3

// FRHIBufferInitializer @ 145c86730

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRHIBufferInitializer * __thiscall
FRHIBufferInitializer::FRHIBufferInitializer
          (FRHIBufferInitializer *this,FRHICommandListBase *param_1,FRHIBuffer *param_2,
          void *param_3,ulong64 param_4,
          TUniqueFunction<TRefCountPtr<FRHIBuffer>___cdecl(FRHICommandListBase_&)> *param_5)

{
  int *piVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  FRHIBufferInitializer *pFVar6;
  
  *(undefined8 *)&this->FinalizeCallback = *(undefined8 *)param_5;
  *(undefined8 *)&(this->FinalizeCallback).field_0x28 = *(undefined8 *)&param_5->field_0x28;
  *(undefined8 *)&param_5->field_0x28 = 0;
  uVar3 = *(undefined8 *)&param_5->field_0x18;
  *(undefined8 *)&(this->FinalizeCallback).field_0x10 = *(undefined8 *)&param_5->field_0x10;
  *(undefined8 *)&(this->FinalizeCallback).field_0x18 = uVar3;
  *(undefined8 *)&(this->FinalizeCallback).field_0x20 = *(undefined8 *)&param_5->field_0x20;
  if (*(longlong *)&this->FinalizeCallback != 0) {
    *(undefined8 *)param_5 = 0;
  }
  this->WritableSize = param_4;
  this->CommandList = param_1;
  this->Buffer = param_2;
  this->WritableData = param_3;
  if (param_2 == (FRHIBuffer *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InBuffer != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIBufferInitializer.cpp"
                       ,0xd,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FRHIBufferInitializer *)(*pcVar2)();
      return pFVar6;
    }
  }
  iVar5 = (param_1->PendingBufferUploads).ArrayNum;
  piVar1 = &(param_1->PendingBufferUploads).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(param_1->PendingBufferUploads).AllocatorInstance,piVar1);
  }
  (param_1->PendingBufferUploads).ArrayNum = iVar5 + 1;
  *(FRHIBuffer **)((param_1->PendingBufferUploads).AllocatorInstance.Data + (longlong)iVar5 * 8) =
       param_2;
  return this;
}

// Finalize @ 145ca3440

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TRefCountPtr<FRHIBuffer> __thiscall FRHIBufferInitializer::Finalize(FRHIBufferInitializer *this)

{
  ERHIPipeline EVar1;
  FRHICommandListBase *this_00;
  FRHICommandListBase *pFVar2;
  FRHIResource *this_01;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  TRefCountPtr<FRHIBuffer> TVar11;
  undefined8 uVar12;
  longlong *plVar13;
  longlong *plVar14;
  FRHIBuffer *in_RDX;
  FRHIResource *local_58;
  longlong local_48;
  longlong lStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  longlong *plStack_20;
  
  in_RDX->_padding_ = 0;
  if (*(longlong *)&this->FinalizeCallback == 0) {
    return (TRefCountPtr<FRHIBuffer>)in_RDX;
  }
  if (this->Buffer == (FRHIBuffer *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Buffer != nullptr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIBufferInitializer.cpp"
                        ,0x16,L"");
    if (bVar10) {
      pcVar3 = (code *)swi(3);
      TVar11.Reference = (FRHIBuffer *)(*pcVar3)();
      return (TRefCountPtr<FRHIBuffer>)TVar11.Reference;
    }
  }
  this_00 = this->CommandList;
  EVar1 = this_00->ActivePipelines;
  if ((EVar1 != None) && ((EVar1 & EVar1 - Graphics) != None)) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("ActivePipelines == ERHIPipeline::None || IsSingleRHIPipeline(ActivePipelines)"
                        ,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                        ,0x2a5,L"");
    if (bVar10) {
      pcVar3 = (code *)swi(3);
      TVar11.Reference = (FRHIBuffer *)(*pcVar3)();
      return (TRefCountPtr<FRHIBuffer>)TVar11.Reference;
    }
  }
  bVar10 = this_00->ActivePipelines == None;
  if (bVar10) {
    FRHICommandListBase::ActivatePipelines(this_00,Graphics);
  }
  pFVar2 = this->CommandList;
  UE::Core::Private::Function::CheckCallable(*(void **)&this->FinalizeCallback);
  plVar14 = *(longlong **)&(this->FinalizeCallback).field_0x28;
  pcVar3 = *(code **)&this->FinalizeCallback;
  plVar13 = (longlong *)&(this->FinalizeCallback).field_0x10;
  if (plVar14 != (longlong *)0x0) {
    plVar13 = plVar14;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar3)(&stack0xffffffffffffffa8,uVar12,pFVar2);
  if (in_RDX != (FRHIBuffer *)&stack0xffffffffffffffa8) {
    this_01 = (FRHIResource *)in_RDX->_padding_;
    in_RDX->_padding_ = (longlong)local_58;
    local_58 = (FRHIResource *)0x0;
    if (this_01 == (FRHIResource *)0x0) goto LAB_145ca3561;
    FRHIResource::Release(this_01);
  }
  if (local_58 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_58);
  }
LAB_145ca3561:
  FRHICommandListBase::RemovePendingBufferUpload(this->CommandList,this->Buffer);
  local_48 = *(longlong *)&this->FinalizeCallback;
  lVar9 = *(longlong *)&(this->FinalizeCallback).field_0x8;
  uVar4 = *(undefined4 *)&(this->FinalizeCallback).field_0x10;
  uVar5 = *(undefined4 *)&(this->FinalizeCallback).field_0x14;
  uVar6 = *(undefined4 *)&(this->FinalizeCallback).field_0x18;
  uVar7 = *(undefined4 *)&(this->FinalizeCallback).field_0x1c;
  lVar8 = *(longlong *)&(this->FinalizeCallback).field_0x20;
  plStack_20 = *(longlong **)&(this->FinalizeCallback).field_0x28;
  *(undefined8 *)&this->FinalizeCallback = 0;
  *(longlong *)&(this->FinalizeCallback).field_0x8 = lStack_40;
  *(undefined4 *)&(this->FinalizeCallback).field_0x10 = local_38;
  *(undefined4 *)&(this->FinalizeCallback).field_0x14 = uStack_34;
  *(undefined4 *)&(this->FinalizeCallback).field_0x18 = uStack_30;
  *(undefined4 *)&(this->FinalizeCallback).field_0x1c = uStack_2c;
  *(undefined4 *)&(this->FinalizeCallback).field_0x20 = local_28;
  *(undefined4 *)&(this->FinalizeCallback).field_0x24 = uStack_24;
  *(undefined4 *)&(this->FinalizeCallback).field_0x28 = 0;
  *(undefined4 *)&(this->FinalizeCallback).field_0x2c = 0;
  local_38 = uVar4;
  uStack_34 = uVar5;
  uStack_30 = uVar6;
  uStack_2c = uVar7;
  _local_28 = lVar8;
  lStack_40 = lVar9;
  if (local_48 != 0) {
    plVar14 = (longlong *)&stack0xffffffffffffffc8;
    if (plStack_20 != (longlong *)0x0) {
      plVar14 = plStack_20;
    }
    (**(code **)(*plVar14 + 0x10))();
  }
  this->CommandList = (FRHICommandListBase *)0x0;
  this->Buffer = (FRHIBuffer *)0x0;
  this->WritableData = (void *)0x0;
  this->WritableSize = 0;
  if (bVar10) {
    FRHICommandListBase::ActivatePipelines(this_00,None);
  }
  return (TRefCountPtr<FRHIBuffer>)in_RDX;
}

// RemovePendingBufferUpload @ 145cbd7e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall FRHIBufferInitializer::RemovePendingBufferUpload(FRHIBufferInitializer *this)

{
  FRHICommandListBase::RemovePendingBufferUpload(this->CommandList,this->Buffer);
  return;
}

