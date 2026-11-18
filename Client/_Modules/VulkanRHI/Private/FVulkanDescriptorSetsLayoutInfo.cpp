// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 11

// FinalizeBindings<1> @ 145af8930

/* WARNING: Enum "VkPipelineBindPoint": Some values do not have unique names */
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

void __thiscall
FVulkanDescriptorSetsLayoutInfo::FinalizeBindings<1>
          (FVulkanDescriptorSetsLayoutInfo *this,FVulkanDevice *param_1,
          FUniformBufferGatherInfo *param_2,TArrayView<FRHISamplerState_*,int> *param_3,bool param_4
          )

{
  int *piVar1;
  uint uVar2;
  FVulkanShaderHeader *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  TConsoleVariableData<int> *pTVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  VkDescriptorType VVar11;
  longlong lVar12;
  uint *puVar13;
  int iVar14;
  uint uVar15;
  VkDescriptorType VVar16;
  VkDescriptorType local_58;
  VkDescriptorType local_54;
  VkDescriptorType local_50 [2];
  VkDescriptorSetLayoutBinding local_48;
  
  pTVar6 = GDynamicGlobalUBs.Ref;
  local_48.pImmutableSamplers = (VkSampler_T **)0x0;
  local_48.binding = 0;
  local_48.descriptorType = VK_DESCRIPTOR_TYPE_SAMPLER;
  local_48.descriptorCount = 1;
  local_48.stageFlags = 0;
  if (!param_4) {
    bVar7 = IsInParallelGameThread();
    if ((bVar7) || (bVar7 = IsInGameThread(), bVar7)) {
      lVar12 = 0;
    }
    else {
      lVar12 = 4;
    }
    if (1 < *(int *)((longlong)pTVar6->ShadowedValue + lVar12)) {
      bVar7 = true;
      VVar16 = VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER_DYNAMIC;
      goto LAB_145af89ee;
    }
  }
  pTVar6 = GDynamicGlobalUBs.Ref;
  bVar7 = false;
  if (!param_4) {
    bVar8 = IsInParallelGameThread();
    if ((bVar8) || (bVar8 = IsInGameThread(), bVar8)) {
      lVar12 = 0;
    }
    else {
      lVar12 = 4;
    }
    if (*(int *)((longlong)pTVar6->ShadowedValue + lVar12) == 1) {
      VVar16 = VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER_DYNAMIC;
      goto LAB_145af89ee;
    }
  }
  VVar16 = VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER;
LAB_145af89ee:
  pFVar3 = param_2->CodeHeaders[0];
  uVar2 = (param_1->GpuProps).limits.maxDescriptorSetUniformBuffersDynamic;
  if (pFVar3 != (FVulkanShaderHeader *)0x0) {
    local_48.stageFlags = 0x20;
    uVar15 = 0;
    (this->StageInfos).Elements[0].PackedGlobalsSize = pFVar3->PackedGlobalsSize;
    (this->StageInfos).Elements[0].NumBoundUniformBuffers = pFVar3->NumBoundUniformBuffers;
    iVar14 = (pFVar3->Bindings).ArrayNum;
    if (0 < iVar14) {
      lVar12 = 0;
      do {
        uVar10 = 0;
        if ((int)uVar15 < iVar14) {
          uVar10 = ~uVar15 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_50[0] = *(VkDescriptorType *)((pFVar3->Bindings).AllocatorInstance.Data + lVar12);
        if (local_50[0] == VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER) {
          if ((pFVar3->PackedGlobalsSize != 0) && (uVar15 == 0)) {
            pFVar4 = (this->StageInfos).Elements[0].Types.AllocatorInstance.Data;
            local_54 = VVar16;
            if ((pFVar4 <= (FScriptContainerElement *)&local_54) &&
               (((FScriptContainerElement *)&local_54 <
                 pFVar4 + (longlong)(this->StageInfos).Elements[0].Types.ArrayMax * 4 &&
                (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar8)))) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            uVar9 = (this->StageInfos).Elements[0].Types.ArrayNum;
            piVar1 = &(this->StageInfos).Elements[0].Types.ArrayMax;
            if (uVar9 == *piVar1) {
              uVar9 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x404,(ForAnyElementType *)this,piVar1);
            }
            pFVar4 = (this->StageInfos).Elements[0].Types.AllocatorInstance.Data;
            (this->StageInfos).Elements[0].Types.ArrayNum = uVar9 + 1;
            *(VkDescriptorType *)(pFVar4 + (longlong)(int)uVar9 * 4) = local_54;
            VVar11 = local_54;
            if ((uVar9 != 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("NewBindingIndex == 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanDescriptorSets.cpp"
                                   ,0x39,L"Packed globals should always be the first binding!"),
               VVar11 = local_54, bVar8)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            goto LAB_145af8d79;
          }
          local_58 = VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER;
          if ((bVar7) &&
             (puVar13 = TMapBase<enum_VkDescriptorType,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_VkDescriptorType,unsigned_int,0>_>
                        ::FindChecked(&this->LayoutTypes,VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER_DYNAMIC),
             *puVar13 < uVar2)) {
            local_58 = VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER_DYNAMIC;
          }
          local_48.descriptorType = local_58;
          uVar10 = 0;
          if ((int)uVar15 < (pFVar3->UniformBufferInfos).ArrayNum) {
            uVar10 = ~uVar15 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if ((int)uVar15 < (int)pFVar3->NumBoundUniformBuffers) {
            pFVar4 = (this->StageInfos).Elements[0].Types.AllocatorInstance.Data;
            if (((pFVar4 <= (FScriptContainerElement *)&local_58) &&
                ((FScriptContainerElement *)&local_58 <
                 pFVar4 + (longlong)(this->StageInfos).Elements[0].Types.ArrayMax * 4)) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar8)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            uVar10 = (this->StageInfos).Elements[0].Types.ArrayNum;
            piVar1 = &(this->StageInfos).Elements[0].Types.ArrayMax;
            if (uVar10 == *piVar1) {
              uVar10 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,(ForAnyElementType *)this,piVar1);
            }
            pFVar4 = (this->StageInfos).Elements[0].Types.AllocatorInstance.Data;
            (this->StageInfos).Elements[0].Types.ArrayNum = uVar10 + 1;
            *(VkDescriptorType *)(pFVar4 + (longlong)(int)uVar10 * 4) = local_58;
            if ((uVar10 != uVar15) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("NewBindingIndex == BindingIndex",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanDescriptorSets.cpp"
                                   ,0x4e,L""), bVar8)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            local_48.binding = uVar10;
            goto LAB_145af8d7c;
          }
        }
        else {
          pFVar4 = (this->StageInfos).Elements[0].Types.AllocatorInstance.Data;
          if (((pFVar4 <= (FScriptContainerElement *)local_50) &&
              ((FScriptContainerElement *)local_50 <
               pFVar4 + (longlong)(this->StageInfos).Elements[0].Types.ArrayMax * 4)) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar10 = (this->StageInfos).Elements[0].Types.ArrayNum;
          piVar1 = &(this->StageInfos).Elements[0].Types.ArrayMax;
          if (uVar10 == *piVar1) {
            uVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,(ForAnyElementType *)this,piVar1);
          }
          pFVar4 = (this->StageInfos).Elements[0].Types.AllocatorInstance.Data;
          (this->StageInfos).Elements[0].Types.ArrayNum = uVar10 + 1;
          *(VkDescriptorType *)(pFVar4 + (longlong)(int)uVar10 * 4) = local_50[0];
          VVar11 = local_50[0];
          uVar9 = uVar15;
          if ((uVar10 != uVar15) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("NewTypeIndex == BindingIndex",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanDescriptorSets.cpp"
                                 ,0x56,L""), VVar11 = local_50[0], bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
LAB_145af8d79:
          local_48.descriptorType = VVar11;
          local_48.binding = uVar9;
LAB_145af8d7c:
          AddDescriptor(this,0,&local_48);
        }
        iVar14 = (pFVar3->Bindings).ArrayNum;
        uVar15 = uVar15 + 1;
        lVar12 = lVar12 + 4;
      } while ((int)uVar15 < iVar14);
    }
  }
  CompileTypesUsageID(this);
  GenerateHash(this,param_3,VK_PIPELINE_BIND_POINT_COMPUTE);
  return;
}

// FinalizeBindings<0> @ 145af8de0

/* WARNING: Enum "VkPipelineBindPoint": Some values do not have unique names */
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

void __thiscall
FVulkanDescriptorSetsLayoutInfo::FinalizeBindings<0>
          (FVulkanDescriptorSetsLayoutInfo *this,FVulkanDevice *param_1,
          FUniformBufferGatherInfo *param_2,TArrayView<FRHISamplerState_*,int> *param_3,bool param_4
          )

{
  FVulkanShaderHeader *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  TConsoleVariableData<int> *pTVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  VkDescriptorType VVar9;
  longlong lVar10;
  uint *puVar11;
  int iVar12;
  int *piVar13;
  int iVar14;
  uint uVar15;
  VkDescriptorType local_res10;
  VkDescriptorType local_78;
  VkDescriptorType local_74;
  VkDescriptorType local_70;
  uint local_6c;
  VkDescriptorSetLayoutBinding local_68;
  
  pTVar4 = GDynamicGlobalUBs.Ref;
  local_68.pImmutableSamplers = (VkSampler_T **)0x0;
  local_68.binding = 0;
  local_68.descriptorType = VK_DESCRIPTOR_TYPE_SAMPLER;
  local_68.descriptorCount = 1;
  local_68.stageFlags = 0;
  if (!param_4) {
    bVar5 = IsInParallelGameThread();
    if ((bVar5) || (bVar5 = IsInGameThread(), bVar5)) {
      lVar10 = 0;
    }
    else {
      lVar10 = 4;
    }
    if (1 < *(int *)((longlong)pTVar4->ShadowedValue + lVar10)) {
      bVar5 = true;
      local_res10 = VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER_DYNAMIC;
      goto LAB_145af8e9e;
    }
  }
  pTVar4 = GDynamicGlobalUBs.Ref;
  bVar5 = false;
  if (!param_4) {
    bVar6 = IsInParallelGameThread();
    if ((bVar6) || (bVar6 = IsInGameThread(), bVar6)) {
      lVar10 = 0;
    }
    else {
      lVar10 = 4;
    }
    if (*(int *)((longlong)pTVar4->ShadowedValue + lVar10) == 1) {
      local_res10 = VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER_DYNAMIC;
      goto LAB_145af8e9e;
    }
  }
  local_res10 = VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER;
LAB_145af8e9e:
  local_6c = (param_1->GpuProps).limits.maxDescriptorSetUniformBuffersDynamic;
  iVar14 = 0;
  piVar13 = &(this->StageInfos).Elements[0].Types.ArrayNum;
  do {
    pFVar1 = param_2->CodeHeaders[0];
    if (pFVar1 != (FVulkanShaderHeader *)0x0) {
      if (iVar14 == 0) {
        uVar15 = 1;
      }
      else if (iVar14 == 1) {
        uVar15 = 0x10;
      }
      else if (iVar14 == 2) {
        uVar15 = 8;
      }
      else if (iVar14 == 3) {
        uVar15 = 0x80;
      }
      else if (iVar14 == 4) {
        uVar15 = 0x40;
      }
      else {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Public\\VulkanCommon.h"
                           ,0x5e,L"Invalid graphic shader stage: %d");
        if (bVar6) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRHIPrivate.h"
                           ,0x45,L"Undefined shader stage %d");
        if (bVar6) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar15 = 0x7fffffff;
      }
      local_68.stageFlags = uVar15;
      uVar15 = 0;
      piVar13[2] = pFVar1->PackedGlobalsSize;
      piVar13[3] = pFVar1->NumBoundUniformBuffers;
      iVar12 = (pFVar1->Bindings).ArrayNum;
      if (0 < iVar12) {
        lVar10 = 0;
        do {
          uVar8 = 0;
          if ((int)uVar15 < iVar12) {
            uVar8 = ~uVar15 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          local_70 = *(VkDescriptorType *)((pFVar1->Bindings).AllocatorInstance.Data + lVar10);
          if (local_70 == VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER) {
            if ((pFVar1->PackedGlobalsSize != 0) && (uVar15 == 0)) {
              pFVar2 = (((TArray<VkDescriptorType,TSizedDefaultAllocator<32>_> *)(piVar13 + -2))->
                       AllocatorInstance).Data;
              local_74 = local_res10;
              if ((pFVar2 <= (FScriptContainerElement *)&local_74) &&
                 (((FScriptContainerElement *)&local_74 < pFVar2 + (longlong)piVar13[1] * 4 &&
                  (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar6)))) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              uVar7 = *piVar13;
              if (uVar7 == piVar13[1]) {
                uVar7 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x404,(ForAnyElementType *)(piVar13 + -2),piVar13 + 1);
              }
              pFVar2 = (((TArray<VkDescriptorType,TSizedDefaultAllocator<32>_> *)(piVar13 + -2))->
                       AllocatorInstance).Data;
              *piVar13 = uVar7 + 1;
              *(VkDescriptorType *)(pFVar2 + (longlong)(int)uVar7 * 4) = local_74;
              VVar9 = local_74;
              if ((uVar7 != 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("NewBindingIndex == 0",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanDescriptorSets.cpp"
                                     ,0x39,L"Packed globals should always be the first binding!"),
                 VVar9 = local_74, bVar6)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              goto LAB_145af92eb;
            }
            local_78 = VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER;
            if ((bVar5) &&
               (puVar11 = TMapBase<enum_VkDescriptorType,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_VkDescriptorType,unsigned_int,0>_>
                          ::FindChecked(&this->LayoutTypes,VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER_DYNAMIC
                                       ), *puVar11 < local_6c)) {
              local_78 = VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER_DYNAMIC;
            }
            local_68.descriptorType = local_78;
            uVar8 = 0;
            if ((int)uVar15 < (pFVar1->UniformBufferInfos).ArrayNum) {
              uVar8 = ~uVar15 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            if ((int)uVar15 < (int)pFVar1->NumBoundUniformBuffers) {
              pFVar2 = (((TArray<VkDescriptorType,TSizedDefaultAllocator<32>_> *)(piVar13 + -2))->
                       AllocatorInstance).Data;
              if (((pFVar2 <= (FScriptContainerElement *)&local_78) &&
                  ((FScriptContainerElement *)&local_78 < pFVar2 + (longlong)piVar13[1] * 4)) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar6)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              uVar8 = *piVar13;
              if (uVar8 == piVar13[1]) {
                uVar8 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x404,(ForAnyElementType *)(piVar13 + -2),piVar13 + 1);
              }
              pFVar2 = (((TArray<VkDescriptorType,TSizedDefaultAllocator<32>_> *)(piVar13 + -2))->
                       AllocatorInstance).Data;
              *piVar13 = uVar8 + 1;
              *(VkDescriptorType *)(pFVar2 + (longlong)(int)uVar8 * 4) = local_78;
              if ((uVar8 != uVar15) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("NewBindingIndex == BindingIndex",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanDescriptorSets.cpp"
                                     ,0x4e,L""), bVar6)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              local_68.binding = uVar8;
              goto LAB_145af92ee;
            }
          }
          else {
            pFVar2 = (((TArray<VkDescriptorType,TSizedDefaultAllocator<32>_> *)(piVar13 + -2))->
                     AllocatorInstance).Data;
            if (((pFVar2 <= (FScriptContainerElement *)&local_70) &&
                ((FScriptContainerElement *)&local_70 < pFVar2 + (longlong)piVar13[1] * 4)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar6)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            uVar8 = *piVar13;
            if (uVar8 == piVar13[1]) {
              uVar8 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x404,(ForAnyElementType *)(piVar13 + -2),piVar13 + 1);
            }
            pFVar2 = (((TArray<VkDescriptorType,TSizedDefaultAllocator<32>_> *)(piVar13 + -2))->
                     AllocatorInstance).Data;
            *piVar13 = uVar8 + 1;
            *(VkDescriptorType *)(pFVar2 + (longlong)(int)uVar8 * 4) = local_70;
            VVar9 = local_70;
            uVar7 = uVar15;
            if ((uVar8 != uVar15) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("NewTypeIndex == BindingIndex",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanDescriptorSets.cpp"
                                   ,0x56,L""), VVar9 = local_70, bVar6)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
LAB_145af92eb:
            local_68.descriptorType = VVar9;
            local_68.binding = uVar7;
LAB_145af92ee:
            AddDescriptor(this,iVar14,&local_68);
          }
          iVar12 = (pFVar1->Bindings).ArrayNum;
          uVar15 = uVar15 + 1;
          lVar10 = lVar10 + 4;
        } while ((int)uVar15 < iVar12);
      }
    }
    iVar14 = iVar14 + 1;
    param_2 = (FUniformBufferGatherInfo *)((longlong)param_2 + 8);
    piVar13 = piVar13 + 8;
    if (4 < iVar14) {
      CompileTypesUsageID(this);
      GenerateHash(this,param_3,VK_PIPELINE_BIND_POINT_GRAPHICS);
      return;
    }
  } while( true );
}

// FVulkanDescriptorSetsLayoutInfo @ 145b007c0

/* WARNING: Enum "VkPipelineBindPoint": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */

FVulkanDescriptorSetsLayoutInfo * __thiscall
FVulkanDescriptorSetsLayoutInfo::FVulkanDescriptorSetsLayoutInfo
          (FVulkanDescriptorSetsLayoutInfo *this)

{
  TMap<VkDescriptorType,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<VkDescriptorType,unsigned_int,0>_>
  *this_00;
  uint uVar1;
  uint local_res8 [2];
  uint local_res10 [4];
  uint *local_28;
  uint *local_20;
  
  uVar1 = 0;
  this_00 = &this->LayoutTypes;
  (this->StageInfos).Elements[0].Types.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28 = local_res10;
  (this->StageInfos).Elements[0].Types.ArrayNum = 0;
  (this->StageInfos).Elements[0].Types.ArrayMax = 0;
  (this->StageInfos).Elements[0].PackedGlobalsSize = 0;
  (this->StageInfos).Elements[0].NumBoundUniformBuffers = 0;
  (this->StageInfos).Elements[0].NumImageInfos = 0;
  (this->StageInfos).Elements[0].NumBufferInfos = 0;
  (this->StageInfos).Elements[0].NumAccelerationStructures = 0;
  (this->StageInfos).Elements[1].Types.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StageInfos).Elements[1].Types.ArrayNum = 0;
  (this->StageInfos).Elements[1].Types.ArrayMax = 0;
  (this->StageInfos).Elements[1].PackedGlobalsSize = 0;
  (this->StageInfos).Elements[1].NumBoundUniformBuffers = 0;
  (this->StageInfos).Elements[1].NumImageInfos = 0;
  (this->StageInfos).Elements[1].NumBufferInfos = 0;
  (this->StageInfos).Elements[1].NumAccelerationStructures = 0;
  (this->StageInfos).Elements[2].Types.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StageInfos).Elements[2].Types.ArrayNum = 0;
  (this->StageInfos).Elements[2].Types.ArrayMax = 0;
  (this->StageInfos).Elements[2].PackedGlobalsSize = 0;
  (this->StageInfos).Elements[2].NumBoundUniformBuffers = 0;
  (this->StageInfos).Elements[2].NumImageInfos = 0;
  (this->StageInfos).Elements[2].NumBufferInfos = 0;
  (this->StageInfos).Elements[2].NumAccelerationStructures = 0;
  (this->StageInfos).Elements[3].Types.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StageInfos).Elements[3].Types.ArrayNum = 0;
  (this->StageInfos).Elements[3].Types.ArrayMax = 0;
  (this->StageInfos).Elements[3].PackedGlobalsSize = 0;
  (this->StageInfos).Elements[3].NumBoundUniformBuffers = 0;
  (this->StageInfos).Elements[3].NumImageInfos = 0;
  (this->StageInfos).Elements[3].NumBufferInfos = 0;
  (this->StageInfos).Elements[3].NumAccelerationStructures = 0;
  (this->StageInfos).Elements[4].Types.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StageInfos).Elements[4].Types.ArrayNum = 0;
  (this->StageInfos).Elements[4].Types.ArrayMax = 0;
  (this->StageInfos).Elements[4].PackedGlobalsSize = 0;
  (this->StageInfos).Elements[4].NumBoundUniformBuffers = 0;
  (this->StageInfos).Elements[4].NumImageInfos = 0;
  (this->StageInfos).Elements[4].NumBufferInfos = 0;
  (this->StageInfos).Elements[4].NumAccelerationStructures = 0;
  (this->StageInfos).Elements[5].Types.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StageInfos).Elements[5].Types.ArrayNum = 0;
  (this->StageInfos).Elements[5].Types.ArrayMax = 0;
  (this->StageInfos).Elements[5].PackedGlobalsSize = 0;
  (this->StageInfos).Elements[5].NumBoundUniformBuffers = 0;
  (this->StageInfos).Elements[5].NumImageInfos = 0;
  (this->StageInfos).Elements[5].NumBufferInfos = 0;
  (this->StageInfos).Elements[5].NumAccelerationStructures = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->LayoutTypes).field_0x8 = 0;
  *(undefined8 *)&(this->LayoutTypes).field_0x20 = 0;
  *(undefined4 *)&(this->LayoutTypes).field_0x28 = 0;
  *(undefined4 *)&(this->LayoutTypes).field_0x2c = 0x80;
  *(undefined4 *)&(this->LayoutTypes).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->LayoutTypes).field_0x34 = 0;
  *(undefined8 *)&(this->LayoutTypes).field_0x40 = 0;
  *(undefined4 *)&(this->LayoutTypes).field_0x48 = 0;
  local_20 = local_res8;
  (this->SetLayouts).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SetLayouts).ArrayNum = 0;
  (this->SetLayouts).ArrayMax = 0;
  this->Hash = 0;
  this->TypesUsageID = 0xffffffff;
  this->BindPoint = VK_PIPELINE_BIND_POINT_MAX_ENUM;
  do {
    local_res8[0] = 0;
    local_res10[0] = uVar1;
    TSet<TTuple<enum_VkDescriptorType,unsigned_int>,TDefaultMapHashableKeyFuncs<enum_VkDescriptorType,unsigned_int,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<enum_VkDescriptorType_&&,unsigned_int_&&>_>
              (this_00,(TPairInitializer<VkDescriptorType_&&,unsigned_int_&&> *)(local_res10 + 2),
               (bool *)&local_28);
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0xb);
  local_28 = local_res8;
  local_res10[0] = 0;
  local_20 = local_res10;
  local_res8[0] = 0x3b9d13f0;
  TSet<TTuple<enum_VkDescriptorType,unsigned_int>,TDefaultMapHashableKeyFuncs<enum_VkDescriptorType,unsigned_int,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_VkDescriptorType_&&,unsigned_int_&&>_>
            (this_00,(TPairInitializer<VkDescriptorType_&&,unsigned_int_&&> *)(local_res10 + 2),
             (bool *)&local_28);
  return this;
}

// ~FVulkanDescriptorSetsLayoutInfo @ 145b055d0

/* WARNING: Enum "VkPipelineBindPoint": Some values do not have unique names */

void __thiscall
FVulkanDescriptorSetsLayoutInfo::~FVulkanDescriptorSetsLayoutInfo
          (FVulkanDescriptorSetsLayoutInfo *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  uint *puVar3;
  TMap<VkDescriptorType,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<VkDescriptorType,unsigned_int,0>_>
  *this_00;
  longlong lVar4;
  
  DestructItems<FVulkanDescriptorSetsLayoutInfo::FSetLayout,int>
            ((FSetLayout *)(this->SetLayouts).AllocatorInstance.Data,(this->SetLayouts).ArrayNum);
  pFVar1 = (this->SetLayouts).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this_00 = &this->LayoutTypes;
  *(undefined4 *)&(this->LayoutTypes).field_0x48 = 0;
  pvVar2 = *(void **)&(this->LayoutTypes).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_VkDescriptorType,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_VkDescriptorType,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (this_00);
  lVar4 = 6;
  do {
    puVar3 = (uint *)(this_00 + -1);
    this_00 = (TMap<VkDescriptorType,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<VkDescriptorType,unsigned_int,0>_>
               *)((longlong)(this_00 + -1) + 0x30);
    lVar4 = lVar4 + -1;
    if (*(void **)(puVar3 + 0xc) != (void *)0x0) {
      FMemory::Free(*(void **)(puVar3 + 0xc));
    }
  } while (lVar4 != 0);
  return;
}

// AddDescriptor @ 145b0a310

/* WARNING: Enum "VkPipelineBindPoint": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */

void __thiscall
FVulkanDescriptorSetsLayoutInfo::AddDescriptor
          (FVulkanDescriptorSetsLayoutInfo *this,int param_1,VkDescriptorSetLayoutBinding *param_2)

{
  TMap<VkDescriptorType,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<VkDescriptorType,unsigned_int,0>_>
  *this_00;
  int *piVar1;
  VkDescriptorType VVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  uint *puVar9;
  undefined1 *puVar10;
  uint uVar11;
  FStageInfo *pFVar12;
  uint uVar13;
  int iVar14;
  TPairInitializer<VkDescriptorType_const_&,unsigned_int_&&> local_res8;
  VkDescriptorType *local_38;
  uint **local_30;
  
  VVar2 = param_2->descriptorType;
  this_00 = &this->LayoutTypes;
  if (*(int *)&(this->LayoutTypes).field_0x8 != *(int *)&(this->LayoutTypes).field_0x34) {
    puVar10 = *(undefined1 **)&(this->LayoutTypes).field_0x40;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->LayoutTypes).field_0x38;
    }
    iVar14 = *(int *)(puVar10 +
                     (ulonglong)
                     (*(int *)&(this->LayoutTypes).field_0x48 -
                      VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER & VVar2) * 4);
    if (iVar14 != -1) {
      do {
        if (*(VkDescriptorType *)(*(longlong *)this_00 + (longlong)iVar14 * 0x10) == VVar2) {
          if (iVar14 != -1) {
            puVar9 = TMapBase<enum_VkDescriptorType,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_VkDescriptorType,unsigned_int,0>_>
                     ::FindChecked(this_00,VVar2);
            *puVar9 = *puVar9 + 1;
            goto LAB_145b0a3c5;
          }
          break;
        }
        iVar14 = *(int *)(*(longlong *)this_00 + 8 + (longlong)iVar14 * 0x10);
      } while (iVar14 != -1);
    }
  }
  local_38 = &param_2->descriptorType;
  local_30 = &local_res8.Value;
  local_res8.Value._0_4_ = 1;
  TSet<TTuple<enum_VkDescriptorType,unsigned_int>,TDefaultMapHashableKeyFuncs<enum_VkDescriptorType,unsigned_int,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_VkDescriptorType_const_&,unsigned_int_&&>_>
            (this_00,&local_res8,(bool *)&local_38);
LAB_145b0a3c5:
  piVar1 = &(this->SetLayouts).ArrayNum;
  iVar14 = *piVar1;
  if (iVar14 <= param_1) {
    uVar11 = param_1 + 1;
    if (iVar14 < (int)uVar11) {
      iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x18,8,uVar11 - iVar14,&(this->SetLayouts).AllocatorInstance,piVar1,
                         &(this->SetLayouts).ArrayMax);
      DefaultConstructItems<FVulkanDescriptorSetsLayoutInfo::FSetLayout,int>
                ((this->SetLayouts).AllocatorInstance.Data + (longlong)iVar8 * 0x18,uVar11 - iVar14)
      ;
    }
    else {
      if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
      }
      if ((int)uVar11 < iVar14) {
        uVar13 = iVar14 - uVar11;
        if (((int)(uVar13 | uVar11) < 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (uVar13 != 0) {
          TArray<FVulkanDescriptorSetsLayoutInfo::FSetLayout,TSizedDefaultAllocator<32>_>::
          RemoveAtImpl(&this->SetLayouts,uVar11,uVar13);
        }
      }
    }
  }
  uVar11 = 0;
  if (param_1 < (this->SetLayouts).ArrayNum) {
    uVar11 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar3 = (this->SetLayouts).AllocatorInstance.Data;
  uVar11 = *(uint *)(pFVar3 + (longlong)param_1 * 0x18 + 8);
  pFVar3 = pFVar3 + (longlong)param_1 * 0x18;
  if (uVar11 == *(uint *)(pFVar3 + 0xc)) {
    uVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x818,(ForAnyElementType *)pFVar3,(int *)(pFVar3 + 0xc));
  }
  *(uint *)&pFVar3[8].field_0x0 = uVar11 + 1;
  uVar13 = 0;
  if ((int)uVar11 < (int)(uVar11 + 1)) {
    uVar13 = ~uVar11 >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar6 = *(undefined8 *)&param_2->descriptorCount;
  pFVar12 = (this->StageInfos).Elements + (uint)param_1;
  pFVar4 = *(FScriptContainerElement **)&pFVar3->field_0x0;
  pFVar3 = pFVar4 + (longlong)(int)uVar11 * 0x18;
  *(undefined8 *)pFVar3 = *(undefined8 *)param_2;
  *(undefined8 *)(pFVar3 + 8) = uVar6;
  *(VkSampler_T ***)(pFVar4 + (longlong)(int)uVar11 * 0x18 + 0x10) = param_2->pImmutableSamplers;
  uVar11 = param_2->binding;
  uVar13 = 0;
  if ((int)uVar11 < (pFVar12->Types).ArrayNum) {
    uVar13 = ~uVar11 >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((*(VkDescriptorType *)((pFVar12->Types).AllocatorInstance.Data + (longlong)(int)uVar11 * 4) !=
       param_2->descriptorType) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("SetInfo.Types[Descriptor.binding] == Descriptor.descriptorType",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanDescriptorSets.cpp"
                         ,0x88,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  VVar2 = param_2->descriptorType;
  if ((int)VVar2 < 0x3b9d13f1) {
    if (VVar2 == VK_DESCRIPTOR_TYPE_ACCELERATION_STRUCTURE_KHR) {
      IncrementChecked<unsigned_short>(&pFVar12->NumAccelerationStructures);
      return;
    }
    switch(VVar2) {
    case VK_DESCRIPTOR_TYPE_SAMPLER:
    case VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER:
    case VK_DESCRIPTOR_TYPE_SAMPLED_IMAGE:
    case VK_DESCRIPTOR_TYPE_STORAGE_IMAGE:
    case VK_DESCRIPTOR_TYPE_INPUT_ATTACHMENT:
      IncrementChecked<unsigned_short>(&pFVar12->NumImageInfos);
      break;
    case VK_DESCRIPTOR_TYPE_UNIFORM_TEXEL_BUFFER:
    case VK_DESCRIPTOR_TYPE_STORAGE_TEXEL_BUFFER:
      break;
    case VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER:
    case VK_DESCRIPTOR_TYPE_STORAGE_BUFFER:
    case VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER_DYNAMIC:
      IncrementChecked<unsigned_short>(&pFVar12->NumBufferInfos);
      break;
    default:
      goto switchD_145b0a665_caseD_9;
    }
  }
  else {
switchD_145b0a665_caseD_9:
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanDescriptorSets.cpp"
                       ,0x9e,L"Unsupported descriptor type %d");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  return;
}

// CompileTypesUsageID @ 145b11150

/* WARNING: Enum "VkPipelineBindPoint": Some values do not have unique names */

void __thiscall
FVulkanDescriptorSetsLayoutInfo::CompileTypesUsageID(FVulkanDescriptorSetsLayoutInfo *this)

{
  TMap<VkDescriptorType,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<VkDescriptorType,unsigned_int,0>_>
  *this_00;
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  TMap<VkDescriptorType,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<VkDescriptorType,unsigned_int,0>_>
  *pTVar6;
  bool bVar7;
  uint *puVar8;
  longlong lVar9;
  uint *puVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined1 *puVar14;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  uint local_res20 [2];
  uint local_c8;
  TPairInitializer<unsigned_int_const_&,unsigned_int_&&> local_c4;
  uint uStack_b4;
  undefined1 *local_b0;
  undefined4 uStack_a8;
  int iStack_a4;
  int local_a0;
  int iStack_9c;
  int iStack_98;
  undefined4 uStack_94;
  int local_90;
  int local_8c;
  FKeyComparisonClass<_protected:_void___cdecl_FVulkanDescriptorSetsLayoutInfo::CompileTypesUsageID(void)_::_2_::<lambda_1>_>
  local_88;
  TMap<VkDescriptorType,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<VkDescriptorType,unsigned_int,0>_>
  *local_80;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_78;
  undefined8 uStack_58;
  uint *local_50;
  uint *local_48;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&GTypesUsageCS);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    atexit(`FVulkanDescriptorSetsLayoutInfo::CompileTypesUsageID'::__l2::
           _dynamic_atexit_destructor_for__GTypesUsageHashMap__);
    _Init_thread_footer(&::_TSS0);
  }
  local_88.Predicate.Predicate =
       (TDereferenceWrapper<VkDescriptorType,_protected:_void___cdecl_FVulkanDescriptorSetsLayoutInfo::CompileTypesUsageID(void)_::_2_::<lambda_1>_>
        )local_res10;
  this_00 = &this->LayoutTypes;
  TSet<TTuple<enum_VkDescriptorType,unsigned_int>,TDefaultMapHashableKeyFuncs<enum_VkDescriptorType,unsigned_int,0>,FDefaultSetAllocator>
  ::
  Sort<TSortableMapBase<enum_VkDescriptorType,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_VkDescriptorType,unsigned_int,0>_>::FKeyComparisonClass<_FVulkanDescriptorSetsLayoutInfo::CompileTypesUsageID_::__l2::<lambda_1>_>_>
            (this_00,&local_88);
  puVar1 = &(this->LayoutTypes).field_0x10;
  local_res20[0] = 0;
  local_c4.Value._4_4_ = 0;
  iVar3 = *(int *)&(this->LayoutTypes).field_0x28;
  uStack_b4 = 1;
  local_a0 = 0;
  iStack_a4 = 0;
  if (iVar3 != 0) {
    puVar10 = *(uint **)&(this->LayoutTypes).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)puVar1;
    }
    uVar13 = *puVar10;
    while (uVar13 == 0) {
      lVar9 = (longlong)local_c4.Value._4_4_;
      local_a0 = local_a0 + 0x20;
      local_c4.Value._4_4_ = local_c4.Value._4_4_ + 1;
      iStack_a4 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_c4.Value._4_4_)
      goto LAB_145b1124d;
      uVar13 = puVar10[lVar9 + 1];
    }
    uStack_b4 = -uVar13 & uVar13;
    uVar2 = (ulonglong)uStack_b4 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_90 = (int)lVar9;
    iStack_a4 = local_a0 + -1 + local_90;
    if (iVar3 < iStack_a4) {
      iStack_a4 = iVar3;
    }
  }
LAB_145b1124d:
  uVar13 = *(uint *)&(this->LayoutTypes).field_0x28;
  uVar12 = uVar13 & 0xffffffe0;
  iStack_98 = *(int *)&(this->LayoutTypes).field_0x8 - *(int *)&(this->LayoutTypes).field_0x34;
  uStack_a8 = 0xffffffff;
  TStack_78._padding_ = CONCAT44(uStack_b4,local_c4.Value._4_4_);
  TStack_78.CurrentBitIndex = iStack_a4;
  TStack_78.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar13 >> 5;
  TStack_78._28_4_ = iStack_a4;
  TStack_78.BaseBitIndex = local_a0;
  uStack_58 = CONCAT44(uStack_94,iStack_98);
  local_c4._4_8_ = this_00;
  local_b0 = puVar1;
  iStack_9c = iStack_a4;
  local_80 = this_00;
  TStack_78.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar4 = *(uint *)&(this->LayoutTypes).field_0x28;
  if (uVar13 != uVar4) {
    puVar14 = *(undefined1 **)&(this->LayoutTypes).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar11 * 4);
    while (uVar13 == 0) {
      lVar9 = (longlong)iVar11;
      uVar12 = uVar12 + 0x20;
      iVar11 = iVar11 + 1;
      uVar13 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_145b11350;
      uVar13 = *(uint *)(puVar14 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_8c = (int)lVar9;
    uVar13 = local_8c + -1 + uVar12;
    if ((int)uVar4 < (int)uVar13) {
      uVar13 = uVar4;
    }
  }
LAB_145b11350:
  while( true ) {
    pTVar6 = local_80;
    if (*(int *)&local_80->field_0x8 - *(int *)&local_80->field_0x34 != (int)uStack_58) {
      `TSparseArray<TSparseSetElement<TTuple<enum_VkDescriptorType,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_78.CurrentBitIndex == uVar13) &&
        (TStack_78.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar6 == this_00))
    break;
    local_res20[0] =
         (*FCrc::MemCrc32Func)
                   ((void *)((longlong)TStack_78.CurrentBitIndex * 0x10 + *(longlong *)pTVar6 + 4),4
                    ,local_res20[0]);
    TStack_78.UnvisitedBitMask = TStack_78.UnvisitedBitMask & ~TStack_78._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_78);
  }
  if (GTypesUsageHashMap._8_4_ != GTypesUsageHashMap._52_4_) {
    lVar9 = 0x154bdc428;
    if (GTypesUsageHashMap._64_8_ != 0) {
      lVar9 = GTypesUsageHashMap._64_8_;
    }
    uVar13 = *(uint *)(lVar9 + (ulonglong)(GTypesUsageHashMap._72_4_ - 1 & local_res20[0]) * 4);
    while (uVar13 != 0xffffffff) {
      puVar10 = (uint *)((longlong)(int)uVar13 * 0x10 + GTypesUsageHashMap._0_8_);
      if (*puVar10 == local_res20[0]) {
        puVar8 = puVar10 + 1;
        if (puVar10 == (uint *)0x0) {
          puVar8 = (uint *)0x0;
        }
        if (puVar8 != (uint *)0x0) goto LAB_145b1147e;
        break;
      }
      uVar13 = puVar10[2];
    }
  }
  local_c8 = GUniqueID;
  GUniqueID = GUniqueID + 1;
  local_50 = local_res20;
  local_48 = &local_c8;
  TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_const_&,unsigned_int_&&>_>
            ((TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
              *)&GTypesUsageHashMap,&local_c4,(bool *)&local_50);
  puVar8 = (uint *)(GTypesUsageHashMap._0_8_ + 4 + (longlong)(int)local_c4.Key * 0x10);
LAB_145b1147e:
  this->TypesUsageID = *puVar8;
  LeaveCriticalSection((LPCRITICAL_SECTION)&GTypesUsageCS);
  return;
}

// GenerateHash @ 145b1c820

/* WARNING: Enum "VkPipelineBindPoint": Some values do not have unique names */

void __thiscall
FVulkanDescriptorSetsLayoutInfo::GenerateHash
          (FVulkanDescriptorSetsLayoutInfo *this,TArrayView<FRHISamplerState_*,int> *param_1,
          VkPipelineBindPoint param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  longlong lVar9;
  longlong lVar10;
  
  uVar6 = (this->SetLayouts).ArrayNum;
  uVar4 = (*FCrc::MemCrc32Func)(&this->TypesUsageID,4,uVar6);
  uVar7 = 0;
  this->Hash = uVar4;
  if (0 < (int)uVar6) {
    lVar9 = 0;
    lVar10 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar7 < (this->SetLayouts).ArrayNum) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (this->SetLayouts).AllocatorInstance.Data;
      uVar4 = (*FCrc::MemCrc32Func)
                        (*(void **)(pFVar1 + lVar10),*(int *)(pFVar1 + lVar10 + 8) * 0x18,0);
      *(uint *)(pFVar1 + lVar10 + 0x10) = uVar4;
      uVar4 = this->Hash;
      uVar5 = 0;
      if ((int)uVar7 < (this->SetLayouts).ArrayNum) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar4 = (*FCrc::MemCrc32Func)
                        ((this->SetLayouts).AllocatorInstance.Data + lVar10 + 0x10,4,uVar4);
      uVar7 = uVar7 + 1;
      lVar9 = lVar9 + 1;
      lVar10 = lVar10 + 0x18;
      this->Hash = uVar4;
    } while (lVar9 < (int)uVar6);
  }
  if (param_2 == VK_PIPELINE_BIND_POINT_GRAPHICS) {
    lVar9 = 5;
  }
  else if (param_2 == VK_PIPELINE_BIND_POINT_COMPUTE) {
    lVar9 = 1;
  }
  else {
    if (param_2 != VK_PIPELINE_BIND_POINT_RAY_TRACING_KHR) goto LAB_145b1ca5e;
    lVar9 = 4;
  }
  puVar8 = &(this->StageInfos).Elements[0].NumBoundUniformBuffers;
  do {
    uVar6 = (*FCrc::MemCrc32Func)(puVar8 + -1,4,uVar4);
    this->Hash = uVar6;
    uVar6 = (*FCrc::MemCrc32Func)(puVar8,4,uVar6);
    this->Hash = uVar6;
    uVar6 = (*FCrc::MemCrc32Func)(puVar8 + 1,2,uVar6);
    this->Hash = uVar6;
    uVar6 = (*FCrc::MemCrc32Func)((ushort *)((longlong)puVar8 + 6),2,uVar6);
    this->Hash = uVar6;
    uVar6 = (*FCrc::MemCrc32Func)(puVar8 + 2,2,uVar6);
    this->Hash = uVar6;
    uVar4 = (*FCrc::MemCrc32Func)
                      ((((FStageInfo *)(puVar8 + -5))->Types).AllocatorInstance.Data,puVar8[-3] << 2
                       ,uVar6);
    puVar8 = puVar8 + 8;
    this->Hash = uVar4;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
LAB_145b1ca5e:
  this->BindPoint = param_2;
  uVar6 = (*FCrc::MemCrc32Func)(&this->BindPoint,4,uVar4);
  this->Hash = uVar6;
  return;
}

// ProcessBindingsForStage @ 145b2e4a0

/* WARNING: Enum "VkPipelineBindPoint": Some values do not have unique names */
/* WARNING: Enum "EStage": Some values do not have unique names */
/* WARNING: Enum "VkShaderStageFlagBits": Some values do not have unique names */

void __thiscall
FVulkanDescriptorSetsLayoutInfo::ProcessBindingsForStage
          (FVulkanDescriptorSetsLayoutInfo *this,VkShaderStageFlagBits param_1,EStage param_2,
          FVulkanShaderHeader *param_3,FUniformBufferGatherInfo *param_4)

{
  param_4->CodeHeaders[(int)param_2] = param_3;
  return;
}

// operator== @ 145b52d50

/* WARNING: Enum "VkPipelineBindPoint": Some values do not have unique names */

bool __thiscall
FVulkanDescriptorSetsLayoutInfo::operator==
          (FVulkanDescriptorSetsLayoutInfo *this,FVulkanDescriptorSetsLayoutInfo *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  
  if ((((param_1->Hash == this->Hash) && (param_1->BindPoint == this->BindPoint)) &&
      (iVar7 = (param_1->SetLayouts).ArrayNum, iVar7 == (this->SetLayouts).ArrayNum)) &&
     (param_1->TypesUsageID == this->TypesUsageID)) {
    uVar8 = 0;
    if (0 < iVar7) {
      lVar9 = 0;
      do {
        uVar6 = 0;
        if ((int)uVar8 < (param_1->SetLayouts).ArrayNum) {
          uVar6 = ~uVar8 >> 0x1f;
        }
        if (uVar6 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
        }
        pFVar1 = (param_1->SetLayouts).AllocatorInstance.Data;
        uVar6 = 0;
        if ((int)uVar8 < (this->SetLayouts).ArrayNum) {
          uVar6 = ~uVar8 >> 0x1f;
        }
        if (uVar6 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
        }
        pFVar2 = (this->SetLayouts).AllocatorInstance.Data;
        if (*(int *)(pFVar2 + lVar9 + 0x10) != *(int *)(pFVar1 + lVar9 + 0x10)) goto LAB_145b52ecb;
        iVar7 = *(int *)(pFVar1 + lVar9 + 8);
        if (*(int *)(pFVar2 + lVar9 + 8) != iVar7) goto LAB_145b52ecb;
        if (iVar7 != 0) {
          iVar7 = memcmp(*(void **)(pFVar2 + lVar9),*(void **)(pFVar1 + lVar9),
                         (longlong)iVar7 * 0x18);
          if (iVar7 != 0) goto LAB_145b52ecb;
        }
        uVar8 = uVar8 + 1;
        lVar9 = lVar9 + 0x18;
      } while ((int)uVar8 < (param_1->SetLayouts).ArrayNum);
    }
    bVar4 = TStaticArray<FVulkanDescriptorSetsLayoutInfo::FStageInfo,6,4294967295>::operator==
                      (&this->StageInfos,&param_1->StageInfos);
  }
  else {
LAB_145b52ecb:
    bVar4 = false;
  }
  return bVar4;
}

// CopyFrom @ 145b5f370

/* WARNING: Enum "VkPipelineBindPoint": Some values do not have unique names */

void __thiscall
FVulkanDescriptorSetsLayoutInfo::CopyFrom
          (FVulkanDescriptorSetsLayoutInfo *this,FVulkanDescriptorSetsLayoutInfo *param_1)

{
  int *piVar1;
  TArray<FVulkanDescriptorSetsLayoutInfo::FSetLayout,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FSetLayout *pFVar4;
  
  TSet<TTuple<enum_VkDescriptorType,unsigned_int>,TDefaultMapHashableKeyFuncs<enum_VkDescriptorType,unsigned_int,0>,FDefaultSetAllocator>
  ::operator=(&this->LayoutTypes,
              (TSet<TTuple<VkDescriptorType,unsigned_int>,TDefaultMapHashableKeyFuncs<VkDescriptorType,unsigned_int,0>,FDefaultSetAllocator>
               *)&param_1->LayoutTypes);
  pTVar2 = &this->SetLayouts;
  this->Hash = param_1->Hash;
  this->TypesUsageID = param_1->TypesUsageID;
  if (pTVar2 != &param_1->SetLayouts) {
    DestructItems<FVulkanDescriptorSetsLayoutInfo::FSetLayout,int>
              ((FSetLayout *)(pTVar2->AllocatorInstance).Data,(this->SetLayouts).ArrayNum);
    iVar3 = (param_1->SetLayouts).ArrayNum;
    piVar1 = &(this->SetLayouts).ArrayMax;
    pFVar4 = (FSetLayout *)(param_1->SetLayouts).AllocatorInstance.Data;
    (this->SetLayouts).ArrayNum = iVar3;
    if ((iVar3 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,iVar3,*piVar1,&pTVar2->AllocatorInstance,iVar3,piVar1);
      ConstructItems<FVulkanDescriptorSetsLayoutInfo::FSetLayout,FVulkanDescriptorSetsLayoutInfo::FSetLayout,int>
                ((pTVar2->AllocatorInstance).Data,pFVar4,iVar3);
    }
  }
  TStaticArray<FVulkanDescriptorSetsLayoutInfo::FStageInfo,6,4294967295>::operator=
            (&this->StageInfos,&param_1->StageInfos);
  return;
}

// GetTypesUsed @ 145b6b260

/* WARNING: Enum "VkPipelineBindPoint": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */

uint __thiscall
FVulkanDescriptorSetsLayoutInfo::GetTypesUsed
          (FVulkanDescriptorSetsLayoutInfo *this,VkDescriptorType param_1)

{
  longlong lVar1;
  int iVar2;
  uint *puVar3;
  undefined1 *puVar4;
  
  if (*(int *)&(this->LayoutTypes).field_0x8 != *(int *)&(this->LayoutTypes).field_0x34) {
    puVar4 = *(undefined1 **)&(this->LayoutTypes).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->LayoutTypes).field_0x38;
    }
    iVar2 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->LayoutTypes).field_0x48 -
                               VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER & param_1) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&this->LayoutTypes;
      do {
        if (*(VkDescriptorType *)(lVar1 + (longlong)iVar2 * 0x10) == param_1) {
          puVar3 = TMapBase<enum_VkDescriptorType,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_VkDescriptorType,unsigned_int,0>_>
                   ::FindChecked(&this->LayoutTypes,param_1);
          return *puVar3;
        }
        iVar2 = *(int *)(lVar1 + 8 + (longlong)iVar2 * 0x10);
      } while (iVar2 != -1);
    }
  }
  return 0;
}

