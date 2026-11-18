// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 3

// FRenderTargets @ 145b445b0

FRenderTargets * __thiscall
FGfxPipelineDesc::FRenderTargets::FRenderTargets(FRenderTargets *this,FRenderTargets *param_1)

{
  int *piVar1;
  TArray<FGfxPipelineDesc::FRenderTargets::FAttachmentRef,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FGfxPipelineDesc::FRenderTargets::FAttachmentDesc,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  ulong64 uVar6;
  double dVar7;
  undefined4 uVar8;
  
  piVar1 = &(this->ColorAttachments).ArrayMax;
  (this->ColorAttachments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar4 = (param_1->ColorAttachments).ArrayNum;
  pFVar5 = (param_1->ColorAttachments).AllocatorInstance.Data;
  (this->ColorAttachments).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar4,0,(ForAnyElementType *)this,iVar4,piVar1);
    memcpy((this->ColorAttachments).AllocatorInstance.Data,pFVar5,(longlong)iVar4 << 4);
  }
  pTVar2 = &this->ResolveAttachments;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->ResolveAttachments).ArrayMax;
  iVar4 = (param_1->ResolveAttachments).ArrayNum;
  pFVar5 = (param_1->ResolveAttachments).AllocatorInstance.Data;
  (this->ResolveAttachments).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar4,0,&pTVar2->AllocatorInstance,iVar4,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,pFVar5,(longlong)iVar4 << 4);
  }
  uVar8 = *(undefined4 *)&(param_1->Depth).field_0x4;
  uVar6 = (param_1->Depth).Layout;
  pTVar3 = &this->Descriptions;
  (this->Depth).Attachment = (param_1->Depth).Attachment;
  *(undefined4 *)&(this->Depth).field_0x4 = uVar8;
  (this->Depth).Layout = uVar6;
  (this->Stencil).Layout = (param_1->Stencil).Layout;
  piVar1 = &(this->Descriptions).ArrayMax;
  uVar8 = *(undefined4 *)&(param_1->FragmentDensity).field_0x4;
  uVar6 = (param_1->FragmentDensity).Layout;
  (this->FragmentDensity).Attachment = (param_1->FragmentDensity).Attachment;
  *(undefined4 *)&(this->FragmentDensity).field_0x4 = uVar8;
  (this->FragmentDensity).Layout = uVar6;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar4 = (param_1->Descriptions).ArrayNum;
  pFVar5 = (param_1->Descriptions).AllocatorInstance.Data;
  (this->Descriptions).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,iVar4,0,&pTVar3->AllocatorInstance,iVar4,piVar1);
    memcpy((pTVar3->AllocatorInstance).Data,pFVar5,(longlong)iVar4 << 5);
  }
  uVar6 = (param_1->StencilDescription).FinalLayout;
  (this->StencilDescription).InitialLayout = (param_1->StencilDescription).InitialLayout;
  (this->StencilDescription).FinalLayout = uVar6;
  this->NumAttachments = param_1->NumAttachments;
  this->NumColorAttachments = param_1->NumColorAttachments;
  this->bHasDepthStencil = param_1->bHasDepthStencil;
  this->bHasResolveAttachments = param_1->bHasResolveAttachments;
  this->bHasDepthStencilResolve = param_1->bHasDepthStencilResolve;
  this->bHasFragmentDensityAttachment = param_1->bHasFragmentDensityAttachment;
  this->NumUsedClearValues = param_1->NumUsedClearValues;
  this->RenderPassCompatibleHash = param_1->RenderPassCompatibleHash;
  dVar7 = (param_1->Extent3D).field0_0x0._s_0.Y;
  (this->Extent3D).field0_0x0._s_0.X = (param_1->Extent3D).field0_0x0._s_0.X;
  (this->Extent3D).field0_0x0._s_0.Y = dVar7;
  (this->Extent3D).field0_0x0._s_0.Z = (param_1->Extent3D).field0_0x0._s_0.Z;
  return this;
}

// ReadFrom @ 145b76660

/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

void __thiscall
FGfxPipelineDesc::FRenderTargets::ReadFrom(FRenderTargets *this,FVulkanRenderTargetLayout *param_1)

{
  int *piVar1;
  VkImageLayout *pVVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  VkAttachmentDescription *pVVar10;
  
  this->NumAttachments = param_1->NumAttachmentDescriptions;
  this->NumColorAttachments = param_1->NumColorAttachments;
  this->bHasDepthStencil = param_1->bHasDepthStencil != '\0';
  this->bHasResolveAttachments = param_1->bHasResolveAttachments != '\0';
  this->bHasDepthStencilResolve = param_1->bHasDepthStencilResolve != '\0';
  this->bHasFragmentDensityAttachment = param_1->bHasFragmentDensityAttachment != '\0';
  this->NumUsedClearValues = param_1->NumUsedClearValues;
  if (param_1->bCalculatedHash == false) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("bCalculatedHash",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRenderTargetLayout.h"
                       ,0x10,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  this->RenderPassCompatibleHash = param_1->RenderPassCompatibleHash;
  (this->Extent3D).field0_0x0._s_0.X = (double)(param_1->Extent).Extent3D.width;
  (this->Extent3D).field0_0x0._s_0.Y = (double)(param_1->Extent).Extent3D.height;
  (this->Extent3D).field0_0x0._s_0.Z = (double)(param_1->Extent).Extent3D.depth;
  iVar6 = (this->ColorAttachments).ArrayNum;
  if (iVar6 == (this->ColorAttachments).ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)this,&(this->ColorAttachments).ArrayMax);
  }
  (this->ColorAttachments).ArrayNum = iVar6 + 1;
  pFVar3 = (this->ColorAttachments).AllocatorInstance.Data;
  *(uint *)(pFVar3 + (longlong)iVar6 * 0x10) = param_1->ColorReferences[0].attachment;
  *(longlong *)(pFVar3 + (longlong)iVar6 * 0x10 + 8) =
       (longlong)(int)param_1->ColorReferences[0].layout;
  iVar6 = (this->ColorAttachments).ArrayNum;
  if (iVar6 == (this->ColorAttachments).ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)this,&(this->ColorAttachments).ArrayMax);
  }
  (this->ColorAttachments).ArrayNum = iVar6 + 1;
  pFVar3 = (this->ColorAttachments).AllocatorInstance.Data;
  *(uint *)(pFVar3 + (longlong)iVar6 * 0x10) = param_1->ColorReferences[1].attachment;
  *(longlong *)(pFVar3 + (longlong)iVar6 * 0x10 + 8) =
       (longlong)(int)param_1->ColorReferences[1].layout;
  iVar6 = (this->ColorAttachments).ArrayNum;
  if (iVar6 == (this->ColorAttachments).ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)this,&(this->ColorAttachments).ArrayMax);
  }
  (this->ColorAttachments).ArrayNum = iVar6 + 1;
  pFVar3 = (this->ColorAttachments).AllocatorInstance.Data;
  *(uint *)(pFVar3 + (longlong)iVar6 * 0x10) = param_1->ColorReferences[2].attachment;
  *(longlong *)(pFVar3 + (longlong)iVar6 * 0x10 + 8) =
       (longlong)(int)param_1->ColorReferences[2].layout;
  iVar6 = (this->ColorAttachments).ArrayNum;
  if (iVar6 == (this->ColorAttachments).ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)this,&(this->ColorAttachments).ArrayMax);
  }
  (this->ColorAttachments).ArrayNum = iVar6 + 1;
  pFVar3 = (this->ColorAttachments).AllocatorInstance.Data;
  *(uint *)(pFVar3 + (longlong)iVar6 * 0x10) = param_1->ColorReferences[3].attachment;
  *(longlong *)(pFVar3 + (longlong)iVar6 * 0x10 + 8) =
       (longlong)(int)param_1->ColorReferences[3].layout;
  iVar6 = (this->ColorAttachments).ArrayNum;
  if (iVar6 == (this->ColorAttachments).ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)this,&(this->ColorAttachments).ArrayMax);
  }
  (this->ColorAttachments).ArrayNum = iVar6 + 1;
  pFVar3 = (this->ColorAttachments).AllocatorInstance.Data;
  *(uint *)(pFVar3 + (longlong)iVar6 * 0x10) = param_1->ColorReferences[4].attachment;
  *(longlong *)(pFVar3 + (longlong)iVar6 * 0x10 + 8) =
       (longlong)(int)param_1->ColorReferences[4].layout;
  iVar6 = (this->ColorAttachments).ArrayNum;
  if (iVar6 == (this->ColorAttachments).ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)this,&(this->ColorAttachments).ArrayMax);
  }
  (this->ColorAttachments).ArrayNum = iVar6 + 1;
  pFVar3 = (this->ColorAttachments).AllocatorInstance.Data;
  *(uint *)(pFVar3 + (longlong)iVar6 * 0x10) = param_1->ColorReferences[5].attachment;
  *(longlong *)(pFVar3 + (longlong)iVar6 * 0x10 + 8) =
       (longlong)(int)param_1->ColorReferences[5].layout;
  iVar6 = (this->ColorAttachments).ArrayNum;
  if (iVar6 == (this->ColorAttachments).ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)this,&(this->ColorAttachments).ArrayMax);
  }
  (this->ColorAttachments).ArrayNum = iVar6 + 1;
  pFVar3 = (this->ColorAttachments).AllocatorInstance.Data;
  *(uint *)(pFVar3 + (longlong)iVar6 * 0x10) = param_1->ColorReferences[6].attachment;
  *(longlong *)(pFVar3 + (longlong)iVar6 * 0x10 + 8) =
       (longlong)(int)param_1->ColorReferences[6].layout;
  iVar6 = (this->ColorAttachments).ArrayNum;
  if (iVar6 == (this->ColorAttachments).ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)this,&(this->ColorAttachments).ArrayMax);
  }
  (this->ColorAttachments).ArrayNum = iVar6 + 1;
  pFVar3 = (this->ColorAttachments).AllocatorInstance.Data;
  *(uint *)(pFVar3 + (longlong)iVar6 * 0x10) = param_1->ColorReferences[7].attachment;
  *(longlong *)(pFVar3 + (longlong)iVar6 * 0x10 + 8) =
       (longlong)(int)param_1->ColorReferences[7].layout;
  iVar6 = (this->ResolveAttachments).ArrayNum;
  if (iVar6 == (this->ResolveAttachments).ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->ResolveAttachments).AllocatorInstance,
                       &(this->ResolveAttachments).ArrayMax);
  }
  (this->ResolveAttachments).ArrayNum = iVar6 + 1;
  pFVar3 = (this->ResolveAttachments).AllocatorInstance.Data;
  *(uint *)(pFVar3 + (longlong)iVar6 * 0x10) = param_1->ResolveReferences[0].attachment;
  *(longlong *)(pFVar3 + (longlong)iVar6 * 0x10 + 8) =
       (longlong)(int)param_1->ResolveReferences[0].layout;
  iVar6 = (this->ResolveAttachments).ArrayNum;
  if (iVar6 == (this->ResolveAttachments).ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->ResolveAttachments).AllocatorInstance,
                       &(this->ResolveAttachments).ArrayMax);
  }
  (this->ResolveAttachments).ArrayNum = iVar6 + 1;
  pFVar3 = (this->ResolveAttachments).AllocatorInstance.Data;
  *(uint *)(pFVar3 + (longlong)iVar6 * 0x10) = param_1->ResolveReferences[1].attachment;
  *(longlong *)(pFVar3 + (longlong)iVar6 * 0x10 + 8) =
       (longlong)(int)param_1->ResolveReferences[1].layout;
  iVar6 = (this->ResolveAttachments).ArrayNum;
  if (iVar6 == (this->ResolveAttachments).ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->ResolveAttachments).AllocatorInstance,
                       &(this->ResolveAttachments).ArrayMax);
  }
  (this->ResolveAttachments).ArrayNum = iVar6 + 1;
  pFVar3 = (this->ResolveAttachments).AllocatorInstance.Data;
  *(uint *)(pFVar3 + (longlong)iVar6 * 0x10) = param_1->ResolveReferences[2].attachment;
  *(longlong *)(pFVar3 + (longlong)iVar6 * 0x10 + 8) =
       (longlong)(int)param_1->ResolveReferences[2].layout;
  iVar6 = (this->ResolveAttachments).ArrayNum;
  if (iVar6 == (this->ResolveAttachments).ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->ResolveAttachments).AllocatorInstance,
                       &(this->ResolveAttachments).ArrayMax);
  }
  (this->ResolveAttachments).ArrayNum = iVar6 + 1;
  pFVar3 = (this->ResolveAttachments).AllocatorInstance.Data;
  *(uint *)(pFVar3 + (longlong)iVar6 * 0x10) = param_1->ResolveReferences[3].attachment;
  *(longlong *)(pFVar3 + (longlong)iVar6 * 0x10 + 8) =
       (longlong)(int)param_1->ResolveReferences[3].layout;
  iVar6 = (this->ResolveAttachments).ArrayNum;
  if (iVar6 == (this->ResolveAttachments).ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->ResolveAttachments).AllocatorInstance,
                       &(this->ResolveAttachments).ArrayMax);
  }
  (this->ResolveAttachments).ArrayNum = iVar6 + 1;
  pFVar3 = (this->ResolveAttachments).AllocatorInstance.Data;
  *(uint *)(pFVar3 + (longlong)iVar6 * 0x10) = param_1->ResolveReferences[4].attachment;
  *(longlong *)(pFVar3 + (longlong)iVar6 * 0x10 + 8) =
       (longlong)(int)param_1->ResolveReferences[4].layout;
  iVar6 = (this->ResolveAttachments).ArrayNum;
  if (iVar6 == (this->ResolveAttachments).ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->ResolveAttachments).AllocatorInstance,
                       &(this->ResolveAttachments).ArrayMax);
  }
  (this->ResolveAttachments).ArrayNum = iVar6 + 1;
  pFVar3 = (this->ResolveAttachments).AllocatorInstance.Data;
  *(uint *)(pFVar3 + (longlong)iVar6 * 0x10) = param_1->ResolveReferences[5].attachment;
  *(longlong *)(pFVar3 + (longlong)iVar6 * 0x10 + 8) =
       (longlong)(int)param_1->ResolveReferences[5].layout;
  iVar6 = (this->ResolveAttachments).ArrayNum;
  if (iVar6 == (this->ResolveAttachments).ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->ResolveAttachments).AllocatorInstance,
                       &(this->ResolveAttachments).ArrayMax);
  }
  (this->ResolveAttachments).ArrayNum = iVar6 + 1;
  pFVar3 = (this->ResolveAttachments).AllocatorInstance.Data;
  *(uint *)(pFVar3 + (longlong)iVar6 * 0x10) = param_1->ResolveReferences[6].attachment;
  *(longlong *)(pFVar3 + (longlong)iVar6 * 0x10 + 8) =
       (longlong)(int)param_1->ResolveReferences[6].layout;
  iVar6 = (this->ResolveAttachments).ArrayNum;
  if (iVar6 == (this->ResolveAttachments).ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->ResolveAttachments).AllocatorInstance,
                       &(this->ResolveAttachments).ArrayMax);
  }
  (this->ResolveAttachments).ArrayNum = iVar6 + 1;
  piVar1 = &(this->Descriptions).ArrayNum;
  pFVar3 = (this->ResolveAttachments).AllocatorInstance.Data;
  *(uint *)(pFVar3 + (longlong)iVar6 * 0x10) = param_1->ResolveReferences[7].attachment;
  *(longlong *)(pFVar3 + (longlong)iVar6 * 0x10 + 8) =
       (longlong)(int)param_1->ResolveReferences[7].layout;
  (this->Depth).Attachment = (param_1->DepthReference).attachment;
  (this->Depth).Layout = (longlong)(int)(param_1->DepthReference).layout;
  (this->Stencil).Layout = (longlong)(int)(param_1->StencilReference).stencilLayout;
  (this->FragmentDensity).Attachment = (param_1->FragmentDensityReference).attachment;
  (this->FragmentDensity).Layout = (longlong)(int)(param_1->FragmentDensityReference).layout;
  iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,0x13,&(this->Descriptions).AllocatorInstance,piVar1,
                     &(this->Descriptions).ArrayMax);
  memset((this->Descriptions).AllocatorInstance.Data + (longlong)iVar6 * 0x20,0,0x260);
  uVar8 = 0;
  pVVar10 = param_1->Desc;
  lVar9 = 0;
  do {
    uVar7 = 0;
    if ((int)uVar8 < *piVar1) {
      uVar7 = ~uVar8 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    uVar8 = uVar8 + 1;
    pFVar3 = (this->Descriptions).AllocatorInstance.Data;
    *(VkFormat *)(pFVar3 + lVar9) = pVVar10->format;
    pFVar3[lVar9 + 4] = *(FScriptContainerElement *)&pVVar10->flags;
    pFVar3[lVar9 + 5] = *(FScriptContainerElement *)&pVVar10->samples;
    pFVar3[lVar9 + 6] = *(FScriptContainerElement *)&pVVar10->loadOp;
    pFVar3[lVar9 + 7] = *(FScriptContainerElement *)&pVVar10->storeOp;
    pFVar3[lVar9 + 8] = *(FScriptContainerElement *)&pVVar10->stencilLoadOp;
    pFVar3[lVar9 + 9] = *(FScriptContainerElement *)&pVVar10->stencilStoreOp;
    *(longlong *)(pFVar3 + lVar9 + 0x10) = (longlong)(int)pVVar10->initialLayout;
    pVVar2 = &pVVar10->finalLayout;
    pVVar10 = pVVar10 + 1;
    *(longlong *)(pFVar3 + lVar9 + 0x18) = (longlong)(int)*pVVar2;
    lVar9 = lVar9 + 0x20;
  } while (uVar8 < 0x13);
  (this->StencilDescription).InitialLayout =
       (longlong)(int)(param_1->StencilDesc).stencilInitialLayout;
  (this->StencilDescription).FinalLayout = (longlong)(int)(param_1->StencilDesc).stencilFinalLayout;
  return;
}

// WriteInto @ 145b84440

/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

void __thiscall
FGfxPipelineDesc::FRenderTargets::WriteInto(FRenderTargets *this,FVulkanRenderTargetLayout *param_1)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  VkAttachmentDescription *pVVar8;
  
  param_1->NumAttachmentDescriptions = this->NumAttachments;
  param_1->NumColorAttachments = this->NumColorAttachments;
  param_1->bHasDepthStencil = this->bHasDepthStencil;
  param_1->bHasResolveAttachments = this->bHasResolveAttachments;
  param_1->bHasDepthStencilResolve = this->bHasDepthStencilResolve;
  param_1->bHasFragmentDensityAttachment = this->bHasFragmentDensityAttachment;
  param_1->NumUsedClearValues = this->NumUsedClearValues;
  bVar4 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<4541913072113026125>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipeline.cpp"
                     ,0x44d,"0");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  param_1->RenderPassCompatibleHash = this->RenderPassCompatibleHash;
  (param_1->Extent).Extent3D.width = (uint)(longlong)(this->Extent3D).field0_0x0._s_0.X;
  (param_1->Extent).Extent3D.height = (uint)(longlong)(this->Extent3D).field0_0x0._s_0.Y;
  (param_1->Extent).Extent3D.depth = (uint)(longlong)(this->Extent3D).field0_0x0._s_0.Z;
  if ((this->ColorAttachments).ArrayNum < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (this->ColorAttachments).AllocatorInstance.Data;
  param_1->ColorReferences[0].attachment = *(uint *)pFVar2;
  param_1->ColorReferences[0].layout = *(VkImageLayout *)(pFVar2 + 8);
  if ((this->ColorAttachments).ArrayNum < 2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (this->ColorAttachments).AllocatorInstance.Data;
  param_1->ColorReferences[1].attachment = *(uint *)(pFVar2 + 0x10);
  param_1->ColorReferences[1].layout = *(VkImageLayout *)(pFVar2 + 0x18);
  if ((this->ColorAttachments).ArrayNum < 3) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (this->ColorAttachments).AllocatorInstance.Data;
  param_1->ColorReferences[2].attachment = *(uint *)(pFVar2 + 0x20);
  param_1->ColorReferences[2].layout = *(VkImageLayout *)(pFVar2 + 0x28);
  if ((this->ColorAttachments).ArrayNum < 4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (this->ColorAttachments).AllocatorInstance.Data;
  param_1->ColorReferences[3].attachment = *(uint *)(pFVar2 + 0x30);
  param_1->ColorReferences[3].layout = *(VkImageLayout *)(pFVar2 + 0x38);
  if ((this->ColorAttachments).ArrayNum < 5) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (this->ColorAttachments).AllocatorInstance.Data;
  param_1->ColorReferences[4].attachment = *(uint *)(pFVar2 + 0x40);
  param_1->ColorReferences[4].layout = *(VkImageLayout *)(pFVar2 + 0x48);
  if ((this->ColorAttachments).ArrayNum < 6) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (this->ColorAttachments).AllocatorInstance.Data;
  param_1->ColorReferences[5].attachment = *(uint *)(pFVar2 + 0x50);
  param_1->ColorReferences[5].layout = *(VkImageLayout *)(pFVar2 + 0x58);
  if ((this->ColorAttachments).ArrayNum < 7) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (this->ColorAttachments).AllocatorInstance.Data;
  param_1->ColorReferences[6].attachment = *(uint *)(pFVar2 + 0x60);
  param_1->ColorReferences[6].layout = *(VkImageLayout *)(pFVar2 + 0x68);
  if ((this->ColorAttachments).ArrayNum < 8) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (this->ColorAttachments).AllocatorInstance.Data;
  param_1->ColorReferences[7].attachment = *(uint *)(pFVar2 + 0x70);
  param_1->ColorReferences[7].layout = *(VkImageLayout *)(pFVar2 + 0x78);
  if ((this->ResolveAttachments).ArrayNum < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (this->ResolveAttachments).AllocatorInstance.Data;
  param_1->ResolveReferences[0].attachment = *(uint *)pFVar2;
  param_1->ResolveReferences[0].layout = *(VkImageLayout *)(pFVar2 + 8);
  if ((this->ResolveAttachments).ArrayNum < 2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (this->ResolveAttachments).AllocatorInstance.Data;
  param_1->ResolveReferences[1].attachment = *(uint *)(pFVar2 + 0x10);
  param_1->ResolveReferences[1].layout = *(VkImageLayout *)(pFVar2 + 0x18);
  if ((this->ResolveAttachments).ArrayNum < 3) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (this->ResolveAttachments).AllocatorInstance.Data;
  param_1->ResolveReferences[2].attachment = *(uint *)(pFVar2 + 0x20);
  param_1->ResolveReferences[2].layout = *(VkImageLayout *)(pFVar2 + 0x28);
  if ((this->ResolveAttachments).ArrayNum < 4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (this->ResolveAttachments).AllocatorInstance.Data;
  param_1->ResolveReferences[3].attachment = *(uint *)(pFVar2 + 0x30);
  param_1->ResolveReferences[3].layout = *(VkImageLayout *)(pFVar2 + 0x38);
  if ((this->ResolveAttachments).ArrayNum < 5) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (this->ResolveAttachments).AllocatorInstance.Data;
  param_1->ResolveReferences[4].attachment = *(uint *)(pFVar2 + 0x40);
  param_1->ResolveReferences[4].layout = *(VkImageLayout *)(pFVar2 + 0x48);
  if ((this->ResolveAttachments).ArrayNum < 6) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (this->ResolveAttachments).AllocatorInstance.Data;
  param_1->ResolveReferences[5].attachment = *(uint *)(pFVar2 + 0x50);
  param_1->ResolveReferences[5].layout = *(VkImageLayout *)(pFVar2 + 0x58);
  if ((this->ResolveAttachments).ArrayNum < 7) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (this->ResolveAttachments).AllocatorInstance.Data;
  param_1->ResolveReferences[6].attachment = *(uint *)(pFVar2 + 0x60);
  param_1->ResolveReferences[6].layout = *(VkImageLayout *)(pFVar2 + 0x68);
  if ((this->ResolveAttachments).ArrayNum < 8) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (this->ResolveAttachments).AllocatorInstance.Data;
  pVVar8 = param_1->Desc;
  uVar6 = 0;
  lVar7 = 0;
  param_1->ResolveReferences[7].attachment = *(uint *)(pFVar2 + 0x70);
  param_1->ResolveReferences[7].layout = *(VkImageLayout *)(pFVar2 + 0x78);
  (param_1->DepthReference).attachment = (this->Depth).Attachment;
  (param_1->DepthReference).layout = (VkImageLayout)(this->Depth).Layout;
  (param_1->StencilReference).stencilLayout = (VkImageLayout)(this->Stencil).Layout;
  (param_1->FragmentDensityReference).attachment = (this->FragmentDensity).Attachment;
  (param_1->FragmentDensityReference).layout = (VkImageLayout)(this->FragmentDensity).Layout;
  do {
    uVar5 = 0;
    if ((int)uVar6 < (this->Descriptions).ArrayNum) {
      uVar5 = ~uVar6 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar2 = (this->Descriptions).AllocatorInstance.Data;
    uVar6 = uVar6 + 1;
    pVVar8->format = *(VkFormat *)(pFVar2 + lVar7);
    pVVar8->flags = (uint)(byte)pFVar2[lVar7 + 4];
    pVVar8->samples = (uint)(byte)pFVar2[lVar7 + 5];
    pVVar8->loadOp = (uint)(byte)pFVar2[lVar7 + 6];
    pVVar8->storeOp = (uint)(byte)pFVar2[lVar7 + 7];
    pVVar8->stencilLoadOp = (uint)(byte)pFVar2[lVar7 + 8];
    pVVar8->stencilStoreOp = (uint)(byte)pFVar2[lVar7 + 9];
    pVVar8->initialLayout = *(VkImageLayout *)(pFVar2 + lVar7 + 0x10);
    lVar1 = lVar7 + 0x18;
    lVar7 = lVar7 + 0x20;
    pVVar8->finalLayout = *(VkImageLayout *)(pFVar2 + lVar1);
    pVVar8 = pVVar8 + 1;
  } while (uVar6 < 0x13);
  (param_1->StencilDesc).stencilInitialLayout =
       (VkImageLayout)(this->StencilDescription).InitialLayout;
  (param_1->StencilDesc).stencilFinalLayout = (VkImageLayout)(this->StencilDescription).FinalLayout;
  return;
}

