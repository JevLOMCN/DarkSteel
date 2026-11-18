// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 13

// FVulkanPendingGfxState @ 145adb990

/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

FVulkanPendingGfxState * __thiscall
FVulkanPendingGfxState::FVulkanPendingGfxState(FVulkanPendingGfxState *this,FVulkanDevice *param_1)

{
  TArray<VkRect2D,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *pTVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  ForElementType<VkViewport> FVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  FVertexStream *pFVar11;
  FVulkanPendingGfxState *pFVar12;
  longlong lVar13;
  ForElementType<VkViewport> FVar14;
  ForElementType<VkRect2D> FVar15;
  uint uVar16;
  
  (this->Viewports).AllocatorInstance.SecondaryData = (ForElementType<VkViewport>)0x0;
  pTVar1 = &this->Scissors;
  (this->Viewports).ArrayNum = 0;
  piVar2 = &(this->Viewports).ArrayMax;
  *piVar2 = 2;
  piVar3 = &(this->Scissors).ArrayNum;
  (this->Scissors).AllocatorInstance.SecondaryData = (ForElementType<VkRect2D>)0x0;
  piVar4 = &(this->Scissors).ArrayMax;
  *piVar3 = 0;
  pFVar11 = this->PendingStreams;
  *piVar4 = 2;
  this->PrimitiveType = PT_Num;
  *(undefined8 *)&this->PipelineStates = 0;
  *(undefined8 *)&(this->PipelineStates).field_0x8 = 0;
  *(undefined8 *)&(this->PipelineStates).field_0x20 = 0;
  *(undefined4 *)&(this->PipelineStates).field_0x28 = 0;
  *(undefined4 *)&(this->PipelineStates).field_0x2c = 0x80;
  *(undefined4 *)&(this->PipelineStates).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PipelineStates).field_0x34 = 0;
  *(undefined8 *)&(this->PipelineStates).field_0x40 = 0;
  piVar5 = &(this->Viewports).ArrayNum;
  *(undefined4 *)&(this->PipelineStates).field_0x48 = 0;
  lVar13 = 0x11;
  do {
    pFVar11->Stream = (VkBuffer_T *)0x0;
    pFVar11->BufferOffset = 0;
    pFVar11 = pFVar11 + 1;
    lVar13 = lVar13 + -1;
  } while (lVar13 != 0);
  this->Device = param_1;
  iVar6 = *piVar5;
  if (iVar6 < 1) {
    iVar10 = UE::Core::Private::
             ReallocGrow<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<VkViewport>_>
                       (0x18,4,1 - iVar6,(ForElementType<VkViewport> *)this,piVar5,piVar2);
    FVar7 = (this->Viewports).AllocatorInstance.SecondaryData;
    FVar14 = (ForElementType<VkViewport>)this;
    if (FVar7 != (ForElementType<VkViewport>)0x0) {
      FVar14 = FVar7;
    }
    memset((void *)((longlong)FVar14 + (longlong)iVar10 * 0x18),0,(longlong)(1 - iVar6) * 0x18);
  }
  else if (1 < iVar6) {
    uVar16 = iVar6 - 1;
    if ((int)uVar16 < 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        );
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        pFVar12 = (FVulkanPendingGfxState *)(*pcVar8)();
        return pFVar12;
      }
    }
    else if (uVar16 == 0) goto LAB_145adbb5c;
    FVar7 = (this->Viewports).AllocatorInstance.SecondaryData;
    FVar14 = (ForElementType<VkViewport>)this;
    if (FVar7 != (ForElementType<VkViewport>)0x0) {
      FVar14 = FVar7;
    }
    if (~uVar16 + *piVar5 != 0) {
      memmove((uchar *)((longlong)FVar14 + 0x18),
              (uchar *)((longlong)FVar14 + 0x18) + (longlong)(int)uVar16 * 0x18,
              (longlong)(int)(~uVar16 + *piVar5) * 0x18);
    }
    *piVar5 = *piVar5 - uVar16;
    UE::Core::Private::
    ReallocShrink<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<VkViewport>_>
              (0x18,4,(ForElementType<VkViewport> *)this,*piVar5,piVar2);
  }
LAB_145adbb5c:
  iVar6 = *piVar3;
  if (iVar6 < 1) {
    iVar10 = UE::Core::Private::
             ReallocGrow<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<VkRect2D>_>
                       (0x10,4,1 - iVar6,&pTVar1->AllocatorInstance,piVar3,piVar4);
    FVar15 = (this->Scissors).AllocatorInstance.SecondaryData;
    if (FVar15 == (ForElementType<VkRect2D>)0x0) {
      FVar15 = (ForElementType<VkRect2D>)pTVar1;
    }
    memset((void *)((longlong)FVar15 + (longlong)iVar10 * 0x10),0,(longlong)(1 - iVar6) << 4);
  }
  else if (1 < iVar6) {
    uVar16 = iVar6 - 1;
    if ((int)uVar16 < 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        );
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        pFVar12 = (FVulkanPendingGfxState *)(*pcVar8)();
        return pFVar12;
      }
    }
    else if (uVar16 == 0) goto LAB_145adbc4f;
    FVar15 = (this->Scissors).AllocatorInstance.SecondaryData;
    if (FVar15 == (ForElementType<VkRect2D>)0x0) {
      FVar15 = (ForElementType<VkRect2D>)pTVar1;
    }
    if (~uVar16 + *piVar3 != 0) {
      memmove((uchar *)((longlong)FVar15 + 0x10),
              (uchar *)((longlong)FVar15 + 0x10) + (longlong)(int)uVar16 * 0x10,
              (longlong)(int)(~uVar16 + *piVar3) << 4);
    }
    *piVar3 = *piVar3 - uVar16;
    UE::Core::Private::
    ReallocShrink<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<VkRect2D>_>
              (0x10,4,&pTVar1->AllocatorInstance,*piVar3,piVar4);
  }
LAB_145adbc4f:
  this->bScissorEnable = false;
  this->CurrentPipeline = (FVulkanGraphicsPipelineState *)0x0;
  this->CurrentState = (FVulkanGraphicsPipelineDescriptorState *)0x0;
  this->PrimitiveType = PT_Num;
  this->StencilRef = 0;
  this->bDirtyVertexStreams = true;
  this->bDirtyDynamicVertexInput = true;
  return this;
}

// GetCurrentShaderKey @ 145ae6220

/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "EStage": Some values do not have unique names */

ulong64 __thiscall
FVulkanPendingGfxState::GetCurrentShaderKey(FVulkanPendingGfxState *this,EStage param_1)

{
  FVulkanGraphicsPipelineState *pFVar1;
  code *pcVar2;
  bool bVar3;
  EStage EVar4;
  ulong64 uVar5;
  EShaderFrequency EVar6;
  
  if (param_1 == Compute) {
    EVar6 = SF_Vertex;
  }
  else if (param_1 == NumComputeStages) {
    EVar6 = SF_Pixel;
  }
  else if (param_1 == Geometry) {
    EVar6 = SF_Geometry;
  }
  else if (param_1 == Mesh) {
    EVar6 = SF_Mesh;
  }
  else if (param_1 == NumRayTracingStages) {
    EVar6 = SF_Amplification;
  }
  else {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Public\\VulkanCommon.h"
                       ,0x5e,L"Invalid graphic shader stage: %d");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return uVar5;
    }
    EVar6 = SF_NumFrequencies;
  }
  pFVar1 = this->CurrentPipeline;
  if (pFVar1 != (FVulkanGraphicsPipelineState *)0x0) {
    EVar4 = ShaderStage::GetStageForFrequency(EVar6);
    return pFVar1->ShaderKeys[(int)EVar4];
  }
  return 0;
}

// ~FVulkanPendingGfxState @ 145b4e040

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

void __thiscall FVulkanPendingGfxState::~FVulkanPendingGfxState(FVulkanPendingGfxState *this)

{
  ulonglong uVar1;
  TMap<FVulkanGraphicsPipelineState_*,FVulkanGraphicsPipelineDescriptorState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FVulkanGraphicsPipelineState_*,FVulkanGraphicsPipelineDescriptorState_*,0>_>
  *this_00;
  undefined8 *puVar2;
  void *pvVar3;
  ForElementType<VkRect2D> FVar4;
  ForElementType<VkViewport> FVar5;
  code *pcVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  ForAnyElementType *pFVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  bool bVar17;
  longlong lVar18;
  int iVar19;
  uint uVar20;
  ForElementType<unsigned_int> FVar21;
  uint uVar22;
  uint uVar23;
  undefined1 auStackY_158 [32];
  undefined1 local_128 [8];
  ForAnyElementType *local_120;
  int iStack_118;
  uint uStack_114;
  TBitArray<FDefaultBitArrayAllocator> *local_110;
  undefined4 uStack_108;
  uint uStack_104;
  int local_100;
  uint uStack_fc;
  int iStack_f8;
  undefined4 uStack_f4;
  int local_f0;
  ForAnyElementType *local_e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e0;
  undefined8 uStack_c0;
  ForAnyElementType local_b8;
  undefined8 uStack_b0;
  TBitArray<FDefaultBitArrayAllocator> local_a8;
  undefined4 local_88;
  int iStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  void *local_78;
  ulonglong uStack_70;
  ulonglong local_68;
  
  uVar15 = local_a8.AllocatorInstance.InlineData._8_8_;
  uVar13 = local_a8.AllocatorInstance.InlineData._0_8_;
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_158;
  iStack_118 = 0;
  uStack_114 = 1;
  this_00 = &this->PipelineStates;
  local_a8.AllocatorInstance.SecondaryData =
       *(ForElementType<unsigned_int> *)&(this->PipelineStates).field_0x20;
  iVar10 = *(int *)&(this->PipelineStates).field_0x28;
  iVar11 = *(int *)&(this->PipelineStates).field_0x2c;
  local_100 = 0;
  local_b8.Data = *(FScriptContainerElement **)this_00;
  puVar7 = &(this->PipelineStates).field_0x8;
  iStack_f8 = *(int *)puVar7;
  uStack_b0 = *(ulonglong *)puVar7;
  local_88 = *(undefined4 *)&(this->PipelineStates).field_0x30;
  iStack_84 = *(int *)&(this->PipelineStates).field_0x34;
  uVar8 = *(undefined4 *)&(this->PipelineStates).field_0x38;
  uVar9 = *(undefined4 *)&(this->PipelineStates).field_0x3c;
  uStack_70 = uStack_70 & 0xffffffff00000000;
  uVar1 = uStack_70;
  local_a8.NumBits = iVar10;
  local_a8.MaxBits = iVar11;
  local_a8.AllocatorInstance.InlineData[0] = (this->PipelineStates).field_0x10;
  local_a8.AllocatorInstance.InlineData[1] = (this->PipelineStates).field_0x11;
  local_a8.AllocatorInstance.InlineData[2] = (this->PipelineStates).field_0x12;
  local_a8.AllocatorInstance.InlineData[3] = (this->PipelineStates).field_0x13;
  local_a8.AllocatorInstance.InlineData[4] = (this->PipelineStates).field_0x14;
  local_a8.AllocatorInstance.InlineData[5] = (this->PipelineStates).field_0x15;
  local_a8.AllocatorInstance.InlineData[6] = (this->PipelineStates).field_0x16;
  local_a8.AllocatorInstance.InlineData[7] = (this->PipelineStates).field_0x17;
  uVar14 = local_a8.AllocatorInstance.InlineData._0_8_;
  local_a8.AllocatorInstance.InlineData[8] = (this->PipelineStates).field_0x18;
  local_a8.AllocatorInstance.InlineData[9] = (this->PipelineStates).field_0x19;
  local_a8.AllocatorInstance.InlineData[10] = (this->PipelineStates).field_0x1a;
  local_a8.AllocatorInstance.InlineData[0xb] = (this->PipelineStates).field_0x1b;
  local_a8.AllocatorInstance.InlineData[0xc] = (this->PipelineStates).field_0x1c;
  local_a8.AllocatorInstance.InlineData[0xd] = (this->PipelineStates).field_0x1d;
  local_a8.AllocatorInstance.InlineData[0xe] = (this->PipelineStates).field_0x1e;
  local_a8.AllocatorInstance.InlineData[0xf] = (this->PipelineStates).field_0x1f;
  uVar16 = local_a8.AllocatorInstance.InlineData._8_8_;
  local_78 = *(void **)&(this->PipelineStates).field_0x40;
  uStack_70 = *(ulonglong *)&(this->PipelineStates).field_0x48;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->PipelineStates).field_0x8 = 0;
  local_a8.AllocatorInstance.InlineData[0] = (uchar)uVar13;
  local_a8.AllocatorInstance.InlineData[1] = SUB81(uVar13,1);
  local_a8.AllocatorInstance.InlineData[2] = SUB81(uVar13,2);
  local_a8.AllocatorInstance.InlineData[3] = SUB81(uVar13,3);
  local_a8.AllocatorInstance.InlineData[4] = SUB81(uVar13,4);
  local_a8.AllocatorInstance.InlineData[5] = SUB81(uVar13,5);
  local_a8.AllocatorInstance.InlineData[6] = SUB81(uVar13,6);
  local_a8.AllocatorInstance.InlineData[7] = SUB81(uVar13,7);
  (this->PipelineStates).field_0x10 = local_a8.AllocatorInstance.InlineData[0];
  (this->PipelineStates).field_0x11 = local_a8.AllocatorInstance.InlineData[1];
  (this->PipelineStates).field_0x12 = local_a8.AllocatorInstance.InlineData[2];
  (this->PipelineStates).field_0x13 = local_a8.AllocatorInstance.InlineData[3];
  (this->PipelineStates).field_0x14 = local_a8.AllocatorInstance.InlineData[4];
  (this->PipelineStates).field_0x15 = local_a8.AllocatorInstance.InlineData[5];
  (this->PipelineStates).field_0x16 = local_a8.AllocatorInstance.InlineData[6];
  (this->PipelineStates).field_0x17 = local_a8.AllocatorInstance.InlineData[7];
  local_a8.AllocatorInstance.InlineData[8] = (uchar)uVar15;
  local_a8.AllocatorInstance.InlineData[9] = SUB81(uVar15,1);
  local_a8.AllocatorInstance.InlineData[10] = SUB81(uVar15,2);
  local_a8.AllocatorInstance.InlineData[0xb] = SUB81(uVar15,3);
  local_a8.AllocatorInstance.InlineData[0xc] = SUB81(uVar15,4);
  local_a8.AllocatorInstance.InlineData[0xd] = SUB81(uVar15,5);
  local_a8.AllocatorInstance.InlineData[0xe] = SUB81(uVar15,6);
  local_a8.AllocatorInstance.InlineData[0xf] = SUB81(uVar15,7);
  (this->PipelineStates).field_0x18 = local_a8.AllocatorInstance.InlineData[8];
  (this->PipelineStates).field_0x19 = local_a8.AllocatorInstance.InlineData[9];
  (this->PipelineStates).field_0x1a = local_a8.AllocatorInstance.InlineData[10];
  (this->PipelineStates).field_0x1b = local_a8.AllocatorInstance.InlineData[0xb];
  (this->PipelineStates).field_0x1c = local_a8.AllocatorInstance.InlineData[0xc];
  (this->PipelineStates).field_0x1d = local_a8.AllocatorInstance.InlineData[0xd];
  (this->PipelineStates).field_0x1e = local_a8.AllocatorInstance.InlineData[0xe];
  (this->PipelineStates).field_0x1f = local_a8.AllocatorInstance.InlineData[0xf];
  *(undefined8 *)&(this->PipelineStates).field_0x20 = 0;
  *(undefined8 *)&(this->PipelineStates).field_0x28 = 0x8000000000;
  *(undefined8 *)&(this->PipelineStates).field_0x30 = 0xffffffff;
  *(ulonglong *)&(this->PipelineStates).field_0x38 = CONCAT44(uStack_7c,uStack_80);
  uStack_80 = uVar8;
  uStack_7c = uVar9;
  *(undefined8 *)&(this->PipelineStates).field_0x40 = 0;
  *(ulonglong *)&(this->PipelineStates).field_0x48 = uVar1;
  uStack_104 = 0;
  if (iVar10 != 0) {
    FVar21 = (ForElementType<unsigned_int>)&local_a8;
    if (local_a8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar21 = local_a8.AllocatorInstance.SecondaryData;
    }
    uVar23 = *(uint *)FVar21;
    local_100 = 0;
    while (uVar23 == 0) {
      lVar18 = (longlong)iStack_118;
      local_100 = local_100 + 0x20;
      iStack_118 = iStack_118 + 1;
      uStack_104 = iVar10;
      if ((int)((iVar10 - 1U) + ((int)(iVar10 - 1U) >> 0x1f & 0x1fU)) >> 5 < iStack_118)
      goto LAB_145b4e191;
      uVar23 = *(uint *)((uchar *)((longlong)FVar21 + 4) + lVar18 * 4);
    }
    uStack_114 = -uVar23 & uVar23;
    uVar1 = (ulonglong)uStack_114 * 2 + 1;
    lVar18 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    local_f0 = (int)lVar18;
    uStack_104 = local_f0 + -1 + local_100;
    if (iVar10 < (int)uStack_104) {
      uStack_104 = iVar10;
    }
  }
LAB_145b4e191:
  local_120 = &local_b8;
  local_110 = &local_a8;
  uVar23 = iVar10 & 0xffffffe0;
  uStack_108 = 0xffffffff;
  TStack_e0.CurrentBitIndex = uStack_104;
  TStack_e0.UnvisitedBitMask = 0xffffffff;
  TStack_e0._padding_ = CONCAT44(uStack_114,iStack_118);
  iVar19 = iVar10 >> 5;
  iStack_f8 = iStack_f8 - iStack_84;
  TStack_e0._28_4_ = uStack_104;
  TStack_e0.BaseBitIndex = local_100;
  uStack_c0 = CONCAT44(uStack_f4,iStack_f8);
  uVar22 = iVar10;
  uStack_fc = uStack_104;
  local_e8 = local_120;
  TStack_e0.Array = local_110;
  local_a8.AllocatorInstance.InlineData._0_8_ = uVar14;
  local_a8.AllocatorInstance.InlineData._8_8_ = uVar16;
  if (iVar10 < 0) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("StartIndex >= 0 && StartIndex <= Array.Num()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                        ,0x7af,L"");
    if (bVar17) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar22 = local_a8.NumBits;
  }
  uVar20 = iVar10;
  if (iVar10 != uVar22) {
    FVar21 = (ForElementType<unsigned_int>)&local_a8;
    if (local_a8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar21 = local_a8.AllocatorInstance.SecondaryData;
    }
    uVar20 = -1 << ((byte)iVar10 & 0x1f) & *(uint *)((longlong)FVar21 + (longlong)iVar19 * 4);
    while (uVar20 == 0) {
      lVar18 = (longlong)iVar19;
      uVar23 = uVar23 + 0x20;
      iVar19 = iVar19 + 1;
      uVar20 = uVar22;
      if ((int)((uVar22 - 1) + ((int)(uVar22 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19)
      goto LAB_145b4e2ac;
      uVar20 = *(uint *)((uchar *)((longlong)FVar21 + 4) + lVar18 * 4);
    }
    uVar1 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
    lVar18 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    uVar20 = (int)lVar18 + -1 + uVar23;
    if ((int)uVar22 < (int)uVar20) {
      uVar20 = uVar22;
    }
  }
LAB_145b4e2ac:
  while( true ) {
    pFVar12 = local_e8;
    if (*(int *)&local_e8[1].Data - *(int *)((longlong)&local_e8[6].Data + 4) != (int)uStack_c0) {
      `TSparseArray<TSparseSetElement<TTuple<FVulkanGraphicsPipelineState_*,FVulkanGraphicsPipelineDescriptorState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_128);
    }
    if (((TStack_e0.CurrentBitIndex == uVar20) && (TStack_e0.Array == &local_a8)) &&
       (pFVar12 == &local_b8)) break;
    puVar2 = *(undefined8 **)(pFVar12->Data + (longlong)TStack_e0.CurrentBitIndex * 0x18 + 8);
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)();
    }
    TStack_e0.UnvisitedBitMask = TStack_e0.UnvisitedBitMask & ~TStack_e0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e0);
  }
  uStack_70 = uStack_70 & 0xffffffff00000000;
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  uVar1 = uStack_b0 >> 0x20;
  uStack_b0 = uStack_b0 & 0xffffffff00000000;
  if ((int)uVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&local_b8,0,(int *)((longlong)&uStack_b0 + 4));
  }
  iVar19 = local_a8.MaxBits;
  local_88 = 0xffffffff;
  iStack_84 = 0;
  local_a8._24_8_ = (ulonglong)(uint)local_a8.MaxBits << 0x20;
  if (0x80 < (uint)iVar19) {
    local_a8.NumBits = 0;
    local_a8.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_a8,0);
  }
  if (local_a8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_a8.AllocatorInstance.SecondaryData);
  }
  if (local_b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data);
  }
  *(undefined4 *)&(this->PipelineStates).field_0x48 = 0;
  pvVar3 = *(void **)&(this->PipelineStates).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FVulkanGraphicsPipelineState_*,FVulkanGraphicsPipelineDescriptorState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FVulkanGraphicsPipelineState_*,FVulkanGraphicsPipelineDescriptorState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FVulkanGraphicsPipelineState_*,FVulkanGraphicsPipelineDescriptorState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this_00);
  FVar4 = (this->Scissors).AllocatorInstance.SecondaryData;
  if (FVar4 != (ForElementType<VkRect2D>)0x0) {
    FMemory::Free((void *)FVar4);
  }
  FVar5 = (this->Viewports).AllocatorInstance.SecondaryData;
  if (FVar5 != (ForElementType<VkViewport>)0x0) {
    FMemory::Free((void *)FVar5);
  }
  return;
}

// PrepareForDraw @ 145b6f5e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "VkPipelineBindPoint": Some values do not have unique names */

void __thiscall
FVulkanPendingGfxState::PrepareForDraw
          (FVulkanPendingGfxState *this,FVulkanCommandListContext *param_1)

{
  uint uVar1;
  FVulkanGraphicsPipelineDescriptorState *pFVar2;
  FVulkanGraphicsPipelineState *pFVar3;
  undefined1 *puVar4;
  VkBuffer_T *pVVar5;
  code *pcVar6;
  _func___cdecl_void_VkCommandBuffer_T_ptr_uint_uint_VkBuffer_T_ptr_ptr_ulong64_ptr *p_Var7;
  bool bVar8;
  int iVar9;
  FVulkanCommandBuffer *pFVar10;
  undefined1 *puVar11;
  int *piVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined1 auStackY_298 [32];
  VkBuffer_T *local_268 [17];
  ulong64 local_1e0 [17];
  undefined8 auStack_158 [17];
  ulonglong auStack_d0 [17];
  uint local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_298;
  pFVar10 = FVulkanContextCommon::GetCommandBuffer((FVulkanContextCommon *)param_1);
  if ((pFVar10->bHasPipeline == '\0') &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Context.GetCommandBuffer().bHasPipeline",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPendingState.cpp"
                         ,0x187,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  bVar8 = this->CurrentPipeline->bHasInputAttachments;
  if (this->CurrentPipeline->bUsesBindless == false) {
    if (bVar8 != false) {
      UpdateInputAttachments(this,param_1->CurrentFramebuffer);
    }
    pFVar2 = this->CurrentState;
    if ((*(char *)((longlong)&pFVar2->_padding_ + 1) != '\0') &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("!bUseBindless",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipelineState.h"
                           ,0xff,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar9 = (**(code **)(*(longlong *)GDynamicGlobalUBs._padding_ + 200))();
    if (iVar9 < 1) {
      bVar8 = FVulkanGraphicsPipelineDescriptorState::InternalUpdateDescriptorSets<0>
                        (pFVar2,param_1);
    }
    else {
      bVar8 = FVulkanGraphicsPipelineDescriptorState::InternalUpdateDescriptorSets<1>
                        (pFVar2,param_1);
    }
    pFVar10 = FVulkanContextCommon::GetCommandBuffer((FVulkanContextCommon *)param_1);
    UpdateDynamicStates(this,pFVar10);
    if (bVar8 != false) {
      pFVar2 = this->CurrentState;
      pFVar10 = FVulkanContextCommon::GetCommandBuffer((FVulkanContextCommon *)param_1);
      FVulkanCommonPipelineDescriptorState::Bind
                ((FVulkanCommonPipelineDescriptorState *)pFVar2,pFVar10->CommandBufferHandle,
                 pFVar2->GfxPipeline->Layout->PipelineLayout,VK_PIPELINE_BIND_POINT_GRAPHICS);
    }
  }
  else {
    if ((bVar8 != false) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("!CurrentPipeline->bHasInputAttachments",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPendingState.cpp"
                           ,0x18b,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar10 = FVulkanContextCommon::GetCommandBuffer((FVulkanContextCommon *)param_1);
    UpdateDynamicStates(this,pFVar10);
    FVulkanGraphicsPipelineDescriptorState::UpdateBindlessDescriptors(this->CurrentState,param_1);
  }
  if (this->bDirtyVertexStreams != false) {
    pFVar3 = this->CurrentPipeline;
    if ((pFVar3->VertexInputState).AttributesNum == 0) {
      if (((pFVar3->VertexInputState).BindingsNum != 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("VertexInputStateInfo.BindingsNum == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPendingState.cpp"
                             ,0x1ac,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    else {
      uVar14 = 0;
      local_48 = 0;
      if ((pFVar3->VertexInputState).BindingsNum != 0) {
        do {
          if (*(int *)&(pFVar3->VertexInputState).BindingToStream.field_0x8 !=
              *(int *)&(pFVar3->VertexInputState).BindingToStream.field_0x34) {
            puVar4 = *(undefined1 **)&(pFVar3->VertexInputState).BindingToStream.field_0x40;
            puVar11 = &(pFVar3->VertexInputState).BindingToStream.field_0x38;
            if (puVar4 != (undefined1 *)0x0) {
              puVar11 = puVar4;
            }
            iVar9 = *(int *)(puVar11 +
                            (*(int *)&(pFVar3->VertexInputState).BindingToStream.field_0x48 - 1 &
                            uVar14) * 4);
            if (iVar9 != -1) {
              do {
                piVar12 = (int *)((longlong)iVar9 * 0x10 +
                                 *(longlong *)&(pFVar3->VertexInputState).BindingToStream);
                if (*piVar12 == (int)uVar14) {
                  if (piVar12 == (int *)0x0) goto LAB_145b6f85c;
                  goto LAB_145b6f882;
                }
                iVar9 = piVar12[2];
              } while (iVar9 != -1);
            }
          }
          piVar12 = (int *)0x0;
LAB_145b6f85c:
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Pair != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                             ,0x27b,L"");
          if (bVar8) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
LAB_145b6f882:
          pVVar5 = this->PendingStreams[(uint)piVar12[1]].Stream;
          if (pVVar5 != (VkBuffer_T *)0x0) {
            uVar13 = (pFVar3->VertexInputState).Bindings[uVar14].stride;
            uVar1 = this->PendingStreams[(uint)piVar12[1]].BufferOffset;
            if ((0x10 < (int)local_48) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("NumUsed < MaxVertexElementCount",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPendingState.cpp"
                                   ,0x1ba,L""), bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            local_268[(int)local_48] = pVVar5;
            local_1e0[(int)local_48] = (ulonglong)uVar1;
            auStack_158[(int)local_48] = 0xffffffffffffffff;
            auStack_d0[(int)local_48] = (ulonglong)uVar13;
            local_48 = local_48 + 1;
          }
          p_Var7 = VulkanDynamicAPI::vkCmdBindVertexBuffers;
          uVar13 = (int)uVar14 + 1;
          uVar14 = (ulonglong)uVar13;
        } while (uVar13 < (pFVar3->VertexInputState).BindingsNum);
        if (0 < (int)local_48) {
          pFVar10 = FVulkanContextCommon::GetCommandBuffer((FVulkanContextCommon *)param_1);
          (*p_Var7)(pFVar10->CommandBufferHandle,0,local_48,local_268,local_1e0);
        }
      }
      this->bDirtyVertexStreams = false;
    }
  }
  return;
}

// SetGfxPipeline @ 145b7b430

/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

bool __thiscall
FVulkanPendingGfxState::SetGfxPipeline
          (FVulkanPendingGfxState *this,FVulkanGraphicsPipelineState *param_1,bool param_2)

{
  FVulkanGraphicsPipelineState **ppFVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  FVulkanGraphicsPipelineDescriptorState *pFVar9;
  FVulkanGraphicsPipelineDescriptorState *pFVar10;
  uint uVar11;
  undefined1 *puVar12;
  FVulkanGraphicsPipelineState **local_28;
  FVulkanGraphicsPipelineDescriptorState **local_20;
  
  ppFVar1 = &this->CurrentPipeline;
  if (param_1 == *ppFVar1) {
    if (!param_2) {
      return param_2;
    }
  }
  else {
    *ppFVar1 = param_1;
    pFVar10 = (FVulkanGraphicsPipelineDescriptorState *)0x0;
    uVar11 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
             -0x7a143595;
    uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
    if (*(int *)&(this->PipelineStates).field_0x8 != *(int *)&(this->PipelineStates).field_0x34) {
      puVar12 = *(undefined1 **)&(this->PipelineStates).field_0x40;
      if (puVar12 == (undefined1 *)0x0) {
        puVar12 = &(this->PipelineStates).field_0x38;
      }
      iVar8 = *(int *)(puVar12 +
                      (ulonglong)
                      (*(int *)&(this->PipelineStates).field_0x48 - 1U & (uVar11 >> 0x10 ^ uVar11))
                      * 4);
      if (iVar8 != -1) {
        lVar3 = *(longlong *)&(this->PipelineStates).field_0x0;
        do {
          lVar2 = lVar3 + (longlong)iVar8 * 0x18;
          if (*(FVulkanGraphicsPipelineState **)(lVar3 + (longlong)iVar8 * 0x18) == param_1) {
            pFVar9 = (FVulkanGraphicsPipelineDescriptorState *)(lVar2 + 8);
            if (lVar2 == 0) {
              pFVar9 = pFVar10;
            }
            if (pFVar9 != (FVulkanGraphicsPipelineDescriptorState *)0x0) {
              pFVar10 = (FVulkanGraphicsPipelineDescriptorState *)pFVar9->_padding_;
              this->CurrentState = pFVar10;
              if ((pFVar10->GfxPipeline != param_1) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("CurrentState->GfxPipeline == InGfxPipeline",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPendingState.cpp"
                                     ,0x47f,L""), bVar6)) {
                pcVar4 = (code *)swi(3);
                uVar7 = (*pcVar4)();
                return (bool)uVar7;
              }
              goto LAB_145b7b535;
            }
            break;
          }
          iVar8 = *(int *)(lVar2 + 0x10);
        } while (iVar8 != -1);
      }
    }
    pFVar9 = ::operator_new(0x170);
    if (pFVar9 != (FVulkanGraphicsPipelineDescriptorState *)0x0) {
      pFVar10 = FVulkanGraphicsPipelineDescriptorState::FVulkanGraphicsPipelineDescriptorState
                          (pFVar9,this->Device,param_1);
    }
    local_20 = &this->CurrentState;
    *local_20 = pFVar10;
    local_28 = ppFVar1;
    TSet<TTuple<FVulkanGraphicsPipelineState_*,FVulkanGraphicsPipelineDescriptorState_*>,TDefaultMapHashableKeyFuncs<FVulkanGraphicsPipelineState_*,FVulkanGraphicsPipelineDescriptorState_*,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<FVulkanGraphicsPipelineState_*_const_&,FVulkanGraphicsPipelineDescriptorState_*_const_&>_>
              ((TSet<TTuple<FVulkanGraphicsPipelineState_*,FVulkanGraphicsPipelineDescriptorState_*>,TDefaultMapHashableKeyFuncs<FVulkanGraphicsPipelineState_*,FVulkanGraphicsPipelineDescriptorState_*,0>,FDefaultSetAllocator>
                *)&this->PipelineStates,
               (TPairInitializer<FVulkanGraphicsPipelineState_*_const_&,FVulkanGraphicsPipelineDescriptorState_*_const_&>
                *)&stack0x00000018,(bool *)&local_28);
LAB_145b7b535:
    param_2 = true;
    this->PrimitiveType = (uint)(param_1->PrimitiveType).Value;
  }
  pFVar10 = this->CurrentState;
  uVar5 = *(undefined8 *)((pFVar10->PackedUniformBuffersMask).Elements + 2);
  *(undefined8 *)(pFVar10->PackedUniformBuffersDirty).Elements =
       *(undefined8 *)(pFVar10->PackedUniformBuffersMask).Elements;
  *(undefined8 *)((pFVar10->PackedUniformBuffersDirty).Elements + 2) = uVar5;
  (pFVar10->PackedUniformBuffersDirty).Elements[4] = (pFVar10->PackedUniformBuffersMask).Elements[4]
  ;
  FVulkanCommonPipelineDescriptorState::Reset((FVulkanCommonPipelineDescriptorState *)pFVar10);
  *(bool *)&pFVar10->_padding_ = true;
  return param_2;
}

// SetSRVForUBResource @ 145b7c8e0

/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

void __thiscall
FVulkanPendingGfxState::SetSRVForUBResource
          (FVulkanPendingGfxState *this,uchar param_1,uint param_2,
          FVulkanShaderResourceView *param_3)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_3 == (FVulkanShaderResourceView *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SRV",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPendingState.cpp"
                       ,0x341,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FVulkanCommonPipelineDescriptorState::SetSRV
            ((FVulkanCommonPipelineDescriptorState *)this->CurrentState,false,param_1,param_2,
             param_3);
  return;
}

// SetUAVForUBResource @ 145b7d0c0

/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

void __thiscall
FVulkanPendingGfxState::SetUAVForUBResource
          (FVulkanPendingGfxState *this,uchar param_1,uint param_2,
          FVulkanUnorderedAccessView *param_3)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_3 == (FVulkanUnorderedAccessView *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("UAV",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPendingState.cpp"
                       ,0x347,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FVulkanCommonPipelineDescriptorState::SetUAV
            ((FVulkanCommonPipelineDescriptorState *)this->CurrentState,false,param_1,param_2,
             param_3);
  return;
}

// SetViewport @ 145b7d140

/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FVulkanPendingGfxState::SetViewport
          (FVulkanPendingGfxState *this,float param_1,float param_2,float param_3,float param_4,
          float param_5,float param_6)

{
  TArray<VkRect2D,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *this_00;
  int iVar1;
  ForElementType<VkViewport> FVar2;
  code *pcVar3;
  bool bVar4;
  ForElementType<VkViewport> FVar5;
  ForElementType<VkRect2D> FVar6;
  
  TArray<VkViewport,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::SetNumZeroed
            (&this->Viewports,1,Default);
  if ((this->Viewports).ArrayNum < 1) {
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
  FVar2 = (this->Viewports).AllocatorInstance.SecondaryData;
  FVar5 = (ForElementType<VkViewport>)this;
  if (FVar2 != (ForElementType<VkViewport>)0x0) {
    FVar5 = FVar2;
  }
  *(float *)FVar5 = param_1;
  if ((this->Viewports).ArrayNum < 1) {
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
  FVar2 = (this->Viewports).AllocatorInstance.SecondaryData;
  FVar5 = (ForElementType<VkViewport>)this;
  if (FVar2 != (ForElementType<VkViewport>)0x0) {
    FVar5 = FVar2;
  }
  *(float *)((longlong)FVar5 + 4) = param_2;
  if ((this->Viewports).ArrayNum < 1) {
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
  FVar2 = (this->Viewports).AllocatorInstance.SecondaryData;
  FVar5 = (ForElementType<VkViewport>)this;
  if (FVar2 != (ForElementType<VkViewport>)0x0) {
    FVar5 = FVar2;
  }
  *(float *)((longlong)FVar5 + 8) = param_4 - param_1;
  if ((this->Viewports).ArrayNum < 1) {
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
  FVar2 = (this->Viewports).AllocatorInstance.SecondaryData;
  FVar5 = (ForElementType<VkViewport>)this;
  if (FVar2 != (ForElementType<VkViewport>)0x0) {
    FVar5 = FVar2;
  }
  *(float *)((longlong)FVar5 + 0xc) = param_5 - param_2;
  if ((this->Viewports).ArrayNum < 1) {
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
  FVar2 = (this->Viewports).AllocatorInstance.SecondaryData;
  FVar5 = (ForElementType<VkViewport>)this;
  if (FVar2 != (ForElementType<VkViewport>)0x0) {
    FVar5 = FVar2;
  }
  *(float *)((longlong)FVar5 + 0x10) = param_3;
  iVar1 = (this->Viewports).ArrayNum;
  if (param_3 == param_6) {
    if (iVar1 < 1) {
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
    FVar2 = (this->Viewports).AllocatorInstance.SecondaryData;
    FVar5 = (ForElementType<VkViewport>)this;
    if (FVar2 != (ForElementType<VkViewport>)0x0) {
      FVar5 = FVar2;
    }
    *(float *)((longlong)FVar5 + 0x14) = param_3 + __real_3f800000;
  }
  else {
    if (iVar1 < 1) {
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
    FVar2 = (this->Viewports).AllocatorInstance.SecondaryData;
    FVar5 = (ForElementType<VkViewport>)this;
    if (FVar2 != (ForElementType<VkViewport>)0x0) {
      FVar5 = FVar2;
    }
    *(float *)((longlong)FVar5 + 0x14) = param_6;
  }
  this_00 = &this->Scissors;
  TArray<VkRect2D,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::SetNumZeroed
            (this_00,1,Default);
  if ((this->Scissors).ArrayNum < 1) {
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
  FVar6 = (this->Scissors).AllocatorInstance.SecondaryData;
  if (FVar6 == (ForElementType<VkRect2D>)0x0) {
    FVar6 = (ForElementType<VkRect2D>)this_00;
  }
  *(int *)FVar6 = (int)(longlong)param_1;
  if ((this->Scissors).ArrayNum < 1) {
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
  FVar6 = (this->Scissors).AllocatorInstance.SecondaryData;
  if (FVar6 == (ForElementType<VkRect2D>)0x0) {
    FVar6 = (ForElementType<VkRect2D>)this_00;
  }
  *(int *)((longlong)FVar6 + 4) = (int)(longlong)param_2;
  if ((this->Scissors).ArrayNum < 1) {
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
  FVar6 = (this->Scissors).AllocatorInstance.SecondaryData;
  if (FVar6 == (ForElementType<VkRect2D>)0x0) {
    FVar6 = (ForElementType<VkRect2D>)this_00;
  }
  *(int *)((longlong)FVar6 + 8) = (int)(longlong)(param_4 - param_1);
  if ((this->Scissors).ArrayNum < 1) {
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
  FVar6 = (this->Scissors).AllocatorInstance.SecondaryData;
  if (FVar6 == (ForElementType<VkRect2D>)0x0) {
    FVar6 = (ForElementType<VkRect2D>)this_00;
  }
  *(int *)((longlong)FVar6 + 0xc) = (int)(longlong)(param_5 - param_2);
  this->bScissorEnable = false;
  return;
}

// UpdateDynamicStates @ 145b83010

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "EStage": Some values do not have unique names */

void __thiscall
FVulkanPendingGfxState::UpdateDynamicStates
          (FVulkanPendingGfxState *this,FVulkanCommandBuffer *param_1)

{
  int *piVar1;
  TArray<VkRect2D,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *pTVar2;
  TArray<FGfxPipelineDesc::FBlendAttachment,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  TArray<FGfxPipelineDesc::FVertexAttribute,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<FGfxPipelineDesc::FBlendAttachment,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<FGfxPipelineDesc::FVertexAttribute,TSizedDefaultAllocator<32>_> *pTVar7;
  undefined8 *puVar8;
  float fVar9;
  undefined4 uVar10;
  ForElementType<VkRect2D> FVar11;
  FGfxPipelineDesc *pFVar12;
  FVulkanGraphicsPipelineState *pFVar13;
  FVulkanGraphicsPipelineState *pFVar14;
  code *pcVar15;
  bool bVar16;
  ushort uVar17;
  int iVar18;
  EStage EVar19;
  ForElementType<VkViewport> FVar20;
  ForElementType<VkViewport> FVar21;
  ForElementType<VkRect2D> FVar22;
  ForElementType<VkVertexInputAttributeDescription2EXT> FVar23;
  ForElementType<VkViewport> FVar24;
  ForElementType<VkRect2D> FVar25;
  ForElementType<VkVertexInputBindingDescription2EXT> FVar26;
  uint uVar27;
  uchar *puVar28;
  FScriptContainerElement *pFVar29;
  FScriptContainerElement *pFVar30;
  TArray<FGfxPipelineDesc::FVertexBinding,TSizedDefaultAllocator<32>_> *pTVar31;
  TArray<FGfxPipelineDesc::FVertexBinding,TSizedDefaultAllocator<32>_> *pTVar32;
  uint uVar33;
  uint uVar34;
  longlong lVar35;
  FVulkanShader *pFVar36;
  byte bVar37;
  VkColorBlendEquationEXT *pVVar38;
  undefined1 auStackY_a28 [32];
  undefined1 local_9e8;
  byte local_9e7;
  uint local_9e4;
  undefined1 local_9e0;
  undefined1 local_9df [7];
  FScriptContainerElement *local_9d8;
  FVulkanShader *local_9d0;
  FVulkanShader *local_9c8;
  ForElementType<VkViewport> local_9b8;
  uint local_980;
  int local_97c;
  ForElementType<VkVertexInputAttributeDescription2EXT> local_978;
  uint local_570;
  uint local_56c;
  ForElementType<VkVertexInputBindingDescription2EXT> local_568;
  uint local_160;
  uint local_15c;
  FScriptContainerElement local_158 [32];
  FScriptContainerElement local_138 [32];
  VkColorBlendEquationEXT local_118 [8];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_a28;
  if ((param_1->bHasViewport == '\0') ||
     (iVar18 = (this->Viewports).ArrayNum, iVar18 != (param_1->CurrentViewports).ArrayNum)) {
LAB_145b8309c:
    FVar20 = (this->Viewports).AllocatorInstance.SecondaryData;
    uVar34 = (this->Viewports).ArrayNum;
    local_9b8.SecondaryData = (ForElementType<VkViewport>)0x0;
    FVar24 = (ForElementType<VkViewport>)this;
    if (FVar20 != (ForElementType<VkViewport>)0x0) {
      FVar24 = FVar20;
    }
    local_980 = uVar34;
    if (uVar34 == 0) {
      local_97c = 2;
      uVar34 = 0;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<VkViewport>_>
                (0x18,4,uVar34,0,&local_9b8,uVar34,&local_97c);
      FVar20 = (ForElementType<VkViewport>)&local_9b8;
      if (local_9b8.SecondaryData != (ForElementType<VkViewport>)0x0) {
        FVar20 = local_9b8.SecondaryData;
      }
      memcpy((void *)FVar20,(void *)FVar24,(longlong)(int)uVar34 * 0x18);
      uVar34 = local_980;
    }
    uVar33 = __xmm_80000000800000008000000080000000;
    FVar20 = (ForElementType<VkViewport>)&local_9b8;
    if (local_9b8.SecondaryData != (ForElementType<VkViewport>)0x0) {
      FVar20 = local_9b8.SecondaryData;
    }
    puVar28 = (uchar *)((longlong)FVar20 + 0xc);
    uVar27 = uVar34;
    while( true ) {
      if (uVar27 != uVar34) {
        local_9e8 = 0;
        `TCheckedPointerIterator<VkViewport,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_9e8);
        uVar27 = local_980;
      }
      if ((ForElementType<VkViewport> *)(puVar28 + -0xc) ==
          (ForElementType<VkViewport> *)((longlong)FVar20 + (longlong)(int)uVar34 * 0x18)) break;
      fVar9 = *(float *)puVar28;
      *(uint *)puVar28 = (uint)fVar9 ^ uVar33;
      *(float *)(puVar28 + -8) = fVar9 + *(float *)(puVar28 + -8);
      puVar28 = puVar28 + 0x18;
      uVar27 = local_980;
    }
    if (((this->Device->OptionalDeviceExtensions).field0_0x0.Packed & 0x20000000000000) == 0) {
      FVar20 = (ForElementType<VkViewport>)&local_9b8;
      if (local_9b8.SecondaryData != (ForElementType<VkViewport>)0x0) {
        FVar20 = local_9b8.SecondaryData;
      }
      (*VulkanDynamicAPI::vkCmdSetViewport)
                (param_1->CommandBufferHandle,0,uVar27,(VkViewport *)FVar20);
    }
    else {
      FVar20 = (ForElementType<VkViewport>)&local_9b8;
      if (local_9b8.SecondaryData != (ForElementType<VkViewport>)0x0) {
        FVar20 = local_9b8.SecondaryData;
      }
      (*VulkanDynamicAPI::vkCmdSetViewportWithCountEXT)
                (param_1->CommandBufferHandle,uVar27,(VkViewport *)FVar20);
    }
    if ((FVulkanPendingGfxState *)param_1 != this) {
      FVar20 = (this->Viewports).AllocatorInstance.SecondaryData;
      piVar1 = &(param_1->CurrentViewports).ArrayMax;
      iVar18 = (this->Viewports).ArrayNum;
      FVar24 = (ForElementType<VkViewport>)this;
      if (FVar20 != (ForElementType<VkViewport>)0x0) {
        FVar24 = FVar20;
      }
      (param_1->CurrentViewports).ArrayNum = iVar18;
      if ((iVar18 == 0) && (*piVar1 == 0)) {
        *piVar1 = 2;
      }
      else {
        UE::Core::Private::
        ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<VkViewport>_>
                  (0x18,4,iVar18,*piVar1,(ForElementType<VkViewport> *)param_1,iVar18,piVar1);
        FVar20 = (param_1->CurrentViewports).AllocatorInstance.SecondaryData;
        FVar21 = (ForElementType<VkViewport>)param_1;
        if (FVar20 != (ForElementType<VkViewport>)0x0) {
          FVar21 = FVar20;
        }
        if (iVar18 != 0) {
          memcpy((void *)FVar21,(void *)FVar24,(longlong)iVar18 * 0x18);
        }
      }
    }
    param_1->bHasViewport = '\x01';
    if (local_9b8.SecondaryData != (ForElementType<VkViewport>)0x0) {
      FMemory::Free((void *)local_9b8.SecondaryData);
    }
  }
  else {
    FVar20 = (this->Viewports).AllocatorInstance.SecondaryData;
    FVar24 = (ForElementType<VkViewport>)this;
    if (FVar20 != (ForElementType<VkViewport>)0x0) {
      FVar24 = FVar20;
    }
    FVar20 = (param_1->CurrentViewports).AllocatorInstance.SecondaryData;
    FVar21 = (ForElementType<VkViewport>)param_1;
    if (FVar20 != (ForElementType<VkViewport>)0x0) {
      FVar21 = FVar20;
    }
    iVar18 = memcmp((void *)FVar21,(void *)FVar24,(longlong)iVar18 * 0x18);
    if (iVar18 != 0) goto LAB_145b8309c;
  }
  bVar37 = param_1->field_0x80;
  if ((param_1->bHasScissor == '\0') ||
     (iVar18 = (this->Scissors).ArrayNum, iVar18 != (param_1->CurrentScissors).ArrayNum)) {
LAB_145b832a8:
    pTVar2 = &this->Scissors;
    FVar25 = (this->Scissors).AllocatorInstance.SecondaryData;
    uVar34 = (this->Scissors).ArrayNum;
    if (((this->Device->OptionalDeviceExtensions).field0_0x0.Packed & 0x20000000000000) == 0) {
      if (FVar25 == (ForElementType<VkRect2D>)0x0) {
        FVar25 = (ForElementType<VkRect2D>)pTVar2;
      }
      (*VulkanDynamicAPI::vkCmdSetScissor)(param_1->CommandBufferHandle,0,uVar34,(VkRect2D *)FVar25)
      ;
    }
    else {
      if (FVar25 == (ForElementType<VkRect2D>)0x0) {
        FVar25 = (ForElementType<VkRect2D>)pTVar2;
      }
      (*VulkanDynamicAPI::vkCmdSetScissorWithCountEXT)
                (param_1->CommandBufferHandle,uVar34,(VkRect2D *)FVar25);
    }
    FVar25 = (ForElementType<VkRect2D>)&param_1->CurrentScissors;
    if (FVar25 != (ForElementType<VkRect2D>)pTVar2) {
      FVar22 = (this->Scissors).AllocatorInstance.SecondaryData;
      piVar1 = &(param_1->CurrentScissors).ArrayMax;
      iVar18 = (this->Scissors).ArrayNum;
      if (FVar22 == (ForElementType<VkRect2D>)0x0) {
        FVar22 = (ForElementType<VkRect2D>)pTVar2;
      }
      (param_1->CurrentScissors).ArrayNum = iVar18;
      if ((iVar18 == 0) && (*piVar1 == 0)) {
        *piVar1 = 2;
      }
      else {
        UE::Core::Private::
        ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<VkRect2D>_>
                  (0x10,4,iVar18,*piVar1,(ForElementType<VkRect2D> *)FVar25,iVar18,piVar1);
        FVar11 = (param_1->CurrentScissors).AllocatorInstance.SecondaryData;
        if (FVar11 != (ForElementType<VkRect2D>)0x0) {
          FVar25 = FVar11;
        }
        if (iVar18 != 0) {
          memcpy((void *)FVar25,(void *)FVar22,(longlong)iVar18 << 4);
        }
      }
    }
    param_1->bHasScissor = '\x01';
    bVar37 = param_1->field_0x80;
  }
  else {
    FVar25 = (this->Scissors).AllocatorInstance.SecondaryData;
    FVar22 = (param_1->CurrentScissors).AllocatorInstance.SecondaryData;
    if (FVar25 == (ForElementType<VkRect2D>)0x0) {
      FVar25 = (ForElementType<VkRect2D>)&this->Scissors;
    }
    if (FVar22 == (ForElementType<VkRect2D>)0x0) {
      FVar22 = (ForElementType<VkRect2D>)&param_1->CurrentScissors;
    }
    iVar18 = memcmp((void *)FVar22,(void *)FVar25,(longlong)iVar18 << 4);
    if (iVar18 != 0) goto LAB_145b832a8;
  }
  if (((bVar37 & 0x10) == 0) || (param_1->CurrentStencilRef != this->StencilRef)) {
    (*VulkanDynamicAPI::vkCmdSetStencilReference)(param_1->CommandBufferHandle,3,this->StencilRef);
    uVar34 = this->StencilRef;
    bVar37 = param_1->field_0x80 | 0x10;
    param_1->bHasStencilRef = '\x01';
    param_1->CurrentStencilRef = uVar34;
  }
  pFVar12 = param_1->LastDynamicStateUpdate;
  bVar37 = bVar37 & 1;
  pFVar13 = this->CurrentPipeline;
  local_9e7 = bVar37;
  EVar19 = ShaderStage::GetStageForFrequency(SF_Mesh);
  pFVar14 = this->CurrentPipeline;
  pFVar36 = pFVar13->VulkanShaders[(int)EVar19];
  local_9d0 = pFVar36;
  EVar19 = ShaderStage::GetStageForFrequency(SF_Geometry);
  local_9c8 = pFVar14->VulkanShaders[(int)EVar19];
  if (((this->Device->OptionalDeviceExtensions).field0_0x0.Packed & 0x20000000000000) != 0) {
    if ((pFVar12 == (FGfxPipelineDesc *)0x0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("LastDynamicStateUpdate",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPendingState.cpp"
                            ,0x242,L""), bVar16)) {
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
    if (pFVar36 == (FVulkanShader *)0x0) {
      if ((bVar37 != 0) || (pFVar12->Topology != (pFVar13->Desc).Topology)) {
        pFVar12->Topology = (pFVar13->Desc).Topology;
        (*VulkanDynamicAPI::vkCmdSetPrimitiveTopologyEXT)
                  (param_1->CommandBufferHandle,(pFVar13->Desc).Topology);
        goto LAB_145b83486;
      }
LAB_145b8348b:
      if ((pFVar12->Rasterizer).CullMode != (pFVar13->Desc).Rasterizer.CullMode) goto LAB_145b83497;
LAB_145b834ba:
      if ((pFVar12->DepthStencil).bStencilTestEnable !=
          (pFVar13->Desc).DepthStencil.bStencilTestEnable) goto LAB_145b834c6;
LAB_145b834ed:
      if ((((pFVar12->DepthStencil).FrontFailOp != (pFVar13->Desc).DepthStencil.FrontFailOp) ||
          ((pFVar12->DepthStencil).FrontPassOp != (pFVar13->Desc).DepthStencil.FrontPassOp)) ||
         ((pFVar12->DepthStencil).FrontDepthFailOp != (pFVar13->Desc).DepthStencil.FrontDepthFailOp)
         ) goto LAB_145b83511;
LAB_145b8356c:
      if ((((pFVar12->DepthStencil).BackFailOp != (pFVar13->Desc).DepthStencil.BackFailOp) ||
          ((pFVar12->DepthStencil).BackPassOp != (pFVar13->Desc).DepthStencil.BackPassOp)) ||
         ((pFVar12->DepthStencil).BackDepthFailOp != (pFVar13->Desc).DepthStencil.BackDepthFailOp))
      goto LAB_145b83590;
LAB_145b835eb:
      if ((pFVar12->DepthStencil).DepthCompareOp != (pFVar13->Desc).DepthStencil.DepthCompareOp)
      goto LAB_145b835f7;
LAB_145b8361a:
      if ((pFVar12->DepthStencil).bDepthTestEnable != (pFVar13->Desc).DepthStencil.bDepthTestEnable)
      goto LAB_145b83626;
LAB_145b8364d:
      if ((pFVar12->DepthStencil).bDepthBoundsTestEnable !=
          (pFVar13->Desc).DepthStencil.bDepthBoundsTestEnable) goto LAB_145b83659;
LAB_145b83680:
      if ((pFVar12->DepthStencil).bDepthWriteEnable ==
          (pFVar13->Desc).DepthStencil.bDepthWriteEnable) goto LAB_145b836b4;
    }
    else {
      pFVar12->Topology = 0x7fffffff;
LAB_145b83486:
      if (bVar37 == 0) goto LAB_145b8348b;
LAB_145b83497:
      (pFVar12->Rasterizer).CullMode = (pFVar13->Desc).Rasterizer.CullMode;
      (*VulkanDynamicAPI::vkCmdSetCullModeEXT)
                (param_1->CommandBufferHandle,(uint)(pFVar13->Desc).Rasterizer.CullMode);
      if (bVar37 == 0) goto LAB_145b834ba;
LAB_145b834c6:
      (pFVar12->DepthStencil).bStencilTestEnable = (pFVar13->Desc).DepthStencil.bStencilTestEnable;
      (*VulkanDynamicAPI::vkCmdSetStencilTestEnableEXT)
                (param_1->CommandBufferHandle,
                 (uint)((pFVar13->Desc).DepthStencil.bStencilTestEnable != false));
      if (bVar37 == 0) goto LAB_145b834ed;
LAB_145b83511:
      (pFVar12->DepthStencil).FrontFailOp = (pFVar13->Desc).DepthStencil.FrontFailOp;
      (pFVar12->DepthStencil).FrontPassOp = (pFVar13->Desc).DepthStencil.FrontPassOp;
      (pFVar12->DepthStencil).FrontDepthFailOp = (pFVar13->Desc).DepthStencil.FrontDepthFailOp;
      (*VulkanDynamicAPI::vkCmdSetStencilOpEXT)
                (param_1->CommandBufferHandle,1,(uint)(pFVar13->Desc).DepthStencil.FrontFailOp,
                 (uint)(pFVar13->Desc).DepthStencil.FrontPassOp,
                 (uint)(pFVar13->Desc).DepthStencil.FrontDepthFailOp,
                 (uint)(pFVar13->Desc).DepthStencil.FrontCompareOp);
      if (bVar37 == 0) goto LAB_145b8356c;
LAB_145b83590:
      (pFVar12->DepthStencil).BackFailOp = (pFVar13->Desc).DepthStencil.BackFailOp;
      (pFVar12->DepthStencil).BackPassOp = (pFVar13->Desc).DepthStencil.BackPassOp;
      (pFVar12->DepthStencil).BackDepthFailOp = (pFVar13->Desc).DepthStencil.BackDepthFailOp;
      (*VulkanDynamicAPI::vkCmdSetStencilOpEXT)
                (param_1->CommandBufferHandle,2,(uint)(pFVar13->Desc).DepthStencil.BackFailOp,
                 (uint)(pFVar13->Desc).DepthStencil.BackPassOp,
                 (uint)(pFVar13->Desc).DepthStencil.BackDepthFailOp,
                 (uint)(pFVar13->Desc).DepthStencil.BackCompareOp);
      if (bVar37 == 0) goto LAB_145b835eb;
LAB_145b835f7:
      (pFVar12->DepthStencil).DepthCompareOp = (pFVar13->Desc).DepthStencil.DepthCompareOp;
      (*VulkanDynamicAPI::vkCmdSetDepthCompareOpEXT)
                (param_1->CommandBufferHandle,(uint)(pFVar13->Desc).DepthStencil.DepthCompareOp);
      if (bVar37 == 0) goto LAB_145b8361a;
LAB_145b83626:
      (pFVar12->DepthStencil).bDepthTestEnable = (pFVar13->Desc).DepthStencil.bDepthTestEnable;
      (*VulkanDynamicAPI::vkCmdSetDepthTestEnableEXT)
                (param_1->CommandBufferHandle,
                 (uint)((pFVar13->Desc).DepthStencil.bDepthTestEnable != false));
      if (bVar37 == 0) goto LAB_145b8364d;
LAB_145b83659:
      (pFVar12->DepthStencil).bDepthBoundsTestEnable =
           (pFVar13->Desc).DepthStencil.bDepthBoundsTestEnable;
      (*VulkanDynamicAPI::vkCmdSetDepthBoundsTestEnableEXT)
                (param_1->CommandBufferHandle,
                 (uint)((pFVar13->Desc).DepthStencil.bDepthBoundsTestEnable != false));
      if (bVar37 == 0) goto LAB_145b83680;
    }
    (pFVar12->DepthStencil).bDepthWriteEnable = (pFVar13->Desc).DepthStencil.bDepthWriteEnable;
    (*VulkanDynamicAPI::vkCmdSetDepthWriteEnableEXT)
              (param_1->CommandBufferHandle,
               (uint)((pFVar13->Desc).DepthStencil.bDepthWriteEnable != false));
  }
LAB_145b836b4:
  if ((((this->Device->OptionalDeviceExtensions).field0_0x0.Packed & 0x40000000000000) != 0) &&
     ((fVar9 = (pFVar13->Desc).Rasterizer.DepthBiasConstantFactor, bVar37 != 0 ||
      (fVar9 != (pFVar12->Rasterizer).DepthBiasConstantFactor)))) {
    (pFVar12->Rasterizer).DepthBiasConstantFactor = fVar9;
    (*VulkanDynamicAPI::vkCmdSetDepthBiasEnableEXT)
              (param_1->CommandBufferHandle,
               (uint)((pFVar13->Desc).Rasterizer.DepthBiasConstantFactor != 0.0));
    if (((this->Device->OptionalDeviceExtensions).field0_0x0.Packed & 0x80000000000000) != 0) {
      (pFVar12->Rasterizer).DepthBiasConstantFactor = fVar9;
    }
  }
  if (((this->Device->OptionalDeviceExtensions).field0_0x0.Packed & 0x80000000000000) != 0) {
    if ((bVar37 == 0) &&
       ((pFVar12->Rasterizer).PolygonMode == (pFVar13->Desc).Rasterizer.PolygonMode)) {
LAB_145b83775:
      if (pFVar12->RasterizationSamples != (pFVar13->Desc).RasterizationSamples) goto LAB_145b83782;
LAB_145b837b6:
      if (pFVar12->UseAlphaToCoverage != (pFVar13->Desc).UseAlphaToCoverage) goto LAB_145b837c5;
LAB_145b837ef:
      if (((pFVar12->ShaderKeyShared == (pFVar13->Desc).ShaderKeyShared) &&
          (iVar18 = (pFVar12->ColorAttachmentStates).ArrayNum,
          iVar18 == (pFVar13->Desc).ColorAttachmentStates.ArrayNum)) &&
         (bVar16 = CompareItems<FGfxPipelineDesc::FBlendAttachment,int>
                             ((FBlendAttachment *)
                              (pFVar12->ColorAttachmentStates).AllocatorInstance.Data,
                              (FBlendAttachment *)
                              (pFVar13->Desc).ColorAttachmentStates.AllocatorInstance.Data,iVar18),
         bVar16)) goto LAB_145b83a8a;
    }
    else {
      (pFVar12->Rasterizer).PolygonMode = (pFVar13->Desc).Rasterizer.PolygonMode;
      (*VulkanDynamicAPI::vkCmdSetPolygonModeEXT)
                (param_1->CommandBufferHandle,(uint)(pFVar13->Desc).Rasterizer.PolygonMode);
      if (bVar37 == 0) goto LAB_145b83775;
LAB_145b83782:
      pFVar12->RasterizationSamples = (pFVar13->Desc).RasterizationSamples;
      uVar17 = (pFVar13->Desc).RasterizationSamples;
      if (uVar17 == 0) {
        uVar17 = 1;
      }
      (*VulkanDynamicAPI::vkCmdSetRasterizationSamplesEXT)
                (param_1->CommandBufferHandle,(uint)uVar17);
      if (bVar37 == 0) goto LAB_145b837b6;
LAB_145b837c5:
      pFVar12->UseAlphaToCoverage = (pFVar13->Desc).UseAlphaToCoverage;
      (*VulkanDynamicAPI::vkCmdSetAlphaToCoverageEnableEXT)
                (param_1->CommandBufferHandle,(uint)((pFVar13->Desc).UseAlphaToCoverage != '\0'));
      if (bVar37 == 0) goto LAB_145b837ef;
    }
    iVar18 = (pFVar13->Desc).ColorAttachmentStates.ArrayNum;
    if (iVar18 != 0) {
      if ((8 < iVar18) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("NewDynamicState.ColorAttachmentStates.Num() <= MaxSimultaneousRenderTargets"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPendingState.cpp"
                              ,0x2b2,L""), bVar16)) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
      pFVar14 = this->CurrentPipeline;
      local_9e4 = 0xffffffff;
      EVar19 = ShaderStage::GetStageForFrequency(SF_Pixel);
      pFVar36 = pFVar14->VulkanShaders[(int)EVar19];
      if (pFVar36 == (FVulkanShader *)0x0) {
        uVar34 = 0xffffffff;
      }
      else {
        uVar34 = (pFVar36->CodeHeader).InOutMask;
        local_9e4 = uVar34;
      }
      uVar33 = (pFVar13->Desc).ColorAttachmentStates.ArrayNum;
      uVar27 = 0;
      if (0 < (int)uVar33) {
        lVar35 = 0;
        pVVar38 = local_118;
        local_9d8 = (FScriptContainerElement *)0x0;
        do {
          uVar33 = 0;
          if ((int)uVar27 < (pFVar13->Desc).ColorAttachmentStates.ArrayNum) {
            uVar33 = ~uVar27 >> 0x1f;
          }
          if ((uVar33 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             uVar34 = local_9e4, bVar16)) {
            pcVar15 = (code *)swi(3);
            (*pcVar15)();
            return;
          }
          pFVar30 = (pFVar13->Desc).ColorAttachmentStates.AllocatorInstance.Data;
          *(uint *)(local_138 + (longlong)local_9d8) =
               (uint)(pFVar30[lVar35] != (FScriptContainerElement)0x0);
          pVVar38->colorBlendOp = (uint)(byte)pFVar30[lVar35 + 1];
          pVVar38->srcColorBlendFactor = (uint)(byte)pFVar30[lVar35 + 2];
          pVVar38->dstColorBlendFactor = (uint)(byte)pFVar30[lVar35 + 3];
          pVVar38->alphaBlendOp = (uint)(byte)pFVar30[lVar35 + 4];
          pVVar38->srcAlphaBlendFactor = (uint)(byte)pFVar30[lVar35 + 5];
          pVVar38->dstAlphaBlendFactor = (uint)(byte)pFVar30[lVar35 + 6];
          *(uint *)(local_158 + (longlong)local_9d8) = (uint)(byte)pFVar30[lVar35 + 7];
          if ((uVar34 & 1) == 0) {
            *(undefined4 *)(local_158 + (longlong)local_9d8) = 0;
          }
          uVar33 = (pFVar13->Desc).ColorAttachmentStates.ArrayNum;
          local_9d8 = local_9d8 + 4;
          uVar34 = uVar34 >> 1;
          uVar27 = uVar27 + 1;
          lVar35 = lVar35 + 8;
          pVVar38 = pVVar38 + 1;
          bVar37 = local_9e7;
          local_9e4 = uVar34;
        } while ((int)uVar27 < (int)uVar33);
      }
      (*VulkanDynamicAPI::vkCmdSetColorBlendEnableEXT)
                (param_1->CommandBufferHandle,0,uVar33,(uint *)local_138);
      (*VulkanDynamicAPI::vkCmdSetColorBlendEquationEXT)
                (param_1->CommandBufferHandle,0,(pFVar13->Desc).ColorAttachmentStates.ArrayNum,
                 local_118);
      (*VulkanDynamicAPI::vkCmdSetColorWriteMaskEXT)
                (param_1->CommandBufferHandle,0,(pFVar13->Desc).ColorAttachmentStates.ArrayNum,
                 (uint *)local_158);
    }
    pTVar3 = &pFVar12->ColorAttachmentStates;
    pFVar12->ShaderKeyShared = (pFVar13->Desc).ShaderKeyShared;
    pTVar6 = &(pFVar13->Desc).ColorAttachmentStates;
    pFVar36 = local_9d0;
    if (pTVar3 != pTVar6) {
      iVar18 = (pFVar13->Desc).ColorAttachmentStates.ArrayNum;
      piVar1 = &(pFVar12->ColorAttachmentStates).ArrayMax;
      local_9d8 = (pTVar6->AllocatorInstance).Data;
      (pFVar12->ColorAttachmentStates).ArrayNum = iVar18;
      if ((iVar18 == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,1,iVar18,*piVar1,&pTVar3->AllocatorInstance,iVar18,piVar1);
        pFVar36 = local_9d0;
        if (iVar18 != 0) {
          memcpy((pTVar3->AllocatorInstance).Data,local_9d8,(longlong)iVar18 << 3);
          pFVar36 = local_9d0;
        }
      }
    }
  }
LAB_145b83a8a:
  if ((*(byte *)((longlong)&(this->Device->OptionalDeviceExtensions).field0_0x0 + 7) & 1) == 0)
  goto LAB_145b83b13;
  if ((this->bDirtyDynamicVertexInput == false) && (bVar37 == 0)) {
    this->bDirtyDynamicVertexInput = false;
    iVar18 = (pFVar12->VertexAttributes).ArrayNum;
    if ((((iVar18 != (pFVar13->Desc).VertexAttributes.ArrayNum) ||
         (bVar16 = CompareItems<FGfxPipelineDesc::FVertexAttribute,int>
                             ((FVertexAttribute *)(pFVar12->VertexAttributes).AllocatorInstance.Data
                              ,(FVertexAttribute *)
                               (pFVar13->Desc).VertexAttributes.AllocatorInstance.Data,iVar18),
         !bVar16)) ||
        (iVar18 = (pFVar12->VertexBindings).ArrayNum,
        iVar18 != (pFVar13->Desc).VertexBindings.ArrayNum)) ||
       (bVar16 = CompareItems<FGfxPipelineDesc::FVertexBinding,int>
                           ((FVertexBinding *)(pFVar12->VertexBindings).AllocatorInstance.Data,
                            (FVertexBinding *)(pFVar13->Desc).VertexBindings.AllocatorInstance.Data,
                            iVar18), !bVar16)) goto LAB_145b83b4d;
    if (pFVar36 == (FVulkanShader *)0x0) goto LAB_145b83b03;
  }
  else {
    this->bDirtyDynamicVertexInput = true;
LAB_145b83b4d:
    if (pFVar36 == (FVulkanShader *)0x0) {
      pFVar29 = (pFVar13->Desc).VertexBindings.AllocatorInstance.Data;
      iVar18 = (pFVar13->Desc).VertexBindings.ArrayNum;
      local_160 = 0;
      local_15c = 0x20;
      pFVar30 = pFVar29 + (longlong)iVar18 * 8;
      local_568.SecondaryData = (ForElementType<VkVertexInputBindingDescription2EXT>)0x0;
      while( true ) {
        if ((pFVar13->Desc).VertexBindings.ArrayNum != iVar18) {
          `TCheckedPointerIterator<FGfxPipelineDesc::FVertexBinding_const_,int,0>::operator!='::__l2
          ::<lambda_1>::operator()(&local_9e0);
        }
        if (pFVar29 == pFVar30) break;
        if (local_160 == local_15c) {
          local_160 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<VkVertexInputBindingDescription2EXT>_>
                                (0x820,&local_568,(int *)&local_15c);
        }
        FVar26 = (ForElementType<VkVertexInputBindingDescription2EXT>)&local_568;
        if (local_568.SecondaryData != (ForElementType<VkVertexInputBindingDescription2EXT>)0x0) {
          FVar26 = local_568.SecondaryData;
        }
        lVar35 = (longlong)(int)local_160 * 0x20;
        local_160 = local_160 + 1;
        *(undefined8 *)(lVar35 + (longlong)FVar26) = 0;
        ((undefined8 *)(lVar35 + (longlong)FVar26))[1] = 0;
        puVar8 = (undefined8 *)(lVar35 + 0x10 + (longlong)FVar26);
        *puVar8 = 0;
        puVar8[1] = 0;
        *(undefined4 *)(lVar35 + (longlong)FVar26) = 0x3ba02901;
        *(uint *)(lVar35 + 0x10 + (longlong)FVar26) = (uint)*(ushort *)(pFVar29 + 4);
        *(uint *)(lVar35 + 0x18 + (longlong)FVar26) = (uint)*(ushort *)(pFVar29 + 6);
        uVar10 = *(undefined4 *)pFVar29;
        pFVar29 = pFVar29 + 8;
        *(undefined4 *)(lVar35 + 0x14 + (longlong)FVar26) = uVar10;
        *(undefined4 *)(lVar35 + 0x1c + (longlong)FVar26) = 1;
      }
      iVar18 = (pFVar13->Desc).VertexAttributes.ArrayNum;
      pFVar30 = (pFVar13->Desc).VertexAttributes.AllocatorInstance.Data;
      local_978.SecondaryData = (ForElementType<VkVertexInputAttributeDescription2EXT>)0x0;
      pFVar29 = pFVar30 + (longlong)iVar18 * 0x10;
      local_570 = 0;
      local_56c = 0x20;
      while( true ) {
        if ((pFVar13->Desc).VertexAttributes.ArrayNum != iVar18) {
          `TCheckedPointerIterator<FGfxPipelineDesc::FVertexAttribute_const_,int,0>::operator!='::
          __l2::<lambda_1>::operator()(local_9df);
        }
        if (pFVar30 == pFVar29) break;
        if (local_570 == local_56c) {
          local_570 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<VkVertexInputAttributeDescription2EXT>_>
                                (0x820,&local_978,(int *)&local_56c);
        }
        FVar23 = (ForElementType<VkVertexInputAttributeDescription2EXT>)&local_978;
        if (local_978.SecondaryData != (ForElementType<VkVertexInputAttributeDescription2EXT>)0x0) {
          FVar23 = local_978.SecondaryData;
        }
        lVar35 = (longlong)(int)local_570 * 0x20;
        local_570 = local_570 + 1;
        *(undefined8 *)(lVar35 + (longlong)FVar23) = 0;
        ((VkVertexInputAttributeDescription2EXT *)(lVar35 + (longlong)FVar23))->pNext = (void *)0x0;
        puVar8 = (undefined8 *)(lVar35 + 0x10 + (longlong)FVar23);
        *puVar8 = 0;
        puVar8[1] = 0;
        ((VkVertexInputAttributeDescription2EXT *)(lVar35 + (longlong)FVar23))->sType =
             VK_STRUCTURE_TYPE_VERTEX_INPUT_ATTRIBUTE_DESCRIPTION_2_EXT;
        *(undefined4 *)(lVar35 + 0x14 + (longlong)FVar23) = *(undefined4 *)(pFVar30 + 4);
        *(undefined4 *)(lVar35 + 0x18 + (longlong)FVar23) = *(undefined4 *)(pFVar30 + 8);
        *(undefined4 *)(lVar35 + 0x10 + (longlong)FVar23) = *(undefined4 *)pFVar30;
        pFVar4 = pFVar30 + 0xc;
        pFVar30 = pFVar30 + 0x10;
        *(undefined4 *)(lVar35 + 0x1c + (longlong)FVar23) = *(undefined4 *)pFVar4;
      }
      FVar23 = (ForElementType<VkVertexInputAttributeDescription2EXT>)&local_978;
      if (local_978.SecondaryData != (ForElementType<VkVertexInputAttributeDescription2EXT>)0x0) {
        FVar23 = local_978.SecondaryData;
      }
      FVar26 = (ForElementType<VkVertexInputBindingDescription2EXT>)&local_568;
      if (local_568.SecondaryData != (ForElementType<VkVertexInputBindingDescription2EXT>)0x0) {
        FVar26 = local_568.SecondaryData;
      }
      (*VulkanDynamicAPI::vkCmdSetVertexInputEXT)
                (param_1->CommandBufferHandle,local_160,
                 (VkVertexInputBindingDescription2EXT *)FVar26,local_570,
                 (VkVertexInputAttributeDescription2EXT *)FVar23);
      pTVar7 = &(pFVar13->Desc).VertexAttributes;
      pTVar5 = &pFVar12->VertexAttributes;
      if (pTVar5 != pTVar7) {
        iVar18 = (pFVar13->Desc).VertexAttributes.ArrayNum;
        piVar1 = &(pFVar12->VertexAttributes).ArrayMax;
        pFVar30 = (pTVar7->AllocatorInstance).Data;
        (pFVar12->VertexAttributes).ArrayNum = iVar18;
        if ((iVar18 == 0) && (*piVar1 == 0)) {
          *piVar1 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,4,iVar18,*piVar1,&pTVar5->AllocatorInstance,iVar18,piVar1);
          if (iVar18 != 0) {
            memcpy((pTVar5->AllocatorInstance).Data,pFVar30,(longlong)iVar18 << 4);
          }
        }
      }
      pTVar32 = &(pFVar13->Desc).VertexBindings;
      pTVar31 = &pFVar12->VertexBindings;
      if (pTVar31 != pTVar32) {
        iVar18 = (pFVar13->Desc).VertexBindings.ArrayNum;
        piVar1 = &(pFVar12->VertexBindings).ArrayMax;
        pFVar30 = (pTVar32->AllocatorInstance).Data;
        (pFVar12->VertexBindings).ArrayNum = iVar18;
        if ((iVar18 == 0) && (*piVar1 == 0)) {
          *piVar1 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,iVar18,*piVar1,&pTVar31->AllocatorInstance,iVar18,piVar1);
          if (iVar18 != 0) {
            memcpy((pTVar31->AllocatorInstance).Data,pFVar30,(longlong)iVar18 << 3);
          }
        }
      }
      this->bDirtyDynamicVertexInput = false;
      if (local_978.SecondaryData != (ForElementType<VkVertexInputAttributeDescription2EXT>)0x0) {
        FMemory::Free((void *)local_978.SecondaryData);
      }
      if (local_568.SecondaryData != (ForElementType<VkVertexInputBindingDescription2EXT>)0x0) {
        FMemory::Free((void *)local_568.SecondaryData);
      }
LAB_145b83b03:
      if (local_9c8 == (FVulkanShader *)0x0) goto LAB_145b83b13;
    }
  }
  this->bDirtyDynamicVertexInput = true;
LAB_145b83b13:
  param_1->bNeedsFullDynamicStateUpdate = '\0';
  return;
}

// UpdateInputAttachments @ 145b83e60

/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "EStage": Some values do not have unique names */

void __thiscall
FVulkanPendingGfxState::UpdateInputAttachments
          (FVulkanPendingGfxState *this,FVulkanFramebuffer *param_1)

{
  FScriptContainerElement FVar1;
  FVulkanGraphicsPipelineState *pFVar2;
  FVulkanShader *pFVar3;
  FScriptContainerElement *pFVar4;
  FVulkanGraphicsPipelineDescriptorState *pFVar5;
  longlong lVar6;
  FVulkanView *pFVar7;
  code *pcVar8;
  bool bVar9;
  EStage EVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  
  pFVar2 = this->CurrentPipeline;
  EVar10 = ShaderStage::GetStageForFrequency(SF_Pixel);
  pFVar3 = pFVar2->VulkanShaders[(int)EVar10];
  if (pFVar3 != (FVulkanShader *)0x0) {
    iVar12 = (pFVar3->CodeHeader).InputAttachmentInfos.ArrayNum;
    uVar13 = 0;
    if (0 < iVar12) {
      lVar15 = 0;
      do {
        uVar14 = 0;
        if ((int)uVar13 < iVar12) {
          uVar14 = ~uVar13 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar4 = (pFVar3->CodeHeader).InputAttachmentInfos.AllocatorInstance.Data;
        FVar1 = pFVar4[lVar15 + 1];
        switch(FVar1) {
        case (FScriptContainerElement)0x0:
          pFVar5 = this->CurrentState;
          if ((param_1->PartialDepthTextureView == (FVulkanView *)0x0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("PartialDepthTextureView",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanFramebuffer.h"
                                 ,0x1d,L""), bVar9)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pFVar7 = param_1->PartialDepthTextureView;
          if (((pFVar7->Storage).TypeIndex != '\x02') &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index == TypeIndex",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                 ,0x97,L""), bVar9)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          FVulkanCommonPipelineDescriptorState::SetInputAttachment
                    ((FVulkanCommonPipelineDescriptorState *)pFVar5,'\x01',
                     (uint)(byte)pFVar4[lVar15],(FTextureView *)&pFVar7->Storage,
                     VK_IMAGE_LAYOUT_DEPTH_STENCIL_READ_ONLY_OPTIMAL);
          break;
        case (FScriptContainerElement)0x1:
        case (FScriptContainerElement)0x2:
        case (FScriptContainerElement)0x3:
        case (FScriptContainerElement)0x4:
        case (FScriptContainerElement)0x5:
        case (FScriptContainerElement)0x6:
        case (FScriptContainerElement)0x7:
        case (FScriptContainerElement)0x8:
          uVar14 = (byte)FVar1 - 1;
          if ((((int)uVar14 < 0) || ((int)param_1->NumColorAttachments <= (int)uVar14)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ColorIndex >= 0) && (ColorIndex < (int32)Framebuffer->GetNumColorAttachments())"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPendingState.cpp"
                                 ,0x331,L""), bVar9)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pFVar5 = this->CurrentState;
          uVar11 = 0;
          if ((int)uVar14 < (param_1->AttachmentTextureViews).ArrayNum) {
            uVar11 = ~uVar14 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          lVar6 = *(longlong *)
                   ((param_1->AttachmentTextureViews).AllocatorInstance.Data +
                   (ulonglong)(byte)FVar1 * 8 + -8);
          if ((*(char *)(lVar6 + 0x30) != '\x02') &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index == TypeIndex",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                 ,0x97,L""), bVar9)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          FVulkanCommonPipelineDescriptorState::SetInputAttachment
                    ((FVulkanCommonPipelineDescriptorState *)pFVar5,'\x01',
                     (uint)(byte)pFVar4[lVar15],(FTextureView *)(lVar6 + 0x18),
                     VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL);
          break;
        default:
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPendingState.cpp"
                             ,0x339,L"");
          if (bVar9) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
        iVar12 = (pFVar3->CodeHeader).InputAttachmentInfos.ArrayNum;
        uVar13 = uVar13 + 1;
        lVar15 = lVar15 + 2;
      } while ((int)uVar13 < iVar12);
    }
  }
  return;
}

// SetMultiViewport @ 145bd55f0

/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FVulkanPendingGfxState::SetMultiViewport
          (FVulkanPendingGfxState *this,TArrayView<VkViewport,int> *param_1)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  VkViewport *_Src;
  ForElementType<VkRect2D> FVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  ForElementType<VkViewport> _Dst;
  ForElementType<VkViewport> FVar8;
  ForElementType<VkRect2D> FVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  ForElementType<VkViewport> *pFVar13;
  longlong lVar14;
  
  iVar3 = param_1->ArrayNum;
  piVar1 = &(this->Viewports).ArrayMax;
  _Src = param_1->DataPtr;
  (this->Viewports).ArrayNum = iVar3;
  if ((iVar3 == 0) && (*piVar1 == 0)) {
    *piVar1 = 2;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<VkViewport>_>
              (0x18,4,iVar3,*piVar1,(ForElementType<VkViewport> *)this,iVar3,piVar1);
    FVar8 = (this->Viewports).AllocatorInstance.SecondaryData;
    _Dst = (ForElementType<VkViewport>)this;
    if (FVar8 != (ForElementType<VkViewport>)0x0) {
      _Dst = FVar8;
    }
    if (iVar3 != 0) {
      memcpy((void *)_Dst,_Src,(longlong)iVar3 * 0x18);
    }
  }
  pFVar13 = &(this->Viewports).AllocatorInstance.SecondaryData;
  TArray<VkRect2D,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::SetNumZeroed
            (&this->Scissors,(this->Viewports).ArrayNum,Default);
  uVar10 = 0;
  if (0 < (this->Scissors).ArrayNum) {
    lVar14 = 0;
    lVar12 = 0;
    do {
      uVar11 = ~uVar10 >> 0x1f;
      uVar7 = 0;
      if ((int)uVar10 < (this->Viewports).ArrayNum) {
        uVar7 = uVar11;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar8 = (ForElementType<VkViewport>)this;
      if (*pFVar13 != (ForElementType<VkViewport>)0x0) {
        FVar8 = *pFVar13;
      }
      fVar2 = *(float *)(lVar12 + (longlong)FVar8);
      uVar7 = 0;
      if ((int)uVar10 < (this->Scissors).ArrayNum) {
        uVar7 = uVar11;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar4 = (this->Scissors).AllocatorInstance.SecondaryData;
      FVar9 = (ForElementType<VkRect2D>)&this->Scissors;
      if (FVar4 != (ForElementType<VkRect2D>)0x0) {
        FVar9 = FVar4;
      }
      *(int *)((longlong)FVar9 + lVar14) = (int)fVar2;
      uVar7 = 0;
      if ((int)uVar10 < (this->Viewports).ArrayNum) {
        uVar7 = uVar11;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar8 = (ForElementType<VkViewport>)this;
      if (*pFVar13 != (ForElementType<VkViewport>)0x0) {
        FVar8 = *pFVar13;
      }
      fVar2 = *(float *)((uchar *)((longlong)FVar8 + 4) + lVar12);
      uVar7 = 0;
      if ((int)uVar10 < (this->Scissors).ArrayNum) {
        uVar7 = uVar11;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar4 = (this->Scissors).AllocatorInstance.SecondaryData;
      FVar9 = (ForElementType<VkRect2D>)&this->Scissors;
      if (FVar4 != (ForElementType<VkRect2D>)0x0) {
        FVar9 = FVar4;
      }
      *(int *)((longlong)FVar9 + 4 + lVar14) = (int)fVar2;
      uVar7 = 0;
      if ((int)uVar10 < (this->Viewports).ArrayNum) {
        uVar7 = uVar11;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar8 = (ForElementType<VkViewport>)this;
      if (*pFVar13 != (ForElementType<VkViewport>)0x0) {
        FVar8 = *pFVar13;
      }
      fVar2 = *(float *)((uchar *)((longlong)FVar8 + 8) + lVar12);
      uVar7 = 0;
      if ((int)uVar10 < (this->Scissors).ArrayNum) {
        uVar7 = uVar11;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar4 = (this->Scissors).AllocatorInstance.SecondaryData;
      FVar9 = (ForElementType<VkRect2D>)&this->Scissors;
      if (FVar4 != (ForElementType<VkRect2D>)0x0) {
        FVar9 = FVar4;
      }
      *(int *)((longlong)FVar9 + 8 + lVar14) = (int)(longlong)fVar2;
      uVar7 = 0;
      if ((int)uVar10 < (this->Viewports).ArrayNum) {
        uVar7 = uVar11;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar8 = (ForElementType<VkViewport>)this;
      if (*pFVar13 != (ForElementType<VkViewport>)0x0) {
        FVar8 = *pFVar13;
      }
      fVar2 = *(float *)((uchar *)((longlong)FVar8 + 0xc) + lVar12);
      uVar7 = 0;
      if ((int)uVar10 < (this->Scissors).ArrayNum) {
        uVar7 = uVar11;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar4 = (this->Scissors).AllocatorInstance.SecondaryData;
      FVar9 = (ForElementType<VkRect2D>)&this->Scissors;
      if (FVar4 != (ForElementType<VkRect2D>)0x0) {
        FVar9 = FVar4;
      }
      uVar10 = uVar10 + 1;
      lVar12 = lVar12 + 0x18;
      *(int *)((longlong)FVar9 + 0xc + lVar14) = (int)(longlong)fVar2;
      lVar14 = lVar14 + 0x10;
    } while ((int)uVar10 < (this->Scissors).ArrayNum);
  }
  this->bScissorEnable = true;
  return;
}

// SetScissor @ 145bd5b00

/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

void __thiscall
FVulkanPendingGfxState::SetScissor
          (FVulkanPendingGfxState *this,bool param_1,uint param_2,uint param_3,uint param_4,
          uint param_5)

{
  ForElementType<VkViewport> FVar1;
  code *pcVar2;
  bool bVar3;
  ForElementType<VkViewport> FVar4;
  uint uVar5;
  uint uVar6;
  
  if (param_1) {
    uVar6 = param_4 - param_2;
    uVar5 = param_5 - param_3;
  }
  else {
    if ((this->Viewports).ArrayNum < 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Viewports.Num() > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPendingState.h"
                         ,0xd3,L"At least one Viewport is expected to be configured.");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if ((this->Viewports).ArrayNum < 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    FVar1 = (this->Viewports).AllocatorInstance.SecondaryData;
    FVar4 = (ForElementType<VkViewport>)this;
    if (FVar1 != (ForElementType<VkViewport>)0x0) {
      FVar4 = FVar1;
    }
    uVar5 = (uint)(longlong)*(float *)((longlong)FVar4 + 0xc);
    if ((this->Viewports).ArrayNum < 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    FVar1 = (this->Viewports).AllocatorInstance.SecondaryData;
    FVar4 = (ForElementType<VkViewport>)this;
    if (FVar1 != (ForElementType<VkViewport>)0x0) {
      FVar4 = FVar1;
    }
    uVar6 = (uint)(longlong)*(float *)((longlong)FVar4 + 8);
    if ((this->Viewports).ArrayNum < 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    FVar1 = (this->Viewports).AllocatorInstance.SecondaryData;
    FVar4 = (ForElementType<VkViewport>)this;
    if (FVar1 != (ForElementType<VkViewport>)0x0) {
      FVar4 = FVar1;
    }
    param_3 = (uint)(longlong)*(float *)((longlong)FVar4 + 4);
    if ((this->Viewports).ArrayNum < 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    FVar1 = (this->Viewports).AllocatorInstance.SecondaryData;
    FVar4 = (ForElementType<VkViewport>)this;
    if (FVar1 != (ForElementType<VkViewport>)0x0) {
      FVar4 = FVar1;
    }
    param_2 = (uint)(longlong)*(float *)FVar4;
  }
  SetScissorRect(this,param_2,param_3,uVar6,uVar5);
  this->bScissorEnable = param_1;
  return;
}

// SetScissorRect @ 145bd5cd0

/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FVulkanPendingGfxState::SetScissorRect
          (FVulkanPendingGfxState *this,uint param_1,uint param_2,uint param_3,uint param_4)

{
  TArray<VkRect2D,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *this_00;
  code *pcVar1;
  bool bVar2;
  ForElementType<VkRect2D> FVar3;
  
  this_00 = &this->Scissors;
  TArray<VkRect2D,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::SetNumZeroed
            (this_00,1,Default);
  if ((this->Scissors).ArrayNum < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FVar3 = (this->Scissors).AllocatorInstance.SecondaryData;
  if (FVar3 == (ForElementType<VkRect2D>)0x0) {
    FVar3 = (ForElementType<VkRect2D>)this_00;
  }
  *(uint *)FVar3 = param_1;
  if ((this->Scissors).ArrayNum < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FVar3 = (this->Scissors).AllocatorInstance.SecondaryData;
  if (FVar3 == (ForElementType<VkRect2D>)0x0) {
    FVar3 = (ForElementType<VkRect2D>)this_00;
  }
  *(uint *)((longlong)FVar3 + 4) = param_2;
  if ((this->Scissors).ArrayNum < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FVar3 = (this->Scissors).AllocatorInstance.SecondaryData;
  if (FVar3 == (ForElementType<VkRect2D>)0x0) {
    FVar3 = (ForElementType<VkRect2D>)this_00;
  }
  *(uint *)((longlong)FVar3 + 8) = param_3;
  if ((this->Scissors).ArrayNum < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FVar3 = (this->Scissors).AllocatorInstance.SecondaryData;
  if (FVar3 == (ForElementType<VkRect2D>)0x0) {
    FVar3 = (ForElementType<VkRect2D>)this_00;
  }
  *(uint *)((longlong)FVar3 + 0xc) = param_4;
  return;
}

