// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 3

// FParallelForContext @ 145ded560

FParallelForContext * __thiscall
FRenderCommandList::FParallelForContext::FParallelForContext
          (FParallelForContext *this,FRenderCommandList *param_1,int param_2)

{
  int *piVar1;
  byte bVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  FRenderCommandList *pFVar6;
  FRenderCommandList *this_00;
  ulonglong uVar7;
  bool bVar8;
  
  this->RootCommandList = param_1;
  piVar1 = &(this->TaskCommandLists).ArrayMax;
  (this->TaskCommandLists).AllocatorInstance.Data = (FRenderCommandList **)0x0;
  (this->TaskCommandLists).ArrayNum = 0;
  *piVar1 = 0;
  this->bSubmitRootCommandList = false;
  bVar8 = -1 < CpuChannel->Enabled;
  if (bVar8) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1625,"FRenderCommandList::FParallelForContext::Init",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderingThread.cpp"
               ,0x659);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1625);
  }
  if (this->RootCommandList == (FRenderCommandList *)0x0) {
    pFVar6 = FRenderCommandList::Create(CloseOnSubmit,Small);
    this->RootCommandList = pFVar6;
    this->bSubmitRootCommandList = true;
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_2);
  }
  if (*piVar1 < param_2) {
    UE::Core::Private::
    ReallocTo<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FRenderCommandList_*>_>
              (8,8,param_2,&(this->TaskCommandLists).AllocatorInstance,
               (this->TaskCommandLists).ArrayNum,piVar1);
  }
  if (0 < (int)(param_2 - 1U)) {
    uVar7 = (ulonglong)(param_2 - 1U);
    do {
      this_00 = TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Malloc(0x88,8);
      pFVar6 = (FRenderCommandList *)0x0;
      if (this_00 != (FRenderCommandList *)0x0) {
        FMemStackBase::FMemStackBase(&this_00->Allocator,Small);
        (this_00->CommandLists).AllocatorInstance.Data = (FCommandList *)0x0;
        (this_00->CommandLists).ArrayNum = 0;
        (this_00->CommandLists).ArrayMax = 0;
        (this_00->DispatchTaskEvent).bIsSet = false;
        *(undefined4 *)&(this_00->NumPipeRefs).field_0x0 = 0;
        this_00->Flags = CloseOnSubmit;
        puVar4 = &this_00->field_0x4d;
        this_00->bInitialized = '\0';
        this_00->bSubmitted = '\0';
        this_00->bRecording = '\x01';
        this_00->NumRecordScopeRefs = '\0';
        (this_00->Children).Head = (FRenderCommandList *)0x0;
        (this_00->Children).Tail = (FRenderCommandList *)0x0;
        this_00->Parent = (FRenderCommandList *)0x0;
        this_00->NextSibling = (FRenderCommandList *)0x0;
        (this_00->PipeEnqueueFailedBits).AllocatorInstance.SecondaryData.Data = (uint *)0x0;
        (this_00->PipeEnqueueFailedBits).NumBits = 0;
        (this_00->PipeEnqueueFailedBits).MaxBits = 0x20;
        pFVar6 = this_00;
      }
      iVar5 = (this->TaskCommandLists).ArrayNum;
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FRenderCommandList_*>_>
                          (0x808,&(this->TaskCommandLists).AllocatorInstance,piVar1);
      }
      (this->TaskCommandLists).ArrayNum = iVar5 + 1;
      (this->TaskCommandLists).AllocatorInstance.Data[iVar5] = pFVar6;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  iVar5 = (this->TaskCommandLists).ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FRenderCommandList_*>_>
                      (0x808,&(this->TaskCommandLists).AllocatorInstance,piVar1);
  }
  (this->TaskCommandLists).ArrayNum = iVar5 + 1;
  (this->TaskCommandLists).AllocatorInstance.Data[iVar5] = this->RootCommandList;
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return this;
}

// FParallelForContext @ 145ded740

FParallelForContext * __thiscall
FRenderCommandList::FParallelForContext::FParallelForContext
          (FParallelForContext *this,FRenderCommandList *param_1,int param_2,int param_3,
          EParallelForFlags param_4)

{
  int iVar1;
  
  iVar1 = ParallelForImpl::GetNumberOfThreadTasks(param_2,param_3,param_4);
  FParallelForContext(this,param_1,iVar1);
  return this;
}

// Submit @ 145e33200

void __thiscall FRenderCommandList::FParallelForContext::Submit(FParallelForContext *this)

{
  int *piVar1;
  FRenderCommandList *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  bool bVar8;
  
  if (this->RootCommandList != (FRenderCommandList *)0x0) {
    bVar8 = -1 < CpuChannel->Enabled;
    if (bVar8) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId1647,"FRenderCommandList::FParallelForContext::Submit",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderingThread.cpp"
                 ,0x66f);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1647);
    }
    uVar6 = 0;
    if (0 < (this->TaskCommandLists).ArrayNum + -1) {
      lVar7 = 0;
      do {
        pFVar2 = this->RootCommandList;
        uVar5 = 0;
        if ((int)uVar6 < (this->TaskCommandLists).ArrayNum) {
          uVar5 = ~uVar6 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FRenderCommandList::Submit
                  (*(FRenderCommandList **)
                    (lVar7 + (longlong)(this->TaskCommandLists).AllocatorInstance.Data),pFVar2);
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 8;
      } while ((int)uVar6 < (this->TaskCommandLists).ArrayNum + -1);
    }
    if (this->bSubmitRootCommandList != false) {
      FRenderCommandList::Submit(this->RootCommandList,(FRenderCommandList *)0x0);
    }
    this->RootCommandList = (FRenderCommandList *)0x0;
    piVar1 = &(this->TaskCommandLists).ArrayMax;
    (this->TaskCommandLists).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::
      ReallocTo<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FRenderCommandList_*>_>
                (8,8,0,&(this->TaskCommandLists).AllocatorInstance,0,piVar1);
    }
    if (bVar8) {
      FCpuProfilerTrace::OutputEndEvent();
      return;
    }
  }
  return;
}

