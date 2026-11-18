// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 2

// CreateCommandList @ 145daa350

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FRHICommandList * __thiscall
FRDGDispatchPassBuilder::CreateCommandList(FRDGDispatchPassBuilder *this)

{
  int *piVar1;
  TReferenceControllerBase<1> *pTVar2;
  FRHIParallelRenderPassInfo *pFVar3;
  FRDGDispatchPass *pFVar4;
  code *pcVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  int iVar8;
  FRHICommandListBase *this_00;
  FRHICommandList *pFVar9;
  
  if ((((this->RenderPassInfo).Object == (FRHIParallelRenderPassInfo *)0x0) ||
      ((this->Pass->_padding_ & 0x400000000000000) == 0)) ||
     (!GRHIGlobals.SupportsParallelRenderPasses)) {
    this_00 = ::operator_new(0x1bb0);
    if (this_00 == (FRHICommandListBase *)0x0) {
      this_00 = (FRHICommandListBase *)0x0;
    }
    else {
      FRHICommandListBase::FRHICommandListBase
                (this_00,(FRHIGPUMask)*(uint *)((longlong)&this->Pass->_padding_ + 4),false);
    }
    FRHICommandListBase::SwitchPipeline
              (this_00,*(ERHIPipeline *)((longlong)&this->Pass->_padding_ + 3));
    pFVar4 = this->Pass;
    if (((((FRDGPass_u_87 *)((longlong)&pFVar4->_padding_ + 7))->PacketBits_ParallelExecute & 4) !=
         0) && ((pFVar4->CommandLists).ArrayNum == 0)) {
      FRDGBuilder::PushPreScopes((FRHIComputeCommandList *)this_00,(FRDGPass *)pFVar4);
      FRDGBuilder::ExecutePassPrologue((FRHIComputeCommandList *)this_00,(FRDGPass *)this->Pass);
    }
    pFVar3 = (this->RenderPassInfo).Object;
    if (pFVar3 != (FRHIParallelRenderPassInfo *)0x0) {
      FRHICommandList::BeginRenderPass
                ((FRHICommandList *)this_00,(FRHIRenderPassInfo *)pFVar3,L"DispatchPass");
    }
    pFVar4 = this->Pass;
    iVar8 = (pFVar4->CommandLists).ArrayNum;
    piVar1 = &(pFVar4->CommandLists).ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRHICommandListImmediate::FQueuedCommandList>_>
                        (0x808,&(pFVar4->CommandLists).AllocatorInstance,piVar1);
    }
    (pFVar4->CommandLists).ArrayNum = iVar8 + 1;
    (pFVar4->CommandLists).AllocatorInstance.Data[iVar8].CmdList = this_00;
  }
  else {
    this_00 = ::operator_new(0x1bb0);
    if (this_00 == (FRHICommandListBase *)0x0) {
      this_00 = (FRHICommandListBase *)0x0;
    }
    else {
      FRHICommandListBase::FRHICommandListBase
                (this_00,(FRHIGPUMask)*(uint *)((longlong)&this->Pass->_padding_ + 4),false);
      if ((this->RenderPassInfo).Object == (FRHIParallelRenderPassInfo *)0x0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          pFVar9 = (FRHICommandList *)(*pcVar5)();
          return pFVar9;
        }
      }
      FRHIRenderPassInfo::Validate((FRHIRenderPassInfo *)(this->RenderPassInfo).Object);
      pTVar2 = (this->RenderPassInfo).SharedReferenceCount.ReferenceController;
      pFVar3 = (this->RenderPassInfo).Object;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar6 = (this_00->SubRenderPassInfo).SharedReferenceCount.ReferenceController;
      (this_00->SubRenderPassInfo).Object = pFVar3;
      (this_00->SubRenderPassInfo).SharedReferenceCount.ReferenceController = pTVar2;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
      if ((this->RenderPassInfo).Object == (FRHIParallelRenderPassInfo *)0x0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          pFVar9 = (FRHICommandList *)(*pcVar5)();
          return pFVar9;
        }
      }
      FRHICommandListBase::CacheActiveRenderTargets
                (this_00,(FRHIRenderPassInfo *)(this->RenderPassInfo).Object);
    }
    FRHICommandListBase::SwitchPipeline
              (this_00,*(ERHIPipeline *)((longlong)&this->Pass->_padding_ + 3));
    iVar8 = (this->SubCommandLists).ArrayNum;
    piVar1 = &(this->SubCommandLists).ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(this->SubCommandLists).AllocatorInstance,piVar1);
    }
    (this->SubCommandLists).ArrayNum = iVar8 + 1;
    *(FRHICommandListBase **)((this->SubCommandLists).AllocatorInstance.Data + (longlong)iVar8 * 8)
         = this_00;
  }
  FRHIComputeCommandList::SetStaticUniformBuffers
            ((FRHIComputeCommandList *)this_00,&this->StaticUniformBuffers);
  return (FRHICommandList *)this_00;
}

// Finish @ 145db6340

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall FRDGDispatchPassBuilder::Finish(FRDGDispatchPassBuilder *this)

{
  int *piVar1;
  atomic<bool> aVar2;
  FRDGDispatchPass *pFVar3;
  FTaskEvent FVar4;
  int iVar5;
  int iVar6;
  FRHICommandListBase *this_00;
  
  pFVar3 = this->Pass;
  if ((pFVar3->_padding_ & 0x400000000000000) == 0) {
    if ((pFVar3->CommandListsEvent != (FTaskEvent)0x0) &&
       (*(char *)((longlong)pFVar3->CommandListsEvent + 0xd0) == '\0')) {
      FVar4 = pFVar3->CommandListsEvent;
      LOCK();
      aVar2 = *(atomic<bool> *)((longlong)FVar4 + 0x45);
      *(atomic<bool> *)((longlong)FVar4 + 0x45) = (atomic<bool>)0x1;
      UNLOCK();
      if (aVar2 == (atomic<bool>)0x0) {
        LOCK();
        *(atomic<unsigned_int> *)((longlong)FVar4 + 0x30) =
             (atomic<unsigned_int>)((int)*(atomic<unsigned_int> *)((longlong)FVar4 + 0x30) + 1);
        UNLOCK();
        UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)FVar4,0xd8);
        return;
      }
    }
  }
  else {
    if ((this->SubCommandLists).ArrayNum == 0) {
      iVar5 = (pFVar3->CommandLists).ArrayNum;
      this_00 = ::operator_new(0x1bb0);
      if (this_00 == (FRHICommandListBase *)0x0) {
        this_00 = (FRHICommandListBase *)0x0;
      }
      else {
        FRHICommandListBase::FRHICommandListBase
                  (this_00,(FRHIGPUMask)*(uint *)((longlong)&this->Pass->_padding_ + 4),false);
      }
      pFVar3 = this->Pass;
      iVar6 = (pFVar3->CommandLists).ArrayNum;
      piVar1 = &(pFVar3->CommandLists).ArrayMax;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRHICommandListImmediate::FQueuedCommandList>_>
                          (0x808,&(pFVar3->CommandLists).AllocatorInstance,piVar1);
      }
      (pFVar3->CommandLists).ArrayNum = iVar6 + 1;
      (pFVar3->CommandLists).AllocatorInstance.Data[iVar6].CmdList = this_00;
      FVar4 = this->Pass->CommandListsEvent;
      if ((FVar4 != (FTaskEvent)0x0) && (*(char *)((longlong)FVar4 + 0xd0) == '\0')) {
        FVar4 = this->Pass->CommandListsEvent;
        LOCK();
        aVar2 = *(atomic<bool> *)((longlong)FVar4 + 0x45);
        *(atomic<bool> *)((longlong)FVar4 + 0x45) = (atomic<bool>)0x1;
        UNLOCK();
        if (aVar2 == (atomic<bool>)0x0) {
          LOCK();
          *(atomic<unsigned_int> *)((longlong)FVar4 + 0x30) =
               (atomic<unsigned_int>)((int)*(atomic<unsigned_int> *)((longlong)FVar4 + 0x30) + 1);
          UNLOCK();
          UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)FVar4,0xd8);
        }
      }
      FRHICommandListBase::SwitchPipeline
                (this_00,*(ERHIPipeline *)((longlong)&this->Pass->_padding_ + 3));
      if (iVar5 == 0) {
        FRDGBuilder::PushPreScopes((FRHIComputeCommandList *)this_00,(FRDGPass *)this->Pass);
        FRDGBuilder::ExecutePassPrologue((FRHIComputeCommandList *)this_00,(FRDGPass *)this->Pass);
      }
    }
    else {
      this_00 = ::operator_new(0x1bb0);
      if (this_00 == (FRHICommandListBase *)0x0) {
        this_00 = (FRHICommandListBase *)0x0;
      }
      else {
        FRHICommandListBase::FRHICommandListBase
                  (this_00,(FRHIGPUMask)*(uint *)((longlong)&this->Pass->_padding_ + 4),false);
      }
      FRHICommandListBase::SwitchPipeline
                (this_00,*(ERHIPipeline *)((longlong)&this->Pass->_padding_ + 3));
      FRDGBuilder::PushPreScopes((FRHIComputeCommandList *)this_00,(FRDGPass *)this->Pass);
      FRDGBuilder::ExecutePassPrologue((FRHIComputeCommandList *)this_00,(FRDGPass *)this->Pass);
      FRHICommandListBase::InsertParallelRenderPass_Base
                (this_00,&this->RenderPassInfo,&this->SubCommandLists);
      pFVar3 = this->Pass;
      iVar5 = (pFVar3->CommandLists).ArrayNum;
      piVar1 = &(pFVar3->CommandLists).ArrayMax;
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRHICommandListImmediate::FQueuedCommandList>_>
                          (0x808,&(pFVar3->CommandLists).AllocatorInstance,piVar1);
      }
      (pFVar3->CommandLists).ArrayNum = iVar5 + 1;
      (pFVar3->CommandLists).AllocatorInstance.Data[iVar5].CmdList = this_00;
      FVar4 = this->Pass->CommandListsEvent;
      if ((FVar4 != (FTaskEvent)0x0) && (*(char *)((longlong)FVar4 + 0xd0) == '\0')) {
        FVar4 = this->Pass->CommandListsEvent;
        LOCK();
        aVar2 = *(atomic<bool> *)((longlong)FVar4 + 0x45);
        *(atomic<bool> *)((longlong)FVar4 + 0x45) = (atomic<bool>)0x1;
        UNLOCK();
        if (aVar2 == (atomic<bool>)0x0) {
          LOCK();
          *(atomic<unsigned_int> *)((longlong)FVar4 + 0x30) =
               (atomic<unsigned_int>)((int)*(atomic<unsigned_int> *)((longlong)FVar4 + 0x30) + 1);
          UNLOCK();
          UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)FVar4,0xd8);
        }
      }
    }
    FRDGBuilder::ExecutePassEpilogue((FRHIComputeCommandList *)this_00,(FRDGPass *)this->Pass);
    FRDGBuilder::PopPreScopes((FRHIComputeCommandList *)this_00,(FRDGPass *)this->Pass);
    FRHICommandListBase::FinishRecording(this_00);
  }
  return;
}

