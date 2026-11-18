// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 17

// WriteBuffer<6> @ 145ad9cf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */

bool __thiscall
FVulkanDescriptorSetWriter::WriteBuffer<6>
          (FVulkanDescriptorSetWriter *this,uint param_1,VkBuffer_T *param_2,uint param_3,
          ulong64 param_4,ulong64 param_5,uint param_6)

{
  FVulkanHashableDescriptorInfo *pFVar1;
  VkDescriptorType VVar2;
  VkDescriptorBufferInfo *pVVar3;
  ulong64 uVar4;
  VkBuffer_T *pVVar5;
  ulong64 uVar6;
  code *pcVar7;
  wchar_t *pwVar8;
  bool bVar9;
  undefined1 uVar10;
  uint uVar11;
  char *_Str;
  size_t sVar12;
  bool bVar13;
  bool bVar14;
  undefined1 auStack_2c8 [32];
  uint local_2a8;
  wchar_t *local_2a0;
  wchar_t *local_298;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_2c8;
  if (this->NumWrites <= param_1) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("DescriptorIndex < NumWrites",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanDescriptorSets.h"
                       ,0x28a,L"");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      uVar10 = (*pcVar7)();
      return (bool)uVar10;
    }
  }
  SetWritten(this,param_1);
  VVar2 = this->WriteDescriptors[param_1].descriptorType;
  if (VVar2 != VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER) {
    _Str = string_VkDescriptorType(VVar2);
    local_288._padding_ = 0;
    if (_Str == (char *)0x0) {
      local_288.Ptr = (wchar_t *)0x0;
      local_288.StringLength = 0;
    }
    else {
      sVar12 = strlen(_Str);
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_288,_Str,(int)sVar12,Yes);
    }
    pwVar8 = local_288.Ptr;
    local_168._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_168,"VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER",0x21,Yes);
    local_2a0 = local_168.Ptr;
    local_2a8 = param_1;
    local_298 = pwVar8;
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("WriteDescriptors[DescriptorIndex].descriptorType == DescriptorType",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanDescriptorSets.h"
                       ,0x296,
                       L"DescriptorType mismatch at index %d: called WriteBuffer<%s> and was expecting %s."
                      );
    if ((void *)local_168._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_168._padding_);
    }
    if ((void *)local_288._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_288._padding_);
    }
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      uVar10 = (*pcVar7)();
      return (bool)uVar10;
    }
  }
  pVVar3 = this->WriteDescriptors[param_1].pBufferInfo;
  if (pVVar3 == (VkDescriptorBufferInfo *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("BufferInfo",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanDescriptorSets.h"
                       ,0x299,L"");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      uVar10 = (*pcVar7)();
      return (bool)uVar10;
    }
  }
  if ((int)GMaxRHIFeatureLevel < 2) {
    pFVar1 = this->HashableDescriptorInfos + param_1;
    if (param_3 == 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("HandleId > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanDescriptorSets.h"
                         ,0x29f,L"");
      if (bVar9) {
        pcVar7 = (code *)swi(3);
        uVar10 = (*pcVar7)();
        return (bool)uVar10;
      }
    }
    bVar13 = (pFVar1->Layout).Max0 != param_3;
    if (bVar13) {
      (pFVar1->Layout).Max0 = param_3;
      pVVar3->buffer = param_2;
    }
    uVar11 = (uint)param_4;
    bVar14 = (pFVar1->Layout).Max1 != uVar11;
    if (bVar14) {
      (pFVar1->Layout).Max1 = uVar11;
      pVVar3->offset = param_4;
    }
    uVar11 = (uint)param_5;
    bVar9 = (pFVar1->Layout).LayoutId != uVar11;
    if (bVar9) {
      (pFVar1->Layout).LayoutId = uVar11;
      pVVar3->range = param_5;
    }
    bVar9 = bVar9 || (bVar14 || bVar13);
    this->bIsKeyDirty = (bool)(this->bIsKeyDirty | bVar9);
  }
  else {
    uVar4 = pVVar3->offset;
    pVVar5 = pVVar3->buffer;
    pVVar3->offset = param_4;
    uVar6 = pVVar3->range;
    pVVar3->range = param_5;
    pVVar3->buffer = param_2;
    bVar9 = uVar6 != param_5 || uVar4 != param_4;
    if (pVVar5 != param_2) {
      bVar9 = true;
    }
  }
  return bVar9;
}

// WriteBuffer<8> @ 145ad9f80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */

bool __thiscall
FVulkanDescriptorSetWriter::WriteBuffer<8>
          (FVulkanDescriptorSetWriter *this,uint param_1,VkBuffer_T *param_2,uint param_3,
          ulong64 param_4,ulong64 param_5,uint param_6)

{
  FVulkanHashableDescriptorInfo *pFVar1;
  VkDescriptorType VVar2;
  VkDescriptorBufferInfo *pVVar3;
  ulong64 uVar4;
  VkBuffer_T *pVVar5;
  ulong64 uVar6;
  code *pcVar7;
  wchar_t *pwVar8;
  bool bVar9;
  undefined1 uVar10;
  uint uVar11;
  char *_Str;
  size_t sVar12;
  bool bVar13;
  bool bVar14;
  undefined1 auStack_2b8 [32];
  uint local_298;
  wchar_t *local_290;
  wchar_t *local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_2b8;
  if ((this->NumWrites <= param_1) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("DescriptorIndex < NumWrites",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanDescriptorSets.h"
                         ,0x28a,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    uVar10 = (*pcVar7)();
    return (bool)uVar10;
  }
  SetWritten(this,param_1);
  VVar2 = this->WriteDescriptors[param_1].descriptorType;
  if (VVar2 != VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER_DYNAMIC) {
    _Str = string_VkDescriptorType(VVar2);
    local_278._padding_ = 0;
    if (_Str == (char *)0x0) {
      local_278.Ptr = (wchar_t *)0x0;
      local_278.StringLength = 0;
    }
    else {
      sVar12 = strlen(_Str);
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_278,_Str,(int)sVar12,Yes);
    }
    pwVar8 = local_278.Ptr;
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER_DYNAMIC",0x29,Yes);
    local_290 = local_158.Ptr;
    local_298 = param_1;
    local_288 = pwVar8;
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("WriteDescriptors[DescriptorIndex].descriptorType == DescriptorType",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanDescriptorSets.h"
                       ,0x296,
                       L"DescriptorType mismatch at index %d: called WriteBuffer<%s> and was expecting %s."
                      );
    if ((void *)local_158._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_158._padding_);
    }
    if ((void *)local_278._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_278._padding_);
    }
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      uVar10 = (*pcVar7)();
      return (bool)uVar10;
    }
  }
  pVVar3 = this->WriteDescriptors[param_1].pBufferInfo;
  if ((pVVar3 == (VkDescriptorBufferInfo *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("BufferInfo",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanDescriptorSets.h"
                         ,0x299,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    uVar10 = (*pcVar7)();
    return (bool)uVar10;
  }
  if ((int)GMaxRHIFeatureLevel < 2) {
    pFVar1 = this->HashableDescriptorInfos + param_1;
    if ((param_3 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("HandleId > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanDescriptorSets.h"
                           ,0x29f,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      uVar10 = (*pcVar7)();
      return (bool)uVar10;
    }
    bVar13 = (pFVar1->Layout).Max0 != param_3;
    if (bVar13) {
      (pFVar1->Layout).Max0 = param_3;
      pVVar3->buffer = param_2;
    }
    uVar11 = (uint)param_4;
    bVar14 = (pFVar1->Layout).Max1 != uVar11;
    if (bVar14) {
      (pFVar1->Layout).Max1 = uVar11;
      pVVar3->offset = param_4;
    }
    uVar11 = (uint)param_5;
    bVar9 = (pFVar1->Layout).LayoutId != uVar11;
    if (bVar9) {
      (pFVar1->Layout).LayoutId = uVar11;
      pVVar3->range = param_5;
    }
    bVar9 = bVar9 || (bVar14 || bVar13);
    this->bIsKeyDirty = (bool)(this->bIsKeyDirty | bVar9);
  }
  else {
    uVar4 = pVVar3->offset;
    pVVar5 = pVVar3->buffer;
    pVVar3->offset = param_4;
    uVar6 = pVVar3->range;
    pVVar3->buffer = param_2;
    pVVar3->range = param_5;
    bVar9 = uVar6 != param_5 || uVar4 != param_4;
    if (pVVar5 != param_2) {
      bVar9 = true;
    }
  }
  this->DynamicOffsets[this->BindingToDynamicOffsetMap[param_1]] = param_6;
  return bVar9;
}

// WriteTextureView<2> @ 145ada240

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */

bool __thiscall
FVulkanDescriptorSetWriter::WriteTextureView<2>
          (FVulkanDescriptorSetWriter *this,uint param_1,FTextureView *param_2,VkImageLayout param_3
          )

{
  uint uVar1;
  VkImageLayout VVar2;
  VkDescriptorImageInfo *pVVar3;
  FVulkanHashableDescriptorInfo *pFVar4;
  VkImageView_T *pVVar5;
  VkImageView_T *pVVar6;
  code *pcVar7;
  uint uVar8;
  bool bVar9;
  undefined1 uVar10;
  bool bVar11;
  VkImageLayout local_res20 [2];
  uint local_48 [2];
  VkImageLayout *local_40;
  uint *local_38;
  FVulkanDescriptorSetWriter *local_30;
  
  local_res20[0] = param_3;
  local_48[0] = param_1;
  if ((this->NumWrites <= param_1) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("DescriptorIndex < NumWrites",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanDescriptorSets.h"
                         ,0x2c6,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    uVar10 = (*pcVar7)();
    return (bool)uVar10;
  }
  SetWritten(this,local_48[0]);
  if ((1 < this->WriteDescriptors[local_48[0]].descriptorType -
           VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("WriteDescriptors[DescriptorIndex].descriptorType == VK_DESCRIPTOR_TYPE_SAMPLED_IMAGE || WriteDescriptors[DescriptorIndex].descriptorType == VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanDescriptorSets.h"
                         ,0x2cc,
                         L"DescriptorType mismatch at index %d: called WriteTextureView<%d> and was expecting %d."
                        ), bVar9)) {
    pcVar7 = (code *)swi(3);
    uVar10 = (*pcVar7)();
    return (bool)uVar10;
  }
  if ((((local_res20[0] != VK_IMAGE_LAYOUT_READ_ONLY_OPTIMAL) &&
       (local_res20[0] != VK_IMAGE_LAYOUT_SHARED_PRESENT_KHR)) && (1 < local_res20[0] + 0xc4636cf8))
     && ((1 < local_res20[0] - VK_IMAGE_LAYOUT_DEPTH_STENCIL_READ_ONLY_OPTIMAL &&
         (local_res20[0] != VK_IMAGE_LAYOUT_GENERAL)))) {
    local_40 = local_res20;
    local_38 = local_48;
    local_30 = this;
    `FVulkanDescriptorSetWriter::WriteTextureView<2>'::__l12::<lambda_1>::operator()(&local_40);
  }
  pVVar3 = this->WriteDescriptors[local_48[0]].pImageInfo;
  if ((pVVar3 == (VkDescriptorImageInfo *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("ImageInfo",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanDescriptorSets.h"
                         ,0x2dd,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    uVar10 = (*pcVar7)();
    return (bool)uVar10;
  }
  uVar8 = local_48[0];
  if (1 < (int)GMaxRHIFeatureLevel) {
    pVVar5 = param_2->View;
    pVVar6 = pVVar3->imageView;
    pVVar3->imageView = pVVar5;
    VVar2 = pVVar3->imageLayout;
    pVVar3->imageLayout = local_res20[0];
    return pVVar6 != pVVar5 || VVar2 != local_res20[0];
  }
  pFVar4 = this->HashableDescriptorInfos;
  if ((param_2->ViewId == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("TextureView.ViewId > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanDescriptorSets.h"
                         ,0x2e3,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    uVar10 = (*pcVar7)();
    return (bool)uVar10;
  }
  uVar1 = param_2->ViewId;
  bVar9 = (&pFVar4->Layout)[uVar8].Max1 != uVar1;
  if (bVar9) {
    (&pFVar4->Layout)[uVar8].Max1 = uVar1;
    pVVar3->imageView = param_2->View;
  }
  bVar11 = (&pFVar4->Layout)[uVar8].LayoutId != local_res20[0];
  if (bVar11) {
    (&pFVar4->Layout)[uVar8].LayoutId = local_res20[0];
    pVVar3->imageLayout = local_res20[0];
  }
  bVar11 = bVar11 || bVar9;
  this->bIsKeyDirty = (bool)(this->bIsKeyDirty | bVar11);
  return bVar11;
}

// WriteTextureView<3> @ 145ada460

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */

bool __thiscall
FVulkanDescriptorSetWriter::WriteTextureView<3>
          (FVulkanDescriptorSetWriter *this,uint param_1,FTextureView *param_2,VkImageLayout param_3
          )

{
  VkDescriptorType VVar1;
  uint uVar2;
  VkImageLayout VVar3;
  VkDescriptorImageInfo *pVVar4;
  FVulkanHashableDescriptorInfo *pFVar5;
  VkImageView_T *pVVar6;
  VkImageView_T *pVVar7;
  code *pcVar8;
  wchar_t *pwVar9;
  bool bVar10;
  undefined1 uVar11;
  char *_Str;
  size_t sVar12;
  bool bVar13;
  undefined1 auStack_2b8 [32];
  uint local_298;
  wchar_t *local_290;
  wchar_t *local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_2b8;
  if (this->NumWrites <= param_1) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("DescriptorIndex < NumWrites",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanDescriptorSets.h"
                        ,0x2c6,L"");
    if (bVar10) {
      pcVar8 = (code *)swi(3);
      uVar11 = (*pcVar8)();
      return (bool)uVar11;
    }
  }
  SetWritten(this,param_1);
  VVar1 = this->WriteDescriptors[param_1].descriptorType;
  if (VVar1 != VK_DESCRIPTOR_TYPE_STORAGE_IMAGE) {
    _Str = string_VkDescriptorType(VVar1);
    local_278._padding_ = 0;
    if (_Str == (char *)0x0) {
      local_278.Ptr = (wchar_t *)0x0;
      local_278.StringLength = 0;
    }
    else {
      sVar12 = strlen(_Str);
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_278,_Str,(int)sVar12,Yes);
    }
    pwVar9 = local_278.Ptr;
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"VK_DESCRIPTOR_TYPE_STORAGE_IMAGE",0x20,Yes);
    local_290 = local_158.Ptr;
    local_298 = param_1;
    local_288 = pwVar9;
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("WriteDescriptors[DescriptorIndex].descriptorType == DescriptorType",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanDescriptorSets.h"
                        ,0x2da,
                        L"DescriptorType mismatch at index %d: called WriteTextureView<%s> and was expecting %s."
                       );
    if ((void *)local_158._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_158._padding_);
    }
    if ((void *)local_278._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_278._padding_);
    }
    if (bVar10) {
      pcVar8 = (code *)swi(3);
      uVar11 = (*pcVar8)();
      return (bool)uVar11;
    }
  }
  pVVar4 = this->WriteDescriptors[param_1].pImageInfo;
  if (pVVar4 == (VkDescriptorImageInfo *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("ImageInfo",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanDescriptorSets.h"
                        ,0x2dd,L"");
    if (bVar10) {
      pcVar8 = (code *)swi(3);
      uVar11 = (*pcVar8)();
      return (bool)uVar11;
    }
  }
  if ((int)GMaxRHIFeatureLevel < 2) {
    pFVar5 = this->HashableDescriptorInfos;
    if (param_2->ViewId == 0) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("TextureView.ViewId > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanDescriptorSets.h"
                          ,0x2e3,L"");
      if (bVar10) {
        pcVar8 = (code *)swi(3);
        uVar11 = (*pcVar8)();
        return (bool)uVar11;
      }
    }
    uVar2 = param_2->ViewId;
    bVar13 = (&pFVar5->Layout)[param_1].Max1 != uVar2;
    if (bVar13) {
      (&pFVar5->Layout)[param_1].Max1 = uVar2;
      pVVar4->imageView = param_2->View;
    }
    bVar10 = (&pFVar5->Layout)[param_1].LayoutId != param_3;
    if (bVar10) {
      (&pFVar5->Layout)[param_1].LayoutId = param_3;
      pVVar4->imageLayout = param_3;
    }
    bVar10 = bVar10 || bVar13;
    this->bIsKeyDirty = (bool)(this->bIsKeyDirty | bVar10);
  }
  else {
    pVVar6 = param_2->View;
    pVVar7 = pVVar4->imageView;
    pVVar4->imageView = pVVar6;
    VVar3 = pVVar4->imageLayout;
    pVVar4->imageLayout = param_3;
    bVar10 = pVVar7 != pVVar6 || VVar3 != param_3;
  }
  return bVar10;
}

// CheckAllWritten @ 145b0fb70

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FVulkanDescriptorSetWriter::CheckAllWritten(FVulkanDescriptorSetWriter *this)

{
  TArray<unsigned_int,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *pTVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  ForElementType<unsigned_int> FVar8;
  ForElementType<unsigned_int> FVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  FString *local_res18;
  FString local_68;
  FString local_58;
  FString local_48;
  
  uVar2 = this->NumWrites;
  if (uVar2 == 0) {
    return;
  }
  iVar3 = (this->WrittenMask).ArrayNum;
  pTVar1 = &this->WrittenMask;
  bVar5 = false;
  uVar15 = 0;
  uVar7 = 0;
  if (uVar2 < 0x21) {
    if ((iVar3 < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FVar8 = (this->WrittenMask).AllocatorInstance.SecondaryData;
    if (FVar8 == (ForElementType<unsigned_int>)0x0) {
      FVar8 = (ForElementType<unsigned_int>)pTVar1;
    }
    if ((ulonglong)*(uint *)FVar8 == (1L << ((byte)uVar2 & 0x3f)) - 1U) {
      return;
    }
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Data.ArrayNum = 0;
    local_58.Data.ArrayMax = 0;
    if (uVar2 == 0) goto LAB_145b0ff68;
  }
  else {
    uVar13 = iVar3 - 1;
    uVar12 = uVar15;
    for (uVar14 = uVar15; (longlong)uVar14 < (longlong)iVar3 + -1; uVar14 = uVar14 + 1) {
      uVar10 = (uint)uVar12;
      uVar16 = uVar7;
      if ((int)uVar10 < (this->WrittenMask).ArrayNum) {
        uVar16 = ~uVar10 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar8 = (this->WrittenMask).AllocatorInstance.SecondaryData;
      FVar9 = (ForElementType<unsigned_int>)pTVar1;
      if (FVar8 != (ForElementType<unsigned_int>)0x0) {
        FVar9 = FVar8;
      }
      if (*(int *)((longlong)FVar9 + uVar14 * 4) != -1) {
        bVar5 = true;
        break;
      }
      uVar12 = (ulonglong)(uVar10 + 1);
    }
    iVar11 = uVar2 + uVar13 * -0x20;
    if ((iVar11 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("TailCount != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanDescriptorSets.cpp"
                           ,0x1d4,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (!bVar5) {
      uVar16 = uVar7;
      if ((int)uVar13 < (this->WrittenMask).ArrayNum) {
        uVar16 = ~uVar13 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar8 = (this->WrittenMask).AllocatorInstance.SecondaryData;
      if (FVar8 == (ForElementType<unsigned_int>)0x0) {
        FVar8 = (ForElementType<unsigned_int>)pTVar1;
      }
      if ((int)(1L << ((byte)iVar11 & 0x3f)) + -1 ==
          *(int *)((longlong)FVar8 + ((longlong)iVar3 + -1) * 4)) {
        return;
      }
    }
  }
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  uVar13 = 1;
  uVar12 = uVar15;
  do {
    if (((this->WrittenMask).ArrayNum <= (int)(uVar12 >> 5)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FVar8 = (this->WrittenMask).AllocatorInstance.SecondaryData;
    if (FVar8 == (ForElementType<unsigned_int>)0x0) {
      FVar8 = (ForElementType<unsigned_int>)pTVar1;
    }
    if ((*(uint *)((longlong)FVar8 + (uVar12 >> 5) * 4) & uVar13) == 0) {
      switch(*(undefined4 *)((longlong)&this->WriteDescriptors->descriptorType + uVar15)) {
      case 0:
        ::FString::FString(&local_68,L"SAMPLER");
        break;
      case 1:
        ::FString::FString(&local_68,L"COMBINED_IMAGE_SAMPLER");
        break;
      case 2:
        ::FString::FString(&local_68,L"SAMPLED_IMAGE");
        break;
      case 3:
        ::FString::FString(&local_68,L"STORAGE_IMAGE");
        break;
      case 4:
        ::FString::FString(&local_68,L"UNIFORM_TEXEL_BUFFER");
        break;
      case 5:
        ::FString::FString(&local_68,L"STORAGE_TEXEL_BUFFER");
        break;
      case 6:
        ::FString::FString(&local_68,L"UNIFORM_BUFFER");
        break;
      case 7:
        ::FString::FString(&local_68,L"STORAGE_BUFFER");
        break;
      case 8:
        ::FString::FString(&local_68,L"UNIFORM_BUFFER_DYNAMIC");
        break;
      case 9:
        ::FString::FString(&local_68,L"STORAGE_BUFFER_DYNAMIC");
        break;
      case 10:
        ::FString::FString(&local_68,L"INPUT_ATTACHMENT");
        break;
      default:
        ::FString::PrintfImpl(&local_68,L"Unknown VkDescriptorType %d");
      }
      ::FString::PrintfImpl(&local_48,L"\t\tDescriptorWrite %d/%d Was not written(Type %s)\n");
      uVar16 = local_48.Data.ArrayNum - 1;
      if (local_48.Data.ArrayNum == 0) {
        uVar16 = uVar7;
      }
      ::FString::AppendChars(&local_58,(wchar_t *)local_48.Data.AllocatorInstance.Data,uVar16);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    uVar16 = (int)uVar12 + 1;
    uVar12 = (ulonglong)uVar16;
    uVar13 = uVar13 << 1 | (uint)((int)uVar13 < 0);
    uVar15 = uVar15 + 0x40;
  } while (uVar16 < uVar2);
LAB_145b0ff68:
  if (2 < (byte)LogVulkanRHI._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
  }
  local_res18 = &local_58;
  `FVulkanDescriptorSetWriter::CheckAllWritten'::__l21::<lambda_2>::operator()(&local_res18);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return;
}

// InitWrittenMasks @ 145b263c0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FVulkanDescriptorSetWriter::InitWrittenMasks(FVulkanDescriptorSetWriter *this,uint param_1)

{
  int *piVar1;
  uint uVar2;
  
  uVar2 = param_1 + 0x1f >> 5;
  piVar1 = &(this->WrittenMask).ArrayMax;
  (this->WrittenMask).ArrayNum = 0;
  if (*piVar1 != uVar2) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
              (4,4,uVar2,&(this->WrittenMask).AllocatorInstance,0,piVar1);
  }
  TArray<unsigned_int,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::SetNumZeroed
            (&this->WrittenMask,uVar2,Default);
  piVar1 = &(this->BaseWrittenMask).ArrayMax;
  (this->BaseWrittenMask).ArrayNum = 0;
  if (*piVar1 != uVar2) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
              (4,4,uVar2,&(this->BaseWrittenMask).AllocatorInstance,0,piVar1);
  }
  TArray<unsigned_int,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::SetNumZeroed
            (&this->BaseWrittenMask,uVar2,Default);
  return;
}

// Reset @ 145b31ee0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */

void __thiscall FVulkanDescriptorSetWriter::Reset(FVulkanDescriptorSetWriter *this)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  ForElementType<unsigned_int> _Dst;
  ForElementType<unsigned_int> _Src;
  
  this->bHasVolatileResources = false;
  if (this != (FVulkanDescriptorSetWriter *)&this->NumWrites) {
    iVar2 = (this->WrittenMask).ArrayMax;
    piVar1 = &(this->WrittenMask).ArrayMax;
    _Src = (this->BaseWrittenMask).AllocatorInstance.SecondaryData;
    iVar3 = (this->BaseWrittenMask).ArrayNum;
    if (_Src == (ForElementType<unsigned_int>)0x0) {
      _Src = (ForElementType<unsigned_int>)&this->BaseWrittenMask;
    }
    (this->WrittenMask).ArrayNum = iVar3;
    if ((iVar3 == 0) && (iVar2 == 0)) {
      *piVar1 = 2;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                (4,4,iVar3,iVar2,&(this->WrittenMask).AllocatorInstance,iVar3,piVar1);
      _Dst = (this->WrittenMask).AllocatorInstance.SecondaryData;
      if (iVar3 != 0) {
        if (_Dst == (ForElementType<unsigned_int>)0x0) {
          _Dst = (ForElementType<unsigned_int>)&this->WrittenMask;
        }
        memcpy((void *)_Dst,(void *)_Src,(longlong)iVar3 << 2);
      }
    }
  }
  return;
}

// SetWritten @ 145b326f0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */

void __thiscall
FVulkanDescriptorSetWriter::SetWritten(FVulkanDescriptorSetWriter *this,uint param_1)

{
  uint *puVar1;
  code *pcVar2;
  bool bVar3;
  ForElementType<unsigned_int> FVar4;
  
  if ((this->WrittenMask).ArrayNum <= (int)(param_1 >> 5)) {
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
  FVar4 = (this->WrittenMask).AllocatorInstance.SecondaryData;
  if (FVar4 == (ForElementType<unsigned_int>)0x0) {
    FVar4 = (ForElementType<unsigned_int>)&this->WrittenMask;
  }
  puVar1 = (uint *)((longlong)FVar4 + (ulonglong)(param_1 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)param_1 & 0x1f);
  return;
}

// SetWrittenBase @ 145b32790

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */

void __thiscall
FVulkanDescriptorSetWriter::SetWrittenBase(FVulkanDescriptorSetWriter *this,uint param_1)

{
  uint *puVar1;
  code *pcVar2;
  bool bVar3;
  ForElementType<unsigned_int> FVar4;
  
  if ((this->BaseWrittenMask).ArrayNum <= (int)(param_1 >> 5)) {
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
  FVar4 = (this->BaseWrittenMask).AllocatorInstance.SecondaryData;
  if (FVar4 == (ForElementType<unsigned_int>)0x0) {
    FVar4 = (ForElementType<unsigned_int>)&this->BaseWrittenMask;
  }
  puVar1 = (uint *)((longlong)FVar4 + (ulonglong)(param_1 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)param_1 & 0x1f);
  return;
}

// SetupDescriptorWrites @ 145b32830

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

uint __thiscall
FVulkanDescriptorSetWriter::SetupDescriptorWrites
          (FVulkanDescriptorSetWriter *this,
          TArray<VkDescriptorType,TSizedDefaultAllocator<32>_> *param_1,
          FVulkanHashableDescriptorInfo *param_2,VkWriteDescriptorSet *param_3,
          VkDescriptorImageInfo *param_4,VkDescriptorBufferInfo *param_5,uchar *param_6,
          VkWriteDescriptorSetAccelerationStructureKHR *param_7,
          VkAccelerationStructureKHR_T **param_8,FVulkanSamplerState *param_9,FTextureView *param_10
          )

{
  int *piVar1;
  TArray<unsigned_int,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *this_00;
  VkWriteDescriptorSetAccelerationStructureKHR *pVVar2;
  uint *puVar3;
  int iVar4;
  ForElementType<unsigned_int> FVar5;
  code *pcVar6;
  bool bVar7;
  ForElementType<unsigned_int> FVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  uint *puVar14;
  uint *puVar15;
  uint *local_res20;
  
  this->HashableDescriptorInfos = param_2;
  this->WriteDescriptors = param_3;
  uVar9 = param_1->ArrayNum;
  this->BindingToDynamicOffsetMap = param_6;
  this->NumWrites = uVar9;
  piVar1 = &(this->WrittenMask).ArrayMax;
  (this->WrittenMask).ArrayNum = 0;
  uVar9 = uVar9 + 0x1f >> 5;
  if (*piVar1 != uVar9) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
              (4,4,uVar9,&(this->WrittenMask).AllocatorInstance,0,piVar1);
  }
  TArray<unsigned_int,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::SetNumZeroed
            (&this->WrittenMask,uVar9,Default);
  this_00 = &this->BaseWrittenMask;
  piVar1 = &(this->BaseWrittenMask).ArrayMax;
  (this->BaseWrittenMask).ArrayNum = 0;
  if (*piVar1 != uVar9) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
              (4,4,uVar9,&this_00->AllocatorInstance,0,piVar1);
  }
  TArray<unsigned_int,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::SetNumZeroed
            (this_00,uVar9,Default);
  uVar10 = 0;
  param_6._0_4_ = 0;
  uVar9 = 0;
  if (0 < param_1->ArrayNum) {
    local_res20 = &(param_2->Layout).LayoutId;
    puVar15 = &param_7->accelerationStructureCount;
    uVar11 = 1;
    lVar13 = 0;
    puVar14 = &param_3->descriptorCount;
    do {
      ((VkWriteDescriptorSet *)(puVar14 + -8))->sType = VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET;
      puVar14[-2] = uVar10;
      *puVar14 = 1;
      uVar12 = ~uVar10 >> 0x1f;
      uVar9 = 0;
      if ((int)uVar10 < param_1->ArrayNum) {
        uVar9 = uVar12;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return uVar9;
      }
      puVar14[1] = *(VkDescriptorType *)((param_1->AllocatorInstance).Data + lVar13 * 4);
      uVar9 = 0;
      if ((int)uVar10 < param_1->ArrayNum) {
        uVar9 = uVar12;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return uVar9;
      }
      iVar4 = *(int *)((param_1->AllocatorInstance).Data + lVar13 * 4);
      if (0x3b9d13f0 < iVar4) {
switchD_145b32a22_caseD_9:
        uVar9 = 0;
        if ((int)uVar10 < param_1->ArrayNum) {
          uVar9 = uVar12;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          uVar9 = (*pcVar6)();
          return uVar9;
        }
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanDescriptorSets.cpp"
                           ,0x19c,L"Unsupported descriptor type %d");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          uVar9 = (*pcVar6)();
          return uVar9;
        }
        goto switchD_145b32a22_caseD_4;
      }
      if (iVar4 == 0x3b9d13f0) {
        pVVar2 = (VkWriteDescriptorSetAccelerationStructureKHR *)(puVar15 + -4);
        *(void **)(puVar15 + -2) = (void *)0x0;
        *puVar15 = 1;
        *(VkAccelerationStructureKHR_T ***)(puVar15 + 2) = param_8;
        param_8 = param_8 + 1;
        pVVar2->sType = VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET_ACCELERATION_STRUCTURE_KHR;
        puVar15 = puVar15 + 8;
        *(VkWriteDescriptorSetAccelerationStructureKHR **)(puVar14 + -6) = pVVar2;
        goto switchD_145b32a22_caseD_4;
      }
      switch(iVar4) {
      case 0:
        if (((this->BaseWrittenMask).ArrayNum <= (int)(uVar10 >> 5)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          uVar9 = (*pcVar6)();
          return uVar9;
        }
        FVar5 = (this->BaseWrittenMask).AllocatorInstance.SecondaryData;
        FVar8 = (ForElementType<unsigned_int>)this_00;
        if (FVar5 != (ForElementType<unsigned_int>)0x0) {
          FVar8 = FVar5;
        }
        puVar3 = (uint *)((longlong)FVar8 + (ulonglong)(uVar10 >> 5) * 4);
        *puVar3 = *puVar3 | uVar11;
      case 1:
      case 2:
      case 3:
      case 10:
        if (param_2 != (FVulkanHashableDescriptorInfo *)0x0) {
          ((<unnamed_type_Layout> *)(local_res20 + -2))->Max0 = param_9->SamplerId;
          local_res20[-1] = param_10->ViewId;
          *local_res20 = 1;
        }
        param_4->sampler = param_9->Sampler;
        param_4->imageView = param_10->View;
        param_4->imageLayout = VK_IMAGE_LAYOUT_GENERAL;
        *(VkDescriptorImageInfo **)(puVar14 + 2) = param_4;
        param_4 = param_4 + 1;
        break;
      case 4:
      case 5:
        break;
      case 6:
      case 7:
        *(VkDescriptorBufferInfo **)(puVar14 + 4) = param_5;
        param_5 = param_5 + 1;
        break;
      case 8:
        this->BindingToDynamicOffsetMap[lVar13] = (uchar)(uint)param_6;
        param_6._0_4_ = (uint)param_6 + 1;
        *(VkDescriptorBufferInfo **)(puVar14 + 4) = param_5;
        param_5 = param_5 + 1;
        goto LAB_145b32c0e;
      default:
        goto switchD_145b32a22_caseD_9;
      }
switchD_145b32a22_caseD_4:
LAB_145b32c0e:
      local_res20 = local_res20 + 3;
      puVar14 = puVar14 + 0x10;
      uVar10 = uVar10 + 1;
      uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
      lVar13 = lVar13 + 1;
      uVar9 = (uint)param_6;
    } while ((int)uVar10 < param_1->ArrayNum);
  }
  return uVar9;
}

// WriteBuffer<7> @ 145b42840

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */

bool __thiscall
FVulkanDescriptorSetWriter::WriteBuffer<7>
          (FVulkanDescriptorSetWriter *this,uint param_1,VkBuffer_T *param_2,uint param_3,
          ulong64 param_4,ulong64 param_5,uint param_6)

{
  FVulkanHashableDescriptorInfo *pFVar1;
  VkDescriptorType VVar2;
  VkDescriptorBufferInfo *pVVar3;
  ulong64 uVar4;
  VkBuffer_T *pVVar5;
  ulong64 uVar6;
  code *pcVar7;
  wchar_t *pwVar8;
  bool bVar9;
  undefined1 uVar10;
  uint uVar11;
  char *_Str;
  size_t sVar12;
  bool bVar13;
  bool bVar14;
  undefined1 auStack_2c8 [32];
  uint local_2a8;
  wchar_t *local_2a0;
  wchar_t *local_298;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_2c8;
  if (this->NumWrites <= param_1) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("DescriptorIndex < NumWrites",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanDescriptorSets.h"
                       ,0x28a,L"");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      uVar10 = (*pcVar7)();
      return (bool)uVar10;
    }
  }
  SetWritten(this,param_1);
  VVar2 = this->WriteDescriptors[param_1].descriptorType;
  if ((VVar2 - VK_DESCRIPTOR_TYPE_STORAGE_BUFFER & 0xfffffffd) != 0) {
    _Str = string_VkDescriptorType(VVar2);
    local_288._padding_ = 0;
    if (_Str == (char *)0x0) {
      local_288.Ptr = (wchar_t *)0x0;
      local_288.StringLength = 0;
    }
    else {
      sVar12 = strlen(_Str);
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_288,_Str,(int)sVar12,Yes);
    }
    pwVar8 = local_288.Ptr;
    local_168._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_168,"VK_DESCRIPTOR_TYPE_STORAGE_BUFFER",0x21,Yes);
    local_2a0 = local_168.Ptr;
    local_2a8 = param_1;
    local_298 = pwVar8;
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("WriteDescriptors[DescriptorIndex].descriptorType == VK_DESCRIPTOR_TYPE_STORAGE_BUFFER || WriteDescriptors[DescriptorIndex].descriptorType == VK_DESCRIPTOR_TYPE_STORAGE_BUFFER_DYNAMIC"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanDescriptorSets.h"
                       ,0x290,
                       L"DescriptorType mismatch at index %d: called WriteBuffer<%s> and was expecting %s."
                      );
    if ((void *)local_168._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_168._padding_);
    }
    if ((void *)local_288._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_288._padding_);
    }
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      uVar10 = (*pcVar7)();
      return (bool)uVar10;
    }
  }
  pVVar3 = this->WriteDescriptors[param_1].pBufferInfo;
  if (pVVar3 == (VkDescriptorBufferInfo *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("BufferInfo",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanDescriptorSets.h"
                       ,0x299,L"");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      uVar10 = (*pcVar7)();
      return (bool)uVar10;
    }
  }
  if ((int)GMaxRHIFeatureLevel < 2) {
    pFVar1 = this->HashableDescriptorInfos + param_1;
    if (param_3 == 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("HandleId > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanDescriptorSets.h"
                         ,0x29f,L"");
      if (bVar9) {
        pcVar7 = (code *)swi(3);
        uVar10 = (*pcVar7)();
        return (bool)uVar10;
      }
    }
    bVar13 = (pFVar1->Layout).Max0 != param_3;
    if (bVar13) {
      (pFVar1->Layout).Max0 = param_3;
      pVVar3->buffer = param_2;
    }
    uVar11 = (uint)param_4;
    bVar14 = (pFVar1->Layout).Max1 != uVar11;
    if (bVar14) {
      (pFVar1->Layout).Max1 = uVar11;
      pVVar3->offset = param_4;
    }
    uVar11 = (uint)param_5;
    bVar9 = (pFVar1->Layout).LayoutId != uVar11;
    if (bVar9) {
      (pFVar1->Layout).LayoutId = uVar11;
      pVVar3->range = param_5;
    }
    bVar9 = bVar9 || (bVar14 || bVar13);
    this->bIsKeyDirty = (bool)(this->bIsKeyDirty | bVar9);
  }
  else {
    uVar4 = pVVar3->offset;
    pVVar5 = pVVar3->buffer;
    pVVar3->offset = param_4;
    uVar6 = pVVar3->range;
    pVVar3->range = param_5;
    pVVar3->buffer = param_2;
    bVar9 = uVar6 != param_5 || uVar4 != param_4;
    if (pVVar5 != param_2) {
      bVar9 = true;
    }
  }
  return bVar9;
}

// WriteBufferView<4> @ 145b42ae0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */

bool __thiscall
FVulkanDescriptorSetWriter::WriteBufferView<4>
          (FVulkanDescriptorSetWriter *this,uint param_1,FTypedBufferView *param_2)

{
  VkDescriptorType VVar1;
  FVulkanHashableDescriptorInfo *pFVar2;
  code *pcVar3;
  wchar_t *pwVar4;
  bool bVar5;
  undefined1 uVar6;
  char *_Str;
  size_t sVar7;
  undefined1 auStack_2b8 [32];
  uint local_298;
  wchar_t *local_290;
  wchar_t *local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_2b8;
  if (this->NumWrites <= param_1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("DescriptorIndex < NumWrites",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanDescriptorSets.h"
                       ,0x2fe,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
  }
  VVar1 = this->WriteDescriptors[param_1].descriptorType;
  if (VVar1 != VK_DESCRIPTOR_TYPE_UNIFORM_TEXEL_BUFFER) {
    _Str = string_VkDescriptorType(VVar1);
    local_278._padding_ = 0;
    if (_Str == (char *)0x0) {
      local_278.Ptr = (wchar_t *)0x0;
      local_278.StringLength = 0;
    }
    else {
      sVar7 = strlen(_Str);
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_278,_Str,(int)sVar7,Yes);
    }
    pwVar4 = local_278.Ptr;
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"VK_DESCRIPTOR_TYPE_UNIFORM_TEXEL_BUFFER",0x27,Yes);
    local_290 = local_158.Ptr;
    local_298 = param_1;
    local_288 = pwVar4;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("WriteDescriptors[DescriptorIndex].descriptorType == DescriptorType",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanDescriptorSets.h"
                       ,0x301,
                       L"DescriptorType mismatch at index %d: called WriteBufferView<%s> and was expecting %s."
                      );
    if ((void *)local_158._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_158._padding_);
    }
    if ((void *)local_278._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_278._padding_);
    }
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
  }
  SetWritten(this,param_1);
  this->WriteDescriptors[param_1].pTexelBufferView = &param_2->View;
  bVar5 = param_2->bVolatile;
  this->bHasVolatileResources = (bool)(this->bHasVolatileResources | bVar5);
  if ((bVar5 == false) && ((int)GMaxRHIFeatureLevel < 2)) {
    pFVar2 = this->HashableDescriptorInfos;
    if (param_2->ViewId == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("View.ViewId > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanDescriptorSets.h"
                         ,0x30d,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
    }
    bVar5 = pFVar2[param_1].Layout.Max0 != param_2->ViewId;
    if (bVar5) {
      pFVar2[param_1].Layout.Max0 = param_2->ViewId;
    }
    this->bIsKeyDirty = (bool)(this->bIsKeyDirty | bVar5);
  }
  else {
    bVar5 = true;
  }
  return bVar5;
}

// WriteBufferView<5> @ 145b42cf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */

bool __thiscall
FVulkanDescriptorSetWriter::WriteBufferView<5>
          (FVulkanDescriptorSetWriter *this,uint param_1,FTypedBufferView *param_2)

{
  VkDescriptorType VVar1;
  FVulkanHashableDescriptorInfo *pFVar2;
  code *pcVar3;
  wchar_t *pwVar4;
  bool bVar5;
  undefined1 uVar6;
  char *_Str;
  size_t sVar7;
  undefined1 auStack_2b8 [32];
  uint local_298;
  wchar_t *local_290;
  wchar_t *local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_2b8;
  if (this->NumWrites <= param_1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("DescriptorIndex < NumWrites",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanDescriptorSets.h"
                       ,0x2fe,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
  }
  VVar1 = this->WriteDescriptors[param_1].descriptorType;
  if (VVar1 != VK_DESCRIPTOR_TYPE_STORAGE_TEXEL_BUFFER) {
    _Str = string_VkDescriptorType(VVar1);
    local_278._padding_ = 0;
    if (_Str == (char *)0x0) {
      local_278.Ptr = (wchar_t *)0x0;
      local_278.StringLength = 0;
    }
    else {
      sVar7 = strlen(_Str);
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_278,_Str,(int)sVar7,Yes);
    }
    pwVar4 = local_278.Ptr;
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"VK_DESCRIPTOR_TYPE_STORAGE_TEXEL_BUFFER",0x27,Yes);
    local_290 = local_158.Ptr;
    local_298 = param_1;
    local_288 = pwVar4;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("WriteDescriptors[DescriptorIndex].descriptorType == DescriptorType",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanDescriptorSets.h"
                       ,0x301,
                       L"DescriptorType mismatch at index %d: called WriteBufferView<%s> and was expecting %s."
                      );
    if ((void *)local_158._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_158._padding_);
    }
    if ((void *)local_278._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_278._padding_);
    }
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
  }
  SetWritten(this,param_1);
  this->WriteDescriptors[param_1].pTexelBufferView = &param_2->View;
  bVar5 = param_2->bVolatile;
  this->bHasVolatileResources = (bool)(this->bHasVolatileResources | bVar5);
  if ((bVar5 == false) && ((int)GMaxRHIFeatureLevel < 2)) {
    pFVar2 = this->HashableDescriptorInfos;
    if (param_2->ViewId == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("View.ViewId > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanDescriptorSets.h"
                         ,0x30d,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
    }
    bVar5 = pFVar2[param_1].Layout.Max0 != param_2->ViewId;
    if (bVar5) {
      pFVar2[param_1].Layout.Max0 = param_2->ViewId;
    }
    this->bIsKeyDirty = (bool)(this->bIsKeyDirty | bVar5);
  }
  else {
    bVar5 = true;
  }
  return bVar5;
}

// WriteTextureView<10> @ 145b42f00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */

bool __thiscall
FVulkanDescriptorSetWriter::WriteTextureView<10>
          (FVulkanDescriptorSetWriter *this,uint param_1,FTextureView *param_2,VkImageLayout param_3
          )

{
  VkDescriptorType VVar1;
  uint uVar2;
  VkImageLayout VVar3;
  VkDescriptorImageInfo *pVVar4;
  FVulkanHashableDescriptorInfo *pFVar5;
  VkImageView_T *pVVar6;
  VkImageView_T *pVVar7;
  code *pcVar8;
  wchar_t *pwVar9;
  bool bVar10;
  undefined1 uVar11;
  char *_Str;
  size_t sVar12;
  bool bVar13;
  undefined1 auStack_2b8 [32];
  uint local_298;
  wchar_t *local_290;
  wchar_t *local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_2b8;
  if (this->NumWrites <= param_1) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("DescriptorIndex < NumWrites",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanDescriptorSets.h"
                        ,0x2c6,L"");
    if (bVar10) {
      pcVar8 = (code *)swi(3);
      uVar11 = (*pcVar8)();
      return (bool)uVar11;
    }
  }
  SetWritten(this,param_1);
  VVar1 = this->WriteDescriptors[param_1].descriptorType;
  if (VVar1 != VK_DESCRIPTOR_TYPE_INPUT_ATTACHMENT) {
    _Str = string_VkDescriptorType(VVar1);
    local_278._padding_ = 0;
    if (_Str == (char *)0x0) {
      local_278.Ptr = (wchar_t *)0x0;
      local_278.StringLength = 0;
    }
    else {
      sVar12 = strlen(_Str);
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_278,_Str,(int)sVar12,Yes);
    }
    pwVar9 = local_278.Ptr;
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"VK_DESCRIPTOR_TYPE_INPUT_ATTACHMENT",0x23,Yes);
    local_290 = local_158.Ptr;
    local_298 = param_1;
    local_288 = pwVar9;
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("WriteDescriptors[DescriptorIndex].descriptorType == DescriptorType",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanDescriptorSets.h"
                        ,0x2da,
                        L"DescriptorType mismatch at index %d: called WriteTextureView<%s> and was expecting %s."
                       );
    if ((void *)local_158._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_158._padding_);
    }
    if ((void *)local_278._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_278._padding_);
    }
    if (bVar10) {
      pcVar8 = (code *)swi(3);
      uVar11 = (*pcVar8)();
      return (bool)uVar11;
    }
  }
  pVVar4 = this->WriteDescriptors[param_1].pImageInfo;
  if (pVVar4 == (VkDescriptorImageInfo *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("ImageInfo",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanDescriptorSets.h"
                        ,0x2dd,L"");
    if (bVar10) {
      pcVar8 = (code *)swi(3);
      uVar11 = (*pcVar8)();
      return (bool)uVar11;
    }
  }
  if ((int)GMaxRHIFeatureLevel < 2) {
    pFVar5 = this->HashableDescriptorInfos;
    if (param_2->ViewId == 0) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("TextureView.ViewId > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanDescriptorSets.h"
                          ,0x2e3,L"");
      if (bVar10) {
        pcVar8 = (code *)swi(3);
        uVar11 = (*pcVar8)();
        return (bool)uVar11;
      }
    }
    uVar2 = param_2->ViewId;
    bVar13 = (&pFVar5->Layout)[param_1].Max1 != uVar2;
    if (bVar13) {
      (&pFVar5->Layout)[param_1].Max1 = uVar2;
      pVVar4->imageView = param_2->View;
    }
    bVar10 = (&pFVar5->Layout)[param_1].LayoutId != param_3;
    if (bVar10) {
      (&pFVar5->Layout)[param_1].LayoutId = param_3;
      pVVar4->imageLayout = param_3;
    }
    bVar10 = bVar10 || bVar13;
    this->bIsKeyDirty = (bool)(this->bIsKeyDirty | bVar10);
  }
  else {
    pVVar6 = param_2->View;
    pVVar7 = pVVar4->imageView;
    pVVar4->imageView = pVVar6;
    VVar3 = pVVar4->imageLayout;
    pVVar4->imageLayout = param_3;
    bVar10 = pVVar7 != pVVar6 || VVar3 != param_3;
  }
  return bVar10;
}

// WriteAccelerationStructure @ 145b84120

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */

bool __thiscall
FVulkanDescriptorSetWriter::WriteAccelerationStructure
          (FVulkanDescriptorSetWriter *this,uint param_1,VkAccelerationStructureKHR_T *param_2)

{
  VkAccelerationStructureKHR_T *pVVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int *piVar5;
  
  if (((int)GMaxRHIFeatureLevel < 2) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!UseVulkanDescriptorCache()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanDescriptorSets.h"
                         ,0x25d,
                         L"Descriptor cache path for WriteAccelerationStructure() is not implemented"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if ((this->NumWrites <= param_1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DescriptorIndex < NumWrites",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanDescriptorSets.h"
                         ,0x25f,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  SetWritten(this,param_1);
  if ((this->WriteDescriptors[param_1].descriptorType !=
       VK_DESCRIPTOR_TYPE_ACCELERATION_STRUCTURE_KHR) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("WriteDescriptors[DescriptorIndex].descriptorType == VK_DESCRIPTOR_TYPE_ACCELERATION_STRUCTURE_KHR"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanDescriptorSets.h"
                         ,0x262,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  for (piVar5 = this->WriteDescriptors[param_1].pNext; piVar5 != (int *)0x0;
      piVar5 = *(int **)(piVar5 + 2)) {
    if (*piVar5 == 0x3b9d13f7) goto LAB_145b84227;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("FoundWrite",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanDescriptorSets.h"
                     ,0x273,
                     L"Expected to find a VkWriteDescriptorSetAccelerationStructureKHR that\'s needed to bind an acceleration structure descriptor. Possibly something went wrong in SetupDescriptorWrites()."
                    );
  piVar5 = (int *)0x0;
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
LAB_145b84227:
  if ((piVar5[4] != 1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("FoundWrite->accelerationStructureCount == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanDescriptorSets.h"
                         ,0x275,
                         L"Acceleration structure write operation is expected to contain exactly one descriptor"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  pVVar1 = (VkAccelerationStructureKHR_T *)**(longlong **)(piVar5 + 6);
  **(longlong **)(piVar5 + 6) = (longlong)param_2;
  return pVVar1 != param_2;
}

// operator() @ 1504d7dc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */

bool __thiscall
`FVulkanDescriptorSetWriter::WriteTextureView<2>'::__l12::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  wchar_t *pwVar4;
  bool bVar5;
  undefined1 uVar6;
  char *pcVar7;
  size_t sVar8;
  undefined1 auStack_298 [32];
  wchar_t *local_278;
  undefined4 local_268;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_258;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_298;
  bVar3 = false;
  bVar2 = false;
  local_268 = 0;
  bVar5 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3507006767605218604>);
  if (bVar5) {
    pcVar7 = string_VkDescriptorType
                       (*(VkDescriptorType *)
                         ((ulonglong)**(uint **)((longlong)this + 8) * 0x40 + 0x24 +
                         **(longlong **)((longlong)this + 0x10)));
    local_138._padding_ = 0;
    if (pcVar7 == (char *)0x0) {
      local_138.Ptr = (wchar_t *)0x0;
      local_138.StringLength = 0;
    }
    else {
      sVar8 = strlen(pcVar7);
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_138,pcVar7,(int)sVar8,Yes);
    }
    pwVar4 = local_138.Ptr;
    pcVar7 = string_VkImageLayout(**(VkImageLayout **)this);
    local_258._padding_ = 0;
    if (pcVar7 == (char *)0x0) {
      local_258.Ptr = (wchar_t *)0x0;
      local_258.StringLength = 0;
    }
    else {
      sVar8 = strlen(pcVar7);
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_258,pcVar7,(int)sVar8,Yes);
    }
    bVar3 = true;
    bVar2 = true;
    local_278 = pwVar4;
    bVar5 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3507006767605218604>,
                       &`public:___cdecl_`protected:_bool___cdecl_FVulkanDescriptorSetWriter::WriteTextureView<2>(unsigned_int,FVulkanView::FTextureView_const&___ptr64,VkImageLayout)___ptr64'::`12'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar5) {
      bVar5 = true;
      goto LAB_1504d7f04;
    }
  }
  bVar5 = false;
LAB_1504d7f04:
  if (bVar2) {
    if ((void *)local_258._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_258._padding_);
    }
  }
  if ((bVar3) && ((void *)local_138._padding_ != (void *)0x0)) {
    FMemory::Free((void *)local_138._padding_);
  }
  if (bVar5) {
    pcVar1 = (code *)swi(3);
    uVar6 = (*pcVar1)();
    return (bool)uVar6;
  }
  return false;
}

// operator() @ 1504d8690

bool __thiscall
`FVulkanDescriptorSetWriter::CheckAllWritten'::__l21::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_654353695068126745>);
  if ((bVar2) &&
     (bVar2 = UE::Assert::Private::EnsureFailed
                        (&bGEnsureHasExecuted<_654353695068126745>,&::ENSURE_Static), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

