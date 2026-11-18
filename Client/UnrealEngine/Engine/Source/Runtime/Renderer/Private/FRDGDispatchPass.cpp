// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 3

// FRDGDispatchPass @ 14472e0a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FRDGDispatchPass * __thiscall
FRDGDispatchPass::FRDGDispatchPass
          (FRDGDispatchPass *this,FRDGEventName *param_1,FRDGParameterStruct *param_2,
          ERDGPassFlags param_3)

{
  ushort *puVar1;
  FRHIUniformBufferLayout *this_00;
  FTaskEvent this_01;
  FTaskEvent FVar2;
  FRDGParameterStruct local_28;
  
  local_28.Contents = param_2->Contents;
  local_28.Layout.Reference = (param_2->Layout).Reference;
  if (local_28.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_28.Layout.Reference);
  }
  local_28.Metadata = param_2->Metadata;
  FRDGPass::FRDGPass((FRDGPass *)this,param_1,&local_28,param_3,Async);
  FVar2 = (FTaskEvent)0x0;
  this->_padding_ = (longlong)&___7FRDGDispatchPass__6B_;
  (this->CommandLists).AllocatorInstance.Data = (FQueuedCommandList *)0x0;
  (this->CommandLists).ArrayNum = 0;
  (this->CommandLists).ArrayMax = 0;
  this_01 = (FTaskEvent)
            TLockFreeFixedSizeAllocator_TLSCacheBase<216,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
            ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<216,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                        *)&UE::Tasks::Private::TaskEventBaseAllocator);
  if (this_01 != (FTaskEvent)0x0) {
    UE::Tasks::Private::FTaskBase::FTaskBase((FTaskBase *)this_01,1,true);
    *(undefined ***)this_01 = &___7FTaskEventBase_Private_Tasks_UE__6B_;
    TaskTrace::Created((ulong64)*(atomic<unsigned___int64> *)((longlong)this_01 + 0x50),0xd8);
    UE::Tasks::Private::FTaskBase::Init
              ((FTaskBase *)this_01,
               L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphPass.h(729)"
               ,Default,TaskEvent,None);
    FVar2 = this_01;
  }
  this->CommandListsEvent = FVar2;
  puVar1 = (ushort *)((longlong)&this->_padding_ + 4);
  *puVar1 = *puVar1 | 0x200;
  this_00 = (param_2->Layout).Reference;
  if (this_00 != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  return this;
}

// ~FRDGDispatchPass @ 14472f0a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall FRDGDispatchPass::~FRDGDispatchPass(FRDGDispatchPass *this)

{
  int *piVar1;
  int iVar2;
  FTaskEvent FVar3;
  
  FVar3 = this->CommandListsEvent;
  if (FVar3 != (FTaskEvent)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)FVar3 + 0x30);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)**(undefined8 **)FVar3)(FVar3,1);
    }
  }
  if ((FRHIResource *)this->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
    return;
  }
  return;
}

// Execute @ 14475a5f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall FRDGDispatchPass::Execute(FRDGDispatchPass *this,FRHIComputeCommandList *param_1)

{
  int iVar1;
  FQueuedCommandList *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined4 uStack_1c;
  TArrayView<FRHICommandListImmediate::FQueuedCommandList,int> local_18;
  
  if ((param_1->field_0x29b & 0x20) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsImmediate()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.inl"
                       ,0x17,L"This operation expects the immediate command list.");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (this->CommandLists).AllocatorInstance.Data;
  iVar1 = (this->CommandLists).ArrayNum;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_18._12_4_ = uStack_1c;
  local_18.ArrayNum = iVar1;
  local_18.DataPtr = pFVar2;
  FRHICommandListImmediate::QueueAsyncCommandListSubmit
            ((FRHICommandListImmediate *)param_1,&local_18,Disabled,0);
  return;
}

