// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 9

// FVulkanFramebuffer @ 145b021a0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FVulkanFramebuffer * __thiscall
FVulkanFramebuffer::FVulkanFramebuffer
          (FVulkanFramebuffer *this,FVulkanDevice *param_1,FRHISetRenderTargetsInfo *param_2,
          FVulkanRenderTargetLayout *param_3,FVulkanRenderPass *param_4)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  FVulkanRenderTargetLayout *pFVar6;
  bool bVar7;
  int iVar8;
  VkImageViewType VVar9;
  VkResult VVar10;
  FVulkanFramebuffer *pFVar11;
  FVulkanTexture *pFVar12;
  longlong lVar13;
  FName *pFVar14;
  FThreadSafeStaticStat<FStat_STAT_VulkanNumFrameBuffers> FVar15;
  FVulkanTextureViewDesc *pFVar16;
  FScriptContainerElement *pFVar17;
  FScriptContainerElement *pFVar18;
  VkImage_T **ppVVar19;
  int iVar20;
  uint *puVar21;
  FName FVar22;
  undefined1 local_res8 [8];
  FVulkanDevice *local_res10;
  FName local_res18;
  FVulkanRenderTargetLayout *local_res20;
  uint local_1f8;
  ForAnyElementType local_1f0;
  uint local_1e8;
  uint uStack_1e4;
  uint local_1e0 [2];
  FVulkanView *local_1d8;
  FVulkanView *local_1d0;
  FVulkanView *local_1c8;
  FVulkanView *local_1c0;
  FVulkanView *local_1b8;
  FVulkanTextureViewDesc local_1b0;
  FVulkanTextureViewDesc local_178;
  FVulkanTextureViewDesc local_140;
  FVulkanTextureViewDesc local_108;
  FVulkanTextureViewDesc local_d0;
  VkFramebufferCreateInfo local_98;
  FName local_58 [3];
  
  iVar20 = 0;
  ppVVar19 = this->ColorResolveTargetImages;
  (this->AttachmentTextureViews).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->AttachmentTextureViews).ArrayMax;
  (this->AttachmentTextureViews).ArrayNum = 0;
  *piVar1 = 0;
  this->PartialDepthTextureView = (FVulkanView *)0x0;
  this->Framebuffer = (VkFramebuffer_T *)0x0;
  uVar3 = param_2->NumColorRenderTargets;
  this->NumColorAttachments = 0;
  this->DepthStencilRenderTargetImage = (VkImage_T *)0x0;
  this->DepthStencilResolveRenderTargetImage = (VkImage_T *)0x0;
  this->FragmentDensityImage = (VkImage_T *)0x0;
  (this->WriteBarriers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WriteBarriers).ArrayNum = 0;
  (this->WriteBarriers).ArrayMax = 0;
  this->NumColorRenderTargets = uVar3;
  this->ColorRenderTargetImages[0] = (VkImage_T *)0x0;
  this->ColorRenderTargetImages[1] = (VkImage_T *)0x0;
  this->ColorRenderTargetImages[2] = (VkImage_T *)0x0;
  this->ColorRenderTargetImages[3] = (VkImage_T *)0x0;
  this->ColorRenderTargetImages[4] = (VkImage_T *)0x0;
  this->ColorRenderTargetImages[5] = (VkImage_T *)0x0;
  this->ColorRenderTargetImages[6] = (VkImage_T *)0x0;
  this->ColorRenderTargetImages[7] = (VkImage_T *)0x0;
  *ppVVar19 = (VkImage_T *)0x0;
  this->ColorResolveTargetImages[1] = (VkImage_T *)0x0;
  this->ColorResolveTargetImages[2] = (VkImage_T *)0x0;
  this->ColorResolveTargetImages[3] = (VkImage_T *)0x0;
  this->ColorResolveTargetImages[4] = (VkImage_T *)0x0;
  this->ColorResolveTargetImages[5] = (VkImage_T *)0x0;
  this->ColorResolveTargetImages[6] = (VkImage_T *)0x0;
  this->ColorResolveTargetImages[7] = (VkImage_T *)0x0;
  bVar2 = param_3->NumAttachmentDescriptions;
  (this->AttachmentTextureViews).ArrayNum = 0;
  local_res10 = param_1;
  local_res18 = (FName)param_2;
  local_res20 = param_3;
  if (*piVar1 != (uint)bVar2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,(uint)bVar2,(ForAnyElementType *)this,0,piVar1);
  }
  local_1f8 = 0;
  if ((((param_3->Extent).Extent3D.width == 0) || ((param_3->Extent).Extent3D.height == 0)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("RTExtents.width != 0 && RTExtents.height != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanFramebuffer.cpp"
                         ,0x19,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pFVar11 = (FVulkanFramebuffer *)(*pcVar5)();
    return pFVar11;
  }
  local_1e0[0] = (param_3->Extent).Extent3D.depth;
  if (0 < param_2->NumColorRenderTargets) {
    puVar21 = &param_2->ColorRenderTarget[0].ArraySliceIndex;
    do {
      if (((FRHIRenderTargetView *)(puVar21 + -3))->Texture != (FRHITexture *)0x0) {
        pFVar12 = (FVulkanTexture *)
                  (**(code **)(((FRHIRenderTargetView *)(puVar21 + -3))->Texture->_padding_ + 0x48))
                            ();
        ppVVar19[-8] = pFVar12->Image;
        local_1f8 = puVar21[-1];
        local_1c8 = GetColorRenderTargetViewDesc
                              (pFVar12,local_1f8,*puVar21,(uint)param_3->MultiViewCount,local_1e0);
        pFVar4 = (this->AttachmentTextureViews).AllocatorInstance.Data;
        if (((pFVar4 <= (FScriptContainerElement *)&local_1c8) &&
            ((FScriptContainerElement *)&local_1c8 < pFVar4 + (longlong)*piVar1 * 8)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar5 = (code *)swi(3);
          pFVar11 = (FVulkanFramebuffer *)(*pcVar5)();
          return pFVar11;
        }
        iVar8 = (this->AttachmentTextureViews).ArrayNum;
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,(ForAnyElementType *)this,piVar1);
        }
        (this->AttachmentTextureViews).ArrayNum = iVar8 + 1;
        *(FVulkanView **)
         ((this->AttachmentTextureViews).AllocatorInstance.Data + (longlong)iVar8 * 8) = local_1c8;
        this->NumColorAttachments = this->NumColorAttachments + 1;
        if (((*(bool *)((longlong)local_res18 + 0x188) != false) &&
            (param_3->bHasResolveAttachments != '\0')) &&
           (*(int *)((longlong)param_3 + (-0xc - (longlong)this) + (longlong)ppVVar19) != 0)) {
          pFVar12 = (FVulkanTexture *)(**(code **)(**(longlong **)(puVar21 + 0x2f) + 0x48))();
          *ppVVar19 = pFVar12->Image;
          uVar3 = *puVar21;
          VVar9 = FVulkanTexture::GetViewType(pFVar12);
          if ((VVar9 == VK_IMAGE_VIEW_TYPE_2D) ||
             (VVar9 = FVulkanTexture::GetViewType(pFVar12), VVar9 == VK_IMAGE_VIEW_TYPE_2D_ARRAY)) {
            local_1b0.ImageUsageFlags = 0;
            local_1b0.SamplerYcbcrConversion = (VkSamplerYcbcrConversion_T *)0x0;
            local_1b0.ViewType = FVulkanTexture::GetViewType(pFVar12);
            local_1b0.AspectFlags = pFVar12->FullAspectMask;
            lVar13 = (**(code **)(pFVar12->_padding_ + 0x20))(pFVar12);
            local_1b0.UEFormat = *(EPixelFormat *)(lVar13 + 0x33);
            local_1b0.Format = pFVar12->ViewFormat;
            local_1b0.ArraySliceIndex = uVar3;
            if ((int)uVar3 < 0) {
              local_1b0.ArraySliceIndex = 0;
            }
            local_1b0.NumMips = 1;
            local_1b0.FirstMip = local_1f8;
            local_1b0.NumArraySlices = FVulkanTexture::GetNumberOfArrayLevels(pFVar12);
            local_1b0.bUseIdentitySwizzle = true;
            local_1d8 = FVulkanTexture::FindOrAddInternalView(pFVar12,&local_1b0);
            param_3 = local_res20;
            if (local_1d8 != (FVulkanView *)0x0) {
              pFVar4 = (this->AttachmentTextureViews).AllocatorInstance.Data;
              if (((pFVar4 <= (FScriptContainerElement *)&local_1d8) &&
                  ((FScriptContainerElement *)&local_1d8 < pFVar4 + (longlong)*piVar1 * 8)) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar7)) {
                pcVar5 = (code *)swi(3);
                pFVar11 = (FVulkanFramebuffer *)(*pcVar5)();
                return pFVar11;
              }
              iVar8 = (this->AttachmentTextureViews).ArrayNum;
              if (iVar8 == *piVar1) {
                iVar8 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x808,(ForAnyElementType *)this,piVar1);
              }
              (this->AttachmentTextureViews).ArrayNum = iVar8 + 1;
              *(FVulkanView **)
               ((this->AttachmentTextureViews).AllocatorInstance.Data + (longlong)iVar8 * 8) =
                   local_1d8;
              param_3 = local_res20;
            }
          }
          else {
            local_1d8 = (FVulkanView *)0x0;
            param_3 = local_res20;
          }
        }
      }
      iVar20 = iVar20 + 1;
      ppVVar19 = ppVVar19 + 1;
      puVar21 = puVar21 + 6;
      param_2 = (FRHISetRenderTargetsInfo *)local_res18;
    } while (iVar20 < *(int *)((longlong)local_res18 + 0xc0));
  }
  FVar22 = local_res18;
  if (param_3->bHasDepthStencil == '\0') goto LAB_145b0293b;
  pFVar12 = (FVulkanTexture *)
            (**(code **)(((param_2->DepthStencilRenderTarget).Texture)->_padding_ + 0x48))();
  (**(code **)(pFVar12->_padding_ + 0x20))(pFVar12);
  this->DepthStencilRenderTargetImage = pFVar12->Image;
  if ((pFVar12->PartialView == (FVulkanView *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Texture->PartialView",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanFramebuffer.cpp"
                         ,0x43,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pFVar11 = (FVulkanFramebuffer *)(*pcVar5)();
    return pFVar11;
  }
  this->PartialDepthTextureView = pFVar12->PartialView;
  iVar20 = param_2->NumColorRenderTargets;
  VVar9 = FVulkanTexture::GetViewType(pFVar12);
  if (((VVar9 != VK_IMAGE_VIEW_TYPE_2D) &&
      (VVar9 = FVulkanTexture::GetViewType(pFVar12), VVar9 != VK_IMAGE_VIEW_TYPE_2D_ARRAY)) &&
     ((VVar9 = FVulkanTexture::GetViewType(pFVar12), VVar9 != VK_IMAGE_VIEW_TYPE_CUBE &&
      (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<2101556149659631845>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanFramebuffer.cpp"
                          ,0xe5,
                          "Texture->GetViewType() == VK_IMAGE_VIEW_TYPE_2D || Texture->GetViewType() == VK_IMAGE_VIEW_TYPE_2D_ARRAY || Texture->GetViewType() == VK_IMAGE_VIEW_TYPE_CUBE"
                         ), bVar7)))) {
    pcVar5 = (code *)swi(3);
    pFVar11 = (FVulkanFramebuffer *)(*pcVar5)();
    return pFVar11;
  }
  if ((iVar20 == 0) &&
     (VVar9 = FVulkanTexture::GetViewType(pFVar12), VVar9 == VK_IMAGE_VIEW_TYPE_CUBE)) {
    local_178.AspectFlags = pFVar12->FullAspectMask;
    local_1e0[0] = 6;
    local_178.ImageUsageFlags = 0;
    local_178.SamplerYcbcrConversion = (VkSamplerYcbcrConversion_T *)0x0;
    local_178.ViewType = VK_IMAGE_VIEW_TYPE_2D_ARRAY;
    lVar13 = (**(code **)(pFVar12->_padding_ + 0x20))(pFVar12);
    pFVar16 = &local_178;
    local_178.UEFormat = *(EPixelFormat *)(lVar13 + 0x33);
    local_178.Format = pFVar12->ViewFormat;
    local_178.FirstMip = local_1f8;
    local_178.NumMips = 1;
    local_178.ArraySliceIndex = 0;
    local_178.NumArraySlices = 6;
    local_178.bUseIdentitySwizzle = true;
LAB_145b02729:
    local_1c0 = FVulkanTexture::FindOrAddInternalView(pFVar12,pFVar16);
  }
  else {
    VVar9 = FVulkanTexture::GetViewType(pFVar12);
    if ((VVar9 == VK_IMAGE_VIEW_TYPE_2D) ||
       (VVar9 = FVulkanTexture::GetViewType(pFVar12), VVar9 == VK_IMAGE_VIEW_TYPE_2D_ARRAY)) {
      local_140.ImageUsageFlags = 0;
      local_140.SamplerYcbcrConversion = (VkSamplerYcbcrConversion_T *)0x0;
      local_140.ViewType = FVulkanTexture::GetViewType(pFVar12);
      local_140.AspectFlags = pFVar12->FullAspectMask;
      lVar13 = (**(code **)(pFVar12->_padding_ + 0x20))(pFVar12);
      local_140.UEFormat = *(EPixelFormat *)(lVar13 + 0x33);
      local_140.Format = pFVar12->ViewFormat;
      local_140.FirstMip = local_1f8;
      local_140.NumMips = 1;
      local_140.ArraySliceIndex = 0;
      local_140.NumArraySlices = FVulkanTexture::GetNumberOfArrayLevels(pFVar12);
      pFVar16 = &local_140;
      local_140.bUseIdentitySwizzle = true;
      goto LAB_145b02729;
    }
    local_1c0 = pFVar12->DefaultView;
  }
  pFVar4 = (this->AttachmentTextureViews).AllocatorInstance.Data;
  if (((pFVar4 <= (FScriptContainerElement *)&local_1c0) &&
      ((FScriptContainerElement *)&local_1c0 < pFVar4 + (longlong)*piVar1 * 8)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar5 = (code *)swi(3);
    pFVar11 = (FVulkanFramebuffer *)(*pcVar5)();
    return pFVar11;
  }
  iVar20 = (this->AttachmentTextureViews).ArrayNum;
  if (iVar20 == *piVar1) {
    iVar20 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,(ForAnyElementType *)this,piVar1);
  }
  FVar22 = local_res18;
  (this->AttachmentTextureViews).ArrayNum = iVar20 + 1;
  *(FVulkanView **)((this->AttachmentTextureViews).AllocatorInstance.Data + (longlong)iVar20 * 8) =
       local_1c0;
  if ((param_3->bHasDepthStencilResolve != '\0') &&
     ((param_3->DepthStencilResolveReference).layout != VK_IMAGE_LAYOUT_UNDEFINED)) {
    pFVar12 = (FVulkanTexture *)
              (**(code **)(((FRHIDepthRenderTargetView *)((longlong)local_res18 + 0x1a0))->Texture->
                           _padding_ + 0x48))();
    this->DepthStencilResolveRenderTargetImage = pFVar12->Image;
    VVar9 = FVulkanTexture::GetViewType(pFVar12);
    if ((VVar9 == VK_IMAGE_VIEW_TYPE_2D) ||
       (VVar9 = FVulkanTexture::GetViewType(pFVar12), VVar9 == VK_IMAGE_VIEW_TYPE_2D_ARRAY)) {
      local_108.ImageUsageFlags = 0;
      local_108.SamplerYcbcrConversion = (VkSamplerYcbcrConversion_T *)0x0;
      local_108.ViewType = FVulkanTexture::GetViewType(pFVar12);
      local_108.AspectFlags = pFVar12->FullAspectMask;
      lVar13 = (**(code **)(pFVar12->_padding_ + 0x20))(pFVar12);
      local_108.UEFormat = *(EPixelFormat *)(lVar13 + 0x33);
      local_108.Format = pFVar12->ViewFormat;
      local_108.FirstMip = local_1f8;
      local_108.NumMips = 1;
      local_108.ArraySliceIndex = 0;
      local_108.NumArraySlices = FVulkanTexture::GetNumberOfArrayLevels(pFVar12);
      local_108.bUseIdentitySwizzle = true;
      local_1d0 = FVulkanTexture::FindOrAddInternalView(pFVar12,&local_108);
      if (local_1d0 != (FVulkanView *)0x0) {
        pFVar4 = (this->AttachmentTextureViews).AllocatorInstance.Data;
        if (((pFVar4 <= (FScriptContainerElement *)&local_1d0) &&
            ((FScriptContainerElement *)&local_1d0 < pFVar4 + (longlong)*piVar1 * 8)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar5 = (code *)swi(3);
          pFVar11 = (FVulkanFramebuffer *)(*pcVar5)();
          return pFVar11;
        }
        iVar20 = (this->AttachmentTextureViews).ArrayNum;
        if (iVar20 == *piVar1) {
          iVar20 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,(ForAnyElementType *)this,piVar1);
        }
        (this->AttachmentTextureViews).ArrayNum = iVar20 + 1;
        *(FVulkanView **)
         ((this->AttachmentTextureViews).AllocatorInstance.Data + (longlong)iVar20 * 8) = local_1d0;
      }
    }
    else {
      local_1d0 = (FVulkanView *)0x0;
    }
  }
LAB_145b0293b:
  if ((GRHIGlobals.VariableRateShading.SupportsAttachment != false) &&
     (param_3->bHasFragmentDensityAttachment != '\0')) {
    pFVar12 = (FVulkanTexture *)
              (**(code **)(((FRHISetRenderTargetsInfo *)FVar22)->ShadingRateTexture->_padding_ +
                          0x48))();
    this->FragmentDensityImage = pFVar12->Image;
    VVar9 = FVulkanTexture::GetViewType(pFVar12);
    if ((VVar9 != VK_IMAGE_VIEW_TYPE_2D) &&
       ((VVar9 = FVulkanTexture::GetViewType(pFVar12), VVar9 != VK_IMAGE_VIEW_TYPE_2D_ARRAY &&
        (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<2101556149659631906>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanFramebuffer.cpp"
                            ,0x122,
                            "Texture->GetViewType() == VK_IMAGE_VIEW_TYPE_2D || Texture->GetViewType() == VK_IMAGE_VIEW_TYPE_2D_ARRAY"
                           ), bVar7)))) {
      pcVar5 = (code *)swi(3);
      pFVar11 = (FVulkanFramebuffer *)(*pcVar5)();
      return pFVar11;
    }
    local_d0.ImageUsageFlags = 0;
    local_d0.SamplerYcbcrConversion = (VkSamplerYcbcrConversion_T *)0x0;
    local_d0.ViewType = FVulkanTexture::GetViewType(pFVar12);
    local_d0.AspectFlags = pFVar12->FullAspectMask;
    lVar13 = (**(code **)(pFVar12->_padding_ + 0x20))(pFVar12);
    local_d0.UEFormat = *(EPixelFormat *)(lVar13 + 0x33);
    local_d0.Format = pFVar12->ViewFormat;
    local_d0.FirstMip = local_1f8;
    local_d0.NumMips = 1;
    local_d0.ArraySliceIndex = 0;
    local_d0.NumArraySlices = FVulkanTexture::GetNumberOfArrayLevels(pFVar12);
    local_d0.bUseIdentitySwizzle = true;
    local_1b8 = FVulkanTexture::FindOrAddInternalView(pFVar12,&local_d0);
    pFVar4 = (this->AttachmentTextureViews).AllocatorInstance.Data;
    if (((pFVar4 <= (FScriptContainerElement *)&local_1b8) &&
        ((FScriptContainerElement *)&local_1b8 < pFVar4 + (longlong)*piVar1 * 8)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar5 = (code *)swi(3);
      pFVar11 = (FVulkanFramebuffer *)(*pcVar5)();
      return pFVar11;
    }
    iVar20 = (this->AttachmentTextureViews).ArrayNum;
    if (iVar20 == *piVar1) {
      iVar20 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,(ForAnyElementType *)this,piVar1);
    }
    (this->AttachmentTextureViews).ArrayNum = iVar20 + 1;
    *(FVulkanView **)((this->AttachmentTextureViews).AllocatorInstance.Data + (longlong)iVar20 * 8)
         = local_1b8;
  }
  uVar3 = (this->AttachmentTextureViews).ArrayNum;
  local_1f0.Data = (FScriptContainerElement *)0x0;
  local_1e8 = 0;
  uStack_1e4 = 0;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
  }
  if (0 < (int)uVar3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar3,&local_1f0,0,(int *)&uStack_1e4);
  }
  pFVar17 = (this->AttachmentTextureViews).AllocatorInstance.Data;
  iVar20 = (this->AttachmentTextureViews).ArrayNum;
  pFVar4 = pFVar17 + (longlong)iVar20 * 8;
  while( true ) {
    if ((this->AttachmentTextureViews).ArrayNum != iVar20) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FVulkanView_const_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    pFVar6 = local_res20;
    if (pFVar17 == pFVar4) {
      local_98.sType = VK_STRUCTURE_TYPE_FRAMEBUFFER_CREATE_INFO;
      local_98._60_4_ = 0;
      local_98._20_4_ = 0;
      local_98._36_4_ = 0;
      local_98.attachmentCount = local_1e8;
      local_98.pAttachments._0_4_ = SUB84(local_1f0.Data,0);
      local_98.pAttachments._4_4_ = (undefined4)((ulonglong)local_1f0.Data >> 0x20);
      local_98.width = (local_res20->Extent).Extent3D.width;
      local_98.renderPass._0_4_ = SUB84(param_4->RenderPass,0);
      local_98.renderPass._4_4_ = (undefined4)((ulonglong)param_4->RenderPass >> 0x20);
      local_98.layers = local_1e0[0];
      local_98.height = (local_res20->Extent).Extent3D.height;
      local_98._4_8_ = 0;
      local_98._12_8_ = 0;
      VVar10 = (*VulkanDynamicAPI::vkCreateFramebuffer)
                         (local_res10->Device,&local_98,&VulkanRHI::GAllocationCallbacks,
                          &this->Framebuffer);
      if ((int)VVar10 < 0) {
        VulkanRHI::VerifyVulkanResult
                  (VVar10,
                   "VulkanRHI::vkCreateFramebuffer(Device.GetHandle(), &CreateInfo, VULKAN_CPU_ALLOCATOR, &Framebuffer)"
                   ,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanFramebuffer.cpp"
                   ,0x6e);
      }
      (this->RenderArea).offset.x = 0;
      (this->RenderArea).offset.y = 0;
      (this->RenderArea).extent.width = (pFVar6->Extent).Extent3D.width;
      (this->RenderArea).extent.height = (pFVar6->Extent).Extent3D.height;
      FVar15 = StatPtr_STAT_VulkanNumFrameBuffers;
      if (StatPtr_STAT_VulkanNumFrameBuffers ==
          (FThreadSafeStaticStat<FStat_STAT_VulkanNumFrameBuffers>)0x0) {
        pFVar14 = ::FName::FName(local_58,"STAT_VulkanNumFrameBuffers");
        FVar15 = (FThreadSafeStaticStat<FStat_STAT_VulkanNumFrameBuffers>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanNumFrameBuffers,
                            *pFVar14,L"Num Frame Buffers","STATGROUP_VulkanRHI","STATCAT_Advanced",
                            L"Vulkan RHI",true,false,ST_int64,false,false,MCR_Invalid);
      }
      local_res18 = *(FName *)FVar15;
      FThreadStats::AddMessage<__int64>(local_res18,Add,1,false);
      if (local_1f0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1f0.Data);
      }
      return this;
    }
    pFVar18 = (FScriptContainerElement *)(*(longlong *)pFVar17 + 0x18);
    if ((*(char *)(*(longlong *)pFVar17 + 0x30) != '\x02') &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      pFVar11 = (FVulkanFramebuffer *)(*pcVar5)();
      return pFVar11;
    }
    if (((local_1f0.Data <= pFVar18) && (pFVar18 < local_1f0.Data + (longlong)(int)uStack_1e4 * 8))
       && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar7)) break;
    if (local_1e8 == uStack_1e4) {
      local_1e8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&local_1f0,(int *)&uStack_1e4);
    }
    lVar13 = (longlong)(int)local_1e8;
    pFVar17 = pFVar17 + 8;
    local_1e8 = local_1e8 + 1;
    *(undefined8 *)(local_1f0.Data + lVar13 * 8) = *(undefined8 *)pFVar18;
  }
  pcVar5 = (code *)swi(3);
  pFVar11 = (FVulkanFramebuffer *)(*pcVar5)();
  return pFVar11;
}

// ~FVulkanFramebuffer @ 145b057f0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */

void __thiscall FVulkanFramebuffer::~FVulkanFramebuffer(FVulkanFramebuffer *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  if (this->Framebuffer != (VkFramebuffer_T *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2101556149659631738>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanFramebuffer.cpp"
                       ,0x7a,"Framebuffer == nullptr");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (this->WriteBarriers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AttachmentTextureViews).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// Destroy @ 145b14280

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FVulkanFramebuffer::Destroy(FVulkanFramebuffer *this,FVulkanDevice *param_1)

{
  FName FVar1;
  FName *pFVar2;
  FThreadSafeStaticStat<FStat_STAT_VulkanNumFrameBuffers> FVar3;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  undefined8 *puVar4;
  FName local_res8;
  FMemScope local_res10;
  FName local_res18 [2];
  
  VulkanRHI::FDeferredDeletionQueue2::EnqueueGenericResource
            (&param_1->DeferredDeletionQueue,Framebuffer,(ulong64)this->Framebuffer);
  this->Framebuffer = (VkFramebuffer_T *)0x0;
  FVar3 = StatPtr_STAT_VulkanNumFrameBuffers;
  if (StatPtr_STAT_VulkanNumFrameBuffers ==
      (FThreadSafeStaticStat<FStat_STAT_VulkanNumFrameBuffers>)0x0) {
    pFVar2 = ::FName::FName(&local_res8,"STAT_VulkanNumFrameBuffers");
    FVar3 = (FThreadSafeStaticStat<FStat_STAT_VulkanNumFrameBuffers>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanNumFrameBuffers,*pFVar2,
                       L"Num Frame Buffers","STATGROUP_VulkanRHI","STATCAT_Advanced",L"Vulkan RHI",
                       true,false,ST_int64,false,false,MCR_Invalid);
  }
  FVar1 = *(FName *)FVar3;
  local_res8.ComparisonIndex = FVar1.ComparisonIndex.Value;
  local_res8.Number = FVar1.Number;
  if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    local_res18[0] = FVar1;
    FLLMScope::FLLMScope((FLLMScope *)&local_res8,Stats,false,None,Default,true);
    FMemScope::FMemScope(&local_res10,Stats,true);
    this_00->MemoryMessageScope = this_00->MemoryMessageScope + 1;
    puVar4 = operator_new<FStatMessage,65536,TSizedDefaultAllocator<32>_>
                       (0x10,&(this_00->Packet).StatMessages);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = 1;
      puVar4[1] = (ulonglong)FVar1 & 0xffffbfffffffffff | 0xb00000000000;
    }
    this_00->MemoryMessageScope = this_00->MemoryMessageScope + -1;
    FMemScope::~FMemScope(&local_res10);
    FLLMScope::~FLLMScope((FLLMScope *)&local_res8);
    FStatsTrace::Add(local_res18,-1);
    if (this_00->ScopeCount == 0) {
      FThreadStats::Flush(this_00,false,false);
      return;
    }
    if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(this_00,false,false);
    }
  }
  return;
}

// GetColorRenderTargetViewDesc @ 145b1cf60

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FVulkanView * __cdecl
FVulkanFramebuffer::GetColorRenderTargetViewDesc
          (FVulkanTexture *param_1,uint param_2,int param_3,uint param_4,uint *param_5)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  VkImageViewType VVar4;
  uint uVar5;
  uint uVar6;
  FVulkanView *pFVar7;
  longlong lVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_VulkanNumImageViews> FVar10;
  FVulkanTextureViewDesc *pFVar11;
  uint uVar12;
  FName local_res8;
  uint local_res10;
  FVulkanTextureViewDesc local_d8;
  FVulkanTextureViewDesc local_a0;
  FVulkanTextureViewDesc local_68;
  
  local_res10 = param_2;
  if ((param_1->Image == (VkImage_T *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Texture->Image != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanFramebuffer.cpp"
                         ,0x80,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar7 = (FVulkanView *)(*pcVar2)();
    return pFVar7;
  }
  lVar8 = (**(code **)(param_1->_padding_ + 0x20))(param_1);
  uVar12 = param_1->ImageUsageFlags & 0x80 | 0x10;
  VVar4 = FVulkanTexture::GetViewType(param_1);
  if ((VVar4 == VK_IMAGE_VIEW_TYPE_2D) ||
     (VVar4 = FVulkanTexture::GetViewType(param_1), VVar4 == VK_IMAGE_VIEW_TYPE_2D_ARRAY)) {
    if (param_3 == -1) {
      param_3 = 0;
      uVar5 = FVulkanTexture::GetNumberOfArrayLevels(param_1);
    }
    else {
      uVar5 = 1;
      uVar6 = FVulkanTexture::GetNumberOfArrayLevels(param_1);
      if ((uVar6 <= (uint)param_3) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArraySliceIndex < Texture->GetNumberOfArrayLevels()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanFramebuffer.cpp"
                             ,0x92,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar7 = (FVulkanView *)(*pcVar2)();
        return pFVar7;
      }
    }
    VVar4 = FVulkanTexture::GetViewType(param_1);
    if ((VVar4 == VK_IMAGE_VIEW_TYPE_2D_ARRAY) && (param_4 == 0)) {
      *param_5 = uVar5;
    }
    local_68.SamplerYcbcrConversion = (VkSamplerYcbcrConversion_T *)0x0;
    local_68.ViewType = FVulkanTexture::GetViewType(param_1);
    pFVar11 = &local_68;
    local_68.AspectFlags = param_1->FullAspectMask;
    local_68.UEFormat = *(EPixelFormat *)(lVar8 + 0x33);
    local_68.Format = param_1->ViewFormat;
    local_68.FirstMip = local_res10;
    local_68.NumMips = 1;
    local_68.bUseIdentitySwizzle = true;
    local_68.ArraySliceIndex = param_3;
    local_68.NumArraySlices = uVar5;
    local_68.ImageUsageFlags = uVar12;
  }
  else {
    VVar4 = FVulkanTexture::GetViewType(param_1);
    if ((VVar4 == VK_IMAGE_VIEW_TYPE_CUBE) ||
       (VVar4 = FVulkanTexture::GetViewType(param_1), VVar4 == VK_IMAGE_VIEW_TYPE_CUBE_ARRAY)) {
      FVar10 = StatPtr_STAT_VulkanNumImageViews;
      if (StatPtr_STAT_VulkanNumImageViews ==
          (FThreadSafeStaticStat<FStat_STAT_VulkanNumImageViews>)0x0) {
        pFVar9 = ::FName::FName(&local_res8,"STAT_VulkanNumImageViews");
        FVar10 = (FThreadSafeStaticStat<FStat_STAT_VulkanNumImageViews>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanNumImageViews,*pFVar9,
                            L"Num Image Views","STATGROUP_VulkanRHI","STATCAT_Advanced",
                            L"Vulkan RHI",true,false,ST_int64,false,false,MCR_Invalid);
      }
      FVar1 = *(FName *)FVar10;
      local_res8.ComparisonIndex = FVar1.ComparisonIndex.Value;
      local_res8.Number = FVar1.Number;
      FThreadStats::AddMessage<__int64>(FVar1,Add,1,false);
      local_a0.AspectFlags = param_1->FullAspectMask;
      pFVar11 = &local_a0;
      local_a0.UEFormat = *(EPixelFormat *)(lVar8 + 0x33);
      local_a0.Format = param_1->ViewFormat;
      local_a0.SamplerYcbcrConversion = (VkSamplerYcbcrConversion_T *)0x0;
      local_a0.ViewType = VK_IMAGE_VIEW_TYPE_2D;
      local_a0.NumMips = 1;
      local_a0.NumArraySlices = 1;
      local_a0.bUseIdentitySwizzle = true;
      local_a0.FirstMip = param_2;
      local_a0.ArraySliceIndex = param_3;
      local_a0.ImageUsageFlags = uVar12;
    }
    else {
      VVar4 = FVulkanTexture::GetViewType(param_1);
      if (VVar4 != VK_IMAGE_VIEW_TYPE_3D) {
        bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2101556149659631818>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanFramebuffer.cpp"
                           ,0xca,"0");
        if (!bVar3) {
          return (FVulkanView *)0x0;
        }
        pcVar2 = (code *)swi(3);
        pFVar7 = (FVulkanView *)(*pcVar2)();
        return pFVar7;
      }
      local_d8.AspectFlags = param_1->FullAspectMask;
      pFVar11 = &local_d8;
      local_d8.UEFormat = *(EPixelFormat *)(lVar8 + 0x33);
      local_d8.Format = param_1->ViewFormat;
      local_d8.NumArraySlices = (uint)*(ushort *)(lVar8 + 0x2c);
      local_d8.SamplerYcbcrConversion = (VkSamplerYcbcrConversion_T *)0x0;
      local_d8.ViewType = VK_IMAGE_VIEW_TYPE_2D_ARRAY;
      local_d8.NumMips = 1;
      local_d8.ArraySliceIndex = 0;
      local_d8.bUseIdentitySwizzle = true;
      local_d8.FirstMip = param_2;
      local_d8.ImageUsageFlags = uVar12;
    }
  }
  pFVar7 = FVulkanTexture::FindOrAddInternalView(param_1,pFVar11);
  return pFVar7;
}

// GetColorResolveTargetViewDesc @ 145b1d280

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

FVulkanView * __cdecl
FVulkanFramebuffer::GetColorResolveTargetViewDesc(FVulkanTexture *param_1,uint param_2,int param_3)

{
  VkImageViewType VVar1;
  longlong lVar2;
  FVulkanView *pFVar3;
  FVulkanTextureViewDesc local_48;
  
  VVar1 = FVulkanTexture::GetViewType(param_1);
  if (VVar1 != VK_IMAGE_VIEW_TYPE_2D) {
    VVar1 = FVulkanTexture::GetViewType(param_1);
    if (VVar1 != VK_IMAGE_VIEW_TYPE_2D_ARRAY) {
      return (FVulkanView *)0x0;
    }
  }
  local_48.ImageUsageFlags = 0;
  local_48.SamplerYcbcrConversion = (VkSamplerYcbcrConversion_T *)0x0;
  local_48.ViewType = FVulkanTexture::GetViewType(param_1);
  local_48.AspectFlags = param_1->FullAspectMask;
  lVar2 = (**(code **)(param_1->_padding_ + 0x20))(param_1);
  local_48.ArraySliceIndex = param_3;
  if (param_3 < 0) {
    local_48.ArraySliceIndex = 0;
  }
  local_48.UEFormat = *(EPixelFormat *)(lVar2 + 0x33);
  local_48.Format = param_1->ViewFormat;
  local_48.NumMips = 1;
  local_48.FirstMip = param_2;
  local_48.NumArraySlices = FVulkanTexture::GetNumberOfArrayLevels(param_1);
  local_48.bUseIdentitySwizzle = true;
  pFVar3 = FVulkanTexture::FindOrAddInternalView(param_1,&local_48);
  return pFVar3;
}

// GetDepthStencilResolveTargetViewDesc @ 145b1d470

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

FVulkanView * __cdecl
FVulkanFramebuffer::GetDepthStencilResolveTargetViewDesc(FVulkanTexture *param_1,uint param_2)

{
  VkImageViewType VVar1;
  longlong lVar2;
  FVulkanView *pFVar3;
  FVulkanTextureViewDesc local_48;
  
  VVar1 = FVulkanTexture::GetViewType(param_1);
  if (VVar1 != VK_IMAGE_VIEW_TYPE_2D) {
    VVar1 = FVulkanTexture::GetViewType(param_1);
    if (VVar1 != VK_IMAGE_VIEW_TYPE_2D_ARRAY) {
      return (FVulkanView *)0x0;
    }
  }
  local_48.ImageUsageFlags = 0;
  local_48.SamplerYcbcrConversion = (VkSamplerYcbcrConversion_T *)0x0;
  local_48.ViewType = FVulkanTexture::GetViewType(param_1);
  local_48.AspectFlags = param_1->FullAspectMask;
  lVar2 = (**(code **)(param_1->_padding_ + 0x20))(param_1);
  local_48.UEFormat = *(EPixelFormat *)(lVar2 + 0x33);
  local_48.Format = param_1->ViewFormat;
  local_48.NumMips = 1;
  local_48.ArraySliceIndex = 0;
  local_48.FirstMip = param_2;
  local_48.NumArraySlices = FVulkanTexture::GetNumberOfArrayLevels(param_1);
  local_48.bUseIdentitySwizzle = true;
  pFVar3 = FVulkanTexture::FindOrAddInternalView(param_1,&local_48);
  return pFVar3;
}

// GetDepthStencilTargetViewDesc @ 145b1d530

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

FVulkanView * __cdecl
FVulkanFramebuffer::GetDepthStencilTargetViewDesc
          (FVulkanTexture *param_1,uint param_2,uint param_3,uint *param_4)

{
  code *pcVar1;
  bool bVar2;
  VkImageViewType VVar3;
  FVulkanView *pFVar4;
  longlong lVar5;
  FVulkanTextureViewDesc *pFVar6;
  FVulkanTextureViewDesc local_78;
  FVulkanTextureViewDesc local_40;
  
  VVar3 = FVulkanTexture::GetViewType(param_1);
  if ((((VVar3 != VK_IMAGE_VIEW_TYPE_2D) &&
       (VVar3 = FVulkanTexture::GetViewType(param_1), VVar3 != VK_IMAGE_VIEW_TYPE_2D_ARRAY)) &&
      (VVar3 = FVulkanTexture::GetViewType(param_1), VVar3 != VK_IMAGE_VIEW_TYPE_CUBE)) &&
     (bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2101556149659631845>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanFramebuffer.cpp"
                         ,0xe5,
                         "Texture->GetViewType() == VK_IMAGE_VIEW_TYPE_2D || Texture->GetViewType() == VK_IMAGE_VIEW_TYPE_2D_ARRAY || Texture->GetViewType() == VK_IMAGE_VIEW_TYPE_CUBE"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FVulkanView *)(*pcVar1)();
    return pFVar4;
  }
  if ((param_2 == 0) &&
     (VVar3 = FVulkanTexture::GetViewType(param_1), VVar3 == VK_IMAGE_VIEW_TYPE_CUBE)) {
    *param_4 = 6;
    local_78.AspectFlags = param_1->FullAspectMask;
    local_78.ImageUsageFlags = 0;
    local_78.SamplerYcbcrConversion = (VkSamplerYcbcrConversion_T *)0x0;
    local_78.ViewType = VK_IMAGE_VIEW_TYPE_2D_ARRAY;
    lVar5 = (**(code **)(param_1->_padding_ + 0x20))(param_1);
    pFVar6 = &local_78;
    local_78.UEFormat = *(EPixelFormat *)(lVar5 + 0x33);
    local_78.Format = param_1->ViewFormat;
    local_78.NumMips = 1;
    local_78.ArraySliceIndex = 0;
    local_78.NumArraySlices = 6;
    local_78.bUseIdentitySwizzle = true;
    local_78.FirstMip = param_3;
  }
  else {
    VVar3 = FVulkanTexture::GetViewType(param_1);
    if ((VVar3 != VK_IMAGE_VIEW_TYPE_2D) &&
       (VVar3 = FVulkanTexture::GetViewType(param_1), VVar3 != VK_IMAGE_VIEW_TYPE_2D_ARRAY)) {
      return param_1->DefaultView;
    }
    local_40.ImageUsageFlags = 0;
    local_40.SamplerYcbcrConversion = (VkSamplerYcbcrConversion_T *)0x0;
    local_40.ViewType = FVulkanTexture::GetViewType(param_1);
    local_40.AspectFlags = param_1->FullAspectMask;
    lVar5 = (**(code **)(param_1->_padding_ + 0x20))(param_1);
    local_40.UEFormat = *(EPixelFormat *)(lVar5 + 0x33);
    local_40.Format = param_1->ViewFormat;
    local_40.NumMips = 1;
    local_40.ArraySliceIndex = 0;
    local_40.FirstMip = param_3;
    local_40.NumArraySlices = FVulkanTexture::GetNumberOfArrayLevels(param_1);
    pFVar6 = &local_40;
    local_40.bUseIdentitySwizzle = true;
  }
  pFVar4 = FVulkanTexture::FindOrAddInternalView(param_1,pFVar6);
  return pFVar4;
}

// GetFragmentDensityAttachmentViewDesc @ 145b1de20

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

FVulkanView * __cdecl
FVulkanFramebuffer::GetFragmentDensityAttachmentViewDesc(FVulkanTexture *param_1,uint param_2)

{
  code *pcVar1;
  bool bVar2;
  VkImageViewType VVar3;
  FVulkanView *pFVar4;
  longlong lVar5;
  FVulkanTextureViewDesc local_48;
  
  VVar3 = FVulkanTexture::GetViewType(param_1);
  if (VVar3 != VK_IMAGE_VIEW_TYPE_2D) {
    VVar3 = FVulkanTexture::GetViewType(param_1);
    if (VVar3 != VK_IMAGE_VIEW_TYPE_2D_ARRAY) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2101556149659631906>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanFramebuffer.cpp"
                         ,0x122,
                         "Texture->GetViewType() == VK_IMAGE_VIEW_TYPE_2D || Texture->GetViewType() == VK_IMAGE_VIEW_TYPE_2D_ARRAY"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FVulkanView *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  local_48.ImageUsageFlags = 0;
  local_48.SamplerYcbcrConversion = (VkSamplerYcbcrConversion_T *)0x0;
  local_48.ViewType = FVulkanTexture::GetViewType(param_1);
  local_48.AspectFlags = param_1->FullAspectMask;
  lVar5 = (**(code **)(param_1->_padding_ + 0x20))(param_1);
  local_48.UEFormat = *(EPixelFormat *)(lVar5 + 0x33);
  local_48.Format = param_1->ViewFormat;
  local_48.NumMips = 1;
  local_48.ArraySliceIndex = 0;
  local_48.FirstMip = param_2;
  local_48.NumArraySlices = FVulkanTexture::GetNumberOfArrayLevels(param_1);
  local_48.bUseIdentitySwizzle = true;
  pFVar4 = FVulkanTexture::FindOrAddInternalView(param_1,&local_48);
  return pFVar4;
}

// Matches @ 145b2b440

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FVulkanFramebuffer::Matches(FVulkanFramebuffer *this,FRHISetRenderTargetsInfo *param_1)

{
  bool *pbVar1;
  FRHITexture *pFVar2;
  VkImage_T *pVVar3;
  longlong lVar4;
  int *piVar5;
  int iVar6;
  VkImage_T **ppVVar7;
  
  if (((this->NumColorRenderTargets == param_1->NumColorRenderTargets) &&
      ((pFVar2 = (param_1->DepthStencilRenderTarget).Texture, pFVar2 == (FRHITexture *)0x0 ||
       (pVVar3 = this->DepthStencilRenderTargetImage,
       lVar4 = (**(code **)(pFVar2->_padding_ + 0x48))(), pVVar3 == *(VkImage_T **)(lVar4 + 0x170)))
      )) && ((pFVar2 = (param_1->DepthStencilResolveRenderTarget).Texture,
             pFVar2 == (FRHITexture *)0x0 ||
             (pVVar3 = this->DepthStencilResolveRenderTargetImage,
             lVar4 = (**(code **)(pFVar2->_padding_ + 0x48))(),
             pVVar3 == *(VkImage_T **)(lVar4 + 0x170))))) {
    piVar5 = &param_1->NumColorRenderTargets;
    if ((param_1->ShadingRateTexture == (FRHITexture *)0x0) ||
       (pVVar3 = this->FragmentDensityImage,
       lVar4 = (**(code **)(param_1->ShadingRateTexture->_padding_ + 0x48))(),
       pVVar3 == *(VkImage_T **)(lVar4 + 0x170))) {
      iVar6 = 0;
      if (0 < param_1->NumColorRenderTargets) {
        pbVar1 = &param_1->bHasResolveAttachments;
        ppVVar7 = this->ColorRenderTargetImages;
        do {
          if (((*pbVar1 != false) &&
              (pFVar2 = param_1->ColorResolveRenderTarget[0].Texture, pFVar2 != (FRHITexture *)0x0))
             && (pVVar3 = ppVVar7[8], lVar4 = (**(code **)(pFVar2->_padding_ + 0x48))(),
                pVVar3 != *(VkImage_T **)(lVar4 + 0x170))) {
            return false;
          }
          pFVar2 = param_1->ColorRenderTarget[0].Texture;
          if (pFVar2 != (FRHITexture *)0x0) {
            pVVar3 = *ppVVar7;
            lVar4 = (**(code **)(pFVar2->_padding_ + 0x48))();
            if (pVVar3 != *(VkImage_T **)(lVar4 + 0x170)) {
              return false;
            }
            ppVVar7 = ppVVar7 + 1;
          }
          iVar6 = iVar6 + 1;
          param_1 = (FRHISetRenderTargetsInfo *)(param_1->ColorRenderTarget + 1);
        } while (iVar6 < *piVar5);
      }
      return true;
    }
  }
  return false;
}

