// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 5

// <lambda_1> @ 145f404f0

<lambda_1> * __thiscall
`ULandscapeScratchRenderTarget::FTransitionBatcherScope::~FTransitionBatcherScope'::__l8::<lambda_1>
::<lambda_1>(void *this,<lambda_1> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  *(undefined8 *)this = 0;
  iVar1 = (param_1->Transitions).ArrayNum;
  _Src = (param_1->Transitions).AllocatorInstance.Data;
  *(int *)((longlong)this + 8) = iVar1;
  if (iVar1 == 0) {
    *(int *)((longlong)this + 0xc) = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,iVar1,0,this,iVar1,(int *)((longlong)this + 0xc));
  memcpy(*(void **)this,_Src,(longlong)iVar1 << 4);
  return this;
}

// FTransitionBatcherScope @ 145f42310

FTransitionBatcherScope * __thiscall
ULandscapeScratchRenderTarget::FTransitionBatcherScope::FTransitionBatcherScope
          (FTransitionBatcherScope *this,FRDGBuilderRecorder *param_1)

{
  this->RDGBuilderRecorder = param_1;
  (this->PendingTransitions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingTransitions).ArrayNum = 0;
  (this->PendingTransitions).ArrayMax = 0;
  return this;
}

// ~FTransitionBatcherScope @ 145f43900

void __thiscall
ULandscapeScratchRenderTarget::FTransitionBatcherScope::~FTransitionBatcherScope
          (FTransitionBatcherScope *this)

{
  FRDGBuilderRecorder *this_00;
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  code *local_38 [2];
  undefined **local_28;
  ForAnyElementType local_20;
  int local_18;
  int local_14 [3];
  
  if (((this->PendingTransitions).ArrayNum != 0) &&
     (this_00 = this->RDGBuilderRecorder, this_00->State != Recording)) {
    pFVar1 = (this->PendingTransitions).AllocatorInstance.Data;
    (this->PendingTransitions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18 = (this->PendingTransitions).ArrayNum;
    lVar2 = (longlong)local_18;
    local_38[0] = (code *)0x0;
    local_14[1] = 0;
    local_14[2] = 0;
    local_28 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`ULandscapeScratchRenderTarget::FTransitionBatcherScope::~FTransitionBatcherScope'::`8'::<lambda_1>,0,0>
                ::_vftable_;
    local_20.Data = (FScriptContainerElement *)0x0;
    (this->PendingTransitions).ArrayNum = 0;
    (this->PendingTransitions).ArrayMax = 0;
    if (local_18 == 0) {
      local_14[0] = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,local_18,0,&local_20,local_18,local_14);
      memcpy(local_20.Data,pFVar1,lVar2 << 4);
    }
    local_38[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`ULandscapeScratchRenderTarget::FTransitionBatcherScope::~FTransitionBatcherScope'::__l8::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
    UE::Landscape::FRDGBuilderRecorder::EnqueueRenderCommand
              (this_00,(TFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_38);
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  }
  pFVar1 = (this->PendingTransitions).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  FMemory::Free(pFVar1);
  return;
}

// operator() @ 145f45310

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
`ULandscapeScratchRenderTarget::FTransitionBatcherScope::~FTransitionBatcherScope'::__l8::<lambda_1>
::operator()(void *this,FRHICommandListImmediate *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 auStack_1f8 [32];
  <lambda_1> local_1d8;
  ForElementType<FRHITransitionInfo> local_1c8;
  int iStack_1c0;
  undefined4 uStack_1bc;
  TArrayView<FRHITransitionInfo_const_,int> local_1b8;
  TArray<FRHITransitionInfo,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> local_1a8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  local_1a8.AllocatorInstance.SecondaryData = (ForElementType<FRHITransitionInfo>)0x0;
  local_1a8.ArrayNum = 0;
  local_1a8.ArrayMax = 8;
  Algo::
  Transform<TArray<ULandscapeScratchRenderTarget::FTransitionInfo,TSizedDefaultAllocator<32>_>,TArray<FRHITransitionInfo,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_&,__ULandscapeScratchRenderTarget::FTransitionBatcherScope::~FTransitionBatcherScope_::__l8::<lambda_1>::operator()_::__l2::<lambda_1>_>
            (this,&local_1a8,local_1d8);
  iStack_1c0 = local_1a8.ArrayNum;
  local_1c8 = (ForElementType<FRHITransitionInfo>)&local_1a8;
  if (local_1a8.AllocatorInstance.SecondaryData != (ForElementType<FRHITransitionInfo>)0x0) {
    local_1c8 = local_1a8.AllocatorInstance.SecondaryData;
  }
  if (local_1a8.ArrayNum < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_1b8._12_4_ = uStack_1bc;
  local_1b8.ArrayNum = iStack_1c0;
  local_1b8.DataPtr = (FRHITransitionInfo *)local_1c8;
  FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_1b8,None);
  if (local_1a8.AllocatorInstance.SecondaryData != (ForElementType<FRHITransitionInfo>)0x0) {
    FMemory::Free((void *)local_1a8.AllocatorInstance.SecondaryData);
  }
  return;
}

// TransitionTo @ 145f5f6c0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __thiscall
ULandscapeScratchRenderTarget::FTransitionBatcherScope::TransitionTo
          (FTransitionBatcherScope *this,ULandscapeScratchRenderTarget *param_1,ERHIAccess param_2)

{
  int *piVar1;
  ERHIAccess EVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FTextureRenderTargetResource *pFVar6;
  FScriptContainerElement *pFVar7;
  
  if (param_1 == (ULandscapeScratchRenderTarget *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InScratchRenderTarget != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeEditResourcesSubsystem.cpp"
                       ,0x4e,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (param_1->CurrentState != param_2) {
    pFVar6 = UTextureRenderTarget::GameThread_GetRenderTargetResource
                       ((param_1->RenderTarget).field0_0x0.DebugPtr);
    piVar1 = &(this->PendingTransitions).ArrayMax;
    iVar5 = (this->PendingTransitions).ArrayNum;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&(this->PendingTransitions).AllocatorInstance,piVar1);
    }
    (this->PendingTransitions).ArrayNum = iVar5 + 1;
    EVar2 = param_1->CurrentState;
    pFVar7 = (this->PendingTransitions).AllocatorInstance.Data + (longlong)iVar5 * 0x10;
    *(FTextureRenderTargetResource **)pFVar7 = pFVar6;
    *(ERHIAccess *)(pFVar7 + 8) = EVar2;
    *(ERHIAccess *)(pFVar7 + 0xc) = param_2;
    param_1->CurrentState = param_2;
  }
  return;
}

