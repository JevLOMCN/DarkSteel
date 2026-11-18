// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 8

// FVulkanRenderTargetLayout @ 145b49800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FVulkanRenderTargetLayout * __thiscall
FVulkanRenderTargetLayout::FVulkanRenderTargetLayout
          (FVulkanRenderTargetLayout *this,FVulkanDevice *param_1,FRHIRenderPassInfo *param_2,
          VkImageLayout param_3,VkImageLayout param_4)

{
  VkAttachmentDescription *pVVar1;
  VkAttachmentDescription *pVVar2;
  char cVar3;
  byte bVar4;
  EDepthStencilTargetActions EVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  FRHITexture *pFVar9;
  code *pcVar10;
  undefined8 uVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  uchar uVar17;
  uint uVar18;
  VkFormat VVar19;
  VkAttachmentLoadOp VVar20;
  FRHIRenderPassInfo *pFVar21;
  FVulkanTexture *pFVar22;
  FVulkanRenderTargetLayout *pFVar23;
  longlong lVar24;
  ulonglong *puVar25;
  uint *puVar26;
  longlong *plVar27;
  ERenderTargetActions EVar28;
  byte bVar29;
  byte bVar30;
  uint uVar31;
  VkAttachmentStoreOp VVar32;
  ulonglong uVar33;
  VkSampleCountFlagBits VVar34;
  VkImageLayout VVar35;
  ulonglong uVar36;
  EDepthStencilTargetActions EVar37;
  ulonglong uVar38;
  uchar *puVar39;
  undefined1 auStackY_128 [32];
  undefined1 local_f6 [2];
  uint local_f4;
  VkImageLayout local_f0;
  uint local_ec;
  int local_e8;
  longlong local_e0;
  FVulkanDevice *local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  VkImageLayout local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_128;
  this->NumAttachmentDescriptions = '\0';
  this->NumColorAttachments = '\0';
  this->NumInputAttachments = '\0';
  this->bHasDepthStencil = '\0';
  this->bHasResolveAttachments = '\0';
  this->bHasDepthStencilResolve = '\0';
  this->bHasFragmentDensityAttachment = '\0';
  this->NumSamples = '\0';
  uVar36 = 0;
  this->NumUsedClearValues = '\0';
  this->SubpassHint = None;
  this->MultiViewCount = param_2->MultiViewCount;
  this->RenderPassCompatibleHash = 0;
  this->RenderPassFullHash = 0;
  this->bCalculatedHash = false;
  local_f0 = param_3;
  local_d8 = param_1;
  ResetAttachments(this);
  local_a0 = 0;
  local_58 = VK_IMAGE_LAYOUT_UNDEFINED;
  bVar14 = false;
  bVar16 = false;
  bVar12 = false;
  local_d0 = 0;
  uStack_c8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  pFVar21 = param_2;
  uVar33 = uVar36;
  uVar38 = uVar36;
  do {
    local_f4 = (uint)uVar38;
    if ((pFVar21->ColorRenderTargets).Elements[0].RenderTarget == (FRHITexture *)0x0) break;
    local_f4 = local_f4 + 1;
    uVar38 = (ulonglong)local_f4;
    uVar33 = uVar33 + 1;
    pFVar21 = (FRHIRenderPassInfo *)((pFVar21->ColorRenderTargets).Elements + 1);
  } while ((longlong)uVar33 < 8);
  local_e0 = (longlong)(int)local_f4;
  local_ec = 0;
  if (0 < (int)local_f4) {
    local_e8 = local_f4 - 1;
    puVar39 = &(param_2->ColorRenderTargets).Elements[0].MipIndex;
    do {
      pFVar22 = (FVulkanTexture *)
                (**(code **)(((FColorEntry *)(puVar39 + -0x14))->RenderTarget->_padding_ + 0x48))();
      if ((pFVar22 == (FVulkanTexture *)0x0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Texture",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRenderTargetLayout.cpp"
                              ,0x12f,L""), bVar13)) {
        pcVar10 = (code *)swi(3);
        pFVar23 = (FVulkanRenderTargetLayout *)(*pcVar10)();
        return pFVar23;
      }
      lVar24 = (**(code **)(pFVar22->_padding_ + 0x20))(pFVar22);
      uVar18 = *(int *)(lVar24 + 0x24) >> (*puVar39 & 0x1f);
      if (bVar16) {
        if ((int)uVar18 < 1) {
          uVar18 = 1;
        }
        if (((this->Extent).Extent3D.width != uVar18) &&
           (bVar13 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<9214380982382100788>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRenderTargetLayout.cpp"
                                ,0x134,
                                "Extent.Extent3D.width == FMath::Max(1, TextureDesc.Extent.X >> ColorEntry.MipIndex)"
                               ), bVar13)) {
          pcVar10 = (code *)swi(3);
          pFVar23 = (FVulkanRenderTargetLayout *)(*pcVar10)();
          return pFVar23;
        }
        uVar18 = *(int *)(lVar24 + 0x28) >> (*puVar39 & 0x1f);
        if ((int)uVar18 < 1) {
          uVar18 = 1;
        }
        if (((this->Extent).Extent3D.height != uVar18) &&
           (bVar13 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<9214380982382100789>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRenderTargetLayout.cpp"
                                ,0x135,
                                "Extent.Extent3D.height == FMath::Max(1, TextureDesc.Extent.Y >> ColorEntry.MipIndex)"
                               ), bVar13)) {
          pcVar10 = (code *)swi(3);
          pFVar23 = (FVulkanRenderTargetLayout *)(*pcVar10)();
          return pFVar23;
        }
        if (((this->Extent).Extent3D.depth != (uint)*(ushort *)(lVar24 + 0x2c)) &&
           (bVar13 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<9214380982382100790>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRenderTargetLayout.cpp"
                                ,0x136,"Extent.Extent3D.depth == TextureDesc.Depth"), bVar13)) {
          pcVar10 = (code *)swi(3);
          pFVar23 = (FVulkanRenderTargetLayout *)(*pcVar10)();
          return pFVar23;
        }
      }
      else {
        bVar16 = true;
        if ((int)uVar18 < 1) {
          uVar18 = 1;
        }
        (this->Extent).Extent3D.width = uVar18;
        uVar18 = *(int *)(lVar24 + 0x28) >> (*puVar39 & 0x1f);
        if ((int)uVar18 < 1) {
          uVar18 = 1;
        }
        (this->Extent).Extent3D.height = uVar18;
        *(uint *)((longlong)&this->Extent + 8) = (uint)*(ushort *)(lVar24 + 0x2c);
      }
      if ((((this->NumSamples != '\0') &&
           (lVar24 = (**(code **)(((FColorEntry *)(puVar39 + -0x14))->RenderTarget->_padding_ + 0x20
                                 ))(), this->NumSamples != *(uchar *)(lVar24 + 0x31))) &&
          (param_2->SubpassHint != CustomResolveSubpass)) &&
         (bVar13 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<9214380982382100801>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRenderTargetLayout.cpp"
                              ,0x141,
                              "!NumSamples || NumSamples == ColorEntry.RenderTarget->GetNumSamples() || RPInfo.SubpassHint == ESubpassHint::CustomResolveSubpass"
                             ), bVar13)) {
        pcVar10 = (code *)swi(3);
        pFVar23 = (FVulkanRenderTargetLayout *)(*pcVar10)();
        return pFVar23;
      }
      lVar24 = (**(code **)(((FColorEntry *)(puVar39 + -0x14))->RenderTarget->_padding_ + 0x20))();
      this->NumSamples = *(uchar *)(lVar24 + 0x31);
      if ((this->MultiViewCount != '\0') && (bVar14)) {
        lVar24 = (**(code **)(pFVar22->_padding_ + 0x20))(pFVar22);
        cVar3 = *(char *)(lVar24 + 0x32);
        if (cVar3 != '\0') {
          if (cVar3 == '\x01') {
            lVar24 = (**(code **)(pFVar22->_padding_ + 0x20))(pFVar22);
            uVar18 = (uint)*(ushort *)(lVar24 + 0x2e);
LAB_145b49b3c:
            if (1 < uVar18) goto LAB_145b49b6e;
          }
          else if (cVar3 != '\x02') {
            if (cVar3 == '\x03') goto LAB_145b49b6e;
            if (cVar3 == '\x04') {
              lVar24 = (**(code **)(pFVar22->_padding_ + 0x20))(pFVar22);
              uVar18 = ((uint)*(ushort *)(lVar24 + 0x2e) + (uint)*(ushort *)(lVar24 + 0x2e) * 2) * 2
              ;
              goto LAB_145b49b3c;
            }
            bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("!\"Enclosing block should never be called\"",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanResources.h"
                                ,0x42,L"");
            if (bVar14) {
              pcVar10 = (code *)swi(3);
              pFVar23 = (FVulkanRenderTargetLayout *)(*pcVar10)();
              return pFVar23;
            }
            FVulkanTexture::ErrorInvalidViewType(pFVar22);
          }
        }
        bVar14 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<9214380982382100804>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRenderTargetLayout.cpp"
                            ,0x144,
                            "!GetIsMultiView() || !bMultiviewRenderTargets || Texture->GetNumberOfArrayLevels() > 1"
                           );
        if (bVar14) {
          pcVar10 = (code *)swi(3);
          pFVar23 = (FVulkanRenderTargetLayout *)(*pcVar10)();
          return pFVar23;
        }
      }
LAB_145b49b6e:
      lVar24 = (**(code **)(pFVar22->_padding_ + 0x20))(pFVar22);
      cVar3 = *(char *)(lVar24 + 0x32);
      if (cVar3 == '\0') {
LAB_145b49bcd:
        uVar18 = 1;
      }
      else if (cVar3 == '\x01') {
        lVar24 = (**(code **)(pFVar22->_padding_ + 0x20))(pFVar22);
        uVar18 = (uint)*(ushort *)(lVar24 + 0x2e);
      }
      else {
        if (cVar3 == '\x02') goto LAB_145b49bcd;
        if (cVar3 == '\x03') {
          uVar18 = 6;
        }
        else {
          if (cVar3 != '\x04') {
            bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("!\"Enclosing block should never be called\"",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanResources.h"
                                ,0x42,L"");
            if (bVar14) {
              pcVar10 = (code *)swi(3);
              pFVar23 = (FVulkanRenderTargetLayout *)(*pcVar10)();
              return pFVar23;
            }
            FVulkanTexture::ErrorInvalidViewType(pFVar22);
            goto LAB_145b49bcd;
          }
          lVar24 = (**(code **)(pFVar22->_padding_ + 0x20))(pFVar22);
          uVar18 = ((uint)*(ushort *)(lVar24 + 0x2e) + (uint)*(ushort *)(lVar24 + 0x2e) * 2) * 2;
        }
      }
      bVar14 = 1 < uVar18;
      if (((int)uVar36 != local_e8) ||
         (VVar34 = VK_SAMPLE_COUNT_1_BIT, param_2->SubpassHint != CustomResolveSubpass)) {
        VVar34 = (VkSampleCountFlagBits)this->NumSamples;
      }
      bVar4 = this->NumAttachmentDescriptions;
      this->Desc[bVar4].samples = VVar34;
      puVar25 = (ulonglong *)(**(code **)(pFVar22->_padding_ + 0x20))(pFVar22);
      uVar33 = *puVar25;
      lVar24 = (**(code **)(((FColorEntry *)(puVar39 + -0x14))->RenderTarget->_padding_ + 0x20))();
      if ((uVar33 & 0x10) == 0) {
        VVar19 = GPixelFormats[*(byte *)(lVar24 + 0x33)].PlatformFormat;
      }
      else {
        VVar19 = GVulkanSRGBFormat[*(byte *)(lVar24 + 0x33)];
      }
      this->Desc[bVar4].format = VVar19;
      VVar20 = VK_ATTACHMENT_LOAD_OP_MAX_ENUM;
      bVar30 = puVar39[1] >> 2;
      if (bVar30 == 0) {
        VVar20 = VK_ATTACHMENT_LOAD_OP_DONT_CARE;
      }
      else if (bVar30 == 1) {
        VVar20 = VK_ATTACHMENT_LOAD_OP_LOAD;
      }
      else if (bVar30 == 2) {
        VVar20 = VK_ATTACHMENT_LOAD_OP_CLEAR;
      }
      else {
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("OutLoadAction != VK_ATTACHMENT_LOAD_OP_MAX_ENUM",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRHIPrivate.h"
                            ,0x169,L"");
        if (bVar13) {
          pcVar10 = (code *)swi(3);
          pFVar23 = (FVulkanRenderTargetLayout *)(*pcVar10)();
          return pFVar23;
        }
      }
      this->Desc[bVar4].loadOp = VVar20;
      if ((bVar12) || (bVar12 = false, VVar20 == VK_ATTACHMENT_LOAD_OP_CLEAR)) {
        bVar12 = true;
      }
      VVar32 = VK_ATTACHMENT_STORE_OP_MAX_ENUM;
      EVar28 = puVar39[1] & (LoadOpMask|DontLoad_Store);
      if ((puVar39[1] & (LoadOpMask|DontLoad_Store)) == DontLoad_DontStore) {
LAB_145b49d50:
        VVar32 = VK_ATTACHMENT_STORE_OP_DONT_CARE;
      }
      else if (EVar28 == DontLoad_Store) {
        VVar32 = VK_ATTACHMENT_STORE_OP_STORE;
      }
      else {
        if (EVar28 == LoadOpMask) goto LAB_145b49d50;
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("OutStoreAction != VK_ATTACHMENT_STORE_OP_MAX_ENUM",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRHIPrivate.h"
                            ,0x17f,L"");
        if (bVar13) {
          pcVar10 = (code *)swi(3);
          pFVar23 = (FVulkanRenderTargetLayout *)(*pcVar10)();
          return pFVar23;
        }
      }
      this->Desc[bVar4].storeOp = VVar32;
      this->Desc[bVar4].stencilLoadOp = VK_ATTACHMENT_LOAD_OP_DONT_CARE;
      this->Desc[bVar4].stencilStoreOp = VK_ATTACHMENT_STORE_OP_DONT_CARE;
      puVar26 = (uint *)(**(code **)(pFVar22->_padding_ + 0x20))(pFVar22);
      if ((((*puVar26 >> 0xc & 1) != 0) &&
          (this->Desc[bVar4].storeOp != VK_ATTACHMENT_STORE_OP_DONT_CARE)) &&
         (bVar13 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<9214380982382100820>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRenderTargetLayout.cpp"
                              ,0x154,"CurrDesc.storeOp == VK_ATTACHMENT_STORE_OP_DONT_CARE"), bVar13
         )) {
        pcVar10 = (code *)swi(3);
        pFVar23 = (FVulkanRenderTargetLayout *)(*pcVar10)();
        return pFVar23;
      }
      this->Desc[bVar4].initialLayout = VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL;
      this->Desc[bVar4].finalLayout = VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL;
      this->ColorReferences[this->NumColorAttachments].attachment =
           (uint)this->NumAttachmentDescriptions;
      this->ColorReferences[this->NumColorAttachments].layout =
           VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL;
      if ((1 < (int)this->Desc[bVar4].samples) &&
         (*(FRHITexture **)(puVar39 + -0xc) != (FRHITexture *)0x0)) {
        uVar33 = (ulonglong)this->NumAttachmentDescriptions;
        pVVar1 = this->Desc + uVar33;
        VVar19 = pVVar1->format;
        VVar34 = pVVar1->samples;
        VVar20 = pVVar1->loadOp;
        this->Desc[uVar33 + 1].flags = pVVar1->flags;
        this->Desc[uVar33 + 1].format = VVar19;
        this->Desc[uVar33 + 1].samples = VVar34;
        this->Desc[uVar33 + 1].loadOp = VVar20;
        pVVar1 = this->Desc + uVar33;
        VVar20 = pVVar1->stencilLoadOp;
        uVar11 = *(undefined8 *)(&pVVar1->storeOp + 2);
        this->Desc[uVar33 + 1].storeOp = pVVar1->storeOp;
        this->Desc[uVar33 + 1].stencilLoadOp = VVar20;
        *(undefined8 *)&this->Desc[uVar33 + 1].stencilStoreOp = uVar11;
        this->Desc[uVar33 + 1].finalLayout = this->Desc[uVar33].finalLayout;
        this->Desc[(ulonglong)this->NumAttachmentDescriptions + 1].samples = VK_SAMPLE_COUNT_1_BIT;
        this->Desc[(ulonglong)this->NumAttachmentDescriptions + 1].loadOp =
             VK_ATTACHMENT_LOAD_OP_DONT_CARE;
        this->Desc[(ulonglong)this->NumAttachmentDescriptions + 1].storeOp =
             VK_ATTACHMENT_STORE_OP_STORE;
        this->ResolveReferences[this->NumColorAttachments].attachment =
             this->NumAttachmentDescriptions + 1;
        this->ResolveReferences[this->NumColorAttachments].layout =
             VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL;
        this->bHasResolveAttachments = '\x01';
        this->NumAttachmentDescriptions = this->NumAttachmentDescriptions + '\x01';
        local_a0 = CONCAT22(local_a0._2_2_,(ushort)local_a0 | 1 << (this->NumColorAttachments & 0xf)
                           );
      }
      puVar39 = puVar39 + 0x18;
      bVar30 = this->NumColorAttachments;
      uVar33 = (ulonglong)bVar30;
      *(VkFormat *)((longlong)&local_d0 + uVar33 * 4 + 4) = this->Desc[bVar4].format;
      *(char *)((longlong)&local_98 + uVar33) = (char)this->Desc[bVar4].loadOp;
      *(undefined4 *)((longlong)&uStack_80 + uVar33 * 4) = 2;
      VVar32 = this->Desc[bVar4].storeOp;
      local_d0 = CONCAT71(local_d0._1_7_,(char)local_d0 + '\x01');
      local_ec = local_ec + 1;
      uVar36 = (ulonglong)local_ec;
      this->NumAttachmentDescriptions = this->NumAttachmentDescriptions + '\x01';
      *(char *)((longlong)&uStack_90 + uVar33 + 3) = (char)VVar32;
      local_e0 = local_e0 + -1;
      this->NumColorAttachments = bVar30 + 1;
    } while (local_e0 != 0);
    local_e0 = 0;
  }
  uVar18 = local_f4;
  bVar15 = false;
  bVar13 = false;
  if ((param_2->DepthStencilRenderTarget).DepthStencilTarget == (FRHITexture *)0x0) {
    if (local_f4 == 0) {
      iVar7 = (param_2->ResolveRect).X1;
      if ((((iVar7 < 0) || (iVar8 = (param_2->ResolveRect).Y1, iVar8 < 0)) ||
          (((param_2->ResolveRect).X2 - iVar7 < 1 || ((param_2->ResolveRect).Y2 - iVar8 < 1)))) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("RPInfo.ResolveRect.IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRenderTargetLayout.cpp"
                              ,0x1ee,
                              L"For raster-only passes without render targets, ResolveRect has to contain the render area"
                             ), bVar16)) {
        pcVar10 = (code *)swi(3);
        pFVar23 = (FVulkanRenderTargetLayout *)(*pcVar10)();
        return pFVar23;
      }
      (this->Offset).Offset3D.x = (param_2->ResolveRect).X1;
      (this->Offset).Offset3D.y = (param_2->ResolveRect).Y1;
      (this->Offset).Offset3D.z = 0;
      (this->Extent).Extent3D.width = (param_2->ResolveRect).X2 - (param_2->ResolveRect).X1;
      (this->Extent).Extent3D.height = (param_2->ResolveRect).Y2 - (param_2->ResolveRect).Y1;
      (this->Extent).Extent3D.depth = 1;
    }
  }
  else {
    bVar4 = this->NumAttachmentDescriptions;
    this->Desc[bVar4].flags = 0;
    this->Desc[bVar4].format = VK_FORMAT_UNDEFINED;
    this->Desc[bVar4].samples = 0;
    this->Desc[bVar4].loadOp = VK_ATTACHMENT_LOAD_OP_LOAD;
    this->Desc[bVar4].storeOp = VK_ATTACHMENT_STORE_OP_STORE;
    this->Desc[bVar4].stencilLoadOp = VK_ATTACHMENT_LOAD_OP_LOAD;
    this->Desc[bVar4].stencilStoreOp = VK_ATTACHMENT_STORE_OP_STORE;
    this->Desc[bVar4].initialLayout = VK_IMAGE_LAYOUT_UNDEFINED;
    this->Desc[bVar4].finalLayout = VK_IMAGE_LAYOUT_UNDEFINED;
    pFVar22 = (FVulkanTexture *)
              (**(code **)(((param_2->DepthStencilRenderTarget).DepthStencilTarget)->_padding_ +
                          0x48))();
    if ((pFVar22 == (FVulkanTexture *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Texture",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRenderTargetLayout.cpp"
                            ,0x17a,L""), bVar13)) {
      pcVar10 = (code *)swi(3);
      pFVar23 = (FVulkanRenderTargetLayout *)(*pcVar10)();
      return pFVar23;
    }
    puVar26 = (uint *)(**(code **)(pFVar22->_padding_ + 0x20))(pFVar22);
    uVar18 = FVulkanTexture::GetNumberOfArrayLevels(pFVar22);
    bVar13 = bVar15;
    if (1 < uVar18) {
      lVar24 = (**(code **)(pFVar22->_padding_ + 0x20))(pFVar22);
      if ((*(char *)(lVar24 + 0x32) != '\x03') && (*(char *)(lVar24 + 0x32) != '\x04')) {
        bVar13 = true;
      }
    }
    lVar24 = (**(code **)(((param_2->DepthStencilRenderTarget).DepthStencilTarget)->_padding_ + 0x20
                         ))();
    bVar30 = *(byte *)(lVar24 + 0x31);
    this->Desc[bVar4].samples = (uint)bVar30;
    if ((((this->NumSamples != 0) && ((uint)bVar30 != (uint)this->NumSamples)) &&
        (param_2->SubpassHint != CustomResolveSubpass)) &&
       (bVar15 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<9214380982382100863>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRenderTargetLayout.cpp"
                            ,0x17f,
                            "!NumSamples || CurrDesc.samples == NumSamples || RPInfo.SubpassHint == ESubpassHint::CustomResolveSubpass"
                           ), bVar15)) {
      pcVar10 = (code *)swi(3);
      pFVar23 = (FVulkanRenderTargetLayout *)(*pcVar10)();
      return pFVar23;
    }
    this->NumSamples = (char)this->Desc[bVar4].samples;
    lVar24 = (**(code **)(((param_2->DepthStencilRenderTarget).DepthStencilTarget)->_padding_ + 0x20
                         ))();
    this->Desc[bVar4].format = GPixelFormats[*(byte *)(lVar24 + 0x33)].PlatformFormat;
    VVar20 = RenderTargetLoadActionToVulkan((param_2->DepthStencilRenderTarget).Action >> 6);
    this->Desc[bVar4].loadOp = VVar20;
    VVar20 = RenderTargetLoadActionToVulkan((param_2->DepthStencilRenderTarget).Action >> 2 & Num);
    this->Desc[bVar4].stencilLoadOp = VVar20;
    if (((bVar12) || (this->Desc[bVar4].loadOp == VK_ATTACHMENT_LOAD_OP_CLEAR)) ||
       (bVar12 = false, VVar20 == VK_ATTACHMENT_LOAD_OP_CLEAR)) {
      bVar12 = true;
    }
    VVar32 = VK_ATTACHMENT_STORE_OP_MAX_ENUM;
    bVar30 = (param_2->DepthStencilRenderTarget).Action >> 4;
    bVar29 = bVar30 & 3;
    if ((bVar30 & 3) == 0) {
LAB_145b4a49f:
      VVar32 = VK_ATTACHMENT_STORE_OP_DONT_CARE;
    }
    else if (bVar29 == 1) {
      VVar32 = VK_ATTACHMENT_STORE_OP_STORE;
    }
    else {
      if (bVar29 == 2) goto LAB_145b4a49f;
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("OutStoreAction != VK_ATTACHMENT_STORE_OP_MAX_ENUM",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRHIPrivate.h"
                          ,0x17f,L"");
      if (bVar15) {
        pcVar10 = (code *)swi(3);
        pFVar23 = (FVulkanRenderTargetLayout *)(*pcVar10)();
        return pFVar23;
      }
    }
    this->Desc[bVar4].storeOp = VVar32;
    EVar5 = (param_2->DepthStencilRenderTarget).Action;
    EVar37 = EVar5 & 3;
    if ((EVar5 & 3) == DontLoad_DontStore) {
LAB_145b4a4b2:
      VVar32 = VK_ATTACHMENT_STORE_OP_DONT_CARE;
    }
    else if (EVar37 == DontLoad_StoreStencilNotDepth) {
      VVar32 = VK_ATTACHMENT_STORE_OP_STORE;
    }
    else {
      if (EVar37 == 2) goto LAB_145b4a4b2;
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("OutStoreAction != VK_ATTACHMENT_STORE_OP_MAX_ENUM",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRHIPrivate.h"
                          ,0x17f,L"");
      if (bVar15) {
        pcVar10 = (code *)swi(3);
        pFVar23 = (FVulkanRenderTargetLayout *)(*pcVar10)();
        return pFVar23;
      }
      VVar32 = VK_ATTACHMENT_STORE_OP_MAX_ENUM;
    }
    this->Desc[bVar4].stencilStoreOp = VVar32;
    if ((*puVar26 >> 0xc & 1) != 0) {
      if ((this->Desc[bVar4].storeOp != VK_ATTACHMENT_STORE_OP_DONT_CARE) &&
         (bVar15 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<9214380982382100875>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRenderTargetLayout.cpp"
                              ,0x18b,"CurrDesc.storeOp == VK_ATTACHMENT_STORE_OP_DONT_CARE"), bVar15
         )) {
        pcVar10 = (code *)swi(3);
        pFVar23 = (FVulkanRenderTargetLayout *)(*pcVar10)();
        return pFVar23;
      }
      if ((this->Desc[bVar4].stencilStoreOp != VK_ATTACHMENT_STORE_OP_DONT_CARE) &&
         (bVar15 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<9214380982382100876>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRenderTargetLayout.cpp"
                              ,0x18c,"CurrDesc.stencilStoreOp == VK_ATTACHMENT_STORE_OP_DONT_CARE"),
         bVar15)) {
        pcVar10 = (code *)swi(3);
        pFVar23 = (FVulkanRenderTargetLayout *)(*pcVar10)();
        return pFVar23;
      }
    }
    this->Desc[bVar4].initialLayout = local_f0;
    this->Desc[bVar4].finalLayout = local_f0;
    (this->StencilDesc).stencilInitialLayout = param_4;
    (this->StencilDesc).stencilFinalLayout = param_4;
    if (local_f0 == VK_IMAGE_LAYOUT_UNDEFINED) {
      if (((((param_2->DepthStencilRenderTarget).ExclusiveDepthStencil.Value & DepthMask) ==
            DepthNop) &&
          (((local_d8->OptionalDeviceExtensions).field0_0x0.Packed & 0x200000000000000) != 0)) &&
         (this->Desc[bVar4].loadOp == VK_ATTACHMENT_LOAD_OP_LOAD)) {
        this->Desc[bVar4].loadOp = VK_ATTACHMENT_LOAD_OP_NONE;
      }
      if ((this->Desc[bVar4].storeOp != VK_ATTACHMENT_STORE_OP_DONT_CARE) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("CurrDesc.storeOp == VK_ATTACHMENT_STORE_OP_DONT_CARE",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRenderTargetLayout.cpp"
                              ,0x1ab,L""), bVar15)) {
        pcVar10 = (code *)swi(3);
        pFVar23 = (FVulkanRenderTargetLayout *)(*pcVar10)();
        return pFVar23;
      }
      this->Desc[bVar4].finalLayout = VK_IMAGE_LAYOUT_ATTACHMENT_OPTIMAL;
    }
    if (param_4 == VK_IMAGE_LAYOUT_UNDEFINED) {
      if (((((param_2->DepthStencilRenderTarget).ExclusiveDepthStencil.Value & StencilMask) ==
            DepthNop) &&
          (((local_d8->OptionalDeviceExtensions).field0_0x0.Packed & 0x200000000000000) != 0)) &&
         (this->Desc[bVar4].stencilLoadOp == VK_ATTACHMENT_LOAD_OP_LOAD)) {
        this->Desc[bVar4].stencilLoadOp = VK_ATTACHMENT_LOAD_OP_NONE;
      }
      if ((this->Desc[bVar4].stencilStoreOp != VK_ATTACHMENT_STORE_OP_DONT_CARE) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("CurrDesc.stencilStoreOp == VK_ATTACHMENT_STORE_OP_DONT_CARE",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRenderTargetLayout.cpp"
                              ,0x1b8,L""), bVar15)) {
        pcVar10 = (code *)swi(3);
        pFVar23 = (FVulkanRenderTargetLayout *)(*pcVar10)();
        return pFVar23;
      }
      (this->StencilDesc).stencilFinalLayout = VK_IMAGE_LAYOUT_ATTACHMENT_OPTIMAL;
    }
    bVar30 = this->NumAttachmentDescriptions;
    (this->DepthReference).attachment = (uint)bVar30;
    (this->DepthReference).layout = local_f0;
    (this->StencilReference).stencilLayout = param_4;
    if (((GRHIGlobals.SupportsDepthStencilResolve != false) && (1 < (int)this->Desc[bVar4].samples))
       && ((param_2->DepthStencilRenderTarget).ResolveTarget != (FRHITexture *)0x0)) {
      pVVar1 = this->Desc + bVar30;
      VVar19 = pVVar1->format;
      VVar34 = pVVar1->samples;
      VVar20 = pVVar1->loadOp;
      pVVar2 = this->Desc + (ulonglong)bVar30 + 1;
      pVVar2->flags = pVVar1->flags;
      pVVar2->format = VVar19;
      pVVar2->samples = VVar34;
      pVVar2->loadOp = VVar20;
      pVVar1 = this->Desc + bVar30;
      VVar20 = pVVar1->stencilLoadOp;
      uVar11 = *(undefined8 *)(&pVVar1->storeOp + 2);
      pVVar2 = this->Desc + (ulonglong)bVar30 + 1;
      pVVar2->storeOp = pVVar1->storeOp;
      pVVar2->stencilLoadOp = VVar20;
      *(undefined8 *)(&pVVar2->storeOp + 2) = uVar11;
      this->Desc[(ulonglong)bVar30 + 1].finalLayout = this->Desc[bVar30].finalLayout;
      this->Desc[(ulonglong)this->NumAttachmentDescriptions + 1].samples = VK_SAMPLE_COUNT_1_BIT;
      this->Desc[(ulonglong)this->NumAttachmentDescriptions + 1].loadOp =
           VK_ATTACHMENT_LOAD_OP_DONT_CARE;
      this->Desc[(ulonglong)this->NumAttachmentDescriptions + 1].storeOp =
           VK_ATTACHMENT_STORE_OP_STORE;
      this->Desc[(ulonglong)this->NumAttachmentDescriptions + 1].stencilLoadOp =
           VK_ATTACHMENT_LOAD_OP_DONT_CARE;
      this->Desc[(ulonglong)this->NumAttachmentDescriptions + 1].stencilStoreOp =
           VK_ATTACHMENT_STORE_OP_STORE;
      bVar30 = this->NumAttachmentDescriptions;
      (this->DepthStencilResolveReference).layout = local_f0;
      bVar29 = this->NumColorAttachments;
      (this->DepthStencilResolveReference).attachment = bVar30 + 1;
      if (0xf < bVar29) {
        local_f6[0] = 0;
        `FVulkanRenderTargetLayout::FVulkanRenderTargetLayout'::__l67::<lambda_1>::operator()
                  (local_f6);
      }
      this->bHasDepthStencilResolve = '\x01';
      local_a0 = CONCAT22(local_a0._2_2_,(ushort)local_a0 | 1 << (this->NumColorAttachments & 0xf));
      bVar30 = this->NumAttachmentDescriptions + 1;
      this->NumAttachmentDescriptions = bVar30;
    }
    uVar11 = local_88;
    uStack_90._0_2_ = CONCAT11((char)this->Desc[bVar4].stencilLoadOp,(char)this->Desc[bVar4].loadOp)
    ;
    local_88._5_3_ = SUB83(uVar11,5);
    local_88._0_5_ =
         CONCAT14((char)this->Desc[bVar4].stencilStoreOp,
                  CONCAT13((char)this->Desc[bVar4].storeOp,(undefined3)local_88));
    uStack_60 = CONCAT44(param_4,local_f0);
    local_b0 = CONCAT44(this->Desc[bVar4].format,(undefined4)local_b0);
    this->NumAttachmentDescriptions = bVar30 + 1;
    this->bHasDepthStencil = '\x01';
    uVar31 = puVar26[9];
    uVar18 = local_f4;
    if (bVar16) {
      uVar6 = (this->Extent).Extent3D.width;
      if (uVar6 < uVar31) {
        uVar31 = uVar6;
      }
      uVar6 = (this->Extent).Extent3D.height;
      (this->Extent).Extent3D.width = uVar31;
      uVar31 = puVar26[10];
      if (uVar6 < puVar26[10]) {
        uVar31 = uVar6;
      }
      (this->Extent).Extent3D.height = uVar31;
    }
    else {
      (this->Extent).Extent3D.width = uVar31;
      (this->Extent).Extent3D.height = puVar26[10];
      *(uint *)((longlong)&this->Extent + 8) = (uint)(ushort)puVar26[0xb];
    }
  }
  if ((GRHIGlobals.VariableRateShading.SupportsAttachment == false) ||
     (pFVar9 = (param_2->ShadingRateTexture).Reference, pFVar9 == (FRHITexture *)0x0))
  goto LAB_145b4a6d2;
  plVar27 = (longlong *)(**(code **)(pFVar9->_padding_ + 0x48))();
  lVar24 = (**(code **)(*plVar27 + 0x20))(plVar27);
  if ((*(EPixelFormat *)(lVar24 + 0x33) != GRHIGlobals.VariableRateShading.ImageFormat) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("Texture->GetFormat() == GRHIGlobals.VariableRateShading.ImageFormat",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRenderTargetLayout.cpp"
                          ,0x1fb,L""), bVar16)) {
    pcVar10 = (code *)swi(3);
    pFVar23 = (FVulkanRenderTargetLayout *)(*pcVar10)();
    return pFVar23;
  }
  pVVar1 = this->Desc + this->NumAttachmentDescriptions;
  pVVar1->flags = 0;
  pVVar1->format = VK_FORMAT_UNDEFINED;
  pVVar1->samples = 0;
  pVVar1->loadOp = VK_ATTACHMENT_LOAD_OP_LOAD;
  pVVar1->storeOp = VK_ATTACHMENT_STORE_OP_STORE;
  pVVar1->stencilLoadOp = VK_ATTACHMENT_LOAD_OP_LOAD;
  pVVar1->stencilStoreOp = VK_ATTACHMENT_STORE_OP_STORE;
  pVVar1->initialLayout = VK_IMAGE_LAYOUT_UNDEFINED;
  pVVar1->finalLayout = VK_IMAGE_LAYOUT_UNDEFINED;
  bVar16 = ValidateShadingRateDataType();
  if (bVar16) {
    if (GRHIGlobals.VariableRateShading.ImageDataType == VRSImage_Palette) {
      VVar35 = VK_IMAGE_LAYOUT_FRAGMENT_SHADING_RATE_ATTACHMENT_OPTIMAL_KHR;
    }
    else {
      if (GRHIGlobals.VariableRateShading.ImageDataType != VRSImage_Fractional) goto LAB_145b4a63b;
      VVar35 = VK_IMAGE_LAYOUT_FRAGMENT_DENSITY_MAP_OPTIMAL_EXT;
    }
  }
  else {
LAB_145b4a63b:
    VVar35 = VK_IMAGE_LAYOUT_UNDEFINED;
  }
  pVVar1->flags = 0;
  lVar24 = (**(code **)(((param_2->ShadingRateTexture).Reference)->_padding_ + 0x20))();
  pVVar1->format = GPixelFormats[*(byte *)(lVar24 + 0x33)].PlatformFormat;
  lVar24 = (**(code **)(((param_2->ShadingRateTexture).Reference)->_padding_ + 0x20))();
  bVar4 = *(byte *)(lVar24 + 0x31);
  pVVar1->storeOp = VK_ATTACHMENT_STORE_OP_DONT_CARE;
  pVVar1->stencilStoreOp = VK_ATTACHMENT_STORE_OP_DONT_CARE;
  pVVar1->samples = (uint)bVar4;
  pVVar1->stencilLoadOp = VK_ATTACHMENT_LOAD_OP_DONT_CARE;
  pVVar1->loadOp = VK_ATTACHMENT_LOAD_OP_LOAD;
  pVVar1->initialLayout = VVar35;
  pVVar1->finalLayout = VVar35;
  bVar4 = this->NumAttachmentDescriptions;
  (this->FragmentDensityReference).attachment = (uint)bVar4;
  (this->FragmentDensityReference).layout = VVar35;
  uStack_90._0_3_ = CONCAT12((char)pVVar1->stencilLoadOp,(undefined2)uStack_90);
  local_88._0_6_ = CONCAT15((char)pVVar1->stencilStoreOp,(undefined5)local_88);
  uStack_a8 = CONCAT44(uStack_a8._4_4_,pVVar1->format);
  this->NumAttachmentDescriptions = bVar4 + 1;
  this->bHasFragmentDensityAttachment = '\x01';
  local_58 = VVar35;
LAB_145b4a6d2:
  this->SubpassHint = param_2->SubpassHint;
  local_d0 = CONCAT62(CONCAT51(CONCAT41(local_d0._4_4_,param_2->SubpassHint),this->NumSamples),
                      CONCAT11(this->MultiViewCount,(char)local_d0));
  if ((((1 < this->MultiViewCount) && (!bVar14)) && ((uVar18 != 0 || (!bVar13)))) &&
     (1 < (byte)LogVulkan._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogVulkan);
  }
  uVar18 = (*FCrc::MemCrc32Func)(&local_d0,0x34,0);
  this->RenderPassCompatibleHash = uVar18;
  uVar18 = (*FCrc::MemCrc32Func)(&local_98,0x44,uVar18);
  this->RenderPassFullHash = uVar18;
  if (bVar12) {
    uVar17 = this->NumAttachmentDescriptions;
  }
  else {
    uVar17 = '\0';
  }
  this->NumUsedClearValues = uVar17;
  this->bCalculatedHash = true;
  return this;
}

// FVulkanRenderTargetLayout @ 145b4a7c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

FVulkanRenderTargetLayout * __thiscall
FVulkanRenderTargetLayout::FVulkanRenderTargetLayout
          (FVulkanRenderTargetLayout *this,FVulkanDevice *param_1,FRHISetRenderTargetsInfo *param_2)

{
  VkAttachmentDescription *pVVar1;
  byte bVar2;
  ERenderTargetLoadAction EVar3;
  ERenderTargetStoreAction EVar4;
  uint uVar5;
  code *pcVar6;
  VkSampleCountFlagBits VVar7;
  undefined8 uVar8;
  uint3 uVar9;
  bool bVar10;
  bool bVar11;
  byte bVar12;
  bool bVar13;
  uchar uVar14;
  uint uVar15;
  VkFormat VVar16;
  VkAttachmentLoadOp VVar17;
  longlong *plVar18;
  FVulkanRenderTargetLayout *pFVar19;
  ulonglong *puVar20;
  longlong lVar21;
  ulonglong uVar22;
  FVulkanTexture *this_00;
  longlong lVar23;
  byte bVar24;
  VkAttachmentStoreOp VVar25;
  VkImageLayout VVar26;
  int iVar27;
  VkAttachmentStoreOp VVar28;
  VkImageLayout VVar29;
  uint *puVar30;
  undefined1 auStackY_108 [32];
  undefined1 local_d6 [6];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  VkImageLayout local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_108;
  iVar27 = 0;
  this->NumAttachmentDescriptions = '\0';
  this->NumColorAttachments = '\0';
  this->NumInputAttachments = '\0';
  this->bHasDepthStencil = '\0';
  this->bHasResolveAttachments = '\0';
  this->bHasDepthStencilResolve = '\0';
  this->bHasFragmentDensityAttachment = '\0';
  this->NumSamples = '\0';
  this->RenderPassCompatibleHash = 0;
  this->RenderPassFullHash = 0;
  this->bCalculatedHash = false;
  this->NumUsedClearValues = '\0';
  this->SubpassHint = None;
  this->MultiViewCount = '\0';
  ResetAttachments(this);
  local_a0 = 0;
  local_58 = VK_IMAGE_LAYOUT_UNDEFINED;
  bVar11 = false;
  bVar13 = false;
  local_d0 = 0;
  uStack_c8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  bVar10 = false;
  if (0 < param_2->NumColorRenderTargets) {
    puVar30 = &param_2->ColorRenderTarget[0].MipIndex;
    do {
      if (((FRHIRenderTargetView *)(puVar30 + -2))->Texture != (FRHITexture *)0x0) {
        plVar18 = (longlong *)
                  (**(code **)(((FRHIRenderTargetView *)(puVar30 + -2))->Texture->_padding_ + 0x48))
                            ();
        if ((plVar18 == (longlong *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Texture",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRenderTargetLayout.cpp"
                                ,0x51,L""), bVar10)) {
          pcVar6 = (code *)swi(3);
          pFVar19 = (FVulkanRenderTargetLayout *)(*pcVar6)();
          return pFVar19;
        }
        puVar20 = (ulonglong *)(**(code **)(*plVar18 + 0x20))(plVar18);
        uVar15 = *(int *)((longlong)puVar20 + 0x24) >> ((byte)*puVar30 & 0x1f);
        if (bVar13) {
          if ((int)uVar15 < 1) {
            uVar15 = 1;
          }
          if (((this->Extent).Extent3D.width != uVar15) &&
             (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<9214380982382100566>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRenderTargetLayout.cpp"
                                  ,0x56,
                                  "Extent.Extent3D.width == FMath::Max(1, TextureDesc.Extent.X >> RTView.MipIndex)"
                                 ), bVar10)) {
            pcVar6 = (code *)swi(3);
            pFVar19 = (FVulkanRenderTargetLayout *)(*pcVar6)();
            return pFVar19;
          }
          uVar15 = (int)puVar20[5] >> ((byte)*puVar30 & 0x1f);
          if ((int)uVar15 < 1) {
            uVar15 = 1;
          }
          if (((this->Extent).Extent3D.height != uVar15) &&
             (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<9214380982382100567>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRenderTargetLayout.cpp"
                                  ,0x57,
                                  "Extent.Extent3D.height == FMath::Max(1, TextureDesc.Extent.Y >> RTView.MipIndex)"
                                 ), bVar10)) {
            pcVar6 = (code *)swi(3);
            pFVar19 = (FVulkanRenderTargetLayout *)(*pcVar6)();
            return pFVar19;
          }
          if (((this->Extent).Extent3D.depth != (uint)*(ushort *)((longlong)puVar20 + 0x2c)) &&
             (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<9214380982382100568>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRenderTargetLayout.cpp"
                                  ,0x58,"Extent.Extent3D.depth == TextureDesc.Depth"), bVar10)) {
            pcVar6 = (code *)swi(3);
            pFVar19 = (FVulkanRenderTargetLayout *)(*pcVar6)();
            return pFVar19;
          }
        }
        else {
          bVar13 = true;
          if ((int)uVar15 < 1) {
            uVar15 = 1;
          }
          (this->Extent).Extent3D.width = uVar15;
          uVar15 = (int)puVar20[5] >> ((byte)*puVar30 & 0x1f);
          if ((int)uVar15 < 1) {
            uVar15 = 1;
          }
          (this->Extent).Extent3D.height = uVar15;
          *(uint *)((longlong)&this->Extent + 8) = (uint)*(ushort *)((longlong)puVar20 + 0x2c);
        }
        if (((this->NumSamples != '\0') &&
            (lVar21 = (**(code **)(*plVar18 + 0x20))(plVar18),
            this->NumSamples != *(uchar *)(lVar21 + 0x31))) &&
           (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<9214380982382100578>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRenderTargetLayout.cpp"
                                ,0x62,"!NumSamples || NumSamples == Texture->GetNumSamples()"),
           bVar10)) {
          pcVar6 = (code *)swi(3);
          pFVar19 = (FVulkanRenderTargetLayout *)(*pcVar6)();
          return pFVar19;
        }
        lVar21 = (**(code **)(*plVar18 + 0x20))(plVar18);
        bVar2 = *(byte *)(lVar21 + 0x31);
        bVar24 = this->NumAttachmentDescriptions;
        this->NumSamples = bVar2;
        this->Desc[bVar24].samples = (uint)bVar2;
        uVar22 = *puVar20;
        lVar21 = (**(code **)(((FRHIRenderTargetView *)(puVar30 + -2))->Texture->_padding_ + 0x20))
                           ();
        if ((uVar22 & 0x10) == 0) {
          VVar16 = GPixelFormats[*(byte *)(lVar21 + 0x33)].PlatformFormat;
        }
        else {
          VVar16 = GVulkanSRGBFormat[*(byte *)(lVar21 + 0x33)];
        }
        this->Desc[bVar24].format = VVar16;
        VVar17 = VK_ATTACHMENT_LOAD_OP_MAX_ENUM;
        EVar3 = *(ERenderTargetLoadAction *)(puVar30 + 2);
        if (EVar3 == ENoAction) {
          VVar17 = VK_ATTACHMENT_LOAD_OP_DONT_CARE;
        }
        else if (EVar3 == ELoad) {
          VVar17 = VK_ATTACHMENT_LOAD_OP_LOAD;
        }
        else if (EVar3 == EClear) {
          VVar17 = VK_ATTACHMENT_LOAD_OP_CLEAR;
        }
        else {
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("OutLoadAction != VK_ATTACHMENT_LOAD_OP_MAX_ENUM",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRHIPrivate.h"
                              ,0x169,L"");
          if (bVar10) {
            pcVar6 = (code *)swi(3);
            pFVar19 = (FVulkanRenderTargetLayout *)(*pcVar6)();
            return pFVar19;
          }
        }
        this->Desc[bVar24].loadOp = VVar17;
        if ((bVar11) || (VVar17 == VK_ATTACHMENT_LOAD_OP_CLEAR)) {
          bVar11 = true;
        }
        EVar4 = *(ERenderTargetStoreAction *)((longlong)puVar30 + 9);
        VVar28 = VK_ATTACHMENT_STORE_OP_MAX_ENUM;
        if (EVar4 == ENoAction) {
LAB_145b4ab39:
          VVar28 = VK_ATTACHMENT_STORE_OP_DONT_CARE;
        }
        else if (EVar4 == EStore) {
          VVar28 = VK_ATTACHMENT_STORE_OP_STORE;
        }
        else {
          if (EVar4 == EMultisampleResolve) goto LAB_145b4ab39;
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("OutStoreAction != VK_ATTACHMENT_STORE_OP_MAX_ENUM",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRHIPrivate.h"
                              ,0x17f,L"");
          if (bVar10) {
            pcVar6 = (code *)swi(3);
            pFVar19 = (FVulkanRenderTargetLayout *)(*pcVar6)();
            return pFVar19;
          }
        }
        this->Desc[bVar24].storeOp = VVar28;
        this->Desc[bVar24].stencilStoreOp = VK_ATTACHMENT_STORE_OP_DONT_CARE;
        this->Desc[bVar24].stencilLoadOp = VK_ATTACHMENT_LOAD_OP_DONT_CARE;
        this->Desc[bVar24].initialLayout = VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL;
        this->Desc[bVar24].finalLayout = VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL;
        this->ColorReferences[this->NumColorAttachments].attachment =
             (uint)this->NumAttachmentDescriptions;
        this->ColorReferences[this->NumColorAttachments].layout =
             VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL;
        if ((param_2->bHasResolveAttachments == false) || (*(longlong *)(puVar30 + 0x30) == 0)) {
          bVar10 = false;
        }
        else {
          bVar10 = true;
        }
        if ((1 < (int)this->Desc[bVar24].samples) && (bVar10)) {
          uVar22 = (ulonglong)this->NumAttachmentDescriptions;
          pVVar1 = this->Desc + uVar22;
          VVar16 = pVVar1->format;
          VVar7 = pVVar1->samples;
          VVar17 = pVVar1->loadOp;
          this->Desc[uVar22 + 1].flags = pVVar1->flags;
          this->Desc[uVar22 + 1].format = VVar16;
          this->Desc[uVar22 + 1].samples = VVar7;
          this->Desc[uVar22 + 1].loadOp = VVar17;
          pVVar1 = this->Desc + uVar22;
          VVar17 = pVVar1->stencilLoadOp;
          uVar8 = *(undefined8 *)(&pVVar1->storeOp + 2);
          this->Desc[uVar22 + 1].storeOp = pVVar1->storeOp;
          this->Desc[uVar22 + 1].stencilLoadOp = VVar17;
          *(undefined8 *)&this->Desc[uVar22 + 1].stencilStoreOp = uVar8;
          this->Desc[uVar22 + 1].finalLayout = this->Desc[uVar22].finalLayout;
          this->Desc[(ulonglong)this->NumAttachmentDescriptions + 1].samples = VK_SAMPLE_COUNT_1_BIT
          ;
          this->Desc[(ulonglong)this->NumAttachmentDescriptions + 1].loadOp =
               VK_ATTACHMENT_LOAD_OP_DONT_CARE;
          this->Desc[(ulonglong)this->NumAttachmentDescriptions + 1].storeOp =
               VK_ATTACHMENT_STORE_OP_STORE;
          this->ResolveReferences[this->NumColorAttachments].attachment =
               this->NumAttachmentDescriptions + 1;
          this->ResolveReferences[this->NumColorAttachments].layout =
               VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL;
          this->bHasResolveAttachments = '\x01';
          this->NumAttachmentDescriptions = this->NumAttachmentDescriptions + '\x01';
          local_a0 = CONCAT22(local_a0._2_2_,
                              (ushort)local_a0 | 1 << (this->NumColorAttachments & 0xf));
        }
        bVar2 = this->NumColorAttachments;
        uVar22 = (ulonglong)bVar2;
        *(VkFormat *)((longlong)&local_d0 + uVar22 * 4 + 4) = this->Desc[bVar24].format;
        *(char *)((longlong)&local_98 + uVar22) = (char)this->Desc[bVar24].loadOp;
        VVar28 = this->Desc[bVar24].storeOp;
        local_d0 = CONCAT71(local_d0._1_7_,(char)local_d0 + '\x01');
        this->NumAttachmentDescriptions = this->NumAttachmentDescriptions + '\x01';
        *(char *)((longlong)&uStack_90 + uVar22 + 3) = (char)VVar28;
        *(undefined4 *)((longlong)&uStack_80 + uVar22 * 4) = 2;
        this->NumColorAttachments = bVar2 + 1;
      }
      iVar27 = iVar27 + 1;
      puVar30 = puVar30 + 6;
      bVar10 = bVar11;
    } while (iVar27 < param_2->NumColorRenderTargets);
  }
  VVar28 = VK_ATTACHMENT_STORE_OP_MAX_ENUM;
  if ((param_2->DepthStencilRenderTarget).Texture != (FRHITexture *)0x0) {
    bVar2 = this->NumAttachmentDescriptions;
    this->Desc[bVar2].flags = 0;
    this->Desc[bVar2].format = VK_FORMAT_UNDEFINED;
    this->Desc[bVar2].samples = 0;
    this->Desc[bVar2].loadOp = VK_ATTACHMENT_LOAD_OP_LOAD;
    this->Desc[bVar2].storeOp = VK_ATTACHMENT_STORE_OP_STORE;
    this->Desc[bVar2].stencilLoadOp = VK_ATTACHMENT_LOAD_OP_LOAD;
    this->Desc[bVar2].stencilStoreOp = VK_ATTACHMENT_STORE_OP_STORE;
    this->Desc[bVar2].initialLayout = VK_IMAGE_LAYOUT_UNDEFINED;
    this->Desc[bVar2].finalLayout = VK_IMAGE_LAYOUT_UNDEFINED;
    this_00 = (FVulkanTexture *)
              (**(code **)(((param_2->DepthStencilRenderTarget).Texture)->_padding_ + 0x48))();
    if ((this_00 == (FVulkanTexture *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Texture",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRenderTargetLayout.cpp"
                            ,0x99,L""), bVar11)) {
      pcVar6 = (code *)swi(3);
      pFVar19 = (FVulkanRenderTargetLayout *)(*pcVar6)();
      return pFVar19;
    }
    lVar21 = (**(code **)(this_00->_padding_ + 0x20))(this_00);
    if (((this->NumSamples != '\0') &&
        (lVar23 = (**(code **)(this_00->_padding_ + 0x20))(this_00),
        this->NumSamples != *(uchar *)(lVar23 + 0x31))) &&
       (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<9214380982382100636>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRenderTargetLayout.cpp"
                            ,0x9c,"!NumSamples || NumSamples == Texture->GetNumSamples()"), bVar11))
    {
      pcVar6 = (code *)swi(3);
      pFVar19 = (FVulkanRenderTargetLayout *)(*pcVar6)();
      return pFVar19;
    }
    bVar24 = *(byte *)(lVar21 + 0x31);
    this->NumSamples = bVar24;
    this->Desc[bVar2].samples = (uint)bVar24;
    lVar23 = (**(code **)(((param_2->DepthStencilRenderTarget).Texture)->_padding_ + 0x20))();
    this->Desc[bVar2].format = GPixelFormats[*(byte *)(lVar23 + 0x33)].PlatformFormat;
    VVar17 = RenderTargetLoadActionToVulkan((param_2->DepthStencilRenderTarget).DepthLoadAction);
    this->Desc[bVar2].loadOp = VVar17;
    VVar17 = RenderTargetLoadActionToVulkan((param_2->DepthStencilRenderTarget).StencilLoadAction);
    this->Desc[bVar2].stencilLoadOp = VVar17;
    if (((bVar10) || (this->Desc[bVar2].loadOp == VK_ATTACHMENT_LOAD_OP_CLEAR)) ||
       (bVar10 = false, VVar17 == VK_ATTACHMENT_LOAD_OP_CLEAR)) {
      bVar10 = true;
    }
    EVar4 = (param_2->DepthStencilRenderTarget).DepthStoreAction;
    VVar25 = VK_ATTACHMENT_STORE_OP_MAX_ENUM;
    if (EVar4 == ENoAction) {
LAB_145b4aeb7:
      VVar25 = VK_ATTACHMENT_STORE_OP_DONT_CARE;
    }
    else if (EVar4 == EStore) {
      VVar25 = VK_ATTACHMENT_STORE_OP_STORE;
    }
    else {
      if (EVar4 == EMultisampleResolve) goto LAB_145b4aeb7;
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("OutStoreAction != VK_ATTACHMENT_STORE_OP_MAX_ENUM",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRHIPrivate.h"
                          ,0x17f,L"");
      if (bVar11) {
        pcVar6 = (code *)swi(3);
        pFVar19 = (FVulkanRenderTargetLayout *)(*pcVar6)();
        return pFVar19;
      }
    }
    this->Desc[bVar2].storeOp = VVar25;
    EVar4 = (param_2->DepthStencilRenderTarget).StencilStoreAction;
    if (EVar4 == ENoAction) {
LAB_145b4aec5:
      VVar28 = VK_ATTACHMENT_STORE_OP_DONT_CARE;
    }
    else if (EVar4 == EStore) {
      VVar28 = VK_ATTACHMENT_STORE_OP_STORE;
    }
    else {
      if (EVar4 == EMultisampleResolve) goto LAB_145b4aec5;
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("OutStoreAction != VK_ATTACHMENT_STORE_OP_MAX_ENUM",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRHIPrivate.h"
                          ,0x17f,L"");
      if (bVar11) {
        pcVar6 = (code *)swi(3);
        pFVar19 = (FVulkanRenderTargetLayout *)(*pcVar6)();
        return pFVar19;
      }
    }
    this->Desc[bVar2].stencilStoreOp = VVar28;
    bVar12 = (byte)(param_2->DepthStencilRenderTarget).DepthStencilAccess.Value;
    VVar26 = ((bVar12 & 0xf) == 2) + VK_IMAGE_LAYOUT_READ_ONLY_OPTIMAL;
    this->Desc[bVar2].initialLayout = VVar26;
    this->Desc[bVar2].finalLayout = VVar26;
    bVar24 = this->NumAttachmentDescriptions;
    VVar29 = ((bVar12 & 0xf0) == 0x20) + VK_IMAGE_LAYOUT_READ_ONLY_OPTIMAL;
    (this->DepthReference).attachment = (uint)bVar24;
    (this->StencilDesc).stencilInitialLayout = VVar29;
    (this->StencilDesc).stencilFinalLayout = VVar29;
    (this->StencilReference).stencilLayout = VVar29;
    (this->DepthReference).layout = VVar26;
    if (((param_2->DepthStencilRenderTarget).DepthStoreAction == EMultisampleResolve) ||
       ((param_2->DepthStencilRenderTarget).StencilStoreAction == EMultisampleResolve)) {
      bVar11 = true;
    }
    else {
      bVar11 = false;
    }
    if ((((GRHIGlobals.SupportsDepthStencilResolve != false) && (bVar11)) &&
        (1 < (int)this->Desc[bVar2].samples)) &&
       ((param_2->DepthStencilResolveRenderTarget).Texture != (FRHITexture *)0x0)) {
      pVVar1 = this->Desc + bVar24;
      VVar16 = pVVar1->format;
      VVar7 = pVVar1->samples;
      VVar17 = pVVar1->loadOp;
      this->Desc[(ulonglong)bVar24 + 1].flags = pVVar1->flags;
      this->Desc[(ulonglong)bVar24 + 1].format = VVar16;
      this->Desc[(ulonglong)bVar24 + 1].samples = VVar7;
      this->Desc[(ulonglong)bVar24 + 1].loadOp = VVar17;
      pVVar1 = this->Desc + bVar24;
      VVar17 = pVVar1->stencilLoadOp;
      uVar8 = *(undefined8 *)(&pVVar1->storeOp + 2);
      this->Desc[(ulonglong)bVar24 + 1].storeOp = pVVar1->storeOp;
      this->Desc[(ulonglong)bVar24 + 1].stencilLoadOp = VVar17;
      *(undefined8 *)&this->Desc[(ulonglong)bVar24 + 1].stencilStoreOp = uVar8;
      this->Desc[(ulonglong)bVar24 + 1].finalLayout = this->Desc[bVar24].finalLayout;
      this->Desc[(ulonglong)this->NumAttachmentDescriptions + 1].samples = VK_SAMPLE_COUNT_1_BIT;
      this->Desc[(ulonglong)this->NumAttachmentDescriptions + 1].loadOp =
           VK_ATTACHMENT_LOAD_OP_DONT_CARE;
      this->Desc[(ulonglong)this->NumAttachmentDescriptions + 1].storeOp =
           VK_ATTACHMENT_STORE_OP_STORE;
      this->Desc[(ulonglong)this->NumAttachmentDescriptions + 1].stencilLoadOp =
           VK_ATTACHMENT_LOAD_OP_DONT_CARE;
      this->Desc[(ulonglong)this->NumAttachmentDescriptions + 1].stencilStoreOp =
           VK_ATTACHMENT_STORE_OP_STORE;
      bVar24 = this->NumAttachmentDescriptions;
      (this->DepthStencilResolveReference).layout = VVar26;
      bVar12 = this->NumColorAttachments;
      (this->DepthStencilResolveReference).attachment = bVar24 + 1;
      if (0xf < bVar12) {
        local_d6[0] = 0;
        `FVulkanRenderTargetLayout::FVulkanRenderTargetLayout'::__l35::<lambda_1>::operator()
                  (local_d6);
      }
      this->bHasDepthStencilResolve = '\x01';
      local_a0 = CONCAT22(local_a0._2_2_,(ushort)local_a0 | 1 << (this->NumColorAttachments & 0xf));
      bVar24 = this->NumAttachmentDescriptions + 1;
      this->NumAttachmentDescriptions = bVar24;
    }
    uVar8 = local_88;
    uStack_90._0_2_ = CONCAT11((char)this->Desc[bVar2].stencilLoadOp,(char)this->Desc[bVar2].loadOp)
    ;
    local_88._5_3_ = SUB83(uVar8,5);
    local_88._0_5_ =
         CONCAT14((char)this->Desc[bVar2].stencilStoreOp,
                  CONCAT13((char)this->Desc[bVar2].storeOp,(undefined3)local_88));
    uStack_60 = CONCAT44(VVar29,VVar26);
    local_b0 = CONCAT44(this->Desc[bVar2].format,(undefined4)local_b0);
    this->NumAttachmentDescriptions = bVar24 + 1;
    this->bHasDepthStencil = '\x01';
    uVar15 = *(uint *)(lVar21 + 0x24);
    if (bVar13) {
      uVar5 = (this->Extent).Extent3D.width;
      if (uVar5 < uVar15) {
        uVar15 = uVar5;
      }
      uVar5 = (this->Extent).Extent3D.height;
      (this->Extent).Extent3D.width = uVar15;
      uVar15 = *(uint *)(lVar21 + 0x28);
      if (uVar5 < *(uint *)(lVar21 + 0x28)) {
        uVar15 = uVar5;
      }
      (this->Extent).Extent3D.height = uVar15;
    }
    else {
      (this->Extent).Extent3D.width = uVar15;
      (this->Extent).Extent3D.height = *(uint *)(lVar21 + 0x28);
      uVar15 = FVulkanTexture::GetNumberOfArrayLevels(this_00);
      (this->Extent).Extent3D.depth = uVar15;
    }
  }
  if ((GRHIGlobals.VariableRateShading.SupportsAttachment == false) ||
     (param_2->ShadingRateTexture == (FRHITexture *)0x0)) goto LAB_145b4b24b;
  plVar18 = (longlong *)(**(code **)(param_2->ShadingRateTexture->_padding_ + 0x48))();
  lVar21 = (**(code **)(*plVar18 + 0x20))(plVar18);
  if ((*(EPixelFormat *)(lVar21 + 0x33) != GRHIGlobals.VariableRateShading.ImageFormat) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Texture->GetFormat() == GRHIGlobals.VariableRateShading.ImageFormat",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRenderTargetLayout.cpp"
                          ,0xec,L""), bVar13)) {
    pcVar6 = (code *)swi(3);
    pFVar19 = (FVulkanRenderTargetLayout *)(*pcVar6)();
    return pFVar19;
  }
  pVVar1 = this->Desc + this->NumAttachmentDescriptions;
  pVVar1->flags = 0;
  pVVar1->format = VK_FORMAT_UNDEFINED;
  pVVar1->samples = 0;
  pVVar1->loadOp = VK_ATTACHMENT_LOAD_OP_LOAD;
  pVVar1->storeOp = VK_ATTACHMENT_STORE_OP_STORE;
  pVVar1->stencilLoadOp = VK_ATTACHMENT_LOAD_OP_LOAD;
  pVVar1->stencilStoreOp = VK_ATTACHMENT_STORE_OP_STORE;
  pVVar1->initialLayout = VK_IMAGE_LAYOUT_UNDEFINED;
  pVVar1->finalLayout = VK_IMAGE_LAYOUT_UNDEFINED;
  bVar13 = ValidateShadingRateDataType();
  if (bVar13) {
    if (GRHIGlobals.VariableRateShading.ImageDataType == VRSImage_Palette) {
      VVar26 = VK_IMAGE_LAYOUT_FRAGMENT_SHADING_RATE_ATTACHMENT_OPTIMAL_KHR;
    }
    else {
      if (GRHIGlobals.VariableRateShading.ImageDataType != VRSImage_Fractional) goto LAB_145b4b1b2;
      VVar26 = VK_IMAGE_LAYOUT_FRAGMENT_DENSITY_MAP_OPTIMAL_EXT;
    }
  }
  else {
LAB_145b4b1b2:
    VVar26 = VK_IMAGE_LAYOUT_UNDEFINED;
  }
  pVVar1->flags = 0;
  lVar21 = (**(code **)(param_2->ShadingRateTexture->_padding_ + 0x20))();
  pVVar1->format = GPixelFormats[*(byte *)(lVar21 + 0x33)].PlatformFormat;
  lVar21 = (**(code **)(param_2->ShadingRateTexture->_padding_ + 0x20))();
  bVar2 = *(byte *)(lVar21 + 0x31);
  pVVar1->storeOp = VK_ATTACHMENT_STORE_OP_DONT_CARE;
  pVVar1->stencilStoreOp = VK_ATTACHMENT_STORE_OP_DONT_CARE;
  pVVar1->samples = (uint)bVar2;
  pVVar1->stencilLoadOp = VK_ATTACHMENT_LOAD_OP_DONT_CARE;
  pVVar1->loadOp = VK_ATTACHMENT_LOAD_OP_LOAD;
  pVVar1->initialLayout = VVar26;
  pVVar1->finalLayout = VVar26;
  bVar2 = this->NumAttachmentDescriptions;
  (this->FragmentDensityReference).attachment = (uint)bVar2;
  (this->FragmentDensityReference).layout = VVar26;
  uStack_90._0_3_ = CONCAT12((char)pVVar1->stencilLoadOp,(undefined2)uStack_90);
  local_88._0_6_ = CONCAT15((char)pVVar1->stencilStoreOp,(undefined5)local_88);
  uStack_a8 = CONCAT44(uStack_a8._4_4_,pVVar1->format);
  this->NumAttachmentDescriptions = bVar2 + 1;
  this->bHasFragmentDensityAttachment = '\x01';
  local_58 = VVar26;
LAB_145b4b24b:
  uVar8 = local_d0;
  local_d0._0_2_ = CONCAT11(this->MultiViewCount,(char)local_d0);
  uVar9 = CONCAT12(this->NumSamples,(undefined2)local_d0);
  this->SubpassHint = None;
  local_d0._4_4_ = SUB84(uVar8,4);
  local_d0._0_4_ = (uint)uVar9;
  uVar15 = (*FCrc::MemCrc32Func)(&local_d0,0x34,0);
  this->RenderPassCompatibleHash = uVar15;
  uVar15 = (*FCrc::MemCrc32Func)(&local_98,0x44,uVar15);
  this->RenderPassFullHash = uVar15;
  if (bVar10) {
    uVar14 = this->NumAttachmentDescriptions;
  }
  else {
    uVar14 = '\0';
  }
  this->NumUsedClearValues = uVar14;
  this->bCalculatedHash = true;
  return this;
}

// FVulkanRenderTargetLayout @ 145b4b2f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FVulkanRenderTargetLayout * __thiscall
FVulkanRenderTargetLayout::FVulkanRenderTargetLayout
          (FVulkanRenderTargetLayout *this,FGraphicsPipelineStateInitializer *param_1)

{
  VkAttachmentDescription *pVVar1;
  VkAttachmentDescription *pVVar2;
  byte bVar3;
  ERenderTargetStoreAction EVar4;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  bool bVar8;
  byte bVar9;
  uchar uVar10;
  VkAttachmentLoadOp VVar11;
  VkAttachmentLoadOp VVar12;
  uint uVar13;
  ulonglong uVar14;
  FVulkanRenderTargetLayout *pFVar15;
  byte bVar16;
  VkFormat VVar17;
  VkSampleCountFlagBits VVar18;
  uint uVar19;
  VkAttachmentStoreOp VVar21;
  VkImageLayout VVar22;
  VkAttachmentStoreOp VVar23;
  VkImageLayout VVar24;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [8];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  VkAttachmentStoreOp local_58;
  ulonglong local_48;
  ulonglong uVar20;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_f8;
  uVar20 = 0;
  this->RenderPassCompatibleHash = 0;
  this->RenderPassFullHash = 0;
  this->bCalculatedHash = false;
  this->NumAttachmentDescriptions = '\0';
  this->NumColorAttachments = '\0';
  this->NumInputAttachments = '\0';
  this->bHasDepthStencil = '\0';
  this->bHasResolveAttachments = '\0';
  this->bHasDepthStencilResolve = '\0';
  this->bHasFragmentDensityAttachment = '\0';
  this->NumSamples = '\0';
  this->NumUsedClearValues = '\0';
  this->SubpassHint = None;
  this->MultiViewCount = '\0';
  ResetAttachments(this);
  local_a0 = 0;
  local_58 = VK_ATTACHMENT_STORE_OP_STORE;
  bVar7 = false;
  this->MultiViewCount = param_1->MultiViewCount;
  VVar21 = VK_ATTACHMENT_STORE_OP_STORE;
  this->NumSamples = (uchar)param_1->NumSamples;
  uVar13 = param_1->RenderTargetsEnabled;
  local_d0 = 0;
  uStack_c8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  if (uVar13 != 0) {
    do {
      bVar3 = (param_1->RenderTargetFormats).Elements[uVar20];
      if (bVar3 != 0) {
        if (((int)uVar20 != uVar13 - 1) ||
           (VVar18 = VK_SAMPLE_COUNT_1_BIT, param_1->SubpassHint != CustomResolveSubpass)) {
          VVar18 = (VkSampleCountFlagBits)this->NumSamples;
        }
        bVar16 = this->NumAttachmentDescriptions;
        this->Desc[bVar16].samples = VVar18;
        if (((param_1->RenderTargetFlags).Elements[uVar20] & SRGB) == None) {
          VVar17 = GPixelFormats[bVar3].PlatformFormat;
        }
        else {
          VVar17 = GVulkanSRGBFormat[bVar3];
        }
        this->Desc[bVar16].format = VVar17;
        this->Desc[bVar16].loadOp = VK_ATTACHMENT_LOAD_OP_DONT_CARE;
        this->Desc[bVar16].storeOp = VK_ATTACHMENT_STORE_OP_DONT_CARE;
        this->Desc[bVar16].stencilLoadOp = VK_ATTACHMENT_LOAD_OP_DONT_CARE;
        this->Desc[bVar16].stencilStoreOp = VK_ATTACHMENT_STORE_OP_DONT_CARE;
        this->Desc[bVar16].initialLayout = VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL;
        this->Desc[bVar16].finalLayout = VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL;
        this->ColorReferences[this->NumColorAttachments].attachment =
             (uint)this->NumAttachmentDescriptions;
        this->ColorReferences[this->NumColorAttachments].layout =
             VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL;
        if (1 < (int)this->Desc[bVar16].samples) {
          uVar14 = (ulonglong)this->NumAttachmentDescriptions;
          pVVar1 = this->Desc + uVar14;
          VVar17 = pVVar1->format;
          VVar18 = pVVar1->samples;
          VVar11 = pVVar1->loadOp;
          this->Desc[uVar14 + 1].flags = pVVar1->flags;
          this->Desc[uVar14 + 1].format = VVar17;
          this->Desc[uVar14 + 1].samples = VVar18;
          this->Desc[uVar14 + 1].loadOp = VVar11;
          pVVar1 = this->Desc + uVar14;
          VVar11 = pVVar1->stencilLoadOp;
          uVar6 = *(undefined8 *)(&pVVar1->storeOp + 2);
          this->Desc[uVar14 + 1].storeOp = pVVar1->storeOp;
          this->Desc[uVar14 + 1].stencilLoadOp = VVar11;
          *(undefined8 *)&this->Desc[uVar14 + 1].stencilStoreOp = uVar6;
          this->Desc[uVar14 + 1].finalLayout = this->Desc[uVar14].finalLayout;
          this->Desc[(ulonglong)this->NumAttachmentDescriptions + 1].samples = VK_SAMPLE_COUNT_1_BIT
          ;
          this->Desc[(ulonglong)this->NumAttachmentDescriptions + 1].loadOp =
               VK_ATTACHMENT_LOAD_OP_DONT_CARE;
          this->Desc[(ulonglong)this->NumAttachmentDescriptions + 1].storeOp =
               VK_ATTACHMENT_STORE_OP_STORE;
          this->ResolveReferences[this->NumColorAttachments].attachment =
               this->NumAttachmentDescriptions + 1;
          this->ResolveReferences[this->NumColorAttachments].layout =
               VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL;
          this->bHasResolveAttachments = '\x01';
          this->NumAttachmentDescriptions = this->NumAttachmentDescriptions + '\x01';
          local_a0 = CONCAT22(local_a0._2_2_,
                              (ushort)local_a0 | 1 << (this->NumColorAttachments & 0xf));
        }
        bVar3 = this->NumColorAttachments;
        uVar14 = (ulonglong)bVar3;
        *(VkFormat *)((longlong)&local_d0 + uVar14 * 4 + 4) = this->Desc[bVar16].format;
        *(char *)((longlong)&local_98 + uVar14) = (char)this->Desc[bVar16].loadOp;
        VVar23 = this->Desc[bVar16].storeOp;
        local_d0 = (ulonglong)(byte)((char)local_d0 + 1);
        this->NumAttachmentDescriptions = this->NumAttachmentDescriptions + '\x01';
        *(char *)((longlong)&uStack_90 + uVar14 + 3) = (char)VVar23;
        *(undefined4 *)((longlong)&uStack_80 + uVar14 * 4) = 2;
        this->NumColorAttachments = bVar3 + 1;
      }
      uVar13 = param_1->RenderTargetsEnabled;
      uVar19 = (int)uVar20 + 1;
      uVar20 = (ulonglong)uVar19;
    } while (uVar19 < uVar13);
  }
  if (param_1->DepthStencilTargetFormat != PF_Unknown) {
    bVar3 = this->NumAttachmentDescriptions;
    this->Desc[bVar3].flags = 0;
    this->Desc[bVar3].format = VK_FORMAT_UNDEFINED;
    this->Desc[bVar3].samples = 0;
    this->Desc[bVar3].loadOp = VK_ATTACHMENT_LOAD_OP_LOAD;
    this->Desc[bVar3].storeOp = VK_ATTACHMENT_STORE_OP_STORE;
    this->Desc[bVar3].stencilLoadOp = VK_ATTACHMENT_LOAD_OP_LOAD;
    this->Desc[bVar3].stencilStoreOp = VK_ATTACHMENT_STORE_OP_STORE;
    this->Desc[bVar3].initialLayout = VK_IMAGE_LAYOUT_UNDEFINED;
    this->Desc[bVar3].finalLayout = VK_IMAGE_LAYOUT_UNDEFINED;
    this->Desc[bVar3].samples = (uint)this->NumSamples;
    this->Desc[bVar3].format = GPixelFormats[param_1->DepthStencilTargetFormat].PlatformFormat;
    VVar11 = RenderTargetLoadActionToVulkan(param_1->DepthTargetLoadAction);
    this->Desc[bVar3].loadOp = VVar11;
    VVar12 = RenderTargetLoadActionToVulkan(param_1->StencilTargetLoadAction);
    VVar11 = this->Desc[bVar3].loadOp;
    this->Desc[bVar3].stencilLoadOp = VVar12;
    if ((VVar11 == VK_ATTACHMENT_LOAD_OP_CLEAR) || (VVar12 == VK_ATTACHMENT_LOAD_OP_CLEAR)) {
      bVar7 = true;
    }
    EVar4 = param_1->DepthTargetStoreAction;
    if (EVar4 == ENoAction) {
LAB_145b4b68d:
      VVar23 = VK_ATTACHMENT_STORE_OP_DONT_CARE;
    }
    else {
      VVar23 = VVar21;
      if (EVar4 != EStore) {
        if (EVar4 == EMultisampleResolve) goto LAB_145b4b68d;
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("OutStoreAction != VK_ATTACHMENT_STORE_OP_MAX_ENUM",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRHIPrivate.h"
                           ,0x17f,L"");
        VVar23 = VK_ATTACHMENT_STORE_OP_MAX_ENUM;
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          pFVar15 = (FVulkanRenderTargetLayout *)(*pcVar5)();
          return pFVar15;
        }
      }
    }
    this->Desc[bVar3].storeOp = VVar23;
    EVar4 = param_1->StencilTargetStoreAction;
    if (EVar4 == ENoAction) {
LAB_145b4b6e0:
      VVar23 = VK_ATTACHMENT_STORE_OP_DONT_CARE;
    }
    else {
      VVar23 = VVar21;
      if (EVar4 != EStore) {
        if (EVar4 == EMultisampleResolve) goto LAB_145b4b6e0;
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("OutStoreAction != VK_ATTACHMENT_STORE_OP_MAX_ENUM",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRHIPrivate.h"
                           ,0x17f,L"");
        VVar23 = VK_ATTACHMENT_STORE_OP_MAX_ENUM;
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          pFVar15 = (FVulkanRenderTargetLayout *)(*pcVar5)();
          return pFVar15;
        }
      }
    }
    this->Desc[bVar3].stencilStoreOp = VVar23;
    bVar9 = (byte)(param_1->DepthStencilAccess).Value;
    VVar22 = ((bVar9 & 0xf) == 2) + VK_IMAGE_LAYOUT_READ_ONLY_OPTIMAL;
    this->Desc[bVar3].initialLayout = VVar22;
    this->Desc[bVar3].finalLayout = VVar22;
    bVar16 = this->NumAttachmentDescriptions;
    VVar24 = ((bVar9 & 0xf0) == 0x20) + VK_IMAGE_LAYOUT_READ_ONLY_OPTIMAL;
    (this->DepthReference).attachment = (uint)bVar16;
    (this->StencilDesc).stencilInitialLayout = VVar24;
    (this->StencilDesc).stencilFinalLayout = VVar24;
    (this->StencilReference).stencilLayout = VVar24;
    (this->DepthReference).layout = VVar22;
    if ((((param_1->DepthTargetStoreAction == EMultisampleResolve) ||
         (param_1->StencilTargetStoreAction == EMultisampleResolve)) &&
        (GRHIGlobals.SupportsDepthStencilResolve != false)) && (1 < (int)this->Desc[bVar3].samples))
    {
      pVVar1 = this->Desc + bVar16;
      VVar17 = pVVar1->format;
      VVar18 = pVVar1->samples;
      VVar11 = pVVar1->loadOp;
      pVVar2 = this->Desc + (ulonglong)bVar16 + 1;
      pVVar2->flags = pVVar1->flags;
      pVVar2->format = VVar17;
      pVVar2->samples = VVar18;
      pVVar2->loadOp = VVar11;
      pVVar1 = this->Desc + bVar16;
      VVar11 = pVVar1->stencilLoadOp;
      uVar6 = *(undefined8 *)(&pVVar1->storeOp + 2);
      pVVar2 = this->Desc + (ulonglong)bVar16 + 1;
      pVVar2->storeOp = pVVar1->storeOp;
      pVVar2->stencilLoadOp = VVar11;
      *(undefined8 *)(&pVVar2->storeOp + 2) = uVar6;
      this->Desc[(ulonglong)bVar16 + 1].finalLayout = this->Desc[bVar16].finalLayout;
      this->Desc[(ulonglong)this->NumAttachmentDescriptions + 1].samples = VK_SAMPLE_COUNT_1_BIT;
      this->Desc[(ulonglong)this->NumAttachmentDescriptions + 1].loadOp =
           VK_ATTACHMENT_LOAD_OP_DONT_CARE;
      this->Desc[(ulonglong)this->NumAttachmentDescriptions + 1].storeOp =
           VK_ATTACHMENT_STORE_OP_STORE;
      this->Desc[(ulonglong)this->NumAttachmentDescriptions + 1].stencilLoadOp =
           VK_ATTACHMENT_LOAD_OP_DONT_CARE;
      this->Desc[(ulonglong)this->NumAttachmentDescriptions + 1].stencilStoreOp =
           VK_ATTACHMENT_STORE_OP_STORE;
      bVar16 = this->NumAttachmentDescriptions;
      (this->DepthStencilResolveReference).layout = VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL
      ;
      bVar9 = this->NumColorAttachments;
      (this->DepthStencilResolveReference).attachment = bVar16 + 1;
      if (0xf < bVar9) {
        local_d8[0] = 0;
        `FVulkanRenderTargetLayout::FVulkanRenderTargetLayout'::__l19::<lambda_1>::operator()
                  (local_d8);
      }
      this->bHasDepthStencilResolve = '\x01';
      local_a0 = CONCAT22(local_a0._2_2_,(ushort)local_a0 | 1 << (this->NumColorAttachments & 0xf));
      bVar16 = this->NumAttachmentDescriptions + 1;
      this->NumAttachmentDescriptions = bVar16;
    }
    uVar6 = local_88;
    uStack_90._0_2_ = CONCAT11((char)this->Desc[bVar3].stencilLoadOp,(char)this->Desc[bVar3].loadOp)
    ;
    local_88._5_3_ = SUB83(uVar6,5);
    local_88._0_5_ =
         CONCAT14((char)this->Desc[bVar3].stencilStoreOp,
                  CONCAT13((char)this->Desc[bVar3].storeOp,(undefined3)local_88));
    uStack_60 = CONCAT44(VVar24,VVar22);
    local_b0 = CONCAT44(this->Desc[bVar3].format,(undefined4)local_b0);
    this->NumAttachmentDescriptions = bVar16 + 1;
    this->bHasDepthStencil = '\x01';
  }
  if (param_1->bHasFragmentDensityAttachment == false) goto LAB_145b4b9c9;
  pVVar1 = this->Desc + this->NumAttachmentDescriptions;
  pVVar1->flags = 0;
  pVVar1->format = VK_FORMAT_UNDEFINED;
  pVVar1->samples = 0;
  pVVar1->loadOp = VK_ATTACHMENT_LOAD_OP_LOAD;
  pVVar1->storeOp = VK_ATTACHMENT_STORE_OP_STORE;
  pVVar1->stencilLoadOp = VK_ATTACHMENT_LOAD_OP_LOAD;
  pVVar1->stencilStoreOp = VK_ATTACHMENT_STORE_OP_STORE;
  pVVar1->initialLayout = VK_IMAGE_LAYOUT_UNDEFINED;
  pVVar1->finalLayout = VK_IMAGE_LAYOUT_UNDEFINED;
  bVar8 = ValidateShadingRateDataType();
  if (bVar8) {
    if (GRHIGlobals.VariableRateShading.ImageDataType == VRSImage_Palette) {
      VVar23 = 0x3b9d4aa3;
    }
    else {
      VVar23 = 0x3b9e1d90;
      if (GRHIGlobals.VariableRateShading.ImageDataType != VRSImage_Fractional) goto LAB_145b4b921;
    }
  }
  else {
LAB_145b4b921:
    VVar23 = VVar21;
  }
  if ((GRHIGlobals.VariableRateShading.ImageFormat == PF_Unknown) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("GRHIGlobals.VariableRateShading.ImageFormat != PF_Unknown",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRenderTargetLayout.cpp"
                         ,0x2ad,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    pFVar15 = (FVulkanRenderTargetLayout *)(*pcVar5)();
    return pFVar15;
  }
  pVVar1->flags = 0;
  pVVar1->format = GPixelFormats[GRHIGlobals.VariableRateShading.ImageFormat].PlatformFormat;
  pVVar1->stencilLoadOp = VK_ATTACHMENT_LOAD_OP_DONT_CARE;
  pVVar1->stencilStoreOp = VK_ATTACHMENT_STORE_OP_DONT_CARE;
  pVVar1->samples = VK_SAMPLE_COUNT_1_BIT;
  pVVar1->loadOp = VK_ATTACHMENT_LOAD_OP_LOAD;
  pVVar1->storeOp = VK_ATTACHMENT_STORE_OP_DONT_CARE;
  pVVar1->initialLayout = VVar23;
  pVVar1->finalLayout = VVar23;
  bVar3 = this->NumAttachmentDescriptions;
  (this->FragmentDensityReference).attachment = (uint)bVar3;
  (this->FragmentDensityReference).layout = VVar23;
  uStack_90._0_3_ = CONCAT12((char)pVVar1->stencilLoadOp,(undefined2)uStack_90);
  local_88._0_6_ = CONCAT15((char)pVVar1->stencilStoreOp,(undefined5)local_88);
  uStack_a8 = CONCAT44(uStack_a8._4_4_,pVVar1->format);
  this->NumAttachmentDescriptions = bVar3 + 1;
  this->bHasFragmentDensityAttachment = '\x01';
  local_58 = VVar23;
LAB_145b4b9c9:
  this->SubpassHint = param_1->SubpassHint;
  local_d0 = CONCAT62(CONCAT51(CONCAT41(local_d0._4_4_,param_1->SubpassHint),this->NumSamples),
                      CONCAT11(this->MultiViewCount,(char)local_d0));
  uVar13 = (*FCrc::MemCrc32Func)(&local_d0,0x34,0);
  this->RenderPassCompatibleHash = uVar13;
  uVar13 = (*FCrc::MemCrc32Func)(&local_98,0x44,uVar13);
  this->RenderPassFullHash = uVar13;
  if (bVar7) {
    uVar10 = this->NumAttachmentDescriptions;
  }
  else {
    uVar10 = '\0';
  }
  this->NumUsedClearValues = uVar10;
  this->bCalculatedHash = true;
  return this;
}

// GetVRSImageLayout @ 145b6b300

/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

VkImageLayout __thiscall
FVulkanRenderTargetLayout::GetVRSImageLayout(FVulkanRenderTargetLayout *this)

{
  bool bVar1;
  VkImageLayout VVar2;
  
  bVar1 = ValidateShadingRateDataType();
  if (!bVar1) {
    return VK_IMAGE_LAYOUT_UNDEFINED;
  }
  if (GRHIGlobals.VariableRateShading.ImageDataType == VRSImage_Palette) {
    return VK_IMAGE_LAYOUT_FRAGMENT_SHADING_RATE_ATTACHMENT_OPTIMAL_KHR;
  }
  VVar2 = VK_IMAGE_LAYOUT_UNDEFINED;
  if (GRHIGlobals.VariableRateShading.ImageDataType == VRSImage_Fractional) {
    VVar2 = VK_IMAGE_LAYOUT_FRAGMENT_DENSITY_MAP_OPTIMAL_EXT;
  }
  return VVar2;
}

// ResetAttachments @ 145b7a180

/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

void __thiscall FVulkanRenderTargetLayout::ResetAttachments(FVulkanRenderTargetLayout *this)

{
  this->ColorReferences[0].attachment = 0;
  this->ColorReferences[0].layout = VK_IMAGE_LAYOUT_UNDEFINED;
  this->ColorReferences[1].attachment = 0;
  this->ColorReferences[1].layout = VK_IMAGE_LAYOUT_UNDEFINED;
  this->ColorReferences[2].attachment = 0;
  this->ColorReferences[2].layout = VK_IMAGE_LAYOUT_UNDEFINED;
  this->ColorReferences[3].attachment = 0;
  this->ColorReferences[3].layout = VK_IMAGE_LAYOUT_UNDEFINED;
  this->ColorReferences[4].attachment = 0;
  this->ColorReferences[4].layout = VK_IMAGE_LAYOUT_UNDEFINED;
  this->ColorReferences[5].attachment = 0;
  this->ColorReferences[5].layout = VK_IMAGE_LAYOUT_UNDEFINED;
  this->ColorReferences[6].attachment = 0;
  this->ColorReferences[6].layout = VK_IMAGE_LAYOUT_UNDEFINED;
  this->ColorReferences[7].attachment = 0;
  this->ColorReferences[7].layout = VK_IMAGE_LAYOUT_UNDEFINED;
  (this->DepthReference).attachment = 0;
  (this->DepthReference).layout = VK_IMAGE_LAYOUT_UNDEFINED;
  (this->FragmentDensityReference).attachment = 0;
  (this->FragmentDensityReference).layout = VK_IMAGE_LAYOUT_UNDEFINED;
  this->ResolveReferences[0].attachment = 0;
  this->ResolveReferences[0].layout = VK_IMAGE_LAYOUT_UNDEFINED;
  this->ResolveReferences[1].attachment = 0;
  this->ResolveReferences[1].layout = VK_IMAGE_LAYOUT_UNDEFINED;
  this->ResolveReferences[2].attachment = 0;
  this->ResolveReferences[2].layout = VK_IMAGE_LAYOUT_UNDEFINED;
  this->ResolveReferences[3].attachment = 0;
  this->ResolveReferences[3].layout = VK_IMAGE_LAYOUT_UNDEFINED;
  this->ResolveReferences[4].attachment = 0;
  this->ResolveReferences[4].layout = VK_IMAGE_LAYOUT_UNDEFINED;
  this->ResolveReferences[5].attachment = 0;
  this->ResolveReferences[5].layout = VK_IMAGE_LAYOUT_UNDEFINED;
  this->ResolveReferences[6].attachment = 0;
  this->ResolveReferences[6].layout = VK_IMAGE_LAYOUT_UNDEFINED;
  this->ResolveReferences[7].attachment = 0;
  this->ResolveReferences[7].layout = VK_IMAGE_LAYOUT_UNDEFINED;
  (this->DepthStencilResolveReference).attachment = 0;
  (this->DepthStencilResolveReference).layout = VK_IMAGE_LAYOUT_UNDEFINED;
  memset(this->Desc,0,0x2ac);
  *(int *)&this->Offset = 0;
  *(int *)((longlong)&this->Offset + 4) = 0;
  (this->Offset).Offset3D.z = 0;
  *(uint *)&this->Extent = 0;
  *(uint *)((longlong)&this->Extent + 4) = 0;
  (this->Extent).Extent3D.depth = 0;
  (this->StencilReference).sType = VK_STRUCTURE_TYPE_ATTACHMENT_REFERENCE_STENCIL_LAYOUT;
  *(undefined8 *)&(this->StencilReference).field_0x4 = 0;
  *(undefined8 *)((longlong)&(this->StencilReference).pNext + 4) = 0;
  *(undefined4 *)&(this->StencilReference).field_0x14 = 0;
  (this->StencilDesc).sType = VK_STRUCTURE_TYPE_ATTACHMENT_DESCRIPTION_STENCIL_LAYOUT;
  *(undefined8 *)&(this->StencilDesc).field_0x4 = 0;
  *(undefined8 *)((longlong)&(this->StencilDesc).pNext + 4) = 0;
  (this->StencilDesc).stencilFinalLayout = VK_IMAGE_LAYOUT_UNDEFINED;
  return;
}

// operator() @ 1504d8f40

bool __thiscall
`FVulkanRenderTargetLayout::FVulkanRenderTargetLayout'::__l19::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<9214380982382101140>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<9214380982382101140>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504d8f80

bool __thiscall
`FVulkanRenderTargetLayout::FVulkanRenderTargetLayout'::__l35::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<9214380982382100680>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<9214380982382100680>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504d8fc0

bool __thiscall
`FVulkanRenderTargetLayout::FVulkanRenderTargetLayout'::__l67::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<9214380982382100939>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<9214380982382100939>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

