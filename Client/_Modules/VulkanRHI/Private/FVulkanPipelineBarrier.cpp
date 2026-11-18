// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 9

// AddFullImageLayoutTransition @ 145adf1d0

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

void __thiscall
FVulkanPipelineBarrier::AddFullImageLayoutTransition
          (FVulkanPipelineBarrier *this,FVulkanTexture *param_1,VkImageLayout param_2,
          VkImageLayout param_3)

{
  int *piVar1;
  uint uVar2;
  VkImage_T *pVVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  ForElementType<VkImageMemoryBarrier2> FVar9;
  undefined4 *puVar10;
  
  uVar4 = GetVkStageFlagsForLayout(param_2);
  uVar5 = GetVkStageFlagsForLayout(param_3);
  uVar6 = GetVkAccessMaskForLayout(param_2);
  uVar7 = GetVkAccessMaskForLayout(param_3);
  uVar2 = param_1->FullAspectMask;
  if ((uVar2 & 6) != 0) {
    param_2 = VulkanRHI::GetMergedDepthStencilLayout(param_2,param_2);
    param_3 = VulkanRHI::GetMergedDepthStencilLayout(param_3,param_3);
  }
  iVar8 = (this->ImageBarriers).ArrayNum;
  piVar1 = &(this->ImageBarriers).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<VkImageMemoryBarrier2>_>
                      (0x860,&(this->ImageBarriers).AllocatorInstance,piVar1);
  }
  (this->ImageBarriers).ArrayNum = iVar8 + 1;
  FVar9 = (this->ImageBarriers).AllocatorInstance.SecondaryData;
  pVVar3 = param_1->Image;
  if (FVar9 == (ForElementType<VkImageMemoryBarrier2>)0x0) {
    FVar9 = (ForElementType<VkImageMemoryBarrier2>)&this->ImageBarriers;
  }
  puVar10 = (undefined4 *)((longlong)iVar8 * 0x60 + (longlong)FVar9);
  *(ulonglong *)(puVar10 + 6) = (ulonglong)uVar6;
  puVar10[0xd] = param_3;
  *(ulonglong *)(puVar10 + 10) = (ulonglong)uVar7;
  *puVar10 = 0x3b9f9492;
  *(undefined8 *)(puVar10 + 2) = 0;
  *(ulonglong *)(puVar10 + 4) = (ulonglong)uVar4;
  *(ulonglong *)(puVar10 + 8) = (ulonglong)uVar5;
  puVar10[0xc] = param_2;
  *(undefined8 *)(puVar10 + 0xe) = 0xffffffffffffffff;
  *(VkImage_T **)(puVar10 + 0x10) = pVVar3;
  puVar10[0x12] = uVar2;
  puVar10[0x13] = 0;
  puVar10[0x14] = 0xffffffff;
  puVar10[0x15] = 0;
  puVar10[0x16] = 0xffffffff;
  return;
}

// AddImageAccessTransition @ 145adf300

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */

void __thiscall
FVulkanPipelineBarrier::AddImageAccessTransition
          (FVulkanPipelineBarrier *this,FVulkanTexture *param_1,ERHIAccess param_2,
          ERHIAccess param_3,VkImageSubresourceRange *param_4,VkImageLayout *param_5)

{
  int *piVar1;
  VkImageLayout VVar2;
  VkImage_T *pVVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  ForElementType<VkImageMemoryBarrier2> FVar9;
  bool bVar10;
  undefined4 *puVar11;
  VkImageLayout local_res8 [2];
  uint local_res10 [2];
  uint local_res20 [2];
  uint local_48;
  VkImageLayout local_44;
  uint local_40 [2];
  
  if ((param_3 == None) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("DstAccess != ERHIAccess::Unknown",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanBarriers.cpp"
                         ,0x6b6,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  bVar6 = (param_1->FullAspectMask & 6) != 0;
  lVar8 = (**(code **)(param_1->_padding_ + 0x20))(param_1);
  if (((GPixelFormats[*(byte *)(lVar8 + 0x33)].Capabilities & TextureSample) == None) ||
     ((param_1->ImageUsageFlags & 4) == 0)) {
    bVar10 = false;
  }
  else {
    bVar10 = true;
  }
  GetVkStageAndAccessFlags(param_2,Texture,0,bVar6,bVar10,local_res10,&local_48,local_res8,true);
  GetVkStageAndAccessFlags(param_3,Texture,0,bVar6,bVar10,local_res20,local_40,&local_44,false);
  if ((local_res10[0] >> 0xb & 1) == 0) {
    local_res20[0] = local_res20[0] & 0xffffff87;
  }
  VVar2 = *param_5;
  if (local_res8[0] == VK_IMAGE_LAYOUT_UNDEFINED) {
    local_48 = GetVkAccessMaskForLayout(VVar2);
    local_res8[0] = VVar2;
  }
  else if ((local_res8[0] != VVar2) &&
          (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<7700521786407913165>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanBarriers.cpp"
                              ,0x6cd,"SrcLayout == InOutLayout"), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  piVar1 = &(this->ImageBarriers).ArrayMax;
  VVar2 = local_44;
  if (local_44 == VK_IMAGE_LAYOUT_UNDEFINED) {
    VVar2 = VK_IMAGE_LAYOUT_GENERAL;
  }
  iVar7 = (this->ImageBarriers).ArrayNum;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<VkImageMemoryBarrier2>_>
                      (0x860,&(this->ImageBarriers).AllocatorInstance,piVar1);
  }
  (this->ImageBarriers).ArrayNum = iVar7 + 1;
  FVar9 = (this->ImageBarriers).AllocatorInstance.SecondaryData;
  pVVar3 = param_1->Image;
  if (FVar9 == (ForElementType<VkImageMemoryBarrier2>)0x0) {
    FVar9 = (ForElementType<VkImageMemoryBarrier2>)&this->ImageBarriers;
  }
  puVar11 = (undefined4 *)((longlong)iVar7 * 0x60 + (longlong)FVar9);
  *(ulonglong *)(puVar11 + 4) = (ulonglong)local_res10[0];
  *(ulonglong *)(puVar11 + 8) = (ulonglong)local_res20[0];
  puVar11[0xc] = local_res8[0];
  *puVar11 = 0x3b9f9492;
  *(undefined8 *)(puVar11 + 2) = 0;
  puVar11[0xd] = VVar2;
  *(undefined8 *)(puVar11 + 0xe) = 0xffffffffffffffff;
  *(VkImage_T **)(puVar11 + 0x10) = pVVar3;
  *(ulonglong *)(puVar11 + 6) = (ulonglong)local_48;
  *(ulonglong *)(puVar11 + 10) = (ulonglong)local_40[0];
  uVar5 = *(undefined8 *)&param_4->levelCount;
  *(undefined8 *)(puVar11 + 0x12) = *(undefined8 *)param_4;
  *(undefined8 *)(puVar11 + 0x14) = uVar5;
  puVar11[0x16] = param_4->layerCount;
  *param_5 = VVar2;
  return;
}

// AddImageLayoutTransition @ 145adf560

/* WARNING: Enum "VkImageLayout": Some values do not have unique names */

void __thiscall
FVulkanPipelineBarrier::AddImageLayoutTransition
          (FVulkanPipelineBarrier *this,VkImage_T *param_1,VkImageLayout param_2,
          VkImageLayout param_3,VkImageSubresourceRange *param_4)

{
  int *piVar1;
  uchar *puVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  ForElementType<VkImageMemoryBarrier2> FVar10;
  
  uVar4 = GetVkStageFlagsForLayout(param_2);
  uVar5 = GetVkStageFlagsForLayout(param_3);
  uVar6 = GetVkAccessMaskForLayout(param_2);
  uVar7 = GetVkAccessMaskForLayout(param_3);
  piVar1 = &(this->ImageBarriers).ArrayMax;
  iVar8 = (this->ImageBarriers).ArrayNum;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<VkImageMemoryBarrier2>_>
                      (0x860,&(this->ImageBarriers).AllocatorInstance,piVar1);
  }
  (this->ImageBarriers).ArrayNum = iVar8 + 1;
  FVar10 = (this->ImageBarriers).AllocatorInstance.SecondaryData;
  if (FVar10 == (ForElementType<VkImageMemoryBarrier2>)0x0) {
    FVar10 = (ForElementType<VkImageMemoryBarrier2>)&this->ImageBarriers;
  }
  lVar9 = (longlong)iVar8 * 0x60;
  *(ulonglong *)((uchar *)((longlong)FVar10 + 0x28) + lVar9) = (ulonglong)uVar7;
  *(VkImageLayout *)((uchar *)((longlong)FVar10 + 0x30) + lVar9) = param_2;
  *(VkImageLayout *)((uchar *)((longlong)FVar10 + 0x34) + lVar9) = param_3;
  *(undefined4 *)((longlong)FVar10 + lVar9) = 0x3b9f9492;
  puVar2 = (uchar *)((longlong)FVar10 + 8) + lVar9;
  puVar2[0] = '\0';
  puVar2[1] = '\0';
  puVar2[2] = '\0';
  puVar2[3] = '\0';
  puVar2[4] = '\0';
  puVar2[5] = '\0';
  puVar2[6] = '\0';
  puVar2[7] = '\0';
  *(ulonglong *)((uchar *)((longlong)FVar10 + 0x10) + lVar9) = (ulonglong)uVar4;
  *(ulonglong *)((uchar *)((longlong)FVar10 + 0x20) + lVar9) = (ulonglong)uVar5;
  *(ulonglong *)((uchar *)((longlong)FVar10 + 0x18) + lVar9) = (ulonglong)uVar6;
  puVar2 = (uchar *)((longlong)FVar10 + 0x38) + lVar9;
  puVar2[0] = 0xff;
  puVar2[1] = 0xff;
  puVar2[2] = 0xff;
  puVar2[3] = 0xff;
  puVar2[4] = 0xff;
  puVar2[5] = 0xff;
  puVar2[6] = 0xff;
  puVar2[7] = 0xff;
  *(VkImage_T **)((uchar *)((longlong)FVar10 + 0x40) + lVar9) = param_1;
  uVar3 = *(undefined8 *)&param_4->levelCount;
  *(undefined8 *)((uchar *)((longlong)FVar10 + 0x48) + lVar9) = *(undefined8 *)param_4;
  *(undefined8 *)((uchar *)((longlong)FVar10 + 0x48) + lVar9 + 8) = uVar3;
  *(uint *)((uchar *)((longlong)FVar10 + 0x58) + lVar9) = param_4->layerCount;
  return;
}

// AddMemoryBarrier @ 145adf670

void __thiscall
FVulkanPipelineBarrier::AddMemoryBarrier
          (FVulkanPipelineBarrier *this,uint param_1,uint param_2,uint param_3,uint param_4)

{
  int *piVar1;
  uchar *puVar2;
  ForElementType<VkMemoryBarrier2> FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  ForElementType<VkMemoryBarrier2> FVar8;
  
  if ((this->MemoryBarriers).ArrayNum == 0) {
    piVar1 = &(this->MemoryBarriers).ArrayMax;
    iVar6 = 0;
    if (*piVar1 == 0) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<VkMemoryBarrier2>_>
                        (0x830,(ForElementType<VkMemoryBarrier2> *)this,piVar1);
    }
    (this->MemoryBarriers).ArrayNum = iVar6 + 1;
    FVar3 = (this->MemoryBarriers).AllocatorInstance.SecondaryData;
    lVar7 = (longlong)iVar6;
    FVar8 = (ForElementType<VkMemoryBarrier2>)this;
    if (FVar3 != (ForElementType<VkMemoryBarrier2>)0x0) {
      FVar8 = FVar3;
    }
    *(undefined4 *)((longlong)FVar8 + lVar7 * 0x30) = 0x3b9f9490;
    puVar2 = (uchar *)((longlong)FVar8 + 4) + lVar7 * 0x30;
    puVar2[0] = '\0';
    puVar2[1] = '\0';
    puVar2[2] = '\0';
    puVar2[3] = '\0';
    puVar2[4] = '\0';
    puVar2[5] = '\0';
    puVar2[6] = '\0';
    puVar2[7] = '\0';
    puVar2[8] = '\0';
    puVar2[9] = '\0';
    puVar2[10] = '\0';
    puVar2[0xb] = '\0';
    puVar2[0xc] = '\0';
    puVar2[0xd] = '\0';
    puVar2[0xe] = '\0';
    puVar2[0xf] = '\0';
    puVar2 = (uchar *)((longlong)FVar8 + 0x14) + lVar7 * 0x30;
    puVar2[0] = '\0';
    puVar2[1] = '\0';
    puVar2[2] = '\0';
    puVar2[3] = '\0';
    puVar2[4] = '\0';
    puVar2[5] = '\0';
    puVar2[6] = '\0';
    puVar2[7] = '\0';
    puVar2[8] = '\0';
    puVar2[9] = '\0';
    puVar2[10] = '\0';
    puVar2[0xb] = '\0';
    puVar2[0xc] = '\0';
    puVar2[0xd] = '\0';
    puVar2[0xe] = '\0';
    puVar2[0xf] = '\0';
    puVar2 = (uchar *)((longlong)FVar8 + 0x24) + lVar7 * 0x30;
    puVar2[0] = '\0';
    puVar2[1] = '\0';
    puVar2[2] = '\0';
    puVar2[3] = '\0';
    puVar2[4] = '\0';
    puVar2[5] = '\0';
    puVar2[6] = '\0';
    puVar2[7] = '\0';
    puVar2 = (uchar *)((longlong)FVar8 + 0x2c) + lVar7 * 0x30;
    puVar2[0] = '\0';
    puVar2[1] = '\0';
    puVar2[2] = '\0';
    puVar2[3] = '\0';
  }
  if ((this->MemoryBarriers).ArrayNum < 1) {
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
  FVar3 = (this->MemoryBarriers).AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<VkMemoryBarrier2>)0x0) {
    this = (FVulkanPipelineBarrier *)FVar3;
  }
  if ((param_1 & 0xffff7540) != 0) {
    *(ulonglong *)((longlong)this + 0x18) =
         *(ulonglong *)((longlong)this + 0x18) | (ulonglong)param_1;
    *(ulonglong *)((longlong)this + 0x28) =
         *(ulonglong *)((longlong)this + 0x28) | (ulonglong)param_2;
  }
  *(ulonglong *)((longlong)this + 0x10) = *(ulonglong *)((longlong)this + 0x10) | (ulonglong)param_3
  ;
  *(ulonglong *)((longlong)this + 0x20) = *(ulonglong *)((longlong)this + 0x20) | (ulonglong)param_4
  ;
  return;
}

// Execute @ 145ae37c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */

void __thiscall
FVulkanPipelineBarrier::Execute(FVulkanPipelineBarrier *this,VkCommandBuffer_T *param_1)

{
  int iVar1;
  ForElementType<VkMemoryBarrier2> FVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  ForElementType<VkImageMemoryBarrier2> FVar8;
  ForElementType<VkMemoryBarrier> FVar9;
  ulonglong uVar10;
  FScriptContainerElement *pFVar11;
  ForElementType<VkImageMemoryBarrier> FVar12;
  ForElementType<VkMemoryBarrier2> FVar13;
  uchar *puVar14;
  FScriptContainerElement *pFVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong uVar18;
  FScriptContainerElement *pFVar19;
  undefined1 auStackY_178 [32];
  undefined1 local_128 [4];
  uint local_124;
  ForAnyElementType local_120;
  undefined8 local_118;
  VkCommandBuffer_T *local_110;
  ForElementType<VkMemoryBarrier> local_108;
  uint local_e8;
  uint local_e4;
  ForElementType<VkImageMemoryBarrier> local_e0;
  uint local_48;
  uint local_44;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_178;
  uVar17 = (this->MemoryBarriers).ArrayNum;
  if (((uVar17 != 0) || ((this->BufferBarriers).ArrayNum != 0)) ||
     ((this->ImageBarriers).ArrayNum != 0)) {
    uVar10 = 0;
    local_124 = 0;
    local_108.SecondaryData = (ForElementType<VkMemoryBarrier>)0x0;
    local_e8 = 0;
    local_e4 = 1;
    local_110 = param_1;
    if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
    }
    uVar16 = uVar10;
    if (1 < (int)uVar17) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<VkMemoryBarrier>_>
                (0x18,8,uVar17,&local_108,0,(int *)&local_e4);
      uVar16 = (ulonglong)local_e8;
      uVar17 = (this->MemoryBarriers).ArrayNum;
    }
    FVar2 = (this->MemoryBarriers).AllocatorInstance.SecondaryData;
    FVar13 = (ForElementType<VkMemoryBarrier2>)this;
    if (FVar2 != (ForElementType<VkMemoryBarrier2>)0x0) {
      FVar13 = FVar2;
    }
    puVar14 = (uchar *)((longlong)FVar13 + 0x18);
    uVar18 = uVar10;
    while( true ) {
      uVar5 = (uint)uVar16;
      if ((this->MemoryBarriers).ArrayNum != uVar17) {
        `TCheckedPointerIterator<VkMemoryBarrier2_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_128);
        uVar5 = local_e8;
      }
      if ((ForElementType<VkMemoryBarrier2> *)(puVar14 + -0x18) ==
          (ForElementType<VkMemoryBarrier2> *)((longlong)(int)uVar17 * 0x30 + (longlong)FVar13))
      break;
      if (uVar5 == local_e4) {
        uVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<VkMemoryBarrier>_>
                          (0x818,&local_108,(int *)&local_e4);
      }
      local_e8 = uVar5 + 1;
      lVar7 = (longlong)(int)uVar5;
      FVar9 = (ForElementType<VkMemoryBarrier>)&local_108;
      if (local_108.SecondaryData != (ForElementType<VkMemoryBarrier>)0x0) {
        FVar9 = local_108.SecondaryData;
      }
      *(undefined4 *)((longlong)FVar9 + lVar7 * 0x18) = 0x2e;
      *(undefined8 *)((uchar *)((longlong)FVar9 + 8) + lVar7 * 0x18) =
           *(undefined8 *)(puVar14 + -0x10);
      *(undefined4 *)((uchar *)((longlong)FVar9 + 0x10) + lVar7 * 0x18) = *(undefined4 *)puVar14;
      *(undefined4 *)((uchar *)((longlong)FVar9 + 0x14) + lVar7 * 0x18) =
           *(undefined4 *)(puVar14 + 0x10);
      local_124 = local_124 | *(uint *)(puVar14 + 8);
      uVar18 = (ulonglong)((uint)uVar18 | *(uint *)(puVar14 + -8));
      uVar16 = (ulonglong)local_e8;
      puVar14 = puVar14 + 0x30;
    }
    uVar17 = (this->BufferBarriers).ArrayNum;
    local_120.Data = (FScriptContainerElement *)0x0;
    local_118 = 0;
    if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
    }
    if (0 < (int)uVar17) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,uVar17,&local_120,0,(int *)((longlong)&local_118 + 4));
      uVar10 = local_118 & 0xffffffff;
    }
    iVar1 = (this->BufferBarriers).ArrayNum;
    pFVar15 = (this->BufferBarriers).AllocatorInstance.Data;
    pFVar19 = pFVar15 + (longlong)iVar1 * 0x50;
    uVar17 = local_124;
    while( true ) {
      iVar6 = (int)uVar10;
      if ((this->BufferBarriers).ArrayNum != iVar1) {
        `TCheckedPointerIterator<VkBufferMemoryBarrier2_const_,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_128);
        iVar6 = (uint)local_118;
      }
      if (pFVar15 == pFVar19) break;
      if (iVar6 == local_118._4_4_) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x838,&local_120,(int *)((longlong)&local_118 + 4));
      }
      local_118 = CONCAT44(local_118._4_4_,iVar6 + 1U);
      pFVar11 = local_120.Data + (longlong)iVar6 * 0x38;
      *(undefined4 *)&pFVar11->field_0x0 = 0x2c;
      *(undefined8 *)(pFVar11 + 8) = *(undefined8 *)(pFVar15 + 8);
      *(undefined4 *)(pFVar11 + 0x10) = *(undefined4 *)(pFVar15 + 0x18);
      *(undefined4 *)(pFVar11 + 0x14) = *(undefined4 *)(pFVar15 + 0x28);
      *(undefined4 *)(pFVar11 + 0x18) = *(undefined4 *)(pFVar15 + 0x30);
      *(undefined4 *)(pFVar11 + 0x1c) = *(undefined4 *)(pFVar15 + 0x34);
      *(undefined8 *)(pFVar11 + 0x20) = *(undefined8 *)(pFVar15 + 0x38);
      *(undefined8 *)(pFVar11 + 0x28) = *(undefined8 *)(pFVar15 + 0x40);
      *(undefined8 *)(pFVar11 + 0x30) = *(undefined8 *)(pFVar15 + 0x48);
      uVar18 = (ulonglong)((uint)uVar18 | *(uint *)(pFVar15 + 0x10));
      uVar17 = uVar17 | *(uint *)(pFVar15 + 0x20);
      uVar10 = (ulonglong)(iVar6 + 1U);
      pFVar15 = pFVar15 + 0x50;
    }
    local_e0.SecondaryData = (ForElementType<VkImageMemoryBarrier>)0x0;
    uVar5 = (this->ImageBarriers).ArrayNum;
    local_48 = 0;
    local_44 = 2;
    if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
    }
    if (2 < (int)uVar5) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<VkImageMemoryBarrier>_>
                (0x48,8,uVar5,&local_e0,0,(int *)&local_44);
      uVar5 = (this->ImageBarriers).ArrayNum;
    }
    FVar8 = (this->ImageBarriers).AllocatorInstance.SecondaryData;
    if (FVar8 == (ForElementType<VkImageMemoryBarrier2>)0x0) {
      FVar8 = (ForElementType<VkImageMemoryBarrier2>)&this->ImageBarriers;
    }
    puVar14 = (uchar *)((longlong)FVar8 + 0x18);
    while( true ) {
      if ((this->ImageBarriers).ArrayNum != uVar5) {
        `TCheckedPointerIterator<VkImageMemoryBarrier2_const_,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_128);
      }
      uVar4 = local_48;
      if ((ForElementType<VkImageMemoryBarrier2> *)(puVar14 + -0x18) ==
          (ForElementType<VkImageMemoryBarrier2> *)((longlong)(int)uVar5 * 0x60 + (longlong)FVar8))
      break;
      if (local_48 == local_44) {
        local_48 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<VkImageMemoryBarrier>_>
                             (0x848,&local_e0,(int *)&local_44);
      }
      lVar7 = (longlong)(int)local_48;
      FVar12 = (ForElementType<VkImageMemoryBarrier>)&local_e0;
      if (local_e0.SecondaryData != (ForElementType<VkImageMemoryBarrier>)0x0) {
        FVar12 = local_e0.SecondaryData;
      }
      local_48 = local_48 + 1;
      *(undefined4 *)((longlong)FVar12 + lVar7 * 0x48) = 0x2d;
      *(undefined8 *)((uchar *)((longlong)FVar12 + 8) + lVar7 * 0x48) =
           *(undefined8 *)(puVar14 + -0x10);
      *(undefined4 *)((uchar *)((longlong)FVar12 + 0x10) + lVar7 * 0x48) = *(undefined4 *)puVar14;
      *(undefined4 *)((uchar *)((longlong)FVar12 + 0x14) + lVar7 * 0x48) =
           *(undefined4 *)(puVar14 + 0x10);
      *(undefined4 *)((uchar *)((longlong)FVar12 + 0x18) + lVar7 * 0x48) =
           *(undefined4 *)(puVar14 + 0x18);
      *(undefined4 *)((uchar *)((longlong)FVar12 + 0x1c) + lVar7 * 0x48) =
           *(undefined4 *)(puVar14 + 0x1c);
      *(undefined4 *)((uchar *)((longlong)FVar12 + 0x20) + lVar7 * 0x48) =
           *(undefined4 *)(puVar14 + 0x20);
      *(undefined4 *)((uchar *)((longlong)FVar12 + 0x24) + lVar7 * 0x48) =
           *(undefined4 *)(puVar14 + 0x24);
      *(undefined8 *)((uchar *)((longlong)FVar12 + 0x28) + lVar7 * 0x48) =
           *(undefined8 *)(puVar14 + 0x28);
      uVar3 = *(undefined8 *)(puVar14 + 0x38);
      *(undefined8 *)((uchar *)((longlong)FVar12 + 0x30) + lVar7 * 0x48) =
           *(undefined8 *)(puVar14 + 0x30);
      *(undefined8 *)((uchar *)((longlong)FVar12 + 0x30) + lVar7 * 0x48 + 8) = uVar3;
      *(undefined4 *)((uchar *)((longlong)FVar12 + 0x40) + lVar7 * 0x48) =
           *(undefined4 *)(puVar14 + 0x40);
      uVar18 = (ulonglong)((uint)uVar18 | *(uint *)(puVar14 + -8));
      uVar17 = uVar17 | *(uint *)(puVar14 + 8);
      puVar14 = puVar14 + 0x60;
    }
    lVar7 = (longlong)(int)local_48;
    FVar12 = (ForElementType<VkImageMemoryBarrier>)&local_e0;
    if (local_e0.SecondaryData != (ForElementType<VkImageMemoryBarrier>)0x0) {
      FVar12 = local_e0.SecondaryData;
    }
    puVar14 = (uchar *)((longlong)FVar12 + 0x1c);
    while( true ) {
      if (local_48 != uVar4) {
        `TCheckedPointerIterator<VkImageMemoryBarrier,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_128);
      }
      if ((ForElementType<VkImageMemoryBarrier> *)(puVar14 + -0x1c) ==
          (ForElementType<VkImageMemoryBarrier> *)((longlong)FVar12 + lVar7 * 0x48)) break;
      if ((puVar14[0x14] & 6) == 0) {
LAB_145ae3c01:
        puVar14 = puVar14 + 0x48;
      }
      else {
        if (*(int *)puVar14 == 0x3b9f9490) {
          puVar14[0] = '\x04';
          puVar14[1] = '\0';
          puVar14[2] = '\0';
          puVar14[3] = '\0';
        }
        else if (*(int *)puVar14 == 0x3b9f9491) {
          puVar14[0] = '\x03';
          puVar14[1] = '\0';
          puVar14[2] = '\0';
          puVar14[3] = '\0';
        }
        if (*(int *)(puVar14 + -4) != 0x3b9f9490) {
          if (*(int *)(puVar14 + -4) == 0x3b9f9491) {
            puVar14[-4] = '\x03';
            puVar14[-3] = '\0';
            puVar14[-2] = '\0';
            puVar14[-1] = '\0';
          }
          goto LAB_145ae3c01;
        }
        puVar14[-4] = '\x04';
        puVar14[-3] = '\0';
        puVar14[-2] = '\0';
        puVar14[-1] = '\0';
        puVar14 = puVar14 + 0x48;
      }
    }
    FVar12 = (ForElementType<VkImageMemoryBarrier>)&local_e0;
    if (local_e0.SecondaryData != (ForElementType<VkImageMemoryBarrier>)0x0) {
      FVar12 = local_e0.SecondaryData;
    }
    FVar9 = (ForElementType<VkMemoryBarrier>)&local_108;
    if (local_108.SecondaryData != (ForElementType<VkMemoryBarrier>)0x0) {
      FVar9 = local_108.SecondaryData;
    }
    (*VulkanDynamicAPI::vkCmdPipelineBarrier)
              (local_110,(uint)uVar18,uVar17,0,local_e8,(VkMemoryBarrier *)FVar9,(uint)local_118,
               (VkBufferMemoryBarrier *)local_120.Data,local_48,(VkImageMemoryBarrier *)FVar12);
    if (local_e0.SecondaryData != (ForElementType<VkImageMemoryBarrier>)0x0) {
      FMemory::Free((void *)local_e0.SecondaryData);
    }
    if ((VkBufferMemoryBarrier *)local_120.Data != (VkBufferMemoryBarrier *)0x0) {
      FMemory::Free(local_120.Data);
    }
    if (local_108.SecondaryData != (ForElementType<VkMemoryBarrier>)0x0) {
      FMemory::Free((void *)local_108.SecondaryData);
    }
  }
  return;
}

// Execute @ 145ae3cf0

/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

void __thiscall
FVulkanPipelineBarrier::Execute(FVulkanPipelineBarrier *this,FVulkanCommandBuffer *param_1)

{
  ForElementType<VkMemoryBarrier2> FVar1;
  VkDependencyInfo local_48;
  
  local_48.memoryBarrierCount = (this->MemoryBarriers).ArrayNum;
  if (((local_48.memoryBarrierCount == 0) && ((this->BufferBarriers).ArrayNum == 0)) &&
     ((this->ImageBarriers).ArrayNum == 0)) {
    return;
  }
  if (((param_1->Device->OptionalDeviceExtensions).field0_0x0.Packed & 0x2020100000000) ==
      0x2020100000000) {
    local_48.pNext = (void *)0x0;
    local_48.dependencyFlags = 0;
    FVar1 = (this->MemoryBarriers).AllocatorInstance.SecondaryData;
    local_48.sType = VK_STRUCTURE_TYPE_DEPENDENCY_INFO;
    local_48.pMemoryBarriers = (VkMemoryBarrier2 *)this;
    if (FVar1 != (ForElementType<VkMemoryBarrier2>)0x0) {
      local_48.pMemoryBarriers = (VkMemoryBarrier2 *)FVar1;
    }
    local_48.bufferMemoryBarrierCount = (this->BufferBarriers).ArrayNum;
    local_48.pBufferMemoryBarriers =
         (VkBufferMemoryBarrier2 *)(this->BufferBarriers).AllocatorInstance.Data;
    local_48.pImageMemoryBarriers =
         *(VkImageMemoryBarrier2 **)&(this->ImageBarriers).AllocatorInstance.SecondaryData;
    local_48.imageMemoryBarrierCount = (this->ImageBarriers).ArrayNum;
    if ((ForElementType<VkImageMemoryBarrier2>)local_48.pImageMemoryBarriers ==
        (ForElementType<VkImageMemoryBarrier2>)0x0) {
      local_48.pImageMemoryBarriers = (VkImageMemoryBarrier2 *)&this->ImageBarriers;
    }
    (*VulkanDynamicAPI::vkCmdPipelineBarrier2KHR)(param_1->CommandBufferHandle,&local_48);
    return;
  }
  Execute(this,param_1->CommandBufferHandle);
  return;
}

// GetDefaultLayout @ 145ae62c0

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
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

VkImageLayout __cdecl
FVulkanPipelineBarrier::GetDefaultLayout(FVulkanTexture *param_1,ERHIAccess param_2)

{
  code *pcVar1;
  bool bVar2;
  VkImageLayout VVar3;
  
  if (param_2 < (DSVRead|CPURead)) {
    if (param_2 != DSVRead) {
      switch(param_2) {
      case SRVCompute:
      case SRVGraphicsPixel:
      case SRVGraphicsNonPixel:
      case SRVGraphics:
      case SRVMask:
        if ((param_1->FullAspectMask & 6) == 0) {
          bVar2 = FVulkanTexture::SupportsSampling(param_1);
          return (uint)bVar2 * 4 + VK_IMAGE_LAYOUT_GENERAL;
        }
        if (((param_1->Device->OptionalDeviceExtensions).field0_0x0.Packed & 0x2020100000000) !=
            0x2020100000000) {
          return VK_IMAGE_LAYOUT_DEPTH_STENCIL_READ_ONLY_OPTIMAL;
        }
        break;
      default:
        goto switchD_145ae62fc_caseD_11;
      case CopySrc:
        return VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL;
      }
    }
    return VK_IMAGE_LAYOUT_READ_ONLY_OPTIMAL;
  }
  if (param_2 < (CopyDest|CPURead)) {
    if (param_2 == CopyDest) {
      return VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL;
    }
    if (((param_2 - UAVCompute & 0xfffff3ff) == 0) && (param_2 != RTV)) {
      return VK_IMAGE_LAYOUT_GENERAL;
    }
  }
  else {
    if (param_2 == DSVWrite) {
      return VK_IMAGE_LAYOUT_ATTACHMENT_OPTIMAL;
    }
    if (param_2 == Last) {
      if (GRHIGlobals.VariableRateShading.ImageDataType == VRSImage_Palette) {
        return VK_IMAGE_LAYOUT_FRAGMENT_SHADING_RATE_ATTACHMENT_OPTIMAL_KHR;
      }
      if (GRHIGlobals.VariableRateShading.ImageDataType == VRSImage_Fractional) {
        return VK_IMAGE_LAYOUT_FRAGMENT_DENSITY_MAP_OPTIMAL_EXT;
      }
    }
  }
switchD_145ae62fc_caseD_11:
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanBarriers.cpp"
                     ,0x752,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    VVar3 = (*pcVar1)();
    return VVar3;
  }
  return VK_IMAGE_LAYOUT_UNDEFINED;
}

// GetDepthOrStencilLayout @ 145ae6480

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */

VkImageLayout __cdecl FVulkanPipelineBarrier::GetDepthOrStencilLayout(ERHIAccess param_1)

{
  VkImageLayout VVar1;
  
  if ((param_1 != None) && (param_1 != Discard)) {
    if ((char)param_1 < '\0') {
      return VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL;
    }
    VVar1 = param_1 >> 0xf & VK_IMAGE_LAYOUT_GENERAL | VK_IMAGE_LAYOUT_READ_ONLY_OPTIMAL;
    if ((param_1 >> 0xd & 1) != 0) {
      VVar1 = VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL;
    }
    return VVar1;
  }
  return VK_IMAGE_LAYOUT_UNDEFINED;
}

// MakeSubresourceRange @ 145aeb030

VkImageSubresourceRange * __cdecl
FVulkanPipelineBarrier::MakeSubresourceRange
          (VkImageSubresourceRange *__return_storage_ptr__,uint param_1,uint param_2,uint param_3,
          uint param_4,uint param_5)

{
  __return_storage_ptr__->baseArrayLayer = param_4;
  __return_storage_ptr__->layerCount = param_5;
  __return_storage_ptr__->aspectMask = param_1;
  __return_storage_ptr__->baseMipLevel = param_2;
  __return_storage_ptr__->levelCount = param_3;
  return __return_storage_ptr__;
}

