// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 33

// AllocParameters<FUploadHeightFieldToAtlasCS::FParameters> @ 147aac4f0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FParameters * __thiscall
FRDGBuilder::AllocParameters<FUploadHeightFieldToAtlasCS::FParameters>(FRDGBuilder *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  FParameters *pFVar6;
  undefined8 *local_18 [2];
  
  puVar5 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x60,0x10);
  if (puVar5 == (undefined8 *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FParameters *)(*pcVar2)();
      return pFVar6;
    }
  }
  else {
    *(undefined4 *)((longlong)puVar5 + 0x2c) = 0x3f800000;
    *puVar5 = &___7__TObject_VFParameters_FUploadHeightFieldToAtlasCS___FRDGAllocator__6B_;
    puVar5[4] = 0;
    *(undefined4 *)(puVar5 + 5) = 0;
    puVar5[7] = 0;
    puVar5[8] = 0;
    puVar5[10] = 0;
  }
  local_18[0] = puVar5;
  if (((undefined8 **)this->_padding_ <= local_18) &&
     (local_18 < (undefined8 **)this->_padding_ + *(int *)((longlong)&this->_padding_ + 4))) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FParameters *)(*pcVar2)();
      return pFVar6;
    }
  }
  iVar4 = (int)this->_padding_;
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&this->_padding_,piVar1);
  }
  *(int *)&this->_padding_ = iVar4 + 1;
  *(undefined8 **)(this->_padding_ + (longlong)iVar4 * 8) = local_18[0];
  return (FParameters *)(puVar5 + 2);
}

// AllocParameters<FUploadVisibilityToAtlasCS::FParameters> @ 147aac620

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FParameters * __thiscall
FRDGBuilder::AllocParameters<FUploadVisibilityToAtlasCS::FParameters>(FRDGBuilder *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  FParameters *pFVar6;
  undefined8 *local_18 [2];
  
  puVar5 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x70,0x10);
  if (puVar5 == (undefined8 *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FParameters *)(*pcVar2)();
      return pFVar6;
    }
  }
  else {
    *(undefined4 *)((longlong)puVar5 + 0x2c) = 0x3f800000;
    *puVar5 = &___7__TObject_VFParameters_FUploadVisibilityToAtlasCS___FRDGAllocator__6B_;
    puVar5[4] = 0;
    *(undefined4 *)(puVar5 + 5) = 0;
    puVar5[7] = 0;
    puVar5[8] = 0;
    puVar5[10] = 0;
    *(undefined4 *)(puVar5 + 0xb) = 0;
    puVar5[0xc] = 0;
    *(undefined4 *)((longlong)puVar5 + 0x5c) = 0x3f800000;
  }
  local_18[0] = puVar5;
  if (((undefined8 **)this->_padding_ <= local_18) &&
     (local_18 < (undefined8 **)this->_padding_ + *(int *)((longlong)&this->_padding_ + 4))) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FParameters *)(*pcVar2)();
      return pFVar6;
    }
  }
  iVar4 = (int)this->_padding_;
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&this->_padding_,piVar1);
  }
  *(int *)&this->_padding_ = iVar4 + 1;
  *(undefined8 **)(this->_padding_ + (longlong)iVar4 * 8) = local_18[0];
  return (FParameters *)(puVar5 + 2);
}

// operator() @ 147c333e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
`FRDGBuilder::
AddSetupTask<`FGPUSkinCache::Dispatch'::__l2::<lambda_1>,UE::Tasks::Private::FTaskHandle_const_&>'::
__l2::<lambda_1>::operator()(void *this)

{
  FRHICommandListScopedFence *this_00;
  longlong lVar1;
  FRHICommandListBase *pFVar2;
  ERHIPipeline EVar3;
  FTaskTagScope local_18;
  
  FTaskTagScope::FTaskTagScope(&local_18,EParallelRenderingThread);
  lVar1 = *(longlong *)((longlong)this + 8);
  EVar3 = FRHICommandListBase::SwitchPipeline
                    (*(FRHICommandListBase **)(lVar1 + 0x40),*(ERHIPipeline *)(lVar1 + 0xa8));
  this_00 = (FRHICommandListScopedFence *)(lVar1 + 0x20);
  *(ERHIPipeline *)(lVar1 + 0xa9) = EVar3;
  pFVar2 = *(FRHICommandListBase **)(lVar1 + 0x40);
  if (*(char *)(lVar1 + 0x38) != '\0') {
    FRHICommandListScopedFence::~FRHICommandListScopedFence(this_00);
  }
  this_00->RHICmdList = pFVar2;
  *(FRHICommandListScopedFence **)(lVar1 + 0x28) = (pFVar2->PersistentState).CurrentFenceScope;
  *(undefined1 *)(lVar1 + 0x30) = 0;
  (pFVar2->PersistentState).CurrentFenceScope = this_00;
  *(undefined1 *)(lVar1 + 0x38) = 1;
  FGPUSkinCache::DispatchPassSetup(*(FGPUSkinCache **)this,*(FTaskData **)((longlong)this + 8));
  FTaskTagScope::~FTaskTagScope(&local_18);
  return;
}

// operator() @ 147c33480

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FRDGBuilder::
AddSetupTask<`FGPUSkinCache::Dispatch'::__l2::<lambda_2>,UE::Tasks::Private::FTaskHandle_&>'::__l2::
<lambda_1>::operator()(void *this)

{
  longlong lVar1;
  FTaskTagScope local_28;
  FTaskTagScope local_18;
  
  FTaskTagScope::FTaskTagScope(&local_18,EParallelRenderingThread);
  FTaskTagScope::FTaskTagScope(&local_28,EParallelRenderingThread);
  FGPUSkinCache::DispatchPassExecute(*(FGPUSkinCache **)this,*(FTaskData **)((longlong)this + 8));
  lVar1 = *(longlong *)((longlong)this + 8);
  if (*(char *)(lVar1 + 0x38) != '\0') {
    FRHICommandListScopedFence::~FRHICommandListScopedFence
              ((FRHICommandListScopedFence *)(lVar1 + 0x20));
    *(undefined1 *)(lVar1 + 0x38) = 0;
  }
  if (*(char *)(lVar1 + 0xb8) == '\0') {
    FRHICommandListBase::SwitchPipeline
              (*(FRHICommandListBase **)(lVar1 + 0x40),*(ERHIPipeline *)(lVar1 + 0xa9));
  }
  else {
    FRHICommandListBase::FinishRecording(*(FRHICommandListBase **)(lVar1 + 0x40));
  }
  FTaskTagScope::~FTaskTagScope(&local_28);
  FTaskTagScope::~FTaskTagScope(&local_18);
  return;
}

// AllocParameters<Nanite::FClearStreamingRequestCount_CS::FParameters> @ 147f94130

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FParameters * __thiscall
FRDGBuilder::AllocParameters<Nanite::FClearStreamingRequestCount_CS::FParameters>(FRDGBuilder *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  FParameters *pFVar6;
  undefined8 *local_18 [2];
  
  puVar5 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x20,0x10);
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)0x0;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FParameters *)(*pcVar2)();
      return pFVar6;
    }
  }
  else {
    puVar5[2] = 0;
    *puVar5 = &___7__TObject_VFParameters_FClearStreamingRequestCount_CS_Nanite___FRDGAllocator__6B_
    ;
  }
  local_18[0] = puVar5;
  if (((undefined8 **)this->_padding_ <= local_18) &&
     (local_18 < (undefined8 **)this->_padding_ + *(int *)((longlong)&this->_padding_ + 4))) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FParameters *)(*pcVar2)();
      return pFVar6;
    }
  }
  iVar4 = (int)this->_padding_;
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&this->_padding_,piVar1);
  }
  *(int *)&this->_padding_ = iVar4 + 1;
  *(undefined8 **)(this->_padding_ + (longlong)iVar4 * 8) = local_18[0];
  return (FParameters *)(puVar5 + 2);
}

// AllocParameters<Nanite::FScatterUpdates_CS::FParameters> @ 147f94250

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FParameters * __thiscall
FRDGBuilder::AllocParameters<Nanite::FScatterUpdates_CS::FParameters>(FRDGBuilder *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  FParameters *pFVar6;
  undefined8 *local_18 [2];
  
  puVar5 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x30,0x10);
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)0x0;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FParameters *)(*pcVar2)();
      return pFVar6;
    }
  }
  else {
    puVar5[3] = 0;
    *puVar5 = &___7__TObject_VFParameters_FScatterUpdates_CS_Nanite___FRDGAllocator__6B_;
    puVar5[4] = 0;
  }
  local_18[0] = puVar5;
  if (((undefined8 **)this->_padding_ <= local_18) &&
     (local_18 < (undefined8 **)this->_padding_ + *(int *)((longlong)&this->_padding_ + 4))) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FParameters *)(*pcVar2)();
      return pFVar6;
    }
  }
  iVar4 = (int)this->_padding_;
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&this->_padding_,piVar1);
  }
  *(int *)&this->_padding_ = iVar4 + 1;
  *(undefined8 **)(this->_padding_ + (longlong)iVar4 * 8) = local_18[0];
  return (FParameters *)(puVar5 + 2);
}

// AllocParameters<Nanite::FTranscodePageToGPU_CS::FParameters> @ 147f94380

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FParameters * __thiscall
FRDGBuilder::AllocParameters<Nanite::FTranscodePageToGPU_CS::FParameters>(FRDGBuilder *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  FParameters *pFVar6;
  undefined8 *local_18 [2];
  
  puVar5 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x50,0x10);
  if (puVar5 == (undefined8 *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FParameters *)(*pcVar2)();
      return pFVar6;
    }
  }
  else {
    *puVar5 = &___7__TObject_VFParameters_FTranscodePageToGPU_CS_Nanite___FRDGAllocator__6B_;
    puVar5[6] = 0;
    puVar5[7] = 0;
    puVar5[8] = 0;
    puVar5[9] = 0;
  }
  local_18[0] = puVar5;
  if (((undefined8 **)this->_padding_ <= local_18) &&
     (local_18 < (undefined8 **)this->_padding_ + *(int *)((longlong)&this->_padding_ + 4))) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FParameters *)(*pcVar2)();
      return pFVar6;
    }
  }
  iVar4 = (int)this->_padding_;
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&this->_padding_,piVar1);
  }
  *(int *)&this->_padding_ = iVar4 + 1;
  *(undefined8 **)(this->_padding_ + (longlong)iVar4 * 8) = local_18[0];
  return (FParameters *)(puVar5 + 2);
}

// AllocParameters<Nanite::FMemcpy_CS::FParameters> @ 148433b50

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FParameters * __thiscall
FRDGBuilder::AllocParameters<Nanite::FMemcpy_CS::FParameters>(FRDGBuilder *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  FParameters *pFVar6;
  undefined8 *local_18 [2];
  
  puVar5 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x30,0x10);
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)0x0;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FParameters *)(*pcVar2)();
      return pFVar6;
    }
  }
  else {
    puVar5[4] = 0;
    *puVar5 = &___7__TObject_VFParameters_FMemcpy_CS_Nanite___FRDGAllocator__6B_;
  }
  local_18[0] = puVar5;
  if (((undefined8 **)this->_padding_ <= local_18) &&
     (local_18 < (undefined8 **)this->_padding_ + *(int *)((longlong)&this->_padding_ + 4))) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FParameters *)(*pcVar2)();
      return pFVar6;
    }
  }
  iVar4 = (int)this->_padding_;
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&this->_padding_,piVar1);
  }
  *(int *)&this->_padding_ = iVar4 + 1;
  *(undefined8 **)(this->_padding_ + (longlong)iVar4 * 8) = local_18[0];
  return (FParameters *)(puVar5 + 2);
}

// AllocParameters<FSSProfilePreIntegratedPS::FParameters> @ 148433c70

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FParameters * __thiscall
FRDGBuilder::AllocParameters<FSSProfilePreIntegratedPS::FParameters>(FRDGBuilder *this)

{
  FParameters *pFVar1;
  
  pFVar1 = FRDGAllocator::Alloc<FSSProfilePreIntegratedPS::FParameters>
                     ((FRDGAllocator *)&this->_padding_);
  return pFVar1;
}

// AllocParameters<FSpecularProfileConvolveCS::FParameters> @ 148433c80

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FParameters * __thiscall
FRDGBuilder::AllocParameters<FSpecularProfileConvolveCS::FParameters>(FRDGBuilder *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  FParameters *pFVar6;
  undefined8 *local_18 [2];
  
  puVar5 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x40,0x10);
  if (puVar5 == (undefined8 *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FParameters *)(*pcVar2)();
      return pFVar6;
    }
  }
  else {
    *puVar5 = &___7__TObject_VFParameters_FSpecularProfileConvolveCS___FRDGAllocator__6B_;
    puVar5[5] = 0;
    puVar5[6] = 0;
    puVar5[7] = 0;
  }
  local_18[0] = puVar5;
  if (((undefined8 **)this->_padding_ <= local_18) &&
     (local_18 < (undefined8 **)this->_padding_ + *(int *)((longlong)&this->_padding_ + 4))) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FParameters *)(*pcVar2)();
      return pFVar6;
    }
  }
  iVar4 = (int)this->_padding_;
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&this->_padding_,piVar1);
  }
  *(int *)&this->_padding_ = iVar4 + 1;
  *(undefined8 **)(this->_padding_ + (longlong)iVar4 * 8) = local_18[0];
  return (FParameters *)(puVar5 + 2);
}

// AllocParameters<FSpecularProfileCopyCS::FParameters> @ 148433db0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FParameters * __thiscall
FRDGBuilder::AllocParameters<FSpecularProfileCopyCS::FParameters>(FRDGBuilder *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  FParameters *pFVar6;
  undefined8 *local_18 [2];
  
  puVar5 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x50,0x10);
  if (puVar5 == (undefined8 *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FParameters *)(*pcVar2)();
      return pFVar6;
    }
  }
  else {
    *puVar5 = &___7__TObject_VFParameters_FSpecularProfileCopyCS___FRDGAllocator__6B_;
    puVar5[2] = 0;
    puVar5[3] = 0;
    puVar5[7] = 0;
    puVar5[8] = 0;
    puVar5[9] = 0;
  }
  local_18[0] = puVar5;
  if (((undefined8 **)this->_padding_ <= local_18) &&
     (local_18 < (undefined8 **)this->_padding_ + *(int *)((longlong)&this->_padding_ + 4))) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FParameters *)(*pcVar2)();
      return pFVar6;
    }
  }
  iVar4 = (int)this->_padding_;
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&this->_padding_,piVar1);
  }
  *(int *)&this->_padding_ = iVar4 + 1;
  *(undefined8 **)(this->_padding_ + (longlong)iVar4 * 8) = local_18[0];
  return (FParameters *)(puVar5 + 2);
}

// AllocObject<FSkeletalMeshUpdater::FTaskData,FRDGBuilder_&,enum_ERHIPipeline_&> @ 1485e6910

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FTaskData * __thiscall
FRDGBuilder::AllocObject<FSkeletalMeshUpdater::FTaskData,FRDGBuilder_&,enum_ERHIPipeline_&>
          (FRDGBuilder *this,FRDGBuilder *param_1,ERHIPipeline *param_2)

{
  FTaskData *pFVar1;
  
  pFVar1 = FRDGAllocator::Alloc<FSkeletalMeshUpdater::FTaskData,FRDGBuilder_&,enum_ERHIPipeline_&>
                     ((FRDGAllocator *)&this->_padding_,param_1,param_2);
  return pFVar1;
}

// AllocPOD<UE::SVT::FStreamingDebugInfo> @ 1487049f0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FStreamingDebugInfo * __thiscall
FRDGBuilder::AllocPOD<UE::SVT::FStreamingDebugInfo>(FRDGBuilder *this)

{
  FStreamingDebugInfo *pFVar1;
  
  pFVar1 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x18,8);
  return pFVar1;
}

// AllocPODArray<float> @ 148704a10

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

float * __thiscall FRDGBuilder::AllocPODArray<float>(FRDGBuilder *this,uint param_1)

{
  float *pfVar1;
  
  pfVar1 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,(ulonglong)param_1 << 2,4);
  return pfVar1;
}

// AllocPODArray<UE::SVT::FStreamingDebugInfo::FSVT::FInstance> @ 148704a30

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FInstance * __thiscall
FRDGBuilder::AllocPODArray<UE::SVT::FStreamingDebugInfo::FSVT::FInstance>
          (FRDGBuilder *this,uint param_1)

{
  FInstance *pFVar1;
  
  pFVar1 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,(ulonglong)param_1 * 0x1c,4);
  return pFVar1;
}

// AllocPODArray<UE::SVT::FStreamingDebugInfo::FSVT> @ 148704a50

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FSVT * __thiscall
FRDGBuilder::AllocPODArray<UE::SVT::FStreamingDebugInfo::FSVT>(FRDGBuilder *this,uint param_1)

{
  FSVT *pFVar1;
  
  pFVar1 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,(ulonglong)param_1 * 0x28,8);
  return pFVar1;
}

// AllocParameters<FSparseVolumeTextureUpdateFromSparseBufferCS::FParameters> @ 148704a70

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FParameters * __thiscall
FRDGBuilder::AllocParameters<FSparseVolumeTextureUpdateFromSparseBufferCS::FParameters>
          (FRDGBuilder *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  FParameters *pFVar6;
  undefined8 *local_18 [2];
  
  puVar5 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x90,0x10);
  if (puVar5 == (undefined8 *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FParameters *)(*pcVar2)();
      return pFVar6;
    }
  }
  else {
    *(undefined8 *)((longlong)puVar5 + 0x5c) = 0x3f800000;
    *puVar5 = &
              ___7__TObject_VFParameters_FSparseVolumeTextureUpdateFromSparseBufferCS___FRDGAllocator__6B_
    ;
    puVar5[2] = 0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = 0;
    puVar5[6] = 0;
    puVar5[7] = 0;
    puVar5[8] = 0;
    puVar5[10] = 0;
    *(undefined4 *)(puVar5 + 0xb) = 0;
    *(undefined8 *)((longlong)puVar5 + 100) = 0;
    *(undefined4 *)((longlong)puVar5 + 0x6c) = 0x3f800000;
  }
  local_18[0] = puVar5;
  if (((undefined8 **)this->_padding_ <= local_18) &&
     (local_18 < (undefined8 **)this->_padding_ + *(int *)((longlong)&this->_padding_ + 4))) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FParameters *)(*pcVar2)();
      return pFVar6;
    }
  }
  iVar4 = (int)this->_padding_;
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&this->_padding_,piVar1);
  }
  *(int *)&this->_padding_ = iVar4 + 1;
  *(undefined8 **)(this->_padding_ + (longlong)iVar4 * 8) = local_18[0];
  return (FParameters *)(puVar5 + 2);
}

// AllocParameters<FSparseVolumeTextureUpdatePageTableCS::FParameters> @ 148704bc0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FParameters * __thiscall
FRDGBuilder::AllocParameters<FSparseVolumeTextureUpdatePageTableCS::FParameters>(FRDGBuilder *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  FParameters *pFVar6;
  undefined8 *local_18 [2];
  
  puVar5 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x30,0x10);
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)0x0;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FParameters *)(*pcVar2)();
      return pFVar6;
    }
  }
  else {
    puVar5[2] = 0;
    *puVar5 = &___7__TObject_VFParameters_FSparseVolumeTextureUpdatePageTableCS___FRDGAllocator__6B_
    ;
    puVar5[3] = 0;
  }
  local_18[0] = puVar5;
  if (((undefined8 **)this->_padding_ <= local_18) &&
     (local_18 < (undefined8 **)this->_padding_ + *(int *)((longlong)&this->_padding_ + 4))) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FParameters *)(*pcVar2)();
      return pFVar6;
    }
  }
  iVar4 = (int)this->_padding_;
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&this->_padding_,piVar1);
  }
  *(int *)&this->_padding_ = iVar4 + 1;
  *(undefined8 **)(this->_padding_ + (longlong)iVar4 * 8) = local_18[0];
  return (FParameters *)(puVar5 + 2);
}

// AllocParameters<FRenderTextureDeprecationPass> @ 148769590

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRenderTextureDeprecationPass * __thiscall
FRDGBuilder::AllocParameters<FRenderTextureDeprecationPass>(FRDGBuilder *this)

{
  FRenderTextureDeprecationPass *pFVar1;
  
  pFVar1 = FRDGAllocator::Alloc<FRenderTextureDeprecationPass>((FRDGAllocator *)&this->_padding_);
  return pFVar1;
}

// AllocObject<FSceneView_const_,FSceneViewInitOptions_&> @ 1488a4cd0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FSceneView * __thiscall
FRDGBuilder::AllocObject<FSceneView_const_,FSceneViewInitOptions_&>
          (FRDGBuilder *this,FSceneViewInitOptions *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  FSceneView *pFVar6;
  undefined8 *local_18 [2];
  
  puVar5 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x1c40,0x10);
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)0x0;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FSceneView *)(*pcVar2)();
      return pFVar6;
    }
  }
  else {
    *puVar5 = &___7__TObject___CBVFSceneView___FRDGAllocator__6B_;
    FSceneView::FSceneView((FSceneView *)(puVar5 + 2),param_1);
  }
  local_18[0] = puVar5;
  if (((undefined8 **)this->_padding_ <= local_18) &&
     (local_18 < (undefined8 **)this->_padding_ + *(int *)((longlong)&this->_padding_ + 4))) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FSceneView *)(*pcVar2)();
      return pFVar6;
    }
  }
  iVar4 = (int)this->_padding_;
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&this->_padding_,piVar1);
  }
  *(int *)&this->_padding_ = iVar4 + 1;
  *(undefined8 **)(this->_padding_ + (longlong)iVar4 * 8) = local_18[0];
  return (FSceneView *)(puVar5 + 2);
}

// AllocObject<FSceneViewFamily_const_,FSceneViewFamily::ConstructionValues_&> @ 1488a4e00

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FSceneViewFamily * __thiscall
FRDGBuilder::AllocObject<FSceneViewFamily_const_,FSceneViewFamily::ConstructionValues_&>
          (FRDGBuilder *this,ConstructionValues *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  FSceneViewFamily *pFVar6;
  undefined8 *local_18 [2];
  
  puVar5 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x1c0,0x10);
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)0x0;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FSceneViewFamily *)(*pcVar2)();
      return pFVar6;
    }
  }
  else {
    *puVar5 = &___7__TObject___CBVFSceneViewFamily___FRDGAllocator__6B_;
    FSceneViewFamily::FSceneViewFamily((FSceneViewFamily *)(puVar5 + 1),param_1);
  }
  local_18[0] = puVar5;
  if (((undefined8 **)this->_padding_ <= local_18) &&
     (local_18 < (undefined8 **)this->_padding_ + *(int *)((longlong)&this->_padding_ + 4))) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FSceneViewFamily *)(*pcVar2)();
      return pFVar6;
    }
  }
  iVar4 = (int)this->_padding_;
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&this->_padding_,piVar1);
  }
  *(int *)&this->_padding_ = iVar4 + 1;
  *(undefined8 **)(this->_padding_ + (longlong)iVar4 * 8) = local_18[0];
  return (FSceneViewFamily *)(puVar5 + 1);
}

// AllocObject<FMeshBatch> @ 1488a5190

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FMeshBatch * __thiscall FRDGBuilder::AllocObject<FMeshBatch>(FRDGBuilder *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  FMeshBatch *pFVar6;
  undefined8 *puVar7;
  undefined8 *local_18 [2];
  
  puVar5 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0xe8,0x10);
  if (puVar5 == (undefined8 *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FMeshBatch *)(*pcVar2)();
      return pFVar6;
    }
  }
  else {
    *puVar5 = &___7__TObject_UFMeshBatch___FRDGAllocator__6B_;
    puVar5[0x14] = 0;
    *(undefined4 *)(puVar5 + 0x15) = 0;
    *(undefined4 *)((longlong)puVar5 + 0xac) = 1;
    puVar5[0x16] = 0;
    puVar5[0x17] = 0;
    puVar5[0x18] = 0;
    *(undefined4 *)(puVar5 + 0x1a) = 0;
    *(undefined2 *)(puVar5 + 0x1b) = 0;
    puVar5[0x19] = 0xffffffffffffffff;
    *(undefined4 *)((longlong)puVar5 + 0xd4) = 0xffffffff;
    *(uint *)((longlong)puVar5 + 0xdc) = *(uint *)((longlong)puVar5 + 0xdc) & 0xf081803c | 0x81803c;
    *(undefined1 *)((longlong)puVar5 + 0xda) = 0xff;
    *(undefined2 *)(puVar5 + 0x1c) = 0xffff;
    *(undefined4 *)(puVar5 + 0x15) = 1;
    puVar7 = (undefined8 *)puVar5[0x14];
    if ((undefined8 *)puVar5[0x14] == (undefined8 *)0x0) {
      puVar7 = puVar5 + 1;
    }
    DefaultConstructItems<FMeshBatchElement,int>(puVar7,1);
  }
  local_18[0] = puVar5;
  if (((undefined8 **)this->_padding_ <= local_18) &&
     (local_18 < (undefined8 **)this->_padding_ + *(int *)((longlong)&this->_padding_ + 4))) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FMeshBatch *)(*pcVar2)();
      return pFVar6;
    }
  }
  iVar4 = (int)this->_padding_;
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&this->_padding_,piVar1);
  }
  *(int *)&this->_padding_ = iVar4 + 1;
  *(undefined8 **)(this->_padding_ + (longlong)iVar4 * 8) = local_18[0];
  return (FMeshBatch *)(puVar5 + 1);
}

// AllocObject<TSharedPtr<FCanvasTileRendererItem::FRenderData,1>,TSharedPtr<FCanvasTileRendererItem::FRenderData,1>_> @ 1488a5350

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TSharedPtr<FCanvasTileRendererItem::FRenderData,1> * __thiscall
FRDGBuilder::
AllocObject<TSharedPtr<FCanvasTileRendererItem::FRenderData,1>,TSharedPtr<FCanvasTileRendererItem::FRenderData,1>_>
          (FRDGBuilder *this,TSharedPtr<FCanvasTileRendererItem::FRenderData,1> *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  TSharedPtr<FCanvasTileRendererItem::FRenderData,1> *pTVar6;
  undefined8 *local_18 [2];
  
  puVar5 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x18,0x10);
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)0x0;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TSharedPtr<FCanvasTileRendererItem::FRenderData,1> *)(*pcVar2)();
      return pTVar6;
    }
  }
  else {
    *puVar5 = &
              ___7__TObject_V__TSharedPtr_VFRenderData_FCanvasTileRendererItem___00___FRDGAllocator__6B_
    ;
    puVar5[1] = param_1->Object;
    puVar5[2] = (param_1->SharedReferenceCount).ReferenceController;
    (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    param_1->Object = (FRenderData *)0x0;
  }
  local_18[0] = puVar5;
  if (((undefined8 **)this->_padding_ <= local_18) &&
     (local_18 < (undefined8 **)this->_padding_ + *(int *)((longlong)&this->_padding_ + 4))) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TSharedPtr<FCanvasTileRendererItem::FRenderData,1> *)(*pcVar2)();
      return pTVar6;
    }
  }
  iVar4 = (int)this->_padding_;
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&this->_padding_,piVar1);
  }
  *(int *)&this->_padding_ = iVar4 + 1;
  *(undefined8 **)(this->_padding_ + (longlong)iVar4 * 8) = local_18[0];
  return (TSharedPtr<FCanvasTileRendererItem::FRenderData,1> *)(puVar5 + 1);
}

// AllocObject<TSharedPtr<FCanvasTriangleRendererItem::FRenderData,1>,TSharedPtr<FCanvasTriangleRendererItem::FRenderData,1>_> @ 1488a5490

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TSharedPtr<FCanvasTriangleRendererItem::FRenderData,1> * __thiscall
FRDGBuilder::
AllocObject<TSharedPtr<FCanvasTriangleRendererItem::FRenderData,1>,TSharedPtr<FCanvasTriangleRendererItem::FRenderData,1>_>
          (FRDGBuilder *this,TSharedPtr<FCanvasTriangleRendererItem::FRenderData,1> *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  TSharedPtr<FCanvasTriangleRendererItem::FRenderData,1> *pTVar6;
  undefined8 *local_18 [2];
  
  puVar5 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x18,0x10);
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)0x0;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TSharedPtr<FCanvasTriangleRendererItem::FRenderData,1> *)(*pcVar2)();
      return pTVar6;
    }
  }
  else {
    *puVar5 = &
              ___7__TObject_V__TSharedPtr_VFRenderData_FCanvasTriangleRendererItem___00___FRDGAllocator__6B_
    ;
    puVar5[1] = param_1->Object;
    puVar5[2] = (param_1->SharedReferenceCount).ReferenceController;
    (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    param_1->Object = (FRenderData *)0x0;
  }
  local_18[0] = puVar5;
  if (((undefined8 **)this->_padding_ <= local_18) &&
     (local_18 < (undefined8 **)this->_padding_ + *(int *)((longlong)&this->_padding_ + 4))) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TSharedPtr<FCanvasTriangleRendererItem::FRenderData,1> *)(*pcVar2)();
      return pTVar6;
    }
  }
  iVar4 = (int)this->_padding_;
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&this->_padding_,piVar1);
  }
  *(int *)&this->_padding_ = iVar4 + 1;
  *(undefined8 **)(this->_padding_ + (longlong)iVar4 * 8) = local_18[0];
  return (TSharedPtr<FCanvasTriangleRendererItem::FRenderData,1> *)(puVar5 + 1);
}

// AllocObject<FSceneViewFamily,FSceneViewFamily::ConstructionValues_&> @ 1488a55d0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FSceneViewFamily * __thiscall
FRDGBuilder::AllocObject<FSceneViewFamily,FSceneViewFamily::ConstructionValues_&>
          (FRDGBuilder *this,ConstructionValues *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  FSceneViewFamily *pFVar6;
  undefined8 *local_18 [2];
  
  puVar5 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x1c0,0x10);
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)0x0;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FSceneViewFamily *)(*pcVar2)();
      return pFVar6;
    }
  }
  else {
    *puVar5 = &___7__TObject_VFSceneViewFamily___FRDGAllocator__6B_;
    FSceneViewFamily::FSceneViewFamily((FSceneViewFamily *)(puVar5 + 1),param_1);
  }
  local_18[0] = puVar5;
  if (((undefined8 **)this->_padding_ <= local_18) &&
     (local_18 < (undefined8 **)this->_padding_ + *(int *)((longlong)&this->_padding_ + 4))) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FSceneViewFamily *)(*pcVar2)();
      return pFVar6;
    }
  }
  iVar4 = (int)this->_padding_;
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&this->_padding_,piVar1);
  }
  *(int *)&this->_padding_ = iVar4 + 1;
  *(undefined8 **)(this->_padding_ + (longlong)iVar4 * 8) = local_18[0];
  return (FSceneViewFamily *)(puVar5 + 1);
}

// AllocObject<FCanvas,FRDGCanvasRenderTarget_*,FHitProxyConsumer_*_&,FGameTime_const_&,enum_ERHIFeatureLevel::Type_&,float_&> @ 1488f3680

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FCanvas * __thiscall
FRDGBuilder::
AllocObject<FCanvas,FRDGCanvasRenderTarget_*,FHitProxyConsumer_*_&,FGameTime_const_&,enum_ERHIFeatureLevel::Type_&,float_&>
          (FRDGBuilder *this,FRDGCanvasRenderTarget **param_1,FHitProxyConsumer **param_2,
          FGameTime *param_3,Type *param_4,float *param_5)

{
  FCanvas *pFVar1;
  
  pFVar1 = FRDGAllocator::
           Alloc<FCanvas,FRDGCanvasRenderTarget_*,FHitProxyConsumer_*_&,FGameTime_const_&,enum_ERHIFeatureLevel::Type_&,float_&>
                     ((FRDGAllocator *)&this->_padding_,param_1,param_2,param_3,param_4,param_5);
  return pFVar1;
}

// AllocObject<FRDGCanvasRenderTarget,FRDGTexture_*_&> @ 1488f3690

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGCanvasRenderTarget * __thiscall
FRDGBuilder::AllocObject<FRDGCanvasRenderTarget,FRDGTexture_*_&>
          (FRDGBuilder *this,FRDGTexture **param_1)

{
  int *piVar1;
  FRDGTexture *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FRDGCanvasRenderTarget *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x20,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    puVar6 = (undefined8 *)0x0;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FRDGCanvasRenderTarget *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *puVar6 = &___7__TObject_VFRDGCanvasRenderTarget___FRDGAllocator__6B_;
    pFVar2 = *param_1;
    puVar6[1] = &___7FRDGCanvasRenderTarget__6B_;
    puVar6[3] = pFVar2;
    puVar6[2] = 0;
  }
  local_18[0] = puVar6;
  if (((undefined8 **)this->_padding_ <= local_18) &&
     (local_18 < (undefined8 **)this->_padding_ + *(int *)((longlong)&this->_padding_ + 4))) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FRDGCanvasRenderTarget *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (int)this->_padding_;
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&this->_padding_,piVar1);
  }
  *(int *)&this->_padding_ = iVar5 + 1;
  *(undefined8 **)(this->_padding_ + (longlong)iVar5 * 8) = local_18[0];
  return (FRDGCanvasRenderTarget *)(puVar6 + 1);
}

// AllocPODArray<FVirtualTextureUploadCache::FTileEntry> @ 1489a11b0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FTileEntry * __thiscall
FRDGBuilder::AllocPODArray<FVirtualTextureUploadCache::FTileEntry>(FRDGBuilder *this,uint param_1)

{
  FTileEntry *pFVar1;
  
  pFVar1 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,(ulonglong)param_1 * 0x28,8);
  return pFVar1;
}

// AllocPODArray<FVTUploadTileBufferExt> @ 1489a11d0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FVTUploadTileBufferExt * __thiscall
FRDGBuilder::AllocPODArray<FVTUploadTileBufferExt>(FRDGBuilder *this,uint param_1)

{
  FVTUploadTileBufferExt *pFVar1;
  
  pFVar1 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,(ulonglong)param_1 * 0x18,8);
  return pFVar1;
}

// AllocParameters<VirtualTextureAdapter::FCopyToOutputParameters> @ 1489a11f0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FCopyToOutputParameters * __thiscall
FRDGBuilder::AllocParameters<VirtualTextureAdapter::FCopyToOutputParameters>(FRDGBuilder *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  FCopyToOutputParameters *pFVar6;
  undefined8 *local_18 [2];
  
  puVar5 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x40,0x10);
  if (puVar5 == (undefined8 *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FCopyToOutputParameters *)(*pcVar2)();
      return pFVar6;
    }
  }
  else {
    *puVar5 = &___7__TObject_VFCopyToOutputParameters_VirtualTextureAdapter___FRDGAllocator__6B_;
    puVar5[2] = 0;
    *(undefined4 *)(puVar5 + 3) = 0;
    *(undefined8 *)((longlong)puVar5 + 0x1c) = 0;
    puVar5[5] = 0;
    *(undefined4 *)(puVar5 + 6) = 0;
    *(undefined8 *)((longlong)puVar5 + 0x34) = 0;
  }
  local_18[0] = puVar5;
  if (((undefined8 **)this->_padding_ <= local_18) &&
     (local_18 < (undefined8 **)this->_padding_ + *(int *)((longlong)&this->_padding_ + 4))) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FCopyToOutputParameters *)(*pcVar2)();
      return pFVar6;
    }
  }
  iVar4 = (int)this->_padding_;
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&this->_padding_,piVar1);
  }
  *(int *)&this->_padding_ = iVar4 + 1;
  *(undefined8 **)(this->_padding_ + (longlong)iVar4 * 8) = local_18[0];
  return (FCopyToOutputParameters *)(puVar5 + 2);
}

// AllocParameters<FCopyCompressCS::FParameters> @ 1489a1320

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FParameters * __thiscall
FRDGBuilder::AllocParameters<FCopyCompressCS::FParameters>(FRDGBuilder *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  FParameters *pFVar6;
  undefined8 *local_18 [2];
  
  puVar5 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x70,0x10);
  if (puVar5 == (undefined8 *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FParameters *)(*pcVar2)();
      return pFVar6;
    }
  }
  else {
    *puVar5 = &___7__TObject_VFParameters_FCopyCompressCS___FRDGAllocator__6B_;
    puVar5[2] = 0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = 0;
    puVar5[6] = 0;
    puVar5[7] = 0;
  }
  local_18[0] = puVar5;
  if (((undefined8 **)this->_padding_ <= local_18) &&
     (local_18 < (undefined8 **)this->_padding_ + *(int *)((longlong)&this->_padding_ + 4))) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FParameters *)(*pcVar2)();
      return pFVar6;
    }
  }
  iVar4 = (int)this->_padding_;
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&this->_padding_,piVar1);
  }
  *(int *)&this->_padding_ = iVar4 + 1;
  *(undefined8 **)(this->_padding_ + (longlong)iVar4 * 8) = local_18[0];
  return (FParameters *)(puVar5 + 2);
}

// AllocParameters<FVirtualTextureUploadCacheParameters> @ 1489a1450

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FVirtualTextureUploadCacheParameters * __thiscall
FRDGBuilder::AllocParameters<FVirtualTextureUploadCacheParameters>(FRDGBuilder *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  FVirtualTextureUploadCacheParameters *pFVar6;
  undefined8 *local_18 [2];
  
  puVar5 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x20,0x10);
  if (puVar5 == (undefined8 *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FVirtualTextureUploadCacheParameters *)(*pcVar2)();
      return pFVar6;
    }
  }
  else {
    *puVar5 = &___7__TObject_VFVirtualTextureUploadCacheParameters___FRDGAllocator__6B_;
    puVar5[2] = 0;
    puVar5[3] = 0;
  }
  local_18[0] = puVar5;
  if (((undefined8 **)this->_padding_ <= local_18) &&
     (local_18 < (undefined8 **)this->_padding_ + *(int *)((longlong)&this->_padding_ + 4))) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FVirtualTextureUploadCacheParameters *)(*pcVar2)();
      return pFVar6;
    }
  }
  iVar4 = (int)this->_padding_;
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&this->_padding_,piVar1);
  }
  *(int *)&this->_padding_ = iVar4 + 1;
  *(undefined8 **)(this->_padding_ + (longlong)iVar4 * 8) = local_18[0];
  return (FVirtualTextureUploadCacheParameters *)(puVar5 + 2);
}

// AllocParameters<FFakeStereoRenderingDevice::FScreenUnwrapSlicesPass> @ 148b081a0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FScreenUnwrapSlicesPass * __thiscall
FRDGBuilder::AllocParameters<FFakeStereoRenderingDevice::FScreenUnwrapSlicesPass>(FRDGBuilder *this)

{
  FScreenUnwrapSlicesPass *pFVar1;
  
  pFVar1 = FRDGAllocator::Alloc<FFakeStereoRenderingDevice::FScreenUnwrapSlicesPass>
                     ((FRDGAllocator *)&this->_padding_);
  return pFVar1;
}

