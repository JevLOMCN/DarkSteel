// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 4

// AddRef @ 145b56e30

FReturnedRefCountValue __thiscall FVulkanRayTracingShader::AddRef(FVulkanRayTracingShader *this)

{
  uint uVar1;
  uint *in_RDX;
  
  uVar1 = FRHIResource::AddRef((FRHIResource *)&this[-1]._padding_);
  *in_RDX = uVar1;
  return (FReturnedRefCountValue)(uint)in_RDX;
}

// Release @ 145b785a0

uint __thiscall FVulkanRayTracingShader::Release(FVulkanRayTracingShader *this)

{
  uint uVar1;
  
  uVar1 = FRHIResource::Release((FRHIResource *)&this[-1]._padding_);
  return uVar1;
}

// GetOrCreateHandle @ 145bac120

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

TRefCountPtr<FVulkanShaderModule> __thiscall
FVulkanRayTracingShader::GetOrCreateHandle(FVulkanRayTracingShader *this,uint param_1)

{
  longlong *this_00;
  longlong lVar1;
  FVulkanDevice *this_01;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TRefCountPtr<FVulkanShaderModule> TVar5;
  undefined4 in_register_00000014;
  FVulkanShaderModule *pFVar6;
  longlong *plVar7;
  FVulkanSamplerState *pFVar8;
  uint in_R8D;
  ForAnyElementType FVar9;
  bool bVar10;
  uint local_res18 [4];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  FString local_d8;
  FVulkanSamplerState *local_c8;
  FVulkanSamplerState *local_c0;
  VkDevice_T *local_b8;
  undefined1 *local_b0;
  uint *local_a8;
  undefined1 *local_a0;
  FSpirvCode local_98;
  FSpirvCode local_78;
  FSpirvCode local_58;
  
  pFVar6 = (FVulkanShaderModule *)CONCAT44(in_register_00000014,param_1);
  local_res18[0] = in_R8D;
  bVar3 = FVulkanDevice::SupportsBindless((FVulkanDevice *)this->_padding_);
  if ((!bVar3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Device->SupportsBindless()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanShaders.cpp"
                         ,0x28a,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    TVar5.Reference = (FVulkanShaderModule *)(*pcVar2)();
    return (TRefCountPtr<FVulkanShaderModule>)TVar5.Reference;
  }
  bVar3 = local_res18[0] == 1;
  bVar10 = local_res18[0] != 2;
  if (((local_res18[0] == 1) && (*(char *)((longlong)&this->_padding_ + 1) == '\x01')) ||
     ((!bVar10 && (*(char *)((longlong)&this->_padding_ + 2) == '\x01')))) {
    GetOrCreateHandle(this,param_1);
    return (TRefCountPtr<FVulkanShaderModule>)pFVar6;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&FVulkanShader::VulkanShaderModulesMapCS);
  this_00 = &this->_padding_;
  if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
    plVar7 = (longlong *)this->_padding_;
    if ((longlong *)this->_padding_ == (longlong *)0x0) {
      plVar7 = &this->_padding_;
    }
    iVar4 = *(int *)((longlong)plVar7 + (ulonglong)((int)this->_padding_ - 1U & local_res18[0]) * 4)
    ;
    if (iVar4 != -1) {
      do {
        lVar1 = *this_00 + (longlong)iVar4 * 0x18;
        if (*(uint *)(*this_00 + (longlong)iVar4 * 0x18) == local_res18[0]) {
          plVar7 = (longlong *)(lVar1 + 8);
          if (lVar1 == 0) {
            plVar7 = (longlong *)0x0;
          }
          if (plVar7 != (longlong *)0x0) {
            pFVar6->_padding_ = 0;
            lVar1 = *plVar7;
            pFVar6->_padding_ = lVar1;
            if (lVar1 != 0) {
              LOCK();
              *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
              UNLOCK();
            }
            goto LAB_145bac459;
          }
          break;
        }
        iVar4 = *(int *)(lVar1 + 0x10);
      } while (iVar4 != -1);
    }
  }
  if (bVar3) {
    if ((*(char *)((longlong)&this->_padding_ + 4) != '\b') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("GetFrequency() == SF_RayHitGroup",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanShaders.cpp"
                           ,0x2a9,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      TVar5.Reference = (FVulkanShaderModule *)(*pcVar2)();
      return (TRefCountPtr<FVulkanShaderModule>)TVar5.Reference;
    }
    if (*(char *)((longlong)&this->_padding_ + 1) != '\x02') {
LAB_145bac39c:
      pFVar6->_padding_ = 0;
      goto LAB_145bac459;
    }
    FVulkanShader::GetSpirvCode(&local_98,&this->AnyHitSpirvContainer);
    CreateShaderModule((FVulkanDevice *)local_f8,(FSpirvCode *)this->_padding_);
    local_c8 = (FVulkanSamplerState *)local_res18;
    local_c0 = (FVulkanSamplerState *)local_f8;
    TSet<TTuple<unsigned_int,TRefCountPtr<FVulkanShaderModule>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TRefCountPtr<FVulkanShaderModule>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<unsigned_int_const_&,TRefCountPtr<FVulkanShaderModule>_const_&>_>
              ((TSet<TTuple<unsigned_int,TRefCountPtr<FVulkanShaderModule>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TRefCountPtr<FVulkanShaderModule>,0>,FDefaultSetAllocator>
                *)this_00,
               (TPairInitializer<unsigned_int_const_&,TRefCountPtr<FVulkanShaderModule>_const_&> *)
               &stack0x00000008,(bool *)&local_c8);
    pFVar8 = (FVulkanSamplerState *)local_f8._0_8_;
    if (local_98.UncompressedCode.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.UncompressedCode.AllocatorInstance.Data);
      pFVar8 = (FVulkanSamplerState *)local_f8._0_8_;
    }
  }
  else if (bVar10) {
    FVulkanShader::GetSpirvCode(&local_58,(FSpirvContainer *)&this->_padding_);
    CreateShaderModule((FVulkanDevice *)local_e8,(FSpirvCode *)this->_padding_);
    local_a8 = local_res18;
    local_a0 = local_e8;
    TSet<TTuple<unsigned_int,TRefCountPtr<FVulkanShaderModule>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TRefCountPtr<FVulkanShaderModule>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<unsigned_int_const_&,TRefCountPtr<FVulkanShaderModule>_const_&>_>
              ((TSet<TTuple<unsigned_int,TRefCountPtr<FVulkanShaderModule>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TRefCountPtr<FVulkanShaderModule>,0>,FDefaultSetAllocator>
                *)this_00,
               (TPairInitializer<unsigned_int_const_&,TRefCountPtr<FVulkanShaderModule>_const_&> *)
               (local_e8 + 8),(bool *)&local_a8);
    pFVar8 = (FVulkanSamplerState *)local_e8._0_8_;
    if (local_58.UncompressedCode.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.UncompressedCode.AllocatorInstance.Data);
      pFVar8 = (FVulkanSamplerState *)local_e8._0_8_;
    }
  }
  else {
    if ((*(char *)((longlong)&this->_padding_ + 4) != '\b') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("GetFrequency() == SF_RayHitGroup",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanShaders.cpp"
                           ,0x2b5,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      TVar5.Reference = (FVulkanShaderModule *)(*pcVar2)();
      return (TRefCountPtr<FVulkanShaderModule>)TVar5.Reference;
    }
    if (*(char *)((longlong)&this->_padding_ + 2) != '\x02') goto LAB_145bac39c;
    FVulkanShader::GetSpirvCode(&local_78,&this->IntersectionSpirvContainer);
    CreateShaderModule((FVulkanDevice *)(local_f8 + 8),(FSpirvCode *)this->_padding_);
    local_b8 = (VkDevice_T *)local_res18;
    local_b0 = local_f8 + 8;
    TSet<TTuple<unsigned_int,TRefCountPtr<FVulkanShaderModule>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TRefCountPtr<FVulkanShaderModule>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<unsigned_int_const_&,TRefCountPtr<FVulkanShaderModule>_const_&>_>
              ((TSet<TTuple<unsigned_int,TRefCountPtr<FVulkanShaderModule>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TRefCountPtr<FVulkanShaderModule>,0>,FDefaultSetAllocator>
                *)&this->_padding_,
               (TPairInitializer<unsigned_int_const_&,TRefCountPtr<FVulkanShaderModule>_const_&> *)
               (local_res18 + 2),(bool *)&local_b8);
    pFVar8 = (FVulkanSamplerState *)local_f8._8_8_;
    if (local_78.UncompressedCode.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.UncompressedCode.AllocatorInstance.Data);
      pFVar8 = (FVulkanSamplerState *)local_f8._8_8_;
    }
  }
  if (1 < (int)this->_padding_) {
    this_01 = (FVulkanDevice *)this->_padding_;
    ::FString::PrintfImpl(&local_d8,L"%s : (FVulkanShader*)0x%p");
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_d8.Data.ArrayNum != 0) {
      FVar9.Data = local_d8.Data.AllocatorInstance.Data;
    }
    FVulkanDevice::VulkanSetObjectName
              (this_01,VK_OBJECT_TYPE_SHADER_MODULE,pFVar8->_padding_,(wchar_t *)FVar9.Data);
    if ((FVulkanSamplerState *)local_d8.Data.AllocatorInstance.Data != (FVulkanSamplerState *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
  }
  pFVar6->_padding_ = (longlong)pFVar8;
LAB_145bac459:
  LeaveCriticalSection((LPCRITICAL_SECTION)&FVulkanShader::VulkanShaderModulesMapCS);
  return (TRefCountPtr<FVulkanShaderModule>)pFVar6;
}

// GetRefCount @ 145bac810

uint __thiscall FVulkanRayTracingShader::GetRefCount(FVulkanRayTracingShader *this)

{
  return (uint)this[-1]._padding_ & 0x3fffffff;
}

