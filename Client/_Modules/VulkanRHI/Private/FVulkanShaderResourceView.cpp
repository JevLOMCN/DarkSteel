// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 5

// FVulkanShaderResourceView @ 145b926f0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
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
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */

FVulkanShaderResourceView * __thiscall
FVulkanShaderResourceView::FVulkanShaderResourceView
          (FVulkanShaderResourceView *this,FRHICommandListBase *param_1,FVulkanDevice *param_2,
          FRHIViewableResource *param_3,FRHIViewDesc *param_4)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  undefined8 uVar4;
  FRHIViewDesc *pFVar5;
  bool bVar6;
  VkDescriptorType VVar7;
  FVulkanShaderResourceView *pFVar8;
  FRHICommandBase *pFVar9;
  undefined8 *local_res8;
  
  FRHIResource::FRHIResource((FRHIResource *)this,RRT_ShaderResourceView);
  *(undefined ***)this = &___7FRHIView__6B_;
  *(FRHIViewableResource **)&this->field_0x18 = param_3;
  if (param_3 != (FRHIViewableResource *)0x0) {
    FRHIResource::AddRef((FRHIResource *)param_3);
  }
  pFVar5 = param_4;
  uVar4 = *(undefined8 *)((longlong)&param_4->field0_0x0 + 8);
  *(undefined8 *)&this->field_0x20 = *(undefined8 *)&param_4->field0_0x0;
  *(undefined8 *)&this->field_0x28 = uVar4;
  if (param_3 == (FRHIViewableResource *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InResource",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0xcae,L"Cannot create a view of a nullptr resource.");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FVulkanShaderResourceView *)(*pcVar3)();
      return pFVar8;
    }
  }
  *(undefined ***)this = &___7FRHIShaderResourceView__6B_;
  if ((this->field_0x20 != '\0') && (this->field_0x20 != '\x02')) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("ViewDesc.IsSRV()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0xced,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FVulkanShaderResourceView *)(*pcVar3)();
      return pFVar8;
    }
  }
  VVar7 = GetVkDescriptorTypeForViewDesc(pFVar5);
  FVulkanView::FVulkanView((FVulkanView *)&this->field_0x38,param_2,VVar7);
  *(undefined8 *)&this->field_0x70 = 0;
  *(undefined8 *)&this->field_0x78 = 0;
  *(undefined ***)this = &_vftable__for__FRHIShaderResourceView__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__FVulkanLinkedView__;
  param_4 = (FRHIViewDesc *)this;
  if (((GRHICommandList.bLatchedBypass == false) || ((param_1->PersistentState).bImmediate == '\0'))
     && (param_1->bExecuting == false)) {
    pFVar9 = FMemStackBase::Alloc(&param_1->MemManager,0x20,8);
    param_1->NumCommands = param_1->NumCommands + 1;
    *param_1->CommandLink = pFVar9;
    param_1->CommandLink = &pFVar9->Next;
    pFVar9->Next = (FRHICommandBase *)0x0;
    pFVar9->_padding_ =
         (longlong)
         &TRHILambdaCommand<FRHICommandListBase,`FVulkanShaderResourceView::FVulkanShaderResourceView'::`2'::<lambda_1>_>
          ::_vftable_;
    pFVar9[1].Next = (FRHICommandBase *)L"TRHILambdaCommand";
    pFVar9[1]._padding_ = (longlong)this;
  }
  else {
    `FVulkanShaderResourceView::FVulkanShaderResourceView'::__l2::<lambda_1>::operator()
              (&param_4,param_1);
  }
  FRHICommandListBase::RHIThreadFence(param_1,SUB81(&local_res8,0));
  if (local_res8 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_res8 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (local_res8 != (undefined8 *)0x0)) {
      (**(code **)*local_res8)(local_res8,1);
    }
  }
  return this;
}

// operator() @ 145b98c00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FVulkanShaderResourceView::FVulkanShaderResourceView'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListBase *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  FVulkanContextArray local_18;
  
  lVar3 = *(longlong *)this;
  plVar1 = (longlong *)(lVar3 + 0x70);
  if ((*(char *)(lVar3 + 0x20) == '\0') || (*(char *)(lVar3 + 0x20) == '\x01')) {
    lVar4 = *(longlong *)(lVar3 + 0x18) + 0xe8;
    if (*(longlong *)(lVar3 + 0x18) == 0) {
      lVar4 = 0;
    }
  }
  else {
    lVar2 = (**(code **)(**(longlong **)(lVar3 + 0x18) + 0x48))();
    lVar4 = 0;
    if (lVar2 != 0) {
      lVar4 = lVar2 + 0x140;
    }
  }
  plVar5 = (longlong *)(lVar4 + 8);
  if (*(longlong *)(lVar4 + 8) != 0) {
    *(longlong **)(*(longlong *)(lVar4 + 8) + 0x48) = plVar1;
  }
  *plVar1 = *plVar5;
  *(longlong **)(lVar3 + 0x78) = plVar5;
  lVar3 = lVar3 + 0x30;
  if (plVar1 == (longlong *)0x0) {
    lVar3 = 0;
  }
  *plVar5 = lVar3;
  local_18._0_8_ = 0;
  local_18._8_8_ = 0;
  FVulkanShaderResourceView::UpdateView
            ((FVulkanShaderResourceView *)(*(longlong *)this + 0x30),&local_18);
  return;
}

// GetBaseResource @ 145bab930

FVulkanViewableResource * __thiscall
FVulkanShaderResourceView::GetBaseResource(FVulkanShaderResourceView *this)

{
  longlong lVar1;
  FVulkanViewableResource *pFVar2;
  
  if ((this->field_0x20 != '\0') && (this->field_0x20 != '\x01')) {
    lVar1 = (**(code **)(**(longlong **)&this->field_0x18 + 0x48))();
    pFVar2 = (FVulkanViewableResource *)(lVar1 + 0x140);
    if (lVar1 == 0) {
      pFVar2 = (FVulkanViewableResource *)0x0;
    }
    return pFVar2;
  }
  pFVar2 = (FVulkanViewableResource *)(*(longlong *)&this->field_0x18 + 0xe8);
  if (*(longlong *)&this->field_0x18 == 0) {
    pFVar2 = (FVulkanViewableResource *)0x0;
  }
  return pFVar2;
}

// GetBindlessHandle @ 145baba20

FRHIDescriptorHandle __thiscall
FVulkanShaderResourceView::GetBindlessHandle(FVulkanShaderResourceView *this)

{
  FRHIDescriptorHandle in_RDX;
  
  *(undefined8 *)in_RDX = *(undefined8 *)&this->field_0x40;
  return in_RDX;
}

// UpdateView @ 145bc12f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
FVulkanShaderResourceView::UpdateView(FVulkanShaderResourceView *this,FVulkanContextArray *param_1)

{
  undefined1 *this_00;
  FVulkanBuffer *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FVulkanTexture *this_01;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auStackY_d8 [32];
  FViewInfo local_a8;
  FVulkanTextureViewDesc local_98;
  FViewInfo local_60;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  this_00 = &this->field_0x8;
  FVulkanView::Invalidate((FVulkanView *)this_00);
  if ((this[-1].field_0x70 == '\0') || (this[-1].field_0x70 == '\x01')) {
    pFVar1 = *(FVulkanBuffer **)&this[-1].field_0x68;
    FRHIViewDesc::FBufferSRV::GetViewInfo
              ((FBufferSRV *)&this[-1].field_0x70,&local_60,(FRHIBuffer *)pFVar1);
    if (local_60._18_1_ == '\0') {
      if (local_60._16_1_ == '\x01') {
        if (((pFVar1->BufferUsageFlags & 4) == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("VKHasAllFlags(Buffer->GetBufferUsageFlags(), VK_BUFFER_USAGE_UNIFORM_TEXEL_BUFFER_BIT)"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanSRV.cpp"
                               ,0x45,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        FVulkanView::InitAsTypedBufferView
                  ((FVulkanView *)this_00,param_1,pFVar1,local_60._17_1_,local_60._0_4_,
                   local_60._12_4_);
      }
      else {
        if (local_60._16_1_ != '\x02') {
          if (local_60._16_1_ == '\x03') {
            FVulkanView::InitAsAccelerationStructureView
                      ((FVulkanView *)this_00,param_1,pFVar1,local_60._0_4_,local_60._12_4_);
            return;
          }
          if (local_60._16_1_ != '\x04') {
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("!\"Enclosing block should never be called\"",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanSRV.cpp"
                               ,0x4e,L"");
            if (!bVar3) {
              return;
            }
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        FVulkanView::InitAsStructuredBufferView
                  ((FVulkanView *)this_00,param_1,pFVar1,local_60._0_4_,local_60._12_4_);
      }
    }
  }
  else {
    this_01 = (FVulkanTexture *)(**(code **)(**(longlong **)&this[-1].field_0x68 + 0x48))();
    FRHIViewDesc::FTextureSRV::GetViewInfo
              ((FTextureSRV *)&this[-1].field_0x70,&local_a8,(FRHITexture *)this_01);
    uVar6 = (uint)(ushort)local_a8._0_2_;
    uVar7 = (uint)(ushort)local_a8._2_2_;
    if (((local_a8._6_1_ & 7) == 3) || ((local_a8._6_1_ & 7) == 4)) {
      uVar6 = ((uint)(ushort)local_a8._0_2_ + (uint)(ushort)local_a8._0_2_ * 2) * 2;
      uVar7 = ((uint)(ushort)local_a8._2_2_ + (uint)(ushort)local_a8._2_2_ * 2) * 2;
      uVar4 = FVulkanTexture::GetNumberOfArrayLevels(this_01);
      if ((uVar4 < uVar7 + uVar6) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ArrayFirst + ArrayNum) <= Texture->GetNumberOfArrayLevels()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanSRV.cpp"
                             ,0x5e,L"View extends beyond original cube texture level count!"), bVar3
         )) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    uVar4 = this_01->ImageUsageFlags;
    local_98.SamplerYcbcrConversion = (VkSamplerYcbcrConversion_T *)0x0;
    lVar5 = (**(code **)(this_01->_padding_ + 0x20))(this_01);
    local_98.ViewType = UETextureDimensionToVkImageViewType(*(ETextureDimension *)(lVar5 + 0x32));
    switch(local_a8._6_1_ & 7) {
    case 0:
      break;
    case 1:
      local_98.ViewType = VK_IMAGE_VIEW_TYPE_2D;
      break;
    case 2:
      local_98.ViewType = VK_IMAGE_VIEW_TYPE_2D_ARRAY;
      break;
    case 3:
      local_98.ViewType = VK_IMAGE_VIEW_TYPE_CUBE;
      break;
    case 4:
      local_98.ViewType = VK_IMAGE_VIEW_TYPE_CUBE_ARRAY;
      break;
    case 5:
      local_98.ViewType = VK_IMAGE_VIEW_TYPE_3D;
      break;
    default:
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanSRV.cpp"
                         ,0x13,L"Unknown texture dimension value!");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_98.ViewType = VK_IMAGE_VIEW_TYPE_MAX_ENUM;
    }
    local_98.AspectFlags = this_01->PartialAspectMask;
    local_98.UEFormat = local_a8._5_1_;
    if (local_a8.bSRGB == 0) {
      local_98.Format = GPixelFormats[(byte)local_a8._5_1_].PlatformFormat;
    }
    else {
      local_98.Format = GVulkanSRGBFormat[(byte)local_a8._5_1_];
    }
    local_98.FirstMip = (uint)local_a8.MipRange.First;
    local_98.NumMips = (uint)local_a8.MipRange.Num;
    local_98.bUseIdentitySwizzle = false;
    local_98.ArraySliceIndex = uVar6;
    local_98.NumArraySlices = uVar7;
    local_98.ImageUsageFlags = uVar4 & 0xfffffff7;
    FVulkanView::InitAsTextureView((FVulkanView *)this_00,param_1,this_01->Image,&local_98);
  }
  return;
}

