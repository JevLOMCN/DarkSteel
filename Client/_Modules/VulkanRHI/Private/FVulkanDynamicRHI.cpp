// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 209

// operator() @ 145add9a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
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

TRefCountPtr<FRHIBuffer> __thiscall
`FVulkanDynamicRHI::RHICreateBufferInitializer'::__l14::<lambda_1>::operator()
          (void *this,FRHICommandListBase *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  _func___cdecl_void_VkCommandBuffer_T_ptr_VkBuffer_T_ptr_ulong64_ulong64_uint *p_Var3;
  longlong lVar4;
  FVulkanCommandBuffer *pFVar5;
  VkBuffer_T *pVVar6;
  FVulkanContextCommon *this_00;
  longlong in_R8;
  VkMemoryBarrier local_38;
  
  lVar4 = *(longlong *)(in_R8 + 0x48);
  if (lVar4 == 0) {
    lVar4 = (**(code **)(GDynamicRHI->_padding_ + 0x3d0))();
    *(longlong *)(in_R8 + 0x48) = lVar4;
  }
  this_00 = (FVulkanContextCommon *)(lVar4 + -0x50);
  if (lVar4 == 0) {
    this_00 = (FVulkanContextCommon *)0x0;
  }
  pFVar5 = FVulkanContextCommon::GetCommandBuffer(this_00);
  p_Var3 = VulkanDynamicAPI::vkCmdFillBuffer;
  lVar4 = *(longlong *)this;
  uVar1 = *(undefined4 *)(lVar4 + 0x114);
  uVar2 = *(undefined4 *)(lVar4 + 0x118);
  pVVar6 = VulkanRHI::FVulkanAllocation::GetBufferHandle((FVulkanAllocation *)(lVar4 + 0x108));
  (*p_Var3)(pFVar5->CommandBufferHandle,pVVar6,(ulong64)uVar2,(ulong64)uVar1,0);
  local_38.sType = VK_STRUCTURE_TYPE_MEMORY_BARRIER;
  local_38.pNext = (void *)0x0;
  local_38.srcAccessMask = 0x1000;
  local_38.dstAccessMask = 0x18000;
  (*VulkanDynamicAPI::vkCmdPipelineBarrier)
            (pFVar5->CommandBufferHandle,0x1000,0x10000,0,1,&local_38,0,(VkBufferMemoryBarrier *)0x0
             ,0,(VkImageMemoryBarrier *)0x0);
  (param_1->MemManager).Top = *(uchar **)this;
  *(undefined8 *)this = 0;
  return (TRefCountPtr<FRHIBuffer>)(FRHIBuffer *)param_1;
}

// GetName @ 145ae6f60

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

wchar_t * __thiscall FVulkanDynamicRHI::GetName(FVulkanDynamicRHI *this)

{
  return L"Vulkan";
}

// LockBuffer_BottomOfPipe @ 145aeafa0

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
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void * __thiscall
FVulkanDynamicRHI::LockBuffer_BottomOfPipe
          (FVulkanDynamicRHI *this,FRHICommandListBase *param_1,FRHIBuffer *param_2,uint param_3,
          uint param_4,EResourceLockMode param_5)

{
  void *pvVar1;
  FLLMScope local_res18 [5];
  FMemScope local_18 [2];
  
  FLLMScope::FLLMScope(local_res18,VideoRecording|ThreadStack,false,None,Default,true);
  FMemScope::FMemScope(local_18,VideoRecording|ThreadStack,true);
  pvVar1 = FVulkanBuffer::Lock((FVulkanBuffer *)param_2,param_1,param_5,param_4,param_3);
  FMemScope::~FMemScope(local_18);
  FLLMScope::~FLLMScope(local_res18);
  return pvVar1;
}

// RHICreateBufferInitializer @ 145aedbe0

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
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRHIBufferInitializer * __thiscall
FVulkanDynamicRHI::RHICreateBufferInitializer
          (FVulkanDynamicRHI *this,FRHIBufferInitializer *__return_storage_ptr__,
          FRHICommandListBase *param_1,FRHIBufferCreateDesc *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  TEventRef<unsigned_int> TVar10;
  FVulkanBuffer *pFVar11;
  FRHIBufferInitializer *pFVar12;
  FWriteBuffer *pFVar13;
  void *_Dst;
  void *_Src;
  FRHIBuffer *this_00;
  undefined ***pppuVar14;
  longlong *plVar15;
  undefined1 auStackY_3a8 [32];
  FLLMScope local_374 [4];
  FMemScope local_368;
  undefined8 local_360;
  undefined8 local_358;
  undefined8 local_350;
  FName local_348;
  FName local_340;
  FName local_338;
  FVulkanDynamicRHI *local_330;
  FName local_328;
  FName local_320;
  FName local_318;
  undefined4 *local_310;
  longlong local_308;
  code *local_2f8 [2];
  undefined **local_2e8;
  FVulkanBuffer *local_2e0;
  undefined1 local_2d8;
  undefined ***local_2d0;
  code *local_2c8 [2];
  undefined **local_2b8;
  FVulkanBuffer *local_2b0;
  undefined ***local_2a0;
  code *local_298 [2];
  undefined **local_288;
  FRHIBuffer *local_280;
  undefined ***local_270;
  code *local_268 [2];
  undefined **local_258;
  FVulkanBuffer *local_250;
  undefined ***local_240;
  undefined1 local_238 [48];
  FRHICommandListBase *local_208;
  FRHIBuffer *local_200;
  undefined1 local_1e8 [48];
  FRHICommandListBase *local_1b8;
  FRHIBuffer *local_1b0;
  undefined1 local_198 [40];
  undefined ***local_170;
  FRHICommandListBase *local_168;
  FRHIBuffer *local_160;
  undefined1 local_148 [40];
  undefined ***local_120;
  FRHICommandListBase *local_118;
  FRHIBuffer *local_110;
  undefined1 local_f8 [40];
  undefined ***local_d0;
  FRHICommandListBase *local_c8;
  FRHIBuffer *local_c0;
  undefined1 local_a8 [40];
  undefined ***local_80;
  FRHICommandListBase *local_78;
  FRHIBuffer *local_70;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_3a8;
  local_330 = this;
  FLLMScope::FLLMScope(local_374,VideoRecording|ThreadStack,false,None,Default,true);
  FMemScope::FMemScope(&local_368,VideoRecording|ThreadStack,true);
  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
    local_360 = 0;
    TVar10 = (TEventRef<unsigned_int>)&local_360;
  }
  else {
    ::FName::FName(&local_348,param_2->DebugName);
    TVar10 = FStringTrace::GetNameRef(&local_328);
  }
  uVar1 = *(undefined8 *)TVar10;
  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
    local_358 = 0;
    TVar10 = (TEventRef<unsigned_int>)&local_358;
  }
  else {
    local_338 = param_2->ClassName;
    if (param_2->ClassName == (FName)0x0) {
      FLazyName::Resolve((FLazyName *)
                         &`public:_class_FName___cdecl_FRHIBufferCreateDesc::GetTraceClassName(void)const___ptr64'
                          ::__l2::FRHIBufferName);
      local_338 = local_340;
    }
    TVar10 = FStringTrace::GetNameRef(&local_320);
  }
  uVar2 = *(undefined8 *)TVar10;
  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
    local_350 = 0;
    TVar10 = (TEventRef<unsigned_int>)&local_350;
  }
  else {
    TVar10 = FStringTrace::GetNameRef(&local_318);
  }
  uVar3 = *(undefined8 *)TVar10;
  bVar6 = false;
  if ((-1 < MetadataChannel->Enabled) && (-1 < AssetMetadataChannel->Enabled)) {
    UE::Trace::Private::FLogScope::ScopedEnter<FMetadataAssetFields>((TLogScope<0> *)&local_310);
    bVar6 = true;
    *local_310 = (int)uVar1;
    local_310[1] = (int)uVar2;
    local_310[2] = (int)uVar3;
    *(undefined8 *)(local_308 + 0x28) = *(undefined8 *)(local_308 + 0x20);
  }
  pFVar11 = ::operator_new(0x148);
  if (pFVar11 == (FVulkanBuffer *)0x0) {
    pFVar11 = (FVulkanBuffer *)0x0;
  }
  else {
    pFVar11 = FVulkanBuffer::FVulkanBuffer
                        (pFVar11,local_330->Device,param_2,(FRHITransientHeapAllocation *)0x0);
  }
  uVar9 = (uint)param_2->_padding_;
  if ((uVar9 >> 0x14 & 1) == 0) {
    if (param_2->InitAction == Default) goto LAB_145aede06;
    _Dst = (pFVar11->CurrentBufferAlloc).HostPtr;
    if (param_2->InitAction == Zeroed) {
      if (_Dst == (void *)0x0) {
        if (pFVar11 != (FVulkanBuffer *)0x0) {
          FRHIResource::AddRef((FRHIResource *)pFVar11);
        }
        local_2a0 = (undefined ***)0x0;
        local_2b8 = &UE::Core::Private::Function::
                     TFunction_OwnedObject<`FVulkanDynamicRHI::RHICreateBufferInitializer'::`14'::<lambda_1>,1,0>
                     ::_vftable_;
        local_2c8[0] = UE::Core::Private::Function::
                       TFunctionRefCaller<`FVulkanDynamicRHI::RHICreateBufferInitializer'::__l14::<lambda_1>,TRefCountPtr<FRHIBuffer>,FRHICommandListBase_&>
                       ::Call;
        local_2b0 = pFVar11;
        FRHIBufferInitializer::FRHIBufferInitializer
                  ((FRHIBufferInitializer *)local_238,param_1,(FRHIBuffer *)pFVar11,(void *)0x0,
                   (ulonglong)(uint)param_2->_padding_,
                   (TUniqueFunction<TRefCountPtr<FRHIBuffer>___cdecl(FRHICommandListBase_&)> *)
                   local_2c8);
        FRHIBufferInitializer::FRHIBufferInitializer
                  (__return_storage_ptr__,(FRHIBufferInitializer *)local_238);
        if ((local_208 != (FRHICommandListBase *)0x0) && (local_200 != (FRHIBuffer *)0x0)) {
          FRHIBufferInitializer::RemovePendingBufferUpload((FRHIBufferInitializer *)local_238);
        }
        if (local_238._0_8_ != 0) {
          plVar15 = (longlong *)(local_238 + 0x10);
          if ((longlong *)local_238._40_8_ != (longlong *)0x0) {
            plVar15 = (longlong *)local_238._40_8_;
          }
          (**(code **)(*plVar15 + 0x10))();
        }
        if (local_2c8[0] == (code *)0x0) goto LAB_145aedec4;
        pppuVar14 = &local_2b8;
        local_120 = local_2a0;
      }
      else {
        memset(_Dst,0,(ulonglong)(uint)param_2->_padding_);
        pFVar12 = (FRHIBufferInitializer *)
                  UE::RHICore::FDefaultBufferInitializer::FDefaultBufferInitializer
                            ((FDefaultBufferInitializer *)local_f8,param_1,(FRHIBuffer *)pFVar11);
        FRHIBufferInitializer::FRHIBufferInitializer(__return_storage_ptr__,pFVar12);
        if ((local_c8 != (FRHICommandListBase *)0x0) && (local_c0 != (FRHIBuffer *)0x0)) {
          FRHIBufferInitializer::RemovePendingBufferUpload((FRHIBufferInitializer *)local_f8);
        }
        if (local_f8._0_8_ == 0) goto LAB_145aedec4;
        pppuVar14 = (undefined ***)(local_f8 + 0x10);
        local_120 = local_d0;
      }
    }
    else {
      bVar7 = _Dst == (void *)0x0;
      if (bVar7) {
        _Dst = FVulkanBuffer::Lock(pFVar11,param_1,RLM_WriteOnly,(uint)param_2->_padding_,0);
      }
      else {
        pFVar11->LockCounter = pFVar11->LockCounter + 1;
      }
      if (param_2->InitAction == ResourceArray) {
        if (param_2->InitialData == (FResourceArrayUploadInterface *)0x0) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("CreateDesc.InitialData",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanBuffer.cpp"
                             ,0x27f,L"");
          if (bVar8) {
            pcVar5 = (code *)swi(3);
            pFVar12 = (FRHIBufferInitializer *)(*pcVar5)();
            return pFVar12;
          }
        }
        uVar9 = (**(code **)((longlong)*param_2->InitialData + 0x10))();
        _Src = (void *)(**(code **)((longlong)*param_2->InitialData + 8))();
        memcpy(_Dst,_Src,(ulonglong)uVar9);
        (**(code **)((longlong)*param_2->InitialData + 0x18))();
        if (bVar7) {
          FVulkanBuffer::Unlock(pFVar11,param_1);
        }
        pFVar12 = (FRHIBufferInitializer *)
                  UE::RHICore::FDefaultBufferInitializer::FDefaultBufferInitializer
                            ((FDefaultBufferInitializer *)local_a8,param_1,(FRHIBuffer *)pFVar11);
        FRHIBufferInitializer::FRHIBufferInitializer(__return_storage_ptr__,pFVar12);
        if ((local_78 != (FRHICommandListBase *)0x0) && (local_70 != (FRHIBuffer *)0x0)) {
          FRHIBufferInitializer::RemovePendingBufferUpload((FRHIBufferInitializer *)local_a8);
        }
        if (local_a8._0_8_ == 0) goto LAB_145aedec4;
        pppuVar14 = (undefined ***)(local_a8 + 0x10);
        local_120 = local_80;
      }
      else if (param_2->InitAction == Initializer) {
        if (pFVar11 != (FVulkanBuffer *)0x0) {
          FRHIResource::AddRef((FRHIResource *)pFVar11);
        }
        local_2d0 = (undefined ***)0x0;
        local_2e8 = &UE::Core::Private::Function::
                     TFunction_OwnedObject<`FVulkanDynamicRHI::RHICreateBufferInitializer'::`38'::<lambda_2>,1,0>
                     ::_vftable_;
        local_2f8[0] = UE::Core::Private::Function::
                       TFunctionRefCaller<`FVulkanDynamicRHI::RHICreateBufferInitializer'::__l38::<lambda_2>,TRefCountPtr<FRHIBuffer>,FRHICommandListBase_&>
                       ::Call;
        local_2e0 = pFVar11;
        local_2d8 = bVar7;
        FRHIBufferInitializer::FRHIBufferInitializer
                  ((FRHIBufferInitializer *)local_1e8,param_1,(FRHIBuffer *)pFVar11,_Dst,
                   (ulonglong)(uint)param_2->_padding_,
                   (TUniqueFunction<TRefCountPtr<FRHIBuffer>___cdecl(FRHICommandListBase_&)> *)
                   local_2f8);
        FRHIBufferInitializer::FRHIBufferInitializer
                  (__return_storage_ptr__,(FRHIBufferInitializer *)local_1e8);
        if ((local_1b8 != (FRHICommandListBase *)0x0) && (local_1b0 != (FRHIBuffer *)0x0)) {
          FRHIBufferInitializer::RemovePendingBufferUpload((FRHIBufferInitializer *)local_1e8);
        }
        if (local_1e8._0_8_ != 0) {
          plVar15 = (longlong *)(local_1e8 + 0x10);
          if ((longlong *)local_1e8._40_8_ != (longlong *)0x0) {
            plVar15 = (longlong *)local_1e8._40_8_;
          }
          (**(code **)(*plVar15 + 0x10))();
        }
        if (local_2f8[0] == (code *)0x0) goto LAB_145aedec4;
        pppuVar14 = &local_2e8;
        local_120 = local_2d0;
      }
      else {
        UE::Logging::Private::BasicFatalLog
                  ((FStaticBasicLogRecord *)&PTR_u_Unknown_or_unha_1510a64d0,
                   (FLogCategoryBase *)&LogRHICore);
        this_00 = ::operator_new(0xe8);
        if (this_00 == (FRHIBuffer *)0x0) {
          this_00 = (FRHIBuffer *)0x0;
        }
        else {
          FRHIBuffer::FRHIBuffer(this_00,param_2);
          this_00->_padding_ = (longlong)&___7FInvalidBuffer_RHICore_UE__6B_;
        }
        if (this_00 != (FRHIBuffer *)0x0) {
          FRHIResource::AddRef((FRHIResource *)this_00);
        }
        local_270 = (undefined ***)0x0;
        local_288 = &
                    ___7__TFunction_OwnedObject_V<lambda_24_>__0___0FDefaultBufferInitializer_RHICore_UE__QEAA_AEAVFRHICommandListBase__PEAVFRHIBuffer__PEAX_K_Z__00_0A__Function_Private_Core_UE__6B_
        ;
        local_298[0] = UE::Core::Private::Function::
                       TFunctionRefCaller<`UE::RHICore::FDefaultBufferInitializer::FDefaultBufferInitializer'::__l1::<lambda_24_>,TRefCountPtr<FRHIBuffer>,FRHICommandListBase_&>
                       ::Call;
        local_280 = this_00;
        FRHIBufferInitializer::FRHIBufferInitializer
                  ((FRHIBufferInitializer *)local_198,param_1,this_00,(void *)0x0,0,
                   (TUniqueFunction<TRefCountPtr<FRHIBuffer>___cdecl(FRHICommandListBase_&)> *)
                   local_298);
        if (local_298[0] != (code *)0x0) {
          pppuVar14 = &local_288;
          if (local_270 != (undefined ***)0x0) {
            pppuVar14 = local_270;
          }
          (*(code *)(*pppuVar14)[2])();
        }
        FRHIBufferInitializer::FRHIBufferInitializer
                  (__return_storage_ptr__,(FRHIBufferInitializer *)local_198);
        if ((local_168 != (FRHICommandListBase *)0x0) && (local_160 != (FRHIBuffer *)0x0)) {
          FRHIBufferInitializer::RemovePendingBufferUpload((FRHIBufferInitializer *)local_198);
        }
        if (local_198._0_8_ == 0) goto LAB_145aedec4;
        pppuVar14 = (undefined ***)(local_198 + 0x10);
        local_120 = local_170;
      }
    }
  }
  else {
    if ((((int)param_2->_padding_ != 0) || (*(int *)((longlong)&param_2->_padding_ + 4) != 0)) ||
       (uVar9 != 0x100000)) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Size == 0 && Stride == 0 && Usage == EBufferUsageFlags::NullResource",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                         ,0x54f,L"");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        pFVar12 = (FRHIBufferInitializer *)(*pcVar5)();
        return pFVar12;
      }
    }
LAB_145aede06:
    if (pFVar11 != (FVulkanBuffer *)0x0) {
      FRHIResource::AddRef((FRHIResource *)pFVar11);
    }
    local_240 = (undefined ***)0x0;
    local_258 = &
                ___7__TFunction_OwnedObject_V<lambda_24_>__0___0FDefaultBufferInitializer_RHICore_UE__QEAA_AEAVFRHICommandListBase__PEAVFRHIBuffer__PEAX_K_Z__00_0A__Function_Private_Core_UE__6B_
    ;
    local_268[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`UE::RHICore::FDefaultBufferInitializer::FDefaultBufferInitializer'::__l1::<lambda_24_>,TRefCountPtr<FRHIBuffer>,FRHICommandListBase_&>
                   ::Call;
    local_250 = pFVar11;
    FRHIBufferInitializer::FRHIBufferInitializer
              ((FRHIBufferInitializer *)local_148,param_1,(FRHIBuffer *)pFVar11,(void *)0x0,0,
               (TUniqueFunction<TRefCountPtr<FRHIBuffer>___cdecl(FRHICommandListBase_&)> *)local_268
              );
    if (local_268[0] != (code *)0x0) {
      pppuVar14 = &local_258;
      if (local_240 != (undefined ***)0x0) {
        pppuVar14 = local_240;
      }
      (*(code *)(*pppuVar14)[2])();
    }
    FRHIBufferInitializer::FRHIBufferInitializer
              (__return_storage_ptr__,(FRHIBufferInitializer *)local_148);
    if ((local_118 != (FRHICommandListBase *)0x0) && (local_110 != (FRHIBuffer *)0x0)) {
      FRHIBufferInitializer::RemovePendingBufferUpload((FRHIBufferInitializer *)local_148);
    }
    if (local_148._0_8_ == 0) goto LAB_145aedec4;
    pppuVar14 = (undefined ***)(local_148 + 0x10);
  }
  if (local_120 != (undefined ***)0x0) {
    pppuVar14 = local_120;
  }
  (*(code *)(*pppuVar14)[2])();
LAB_145aedec4:
  if (bVar6) {
    lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar4 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    pFVar13 = *(FWriteBuffer **)(lVar4 + 0x20);
    if ((int)pFVar13 - *(int *)&pFVar13->Cursor < 1) {
      pFVar13 = UE::Trace::Private::Writer_NextBuffer();
    }
    *pFVar13->Cursor = '\n';
    pFVar13->Cursor = pFVar13->Cursor + 1;
    pFVar13->Committed = pFVar13->Cursor;
  }
  FMemScope::~FMemScope(&local_368);
  FLLMScope::~FLLMScope(local_374);
  return __return_storage_ptr__;
}

// RHICreateTransition @ 145aee380

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
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FVulkanDynamicRHI::RHICreateTransition
          (FVulkanDynamicRHI *this,FRHITransition *param_1,FRHITransitionCreateInfo *param_2)

{
  ForAnyElementType *pFVar1;
  ERHIPipeline *pEVar2;
  ERHIPipeline EVar3;
  ERHIPipeline EVar4;
  undefined4 uVar5;
  FVulkanSemaphore *pFVar6;
  VkEvent_T *pVVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  ERHIPipeline *pEVar10;
  bool bVar11;
  FRHITransitionInfo *local_res10;
  
  bVar11 = -1 < CpuChannel->Enabled;
  if (bVar11) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId650,"RHICreateTransition",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanBarriers.cpp"
               ,0x28a);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId650);
  }
  pVVar7 = (VkEvent_T *)0x0;
  EVar3 = param_2->SrcPipelines;
  EVar4 = param_2->DstPipelines;
  pEVar10 = (ERHIPipeline *)
            ((ulonglong)(&param_1->field_0x8f + GRHITransitionPrivateData_AlignInBytes) &
            ~(GRHITransitionPrivateData_AlignInBytes - 1));
  pFVar1 = (ForAnyElementType *)(pEVar10 + 0x18);
  pEVar2 = pEVar10 + 0x24;
  pEVar10[8] = None;
  pEVar10[9] = None;
  pEVar10[10] = None;
  pEVar10[0xb] = None;
  pEVar10[0xc] = None;
  pEVar10[0xd] = None;
  pEVar10[0xe] = None;
  pEVar10[0xf] = None;
  pEVar10[0x10] = None;
  pEVar10[0x11] = None;
  pEVar10[0x12] = None;
  pEVar10[0x13] = None;
  pEVar10[0x14] = None;
  pEVar10[0x15] = None;
  pEVar10[0x16] = None;
  pEVar10[0x17] = None;
  pFVar1->Data = (FScriptContainerElement *)0x0;
  pEVar2[0] = None;
  pEVar2[1] = None;
  pEVar2[2] = None;
  pEVar2[3] = None;
  pEVar10[0x20] = None;
  pEVar10[0x21] = None;
  pEVar10[0x22] = None;
  pEVar10[0x23] = None;
  uVar5 = (param_2->TransitionInfos).ArrayNum;
  local_res10 = (param_2->TransitionInfos).DataPtr;
  *(undefined4 *)(pEVar10 + 0x20) = uVar5;
  if (uVar5 != None) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,uVar5,0,pFVar1,uVar5,(int *)pEVar2);
    ConstructItems<FRHITransitionInfo,FRHITransitionInfo,int>(pFVar1->Data,local_res10,uVar5);
  }
  *pEVar10 = EVar3;
  pEVar10[1] = EVar4;
  if ((EVar3 != EVar4) && ((param_2->Flags & NoFence) == None)) {
    pFVar6 = ::operator_new(0x28);
    if (pFVar6 == (FVulkanSemaphore *)0x0) {
      pEVar10[8] = None;
      pEVar10[9] = None;
      pEVar10[10] = None;
      pEVar10[0xb] = None;
      pEVar10[0xc] = None;
      pEVar10[0xd] = None;
      pEVar10[0xe] = None;
      pEVar10[0xf] = None;
    }
    else {
      pFVar6 = FVulkanSemaphore::FVulkanSemaphore(pFVar6,this->Device,None,0);
      *(FVulkanSemaphore **)(pEVar10 + 8) = pFVar6;
    }
  }
  if ((((GVulkanAllowSplitBarriers != 0) && (GVulkanMaxBarriersPerBatch < 1)) &&
      (((this->Device->OptionalDeviceExtensions).field0_0x0.Packed & 0x2020100000000) ==
       0x2020100000000)) && ((EVar3 == EVar4 && ((param_2->Flags & NoSplit) == None)))) {
    uVar5 = *(undefined4 *)(pEVar10 + 0x20);
    pFVar9 = pFVar1->Data;
    pFVar8 = pFVar9 + (longlong)(int)uVar5 * 0x30;
    while( true ) {
      if (*(undefined4 *)(pEVar10 + 0x20) != uVar5) {
        `TCheckedPointerIterator<FRHITransitionInfo,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res10);
      }
      if (pFVar9 == pFVar8) break;
      if ((((byte)pFVar9[0x14] & 1) != 0) || (((byte)pFVar9[0x18] & 1) != 0)) goto LAB_145aee55e;
      pFVar9 = pFVar9 + 0x30;
    }
    pVVar7 = FVulkanDevice::GetBarrierEvent(this->Device);
LAB_145aee55e:
    *(VkEvent_T **)(pEVar10 + 0x10) = pVVar7;
  }
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// RHIGetCommandContext @ 145aef9c0

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
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

IRHIComputeContext * __thiscall
FVulkanDynamicRHI::RHIGetCommandContext
          (FVulkanDynamicRHI *this,ERHIPipeline param_1,FRHIGPUMask param_2)

{
  code *pcVar1;
  bool bVar2;
  IRHIComputeContext *pIVar3;
  FVulkanCommandListContext *pFVar4;
  FVulkanCommandListContext *pFVar5;
  
  if (((param_1 == None) || ((param_1 & param_1 - Graphics) != None)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSingleRHIPipeline(Pipeline)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanCommands.cpp"
                         ,0x3a6,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pIVar3 = (IRHIComputeContext *)(*pcVar1)();
    return pIVar3;
  }
  pFVar4 = ::operator_new(0x548);
  pFVar5 = (FVulkanCommandListContext *)0x0;
  if (pFVar4 != (FVulkanCommandListContext *)0x0) {
    pFVar5 = FVulkanCommandListContext::FVulkanCommandListContext
                       (pFVar4,this->Device,param_1,
                        (FVulkanCommandListContext *)this->Device->ImmediateContext);
  }
  pFVar4 = (FVulkanCommandListContext *)&pFVar5->_padding_;
  if (pFVar5 == (FVulkanCommandListContext *)0x0) {
    pFVar4 = (FVulkanCommandListContext *)0x0;
  }
  return (IRHIComputeContext *)pFVar4;
}

// RHIGetUploadContext @ 145aefa60

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

IRHIUploadContext * __thiscall FVulkanDynamicRHI::RHIGetUploadContext(FVulkanDynamicRHI *this)

{
  FVulkanQueue *this_00;
  uint uVar1;
  atomic<void_*> aVar2;
  FVulkanCommandBufferPool *pFVar3;
  atomic<void_*> aVar4;
  atomic<void_*> aVar5;
  
  uVar1 = FLockFreePointerListLIFORoot<64,1>::Pop
                    ((FLockFreePointerListLIFORoot<64,1> *)&FVulkanUploadContext::Pool);
  aVar5 = (atomic<void_*>)0x0;
  aVar4 = aVar5;
  if (uVar1 != 0) {
    aVar4 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar1 >> 0xe][uVar1 & 0x3fff].Payload;
    FLockFreeLinkPolicy::FreeLockFreeLink(uVar1);
  }
  if ((aVar4 == (atomic<void_*>)0x0) &&
     (aVar2 = (atomic<void_*>)::operator_new(0x50), aVar4 = aVar5, aVar2 != (atomic<void_*>)0x0)) {
    this_00 = (this->Device->Queues).Elements[0];
    *(FVulkanDevice **)((longlong)aVar2 + 8) = this->Device;
    *(undefined ***)aVar2 = &___7FVulkanContextCommon__6B_;
    *(FVulkanQueue **)((longlong)aVar2 + 0x10) = this_00;
    pFVar3 = FVulkanQueue::AcquireCommandBufferPool(this_00,Primary);
    *(FVulkanCommandBufferPool **)((longlong)aVar2 + 0x18) = pFVar3;
    *(undefined ***)aVar2 = &___7FVulkanUploadContext__6B_;
    *(undefined8 *)((longlong)aVar2 + 0x20) = 0;
    *(undefined8 *)((longlong)aVar2 + 0x28) = 0;
    *(undefined4 *)((longlong)aVar2 + 0x30) = 0;
    *(undefined8 *)((longlong)aVar2 + 0x38) = 0;
    *(undefined8 *)((longlong)aVar2 + 0x40) = 0;
    *(undefined8 *)((longlong)aVar2 + 0x48) = 0;
    aVar4 = aVar2;
  }
  aVar2 = (atomic<void_*>)((longlong)aVar4 + 0x50);
  if (aVar4 == (atomic<void_*>)0x0) {
    aVar2 = aVar5;
  }
  return (IRHIUploadContext *)aVar2;
}

// RHIIsRenderingSuspended @ 145aefb40

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

bool __thiscall FVulkanDynamicRHI::RHIIsRenderingSuspended(FVulkanDynamicRHI *this)

{
  return false;
}

// RHILockBuffer @ 145aefb50

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
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void * __thiscall
FVulkanDynamicRHI::RHILockBuffer
          (FVulkanDynamicRHI *this,FRHICommandListBase *param_1,FRHIBuffer *param_2,uint param_3,
          uint param_4,EResourceLockMode param_5)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<_public:_virtual_void_*___cdecl_FVulkanDynamicRHI::RHILockBuffer(FRHICommandListBase_&,FRHIBuffer_*,unsigned_int,unsigned_int,EResourceLockMode)_::_2_::FStat_STAT_LockBuffer_RenderThread>
  FVar6;
  void *pvVar7;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar8;
  FNameEntryId FVar9;
  FName FVar10;
  FNameEntryId FVar11;
  FLLMScope local_res18 [5];
  LARGE_INTEGER local_58;
  FMemScope local_50;
  FStatMessage local_48;
  FName local_38;
  
  FVar11.Value = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_LockBuffer_RenderThread ==
          (FThreadSafeStaticStat<_public:_virtual_void_*___cdecl_FVulkanDynamicRHI::RHILockBuffer(FRHICommandListBase_&,FRHIBuffer_*,unsigned_int,unsigned_int,EResourceLockMode)_::_2_::FStat_STAT_LockBuffer_RenderThread>
           )0x0) {
        pFVar5 = ::FName::FName((FName *)&local_58.s,"STAT_LockBuffer_RenderThread");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_LockBuffer_RenderThread,*pFVar5,
                   L"STAT_LockBuffer_RenderThread","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                   true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar6 = StatPtr_STAT_LockBuffer_RenderThread;
  if (StatPtr_STAT_LockBuffer_RenderThread ==
      (FThreadSafeStaticStat<_public:_virtual_void_*___cdecl_FVulkanDynamicRHI::RHILockBuffer(FRHICommandListBase_&,FRHIBuffer_*,unsigned_int,unsigned_int,EResourceLockMode)_::_2_::FStat_STAT_LockBuffer_RenderThread>
       )0x0) {
    pFVar5 = ::FName::FName((FName *)&local_48,"STAT_LockBuffer_RenderThread");
    FVar6 = (FThreadSafeStaticStat<_public:_virtual_void_*___cdecl_FVulkanDynamicRHI::RHILockBuffer(FRHICommandListBase_&,FRHIBuffer_*,unsigned_int,unsigned_int,EResourceLockMode)_::_2_::FStat_STAT_LockBuffer_RenderThread>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_LockBuffer_RenderThread,*pFVar5,
                         L"STAT_LockBuffer_RenderThread","STATGROUP_Quick","STATCAT_Advanced",
                         L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar10 = *(FName *)FVar6;
  bVar2 = false;
  bVar4 = false;
  local_38.ComparisonIndex.Value = 0;
  local_38.Number = 0;
  FVar9 = FVar10.ComparisonIndex.Value;
  uVar8 = FVar10.Number;
  if ((FVar9.Value != 0) || (uVar8 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_58.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_58.s,(char *)*(FName *)((longlong)FVar6 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_58.s.LowPart = FVar9.Value;
        local_58.s.HighPart = uVar8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_58.s,(wchar_t *)*(FName *)((longlong)FVar6 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanBuffer.cpp"
                   ,0x2ae);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_58.s.LowPart = FVar9.Value;
      local_58.s.HighPart = uVar8;
      local_38 = FVar10;
      FThreadStats::AddMessage(FVar10,CycleScopeStart);
      bVar3 = true;
      FVar11.Value = local_38.ComparisonIndex.Value;
      goto LAB_145aefcd0;
    }
  }
  bVar3 = false;
  FVar10 = local_38;
LAB_145aefcd0:
  FLLMScope::FLLMScope(local_res18,VideoRecording|ThreadStack,false,None,Default,true);
  FMemScope::FMemScope(&local_50,VideoRecording|ThreadStack,true);
  pvVar7 = FVulkanBuffer::Lock((FVulkanBuffer *)param_2,param_1,param_5,param_4,param_3);
  FMemScope::~FMemScope(&local_50);
  FLLMScope::~FLLMScope(local_res18);
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar10 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_48.NameAndInfo.Number = FVar10.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar11.Value;
      QueryPerformanceCounter(&local_58);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_58.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_58.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_58.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_58.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_48);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return pvVar7;
}

// RHIReleaseTransition @ 145aefec0

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
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FVulkanDynamicRHI::RHIReleaseTransition(FVulkanDynamicRHI *this,FRHITransition *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  pvVar1 = *(void **)(((ulonglong)(&param_1->field_0x8f + GRHITransitionPrivateData_AlignInBytes) &
                      ~(GRHITransitionPrivateData_AlignInBytes - 1)) + 0x18);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// RHIResumeRendering @ 145aefef0

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

void __thiscall FVulkanDynamicRHI::RHIResumeRendering(FVulkanDynamicRHI *this)

{
  return;
}

// RHISuspendRendering @ 145af1d40

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

void __thiscall FVulkanDynamicRHI::RHISuspendRendering(FVulkanDynamicRHI *this)

{
  return;
}

// RHIUnlockBuffer @ 145af1d50

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
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FVulkanDynamicRHI::RHIUnlockBuffer
          (FVulkanDynamicRHI *this,FRHICommandListBase *param_1,FRHIBuffer *param_2)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<_public:_virtual_void___cdecl_FVulkanDynamicRHI::RHIUnlockBuffer(FRHICommandListBase_&,FRHIBuffer_*)_::_2_::FStat_STAT_UnlockBuffer_RenderThread>
  FVar6;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar7;
  FNameEntryId FVar8;
  FName FVar9;
  FNameEntryId FVar10;
  FLLMScope local_res18 [2];
  LARGE_INTEGER local_res20;
  FMemScope local_58;
  FStatMessage local_50;
  FName local_40;
  
  FVar10.Value = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_UnlockBuffer_RenderThread ==
          (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FVulkanDynamicRHI::RHIUnlockBuffer(FRHICommandListBase_&,FRHIBuffer_*)_::_2_::FStat_STAT_UnlockBuffer_RenderThread>
           )0x0) {
        pFVar5 = ::FName::FName((FName *)&local_res20.s,"STAT_UnlockBuffer_RenderThread");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UnlockBuffer_RenderThread,*pFVar5,
                   L"STAT_UnlockBuffer_RenderThread","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                   true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar6 = StatPtr_STAT_UnlockBuffer_RenderThread;
  if (StatPtr_STAT_UnlockBuffer_RenderThread ==
      (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FVulkanDynamicRHI::RHIUnlockBuffer(FRHICommandListBase_&,FRHIBuffer_*)_::_2_::FStat_STAT_UnlockBuffer_RenderThread>
       )0x0) {
    pFVar5 = ::FName::FName((FName *)&local_50,"STAT_UnlockBuffer_RenderThread");
    FVar6 = (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FVulkanDynamicRHI::RHIUnlockBuffer(FRHICommandListBase_&,FRHIBuffer_*)_::_2_::FStat_STAT_UnlockBuffer_RenderThread>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UnlockBuffer_RenderThread,
                         *pFVar5,L"STAT_UnlockBuffer_RenderThread","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar9 = *(FName *)FVar6;
  bVar2 = false;
  bVar4 = false;
  local_40.ComparisonIndex.Value = 0;
  local_40.Number = 0;
  FVar8 = FVar9.ComparisonIndex.Value;
  uVar7 = FVar9.Number;
  if ((FVar8.Value != 0) || (uVar7 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res20.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res20.s,(char *)*(FName *)((longlong)FVar6 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res20.s.LowPart = FVar8.Value;
        local_res20.s.HighPart = uVar7;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res20.s,(wchar_t *)*(FName *)((longlong)FVar6 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanBuffer.cpp"
                   ,0x2b6);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res20.s.LowPart = FVar8.Value;
      local_res20.s.HighPart = uVar7;
      local_40 = FVar9;
      FThreadStats::AddMessage(FVar9,CycleScopeStart);
      bVar3 = true;
      FVar10.Value = local_40.ComparisonIndex.Value;
      goto LAB_145af1ed3;
    }
  }
  bVar3 = false;
  FVar9 = local_40;
LAB_145af1ed3:
  FLLMScope::FLLMScope(local_res18,VideoRecording|ThreadStack,false,None,Default,true);
  FMemScope::FMemScope(&local_58,VideoRecording|ThreadStack,true);
  FVulkanBuffer::Unlock((FVulkanBuffer *)param_2,param_1);
  FMemScope::~FMemScope(&local_58);
  FLLMScope::~FLLMScope(local_res18);
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar9 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_50.NameAndInfo.Number = FVar9.Number & 0xffff6fff | 0x6000;
      local_50.NameAndInfo.Index.Value = FVar10.Value;
      QueryPerformanceCounter(&local_res20);
      local_50.StatData.Pad[4] = '\0';
      local_50.StatData.Pad[5] = '\0';
      local_50.StatData.Pad[6] = '\0';
      local_50.StatData.Pad[7] = '\0';
      local_50.StatData.Pad[0] = local_res20.s.LowPart._0_1_;
      local_50.StatData.Pad[1] = local_res20.s.LowPart._1_1_;
      local_50.StatData.Pad[2] = local_res20.s.LowPart._2_1_;
      local_50.StatData.Pad[3] = local_res20.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_50);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// RHIUpdateAllocationTags @ 145af20b0

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
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FVulkanDynamicRHI::RHIUpdateAllocationTags
          (FVulkanDynamicRHI *this,FRHICommandListBase *param_1,FRHIBuffer *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (((!GRHICommandList.bLatchedBypass) || ((param_1->PersistentState).bImmediate == '\0')) &&
     (param_1->bExecuting == false)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("RHICmdList.IsBottomOfPipe()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanBuffer.cpp"
                       ,0x2bf,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// RemoveDebugLayerCallback @ 145af3160

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

void __thiscall FVulkanDynamicRHI::RemoveDebugLayerCallback(FVulkanDynamicRHI *this)

{
  _func___cdecl_void *UNRECOVERED_JUMPTABLE;
  
  if (this->Messenger != (VkDebugUtilsMessengerEXT_T *)0x0) {
    UNRECOVERED_JUMPTABLE =
         (*VulkanDynamicAPI::vkGetInstanceProcAddr)
                   (this->Instance,"vkDestroyDebugUtilsMessengerEXT");
    if (UNRECOVERED_JUMPTABLE != (_func___cdecl_void *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145af31a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(this->Instance,this->Messenger,0);
      return;
    }
  }
  return;
}

// SetupDebugLayerCallback @ 145af4ac0

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
/* WARNING: Exceeded maximum restarts with more pending */

void __thiscall FVulkanDynamicRHI::SetupDebugLayerCallback(FVulkanDynamicRHI *this)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  TConsoleVariableData<int> *pTVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  _func___cdecl_void *p_Var10;
  undefined4 local_38;
  undefined8 local_34;
  undefined8 uStack_2c;
  undefined8 local_24;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 local_c;
  
  if ((this->ActiveDebugLayerExtension == DebugUtilsExtension) &&
     (p_Var10 = (*VulkanDynamicAPI::vkGetInstanceProcAddr)
                          (this->Instance,"vkCreateDebugUtilsMessengerEXT"),
     pTVar4 = GValidationCvar.Ref, p_Var10 != (_func___cdecl_void *)0x0)) {
    local_34 = 0;
    uStack_2c = 0;
    uStack_14 = 0;
    uStack_10 = 0;
    local_24 = 0;
    uStack_1c = 0;
    uStack_18 = 0;
    local_c = 0;
    local_38 = 0x3b9cbe04;
    bVar5 = IsInParallelRenderingThread();
    if ((!bVar5) &&
       (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6409875433831007955>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x6d3,"IsInParallelRenderingThread()"), bVar5)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    iVar9 = pTVar4->ShadowedValue[1];
    uVar2 = 0;
    if (0 < iVar9) {
      uVar2 = 0x1000;
    }
    uVar6 = 0;
    if (1 < iVar9) {
      uVar6 = 0x100;
    }
    uVar7 = 0;
    if (2 < iVar9) {
      uVar7 = 0x10;
    }
    uVar8 = 0;
    if (2 < iVar9) {
      uVar8 = 4;
    }
    uVar3 = 0;
    if (0 < iVar9) {
      uVar3 = 3;
    }
    local_24 = CONCAT44(uVar8 | uVar3,uVar2 | uVar6 | uVar7);
    uStack_18 = 0x45ae2330;
    uStack_14 = 1;
    iVar9 = (*p_Var10)(this->Instance,&local_38,0,&this->Messenger);
    if ((iVar9 != 0) &&
       (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_1534033189939445556>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanDebug.cpp"
                           ,0xcc,"Result == VK_SUCCESS"), bVar5)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// UnlockBuffer_BottomOfPipe @ 145af6290

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
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FVulkanDynamicRHI::UnlockBuffer_BottomOfPipe
          (FVulkanDynamicRHI *this,FRHICommandListBase *param_1,FRHIBuffer *param_2)

{
  FLLMScope local_res18 [2];
  FMemScope local_res20;
  
  FLLMScope::FLLMScope(local_res18,VideoRecording|ThreadStack,false,None,Default,true);
  FMemScope::FMemScope(&local_res20,VideoRecording|ThreadStack,true);
  FVulkanBuffer::Unlock((FVulkanBuffer *)param_2,param_1);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res18);
  return;
}

// SetupInstanceLayers @ 145b350c0

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

TArray<char_const_*,TSizedDefaultAllocator<32>_> * __thiscall
FVulkanDynamicRHI::SetupInstanceLayers
          (FVulkanDynamicRHI *this,
          TArray<char_const_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArray<TUniquePtr<FVulkanInstanceExtension,TDefaultDelete<FVulkanInstanceExtension>_>,TSizedDefaultAllocator<32>_>
          *param_1)

{
  FVulkanIntanceSetupHelper local_18;
  
  local_18.ActiveDebugLayerExtension = None;
  local_18.HelperTypeName = L"instance";
  SetupLayers<FVulkanIntanceSetupHelper,FVulkanInstanceExtension>
            (__return_storage_ptr__,&local_18,param_1);
  this->ActiveDebugLayerExtension = local_18.ActiveDebugLayerExtension;
  return __return_storage_ptr__;
}

// SetupValidationRequests @ 145b35110

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl FVulkanDynamicRHI::SetupValidationRequests(void)

{
  TConsoleVariableData<int> *pTVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  int local_res8 [2];
  undefined8 local_res10;
  
  pTVar1 = GValidationCvar.Ref;
  bVar2 = IsInParallelGameThread();
  if (bVar2) {
LAB_145b35141:
    lVar4 = 0;
  }
  else {
    bVar2 = IsInGameThread();
    lVar4 = 4;
    if (bVar2) goto LAB_145b35141;
  }
  local_res8[0] = *(int *)((longlong)pTVar1->ShadowedValue + lVar4);
  pwVar5 = FCommandLine::Get();
  bVar2 = FParse::Param(pwVar5,L"vulkandebug");
  if (bVar2) {
    iVar3 = 2;
  }
  else {
    pwVar5 = FCommandLine::Get();
    bVar2 = FParse::Value(pwVar5,L"vulkanvalidation=",local_res8);
    iVar3 = local_res8[0];
    if (!bVar2) goto LAB_145b351a5;
  }
  local_res10 = 0;
  IConsoleVariable::Set<int>
            ((IConsoleVariable *)GValidationCvar._padding_,iVar3,ECVF_SetByCommandline,(FName)0x0);
LAB_145b351a5:
  pwVar5 = FCommandLine::Get();
  bVar2 = FParse::Param(pwVar5,L"gpuvalidation");
  if (bVar2) {
    iVar3 = (**(code **)(*(longlong *)GValidationCvar._padding_ + 200))();
    if (iVar3 < 2) {
      local_res10 = 0;
      IConsoleVariable::Set<int>
                ((IConsoleVariable *)GValidationCvar._padding_,2,ECVF_SetByCommandline,(FName)0x0);
    }
    local_res10 = 0;
    IConsoleVariable::Set<int>
              ((IConsoleVariable *)GGPUValidationCvar._padding_,2,ECVF_SetByCommandline,(FName)0x0);
  }
  pTVar1 = GValidationCvar.Ref;
  bVar2 = IsInParallelGameThread();
  if ((bVar2) || (bVar2 = IsInGameThread(), bVar2)) {
    iVar3 = pTVar1->ShadowedValue[0];
  }
  else {
    iVar3 = pTVar1->ShadowedValue[1];
  }
  GRHIGlobals.IsDebugLayerEnabled = 0 < iVar3;
  return;
}

// operator() @ 145b53b20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
`FVulkanDynamicRHI::RHIRead3DSurfaceFloatData'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListBase *param_1)

{
  _func___cdecl_void_VkCommandBuffer_T_ptr_VkImage_T_ptr_VkImageLayout_VkBuffer_T_ptr_uint_VkBufferImageCopy_ptr
  *p_Var1;
  FVulkanCommandListContext *this_00;
  FVulkanCommandBuffer *pFVar2;
  VkBuffer_T *pVVar3;
  undefined1 auStackY_168 [32];
  FVulkanPipelineBarrier local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  this_00 = FVulkanCommandListContext::Get(param_1);
  pFVar2 = FVulkanContextCommon::GetCommandBuffer((FVulkanContextCommon *)this_00);
  p_Var1 = VulkanDynamicAPI::vkCmdCopyImageToBuffer;
  pVVar3 = VulkanRHI::FStagingBuffer::GetHandle(*(FStagingBuffer **)((longlong)this + 0x38));
  (*p_Var1)(pFVar2->CommandBufferHandle,
            *(VkImage_T **)(*(longlong *)((longlong)this + 0x40) + 0x170),
            VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL,pVVar3,1,this);
  local_138.MemoryBarriers.ArrayMax = 1;
  local_138.MemoryBarriers.AllocatorInstance.SecondaryData = (ForElementType<VkMemoryBarrier2>)0x0;
  local_138.MemoryBarriers.ArrayNum = 0;
  local_138.ImageBarriers.AllocatorInstance.SecondaryData =
       (ForElementType<VkImageMemoryBarrier2>)0x0;
  local_138.ImageBarriers.ArrayNum = 0;
  local_138.ImageBarriers.ArrayMax = 2;
  local_138.BufferBarriers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.BufferBarriers.ArrayNum = 0;
  local_138.BufferBarriers.ArrayMax = 0;
  FVulkanPipelineBarrier::AddMemoryBarrier(&local_138,0x1000,0x2000,0x1000,0x4000);
  FVulkanPipelineBarrier::Execute(&local_138,pFVar2);
  if (local_138.BufferBarriers.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.BufferBarriers.AllocatorInstance.Data);
  }
  if (local_138.ImageBarriers.AllocatorInstance.SecondaryData !=
      (ForElementType<VkImageMemoryBarrier2>)0x0) {
    FMemory::Free((void *)local_138.ImageBarriers.AllocatorInstance.SecondaryData);
  }
  if (local_138.MemoryBarriers.AllocatorInstance.SecondaryData !=
      (ForElementType<VkMemoryBarrier2>)0x0) {
    FMemory::Free((void *)local_138.MemoryBarriers.AllocatorInstance.SecondaryData);
  }
  return;
}

// operator() @ 145b53c60

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
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FVulkanDynamicRHI::RHIReadSurfaceFloatData'::__l2::<lambda_1>::operator()
          (void *this,FVulkanDevice *param_1,FVulkanTexture *param_2,uint param_3,uint param_4,
          TIntRect<int> *param_5,TArray<FFloat16Color,TSizedDefaultAllocator<32>_> *param_6)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  undefined8 *puVar6;
  void *pvVar7;
  byte bVar8;
  longlong lVar9;
  uint uVar10;
  undefined2 *puVar11;
  ulonglong uVar12;
  undefined1 auStackY_138 [32];
  FStagingBuffer *local_100;
  uint local_f8;
  longlong local_f0;
  undefined8 local_e8;
  int iStack_e0;
  int iStack_dc;
  uint local_d8;
  uint uStack_d4;
  uint uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 uStack_c0;
  int iStack_bc;
  int local_b8;
  undefined4 uStack_b4;
  void *local_b0;
  FStagingManager *local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  FStagingBuffer *pFStack_60;
  FVulkanTexture *local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_138;
  local_f8 = param_3;
  if ((param_2->StorageFormat != VK_FORMAT_R16G16B16A16_SFLOAT) &&
     (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6901631674346373463>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRenderTarget.cpp"
                         ,0x157,"VulkanTexture.StorageFormat == VK_FORMAT_R16G16B16A16_SFLOAT"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_f0 = (**(code **)(param_2->_padding_ + 0x20))(param_2);
  local_a8 = &param_1->StagingManager;
  bVar8 = (byte)param_3;
  uVar10 = (*(int *)(local_f0 + 0x28) >> (bVar8 & 0x1f)) *
           (*(int *)(local_f0 + 0x24) >> (bVar8 & 0x1f)) * 8;
  local_100 = VulkanRHI::FStagingManager::AcquireBuffer
                        (local_a8,uVar10,2,VK_MEMORY_PROPERTY_HOST_CACHED_BIT);
  uVar4 = VulkanRHI::FStagingBuffer::GetSize(local_100);
  if ((uVar4 < uVar10) &&
     (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6901631674346373472>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRenderTarget.cpp"
                         ,0x160,"StagingBuffer->GetSize() >= Size"), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar9 = local_f0;
  local_d8 = param_2->FullAspectMask;
  uVar4 = 0;
  local_e8 = 0;
  iStack_e0 = *(int *)(local_f0 + 0x24) >> (bVar8 & 0x1f);
  local_c8 = 0;
  uStack_c0 = 0;
  if (iStack_e0 < 1) {
    iStack_e0 = 1;
  }
  iStack_dc = *(int *)(local_f0 + 0x28) >> (bVar8 & 0x1f);
  uStack_d0 = param_4;
  if (iStack_dc < 1) {
    iStack_dc = 1;
  }
  uStack_cc = 1;
  uStack_b4 = 1;
  uStack_d4 = param_3;
  iStack_bc = iStack_e0;
  local_b8 = iStack_dc;
  bVar3 = IsInRenderingThread();
  if ((!bVar3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                         ,0x1594,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uStack_90 = CONCAT44(iStack_dc,iStack_e0);
  local_88 = CONCAT44(uStack_d4,local_d8);
  uStack_80 = CONCAT44(uStack_cc,uStack_d0);
  pFStack_60 = local_100;
  local_98 = local_e8;
  uStack_70 = CONCAT44(iStack_bc,uStack_c0);
  local_68 = CONCAT44(uStack_b4,local_b8);
  local_78 = local_c8;
  local_58 = param_2;
  if (((GRHICommandList.bLatchedBypass == false) ||
      ((GRHICommandList.CommandListImmediate._667_1_ & 0x20) == 0)) &&
     (GRHICommandList.CommandListImmediate._100_1_ == '\0')) {
    puVar6 = FMemStackBase::Alloc((FMemStackBase *)&GRHICommandList.CommandListImmediate,0x60,8);
    GRHICommandList.CommandListImmediate._96_4_ = GRHICommandList.CommandListImmediate._96_4_ + 1;
    *(undefined8 **)GRHICommandList.CommandListImmediate._48_8_ = puVar6;
    GRHICommandList.CommandListImmediate._48_8_ = puVar6 + 1;
    *(undefined8 *)GRHICommandList.CommandListImmediate._48_8_ = 0;
    *puVar6 = &TRHILambdaCommand<FRHICommandListImmediate,``FVulkanDynamicRHI::RHIReadSurfaceFloatData'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar6[2] = local_98;
    puVar6[3] = uStack_90;
    puVar6[4] = local_88;
    puVar6[5] = uStack_80;
    puVar6[6] = local_78;
    puVar6[7] = uStack_70;
    puVar6[8] = local_68;
    puVar6[9] = pFStack_60;
    puVar6[10] = local_58;
    puVar6[0xb] = L"TRHILambdaCommand";
  }
  else {
    ``FVulkanDynamicRHI::RHIReadSurfaceFloatData'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::
    operator()(&local_98,(FRHICommandListBase *)&GRHICommandList.CommandListImmediate);
  }
  FRHICommandListImmediate::SubmitAndBlockUntilGPUIdle(&GRHICommandList.CommandListImmediate);
  VulkanRHI::FStagingBuffer::InvalidateMappedMemory(local_100);
  TArray<FFloat16Color,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (param_6,(*(int *)((longlong)&param_5->field0_0x0 + 0xc) -
                     *(int *)((longlong)&param_5->field0_0x0 + 4)) *
                     (*(int *)((longlong)&param_5->field0_0x0 + 8) - *(int *)&param_5->field0_0x0),
             Default);
  pvVar7 = VulkanRHI::FStagingBuffer::GetMappedPointer(local_100);
  iVar5 = *(int *)((longlong)&param_5->field0_0x0 + 4);
  local_b0 = pvVar7;
  if (iVar5 < *(int *)((longlong)&param_5->field0_0x0 + 0xc)) {
    do {
      uVar12 = (ulonglong)*(int *)&param_5->field0_0x0;
      puVar11 = (undefined2 *)
                ((longlong)pvVar7 +
                ((longlong)((*(int *)(lVar9 + 0x24) >> ((byte)param_3 & 0x1f)) * iVar5) + uVar12) *
                8);
      if (*(int *)&param_5->field0_0x0 < *(int *)((longlong)&param_5->field0_0x0 + 8)) {
        do {
          uVar10 = 0;
          if ((int)uVar4 < param_6->ArrayNum) {
            uVar10 = ~uVar4 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          uVar10 = (int)uVar12 + 1;
          uVar12 = (ulonglong)uVar10;
          lVar9 = (longlong)(int)uVar4;
          uVar4 = uVar4 + 1;
          pFVar1 = (param_6->AllocatorInstance).Data + lVar9 * 8;
          *(undefined2 *)pFVar1 = *puVar11;
          *(undefined2 *)(pFVar1 + 2) = puVar11[1];
          *(undefined2 *)(pFVar1 + 4) = puVar11[2];
          *(undefined2 *)(pFVar1 + 6) = puVar11[3];
          puVar11 = puVar11 + 4;
          pvVar7 = local_b0;
          param_3 = local_f8;
        } while ((int)uVar10 < *(int *)((longlong)&param_5->field0_0x0 + 8));
      }
      iVar5 = iVar5 + 1;
      lVar9 = local_f0;
    } while (iVar5 < *(int *)((longlong)&param_5->field0_0x0 + 0xc));
  }
  VulkanRHI::FStagingManager::ReleaseBuffer(local_a8,(FVulkanContextCommon *)0x0,&local_100);
  return;
}

// RHIBeginRenderQueryBatch_TopOfPipe @ 145b70490

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
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FVulkanDynamicRHI::RHIBeginRenderQueryBatch_TopOfPipe
          (FVulkanDynamicRHI *this,FRHICommandListBase *param_1,ERenderQueryType param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *local_res20;
  
  if (param_2 == RQT_Occlusion) {
    lVar5 = 0x350;
  }
  else {
    if (param_2 != RQT_AbsoluteTime) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                         ,0x60c,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    lVar5 = 0x310;
  }
  plVar6 = (longlong *)((longlong)&(param_1->MemManager).Top + lVar5);
  if (*plVar6 != 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("QueryBatchData[GPUIndex] == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanQuery.cpp"
                       ,0x123,L"A query batch for this type has already begun on this command list."
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FVulkanSyncPoint::Create((EVulkanSyncPointType)&local_res20,(wchar_t *)0x0);
  *plVar6 = (longlong)local_res20;
  piVar1 = (int *)(local_res20 + 1);
  LOCK();
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  if (local_res20 != (undefined8 *)0x0) {
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      if (piVar1 == (int *)0x0) {
        local_res20 = (undefined8 *)0x0;
      }
      if (local_res20 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145b7055a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)*local_res20)(local_res20,1);
        return;
      }
    }
  }
  return;
}

// RHICalcRayTracingGeometrySize @ 145b71830

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
/* WARNING: Enum "VkAccelerationStructureTypeKHR": Some values do not have unique names */
/* WARNING: Enum "VkGeometryTypeKHR": Some values do not have unique names */
/* WARNING: Enum "VkIndexType": Some values do not have unique names */
/* WARNING: Enum "EVertexElementType": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FRayTracingAccelerationStructureSize * __thiscall
FVulkanDynamicRHI::RHICalcRayTracingGeometrySize
          (FVulkanDynamicRHI *this,FRayTracingAccelerationStructureSize *__return_storage_ptr__,
          FRayTracingGeometryInitializer *param_1)

{
  uint uVar1;
  ERayTracingGeometryType EVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  ERayTracingAccelerationStructureFlags EVar6;
  FRayTracingAccelerationStructureSize *pFVar7;
  ERayTracingAccelerationStructureFlags EVar8;
  undefined1 auStackY_1c8 [32];
  FRHIBuffer *local_178 [2];
  FRayTracingGeometrySegment *local_168;
  int iStack_160;
  undefined4 uStack_15c;
  TArrayView<FRayTracingGeometrySegment_const_,int> local_158;
  FVkRtBLASBuildData local_148;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  local_148.Segments.ArrayMax = 1;
  local_148.GeometryInfo._68_8_ = 0;
  local_148.GeometryInfo.scratchData.deviceAddress._4_4_ = 0;
  local_148.SizesInfo.buildScratchSize._4_4_ = 0;
  local_148.Segments.AllocatorInstance.SecondaryData =
       (ForElementType<VkAccelerationStructureGeometryKHR>)0x0;
  local_148.Segments.ArrayNum = 0;
  local_148.Ranges.AllocatorInstance.SecondaryData =
       (ForElementType<VkAccelerationStructureBuildRangeInfoKHR>)0x0;
  local_148.Ranges.ArrayNum = 0;
  EVar6 = FastBuild;
  if (param_1->bFastBuild == false) {
    EVar6 = FastTrace;
  }
  local_148.Ranges.ArrayMax = 1;
  local_148.GeometryInfo.sType = VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_BUILD_GEOMETRY_INFO_KHR;
  local_148.SizesInfo.sType = VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_BUILD_SIZES_INFO_KHR;
  local_148.GeometryInfo._4_8_ = 0;
  local_148.GeometryInfo._12_8_ = 0;
  EVar8 = EVar6 | AllowUpdate;
  if (param_1->bAllowUpdate == false) {
    EVar8 = EVar6;
  }
  local_148.GeometryInfo.flags = 0;
  local_148.GeometryInfo.mode = VK_BUILD_ACCELERATION_STRUCTURE_MODE_BUILD_KHR;
  local_148.GeometryInfo._28_8_ = 0;
  local_148.GeometryInfo._36_8_ = 0;
  local_148.GeometryInfo._44_8_ = 0;
  local_148.GeometryInfo._52_8_ = 0;
  local_148.GeometryInfo._60_8_ = 0;
  local_148.SizesInfo._4_8_ = 0;
  local_148.SizesInfo.pNext._4_4_ = 0;
  local_148.SizesInfo.accelerationStructureSize._0_4_ = 0;
  local_148.SizesInfo.accelerationStructureSize._4_4_ = 0;
  local_148.SizesInfo.updateScratchSize._0_4_ = 0;
  local_148.SizesInfo.updateScratchSize._4_4_ = 0;
  local_148.SizesInfo.buildScratchSize._0_4_ = 0;
  if ((((param_1->bFastBuild == false) && (param_1->bAllowUpdate == false)) &&
      (param_1->bAllowCompaction != false)) &&
     ((GVulkanRayTracingAllowCompaction != 0 &&
      ((uint)GVulkanRayTracingCompactionMinPrimitiveCount < param_1->TotalPrimitiveCount)))) {
    EVar8 = EVar8 | AllowCompaction;
  }
  local_178[0] = (param_1->IndexBuffer).Reference;
  uVar1 = param_1->IndexBufferOffset;
  if (local_178[0] != (FRHIBuffer *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_178[0]);
  }
  local_168 = (FRayTracingGeometrySegment *)(param_1->Segments).AllocatorInstance.Data;
  EVar2 = param_1->GeometryType;
  iVar3 = (param_1->Segments).ArrayNum;
  if (iVar3 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FRayTracingAccelerationStructureSize *)(*pcVar4)();
      return pFVar7;
    }
  }
  local_158._12_4_ = uStack_15c;
  local_158.ArrayNum = iVar3;
  local_158.DataPtr = local_168;
  iStack_160 = iVar3;
  GetBLASBuildData(this->Device->Device,&local_158,EVar2,(FRHIBuffer *)local_178,uVar1,EVar8,Build,
                   Size,&local_148);
  __return_storage_ptr__->ResultSize = 0;
  __return_storage_ptr__->BuildScratchSize = 0;
  __return_storage_ptr__->UpdateScratchSize = 0;
  __return_storage_ptr__->ResultSize =
       CONCAT44(local_148.SizesInfo.accelerationStructureSize._4_4_,
                (undefined4)local_148.SizesInfo.accelerationStructureSize) + -1 +
       (ulonglong)GRHIGlobals.RayTracing.AccelerationStructureAlignment &
       -(ulonglong)GRHIGlobals.RayTracing.AccelerationStructureAlignment;
  __return_storage_ptr__->BuildScratchSize =
       CONCAT44(local_148.SizesInfo.buildScratchSize._4_4_,
                (undefined4)local_148.SizesInfo.buildScratchSize) + -1 +
       (ulonglong)GRHIGlobals.RayTracing.ScratchBufferAlignment &
       -(ulonglong)GRHIGlobals.RayTracing.ScratchBufferAlignment;
  __return_storage_ptr__->UpdateScratchSize =
       CONCAT44(local_148.SizesInfo.updateScratchSize._4_4_,
                (undefined4)local_148.SizesInfo.updateScratchSize) + -1 +
       (ulonglong)GRHIGlobals.RayTracing.ScratchBufferAlignment &
       -(ulonglong)GRHIGlobals.RayTracing.ScratchBufferAlignment;
  if (local_148.Ranges.AllocatorInstance.SecondaryData !=
      (ForElementType<VkAccelerationStructureBuildRangeInfoKHR>)0x0) {
    FMemory::Free((void *)local_148.Ranges.AllocatorInstance.SecondaryData);
  }
  if (local_148.Segments.AllocatorInstance.SecondaryData !=
      (ForElementType<VkAccelerationStructureGeometryKHR>)0x0) {
    FMemory::Free((void *)local_148.Segments.AllocatorInstance.SecondaryData);
  }
  return __return_storage_ptr__;
}

// RHICalcRayTracingSceneSize @ 145b71a60

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
/* WARNING: Enum "VkGeometryTypeKHR": Some values do not have unique names */
/* WARNING: Enum "VkIndexType": Some values do not have unique names */
/* WARNING: Enum "VkAccelerationStructureTypeKHR": Some values do not have unique names */

FRayTracingAccelerationStructureSize * __thiscall
FVulkanDynamicRHI::RHICalcRayTracingSceneSize
          (FVulkanDynamicRHI *this,FRayTracingAccelerationStructureSize *__return_storage_ptr__,
          FRayTracingSceneInitializer *param_1)

{
  FVkRtTLASBuildData local_e8;
  
  local_e8.Geometry._4_8_ = 0;
  local_e8.Geometry._12_8_ = 0;
  local_e8.Geometry.sType = VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_GEOMETRY_KHR;
  local_e8.Geometry._20_8_ = 0;
  local_e8.Geometry.geometry._4_8_ = 0;
  local_e8.Geometry.geometry._12_8_ = 0;
  local_e8.Geometry.geometry._20_8_ = 0;
  local_e8.Geometry.geometry._28_8_ = 0;
  local_e8.Geometry.geometry._36_8_ = 0;
  local_e8.Geometry.geometry._44_8_ = 0;
  local_e8.Geometry.geometry._52_8_ = 0;
  local_e8.Geometry._84_8_ = 0;
  local_e8.Geometry._92_4_ = 0;
  local_e8.GeometryInfo.sType = VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_BUILD_GEOMETRY_INFO_KHR;
  local_e8.GeometryInfo._4_8_ = 0;
  local_e8.GeometryInfo._12_8_ = 0;
  local_e8.GeometryInfo._68_8_ = 0;
  local_e8.GeometryInfo.scratchData.deviceAddress._4_4_ = 0;
  local_e8.SizesInfo.buildScratchSize._4_4_ = 0;
  local_e8.GeometryInfo.flags = 0;
  local_e8.GeometryInfo.mode = VK_BUILD_ACCELERATION_STRUCTURE_MODE_BUILD_KHR;
  local_e8.GeometryInfo._28_8_ = 0;
  local_e8.SizesInfo.sType = VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_BUILD_SIZES_INFO_KHR;
  local_e8.GeometryInfo._36_8_ = 0;
  local_e8.GeometryInfo._44_8_ = 0;
  local_e8.GeometryInfo._52_8_ = 0;
  local_e8.GeometryInfo._60_8_ = 0;
  local_e8.SizesInfo._4_8_ = 0;
  local_e8.SizesInfo.pNext._4_4_ = 0;
  local_e8.SizesInfo.accelerationStructureSize._0_4_ = 0;
  local_e8.SizesInfo.accelerationStructureSize._4_4_ = 0;
  local_e8.SizesInfo.updateScratchSize._0_4_ = 0;
  local_e8.SizesInfo.updateScratchSize._4_4_ = 0;
  local_e8.SizesInfo.buildScratchSize._0_4_ = 0;
  GetTLASBuildData(this->Device->Device,param_1->MaxNumInstances,0,param_1->BuildFlags,Build,
                   &local_e8);
  __return_storage_ptr__->ResultSize =
       CONCAT44(local_e8.SizesInfo.accelerationStructureSize._4_4_,
                (undefined4)local_e8.SizesInfo.accelerationStructureSize);
  __return_storage_ptr__->BuildScratchSize =
       CONCAT44(local_e8.SizesInfo.buildScratchSize._4_4_,
                (undefined4)local_e8.SizesInfo.buildScratchSize);
  __return_storage_ptr__->UpdateScratchSize =
       CONCAT44(local_e8.SizesInfo.updateScratchSize._4_4_,
                (undefined4)local_e8.SizesInfo.updateScratchSize);
  return __return_storage_ptr__;
}

// RHICreateComputePipelineState @ 145b71cf0

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

TRefCountPtr<FRHIComputePipelineState> __thiscall
FVulkanDynamicRHI::RHICreateComputePipelineState
          (FVulkanDynamicRHI *this,FComputePipelineStateInitializer *param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<_public:_virtual_class_TRefCountPtr<FRHIComputePipelineState>___cdecl_FVulkanDynamicRHI::RHICreateComputePipelineState(FComputePipelineStateInitializer_const_&)_::_2_::FStat_STAT_Vulkan_RHICreateComputePipelineState>
  FVar6;
  FVulkanComputePipeline *pFVar7;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar8;
  FRHIComputeShader *this_02;
  FNameEntryId FVar9;
  FName FVar10;
  undefined8 *in_R8;
  FNameEntryId FVar11;
  FLLMScope local_res8 [2];
  LARGE_INTEGER local_res10;
  FMemScope local_res18;
  FName local_res20;
  FStatMessage local_58;
  
  FVar11.Value = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_Vulkan_RHICreateComputePipelineState ==
          (FThreadSafeStaticStat<_public:_virtual_class_TRefCountPtr<FRHIComputePipelineState>___cdecl_FVulkanDynamicRHI::RHICreateComputePipelineState(FComputePipelineStateInitializer_const_&)_::_2_::FStat_STAT_Vulkan_RHICreateComputePipelineState>
           )0x0) {
        pFVar5 = ::FName::FName((FName *)&local_res10.s,"STAT_Vulkan_RHICreateComputePipelineState")
        ;
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Vulkan_RHICreateComputePipelineState,
                   *pFVar5,L"STAT_Vulkan_RHICreateComputePipelineState","STATGROUP_Quick",
                   "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar6 = StatPtr_STAT_Vulkan_RHICreateComputePipelineState;
  if (StatPtr_STAT_Vulkan_RHICreateComputePipelineState ==
      (FThreadSafeStaticStat<_public:_virtual_class_TRefCountPtr<FRHIComputePipelineState>___cdecl_FVulkanDynamicRHI::RHICreateComputePipelineState(FComputePipelineStateInitializer_const_&)_::_2_::FStat_STAT_Vulkan_RHICreateComputePipelineState>
       )0x0) {
    pFVar5 = ::FName::FName(&local_res20,"STAT_Vulkan_RHICreateComputePipelineState");
    FVar6 = (FThreadSafeStaticStat<_public:_virtual_class_TRefCountPtr<FRHIComputePipelineState>___cdecl_FVulkanDynamicRHI::RHICreateComputePipelineState(FComputePipelineStateInitializer_const_&)_::_2_::FStat_STAT_Vulkan_RHICreateComputePipelineState>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &StatPtr_STAT_Vulkan_RHICreateComputePipelineState,*pFVar5,
                         L"STAT_Vulkan_RHICreateComputePipelineState","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar10 = *(FName *)FVar6;
  bVar2 = false;
  bVar4 = false;
  FVar9 = FVar10.ComparisonIndex.Value;
  uVar8 = FVar10.Number;
  if ((FVar9.Value != 0) || (uVar8 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10.s,(char *)*(FName *)((longlong)FVar6 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.s.LowPart = FVar9.Value;
        local_res10.s.HighPart = uVar8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res10.s,(wchar_t *)*(FName *)((longlong)FVar6 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipeline.cpp"
                   ,0xa8c);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res10.s.LowPart = FVar9.Value;
      local_res10.s.HighPart = uVar8;
      FThreadStats::AddMessage(FVar10,CycleScopeStart);
      bVar3 = true;
      FVar11.Value = FVar9.Value;
      goto LAB_145b71e81;
    }
  }
  bVar3 = false;
  FVar10.ComparisonIndex.Value = 0;
  FVar10.Number = 0;
LAB_145b71e81:
  FLLMScope::FLLMScope
            (local_res8,VideoRecording|BackupOOMMemoryPoolPlatform,false,None,Default,true);
  FMemScope::FMemScope(&local_res18,VideoRecording|BackupOOMMemoryPoolPlatform,true);
  pFVar7 = FVulkanPipelineStateCacheManager::GetOrCreateComputePipeline
                     (this->Device->PipelineStateCache->Device->PipelineStateCache,
                      (TVulkanBaseShader<FRHIComputeShader,5> *)*in_R8);
  this_02 = (FRHIComputeShader *)&pFVar7->_padding_;
  if (pFVar7 == (FVulkanComputePipeline *)0x0) {
    this_02 = (FRHIComputeShader *)0x0;
  }
  param_1->ComputeShader = this_02;
  if (this_02 != (FRHIComputeShader *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_02);
  }
  FMemScope::~FMemScope(&local_res18);
  FLLMScope::~FLLMScope(local_res8);
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar10 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_58.NameAndInfo.Number = FVar10.Number & 0xffff6fff | 0x6000;
      local_58.NameAndInfo.Index.Value = FVar11.Value;
      QueryPerformanceCounter(&local_res10);
      local_58.StatData.Pad[4] = '\0';
      local_58.StatData.Pad[5] = '\0';
      local_58.StatData.Pad[6] = '\0';
      local_58.StatData.Pad[7] = '\0';
      local_58.StatData.Pad[0] = local_res10.s.LowPart._0_1_;
      local_58.StatData.Pad[1] = local_res10.s.LowPart._1_1_;
      local_58.StatData.Pad[2] = local_res10.s.LowPart._2_1_;
      local_58.StatData.Pad[3] = local_res10.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_58);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return (TRefCountPtr<FRHIComputePipelineState>)(FRHIComputePipelineState *)param_1;
}

// RHICreateGraphicsPipelineState @ 145b720c0

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
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TRefCountPtr<FRHIGraphicsPipelineState> __thiscall
FVulkanDynamicRHI::RHICreateGraphicsPipelineState
          (FVulkanDynamicRHI *this,FGraphicsPipelineStateInitializer *param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<_public:_virtual_class_TRefCountPtr<FRHIGraphicsPipelineState>___cdecl_FVulkanDynamicRHI::RHICreateGraphicsPipelineState(FGraphicsPipelineStateInitializer_const_&)_::_2_::FStat_STAT_Vulkan_RHICreateGraphicsPipelineState>
  FVar6;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar7;
  FNameEntryId FVar8;
  FName FVar9;
  FNameEntryId FVar10;
  FLLMScope local_res8 [2];
  LARGE_INTEGER local_res10 [2];
  FMemScope local_res20;
  FStatMessage local_58;
  FName local_48;
  
  FVar10.Value = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_Vulkan_RHICreateGraphicsPipelineState ==
          (FThreadSafeStaticStat<_public:_virtual_class_TRefCountPtr<FRHIGraphicsPipelineState>___cdecl_FVulkanDynamicRHI::RHICreateGraphicsPipelineState(FGraphicsPipelineStateInitializer_const_&)_::_2_::FStat_STAT_Vulkan_RHICreateGraphicsPipelineState>
           )0x0) {
        pFVar5 = ::FName::FName((FName *)&local_res10[0].s,
                                "STAT_Vulkan_RHICreateGraphicsPipelineState");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Vulkan_RHICreateGraphicsPipelineState,
                   *pFVar5,L"STAT_Vulkan_RHICreateGraphicsPipelineState","STATGROUP_Quick",
                   "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar6 = StatPtr_STAT_Vulkan_RHICreateGraphicsPipelineState;
  if (StatPtr_STAT_Vulkan_RHICreateGraphicsPipelineState ==
      (FThreadSafeStaticStat<_public:_virtual_class_TRefCountPtr<FRHIGraphicsPipelineState>___cdecl_FVulkanDynamicRHI::RHICreateGraphicsPipelineState(FGraphicsPipelineStateInitializer_const_&)_::_2_::FStat_STAT_Vulkan_RHICreateGraphicsPipelineState>
       )0x0) {
    pFVar5 = ::FName::FName((FName *)&local_58,"STAT_Vulkan_RHICreateGraphicsPipelineState");
    FVar6 = (FThreadSafeStaticStat<_public:_virtual_class_TRefCountPtr<FRHIGraphicsPipelineState>___cdecl_FVulkanDynamicRHI::RHICreateGraphicsPipelineState(FGraphicsPipelineStateInitializer_const_&)_::_2_::FStat_STAT_Vulkan_RHICreateGraphicsPipelineState>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &StatPtr_STAT_Vulkan_RHICreateGraphicsPipelineState,*pFVar5,
                         L"STAT_Vulkan_RHICreateGraphicsPipelineState","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar9 = *(FName *)FVar6;
  bVar2 = false;
  bVar4 = false;
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar8 = FVar9.ComparisonIndex.Value;
  uVar7 = FVar9.Number;
  if ((FVar8.Value != 0) || (uVar7 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10[0].s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10[0].s,(char *)*(FName *)((longlong)FVar6 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10[0]._0_4_ = FVar8.Value;
        local_res10[0]._4_4_ = uVar7;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res10[0].s,(wchar_t *)*(FName *)((longlong)FVar6 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipeline.cpp"
                   ,0xa7b);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res10[0]._0_4_ = FVar8.Value;
      local_res10[0]._4_4_ = uVar7;
      local_48 = FVar9;
      FThreadStats::AddMessage(FVar9,CycleScopeStart);
      bVar3 = true;
      FVar10.Value = local_48.ComparisonIndex.Value;
      goto LAB_145b72246;
    }
  }
  bVar3 = false;
  FVar9 = local_48;
LAB_145b72246:
  FLLMScope::FLLMScope
            (local_res8,VideoRecording|BackupOOMMemoryPoolPlatform,false,None,Default,true);
  FMemScope::FMemScope(&local_res20,VideoRecording|BackupOOMMemoryPoolPlatform,true);
  FVulkanPipelineStateCacheManager::RHICreateGraphicsPipelineState
            (this->Device->PipelineStateCache,param_1);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res8);
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar9 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_58.NameAndInfo.Number = FVar9.Number & 0xffff6fff | 0x6000;
      local_58.NameAndInfo.Index.Value = FVar10.Value;
      QueryPerformanceCounter(local_res10);
      local_58.StatData.Pad[4] = '\0';
      local_58.StatData.Pad[5] = '\0';
      local_58.StatData.Pad[6] = '\0';
      local_58.StatData.Pad[7] = '\0';
      local_58.StatData.Pad[0] = local_res10[0]._0_1_;
      local_58.StatData.Pad[1] = local_res10[0]._1_1_;
      local_58.StatData.Pad[2] = local_res10[0]._2_1_;
      local_58.StatData.Pad[3] = local_res10[0]._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_58);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return (TRefCountPtr<FRHIGraphicsPipelineState>)(FRHIGraphicsPipelineState *)param_1;
}

// RHICreateRayTracingGeometry @ 145b73b70

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
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TRefCountPtr<FRHIRayTracingGeometry> __thiscall
FVulkanDynamicRHI::RHICreateRayTracingGeometry
          (FVulkanDynamicRHI *this,FRHICommandListBase *param_1,
          FRayTracingGeometryInitializer *param_2)

{
  FVulkanRayTracingGeometry *pFVar1;
  FRayTracingGeometryInitializer *in_R9;
  
  pFVar1 = ::operator_new(0x1c0);
  if (pFVar1 == (FVulkanRayTracingGeometry *)0x0) {
    (param_1->MemManager).Top = (uchar *)0x0;
  }
  else {
    pFVar1 = FVulkanRayTracingGeometry::FVulkanRayTracingGeometry
                       (pFVar1,(FRHICommandListBase *)param_2,in_R9,this->Device);
    (param_1->MemManager).Top = (uchar *)pFVar1;
    if (pFVar1 != (FVulkanRayTracingGeometry *)0x0) {
      FRHIResource::AddRef((FRHIResource *)pFVar1);
    }
  }
  return (TRefCountPtr<FRHIRayTracingGeometry>)(FRHIRayTracingGeometry *)param_1;
}

// RHICreateRayTracingPipelineState @ 145b73bf0

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

TRefCountPtr<FRHIRayTracingPipelineState> __thiscall
FVulkanDynamicRHI::RHICreateRayTracingPipelineState
          (FVulkanDynamicRHI *this,FRayTracingPipelineStateInitializer *param_1)

{
  FVulkanRayTracingPipelineState *pFVar1;
  FRayTracingPipelineStateInitializer *in_R8;
  
  pFVar1 = ::operator_new(0xe0);
  if (pFVar1 == (FVulkanRayTracingPipelineState *)0x0) {
    param_1->_padding_ = 0;
  }
  else {
    pFVar1 = FVulkanRayTracingPipelineState::FVulkanRayTracingPipelineState
                       (pFVar1,this->Device,in_R8);
    param_1->_padding_ = (longlong)pFVar1;
    if (pFVar1 != (FVulkanRayTracingPipelineState *)0x0) {
      FRHIResource::AddRef((FRHIResource *)pFVar1);
      return (TRefCountPtr<FRHIRayTracingPipelineState>)(FRHIRayTracingPipelineState *)param_1;
    }
  }
  return (TRefCountPtr<FRHIRayTracingPipelineState>)(FRHIRayTracingPipelineState *)param_1;
}

// RHICreateRayTracingScene @ 145b73c70

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

TRefCountPtr<FRHIRayTracingScene> __thiscall
FVulkanDynamicRHI::RHICreateRayTracingScene
          (FVulkanDynamicRHI *this,FRayTracingSceneInitializer *param_1)

{
  ulong64 uVar1;
  FVulkanDevice *pFVar2;
  FName FVar3;
  ulong64 uVar4;
  FRHIRayTracingAccelerationStructure *this_00;
  FName *pFVar5;
  FThreadSafeStaticStat<FStat_STAT_VulkanRayTracingAllocatedTLAS> FVar6;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  ulong64 *puVar7;
  uchar (*in_R8) [8];
  FName local_res10;
  FStatMessage local_38 [2];
  
  this_00 = ::operator_new(0x130);
  if (this_00 == (FRHIRayTracingAccelerationStructure *)0x0) {
    param_1->MaxNumInstances = 0;
    param_1->NumTotalSegments = 0;
  }
  else {
    local_38[0].StatData.Pad = *in_R8;
    local_38[0].NameAndInfo = *(FStatNameAndInfo *)(in_R8 + 1);
    pFVar2 = this->Device;
    local_res10 = *(FName *)(in_R8 + 2);
    FRHIRayTracingAccelerationStructure::FRHIRayTracingAccelerationStructure(this_00);
    this_00[1]._padding_ = (longlong)pFVar2;
    this_00->_padding_ = (longlong)&___7FVulkanRayTracingScene__6B_;
    this_00[1]._padding_ = (longlong)local_38[0].StatData.Pad;
    this_00[1]._padding_ = (longlong)local_38[0].NameAndInfo;
    *(undefined4 *)&this_00[1]._padding_ = 0;
    this_00[1]._padding_ = (longlong)local_res10;
    this_00[1]._padding_ = 0;
    this_00[1]._padding_ = 0;
    this_00[1]._padding_ = 0;
    this_00[1]._padding_ = 0;
    *(undefined2 *)&this_00[1]._padding_ = 0;
    FVar6 = StatPtr_STAT_VulkanRayTracingAllocatedTLAS;
    if (StatPtr_STAT_VulkanRayTracingAllocatedTLAS ==
        (FThreadSafeStaticStat<FStat_STAT_VulkanRayTracingAllocatedTLAS>)0x0) {
      pFVar5 = ::FName::FName(&local_res10,"STAT_VulkanRayTracingAllocatedTLAS");
      FVar6 = (FThreadSafeStaticStat<FStat_STAT_VulkanRayTracingAllocatedTLAS>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanRayTracingAllocatedTLAS,
                         *pFVar5,L"Allocated top level acceleration structures",
                         "STATGROUP_VulkanRayTracing","STATCAT_Advanced",L"Vulkan: Ray Tracing",true
                         ,false,ST_int64,false,false,MCR_Invalid);
    }
    FVar3 = *(FName *)FVar6;
    local_res10 = FVar3;
    if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_01 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_01 == (FThreadStats *)0x0) {
        this_02 = FThreadStatsPool::Get();
        this_01 = FThreadStatsPool::GetFromPool(this_02);
      }
      local_38[0].StatData.Pad[0] = '\x01';
      local_38[0].StatData.Pad[1] = '\0';
      local_38[0].StatData.Pad[2] = '\0';
      local_38[0].StatData.Pad[3] = '\0';
      local_38[0].StatData.Pad[4] = '\0';
      local_38[0].StatData.Pad[5] = '\0';
      local_38[0].StatData.Pad[6] = '\0';
      local_38[0].StatData.Pad[7] = '\0';
      local_38[0].NameAndInfo =
           (FStatNameAndInfo)((ulonglong)FVar3 & 0xffffafffffffffff | 0xa00000000000);
      local_res10 = FVar3;
      FThreadStats::AddStatMessage(this_01,local_38);
      FStatsTrace::Add(&local_res10,1);
      if (this_01->ScopeCount == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
    puVar7 = (ulong64 *)
             (**(code **)(GDynamicRHI->_padding_ + 0x470))
                       (GDynamicRHI,local_38,&this_00[1]._padding_);
    *(FRHIRayTracingAccelerationStructure **)param_1 = this_00;
    uVar4 = puVar7[1];
    uVar1 = puVar7[2];
    (this_00->SizeInfo).ResultSize = *puVar7;
    (this_00->SizeInfo).BuildScratchSize = uVar4;
    (this_00->SizeInfo).UpdateScratchSize = uVar1;
    FRHIResource::AddRef((FRHIResource *)this_00);
  }
  return (TRefCountPtr<FRHIRayTracingScene>)(FRHIRayTracingScene *)param_1;
}

// RHICreateRenderQuery @ 145b73ef0

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

TRefCountPtr<FRHIRenderQuery> __thiscall
FVulkanDynamicRHI::RHICreateRenderQuery(FVulkanDynamicRHI *this,ERenderQueryType param_1)

{
  FName FVar1;
  FRHIResource *this_00;
  FName *pFVar2;
  FThreadSafeStaticStat<FStat_STAT_VulkanNumQueries> FVar3;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  undefined4 in_register_00000014;
  FRHIRenderQuery *pFVar4;
  int in_R8D;
  FName local_res10;
  int local_res18 [2];
  FStatMessage local_28;
  
  pFVar4 = (FRHIRenderQuery *)CONCAT44(in_register_00000014,param_1);
  local_res18[0] = in_R8D;
  if (1 < in_R8D - 1U) {
    local_res10 = (FName)local_res18;
    `FVulkanDynamicRHI::RHICreateRenderQuery'::__l2::<lambda_1>::operator()(&local_res10);
  }
  this_00 = ::operator_new(0x38);
  if (this_00 == (FRHIResource *)0x0) {
    *(undefined8 *)pFVar4 = 0;
    return (TRefCountPtr<FRHIRenderQuery>)pFVar4;
  }
  FRHIResource::FRHIResource(this_00,RRT_RenderQuery);
  *(int *)&this_00[1]._padding_ = local_res18[0];
  this_00->_padding_ = (longlong)&___7FVulkanRenderQuery__6B_;
  this_00[2]._padding_ = 0;
  this_00[1].AtomicFlags = (atomic<unsigned_int>)0x0;
  this_00[1].ResourceType = RRT_None;
  this_00[1].field_0xd = 0;
  this_00[1]._padding_ = 0;
  this_00[1].OwnerName.ComparisonIndex.Value = 0xffffffff;
  FVar3 = StatPtr_STAT_VulkanNumQueries;
  if (StatPtr_STAT_VulkanNumQueries == (FThreadSafeStaticStat<FStat_STAT_VulkanNumQueries>)0x0) {
    pFVar2 = ::FName::FName(&local_res10,"STAT_VulkanNumQueries");
    FVar3 = (FThreadSafeStaticStat<FStat_STAT_VulkanNumQueries>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanNumQueries,*pFVar2,
                       L"Num Queries","STATGROUP_VulkanRHI","STATCAT_Advanced",L"Vulkan RHI",true,
                       false,ST_int64,false,false,MCR_Invalid);
  }
  FVar1 = *(FName *)FVar3;
  local_res10 = FVar1;
  if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    local_28.NameAndInfo.Number = FVar1.Number & 0xffffafff | 0xa000;
    local_28.StatData.Pad[0] = '\x01';
    local_28.StatData.Pad[1] = '\0';
    local_28.StatData.Pad[2] = '\0';
    local_28.StatData.Pad[3] = '\0';
    local_28.StatData.Pad[4] = '\0';
    local_28.StatData.Pad[5] = '\0';
    local_28.StatData.Pad[6] = '\0';
    local_28.StatData.Pad[7] = '\0';
    local_res10 = FVar1;
    local_28.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(this_01,&local_28);
    FStatsTrace::Add(&local_res10,1);
    if (this_01->ScopeCount == 0) {
      FThreadStats::Flush(this_01,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(this_01,false,false);
    }
  }
  *(FRHIResource **)pFVar4 = this_00;
  FRHIResource::AddRef(this_00);
  return (TRefCountPtr<FRHIRenderQuery>)pFVar4;
}

// RHICreateShaderBindingTable @ 145b74110

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
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TRefCountPtr<FRHIShaderBindingTable> __thiscall
FVulkanDynamicRHI::RHICreateShaderBindingTable
          (FVulkanDynamicRHI *this,FRHICommandListBase *param_1,
          FRayTracingShaderBindingTableInitializer *param_2)

{
  FVulkanRayTracingShaderTable *pFVar1;
  FRayTracingShaderBindingTableInitializer *in_R9;
  
  pFVar1 = ::operator_new(0x4b0);
  if (pFVar1 == (FVulkanRayTracingShaderTable *)0x0) {
    (param_1->MemManager).Top = (uchar *)0x0;
  }
  else {
    pFVar1 = FVulkanRayTracingShaderTable::FVulkanRayTracingShaderTable
                       (pFVar1,(FRHICommandListBase *)param_2,this->Device,in_R9);
    (param_1->MemManager).Top = (uchar *)pFVar1;
    if (pFVar1 != (FVulkanRayTracingShaderTable *)0x0) {
      FRHIResource::AddRef((FRHIResource *)pFVar1);
    }
  }
  return (TRefCountPtr<FRHIShaderBindingTable>)(FRHIShaderBindingTable *)param_1;
}

// RHIEndRenderQueryBatch_TopOfPipe @ 145b743f0

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
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
FVulkanDynamicRHI::RHIEndRenderQueryBatch_TopOfPipe
          (FVulkanDynamicRHI *this,FRHICommandListBase *param_1,ERenderQueryType param_2)

{
  longlong *plVar1;
  FVulkanSyncPoint *pFVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  FVulkanCommandListContext *this_00;
  FRHICommandBase *pFVar6;
  longlong lVar7;
  FVulkanSyncPoint *pFVar8;
  TRefCountPtr<FVulkanSyncPoint> local_res20;
  
  if (param_2 == RQT_Occlusion) {
    lVar7 = 0x350;
  }
  else {
    if (param_2 != RQT_AbsoluteTime) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                         ,0x60c,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    lVar7 = 0x310;
  }
  if (*(longlong *)((longlong)&(param_1->MemManager).Top + lVar7) == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("QueryBatchData[GPUIndex]",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanQuery.cpp"
                       ,0x131,L"A query batch for this type is not open on this command list.");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = *(FVulkanSyncPoint **)((longlong)&(param_1->MemManager).Top + lVar7);
  plVar1 = &pFVar2->_padding_;
  if (pFVar2 != (FVulkanSyncPoint *)0x0) {
    LOCK();
    *(int *)plVar1 = (int)*plVar1 + 1;
    UNLOCK();
  }
  LOCK();
  lVar4 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)lVar4 == 1) {
    pFVar8 = pFVar2;
    if (plVar1 == (longlong *)0x0) {
      pFVar8 = (FVulkanSyncPoint *)0x0;
    }
    if (pFVar8 != (FVulkanSyncPoint *)0x0) {
      (**(code **)pFVar8->_padding_)(pFVar8,1);
    }
  }
  *(undefined8 *)((longlong)&(param_1->MemManager).Top + lVar7) = 0;
  local_res20.Reference = pFVar2;
  if (((GRHICommandList.bLatchedBypass == false) || ((param_1->PersistentState).bImmediate == '\0'))
     && (param_1->bExecuting == false)) {
    pFVar6 = FMemStackBase::Alloc(&param_1->MemManager,0x20,8);
    param_1->NumCommands = param_1->NumCommands + 1;
    *param_1->CommandLink = pFVar6;
    param_1->CommandLink = &pFVar6->Next;
    pFVar6->Next = (FRHICommandBase *)0x0;
    pFVar6->_padding_ =
         (longlong)
         &TRHILambdaCommand<FRHICommandListBase,`FVulkanDynamicRHI::RHIEndRenderQueryBatch_TopOfPipe'::`2'::<lambda_1>_>
          ::_vftable_;
    pFVar6[1]._padding_ = 0;
    pFVar6[1]._padding_ = (longlong)local_res20.Reference;
    local_res20.Reference = (FVulkanSyncPoint *)0x0;
    pFVar6[1].Next = (FRHICommandBase *)L"TRHILambdaCommand";
  }
  else {
    this_00 = FVulkanCommandListContext::Get(param_1);
    FVulkanContextCommon::AddPendingSyncPoint((FVulkanContextCommon *)this_00,&local_res20);
  }
  if (local_res20.Reference != (FVulkanSyncPoint *)0x0) {
    plVar1 = &(local_res20.Reference)->_padding_;
    LOCK();
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar7 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)(local_res20.Reference)->_padding_)(local_res20.Reference,1);
    }
  }
  return;
}

// RHIEndRenderQuery_TopOfPipe @ 145b74580

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
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
FVulkanDynamicRHI::RHIEndRenderQuery_TopOfPipe
          (FVulkanDynamicRHI *this,FRHICommandListBase *param_1,FRHIRenderQuery *param_2)

{
  FVulkanSyncPoint *pFVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  FVulkanSyncPoint *pFVar5;
  code *pcVar6;
  bool bVar7;
  longlong lVar8;
  TRefCountPtr<FVulkanSyncPoint> TVar9;
  FVulkanCommandListContext *this_00;
  FRHICommandBase *pFVar10;
  undefined8 *puVar11;
  TRefCountPtr<FVulkanSyncPoint> local_res18;
  undefined8 *local_res20;
  
  if (*(int *)(param_2 + 1) == 1) {
    lVar8 = 0x350;
  }
  else {
    if ((*(int *)(param_2 + 1) != 2) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("!\"Enclosing block should never be called\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                           ,0x60c,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    lVar8 = 0x310;
  }
  pFVar5 = *(FVulkanSyncPoint **)((longlong)&(param_1->MemManager).Top + lVar8);
  pFVar1 = (FVulkanSyncPoint *)(param_2 + 2);
  if (pFVar5 == (FVulkanSyncPoint *)0x0) {
    TVar9 = FVulkanSyncPoint::Create((EVulkanSyncPointType)&local_res20,(wchar_t *)0x0);
    if (pFVar1 != TVar9.Reference) {
      puVar11 = (undefined8 *)pFVar1->_padding_;
      pFVar1->_padding_ = (TVar9.Reference)->_padding_;
      (TVar9.Reference)->_padding_ = 0;
      if (puVar11 != (undefined8 *)0x0) {
        piVar2 = (int *)(puVar11 + 1);
        LOCK();
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          if (piVar2 == (int *)0x0) {
            puVar11 = (undefined8 *)0x0;
          }
          if (puVar11 != (undefined8 *)0x0) {
            (**(code **)*puVar11)(puVar11,1);
          }
        }
      }
    }
    if (local_res20 != (undefined8 *)0x0) {
      piVar2 = (int *)(local_res20 + 1);
      LOCK();
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        if (piVar2 == (int *)0x0) {
          local_res20 = (undefined8 *)0x0;
        }
        if (local_res20 != (undefined8 *)0x0) {
          (**(code **)*local_res20)(local_res20,1);
        }
      }
    }
    local_res18.Reference = (FVulkanSyncPoint *)pFVar1->_padding_;
    if (local_res18.Reference != (FVulkanSyncPoint *)0x0) {
      LOCK();
      *(int *)&(local_res18.Reference)->_padding_ = (int)(local_res18.Reference)->_padding_ + 1;
      UNLOCK();
    }
    if (((GRHICommandList.bLatchedBypass == false) ||
        ((param_1->PersistentState).bImmediate == '\0')) && (param_1->bExecuting == false)) {
      pFVar10 = FMemStackBase::Alloc(&param_1->MemManager,0x20,8);
      param_1->NumCommands = param_1->NumCommands + 1;
      *param_1->CommandLink = pFVar10;
      param_1->CommandLink = &pFVar10->Next;
      pFVar10->Next = (FRHICommandBase *)0x0;
      pFVar10->_padding_ =
           (longlong)
           &TRHILambdaCommand<FRHICommandListBase,`FVulkanDynamicRHI::RHIEndRenderQuery_TopOfPipe'::`7'::<lambda_1>_>
            ::_vftable_;
      pFVar10[1]._padding_ = 0;
      pFVar10[1]._padding_ = (longlong)local_res18.Reference;
      local_res18.Reference = (FVulkanSyncPoint *)0x0;
      pFVar10[1].Next = (FRHICommandBase *)L"TRHILambdaCommand";
      TVar9.Reference = local_res18.Reference;
    }
    else {
      this_00 = FVulkanCommandListContext::Get(param_1);
      FVulkanContextCommon::AddPendingSyncPoint((FVulkanContextCommon *)this_00,&local_res18);
      TVar9.Reference = local_res18.Reference;
    }
  }
  else {
    TVar9.Reference = (FVulkanSyncPoint *)pFVar1->_padding_;
    if (TVar9.Reference == pFVar5) goto LAB_145b74755;
    pFVar1->_padding_ = (longlong)pFVar5;
    LOCK();
    *(int *)&pFVar5->_padding_ = (int)pFVar5->_padding_ + 1;
    UNLOCK();
  }
  if (TVar9.Reference != (FVulkanSyncPoint *)0x0) {
    plVar3 = &(TVar9.Reference)->_padding_;
    LOCK();
    lVar8 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if (((int)lVar8 == 1) && (plVar3 != (longlong *)0x0)) {
      (**(code **)(TVar9.Reference)->_padding_)(TVar9.Reference,1);
    }
  }
LAB_145b74755:
  FDynamicRHI::RHIEndRenderQuery_TopOfPipe((FDynamicRHI *)this,param_1,param_2);
  return;
}

// RHIGetRenderQueryResult @ 145b74780

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

bool __thiscall
FVulkanDynamicRHI::RHIGetRenderQueryResult
          (FVulkanDynamicRHI *this,FRHIRenderQuery *param_1,ulong64 *param_2,bool param_3,
          uint param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  longlong lVar4;
  longlong lVar5;
  double dVar6;
  undefined1 local_res10 [8];
  LARGE_INTEGER local_48;
  longlong local_40;
  LARGE_INTEGER local_38;
  FScopeIdle local_30;
  int local_28;
  char local_24;
  DWORD local_20;
  
  if (*(longlong *)(param_1 + 2) == 0) {
    local_res10[0] = 0;
    bVar2 = `FVulkanDynamicRHI::RHIGetRenderQueryResult'::__l3::<lambda_1>::operator()(local_res10);
    if (!bVar2) {
      *param_2 = 0;
      return false;
    }
  }
  lVar4 = *(longlong *)(param_1 + 2);
  if ((*(longlong *)(lVar4 + 0x10) == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("GraphEvent",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanSubmission.h"
                         ,0x55,
                         L"This sync point was not created with a CPU event. Cannot check completion on the CPU."
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  if (*(char *)(*(longlong *)(lVar4 + 0x10) + 0xd0) == '\0') {
    if (!param_3) {
      return false;
    }
    bVar2 = IsInRHIThread();
    UE::Stats::FThreadIdleStats::FScopeIdle::FScopeIdle(&local_30,!bVar2);
    local_28 = 1;
    bVar2 = IsInRenderingThread();
    if (bVar2) {
      local_24 = '\x01';
      QueryPerformanceCounter(&local_48);
      local_20 = local_48.s.LowPart;
    }
    else {
      local_24 = '\0';
      local_20 = 0;
    }
    local_40 = *(longlong *)(param_1 + 2);
    if (local_40 != 0) {
      LOCK();
      *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
      UNLOCK();
    }
    ProcessInterruptQueueUntil(this,(FVulkanSyncPoint *)&local_40);
    if (local_24 != '\0') {
      QueryPerformanceCounter(&local_38);
      GRenderThreadIdle[local_28] = GRenderThreadIdle[local_28] + (local_38.s.LowPart - local_20);
    }
    UE::Stats::FThreadIdleStats::FScopeIdle::~FScopeIdle(&local_30);
  }
  if (*(int *)(param_1 + 1) != 1) {
    if (*(int *)(param_1 + 1) != 2) {
      return false;
    }
    lVar4 = 0;
    dVar6 = __real_41cdcd6500000000 / (double)(this->Device->GpuProps).limits.timestampPeriod;
    if ((__real_43e0000000000000 <= dVar6) &&
       (dVar6 = dVar6 - __real_43e0000000000000, dVar6 < __real_43e0000000000000)) {
      lVar4 = -0x8000000000000000;
    }
    lVar5 = 0;
    dVar6 = ((double)*(ulonglong *)&param_1[1].field_0x8 /
            (double)(ulonglong)((longlong)dVar6 + lVar4)) * __real_412e848000000000;
    if ((__real_43e0000000000000 <= dVar6) &&
       (dVar6 = dVar6 - __real_43e0000000000000, dVar6 < __real_43e0000000000000)) {
      lVar5 = -0x8000000000000000;
    }
    *param_2 = (longlong)dVar6 + lVar5;
    return true;
  }
  *param_2 = *(ulong64 *)&param_1[1].field_0x8;
  return true;
}

// RHIMapStagingSurface @ 145b749d0

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

void __thiscall
FVulkanDynamicRHI::RHIMapStagingSurface
          (FVulkanDynamicRHI *this,FRHITexture *param_1,FRHIGPUFence *param_2,void **param_3,
          int *param_4,int *param_5,uint param_6)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  FVulkanTexture *this_00;
  uint *puVar4;
  void *pvVar5;
  longlong lVar6;
  
  this_00 = (FVulkanTexture *)(**(code **)(param_1->_padding_ + 0x48))(param_1);
  if (param_2 != (FRHIGPUFence *)0x0) {
    cVar2 = (**(code **)(param_2->_padding_ + 0x20))(param_2);
    if (cVar2 == '\0') {
      bVar3 = IsInRenderingThread();
      if (!bVar3) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInRenderingThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                           ,0x1594,L"");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      FRHICommandListImmediate::ImmediateFlush
                (&GRHICommandList.CommandListImmediate,FlushRHIThread,None);
      (**(code **)(param_2->_padding_ + 0x28))
                (param_2,0x154be5ed0,(1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1);
      goto LAB_145b74acb;
    }
  }
  if (GVulkanFlushOnMapStaging != 0) {
    bVar3 = IsInRenderingThread();
    if (!bVar3) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                         ,0x1594,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    FRHICommandListImmediate::ImmediateFlush
              (&GRHICommandList.CommandListImmediate,FlushRHIThread,None);
    FVulkanDevice::WaitUntilIdle(this->Device);
  }
LAB_145b74acb:
  puVar4 = (uint *)(**(code **)(this_00->_padding_ + 0x20))(this_00);
  if ((*puVar4 >> 0x13 & 1) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("EnumHasAllFlags(Texture->GetDesc().Flags, ETextureCreateFlags::CPUReadback)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRenderTarget.cpp"
                       ,0x148,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pvVar5 = FVulkanTexture::GetMappedPointer(this_00);
  *param_3 = pvVar5;
  FVulkanTexture::InvalidateMappedMemory(this_00);
  lVar6 = (**(code **)(this_00->_padding_ + 0x20))(this_00);
  *param_4 = *(int *)(lVar6 + 0x24);
  lVar6 = (**(code **)(this_00->_padding_ + 0x20))(this_00);
  *param_5 = *(int *)(lVar6 + 0x28);
  return;
}

// RHIRead3DSurfaceFloatData @ 145b75110

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
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FVulkanDynamicRHI::RHIRead3DSurfaceFloatData
          (FVulkanDynamicRHI *this,FRHITexture *param_1,TIntRect<int> *param_2,
          TIntPoint<int> param_3,TArray<FFloat16Color,TSizedDefaultAllocator<32>_> *param_4)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  void *pvVar10;
  undefined2 *puVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  int iStackX_24;
  undefined1 auStackY_188 [32];
  FStagingBuffer *local_f8;
  FVulkanDynamicRHI *local_f0;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  uint uStack_c0;
  int iStack_bc;
  int local_b8;
  int iStack_b4;
  longlong local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  FStagingBuffer *pFStack_70;
  longlong *local_68;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_188;
  local_f0 = this;
  plVar7 = (longlong *)(**(code **)(param_1->_padding_ + 0x48))(param_1);
  lVar8 = (**(code **)(*plVar7 + 0x20))(plVar7);
  iVar16 = *(int *)((longlong)&param_2->field0_0x0 + 0xc) -
           *(int *)((longlong)&param_2->field0_0x0 + 4);
  iVar14 = *(int *)((longlong)&param_2->field0_0x0 + 8) - *(int *)&param_2->field0_0x0;
  iStackX_24 = param_3.field0_0x0._4_4_;
  uVar17 = param_3.field0_0x0._0_4_;
  uVar5 = (iStackX_24 - uVar17) * iVar16 * iVar14 * 8;
  local_b0 = lVar8;
  TArray<FFloat16Color,TSizedDefaultAllocator<32>_>::SetNumUninitialized(param_4,uVar5,Default);
  if (GIgnoreCPUReads == 0) {
    if ((*(int *)((longlong)plVar7 + 0x17c) != 0x61) &&
       (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6901631674346373591>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRenderTarget.cpp"
                           ,0x1d7,"Surface.StorageFormat == VK_FORMAT_R16G16B16A16_SFLOAT"), bVar4))
    {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_f8 = VulkanRHI::FStagingManager::AcquireBuffer
                         (&local_f0->Device->StagingManager,uVar5,2,
                          VK_MEMORY_PROPERTY_HOST_CACHED_BIT);
    uVar6 = VulkanRHI::FStagingBuffer::GetSize(local_f8);
    if ((uVar6 < uVar5) &&
       (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6901631674346373595>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRenderTarget.cpp"
                           ,0x1db,"StagingBuffer->GetSize() >= Size"), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uStack_cc = 1;
    local_e8 = 0;
    uStack_d4 = 0;
    uStack_d0 = 0;
    uStack_e0 = *(undefined4 *)(lVar8 + 0x24);
    uStack_dc = *(undefined4 *)(lVar8 + 0x28);
    local_d8 = (undefined4)plVar7[0x3c];
    local_c8 = *(undefined4 *)&param_2->field0_0x0;
    uStack_c4 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 4);
    uStack_c0 = uVar17;
    iStack_bc = iVar14;
    local_b8 = iVar16;
    iStack_b4 = iStackX_24 - uVar17;
    bVar4 = IsInRenderingThread();
    if ((!bVar4) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInRenderingThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                           ,0x1594,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uStack_a0 = CONCAT44(uStack_dc,uStack_e0);
    local_98 = CONCAT44(uStack_d4,local_d8);
    uStack_90 = CONCAT44(uStack_cc,uStack_d0);
    pFStack_70 = local_f8;
    local_a8 = local_e8;
    local_88 = CONCAT44(uStack_c4,local_c8);
    uStack_80 = CONCAT44(iStack_bc,uStack_c0);
    local_78 = CONCAT44(iStack_b4,local_b8);
    local_68 = plVar7;
    if (((GRHICommandList.bLatchedBypass == false) ||
        ((GRHICommandList.CommandListImmediate._667_1_ & 0x20) == 0)) &&
       (GRHICommandList.CommandListImmediate._100_1_ == '\0')) {
      puVar9 = FMemStackBase::Alloc((FMemStackBase *)&GRHICommandList.CommandListImmediate,0x60,8);
      GRHICommandList.CommandListImmediate._96_4_ = GRHICommandList.CommandListImmediate._96_4_ + 1;
      *(undefined8 **)GRHICommandList.CommandListImmediate._48_8_ = puVar9;
      GRHICommandList.CommandListImmediate._48_8_ = puVar9 + 1;
      *(undefined8 *)GRHICommandList.CommandListImmediate._48_8_ = 0;
      *puVar9 = &TRHILambdaCommand<FRHICommandListImmediate,`FVulkanDynamicRHI::RHIRead3DSurfaceFloatData'::`2'::<lambda_1>_>
                 ::_vftable_;
      puVar9[2] = local_a8;
      puVar9[3] = uStack_a0;
      puVar9[4] = local_98;
      puVar9[5] = uStack_90;
      puVar9[6] = local_88;
      puVar9[7] = uStack_80;
      puVar9[8] = local_78;
      puVar9[9] = pFStack_70;
      puVar9[10] = local_68;
      puVar9[0xb] = L"TRHILambdaCommand";
    }
    else {
      `FVulkanDynamicRHI::RHIRead3DSurfaceFloatData'::__l2::<lambda_1>::operator()
                (&local_a8,(FRHICommandListBase *)&GRHICommandList.CommandListImmediate);
    }
    FRHICommandListImmediate::SubmitAndBlockUntilGPUIdle(&GRHICommandList.CommandListImmediate);
    VulkanRHI::FStagingBuffer::InvalidateMappedMemory(local_f8);
    uVar18 = (ulonglong)param_3.field0_0x0 & 0xffffffff;
    pFVar13 = (param_4->AllocatorInstance).Data;
    lVar8 = local_b0;
    while (local_b0 = lVar8, (int)uVar17 < iStackX_24) {
      iVar15 = *(int *)((longlong)&param_2->field0_0x0 + 4);
      uVar5 = (uint)uVar18;
      if (iVar15 < *(int *)((longlong)&param_2->field0_0x0 + 0xc)) {
        do {
          iVar1 = *(int *)&param_2->field0_0x0;
          uVar19 = (ulonglong)iVar1;
          iVar2 = *(int *)(lVar8 + 0x24);
          pvVar10 = VulkanRHI::FStagingBuffer::GetMappedPointer(local_f8);
          puVar11 = (undefined2 *)
                    ((longlong)pvVar10 +
                    ((longlong)(iVar15 * iVar2) + (ulonglong)((uint)uVar18 * iVar16 * iVar14) +
                    uVar19) * 8);
          pFVar12 = pFVar13;
          if (iVar1 < *(int *)((longlong)&param_2->field0_0x0 + 8)) {
            do {
              pFVar13 = pFVar12 + 8;
              uVar5 = (int)uVar19 + 1;
              uVar19 = (ulonglong)uVar5;
              *(undefined2 *)pFVar12 = *puVar11;
              *(undefined2 *)(pFVar12 + 2) = puVar11[1];
              *(undefined2 *)(pFVar12 + 4) = puVar11[2];
              *(undefined2 *)(pFVar12 + 6) = puVar11[3];
              puVar11 = puVar11 + 4;
              pFVar12 = pFVar13;
            } while ((int)uVar5 < *(int *)((longlong)&param_2->field0_0x0 + 8));
          }
          iVar15 = iVar15 + 1;
          uVar5 = uVar17;
        } while (iVar15 < *(int *)((longlong)&param_2->field0_0x0 + 0xc));
      }
      uVar17 = uVar5 + 1;
      uVar18 = (ulonglong)uVar17;
      lVar8 = local_b0;
    }
    if (((param_4->AllocatorInstance).Data + (longlong)param_4->ArrayNum * 8 < pFVar13) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Dest <= End",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRenderTarget.cpp"
                           ,0x20c,
                           L"Memory overwrite! Calculated total size %d: SizeX %d SizeY %d SizeZ %d; InRect(%d, %d, %d, %d) InZ(%d, %d)"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    VulkanRHI::FStagingManager::ReleaseBuffer
              (&local_f0->Device->StagingManager,(FVulkanContextCommon *)0x0,&local_f8);
  }
  else {
    memset((param_4->AllocatorInstance).Data,0,(ulonglong)uVar5 << 3);
  }
  return;
}

// RHIReadSurfaceData @ 145b75580

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

void __thiscall
FVulkanDynamicRHI::RHIReadSurfaceData
          (FVulkanDynamicRHI *this,FRHITexture *param_1,TIntRect<int> *param_2,
          TArray<FColor,TSizedDefaultAllocator<32>_> *param_3,FReadSurfaceDataFlags *param_4)

{
  TIntRect<int>_u_0 local_38;
  FReadSurfaceDataFlags local_28;
  
  local_38._s_0.Min.field0_0x0 = (TIntPoint<int>)(param_2->field0_0x0)._s_0.Min.field0_0x0;
  local_38._s_0.Max.field0_0x0 = (TIntPoint<int>)(param_2->field0_0x0)._s_0.Max.field0_0x0;
  local_28.CubeFace = param_4->CubeFace;
  local_28.CompressionMode = param_4->CompressionMode;
  local_28.bLinearToGamma = param_4->bLinearToGamma;
  local_28._9_3_ = *(undefined3 *)&param_4->field_0x9;
  local_28.MaxDepthRange = param_4->MaxDepthRange;
  local_28.bOutputStencil = param_4->bOutputStencil;
  local_28.MipLevel = param_4->MipLevel;
  local_28._18_2_ = *(undefined2 *)&param_4->field_0x12;
  local_28.ArrayIndex = param_4->ArrayIndex;
  local_28.GPUIndex = param_4->GPUIndex;
  ReadSurfaceData<FColor>(this->Device,param_1,(TIntRect<int> *)&local_38._s_0,param_3,&local_28);
  return;
}

// RHIReadSurfaceData @ 145b755e0

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

void __thiscall
FVulkanDynamicRHI::RHIReadSurfaceData
          (FVulkanDynamicRHI *this,FRHITexture *param_1,TIntRect<int> *param_2,
          TArray<FLinearColor,TSizedDefaultAllocator<32>_> *param_3,FReadSurfaceDataFlags *param_4)

{
  TIntRect<int>_u_0 local_38;
  FReadSurfaceDataFlags local_28;
  
  local_38._s_0.Min.field0_0x0 = (TIntPoint<int>)(param_2->field0_0x0)._s_0.Min.field0_0x0;
  local_38._s_0.Max.field0_0x0 = (TIntPoint<int>)(param_2->field0_0x0)._s_0.Max.field0_0x0;
  local_28.CubeFace = param_4->CubeFace;
  local_28.CompressionMode = param_4->CompressionMode;
  local_28.bLinearToGamma = param_4->bLinearToGamma;
  local_28._9_3_ = *(undefined3 *)&param_4->field_0x9;
  local_28.MaxDepthRange = param_4->MaxDepthRange;
  local_28.bOutputStencil = param_4->bOutputStencil;
  local_28.MipLevel = param_4->MipLevel;
  local_28._18_2_ = *(undefined2 *)&param_4->field_0x12;
  local_28.ArrayIndex = param_4->ArrayIndex;
  local_28.GPUIndex = param_4->GPUIndex;
  ReadSurfaceData<FLinearColor>
            (this->Device,param_1,(TIntRect<int> *)&local_38._s_0,param_3,&local_28);
  return;
}

// RHIReadSurfaceFloatData @ 145b75640

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
FVulkanDynamicRHI::RHIReadSurfaceFloatData
          (FVulkanDynamicRHI *this,FRHITexture *param_1,TIntRect<int> *param_2,
          TArray<FFloat16Color,TSizedDefaultAllocator<32>_> *param_3,ECubeFace param_4,int param_5,
          int param_6)

{
  int *piVar1;
  char cVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FVulkanTexture *pFVar6;
  longlong lVar7;
  int iVar8;
  undefined1 local_res10 [8];
  TIntRect<int>_u_0 *pTVar9;
  TIntRect<int>_u_0 local_38;
  TIntRect<int>_u_0 local_28;
  
  pFVar6 = (FVulkanTexture *)(**(code **)(param_1->_padding_ + 0x48))(param_1);
  lVar7 = (**(code **)(pFVar6->_padding_ + 0x20))(pFVar6);
  if (GIgnoreCPUReads == 0) {
    lVar7 = (**(code **)(param_1->_padding_ + 0x20))(param_1);
    cVar2 = *(char *)(lVar7 + 0x32);
    if ((cVar2 == '\0') || (cVar2 == '\x01')) {
      local_28._s_0.Min.field0_0x0 = (TIntPoint<int>)(param_2->field0_0x0)._s_0.Min.field0_0x0;
      local_28._s_0.Max.field0_0x0 = (TIntPoint<int>)(param_2->field0_0x0)._s_0.Max.field0_0x0;
      pTVar9 = &local_28;
    }
    else {
      if ((cVar2 != '\x03') && (cVar2 != '\x04')) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!\"Enclosing block should never be called\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRenderTarget.cpp"
                           ,0x1bc,L"");
        if (!bVar4) {
          return;
        }
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_38._s_0.Min.field0_0x0 = (TIntPoint<int>)(param_2->field0_0x0)._s_0.Min.field0_0x0;
      local_38._s_0.Max.field0_0x0 = (TIntPoint<int>)(param_2->field0_0x0)._s_0.Max.field0_0x0;
      param_5 = param_4 + param_5 * 6;
      pTVar9 = &local_38;
    }
    `FVulkanDynamicRHI::RHIReadSurfaceFloatData'::__l2::<lambda_1>::operator()
              (local_res10,this->Device,pFVar6,param_6,param_5,(TIntRect<int> *)&pTVar9->_s_0,
               param_3);
  }
  else {
    cVar2 = *(char *)(lVar7 + 0x32);
    iVar8 = 0;
    if ((((cVar2 == '\0') || (cVar2 == '\x01')) || (cVar2 == '\x03')) || (cVar2 == '\x04')) {
      iVar8 = (*(int *)(lVar7 + 0x28) >> ((byte)param_6 & 0x1f)) *
              (*(int *)(lVar7 + 0x24) >> ((byte)param_6 & 0x1f));
    }
    else {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRenderTarget.cpp"
                         ,0x1a6,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    piVar1 = &param_3->ArrayMax;
    param_3->ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,2,0,&param_3->AllocatorInstance,0,piVar1);
    }
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,2,iVar8,&param_3->AllocatorInstance,&param_3->ArrayNum,piVar1);
    memset((param_3->AllocatorInstance).Data + (longlong)iVar5 * 8,0,(longlong)iVar8 << 3);
  }
  return;
}

// RHIUnmapStagingSurface @ 145b76470

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

void __thiscall
FVulkanDynamicRHI::RHIUnmapStagingSurface(FVulkanDynamicRHI *this,FRHITexture *param_1,uint param_2)

{
  return;
}

// FVulkanDynamicRHI @ 145b91520

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
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

FVulkanDynamicRHI * __thiscall FVulkanDynamicRHI::FVulkanDynamicRHI(FVulkanDynamicRHI *this)

{
  code *pcVar1;
  TConsoleVariableData<bool> *pTVar2;
  TConsoleVariableData<bool> *pTVar3;
  bool bVar4;
  TNode *pTVar5;
  FVulkanDynamicRHI *pFVar6;
  TNode *pTVar7;
  TNode *pTVar8;
  FName local_res8;
  
  pTVar8 = (TNode *)0x0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FVulkanDynamicRHI__6B_;
  this->TotalPresentCount = 0;
  (this->ExternalGPUTime).bIsSet = false;
  *(undefined8 *)&(this->CurrentTimingPerQueue).field_0x18 = 0;
  *(undefined4 *)&(this->CurrentTimingPerQueue).field_0x20 = 0;
  *(undefined4 *)&(this->CurrentTimingPerQueue).field_0x24 = 3;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->SubmissionCS,4000);
  this->SubmissionThread = (FVulkanThread *)0x0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->InterruptCS,4000);
  this->InterruptThread = (FVulkanThread *)0x0;
  this->CPUTimelineSemaphore = (FVulkanSemaphore *)0x0;
  this->CPUTimelineSemaphoreValue = (atomic<unsigned___int64>)0x1;
  pTVar5 = ::operator_new(0x10);
  pTVar7 = pTVar8;
  if (pTVar5 != (TNode *)0x0) {
    pTVar5->NextNode = (TNode *)0x0;
    pTVar5->Item = (FVulkanPlatformCommandList *)0x0;
    pTVar5->NextNode = (TNode *)0x0;
    pTVar7 = pTVar5;
  }
  (this->PendingPayloadsForSubmission).Tail = pTVar7;
  (this->PendingPayloadsForSubmission).Head = pTVar7;
  *(undefined8 *)&this->SignaledSemaphores = 0;
  *(undefined8 *)&(this->SignaledSemaphores).field_0x8 = 0;
  *(undefined8 *)&(this->SignaledSemaphores).field_0x20 = 0;
  *(undefined4 *)&(this->SignaledSemaphores).field_0x28 = 0;
  *(undefined4 *)&(this->SignaledSemaphores).field_0x2c = 0x80;
  *(undefined4 *)&(this->SignaledSemaphores).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SignaledSemaphores).field_0x34 = 0;
  *(undefined8 *)&(this->SignaledSemaphores).field_0x40 = 0;
  *(undefined4 *)&(this->SignaledSemaphores).field_0x48 = 0;
  (this->EopTask).Reference = (FBaseGraphTask *)0x0;
  this->InterruptThreadID = 0;
  this->ApiVersion = 0;
  this->Instance = (VkInstance_T *)0x0;
  (this->InstanceExtensions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstanceExtensions).ArrayNum = 0;
  (this->InstanceExtensions).ArrayMax = 0;
  (this->InstanceLayers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstanceLayers).ArrayNum = 0;
  (this->InstanceLayers).ArrayMax = 0;
  this->Device = (FVulkanDevice *)0x0;
  (this->Viewports).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Viewports).ArrayNum = 0;
  (this->Viewports).ArrayMax = 0;
  this->SavePipelineCacheCmd = (IConsoleObject *)0x0;
  this->RebuildPipelineCacheCmd = (IConsoleObject *)0x0;
  this->SaveValidationCacheCmd = (IConsoleObject *)0x0;
  this->DumpMemoryCmd = (IConsoleObject *)0x0;
  this->DumpMemoryFullCmd = (IConsoleObject *)0x0;
  this->DumpStagingMemoryCmd = (IConsoleObject *)0x0;
  this->DumpLRUCmd = (IConsoleObject *)0x0;
  this->TrimLRUCmd = (IConsoleObject *)0x0;
  this->bIsStandaloneStereoDevice = false;
  this->ActiveDebugLayerExtension = None;
  this->Messenger = (VkDebugUtilsMessengerEXT_T *)0x0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->LockBufferCS,4000);
  (this->OptionalInstanceExtensions).field0_0x0.Packed = 0;
  bVar4 = IsInGameThread();
  if ((!bVar4) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRHI.cpp"
                         ,0x1b4,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    pFVar6 = (FVulkanDynamicRHI *)(*pcVar1)();
    return pFVar6;
  }
  if ((GIsThreadedRendering != false) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!GIsThreadedRendering",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRHI.cpp"
                         ,0x1b5,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    pFVar6 = (FVulkanDynamicRHI *)(*pcVar1)();
    return pFVar6;
  }
  GRHIGlobals.PoolSizeVRAMPercentage = 0;
  GRHIGlobals.TexturePoolSize = 0;
  GRHIGlobals.SupportsMultithreading = true;
  GRHIGlobals.SupportsMultithreadedResources = true;
  GRHITransitionPrivateData_SizeInBytes = 0x28;
  GRHITransitionPrivateData_AlignInBytes = 8;
  FConfigCacheIni::GetInt
            (GConfig,L"TextureStreaming",L"PoolSizeVRAMPercentage",
             &GRHIGlobals.PoolSizeVRAMPercentage,&GEngineIni);
  pTVar2 = CVarAllowVulkanPSOPrecache.Ref;
  GRHIGlobals.SupportsBarycentricsSemantic = true;
  bVar4 = IsInParallelGameThread();
  if (bVar4) {
LAB_145b91791:
    pTVar7 = pTVar8;
  }
  else {
    bVar4 = IsInGameThread();
    pTVar7 = (TNode *)&DAT_00000001;
    if (bVar4) goto LAB_145b91791;
  }
  pTVar3 = CVarEnableVulkanPSOFileCacheWhenPrecachingActive.Ref;
  GRHIGlobals.SupportsPSOPrecaching =
       *(bool *)((longlong)&pTVar7->NextNode + (longlong)pTVar2->ShadowedValue);
  if (GRHIGlobals.SupportsPSOPrecaching != false) {
    bVar4 = IsInParallelGameThread();
    if (bVar4) {
LAB_145b917c0:
      pTVar7 = pTVar8;
    }
    else {
      bVar4 = IsInGameThread();
      pTVar7 = (TNode *)&DAT_00000001;
      if (bVar4) goto LAB_145b917c0;
    }
    if (*(bool *)((longlong)&pTVar7->NextNode + (longlong)pTVar3->ShadowedValue) == false) {
      GRHIGlobals.SupportsPipelineFileCache = false;
      goto LAB_145b917dc;
    }
  }
  GRHIGlobals.SupportsPipelineFileCache = true;
LAB_145b917dc:
  if (4 < (byte)LogVulkanRHI._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
  }
  ::FName::FName(&local_res8,L"SPIRV");
  GRHIMergeableAccessMask = GRHIMergeableAccessMask & ~CopySrc;
  GRHIGlobals.PreferredPreviewShaderCodeFormat = local_res8;
  SetupValidationRequests();
  if (3 < (byte)LogVulkanRHI._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
  }
  CreateInstance(this);
  SelectDevice(this);
  return this;
}

// ~<lambda_1> @ 145b94db0

void __thiscall
`FVulkanDynamicRHI::RHIWriteGPUFence_TopOfPipe'::__l2::<lambda_1>::~<lambda_1>(void *this)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)((longlong)this + 0x10);
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  puVar3 = *(undefined8 **)((longlong)this + 8);
  if (puVar3 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar3 + 1);
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (piVar1 != (int *)0x0)) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  if (*(FRHIResource **)this != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)this);
  }
  return;
}

// ~FVulkanDynamicRHI @ 145b95690

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

void __thiscall FVulkanDynamicRHI::~FVulkanDynamicRHI(FVulkanDynamicRHI *this)

{
  undefined1 *puVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FBaseGraphTask *pFVar4;
  void *pvVar5;
  TNode *pTVar6;
  FVulkanTimingArray *pFVar7;
  
  this->_padding_ = (longlong)&___7FVulkanDynamicRHI__6B_;
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->LockBufferCS);
  pFVar3 = (this->Viewports).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->InstanceLayers).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->InstanceExtensions).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar4 = (this->EopTask).Reference;
  if (pFVar4 != (FBaseGraphTask *)0x0) {
    LOCK();
    puVar1 = &pFVar4->field_0x30;
    iVar2 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)**(undefined8 **)pFVar4)(pFVar4,1);
    }
  }
  *(undefined4 *)&(this->SignaledSemaphores).field_0x48 = 0;
  pvVar5 = *(void **)&(this->SignaledSemaphores).field_0x40;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  TSparseArray<TSparseSetElement<TTuple<VkSemaphore_T_*,FBinarySemaphoreSignalInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<VkSemaphore_T_*,FBinarySemaphoreSignalInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<VkSemaphore_T_*,FBinarySemaphoreSignalInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SignaledSemaphores);
  pTVar6 = (this->PendingPayloadsForSubmission).Tail;
  while (pTVar6 != (TNode *)0x0) {
    (this->PendingPayloadsForSubmission).Tail = pTVar6->NextNode;
    ::operator_delete(pTVar6,0x10);
    pTVar6 = (this->PendingPayloadsForSubmission).Tail;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->InterruptCS);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->SubmissionCS);
  pFVar7 = *(FVulkanTimingArray **)&(this->CurrentTimingPerQueue).field_0x18;
  if (pFVar7 == (FVulkanTimingArray *)0x0) {
    pFVar7 = &this->CurrentTimingPerQueue;
  }
  DestructItems<TUniquePtr<FVulkanTiming,TDefaultDelete<FVulkanTiming>_>,int>
            ((TUniquePtr<FVulkanTiming,TDefaultDelete<FVulkanTiming>_> *)pFVar7,
             *(int *)&(this->CurrentTimingPerQueue).field_0x20);
  pvVar5 = *(void **)&(this->CurrentTimingPerQueue).field_0x18;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  FDynamicRHI::~FDynamicRHI((FDynamicRHI *)this);
  return;
}

// operator() @ 145b99000

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
`FVulkanDynamicRHI::AsyncReallocateTexture2D_RenderThread'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  longlong lVar1;
  FVulkanContextCommon *pFVar2;
  
  lVar1 = *(longlong *)&param_1->field_0x48;
  if (lVar1 == 0) {
    lVar1 = (**(code **)(GDynamicRHI->_padding_ + 0x3d0))();
    *(longlong *)&param_1->field_0x48 = lVar1;
  }
  pFVar2 = (FVulkanContextCommon *)(lVar1 + -0x50);
  if (lVar1 == 0) {
    pFVar2 = (FVulkanContextCommon *)0x0;
  }
  DoAsyncReallocateTexture2D
            (pFVar2,*(FVulkanTexture **)this,*(FVulkanTexture **)((longlong)this + 8),
             *(int *)((longlong)this + 0x10),*(int *)((longlong)this + 0x14),
             *(int *)((longlong)this + 0x18),*(FThreadSafeCounter **)((longlong)this + 0x20));
  return;
}

// operator() @ 145b992c0

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

void __thiscall
`FVulkanDynamicRHI::EnqueueEndOfPipeTask'::__l2::<lambda_1>::operator()
          (void *this,FVulkanQueue *param_1)

{
  int *piVar1;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar4;
  undefined8 *puVar5;
  longlong lVar6;
  code *pcVar7;
  FVulkanPayload *pFVar8;
  bool bVar9;
  int iVar10;
  FVulkanPayload *pFVar11;
  undefined8 uVar12;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar13;
  longlong *plVar14;
  FVulkanPayload *local_28;
  FVulkanPayload *local_20;
  longlong local_18 [2];
  
  pFVar11 = ::operator_new(400);
  local_28 = (FVulkanPayload *)0x0;
  if (pFVar11 != (FVulkanPayload *)0x0) {
    local_28 = FVulkanPayload::FVulkanPayload(pFVar11,param_1);
  }
  FVulkanSyncPoint::Create((EVulkanSyncPointType)&local_20,(wchar_t *)0x0);
  pFVar11 = local_28;
  pFVar3 = (local_28->SyncPoints).AllocatorInstance.Data;
  if (((pFVar3 <= (FScriptContainerElement *)&local_20) &&
      ((FScriptContainerElement *)&local_20 < pFVar3 + (longlong)(local_28->SyncPoints).ArrayMax * 8
      )) && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar10 = (pFVar11->SyncPoints).ArrayNum;
  piVar1 = &(pFVar11->SyncPoints).ArrayMax;
  if (iVar10 == *piVar1) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&(pFVar11->SyncPoints).AllocatorInstance,piVar1);
  }
  pFVar8 = local_20;
  (pFVar11->SyncPoints).ArrayNum = iVar10 + 1;
  pFVar3 = (pFVar11->SyncPoints).AllocatorInstance.Data;
  *(undefined8 *)(pFVar3 + (longlong)iVar10 * 8) = 0;
  *(FVulkanPayload **)(pFVar3 + (longlong)iVar10 * 8) = local_20;
  if (local_20 != (FVulkanPayload *)0x0) {
    LOCK();
    *(int *)&(local_20->WaitFlags).AllocatorInstance.Data =
         *(int *)&(local_20->WaitFlags).AllocatorInstance.Data + 1;
    UNLOCK();
  }
  FVar4 = *(ForElementType<TRefCountPtr<FBaseGraphTask>_> *)this;
  lVar6._0_4_ = (local_20->WaitFlags).ArrayNum;
  lVar6._4_4_ = (local_20->WaitFlags).ArrayMax;
  if ((lVar6 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("GraphEvent",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanSubmission.h"
                         ,0x5d,L"This sync point was not created with a CPU event."), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_18[0] = *(longlong *)&(pFVar8->WaitFlags).ArrayNum;
  if (local_18[0] != 0) {
    LOCK();
    *(int *)(local_18[0] + 0x30) = *(int *)(local_18[0] + 0x30) + 1;
    UNLOCK();
  }
  FVar13 = *(ForElementType<TRefCountPtr<FBaseGraphTask>_> *)((longlong)FVar4 + 0x20);
  if (*(ForElementType<TRefCountPtr<FBaseGraphTask>_> *)((longlong)FVar4 + 0x20) ==
      (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FVar13 = FVar4;
  }
  if ((((ulonglong)FVar13 <= local_18) &&
      (local_18 < (longlong *)((longlong)FVar13 + (longlong)*(int *)((longlong)FVar4 + 0x2c) * 8)))
     && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar10 = *(int *)((longlong)FVar4 + 0x28);
  if (iVar10 == *(int *)((longlong)FVar4 + 0x2c)) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                       (0x808,(ForElementType<TRefCountPtr<FBaseGraphTask>_> *)FVar4,
                        (int *)((longlong)FVar4 + 0x2c));
  }
  pFVar11 = local_28;
  *(int *)((longlong)FVar4 + 0x28) = iVar10 + 1;
  FVar13 = *(ForElementType<TRefCountPtr<FBaseGraphTask>_> *)((longlong)FVar4 + 0x20);
  if (*(ForElementType<TRefCountPtr<FBaseGraphTask>_> *)((longlong)FVar4 + 0x20) ==
      (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FVar13 = FVar4;
  }
  *(undefined8 *)((longlong)FVar13 + (longlong)iVar10 * 8) = 0;
  *(longlong *)((longlong)FVar13 + (longlong)iVar10 * 8) = local_18[0];
  puVar5 = *(undefined8 **)((longlong)this + 8);
  local_18[0] = 0;
  if ((void *)*puVar5 != (void *)0x0) {
    UE::Core::Private::Function::CheckCallable((void *)*puVar5);
    pcVar7 = (code *)*puVar5;
    plVar14 = puVar5 + 2;
    if ((longlong *)puVar5[5] != (longlong *)0x0) {
      plVar14 = (longlong *)puVar5[5];
    }
    uVar12 = (**(code **)(*plVar14 + 8))();
    (*pcVar7)(uVar12,pFVar11);
  }
  lVar6 = **(longlong **)((longlong)this + 0x10);
  if (((*(FVulkanPayload ***)(lVar6 + 0x40) <= &local_28) &&
      (&local_28 < *(FVulkanPayload ***)(lVar6 + 0x40) + *(int *)(lVar6 + 0x4c))) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar10 = *(int *)(lVar6 + 0x48);
  if (iVar10 == *(int *)(lVar6 + 0x4c)) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,(ForAnyElementType *)(lVar6 + 0x40),(int *)(lVar6 + 0x4c));
  }
  *(int *)(lVar6 + 0x48) = iVar10 + 1;
  *(FVulkanPayload **)(*(longlong *)(lVar6 + 0x40) + (longlong)iVar10 * 8) = local_28;
  if (local_20 != (FVulkanPayload *)0x0) {
    pTVar2 = &local_20->WaitFlags;
    LOCK();
    iVar10 = *(int *)&(pTVar2->AllocatorInstance).Data;
    *(int *)&(pTVar2->AllocatorInstance).Data = *(int *)&(pTVar2->AllocatorInstance).Data + -1;
    UNLOCK();
    if (iVar10 == 1) {
      if (pTVar2 == (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)0x0) {
        local_20 = (FVulkanPayload *)0x0;
      }
      if (local_20 != (FVulkanPayload *)0x0) {
        (*(code *)local_20->Queue->Queue)(local_20,1);
      }
    }
  }
  return;
}

// operator() @ 145b99600

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall `FVulkanDynamicRHI::RHIEndFrame'::__l2::<lambda_1>::operator()(void *this)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  ForElementType<UE::RHI::GPUProfiler::FEventStream> FVar7;
  longlong lVar8;
  longlong *plVar9;
  ForElementType<UE::RHI::GPUProfiler::FEventStream> FVar10;
  undefined1 auStack_108 [32];
  ForElementType<UE::RHI::GPUProfiler::FEventStream> local_e8;
  ForElementType<UE::RHI::GPUProfiler::FEventStream> local_e0;
  longlong local_d8;
  longlong local_d0;
  undefined8 local_c8;
  undefined1 local_b8 [16];
  ForElementType<UE::RHI::GPUProfiler::FEventStream> local_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  TArrayView<UE::RHI::GPUProfiler::FEventStream,int> local_98;
  ForElementType<UE::RHI::GPUProfiler::FEventStream> local_88;
  int local_38;
  int local_34;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_108;
  iVar2 = *(int *)((longlong)this + 0x28);
  plVar9 = *(longlong **)((longlong)this + 0x20);
  if (*(longlong **)((longlong)this + 0x20) == (longlong *)0x0) {
    plVar9 = (longlong *)((longlong)this + 8);
  }
  local_88.SecondaryData = (ForElementType<UE::RHI::GPUProfiler::FEventStream>)0x0;
  local_38 = 0;
  local_34 = 3;
  plVar1 = plVar9 + iVar2;
  while( true ) {
    if (*(int *)((longlong)this + 0x28) != iVar2) {
      local_b8[0] = 0;
      `TCheckedPointerIterator<TUniquePtr<FVulkanTiming,TDefaultDelete<FVulkanTiming>_>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_b8);
    }
    iVar5 = local_38;
    if (plVar9 == plVar1) break;
    lVar3 = *plVar9;
    FVar10 = (ForElementType<UE::RHI::GPUProfiler::FEventStream>)(lVar3 + 0x28);
    FVar7 = (ForElementType<UE::RHI::GPUProfiler::FEventStream>)&local_88;
    if (local_88.SecondaryData != (ForElementType<UE::RHI::GPUProfiler::FEventStream>)0x0) {
      FVar7 = local_88.SecondaryData;
    }
    if ((ulonglong)FVar7 <= (ulonglong)FVar10) {
      FVar7 = (ForElementType<UE::RHI::GPUProfiler::FEventStream>)&local_88;
      if (local_88.SecondaryData != (ForElementType<UE::RHI::GPUProfiler::FEventStream>)0x0) {
        FVar7 = local_88.SecondaryData;
      }
      if ((ulonglong)FVar10 < (ulonglong)((longlong)FVar7 + (longlong)local_34 * 0x18)) {
        local_c8 = 0x18;
        local_d0 = (longlong)local_38;
        local_e0 = (ForElementType<UE::RHI::GPUProfiler::FEventStream>)&local_88;
        if (local_88.SecondaryData != (ForElementType<UE::RHI::GPUProfiler::FEventStream>)0x0) {
          local_e0 = local_88.SecondaryData;
        }
        local_e8 = FVar10;
        local_d8 = (longlong)local_34;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (local_38 == local_34) {
      local_38 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::RHI::GPUProfiler::FEventStream>_>
                           (0x818,&local_88,&local_34);
    }
    FVar7 = (ForElementType<UE::RHI::GPUProfiler::FEventStream>)&local_88;
    if (local_88.SecondaryData != (ForElementType<UE::RHI::GPUProfiler::FEventStream>)0x0) {
      FVar7 = local_88.SecondaryData;
    }
    lVar8 = (longlong)local_38;
    plVar9 = plVar9 + 1;
    local_38 = local_38 + 1;
    ((FEventStream *)((longlong)FVar7 + lVar8 * 0x18))->First = *(FChunk **)FVar10;
    ((FChunk **)((longlong)FVar7 + 8))[lVar8 * 3] = *(FChunk **)(lVar3 + 0x30);
    ((FQueue *)((longlong)FVar7 + 0x10))[lVar8 * 6].field0_0x0 = *(FQueue_u_0 *)(lVar3 + 0x38);
    *(undefined8 *)FVar10 = 0;
    *(undefined8 *)(lVar3 + 0x30) = 0;
  }
  local_a8 = (ForElementType<UE::RHI::GPUProfiler::FEventStream>)&local_88;
  if (local_88.SecondaryData != (ForElementType<UE::RHI::GPUProfiler::FEventStream>)0x0) {
    local_a8 = local_88.SecondaryData;
  }
  if ((local_38 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_98._12_4_ = uStack_9c;
  local_98.ArrayNum = iVar5;
  local_98.DataPtr = (FEventStream *)local_a8;
  iStack_a0 = iVar5;
  UE::RHI::GPUProfiler::ProcessEvents(&local_98);
  FVar7 = (ForElementType<UE::RHI::GPUProfiler::FEventStream>)&local_88;
  if (local_88.SecondaryData != (ForElementType<UE::RHI::GPUProfiler::FEventStream>)0x0) {
    FVar7 = local_88.SecondaryData;
  }
  DestructItems<UE::RHI::GPUProfiler::FEventStream,int>((FEventStream *)FVar7,local_38);
  if (local_88.SecondaryData != (ForElementType<UE::RHI::GPUProfiler::FEventStream>)0x0) {
    FMemory::Free((void *)local_88.SecondaryData);
  }
  return;
}

// operator() @ 145b99840

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

void __thiscall
`FVulkanDynamicRHI::RHIEndFrame_RenderThread'::__l2::<lambda_1>::operator()
          (void *this,FVulkanContextArray *param_1)

{
  FVulkanContextCommon *this_00;
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  
  this_00 = *(FVulkanContextCommon **)param_1;
  lVar1._0_4_ = this_00[4].PendingSyncPoints.ArrayNum;
  lVar1._4_4_ = this_00[4].PendingSyncPoints.ArrayMax;
  if (lVar1 != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Context.IsImmediate()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRHI.cpp"
                       ,0x48b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FVulkanContextCommon::FreeUnusedCmdBuffers(this_00,false);
  VulkanRHI::FStagingManager::ProcessPendingFree(&this_00->Device->StagingManager,false,true);
  VulkanRHI::FMemoryManager::ReleaseFreedPages(&this_00->Device->MemoryManager,param_1);
  VulkanRHI::FDeferredDeletionQueue2::ReleaseResources
            (&this_00->Device->DeferredDeletionQueue,false);
  if ((int)GMaxRHIFeatureLevel < 2) {
    FVulkanDescriptorSetCache::GC(this_00->Device->DescriptorSetCache);
  }
  FVulkanDescriptorPoolsManager::GC(this_00->Device->DescriptorPoolsManager);
  FVulkanDevice::RemoveStaleQueryPools(this_00->Device);
  FVulkanPipelineStateCacheManager::TickLRU(this_00->Device->PipelineStateCache);
  FVulkanBindlessDescriptorManager::UpdateUBAllocator(this_00->Device->BindlessDescriptorManager);
  VulkanRHI::FTempBlockAllocator::UpdateBlocks(this_00->Device->TempBlockAllocator);
  return;
}

// operator() @ 145b99940

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FVulkanPlatformCommandList * __thiscall
`FVulkanDynamicRHI::RHIFinalizeContext'::__l2::<lambda_1>::operator()
          (void *this,ERHIPipeline param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  FVulkanPlatformCommandList *pFVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)0x0;
  if ((param_1 == Graphics) || (puVar1 = (undefined8 *)&DAT_00000008, param_1 != AsyncCompute)) {
    puVar1 = puVar4;
  }
  if (*(longlong *)((longlong)puVar1 + *(longlong *)this) == 0) {
    puVar2 = ::operator_new(0x50);
    puVar1 = puVar4;
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      *(undefined4 *)(puVar2 + 5) = 0;
      *(undefined4 *)((longlong)puVar2 + 0x2c) = 2;
      puVar2[6] = 0;
      puVar2[7] = 0;
      puVar2[8] = 0;
      puVar2[9] = 0;
      puVar1 = puVar2;
    }
    if ((param_1 == Graphics) || (puVar2 = (undefined8 *)&DAT_00000008, param_1 != AsyncCompute)) {
      puVar2 = puVar4;
    }
    *(undefined8 **)((longlong)puVar2 + *(longlong *)this) = puVar1;
  }
  if ((param_1 == Graphics) || (param_1 != AsyncCompute)) {
    pFVar3 = (FVulkanPlatformCommandList *)**(undefined8 **)this;
  }
  else {
    pFVar3 = (FVulkanPlatformCommandList *)(*(undefined8 **)this)[1];
  }
  return pFVar3;
}

// operator() @ 145b99a10

/* WARNING: Removing unreachable block (ram,0x000145b99b8d) */
/* WARNING: Removing unreachable block (ram,0x000145b99bb2) */
/* WARNING: Removing unreachable block (ram,0x000145b99aa7) */
/* WARNING: Removing unreachable block (ram,0x000145b99acc) */
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

void __thiscall
`FVulkanDynamicRHI::RHIReplaceResources'::__l2::<lambda_1>::operator()
          (void *this,FVulkanContextArray *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  FVulkanRayTracingGeometry *this_00;
  FVulkanBuffer *this_01;
  FVulkanBuffer *pFVar3;
  code *pcVar4;
  bool bVar5;
  FVulkanRayTracingGeometry *pFVar6;
  undefined8 *puVar7;
  undefined1 local_res8 [8];
  
  iVar2 = *(int *)((longlong)this + 8);
  puVar7 = *(undefined8 **)this;
  puVar1 = puVar7 + (longlong)iVar2 * 3;
  do {
    while( true ) {
      if (*(int *)((longlong)this + 8) != iVar2) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FRHIResourceReplaceInfo_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (puVar7 == puVar1) {
        return;
      }
      if (*(char *)(puVar7 + 2) != '\0') break;
      this_01 = (FVulkanBuffer *)*puVar7;
      if ((*(char *)(puVar7 + 2) != '\0') &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (FVulkanBuffer *)puVar7[1];
      if (pFVar3 == (FVulkanBuffer *)0x0) {
        FVulkanBuffer::ReleaseOwnership(this_01);
      }
      else {
        if ((pFVar3->_padding_ != 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("!Src->HasLinkedViews()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRHI.cpp"
                               ,0x855,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FVulkanBuffer::TakeOwnership(this_01,pFVar3);
      }
      (**(code **)(this_01->_padding_ + 8))();
LAB_145b99c40:
      puVar7 = puVar7 + 3;
    }
    if (*(char *)(puVar7 + 2) != '\x01') {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRHI.cpp"
                         ,0x84a,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      goto LAB_145b99c40;
    }
    pFVar6 = (FVulkanRayTracingGeometry *)puVar7[1];
    if ((*(char *)(puVar7 + 2) != '\x01') &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    this_00 = (FVulkanRayTracingGeometry *)*puVar7;
    if (pFVar6 == (FVulkanRayTracingGeometry *)0x0) {
      pFVar6 = ::operator_new(0x1c0);
      if (pFVar6 == (FVulkanRayTracingGeometry *)0x0) {
        FVulkanRayTracingGeometry::RemoveCompactionRequest(this_00);
        FVulkanRayTracingGeometry::Swap(this_00,(FVulkanRayTracingGeometry *)0x0);
        puVar7 = puVar7 + 3;
      }
      else {
        pFVar6 = FVulkanRayTracingGeometry::FVulkanRayTracingGeometry(pFVar6,NoInit);
        if (pFVar6 == (FVulkanRayTracingGeometry *)0x0) {
          FVulkanRayTracingGeometry::RemoveCompactionRequest(this_00);
          pFVar6 = (FVulkanRayTracingGeometry *)0x0;
          goto LAB_145b99b5a;
        }
        FRHIResource::AddRef((FRHIResource *)pFVar6);
        FVulkanRayTracingGeometry::RemoveCompactionRequest(this_00);
        FVulkanRayTracingGeometry::Swap(this_00,pFVar6);
        FRHIResource::Release((FRHIResource *)pFVar6);
        puVar7 = puVar7 + 3;
      }
    }
    else {
LAB_145b99b5a:
      FVulkanRayTracingGeometry::Swap(this_00,pFVar6);
      puVar7 = puVar7 + 3;
    }
  } while( true );
}

// operator() @ 145b99c70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
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

void __thiscall
`FVulkanDynamicRHI::RHIWriteGPUFence_TopOfPipe'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListBase *param_1)

{
  int *piVar1;
  VkEvent_T *pVVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  _func___cdecl_void_VkCommandBuffer_T_ptr_VkEvent_T_ptr_uint *p_Var5;
  bool bVar6;
  int iVar7;
  IRHICommandContext *pIVar8;
  longlong lVar9;
  FVulkanCommandBuffer *pFVar10;
  FVulkanPayload *pFVar11;
  FScriptContainerElement *pFVar12;
  FVulkanContextCommon *this_00;
  
  pIVar8 = FRHICommandListBase::GetContext(param_1);
  lVar9 = (**(code **)(pIVar8->_padding_ + 0x148))(pIVar8);
  p_Var5 = VulkanDynamicAPI::vkCmdSetEvent;
  this_00 = (FVulkanContextCommon *)(lVar9 + -0x50);
  if (lVar9 == 0) {
    this_00 = (FVulkanContextCommon *)0x0;
  }
  pVVar2 = *(VkEvent_T **)(*(longlong *)this + 0x30);
  if (pVVar2 == (VkEvent_T *)0x0) {
    pFVar11 = FVulkanContextCommon::GetPayload(this_00,Signal);
    pFVar12 = (pFVar11->SyncPoints).AllocatorInstance.Data;
    if ((pFVar12 <= (FScriptContainerElement *)((longlong)this + 8U)) &&
       ((FScriptContainerElement *)((longlong)this + 8U) <
        pFVar12 + (longlong)(pFVar11->SyncPoints).ArrayMax * 8)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar7 = (pFVar11->SyncPoints).ArrayNum;
    piVar1 = &(pFVar11->SyncPoints).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(pFVar11->SyncPoints).AllocatorInstance,piVar1);
    }
    (pFVar11->SyncPoints).ArrayNum = iVar7 + 1;
    pFVar12 = (pFVar11->SyncPoints).AllocatorInstance.Data;
  }
  else {
    pFVar10 = FVulkanContextCommon::GetCommandBuffer(this_00);
    (*p_Var5)(pFVar10->CommandBufferHandle,pVVar2,0x2000);
    pFVar12 = (FScriptContainerElement *)((longlong)this + 0x10);
    pFVar11 = FVulkanContextCommon::GetPayload(this_00,this_00->CurrentPhase);
    pFVar3 = (pFVar11->SubmissionEvents).AllocatorInstance.Data;
    if ((pFVar3 <= pFVar12) &&
       (pFVar12 < pFVar3 + (longlong)(pFVar11->SubmissionEvents).ArrayMax * 8)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar7 = (pFVar11->SubmissionEvents).ArrayNum;
    piVar1 = &(pFVar11->SubmissionEvents).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(pFVar11->SubmissionEvents).AllocatorInstance,piVar1);
    }
    (pFVar11->SubmissionEvents).ArrayNum = iVar7 + 1;
    pFVar3 = (pFVar11->SubmissionEvents).AllocatorInstance.Data;
    *(undefined8 *)(pFVar3 + (longlong)iVar7 * 8) = 0;
    lVar9 = *(longlong *)pFVar12;
    *(longlong *)(pFVar3 + (longlong)iVar7 * 8) = lVar9;
    if (lVar9 != 0) {
      LOCK();
      *(int *)(lVar9 + 0x30) = *(int *)(lVar9 + 0x30) + 1;
      UNLOCK();
    }
    pFVar12 = (this_00->PendingSyncPoints).AllocatorInstance.Data;
    if ((pFVar12 <= (FScriptContainerElement *)((longlong)this + 8U)) &&
       ((FScriptContainerElement *)((longlong)this + 8U) <
        pFVar12 + (longlong)(this_00->PendingSyncPoints).ArrayMax * 8)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar7 = (this_00->PendingSyncPoints).ArrayNum;
    piVar1 = &(this_00->PendingSyncPoints).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(this_00->PendingSyncPoints).AllocatorInstance,piVar1);
    }
    (this_00->PendingSyncPoints).ArrayNum = iVar7 + 1;
    pFVar12 = (this_00->PendingSyncPoints).AllocatorInstance.Data;
  }
  *(undefined8 *)(pFVar12 + (longlong)iVar7 * 8) = 0;
  lVar9 = *(longlong *)((longlong)this + 8);
  *(longlong *)(pFVar12 + (longlong)iVar7 * 8) = lVar9;
  if (lVar9 != 0) {
    LOCK();
    *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
    UNLOCK();
  }
  LOCK();
  *(int *)(*(longlong *)this + 0x18) = *(int *)(*(longlong *)this + 0x18) + -1;
  UNLOCK();
  return;
}

// operator() @ 145b9a780

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

void __thiscall
`FVulkanDynamicRHI::DumpCrashMarkers'::__l3::<lambda_1>::operator()
          (void *this,FVulkanQueue *param_1)

{
  EVulkanQueueType EVar1;
  int iVar2;
  FVulkanDiagnosticBuffer *this_00;
  wchar_t *pwVar3;
  FString *pFVar4;
  int iVar5;
  FString local_18;
  
  this_00 = (param_1->DiagnosticBuffer).Ptr;
  if (this_00 != (FVulkanDiagnosticBuffer *)0x0) {
    EVar1 = param_1->QueueType;
    pwVar3 = GetVulkanQueueTypeName(EVar1);
    pFVar4 = FRHIDiagnosticBuffer::GetShaderDiagnosticMessages
                       ((FRHIDiagnosticBuffer *)this_00,&local_18,0,(uint)EVar1,pwVar3);
    iVar2 = (pFVar4->Data).ArrayNum;
    iVar5 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar5 = 0;
    }
    ::FString::AppendChars(*(FString **)this,(wchar_t *)(pFVar4->Data).AllocatorInstance.Data,iVar5)
    ;
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// operator() @ 145b9a810

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

void __thiscall
`FVulkanDynamicRHI::RHIBlockUntilGPUIdle'::__l3::<lambda_1>::operator()
          (void *this,FVulkanQueue *param_1)

{
  int *piVar1;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  ForElementType<FVulkanSyncPoint_*> FVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FVulkanPayload *pFVar9;
  ForElementType<FVulkanSyncPoint_*> FVar10;
  FVulkanPayload *local_28;
  FVulkanPayload *local_20;
  FVulkanPayload *local_18 [2];
  
  pFVar9 = ::operator_new(400);
  local_20 = (FVulkanPayload *)0x0;
  if (pFVar9 != (FVulkanPayload *)0x0) {
    local_20 = FVulkanPayload::FVulkanPayload(pFVar9,param_1);
  }
  FVulkanSyncPoint::Create((EVulkanSyncPointType)&local_28,(wchar_t *)0x0);
  pFVar9 = local_20;
  pFVar3 = (local_20->SyncPoints).AllocatorInstance.Data;
  if (((pFVar3 <= (FScriptContainerElement *)&local_28) &&
      ((FScriptContainerElement *)&local_28 < pFVar3 + (longlong)(local_20->SyncPoints).ArrayMax * 8
      )) && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar8 = (pFVar9->SyncPoints).ArrayNum;
  piVar1 = &(pFVar9->SyncPoints).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(pFVar9->SyncPoints).AllocatorInstance,piVar1);
  }
  (pFVar9->SyncPoints).ArrayNum = iVar8 + 1;
  pFVar3 = (pFVar9->SyncPoints).AllocatorInstance.Data;
  *(undefined8 *)(pFVar3 + (longlong)iVar8 * 8) = 0;
  *(FVulkanPayload **)(pFVar3 + (longlong)iVar8 * 8) = local_28;
  if (local_28 != (FVulkanPayload *)0x0) {
    LOCK();
    *(int *)&(local_28->WaitFlags).AllocatorInstance.Data =
         *(int *)&(local_28->WaitFlags).AllocatorInstance.Data + 1;
    UNLOCK();
  }
  lVar4 = **(longlong **)((longlong)this + 8);
  if (((*(FVulkanPayload ***)(lVar4 + 0x40) <= &local_20) &&
      (&local_20 < *(FVulkanPayload ***)(lVar4 + 0x40) + *(int *)(lVar4 + 0x4c))) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar8 = *(int *)(lVar4 + 0x48);
  if (iVar8 == *(int *)(lVar4 + 0x4c)) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)(lVar4 + 0x40),(int *)(lVar4 + 0x4c));
  }
  *(int *)(lVar4 + 0x48) = iVar8 + 1;
  *(FVulkanPayload **)(*(longlong *)(lVar4 + 0x40) + (longlong)iVar8 * 8) = local_20;
  FVar5 = *(ForElementType<FVulkanSyncPoint_*> *)this;
  local_18[0] = local_28;
  FVar10 = *(ForElementType<FVulkanSyncPoint_*> *)((longlong)FVar5 + 0x18);
  if (*(ForElementType<FVulkanSyncPoint_*> *)((longlong)FVar5 + 0x18) ==
      (ForElementType<FVulkanSyncPoint_*>)0x0) {
    FVar10 = FVar5;
  }
  if ((((ulonglong)FVar10 <= local_18) &&
      (local_18 <
       (FVulkanPayload **)((longlong)FVar10 + (longlong)*(int *)((longlong)FVar5 + 0x24) * 8))) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar8 = *(int *)((longlong)FVar5 + 0x20);
  if (iVar8 == *(int *)((longlong)FVar5 + 0x24)) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<FVulkanSyncPoint_*>_>
                      (0x808,(ForElementType<FVulkanSyncPoint_*> *)FVar5,
                       (int *)((longlong)FVar5 + 0x24));
  }
  *(int *)((longlong)FVar5 + 0x20) = iVar8 + 1;
  FVar10 = *(ForElementType<FVulkanSyncPoint_*> *)((longlong)FVar5 + 0x18);
  if (*(ForElementType<FVulkanSyncPoint_*> *)((longlong)FVar5 + 0x18) ==
      (ForElementType<FVulkanSyncPoint_*>)0x0) {
    FVar10 = FVar5;
  }
  *(FVulkanPayload **)((longlong)FVar10 + (longlong)iVar8 * 8) = local_18[0];
  if (local_28 != (FVulkanPayload *)0x0) {
    pTVar2 = &local_28->WaitFlags;
    LOCK();
    iVar8 = *(int *)&(pTVar2->AllocatorInstance).Data;
    *(int *)&(pTVar2->AllocatorInstance).Data = *(int *)&(pTVar2->AllocatorInstance).Data + -1;
    UNLOCK();
    if (iVar8 == 1) {
      if (pTVar2 == (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)0x0) {
        local_28 = (FVulkanPayload *)0x0;
      }
      if (local_28 != (FVulkanPayload *)0x0) {
        (*(code *)local_28->Queue->Queue)(local_28,1);
      }
    }
  }
  return;
}

// operator() @ 145b9aac0

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

void __thiscall
`FVulkanDynamicRHI::WaitAndProcessInterruptQueue'::__l3::<lambda_1>::operator()
          (void *this,FVulkanQueue *param_1)

{
  byte bVar1;
  FVulkanPayload *pFVar2;
  int iVar3;
  
  bVar1 = **(byte **)((longlong)this + 0x10);
  iVar3 = FVulkanQueue::ProcessInterruptQueue(param_1,0);
  **(byte **)((longlong)this + 0x10) = 0 < iVar3 | bVar1;
  if ((((param_1->PendingInterrupt).Tail)->NextNode != (TNode *)0x0) &&
     (pFVar2 = ((param_1->PendingInterrupt).Tail)->NextNode->Item, pFVar2 != (FVulkanPayload *)0x0))
  {
    *(FVulkanPayload **)(*(longlong *)((longlong)this + 8) + (ulonglong)**(uint **)this * 8) =
         pFVar2;
    **(int **)this = **(int **)this + 1;
  }
  return;
}

// operator() @ 145b9ab40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
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

void __thiscall
`FVulkanDynamicRHI::FinalizeCreateTextureInternal'::__l5::<lambda_1>::operator()
          (void *this,FRHICommandListBase *param_1)

{
  int *piVar1;
  TArray<FVulkanCommitReservedResourceDesc,TSizedDefaultAllocator<32>_> *pTVar2;
  FRHIResource *this_00;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  IRHICommandContext *pIVar6;
  longlong lVar7;
  FVulkanPayload *pFVar8;
  FScriptContainerElement *pFVar9;
  FVulkanContextCommon *this_01;
  FRHIResource *local_18;
  undefined8 local_10;
  
  pIVar6 = FRHICommandListBase::GetContext(param_1);
  lVar7 = (**(code **)(pIVar6->_padding_ + 0x148))(pIVar6);
  this_00 = *(FRHIResource **)this;
  local_18 = (FRHIResource *)0x0;
  this_01 = (FVulkanContextCommon *)(lVar7 + -0x50);
  if (lVar7 == 0) {
    this_01 = (FVulkanContextCommon *)0x0;
  }
  if (this_00 != (FRHIResource *)0x0) {
    local_18 = this_00;
    FRHIResource::AddRef(this_00);
  }
  local_10 = 0xffffffffffffffff;
  pFVar8 = FVulkanContextCommon::GetPayload(this_01,UpdateReservedResources);
  pTVar2 = &pFVar8->ReservedResourcesToCommit;
  pFVar9 = (pTVar2->AllocatorInstance).Data;
  if ((pFVar9 <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 <
      pFVar9 + (longlong)(pFVar8->ReservedResourcesToCommit).ArrayMax * 0x10)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (pFVar8->ReservedResourcesToCommit).ArrayNum;
  piVar1 = &(pFVar8->ReservedResourcesToCommit).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar2->AllocatorInstance,piVar1);
  }
  (pFVar8->ReservedResourcesToCommit).ArrayNum = iVar5 + 1;
  pFVar9 = (pTVar2->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
  *(undefined8 *)pFVar9 = 0;
  *(FRHIResource **)pFVar9 = local_18;
  if (local_18 != (FRHIResource *)0x0) {
    FRHIResource::AddRef(local_18);
  }
  *(undefined8 *)(pFVar9 + 8) = local_10;
  if (local_18 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_18);
  }
  return;
}

// operator() @ 145b9ac90

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
`FVulkanDynamicRHI::RHIUpdateTextureReference'::__l5::<lambda_1>::operator()
          (void *this,FVulkanContextArray *param_1)

{
  longlong lVar1;
  FVulkanTexture *this_00;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  byte bVar5;
  longlong lVar6;
  longlong lVar7;
  FVulkanTextureViewDesc local_48;
  
  lVar1 = *(longlong *)(*(longlong *)this + 0x148);
  if (((int)*(undefined8 *)(lVar1 + 0x40) != -1) &&
     ((char)((ulonglong)*(undefined8 *)(lVar1 + 0x40) >> 0x20) != '\t')) {
    if ((*(char *)(lVar1 + 0x68) == '\0') && (*(char *)(lVar1 + 0x50) == '\0')) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("VulkanTextureRefSRV->IsInitialized()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                         ,0x467,
                         L"TextureReference should always be created with a view of the default texture at least"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    lVar6 = (**(code **)(**(longlong **)((longlong)this + 8) + 0x20))();
    FVulkanView::Invalidate((FVulkanView *)(lVar1 + 0x38));
    local_48.ImageUsageFlags = 0;
    local_48.SamplerYcbcrConversion = (VkSamplerYcbcrConversion_T *)0x0;
    lVar7 = (**(code **)(**(longlong **)((longlong)this + 8) + 0x20))();
    local_48.ViewType = UETextureDimensionToVkImageViewType(*(ETextureDimension *)(lVar7 + 0x32));
    this_00 = *(FVulkanTexture **)((longlong)this + 8);
    local_48.AspectFlags = this_00->PartialAspectMask;
    local_48.UEFormat = *(EPixelFormat *)(lVar6 + 0x33);
    local_48.Format = this_00->ViewFormat;
    local_48.FirstMip = 0;
    local_48.ArraySliceIndex = 0;
    bVar5 = 1;
    if (1 < *(byte *)(lVar6 + 0x30)) {
      bVar5 = *(byte *)(lVar6 + 0x30);
    }
    local_48.NumMips = (uint)bVar5;
    local_48.NumArraySlices = FVulkanTexture::GetNumberOfArrayLevels(this_00);
    plVar2 = *(longlong **)((longlong)this + 8);
    lVar6 = (**(code **)(*plVar2 + 0x20))(plVar2);
    if (((GPixelFormats[*(byte *)(lVar6 + 0x33)].Capabilities & TextureSample) == None) ||
       ((*(byte *)(plVar2 + 0x2f) & 4) == 0)) {
      local_48.bUseIdentitySwizzle = true;
    }
    else {
      local_48.bUseIdentitySwizzle = false;
    }
    FVulkanView::UpdateTextureView
              ((FVulkanView *)(lVar1 + 0x38),param_1,
               *(VkImage_T **)(*(longlong *)((longlong)this + 8) + 0x170),&local_48);
  }
  return;
}

// operator() @ 145b9ae10

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

void __thiscall
`FVulkanDynamicRHI::InitializeSubmissionPipe'::__l12::<lambda_1>::operator()
          (void *this,FVulkanQueue *param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  FQueue FVar6;
  int iVar7;
  undefined4 extraout_var;
  FVulkanPayload *pFVar9;
  FVulkanTiming *pFVar10;
  undefined1 local_18 [16];
  FScriptContainerElement *pFVar8;
  
  pFVar2 = *(ForAnyElementType **)this;
  FVar6 = FVulkanQueue::GetProfilerQueue(param_1);
  pFVar8 = (FScriptContainerElement *)CONCAT44(extraout_var,FVar6.field0_0x0);
  if ((pFVar2->Data <= pFVar8) &&
     (pFVar8 < pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 4)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar7 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar7 + 1;
  *(undefined4 *)(pFVar2->Data + (longlong)iVar7 * 4) = *(undefined4 *)pFVar8;
  lVar3 = **(longlong **)((longlong)this + 8);
  pFVar9 = ::operator_new(400);
  if (pFVar9 == (FVulkanPayload *)0x0) {
    pFVar9 = (FVulkanPayload *)0x0;
  }
  else {
    pFVar9 = FVulkanPayload::FVulkanPayload(pFVar9,param_1);
  }
  iVar7 = *(int *)(lVar3 + 0x48);
  if (iVar7 == *(int *)(lVar3 + 0x4c)) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)(lVar3 + 0x40),(int *)(lVar3 + 0x4c));
  }
  *(int *)(lVar3 + 0x48) = iVar7 + 1;
  *(FVulkanPayload **)(*(longlong *)(lVar3 + 0x40) + (longlong)iVar7 * 8) = pFVar9;
  pFVar10 = FVulkanDynamicRHI::FVulkanTimingArray::CreateNew
                      ((FVulkanTimingArray *)(*(longlong *)((longlong)this + 0x10) + 0x30),param_1);
  if ((TOptional<FVulkanTiming_*> *)local_18 != &pFVar9->Timing) {
    (pFVar9->Timing).TypedValue = pFVar10;
    (pFVar9->Timing).bIsSet = true;
  }
  return;
}

// operator() @ 145b9af60

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

void __thiscall
`FVulkanDynamicRHI::RHIEndFrame'::__l2::<lambda_2>::operator()(void *this,FVulkanPayload *param_1)

{
  EVulkanQueueType EVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  code *pcVar5;
  bool bVar6;
  FVulkanTiming *pFVar7;
  ulong64 *puVar8;
  longlong lVar9;
  char cVar10;
  FRHIBreadcrumbNode *pFVar11;
  long64 lVar12;
  long64 local_res8;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 uStack_24;
  
  pFVar7 = FVulkanDynamicRHI::FVulkanTimingArray::CreateNew
                     ((FVulkanTimingArray *)(*(longlong *)this + 0x30),param_1->Queue);
  if ((TOptional<FVulkanTiming_*> *)&local_38 != &param_1->Timing) {
    (param_1->Timing).TypedValue = pFVar7;
    (param_1->Timing).bIsSet = true;
  }
  EVar1 = param_1->Queue->QueueType;
  if (EVar1 != Graphics) {
    if (EVar1 == AsyncCompute) {
      cVar10 = '\x02';
      goto LAB_145b9afd5;
    }
    if (EVar1 == Transfer) {
      cVar10 = '\0';
      goto LAB_145b9afd5;
    }
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRHI.cpp"
                       ,0x4d5,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  cVar10 = '\x01';
LAB_145b9afd5:
  if (*(char *)(*(longlong *)this + 0x28) != '\0') {
    puVar8 = (ulong64 *)(*(longlong *)this + 0x20);
    if ((TOptional<unsigned___int64> *)puVar8 != &param_1->ExternalGPUTime) {
      (param_1->ExternalGPUTime).TypedValue = *puVar8;
      (param_1->ExternalGPUTime).bIsSet = true;
    }
    if (*(char *)(*(longlong *)this + 0x28) != '\0') {
      *(undefined1 *)(*(longlong *)this + 0x28) = 0;
    }
  }
  puVar4 = *(undefined4 **)((longlong)this + 8);
  cVar2 = *(char *)(puVar4 + 6);
  if (cVar2 != '\0') {
    local_res8 = *(long64 *)(puVar4 + 4);
  }
  if (cVar10 == '\0') {
    pFVar11 = (FRHIBreadcrumbNode *)0x0;
  }
  else {
    if ((cVar10 == '\x01') || (lVar9 = 8, cVar10 != '\x02')) {
      lVar9 = 0;
    }
    pFVar11 = *(FRHIBreadcrumbNode **)(lVar9 + *(longlong *)(puVar4 + 2));
  }
  uVar3 = *puVar4;
  lVar12 = 0;
  if (cVar2 != '\0') {
    lVar12 = local_res8;
  }
  if ((TOptional<UE::RHI::GPUProfiler::FEvent::FFrameBoundary> *)&local_30 !=
      &param_1->EndFrameEvent) {
    (param_1->EndFrameEvent).TypedValue.CPUTimestamp = 0;
    (param_1->EndFrameEvent).TypedValue.FrameNumber = uVar3;
    (param_1->EndFrameEvent).TypedValue.bStatsFrameSet = (bool)cVar2;
    *(undefined3 *)&(param_1->EndFrameEvent).TypedValue.field_0xd = uStack_24._1_3_;
    (param_1->EndFrameEvent).TypedValue.StatsFrame = lVar12;
    (param_1->EndFrameEvent).TypedValue.Breadcrumb = pFVar11;
    (param_1->EndFrameEvent).bIsSet = true;
  }
  return;
}

// operator() @ 145b9b240

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
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

void __thiscall
`FVulkanDynamicRHI::UpdateUniformBuffer'::__l34::<lambda_2>::operator()
          (void *this,FRHICommandListBase *param_1)

{
  FVulkanAllocation local_28;
  
  VulkanRHI::FVulkanAllocation::FVulkanAllocation(&local_28);
  VulkanRHI::FVulkanAllocation::Reference(&local_28,(FVulkanAllocation *)((longlong)this + 8));
  VulkanRHI::FVulkanAllocation::Own(&local_28);
  VulkanRHI::FVulkanAllocation::Swap(&local_28,(FVulkanAllocation *)(*(longlong *)this + 0x58));
  VulkanRHI::FMemoryManager::FreeUniformBuffer
            ((FMemoryManager *)(*(longlong *)(*(longlong *)this + 0x50) + 0x408),&local_28);
  FVulkanUniformBuffer::UpdateResourceTable
            (*(FVulkanUniformBuffer **)this,*(FRHIResource ***)((longlong)this + 0x28),
             *(int *)((longlong)this + 0x30));
  VulkanRHI::FVulkanAllocation::~FVulkanAllocation(&local_28);
  return;
}

// operator() @ 145b9b2c0

FRHITextureSubresourceInitializer * __thiscall
`FVulkanDynamicRHI::RHICreateTextureInitializer'::__l40::<lambda_2>::operator()
          (void *this,FRHITextureSubresourceInitializer *__return_storage_ptr__,
          FSubresourceIndex *param_1)

{
  longlong lVar1;
  code *pcVar2;
  ulong64 uVar3;
  bool bVar4;
  FRHITextureDesc *pFVar5;
  ulong64 uVar6;
  FRHITextureSubresourceInitializer *pFVar7;
  ulong64 local_res8;
  ulong64 local_res10;
  FSubresourceIndex local_28;
  
  pFVar5 = (FRHITextureDesc *)(**(code **)(**(longlong **)this + 0x20))();
  local_28.MipIndex = param_1->MipIndex;
  local_28.FaceIndex = param_1->FaceIndex;
  local_28.ArrayIndex = param_1->ArrayIndex;
  local_res10 = 0;
  local_res8 = 0;
  uVar6 = UE::VulkanTexture::CalculateSubresourceOffset(pFVar5,&local_28,&local_res10,&local_res8);
  uVar3 = local_res8;
  if (*(ulonglong *)((longlong)this + 0x10) < uVar6 + local_res8) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Offset + SubresourceSize <= UploadMemorySize",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                       ,0x5d7,
                       L"Subresource(Face=%d,Array=%d,Mip=%d) access out of bounds: Offset=%lld + SubresourceSize=%lld > UploadMemorySize=%lld"
                      );
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FRHITextureSubresourceInitializer *)(*pcVar2)();
      return pFVar7;
    }
  }
  lVar1 = *(longlong *)((longlong)this + 8);
  __return_storage_ptr__->Stride = local_res10;
  __return_storage_ptr__->Data = (void *)(lVar1 + uVar6);
  __return_storage_ptr__->Size = uVar3;
  return __return_storage_ptr__;
}

// operator() @ 145b9b3d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
`FVulkanDynamicRHI::DumpCrashMarkers'::__l33::<lambda_3>::operator()
          (void *this,FString *__return_storage_ptr__)

{
  uint uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  size_t sVar6;
  wchar_t *pwVar7;
  FString *pFVar8;
  ulonglong uVar9;
  uchar *_Str;
  uint uVar10;
  int iVar11;
  uchar *puVar12;
  undefined1 auStack_1a8 [32];
  undefined8 local_188;
  undefined1 local_178 [4];
  uint local_174;
  FString local_170;
  FScriptContainerElement local_158 [256];
  ForAnyElementType local_58;
  FScriptContainerElement *local_50;
  int local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  plVar2 = *(longlong **)this;
  local_174 = *(uint *)(plVar2 + 1);
  uVar9 = (ulonglong)(int)local_174;
  _Str = (uchar *)*plVar2;
  puVar12 = _Str + uVar9 * 0x110;
  do {
    if ((int)plVar2[1] != (int)uVar9) {
      local_178[0] = 0;
      `TCheckedPointerIterator<VkDeviceFaultVendorInfoEXT,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_178);
    }
    if (_Str == puVar12) {
      return __return_storage_ptr__;
    }
    uVar3 = *(undefined8 *)(_Str + 0x108);
    local_58.Data = (FScriptContainerElement *)0x0;
    if (_Str == (uchar *)0x0) {
      local_50 = (FScriptContainerElement *)0x0;
      local_48 = 0;
    }
    else {
      sVar6 = strlen((char *)_Str);
      local_48 = UE::Core::Private::GetConvertedLength((wchar_t *)0x0,_Str,(int)sVar6);
      uVar1 = local_48 + 1;
      uVar10 = uVar1;
      if (uVar1 < 0x81) {
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          uVar10 = 0;
          goto LAB_145b9b4a6;
        }
      }
      else {
LAB_145b9b4a6:
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar10,2);
      }
      local_50 = local_158;
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        local_50 = local_58.Data;
      }
      pwVar7 = UE::Core::Private::Convert((wchar_t *)local_50,uVar1,_Str,(int)sVar6 + 1);
      if ((pwVar7 == (wchar_t *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Result",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                             ,0x25,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FString *)(*pcVar4)();
        return pFVar8;
      }
    }
    local_188 = uVar3;
    ::FString::PrintfImpl(&local_170,L"\n    - %s (code:0x%016llX data:0x%016llX)");
    iVar11 = local_170.Data.ArrayNum + -1;
    if (local_170.Data.ArrayNum == 0) {
      iVar11 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_170.Data.AllocatorInstance.Data,iVar11);
    if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_170.Data.AllocatorInstance.Data);
    }
    if (local_58.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data);
    }
    uVar9 = (ulonglong)local_174;
    _Str = _Str + 0x110;
  } while( true );
}

// operator() @ 145b9b5e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TRefCountPtr<FRHITexture> __thiscall
`FVulkanDynamicRHI::RHICreateTextureInitializer'::__l42::<lambda_3>::operator()
          (void *this,FRHICommandListBase *param_1)

{
  FRHICommandBase *pFVar1;
  FRHICommandListBase *in_R8;
  longlong local_18;
  FRHICommandBase *pFStack_10;
  
  local_18 = *(longlong *)this;
  pFStack_10 = *(FRHICommandBase **)((longlong)this + 8);
  *(undefined4 *)(local_18 + 0x1f0) = 5;
  if (((GRHICommandList.bLatchedBypass == false) || ((in_R8->PersistentState).bImmediate == '\0'))
     && (in_R8->bExecuting == false)) {
    pFVar1 = FMemStackBase::Alloc(&in_R8->MemManager,0x28,8);
    in_R8->NumCommands = in_R8->NumCommands + 1;
    *in_R8->CommandLink = pFVar1;
    in_R8->CommandLink = &pFVar1->Next;
    pFVar1->Next = (FRHICommandBase *)0x0;
    pFVar1->_padding_ =
         (longlong)
         &TRHILambdaCommand<FRHICommandListBase,`FVulkanTexture::UploadInitialData'::`2'::<lambda_1>_>
          ::_vftable_;
    pFVar1[2]._padding_ = (longlong)L"FVulkanTexture::UploadInitialData";
    pFVar1[1]._padding_ = local_18;
    pFVar1[1].Next = pFStack_10;
  }
  else {
    `FVulkanTexture::UploadInitialData'::__l2::<lambda_1>::operator()(&local_18,in_R8);
  }
  (param_1->MemManager).Top = *(uchar **)this;
  *(undefined8 *)this = 0;
  return (TRefCountPtr<FRHITexture>)(FRHITexture *)param_1;
}

// operator() @ 145b9b6b0

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
/* WARNING: Enum "VkPipelineStageFlagBits": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FVulkanDynamicRHI::DumpCrashMarkers'::__l54::<lambda_4>::operator()
          (void *this,FVulkanQueue *param_1)

{
  VkQueue_T *pVVar1;
  code *pcVar2;
  _func___cdecl_void_VkQueue_T_ptr_uint_ptr_VkCheckpointDataNV_ptr *p_Var3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  char *_Str;
  size_t sVar7;
  FOutputDeviceRedirector *this_00;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  undefined1 auStackY_1b8 [32];
  uint local_188 [2];
  ForAnyElementType local_180;
  uint local_178 [2];
  FString local_170;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  pVVar1 = param_1->Queue;
  uVar8 = 0;
  local_180.Data = (FScriptContainerElement *)0x0;
  local_178[0] = 0;
  local_178[1] = 0;
  local_188[0] = 0;
  (*VulkanDynamicAPI::vkGetQueueCheckpointDataNV)(pVVar1,local_188,(VkCheckpointDataNV *)0x0);
  uVar6 = local_188[0];
  if (local_188[0] != 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,local_188[0],&local_180,(int *)local_178,(int *)(local_178 + 1));
    DefaultConstructItems<_FVulkanDynamicRHI::DumpCrashMarkers_::__l54::FCheckpointDataNV,int>
              (local_180.Data + (longlong)iVar5 * 0x20,uVar6);
    p_Var3 = VulkanDynamicAPI::vkGetQueueCheckpointDataNV;
    if (((int)local_178[0] < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (*p_Var3)(pVVar1,local_188,(VkCheckpointDataNV *)local_180.Data);
    if ((local_188[0] != local_178[0]) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Num == Checkpoints.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanUtil.cpp"
                           ,0x3d0,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (local_188[0] != 0) {
      do {
        uVar10 = ~uVar8 >> 0x1f;
        uVar6 = 0;
        if ((int)uVar8 < (int)local_178[0]) {
          uVar6 = uVar10;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        lVar9 = (longlong)(int)uVar8 * 0x20;
        if ((*(int *)(local_180.Data + lVar9) != 0x3b9deeb0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Checkpoints[Index].sType == VK_STRUCTURE_TYPE_CHECKPOINT_DATA_NV",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanUtil.cpp"
                               ,0x3d3,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar6 = 0;
        if ((int)uVar8 < (int)local_178[0]) {
          uVar6 = uVar10;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (1 < (byte)LogVulkanRHI._0_1_) {
          FRHIBreadcrumbNode::GetFullPath
                    (*(FRHIBreadcrumbNode **)(local_180.Data + lVar9 + 0x18),&local_170);
          uVar6 = 0;
          if ((int)uVar8 < (int)local_178[0]) {
            uVar6 = uVar10;
          }
          if (uVar6 == 0) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar4) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
          uVar6 = 0;
          if ((int)uVar8 < (int)local_178[0]) {
            uVar6 = uVar10;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          _Str = string_VkPipelineStageFlagBits
                           (*(VkPipelineStageFlagBits *)(local_180.Data + lVar9 + 0x10));
          local_158._padding_ = 0;
          if (_Str == (char *)0x0) {
            local_158.Ptr = (wchar_t *)0x0;
            local_158.StringLength = 0;
          }
          else {
            sVar7 = strlen(_Str);
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_158,_Str,(int)sVar7,Yes);
          }
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
          if ((void *)local_158._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_158._padding_);
          }
          if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_170.Data.AllocatorInstance.Data);
          }
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < local_188[0]);
    }
    this_00 = GetGlobalLogSingleton();
    FOutputDeviceRedirector::Panic(this_00);
  }
  if ((VkCheckpointDataNV *)local_180.Data != (VkCheckpointDataNV *)0x0) {
    FMemory::Free(local_180.Data);
  }
  return;
}

// operator() @ 145b9baa0

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
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
`FVulkanDynamicRHI::DumpCrashMarkers'::__l57::<lambda_5>::operator()
          (void *this,FVulkanQueue *param_1)

{
  FScriptContainerElement *pFVar1;
  EVulkanQueueType EVar2;
  FVulkanDiagnosticBuffer *pFVar3;
  TSet<TTuple<FRHIBreadcrumbState::FQueueID,TArray<FRHIBreadcrumbRange,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FRHIBreadcrumbState::FQueueID,TArray<FRHIBreadcrumbRange,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *this_00;
  TNode *pTVar4;
  TNode *pTVar5;
  code *pcVar6;
  int iVar7;
  bool bVar8;
  longlong lVar9;
  ForAnyElementType FVar10;
  longlong lVar11;
  char cVar12;
  undefined1 local_res10 [8];
  TKeyInitializer<FRHIBreadcrumbState::FQueueID_&&> local_res18;
  undefined4 local_res20;
  char local_res24;
  FVulkanPayload *local_68;
  undefined4 *local_60;
  ForAnyElementType local_58;
  int local_50;
  int aiStack_4c [3];
  
  pFVar3 = (param_1->DiagnosticBuffer).Ptr;
  if (pFVar3 != (FVulkanDiagnosticBuffer *)0x0) {
    EVar2 = param_1->QueueType;
    GetVulkanQueueTypeName(EVar2);
    if (EVar2 == Graphics) {
      cVar12 = '\x01';
    }
    else {
      if (EVar2 != AsyncCompute) {
        return;
      }
      cVar12 = '\x02';
    }
    local_res20 = *(undefined4 *)((longlong)this + 0x10);
    this_00 = *(TSet<TTuple<FRHIBreadcrumbState::FQueueID,TArray<FRHIBreadcrumbRange,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FRHIBreadcrumbState::FQueueID,TArray<FRHIBreadcrumbRange,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                **)this;
    local_60 = &local_res20;
    local_res24 = cVar12;
    TSet<TTuple<FRHIBreadcrumbState::FQueueID,TArray<FRHIBreadcrumbRange,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FRHIBreadcrumbState::FQueueID,TArray<FRHIBreadcrumbRange,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::Emplace<TKeyInitializer<FRHIBreadcrumbState::FQueueID_&&>_>
              (this_00,&local_res18,(bool *)&local_60);
    lVar11 = 8;
    lVar9 = *(longlong *)&this_00->Elements;
    local_58.Data = (FScriptContainerElement *)0x0;
    local_50 = 0;
    aiStack_4c[0] = 0;
    while (iVar7 = local_50, pTVar4 = ((param_1->PendingInterrupt).Tail)->NextNode,
          pTVar4 != (TNode *)0x0) {
      local_68 = pTVar4->Item;
      pTVar5 = (param_1->PendingInterrupt).Tail;
      (param_1->PendingInterrupt).Tail = pTVar4;
      pTVar4->Item = (FVulkanPayload *)0x0;
      ::operator_delete(pTVar5,0x10);
      if (((local_58.Data <= (FScriptContainerElement *)&local_68) &&
          ((FScriptContainerElement *)&local_68 < local_58.Data + (longlong)aiStack_4c[0] * 8)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (local_50 == aiStack_4c[0]) {
        local_50 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&local_58,aiStack_4c);
      }
      *(FVulkanPayload **)(local_58.Data + (longlong)local_50 * 8) = local_68;
      local_50 = local_50 + 1;
    }
    pFVar1 = local_58.Data + (longlong)local_50 * 8;
    FVar10.Data = local_58.Data;
    while( true ) {
      if (local_50 != iVar7) {
        `TCheckedPointerIterator<FVulkanPayload_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (FVar10.Data == pFVar1) break;
      if (((*(FVulkanPayload **)FVar10.Data)->BreadcrumbRange).First != (FRHIBreadcrumbNode *)0x0) {
        TArray<FRHIBreadcrumbRange,TSizedDefaultAllocator<32>_>::
        AddUniqueImpl<FRHIBreadcrumbRange_const_&>
                  ((TArray<FRHIBreadcrumbRange,TSizedDefaultAllocator<32>_> *)
                   ((longlong)(int)local_res18.Key * 0x20 + lVar9 + 8),
                   &(*(FVulkanPayload **)FVar10.Data)->BreadcrumbRange);
      }
      FVar10.Data = FVar10.Data + 8;
    }
    VulkanRHI::FVulkanAllocation::InvalidateMappedMemory(&pFVar3->Allocation,pFVar3->Device);
    if ((cVar12 == '\x01') || (lVar9 = 0xc, cVar12 != '\x02')) {
      lVar9 = 4;
    }
    *(undefined4 *)
     ((ulonglong)*(uint *)((longlong)this + 0x10) * 0x10 + *(longlong *)((longlong)this + 8) + lVar9
     ) = *(undefined4 *)(pFVar3->_padding_ + 0x604);
    VulkanRHI::FVulkanAllocation::InvalidateMappedMemory(&pFVar3->Allocation,pFVar3->Device);
    if ((cVar12 == '\x01') || (cVar12 != '\x02')) {
      lVar11 = 0;
    }
    *(undefined4 *)
     (lVar11 + (ulonglong)*(uint *)((longlong)this + 0x10) * 0x10 +
               *(longlong *)((longlong)this + 8)) = *(undefined4 *)(pFVar3->_padding_ + 0x600);
    if (local_58.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data);
    }
  }
  return;
}

// AsyncReallocateTexture2D_RenderThread @ 145b9f420

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
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TRefCountPtr<FRHITexture> __thiscall
FVulkanDynamicRHI::AsyncReallocateTexture2D_RenderThread
          (FVulkanDynamicRHI *this,FRHICommandListImmediate *param_1,FRHITexture *param_2,
          int param_3,int param_4,int param_5,FThreadSafeCounter *param_6)

{
  ETextureCreateFlags EVar1;
  ERHIAccess EVar2;
  longlong *plVar3;
  ETextureCreateFlags *pEVar4;
  FRHITextureCreateDesc *pFVar5;
  FVulkanTexture *this_00;
  undefined8 *puVar6;
  undefined4 in_register_0000008c;
  undefined8 in_stack_00000040;
  undefined1 auStackY_1d8 [32];
  FLLMScope local_1a8;
  int local_1a4;
  FMemScope local_1a0;
  FCreateTextureResult local_198;
  longlong *local_188;
  FVulkanTexture *pFStack_180;
  int local_178;
  int iStack_174;
  int iStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  FRHITextureCreateDesc local_158;
  FRHITextureCreateDesc local_d8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  local_1a4 = (int)param_6;
  FLLMScope::FLLMScope(&local_1a8,VideoRecording|ThreadStackPlatform,false,None,Default,true);
  FMemScope::FMemScope(&local_1a0,VideoRecording|ThreadStackPlatform,true);
  plVar3 = (longlong *)
           (**(code **)(*(longlong *)CONCAT44(in_register_0000008c,param_3) + 0x48))
                     ((longlong *)CONCAT44(in_register_0000008c,param_3));
  pEVar4 = (ETextureCreateFlags *)(**(code **)(*plVar3 + 0x20))(plVar3);
  pFVar5 = FRHITextureCreateDesc::Create2D
                     (&local_d8,L"AsyncReallocateTexture2D_RenderThread",param_5,(int)param_6,
                      *(EPixelFormat *)((longlong)pEVar4 + 0x33));
  EVar1 = pEVar4[2];
  pFVar5->_padding_ = pEVar4[1];
  pFVar5->_padding_ = EVar1;
  *(int *)&pFVar5->_padding_ = (int)pEVar4[3];
  EVar1 = *pEVar4;
  pFVar5->_padding_ = EVar1;
  *(char *)&pFVar5->_padding_ = (char)param_4;
  *(byte *)((longlong)&pFVar5->_padding_ + 1) = *(byte *)((longlong)pEVar4 + 0x31);
  if (pFVar5->InitialState == None) {
    EVar2 = RHIGetDefaultResourceState(EVar1,pFVar5->BulkData != (FResourceBulkDataInterface *)0x0);
    pFVar5->InitialState = EVar2;
  }
  pFVar5->OwnerName = *(FName *)(plVar3 + 2);
  FRHITextureDesc::FRHITextureDesc((FRHITextureDesc *)&local_158,(FRHITextureDesc *)pFVar5);
  local_158.DebugName = pFVar5->DebugName;
  local_158.InitialState = pFVar5->InitialState;
  local_158.InitAction = pFVar5->InitAction;
  local_158.BulkData = pFVar5->BulkData;
  local_158.ClassName = pFVar5->ClassName;
  local_158.OwnerName = pFVar5->OwnerName;
  if ((void *)local_d8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_d8._padding_);
  }
  BeginCreateTextureInternal(this,&local_198,&local_158,(FRHITransientHeapAllocation *)0x0);
  this_00 = FinalizeCreateTextureInternal(this,(FRHICommandListBase *)param_2,&local_198);
  local_178 = param_4;
  iStack_170 = local_1a4;
  local_168 = in_stack_00000040;
  iStack_174 = param_5;
  local_188 = plVar3;
  pFStack_180 = this_00;
  if (((GRHICommandList.bLatchedBypass == false) || ((param_2[2]._padding_ & 0x20000000) == 0)) &&
     (*(char *)((longlong)&param_2->_padding_ + 4) == '\0')) {
    puVar6 = FMemStackBase::Alloc((FMemStackBase *)param_2,0x40,8);
    *(int *)&param_2->_padding_ = (int)param_2->_padding_ + 1;
    *(undefined8 **)param_2->_padding_ = puVar6;
    param_2->_padding_ = (longlong)(puVar6 + 1);
    puVar6[2] = local_188;
    puVar6[3] = pFStack_180;
    puVar6[1] = 0;
    *puVar6 = &TRHILambdaCommand<FRHICommandListImmediate,`FVulkanDynamicRHI::AsyncReallocateTexture2D_RenderThread'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar6[4] = CONCAT44(iStack_174,local_178);
    puVar6[5] = CONCAT44(uStack_16c,iStack_170);
    puVar6[7] = L"AsyncReallocateTexture2D";
    puVar6[6] = local_168;
  }
  else {
    `FVulkanDynamicRHI::AsyncReallocateTexture2D_RenderThread'::__l2::<lambda_1>::operator()
              (&local_188,(FRHICommandListImmediate *)param_2);
  }
  *(FVulkanTexture **)param_1 = this_00;
  if (this_00 != (FVulkanTexture *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_00);
  }
  if ((void *)local_158._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_158._padding_);
  }
  FMemScope::~FMemScope(&local_1a0);
  FLLMScope::~FLLMScope(&local_1a8);
  return (TRefCountPtr<FRHITexture>)(FRHITexture *)param_1;
}

// BeginCreateTextureInternal @ 145b9f6a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
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

FCreateTextureResult * __thiscall
FVulkanDynamicRHI::BeginCreateTextureInternal
          (FVulkanDynamicRHI *this,FCreateTextureResult *__return_storage_ptr__,
          FRHITextureCreateDesc *param_1,FRHITransientHeapAllocation *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  bool bVar5;
  FVulkanDynamicRHI *pFVar6;
  TEventRef<unsigned_int> TVar7;
  FVulkanTexture *pFVar8;
  FWriteBuffer *pFVar9;
  bool bVar10;
  undefined1 auStackY_b8 [32];
  FName local_88;
  FLLMScope local_7c;
  FVulkanDynamicRHI *local_78;
  FName local_70;
  FMemScope local_68;
  TLogScope<0> local_60;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  local_78 = this;
  FLLMScope::FLLMScope
            (&local_7c,((param_1->_padding_ & 7) != 0) + (VideoRecording|ThreadStackPlatform),false,
             None,Default,true);
  FMemScope::FMemScope
            (&local_68,((param_1->_padding_ & 7) != 0) + (VideoRecording|ThreadStackPlatform),true);
  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
    local_88.ComparisonIndex.Value = 0;
    local_88.Number = 0;
    TVar7 = (TEventRef<unsigned_int>)&local_88;
  }
  else {
    ::FName::FName(&local_88,param_1->DebugName);
    TVar7 = FStringTrace::GetNameRef(&local_70);
  }
  uVar1 = *(undefined8 *)TVar7;
  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
    local_88.ComparisonIndex.Value = 0;
    local_88.Number = 0;
    TVar7 = (TEventRef<unsigned_int>)&local_88;
  }
  else {
    local_70 = param_1->ClassName;
    if (param_1->ClassName == (FName)0x0) {
      FLazyName::Resolve((FLazyName *)
                         &`public:_class_FName___cdecl_FRHITextureCreateDesc::GetTraceClassName(void)const___ptr64'
                          ::__l2::FRHITextureName);
      local_70 = local_88;
    }
    TVar7 = FStringTrace::GetNameRef((FName *)&local_60);
  }
  uVar2 = *(undefined8 *)TVar7;
  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
    local_88.ComparisonIndex.Value = 0;
    local_88.Number = 0;
    TVar7 = (TEventRef<unsigned_int>)&local_88;
  }
  else {
    TVar7 = FStringTrace::GetNameRef((FName *)&local_60);
  }
  uVar3 = *(undefined8 *)TVar7;
  bVar5 = false;
  if ((-1 < MetadataChannel->Enabled) && (-1 < AssetMetadataChannel->Enabled)) {
    UE::Trace::Private::FLogScope::ScopedEnter<FMetadataAssetFields>(&local_60);
    bVar5 = true;
    *(int *)local_60._0_8_ = (int)uVar1;
    *(int *)(local_60._0_8_ + 4) = (int)uVar2;
    *(int *)(local_60._0_8_ + 8) = (int)uVar3;
    *(undefined8 *)(local_60._8_8_ + 0x28) = *(undefined8 *)(local_60._8_8_ + 0x20);
  }
  pFVar8 = ::operator_new(600);
  pFVar6 = local_78;
  if (pFVar8 == (FVulkanTexture *)0x0) {
    pFVar8 = (FVulkanTexture *)0x0;
  }
  else {
    pFVar8 = FVulkanTexture::FVulkanTexture(pFVar8,local_78->Device,param_1,param_2);
  }
  if (((pFVar6->Device->OptionalDeviceExtensions).field0_0x0.Packed & 0x2020100000000) !=
      0x2020100000000) {
    (pFVar8->AllPlanesTrackedAccess).Elements[0] = param_1->InitialState;
    (pFVar8->AllPlanesTrackedAccess).Elements[1] = param_1->InitialState;
  }
  if ((((pFVar8->ImageUsageFlags & 4) == 0) || ((param_1->_padding_ & 5) == 0)) ||
     (param_2 != (FRHITransientHeapAllocation *)0x0)) {
    bVar10 = false;
  }
  else {
    bVar10 = true;
  }
  __return_storage_ptr__->DefaultLayout = VK_IMAGE_LAYOUT_UNDEFINED;
  __return_storage_ptr__->bTransientResource = false;
  __return_storage_ptr__->bClear = false;
  *(undefined2 *)&__return_storage_ptr__->field_0xe = 0;
  __return_storage_ptr__->Texture = pFVar8;
  __return_storage_ptr__->DefaultLayout = pFVar8->DefaultLayout;
  __return_storage_ptr__->bTransientResource = param_2 != (FRHITransientHeapAllocation *)0x0;
  __return_storage_ptr__->bClear = bVar10;
  if (bVar5) {
    lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar4 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    pFVar9 = *(FWriteBuffer **)(lVar4 + 0x20);
    if ((int)pFVar9 - *(int *)&pFVar9->Cursor < 1) {
      pFVar9 = UE::Trace::Private::Writer_NextBuffer();
    }
    *pFVar9->Cursor = '\n';
    pFVar9->Cursor = pFVar9->Cursor + 1;
    pFVar9->Committed = pFVar9->Cursor;
  }
  FMemScope::~FMemScope(&local_68);
  FLLMScope::~FLLMScope(&local_7c);
  return __return_storage_ptr__;
}

// CompletePayload @ 145ba1410

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
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FVulkanDynamicRHI::CompletePayload(FVulkanDynamicRHI *this,FVulkanPayload *param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  FVulkanQueryPool *pFVar3;
  FVulkanTiming *pFVar4;
  FVulkanDiagnosticBuffer *pFVar5;
  FChunk *pFVar6;
  FTaskBase *this_00;
  code *pcVar7;
  undefined8 *puVar8;
  float fVar9;
  UEngine *this_01;
  EVulkanQueryPoolType EVar10;
  TStaticArray<TArray<FVulkanQueryPool_*,TSizedDefaultAllocator<32>_>,4,4294967295> *pTVar11;
  ulonglong *puVar12;
  bool bVar13;
  int iVar14;
  VkResult VVar15;
  UClass *pUVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ForElementType<TSharedRef<FRHIBreadcrumbAllocator,1>_> FVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  LARGE_INTEGER LVar23;
  FRHIBreadcrumbAllocatorArray *pFVar24;
  ForElementType<TSharedRef<FRHIBreadcrumbAllocator,1>_> FVar25;
  FScriptContainerElement *pFVar26;
  ulonglong uVar27;
  longlong lVar28;
  FScriptContainerElement *pFVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_a8;
  EVulkanQueryPoolType local_a7;
  undefined1 local_a6;
  undefined1 local_a5;
  uint local_a4;
  TArray<UE::RHICore::Nvidia::Aftermath::FCrashResult,TSizedDefaultAllocator<32>_> local_a0;
  FScriptContainerElement *local_90;
  TStaticArray<TArray<FVulkanQueryPool_*,TSizedDefaultAllocator<32>_>,4,4294967295> *local_88;
  ulonglong *local_80;
  LARGE_INTEGER local_78;
  FScriptContainerElement *local_70;
  TArray<FVulkanDescriptorPoolSetContainer_*,TSizedDefaultAllocator<32>_> *local_68;
  
  pFVar26 = (param_1->CommandBuffers).AllocatorInstance.Data;
  iVar14 = (param_1->CommandBuffers).ArrayNum;
  pFVar29 = pFVar26 + (longlong)iVar14 * 8;
  while( true ) {
    if ((param_1->CommandBuffers).ArrayNum != iVar14) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<FVulkanCommandBuffer_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if (pFVar26 == pFVar29) break;
    FVulkanCommandBuffer::Reset(*(FVulkanCommandBuffer **)pFVar26);
    pFVar26 = pFVar26 + 8;
  }
  pFVar26 = (param_1->DescriptorPoolSetContainers).AllocatorInstance.Data;
  iVar14 = (param_1->DescriptorPoolSetContainers).ArrayNum;
  pFVar29 = pFVar26 + (longlong)iVar14 * 8;
  while( true ) {
    if ((param_1->DescriptorPoolSetContainers).ArrayNum != iVar14) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<FVulkanDescriptorPoolSetContainer_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res20);
    }
    if (pFVar26 == pFVar29) break;
    FVulkanDescriptorPoolsManager::ReleasePoolSet
              (this->Device->DescriptorPoolsManager,*(FVulkanDescriptorPoolSetContainer **)pFVar26);
    pFVar26 = pFVar26 + 8;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
    atexit(`FVulkanDynamicRHI::CompletePayload'::__l2::_dynamic_atexit_destructor_for__TempResults__
          );
    _Init_thread_footer(&::_TSS2);
  }
  fVar9 = __real_3ba3d70a;
  local_88 = &param_1->QueryPools;
  local_68 = &param_1->DescriptorPoolSetContainers;
  if ((TArray<FVulkanDescriptorPoolSetContainer_*,TSizedDefaultAllocator<32>_> *)local_88 !=
      local_68) {
    do {
      local_a4 = local_88->Elements[0].ArrayNum;
      uVar18 = (ulonglong)(int)local_a4;
      pFVar29 = local_88->Elements[0].AllocatorInstance.Data;
      local_70 = pFVar29 + uVar18 * 8;
      while( true ) {
        pFVar26 = local_70;
        pTVar11 = local_88;
        local_90 = pFVar29;
        if (local_88->Elements[0].ArrayNum != (int)uVar18) {
          local_a8 = 0;
          `TCheckedPointerIterator<FVulkanQueryPool_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_a8);
        }
        if (pFVar29 == pFVar26) break;
        pFVar3 = *(FVulkanQueryPool **)pFVar29;
        if ((pFVar3->CurrentQueryCount == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("QueryPool->CurrentQueryCount",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanSubmission.cpp"
                                ,0x2a5,L""), bVar13)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (TempResults.ArrayNum < (int)pFVar3->MaxQueries) {
          iVar21 = pFVar3->MaxQueries - TempResults.ArrayNum;
          iVar14 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x10,8,iVar21,&TempResults.AllocatorInstance,&TempResults.ArrayNum,
                              &TempResults.ArrayMax);
          memset(TempResults.AllocatorInstance.Data + (longlong)iVar14 * 0x10,0,
                 (longlong)iVar21 << 4);
        }
        do {
          while( true ) {
            VVar15 = (*VulkanDynamicAPI::vkGetQueryPoolResults)
                               (this->Device->Device,pFVar3->QueryPool,0,
                                pFVar3->CurrentQueryCount * pFVar3->QueryStride,
                                (ulong64)(TempResults.ArrayNum << 4),
                                TempResults.AllocatorInstance.Data,0x10,5);
            if (VVar15 == VK_SUCCESS) goto LAB_145ba1740;
            if (GIsGPUCrashed == false) break;
            DumpCrashMarkers(this);
            local_a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_a0.ArrayNum = 0;
            local_a0.ArrayMax = 0;
            UE::RHICore::Nvidia::Aftermath::OnGPUCrash(&local_a0);
            this_01 = GEngine;
            if (GEngine != (UEngine *)0x0) {
              pUVar16 = Z_Construct_UClass_UGameEngine_NoRegister();
              lVar28 = this_01->_padding_;
              iVar14 = (int)pUVar16->_padding_;
              if ((iVar14 <= *(int *)(lVar28 + 0x38)) &&
                 ((longlong *)*(undefined1 **)(*(longlong *)(lVar28 + 0x30) + (longlong)iVar14 * 8)
                  == &pUVar16->_padding_)) {
                UGameEngine::OnGPUCrash((UGameEngine *)this_01);
              }
            }
            bVar13 = FWindowsPlatformMisc::IsDebuggerPresent();
            if ((bVar13) && (bVar13 = FWindowsPlatformMisc::IsDebuggerPresent(), bVar13)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            FWindowsPlatformMisc::RequestExit(true,L"FVulkanDynamicRHI.TerminateOnGPUCrash");
            DestructItems<UE::RHICore::Nvidia::Aftermath::FCrashResult,int>
                      ((FCrashResult *)local_a0.AllocatorInstance.Data,local_a0.ArrayNum);
            if ((FCrashResult *)local_a0.AllocatorInstance.Data != (FCrashResult *)0x0) {
              FMemory::Free(local_a0.AllocatorInstance.Data);
            }
            if ((int)VVar15 < 0) goto LAB_145ba1740;
          }
          FWindowsPlatformProcess::SleepNoStats(fVar9);
        } while (-1 < (int)VVar15);
        VulkanRHI::VerifyVulkanResult
                  (VVar15,"Result",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanSubmission.cpp"
                   ,0x2cb);
LAB_145ba1740:
        local_a7 = pFVar3->QueryType;
        uVar32 = 0;
        if (pFVar3->CurrentQueryCount != 0) {
          do {
            uVar20 = 0;
            if ((int)uVar32 < (pFVar3->QueryResults).ArrayNum) {
              uVar20 = ~uVar32 >> 0x1f;
            }
            if ((uVar20 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            EVar10 = local_a7;
            local_80 = *(ulonglong **)
                        ((pFVar3->QueryResults).AllocatorInstance.Data + (longlong)(int)uVar32 * 8);
            if (local_80 != (ulonglong *)0x0) {
              uVar20 = pFVar3->QueryStride;
              uVar17 = 0;
              uVar31 = 0;
              uVar18 = uVar17;
              if (uVar20 != 0) {
                do {
                  uVar22 = uVar20 * uVar32 + uVar31;
                  uVar30 = ~uVar22 >> 0x1f;
                  uVar20 = 0;
                  if ((int)uVar22 < TempResults.ArrayNum) {
                    uVar20 = uVar30;
                  }
                  if ((uVar20 == 0) &&
                     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar13)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  lVar28 = (longlong)(int)uVar22 * 0x10;
                  uVar18 = uVar17;
                  if (*(longlong *)(TempResults.AllocatorInstance.Data + lVar28 + 8) == 0) {
                    if (2 < (byte)LogVulkanRHI._0_1_) {
                      UE::Logging::Private::BasicLog<3>
                                (&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
                    }
                  }
                  else if (EVar10 == Timestamp) {
                    uVar20 = 0;
                    if ((int)uVar22 < TempResults.ArrayNum) {
                      uVar20 = uVar30;
                    }
                    if ((uVar20 == 0) &&
                       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar13)) {
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                    uVar18 = *(ulonglong *)(TempResults.AllocatorInstance.Data + lVar28);
                    if (*(ulonglong *)(TempResults.AllocatorInstance.Data + lVar28) < uVar17) {
                      uVar18 = uVar17;
                    }
                  }
                  else {
                    uVar20 = 0;
                    if ((int)uVar22 < TempResults.ArrayNum) {
                      uVar20 = uVar30;
                    }
                    if ((uVar20 == 0) &&
                       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar13)) {
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                    uVar18 = uVar17 + *(longlong *)(TempResults.AllocatorInstance.Data + lVar28);
                  }
                  uVar20 = pFVar3->QueryStride;
                  uVar31 = uVar31 + 1;
                  uVar17 = uVar18;
                } while (uVar31 < uVar20);
              }
              puVar12 = local_80;
              if (pFVar3->QueryType == Timestamp) {
                pFVar4 = param_1->Queue->Timing;
                LVar23 = (LARGE_INTEGER)pFVar4->CPUTimestamp;
                uVar17 = pFVar4->GPUTimestamp;
                if (bBypassTiming == false) {
                  if ((uVar18 < uVar17) || (uVar27 = uVar18, uVar17 == 0)) {
                    if ((bWarnOnce == false) && (bWarnOnce = true, 2 < (byte)LogVulkanRHI._0_1_)) {
                      UE::Logging::Private::BasicLog<3>
                                (&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
                    }
                    QueryPerformanceCounter(&local_78);
                    if ((LVar23.QuadPart == 0) ||
                       (ReferenceCPUTimestamp = (ulong64)LVar23,
                       (ulonglong)local_78 <= (ulonglong)LVar23)) {
                      ReferenceCPUTimestamp = local_78.QuadPart;
                    }
                    bBypassTiming = true;
                    ReferenceGPUTimestamp = uVar18;
                    goto LAB_145ba19de;
                  }
                }
                else {
LAB_145ba19de:
                  uVar17 = ReferenceGPUTimestamp;
                  LVar23 = (LARGE_INTEGER)ReferenceCPUTimestamp;
                  uVar27 = ReferenceGPUTimestamp;
                  if (ReferenceGPUTimestamp < uVar18) {
                    uVar27 = uVar18;
                  }
                }
                *puVar12 = ((uVar27 - uVar17) * pFVar4->CPUFrequency) / pFVar4->GPUFrequency +
                           LVar23.QuadPart;
              }
              else {
                *local_80 = uVar18;
              }
            }
            uVar32 = uVar32 + 1;
            pFVar29 = local_90;
          } while (uVar32 < pFVar3->CurrentQueryCount);
        }
        uVar32 = pFVar3->MaxQueries;
        if ((int)uVar32 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar32);
        }
        DestructItems<TRefCountPtr<FVulkanRenderQuery>,int>
                  ((TRefCountPtr<FVulkanRenderQuery> *)(pFVar3->QueryRefs).AllocatorInstance.Data,
                   (pFVar3->QueryRefs).ArrayNum);
        piVar1 = &(pFVar3->QueryRefs).ArrayMax;
        (pFVar3->QueryRefs).ArrayNum = 0;
        if (*piVar1 != uVar32) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,uVar32,&(pFVar3->QueryRefs).AllocatorInstance,0,piVar1);
        }
        FVulkanDevice::ReleaseQueryPool(this->Device,pFVar3);
        uVar18 = (ulonglong)local_a4;
        pFVar29 = pFVar29 + 8;
      }
      pTVar11->Elements[0].ArrayNum = 0;
      if (pTVar11->Elements[0].ArrayMax < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,(ForAnyElementType *)pTVar11,0,&pTVar11->Elements[0].ArrayMax);
      }
      local_88 = (TStaticArray<TArray<FVulkanQueryPool_*,TSizedDefaultAllocator<32>_>,4,4294967295>
                  *)(pTVar11->Elements + 1);
    } while ((TArray<FVulkanDescriptorPoolSetContainer_*,TSizedDefaultAllocator<32>_> *)local_88 !=
             local_68);
  }
  if ((((*(uint *)&(this->Device->OptionalDeviceExtensions).field0_0x0 >> 0x1a & 1) != 0) &&
      (pFVar5 = (param_1->Queue->DiagnosticBuffer).Ptr, pFVar5 != (FVulkanDiagnosticBuffer *)0x0))
     && ((pFVar5->ExtendedBreadcrumbAllocators).ArrayNum != 0)) {
    if ((param_1->BreadcrumbAllocators).Object != (FRHIBreadcrumbAllocatorArray *)0x0) {
      pFVar24 = (param_1->BreadcrumbAllocators).Object;
      iVar14 = *(int *)&pFVar24->field_0x28;
      puVar2 = &pFVar24->field_0x28;
      if (*(FRHIBreadcrumbAllocatorArray **)&pFVar24->field_0x20 !=
          (FRHIBreadcrumbAllocatorArray *)0x0) {
        pFVar24 = *(FRHIBreadcrumbAllocatorArray **)&pFVar24->field_0x20;
      }
      puVar8 = (undefined8 *)&pFVar24->field_0x0;
      while( true ) {
        if (*(int *)puVar2 != iVar14) {
          local_a6 = 0;
          `TCheckedPointerIterator<TSharedRef<FRHIBreadcrumbAllocator,1>,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_a6);
        }
        if (pFVar24 == (FRHIBreadcrumbAllocatorArray *)(puVar8 + (longlong)iVar14 * 2)) break;
        uVar32 = pFVar5->CurrentExtendedIndex;
        uVar20 = 0;
        if ((int)uVar32 < (pFVar5->ExtendedBreadcrumbAllocators).ArrayNum) {
          uVar20 = ~uVar32 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        FRHIBreadcrumbAllocatorArray::AddUnique
                  ((FRHIBreadcrumbAllocatorArray *)
                   ((pFVar5->ExtendedBreadcrumbAllocators).AllocatorInstance.Data +
                   (longlong)(int)uVar32 * 0x30),*(FRHIBreadcrumbAllocator **)pFVar24);
        pFVar24 = (FRHIBreadcrumbAllocatorArray *)&pFVar24->field_0x10;
      }
    }
    if ((param_1->EndFrameEvent).bIsSet != false) {
      uVar20 = (pFVar5->CurrentExtendedIndex + 1) % (pFVar5->ExtendedBreadcrumbAllocators).ArrayNum;
      pFVar5->CurrentExtendedIndex = uVar20;
      uVar32 = 0;
      if ((int)uVar20 < (pFVar5->ExtendedBreadcrumbAllocators).ArrayNum) {
        uVar32 = ~uVar20 >> 0x1f;
      }
      if ((uVar32 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      FVar25 = (ForElementType<TSharedRef<FRHIBreadcrumbAllocator,1>_>)
               ((longlong)(int)uVar20 * 0x30 +
               (longlong)(pFVar5->ExtendedBreadcrumbAllocators).AllocatorInstance.Data);
      iVar14 = *(int *)((ForElementType<TSharedRef<FRHIBreadcrumbAllocator,1>_> *)
                       ((longlong)FVar25 + 0x28))->InlineData;
      FVar19 = *(ForElementType<TSharedRef<FRHIBreadcrumbAllocator,1>_> *)((longlong)FVar25 + 0x20);
      if (*(int *)((longlong)FVar25 + 0x2c) < 0) {
        if (FVar19 == (ForElementType<TSharedRef<FRHIBreadcrumbAllocator,1>_>)0x0) {
          FVar19 = FVar25;
        }
        DestructItems<TSharedRef<FRHIBreadcrumbAllocator,1>,int>
                  ((TSharedRef<FRHIBreadcrumbAllocator,1> *)FVar19,iVar14);
        *(undefined4 *)((longlong)FVar25 + 0x28) = 0;
        if (*(int *)((longlong)FVar25 + 0x2c) != 0) {
          UE::Core::Private::
          ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<TSharedRef<FRHIBreadcrumbAllocator,1>_>_>
                    (0x10,8,0,(ForElementType<TSharedRef<FRHIBreadcrumbAllocator,1>_> *)FVar25,0,
                     (int *)((longlong)FVar25 + 0x2c));
        }
      }
      else {
        if (FVar19 == (ForElementType<TSharedRef<FRHIBreadcrumbAllocator,1>_>)0x0) {
          FVar19 = FVar25;
        }
        DestructItems<TSharedRef<FRHIBreadcrumbAllocator,1>,int>
                  ((TSharedRef<FRHIBreadcrumbAllocator,1> *)FVar19,iVar14);
        *(undefined4 *)((longlong)FVar25 + 0x28) = 0;
      }
    }
  }
  if ((param_1->EventStream).First != (FChunk *)0x0) {
    if ((param_1->Queue->Timing == (FVulkanTiming *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Payload->Queue.Timing",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanSubmission.cpp"
                            ,0x350,L""), bVar13)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar4 = param_1->Queue->Timing;
    if (((pFVar4->EventStream).Queue.field0_0x0.Value !=
         (param_1->EventStream).Queue.field0_0x0.Value) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Queue == Other.Queue",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\GPUProfiler.h"
                            ,0x1c1,L""), bVar13)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if ((pFVar4->EventStream).First == (FChunk *)0x0) {
      (pFVar4->EventStream).Current = (param_1->EventStream).Current;
      (pFVar4->EventStream).First = (param_1->EventStream).First;
    }
    else {
      pFVar6 = (param_1->EventStream).First;
      if (pFVar6 != (FChunk *)0x0) {
        (((pFVar4->EventStream).Current)->Header).Next = pFVar6;
        (pFVar4->EventStream).Current = (param_1->EventStream).Current;
      }
    }
    (param_1->EventStream).Current = (FChunk *)0x0;
    (param_1->EventStream).First = (FChunk *)0x0;
  }
  if ((param_1->Timing).bIsSet != false) {
    param_1->Queue->Timing = (param_1->Timing).TypedValue;
    bBypassTiming = false;
    ReferenceCPUTimestamp = 0;
    ReferenceGPUTimestamp = 0;
  }
  pFVar26 = (param_1->SyncPoints).AllocatorInstance.Data;
  iVar14 = (param_1->SyncPoints).ArrayNum;
  pFVar29 = pFVar26 + (longlong)iVar14 * 8;
  while( true ) {
    if ((param_1->SyncPoints).ArrayNum != iVar14) {
      local_a5 = 0;
      `TCheckedPointerIterator<TRefCountPtr<FVulkanSyncPoint>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(&local_a5);
    }
    if (pFVar26 == pFVar29) break;
    lVar28 = *(longlong *)pFVar26;
    if ((*(longlong *)(lVar28 + 0x10) == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("GraphEvent",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanSubmission.h"
                            ,0x5d,L"This sync point was not created with a CPU event."), bVar13)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    this_00 = *(FTaskBase **)(lVar28 + 0x10);
    if (this_00->ExtendedPriority == TaskEvent) {
      LOCK();
      this_00->RefCount = (atomic<unsigned_int>)((int)this_00->RefCount + 1);
      UNLOCK();
    }
    UE::Tasks::Private::FTaskBase::TryLaunch(this_00,0);
    pFVar26 = pFVar26 + 8;
  }
  DestructItems<TRefCountPtr<FVulkanSyncPoint>,int>
            ((TRefCountPtr<FVulkanSyncPoint> *)(param_1->SyncPoints).AllocatorInstance.Data,
             (param_1->SyncPoints).ArrayNum);
  (param_1->SyncPoints).ArrayNum = 0;
  if ((param_1->SyncPoints).ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(param_1->SyncPoints).AllocatorInstance,0,&(param_1->SyncPoints).ArrayMax);
  }
  return;
}

// CreateInstance @ 145ba4270

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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __thiscall FVulkanDynamicRHI::CreateInstance(FVulkanDynamicRHI *this)

{
  int *piVar1;
  TArray<char_const_*,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  TUniquePtr<FVulkanInstanceExtension,TDefaultDelete<FVulkanInstanceExtension>_> TVar5;
  char *pcVar6;
  code *pcVar7;
  TConsoleVariableData<int> *pTVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  VkResult VVar14;
  Type TVar15;
  longlong *plVar16;
  longlong lVar17;
  FEngineVersion *pFVar18;
  FString *pFVar19;
  FString *pFVar20;
  size_t sVar21;
  TArray<char_const_*,TSizedDefaultAllocator<32>_> *pTVar22;
  longlong lVar23;
  FStaticBasicLogRecord *pFVar24;
  wchar_t *pwVar25;
  ForAnyElementType FVar26;
  FScriptContainerElement *pFVar27;
  VkInstance_T **ppVVar28;
  uint uVar29;
  wchar_t *pwVar30;
  undefined1 auStackY_558 [32];
  undefined1 local_508;
  undefined1 local_507;
  undefined1 local_506 [2];
  uint local_504;
  longlong local_500;
  TArray<char_const_*,TSizedDefaultAllocator<32>_> *local_4f8;
  ForAnyElementType local_4f0;
  int local_4e8 [2];
  TArray<TUniquePtr<FVulkanInstanceExtension,TDefaultDelete<FVulkanInstanceExtension>_>,TSizedDefaultAllocator<32>_>
  local_4e0;
  FString local_4d0;
  undefined8 local_4c0;
  FVulkanDynamicRHI *local_4b8;
  FString local_4b0;
  VkApplicationInfo local_4a0;
  VkInstanceCreateInfo local_468;
  FString local_428;
  FString local_418;
  FString local_408;
  FString local_3f8;
  FString local_3e8;
  FString local_3d8;
  TArray<char_const_*,TSizedDefaultAllocator<32>_> local_3c8;
  FScriptContainerElement local_3b8 [128];
  ForAnyElementType local_338;
  FScriptContainerElement *local_330;
  int local_328;
  FScriptContainerElement local_318 [128];
  ForAnyElementType local_298;
  FScriptContainerElement *local_290;
  int local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_558;
  local_4b8 = this;
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  plVar16 = (longlong *)
            (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                      (IConsoleManager::Singleton,L"r.DisableEngineAndAppRegistration",1);
  if ((plVar16 == (longlong *)0x0) ||
     (lVar17 = (**(code **)(*plVar16 + 0x68))(plVar16), lVar17 == 0)) {
LAB_145ba434b:
    bVar9 = IsShaderDevelopmentModeEnabled();
    if (bVar9) goto LAB_145ba4359;
    bVar9 = false;
  }
  else {
    bVar9 = IsInParallelGameThread();
    if (bVar9) {
LAB_145ba4342:
      lVar23 = 0;
    }
    else {
      bVar9 = IsInGameThread();
      lVar23 = 4;
      if (bVar9) goto LAB_145ba4342;
    }
    if (*(int *)(lVar17 + lVar23) == 0) goto LAB_145ba434b;
LAB_145ba4359:
    bVar9 = true;
  }
  uVar12 = GetVulkanApiVersionForFeatureLevel(GMaxRHIFeatureLevel,false);
  this->ApiVersion = uVar12;
  bVar10 = FVulkanGenericPlatform::SupportsProfileChecks();
  pTVar8 = GVulkanRayTracingCVar.Ref;
  if (bVar10) {
    bVar10 = IsInParallelGameThread();
    if (bVar10) {
LAB_145ba439b:
      lVar17 = 0;
    }
    else {
      bVar10 = IsInGameThread();
      lVar17 = 4;
      if (bVar10) goto LAB_145ba439b;
    }
    if (*(int *)((longlong)pTVar8->ShadowedValue + lVar17) != 0) {
      if ((GMaxRHIShaderPlatform == SP_VULKAN_SM6) ||
         (GMaxRHIShaderPlatform == SP_VULKAN_SM5_ANDROID)) {
        bVar10 = true;
      }
      else {
        bVar10 = false;
      }
      bVar11 = CheckVulkanProfile(GMaxRHIFeatureLevel,true);
      if ((bVar11) && (bVar10)) {
        uVar12 = GetVulkanApiVersionForFeatureLevel(GMaxRHIFeatureLevel,true);
        this->ApiVersion = uVar12;
      }
      else {
        local_4c0 = 0;
        IConsoleVariable::Set<int>
                  ((IConsoleVariable *)GVulkanRayTracingCVar._padding_,0,ECVF_SetByCode,(FName)0x0);
        if (bVar10) {
          if (3 < (byte)LogVulkanRHI._0_1_) {
            pFVar24 = &::LOG_Static;
            goto LAB_145ba442d;
          }
        }
        else if (3 < (byte)LogVulkanRHI._0_1_) {
          pFVar24 = &::LOG_Static;
LAB_145ba442d:
          UE::Logging::Private::BasicLog<4>(pFVar24,(FLogCategoryBase *)&LogVulkanRHI);
        }
      }
    }
  }
  if (4 < (byte)LogVulkanRHI._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
  }
  pFVar18 = FEngineVersion::Current();
  pFVar19 = FEngineVersion::ToString(pFVar18,&local_3d8,Minor);
  pFVar20 = FApp::GetEpicProductIdentifier(&local_3e8);
  ::FString::ConcatFF(&local_3f8,pFVar20,pFVar19);
  if (local_3e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3e8.Data.AllocatorInstance.Data);
  }
  if (local_3d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3d8.Data.AllocatorInstance.Data);
  }
  local_338.Data = (FScriptContainerElement *)0x0;
  if (local_3f8.Data.ArrayNum == 0) {
    pwVar25 = L"";
LAB_145ba44ef:
    sVar21 = wcslen(pwVar25);
    local_328 = UE::Core::Private::GetConvertedLength((uchar *)0x0,pwVar25,(int)sVar21);
    uVar12 = local_328 + 1;
    uVar29 = uVar12;
    if (uVar12 < 0x81) {
      if (local_338.Data != (FScriptContainerElement *)0x0) {
        uVar29 = 0;
        goto LAB_145ba452c;
      }
    }
    else {
LAB_145ba452c:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_338,0,uVar29,1);
    }
    local_330 = local_3b8;
    if (local_338.Data != (FScriptContainerElement *)0x0) {
      local_330 = local_338.Data;
    }
    UE::Core::Private::Convert((uchar *)local_330,uVar12,pwVar25,(int)sVar21 + 1);
  }
  else {
    pwVar25 = (wchar_t *)local_3f8.Data.AllocatorInstance.Data;
    if (local_3f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) goto LAB_145ba44ef;
    local_330 = (FScriptContainerElement *)0x0;
    local_328 = 0;
  }
  local_298.Data = (FScriptContainerElement *)0x0;
  sVar21 = wcslen(GInternalProjectName);
  local_288 = UE::Core::Private::GetConvertedLength((uchar *)0x0,GInternalProjectName,(int)sVar21);
  uVar12 = local_288 + 1;
  uVar29 = uVar12;
  if (uVar12 < 0x81) {
    if (local_298.Data != (FScriptContainerElement *)0x0) {
      uVar29 = 0;
      goto LAB_145ba45b6;
    }
  }
  else {
LAB_145ba45b6:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_298,0,uVar29,1);
  }
  local_290 = local_318;
  if (local_298.Data != (FScriptContainerElement *)0x0) {
    local_290 = local_298.Data;
  }
  UE::Core::Private::Convert((uchar *)local_290,uVar12,GInternalProjectName,(int)sVar21 + 1);
  local_4a0.sType = VK_STRUCTURE_TYPE_APPLICATION_INFO;
  local_4a0.pEngineName._4_4_ = 0;
  local_4a0.engineVersion = 0;
  local_4a0.apiVersion = 0;
  local_4a0._4_8_ = 0;
  local_4a0.pNext._4_4_ = 0;
  local_4a0.applicationVersion = 0;
  local_4a0._28_4_ = 0;
  local_4a0.pEngineName._0_4_ = 0;
  if (bVar9) {
    local_4a0.pApplicationName._0_4_ = 0;
    local_4a0.pApplicationName._4_4_ = 0;
    uVar12 = BuildSettings::GetCurrentChangelist();
    bVar9 = BuildSettings::IsLicenseeVersion();
    local_4a0.pEngineName._0_4_ = 0;
    local_4a0.pEngineName._4_4_ = 0;
  }
  else {
    local_4a0.pApplicationName._0_4_ = SUB84(local_290,0);
    local_4a0.pApplicationName._4_4_ = (undefined4)((ulonglong)local_290 >> 0x20);
    uVar12 = BuildSettings::GetCurrentChangelist();
    bVar9 = BuildSettings::IsLicenseeVersion();
    local_4a0.pEngineName._0_4_ = SUB84(local_330,0);
    local_4a0.pEngineName._4_4_ = (undefined4)((ulonglong)local_330 >> 0x20);
  }
  local_4a0.applicationVersion = (uint)bVar9 << 0x1f | uVar12;
  pFVar18 = FEngineVersion::Current();
  local_4a0.apiVersion = this->ApiVersion;
  local_468._52_4_ = 0;
  local_468.ppEnabledExtensionNames._0_4_ = 0;
  local_468.ppEnabledExtensionNames._4_4_ = 0;
  local_468.pApplicationInfo = &local_4a0;
  local_4a0.engineVersion = (uint)*(ushort *)((longlong)&pFVar18->_padding_ + 2);
  local_468._20_4_ = 0;
  local_468.enabledLayerCount = 0;
  local_468.sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
  local_468._4_8_ = 0;
  local_468._12_8_ = 0;
  local_468._36_4_ = 0;
  local_468.ppEnabledLayerNames._0_4_ = 0;
  local_468.ppEnabledLayerNames._4_4_ = 0;
  local_468.enabledExtensionCount = 0;
  FVulkanInstanceExtension::GetUESupportedInstanceExtensions(&local_4e0,local_4a0.apiVersion);
  pTVar22 = SetupInstanceLayers(this,&local_3c8,&local_4e0);
  pTVar2 = &this->InstanceLayers;
  if (pTVar2 != pTVar22) {
    pFVar4 = (pTVar2->AllocatorInstance).Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar22->AllocatorInstance).Data;
    (pTVar22->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->InstanceLayers).ArrayNum = pTVar22->ArrayNum;
    (this->InstanceLayers).ArrayMax = pTVar22->ArrayMax;
    pTVar22->ArrayNum = 0;
    pTVar22->ArrayMax = 0;
  }
  if (local_3c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3c8.AllocatorInstance.Data);
  }
  iVar3 = local_4e0.ArrayNum;
  pFVar4 = local_4e0.AllocatorInstance.Data + (longlong)local_4e0.ArrayNum * 8;
  FVar26.Data = local_4e0.AllocatorInstance.Data;
  while( true ) {
    if (local_4e0.ArrayNum != iVar3) {
      local_508 = 0;
      `TCheckedPointerIterator<TUniquePtr<FVulkanInstanceExtension,TDefaultDelete<FVulkanInstanceExtension>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&local_508);
    }
    pTVar22 = &this->InstanceExtensions;
    if (FVar26.Data == pFVar4) break;
    TVar5.Ptr = *(FVulkanInstanceExtension **)FVar26.Data;
    if (((*(char *)((longlong)&(TVar5.Ptr)->_padding_ + 4) == '\0') ||
        (*(char *)((longlong)&(TVar5.Ptr)->_padding_ + 5) == '\0')) ||
       (*(char *)((longlong)&(TVar5.Ptr)->_padding_ + 6) == '\0')) {
      FVar26.Data = FVar26.Data + 8;
    }
    else {
      local_500 = (TVar5.Ptr)->_padding_;
      pTVar22 = &this->InstanceExtensions;
      pFVar27 = (pTVar22->AllocatorInstance).Data;
      if ((pFVar27 <= (FScriptContainerElement *)&local_500) &&
         ((FScriptContainerElement *)&local_500 <
          pFVar27 + (longlong)(this->InstanceExtensions).ArrayMax * 8)) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar9) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      iVar13 = (this->InstanceExtensions).ArrayNum;
      piVar1 = &(this->InstanceExtensions).ArrayMax;
      if (iVar13 == *piVar1) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&pTVar22->AllocatorInstance,piVar1);
      }
      (this->InstanceExtensions).ArrayNum = iVar13 + 1;
      *(longlong *)((pTVar22->AllocatorInstance).Data + (longlong)iVar13 * 8) = local_500;
      (**(code **)((*(FVulkanInstanceExtension **)FVar26.Data)->_padding_ + 8))
                (*(FVulkanInstanceExtension **)FVar26.Data,&local_468,
                 &this->OptionalInstanceExtensions);
      FVar26.Data = FVar26.Data + 8;
    }
  }
  local_468.enabledExtensionCount = (this->InstanceExtensions).ArrayNum;
  if (local_468.enabledExtensionCount == 0) {
    local_468.ppEnabledExtensionNames._0_4_ = 0;
    local_468.ppEnabledExtensionNames._4_4_ = 0;
  }
  else {
    pFVar4 = (pTVar22->AllocatorInstance).Data;
    local_468.ppEnabledExtensionNames._0_4_ = SUB84(pFVar4,0);
    local_468.ppEnabledExtensionNames._4_4_ = (undefined4)((ulonglong)pFVar4 >> 0x20);
  }
  local_468.enabledLayerCount = (this->InstanceLayers).ArrayNum;
  if (local_468.enabledLayerCount == 0) {
    local_468.ppEnabledLayerNames._0_4_ = 0;
    local_468.ppEnabledLayerNames._4_4_ = 0;
  }
  else {
    pFVar4 = (pTVar2->AllocatorInstance).Data;
    local_468.ppEnabledLayerNames._0_4_ = SUB84(pFVar4,0);
    local_468.ppEnabledLayerNames._4_4_ = (undefined4)((ulonglong)pFVar4 >> 0x20);
  }
  ppVVar28 = &this->Instance;
  local_4f8 = pTVar22;
  VVar14 = (*VulkanDynamicAPI::vkCreateInstance)
                     (&local_468,&VulkanRHI::GAllocationCallbacks,ppVVar28);
  if (VVar14 == VK_ERROR_LAYER_NOT_PRESENT) {
    if (2 < (byte)LogVulkanRHI._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
    }
    pFVar27 = (pTVar2->AllocatorInstance).Data;
    iVar3 = (this->InstanceLayers).ArrayNum;
    pFVar4 = pFVar27 + (longlong)iVar3 * 8;
    while( true ) {
      if ((this->InstanceLayers).ArrayNum != iVar3) {
        local_507 = 0;
        `TCheckedPointerIterator<char_const_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_507);
      }
      if (pFVar27 == pFVar4) break;
      pcVar6 = *(char **)pFVar27;
      local_278._padding_ = 0;
      if (pcVar6 == (char *)0x0) {
        local_278.StringLength = 0;
        local_278.Ptr = (wchar_t *)0x0;
      }
      else {
        sVar21 = strlen(pcVar6);
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_278,pcVar6,(int)sVar21,Yes)
        ;
      }
      ::FString::FString(&local_428,local_278.Ptr);
      if ((void *)local_278._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_278._padding_);
      }
      if (2 < (byte)LogVulkanRHI._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
      }
      if (local_428.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_428.Data.AllocatorInstance.Data);
      }
      pFVar27 = pFVar27 + 8;
    }
    TVar15 = FWindowsPlatformMisc::MessageBoxExt
                       (YesNo,
                        L"ERROR: Vulkan driver couldn\'t load one of the requested layers (see log for details).\n\nRetry without layers?"
                        ,L"Incompatible Vulkan layer found!");
    this = local_4b8;
    pTVar22 = local_4f8;
    if (TVar15 == Yes) {
      ppVVar28 = &local_4b8->Instance;
      local_468.enabledLayerCount = 0;
      VVar14 = (*VulkanDynamicAPI::vkCreateInstance)
                         (&local_468,&VulkanRHI::GAllocationCallbacks,ppVVar28);
      goto LAB_145ba49dc;
    }
  }
  else {
LAB_145ba49dc:
    if (VVar14 != VK_ERROR_INCOMPATIBLE_DRIVER) {
      if (VVar14 == VK_ERROR_EXTENSION_NOT_PRESENT) {
        local_4d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_4d0.Data.ArrayNum = 0;
        local_4d0.Data.ArrayMax = 0;
        (*VulkanDynamicAPI::vkEnumerateInstanceExtensionProperties)
                  ((char *)0x0,&local_504,(VkExtensionProperties *)0x0);
        local_4f0.Data = (FScriptContainerElement *)0x0;
        local_4e8[0] = 0;
        local_4e8[1] = 0;
        if ((int)local_504 < 1) {
          if ((int)local_504 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)local_504);
          }
        }
        else {
          UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x104,4,local_504,&local_4f0,local_4e8,local_4e8 + 1);
        }
        (*VulkanDynamicAPI::vkEnumerateInstanceExtensionProperties)
                  ((char *)0x0,&local_504,(VkExtensionProperties *)local_4f0.Data);
        pFVar27 = (pTVar22->AllocatorInstance).Data;
        iVar3 = pTVar22->ArrayNum;
        pFVar4 = pFVar27 + (longlong)iVar3 * 8;
        while( true ) {
          if (pTVar22->ArrayNum != iVar3) {
            local_506[0] = 0;
            `TCheckedPointerIterator<char_const_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_506);
          }
          if (pFVar27 == pFVar4) break;
          pcVar6 = *(char **)pFVar27;
          uVar12 = 0;
          if (local_504 != 0) {
            do {
              uVar29 = 0;
              if ((int)uVar12 < local_4e8[0]) {
                uVar29 = ~uVar12 >> 0x1f;
              }
              if (uVar29 == 0) {
                bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar9) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
              }
              iVar13 = strcmp((char *)(local_4f0.Data + (longlong)(int)uVar12 * 0x104),pcVar6);
              if (iVar13 == 0) goto LAB_145ba4c06;
              uVar12 = uVar12 + 1;
            } while (uVar12 < local_504);
          }
          local_158._padding_ = 0;
          if (pcVar6 == (char *)0x0) {
            local_158.Ptr = (wchar_t *)0x0;
            local_158.StringLength = 0;
          }
          else {
            sVar21 = strlen(pcVar6);
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_158,pcVar6,(int)sVar21,Yes);
          }
          ::FString::FString(&local_4b0,local_158.Ptr);
          if ((void *)local_158._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_158._padding_);
          }
          if (1 < (byte)LogVulkanRHI._0_1_) {
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
          }
          ::FString::ConcatFC(&local_418,&local_4b0,L"\n");
          iVar13 = local_418.Data.ArrayNum + -1;
          if (local_418.Data.ArrayNum == 0) {
            iVar13 = 0;
          }
          ::FString::AppendChars(&local_4d0,(wchar_t *)local_418.Data.AllocatorInstance.Data,iVar13)
          ;
          if (local_418.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_418.Data.AllocatorInstance.Data);
          }
          if (local_4b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_4b0.Data.AllocatorInstance.Data);
          }
LAB_145ba4c06:
          pFVar27 = pFVar27 + 8;
        }
        ::FString::PrintfImpl
                  (&local_408,
                   L"Vulkan driver doesn\'t contain specified extensions:\n%s;\n\t\t\tmake sure your layers path is set appropriately."
                  );
        FVar26.Data = (FScriptContainerElement *)L"";
        if (local_408.Data.ArrayNum != 0) {
          FVar26.Data = local_408.Data.AllocatorInstance.Data;
        }
        FWindowsPlatformMisc::MessageBoxExt
                  (Ok,(wchar_t *)FVar26.Data,L"Incomplete Vulkan driver found!");
        this = local_4b8;
        if (local_408.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_408.Data.AllocatorInstance.Data);
        }
        if ((VkExtensionProperties *)local_4f0.Data != (VkExtensionProperties *)0x0) {
          FMemory::Free(local_4f0.Data);
        }
        if (local_4d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_4d0.Data.AllocatorInstance.Data);
        }
        VulkanRHI::VerifyVulkanResult
                  (VK_ERROR_EXTENSION_NOT_PRESENT,"Result",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRHI.cpp"
                   ,0x2f3);
        ppVVar28 = &this->Instance;
      }
      else if (VVar14 != VK_SUCCESS) {
        pwVar30 = L"No Vulkan driver found!";
        pwVar25 = 
        L"Vulkan failed to create instance.\n\nDo you have a compatible Vulkan driver (ICD) installed?\nPlease look at the Getting Started guide for additional information."
        ;
        goto LAB_145ba4d5b;
      }
      bVar9 = FVulkanWindowsPlatform::LoadVulkanInstanceFunctions(*ppVVar28);
      if (!bVar9) {
        FWindowsPlatformMisc::MessageBoxExt
                  (Ok,L"Failed to find all required Vulkan entry points! Try updating your driver.",
                   L"No Vulkan entry points found!");
      }
      SetupDebugLayerCallback(this);
      goto LAB_145ba4cc9;
    }
    pwVar30 = L"Incompatible Vulkan driver found!";
    pwVar25 = 
    L"Cannot find a compatible Vulkan driver (ICD).\n\nPlease look at the Getting Started guide for additional information."
    ;
LAB_145ba4d5b:
    FWindowsPlatformMisc::MessageBoxExt(Ok,pwVar25,pwVar30);
  }
  FWindowsPlatformMisc::RequestExitWithStatus(true,'\x01',(wchar_t *)0x0);
LAB_145ba4cc9:
  DestructItems<TUniquePtr<FVulkanInstanceExtension,TDefaultDelete<FVulkanInstanceExtension>_>,int>
            ((TUniquePtr<FVulkanInstanceExtension,TDefaultDelete<FVulkanInstanceExtension>_> *)
             local_4e0.AllocatorInstance.Data,local_4e0.ArrayNum);
  if (local_4e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4e0.AllocatorInstance.Data);
  }
  if (local_298.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_298.Data);
  }
  if (local_338.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_338.Data);
  }
  if (local_3f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3f8.Data.AllocatorInstance.Data);
  }
  return;
}

// CreateTextureInternal @ 145ba5c80

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
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */

FVulkanTexture * __thiscall
FVulkanDynamicRHI::CreateTextureInternal
          (FVulkanDynamicRHI *this,FRHICommandListBase *param_1,FRHITextureCreateDesc *param_2)

{
  FVulkanTexture *pFVar1;
  FCreateTextureResult local_18;
  
  BeginCreateTextureInternal(this,&local_18,param_2,(FRHITransientHeapAllocation *)0x0);
  pFVar1 = FinalizeCreateTextureInternal(this,param_1,&local_18);
  return pFVar1;
}

// CreateTextureInternal @ 145ba5cd0

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
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */

FVulkanTexture * __thiscall
FVulkanDynamicRHI::CreateTextureInternal
          (FVulkanDynamicRHI *this,FRHITextureCreateDesc *param_1,
          FRHITransientHeapAllocation *param_2)

{
  code *pcVar1;
  bool bVar2;
  FVulkanTexture *pFVar3;
  FCreateTextureResult local_18;
  
  if ((param_1->_padding_ & 0x2000000000U) != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!EnumHasAnyFlags(CreateDesc.Flags, ETextureCreateFlags::ReservedResource)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                       ,0x596,L"Can\'t use reserved resources with transient allocation.");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FVulkanTexture *)(*pcVar1)();
      return pFVar3;
    }
  }
  BeginCreateTextureInternal(this,&local_18,param_1,param_2);
  return local_18.Texture;
}

// DumpCrashMarkers @ 145ba6c40

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
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FVulkanDynamicRHI::DumpCrashMarkers(FVulkanDynamicRHI *this)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  VkDevice_T *pVVar3;
  code *pcVar4;
  bool bVar5;
  VkResult VVar6;
  int iVar7;
  FString *pFVar8;
  size_t sVar9;
  wchar_t *pwVar10;
  ulonglong uVar11;
  ForAnyElementType FVar12;
  char *_Str;
  int iVar13;
  uint uVar14;
  undefined1 auStackY_5a8 [32];
  undefined1 local_578;
  undefined1 local_577 [7];
  ForAnyElementType local_570;
  int local_568 [2];
  ForAnyElementType local_560;
  int local_558 [2];
  TArray<VkDeviceFaultAddressInfoEXT,TSizedDefaultAllocator<32>_> local_550;
  void *local_540;
  undefined8 local_538;
  FString local_530;
  FScriptContainerElement *local_520;
  FVulkanDynamicRHI *local_518;
  VkDeviceFaultCountsEXT local_510;
  void **local_4f0;
  ForAnyElementType *local_4e8;
  FString local_4e0;
  code *local_4d0;
  void ***local_4c8;
  code *local_4c0;
  undefined1 *local_4b8;
  code *local_4b0;
  undefined8 **local_4a8;
  undefined8 *local_4a0;
  FRHIBreadcrumbState *local_498;
  undefined4 local_490;
  FString local_488;
  VkDeviceFaultInfoEXT local_478;
  FRHIBreadcrumbState local_348;
  undefined1 local_2c8 [64];
  void *local_288;
  undefined4 local_280;
  FScriptContainerElement local_278 [256];
  ForAnyElementType local_178;
  FScriptContainerElement *local_170;
  int local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_5a8;
  local_4f0 = &local_540;
  local_4c8 = &local_4f0;
  local_4d0 = UE::Core::Private::Function::
              TFunctionRefCaller<`FVulkanDynamicRHI::DumpCrashMarkers'::__l3::<lambda_1>,void,FVulkanQueue_&>
              ::Call;
  local_540 = (void *)0x0;
  local_538 = 0;
  local_518 = this;
  FVulkanDevice::ForEachQueue(this->Device,(TFunctionRef<void___cdecl(FVulkanQueue_&)> *)&local_4d0)
  ;
  if ((1 < (int)local_538) && (1 < (byte)LogVulkanRHI._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
  }
  if (local_540 != (void *)0x0) {
    FMemory::Free(local_540);
  }
  if ((*(uint *)&(this->Device->OptionalDeviceExtensions).field0_0x0 >> 0x11 & 1) == 0)
  goto LAB_145ba7186;
  pVVar3 = this->Device->Device;
  local_510.sType = VK_STRUCTURE_TYPE_DEVICE_FAULT_COUNTS_EXT;
  local_510.vendorInfoCount = 0;
  local_510.vendorBinarySize._0_4_ = 0;
  local_510.vendorBinarySize._4_4_ = 0;
  local_510._4_8_ = 0;
  local_510._12_8_ = 0;
  VVar6 = (*VulkanDynamicAPI::vkGetDeviceFaultInfoEXT)
                    (pVVar3,&local_510,(VkDeviceFaultInfoEXT *)0x0);
  if (VVar6 != VK_SUCCESS) goto LAB_145ba7186;
  local_478.sType = VK_STRUCTURE_TYPE_DEVICE_FAULT_INFO_EXT;
  memset(&local_478.field_0x4,0,0x124);
  local_550.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_550.ArrayNum = 0;
  local_550.ArrayMax = 0;
  TArray<VkDeviceFaultAddressInfoEXT,TSizedDefaultAllocator<32>_>::SetNumZeroed
            (&local_550,local_510.addressInfoCount,Default);
  uVar1 = local_510.vendorInfoCount;
  local_478.pAddressInfos = (VkDeviceFaultAddressInfoEXT *)local_550.AllocatorInstance.Data;
  local_570.Data = (FScriptContainerElement *)0x0;
  local_568[0] = 0;
  local_568[1] = 0;
  if ((int)local_510.vendorInfoCount < 1) {
    if ((int)local_510.vendorInfoCount < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)local_510.vendorInfoCount);
    }
  }
  else {
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x110,8,local_510.vendorInfoCount,&local_570,local_568,local_568 + 1);
    memset(local_570.Data + (longlong)iVar7 * 0x110,0,(longlong)(int)uVar1 * 0x110);
  }
  uVar1 = (uint)local_510.vendorBinarySize;
  local_560.Data = (FScriptContainerElement *)0x0;
  local_558[0] = 0;
  local_558[1] = 0;
  local_478.pVendorInfos = (VkDeviceFaultVendorInfoEXT *)local_570.Data;
  if ((int)(uint)local_510.vendorBinarySize < 1) {
    if ((int)(uint)local_510.vendorBinarySize < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)local_510.vendorBinarySize);
    }
  }
  else {
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,(uint)local_510.vendorBinarySize,&local_560,local_558,local_558 + 1);
    memset(local_560.Data + iVar7,0,(longlong)(int)uVar1);
  }
  local_478.pVendorBinaryData = local_560.Data;
  VVar6 = (*VulkanDynamicAPI::vkGetDeviceFaultInfoEXT)(pVVar3,&local_510,&local_478);
  if ((VVar6 == VK_SUCCESS) && (local_4e8 = &local_570, 1 < (byte)LogVulkanRHI._0_1_)) {
    pFVar8 = `FVulkanDynamicRHI::DumpCrashMarkers'::__l33::<lambda_3>::operator()
                       (&local_4e8,&local_488);
    local_520 = (FScriptContainerElement *)0x15060d16c;
    if ((pFVar8->Data).ArrayNum != 0) {
      local_520 = (pFVar8->Data).AllocatorInstance.Data;
    }
    iVar7 = local_550.ArrayNum;
    uVar11 = (ulonglong)local_550.ArrayNum;
    local_530.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_530.Data.ArrayNum = 0;
    local_530.Data.ArrayMax = 0;
    pFVar2 = local_550.AllocatorInstance.Data + uVar11 * 0x18;
    FVar12.Data = local_550.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar11 != iVar7) {
        local_578 = 0;
        `TCheckedPointerIterator<VkDeviceFaultAddressInfoEXT,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_578);
      }
      if (FVar12.Data == pFVar2) break;
      switch(*(undefined4 *)FVar12.Data) {
      case 0:
        _Str = "VK_DEVICE_FAULT_ADDRESS_TYPE_NONE_EXT";
        break;
      case 1:
        _Str = "VK_DEVICE_FAULT_ADDRESS_TYPE_READ_INVALID_EXT";
        break;
      case 2:
        _Str = "VK_DEVICE_FAULT_ADDRESS_TYPE_WRITE_INVALID_EXT";
        break;
      case 3:
        _Str = "VK_DEVICE_FAULT_ADDRESS_TYPE_EXECUTE_INVALID_EXT";
        break;
      case 4:
        _Str = "VK_DEVICE_FAULT_ADDRESS_TYPE_INSTRUCTION_POINTER_UNKNOWN_EXT";
        break;
      case 5:
        _Str = "VK_DEVICE_FAULT_ADDRESS_TYPE_INSTRUCTION_POINTER_INVALID_EXT";
        break;
      case 6:
        _Str = "VK_DEVICE_FAULT_ADDRESS_TYPE_INSTRUCTION_POINTER_FAULT_EXT";
        break;
      default:
        _Str = "Unhandled VkDeviceFaultAddressTypeEXT";
      }
      local_158._padding_ = 0;
      sVar9 = strlen(_Str);
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_158,_Str,(int)sVar9,Yes);
      ::FString::PrintfImpl(&local_4e0,L"\n    - %s : 0x%016llX (range:0x%016llX-0x%016llX)");
      iVar13 = local_4e0.Data.ArrayNum + -1;
      if (local_4e0.Data.ArrayNum == 0) {
        iVar13 = 0;
      }
      ::FString::AppendChars(&local_530,(wchar_t *)local_4e0.Data.AllocatorInstance.Data,iVar13);
      if (local_4e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4e0.Data.AllocatorInstance.Data);
      }
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
      uVar11 = local_550._8_8_ & 0xffffffff;
      FVar12.Data = FVar12.Data + 0x18;
    }
    local_178.Data = (FScriptContainerElement *)0x0;
    sVar9 = strlen(local_478.description);
    local_168 = UE::Core::Private::GetConvertedLength
                          ((wchar_t *)0x0,(uchar *)local_478.description,(int)sVar9);
    uVar1 = local_168 + 1;
    uVar14 = uVar1;
    if (uVar1 < 0x81) {
      if (local_178.Data != (FScriptContainerElement *)0x0) {
        uVar14 = 0;
        goto LAB_145ba708a;
      }
    }
    else {
LAB_145ba708a:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_178,0,uVar14,2);
    }
    local_170 = local_278;
    if (local_178.Data != (FScriptContainerElement *)0x0) {
      local_170 = local_178.Data;
    }
    pwVar10 = UE::Core::Private::Convert
                        ((wchar_t *)local_170,uVar1,(uchar *)local_478.description,(int)sVar9 + 1);
    if ((pwVar10 == (wchar_t *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Result",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                           ,0x25,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
    if (local_178.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.Data);
    }
    if (local_530.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_530.Data.AllocatorInstance.Data);
    }
    this = local_518;
    if (local_488.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_488.Data.AllocatorInstance.Data);
      this = local_518;
    }
  }
  if (local_560.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_560.Data);
  }
  if (local_570.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_570.Data);
  }
  if (local_550.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_550.AllocatorInstance.Data);
  }
LAB_145ba7186:
  if ((*(uint *)&(this->Device->OptionalDeviceExtensions).field0_0x0 >> 0x1a & 1) != 0) {
    local_4b8 = local_577;
    local_4c0 = UE::Core::Private::Function::
                TFunctionRefCaller<`FVulkanDynamicRHI::DumpCrashMarkers'::__l54::<lambda_4>,void,FVulkanQueue_&>
                ::Call;
    FVulkanDevice::ForEachQueue
              (this->Device,(TFunctionRef<void___cdecl(FVulkanQueue_&)> *)&local_4c0);
  }
  bVar5 = UE::RHI::UseGPUCrashBreadcrumbs();
  if (bVar5) {
    local_4a0 = (undefined8 *)local_2c8;
    local_498 = &local_348;
    local_2c8._0_8_ = 0;
    local_4a8 = &local_4a0;
    local_2c8._8_8_ = 0;
    local_4b0 = UE::Core::Private::Function::
                TFunctionRefCaller<`FVulkanDynamicRHI::DumpCrashMarkers'::__l57::<lambda_5>,void,FVulkanQueue_&>
                ::Call;
    local_2c8._32_8_ = 0;
    local_2c8._40_4_ = 0;
    local_2c8._44_4_ = 0x80;
    local_2c8._48_4_ = 0xffffffff;
    local_2c8._52_4_ = 0;
    local_288 = (void *)0x0;
    local_280 = 0;
    local_348.Devices.Elements[0].Pipelines._0_8_ = 0;
    local_348.Devices.Elements[0].Pipelines._8_8_ = 0;
    local_348.Devices.Elements[1].Pipelines._0_8_ = 0;
    local_348.Devices.Elements[1].Pipelines._8_8_ = 0;
    local_348.Devices.Elements[2].Pipelines._0_8_ = 0;
    local_348.Devices.Elements[2].Pipelines._8_8_ = 0;
    local_348.Devices.Elements[3].Pipelines._0_8_ = 0;
    local_348.Devices.Elements[3].Pipelines._8_8_ = 0;
    local_348.Devices.Elements[4].Pipelines._0_8_ = 0;
    local_348.Devices.Elements[4].Pipelines._8_8_ = 0;
    local_348.Devices.Elements[5].Pipelines._0_8_ = 0;
    local_348.Devices.Elements[5].Pipelines._8_8_ = 0;
    local_348.Devices.Elements[6].Pipelines._0_8_ = 0;
    local_348.Devices.Elements[6].Pipelines._8_8_ = 0;
    local_348.Devices.Elements[7].Pipelines._0_8_ = 0;
    local_348.Devices.Elements[7].Pipelines._8_8_ = 0;
    local_490 = 0;
    FVulkanDevice::ForEachQueue
              (this->Device,(TFunctionRef<void___cdecl(FVulkanQueue_&)> *)&local_4b0);
    if (local_2c8._8_4_ != local_2c8._52_4_) {
      FRHIBreadcrumbState::DumpActiveBreadcrumbs
                (&local_348,
                 (TMap<FRHIBreadcrumbState::FQueueID,TArray<FRHIBreadcrumbRange,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIBreadcrumbState::FQueueID,TArray<FRHIBreadcrumbRange,TSizedDefaultAllocator<32>_>,0>_>
                  *)local_2c8,Error);
    }
    local_280 = 0;
    if (local_288 != (void *)0x0) {
      FMemory::Free(local_288);
    }
    TSparseArray<TSparseSetElement<TTuple<FRHIBreadcrumbState::FQueueID,TArray<FRHIBreadcrumbRange,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FRHIBreadcrumbState::FQueueID,TArray<FRHIBreadcrumbRange,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FRHIBreadcrumbState::FQueueID,TArray<FRHIBreadcrumbRange,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_2c8);
  }
  return;
}

// DumpLRU @ 145ba73e0

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

void __cdecl FVulkanDynamicRHI::DumpLRU(void)

{
  FVulkanPipelineStateCacheManager::LRUDump(GVulkanRHI->Device->PipelineStateCache);
  return;
}

// DumpMemory @ 145ba7400

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

void __cdecl FVulkanDynamicRHI::DumpMemory(void)

{
  VulkanRHI::FMemoryManager::DumpMemory(&GVulkanRHI->Device->MemoryManager,false);
  return;
}

// DumpMemoryFull @ 145ba7430

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

void __cdecl FVulkanDynamicRHI::DumpMemoryFull(void)

{
  VulkanRHI::FMemoryManager::DumpMemory(&GVulkanRHI->Device->MemoryManager,true);
  return;
}

// DumpStagingMemory @ 145ba7460

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

void __cdecl FVulkanDynamicRHI::DumpStagingMemory(void)

{
  VulkanRHI::FStagingManager::DumpMemory(&GVulkanRHI->Device->StagingManager);
  return;
}

// EnqueueEndOfPipeTask @ 145ba76a0

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
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FVulkanDynamicRHI::EnqueueEndOfPipeTask
          (FVulkanDynamicRHI *this,TUniqueFunction<void___cdecl(void)> *param_1,
          TUniqueFunction<void___cdecl(FVulkanPayload_&)> *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  atomic<unsigned_int> *paVar1;
  TRefCountPtr<FBaseGraphTask> *pTVar2;
  TQueue<FVulkanPlatformCommandList_*,0> *pTVar3;
  atomic<unsigned_int> aVar4;
  TNode *pTVar5;
  FBaseGraphTask *pFVar6;
  code *pcVar7;
  int iVar8;
  bool bVar9;
  FVulkanPlatformCommandList *pFVar10;
  FVulkanPlatformCommandList *pFVar11;
  TNode *pTVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<_public:___cdecl__public:_void___cdecl_FVulkanDynamicRHI::EnqueueEndOfPipeTask(TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FVulkanPayload_&)>)_::_2_::<lambda_2>::operator()(void)const_::_2_::FStat_FExecuteRHIThreadTask>
  FVar14;
  FTaskBase *pFVar15;
  undefined8 *puVar16;
  FTaskBase *this_00;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar17;
  longlong *plVar18;
  undefined1 auStackY_158 [32];
  EExtendedTaskPriority local_f8;
  ETaskPriority local_f7 [7];
  FVulkanPlatformCommandList *local_f0;
  longlong local_e8;
  longlong local_d8;
  undefined8 uStack_d0;
  FPipe *local_c8;
  longlong *local_c0;
  code *local_b8;
  TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  **local_b0;
  TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  *local_a8;
  TUniqueFunction<void___cdecl(FVulkanPayload_&)> *local_a0;
  FVulkanPlatformCommandList **local_98;
  FName local_90;
  FName local_88;
  longlong local_80;
  TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  local_78;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_158;
  pFVar11 = (FVulkanPlatformCommandList *)0x0;
  local_78.ArrayMax = 4;
  local_78.AllocatorInstance.SecondaryData = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
  pTVar2 = &this->EopTask;
  local_78.ArrayNum = 0;
  if (pTVar2->Reference != (FBaseGraphTask *)0x0) {
    pFVar10 = pFVar11;
    if ((&local_78 <= pTVar2) &&
       (pFVar10 = (FVulkanPlatformCommandList *)0x0,
       pTVar2 < &local_78.AllocatorInstance.SecondaryData)) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar9) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (local_78.ArrayNum == local_78.ArrayMax) {
        local_78.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                       (0x808,&local_78.AllocatorInstance,&local_78.ArrayMax);
      }
      pFVar10 = (FVulkanPlatformCommandList *)(ulonglong)(uint)local_78.ArrayNum;
    }
    iVar8 = (int)pFVar10;
    local_78.ArrayNum = iVar8 + 1;
    FVar17 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_78;
    if (local_78.AllocatorInstance.SecondaryData !=
        (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FVar17 = local_78.AllocatorInstance.SecondaryData;
    }
    ((TRefCountPtr<FBaseGraphTask> *)((longlong)FVar17 + (longlong)iVar8 * 8))->Reference =
         (FBaseGraphTask *)0x0;
    pFVar6 = pTVar2->Reference;
    ((TRefCountPtr<FBaseGraphTask> *)((longlong)FVar17 + (longlong)iVar8 * 8))->Reference = pFVar6;
    if (pFVar6 != (FBaseGraphTask *)0x0) {
      LOCK();
      *(int *)&pFVar6->field_0x30 = *(int *)&pFVar6->field_0x30 + 1;
      UNLOCK();
    }
  }
  pFVar10 = ::operator_new(0x50);
  if (pFVar10 != (FVulkanPlatformCommandList *)0x0) {
    *(undefined8 *)&pFVar10->field_0x20 = 0;
    *(undefined4 *)&pFVar10->field_0x28 = 0;
    *(undefined4 *)&pFVar10->field_0x2c = 2;
    *(undefined8 *)&pFVar10->field_0x30 = 0;
    *(undefined8 *)&pFVar10->field_0x38 = 0;
    *(undefined8 *)&pFVar10->field_0x40 = 0;
    *(undefined8 *)&pFVar10->field_0x48 = 0;
    pFVar11 = pFVar10;
  }
  local_f0 = pFVar11;
  if (*(int *)&pFVar11->field_0x4c < 3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,3,(ForAnyElementType *)&pFVar11->field_0x40,*(int *)&pFVar11->field_0x48,
               (int *)&pFVar11->field_0x4c);
  }
  local_a8 = &local_78;
  local_98 = &local_f0;
  local_b0 = &local_a8;
  local_b8 = UE::Core::Private::Function::
             TFunctionRefCaller<`FVulkanDynamicRHI::EnqueueEndOfPipeTask'::__l2::<lambda_1>,void,FVulkanQueue_&>
             ::Call;
  local_a0 = param_2;
  FVulkanDevice::ForEachQueue(this->Device,(TFunctionRef<void___cdecl(FVulkanQueue_&)> *)&local_b8);
  pTVar3 = &this->PendingPayloadsForSubmission;
  pTVar12 = ::operator_new(0x10);
  if (pTVar12 != (TNode *)0x0) {
    pTVar12->NextNode = (TNode *)0x0;
    pTVar12->Item = local_f0;
    if (((ulonglong)pTVar3 & 7) != 0) {
      FWindowsPlatformAtomics::HandleAtomicsFailure
                (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
    }
    LOCK();
    pTVar5 = pTVar3->Head;
    pTVar3->Head = pTVar12;
    UNLOCK();
    if (((ulonglong)pTVar5 & 7) != 0) {
      FWindowsPlatformAtomics::HandleAtomicsFailure
                (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
    }
    LOCK();
    pTVar5->NextNode = pTVar12;
    UNLOCK();
  }
  this_00 = (FTaskBase *)0x0;
  if (this->SubmissionThread == (FVulkanThread *)0x0) {
    bVar9 = FVulkanDevice::UseMinimalSubmits(this->Device);
    if (!bVar9) {
      lpCriticalSection = &this->SubmissionCS;
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      do {
        bVar9 = ProcessSubmissionQueue(this);
      } while (bVar9);
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  else {
    (**(code **)(this->SubmissionThread->Event->_padding_ + 0x10))();
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    StatPtr_FExecuteRHIThreadTask =
         (FThreadSafeStaticStat<_public:___cdecl__public:_void___cdecl_FVulkanDynamicRHI::EnqueueEndOfPipeTask(TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FVulkanPayload_&)>)_::_2_::<lambda_2>::operator()(void)const_::_2_::FStat_FExecuteRHIThreadTask>
          )0x0;
    pFVar13 = ::FName::FName(&local_90,"FExecuteRHIThreadTask");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_FExecuteRHIThreadTask,*pFVar13,
               L"FExecuteRHIThreadTask","STATGROUP_TaskGraphTasks","STATCAT_Advanced",
               L"Task Graph Tasks",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&::_TSS0);
  }
  FVar14 = StatPtr_FExecuteRHIThreadTask;
  if (StatPtr_FExecuteRHIThreadTask ==
      (FThreadSafeStaticStat<_public:___cdecl__public:_void___cdecl_FVulkanDynamicRHI::EnqueueEndOfPipeTask(TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FVulkanPayload_&)>)_::_2_::<lambda_2>::operator()(void)const_::_2_::FStat_FExecuteRHIThreadTask>
       )0x0) {
    pFVar13 = ::FName::FName(&local_88,"FExecuteRHIThreadTask");
    FVar14 = (FThreadSafeStaticStat<_public:___cdecl__public:_void___cdecl_FVulkanDynamicRHI::EnqueueEndOfPipeTask(TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FVulkanPayload_&)>)_::_2_::<lambda_2>::operator()(void)const_::_2_::FStat_FExecuteRHIThreadTask>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_FExecuteRHIThreadTask,*pFVar13,
                          L"FExecuteRHIThreadTask","STATGROUP_TaskGraphTasks","STATCAT_Advanced",
                          L"Task Graph Tasks",true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_e8 = *(longlong *)param_1;
  local_c0 = *(longlong **)&param_1->field_0x28;
  *(undefined8 *)&param_1->field_0x28 = 0;
  local_c8 = *(FPipe **)&param_1->field_0x20;
  local_d8 = *(longlong *)&param_1->field_0x10;
  uStack_d0 = *(undefined8 *)&param_1->field_0x18;
  if (local_e8 != 0) {
    *(undefined8 *)param_1 = 0;
  }
  pFVar15 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x130,0x10);
  if (pFVar15 != (FTaskBase *)0x0) {
    FBaseGraphTask::FBaseGraphTask((FBaseGraphTask *)pFVar15,&local_78);
    pFVar15->_padding_ = (longlong)&___7__TGraphTask_V__TFunctionGraphTaskImpl___A6AXXZ_0A_____6B_;
    this_00 = pFVar15;
  }
  this_00[1]._padding_ = (longlong)FVar14;
  this_00[1]._padding_ = local_e8;
  *(longlong **)&this_00[1].StateChangeEvent = local_c0;
  local_c0 = (longlong *)0x0;
  this_00[1]._padding_ = local_d8;
  this_00[1].RefCount = (atomic<unsigned_int>)(undefined4)uStack_d0;
  this_00[1].NumLocks = (atomic<unsigned_int>)uStack_d0._4_4_;
  this_00[1].Pipe = local_c8;
  if (this_00[1]._padding_ != 0) {
    local_e8 = 0;
  }
  this_00[1].ExecutingThreadId = (atomic<unsigned_int>)0xff;
  UE::Tasks::Private::TranslatePriority(AnyNormalThreadNormalTask,local_f7,&local_f8);
  UE::Tasks::Private::FTaskBase::Init(this_00,L"GraphTask",local_f7[0],local_f8,None);
  if (this_00 != (FTaskBase *)0x0) {
    LOCK();
    this_00->RefCount = (atomic<unsigned_int>)((int)this_00->RefCount + 1);
    UNLOCK();
  }
  UE::Tasks::Private::FTaskBase::TryLaunch(this_00,0x130);
  if (local_e8 != 0) {
    plVar18 = &local_d8;
    if (local_c0 != (longlong *)0x0) {
      plVar18 = local_c0;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  if (pTVar2 == (TRefCountPtr<FBaseGraphTask> *)&local_80) {
    if (this_00 == (FTaskBase *)0x0) goto LAB_145ba7aea;
    LOCK();
    paVar1 = &this_00->RefCount;
    aVar4 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar4 != (atomic<unsigned_int>)0x1) goto LAB_145ba7aea;
    puVar16 = (undefined8 *)this_00->_padding_;
  }
  else {
    pFVar15 = (FTaskBase *)pTVar2->Reference;
    pTVar2->Reference = (FBaseGraphTask *)this_00;
    if (pFVar15 == (FTaskBase *)0x0) goto LAB_145ba7aea;
    LOCK();
    paVar1 = &pFVar15->RefCount;
    aVar4 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar4 != (atomic<unsigned_int>)0x1) goto LAB_145ba7aea;
    puVar16 = (undefined8 *)pFVar15->_padding_;
    this_00 = pFVar15;
  }
  (*(code *)*puVar16)(this_00,1);
LAB_145ba7aea:
  FVar17 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_78;
  if (local_78.AllocatorInstance.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0
     ) {
    FVar17 = local_78.AllocatorInstance.SecondaryData;
  }
  DestructItems<TRefCountPtr<FBaseGraphTask>,int>
            ((TRefCountPtr<FBaseGraphTask> *)FVar17,local_78.ArrayNum);
  if (local_78.AllocatorInstance.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0
     ) {
    FMemory::Free((void *)local_78.AllocatorInstance.SecondaryData);
  }
  if (*(longlong *)param_1 != 0) {
    plVar18 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar18 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  if (*(longlong *)param_2 != 0) {
    plVar18 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar18 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  return;
}

// FinalizeCreateTextureInternal @ 145ba9740

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
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */

FVulkanTexture * __thiscall
FVulkanDynamicRHI::FinalizeCreateTextureInternal
          (FVulkanDynamicRHI *this,FRHICommandListBase *param_1,FCreateTextureResult *param_2)

{
  code *pcVar1;
  bool bVar2;
  ulonglong *puVar3;
  FVulkanTexture *pFVar4;
  FRHICommandBase *pFVar5;
  FVulkanTexture *local_res18;
  
  pFVar4 = param_2->Texture;
  puVar3 = (ulonglong *)(**(code **)(pFVar4->_padding_ + 0x20))(pFVar4);
  if ((*puVar3 >> 0x26 & 1) != 0) {
    if ((*puVar3 >> 0x25 & 1) == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("EnumHasAnyFlags(Desc.Flags, ETextureCreateFlags::ReservedResource)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                         ,0x4aa,
                         L"The ImmediateCommit flag can only be used on textures created with the ReservedResource flag."
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FVulkanTexture *)(*pcVar1)();
        return pFVar4;
      }
    }
    local_res18 = pFVar4;
    if (((GRHICommandList.bLatchedBypass == false) ||
        ((param_1->PersistentState).bImmediate == '\0')) && (param_1->bExecuting == false)) {
      pFVar5 = FMemStackBase::Alloc(&param_1->MemManager,0x20,8);
      param_1->NumCommands = param_1->NumCommands + 1;
      *param_1->CommandLink = pFVar5;
      param_1->CommandLink = &pFVar5->Next;
      pFVar5->Next = (FRHICommandBase *)0x0;
      pFVar5->_padding_ =
           (longlong)
           &TRHILambdaCommand<FRHICommandListBase,`FVulkanDynamicRHI::FinalizeCreateTextureInternal'::`5'::<lambda_1>_>
            ::_vftable_;
      pFVar5[1].Next = (FRHICommandBase *)L"FVulkanTexture::ImmediateCommit";
      pFVar5[1]._padding_ = (longlong)pFVar4;
    }
    else {
      `FVulkanDynamicRHI::FinalizeCreateTextureInternal'::__l5::<lambda_1>::operator()
                (&local_res18,param_1);
    }
  }
  if ((((uint)*puVar3 >> 0x13 & 1) == 0) &&
     ((param_2->DefaultLayout != VK_IMAGE_LAYOUT_UNDEFINED || (param_2->bClear != false)))) {
    FVulkanTexture::SetInitialImageState
              (pFVar4,param_1,param_2->DefaultLayout,param_2->bClear,
               (FClearValueBinding *)(puVar3 + 1),param_2->bTransientResource);
  }
  return pFVar4;
}

// GetPrecachePSOHashVersion @ 145bac740

uint __cdecl FVulkanDynamicRHI::GetPrecachePSOHashVersion(void)

{
  return 5;
}

// Init @ 145bae0f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FVulkanDynamicRHI::Init(FVulkanDynamicRHI *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  IModularFeatures *pIVar6;
  IHeadMountedDisplayModule *pIVar7;
  ulong64 uVar8;
  IConsoleManager *pIVar9;
  longlong *plVar10;
  TConsoleVariableData<int> *pTVar11;
  TConsoleVariableData<int> *pTVar12;
  float fVar13;
  
  InitInstance(this);
  bVar3 = IsInGameThread();
  if ((!bVar3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\HeadMountedDisplay\\Public\\IHeadMountedDisplayModule.h"
                         ,0x5a,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pIVar6 = IModularFeatures::Get();
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar1 + 0x9d4c) <
       `public:_static_class_FName___cdecl_IHeadMountedDisplayModule::GetModularFeatureName(void)'::
       __l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_FName___cdecl_IHeadMountedDisplayModule::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_FName___cdecl_IHeadMountedDisplayModule::GetModularFeatureName(void)'::
     __l2::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`public:_static_class_FName___cdecl_IHeadMountedDisplayModule::GetModularFeatureName(void)'
                    ::__l2::HMDFeatureName,L"HMD");
    _Init_thread_footer(&`public:_static_class_FName___cdecl_IHeadMountedDisplayModule::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  iVar5 = (**(code **)((longlong)*pIVar6 + 0x18))
                    (pIVar6,`public:_static_class_FName___cdecl_IHeadMountedDisplayModule::GetModularFeatureName(void)'
                            ::__l2::HMDFeatureName);
  if (0 < iVar5) {
    pIVar7 = IHeadMountedDisplayModule::Get();
    cVar4 = (**(code **)((longlong)*pIVar7 + 0x90))(pIVar7);
    if (cVar4 != '\0') {
      bVar3 = true;
      goto LAB_145bae19c;
    }
  }
  bVar3 = false;
LAB_145bae19c:
  this->bIsStandaloneStereoDevice = bVar3;
  pTVar12 = (TConsoleVariableData<int> *)0x0;
  if ((*(int *)(lVar1 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pIVar9 = IConsoleManager::Get();
    plVar10 = (longlong *)(**(code **)((longlong)*pIVar9 + 0xc0))(pIVar9,L"r.Streaming.PoolSize",1);
    pTVar11 = pTVar12;
    if (plVar10 != (longlong *)0x0) {
      pTVar11 = (TConsoleVariableData<int> *)(**(code **)(*plVar10 + 0x68))(plVar10);
    }
    CVarStreamingTexturePoolSize = pTVar11;
    _Init_thread_footer(&::_TSS0);
  }
  pTVar11 = CVarStreamingTexturePoolSize;
  bVar3 = IsInParallelGameThread();
  if ((!bVar3) && (bVar3 = IsInGameThread(), !bVar3)) {
    pTVar12 = (TConsoleVariableData<int> *)&DAT_00000004;
  }
  iVar5 = *(int *)((longlong)pTVar11->ShadowedValue + (longlong)pTVar12->ShadowedValue);
  if (GRHIGlobals.PoolSizeVRAMPercentage < 1) {
    if (0 < iVar5) {
      GRHIGlobals.TexturePoolSize = (longlong)iVar5 << 0x14;
      VulkanRHI::FDeviceMemoryManager::GetTotalMemory(&this->Device->DeviceMemoryManager,true);
      if (4 < (byte)LogRHI._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
      }
    }
  }
  else {
    uVar8 = VulkanRHI::FDeviceMemoryManager::GetTotalMemory(&this->Device->DeviceMemoryManager,true)
    ;
    fVar13 = (float)truncf((float)GRHIGlobals.PoolSizeVRAMPercentage * ___real_3223d70a *
                           (float)uVar8);
    GRHIGlobals.TexturePoolSize = (longlong)fVar13 << 0x14;
    if (4 < (byte)LogRHI._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
  }
  return;
}

// InitInstance @ 145bae3c0

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
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __thiscall FVulkanDynamicRHI::InitInstance(FVulkanDynamicRHI *this)

{
  VkDriverId VVar1;
  FVulkanDevice *pFVar2;
  FVulkanDevice *pFVar3;
  code *pcVar4;
  TConsoleVariableData<int> *pTVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  undefined8 *puVar10;
  ulong64 uVar11;
  IConsoleObject *pIVar12;
  longlong lVar13;
  IConsoleManager *pIVar14;
  ulonglong uVar15;
  FStaticBasicLogRecord *pFVar16;
  uint uVar17;
  ulonglong uVar18;
  ulonglong in_stack_fffffffffffffd08;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_2e8;
  FDelegateAllocation local_2e0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_2d0;
  FDelegateAllocation local_2c8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_2b8;
  FDelegateAllocation local_2b0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_2a0;
  FDelegateAllocation local_298;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_288;
  FDelegateAllocation local_280;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_270;
  FDelegateAllocation local_268;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_258;
  FDelegateAllocation local_250;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_240;
  FDelegateAllocation local_238;
  undefined8 local_228;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  FString local_218;
  FDestructionSentinel local_208;
  FDestructionSentinel local_1f0;
  FDestructionSentinel local_1d8;
  FDestructionSentinel local_1c0;
  FDestructionSentinel local_1a8;
  FDestructionSentinel local_190;
  FDestructionSentinel local_178;
  FDestructionSentinel local_160;
  FDestructionSentinel local_148;
  FDelegateAllocation *local_130;
  FDestructionSentinel local_128;
  FDelegateAllocation *local_110;
  FDestructionSentinel local_108;
  FDelegateAllocation *local_f0;
  FDestructionSentinel local_e8;
  FDelegateAllocation *local_d0;
  FDestructionSentinel local_c8;
  FDelegateAllocation *local_b0;
  FDestructionSentinel local_a8;
  FDelegateAllocation *local_90;
  FDestructionSentinel local_88;
  FDelegateAllocation *local_70;
  FDestructionSentinel local_68;
  FDelegateAllocation *local_50;
  TArrayView<EShaderPlatform,int> local_48;
  
  bVar6 = IsInGameThread();
  if ((!bVar6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRHI.cpp"
                         ,0x356,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (GRHIGlobals.IsRHIInitialized != false) {
    return;
  }
  FlushRenderingCommands();
  GRHIGlobals.SupportsAsyncTextureCreation = false;
  FVulkanDevice::InitGPU(this->Device);
  if (GRenderDocFound != false) {
    FDynamicRHI::EnableIdealGPUCaptureOptions(true);
  }
  pFVar2 = this->Device;
  uVar15 = (ulonglong)GMaxRHIShaderPlatform;
  GRHIGlobals.NeedsSRVGraphicsNonPixelWorkaround = true;
  GRHIGlobals.SupportsFirstInstance = true;
  GRHIGlobals.SupportsDynamicResolution = false;
  GRHIGlobals.SupportsFrameCyclesBubblesRemoval = true;
  GRHIGlobals.SupportsDepthBoundsTest = (pFVar2->PhysicalDeviceFeatures).Core_1_0.depthBounds != 0;
  GRHIGlobals.SupportsRenderTargetFormat_PF_G8.Value = false;
  GRHIGlobals.SupportsTextureStreaming = true;
  GRHIGlobals.SupportsGPUTimestampBubblesRemoval = true;
  GRHIGlobals.SupportsMobileMultiView =
       (bool)((byte)((uint)*(undefined4 *)&(this->Device->OptionalDeviceExtensions).field0_0x0 >>
                    0x1d) & 1);
  GRHIGlobals.SupportsMSAAShaderResolve =
       (bool)((byte)((this->Device->OptionalDeviceExtensions).field0_0x0.Packed >> 0x2b) & 1);
  if ((FGenericDataDrivenShaderPlatformInfo::Infos[uVar15].bContainsValidPlatformInfo == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid(Platform)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                         ,0x16c,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((FGenericDataDrivenShaderPlatformInfo::Infos[uVar15].bSupportsRayTracing == 0) ||
     (bVar6 = FOptionalVulkanDeviceExtensions::HasRaytracingExtensions
                        (&this->Device->OptionalDeviceExtensions), !bVar6)) {
    uVar15 = (ulonglong)_tls_index;
    GRHIGlobals.RayTracing._0_2_ = GRHIGlobals.RayTracing._0_2_ & 0xff00;
    GRHIGlobals.SupportsMapWriteNoOverwrite = true;
    GRHIGlobals.NeedsExtraTransitions = true;
  }
  else {
    uVar15 = (ulonglong)GMaxRHIShaderPlatform;
    GRHIGlobals.RayTracing.Supported = true;
    GRHIGlobals.SupportsMapWriteNoOverwrite = true;
    GRHIGlobals.NeedsExtraTransitions = true;
    if ((FGenericDataDrivenShaderPlatformInfo::Infos[uVar15].bContainsValidPlatformInfo == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid(Platform)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                           ,0x172,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((FGenericDataDrivenShaderPlatformInfo::Infos[uVar15].bSupportsRayTracing == 0) ||
       (FGenericDataDrivenShaderPlatformInfo::Infos[uVar15].bSupportsRayTracingShaders == 0)) {
LAB_145bae5cf:
      GRHIGlobals.RayTracing._0_2_ = GRHIGlobals.RayTracing._0_2_ & 0xff;
    }
    else {
      GRHIGlobals.RayTracing.SupportsShaders = true;
      if ((*(uint *)&(this->Device->OptionalDeviceExtensions).field0_0x0 >> 0xb & 1) == 0)
      goto LAB_145bae5cf;
    }
    uVar15 = (ulonglong)GMaxRHIShaderPlatform;
    if ((FGenericDataDrivenShaderPlatformInfo::Infos[uVar15].bContainsValidPlatformInfo == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid(Platform)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                           ,0x178,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (((FGenericDataDrivenShaderPlatformInfo::Infos[uVar15].bSupportsRayTracing == 0) ||
        (FGenericDataDrivenShaderPlatformInfo::Infos[uVar15].bSupportsInlineRayTracing == 0)) ||
       (GRHIGlobals.RayTracing.SupportsInlineRayTracing = true,
       (*(uint *)&(this->Device->OptionalDeviceExtensions).field0_0x0 >> 0xc & 1) == 0)) {
      GRHIGlobals.RayTracing.SupportsInlineRayTracing = false;
    }
    uVar15 = (ulonglong)_tls_index;
    GRHIGlobals.RayTracing.RequiresInlineRayTracingSBT = false;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar15 * 8) + 0x9d4c) <
         ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      pIVar14 = IConsoleManager::Get();
      CVarRayTracingAllowCompaction =
           (IConsoleVariable *)
           (**(code **)((longlong)*pIVar14 + 0xc0))
                     (pIVar14,L"r.Vulkan.RayTracing.AllowCompaction",1);
      _Init_thread_footer(&::_TSS0);
    }
    iVar8 = (**(code **)(*(longlong *)CVarRayTracingAllowCompaction + 200))();
    GRHIGlobals.RayTracing.SupportsAccelerationStructureCompaction = iVar8 != 0;
    GRHIGlobals.RayTracing.AccelerationStructureAlignment = 0x100;
    GRHIGlobals.RayTracing.ScratchBufferAlignment =
         (this->Device->OptionalDeviceExtensionProperties).AccelerationStructureProps.
         minAccelerationStructureScratchOffsetAlignment;
    GRHIGlobals.RayTracing.InstanceDescriptorSize = 0x40;
    if (GRHIGlobals.RayTracing.ScratchBufferAlignment < 0x100) {
      GRHIGlobals.RayTracing.ScratchBufferAlignment = 0x100;
    }
    GRHIGlobals.RayTracing.SupportsLooseParamsInShaderRecord = true;
  }
  if ((GVulkanAMDCompatibilityMode == 0) || (this->Device->VendorId != Amd)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  if (GVulkanAMDCompatibilityMode != 0) {
    VVar1 = (this->Device->OptionalDeviceExtensionProperties).PhysicalDeviceDriverProperties.
            driverID;
    if (VVar1 == VK_DRIVER_ID_MESA_RADV) {
      if ((pFVar2->GpuProps).driverVersion < 0x6003002) {
        GRHIGlobals.RayTracing.Supported = false;
        GRHIGlobals.RayTracing.SupportsShaders = false;
        GRHIGlobals.RayTracing.SupportsInlineRayTracing = false;
        if (2 < (byte)LogVulkanRHI._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
        }
      }
    }
    else if (VVar1 - VK_DRIVER_ID_AMD_PROPRIETARY < 2) {
      GRHIGlobals.RayTracing.Supported = false;
      GRHIGlobals.RayTracing.SupportsShaders = false;
      GRHIGlobals.RayTracing.SupportsInlineRayTracing = false;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar15 * 8) + 0x9d4c) <
           ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
        pIVar14 = IConsoleManager::Get();
        CVarPathTracing =
             (IConsoleVariable *)
             (**(code **)((longlong)*pIVar14 + 0xc0))(pIVar14,L"r.PathTracing",1);
        _Init_thread_footer(&::_TSS1);
      }
      if (CVarPathTracing != (IConsoleVariable *)0x0) {
        IConsoleVariable::Set<int>(CVarPathTracing,0,ECVF_SetByCode,(FName)0x0);
      }
      if (3 < (byte)LogVulkanRHI._0_1_) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
      }
    }
  }
  iVar8 = (**(code **)(*(longlong *)GRHIThreadCvar._padding_ + 200))();
  GRHIGlobals.SupportsRHIThread = iVar8 != 0;
  if ((((this->Device->OptionalDeviceExtensions).field0_0x0.Packed & 0x2020100000000) ==
       0x2020100000000) &&
     (iVar8 = (**(code **)(*(longlong *)GRHIThreadCvar._padding_ + 200))(), 1 < iVar8)) {
    GRHIGlobals.SupportsParallelRHIExecute = true;
  }
  else {
    GRHIGlobals.SupportsParallelRHIExecute = false;
  }
  GRHIGlobals.SupportsParallelRenderingTasksWithSeparateRHIThread =
       GRHIGlobals.SupportsRHIThread != false;
  GRHIGlobals.SupportsUAVFormatAliasing = true;
  GRHIGlobals.SupportsEfficientAsyncCompute =
       (this->Device->Queues).Elements[1] != (FVulkanQueue *)0x0;
  GRHIGlobals.SupportsParallelRenderPasses = GRHIGlobals.SupportsParallelRHIExecute;
  GRHIGlobals.ParallelRHIExecuteChildWait = GRHIGlobals.SupportsParallelRHIExecute;
  GRHIGlobals.ParallelRHIExecuteParentWait = GRHIGlobals.SupportsParallelRHIExecute;
  if (3 < (byte)LogVulkanRHI._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
  }
  GRHIGlobals.SupportsVolumeTextureRendering = true;
  GRHIGlobals.NeedsExtraDeletionLatency = true;
  uVar17 = (pFVar2->GpuProps).limits.maxImageDimension2D;
  if ((int)uVar17 < GRHIGlobals.MaxShadowDepthBufferSizeX.Value) {
    GRHIGlobals.MaxShadowDepthBufferSizeX.Value = uVar17;
  }
  uVar17 = (pFVar2->GpuProps).limits.maxImageDimension2D;
  if ((int)uVar17 < GRHIGlobals.MaxShadowDepthBufferSizeY.Value) {
    GRHIGlobals.MaxShadowDepthBufferSizeY.Value = uVar17;
  }
  GRHIGlobals.MaxTextureDimensions.Value = (pFVar2->GpuProps).limits.maxImageDimension2D;
  GRHIGlobals.MaxViewDimensionForTypedBuffer.Value =
       (ulong64)(pFVar2->GpuProps).limits.maxTexelBufferElements;
  uVar15 = (ulonglong)(pFVar2->GpuProps).limits.maxStorageBufferRange;
  if (uVar15 < GRHIGlobals.MaxViewSizeBytesForNonTypedBuffer.Value) {
    GRHIGlobals.MaxViewSizeBytesForNonTypedBuffer.Value = uVar15;
  }
  GRHIGlobals.MaxComputeSharedMemory.Value =
       (long64)(pFVar2->GpuProps).limits.maxComputeSharedMemorySize;
  uVar17 = 1;
  if (GRHIGlobals.MaxTextureDimensions.Value != 0) {
    uVar17 = GRHIGlobals.MaxTextureDimensions.Value;
  }
  uVar15 = (ulonglong)(uVar17 - 1) * 2 + 1;
  lVar13 = 0x3f;
  if (uVar15 != 0) {
    for (; uVar15 >> lVar13 == 0; lVar13 = lVar13 + -1) {
    }
  }
  GRHIGlobals.MaxTextureMipCount = (int)lVar13 + 1;
  if (0xf < GRHIGlobals.MaxTextureMipCount) {
    GRHIGlobals.MaxTextureMipCount = 0xf;
  }
  GRHIGlobals.MaxCubeTextureDimensions.Value = (pFVar2->GpuProps).limits.maxImageDimensionCube;
  GRHIGlobals.MaxVolumeTextureDimensions.Value = (pFVar2->GpuProps).limits.maxImageDimension3D;
  GRHIGlobals.MaxWorkGroupInvocations.Value =
       (pFVar2->GpuProps).limits.maxComputeWorkGroupInvocations;
  GRHIGlobals.MaxTextureArrayLayers = (pFVar2->GpuProps).limits.maxImageArrayLayers;
  GRHIGlobals.SupportsBaseVertexIndex = true;
  GRHIGlobals.SupportsSeparateRenderTargetBlendState = true;
  GRHIGlobals.SupportsDualSrcBlending = (pFVar2->PhysicalDeviceFeatures).Core_1_0.dualSrcBlend == 1;
  GRHIGlobals.SupportsSeparateDepthStencilCopyAccess =
       ((this->Device->OptionalDeviceExtensions).field0_0x0.Packed & 0x2020100000000) ==
       0x2020100000000;
  bVar7 = FVulkanDevice::SupportsBindless(this->Device);
  if (bVar7) {
    uVar15 = (ulonglong)GMaxRHIShaderPlatform;
    if ((FGenericDataDrivenShaderPlatformInfo::Infos[uVar15].bContainsValidPlatformInfo == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid(Platform)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                           ,0x2ec,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    GRHIGlobals.bSupportsBindless = true;
    if (FGenericDataDrivenShaderPlatformInfo::Infos[uVar15].bSupportsBindless == 0)
    goto LAB_145baea0b;
  }
  else {
LAB_145baea0b:
    GRHIGlobals.bSupportsBindless = false;
  }
  GRHIGlobals.MaxTextureSamplers = (pFVar2->GpuProps).limits.maxPerStageDescriptorSamplers;
  if (0x7fffffff < (uint)GRHIGlobals.MaxTextureSamplers) {
    GRHIGlobals.MaxTextureSamplers = 0x7fffffff;
  }
  GRHIGlobals.SupportsLossyFramebufferCompression =
       (bool)((byte)(*(uint *)&(this->Device->OptionalDeviceExtensions).field0_0x0 >> 0x14) & 1);
  uVar17 = (pFVar2->GpuProps).limits.maxComputeWorkGroupCount[0];
  GRHIGlobals.MaxDispatchThreadGroupsPerDimension.field0_0x0._s_0.X = 0x7fffffff;
  if (uVar17 < 0x7fffffff) {
    GRHIGlobals.MaxDispatchThreadGroupsPerDimension.field0_0x0._s_0.X = uVar17;
  }
  uVar17 = (pFVar2->GpuProps).limits.maxComputeWorkGroupCount[1];
  GRHIGlobals.MaxDispatchThreadGroupsPerDimension.field0_0x0._s_0.Y = 0x7fffffff;
  if (uVar17 < 0x7fffffff) {
    GRHIGlobals.MaxDispatchThreadGroupsPerDimension.field0_0x0._s_0.Y = uVar17;
  }
  uVar17 = (pFVar2->GpuProps).limits.maxComputeWorkGroupCount[2];
  GRHIGlobals.SupportsBindingTexArrayPerSlice = true;
  GRHIGlobals.MaxDispatchThreadGroupsPerDimension.field0_0x0._s_0.Z = 0x7fffffff;
  if (uVar17 < 0x7fffffff) {
    GRHIGlobals.MaxDispatchThreadGroupsPerDimension.field0_0x0._s_0.Z = uVar17;
  }
  pFVar3 = this->Device;
  uVar17 = (pFVar3->Queues).Elements[0]->FamilyIndex;
  uVar9 = 0;
  if ((int)uVar17 < (pFVar3->QueueFamilyProps).ArrayNum) {
    uVar9 = ~uVar17 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (in_stack_fffffffffffffd08 = (longlong)(int)uVar17,
     bVar7 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar7
     )) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((((byte)(pFVar3->QueueFamilyProps).AllocatorInstance.Data[(longlong)(int)uVar17 * 0x18] & 8)
       != 0) &&
     (((this->Device->OptionalDeviceExtensions).field0_0x0.Packed & 0x2020100000000) ==
      0x2020100000000)) {
    if (((pFVar2->PhysicalDeviceFeatures).Core_1_0.sparseBinding == 0) ||
       ((((pFVar2->PhysicalDeviceFeatures).Core_1_0.sparseResidencyBuffer == 0 ||
         ((pFVar2->PhysicalDeviceFeatures).Core_1_0.sparseResidencyImage2D == 0)) ||
        (GRHIGlobals.ReservedResources.Supported = true,
        (pFVar2->GpuProps).sparseProperties.residencyNonResidentStrict == 0)))) {
      GRHIGlobals.ReservedResources.Supported = false;
    }
    GRHIGlobals.ReservedResources.SupportsVolumeTextures = false;
  }
  uVar17 = (pFVar2->GpuProps).limits.maxPerStageDescriptorStorageBuffers;
  uVar9 = (pFVar2->GpuProps).limits.maxPerStageDescriptorStorageImages;
  uStack_220 = 5;
  if (uVar17 < uVar9) {
    uVar9 = uVar17;
  }
  GRHIGlobals.MaxSimultaneousUAVs = 8;
  if (0xf < uVar9) {
    GRHIGlobals.MaxSimultaneousUAVs = 0x10;
  }
  local_228 = 0x155178300;
  local_48._12_4_ = uStack_21c;
  local_48.ArrayNum = 5;
  local_48.DataPtr = GRHIGlobals.ShaderPlatformForFeatureLevel;
  FVulkanGenericPlatform::SetupFeatureLevels(&local_48);
  GRHIGlobals.RequiresRenderTargetForPixelShaderUAVs = true;
  uVar17 = 0x31;
  GRHIGlobals.UseTexture3DBulkData = false;
  GVulkanDevicePipelineStageBits = 0x888;
  if ((pFVar2->PhysicalDeviceFeatures).Core_1_0.geometryShader != 0) {
    GVulkanDevicePipelineStageBits = 0x8c8;
    uVar17 = 0x39;
  }
  if ((!bVar6) && ((*(uint *)&(this->Device->OptionalDeviceExtensions).field0_0x0 >> 0x12 & 1) != 0)
     ) {
    uVar15 = (ulonglong)GMaxRHIShaderPlatform;
    if ((FGenericDataDrivenShaderPlatformInfo::Infos[uVar15].bContainsValidPlatformInfo == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid(Platform)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                           ,0x250,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar18 = (ulonglong)GMaxRHIShaderPlatform;
    GRHIGlobals.SupportsMeshShadersTier0 =
         FGenericDataDrivenShaderPlatformInfo::Infos[uVar15].bSupportsMeshShadersTier0;
    if ((FGenericDataDrivenShaderPlatformInfo::Infos[uVar18].bContainsValidPlatformInfo == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid(Platform)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                           ,0x256,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    GVulkanDevicePipelineStageBits = GVulkanDevicePipelineStageBits | 0x180000;
    GRHIGlobals.SupportsMeshShadersTier1 =
         FGenericDataDrivenShaderPlatformInfo::Infos[uVar18].bSupportsMeshShadersTier1;
    uVar17 = uVar17 | 0xc0;
  }
  if ((((this->Device->GpuSubgroupProps).supportedStages & uVar17) == uVar17) &&
     (((byte)(this->Device->GpuSubgroupProps).supportedOperations & 0x1f) == 0x1f)) {
    GRHIGlobals.SupportsWaveOperations = true;
    if ((GRHIGlobals.MinimumWaveSize == 0) || (GRHIGlobals.MaximumWaveSize == 0)) {
      GRHIGlobals.MinimumWaveSize = (this->Device->GpuSubgroupProps).subgroupSize;
      GRHIGlobals.MaximumWaveSize = GRHIGlobals.MinimumWaveSize;
    }
    if (3 < (byte)LogVulkanRHI._0_1_) {
      pFVar16 = &::LOG_Static;
LAB_145baed37:
      UE::Logging::Private::BasicLog<4>(pFVar16,(FLogCategoryBase *)&LogVulkanRHI);
    }
  }
  else {
    GRHIGlobals.SupportsWaveOperations = false;
    if (3 < (byte)LogVulkanRHI._0_1_) {
      pFVar16 = &::LOG_Static;
      goto LAB_145baed37;
    }
  }
  ::FString::FString(&local_218,L"Vulkan");
  FHardwareInfo::RegisterHardwareInfo(NAME_RHI,&local_218);
  if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_218.Data.AllocatorInstance.Data);
  }
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pIVar14 = IConsoleManager::Singleton;
  local_2e8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_2e0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_2e0.DelegateSize = 0;
  pcVar4 = *(code **)((longlong)*IConsoleManager::Singleton + 0xa8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_2e8,(FWriteAccessScope *)&local_148);
  local_130 = &local_2e0;
  puVar10 = UE::Core::Private::DelegateAllocate(0x20,&local_2e0);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[2] = uVar11;
    puVar10[3] = SavePipelineCache;
    *puVar10 = &___7__TBaseStaticDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
  }
  if (local_148.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_148.Accessor,&local_148);
  }
  in_stack_fffffffffffffd08 = in_stack_fffffffffffffd08 & 0xffffffff00000000;
  pIVar12 = (IConsoleObject *)
            (*pcVar4)(pIVar14,L"r.Vulkan.SavePipelineCache",L"Save pipeline cache.",&local_2e8,
                      in_stack_fffffffffffffd08);
  this->SavePipelineCacheCmd = pIVar12;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_2e8,(FWriteAccessScope *)&local_208);
  if ((local_2e0.DelegateSize != 0) &&
     (local_2e0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_2e0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_2e0,0,0,0x10);
    local_2e0.DelegateSize = 0;
  }
  if (local_208.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_208.Accessor,&local_208);
  }
  if (local_2e0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_2e0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_2e8.AccessDetector);
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pIVar14 = IConsoleManager::Singleton;
  local_2d0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_2c8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_2c8.DelegateSize = 0;
  pcVar4 = *(code **)((longlong)*IConsoleManager::Singleton + 0xa8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_2d0,(FWriteAccessScope *)&local_128);
  local_110 = &local_2c8;
  puVar10 = UE::Core::Private::DelegateAllocate(0x20,&local_2c8);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[2] = uVar11;
    puVar10[3] = RebuildPipelineCache;
    *puVar10 = &___7__TBaseStaticDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
  }
  if (local_128.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_128.Accessor,&local_128);
  }
  in_stack_fffffffffffffd08 = in_stack_fffffffffffffd08 & 0xffffffff00000000;
  pIVar12 = (IConsoleObject *)
            (*pcVar4)(pIVar14,L"r.Vulkan.RebuildPipelineCache",L"Rebuilds pipeline cache.",
                      &local_2d0,in_stack_fffffffffffffd08);
  this->RebuildPipelineCacheCmd = pIVar12;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_2d0,(FWriteAccessScope *)&local_1f0);
  if ((local_2c8.DelegateSize != 0) &&
     (local_2c8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_2c8.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_2c8,0,0,0x10);
    local_2c8.DelegateSize = 0;
  }
  if (local_1f0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1f0.Accessor,&local_1f0);
  }
  if (local_2c8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_2c8.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_2d0.AccessDetector);
  pTVar5 = GValidationCvar.Ref;
  bVar6 = IsInParallelGameThread();
  if (!bVar6) {
    bVar6 = IsInGameThread();
    lVar13 = 4;
    if (!bVar6) goto LAB_145baf05a;
  }
  lVar13 = 0;
LAB_145baf05a:
  if (0 < *(int *)((longlong)pTVar5->ShadowedValue + lVar13)) {
    pIVar14 = IConsoleManager::Get();
    local_2b8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_2b0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_2b0.DelegateSize = 0;
    pcVar4 = *(code **)((longlong)*pIVar14 + 0xa8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_2b8,(FWriteAccessScope *)&local_108);
    local_f0 = &local_2b0;
    puVar10 = UE::Core::Private::DelegateAllocate(0x20,&local_2b0);
    if (puVar10 != (undefined8 *)0x0) {
      *puVar10 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
      uVar11 = FDelegateHandle::GenerateNewID();
      puVar10[2] = uVar11;
      puVar10[3] = SaveValidationCache;
      *puVar10 = &___7__TBaseStaticDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    }
    if (local_108.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_108.Accessor,&local_108);
    }
    in_stack_fffffffffffffd08 = in_stack_fffffffffffffd08 & 0xffffffff00000000;
    pIVar12 = (IConsoleObject *)
              (*pcVar4)(pIVar14,L"r.Vulkan.SaveValidationCache",L"Save validation cache.",&local_2b8
                        ,in_stack_fffffffffffffd08);
    this->SaveValidationCacheCmd = pIVar12;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_2b8,(FWriteAccessScope *)&local_1d8);
    if ((local_2b0.DelegateSize != 0) &&
       (local_2b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_2b0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_2b0,0,0,0x10);
      local_2b0.DelegateSize = 0;
    }
    if (local_1d8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1d8.Accessor,&local_1d8);
    }
    if (local_2b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_2b0.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_2b8.AccessDetector);
  }
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pIVar14 = IConsoleManager::Singleton;
  local_2a0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_298.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_298.DelegateSize = 0;
  pcVar4 = *(code **)((longlong)*IConsoleManager::Singleton + 0xa8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_2a0,(FWriteAccessScope *)&local_e8);
  local_d0 = &local_298;
  puVar10 = UE::Core::Private::DelegateAllocate(0x20,&local_298);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[2] = uVar11;
    puVar10[3] = DumpMemory;
    *puVar10 = &___7__TBaseStaticDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
  }
  if (local_e8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e8.Accessor,&local_e8);
  }
  in_stack_fffffffffffffd08 = in_stack_fffffffffffffd08 & 0xffffffff00000000;
  pIVar12 = (IConsoleObject *)
            (*pcVar4)(pIVar14,L"r.Vulkan.DumpMemory",L"Dumps memory map.",&local_2a0,
                      in_stack_fffffffffffffd08);
  this->DumpMemoryCmd = pIVar12;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_2a0,(FWriteAccessScope *)&local_1c0);
  if ((local_298.DelegateSize != 0) &&
     (local_298.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_298.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_298,0,0,0x10);
    local_298.DelegateSize = 0;
  }
  if (local_1c0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1c0.Accessor,&local_1c0);
  }
  if (local_298.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_298.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_2a0.AccessDetector);
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pIVar14 = IConsoleManager::Singleton;
  local_288.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_280.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_280.DelegateSize = 0;
  pcVar4 = *(code **)((longlong)*IConsoleManager::Singleton + 0xa8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_288,(FWriteAccessScope *)&local_c8);
  local_b0 = &local_280;
  puVar10 = UE::Core::Private::DelegateAllocate(0x20,&local_280);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[2] = uVar11;
    puVar10[3] = DumpMemoryFull;
    *puVar10 = &___7__TBaseStaticDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
  }
  if (local_c8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c8.Accessor,&local_c8);
  }
  in_stack_fffffffffffffd08 = in_stack_fffffffffffffd08 & 0xffffffff00000000;
  pIVar12 = (IConsoleObject *)
            (*pcVar4)(pIVar14,L"r.Vulkan.DumpMemoryFull",L"Dumps full memory map.",&local_288,
                      in_stack_fffffffffffffd08);
  this->DumpMemoryFullCmd = pIVar12;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_288,(FWriteAccessScope *)&local_1a8);
  if ((local_280.DelegateSize != 0) &&
     (local_280.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_280.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_280,0,0,0x10);
    local_280.DelegateSize = 0;
  }
  if (local_1a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1a8.Accessor,&local_1a8);
  }
  if (local_280.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_280.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_288.AccessDetector);
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pIVar14 = IConsoleManager::Singleton;
  local_270.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_268.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_268.DelegateSize = 0;
  pcVar4 = *(code **)((longlong)*IConsoleManager::Singleton + 0xa8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_270,(FWriteAccessScope *)&local_a8);
  local_90 = &local_268;
  puVar10 = UE::Core::Private::DelegateAllocate(0x20,&local_268);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[2] = uVar11;
    puVar10[3] = DumpStagingMemory;
    *puVar10 = &___7__TBaseStaticDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
  }
  if (local_a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a8.Accessor,&local_a8);
  }
  in_stack_fffffffffffffd08 = in_stack_fffffffffffffd08 & 0xffffffff00000000;
  pIVar12 = (IConsoleObject *)
            (*pcVar4)(pIVar14,L"r.Vulkan.DumpStagingMemory",L"Dumps staging memory map.",&local_270,
                      in_stack_fffffffffffffd08);
  this->DumpStagingMemoryCmd = pIVar12;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_270,(FWriteAccessScope *)&local_190);
  if ((local_268.DelegateSize != 0) &&
     (local_268.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_268.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_268,0,0,0x10);
    local_268.DelegateSize = 0;
  }
  if (local_190.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_190.Accessor,&local_190);
  }
  if (local_268.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_268.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_270.AccessDetector);
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pIVar14 = IConsoleManager::Singleton;
  local_258.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_250.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_250.DelegateSize = 0;
  pcVar4 = *(code **)((longlong)*IConsoleManager::Singleton + 0xa8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_258,(FWriteAccessScope *)&local_88);
  local_70 = &local_250;
  puVar10 = UE::Core::Private::DelegateAllocate(0x20,&local_250);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[2] = uVar11;
    puVar10[3] = DumpLRU;
    *puVar10 = &___7__TBaseStaticDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
  }
  if (local_88.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
  }
  in_stack_fffffffffffffd08 = in_stack_fffffffffffffd08 & 0xffffffff00000000;
  pIVar12 = (IConsoleObject *)
            (*pcVar4)(pIVar14,L"r.Vulkan.DumpPSOLRU",L"Dumps Vulkan PSO LRU.",&local_258,
                      in_stack_fffffffffffffd08);
  this->DumpLRUCmd = pIVar12;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_258,(FWriteAccessScope *)&local_178);
  if ((local_250.DelegateSize != 0) &&
     (local_250.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_250.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_250,0,0,0x10);
    local_250.DelegateSize = 0;
  }
  if (local_178.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_178.Accessor,&local_178);
  }
  if (local_250.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_250.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_258.AccessDetector);
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pIVar14 = IConsoleManager::Singleton;
  local_240.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_238.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_238.DelegateSize = 0;
  pcVar4 = *(code **)((longlong)*IConsoleManager::Singleton + 0xa8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_240,(FWriteAccessScope *)&local_68);
  local_50 = &local_238;
  puVar10 = UE::Core::Private::DelegateAllocate(0x20,&local_238);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[2] = uVar11;
    puVar10[3] = TrimLRU;
    *puVar10 = &___7__TBaseStaticDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
  }
  if (local_68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
  }
  pIVar12 = (IConsoleObject *)
            (*pcVar4)(pIVar14,L"r.Vulkan.TrimPSOLRU",L"Trim Vulkan PSO LRU.",&local_240,
                      in_stack_fffffffffffffd08 & 0xffffffff00000000);
  this->TrimLRUCmd = pIVar12;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_240,(FWriteAccessScope *)&local_160);
  if ((local_238.DelegateSize != 0) &&
     (local_238.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_238.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_238,0,0,0x10);
    local_238.DelegateSize = 0;
  }
  if (local_160.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_160.Accessor,&local_160);
  }
  if (local_238.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_238.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_240.AccessDetector);
  GRHIGlobals.DeviceIsIntegrated =
       (this->Device->GpuProps).deviceType == VK_PHYSICAL_DEVICE_TYPE_INTEGRATED_GPU;
  if (4 < (byte)LogVulkanRHI._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
  }
  InitializeSubmissionPipe(this);
  FRenderResource::InitPreRHIResources();
  GRHIGlobals.IsRHIInitialized = true;
  return;
}

// InitializeSubmissionPipe @ 145bafba0

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

void __thiscall FVulkanDynamicRHI::InitializeSubmissionPipe(FVulkanDynamicRHI *this)

{
  atomic<unsigned___int64> *paVar1;
  TQueue<FVulkanPlatformCommandList_*,0> *pTVar2;
  atomic<unsigned___int64> aVar3;
  TNode *pTVar4;
  code *pcVar5;
  TConsoleVariableData<int> *pTVar6;
  bool bVar7;
  int iVar8;
  FTaskGraphInterface *pFVar9;
  FVulkanSemaphore *this_00;
  FVulkanPlatformCommandList *pFVar10;
  FVulkanPlatformCommandList *pFVar11;
  FEvent *pFVar12;
  FRunnableThread *pFVar13;
  FVulkanPlatformCommandList *pFVar14;
  TNode *pTVar15;
  FVulkanPlatformCommandList *local_res8;
  FQueue *local_78;
  undefined8 local_70;
  code *local_68;
  FQueue ***local_60;
  FQueue *local_58;
  int iStack_50;
  undefined4 uStack_4c;
  TArrayView<UE::RHI::GPUProfiler::FQueue_const_,int> local_48;
  FQueue **local_38;
  FVulkanPlatformCommandList **local_30;
  FVulkanDynamicRHI *local_28;
  
  bVar7 = FGenericPlatformProcess::SupportsMultithreading();
  if ((bVar7) && (bVar7 = FApp::ShouldUseThreadingForPerformance(), bVar7)) {
    pFVar9 = FTaskGraphInterface::Get();
    iVar8 = (**(code **)((longlong)*pFVar9 + 0x20))();
    if (iVar8 < 7) goto LAB_145bafbe6;
    bVar7 = true;
  }
  else {
LAB_145bafbe6:
    bVar7 = false;
  }
  pTVar6 = CVarVulkanUseInterruptThread.Ref;
  pFVar14 = (FVulkanPlatformCommandList *)0x0;
  if (((GAllowTimelineSemaphores == 0) ||
      (((this->Device->OptionalDeviceExtensions).field0_0x0.Packed & 0x200000000000) == 0)) ||
     (!bVar7)) goto LAB_145bafd8e;
  bVar7 = IsInParallelGameThread();
  if (bVar7) {
LAB_145bafc44:
    pFVar10 = pFVar14;
  }
  else {
    bVar7 = IsInGameThread();
    pFVar10 = (FVulkanPlatformCommandList *)&DAT_00000004;
    if (bVar7) goto LAB_145bafc44;
  }
  if (*(int *)((longlong)&pFVar10->field_0x0 + (longlong)pTVar6->ShadowedValue) != 0) {
    this_00 = ::operator_new(0x28);
    pFVar10 = pFVar14;
    if (this_00 != (FVulkanSemaphore *)0x0) {
      LOCK();
      paVar1 = &this->CPUTimelineSemaphoreValue;
      aVar3 = *paVar1;
      *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + 1);
      UNLOCK();
      pFVar10 = (FVulkanPlatformCommandList *)
                FVulkanSemaphore::FVulkanSemaphore
                          (this_00,this->Device,ImmediateDeletion|Timeline,(ulong64)aVar3);
    }
    this->CPUTimelineSemaphore = (FVulkanSemaphore *)pFVar10;
    pFVar11 = ::operator_new(0x30);
    pFVar10 = pFVar14;
    if (pFVar11 != (FVulkanPlatformCommandList *)0x0) {
      *(undefined ***)&pFVar11->field_0x0 = &___7FVulkanThread__6B_;
      *(FVulkanDynamicRHI **)&pFVar11->field_0x8 = this;
      *(atomic<bool> *)&pFVar11->field_0x10 = (atomic<bool>)0x0;
      pFVar12 = FGenericPlatformProcess::GetSynchEventFromPool(false);
      *(FEvent **)&pFVar11->field_0x18 = pFVar12;
      *(code **)&pFVar11->field_0x20 = WaitAndProcessInterruptQueue;
      pFVar13 = FRunnableThread::Create
                          ((FRunnable *)pFVar11,L"RHIInterruptThread",0,TPri_Highest,
                           0xffffffffffffffff,None);
      *(FRunnableThread **)&pFVar11->field_0x28 = pFVar13;
      pFVar10 = pFVar11;
    }
    this->InterruptThread = (FVulkanThread *)pFVar10;
  }
  pTVar6 = CVarVulkanUseSubmissionThread.Ref;
  bVar7 = IsInParallelGameThread();
  if ((bVar7) ||
     (bVar7 = IsInGameThread(), pFVar10 = (FVulkanPlatformCommandList *)&DAT_00000004, bVar7)) {
    pFVar10 = pFVar14;
  }
  if (*(int *)((longlong)&pFVar10->field_0x0 + (longlong)pTVar6->ShadowedValue) != 0) {
    pFVar11 = ::operator_new(0x30);
    pFVar10 = pFVar14;
    if (pFVar11 != (FVulkanPlatformCommandList *)0x0) {
      *(undefined ***)&pFVar11->field_0x0 = &___7FVulkanThread__6B_;
      *(FVulkanDynamicRHI **)&pFVar11->field_0x8 = this;
      *(atomic<bool> *)&pFVar11->field_0x10 = (atomic<bool>)0x0;
      pFVar12 = FGenericPlatformProcess::GetSynchEventFromPool(false);
      *(FEvent **)&pFVar11->field_0x18 = pFVar12;
      *(code **)&pFVar11->field_0x20 = ProcessSubmissionQueue;
      pFVar13 = FRunnableThread::Create
                          ((FRunnable *)pFVar11,L"RHISubmissionThread",0,TPri_Highest,
                           0xffffffffffffffff,None);
      *(FRunnableThread **)&pFVar11->field_0x28 = pFVar13;
      pFVar10 = pFVar11;
    }
    this->SubmissionThread = (FVulkanThread *)pFVar10;
  }
LAB_145bafd8e:
  local_78 = (FQueue *)0x0;
  local_70 = 0;
  pFVar10 = ::operator_new(0x50);
  if (pFVar10 != (FVulkanPlatformCommandList *)0x0) {
    *(pmf_2ea73880 *)&pFVar10->field_0x20 = (pmf_2ea73880)0x0;
    *(undefined4 *)&pFVar10->field_0x28 = 0;
    *(undefined4 *)((longlong)&pFVar10->field_0x28 + 4) = 2;
    *(undefined8 *)&pFVar10->field_0x30 = 0;
    *(undefined8 *)(&pFVar10->field_0x30 + 8) = 0;
    *(undefined8 *)(&pFVar10->field_0x30 + 0x10) = 0;
    *(undefined8 *)(&pFVar10->field_0x30 + 0x18) = 0;
    pFVar14 = pFVar10;
  }
  local_res8 = pFVar14;
  if (*(int *)(&pFVar14->field_0x30 + 0x1c) < 3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,3,(ForAnyElementType *)(&pFVar14->field_0x30 + 0x10),
               *(int *)(&pFVar14->field_0x30 + 0x18),(int *)(&pFVar14->field_0x30 + 0x1c));
  }
  local_38 = &local_78;
  local_30 = &local_res8;
  local_60 = &local_38;
  local_68 = UE::Core::Private::Function::
             TFunctionRefCaller<`FVulkanDynamicRHI::InitializeSubmissionPipe'::__l12::<lambda_1>,void,FVulkanQueue_&>
             ::Call;
  local_28 = this;
  FVulkanDevice::ForEachQueue(this->Device,(TFunctionRef<void___cdecl(FVulkanQueue_&)> *)&local_68);
  iStack_50 = (int)local_70;
  local_58 = local_78;
  if (((int)local_70 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_48._12_4_ = uStack_4c;
  local_48.ArrayNum = iStack_50;
  local_48.DataPtr = local_58;
  UE::RHI::GPUProfiler::InitializeQueues(&local_48);
  pTVar2 = &this->PendingPayloadsForSubmission;
  pTVar15 = ::operator_new(0x10);
  if (pTVar15 != (TNode *)0x0) {
    pTVar15->NextNode = (TNode *)0x0;
    pTVar15->Item = local_res8;
    if (((ulonglong)pTVar2 & 7) != 0) {
      FWindowsPlatformAtomics::HandleAtomicsFailure
                (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
    }
    LOCK();
    pTVar4 = pTVar2->Head;
    pTVar2->Head = pTVar15;
    UNLOCK();
    if (((ulonglong)pTVar4 & 7) != 0) {
      FWindowsPlatformAtomics::HandleAtomicsFailure
                (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
    }
    LOCK();
    pTVar4->NextNode = pTVar15;
    UNLOCK();
  }
  if (local_78 != (FQueue *)0x0) {
    FMemory::Free(local_78);
  }
  return;
}

// InternalUpdateTexture2D @ 145bb0940

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
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */

void __thiscall
FVulkanDynamicRHI::InternalUpdateTexture2D
          (FVulkanDynamicRHI *this,FRHICommandListBase *param_1,FRHITexture *param_2,uint param_3,
          FUpdateTextureRegion2D *param_4,uint param_5,uchar *param_6)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  FRHITexture *pFVar4;
  FStagingBuffer *pFVar5;
  bool bVar6;
  longlong lVar7;
  void *_Dst;
  FVulkanTexture *pFVar8;
  IRHICommandContext *pIVar9;
  FRHICommandBase *pFVar10;
  int iVar11;
  FVulkanContextCommon *pFVar12;
  int iVar13;
  uchar *_Src;
  ulonglong uVar14;
  int iVar15;
  ulonglong uVar16;
  longlong lVar17;
  undefined1 auStackY_158 [32];
  FLLMScope local_128;
  uint local_124;
  uint local_120;
  int local_11c;
  uint local_118;
  FRHICommandBase *local_110;
  longlong lStack_108;
  undefined4 local_100;
  uint uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  uint local_f0;
  uint uStack_ec;
  undefined4 uStack_e8;
  uint uStack_e4;
  uint local_e0;
  undefined4 uStack_dc;
  uchar *local_d8;
  longlong local_d0;
  FRHICommandListBase *local_c8;
  FUpdateTextureRegion2D *local_c0;
  FRHITexture *local_b8;
  FStagingBuffer *local_b0;
  FMemScope local_a8 [2];
  FVulkanTexture *local_98;
  undefined1 auStack_90 [24];
  longlong lStack_78;
  FRHICommandBase *local_70;
  longlong lStack_68;
  FRHICommandBase *local_60;
  FStagingBuffer *local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_158;
  local_124 = param_5;
  local_d8 = param_6;
  local_c0 = param_4;
  local_118 = param_3;
  local_c8 = param_1;
  local_b8 = param_2;
  FLLMScope::FLLMScope(&local_128,VideoRecording|ThreadStackPlatform,false,None,Default,true);
  FMemScope::FMemScope(local_a8,VideoRecording|ThreadStackPlatform,true);
  lVar7 = (**(code **)(param_2->_padding_ + 0x20))(param_2);
  uVar14 = (ulonglong)*(byte *)(lVar7 + 0x33);
  local_d0 = uVar14 * 0x30;
  if ((param_4->Width % (uint)GPixelFormats[uVar14].BlockSizeX != 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("UpdateRegion.Width % FormatInfo.BlockSizeX == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                         ,0x6c9,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((param_4->Height % (uint)GPixelFormats[uVar14].BlockSizeY != 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("UpdateRegion.Height % FormatInfo.BlockSizeY == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                         ,0x6ca,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((param_4->DestX % (uint)GPixelFormats[uVar14].BlockSizeX != 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("UpdateRegion.DestX % FormatInfo.BlockSizeX == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                         ,0x6cb,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((param_4->DestY % (uint)GPixelFormats[uVar14].BlockSizeY != 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("UpdateRegion.DestY % FormatInfo.BlockSizeY == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                         ,0x6cc,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((param_4->SrcX % GPixelFormats[uVar14].BlockSizeX != 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("UpdateRegion.SrcX % FormatInfo.BlockSizeX == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                         ,0x6cd,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((param_4->SrcY % GPixelFormats[uVar14].BlockSizeY != 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("UpdateRegion.SrcY % FormatInfo.BlockSizeY == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                         ,0x6ce,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar1 = GPixelFormats[uVar14].BlockSizeX;
  uVar2 = GPixelFormats[uVar14].BlockSizeY;
  iVar11 = param_4->SrcX;
  iVar13 = param_4->SrcY;
  uVar16 = (ulonglong)((param_4->Width - 1) + uVar1) / (ulonglong)uVar1;
  local_11c = (int)uVar16;
  local_120 = ((param_4->Height - 1) + uVar2) / uVar2;
  lVar17 = (longlong)GPixelFormats[uVar14].BlockBytes * uVar16;
  iVar15 = (int)(this->Device->GpuProps).limits.minMemoryMapAlignment;
  local_b0 = VulkanRHI::FStagingManager::AcquireBuffer
                       (&this->Device->StagingManager,
                        iVar15 + -1 + local_120 * (int)lVar17 & -iVar15,1,
                        VK_MEMORY_PROPERTY_HOST_COHERENT_BIT);
  _Dst = VulkanRHI::FStagingBuffer::GetMappedPointer(local_b0);
  lVar7 = local_d0;
  iVar15 = local_11c;
  _Src = local_d8 +
         (ulonglong)(((iVar13 + -1 + uVar2) / uVar2) * local_124) +
         (ulonglong)(((iVar11 + -1 + uVar1) / uVar1) * GPixelFormats[uVar14].BlockBytes);
  if (local_120 != 0) {
    uVar16 = (ulonglong)local_124;
    uVar14 = (ulonglong)local_120;
    do {
      memcpy(_Dst,_Src,
             (ulonglong)(uint)(iVar15 * *(int *)((longlong)&GPixelFormats[0].BlockBytes + lVar7)));
      _Src = _Src + uVar16;
      _Dst = (void *)((longlong)_Dst + lVar17);
      uVar14 = uVar14 - 1;
      param_1 = local_c8;
      param_4 = local_c0;
    } while (uVar14 != 0);
  }
  pFVar4 = local_b8;
  lVar7 = (**(code **)(local_b8->_padding_ + 0x20))(local_b8);
  uStack_fc = local_118;
  local_f0 = param_4->DestX;
  uStack_ec = param_4->DestY;
  iVar13 = *(int *)(lVar7 + 0x24) >> ((byte)local_118 & 0x1f);
  iVar15 = *(int *)(lVar7 + 0x28) >> ((byte)local_118 & 0x1f);
  local_110 = (FRHICommandBase *)0x0;
  iVar11 = 1;
  if (1 < iVar13) {
    iVar11 = iVar13;
  }
  lStack_108 = 0;
  uStack_f8 = 0;
  uStack_e4 = iVar11 - local_f0;
  if (param_4->Width < iVar11 - local_f0) {
    uStack_e4 = param_4->Width;
  }
  iVar11 = 1;
  if (1 < iVar15) {
    iVar11 = iVar15;
  }
  uStack_e8 = 0;
  local_100 = 1;
  uStack_f4 = 1;
  local_e0 = iVar11 - uStack_ec;
  if (param_4->Height < iVar11 - uStack_ec) {
    local_e0 = param_4->Height;
  }
  uStack_dc = 1;
  pFVar8 = (FVulkanTexture *)(**(code **)(pFVar4->_padding_ + 0x48))(pFVar4);
  pFVar5 = local_b0;
  auStack_90._16_8_ = CONCAT44(uStack_fc,local_100);
  lStack_78 = CONCAT44(uStack_f4,uStack_f8);
  auStack_90._0_8_ = local_110;
  auStack_90._8_8_ = lStack_108;
  local_58 = local_b0;
  local_70 = (FRHICommandBase *)CONCAT44(uStack_ec,local_f0);
  lStack_68 = CONCAT44(uStack_e4,uStack_e8);
  local_60 = (FRHICommandBase *)CONCAT44(uStack_dc,local_e0);
  local_98 = pFVar8;
  if (((GRHICommandList.bLatchedBypass == false) || ((param_1->PersistentState).bImmediate == '\0'))
     && (param_1->bExecuting == false)) {
    pFVar10 = FMemStackBase::Alloc(&param_1->MemManager,0x60,8);
    param_1->NumCommands = param_1->NumCommands + 1;
    *param_1->CommandLink = pFVar10;
    param_1->CommandLink = &pFVar10->Next;
    pFVar10->Next = (FRHICommandBase *)0x0;
    pFVar10->_padding_ =
         (longlong)
         &TRHILambdaCommand<FRHICommandListBase,`FVulkanDynamicRHI::InternalUpdateTexture2D'::`2'::<lambda_1>_>
          ::_vftable_;
    pFVar10[1]._padding_ = (longlong)local_98;
    pFVar10[1].Next = (FRHICommandBase *)auStack_90._0_8_;
    pFVar10[2]._padding_ = auStack_90._8_8_;
    pFVar10[2].Next = (FRHICommandBase *)auStack_90._16_8_;
    pFVar10[3]._padding_ = lStack_78;
    pFVar10[3].Next = local_70;
    pFVar10[4]._padding_ = lStack_68;
    pFVar10[4].Next = local_60;
    pFVar10[5]._padding_ = (longlong)local_58;
    pFVar10[5].Next = (FRHICommandBase *)L"FVulkanTexture::InternalLockWrite";
  }
  else {
    pIVar9 = FRHICommandListBase::GetContext(param_1);
    lVar7 = (**(code **)(pIVar9->_padding_ + 0x148))(pIVar9);
    pFVar12 = (FVulkanContextCommon *)(lVar7 + -0x50);
    if (lVar7 == 0) {
      pFVar12 = (FVulkanContextCommon *)0x0;
    }
    FVulkanTexture::InternalLockWrite(pFVar12,pFVar8,(VkBufferImageCopy *)auStack_90,pFVar5);
  }
  FMemScope::~FMemScope(local_a8);
  FLLMScope::~FLLMScope(&local_128);
  return;
}

// InternalUpdateTexture3D @ 145bb0e00

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
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */

void __thiscall
FVulkanDynamicRHI::InternalUpdateTexture3D
          (FVulkanDynamicRHI *this,FRHICommandListBase *param_1,FRHITexture *param_2,uint param_3,
          FUpdateTextureRegion3D *param_4,uint param_5,uint param_6,uchar *param_7)

{
  char cVar1;
  int iVar2;
  FVulkanDevice *pFVar3;
  ulonglong uVar4;
  code *pcVar5;
  FVulkanDynamicRHI *pFVar6;
  FRHITexture *pFVar7;
  FVulkanTexture *pFVar8;
  bool bVar9;
  longlong lVar10;
  void *_Dst;
  FRHICommandBase *pFVar11;
  IRHICommandContext *pIVar12;
  byte bVar13;
  FVulkanContextCommon *pFVar14;
  uchar *_Src;
  ulonglong _Size;
  int iVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  ulonglong uVar21;
  undefined1 auStackY_148 [32];
  FLLMScope local_114;
  uint local_110;
  uint local_10c;
  FVulkanDynamicRHI *local_108;
  FRHICommandBase *local_100;
  longlong lStack_f8;
  undefined4 local_f0;
  uint uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  uint local_e0;
  uint uStack_dc;
  uint uStack_d8;
  uint uStack_d4;
  uint local_d0;
  uint uStack_cc;
  uchar *local_c8;
  FUpdateTextureRegion3D *local_c0;
  FRHICommandListBase *local_b8;
  FRHITexture *local_b0;
  FVulkanTexture *local_a8;
  FMemScope local_a0;
  FVulkanTexture *local_98;
  undefined1 auStack_90 [24];
  longlong lStack_78;
  FRHICommandBase *local_70;
  longlong lStack_68;
  FRHICommandBase *local_60;
  FStagingBuffer *local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_148;
  local_c8 = param_7;
  local_c0 = param_4;
  local_10c = param_3;
  local_108 = this;
  local_b8 = param_1;
  local_b0 = param_2;
  FLLMScope::FLLMScope(&local_114,VideoRecording|ThreadStackPlatform,false,None,Default,true);
  FMemScope::FMemScope(&local_a0,VideoRecording|ThreadStackPlatform,true);
  local_a8 = (FVulkanTexture *)(**(code **)(param_2->_padding_ + 0x48))(param_2);
  lVar10 = (**(code **)(local_a8->_padding_ + 0x20))(local_a8);
  bVar13 = *(byte *)(lVar10 + 0x33);
  iVar15 = GPixelFormats[bVar13].BlockSizeX;
  iVar18 = GPixelFormats[bVar13].BlockSizeY;
  iVar2 = GPixelFormats[bVar13].BlockBytes;
  if ((GPixelFormats[bVar13].BlockSizeZ != 1) &&
     (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_5704882760083044580>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                         ,0x71c,"BlockSizeZ == 1"), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar3 = this->Device;
  local_100 = (FRHICommandBase *)0x0;
  lStack_f8 = 0;
  uStack_e8 = 0;
  iVar15 = (int)((param_4->Width - 1) + iVar15) / iVar15;
  uVar4 = (longlong)(int)((param_4->Height - 1) + iVar18) / (longlong)iVar18;
  uVar19 = iVar15 * iVar2;
  local_110 = uVar19;
  if ((param_5 < uVar19) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumBlocksX * BlockBytes <= SourceRowPitch",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                         ,0x725,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar18 = (int)uVar4;
  if ((param_6 < (uint)(iVar18 * iVar15 * iVar2)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumBlocksX * BlockBytes * NumBlocksY <= SourceDepthPitch",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                         ,0x726,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar15 = (int)(pFVar3->GpuProps).limits.minMemoryMapAlignment;
  local_108 = (FVulkanDynamicRHI *)
              VulkanRHI::FStagingManager::AcquireBuffer
                        (&local_108->Device->StagingManager,
                         iVar15 + -1 + uVar19 * param_4->Depth * iVar18 & -iVar15,1,
                         VK_MEMORY_PROPERTY_HOST_COHERENT_BIT);
  _Dst = VulkanRHI::FStagingBuffer::GetMappedPointer((FStagingBuffer *)local_108);
  if ((param_4->SrcX != 0) &&
     (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_5704882760083044561>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                         ,0x72f,"UpdateRegion.SrcX == 0"), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((param_4->SrcY != 0) &&
     (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_5704882760083044560>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                         ,0x730,"UpdateRegion.SrcY == 0"), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar17 = 0;
  if (param_4->Depth != 0) {
    do {
      _Src = local_c8 + param_6 * uVar17;
      if (iVar18 != 0) {
        _Size = (ulonglong)uVar19;
        uVar21 = uVar4 & 0xffffffff;
        do {
          memcpy(_Dst,_Src,_Size);
          _Dst = (void *)((longlong)_Dst + _Size);
          _Src = _Src + param_5;
          uVar21 = uVar21 - 1;
          uVar19 = local_110;
        } while (uVar21 != 0);
      }
      uVar17 = uVar17 + 1;
      param_4 = local_c0;
      param_1 = local_b8;
    } while (uVar17 < local_c0->Depth);
  }
  pFVar7 = local_b0;
  lVar10 = (**(code **)(local_b0->_padding_ + 0x20))(local_b0);
  uVar19 = local_10c;
  bVar13 = (byte)local_10c;
  uVar17 = *(uint *)(lVar10 + 0x24) >> (bVar13 & 0x1f);
  if (uVar17 == 0) {
    uVar17 = 1;
  }
  lVar10 = (**(code **)(pFVar7->_padding_ + 0x20))(pFVar7);
  uVar20 = *(uint *)(lVar10 + 0x28) >> (bVar13 & 0x1f);
  if (uVar20 == 0) {
    uVar20 = 1;
  }
  lVar10 = (**(code **)(pFVar7->_padding_ + 0x20))(pFVar7);
  pFVar8 = local_a8;
  pFVar6 = local_108;
  cVar1 = *(char *)(lVar10 + 0x32);
  if (cVar1 == '\0') {
LAB_145bb1134:
    uVar16 = 1;
  }
  else {
    if (cVar1 != '\x01') {
      if (cVar1 == '\x02') {
        uVar16 = (uint)*(ushort *)(lVar10 + 0x2c);
        goto LAB_145bb113a;
      }
      if (cVar1 == '\x03') goto LAB_145bb1134;
      if (cVar1 != '\x04') {
        uVar16 = 0;
        goto LAB_145bb113a;
      }
    }
    uVar16 = (uint)*(ushort *)(lVar10 + 0x2e);
  }
LAB_145bb113a:
  local_e0 = param_4->DestX;
  uStack_dc = param_4->DestY;
  local_70 = *(FRHICommandBase **)param_4;
  uStack_d8 = param_4->DestZ;
  uVar16 = uVar16 >> (bVar13 & 0x1f);
  uStack_d4 = param_4->Width;
  if ((int)(uVar17 - local_e0) < (int)param_4->Width) {
    uStack_d4 = uVar17 - local_e0;
  }
  local_f0 = 1;
  uStack_ec = uVar19;
  local_d0 = param_4->Height;
  if ((int)(uVar20 - uStack_dc) < (int)param_4->Height) {
    local_d0 = uVar20 - uStack_dc;
  }
  uStack_e4 = 1;
  auStack_90._16_8_ = CONCAT44(uVar19,1);
  lStack_78 = CONCAT44(1,uStack_e8);
  if (uVar16 == 0) {
    uVar16 = 1;
  }
  uStack_cc = param_4->Depth;
  if ((int)(uVar16 - uStack_d8) < (int)param_4->Depth) {
    uStack_cc = uVar16 - uStack_d8;
  }
  local_98 = local_a8;
  auStack_90._0_8_ = local_100;
  auStack_90._8_8_ = lStack_f8;
  lStack_68 = CONCAT44(uStack_d4,uStack_d8);
  local_58 = (FStagingBuffer *)local_108;
  local_60 = (FRHICommandBase *)CONCAT44(uStack_cc,local_d0);
  if (((GRHICommandList.bLatchedBypass == false) || ((param_1->PersistentState).bImmediate == '\0'))
     && (param_1->bExecuting == false)) {
    pFVar11 = FMemStackBase::Alloc(&param_1->MemManager,0x60,8);
    param_1->NumCommands = param_1->NumCommands + 1;
    *param_1->CommandLink = pFVar11;
    param_1->CommandLink = &pFVar11->Next;
    pFVar11->Next = (FRHICommandBase *)0x0;
    pFVar11->_padding_ =
         (longlong)
         &TRHILambdaCommand<FRHICommandListBase,`FVulkanDynamicRHI::InternalUpdateTexture3D'::`2'::<lambda_1>_>
          ::_vftable_;
    pFVar11[1]._padding_ = (longlong)local_98;
    pFVar11[1].Next = (FRHICommandBase *)auStack_90._0_8_;
    pFVar11[2]._padding_ = auStack_90._8_8_;
    pFVar11[2].Next = (FRHICommandBase *)auStack_90._16_8_;
    pFVar11[3]._padding_ = lStack_78;
    pFVar11[3].Next = local_70;
    pFVar11[4]._padding_ = lStack_68;
    pFVar11[4].Next = local_60;
    pFVar11[5]._padding_ = (longlong)local_58;
    pFVar11[5].Next = (FRHICommandBase *)L"FVulkanTexture::InternalLockWrite";
  }
  else {
    pIVar12 = FRHICommandListBase::GetContext(param_1);
    lVar10 = (**(code **)(pIVar12->_padding_ + 0x148))(pIVar12);
    pFVar14 = (FVulkanContextCommon *)(lVar10 + -0x50);
    if (lVar10 == 0) {
      pFVar14 = (FVulkanContextCommon *)0x0;
    }
    FVulkanTexture::InternalLockWrite
              (pFVar14,pFVar8,(VkBufferImageCopy *)auStack_90,(FStagingBuffer *)pFVar6);
  }
  FMemScope::~FMemScope(&local_a0);
  FLLMScope::~FLLMScope(&local_114);
  return;
}

// IsInInterruptThread @ 145bb1300

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

bool __thiscall FVulkanDynamicRHI::IsInInterruptThread(FVulkanDynamicRHI *this)

{
  DWORD DVar1;
  
  DVar1 = GetCurrentThreadId();
  if (this->InterruptThread != (FVulkanThread *)0x0) {
    return DVar1 == this->InterruptThread->Thread->ThreadID;
  }
  return DVar1 == this->InterruptThreadID;
}

// KickInterruptThread @ 145bb13d0

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

void __thiscall FVulkanDynamicRHI::KickInterruptThread(FVulkanDynamicRHI *this)

{
  atomic<unsigned___int64> *paVar1;
  atomic<unsigned___int64> aVar2;
  VkSemaphore_T *pVVar3;
  VkResult VVar4;
  VkSemaphoreSignalInfo local_28;
  
  if (this->InterruptThread != (FVulkanThread *)0x0) {
    local_28.sType = VK_STRUCTURE_TYPE_SEMAPHORE_SIGNAL_INFO;
    local_28._4_8_ = 0;
    local_28.pNext._4_4_ = 0;
    pVVar3 = this->CPUTimelineSemaphore->SemaphoreHandle;
    local_28.semaphore._0_4_ = SUB84(pVVar3,0);
    local_28.semaphore._4_4_ = (undefined4)((ulonglong)pVVar3 >> 0x20);
    LOCK();
    paVar1 = &this->CPUTimelineSemaphoreValue;
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + 1);
    UNLOCK();
    local_28.value._0_4_ = aVar2._0_4_;
    local_28.value._4_4_ = aVar2._4_4_;
    VVar4 = (*VulkanDynamicAPI::vkSignalSemaphoreKHR)(this->Device->Device,&local_28);
    if (VVar4 != VK_SUCCESS) {
      VulkanRHI::VerifyVulkanResult
                (VVar4,"VulkanRHI::vkSignalSemaphoreKHR(Device->GetHandle(), &SignalInfo)",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanSubmission.cpp"
                 ,0xe4);
    }
    (**(code **)(this->InterruptThread->Event->_padding_ + 0x10))();
  }
  return;
}

// KickSubmissionThread @ 145bb1480

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

void __thiscall FVulkanDynamicRHI::KickSubmissionThread(FVulkanDynamicRHI *this,bool param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  bool bVar1;
  
  if (this->SubmissionThread != (FVulkanThread *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145bb14a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->SubmissionThread->Event->_padding_ + 0x10))();
    return;
  }
  if ((!param_1) && (bVar1 = FVulkanDevice::UseMinimalSubmits(this->Device), bVar1)) {
    return;
  }
  lpCriticalSection = &this->SubmissionCS;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    do {
      bVar1 = ProcessSubmissionQueue(this);
    } while (bVar1);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// PostInit @ 145bb27f0

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
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FVulkanDynamicRHI::PostInit(FVulkanDynamicRHI *this)

{
  if (GRHIGlobals.RayTracing.Supported) {
    FVulkanDevice::InitializeRayTracing(this->Device);
    return;
  }
  return;
}

// ProcessInterruptQueue @ 145bb3190

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

bool __thiscall FVulkanDynamicRHI::ProcessInterruptQueue(FVulkanDynamicRHI *this)

{
  undefined1 uVar1;
  bool bVar2;
  undefined1 local_res8 [8];
  undefined1 *local_res10;
  code *local_18;
  undefined1 **local_10;
  
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Magenta,"ProcessInterruptQueue");
  bVar2 = -1 < CpuChannel->Enabled;
  if (bVar2) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId487,"ProcessInterruptQueue",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanSubmission.cpp"
               ,0x1e7);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId487);
  }
  local_res10 = local_res8;
  local_10 = &local_res10;
  local_res8[0] = 0;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`FVulkanDynamicRHI::ProcessInterruptQueue'::__l2::<lambda_1>,void,FVulkanQueue_&>
             ::Call;
  FVulkanDevice::ForEachQueue(this->Device,(TFunctionRef<void___cdecl(FVulkanQueue_&)> *)&local_18);
  if (GIsGPUCrashed != false) {
    TerminateOnGPUCrash(this,L"ProcessInterruptQueue");
  }
  uVar1 = local_res8[0];
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return (bool)uVar1;
}

// ProcessInterruptQueueOnGPUCrash @ 145bb3270

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

void __thiscall FVulkanDynamicRHI::ProcessInterruptQueueOnGPUCrash(FVulkanDynamicRHI *this)

{
  DWORD DVar1;
  
  if (this->InterruptThread != (FVulkanThread *)0x0) {
    (**(code **)(this->InterruptThread->Event->_padding_ + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x000145bb32a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->InterruptThread->Thread->_padding_ + 0x20))();
    return;
  }
  if (&this->InterruptCS != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&this->InterruptCS);
    DVar1 = GetCurrentThreadId();
    this->InterruptThreadID = DVar1;
    do {
      ProcessInterruptQueue(this);
    } while( true );
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// ProcessInterruptQueueUntil @ 145bb32e0

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

void __thiscall
FVulkanDynamicRHI::ProcessInterruptQueueUntil(FVulkanDynamicRHI *this,FBaseGraphTask *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  char cVar1;
  uint uVar2;
  bool bVar3;
  BOOL BVar4;
  DWORD DVar5;
  uint *puVar6;
  FTlsAutoCleanup *pFVar7;
  undefined1 local_res8 [8];
  FScopeIdle local_res18;
  LARGE_INTEGER local_res20;
  code *local_28;
  undefined1 *local_20;
  
  if (this->InterruptThread == (FVulkanThread *)0x0) {
    if (param_1 == (FBaseGraphTask *)0x0) {
      do {
        BVar4 = TryEnterCriticalSection((LPCRITICAL_SECTION)&this->InterruptCS);
        if (BVar4 == 0) {
          return;
        }
        DVar5 = GetCurrentThreadId();
        uVar2 = this->InterruptThreadID;
        this->InterruptThreadID = DVar5;
        bVar3 = ProcessInterruptQueue(this);
        LeaveCriticalSection((LPCRITICAL_SECTION)&this->InterruptCS);
        this->InterruptThreadID = uVar2;
      } while (bVar3);
    }
    else {
      bVar3 = FVulkanDevice::UseMinimalSubmits(this->Device);
      if (bVar3) {
        if (this->SubmissionThread == (FVulkanThread *)0x0) {
          lpCriticalSection = &this->SubmissionCS;
          if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::ReportNotNullPtr();
          }
          EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
          do {
            bVar3 = ProcessSubmissionQueue(this);
          } while (bVar3);
          LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        }
        else {
          (**(code **)(this->SubmissionThread->Event->_padding_ + 0x10))();
        }
      }
      UE::Stats::FThreadIdleStats::FScopeIdle::FScopeIdle(&local_res18,false);
      cVar1 = param_1->field_0xd0;
      while (cVar1 == '\0') {
        BVar4 = TryEnterCriticalSection((LPCRITICAL_SECTION)&this->InterruptCS);
        if (BVar4 == 0) {
          FWindowsPlatformProcess::SleepNoStats(0.0);
        }
        else {
          DVar5 = GetCurrentThreadId();
          uVar2 = this->InterruptThreadID;
          this->InterruptThreadID = DVar5;
          WaitAndProcessInterruptQueue(this);
          LeaveCriticalSection((LPCRITICAL_SECTION)&this->InterruptCS);
          this->InterruptThreadID = uVar2;
        }
        cVar1 = param_1->field_0xd0;
      }
      if (local_res18.bIgnore == false) {
        puVar6 = TThreadSingleton<UE::Stats::FThreadIdleStats>::GetTlsSlot();
        local_20 = local_res8;
        local_28 = UE::Core::Private::Function::
                   TFunctionRefCaller<`TThreadSingleton<UE::Stats::FThreadIdleStats>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                   ::Call;
        pFVar7 = FThreadSingletonInitializer::Get
                           ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_28,puVar6);
        QueryPerformanceCounter(&local_res20);
        *(DWORD *)(pFVar7 + 2) = *(int *)(pFVar7 + 2) + (local_res20.s.LowPart - local_res18.Start);
        if (0 < *(int *)(pFVar7 + 3)) {
          *(DWORD *)&pFVar7[2].field_0x4 =
               *(int *)&pFVar7[2].field_0x4 + (local_res20.s.LowPart - local_res18.Start);
        }
        pFVar7[3].field_0x4 = 0;
      }
      if (local_res18.TraceEventScope.bEnabled != false) {
        FCpuProfilerTrace::OutputEndEvent();
        return;
      }
    }
  }
  else if ((param_1 != (FBaseGraphTask *)0x0) && (param_1->field_0xd0 == '\0')) {
    FBaseGraphTask::Wait(param_1,AnyNormalThreadNormalTask);
    return;
  }
  return;
}

// ProcessInterruptQueueUntil @ 145bb34e0

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

void __thiscall
FVulkanDynamicRHI::ProcessInterruptQueueUntil
          (FVulkanDynamicRHI *this,TRefCountPtr<FVulkanSyncPoint> param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  code *pcVar5;
  bool bVar6;
  
  if ((param_1.Reference)->_padding_ == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("SyncPoint.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanSubmission.cpp"
                       ,0x1f9,L"Waiting on invalid sync point.");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  lVar3 = (param_1.Reference)->_padding_;
  if (*(longlong *)(lVar3 + 0x10) == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("GraphEvent",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanSubmission.h"
                       ,0x5d,L"This sync point was not created with a CPU event.");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  ProcessInterruptQueueUntil(this,*(FBaseGraphTask **)(lVar3 + 0x10));
  puVar4 = (undefined8 *)(param_1.Reference)->_padding_;
  if (puVar4 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar4 + 1);
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (piVar1 != (int *)0x0)) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  return;
}

// ProcessSubmissionQueue @ 145bb35a0

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

bool __thiscall FVulkanDynamicRHI::ProcessSubmissionQueue(FVulkanDynamicRHI *this)

{
  atomic<unsigned___int64> *paVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  atomic<unsigned___int64> aVar4;
  int iVar5;
  TNode *pTVar6;
  FVulkanPlatformCommandList *_Src;
  TNode *pTVar7;
  longlong *plVar8;
  VkSemaphore_T *pVVar9;
  code *pcVar10;
  longlong lVar11;
  bool bVar12;
  FSharedReferencer<1> FVar13;
  bool bVar14;
  undefined1 uVar15;
  VkResult VVar16;
  TReferenceControllerBase<1> *pTVar17;
  undefined8 *puVar18;
  FVulkanPlatformCommandList *pFVar19;
  undefined8 *puVar20;
  longlong *plVar21;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  TReferenceControllerBase<1> *local_b8;
  FSharedReferencer<1> FStack_b0;
  undefined8 local_a8;
  FSharedReferencer<1> local_a0;
  undefined1 *local_98;
  TMap<VkSemaphore_T_*,FBinarySemaphoreSignalInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<VkSemaphore_T_*,FBinarySemaphoreSignalInfo,0>_>
  *local_90;
  code *local_88;
  undefined1 **local_80;
  longlong local_78;
  TReferenceControllerBase<1> *pTStack_70;
  VkSemaphoreSignalInfo local_68;
  
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Orange,"ProcessSubmissionQueue");
  if (CpuChannel->Enabled < 0) {
    bVar12 = false;
  }
  else {
    bVar12 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId338,"ProcessSubmissionQueue",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanSubmission.cpp"
               ,0x152);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId338);
  }
  do {
    pTVar6 = ((this->PendingPayloadsForSubmission).Tail)->NextNode;
    if (pTVar6 == (TNode *)0x0) {
      local_98 = local_res18;
      local_90 = &this->SignaledSemaphores;
      local_res18[0] = 0;
      local_80 = &local_98;
      local_88 = UE::Core::Private::Function::
                 TFunctionRefCaller<`FVulkanDynamicRHI::ProcessSubmissionQueue'::__l2::<lambda_1>,void,FVulkanQueue_&>
                 ::Call;
      FVulkanDevice::ForEachQueue
                (this->Device,(TFunctionRef<void___cdecl(FVulkanQueue_&)> *)&local_88);
      if (this->InterruptThread != (FVulkanThread *)0x0) {
        local_68.sType = VK_STRUCTURE_TYPE_SEMAPHORE_SIGNAL_INFO;
        local_68._4_8_ = 0;
        local_68.pNext._4_4_ = 0;
        pVVar9 = this->CPUTimelineSemaphore->SemaphoreHandle;
        local_68.semaphore._0_4_ = SUB84(pVVar9,0);
        local_68.semaphore._4_4_ = (undefined4)((ulonglong)pVVar9 >> 0x20);
        LOCK();
        paVar1 = &this->CPUTimelineSemaphoreValue;
        aVar4 = *paVar1;
        *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + 1);
        UNLOCK();
        local_68.value._0_4_ = aVar4._0_4_;
        local_68.value._4_4_ = aVar4._4_4_;
        VVar16 = (*VulkanDynamicAPI::vkSignalSemaphoreKHR)(this->Device->Device,&local_68);
        if (VVar16 != VK_SUCCESS) {
          VulkanRHI::VerifyVulkanResult
                    (VVar16,"VulkanRHI::vkSignalSemaphoreKHR(Device->GetHandle(), &SignalInfo)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanSubmission.cpp"
                     ,0xe4);
        }
        (**(code **)(this->InterruptThread->Event->_padding_ + 0x10))();
      }
      uVar15 = local_res18[0];
      if (bVar12) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      FGenericPlatformMisc::EndNamedEvent();
      return (bool)uVar15;
    }
    _Src = pTVar6->Item;
    pTVar7 = (this->PendingPayloadsForSubmission).Tail;
    (this->PendingPayloadsForSubmission).Tail = pTVar6;
    pTVar6->Item = (FVulkanPlatformCommandList *)0x0;
    ::operator_delete(pTVar7,0x10);
    local_b8 = (TReferenceControllerBase<1> *)0x0;
    FStack_b0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (*(int *)&_Src->field_0x28 != 0) {
      pTVar17 = ::operator_new(0x40);
      if (pTVar17 == (TReferenceControllerBase<1> *)0x0) {
        local_a0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        local_b8 = (TReferenceControllerBase<1> *)&DAT_00000010;
      }
      else {
        pTVar17->SharedReferenceCount = (atomic<int>)0x1;
        pTVar17->WeakReferenceCount = (atomic<int>)0x1;
        pTVar17->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_VFRHIBreadcrumbAllocatorArray___00_SharedPointerInternals__6B_
        ;
        pTVar17[3]._padding_ = 0;
        if (*(longlong *)&_Src->field_0x20 == 0) {
          memmove(pTVar17 + 1,_Src,0x20);
        }
        if ((void *)pTVar17[3]._padding_ != (void *)0x0) {
          FMemory::Free((void *)pTVar17[3]._padding_);
        }
        local_b8 = pTVar17 + 1;
        pTVar17[3]._padding_ = *(longlong *)&_Src->field_0x20;
        *(undefined8 *)&_Src->field_0x20 = 0;
        pTVar17[3].SharedReferenceCount = *(atomic<int> *)&_Src->field_0x28;
        pTVar17[3].WeakReferenceCount = *(atomic<int> *)&_Src->field_0x2c;
        *(undefined4 *)&_Src->field_0x28 = 0;
        *(undefined4 *)&_Src->field_0x2c = 2;
        if (local_b8 == (TReferenceControllerBase<1> *)0x0) {
          bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("InObject != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x246,L"");
          if (bVar14) {
            pcVar10 = (code *)swi(3);
            uVar15 = (*pcVar10)();
            return (bool)uVar15;
          }
        }
        LOCK();
        pTVar17->SharedReferenceCount = (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
        UNLOCK();
        local_a0.ReferenceController = pTVar17;
      }
      FVar13.ReferenceController = local_a0.ReferenceController;
      local_a8 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_b0,&local_a0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_a0.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar13.ReferenceController);
    }
    plVar21 = *(longlong **)&_Src->field_0x40;
    iVar5 = *(int *)&_Src->field_0x48;
    plVar2 = plVar21 + iVar5;
    while( true ) {
      if (*(int *)&_Src->field_0x48 != iVar5) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<FVulkanPayload_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res20);
      }
      if (plVar21 == plVar2) break;
      plVar8 = (longlong *)*plVar21;
      lVar11 = *(longlong *)&_Src->field_0x38;
      plVar8[0x20] = *(longlong *)&_Src->field_0x30;
      plVar8[0x21] = lVar11;
      if (local_b8 != (TReferenceControllerBase<1> *)0x0) {
        if (plVar8[0x22] != 0) {
          bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("!Payload->BreadcrumbAllocators.IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanSubmission.cpp"
                              ,0x165,L"");
          if (bVar14) {
            pcVar10 = (code *)swi(3);
            uVar15 = (*pcVar10)();
            return (bool)uVar15;
          }
        }
        if (FStack_b0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (FStack_b0.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(FStack_b0.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_78 = plVar8[0x22];
        pTStack_70 = (TReferenceControllerBase<1> *)plVar8[0x23];
        plVar8[0x22] = (longlong)local_b8;
        plVar8[0x23] = (longlong)FStack_b0.ReferenceController;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_70);
      }
      puVar20 = (undefined8 *)(*plVar8 + 0xb0);
      puVar18 = ::operator_new(0x10);
      if (puVar18 != (undefined8 *)0x0) {
        *puVar18 = 0;
        puVar18[1] = plVar8;
        if (((ulonglong)puVar20 & 7) != 0) {
          FWindowsPlatformAtomics::HandleAtomicsFailure
                    (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
        }
        LOCK();
        puVar3 = (undefined8 *)*puVar20;
        *puVar20 = puVar18;
        UNLOCK();
        if (((ulonglong)puVar3 & 7) != 0) {
          FWindowsPlatformAtomics::HandleAtomicsFailure
                    (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
        }
        LOCK();
        *puVar3 = puVar18;
        UNLOCK();
      }
      plVar21 = plVar21 + 1;
    }
    if (*(void **)&_Src->field_0x40 != (void *)0x0) {
      FMemory::Free(*(void **)&_Src->field_0x40);
    }
    pFVar19 = _Src;
    if (*(FVulkanPlatformCommandList **)&_Src->field_0x20 != (FVulkanPlatformCommandList *)0x0) {
      pFVar19 = *(FVulkanPlatformCommandList **)&_Src->field_0x20;
    }
    DestructItems<TSharedRef<FRHIBreadcrumbAllocator,1>,int>
              ((TSharedRef<FRHIBreadcrumbAllocator,1> *)pFVar19,*(int *)&_Src->field_0x28);
    if (*(void **)&_Src->field_0x20 != (void *)0x0) {
      FMemory::Free(*(void **)&_Src->field_0x20);
    }
    ::operator_delete(_Src,0x50);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_b0.ReferenceController);
  } while( true );
}

// RHIAliasTextureResources @ 145bb3a90

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
FVulkanDynamicRHI::RHIAliasTextureResources
          (FVulkanDynamicRHI *this,TRefCountPtr<FRHITexture> *param_1,
          TRefCountPtr<FRHITexture> *param_2)

{
  FVulkanTexture *this_00;
  
  if ((param_1->Reference != (FRHITexture *)0x0) && (param_2->Reference != (FRHITexture *)0x0)) {
    this_00 = (FVulkanTexture *)(**(code **)(param_1->Reference->_padding_ + 0x48))();
    FVulkanTexture::AliasTextureResources(this_00,param_2);
    return;
  }
  return;
}

// RHIAsyncCreateTexture2D @ 145bb3ad0

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
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TRefCountPtr<FRHITexture> __thiscall
FVulkanDynamicRHI::RHIAsyncCreateTexture2D
          (FVulkanDynamicRHI *this,uint param_1,uint param_2,uchar param_3,uint param_4,
          ETextureCreateFlags param_5,ERHIAccess param_6,void **param_7,uint param_8,
          wchar_t *param_9,TRefCountPtr<FBaseGraphTask> *param_10)

{
  code *pcVar1;
  bool bVar2;
  TRefCountPtr<FRHITexture> TVar3;
  undefined4 in_register_00000014;
  undefined1 auStack_168 [32];
  wchar_t *local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_168;
  UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogVulkan);
  local_138._padding_ = 0;
  TStringConversion<TStringConvert<char,wchar_t>,128>::Init
            (&local_138,"FVulkanDynamicRHI::RHIAsyncCreateTexture2D",0x2a,Yes);
  local_148 = local_138.Ptr;
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                     ,0x61b,L"Unimplemented vulkan functionality: %s");
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    TVar3.Reference = (FRHITexture *)(*pcVar1)();
    return (TRefCountPtr<FRHITexture>)TVar3.Reference;
  }
  ((FRHITexture *)CONCAT44(in_register_00000014,param_1))->_padding_ = 0;
  return (TRefCountPtr<FRHITexture>)(FRHITexture *)CONCAT44(in_register_00000014,param_1);
}

// RHIAsyncReallocateTexture2D @ 145bb3bb0

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

TRefCountPtr<FRHITexture> __thiscall
FVulkanDynamicRHI::RHIAsyncReallocateTexture2D
          (FVulkanDynamicRHI *this,FRHITexture *param_1,int param_2,int param_3,int param_4,
          FThreadSafeCounter *param_5)

{
  code *pcVar1;
  bool bVar2;
  TRefCountPtr<FRHITexture> TVar3;
  undefined4 in_stack_ffffffffffffffec;
  
  bVar2 = IsInRenderingThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x1594,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar3.Reference = (FRHITexture *)(*pcVar1)();
      return (TRefCountPtr<FRHITexture>)TVar3.Reference;
    }
  }
  AsyncReallocateTexture2D_RenderThread
            (this,(FRHICommandListImmediate *)param_1,
             (FRHITexture *)&GRHICommandList.CommandListImmediate,param_2,param_3,param_4,
             (FThreadSafeCounter *)CONCAT44(in_stack_ffffffffffffffec,param_5._0_4_));
  return (TRefCountPtr<FRHITexture>)param_1;
}

// RHIBeginUpdateTexture3D @ 145bb3f10

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
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FUpdateTexture3DData * __thiscall
FVulkanDynamicRHI::RHIBeginUpdateTexture3D
          (FVulkanDynamicRHI *this,FUpdateTexture3DData *__return_storage_ptr__,
          FRHICommandListBase *param_1,FRHITexture *param_2,uint param_3,
          FUpdateTextureRegion3D *param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  longlong lVar15;
  FUpdateTexture3DData *pFVar16;
  uchar *puVar17;
  uint uVar18;
  ulong64 uVar19;
  
  lVar15 = (**(code **)(param_2->_padding_ + 0x20))(param_2);
  bVar1 = *(byte *)(lVar15 + 0x33);
  if ((int)this->_padding_ <= (int)(uint)bVar1) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar5 = (code *)swi(3);
      pFVar16 = (FUpdateTexture3DData *)(*pcVar5)();
      return pFVar16;
    }
  }
  iVar2 = *(int *)(this->_padding_ + (ulonglong)bVar1 * 4);
  uVar3 = param_4->Width;
  uVar18 = iVar2 * param_4->Height * uVar3;
  uVar19 = (ulonglong)param_4->Depth * (longlong)(int)uVar18;
  puVar17 = FMemory::Malloc(uVar19,0);
  uVar4 = param_4->DestX;
  uVar6 = param_4->DestY;
  uVar7 = param_4->DestZ;
  iVar8 = param_4->SrcX;
  iVar9 = param_4->SrcY;
  iVar10 = param_4->SrcZ;
  uVar11 = param_4->Width;
  uVar12 = param_4->Height;
  __return_storage_ptr__->Data = puVar17;
  uVar13 = GFrameNumberRenderThread;
  (__return_storage_ptr__->UpdateRegion).DestX = uVar4;
  (__return_storage_ptr__->UpdateRegion).DestY = uVar6;
  (__return_storage_ptr__->UpdateRegion).DestZ = uVar7;
  (__return_storage_ptr__->UpdateRegion).SrcX = iVar8;
  __return_storage_ptr__->MipIndex = param_3;
  uVar4 = param_4->Depth;
  (__return_storage_ptr__->UpdateRegion).SrcY = iVar9;
  (__return_storage_ptr__->UpdateRegion).SrcZ = iVar10;
  (__return_storage_ptr__->UpdateRegion).Width = uVar11;
  (__return_storage_ptr__->UpdateRegion).Height = uVar12;
  __return_storage_ptr__->DepthPitch = uVar18;
  __return_storage_ptr__->DataSizeBytes = (uint)uVar19;
  __return_storage_ptr__->FrameNumber = uVar13;
  (__return_storage_ptr__->UpdateRegion).Depth = uVar4;
  __return_storage_ptr__->RowPitch = iVar2 * uVar3;
  __return_storage_ptr__->Texture = param_2;
  return __return_storage_ptr__;
}

// RHIBindDebugLabelName @ 145bb4020

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
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FVulkanDynamicRHI::RHIBindDebugLabelName
          (FVulkanDynamicRHI *this,FRHICommandListBase *param_1,FRHITexture *param_2,
          wchar_t *param_3)

{
  FVulkanDevice *pFVar1;
  _func___cdecl_VkResult_VkDevice_T_ptr_VkDebugUtilsObjectNameInfoEXT_ptr *p_Var2;
  FName *pFVar3;
  longlong lVar4;
  FName local_res8;
  FAnsiString local_48;
  VkDebugUtilsObjectNameInfoEXT local_38;
  
  pFVar3 = ::FName::FName(&local_res8,param_3);
  FRHITexture::SetName(param_2,*pFVar3);
  lVar4 = (**(code **)(param_2->_padding_ + 0x48))(param_2);
  pFVar1 = this->Device;
  p_Var2 = (pFVar1->DebugMarkers).SetDebugName;
  if (p_Var2 != (_func___cdecl_VkResult_VkDevice_T_ptr_VkDebugUtilsObjectNameInfoEXT_ptr *)0x0) {
    FAnsiString::FAnsiString(&local_48,param_3);
    local_38._20_4_ = 0;
    local_38.objectHandle._0_4_ = (undefined4)*(undefined8 *)(lVar4 + 0x170);
    local_38.objectHandle._4_4_ = (undefined4)((ulonglong)*(undefined8 *)(lVar4 + 0x170) >> 0x20);
    local_38._4_8_ = 0;
    local_38.pObjectName._0_4_ = SUB84(local_48.Data.AllocatorInstance.Data,0);
    local_38.pObjectName._4_4_ =
         (undefined4)((ulonglong)local_48.Data.AllocatorInstance.Data >> 0x20);
    local_38.sType = VK_STRUCTURE_TYPE_DEBUG_UTILS_OBJECT_NAME_INFO_EXT;
    local_38._12_8_ = &DAT_a00000000;
    (*p_Var2)(pFVar1->Device,&local_38);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// RHIBlockUntilGPUIdle @ 145bb40f0

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

void __thiscall FVulkanDynamicRHI::RHIBlockUntilGPUIdle(FVulkanDynamicRHI *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  undefined1 *puVar1;
  TQueue<FVulkanPlatformCommandList_*,0> *pTVar2;
  longlong *plVar3;
  int iVar4;
  TNode *pTVar5;
  code *pcVar6;
  uint uVar7;
  bool bVar8;
  FVulkanPlatformCommandList *pFVar9;
  TNode *pTVar10;
  ulonglong uVar11;
  longlong *plVar12;
  undefined1 auStackY_b8 [32];
  undefined1 local_88 [8];
  FVulkanPlatformCommandList *local_80;
  longlong *local_78;
  FVulkanPlatformCommandList **local_70;
  code *local_68;
  longlong **local_60;
  longlong local_58 [3];
  longlong *local_40;
  uint local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  local_34 = 3;
  local_40 = (longlong *)0x0;
  local_38 = 0;
  pFVar9 = ::operator_new(0x50);
  local_80 = (FVulkanPlatformCommandList *)0x0;
  if (pFVar9 != (FVulkanPlatformCommandList *)0x0) {
    *(undefined8 *)&pFVar9->field_0x20 = 0;
    *(undefined4 *)&pFVar9->field_0x28 = 0;
    *(undefined4 *)&pFVar9->field_0x2c = 2;
    *(undefined8 *)&pFVar9->field_0x30 = 0;
    *(undefined8 *)&pFVar9->field_0x38 = 0;
    *(undefined8 *)&pFVar9->field_0x40 = 0;
    *(undefined8 *)&pFVar9->field_0x48 = 0;
    local_80 = pFVar9;
  }
  if (*(int *)&local_80->field_0x4c < 3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,3,(ForAnyElementType *)&local_80->field_0x40,*(int *)&local_80->field_0x48,
               (int *)&local_80->field_0x4c);
  }
  local_78 = local_58;
  local_70 = &local_80;
  local_60 = &local_78;
  local_68 = UE::Core::Private::Function::
             TFunctionRefCaller<`FVulkanDynamicRHI::RHIBlockUntilGPUIdle'::__l3::<lambda_1>,void,FVulkanQueue_&>
             ::Call;
  FVulkanDevice::ForEachQueue(this->Device,(TFunctionRef<void___cdecl(FVulkanQueue_&)> *)&local_68);
  pTVar2 = &this->PendingPayloadsForSubmission;
  pTVar10 = ::operator_new(0x10);
  if (pTVar10 != (TNode *)0x0) {
    pTVar10->NextNode = (TNode *)0x0;
    pTVar10->Item = local_80;
    if (((ulonglong)pTVar2 & 7) != 0) {
      FWindowsPlatformAtomics::HandleAtomicsFailure
                (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
    }
    LOCK();
    pTVar5 = pTVar2->Head;
    pTVar2->Head = pTVar10;
    UNLOCK();
    if (((ulonglong)pTVar5 & 7) != 0) {
      FWindowsPlatformAtomics::HandleAtomicsFailure
                (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
    }
    LOCK();
    pTVar5->NextNode = pTVar10;
    UNLOCK();
  }
  if (this->SubmissionThread == (FVulkanThread *)0x0) {
    bVar8 = FVulkanDevice::UseMinimalSubmits(this->Device);
    if (!bVar8) {
      lpCriticalSection = &this->SubmissionCS;
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      do {
        bVar8 = ProcessSubmissionQueue(this);
      } while (bVar8);
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  else {
    (**(code **)(this->SubmissionThread->Event->_padding_ + 0x10))();
  }
  uVar7 = local_38;
  uVar11 = (ulonglong)(int)local_38;
  plVar12 = local_58;
  if (local_40 != (longlong *)0x0) {
    plVar12 = local_40;
  }
  plVar3 = plVar12 + uVar11;
  while( true ) {
    if ((uint)uVar11 != uVar7) {
      local_88[0] = 0;
      `TCheckedPointerIterator<FVulkanSyncPoint_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_88);
    }
    if (plVar12 == plVar3) {
      if (local_40 != (longlong *)0x0) {
        FMemory::Free(local_40);
      }
      return;
    }
    pFVar9 = (FVulkanPlatformCommandList *)*plVar12;
    puVar1 = &pFVar9->field_0x8;
    if (pFVar9 == (FVulkanPlatformCommandList *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("SyncPoint.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanSubmission.cpp"
                         ,0x1f9,L"Waiting on invalid sync point.");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    else {
      LOCK();
      *(int *)puVar1 = *(int *)puVar1 + 1;
      UNLOCK();
    }
    if ((*(longlong *)&pFVar9->field_0x10 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("GraphEvent",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanSubmission.h"
                           ,0x5d,L"This sync point was not created with a CPU event."), bVar8))
    break;
    ProcessInterruptQueueUntil(this,*(FBaseGraphTask **)&pFVar9->field_0x10);
    LOCK();
    iVar4 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      if (puVar1 == (undefined1 *)0x0) {
        pFVar9 = (FVulkanPlatformCommandList *)0x0;
      }
      if (pFVar9 != (FVulkanPlatformCommandList *)0x0) {
        (*(code *)**(undefined8 **)pFVar9)(pFVar9,1);
      }
    }
    uVar11 = (ulonglong)local_38;
    plVar12 = plVar12 + 1;
  }
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

// RHICalcTexturePlatformSize @ 145bb43e0

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
/* WARNING: Enum "VkImageAspectFlagBits": Some values do not have unique names */

FRHICalcTextureSizeResult * __thiscall
FVulkanDynamicRHI::RHICalcTexturePlatformSize
          (FVulkanDynamicRHI *this,FRHICalcTextureSizeResult *__return_storage_ptr__,
          FRHITextureDesc *param_1,uint param_2)

{
  float fVar1;
  FVulkanDevice *pFVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  VkResult VVar7;
  undefined4 uVar8;
  longlong lVar9;
  int iVar10;
  int *piVar11;
  FRHITextureDesc *this_00;
  FRHITextureDesc *pFVar12;
  undefined1 auStackY_1f8 [32];
  undefined1 local_1c8 [8];
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  VkImageAspectFlagBits VStack_1a8;
  undefined4 local_1a4;
  VkMemoryRequirements local_1a0;
  FRHITextureDesc local_188;
  VkMemoryRequirements2 local_138;
  FImageCreateInfo local_108;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  FRHITextureDesc::FRHITextureDesc(&local_188,param_1);
  uVar8 = (uint)local_188.Depth;
  if ((int)(uint)local_188.Depth < local_188.Extent.field0_0x0._s_0.Y) {
    uVar8 = local_188.Extent.field0_0x0._s_0.Y;
  }
  if ((int)uVar8 < local_188.Extent.field0_0x0._s_0.X) {
    uVar8 = local_188.Extent.field0_0x0._s_0.X;
  }
  local_188.ClearValue.Value.Color[3] = FClearValueBinding::None.Value.Color[3];
  iVar10 = 0x1f;
  if (uVar8 != 0) {
    for (; (uint)uVar8 >> iVar10 == 0; iVar10 = iVar10 + -1) {
    }
  }
  local_188.UAVFormat = PF_Unknown;
  local_188.ClearValue._0_8_ = FClearValueBinding::None._0_8_;
  local_188.ClearValue.Value._4_8_ = FClearValueBinding::None.Value._4_8_;
  iVar5 = 0;
  if (uVar8 != 0) {
    iVar5 = iVar10;
  }
  local_188.ExtData = 0;
  if (iVar5 + 1U < (uint)local_188.NumMips) {
    local_188.NumMips = (byte)(iVar5 + 1U);
  }
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c);
  if ((*piVar11 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    atexit(`FVulkanDynamicRHI::RHICalcTexturePlatformSize'::__l2::
           _dynamic_atexit_destructor_for__TextureSizes__);
    _Init_thread_footer(&::_TSS0);
  }
  if ((*piVar11 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&TextureSizesLock,4000);
    atexit(`FVulkanDynamicRHI::RHICalcTexturePlatformSize'::__l2::
           _dynamic_atexit_destructor_for__TextureSizesLock__);
    _Init_thread_footer(&::_TSS1);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&TextureSizesLock);
  uVar6 = ::GetTypeHash(&local_188);
  uVar3 = TextureSizes._0_8_;
  if (TextureSizes._8_4_ != TextureSizes._52_4_) {
    lVar9 = 0x154bdc738;
    if (TextureSizes._64_8_ != 0) {
      lVar9 = TextureSizes._64_8_;
    }
    fVar1 = *(float *)(lVar9 + (ulonglong)(TextureSizes._72_4_ - 1 & uVar6) * 4);
    while (fVar1 != -NAN) {
      this_00 = (FRHITextureDesc *)((longlong)(int)fVar1 * 0x70 + uVar3);
      bVar4 = FRHITextureDesc::operator==(this_00,&local_188);
      if (bVar4) {
        pFVar12 = this_00 + 1;
        if (this_00 == (FRHITextureDesc *)0x0) {
          pFVar12 = (FRHITextureDesc *)0x0;
        }
        if (pFVar12 != (FRHITextureDesc *)0x0) {
          __return_storage_ptr__->Size = pFVar12->Flags;
          __return_storage_ptr__->Align = (pFVar12->ClearValue).ColorBinding;
          LeaveCriticalSection((LPCRITICAL_SECTION)&TextureSizesLock);
          goto LAB_145bb4732;
        }
        break;
      }
      fVar1 = this_00[1].ClearValue.Value.Color[3];
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&TextureSizesLock);
  iVar10 = 2;
  local_108.FormatsUsed.ArrayMax = 2;
  local_108.FormatsUsed.AllocatorInstance.SecondaryData = (ForElementType<VkFormat>)0x0;
  local_108.FormatsUsed.ArrayNum = 0;
  FVulkanTexture::GenerateImageCreateInfo
            (&local_108,this->Device,&local_188,(VkFormat *)0x0,(VkFormat *)0x0,false);
  pFVar2 = this->Device;
  if (((pFVar2->OptionalDeviceExtensions).field0_0x0.Packed & 0x800000000000) == 0) {
    VVar7 = (*VulkanDynamicAPI::vkCreateImage)
                      (pFVar2->Device,&local_108.ImageCreateInfo,&VulkanRHI::GAllocationCallbacks,
                       (VkImage_T **)local_1c8);
    if (VVar7 != VK_SUCCESS) {
      VulkanRHI::VerifyVulkanResult
                (VVar7,
                 "VulkanRHI::vkCreateImage(Device->GetHandle(), &TmpCreateInfo.ImageCreateInfo, VULKAN_CPU_ALLOCATOR, &TmpImage)"
                 ,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                 ,0xa61);
    }
    (*VulkanDynamicAPI::vkGetImageMemoryRequirements)
              (this->Device->Device,(VkImage_T *)local_1c8,&local_1a0);
    (*VulkanDynamicAPI::vkDestroyImage)
              (this->Device->Device,(VkImage_T *)local_1c8,&VulkanRHI::GAllocationCallbacks);
  }
  else {
    local_1a4 = 0;
    uStack_1b0 = &local_108;
    local_1c0._0_4_ = VK_STRUCTURE_TYPE_DEVICE_IMAGE_MEMORY_REQUIREMENTS;
    local_1c0._4_4_ = 0;
    uStack_1b8._0_4_ = 0;
    uStack_1b8._4_4_ = 0;
    if (local_188.Format == PF_DepthStencil) {
      iVar10 = 6;
    }
    else if ((local_188.Format != PF_ShadowDepth) && (local_188.Format != PF_D24)) {
      if (local_188.Format == PF_X24_G8) {
        iVar10 = 4;
      }
      else {
        iVar10 = 1;
      }
    }
    local_138.sType = VK_STRUCTURE_TYPE_MEMORY_REQUIREMENTS_2;
    local_138._4_8_ = 0;
    local_138._12_8_ = 0;
    VStack_1a8 = (iVar10 != 1) + VK_IMAGE_ASPECT_COLOR_BIT;
    local_138.memoryRequirements._4_8_ = 0;
    local_138.memoryRequirements.alignment._4_4_ = 0;
    local_138.memoryRequirements.memoryTypeBits = 0;
    local_138.memoryRequirements._20_4_ = 0;
    (*VulkanDynamicAPI::vkGetDeviceImageMemoryRequirementsKHR)
              (pFVar2->Device,(VkDeviceImageMemoryRequirements *)&local_1c0,&local_138);
    local_1a0._20_4_ = local_138.memoryRequirements._20_4_;
    local_1a0.memoryTypeBits = local_138.memoryRequirements.memoryTypeBits;
    local_1a0.size._0_4_ = (undefined4)local_138.memoryRequirements.size;
    local_1a0.size._4_4_ = local_138.memoryRequirements.size._4_4_;
    local_1a0.alignment._0_4_ = (uint)local_138.memoryRequirements.alignment;
    local_1a0.alignment._4_4_ = local_138.memoryRequirements.alignment._4_4_;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&TextureSizesLock);
  local_1c0 = &local_188;
  uStack_1b8 = &local_1a0;
  TSet<TTuple<FRHITextureDesc,VkMemoryRequirements>,TDefaultMapHashableKeyFuncs<FRHITextureDesc,VkMemoryRequirements,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FRHITextureDesc_const_&,VkMemoryRequirements_const_&>_>
            ((TSet<TTuple<FRHITextureDesc,VkMemoryRequirements>,TDefaultMapHashableKeyFuncs<FRHITextureDesc,VkMemoryRequirements,0>,FDefaultSetAllocator>
              *)&TextureSizes,
             (TPairInitializer<FRHITextureDesc_const_&,VkMemoryRequirements_const_&> *)local_1c8,
             (bool *)&local_1c0);
  LeaveCriticalSection((LPCRITICAL_SECTION)&TextureSizesLock);
  __return_storage_ptr__->Size = CONCAT44(local_1a0.size._4_4_,(undefined4)local_1a0.size);
  __return_storage_ptr__->Align = (uint)local_1a0.alignment;
  if (local_108.FormatsUsed.AllocatorInstance.SecondaryData != (ForElementType<VkFormat>)0x0) {
    FMemory::Free((void *)local_108.FormatsUsed.AllocatorInstance.SecondaryData);
  }
LAB_145bb4732:
  if (local_188.AliasableFormats.AllocatorInstance.SecondaryData !=
      (ForElementType<EPixelFormat>)0x0) {
    FMemory::Free((void *)local_188.AliasableFormats.AllocatorInstance.SecondaryData);
  }
  return __return_storage_ptr__;
}

// RHIComputeMemorySize @ 145bb4910

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

uint __thiscall
FVulkanDynamicRHI::RHIComputeMemorySize(FVulkanDynamicRHI *this,FRHITexture *param_1)

{
  longlong lVar1;
  
  if (param_1 == (FRHITexture *)0x0) {
    return 0;
  }
  lVar1 = (**(code **)(param_1->_padding_ + 0x48))(param_1);
  return *(uint *)(lVar1 + 0x188);
}

// RHIComputePrecachePSOHash @ 145bb4940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

ulong64 __thiscall
FVulkanDynamicRHI::RHIComputePrecachePSOHash
          (FVulkanDynamicRHI *this,FGraphicsPipelineStateInitializer *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  ulong64 uVar3;
  undefined1 auStack_98 [32];
  ulong64 local_78;
  uint uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_78 = param_1->StatePrecachePSOHash;
  if (local_78 == 0) {
    local_78 = RHIComputeStatePrecachePSOHash(this,param_1);
  }
  uStack_70 = param_1->RenderTargetsEnabled;
  uVar1 = *(undefined8 *)(param_1->RenderTargetFormats).Elements;
  uStack_64 = 0;
  uStack_6c = (undefined4)uVar1;
  uStack_68 = (undefined4)((ulonglong)uVar1 >> 0x20);
  uVar2._0_2_ = param_1->NumSamples;
  uVar2._2_1_ = param_1->SubpassHint;
  uVar2._3_1_ = param_1->SubpassIndex;
  _uStack_60 = CONCAT44(_UNK_1510dbe04 &
                        *(undefined4 *)((longlong)(param_1->RenderTargetFlags).Elements + 4),
                        ___xmm_00000000020000100000000002000010 &
                        (int)(param_1->RenderTargetFlags).Elements[0]);
  _local_58 = CONCAT44(_UNK_1510dbe0c &
                       *(undefined4 *)((longlong)(param_1->RenderTargetFlags).Elements + 0xc),
                       _UNK_1510dbe08 & (int)(param_1->RenderTargetFlags).Elements[1]);
  uStack_20 = (ulonglong)
              CONCAT16(param_1->ConservativeRasterization,
                       CONCAT15(param_1->bHasFragmentDensityAttachment,
                                CONCAT14(param_1->MultiViewCount,uVar2)));
  _uStack_50 = CONCAT44(_UNK_1510dbe04 &
                        *(undefined4 *)((longlong)(param_1->RenderTargetFlags).Elements + 0x14),
                        ___xmm_00000000020000100000000002000010 &
                        (int)(param_1->RenderTargetFlags).Elements[2]);
  _local_48 = CONCAT44(_UNK_1510dbe0c &
                       *(undefined4 *)((longlong)(param_1->RenderTargetFlags).Elements + 0x1c),
                       _UNK_1510dbe08 & (int)(param_1->RenderTargetFlags).Elements[3]);
  _uStack_40 = CONCAT44(_UNK_1510dbe04 &
                        *(undefined4 *)((longlong)(param_1->RenderTargetFlags).Elements + 0x24),
                        ___xmm_00000000020000100000000002000010 &
                        (int)(param_1->RenderTargetFlags).Elements[4]);
  _local_38 = CONCAT44(_UNK_1510dbe0c &
                       *(undefined4 *)((longlong)(param_1->RenderTargetFlags).Elements + 0x2c),
                       _UNK_1510dbe08 & (int)(param_1->RenderTargetFlags).Elements[5]);
  _uStack_30 = CONCAT44(_UNK_1510dbe04 &
                        *(undefined4 *)((longlong)(param_1->RenderTargetFlags).Elements + 0x34),
                        ___xmm_00000000020000100000000002000010 &
                        (int)(param_1->RenderTargetFlags).Elements[6]);
  _local_28 = CONCAT44(_UNK_1510dbe0c &
                       *(undefined4 *)((longlong)(param_1->RenderTargetFlags).Elements + 0x3c),
                       _UNK_1510dbe08 & (int)(param_1->RenderTargetFlags).Elements[7]);
  uVar3 = CityHash64((char *)&local_78,0x60);
  return uVar3;
}

// RHIComputeStatePrecachePSOHash @ 145bb4a70

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
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */

ulong64 __thiscall
FVulkanDynamicRHI::RHIComputeStatePrecachePSOHash
          (FVulkanDynamicRHI *this,FGraphicsPipelineStateInitializer *param_1)

{
  FRHIVertexDeclaration *pFVar1;
  FRHIVertexShader *pFVar2;
  FRHIPixelShader *pFVar3;
  FRHIGeometryShader *pFVar4;
  FRHIMeshShader *pFVar5;
  FRHIAmplificationShader *pFVar6;
  FRHIBlendState *pFVar7;
  FRHIRasterizerState *pFVar8;
  FRHIDepthStencilState *pFVar9;
  char cVar10;
  uint uVar11;
  ulong64 uVar12;
  undefined1 auStack_c8 [32];
  FDepthStencilStateInitializerRHI local_a8;
  FRasterizerStateInitializerRHI local_98;
  FBlendStateInitializerRHI local_88;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined8 uStack_28;
  uint local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_48 = 0;
  local_30 = 0;
  uStack_28 = 0;
  local_20 = 0;
  if ((GRHIGlobals.GpuInfo.VendorId != 0x13b5) &&
     (pFVar1 = (param_1->BoundShaderState).VertexDeclarationRHI,
     pFVar1 != (FRHIVertexDeclaration *)0x0)) {
    local_48 = (**(code **)(*(longlong *)pFVar1 + 0x18))();
  }
  pFVar2 = (param_1->BoundShaderState).VertexShaderRHI;
  if (pFVar2 == (FRHIVertexShader *)0x0) {
    local_44 = 0;
  }
  else {
    local_44 = *(undefined4 *)&pFVar2->field_0xf0;
  }
  pFVar3 = (param_1->BoundShaderState).PixelShaderRHI;
  if (pFVar3 == (FRHIPixelShader *)0x0) {
    local_40 = 0;
  }
  else {
    local_40 = *(undefined4 *)&pFVar3->field_0xf0;
  }
  pFVar4 = (param_1->BoundShaderState).GeometryShaderRHI;
  if (pFVar4 == (FRHIGeometryShader *)0x0) {
    local_3c = 0;
  }
  else {
    local_3c = *(undefined4 *)&pFVar4->field_0xf0;
  }
  pFVar5 = (param_1->BoundShaderState).MeshShaderRHI;
  if (pFVar5 == (FRHIMeshShader *)0x0) {
    local_38 = 0;
  }
  else {
    local_38 = *(undefined4 *)&pFVar5->field_0xf0;
  }
  pFVar6 = (param_1->BoundShaderState).AmplificationShaderRHI;
  if (pFVar6 == (FRHIAmplificationShader *)0x0) {
    local_34 = 0;
  }
  else {
    local_34 = *(undefined4 *)&pFVar6->field_0xf0;
  }
  pFVar7 = param_1->BlendState;
  local_88.RenderTargets.Elements[0].ColorBlendOp.Value = '\0';
  local_88.RenderTargets.Elements[0].ColorSrcBlend.Value = '\x01';
  local_88.RenderTargets.Elements[0].ColorDestBlend.Value = '\0';
  local_88.RenderTargets.Elements[0].AlphaBlendOp.Value = '\0';
  local_88.RenderTargets.Elements[0].AlphaSrcBlend.Value = '\x01';
  local_88.RenderTargets.Elements[0].AlphaDestBlend.Value = '\0';
  local_88.RenderTargets.Elements[0].ColorWriteMask.Value = '\x0f';
  local_88.RenderTargets.Elements[1].ColorBlendOp.Value = '\0';
  local_88.RenderTargets.Elements[1].ColorSrcBlend.Value = '\x01';
  local_88.RenderTargets.Elements[1].ColorDestBlend.Value = '\0';
  local_88.RenderTargets.Elements[1].AlphaBlendOp.Value = '\0';
  local_88.RenderTargets.Elements[1].AlphaSrcBlend.Value = '\x01';
  local_88.RenderTargets.Elements[1].AlphaDestBlend.Value = '\0';
  local_88.RenderTargets.Elements[1].ColorWriteMask.Value = '\x0f';
  local_88.RenderTargets.Elements[2].ColorBlendOp.Value = '\0';
  local_88.RenderTargets.Elements[2].ColorSrcBlend.Value = '\x01';
  local_88.RenderTargets.Elements[2].ColorDestBlend.Value = '\0';
  local_88.RenderTargets.Elements[2].AlphaBlendOp.Value = '\0';
  local_88.RenderTargets.Elements[2].AlphaSrcBlend.Value = '\x01';
  local_88.RenderTargets.Elements[2].AlphaDestBlend.Value = '\0';
  local_88.RenderTargets.Elements[2].ColorWriteMask.Value = '\x0f';
  local_88.RenderTargets.Elements[3].ColorBlendOp.Value = '\0';
  local_88.RenderTargets.Elements[3].ColorSrcBlend.Value = '\x01';
  local_88.RenderTargets.Elements[3].ColorDestBlend.Value = '\0';
  local_88.RenderTargets.Elements[3].AlphaBlendOp.Value = '\0';
  local_88.RenderTargets.Elements[3].AlphaSrcBlend.Value = '\x01';
  local_88.RenderTargets.Elements[3].AlphaDestBlend.Value = '\0';
  local_88.RenderTargets.Elements[3].ColorWriteMask.Value = '\x0f';
  local_88.RenderTargets.Elements[4].ColorBlendOp.Value = '\0';
  local_88.RenderTargets.Elements[4].ColorSrcBlend.Value = '\x01';
  local_88.RenderTargets.Elements[4].ColorDestBlend.Value = '\0';
  local_88.RenderTargets.Elements[4].AlphaBlendOp.Value = '\0';
  local_88.RenderTargets.Elements[4].AlphaSrcBlend.Value = '\x01';
  local_88.RenderTargets.Elements[4].AlphaDestBlend.Value = '\0';
  local_88.RenderTargets.Elements[4].ColorWriteMask.Value = '\x0f';
  local_88.RenderTargets.Elements[5].ColorBlendOp.Value = '\0';
  local_88.RenderTargets.Elements[5].ColorSrcBlend.Value = '\x01';
  local_88.RenderTargets.Elements[5].ColorDestBlend.Value = '\0';
  local_88.RenderTargets.Elements[5].AlphaBlendOp.Value = '\0';
  local_88.RenderTargets.Elements[5].AlphaSrcBlend.Value = '\x01';
  local_88.RenderTargets.Elements[5].AlphaDestBlend.Value = '\0';
  local_88.RenderTargets.Elements[5].ColorWriteMask.Value = '\x0f';
  local_88.RenderTargets.Elements[6].ColorBlendOp.Value = '\0';
  local_88.RenderTargets.Elements[6].ColorSrcBlend.Value = '\x01';
  local_88.RenderTargets.Elements[6].ColorDestBlend.Value = '\0';
  local_88.RenderTargets.Elements[6].AlphaBlendOp.Value = '\0';
  local_88.RenderTargets.Elements[6].AlphaSrcBlend.Value = '\x01';
  local_88.RenderTargets.Elements[6].AlphaDestBlend.Value = '\0';
  local_88.RenderTargets.Elements[6].ColorWriteMask.Value = '\x0f';
  local_88.RenderTargets.Elements[7].ColorBlendOp.Value = '\0';
  local_88.RenderTargets.Elements[7].ColorSrcBlend.Value = '\x01';
  local_88.RenderTargets.Elements[7].ColorDestBlend.Value = '\0';
  local_88.RenderTargets.Elements[7].AlphaBlendOp.Value = '\0';
  local_88.RenderTargets.Elements[7].AlphaSrcBlend.Value = '\x01';
  local_88.RenderTargets.Elements[7].AlphaDestBlend.Value = '\0';
  local_88.RenderTargets.Elements[7].ColorWriteMask.Value = '\x0f';
  if (pFVar7 != (FRHIBlendState *)0x0) {
    cVar10 = (**(code **)(*(longlong *)pFVar7 + 0x10))(pFVar7,&local_88);
    if (cVar10 != '\0') {
      uVar11 = ::GetTypeHash(&local_88);
      local_30 = CONCAT44(local_30._4_4_,uVar11);
    }
  }
  pFVar8 = param_1->RasterizerState;
  local_98.FillMode.Value = '\0';
  local_98.CullMode.Value = '\0';
  local_98.DepthBias = 0.0;
  local_98.SlopeScaleDepthBias = 0.0;
  local_98.DepthClipMode = DepthClip;
  local_98.bAllowMSAA = false;
  if (pFVar8 != (FRHIRasterizerState *)0x0) {
    cVar10 = (**(code **)(*(longlong *)pFVar8 + 0x10))(pFVar8,&local_98);
    if (cVar10 != '\0') {
      uVar11 = ::GetTypeHash(&local_98);
      local_30 = CONCAT44(uVar11,(undefined4)local_30);
    }
  }
  pFVar9 = param_1->DepthStencilState;
  local_a8.bEnableDepthWrite = true;
  local_a8.DepthTest.Value = '\x01';
  local_a8.bEnableFrontFaceStencil = false;
  local_a8.FrontFaceStencilTest.Value = '\a';
  local_a8.FrontFaceStencilFailStencilOp.Value = '\0';
  local_a8.FrontFaceDepthFailStencilOp.Value = '\0';
  local_a8.FrontFacePassStencilOp.Value = '\0';
  local_a8.bEnableBackFaceStencil = false;
  local_a8.BackFaceStencilTest.Value = '\a';
  local_a8.BackFaceStencilFailStencilOp.Value = '\0';
  local_a8.BackFaceDepthFailStencilOp.Value = '\0';
  local_a8.BackFacePassStencilOp.Value = '\0';
  local_a8.StencilReadMask = 0xff;
  local_a8.StencilWriteMask = 0xff;
  if (pFVar9 != (FRHIDepthStencilState *)0x0) {
    cVar10 = (**(code **)(pFVar9->_padding_ + 0x10))(pFVar9,&local_a8);
    if (cVar10 != '\0') {
      uVar11 = ::GetTypeHash(&local_a8);
      uStack_28 = CONCAT44(uStack_28._4_4_,uVar11);
    }
  }
  local_20 = (((param_1->bAllowVariableRateShading & 1) * 2 | param_1->bDepthBounds & 1) << 8 |
             (uint)(byte)(char)param_1->PrimitiveType) << 8 |
             (uint)param_1->ShadingRate | local_20 & 0xfffc0000;
  uVar12 = CityHash64((char *)&local_48,0x2c);
  return uVar12;
}

// RHICreateAliasedTexture @ 145bb56a0

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

TRefCountPtr<FRHITexture> __thiscall
FVulkanDynamicRHI::RHICreateAliasedTexture
          (FVulkanDynamicRHI *this,TRefCountPtr<FRHITexture> *param_1)

{
  FString *pFVar1;
  FRHITextureDesc *pFVar2;
  FVulkanTexture *pFVar3;
  ForAnyElementType FVar4;
  TRefCountPtr<FRHITexture> *in_R8;
  undefined1 auStack_f8 [32];
  FName local_d8;
  FString local_d0;
  FString local_c0;
  FRHITextureCreateDesc local_a8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_f8;
  local_d8 = (FName)in_R8->Reference->_padding_;
  pFVar1 = ::FName::ToString(&local_d8,&local_c0);
  ::FString::ConcatFC(&local_d0,pFVar1,L"Alias");
  if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.Data.AllocatorInstance.Data);
  }
  FVar4.Data = (FScriptContainerElement *)L"";
  if (local_d0.Data.ArrayNum != 0) {
    FVar4.Data = local_d0.Data.AllocatorInstance.Data;
  }
  pFVar2 = (FRHITextureDesc *)(**(code **)(in_R8->Reference->_padding_ + 0x20))();
  FRHITextureDesc::FRHITextureDesc((FRHITextureDesc *)&local_a8,pFVar2);
  local_a8.InitialState = SRVMask;
  local_a8.InitAction = Default;
  local_a8.BulkData = (FResourceBulkDataInterface *)0x0;
  local_a8.ClassName.ComparisonIndex.Value = 0;
  local_a8.ClassName.Number = 0;
  local_a8.OwnerName.ComparisonIndex.Value = 0;
  local_a8.OwnerName.Number = 0;
  local_a8.DebugName = (wchar_t *)FVar4.Data;
  pFVar3 = ::operator_new(600);
  if (pFVar3 == (FVulkanTexture *)0x0) {
    param_1->Reference = (FRHITexture *)0x0;
  }
  else {
    pFVar3 = FVulkanTexture::FVulkanTexture(pFVar3,this->Device,&local_a8,in_R8);
    param_1->Reference = (FRHITexture *)pFVar3;
    if (pFVar3 != (FVulkanTexture *)0x0) {
      FRHIResource::AddRef((FRHIResource *)pFVar3);
    }
  }
  if ((void *)local_a8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_a8._padding_);
  }
  if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.Data.AllocatorInstance.Data);
  }
  return (TRefCountPtr<FRHITexture>)(FRHITexture *)param_1;
}

// RHICreateAmplificationShader @ 145bb57f0

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

TRefCountPtr<FRHIAmplificationShader> __thiscall
FVulkanDynamicRHI::RHICreateAmplificationShader
          (FVulkanDynamicRHI *this,TArrayView<unsigned_char_const_,int> *param_1,FSHAHash *param_2)

{
  TVulkanBaseShader<FRHIAmplificationShader,2> *this_00;
  TArrayView<unsigned_char_const_,int> local_18;
  
  local_18.DataPtr = *(uchar **)param_2->Hash;
  local_18._8_8_ = *(undefined8 *)(param_2->Hash + 8);
  this_00 = FVulkanShaderFactory::CreateShader<TVulkanBaseShader<FRHIAmplificationShader,2>_>
                      (&this->Device->ShaderFactory,&local_18,this->Device);
  param_1->DataPtr = (uchar *)this_00;
  if (this_00 != (TVulkanBaseShader<FRHIAmplificationShader,2> *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_00);
  }
  return (TRefCountPtr<FRHIAmplificationShader>)(FRHIAmplificationShader *)param_1;
}

// RHICreateBlendState @ 145bb5840

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

TRefCountPtr<FRHIBlendState> __thiscall
FVulkanDynamicRHI::RHICreateBlendState(FVulkanDynamicRHI *this,FBlendStateInitializerRHI *param_1)

{
  FVulkanBlendState *pFVar1;
  FBlendStateInitializerRHI *in_R8;
  
  pFVar1 = ::operator_new(0x158);
  if (pFVar1 == (FVulkanBlendState *)0x0) {
    (param_1->RenderTargets).Elements[0].ColorBlendOp = '\0';
    (param_1->RenderTargets).Elements[0].ColorSrcBlend = '\0';
    (param_1->RenderTargets).Elements[0].ColorDestBlend = '\0';
    (param_1->RenderTargets).Elements[0].AlphaBlendOp = '\0';
    (param_1->RenderTargets).Elements[0].AlphaSrcBlend = '\0';
    (param_1->RenderTargets).Elements[0].AlphaDestBlend = '\0';
    (param_1->RenderTargets).Elements[0].ColorWriteMask = '\0';
    (param_1->RenderTargets).Elements[1].ColorBlendOp = '\0';
  }
  else {
    pFVar1 = FVulkanBlendState::FVulkanBlendState(pFVar1,in_R8);
    *(FVulkanBlendState **)(param_1->RenderTargets).Elements = pFVar1;
    if (pFVar1 != (FVulkanBlendState *)0x0) {
      FRHIResource::AddRef((FRHIResource *)pFVar1);
      return (TRefCountPtr<FRHIBlendState>)(FRHIBlendState *)param_1;
    }
  }
  return (TRefCountPtr<FRHIBlendState>)(FRHIBlendState *)param_1;
}

// RHICreateBoundShaderState @ 145bb58b0

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

TRefCountPtr<FRHIBoundShaderState> __thiscall
FVulkanDynamicRHI::RHICreateBoundShaderState
          (FVulkanDynamicRHI *this,FRHIVertexDeclaration *param_1,FRHIVertexShader *param_2,
          FRHIPixelShader *param_3,FRHIGeometryShader *param_4)

{
  FRHIResource *this_00;
  FRHIMeshShader *in_stack_00000030;
  FLLMScope local_38 [2];
  FRHIResource *local_30;
  FMemScope local_28 [2];
  
  FLLMScope::FLLMScope(local_38,VideoRecording|BackupOOMMemoryPoolPlatform,false,None,Default,true);
  FMemScope::FMemScope(local_28,VideoRecording|BackupOOMMemoryPoolPlatform,true);
  GetCachedBoundShaderState_Threadsafe
            ((FRHIVertexDeclaration *)&local_30,param_2,param_3,param_4,in_stack_00000030,
             (FRHIAmplificationShader *)0x0);
  if (local_30 == (FRHIResource *)0x0) {
    this_00 = ::operator_new(0x58);
    if (this_00 == (FRHIResource *)0x0) {
      *(undefined8 *)param_1 = 0;
    }
    else {
      FRHIResource::FRHIResource(this_00,RRT_BoundShaderState);
      this_00->_padding_ = (longlong)&___7FVulkanBoundShaderState__6B_;
      FCachedBoundShaderStateLink::FCachedBoundShaderStateLink
                ((FCachedBoundShaderStateLink *)(this_00 + 1),(FRHIVertexDeclaration *)param_2,
                 (FRHIVertexShader *)param_3,(FRHIPixelShader *)param_4,
                 (FRHIGeometryShader *)in_stack_00000030,(FRHIBoundShaderState *)this_00,false);
      FCachedBoundShaderStateLink_Threadsafe::AddToCache
                ((FCachedBoundShaderStateLink_Threadsafe *)(this_00 + 1));
      *(FRHIResource **)param_1 = this_00;
      FRHIResource::AddRef(this_00);
    }
    if (local_30 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_30);
    }
  }
  else {
    *(FRHIResource **)param_1 = local_30;
    local_30 = (FRHIResource *)0x0;
  }
  FMemScope::~FMemScope(local_28);
  FLLMScope::~FLLMScope(local_38);
  return (TRefCountPtr<FRHIBoundShaderState>)(FRHIBoundShaderState *)param_1;
}

// RHICreateComputeShader @ 145bb5a00

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

TRefCountPtr<FRHIComputeShader> __thiscall
FVulkanDynamicRHI::RHICreateComputeShader
          (FVulkanDynamicRHI *this,TArrayView<unsigned_char_const_,int> *param_1,FSHAHash *param_2)

{
  TVulkanBaseShader<FRHIComputeShader,5> *this_00;
  TArrayView<unsigned_char_const_,int> local_18;
  
  local_18.DataPtr = *(uchar **)param_2->Hash;
  local_18._8_8_ = *(undefined8 *)(param_2->Hash + 8);
  this_00 = FVulkanShaderFactory::CreateShader<TVulkanBaseShader<FRHIComputeShader,5>_>
                      (&this->Device->ShaderFactory,&local_18,this->Device);
  param_1->DataPtr = (uchar *)this_00;
  if (this_00 != (TVulkanBaseShader<FRHIComputeShader,5> *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_00);
  }
  return (TRefCountPtr<FRHIComputeShader>)(FRHIComputeShader *)param_1;
}

// RHICreateDepthStencilState @ 145bb5a50

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

TRefCountPtr<FRHIDepthStencilState> __thiscall
FVulkanDynamicRHI::RHICreateDepthStencilState
          (FVulkanDynamicRHI *this,FDepthStencilStateInitializerRHI *param_1)

{
  undefined8 uVar1;
  FRHIResource *this_00;
  undefined8 *in_R8;
  
  this_00 = ::operator_new(0x30);
  if (this_00 != (FRHIResource *)0x0) {
    FRHIResource::FRHIResource(this_00,RRT_DepthStencilState);
    *(undefined4 *)&this_00[1]._padding_ = 0;
    this_00[1].AtomicFlags = (atomic<unsigned_int>)0x7000101;
    this_00[1].ResourceType = RRT_None;
    this_00[1].field_0xd = 0;
    this_00[1]._padding_ = 0;
    this_00[1].OwnerName.ComparisonIndex.Value = 7;
    *(undefined2 *)&this_00[1].OwnerName.Number = 0xffff;
    this_00->_padding_ = (longlong)&___7FVulkanDepthStencilState__6B_;
    uVar1 = *in_R8;
    this_00[1].AtomicFlags = (FAtomicFlags)(int)uVar1;
    this_00[1].ResourceType = (char)((ulonglong)uVar1 >> 0x20);
    this_00[1].field_0xd = (char)((ulonglong)uVar1 >> 0x28);
    this_00[1]._padding_ = (short)((ulonglong)uVar1 >> 0x30);
    this_00[1].OwnerName.ComparisonIndex.Value = *(uint *)(in_R8 + 1);
    *(undefined2 *)&this_00[1].OwnerName.Number = *(undefined2 *)((longlong)in_R8 + 0xc);
    *(FRHIResource **)param_1 = this_00;
    FRHIResource::AddRef(this_00);
    return (TRefCountPtr<FRHIDepthStencilState>)(FRHIDepthStencilState *)param_1;
  }
  param_1->bEnableDepthWrite = false;
  param_1->DepthTest = '\0';
  param_1->bEnableFrontFaceStencil = false;
  param_1->FrontFaceStencilTest = '\0';
  param_1->FrontFaceStencilFailStencilOp = '\0';
  param_1->FrontFaceDepthFailStencilOp = '\0';
  param_1->FrontFacePassStencilOp = '\0';
  param_1->bEnableBackFaceStencil = false;
  return (TRefCountPtr<FRHIDepthStencilState>)(FRHIDepthStencilState *)param_1;
}

// RHICreateGPUFence @ 145bb5b00

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

TRefCountPtr<FRHIGPUFence> __thiscall
FVulkanDynamicRHI::RHICreateGPUFence(FVulkanDynamicRHI *this,FName *param_1)

{
  undefined8 uVar1;
  FName FVar2;
  VkResult VVar3;
  FName this_00;
  undefined8 *in_R8;
  VkEventCreateInfo local_28;
  
  this_00 = (FName)::operator_new(0x48);
  if (this_00 == (FName)0x0) {
    param_1->ComparisonIndex = 0;
    param_1->Number = 0;
  }
  else {
    uVar1 = *in_R8;
    FVar2 = (FName)this->Device;
    FRHIResource::FRHIResource((FRHIResource *)this_00,RRT_GPUFence);
    *(undefined ***)this_00 = &___7FRHIGPUFence__6B_;
    *(undefined4 *)&((FRHIResource *)((longlong)this_00 + 0x18))->_padding_ = 0;
    *(undefined8 *)((longlong)this_00 + 0x1c) = uVar1;
    *(undefined ***)this_00 = &___7FVulkanGPUFence__6B_;
    ((FRHIResource *)((longlong)this_00 + 0x30))->_padding_ = 0;
    *(undefined8 *)((longlong)this_00 + 0x38) = 0;
    ((FName *)((longlong)this_00 + 0x40))->ComparisonIndex = 0;
    ((FName *)((longlong)this_00 + 0x40))->Number = 0;
    *(FName *)((longlong)this_00 + 0x28) = FVar2;
    if (GAllowTimelineSemaphores == 0) {
      local_28._20_4_ = 0;
      local_28.sType = VK_STRUCTURE_TYPE_EVENT_CREATE_INFO;
      local_28._4_8_ = 0;
      local_28._12_8_ = 0;
      VVar3 = (*VulkanDynamicAPI::vkCreateEvent)
                        (*(VkDevice_T **)((longlong)FVar2 + 0x30),&local_28,
                         &VulkanRHI::GAllocationCallbacks,(VkEvent_T **)((longlong)this_00 + 0x30));
      if (VVar3 != VK_SUCCESS) {
        VulkanRHI::VerifyVulkanResult
                  (VVar3,
                   "VulkanRHI::vkCreateEvent(InDevice.GetHandle(), &EventCreateInfo, VULKAN_CPU_ALLOCATOR, &Event)"
                   ,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanUtil.cpp"
                   ,0x279);
      }
      VVar3 = (*VulkanDynamicAPI::vkResetEvent)
                        (*(VkDevice_T **)((longlong)FVar2 + 0x30),
                         (VkEvent_T *)((FRHIResource *)((longlong)this_00 + 0x30))->_padding_);
      if (VVar3 != VK_SUCCESS) {
        VulkanRHI::VerifyVulkanResult
                  (VVar3,"VulkanRHI::vkResetEvent(InDevice.GetHandle(), Event)",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanUtil.cpp"
                   ,0x27a);
      }
    }
    *param_1 = this_00;
    FRHIResource::AddRef((FRHIResource *)this_00);
  }
  return (TRefCountPtr<FRHIGPUFence>)(FRHIGPUFence *)param_1;
}

// RHICreateGeometryShader @ 145bb5c30

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

TRefCountPtr<FRHIGeometryShader> __thiscall
FVulkanDynamicRHI::RHICreateGeometryShader
          (FVulkanDynamicRHI *this,TArrayView<unsigned_char_const_,int> *param_1,FSHAHash *param_2)

{
  TVulkanBaseShader<FRHIGeometryShader,4> *this_00;
  TArrayView<unsigned_char_const_,int> local_18;
  
  local_18.DataPtr = *(uchar **)param_2->Hash;
  local_18._8_8_ = *(undefined8 *)(param_2->Hash + 8);
  this_00 = FVulkanShaderFactory::CreateShader<TVulkanBaseShader<FRHIGeometryShader,4>_>
                      (&this->Device->ShaderFactory,&local_18,this->Device);
  param_1->DataPtr = (uchar *)this_00;
  if (this_00 != (TVulkanBaseShader<FRHIGeometryShader,4> *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_00);
  }
  return (TRefCountPtr<FRHIGeometryShader>)(FRHIGeometryShader *)param_1;
}

// RHICreateMeshShader @ 145bb5c80

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

TRefCountPtr<FRHIMeshShader> __thiscall
FVulkanDynamicRHI::RHICreateMeshShader
          (FVulkanDynamicRHI *this,TArrayView<unsigned_char_const_,int> *param_1,FSHAHash *param_2)

{
  TVulkanBaseShader<FRHIMeshShader,1> *this_00;
  TArrayView<unsigned_char_const_,int> local_18;
  
  local_18.DataPtr = *(uchar **)param_2->Hash;
  local_18._8_8_ = *(undefined8 *)(param_2->Hash + 8);
  this_00 = FVulkanShaderFactory::CreateShader<TVulkanBaseShader<FRHIMeshShader,1>_>
                      (&this->Device->ShaderFactory,&local_18,this->Device);
  param_1->DataPtr = (uchar *)this_00;
  if (this_00 != (TVulkanBaseShader<FRHIMeshShader,1> *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_00);
  }
  return (TRefCountPtr<FRHIMeshShader>)(FRHIMeshShader *)param_1;
}

// RHICreatePixelShader @ 145bb5cd0

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

TRefCountPtr<FRHIPixelShader> __thiscall
FVulkanDynamicRHI::RHICreatePixelShader
          (FVulkanDynamicRHI *this,TArrayView<unsigned_char_const_,int> *param_1,FSHAHash *param_2)

{
  TVulkanBaseShader<FRHIPixelShader,3> *this_00;
  TArrayView<unsigned_char_const_,int> local_18;
  
  local_18.DataPtr = *(uchar **)param_2->Hash;
  local_18._8_8_ = *(undefined8 *)(param_2->Hash + 8);
  this_00 = FVulkanShaderFactory::CreateShader<TVulkanBaseShader<FRHIPixelShader,3>_>
                      (&this->Device->ShaderFactory,&local_18,this->Device);
  param_1->DataPtr = (uchar *)this_00;
  if (this_00 != (TVulkanBaseShader<FRHIPixelShader,3> *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_00);
  }
  return (TRefCountPtr<FRHIPixelShader>)(FRHIPixelShader *)param_1;
}

// RHICreateRasterizerState @ 145bb5d20

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
/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */

TRefCountPtr<FRHIRasterizerState> __thiscall
FVulkanDynamicRHI::RHICreateRasterizerState
          (FVulkanDynamicRHI *this,FRasterizerStateInitializerRHI *param_1)

{
  float fVar1;
  char cVar2;
  code *pcVar3;
  FName FVar4;
  uint uVar5;
  bool bVar6;
  atomic<unsigned_int> aVar7;
  atomic<unsigned_int> aVar8;
  FRHIResource *this_00;
  TRefCountPtr<FRHIRasterizerState> TVar9;
  FName *in_R8;
  
  this_00 = ::operator_new(0x68);
  if (this_00 == (FRHIResource *)0x0) {
    param_1->FillMode = '\0';
    param_1->CullMode = '\0';
    *(undefined2 *)&param_1->field_0x2 = 0;
    param_1->DepthBias = 0.0;
    return (TRefCountPtr<FRHIRasterizerState>)(FRHIRasterizerState *)param_1;
  }
  FRHIResource::FRHIResource(this_00,RRT_RasterizerState);
  this_00->_padding_ = (longlong)&___7FVulkanRasterizerState__6B_;
  FVar4 = in_R8[1];
  this_00[3].OwnerName = *in_R8;
  this_00[4]._padding_ = (longlong)FVar4;
  *(undefined4 *)&this_00[1]._padding_ = 0x17;
  *(undefined8 *)((longlong)&this_00[1]._padding_ + 4) = 0;
  this_00[1].ResourceType = RRT_None;
  this_00[1].field_0xd = 0;
  this_00[1]._padding_ = 0;
  this_00[1].OwnerName.ComparisonIndex = 0;
  *(undefined8 *)&this_00[1].OwnerName.Number = 0;
  *(undefined8 *)((longlong)&this_00[2]._padding_ + 4) = 0;
  this_00[2].OwnerName.ComparisonIndex = 0;
  this_00[2].OwnerName.Number = 0;
  this_00[3]._padding_ = 0;
  this_00[3].AtomicFlags = (atomic<unsigned_int>)0x3f800000;
  this_00[3].ResourceType = RRT_None;
  this_00[3].field_0xd = 0;
  this_00[3]._padding_ = 0;
  this_00[2].ResourceType = RRT_SamplerState;
  this_00[2].field_0xd = 0;
  this_00[2]._padding_ = 0;
  cVar2 = (char)this_00[3].OwnerName.ComparisonIndex.Value;
  aVar7 = (atomic<unsigned_int>)0x0;
  if (cVar2 == '\0') {
    aVar8 = (atomic<unsigned_int>)0x2;
  }
  else if (cVar2 == '\x01') {
    aVar8 = (atomic<unsigned_int>)0x1;
  }
  else {
    aVar8 = aVar7;
    if (cVar2 != '\x02') {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanState.cpp"
                         ,0xb1,L"Unknown ERasterizerFillMode %d");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        TVar9.Reference = (FRHIRasterizerState *)(*pcVar3)();
        return (TRefCountPtr<FRHIRasterizerState>)TVar9.Reference;
      }
      aVar8 = (atomic<unsigned_int>)0x7fffffff;
    }
  }
  cVar2 = *(char *)((longlong)&this_00[3].OwnerName.ComparisonIndex.Value + 1);
  *(atomic<unsigned_int> *)((longlong)&this_00[2]._padding_ + 4) = aVar8;
  aVar8 = aVar7;
  if (cVar2 != '\0') {
    if (cVar2 == '\x01') {
      aVar8 = (atomic<unsigned_int>)0x1;
    }
    else {
      aVar8 = (atomic<unsigned_int>)0x2;
      if ((cVar2 != '\x02') &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanState.cpp"
                             ,0xbf,L"Unknown ERasterizerCullMode %d"), aVar8 = aVar7, bVar6)) {
        pcVar3 = (code *)swi(3);
        TVar9.Reference = (FRHIRasterizerState *)(*pcVar3)();
        return (TRefCountPtr<FRHIRasterizerState>)TVar9.Reference;
      }
    }
  }
  fVar1 = (float)this_00[3].OwnerName.Number;
  this_00[2].AtomicFlags.Packed = aVar8;
  uVar5 = in_R8[1].Number;
  this_00[2].OwnerName.Number = (uint)fVar1;
  *(FRHIResource **)param_1 = this_00;
  this_00[1].OwnerName.Number = (uint)((char)uVar5 == '\x01');
  *(int *)((longlong)&this_00[3]._padding_ + 4) = (int)this_00[4]._padding_;
  this_00[2].OwnerName.ComparisonIndex.Value = (uint)(fVar1 != 0.0);
  FRHIResource::AddRef(this_00);
  return (TRefCountPtr<FRHIRasterizerState>)(FRHIRasterizerState *)param_1;
}

// RHICreateRayTracingShader @ 145bb5ec0

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

TRefCountPtr<FRHIRayTracingShader> __thiscall
FVulkanDynamicRHI::RHICreateRayTracingShader
          (FVulkanDynamicRHI *this,TArrayView<unsigned_char_const_,int> *param_1,FSHAHash *param_2,
          EShaderFrequency param_3)

{
  code *pcVar1;
  bool bVar2;
  TRefCountPtr<FRHIRayTracingShader> TVar3;
  FVulkanRayTracingShader *this_00;
  char in_stack_00000028;
  TArrayView<unsigned_char_const_,int> local_48;
  TArrayView<unsigned_char_const_,int> local_38;
  TArrayView<unsigned_char_const_,int> local_28;
  TArrayView<unsigned_char_const_,int> local_18;
  
  if (in_stack_00000028 == '\x06') {
    local_18.DataPtr = *(uchar **)param_2->Hash;
    local_18._8_8_ = *(undefined8 *)(param_2->Hash + 8);
    this_00 = FVulkanShaderFactory::CreateRayTracingShader<6>
                        (&this->Device->ShaderFactory,&local_18,this->Device);
  }
  else if (in_stack_00000028 == '\a') {
    local_28.DataPtr = *(uchar **)param_2->Hash;
    local_28._8_8_ = *(undefined8 *)(param_2->Hash + 8);
    this_00 = FVulkanShaderFactory::CreateRayTracingShader<7>
                        (&this->Device->ShaderFactory,&local_28,this->Device);
  }
  else if (in_stack_00000028 == '\b') {
    local_38.DataPtr = *(uchar **)param_2->Hash;
    local_38._8_8_ = *(undefined8 *)(param_2->Hash + 8);
    this_00 = FVulkanShaderFactory::CreateRayTracingShader<8>
                        (&this->Device->ShaderFactory,&local_38,this->Device);
  }
  else {
    if (in_stack_00000028 != '\t') {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanShaders.cpp"
                         ,0x329,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        TVar3.Reference = (FRHIRayTracingShader *)(*pcVar1)();
        return (TRefCountPtr<FRHIRayTracingShader>)TVar3.Reference;
      }
      param_1->DataPtr = (uchar *)0x0;
      return (TRefCountPtr<FRHIRayTracingShader>)(FRHIRayTracingShader *)param_1;
    }
    local_48.DataPtr = *(uchar **)param_2->Hash;
    local_48._8_8_ = *(undefined8 *)(param_2->Hash + 8);
    this_00 = FVulkanShaderFactory::CreateRayTracingShader<9>
                        (&this->Device->ShaderFactory,&local_48,this->Device);
  }
  param_1->DataPtr = (uchar *)this_00;
  if (this_00 != (FVulkanRayTracingShader *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_00);
  }
  return (TRefCountPtr<FRHIRayTracingShader>)(FRHIRayTracingShader *)param_1;
}

// RHICreateResourceCollection @ 145bb5fe0

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
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TRefCountPtr<FRHIResourceCollection> __thiscall
FVulkanDynamicRHI::RHICreateResourceCollection
          (FVulkanDynamicRHI *this,FRHICommandListBase *param_1,
          TArrayView<FRHIResourceCollectionMember_const_,int> *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  FRHIResource *this_00;
  void *pvVar3;
  FRHIResourceCollection *this_01;
  FRHIBuffer *this_02;
  ulonglong uVar4;
  undefined8 *in_R9;
  FLLMScope local_res10 [5];
  FMemScope local_res20;
  FRHIResource *local_58 [2];
  TArrayView<FRHIResourceCollectionMember_const_,int> local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  
  this_01 = ::operator_new(0x38);
  if (this_01 == (FRHIResourceCollection *)0x0) {
    (param_1->MemManager).Top = (uchar *)0x0;
    return (TRefCountPtr<FRHIResourceCollection>)(FRHIResourceCollection *)param_1;
  }
  local_48.DataPtr = (FRHIResourceCollectionMember *)*in_R9;
  local_48._8_8_ = in_R9[1];
  FRHIResourceCollection::FRHIResourceCollection(this_01,&local_48);
  local_48.DataPtr = (FRHIResourceCollectionMember *)*in_R9;
  local_48._8_8_ = in_R9[1];
  this_01->_padding_ = (longlong)&___7FGenericResourceCollection_RHICore_UE__6B_;
  this_02 = UE::RHICore::CreateResourceCollectionBuffer((FRHICommandListBase *)param_2,&local_48);
  this_01[1]._padding_ = (longlong)this_02;
  if (this_02 != (FRHIBuffer *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_02);
  }
  pvVar3 = ThreadLocalStoragePointer;
  uVar4 = (ulonglong)_tls_index;
  plVar1 = &this_01[1]._padding_;
  *plVar1 = 0;
  lVar2 = this_01[1]._padding_;
  local_48.ArrayNum = 0;
  local_48._12_4_ = 0;
  local_48.DataPtr = (FRHIResourceCollectionMember *)&DAT_00040000;
  local_38 = 0x40000;
  uStack_30 = 0;
  if (*(int *)(*(longlong *)((longlong)pvVar3 + uVar4 * 8) + 0x9d4c) <
      `public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
                      ::__l2::LLMScope_Name977,L"RHIMisc/CreateShaderResourceView");
      _Init_thread_footer(&`public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FLLMScope::FLLMScope
            (local_res10,
             `public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
             ::__l2::LLMScope_Name977,false,None,Default,true);
  FMemScope::FMemScope
            (&local_res20,
             &`public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
              ::__l2::LLMScope_Name977,true);
  (**(code **)(GDynamicRHI->_padding_ + 0x1b0))(GDynamicRHI,local_58,param_2,lVar2,&local_38);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res10);
  if ((FRHIResource **)plVar1 != local_58) {
    this_00 = (FRHIResource *)*plVar1;
    *plVar1 = (longlong)local_58[0];
    local_58[0] = (FRHIResource *)0x0;
    if (this_00 == (FRHIResource *)0x0) goto LAB_145bb6158;
    FRHIResource::Release(this_00);
  }
  if (local_58[0] != (FRHIResource *)0x0) {
    FRHIResource::Release(local_58[0]);
  }
LAB_145bb6158:
  (param_1->MemManager).Top = (uchar *)this_01;
  FRHIResource::AddRef((FRHIResource *)this_01);
  return (TRefCountPtr<FRHIResourceCollection>)(FRHIResourceCollection *)param_1;
}

// RHICreateSamplerState @ 145bb61d0

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
/* WARNING: Enum "VkFilter": Some values do not have unique names */
/* WARNING: Enum "VkSamplerAddressMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TRefCountPtr<FRHISamplerState> __thiscall
FVulkanDynamicRHI::RHICreateSamplerState
          (FVulkanDynamicRHI *this,FSamplerStateInitializerRHI *param_1)

{
  longlong lVar1;
  FVulkanDevice *pFVar2;
  longlong lVar3;
  FVulkanDevice *this_00;
  undefined8 uVar4;
  bool bVar5;
  VkResult VVar6;
  int iVar7;
  ERHIBindlessConfiguration EVar8;
  FRHIResource *pFVar9;
  FRHIDescriptorHandle FVar10;
  undefined1 *puVar11;
  undefined8 *puVar12;
  FSamplerStateInitializerRHI *in_R8;
  uint local_res8 [2];
  VkSampler_T local_res20 [8];
  FRHIResource *local_98;
  uint *local_90;
  FRHIResource **local_88;
  VkSamplerCreateInfo local_78;
  
  FVulkanSamplerState::SetupSamplerCreateInfo(in_R8,this->Device,&local_78);
  local_res8[0] = (*FCrc::MemCrc32Func)(&local_78,0x50,0);
  EnterCriticalSection((LPCRITICAL_SECTION)&GSamplerHashLock);
  pFVar2 = this->Device;
  if (*(int *)&(pFVar2->SamplerMap).field_0x8 != *(int *)&(pFVar2->SamplerMap).field_0x34) {
    puVar11 = *(undefined1 **)&(pFVar2->SamplerMap).field_0x40;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = &(pFVar2->SamplerMap).field_0x38;
    }
    iVar7 = *(int *)(puVar11 +
                    (ulonglong)(*(int *)&(pFVar2->SamplerMap).field_0x48 - 1U & local_res8[0]) * 4);
    if (iVar7 != -1) {
      lVar3 = *(longlong *)&(pFVar2->SamplerMap).field_0x0;
      do {
        lVar1 = lVar3 + (longlong)iVar7 * 0x18;
        if (*(uint *)(lVar3 + (longlong)iVar7 * 0x18) == local_res8[0]) {
          puVar12 = (undefined8 *)(lVar1 + 8);
          if (lVar1 == 0) {
            puVar12 = (undefined8 *)0x0;
          }
          if (puVar12 != (undefined8 *)0x0) {
            pFVar9 = (FRHIResource *)*puVar12;
            *(FRHIResource **)param_1 = pFVar9;
            if (pFVar9 != (FRHIResource *)0x0) {
              FRHIResource::AddRef(pFVar9);
            }
            LeaveCriticalSection((LPCRITICAL_SECTION)&GSamplerHashLock);
            return (TRefCountPtr<FRHISamplerState>)(FRHISamplerState *)param_1;
          }
          break;
        }
        iVar7 = *(int *)(lVar1 + 0x10);
      } while (iVar7 != -1);
    }
  }
  pFVar9 = ::operator_new(0x30);
  if (pFVar9 == (FRHIResource *)0x0) {
    local_98 = (FRHIResource *)0x0;
  }
  else {
    this_00 = this->Device;
    FRHIResource::FRHIResource(pFVar9,RRT_SamplerState);
    pFVar9[1]._padding_ = 0;
    pFVar9->_padding_ = (longlong)&___7FVulkanSamplerState__6B_;
    pFVar9[1].AtomicFlags.Packed = (atomic<unsigned_int>)0x0;
    pFVar9[1].ResourceType = RRT_None;
    pFVar9[1].field_0xd = 0;
    pFVar9[1]._padding_ = 0;
    pFVar9[1].OwnerName.ComparisonIndex = 0;
    pFVar9[1].ResourceType = ~RRT_None;
    pFVar9[1].field_0xd = 0xff;
    pFVar9[1]._padding_ = -1;
    *(undefined1 *)&pFVar9[1].OwnerName.ComparisonIndex.Value = 9;
    *(undefined1 *)&pFVar9[1].OwnerName.Number = 0;
    VVar6 = (*VulkanDynamicAPI::vkCreateSampler)
                      (this_00->Device,&local_78,&VulkanRHI::GAllocationCallbacks,
                       (VkSampler_T **)(pFVar9 + 1));
    if (VVar6 != VK_SUCCESS) {
      VulkanRHI::VerifyVulkanResult
                (VVar6,
                 "VulkanRHI::vkCreateSampler(InDevice.GetHandle(), &InInfo, VULKAN_CPU_ALLOCATOR, &Sampler)"
                 ,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanState.cpp"
                 ,0xe6);
    }
    if ((int)GMaxRHIFeatureLevel < 2) {
      LOCK();
      UNLOCK();
      iVar7 = GVulkanSamplerHandleIdCounter._0_4_;
      GVulkanSamplerHandleIdCounter =
           (TAtomic<unsigned___int64>)((longlong)GVulkanSamplerHandleIdCounter + 1);
      pFVar9[1].AtomicFlags.Packed = (atomic<unsigned_int>)(iVar7 + 1);
    }
    bVar5 = FVulkanDevice::SupportsBindless(this_00);
    if (bVar5) {
      EVar8 = RHIGetRuntimeBindlessConfiguration(GMaxRHIShaderPlatform);
      if (EVar8 != Disabled) {
        FVar10 = FVulkanBindlessDescriptorManager::AllocateDescriptor
                           (this_00->BindlessDescriptorManager,local_res20);
        uVar4 = *(undefined8 *)FVar10;
        pFVar9[1].ResourceType = (char)uVar4;
        pFVar9[1].field_0xd = (char)((ulonglong)uVar4 >> 8);
        pFVar9[1]._padding_ = (short)((ulonglong)uVar4 >> 0x10);
        pFVar9[1].OwnerName.ComparisonIndex = (FNameEntryId)(int)((ulonglong)uVar4 >> 0x20);
      }
    }
    local_98 = pFVar9;
    FRHIResource::AddRef(pFVar9);
  }
  local_90 = local_res8;
  local_88 = &local_98;
  TSet<TTuple<unsigned_int,TRefCountPtr<FRHISamplerState>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TRefCountPtr<FRHISamplerState>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_const_&,TRefCountPtr<FRHISamplerState>_const_&>_>
            ((TSet<TTuple<unsigned_int,TRefCountPtr<FRHISamplerState>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TRefCountPtr<FRHISamplerState>,0>,FDefaultSetAllocator>
              *)&pFVar2->SamplerMap,
             (TPairInitializer<unsigned_int_const_&,TRefCountPtr<FRHISamplerState>_const_&> *)
             local_res20,(bool *)&local_90);
  *(FRHIResource **)param_1 = local_98;
  local_98 = (FRHIResource *)0x0;
  LeaveCriticalSection((LPCRITICAL_SECTION)&GSamplerHashLock);
  return (TRefCountPtr<FRHISamplerState>)(FRHISamplerState *)param_1;
}

// RHICreateShaderResourceView @ 145bb6440

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
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TRefCountPtr<FRHIShaderResourceView> __thiscall
FVulkanDynamicRHI::RHICreateShaderResourceView
          (FVulkanDynamicRHI *this,FRHICommandListBase *param_1,FRHIViewableResource *param_2,
          FRHIViewDesc *param_3)

{
  FVulkanShaderResourceView *pFVar1;
  FRHIViewDesc *in_stack_00000028;
  
  pFVar1 = ::operator_new(0x80);
  if (pFVar1 == (FVulkanShaderResourceView *)0x0) {
    (param_1->MemManager).Top = (uchar *)0x0;
  }
  else {
    pFVar1 = FVulkanShaderResourceView::FVulkanShaderResourceView
                       (pFVar1,(FRHICommandListBase *)param_2,this->Device,
                        (FRHIViewableResource *)param_3,in_stack_00000028);
    (param_1->MemManager).Top = (uchar *)pFVar1;
    if (pFVar1 != (FVulkanShaderResourceView *)0x0) {
      FRHIResource::AddRef((FRHIResource *)pFVar1);
    }
  }
  return (TRefCountPtr<FRHIShaderResourceView>)(FRHIShaderResourceView *)param_1;
}

// RHICreateStagingBuffer @ 145bb64d0

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

TRefCountPtr<FRHIStagingBuffer> __thiscall
FVulkanDynamicRHI::RHICreateStagingBuffer(FVulkanDynamicRHI *this)

{
  FRHIStagingBuffer *pFVar1;
  FRHIResource *this_00;
  undefined1 in_DL;
  undefined7 in_register_00000011;
  
  pFVar1 = (FRHIStagingBuffer *)CONCAT71(in_register_00000011,in_DL);
  this_00 = ::operator_new(0x38);
  if (this_00 != (FRHIResource *)0x0) {
    FRHIResource::FRHIResource(this_00,RRT_StagingBuffer);
    *(undefined1 *)&this_00[1]._padding_ = 0;
    this_00->_padding_ = (longlong)&___7FVulkanStagingBuffer__6B_;
    pFVar1->_padding_ = (longlong)this_00;
    this_00[1].AtomicFlags = (atomic<unsigned_int>)0x0;
    this_00[1].ResourceType = RRT_None;
    this_00[1].field_0xd = 0;
    this_00[1]._padding_ = 0;
    this_00[1].OwnerName.ComparisonIndex.Value = 0;
    FRHIResource::AddRef(this_00);
    return (TRefCountPtr<FRHIStagingBuffer>)pFVar1;
  }
  pFVar1->_padding_ = 0;
  return (TRefCountPtr<FRHIStagingBuffer>)pFVar1;
}

// RHICreateTexture2DArrayFromResource @ 145bb6540

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
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */

TRefCountPtr<FRHITexture> __thiscall
FVulkanDynamicRHI::RHICreateTexture2DArrayFromResource
          (FVulkanDynamicRHI *this,EPixelFormat param_1,uint param_2,uint param_3,uint param_4,
          uint param_5,uint param_6,VkImage_T *param_7,ETextureCreateFlags param_8,
          FClearValueBinding *param_9)

{
  FVulkanTexture *pFVar1;
  undefined7 in_register_00000011;
  FRHITexture *pFVar2;
  undefined8 *in_stack_00000058;
  undefined1 auStackY_1e8 [32];
  TIntPoint<int>_u_0 local_1b8;
  undefined8 local_1b0;
  FRHITextureDesc local_1a8;
  wchar_t *local_158;
  undefined8 local_150;
  FResourceBulkDataInterface *local_148;
  FName local_140;
  FName local_138;
  FRHITextureDesc local_128;
  wchar_t *local_d8;
  ERHIAccess local_d0;
  ERHITextureInitAction local_cc;
  FResourceBulkDataInterface *local_c8;
  FName local_c0;
  FName local_b8;
  FRHITextureCreateDesc local_a8;
  ulonglong local_28;
  
  pFVar2 = (FRHITexture *)CONCAT71(in_register_00000011,param_1);
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  local_1a8.Flags = None;
  local_1a8.ClearValue.Value._4_8_ = 0;
  local_1a8.ClearValue._0_8_ = 1;
  local_1a8.Depth = 1;
  local_1a8.GPUMask.GPUMask = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
  local_1a8.Dimension = Texture2DArray;
  local_158 = L"VulkanTextureArrayFromResource";
  local_1b8._s_0.Y = param_4;
  local_1b8._s_0.X = param_3;
  local_1a8.Extent.field0_0x0 = local_1b8;
  local_1a8.AliasableFormats.ArrayMax = 1;
  local_1a8.ArraySize = (ushort)param_5;
  local_1a8.ClearValue.Value.Color[3] = 0.0;
  local_1a8.ExtData = 0;
  local_1a8.NumMips = '\x01';
  local_1a8.NumSamples = '\x01';
  local_1a8.UAVFormat = PF_Unknown;
  local_1a8.FastVRAMPercentage = 0xff;
  local_1a8.AliasableFormats.AllocatorInstance.SecondaryData = (ForElementType<EPixelFormat>)0x0;
  local_1a8.AliasableFormats.ArrayNum = 0;
  local_150 = 0;
  local_148 = (FResourceBulkDataInterface *)0x0;
  local_140.ComparisonIndex.Value = 0;
  local_140.Number = 0;
  local_138.ComparisonIndex.Value = 0;
  local_138.Number = 0;
  local_1a8.Format = (EPixelFormat)param_2;
  FRHITextureDesc::FRHITextureDesc(&local_128,&local_1a8);
  local_d8 = local_158;
  local_cc = local_150._4_4_;
  local_c0 = local_140;
  local_b8 = local_138;
  local_d0 = (ERHIAccess)local_150;
  local_c8 = local_148;
  if (local_1a8.AliasableFormats.AllocatorInstance.SecondaryData !=
      (ForElementType<EPixelFormat>)0x0) {
    FMemory::Free((void *)local_1a8.AliasableFormats.AllocatorInstance.SecondaryData);
  }
  local_128.Flags = (ETextureCreateFlags)param_9;
  local_128.ClearValue._0_8_ = *in_stack_00000058;
  local_128.ClearValue.Value._4_8_ = in_stack_00000058[1];
  local_128.ClearValue.Value.Color[3] = (float)*(undefined4 *)(in_stack_00000058 + 2);
  local_128.NumMips = (uchar)param_6;
  local_128.NumSamples = (uchar)param_7;
  if (local_d0 == None) {
    local_d0 = RHIGetDefaultResourceState
                         ((ETextureCreateFlags)param_9,local_c8 != (FResourceBulkDataInterface *)0x0
                         );
  }
  FRHITextureDesc::FRHITextureDesc((FRHITextureDesc *)&local_a8,&local_128);
  local_a8.DebugName = local_d8;
  local_a8.InitialState = local_d0;
  local_a8.InitAction = local_cc;
  local_a8.BulkData = local_c8;
  local_a8.ClassName = local_c0;
  local_a8.OwnerName = local_b8;
  if (local_128.AliasableFormats.AllocatorInstance.SecondaryData !=
      (ForElementType<EPixelFormat>)0x0) {
    FMemory::Free((void *)local_128.AliasableFormats.AllocatorInstance.SecondaryData);
  }
  pFVar1 = ::operator_new(600);
  if (pFVar1 == (FVulkanTexture *)0x0) {
    pFVar2->_padding_ = 0;
  }
  else {
    local_1b8 = (TIntPoint<int>_u_0)0x0;
    local_1b0 = 0;
    pFVar1 = FVulkanTexture::FVulkanTexture
                       (pFVar1,this->Device,&local_a8,(VkImage_T *)param_8,
                        (FVulkanRHIExternalImageDeleteCallbackInfo *)&local_1b8._s_0);
    pFVar2->_padding_ = (longlong)pFVar1;
    if (pFVar1 != (FVulkanTexture *)0x0) {
      FRHIResource::AddRef((FRHIResource *)pFVar1);
    }
  }
  if ((void *)local_a8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_a8._padding_);
  }
  return (TRefCountPtr<FRHITexture>)pFVar2;
}

// RHICreateTexture2DFromResource @ 145bb6790

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
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */

TRefCountPtr<FRHITexture> __thiscall
FVulkanDynamicRHI::RHICreateTexture2DFromResource
          (FVulkanDynamicRHI *this,EPixelFormat param_1,uint param_2,uint param_3,uint param_4,
          uint param_5,VkImage_T *param_6,ETextureCreateFlags param_7,FClearValueBinding *param_8,
          FVulkanRHIExternalImageDeleteCallbackInfo *param_9)

{
  _func___cdecl_void_void_ptr *p_Var1;
  ERHIAccess EVar2;
  FRHITextureCreateDesc *pFVar3;
  FVulkanTexture *pFVar4;
  undefined7 in_register_00000011;
  FRHITexture *pFVar5;
  FVulkanRHIExternalImageDeleteCallbackInfo *in_stack_00000058;
  undefined1 auStackY_168 [32];
  FRHITextureCreateDesc local_138;
  FRHITextureCreateDesc local_b8;
  ulonglong local_38;
  
  pFVar5 = (FRHITexture *)CONCAT71(in_register_00000011,param_1);
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pFVar3 = FRHITextureCreateDesc::Create2D
                     (&local_b8,L"VulkanTexture2DFromResource",param_3,param_4,(EPixelFormat)param_2
                     );
  p_Var1 = param_9->Function;
  pFVar3->_padding_ = (longlong)param_9->UserData;
  pFVar3->_padding_ = (longlong)p_Var1;
  *(undefined4 *)&pFVar3->_padding_ = *(undefined4 *)&param_9[1].UserData;
  *(undefined1 *)&pFVar3->_padding_ = (undefined1)param_5;
  *(undefined1 *)((longlong)&pFVar3->_padding_ + 1) = param_6._0_1_;
  pFVar3->_padding_ = (longlong)param_8;
  if (pFVar3->InitialState == None) {
    EVar2 = RHIGetDefaultResourceState
                      ((ETextureCreateFlags)param_8,
                       pFVar3->BulkData != (FResourceBulkDataInterface *)0x0);
    pFVar3->InitialState = EVar2;
  }
  FRHITextureDesc::FRHITextureDesc((FRHITextureDesc *)&local_138,(FRHITextureDesc *)pFVar3);
  local_138.DebugName = pFVar3->DebugName;
  local_138.InitialState = pFVar3->InitialState;
  local_138.InitAction = pFVar3->InitAction;
  local_138.BulkData = pFVar3->BulkData;
  local_138.ClassName = pFVar3->ClassName;
  local_138.OwnerName = pFVar3->OwnerName;
  if ((void *)local_b8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_b8._padding_);
  }
  pFVar4 = ::operator_new(600);
  if (pFVar4 == (FVulkanTexture *)0x0) {
    pFVar5->_padding_ = 0;
  }
  else {
    pFVar4 = FVulkanTexture::FVulkanTexture
                       (pFVar4,this->Device,&local_138,(VkImage_T *)param_7,in_stack_00000058);
    pFVar5->_padding_ = (longlong)pFVar4;
    if (pFVar4 != (FVulkanTexture *)0x0) {
      FRHIResource::AddRef((FRHIResource *)pFVar4);
    }
  }
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return (TRefCountPtr<FRHITexture>)pFVar5;
}

// RHICreateTextureCubeFromResource @ 145bb6920

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
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */

TRefCountPtr<FRHITexture> __thiscall
FVulkanDynamicRHI::RHICreateTextureCubeFromResource
          (FVulkanDynamicRHI *this,EPixelFormat param_1,uint param_2,bool param_3,uint param_4,
          uint param_5,VkImage_T *param_6,ETextureCreateFlags param_7,FClearValueBinding *param_8)

{
  FVulkanTexture *pFVar1;
  undefined7 in_register_00000011;
  FRHITexture *pFVar2;
  undefined4 uVar3;
  undefined7 in_register_00000089;
  undefined8 *in_stack_00000050;
  undefined1 auStackY_168 [32];
  TIntPoint<int>_u_0 local_138;
  undefined8 local_130;
  FRHITextureDesc local_128;
  wchar_t *local_d8;
  ERHIAccess local_d0;
  ERHITextureInitAction local_cc;
  FResourceBulkDataInterface *local_c8;
  FName local_c0;
  FName local_b8;
  FRHITextureCreateDesc local_a8;
  ulonglong local_28;
  
  pFVar2 = (FRHITexture *)CONCAT71(in_register_00000011,param_1);
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_168;
  uVar3 = (undefined4)CONCAT71(in_register_00000089,param_3);
  local_138._s_0.Y = uVar3;
  local_138._s_0.X = uVar3;
  local_128.ExtData = 0;
  local_128.Depth = 1;
  local_128.GPUMask.GPUMask = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
  local_128.ArraySize = (ushort)param_5;
  local_128.Dimension = (1 < param_5) + TextureCube;
  local_128.NumSamples = '\x01';
  local_d8 = L"VulkanTextureCubeFromResource";
  local_128.AliasableFormats.ArrayMax = 1;
  local_128.UAVFormat = PF_Unknown;
  local_128.FastVRAMPercentage = 0xff;
  local_128.AliasableFormats.AllocatorInstance.SecondaryData = (ForElementType<EPixelFormat>)0x0;
  local_128.ClearValue._0_8_ = *in_stack_00000050;
  local_128.ClearValue.Value._4_8_ = in_stack_00000050[1];
  local_128.ClearValue.Value.Color[3] = (float)*(undefined4 *)(in_stack_00000050 + 2);
  local_128.NumMips = (uchar)param_6;
  local_128.AliasableFormats.ArrayNum = 0;
  local_cc = Default;
  local_c8 = (FResourceBulkDataInterface *)0x0;
  local_c0.ComparisonIndex.Value = 0;
  local_c0.Number = 0;
  local_b8.ComparisonIndex.Value = 0;
  local_b8.Number = 0;
  local_128.Format = (EPixelFormat)param_2;
  local_128.Flags = (ETextureCreateFlags)param_8;
  local_128.Extent.field0_0x0 = local_138;
  local_d0 = RHIGetDefaultResourceState((ETextureCreateFlags)param_8,false);
  FRHITextureDesc::FRHITextureDesc((FRHITextureDesc *)&local_a8,&local_128);
  local_a8.DebugName = local_d8;
  local_a8.InitialState = local_d0;
  local_a8.InitAction = local_cc;
  local_a8.BulkData = local_c8;
  local_a8.ClassName = local_c0;
  local_a8.OwnerName = local_b8;
  if (local_128.AliasableFormats.AllocatorInstance.SecondaryData !=
      (ForElementType<EPixelFormat>)0x0) {
    FMemory::Free((void *)local_128.AliasableFormats.AllocatorInstance.SecondaryData);
  }
  pFVar1 = ::operator_new(600);
  if (pFVar1 == (FVulkanTexture *)0x0) {
    pFVar2->_padding_ = 0;
  }
  else {
    local_138 = (TIntPoint<int>_u_0)0x0;
    local_130 = 0;
    pFVar1 = FVulkanTexture::FVulkanTexture
                       (pFVar1,this->Device,&local_a8,(VkImage_T *)param_7,
                        (FVulkanRHIExternalImageDeleteCallbackInfo *)&local_138._s_0);
    pFVar2->_padding_ = (longlong)pFVar1;
    if (pFVar1 != (FVulkanTexture *)0x0) {
      FRHIResource::AddRef((FRHIResource *)pFVar1);
    }
  }
  if ((void *)local_a8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_a8._padding_);
  }
  return (TRefCountPtr<FRHITexture>)pFVar2;
}

// RHICreateTextureInitializer @ 145bb6ad0

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
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */

FRHITextureInitializer * __thiscall
FVulkanDynamicRHI::RHICreateTextureInitializer
          (FVulkanDynamicRHI *this,FRHITextureInitializer *__return_storage_ptr__,
          FRHICommandListBase *param_1,FRHITextureCreateDesc *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  TEventRef<unsigned_int> TVar8;
  FVulkanTexture *pFVar9;
  FRHITextureInitializer *pFVar10;
  FWriteBuffer *pFVar11;
  uchar *puVar12;
  code *pcVar13;
  code *pcVar14;
  ulong64 uVar15;
  FStagingBuffer *this_00;
  void *_Dst;
  void *_Src;
  longlong *plVar16;
  code **ppcVar17;
  undefined ***pppuVar18;
  undefined1 auStackY_4e8 [32];
  undefined8 local_498;
  undefined8 local_490;
  undefined8 local_488 [2];
  FCreateTextureResult local_478;
  FName local_468;
  FName local_460;
  FName local_458;
  FCreateTextureResult local_448;
  FName local_438;
  FName local_430;
  FName local_428 [2];
  FCreateTextureResult local_418;
  FCreateTextureResult local_408;
  code *local_3f8 [2];
  undefined **local_3e8;
  FVulkanTexture *local_3e0;
  FStagingBuffer *local_3d8;
  undefined ***local_3d0;
  undefined1 local_3c8 [48];
  longlong local_398;
  longlong local_388 [3];
  longlong *local_370;
  FRHICommandListBase *local_368;
  FRHITexture *local_360;
  undefined4 *local_338;
  longlong local_330;
  code *local_328 [2];
  undefined **local_318;
  FVulkanTexture *local_310;
  FStagingBuffer *local_308;
  undefined ***local_300;
  code *local_2f8 [2];
  code *local_2e8 [3];
  code **local_2d0;
  code *local_2c8 [2];
  code *local_2b8 [3];
  code **local_2a0;
  undefined1 local_298 [48];
  longlong local_268;
  longlong local_258 [3];
  longlong *local_240;
  FRHICommandListBase *local_238;
  FRHITexture *local_230;
  undefined1 local_208 [48];
  longlong local_1d8;
  longlong local_1c8 [3];
  longlong *local_1b0;
  FRHICommandListBase *local_1a8;
  FRHITexture *local_1a0;
  undefined1 local_178 [48];
  longlong local_148;
  longlong local_138 [3];
  longlong *local_120;
  FRHICommandListBase *local_118;
  FRHITexture *local_110;
  undefined1 local_e8 [48];
  longlong local_b8;
  longlong local_a8 [3];
  longlong *local_90;
  FRHICommandListBase *local_88;
  FRHITexture *local_80;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_4e8;
  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
    local_498 = 0;
    TVar8 = (TEventRef<unsigned_int>)&local_498;
  }
  else {
    ::FName::FName(&local_468,param_2->DebugName);
    TVar8 = FStringTrace::GetNameRef(&local_438);
  }
  uVar1 = *(undefined8 *)TVar8;
  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
    local_490 = 0;
    TVar8 = (TEventRef<unsigned_int>)&local_490;
  }
  else {
    local_458 = param_2->ClassName;
    if (param_2->ClassName == (FName)0x0) {
      FLazyName::Resolve((FLazyName *)
                         &`public:_class_FName___cdecl_FRHITextureCreateDesc::GetTraceClassName(void)const___ptr64'
                          ::__l2::FRHITextureName);
      local_458 = local_460;
    }
    TVar8 = FStringTrace::GetNameRef(&local_430);
  }
  uVar2 = *(undefined8 *)TVar8;
  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
    local_488[0] = 0;
    TVar8 = (TEventRef<unsigned_int>)local_488;
  }
  else {
    TVar8 = FStringTrace::GetNameRef(local_428);
  }
  uVar3 = *(undefined8 *)TVar8;
  bVar5 = false;
  if ((-1 < MetadataChannel->Enabled) && (-1 < AssetMetadataChannel->Enabled)) {
    UE::Trace::Private::FLogScope::ScopedEnter<FMetadataAssetFields>((TLogScope<0> *)&local_338);
    bVar5 = true;
    *local_338 = (int)uVar1;
    local_338[1] = (int)uVar2;
    local_338[2] = (int)uVar3;
    *(undefined8 *)(local_330 + 0x28) = *(undefined8 *)(local_330 + 0x20);
  }
  if (param_2->InitAction == Default) {
    BeginCreateTextureInternal(this,&local_418,param_2,(FRHITransientHeapAllocation *)0x0);
    local_408.Texture = local_418.Texture;
    local_408.DefaultLayout = local_418.DefaultLayout;
    local_408.bTransientResource = local_418.bTransientResource;
    local_408.bClear = local_418.bClear;
    local_408._14_2_ = local_418._14_2_;
    pFVar9 = FinalizeCreateTextureInternal(this,param_1,&local_408);
    pFVar10 = (FRHITextureInitializer *)
              UE::RHICore::FDefaultTextureInitializer::FDefaultTextureInitializer
                        ((FDefaultTextureInitializer *)local_208,param_1,(FRHITexture *)pFVar9);
    FRHITextureInitializer::FRHITextureInitializer(__return_storage_ptr__,pFVar10);
    if ((local_1a8 != (FRHICommandListBase *)0x0) && (local_1a0 != (FRHITexture *)0x0)) {
      FRHITextureInitializer::RemovePendingTextureUpload((FRHITextureInitializer *)local_208);
    }
    if (local_1d8 != 0) {
      plVar16 = local_1c8;
      if (local_1b0 != (longlong *)0x0) {
        plVar16 = local_1b0;
      }
      (**(code **)(*plVar16 + 0x10))();
    }
    if (local_208._0_8_ != 0) {
      plVar16 = (longlong *)(local_208 + 0x10);
      if ((longlong *)local_208._40_8_ != (longlong *)0x0) {
        plVar16 = (longlong *)local_208._40_8_;
      }
      (**(code **)(*plVar16 + 0x10))();
    }
    if (!bVar5) {
      return __return_storage_ptr__;
    }
    lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar4 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    pFVar11 = *(FWriteBuffer **)(lVar4 + 0x20);
    if ((int)pFVar11 - *(int *)&pFVar11->Cursor < 1) {
      pFVar11 = UE::Trace::Private::Writer_NextBuffer();
      *pFVar11->Cursor = '\n';
      pFVar11->Cursor = pFVar11->Cursor + 1;
      pFVar11->Committed = pFVar11->Cursor;
      return __return_storage_ptr__;
    }
  }
  else {
    if (((param_2->InitialState & SRVMask) == None) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("EnumHasAnyFlags(CreateDesc.InitialState, ERHIAccess::SRVMask)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                           ,0x5a6,L""), bVar6)) {
      pcVar13 = (code *)swi(3);
      pFVar10 = (FRHITextureInitializer *)(*pcVar13)();
      return pFVar10;
    }
    BeginCreateTextureInternal(this,&local_478,param_2,(FRHITransientHeapAllocation *)0x0);
    if ((((((this->Device->OptionalDeviceExtensions).field0_0x0.Packed & 0x400000000000000) == 0) ||
         (local_478.bClear != false)) || (local_478.Texture == (FVulkanTexture *)0x0)) ||
       (((local_478.Texture)->ImageUsageFlags & 0x400000) == 0)) {
      local_448._8_8_ =
           CONCAT26(local_478._14_2_,
                    CONCAT15(local_478.bClear,
                             CONCAT14(local_478.bTransientResource,local_478.DefaultLayout)));
      local_448.Texture = local_478.Texture;
      pFVar9 = FinalizeCreateTextureInternal(this,param_1,&local_448);
      uVar15 = UE::RHITextureUtils::CalculateTextureSize((FRHITextureDesc *)param_2);
      this_00 = VulkanRHI::FStagingManager::AcquireBuffer
                          (&this->Device->StagingManager,(uint)uVar15,1,
                           VK_MEMORY_PROPERTY_HOST_COHERENT_BIT);
      _Dst = VulkanRHI::FStagingBuffer::GetMappedPointer(this_00);
      local_3e0 = pFVar9;
      local_3d8 = this_00;
      if (pFVar9 == (FVulkanTexture *)0x0) {
        local_3d0 = (undefined ***)0x0;
        local_3e8 = &UE::Core::Private::Function::
                     TFunction_OwnedObject<`FVulkanDynamicRHI::RHICreateTextureInitializer'::`42'::<lambda_4>,1,0>
                     ::_vftable_;
        local_3f8[0] = UE::Core::Private::Function::
                       TFunctionRefCaller<`FVulkanDynamicRHI::RHICreateTextureInitializer'::__l42::<lambda_4>,FRHITextureSubresourceInitializer,FRHITextureInitializer::FSubresourceIndex>
                       ::Call;
      }
      else {
        FRHIResource::AddRef((FRHIResource *)pFVar9);
        local_3d0 = (undefined ***)0x0;
        local_3e8 = &UE::Core::Private::Function::
                     TFunction_OwnedObject<`FVulkanDynamicRHI::RHICreateTextureInitializer'::`42'::<lambda_4>,1,0>
                     ::_vftable_;
        local_3f8[0] = UE::Core::Private::Function::
                       TFunctionRefCaller<`FVulkanDynamicRHI::RHICreateTextureInitializer'::__l42::<lambda_4>,FRHITextureSubresourceInitializer,FRHITextureInitializer::FSubresourceIndex>
                       ::Call;
        FRHIResource::AddRef((FRHIResource *)pFVar9);
      }
      local_300 = (undefined ***)0x0;
      local_318 = &UE::Core::Private::Function::
                   TFunction_OwnedObject<`FVulkanDynamicRHI::RHICreateTextureInitializer'::`42'::<lambda_3>,1,0>
                   ::_vftable_;
      local_328[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<`FVulkanDynamicRHI::RHICreateTextureInitializer'::__l42::<lambda_3>,TRefCountPtr<FRHITexture>,FRHICommandListBase_&>
                     ::Call;
      local_310 = pFVar9;
      local_308 = this_00;
      FRHITextureInitializer::FRHITextureInitializer
                ((FRHITextureInitializer *)local_3c8,param_1,(FRHITexture *)pFVar9,_Dst,uVar15,
                 (TUniqueFunction<TRefCountPtr<FRHITexture>___cdecl(FRHICommandListBase_&)> *)
                 local_328,
                 (TUniqueFunction<FRHITextureSubresourceInitializer___cdecl(FRHITextureInitializer::FSubresourceIndex)>
                  *)local_3f8);
      if (local_328[0] != (code *)0x0) {
        pppuVar18 = &local_318;
        if (local_300 != (undefined ***)0x0) {
          pppuVar18 = local_300;
        }
        (*(code *)(*pppuVar18)[2])();
      }
      if (local_3f8[0] != (code *)0x0) {
        pppuVar18 = &local_3e8;
        if (local_3d0 != (undefined ***)0x0) {
          pppuVar18 = local_3d0;
        }
        (*(code *)(*pppuVar18)[2])();
      }
      if (param_2->InitAction == BulkData) {
        if ((param_2->BulkData == (FResourceBulkDataInterface *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("CreateDesc.BulkData",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                               ,0x605,L""), bVar6)) {
          pcVar13 = (code *)swi(3);
          pFVar10 = (FRHITextureInitializer *)(*pcVar13)();
          return pFVar10;
        }
        uVar7 = (**(code **)((longlong)*param_2->BulkData + 0x10))();
        if ((uVar15 < uVar7) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("UploadMemorySize >= CreateDesc.BulkData->GetResourceBulkDataSize()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                               ,0x606,L""), bVar6)) {
          pcVar13 = (code *)swi(3);
          pFVar10 = (FRHITextureInitializer *)(*pcVar13)();
          return pFVar10;
        }
        uVar7 = (**(code **)((longlong)*param_2->BulkData + 0x10))();
        _Src = (void *)(**(code **)((longlong)*param_2->BulkData + 8))();
        memcpy(_Dst,_Src,(ulonglong)uVar7);
        (**(code **)((longlong)*param_2->BulkData + 0x18))();
        FRHITextureInitializer::FRHITextureInitializer
                  (__return_storage_ptr__,(FRHITextureInitializer *)local_3c8);
        if ((local_368 != (FRHICommandListBase *)0x0) && (local_360 != (FRHITexture *)0x0)) {
          FRHITextureInitializer::RemovePendingTextureUpload((FRHITextureInitializer *)local_3c8);
        }
        if (local_398 != 0) {
          plVar16 = local_388;
          if (local_370 != (longlong *)0x0) {
            plVar16 = local_370;
          }
          (**(code **)(*plVar16 + 0x10))();
        }
        if (local_3c8._0_8_ != 0) {
          plVar16 = (longlong *)(local_3c8 + 0x10);
          if ((longlong *)local_3c8._40_8_ != (longlong *)0x0) {
            plVar16 = (longlong *)local_3c8._40_8_;
          }
          (**(code **)(*plVar16 + 0x10))();
        }
        if (!bVar5) {
          return __return_storage_ptr__;
        }
        lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        if (*(char *)(lVar4 + 0x9d48) == '\0') {
          __dyn_tls_on_demand_init();
        }
        pFVar11 = *(FWriteBuffer **)(lVar4 + 0x20);
        if ((int)pFVar11 - *(int *)&pFVar11->Cursor < 1) {
          pFVar11 = UE::Trace::Private::Writer_NextBuffer();
          *pFVar11->Cursor = '\n';
          pFVar11->Cursor = pFVar11->Cursor + 1;
          pFVar11->Committed = pFVar11->Cursor;
          return __return_storage_ptr__;
        }
      }
      else {
        if (param_2->InitAction != Initializer) {
          if ((local_368 != (FRHICommandListBase *)0x0) && (local_360 != (FRHITexture *)0x0)) {
            FRHITextureInitializer::RemovePendingTextureUpload((FRHITextureInitializer *)local_3c8);
          }
          if (local_398 != 0) {
            plVar16 = local_388;
            if (local_370 != (longlong *)0x0) {
              plVar16 = local_370;
            }
            (**(code **)(*plVar16 + 0x10))();
          }
          if (local_3c8._0_8_ != 0) {
            plVar16 = (longlong *)(local_3c8 + 0x10);
            if ((longlong *)local_3c8._40_8_ != (longlong *)0x0) {
              plVar16 = (longlong *)local_3c8._40_8_;
            }
            (**(code **)(*plVar16 + 0x10))();
          }
          goto LAB_145bb759c;
        }
        FRHITextureInitializer::FRHITextureInitializer
                  (__return_storage_ptr__,(FRHITextureInitializer *)local_3c8);
        if ((local_368 != (FRHICommandListBase *)0x0) && (local_360 != (FRHITexture *)0x0)) {
          FRHITextureInitializer::RemovePendingTextureUpload((FRHITextureInitializer *)local_3c8);
        }
        if (local_398 != 0) {
          plVar16 = local_388;
          if (local_370 != (longlong *)0x0) {
            plVar16 = local_370;
          }
          (**(code **)(*plVar16 + 0x10))();
        }
        if (local_3c8._0_8_ != 0) {
          plVar16 = (longlong *)(local_3c8 + 0x10);
          if ((longlong *)local_3c8._40_8_ != (longlong *)0x0) {
            plVar16 = (longlong *)local_3c8._40_8_;
          }
          (**(code **)(*plVar16 + 0x10))();
        }
        if (!bVar5) {
          return __return_storage_ptr__;
        }
        lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        if (*(char *)(lVar4 + 0x9d48) == '\0') {
          __dyn_tls_on_demand_init();
        }
        pFVar11 = *(FWriteBuffer **)(lVar4 + 0x20);
        if ((int)pFVar11 - *(int *)&pFVar11->Cursor < 1) {
          pFVar11 = UE::Trace::Private::Writer_NextBuffer();
        }
      }
    }
    else {
      local_478.DefaultLayout = VK_IMAGE_LAYOUT_UNDEFINED;
      local_448._8_8_ =
           (ulonglong)CONCAT22(local_478._14_2_,(ushort)local_478.bTransientResource) << 0x20;
      local_448.Texture = local_478.Texture;
      pFVar9 = FinalizeCreateTextureInternal(this,param_1,&local_448);
      if (param_2->InitAction == BulkData) {
        if ((param_2->BulkData == (FResourceBulkDataInterface *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("CreateDesc.BulkData",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                               ,0x5b9,L"InitAction was BulkData, but none was specified!"), bVar6))
        {
          pcVar13 = (code *)swi(3);
          pFVar10 = (FRHITextureInitializer *)(*pcVar13)();
          return pFVar10;
        }
        uVar7 = (**(code **)((longlong)*param_2->BulkData + 0x10))();
        puVar12 = (uchar *)(**(code **)((longlong)*param_2->BulkData + 8))();
        FVulkanTexture::HostUploadInitialData(pFVar9,param_1,puVar12,uVar7);
        (**(code **)((longlong)*param_2->BulkData + 0x18))();
        pFVar10 = (FRHITextureInitializer *)
                  UE::RHICore::FDefaultTextureInitializer::FDefaultTextureInitializer
                            ((FDefaultTextureInitializer *)local_178,param_1,(FRHITexture *)pFVar9);
        FRHITextureInitializer::FRHITextureInitializer(__return_storage_ptr__,pFVar10);
        if ((local_118 != (FRHICommandListBase *)0x0) && (local_110 != (FRHITexture *)0x0)) {
          FRHITextureInitializer::RemovePendingTextureUpload((FRHITextureInitializer *)local_178);
        }
        if (local_148 != 0) {
          plVar16 = local_138;
          if (local_120 != (longlong *)0x0) {
            plVar16 = local_120;
          }
          (**(code **)(*plVar16 + 0x10))();
        }
        if (local_178._0_8_ != 0) {
          plVar16 = (longlong *)(local_178 + 0x10);
          if ((longlong *)local_178._40_8_ != (longlong *)0x0) {
            plVar16 = (longlong *)local_178._40_8_;
          }
          (**(code **)(*plVar16 + 0x10))();
        }
        if (!bVar5) {
          return __return_storage_ptr__;
        }
        lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        if (*(char *)(lVar4 + 0x9d48) == '\0') {
          __dyn_tls_on_demand_init();
        }
        pFVar11 = *(FWriteBuffer **)(lVar4 + 0x20);
        if ((int)pFVar11 - *(int *)&pFVar11->Cursor < 1) {
          pFVar11 = UE::Trace::Private::Writer_NextBuffer();
          *pFVar11->Cursor = '\n';
          pFVar11->Cursor = pFVar11->Cursor + 1;
          pFVar11->Committed = pFVar11->Cursor;
          return __return_storage_ptr__;
        }
      }
      else {
        if (param_2->InitAction != Initializer) {
LAB_145bb759c:
          UE::Logging::Private::BasicFatalLog
                    ((FStaticBasicLogRecord *)&PTR_u_Unknown_or_unha_1510d7d98,
                     (FLogCategoryBase *)&LogRHICore);
          pFVar10 = (FRHITextureInitializer *)
                    UE::RHICore::FDefaultTextureInitializer::FDefaultTextureInitializer
                              ((FDefaultTextureInitializer *)local_e8,param_1,(FRHITexture *)0x0);
          FRHITextureInitializer::FRHITextureInitializer(__return_storage_ptr__,pFVar10);
          if ((local_88 != (FRHICommandListBase *)0x0) && (local_80 != (FRHITexture *)0x0)) {
            FRHITextureInitializer::RemovePendingTextureUpload((FRHITextureInitializer *)local_e8);
          }
          if (local_b8 != 0) {
            plVar16 = local_a8;
            if (local_90 != (longlong *)0x0) {
              plVar16 = local_90;
            }
            (**(code **)(*plVar16 + 0x10))();
          }
          if (local_e8._0_8_ != 0) {
            plVar16 = (longlong *)(local_e8 + 0x10);
            if ((longlong *)local_e8._40_8_ != (longlong *)0x0) {
              plVar16 = (longlong *)local_e8._40_8_;
            }
            (**(code **)(*plVar16 + 0x10))();
          }
          if (!bVar5) {
            return __return_storage_ptr__;
          }
          lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          if (*(char *)(lVar4 + 0x9d48) == '\0') {
            __dyn_tls_on_demand_init();
          }
          pFVar11 = *(FWriteBuffer **)(lVar4 + 0x20);
          if ((int)pFVar11 - *(int *)&pFVar11->Cursor < 1) {
            pFVar11 = UE::Trace::Private::Writer_NextBuffer();
          }
          *pFVar11->Cursor = '\n';
          pFVar11->Cursor = pFVar11->Cursor + 1;
          pFVar11->Committed = pFVar11->Cursor;
          return __return_storage_ptr__;
        }
        pcVar13 = (code *)UE::RHITextureUtils::CalculateTextureSize((FRHITextureDesc *)param_2);
        pcVar14 = FMemory::Malloc((ulong64)pcVar13,0);
        if (pFVar9 != (FVulkanTexture *)0x0) {
          FRHIResource::AddRef((FRHIResource *)pFVar9);
        }
        local_2c8[0] = (code *)0x0;
        local_2a0 = FMemory::Malloc(0x20,8);
        local_2a0[1] = (code *)pFVar9;
        local_2a0[2] = pcVar14;
        *local_2a0 = (code *)&UE::Core::Private::Function::
                              TFunction_OwnedObject<`FVulkanDynamicRHI::RHICreateTextureInitializer'::`40'::<lambda_2>,1,1>
                              ::_vftable_;
        local_2a0[3] = pcVar13;
        if (local_2a0 != (code **)&DAT_fffffffffffffff8) {
          local_2c8[0] = UE::Core::Private::Function::
                         TFunctionRefCaller<`FVulkanDynamicRHI::RHICreateTextureInitializer'::__l40::<lambda_2>,FRHITextureSubresourceInitializer,FRHITextureInitializer::FSubresourceIndex>
                         ::Call;
        }
        if (pFVar9 != (FVulkanTexture *)0x0) {
          FRHIResource::AddRef((FRHIResource *)pFVar9);
        }
        local_2f8[0] = (code *)0x0;
        local_2d0 = FMemory::Malloc(0x20,8);
        local_2d0[1] = (code *)pFVar9;
        local_2d0[2] = pcVar14;
        *local_2d0 = (code *)&UE::Core::Private::Function::
                              TFunction_OwnedObject<`FVulkanDynamicRHI::RHICreateTextureInitializer'::`40'::<lambda_1>,1,1>
                              ::_vftable_;
        local_2d0[3] = pcVar13;
        if (local_2d0 != (code **)&DAT_fffffffffffffff8) {
          local_2f8[0] = UE::Core::Private::Function::
                         TFunctionRefCaller<`FVulkanDynamicRHI::RHICreateTextureInitializer'::__l40::<lambda_1>,TRefCountPtr<FRHITexture>,FRHICommandListBase_&>
                         ::Call;
        }
        FRHITextureInitializer::FRHITextureInitializer
                  ((FRHITextureInitializer *)local_298,param_1,(FRHITexture *)pFVar9,pcVar14,
                   (ulong64)pcVar13,
                   (TUniqueFunction<TRefCountPtr<FRHITexture>___cdecl(FRHICommandListBase_&)> *)
                   local_2f8,
                   (TUniqueFunction<FRHITextureSubresourceInitializer___cdecl(FRHITextureInitializer::FSubresourceIndex)>
                    *)local_2c8);
        FRHITextureInitializer::FRHITextureInitializer
                  (__return_storage_ptr__,(FRHITextureInitializer *)local_298);
        if ((local_238 != (FRHICommandListBase *)0x0) && (local_230 != (FRHITexture *)0x0)) {
          FRHITextureInitializer::RemovePendingTextureUpload((FRHITextureInitializer *)local_298);
        }
        if (local_268 != 0) {
          plVar16 = local_258;
          if (local_240 != (longlong *)0x0) {
            plVar16 = local_240;
          }
          (**(code **)(*plVar16 + 0x10))();
        }
        if (local_298._0_8_ != 0) {
          plVar16 = (longlong *)(local_298 + 0x10);
          if ((longlong *)local_298._40_8_ != (longlong *)0x0) {
            plVar16 = (longlong *)local_298._40_8_;
          }
          (**(code **)(*plVar16 + 0x10))();
        }
        if (local_2f8[0] != (code *)0x0) {
          ppcVar17 = local_2f8 + 2;
          if (local_2d0 != (code **)0x0) {
            ppcVar17 = local_2d0;
          }
          (**(code **)(*ppcVar17 + 0x10))();
        }
        if (local_2c8[0] != (code *)0x0) {
          ppcVar17 = local_2c8 + 2;
          if (local_2a0 != (code **)0x0) {
            ppcVar17 = local_2a0;
          }
          (**(code **)(*ppcVar17 + 0x10))();
        }
        if (!bVar5) {
          return __return_storage_ptr__;
        }
        lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        if (*(char *)(lVar4 + 0x9d48) == '\0') {
          __dyn_tls_on_demand_init();
        }
        pFVar11 = *(FWriteBuffer **)(lVar4 + 0x20);
        if ((int)pFVar11 - *(int *)&pFVar11->Cursor < 1) {
          pFVar11 = UE::Trace::Private::Writer_NextBuffer();
          *pFVar11->Cursor = '\n';
          pFVar11->Cursor = pFVar11->Cursor + 1;
          pFVar11->Committed = pFVar11->Cursor;
          return __return_storage_ptr__;
        }
      }
    }
  }
  *pFVar11->Cursor = '\n';
  pFVar11->Cursor = pFVar11->Cursor + 1;
  pFVar11->Committed = pFVar11->Cursor;
  return __return_storage_ptr__;
}

// RHICreateTextureReference @ 145bb76d0

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
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TRefCountPtr<FRHITextureReference> __thiscall
FVulkanDynamicRHI::RHICreateTextureReference
          (FVulkanDynamicRHI *this,FRHICommandListBase *param_1,FRHITexture *param_2)

{
  char cVar1;
  code *pcVar2;
  FRHIResource *this_00;
  bool bVar3;
  byte bVar4;
  int *piVar5;
  longlong lVar6;
  TRefCountPtr<FRHITextureReference> TVar7;
  FRHITextureReference *pFVar8;
  TRefCountPtr<FRHITexture> in_R9;
  FLLMScope local_res20 [2];
  FRHIResource *local_38;
  FMemScope local_30;
  undefined1 local_28 [8];
  undefined8 local_20;
  undefined8 uStack_18;
  
  if ((((in_R9.Reference == (FRHITexture *)0x0) &&
       (in_R9.Reference = FRHITextureReference::DefaultTexture.Reference,
       FRHITextureReference::DefaultTexture.Reference == (FRHITexture *)0x0)) ||
      (piVar5 = (int *)(**(code **)((in_R9.Reference)->_padding_ + 0x30))(in_R9.Reference,local_28),
      *piVar5 == -1)) || ((char)piVar5[1] == '\t')) {
    pFVar8 = ::operator_new(0x150);
    if (pFVar8 == (FRHITextureReference *)0x0) {
      (param_1->MemManager).Top = (uchar *)0x0;
    }
    else {
      FRHITextureReference::FRHITextureReference(pFVar8,in_R9.Reference);
      (param_1->MemManager).Top = (uchar *)pFVar8;
      pFVar8->_padding_ = (longlong)&FVulkanTextureReference::_vftable__for__FRHIViewableResource__;
      pFVar8[1]._padding_ = 0;
      pFVar8->_padding_ =
           (longlong)&FVulkanTextureReference::_vftable__for__RHIValidation__FTextureResource__;
      FRHIResource::AddRef((FRHIResource *)pFVar8);
    }
    return (TRefCountPtr<FRHITextureReference>)(FRHITextureReference *)param_1;
  }
  uStack_18 = 0;
  local_20 = 2;
  lVar6 = (**(code **)((in_R9.Reference)->_padding_ + 0x20))(in_R9.Reference);
  cVar1 = *(char *)(lVar6 + 0x32);
  if (cVar1 == '\0') {
    bVar4 = local_20._2_1_ & 0x9f | 0x10;
  }
  else if (cVar1 == '\x01') {
    bVar4 = local_20._2_1_ & 0xaf | 0x20;
  }
  else if (cVar1 == '\x02') {
    bVar4 = local_20._2_1_ & 0xdf | 0x50;
  }
  else if (cVar1 == '\x03') {
    bVar4 = local_20._2_1_ & 0xbf | 0x30;
  }
  else {
    if (cVar1 != '\x04') {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                         ,0xba1,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar7.Reference = (FRHITextureReference *)(*pcVar2)();
        return (TRefCountPtr<FRHITextureReference>)TVar7.Reference;
      }
      goto LAB_145bb77b6;
    }
    bVar4 = local_20._2_1_ & 0xcf | 0x40;
  }
  local_20._0_3_ = CONCAT12(bVar4,(undefined2)local_20);
LAB_145bb77b6:
  local_20._0_5_ = CONCAT23(0x100,(undefined3)local_20);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHITexture*___ptr64,FRHIViewDesc::FTextureSRV::FInitializer_const&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHITexture*___ptr64,FRHIViewDesc::FTextureSRV::FInitializer_const&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHITexture*___ptr64,FRHIViewDesc::FTextureSRV::FInitializer_const&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHITexture*___ptr64,FRHIViewDesc::FTextureSRV::FInitializer_const&___ptr64)___ptr64'
                    ::__l2::LLMScope_Name983,L"RHIMisc/CreateShaderResourceView");
    _Init_thread_footer(&`public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHITexture*___ptr64,FRHIViewDesc::FTextureSRV::FInitializer_const&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  FLLMScope::FLLMScope
            (local_res20,
             `public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHITexture*___ptr64,FRHIViewDesc::FTextureSRV::FInitializer_const&___ptr64)___ptr64'
             ::__l2::LLMScope_Name983,false,None,Default,true);
  FMemScope::FMemScope
            (&local_30,
             &`public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHITexture*___ptr64,FRHIViewDesc::FTextureSRV::FInitializer_const&___ptr64)___ptr64'
              ::__l2::LLMScope_Name983,true);
  lVar6 = (**(code **)((in_R9.Reference)->_padding_ + 0x28))(in_R9.Reference);
  if ((lVar6 != 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Texture->GetTextureReference() == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                         ,0x3d8,
                         L"Creating a shader resource view of an FRHITextureReference is not supported."
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    TVar7.Reference = (FRHITextureReference *)(*pcVar2)();
    return (TRefCountPtr<FRHITextureReference>)TVar7.Reference;
  }
  (**(code **)(GDynamicRHI->_padding_ + 0x1b0))
            (GDynamicRHI,&local_38,param_2,in_R9.Reference,&local_20);
  FMemScope::~FMemScope(&local_30);
  FLLMScope::~FLLMScope(local_res20);
  pFVar8 = ::operator_new(0x150);
  this_00 = local_38;
  if (pFVar8 == (FRHITextureReference *)0x0) {
    (param_1->MemManager).Top = (uchar *)0x0;
  }
  else {
    FRHITextureReference::FRHITextureReference
              (pFVar8,in_R9.Reference,(FRHIDescriptorHandle)local_38[2].OwnerName);
    pFVar8->_padding_ = (longlong)&FVulkanTextureReference::_vftable__for__FRHIViewableResource__;
    pFVar8->_padding_ =
         (longlong)&FVulkanTextureReference::_vftable__for__RHIValidation__FTextureResource__;
    pFVar8[1]._padding_ = (longlong)this_00;
    FRHIResource::AddRef(this_00);
    (param_1->MemManager).Top = (uchar *)pFVar8;
    FRHIResource::AddRef((FRHIResource *)pFVar8);
  }
  if (local_38 == (FRHIResource *)0x0) {
    return (TRefCountPtr<FRHITextureReference>)(FRHITextureReference *)param_1;
  }
  FRHIResource::Release(local_38);
  return (TRefCountPtr<FRHITextureReference>)(FRHITextureReference *)param_1;
}

// RHICreateTransientResourceAllocator @ 145bb79b0

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

IRHITransientResourceAllocator * __thiscall
FVulkanDynamicRHI::RHICreateTransientResourceAllocator(FVulkanDynamicRHI *this)

{
  FRHITransientResourceHeapAllocator *this_00;
  FVulkanTransientHeapCache *pFVar1;
  
  if (GVulkanEnableTransientResourceAllocator == 0) {
    return (IRHITransientResourceAllocator *)0x0;
  }
  this_00 = ::operator_new(0x88);
  if (this_00 != (FRHITransientResourceHeapAllocator *)0x0) {
    pFVar1 = FVulkanDevice::GetOrCreateTransientHeapCache(this->Device);
    FRHITransientResourceHeapAllocator::FRHITransientResourceHeapAllocator
              (this_00,(FRHITransientHeapCache *)pFVar1);
    this_00->_padding_ = (longlong)&___7FVulkanTransientResourceAllocator__6B_;
    this_00[1]._padding_ = (longlong)pFVar1->Device;
    return (IRHITransientResourceAllocator *)this_00;
  }
  return (IRHITransientResourceAllocator *)0x0;
}

// RHICreateUniformBuffer @ 145bb7a40

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

TRefCountPtr<FRHIUniformBuffer> __thiscall
FVulkanDynamicRHI::RHICreateUniformBuffer
          (FVulkanDynamicRHI *this,void *param_1,FRHIUniformBufferLayout *param_2,
          EUniformBufferUsage param_3,EUniformBufferValidation param_4)

{
  FVulkanUniformBuffer *pFVar1;
  undefined4 in_register_0000008c;
  FLLMScope local_res10 [2];
  EUniformBufferValidation in_stack_00000030;
  FMemScope local_18 [2];
  
  FLLMScope::FLLMScope(local_res10,VideoRecording|RHIUnused,false,None,Default,true);
  FMemScope::FMemScope(local_18,VideoRecording|RHIUnused,true);
  pFVar1 = ::operator_new(0x98);
  if (pFVar1 == (FVulkanUniformBuffer *)0x0) {
    *(undefined8 *)param_1 = 0;
  }
  else {
    pFVar1 = FVulkanUniformBuffer::FVulkanUniformBuffer
                       (pFVar1,this->Device,
                        (FRHIUniformBufferLayout *)CONCAT44(in_register_0000008c,param_3),param_2,
                        param_4,in_stack_00000030);
    *(FVulkanUniformBuffer **)param_1 = pFVar1;
    if (pFVar1 != (FVulkanUniformBuffer *)0x0) {
      FRHIResource::AddRef((FRHIResource *)pFVar1);
    }
  }
  FMemScope::~FMemScope(local_18);
  FLLMScope::~FLLMScope(local_res10);
  return (TRefCountPtr<FRHIUniformBuffer>)param_1;
}

// RHICreateUnorderedAccessView @ 145bb7b10

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
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TRefCountPtr<FRHIUnorderedAccessView> __thiscall
FVulkanDynamicRHI::RHICreateUnorderedAccessView
          (FVulkanDynamicRHI *this,FRHICommandListBase *param_1,FRHIViewableResource *param_2,
          FRHIViewDesc *param_3)

{
  FVulkanUnorderedAccessView *pFVar1;
  FRHIViewDesc *in_stack_00000028;
  
  pFVar1 = ::operator_new(0x80);
  if (pFVar1 == (FVulkanUnorderedAccessView *)0x0) {
    (param_1->MemManager).Top = (uchar *)0x0;
  }
  else {
    pFVar1 = FVulkanUnorderedAccessView::FVulkanUnorderedAccessView
                       (pFVar1,(FRHICommandListBase *)param_2,this->Device,
                        (FRHIViewableResource *)param_3,in_stack_00000028);
    (param_1->MemManager).Top = (uchar *)pFVar1;
    if (pFVar1 != (FVulkanUnorderedAccessView *)0x0) {
      FRHIResource::AddRef((FRHIResource *)pFVar1);
    }
  }
  return (TRefCountPtr<FRHIUnorderedAccessView>)(FRHIUnorderedAccessView *)param_1;
}

// RHICreateVertexDeclaration @ 145bb7ba0

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

TRefCountPtr<FRHIVertexDeclaration> __thiscall
FVulkanDynamicRHI::RHICreateVertexDeclaration
          (FVulkanDynamicRHI *this,TArray<FVertexElement,TFixedAllocator<17>_> *param_1)

{
  uint *puVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FRHIResource *pFVar6;
  TRefCountPtr<FRHIVertexDeclaration> TVar7;
  longlong lVar8;
  longlong *plVar9;
  TArray<FVertexElement,TFixedAllocator<17>_> *in_R8;
  undefined1 auStackY_148 [32];
  TPairInitializer<FVulkanVertexDeclarationKey_const_&,TRefCountPtr<FRHIVertexDeclaration>_&&>
  local_108;
  FVulkanVertexDeclarationKey *local_f8;
  TRefCountPtr<FRHIVertexDeclaration> **local_f0;
  FVulkanVertexDeclarationKey local_e8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_148;
  FVulkanVertexDeclarationKey::FVulkanVertexDeclarationKey(&local_e8,in_R8);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&CS,4000);
      atexit(`FVulkanDynamicRHI::RHICreateVertexDeclaration'::__l2::
             _dynamic_atexit_destructor_for__CS__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&CS);
  iVar5 = TSet<TTuple<FVulkanVertexDeclarationKey,TRefCountPtr<FRHIVertexDeclaration>_>,TDefaultMapHashableKeyFuncs<FVulkanVertexDeclarationKey,TRefCountPtr<FRHIVertexDeclaration>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FVulkanVertexDeclarationKey>
                    ((TSet<TTuple<FVulkanVertexDeclarationKey,TRefCountPtr<FRHIVertexDeclaration>_>,TDefaultMapHashableKeyFuncs<FVulkanVertexDeclarationKey,TRefCountPtr<FRHIVertexDeclaration>,0>,FDefaultSetAllocator>
                      *)&GVertexDeclarationCache,local_e8.Hash,&local_e8);
  if (iVar5 != -1) {
    lVar8 = (longlong)iVar5 * 0xa8 + GVertexDeclarationCache._0_8_;
    plVar9 = (longlong *)(lVar8 + 0x98);
    if (lVar8 == 0) {
      plVar9 = (longlong *)0x0;
    }
    if (plVar9 != (longlong *)0x0) goto LAB_145bb7da2;
  }
  pFVar6 = ::operator_new(0xb0);
  if (pFVar6 == (FRHIResource *)0x0) {
    local_108.Value = (TRefCountPtr<FRHIVertexDeclaration> *)0x0;
  }
  else {
    FRHIResource::FRHIResource(pFVar6,RRT_VertexDeclaration);
    pFVar6->_padding_ = (longlong)&___7FVulkanVertexDeclaration__6B_;
    uVar2 = in_R8->ArrayNum;
    puVar1 = &pFVar6[6].OwnerName.Number;
    pFVar6[6].OwnerName.ComparisonIndex.Value = uVar2;
    if (uVar2 == 0) {
      *puVar1 = 0x11;
    }
    else {
      UE::Core::Private::ReallocForCopy<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                (8,2,uVar2,0,(ForElementType<FVertexElement> *)(pFVar6 + 1),uVar2,(int *)puVar1);
      memcpy(pFVar6 + 1,in_R8,(longlong)(int)uVar2 << 3);
    }
    *(uint *)&pFVar6[7]._padding_ = local_e8.Hash;
    *(uint *)((longlong)&pFVar6[7]._padding_ + 4) = local_e8.HashNoStride;
    local_108.Value = (TRefCountPtr<FRHIVertexDeclaration> *)pFVar6;
    FRHIResource::AddRef(pFVar6);
  }
  local_f8 = &local_e8;
  local_f0 = &local_108.Value;
  TSet<TTuple<FVulkanVertexDeclarationKey,TRefCountPtr<FRHIVertexDeclaration>_>,TDefaultMapHashableKeyFuncs<FVulkanVertexDeclarationKey,TRefCountPtr<FRHIVertexDeclaration>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FVulkanVertexDeclarationKey_const_&,TRefCountPtr<FRHIVertexDeclaration>_&&>_>
            ((TSet<TTuple<FVulkanVertexDeclarationKey,TRefCountPtr<FRHIVertexDeclaration>_>,TDefaultMapHashableKeyFuncs<FVulkanVertexDeclarationKey,TRefCountPtr<FRHIVertexDeclaration>,0>,FDefaultSetAllocator>
              *)&GVertexDeclarationCache,&local_108,(bool *)&local_f8);
  plVar9 = (longlong *)(GVertexDeclarationCache._0_8_ + 0x98 + (longlong)(int)local_108.Key * 0xa8);
  if ((FRHIResource *)local_108.Value != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)local_108.Value);
  }
LAB_145bb7da2:
  if (plVar9 == (longlong *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("VertexDeclarationRefPtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanVertexDeclaration.cpp"
                       ,0x48,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      TVar7.Reference = (FRHIVertexDeclaration *)(*pcVar3)();
      return (TRefCountPtr<FRHIVertexDeclaration>)TVar7.Reference;
    }
  }
  if (*plVar9 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidRef(*VertexDeclarationRefPtr)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanVertexDeclaration.cpp"
                       ,0x49,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      TVar7.Reference = (FRHIVertexDeclaration *)(*pcVar3)();
      return (TRefCountPtr<FRHIVertexDeclaration>)TVar7.Reference;
    }
  }
  *(undefined8 *)(param_1->AllocatorInstance).InlineData[0].Pad = 0;
  pFVar6 = (FRHIResource *)*plVar9;
  *(FRHIResource **)(param_1->AllocatorInstance).InlineData[0].Pad = pFVar6;
  if (pFVar6 != (FRHIResource *)0x0) {
    FRHIResource::AddRef(pFVar6);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&CS);
  return (TRefCountPtr<FRHIVertexDeclaration>)(FRHIVertexDeclaration *)param_1;
}

// RHICreateVertexShader @ 145bb7ea0

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

TRefCountPtr<FRHIVertexShader> __thiscall
FVulkanDynamicRHI::RHICreateVertexShader
          (FVulkanDynamicRHI *this,TArrayView<unsigned_char_const_,int> *param_1,FSHAHash *param_2)

{
  TVulkanBaseShader<FRHIVertexShader,0> *this_00;
  TArrayView<unsigned_char_const_,int> local_18;
  
  local_18.DataPtr = *(uchar **)param_2->Hash;
  local_18._8_8_ = *(undefined8 *)(param_2->Hash + 8);
  this_00 = FVulkanShaderFactory::CreateShader<TVulkanBaseShader<FRHIVertexShader,0>_>
                      (&this->Device->ShaderFactory,&local_18,this->Device);
  param_1->DataPtr = (uchar *)this_00;
  if (this_00 != (TVulkanBaseShader<FRHIVertexShader,0> *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_00);
  }
  return (TRefCountPtr<FRHIVertexShader>)(FRHIVertexShader *)param_1;
}

// RHIDoesAdapterMatchDevice @ 145bb7ef0

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

bool __thiscall FVulkanDynamicRHI::RHIDoesAdapterMatchDevice(FVulkanDynamicRHI *this,void *param_1)

{
  if ((this->Device->GpuIdProps).deviceLUIDValid != 0) {
    return *(longlong *)param_1 == *(longlong *)(this->Device->GpuIdProps).deviceLUID;
  }
  return true;
}

// RHIEndFrame @ 145bb8170

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

void __thiscall FVulkanDynamicRHI::RHIEndFrame(FVulkanDynamicRHI *this,FRHIEndFrameArgs *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  bool bVar3;
  BOOL BVar4;
  DWORD DVar5;
  TUniquePtr<FVulkanTiming,TDefaultDelete<FVulkanTiming>_> *pTVar6;
  undefined1 auStack_c8 [32];
  code *local_a8 [2];
  undefined **local_98;
  FVulkanDynamicRHI *local_90;
  FRHIEndFrameArgs *local_88;
  undefined8 local_80;
  code *local_78 [5];
  undefined8 *local_50;
  FVulkanDynamicRHI *local_48;
  undefined1 local_40 [32];
  int local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_48 = this;
  FVulkanTimingArray::FVulkanTimingArray
            ((FVulkanTimingArray *)local_40,&this->CurrentTimingPerQueue);
  local_80 = 0;
  local_98 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FVulkanDynamicRHI::RHIEndFrame'::`2'::<lambda_2>,1,0>::
              _vftable_;
  local_78[0] = (code *)0x0;
  local_a8[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FVulkanDynamicRHI::RHIEndFrame'::__l2::<lambda_2>,void,FVulkanPayload_&>
                ::Call;
  local_90 = this;
  local_88 = param_1;
  local_50 = FMemory::Malloc(0x38,8);
  puVar1 = local_50 + 1;
  *local_50 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`FVulkanDynamicRHI::RHIEndFrame'::`2'::<lambda_1>,1,1>::
               _vftable_;
  *puVar1 = local_48;
  FVulkanTimingArray::FVulkanTimingArray
            ((FVulkanTimingArray *)(local_50 + 2),(FVulkanTimingArray *)local_40);
  if (puVar1 != (undefined8 *)0x0) {
    local_78[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FVulkanDynamicRHI::RHIEndFrame'::__l2::<lambda_1>,void>::Call;
  }
  EnqueueEndOfPipeTask
            (this,(TUniqueFunction<void___cdecl(void)> *)local_78,
             (TUniqueFunction<void___cdecl(FVulkanPayload_&)> *)local_a8);
  if (this->InterruptThread == (FVulkanThread *)0x0) {
    do {
      BVar4 = TryEnterCriticalSection((LPCRITICAL_SECTION)&this->InterruptCS);
      if (BVar4 == 0) break;
      DVar5 = GetCurrentThreadId();
      uVar2 = this->InterruptThreadID;
      this->InterruptThreadID = DVar5;
      bVar3 = ProcessInterruptQueue(this);
      LeaveCriticalSection((LPCRITICAL_SECTION)&this->InterruptCS);
      this->InterruptThreadID = uVar2;
    } while (bVar3);
  }
  pTVar6 = (TUniquePtr<FVulkanTiming,TDefaultDelete<FVulkanTiming>_> *)local_40;
  if ((TUniquePtr<FVulkanTiming,TDefaultDelete<FVulkanTiming>_> *)local_40._24_8_ !=
      (TUniquePtr<FVulkanTiming,TDefaultDelete<FVulkanTiming>_> *)0x0) {
    pTVar6 = (TUniquePtr<FVulkanTiming,TDefaultDelete<FVulkanTiming>_> *)local_40._24_8_;
  }
  DestructItems<TUniquePtr<FVulkanTiming,TDefaultDelete<FVulkanTiming>_>,int>(pTVar6,local_20);
  if ((TUniquePtr<FVulkanTiming,TDefaultDelete<FVulkanTiming>_> *)local_40._24_8_ !=
      (TUniquePtr<FVulkanTiming,TDefaultDelete<FVulkanTiming>_> *)0x0) {
    FMemory::Free((void *)local_40._24_8_);
  }
  return;
}

// RHIEndFrame_RenderThread @ 145bb8320

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
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FVulkanDynamicRHI::RHIEndFrame_RenderThread
          (FVulkanDynamicRHI *this,FRHICommandListImmediate *param_1)

{
  <lambda_1> local_res8;
  
  local_res8.__this = this;
  FRHICommandListBase::
  EnqueueLambdaMultiPipe<_FVulkanDynamicRHI::RHIEndFrame_RenderThread_::__l2::<lambda_1>_>
            ((FRHICommandListBase *)param_1,Graphics,Enabled,L"Vulkan EndFrame",&local_res8);
  FDynamicRHI::RHIEndFrame_RenderThread((FDynamicRHI *)this,param_1);
  local_res8.__this = this;
  FRHICommandListBase::
  EnqueueLambdaMultiPipe<_FVulkanDynamicRHI::RHIEndFrame_RenderThread_::__l2::<lambda_2>_>
            ((FRHICommandListBase *)param_1,Graphics,Enabled,L"Vulkan BeginFrame",
             (<lambda_2> *)&local_res8);
  return;
}

// RHIEndUpdateTexture3D @ 145bb83a0

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
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FVulkanDynamicRHI::RHIEndUpdateTexture3D
          (FVulkanDynamicRHI *this,FRHICommandListBase *param_1,FUpdateTexture3DData *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInParallelRenderingThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInParallelRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                       ,0x707,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (GFrameNumberRenderThread != param_2->FrameNumber) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GFrameNumberRenderThread == UpdateData.FrameNumber",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                       ,0x708,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  InternalUpdateTexture3D
            (this,param_1,param_2->Texture,param_2->MipIndex,&param_2->UpdateRegion,
             param_2->RowPitch,param_2->DepthPitch,param_2->Data);
  FMemory::Free(param_2->Data);
  param_2->Data = (uchar *)0x0;
  return;
}

// RHIFinalizeContext @ 145bb8480

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
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FVulkanDynamicRHI::RHIFinalizeContext
          (FVulkanDynamicRHI *this,FRHIFinalizeContextArgs *param_1,
          TRHIPipelineArray<IRHIPlatformCommandList_*> *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  uint uVar5;
  FVulkanPlatformCommandList *pFVar6;
  atomic<void_*> aVar7;
  atomic<void_*> aVar8;
  FScriptContainerElement *pFVar9;
  atomic<void_*> aVar10;
  TRHIPipelineArray<IRHIPlatformCommandList_*> *local_res10;
  
  aVar10 = (atomic<void_*>)0x0;
  local_res10 = param_2;
  if (param_1->UploadContext != (IRHIUploadContext *)0x0) {
    pFVar6 = `FVulkanDynamicRHI::RHIFinalizeContext'::__l2::<lambda_1>::operator()
                       (&local_res10,Graphics);
    aVar8 = (atomic<void_*>)(param_1->UploadContext + -0x50);
    if (param_1->UploadContext == (IRHIUploadContext *)0x0) {
      aVar8 = aVar10;
    }
    (**(code **)(*(longlong *)aVar8 + 8))(aVar8,&pFVar6->field_0x40);
    uVar5 = FLockFreeLinkPolicy::AllocLockFreeLink();
    aVar7 = aVar10;
    if (uVar5 != 0) {
      aVar7 = (atomic<void_*>)
              (FLockFreeLinkPolicy::LinkAllocator.Pages[uVar5 >> 0xe] + (uVar5 & 0x3fff));
    }
    *(atomic<void_*> *)((longlong)aVar7 + 8) = aVar8;
    FLockFreePointerListLIFORoot<64,1>::Push
              ((FLockFreePointerListLIFORoot<64,1> *)&FVulkanUploadContext::Pool,uVar5);
    param_1->UploadContext = (IRHIUploadContext *)0x0;
  }
  pFVar9 = (param_1->Contexts).AllocatorInstance.Data;
  iVar2 = (param_1->Contexts).ArrayNum;
  pFVar1 = pFVar9 + (longlong)iVar2 * 8;
  while( true ) {
    if ((param_1->Contexts).ArrayNum != iVar2) {
      `TCheckedPointerIterator<IRHIComputeContext_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_res10);
    }
    if (pFVar9 == pFVar1) break;
    plVar3 = *(longlong **)pFVar9;
    cVar4 = (**(code **)(*plVar3 + 8))(plVar3);
    if ((cVar4 == '\x01') || (aVar8 = (atomic<void_*>)&DAT_00000008, cVar4 != '\x02')) {
      aVar8 = aVar10;
    }
    if (*(longlong *)(&param_2->field_0x0 + (longlong)aVar8) == 0) {
      aVar7 = (atomic<void_*>)::operator_new(0x50);
      aVar8 = aVar10;
      if (aVar7 != (atomic<void_*>)0x0) {
        *(longlong *)aVar7 = 0;
        *(longlong *)((longlong)aVar7 + 8) = 0;
        *(longlong *)((longlong)aVar7 + 0x10) = 0;
        *(longlong *)((longlong)aVar7 + 0x18) = 0;
        *(longlong *)((longlong)aVar7 + 0x20) = 0;
        *(undefined4 *)((longlong)aVar7 + 0x28) = 0;
        *(undefined4 *)((longlong)aVar7 + 0x2c) = 2;
        *(longlong *)((longlong)aVar7 + 0x30) = 0;
        *(longlong *)((longlong)aVar7 + 0x38) = 0;
        *(longlong *)((longlong)aVar7 + 0x40) = 0;
        *(longlong *)((longlong)aVar7 + 0x48) = 0;
        aVar8 = aVar7;
      }
      if ((cVar4 == '\x01') || (aVar7 = (atomic<void_*>)&DAT_00000008, cVar4 != '\x02')) {
        aVar7 = aVar10;
      }
      *(atomic<void_*> *)(&param_2->field_0x0 + (longlong)aVar7) = aVar8;
    }
    if ((cVar4 == '\x01') || (aVar8 = (atomic<void_*>)&DAT_00000008, cVar4 != '\x02')) {
      aVar8 = aVar10;
    }
    aVar7 = (atomic<void_*>)(plVar3 + -10);
    if (plVar3 == (longlong *)0x0) {
      aVar7 = aVar10;
    }
    (**(code **)(*(longlong *)aVar7 + 8))
              (aVar7,*(longlong *)(&param_2->field_0x0 + (longlong)aVar8) + 0x40);
    if ((*(longlong *)((longlong)aVar7 + 0x180) != 0) && (aVar7 != (atomic<void_*>)0x0)) {
      (*(code *)**(undefined8 **)aVar7)(aVar7,1);
    }
    pFVar9 = pFVar9 + 8;
  }
  return;
}

// RHIFinalizeParallelContext @ 145bb8640

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
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

IRHIPlatformCommandList * __thiscall
FVulkanDynamicRHI::RHIFinalizeParallelContext(FVulkanDynamicRHI *this,IRHIComputeContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  FVulkanCommandBuffer *this_00;
  longlong lVar3;
  IRHIPlatformCommandList *pIVar4;
  FVulkanContextCommon *this_01;
  
  this_01 = (FVulkanContextCommon *)&param_1[-2].WrappingContext;
  if (param_1 == (IRHIComputeContext *)0x0) {
    this_01 = (FVulkanContextCommon *)0x0;
  }
  if (((this->Device->OptionalDeviceExtensions).field0_0x0.Packed & 0x4000000000000) != 0) {
    this_00 = FVulkanContextCommon::GetCommandBuffer(this_01);
    FVulkanCommandBuffer::EndDynamicRendering(this_00);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&GSecondaryPayloadsCS);
  lVar3 = (**(code **)(this_01->_padding_ + 0x10))(this_01);
  if (lVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("VulkanParallelRenderPassInfo",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanSubmission.cpp"
                       ,0x148,
                       L"Attempting to call RHIFinalizeParallelContext on a non-parallel context!");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pIVar4 = (IRHIPlatformCommandList *)(*pcVar1)();
      return pIVar4;
    }
  }
  (**(code **)(this_01->_padding_ + 8))(this_01,lVar3 + 0x10);
  LeaveCriticalSection((LPCRITICAL_SECTION)&GSecondaryPayloadsCS);
  if (this_01 != (FVulkanContextCommon *)0x0) {
    (**(code **)this_01->_padding_)(this_01,1);
  }
  return (IRHIPlatformCommandList *)0x0;
}

// RHIFinishExternalComputeWork @ 145bb8710

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
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FVulkanDynamicRHI::RHIFinishExternalComputeWork(FVulkanDynamicRHI *this,VkCommandBuffer_T *param_1)

{
  FVulkanCommandListContextImmediate *this_00;
  undefined8 *puVar1;
  TArray<VkViewport,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *this_01;
  code *pcVar2;
  TArray<VkViewport,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *pTVar3;
  bool bVar4;
  FVulkanCommandBuffer *pFVar5;
  
  this_00 = this->Device->ImmediateContext;
  pFVar5 = FVulkanContextCommon::GetCommandBuffer((FVulkanContextCommon *)this_00);
  if (param_1 != pFVar5->CommandBufferHandle) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCommandBuffer == ImmediateContext.GetActiveCmdBuffer()->GetHandle()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRHI.cpp"
                       ,0x687,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  puVar1 = *(undefined8 **)&this_00->field_0x1c0;
  *puVar1 = 0;
  puVar1[1] = 0;
  this_01 = *(TArray<VkViewport,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> **)
             &this_00->field_0x1b8;
  TArray<VkViewport,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::SetNumZeroed
            (this_01,1,Default);
  TArray<VkRect2D,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::SetNumZeroed
            ((TArray<VkRect2D,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *)
             (this_01 + 1),1,Default);
  *(undefined1 *)&this_01[1].ArrayNum = 0;
  this_01[2].AllocatorInstance.InlineData[0] = '\0';
  this_01[2].AllocatorInstance.InlineData[1] = '\0';
  this_01[2].AllocatorInstance.InlineData[2] = '\0';
  this_01[2].AllocatorInstance.InlineData[3] = '\0';
  this_01[2].AllocatorInstance.InlineData[4] = '\0';
  this_01[2].AllocatorInstance.InlineData[5] = '\0';
  this_01[2].AllocatorInstance.InlineData[6] = '\0';
  this_01[2].AllocatorInstance.InlineData[7] = '\0';
  pTVar3 = this_01 + 2;
  (pTVar3->AllocatorInstance).InlineData[8] = '\0';
  (pTVar3->AllocatorInstance).InlineData[9] = '\0';
  (pTVar3->AllocatorInstance).InlineData[10] = '\0';
  (pTVar3->AllocatorInstance).InlineData[0xb] = '\0';
  (pTVar3->AllocatorInstance).InlineData[0xc] = '\0';
  (pTVar3->AllocatorInstance).InlineData[0xd] = '\0';
  (pTVar3->AllocatorInstance).InlineData[0xe] = '\0';
  (pTVar3->AllocatorInstance).InlineData[0xf] = '\0';
  this_01[1].AllocatorInstance.SecondaryData = (ForElementType<VkViewport>)0x6;
  *(undefined2 *)&this_01[7].AllocatorInstance.SecondaryData = 0x101;
  return;
}

// RHIFlushResources @ 145bb87e0

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

void __thiscall FVulkanDynamicRHI::RHIFlushResources(FVulkanDynamicRHI *this)

{
  FVulkanContextCommon::FreeUnusedCmdBuffers
            ((FVulkanContextCommon *)this->Device->ImmediateContext,true);
  return;
}

// RHIGetActiveVkCommandBuffer @ 145bb8800

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

VkCommandBuffer_T * __thiscall
FVulkanDynamicRHI::RHIGetActiveVkCommandBuffer(FVulkanDynamicRHI *this)

{
  FVulkanCommandBuffer *pFVar1;
  
  pFVar1 = FVulkanContextCommon::GetCommandBuffer
                     ((FVulkanContextCommon *)this->Device->ImmediateContext);
  return pFVar1->CommandBufferHandle;
}

// RHIGetAllDeviceExtensions @ 145bb8830

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

TArray<VkExtensionProperties,TSizedDefaultAllocator<32>_> * __thiscall
FVulkanDynamicRHI::RHIGetAllDeviceExtensions
          (FVulkanDynamicRHI *this,
          TArray<VkExtensionProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          VkPhysicalDevice_T *param_1)

{
  uint local_res10 [2];
  
  local_res10[0] = 0;
  (*VulkanDynamicAPI::vkEnumerateDeviceExtensionProperties)
            (param_1,(char *)0x0,local_res10,(VkExtensionProperties *)0x0);
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if ((int)local_res10[0] < 1) {
    if ((int)local_res10[0] < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)local_res10[0]);
    }
  }
  else {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x104,4,local_res10[0],&__return_storage_ptr__->AllocatorInstance,
               &__return_storage_ptr__->ArrayNum,&__return_storage_ptr__->ArrayMax);
  }
  (*VulkanDynamicAPI::vkEnumerateDeviceExtensionProperties)
            (param_1,(char *)0x0,local_res10,
             (VkExtensionProperties *)(__return_storage_ptr__->AllocatorInstance).Data);
  return __return_storage_ptr__;
}

// RHIGetAllInstanceExtensions @ 145bb88d0

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

TArray<VkExtensionProperties,TSizedDefaultAllocator<32>_> * __thiscall
FVulkanDynamicRHI::RHIGetAllInstanceExtensions
          (FVulkanDynamicRHI *this,
          TArray<VkExtensionProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  uint local_res10 [6];
  
  local_res10[0] = 0;
  (*VulkanDynamicAPI::vkEnumerateInstanceExtensionProperties)
            ((char *)0x0,local_res10,(VkExtensionProperties *)0x0);
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if ((int)local_res10[0] < 1) {
    if ((int)local_res10[0] < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)local_res10[0]);
    }
  }
  else {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x104,4,local_res10[0],&__return_storage_ptr__->AllocatorInstance,
               &__return_storage_ptr__->ArrayNum,&__return_storage_ptr__->ArrayMax);
  }
  (*VulkanDynamicAPI::vkEnumerateInstanceExtensionProperties)
            ((char *)0x0,local_res10,
             (VkExtensionProperties *)(__return_storage_ptr__->AllocatorInstance).Data);
  return __return_storage_ptr__;
}

// RHIGetAllocationInfo @ 145bb8960

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

FVulkanRHIAllocationInfo * __thiscall
FVulkanDynamicRHI::RHIGetAllocationInfo
          (FVulkanDynamicRHI *this,FVulkanRHIAllocationInfo *__return_storage_ptr__,
          FRHIBuffer *param_1)

{
  VkDeviceMemory_T *pVVar1;
  
  __return_storage_ptr__->Handle = (VkDeviceMemory_T *)0x0;
  __return_storage_ptr__->Offset = 0;
  __return_storage_ptr__->Size = 0;
  pVVar1 = VulkanRHI::FVulkanAllocation::GetDeviceMemoryHandle
                     ((FVulkanAllocation *)&param_1[1]._padding_,this->Device);
  __return_storage_ptr__->Handle = pVVar1;
  __return_storage_ptr__->Offset = (ulonglong)(uint)param_1[1]._padding_;
  __return_storage_ptr__->Size = (ulonglong)*(uint *)((longlong)&param_1[1]._padding_ + 4);
  return __return_storage_ptr__;
}

// RHIGetAllocationInfo @ 145bb89c0

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

FVulkanRHIAllocationInfo * __thiscall
FVulkanDynamicRHI::RHIGetAllocationInfo
          (FVulkanDynamicRHI *this,FVulkanRHIAllocationInfo *__return_storage_ptr__,
          FRHITexture *param_1)

{
  bool bVar1;
  longlong lVar2;
  VkDeviceMemory_T *pVVar3;
  VkDeviceMemory_T *pVVar4;
  
  lVar2 = (**(code **)(param_1->_padding_ + 0x48))(param_1);
  pVVar4 = (VkDeviceMemory_T *)0x0;
  __return_storage_ptr__->Handle = (VkDeviceMemory_T *)0x0;
  __return_storage_ptr__->Offset = 0;
  __return_storage_ptr__->Size = 0;
  bVar1 = VulkanRHI::FVulkanAllocation::IsValid((FVulkanAllocation *)(lVar2 + 0x1c0));
  pVVar3 = pVVar4;
  if (bVar1) {
    pVVar3 = VulkanRHI::FVulkanAllocation::GetDeviceMemoryHandle
                       ((FVulkanAllocation *)(lVar2 + 0x1c0),*(FVulkanDevice **)(lVar2 + 0x168));
  }
  __return_storage_ptr__->Handle = pVVar3;
  bVar1 = VulkanRHI::FVulkanAllocation::IsValid((FVulkanAllocation *)(lVar2 + 0x1c0));
  if (bVar1) {
    pVVar4 = (VkDeviceMemory_T *)(ulonglong)*(uint *)(lVar2 + 0x1d0);
  }
  __return_storage_ptr__->Size = (ulonglong)*(uint *)(lVar2 + 0x188);
  __return_storage_ptr__->Offset = (ulong64)pVVar4;
  return __return_storage_ptr__;
}

// RHIGetAvailableResolutions @ 145bb8a60

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

bool __thiscall
FVulkanDynamicRHI::RHIGetAvailableResolutions
          (FVulkanDynamicRHI *this,TArray<FScreenResolutionRHI,TSizedDefaultAllocator<32>_> *param_1
          ,bool param_2)

{
  return false;
}

// RHIGetDefaultContext @ 145bb8a70

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
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

IRHICommandContext * __thiscall FVulkanDynamicRHI::RHIGetDefaultContext(FVulkanDynamicRHI *this)

{
  FVulkanCommandListContextImmediate *pFVar1;
  IRHICommandContext *pIVar2;
  
  pFVar1 = this->Device->ImmediateContext;
  pIVar2 = (IRHICommandContext *)&pFVar1->field_0x50;
  if (pFVar1 == (FVulkanCommandListContextImmediate *)0x0) {
    pIVar2 = (IRHICommandContext *)0x0;
  }
  return pIVar2;
}

// RHIGetGraphicsAdapterLUID @ 145bb8aa0

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

ulong64 __thiscall
FVulkanDynamicRHI::RHIGetGraphicsAdapterLUID(FVulkanDynamicRHI *this,VkPhysicalDevice_T *param_1)

{
  code *pcVar1;
  bool bVar2;
  ulong64 uVar3;
  undefined1 auStack_3c8 [32];
  VkPhysicalDeviceProperties2 local_3a8;
  undefined4 local_58;
  undefined8 local_54;
  undefined8 uStack_4c;
  undefined8 local_44;
  undefined8 uStack_3c;
  undefined8 local_34;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int local_1c;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_3c8;
  local_3a8.sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROPERTIES_2;
  memset(&local_3a8.field_0x4,0,0x344);
  local_58 = 0x3b9bdf5c;
  uStack_24 = 0;
  uStack_20 = 0;
  local_1c = 0;
  local_3a8.pNext = &local_58;
  local_54 = 0;
  uStack_4c = 0;
  local_44 = 0;
  uStack_3c = 0;
  local_34 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  (*VulkanDynamicAPI::vkGetPhysicalDeviceProperties2)(param_1,&local_3a8);
  if (local_1c == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GpuIdProps.deviceLUIDValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRHI.cpp"
                       ,0x5e3,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  return CONCAT44(uStack_24,uStack_28);
}

// RHIGetGraphicsQueueFamilyIndex @ 145bb8b90

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

uint __thiscall FVulkanDynamicRHI::RHIGetGraphicsQueueFamilyIndex(FVulkanDynamicRHI *this)

{
  return (this->Device->Queues).Elements[0]->FamilyIndex;
}

// RHIGetGraphicsQueueIndex @ 145bb8bb0

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

uint __thiscall FVulkanDynamicRHI::RHIGetGraphicsQueueIndex(FVulkanDynamicRHI *this)

{
  return (this->Device->Queues).Elements[0]->QueueIndex;
}

// RHIGetGraphicsVkQueue @ 145bb8bd0

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

VkQueue_T * __thiscall FVulkanDynamicRHI::RHIGetGraphicsVkQueue(FVulkanDynamicRHI *this)

{
  return (this->Device->Queues).Elements[0]->Queue;
}

// RHIGetImageViewInfo @ 145bb8bf0

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

FVulkanRHIImageViewInfo * __thiscall
FVulkanDynamicRHI::RHIGetImageViewInfo
          (FVulkanDynamicRHI *this,FVulkanRHIImageViewInfo *__return_storage_ptr__,
          FRHITexture *param_1)

{
  uchar uVar1;
  FVulkanView *pFVar2;
  FVulkanView *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FVulkanTexture *this_00;
  ETextureCreateFlags *pEVar7;
  FVulkanRHIImageViewInfo *pFVar8;
  
  this_00 = (FVulkanTexture *)(**(code **)(param_1->_padding_ + 0x48))(param_1);
  pEVar7 = (ETextureCreateFlags *)(**(code **)(param_1->_padding_ + 0x20))(param_1);
  pFVar2 = this_00->DefaultView;
  __return_storage_ptr__->ImageView = (VkImageView_T *)0x0;
  __return_storage_ptr__->Image = (VkImage_T *)0x0;
  (__return_storage_ptr__->SubresourceRange).aspectMask = 0;
  (__return_storage_ptr__->SubresourceRange).baseMipLevel = 0;
  (__return_storage_ptr__->SubresourceRange).levelCount = 0;
  (__return_storage_ptr__->SubresourceRange).baseArrayLayer = 0;
  uVar1 = (pFVar2->Storage).TypeIndex;
  *(undefined8 *)&(__return_storage_ptr__->SubresourceRange).layerCount = 0;
  __return_storage_ptr__->Width = 0;
  __return_storage_ptr__->Height = 0;
  *(undefined8 *)&__return_storage_ptr__->Depth = 0;
  __return_storage_ptr__->UEFlags = None;
  if (uVar1 != '\x02') {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index == TypeIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                       ,0x97,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FVulkanRHIImageViewInfo *)(*pcVar4)();
      return pFVar8;
    }
  }
  pFVar3 = this_00->DefaultView;
  __return_storage_ptr__->ImageView = (VkImageView_T *)(pFVar2->Storage)._padding_;
  if ((pFVar3->Storage).TypeIndex != '\x02') {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index == TypeIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                       ,0x97,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FVulkanRHIImageViewInfo *)(*pcVar4)();
      return pFVar8;
    }
  }
  __return_storage_ptr__->Image = (VkImage_T *)(pFVar3->Storage)._padding_;
  __return_storage_ptr__->Format = this_00->ViewFormat;
  __return_storage_ptr__->Width = *(uint *)((longlong)pEVar7 + 0x24);
  __return_storage_ptr__->Height = (int)pEVar7[5];
  __return_storage_ptr__->Depth = (uint)*(ushort *)((longlong)pEVar7 + 0x2c);
  __return_storage_ptr__->UEFlags = *pEVar7;
  (__return_storage_ptr__->SubresourceRange).aspectMask = this_00->FullAspectMask;
  uVar6 = FVulkanTexture::GetNumberOfArrayLevels(this_00);
  (__return_storage_ptr__->SubresourceRange).layerCount = uVar6;
  (__return_storage_ptr__->SubresourceRange).levelCount = (uint)(byte)(char)pEVar7[6];
  (__return_storage_ptr__->SubresourceRange).baseMipLevel = 0;
  (__return_storage_ptr__->SubresourceRange).baseArrayLayer = 0;
  return __return_storage_ptr__;
}

// RHIGetLoadedDeviceExtensions @ 145bb8d20

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

TArray<FAnsiString,TSizedDefaultAllocator<32>_> * __thiscall
FVulkanDynamicRHI::RHIGetLoadedDeviceExtensions
          (FVulkanDynamicRHI *this,
          TArray<FAnsiString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FVulkanDevice *pFVar3;
  char *pcVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar3 = this->Device;
  pFVar6 = (pFVar3->DeviceExtensions).AllocatorInstance.Data;
  iVar2 = (pFVar3->DeviceExtensions).ArrayNum;
  pFVar1 = pFVar6 + (longlong)iVar2 * 8;
  while( true ) {
    if ((pFVar3->DeviceExtensions).ArrayNum != iVar2) {
      `TCheckedPointerIterator<char_const_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar6 == pFVar1) break;
    iVar5 = __return_storage_ptr__->ArrayNum;
    pcVar4 = *(char **)pFVar6;
    if (iVar5 == __return_storage_ptr__->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar5 + 1;
    FAnsiString::FAnsiString
              ((FAnsiString *)
               ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10),pcVar4);
    pFVar6 = pFVar6 + 8;
  }
  return __return_storage_ptr__;
}

// RHIGetMinimumAlignmentForBufferBackedSRV @ 145bb8de0

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

ulong64 __thiscall
FVulkanDynamicRHI::RHIGetMinimumAlignmentForBufferBackedSRV
          (FVulkanDynamicRHI *this,EPixelFormat param_1)

{
  return (this->Device->GpuProps).limits.minTexelBufferOffsetAlignment;
}

// RHIGetNativeComputeQueue @ 145bb8e00

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

void * __thiscall FVulkanDynamicRHI::RHIGetNativeComputeQueue(FVulkanDynamicRHI *this)

{
  FVulkanQueue *pFVar1;
  
  pFVar1 = (this->Device->Queues).Elements[1];
  if (pFVar1 != (FVulkanQueue *)0x0) {
    return pFVar1->Queue;
  }
  return (this->Device->Queues).Elements[0]->Queue;
}

// RHIGetNativeDevice @ 145bb8e30

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

void * __thiscall FVulkanDynamicRHI::RHIGetNativeDevice(FVulkanDynamicRHI *this)

{
  return this->Device->Device;
}

// RHIGetNativeGraphicsQueue @ 145bb8e50

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

void * __thiscall FVulkanDynamicRHI::RHIGetNativeGraphicsQueue(FVulkanDynamicRHI *this)

{
  return (this->Device->Queues).Elements[0]->Queue;
}

// RHIGetNativeInstance @ 145bb8e70

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

void * __thiscall FVulkanDynamicRHI::RHIGetNativeInstance(FVulkanDynamicRHI *this)

{
  return this->Instance;
}

// RHIGetNativePhysicalDevice @ 145bb8e80

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

void * __thiscall FVulkanDynamicRHI::RHIGetNativePhysicalDevice(FVulkanDynamicRHI *this)

{
  return this->Device->Gpu;
}

// RHIGetParallelCommandContext @ 145bb8ea0

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
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

IRHIComputeContext * __thiscall
FVulkanDynamicRHI::RHIGetParallelCommandContext
          (FVulkanDynamicRHI *this,FRHIParallelRenderPassInfo *param_1,FRHIGPUMask param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FVulkanParallelRenderPassInfo *pFVar3;
  FVulkanDynamicRenderingInfo *pFVar4;
  code *pcVar5;
  undefined4 uVar6;
  bool bVar7;
  IRHIComputeContext *pIVar8;
  FVulkanCommandListContext *pFVar9;
  FVulkanCommandListContext *this_00;
  FVulkanCommandBuffer *this_01;
  VkRenderingInfo *pVVar10;
  undefined1 auStack_98 [32];
  VkRenderingInfo local_78;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_98;
  pFVar3 = param_1->RHIPlatformData;
  if ((pFVar3 == (FVulkanParallelRenderPassInfo *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("VulkanParallelRenderPassInfo",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanSubmission.cpp"
                         ,0x121,
                         L"Must begin parallel render pass on parent context before creating parallel contexts!"
                        ), bVar7)) {
    pcVar5 = (code *)swi(3);
    pIVar8 = (IRHIComputeContext *)(*pcVar5)();
    return pIVar8;
  }
  pFVar9 = ::operator_new(0x548);
  this_00 = (FVulkanCommandListContext *)0x0;
  if (pFVar9 != (FVulkanCommandListContext *)0x0) {
    this_00 = FVulkanCommandListContext::FVulkanCommandListContext
                        (pFVar9,this->Device,
                         (FVulkanCommandListContext *)this->Device->ImmediateContext,pFVar3);
  }
  FRHIRenderPassInfo::operator=
            ((FRHIRenderPassInfo *)&this_00->_padding_,(FRHIRenderPassInfo *)param_1);
  if (((this->Device->OptionalDeviceExtensions).field0_0x0.Packed & 0x4000000000000) != 0) {
    if ((pFVar3->DynamicRenderingInfo == (FVulkanDynamicRenderingInfo *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("VulkanParallelRenderPassInfo->DynamicRenderingInfo",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanSubmission.cpp"
                           ,0x127,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      pIVar8 = (IRHIComputeContext *)(*pcVar5)();
      return pIVar8;
    }
    LOCK();
    paVar1 = &pFVar3->NumParallelContexts;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
    if ((int)aVar2 < 2) {
      pFVar4 = pFVar3->DynamicRenderingInfo;
      local_78.sType = (pFVar4->RenderingInfo).sType;
      local_78._4_4_ = *(undefined4 *)&(pFVar4->RenderingInfo).field_0x4;
      local_78.pNext = (pFVar4->RenderingInfo).pNext;
      uVar6 = (pFVar4->RenderingInfo).renderArea.offset.x;
      local_78.renderArea._4_8_ = *(undefined8 *)&(pFVar4->RenderingInfo).renderArea.offset.y;
      local_78._32_8_ = *(undefined8 *)&(pFVar4->RenderingInfo).renderArea.extent.height;
      local_78.viewMask = (pFVar4->RenderingInfo).viewMask;
      local_78.colorAttachmentCount = (pFVar4->RenderingInfo).colorAttachmentCount;
      local_78.pColorAttachments = (pFVar4->RenderingInfo).pColorAttachments;
      local_78.pDepthAttachment = (pFVar4->RenderingInfo).pDepthAttachment;
      local_78.pStencilAttachment = (pFVar4->RenderingInfo).pStencilAttachment;
      local_78.flags = 4;
      if (aVar2 == (atomic<int>)0x0) {
        local_78.flags = 2;
      }
      local_78.renderArea.offset.x = uVar6;
      this_01 = FVulkanContextCommon::GetCommandBuffer((FVulkanContextCommon *)this_00);
      pVVar10 = &local_78;
    }
    else {
      this_01 = FVulkanContextCommon::GetCommandBuffer((FVulkanContextCommon *)this_00);
      pVVar10 = &pFVar3->DynamicRenderingInfo->RenderingInfo;
    }
    FVulkanCommandBuffer::BeginDynamicRendering(this_01,pVVar10);
  }
  pFVar9 = (FVulkanCommandListContext *)&this_00->_padding_;
  if (this_00 == (FVulkanCommandListContext *)0x0) {
    pFVar9 = (FVulkanCommandListContext *)0x0;
  }
  return (IRHIComputeContext *)pFVar9;
}

// RHIGetSupportedResolution @ 145bb9050

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

void __thiscall
FVulkanDynamicRHI::RHIGetSupportedResolution(FVulkanDynamicRHI *this,uint *param_1,uint *param_2)

{
  return;
}

// RHIGetSwapChainVkFormat @ 145bb9060

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

VkFormat __thiscall
FVulkanDynamicRHI::RHIGetSwapChainVkFormat(FVulkanDynamicRHI *this,EPixelFormat param_1)

{
  return GVulkanSRGBFormat[GPixelFormats[param_1].UnrealFormat];
}

// RHIGetTextureMemoryStats @ 145bb9090

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
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FVulkanDynamicRHI::RHIGetTextureMemoryStats(FVulkanDynamicRHI *this,FTextureMemoryStats *param_1)

{
  code *pcVar1;
  bool bVar2;
  ulong64 uVar3;
  ulong64 uVar4;
  
  param_1->StreamingMemorySize = GRHIGlobals.StreamingTextureMemorySizeInKB << 10;
  param_1->NonStreamingMemorySize = GRHIGlobals.NonStreamingTextureMemorySizeInKB << 10;
  param_1->TexturePoolSize = GRHIGlobals.TexturePoolSize;
  if (this->Device == (FVulkanDevice *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Device",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                       ,0x40b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar3 = VulkanRHI::FDeviceMemoryManager::GetTotalMemory(&this->Device->DeviceMemoryManager,true);
  uVar4 = VulkanRHI::FDeviceMemoryManager::GetTotalMemory(&this->Device->DeviceMemoryManager,false);
  param_1->SharedSystemMemory = -1;
  param_1->DedicatedSystemMemory = uVar4;
  uVar4 = 0xffffffffffffffff;
  if (uVar3 != 0) {
    uVar4 = uVar3;
  }
  param_1->DedicatedVideoMemory = uVar3;
  param_1->TotalGraphicsMemory = uVar4;
  param_1->LargestContiguousAllocation = param_1->StreamingMemorySize;
  return;
}

// RHIGetTextureMemoryVisualizeData @ 145bb9160

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

bool __thiscall
FVulkanDynamicRHI::RHIGetTextureMemoryVisualizeData
          (FVulkanDynamicRHI *this,FColor *param_1,int param_2,int param_3,int param_4,int param_5)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined1 auStack_168 [32];
  wchar_t *local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_168;
  local_138._padding_ = 0;
  TStringConversion<TStringConvert<char,wchar_t>,128>::Init
            (&local_138,"FVulkanDynamicRHI::RHIGetTextureMemoryVisualizeData",0x33,Yes);
  local_148 = local_138.Ptr;
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                     ,0x419,L"Unimplemented vulkan functionality: %s");
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// RHIGetViewVkFormat @ 145bb9210

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

VkFormat __thiscall
FVulkanDynamicRHI::RHIGetViewVkFormat(FVulkanDynamicRHI *this,FRHITexture *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(param_1->_padding_ + 0x48))(param_1);
  return *(VkFormat *)(lVar1 + 0x180);
}

// RHIGetVkAllocationCallbacks @ 145bb9230

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

VkAllocationCallbacks * __thiscall
FVulkanDynamicRHI::RHIGetVkAllocationCallbacks(FVulkanDynamicRHI *this)

{
  return &VulkanRHI::GAllocationCallbacks;
}

// RHIGetVkDevice @ 145bb9240

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

VkDevice_T * __thiscall FVulkanDynamicRHI::RHIGetVkDevice(FVulkanDynamicRHI *this)

{
  if (this->Device != (FVulkanDevice *)0x0) {
    return this->Device->Device;
  }
  return (VkDevice_T *)0x0;
}

// RHIGetVkDeviceProcAddr @ 145bb9260

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

void * __thiscall FVulkanDynamicRHI::RHIGetVkDeviceProcAddr(FVulkanDynamicRHI *this,char *param_1)

{
  _func___cdecl_void *p_Var1;
  
                    /* WARNING: Could not recover jumptable at 0x000145bb9272. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  p_Var1 = (*VulkanDynamicAPI::vkGetDeviceProcAddr)(this->Device->Device,param_1);
  return p_Var1;
}

// RHIGetVkImage @ 145bb9280

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

VkImage_T * __thiscall
FVulkanDynamicRHI::RHIGetVkImage(FVulkanDynamicRHI *this,FRHITexture *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(param_1->_padding_ + 0x48))(param_1);
  return *(VkImage_T **)(lVar1 + 0x170);
}

// RHIGetVkInstance @ 145bb92a0

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

VkInstance_T * __thiscall FVulkanDynamicRHI::RHIGetVkInstance(FVulkanDynamicRHI *this)

{
  return this->Instance;
}

// RHIGetVkInstanceGlobalProcAddr @ 145bb92b0

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

void * __thiscall
FVulkanDynamicRHI::RHIGetVkInstanceGlobalProcAddr(FVulkanDynamicRHI *this,char *param_1)

{
  _func___cdecl_void *p_Var1;
  
                    /* WARNING: Could not recover jumptable at 0x000145bb92b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  p_Var1 = (*VulkanDynamicAPI::vkGetInstanceProcAddr)((VkInstance_T *)0x0,param_1);
  return p_Var1;
}

// RHIGetVkInstanceProcAddr @ 145bb92d0

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

void * __thiscall FVulkanDynamicRHI::RHIGetVkInstanceProcAddr(FVulkanDynamicRHI *this,char *param_1)

{
  _func___cdecl_void *p_Var1;
  
                    /* WARNING: Could not recover jumptable at 0x000145bb92de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  p_Var1 = (*VulkanDynamicAPI::vkGetInstanceProcAddr)(this->Instance,param_1);
  return p_Var1;
}

// RHIGetVkPhysicalDevice @ 145bb92f0

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

VkPhysicalDevice_T * __thiscall FVulkanDynamicRHI::RHIGetVkPhysicalDevice(FVulkanDynamicRHI *this)

{
  return this->Device->Gpu;
}

// RHIGetVulkanDeviceUUID @ 145bb9310

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

uchar * __thiscall FVulkanDynamicRHI::RHIGetVulkanDeviceUUID(FVulkanDynamicRHI *this)

{
  return (this->Device->GpuIdProps).deviceUUID;
}

// RHIGetVulkanVersion @ 145bb9330

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

uint __thiscall FVulkanDynamicRHI::RHIGetVulkanVersion(FVulkanDynamicRHI *this)

{
  return this->ApiVersion;
}

// RHILockStagingBuffer @ 145bb9340

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

void * __thiscall
FVulkanDynamicRHI::RHILockStagingBuffer
          (FVulkanDynamicRHI *this,FRHIStagingBuffer *param_1,FRHIGPUFence *param_2,uint param_3,
          uint param_4)

{
  code *pcVar1;
  longlong lVar2;
  bool bVar3;
  void *pvVar4;
  
  if (param_1->bIsLocked != false) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bIsLocked",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanUtil.cpp"
                       ,0x24e,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pvVar4 = (void *)(*pcVar1)();
      return pvVar4;
    }
  }
  lVar2 = param_1[1]._padding_;
  param_1->bIsLocked = true;
  if ((uint)lVar2 < param_3 + param_4) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("EndOffset <= QueuedNumBytes",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanUtil.cpp"
                       ,0x251,
                       L"Lock at Offset (%u) and NumBytes (%u) reads beyond the allocated size of the staging buffer (%u)"
                      );
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pvVar4 = (void *)(*pcVar1)();
      return pvVar4;
    }
  }
  VulkanRHI::FStagingBuffer::InvalidateMappedMemory((FStagingBuffer *)param_1[1]._padding_);
  pvVar4 = VulkanRHI::FStagingBuffer::GetMappedPointer((FStagingBuffer *)param_1[1]._padding_);
  return (void *)((longlong)pvVar4 + (ulonglong)param_3);
}

// RHILockTexture @ 145bb93f0

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

FRHILockTextureResult * __thiscall
FVulkanDynamicRHI::RHILockTexture
          (FVulkanDynamicRHI *this,FRHILockTextureResult *__return_storage_ptr__,
          FRHICommandListImmediate *param_1,FRHILockTextureArgs *param_2)

{
  undefined4 *puVar1;
  byte bVar2;
  EResourceLockMode EVar3;
  code *pcVar4;
  byte bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  FVulkanTexture *this_00;
  longlong lVar12;
  FStagingBuffer *this_01;
  longlong lVar13;
  FRHILockTextureResult *pFVar14;
  void *pvVar15;
  uint uVar16;
  FRHILockTracker *pFVar17;
  int *piVar18;
  FRHILockTracker *pFVar19;
  undefined1 local_res8 [8];
  FLLMScope local_res10 [5];
  FMemScope local_res20;
  
  FLLMScope::FLLMScope(local_res10,VideoRecording|ThreadStackPlatform,false,None,Default,true);
  FMemScope::FMemScope(&local_res20,VideoRecording|ThreadStackPlatform,true);
  this_00 = (FVulkanTexture *)(**(code **)(*(longlong *)param_2->_padding_ + 0x48))();
  __return_storage_ptr__->Data = (void *)0x0;
  __return_storage_ptr__->ByteCount = 0;
  __return_storage_ptr__->Stride = 0;
  FVulkanTexture::GetMipSize(this_00,(uint)param_2->_padding_,&__return_storage_ptr__->ByteCount);
  lVar13 = param_2->_padding_;
  lVar12 = (**(code **)(this_00->_padding_ + 0x20))(this_00);
  bVar2 = *(byte *)(lVar12 + 0x33);
  bVar5 = (byte)(int)lVar13 & 0x1f;
  uVar16 = *(int *)(lVar12 + 0x24) >> bVar5;
  uVar10 = GPixelFormats[bVar2].BlockSizeX;
  uVar11 = uVar10;
  if (uVar10 < uVar16) {
    uVar11 = uVar16;
  }
  uVar10 = (uint)(CONCAT44(0 >> bVar5,(uVar11 - 1) + uVar10) / (ulonglong)uVar10);
  if (((bVar2 == 0x1e) || (uVar11 = uVar10, bVar2 == 0x1f)) && (uVar11 = 2, 2 < uVar10)) {
    uVar11 = uVar10;
  }
  __return_storage_ptr__->Stride = uVar11 * GPixelFormats[bVar2].BlockBytes;
  this_01 = VulkanRHI::FStagingManager::AcquireBuffer
                      (&this->Device->StagingManager,(uint)__return_storage_ptr__->ByteCount,1,
                       VK_MEMORY_PROPERTY_HOST_COHERENT_BIT);
  EnterCriticalSection((LPCRITICAL_SECTION)&GTextureMapLock);
  iVar8 = GRHILockTracker.OutstandingTextureLocks.ArrayNum;
  pFVar19 = &GRHILockTracker;
  pFVar17 = (FRHILockTracker *)
            GRHILockTracker.OutstandingTextureLocks.AllocatorInstance.SecondaryData;
  if (GRHILockTracker.OutstandingTextureLocks.AllocatorInstance.SecondaryData ==
      (ForElementType<FRHILockTracker::FTextureLockParams>)0x0) {
    pFVar17 = &GRHILockTracker;
  }
  lVar13 = (longlong)GRHILockTracker.OutstandingTextureLocks.ArrayNum;
  piVar18 = (int *)((longlong)pFVar17 + 0xc);
  while( true ) {
    if (GRHILockTracker.OutstandingTextureLocks.ArrayNum != iVar8) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FRHILockTracker::FTextureLockParams,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if ((longlong *)(piVar18 + -3) == (longlong *)(lVar13 * 0x30 + (longlong)pFVar17)) break;
    if (((param_2->_padding_ == *(longlong *)(piVar18 + -3)) &&
        ((int)param_2->_padding_ == piVar18[-1])) &&
       ((*(int *)((longlong)&param_2->_padding_ + 4) == *piVar18 &&
        (((int)param_2->_padding_ == piVar18[1] &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Desc != OutstandingLock.Desc || (OutstandingLock.bDirectLock && bInDirectBufferWrite)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHILockTracker.h"
                             ,0x25,L""), bVar9)))))) {
      pcVar4 = (code *)swi(3);
      pFVar14 = (FRHILockTextureResult *)(*pcVar4)();
      return pFVar14;
    }
    piVar18 = piVar18 + 0xc;
  }
  if (GRHILockTracker.OutstandingTextureLocks.ArrayNum ==
      GRHILockTracker.OutstandingTextureLocks.ArrayMax) {
    GRHILockTracker.OutstandingTextureLocks.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FRHILockTracker::FTextureLockParams>_>
                   (0x830,(ForElementType<FRHILockTracker::FTextureLockParams> *)&GRHILockTracker,
                    &GRHILockTracker.OutstandingTextureLocks.ArrayMax);
  }
  lVar12 = (longlong)GRHILockTracker.OutstandingTextureLocks.ArrayNum;
  uVar6 = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
  lVar13 = param_2->_padding_;
  uVar7 = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
  EVar3 = param_2->LockMode;
  if (GRHILockTracker.OutstandingTextureLocks.AllocatorInstance.SecondaryData !=
      (ForElementType<FRHILockTracker::FTextureLockParams>)0x0) {
    pFVar19 = (FRHILockTracker *)
              GRHILockTracker.OutstandingTextureLocks.AllocatorInstance.SecondaryData;
  }
  puVar1 = (undefined4 *)((longlong)pFVar19 + lVar12 * 0x30);
  GRHILockTracker.OutstandingTextureLocks.ArrayNum =
       GRHILockTracker.OutstandingTextureLocks.ArrayNum + 1;
  *puVar1 = (int)param_2->_padding_;
  puVar1[1] = uVar6;
  puVar1[2] = (int)lVar13;
  puVar1[3] = uVar7;
  *(longlong *)((longlong)pFVar19 + 0x10 + lVar12 * 0x30) = param_2->_padding_;
  *(EResourceLockMode *)((longlong)pFVar19 + 0x18 + lVar12 * 0x30) = EVar3;
  *(FStagingBuffer **)((longlong)pFVar19 + 0x20 + lVar12 * 0x30) = this_01;
  *(undefined1 *)((longlong)pFVar19 + 0x28 + lVar12 * 0x30) = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)&GTextureMapLock);
  pvVar15 = VulkanRHI::FStagingBuffer::GetMappedPointer(this_01);
  __return_storage_ptr__->Data = pvVar15;
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res10);
  return __return_storage_ptr__;
}

// RHIMatchPrecachePSOInitializers @ 145bb9650

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
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */

bool __thiscall
FVulkanDynamicRHI::RHIMatchPrecachePSOInitializers
          (FVulkanDynamicRHI *this,FGraphicsPipelineStateInitializer *param_1,
          FGraphicsPipelineStateInitializer *param_2)

{
  FRHIVertexDeclaration *pFVar1;
  FRHIVertexDeclaration *pFVar2;
  FRHIRasterizerState *pFVar3;
  FRHIRasterizerState *pFVar4;
  FRHIDepthStencilState *pFVar5;
  FRHIDepthStencilState *pFVar6;
  bool bVar7;
  TStaticArray<ETextureCreateFlags,8,4294967295> *pTVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined1 auStack_188 [32];
  FRasterizerStateInitializerRHI local_168;
  FRasterizerStateInitializerRHI local_158;
  FVertexElement local_148 [17];
  uint local_c0;
  undefined4 local_bc;
  FVertexElement local_b8 [17];
  uint local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_188;
  if ((((((param_1->ImmutableSamplerState).ImmutableSamplers.Elements[0] ==
          (param_2->ImmutableSamplerState).ImmutableSamplers.Elements[0]) &&
        ((param_1->ImmutableSamplerState).ImmutableSamplers.Elements[1] ==
         (param_2->ImmutableSamplerState).ImmutableSamplers.Elements[1])) &&
       (param_1->PrimitiveType == param_2->PrimitiveType)) &&
      (((param_1->bDepthBounds == param_2->bDepthBounds &&
        (param_1->MultiViewCount == param_2->MultiViewCount)) &&
       ((param_1->ShadingRate == param_2->ShadingRate &&
        ((param_1->bHasFragmentDensityAttachment == param_2->bHasFragmentDensityAttachment &&
         (param_1->bAllowVariableRateShading == param_2->bAllowVariableRateShading)))))))) &&
     ((param_1->RenderTargetsEnabled == param_2->RenderTargetsEnabled &&
      (((((((param_1->RenderTargetFormats).Elements[0] == (param_2->RenderTargetFormats).Elements[0]
           && ((param_1->RenderTargetFormats).Elements[1] ==
               (param_2->RenderTargetFormats).Elements[1])) &&
          ((param_1->RenderTargetFormats).Elements[2] == (param_2->RenderTargetFormats).Elements[2])
          ) && (((param_1->RenderTargetFormats).Elements[3] ==
                 (param_2->RenderTargetFormats).Elements[3] &&
                ((param_1->RenderTargetFormats).Elements[4] ==
                 (param_2->RenderTargetFormats).Elements[4])))) &&
        ((param_1->RenderTargetFormats).Elements[5] == (param_2->RenderTargetFormats).Elements[5]))
       && (((param_1->RenderTargetFormats).Elements[6] == (param_2->RenderTargetFormats).Elements[6]
           && ((param_1->RenderTargetFormats).Elements[7] ==
               (param_2->RenderTargetFormats).Elements[7])))))))) {
    uVar11 = 0;
    pTVar8 = &param_1->RenderTargetFlags;
    uVar9 = uVar11;
    do {
      if (((*(uint *)(((longlong)param_2 - (longlong)param_1) + (longlong)pTVar8) ^
           (int)pTVar8->Elements[0]) & (Shared|SRGB)) != None) {
        return false;
      }
      uVar9 = uVar9 + 1;
      pTVar8 = (TStaticArray<ETextureCreateFlags,8,4294967295> *)(pTVar8->Elements + 1);
    } while ((longlong)uVar9 < 8);
    if (((((param_1->DepthStencilTargetFormat == param_2->DepthStencilTargetFormat) &&
          ((((int)param_2->DepthStencilTargetFlag ^ (int)param_1->DepthStencilTargetFlag) &
           (Shared|SRGB|DepthStencilTargetable)) == None)) &&
         (param_1->NumSamples == param_2->NumSamples)) &&
        (((param_1->SubpassHint == param_2->SubpassHint &&
          (param_1->SubpassIndex == param_2->SubpassIndex)) &&
         ((param_1->StatePrecachePSOHash == param_2->StatePrecachePSOHash &&
          ((param_1->ConservativeRasterization == param_2->ConservativeRasterization &&
           ((param_1->BoundShaderState).VertexShaderRHI ==
            (param_2->BoundShaderState).VertexShaderRHI)))))))) &&
       (((param_1->BoundShaderState).PixelShaderRHI == (param_2->BoundShaderState).PixelShaderRHI &&
        ((((param_1->BoundShaderState).MeshShaderRHI == (param_2->BoundShaderState).MeshShaderRHI &&
          ((param_1->BoundShaderState).AmplificationShaderRHI ==
           (param_2->BoundShaderState).AmplificationShaderRHI)) &&
         ((param_1->BoundShaderState).GeometryShaderRHI ==
          (param_2->BoundShaderState).GeometryShaderRHI)))))) {
      pFVar1 = (param_1->BoundShaderState).VertexDeclarationRHI;
      pFVar2 = (param_2->BoundShaderState).VertexDeclarationRHI;
      local_c0 = 0;
      local_bc = 0x11;
      local_30 = 0;
      local_2c = 0x11;
      if (pFVar1 != (FRHIVertexDeclaration *)0x0) {
        (**(code **)(*(longlong *)pFVar1 + 0x10))(pFVar1,local_148);
        uVar11 = (ulonglong)local_c0;
      }
      uVar10 = (uint)uVar11;
      if (pFVar2 != (FRHIVertexDeclaration *)0x0) {
        (**(code **)(*(longlong *)pFVar2 + 0x10))(pFVar2,local_b8);
        uVar10 = local_c0;
      }
      if (((uVar10 == local_30) &&
          (bVar7 = CompareItems<FVertexElement,int>(local_148,local_b8,uVar10), bVar7)) &&
         (bVar7 = MatchRHIState<FRHIBlendState,FBlendStateInitializerRHI>
                            (param_1->BlendState,param_2->BlendState), bVar7)) {
        pFVar3 = param_1->RasterizerState;
        pFVar4 = param_2->RasterizerState;
        local_168.FillMode.Value = '\0';
        local_168.CullMode.Value = '\0';
        local_168.DepthBias = 0.0;
        local_168.SlopeScaleDepthBias = 0.0;
        local_168.DepthClipMode = DepthClip;
        local_168.bAllowMSAA = false;
        local_158.FillMode.Value = '\0';
        local_158.CullMode.Value = '\0';
        local_158.DepthBias = 0.0;
        local_158.SlopeScaleDepthBias = 0.0;
        local_158.DepthClipMode = DepthClip;
        local_158.bAllowMSAA = false;
        if (pFVar3 != (FRHIRasterizerState *)0x0) {
          (**(code **)(*(longlong *)pFVar3 + 0x10))(pFVar3,&local_168);
        }
        if (pFVar4 != (FRHIRasterizerState *)0x0) {
          (**(code **)(*(longlong *)pFVar4 + 0x10))(pFVar4,&local_158);
        }
        bVar7 = ::operator==(&local_168,&local_158);
        if (bVar7) {
          pFVar5 = param_1->DepthStencilState;
          pFVar6 = param_2->DepthStencilState;
          local_158.FillMode.Value = '\x01';
          local_158.CullMode.Value = '\x01';
          local_158._2_2_ = 0x700;
          local_158.DepthBias = 0.0;
          local_158.SlopeScaleDepthBias = 9.80909e-45;
          local_158.DepthClipMode = ~DepthClip;
          local_158.bAllowMSAA = true;
          local_168.FillMode.Value = '\x01';
          local_168.CullMode.Value = '\x01';
          local_168._2_2_ = 0x700;
          local_168.DepthBias = 0.0;
          local_168.SlopeScaleDepthBias = 9.80909e-45;
          local_168.DepthClipMode = ~DepthClip;
          local_168.bAllowMSAA = true;
          if (pFVar5 != (FRHIDepthStencilState *)0x0) {
            (**(code **)(pFVar5->_padding_ + 0x10))(pFVar5,&local_158);
          }
          if (pFVar6 != (FRHIDepthStencilState *)0x0) {
            (**(code **)(pFVar6->_padding_ + 0x10))(pFVar6,&local_168);
          }
          bVar7 = ::operator==((FDepthStencilStateInitializerRHI *)&local_158,
                               (FDepthStencilStateInitializerRHI *)&local_168);
          if (bVar7) {
            return true;
          }
        }
      }
    }
  }
  return false;
}

// RHIRegisterWork @ 145bb9a10

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

void __thiscall FVulkanDynamicRHI::RHIRegisterWork(FVulkanDynamicRHI *this,uint param_1)

{
  return;
}

// RHIReplaceResources @ 145bb9a20

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
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FVulkanDynamicRHI::RHIReplaceResources
          (FVulkanDynamicRHI *this,FRHICommandListBase *param_1,
          TArray<FRHIResourceReplaceInfo,TSizedDefaultAllocator<32>_> *param_2)

{
  ERHIPipeline EVar1;
  <lambda_1> local_18;
  
  local_18.ReplaceInfos.AllocatorInstance.Data = (param_2->AllocatorInstance).Data;
  (param_2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  local_18.ReplaceInfos.ArrayNum = param_2->ArrayNum;
  local_18.ReplaceInfos.ArrayMax = param_2->ArrayMax;
  param_2->ArrayNum = 0;
  param_2->ArrayMax = 0;
  EVar1 = Graphics;
  if (GRHIGlobals.SupportsEfficientAsyncCompute != false) {
    EVar1 = All;
  }
  FRHICommandListBase::
  EnqueueLambdaMultiPipe<_FVulkanDynamicRHI::RHIReplaceResources_::__l2::<lambda_1>_>
            (param_1,EVar1,Enabled,L"FVulkanDynamicRHI::RHIReplaceResources",&local_18);
  if (local_18.ReplaceInfos.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.ReplaceInfos.AllocatorInstance.Data);
    return;
  }
  return;
}

// RHIRunOnQueue @ 145bb9aa0

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

void __thiscall
FVulkanDynamicRHI::RHIRunOnQueue
          (FVulkanDynamicRHI *this,EVulkanRHIRunOnQueueType param_1,
          TFunction<void___cdecl(VkQueue_T_*)> *param_2,bool param_3)

{
  undefined1 *puVar1;
  int *piVar2;
  TQueue<FVulkanPlatformCommandList_*,0> *pTVar3;
  TNode *pTVar4;
  uint uVar5;
  FVulkanPayload **ppFVar6;
  undefined1 auVar7 [8];
  undefined8 *puVar8;
  FScriptContainerElement *pFVar9;
  code *pcVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 auVar18 [8];
  bool bVar19;
  int iVar20;
  BOOL BVar21;
  DWORD DVar22;
  FVulkanPayload *pFVar23;
  FVulkanPayload *pFVar24;
  TRefCountPtr<FBaseGraphTask> TVar25;
  TNode *pTVar26;
  FVulkanPayload *pFVar27;
  FVulkanQueue *pFVar28;
  undefined1 local_38 [8];
  FVulkanPayload *local_30;
  undefined8 *local_28;
  
  pFVar24 = (FVulkanPayload *)0x0;
  local_38 = (undefined1  [8])0x0;
  if (param_1 == Graphics) {
    pFVar28 = (this->Device->Queues).Elements[0];
  }
  else {
    if (param_1 != Transfer) {
      bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("false",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanSubmission.cpp"
                          ,0x38f,L"Unknown EVulkanRHIRunOnQueueType, skipping call.");
      if (bVar19) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      goto LAB_145bb9e72;
    }
    pFVar28 = (this->Device->Queues).Elements[2];
  }
  pFVar23 = ::operator_new(0x50);
  pFVar27 = pFVar24;
  if (pFVar23 != (FVulkanPayload *)0x0) {
    (pFVar23->WaitSemaphores).ArrayNum = 0;
    (pFVar23->WaitSemaphores).ArrayMax = 0;
    *(undefined4 *)&(pFVar23->CommandBuffers).AllocatorInstance.Data = 0;
    *(undefined4 *)((longlong)&(pFVar23->CommandBuffers).AllocatorInstance.Data + 4) = 2;
    (pFVar23->CommandBuffers).ArrayNum = 0;
    (pFVar23->CommandBuffers).ArrayMax = 0;
    (pFVar23->SignalSemaphores).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar23->SignalSemaphores).ArrayNum = 0;
    (pFVar23->SignalSemaphores).ArrayMax = 0;
    (pFVar23->SubmissionEvents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar27 = pFVar23;
  }
  pFVar23 = ::operator_new(400);
  if (pFVar23 != (FVulkanPayload *)0x0) {
    pFVar24 = FVulkanPayload::FVulkanPayload(pFVar23,pFVar28);
  }
  ppFVar6 = *(FVulkanPayload ***)&(pFVar27->SignalSemaphores).ArrayNum;
  local_30 = pFVar24;
  if (((ppFVar6 <= &local_30) &&
      (&local_30 <
       ppFVar6 + *(int *)((longlong)&(pFVar27->SubmissionEvents).AllocatorInstance.Data + 4))) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar19)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  iVar20 = *(int *)&(pFVar27->SubmissionEvents).AllocatorInstance.Data;
  piVar2 = (int *)((longlong)&(pFVar27->SubmissionEvents).AllocatorInstance.Data + 4);
  if (iVar20 == *piVar2) {
    iVar20 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,(ForAnyElementType *)&(pFVar27->SignalSemaphores).ArrayNum,piVar2);
  }
  *(int *)&(pFVar27->SubmissionEvents).AllocatorInstance.Data = iVar20 + 1;
  *(FVulkanPayload **)(*(longlong *)&(pFVar27->SignalSemaphores).ArrayNum + (longlong)iVar20 * 8) =
       local_30;
  uVar11 = *(undefined8 *)&param_2->field_0x8;
  uVar12 = *(undefined8 *)&local_30->PreExecuteCallback;
  uVar13 = *(undefined8 *)&(local_30->PreExecuteCallback).field_0x8;
  uVar14 = *(undefined8 *)&(local_30->PreExecuteCallback).field_0x10;
  uVar15 = *(undefined8 *)&(local_30->PreExecuteCallback).field_0x18;
  uVar16 = *(undefined8 *)&(local_30->PreExecuteCallback).field_0x20;
  uVar17 = *(undefined8 *)&(local_30->PreExecuteCallback).field_0x28;
  *(undefined8 *)&local_30->PreExecuteCallback = *(undefined8 *)param_2;
  *(undefined8 *)&(local_30->PreExecuteCallback).field_0x8 = uVar11;
  uVar11 = *(undefined8 *)&param_2->field_0x18;
  *(undefined8 *)&(local_30->PreExecuteCallback).field_0x10 = *(undefined8 *)&param_2->field_0x10;
  *(undefined8 *)&(local_30->PreExecuteCallback).field_0x18 = uVar11;
  uVar11 = *(undefined8 *)&param_2->field_0x28;
  *(undefined8 *)&(local_30->PreExecuteCallback).field_0x20 = *(undefined8 *)&param_2->field_0x20;
  *(undefined8 *)&(local_30->PreExecuteCallback).field_0x28 = uVar11;
  *(undefined8 *)param_2 = uVar12;
  *(undefined8 *)&param_2->field_0x8 = uVar13;
  *(undefined8 *)&param_2->field_0x10 = uVar14;
  *(undefined8 *)&param_2->field_0x18 = uVar15;
  *(undefined8 *)&param_2->field_0x20 = uVar16;
  *(undefined8 *)&param_2->field_0x28 = uVar17;
  if (param_3) {
    TVar25 = FBaseGraphTask::CreateGraphEvent();
    auVar18 = local_38;
    auVar7 = local_38;
    if ((FBaseGraphTask *)local_38 != TVar25.Reference) {
      auVar7 = *(undefined1 (*) [8])TVar25.Reference;
      *(undefined8 *)TVar25.Reference = 0;
      if (local_38 != (undefined1  [8])0x0) {
        LOCK();
        puVar1 = (undefined1 *)((longlong)local_38 + 0x30);
        iVar20 = *(int *)puVar1;
        *(int *)puVar1 = *(int *)puVar1 + -1;
        UNLOCK();
        if (iVar20 == 1) {
          puVar8 = *(undefined8 **)local_38;
          local_38 = auVar7;
          (*(code *)*puVar8)(auVar18,1);
          auVar7 = local_38;
        }
      }
    }
    local_38 = auVar7;
    if (local_28 != (undefined8 *)0x0) {
      LOCK();
      piVar2 = (int *)(local_28 + 6);
      iVar20 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if ((iVar20 == 1) && (local_28 != (undefined8 *)0x0)) {
        (**(code **)*local_28)(local_28,1);
      }
    }
    pFVar24 = local_30;
    pFVar9 = (local_30->SubmissionEvents).AllocatorInstance.Data;
    if (((pFVar9 <= (FScriptContainerElement *)local_38) &&
        ((FScriptContainerElement *)local_38 <
         pFVar9 + (longlong)(local_30->SubmissionEvents).ArrayMax * 8)) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar19)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    iVar20 = (pFVar24->SubmissionEvents).ArrayNum;
    piVar2 = &(pFVar24->SubmissionEvents).ArrayMax;
    if (iVar20 == *piVar2) {
      iVar20 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&(pFVar24->SubmissionEvents).AllocatorInstance,piVar2);
    }
    (pFVar24->SubmissionEvents).ArrayNum = iVar20 + 1;
    pFVar9 = (pFVar24->SubmissionEvents).AllocatorInstance.Data;
    *(undefined8 *)(pFVar9 + (longlong)iVar20 * 8) = 0;
    *(undefined1 (*) [8])(pFVar9 + (longlong)iVar20 * 8) = local_38;
    if (local_38 != (undefined1  [8])0x0) {
      LOCK();
      *(int *)((longlong)local_38 + 0x30) = *(int *)((longlong)local_38 + 0x30) + 1;
      UNLOCK();
    }
  }
  pTVar3 = &this->PendingPayloadsForSubmission;
  pTVar26 = ::operator_new(0x10);
  if (pTVar26 != (TNode *)0x0) {
    pTVar26->NextNode = (TNode *)0x0;
    pTVar26->Item = (FVulkanPlatformCommandList *)pFVar27;
    if (((ulonglong)pTVar3 & 7) != 0) {
      FWindowsPlatformAtomics::HandleAtomicsFailure
                (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
    }
    LOCK();
    pTVar4 = pTVar3->Head;
    pTVar3->Head = pTVar26;
    UNLOCK();
    if (((ulonglong)pTVar4 & 7) != 0) {
      FWindowsPlatformAtomics::HandleAtomicsFailure
                (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
    }
    LOCK();
    pTVar4->NextNode = pTVar26;
    UNLOCK();
  }
  KickSubmissionThread(this,param_3);
  if (this->InterruptThread == (FVulkanThread *)0x0) {
    do {
      BVar21 = TryEnterCriticalSection((LPCRITICAL_SECTION)&this->InterruptCS);
      if (BVar21 == 0) break;
      DVar22 = GetCurrentThreadId();
      uVar5 = this->InterruptThreadID;
      this->InterruptThreadID = DVar22;
      bVar19 = ProcessInterruptQueue(this);
      LeaveCriticalSection((LPCRITICAL_SECTION)&this->InterruptCS);
      this->InterruptThreadID = uVar5;
    } while (bVar19);
  }
  if (local_38 == (undefined1  [8])0x0) {
    return;
  }
  if (*(undefined1 *)((longlong)local_38 + 0xd0) == '\0') {
    FBaseGraphTask::Wait((FBaseGraphTask *)local_38,AnyNormalThreadNormalTask);
  }
LAB_145bb9e72:
  if (local_38 != (undefined1  [8])0x0) {
    LOCK();
    puVar1 = (undefined1 *)((longlong)local_38 + 0x30);
    iVar20 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if ((iVar20 == 1) && (local_38 != (undefined1  [8])0x0)) {
      (*(code *)**(undefined8 **)local_38)(local_38,1);
    }
  }
  return;
}

// RHISetImageLayout @ 145bb9ec0

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

void __thiscall
FVulkanDynamicRHI::RHISetImageLayout
          (FVulkanDynamicRHI *this,VkImage_T *param_1,VkImageLayout param_2,VkImageLayout param_3,
          VkImageSubresourceRange *param_4)

{
  FVulkanCommandBuffer *pFVar1;
  
  pFVar1 = FVulkanContextCommon::GetCommandBuffer
                     ((FVulkanContextCommon *)this->Device->ImmediateContext);
  VulkanSetImageLayout(this,pFVar1->CommandBufferHandle,param_1,param_2,param_3,param_4);
  return;
}

// RHISetUploadImageLayout @ 145bb9f40

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

void __thiscall
FVulkanDynamicRHI::RHISetUploadImageLayout
          (FVulkanDynamicRHI *this,VkImage_T *param_1,VkImageLayout param_2,VkImageLayout param_3,
          VkImageSubresourceRange *param_4)

{
  FVulkanCommandBuffer *pFVar1;
  
  pFVar1 = FVulkanContextCommon::GetCommandBuffer
                     ((FVulkanContextCommon *)this->Device->ImmediateContext);
  VulkanSetImageLayout(this,pFVar1->CommandBufferHandle,param_1,param_2,param_3,param_4);
  return;
}

// RHISubmitCommandLists @ 145bb9fc0

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

void __thiscall
FVulkanDynamicRHI::RHISubmitCommandLists
          (FVulkanDynamicRHI *this,FRHISubmitCommandListsArgs *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TQueue<FVulkanPlatformCommandList_*,0> *pTVar1;
  FScriptContainerElement *pFVar2;
  TNode *pTVar3;
  int iVar4;
  uint uVar5;
  FVulkanPlatformCommandList *pFVar6;
  bool bVar7;
  BOOL BVar8;
  DWORD DVar9;
  TNode *pTVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res8 [8];
  
  iVar4 = (param_1->CommandLists).ArrayNum;
  pFVar11 = (param_1->CommandLists).AllocatorInstance.Data;
  pFVar2 = pFVar11 + (longlong)iVar4 * 8;
  while( true ) {
    if ((param_1->CommandLists).ArrayNum != iVar4) {
      `TCheckedPointerIterator<IRHIPlatformCommandList_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar11 == pFVar2) break;
    pFVar6 = *(FVulkanPlatformCommandList **)pFVar11;
    pTVar1 = &this->PendingPayloadsForSubmission;
    pTVar10 = ::operator_new(0x10);
    if (pTVar10 != (TNode *)0x0) {
      pTVar10->NextNode = (TNode *)0x0;
      pTVar10->Item = pFVar6;
      if (((ulonglong)pTVar1 & 7) != 0) {
        FWindowsPlatformAtomics::HandleAtomicsFailure
                  (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
      }
      LOCK();
      pTVar3 = pTVar1->Head;
      pTVar1->Head = pTVar10;
      UNLOCK();
      if (((ulonglong)pTVar3 & 7) != 0) {
        FWindowsPlatformAtomics::HandleAtomicsFailure
                  (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
      }
      LOCK();
      pTVar3->NextNode = pTVar10;
      UNLOCK();
    }
    pFVar11 = pFVar11 + 8;
  }
  if (this->SubmissionThread == (FVulkanThread *)0x0) {
    bVar7 = FVulkanDevice::UseMinimalSubmits(this->Device);
    if (!bVar7) {
      lpCriticalSection = &this->SubmissionCS;
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      do {
        bVar7 = ProcessSubmissionQueue(this);
      } while (bVar7);
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  else {
    (**(code **)(this->SubmissionThread->Event->_padding_ + 0x10))();
  }
  if (this->InterruptThread == (FVulkanThread *)0x0) {
    do {
      BVar8 = TryEnterCriticalSection((LPCRITICAL_SECTION)&this->InterruptCS);
      if (BVar8 == 0) {
        return;
      }
      DVar9 = GetCurrentThreadId();
      uVar5 = this->InterruptThreadID;
      this->InterruptThreadID = DVar9;
      bVar7 = ProcessInterruptQueue(this);
      LeaveCriticalSection((LPCRITICAL_SECTION)&this->InterruptCS);
      this->InterruptThreadID = uVar5;
    } while (bVar7);
  }
  return;
}

// RHISubmitUploadCommandBuffer @ 145bba150

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

void __thiscall FVulkanDynamicRHI::RHISubmitUploadCommandBuffer(FVulkanDynamicRHI *this)

{
  return;
}

// RHISupportsEXTFragmentDensityMap2 @ 145bba160

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

bool __thiscall FVulkanDynamicRHI::RHISupportsEXTFragmentDensityMap2(FVulkanDynamicRHI *this)

{
  return (bool)(*(byte *)&(this->Device->OptionalDeviceExtensions).field0_0x0 >> 5 & 1);
}

// RHIUnlockStagingBuffer @ 145bba180

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

void __thiscall
FVulkanDynamicRHI::RHIUnlockStagingBuffer(FVulkanDynamicRHI *this,FRHIStagingBuffer *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1->bIsLocked != false) {
    param_1->bIsLocked = false;
    return;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("bIsLocked",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanUtil.cpp"
                     ,0x259,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  param_1->bIsLocked = false;
  return;
}

// RHIUnlockTexture @ 145bba1d0

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
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */

void __thiscall
FVulkanDynamicRHI::RHIUnlockTexture
          (FVulkanDynamicRHI *this,FRHICommandListImmediate *param_1,FRHILockTextureArgs *param_2)

{
  char cVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  FVulkanTexture *pFVar6;
  longlong lVar7;
  IRHICommandContext *pIVar8;
  undefined8 *puVar9;
  byte bVar10;
  FVulkanContextCommon *pFVar11;
  uint uVar12;
  uint uVar13;
  undefined1 auStackY_148 [32];
  FLLMScope local_118 [2];
  undefined8 local_110;
  undefined8 uStack_108;
  uint local_100;
  uint uStack_fc;
  uint uStack_f8;
  undefined4 uStack_f4;
  undefined8 local_f0;
  undefined4 uStack_e8;
  uint uStack_e4;
  uint local_e0;
  undefined4 uStack_dc;
  FMemScope local_d8;
  FTextureLockParams local_d0;
  FVulkanTexture *local_98;
  VkBufferImageCopy VStack_90;
  FStagingBuffer *local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_148;
  FLLMScope::FLLMScope(local_118,VideoRecording|ThreadStackPlatform,false,None,Default,true);
  FMemScope::FMemScope(&local_d8,VideoRecording|ThreadStackPlatform,true);
  EnterCriticalSection((LPCRITICAL_SECTION)&GTextureMapLock);
  FRHILockTracker::Unlock(&GRHILockTracker,&local_d0,(FRHILockedTextureDesc *)param_2);
  if ((local_d0.Data == (FStagingBuffer *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StagingBuffer",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                         ,0x6a2,L"Texture was not locked!"), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&GTextureMapLock);
  pFVar6 = (FVulkanTexture *)(**(code **)(*(longlong *)param_2->_padding_ + 0x48))();
  lVar7 = (**(code **)(pFVar6->_padding_ + 0x20))(pFVar6);
  uVar13 = *(uint *)((longlong)&param_2->_padding_ + 4);
  cVar1 = *(char *)(lVar7 + 0x32);
  if ((cVar1 == '\x03') || (cVar1 == '\x04')) {
    uVar12 = (int)param_2->_padding_ + uVar13 * 6;
  }
  else {
    uVar12 = 0;
    if (cVar1 == '\x01') {
      uVar12 = uVar13;
    }
  }
  bVar10 = (byte)(int)param_2->_padding_;
  uVar4 = *(int *)(lVar7 + 0x24) >> (bVar10 & 0x1f);
  uVar13 = 0;
  if (uVar4 != 0) {
    uVar13 = uVar4;
  }
  uVar5 = *(int *)(lVar7 + 0x28) >> (bVar10 & 0x1f);
  uVar4 = 0;
  if (uVar5 != 0) {
    uVar4 = uVar5;
  }
  if (((uVar4 == 0) && (uVar13 == 0)) &&
     (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_5704882760083044691>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                         ,0x6ad,"!(MipHeight == 0 && MipWidth == 0)"), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_100 = pFVar6->PartialAspectMask;
  uStack_fc = (uint)param_2->_padding_;
  local_110 = 0;
  uStack_108 = 0;
  uStack_e4 = 1;
  if (1 < uVar13) {
    uStack_e4 = uVar13;
  }
  uStack_f4 = 1;
  VStack_90.imageSubresource.mipLevel = uStack_fc;
  VStack_90.imageSubresource.aspectMask = local_100;
  VStack_90.imageSubresource.layerCount = 1;
  VStack_90.imageSubresource.baseArrayLayer = uVar12;
  local_e0 = 1;
  if (1 < uVar4) {
    local_e0 = uVar4;
  }
  local_f0 = 0;
  uStack_e8 = 0;
  VStack_90.bufferOffset = 0;
  VStack_90.bufferRowLength = 0;
  VStack_90.bufferImageHeight = 0;
  VStack_90._40_8_ = (ulonglong)uStack_e4 << 0x20;
  uStack_dc = 1;
  VStack_90.imageExtent.depth = 1;
  VStack_90.imageExtent.height = local_e0;
  VStack_90.imageOffset.x = 0;
  VStack_90.imageOffset.y = 0;
  local_58 = local_d0.Data;
  uStack_f8 = uVar12;
  local_98 = pFVar6;
  if (((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) &&
     (param_1->field_0x64 == '\0')) {
    puVar9 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x60,8);
    *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
    **(undefined8 **)&param_1->field_0x30 = puVar9;
    *(undefined8 **)&param_1->field_0x30 = puVar9 + 1;
    puVar9[1] = 0;
    *puVar9 = &TRHILambdaCommand<FRHICommandListImmediate,`FVulkanDynamicRHI::RHIUnlockTexture'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar9[2] = local_98;
    puVar9[3] = VStack_90.bufferOffset;
    puVar9[4] = VStack_90._8_8_;
    puVar9[5] = VStack_90.imageSubresource._0_8_;
    puVar9[6] = VStack_90.imageSubresource._8_8_;
    puVar9[7] = VStack_90.imageOffset._0_8_;
    puVar9[8] = VStack_90._40_8_;
    puVar9[9] = VStack_90.imageExtent._4_8_;
    puVar9[10] = local_58;
    puVar9[0xb] = L"FVulkanTexture::InternalLockWrite";
  }
  else {
    pIVar8 = FRHICommandListBase::GetContext((FRHICommandListBase *)param_1);
    lVar7 = (**(code **)(pIVar8->_padding_ + 0x148))(pIVar8);
    pFVar11 = (FVulkanContextCommon *)(lVar7 + -0x50);
    if (lVar7 == 0) {
      pFVar11 = (FVulkanContextCommon *)0x0;
    }
    FVulkanTexture::InternalLockWrite(pFVar11,pFVar6,&VStack_90,local_d0.Data);
  }
  FMemScope::~FMemScope(&local_d8);
  FLLMScope::~FLLMScope(local_118);
  return;
}

// RHIUpdateResourceCollection @ 145bba4b0

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
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FVulkanDynamicRHI::RHIUpdateResourceCollection
          (FVulkanDynamicRHI *this,FRHICommandListBase *param_1,FRHIResourceCollection *param_2,
          uint param_3,TArrayView<FRHIResourceCollectionMember_const_,int> *param_4)

{
  TArrayView<FRHIResourceCollectionMember_const_,int> local_18;
  
  local_18.DataPtr = param_4->DataPtr;
  local_18.ArrayNum = param_4->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_4->field_0xc;
  UE::RHICore::UpdateGenericResourceCollection
            (param_1,(FGenericResourceCollection *)param_2,param_3,&local_18);
  return;
}

// RHIUpdateTexture2D @ 145bba4f0

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
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */

void __thiscall
FVulkanDynamicRHI::RHIUpdateTexture2D
          (FVulkanDynamicRHI *this,FRHICommandListBase *param_1,FRHITexture *param_2,uint param_3,
          FUpdateTextureRegion2D *param_4,uint param_5,uchar *param_6)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  FRHITexture *pFVar4;
  FStagingBuffer *pFVar5;
  bool bVar6;
  longlong lVar7;
  void *_Dst;
  FVulkanTexture *pFVar8;
  IRHICommandContext *pIVar9;
  FRHICommandBase *pFVar10;
  int iVar11;
  FVulkanContextCommon *pFVar12;
  int iVar13;
  uchar *_Src;
  ulonglong uVar14;
  int iVar15;
  ulonglong uVar16;
  longlong lVar17;
  undefined1 auStackY_158 [32];
  FLLMScope FStack_128;
  uint uStack_124;
  uint uStack_120;
  int iStack_11c;
  uint uStack_118;
  FRHICommandBase *pFStack_110;
  longlong lStack_108;
  undefined4 uStack_100;
  uint uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  uint uStack_f0;
  uint uStack_ec;
  undefined4 uStack_e8;
  uint uStack_e4;
  uint uStack_e0;
  undefined4 uStack_dc;
  uchar *puStack_d8;
  longlong lStack_d0;
  FRHICommandListBase *pFStack_c8;
  FUpdateTextureRegion2D *pFStack_c0;
  FRHITexture *pFStack_b8;
  FStagingBuffer *pFStack_b0;
  FMemScope aFStack_a8 [2];
  FVulkanTexture *pFStack_98;
  undefined1 auStack_90 [24];
  longlong lStack_78;
  FRHICommandBase *pFStack_70;
  longlong lStack_68;
  FRHICommandBase *pFStack_60;
  FStagingBuffer *pFStack_58;
  ulonglong uStack_48;
  
  uStack_48 = __security_cookie.value ^ (ulonglong)auStackY_158;
  uStack_124 = param_5;
  puStack_d8 = param_6;
  pFStack_c0 = param_4;
  uStack_118 = param_3;
  pFStack_c8 = param_1;
  pFStack_b8 = param_2;
  FLLMScope::FLLMScope(&FStack_128,VideoRecording|ThreadStackPlatform,false,None,Default,true);
  FMemScope::FMemScope(aFStack_a8,VideoRecording|ThreadStackPlatform,true);
  lVar7 = (**(code **)(param_2->_padding_ + 0x20))(param_2);
  uVar14 = (ulonglong)*(byte *)(lVar7 + 0x33);
  lStack_d0 = uVar14 * 0x30;
  if ((param_4->Width % (uint)GPixelFormats[uVar14].BlockSizeX != 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("UpdateRegion.Width % FormatInfo.BlockSizeX == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                         ,0x6c9,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((param_4->Height % (uint)GPixelFormats[uVar14].BlockSizeY != 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("UpdateRegion.Height % FormatInfo.BlockSizeY == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                         ,0x6ca,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((param_4->DestX % (uint)GPixelFormats[uVar14].BlockSizeX != 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("UpdateRegion.DestX % FormatInfo.BlockSizeX == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                         ,0x6cb,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((param_4->DestY % (uint)GPixelFormats[uVar14].BlockSizeY != 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("UpdateRegion.DestY % FormatInfo.BlockSizeY == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                         ,0x6cc,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((param_4->SrcX % GPixelFormats[uVar14].BlockSizeX != 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("UpdateRegion.SrcX % FormatInfo.BlockSizeX == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                         ,0x6cd,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((param_4->SrcY % GPixelFormats[uVar14].BlockSizeY != 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("UpdateRegion.SrcY % FormatInfo.BlockSizeY == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                         ,0x6ce,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar1 = GPixelFormats[uVar14].BlockSizeX;
  uVar2 = GPixelFormats[uVar14].BlockSizeY;
  iVar11 = param_4->SrcX;
  iVar13 = param_4->SrcY;
  uVar16 = (ulonglong)((param_4->Width - 1) + uVar1) / (ulonglong)uVar1;
  iStack_11c = (int)uVar16;
  uStack_120 = ((param_4->Height - 1) + uVar2) / uVar2;
  lVar17 = (longlong)GPixelFormats[uVar14].BlockBytes * uVar16;
  iVar15 = (int)(this->Device->GpuProps).limits.minMemoryMapAlignment;
  pFStack_b0 = VulkanRHI::FStagingManager::AcquireBuffer
                         (&this->Device->StagingManager,
                          iVar15 + -1 + uStack_120 * (int)lVar17 & -iVar15,1,
                          VK_MEMORY_PROPERTY_HOST_COHERENT_BIT);
  _Dst = VulkanRHI::FStagingBuffer::GetMappedPointer(pFStack_b0);
  lVar7 = lStack_d0;
  iVar15 = iStack_11c;
  _Src = puStack_d8 +
         (ulonglong)(((iVar13 + -1 + uVar2) / uVar2) * uStack_124) +
         (ulonglong)(((iVar11 + -1 + uVar1) / uVar1) * GPixelFormats[uVar14].BlockBytes);
  if (uStack_120 != 0) {
    uVar16 = (ulonglong)uStack_124;
    uVar14 = (ulonglong)uStack_120;
    do {
      memcpy(_Dst,_Src,
             (ulonglong)(uint)(iVar15 * *(int *)((longlong)&GPixelFormats[0].BlockBytes + lVar7)));
      _Src = _Src + uVar16;
      _Dst = (void *)((longlong)_Dst + lVar17);
      uVar14 = uVar14 - 1;
      param_1 = pFStack_c8;
      param_4 = pFStack_c0;
    } while (uVar14 != 0);
  }
  pFVar4 = pFStack_b8;
  lVar7 = (**(code **)(pFStack_b8->_padding_ + 0x20))(pFStack_b8);
  uStack_fc = uStack_118;
  uStack_f0 = param_4->DestX;
  uStack_ec = param_4->DestY;
  iVar13 = *(int *)(lVar7 + 0x24) >> ((byte)uStack_118 & 0x1f);
  iVar15 = *(int *)(lVar7 + 0x28) >> ((byte)uStack_118 & 0x1f);
  pFStack_110 = (FRHICommandBase *)0x0;
  iVar11 = 1;
  if (1 < iVar13) {
    iVar11 = iVar13;
  }
  lStack_108 = 0;
  uStack_f8 = 0;
  uStack_e4 = iVar11 - uStack_f0;
  if (param_4->Width < iVar11 - uStack_f0) {
    uStack_e4 = param_4->Width;
  }
  iVar11 = 1;
  if (1 < iVar15) {
    iVar11 = iVar15;
  }
  uStack_e8 = 0;
  uStack_100 = 1;
  uStack_f4 = 1;
  uStack_e0 = iVar11 - uStack_ec;
  if (param_4->Height < iVar11 - uStack_ec) {
    uStack_e0 = param_4->Height;
  }
  uStack_dc = 1;
  pFVar8 = (FVulkanTexture *)(**(code **)(pFVar4->_padding_ + 0x48))(pFVar4);
  pFVar5 = pFStack_b0;
  auStack_90._16_8_ = CONCAT44(uStack_fc,uStack_100);
  lStack_78 = CONCAT44(uStack_f4,uStack_f8);
  auStack_90._0_8_ = pFStack_110;
  auStack_90._8_8_ = lStack_108;
  pFStack_58 = pFStack_b0;
  pFStack_70 = (FRHICommandBase *)CONCAT44(uStack_ec,uStack_f0);
  lStack_68 = CONCAT44(uStack_e4,uStack_e8);
  pFStack_60 = (FRHICommandBase *)CONCAT44(uStack_dc,uStack_e0);
  pFStack_98 = pFVar8;
  if (((GRHICommandList.bLatchedBypass == false) || ((param_1->PersistentState).bImmediate == '\0'))
     && (param_1->bExecuting == false)) {
    pFVar10 = FMemStackBase::Alloc(&param_1->MemManager,0x60,8);
    param_1->NumCommands = param_1->NumCommands + 1;
    *param_1->CommandLink = pFVar10;
    param_1->CommandLink = &pFVar10->Next;
    pFVar10->Next = (FRHICommandBase *)0x0;
    pFVar10->_padding_ =
         (longlong)
         &TRHILambdaCommand<FRHICommandListBase,`FVulkanDynamicRHI::InternalUpdateTexture2D'::`2'::<lambda_1>_>
          ::_vftable_;
    pFVar10[1]._padding_ = (longlong)pFStack_98;
    pFVar10[1].Next = (FRHICommandBase *)auStack_90._0_8_;
    pFVar10[2]._padding_ = auStack_90._8_8_;
    pFVar10[2].Next = (FRHICommandBase *)auStack_90._16_8_;
    pFVar10[3]._padding_ = lStack_78;
    pFVar10[3].Next = pFStack_70;
    pFVar10[4]._padding_ = lStack_68;
    pFVar10[4].Next = pFStack_60;
    pFVar10[5]._padding_ = (longlong)pFStack_58;
    pFVar10[5].Next = (FRHICommandBase *)L"FVulkanTexture::InternalLockWrite";
  }
  else {
    pIVar9 = FRHICommandListBase::GetContext(param_1);
    lVar7 = (**(code **)(pIVar9->_padding_ + 0x148))(pIVar9);
    pFVar12 = (FVulkanContextCommon *)(lVar7 + -0x50);
    if (lVar7 == 0) {
      pFVar12 = (FVulkanContextCommon *)0x0;
    }
    FVulkanTexture::InternalLockWrite(pFVar12,pFVar8,(VkBufferImageCopy *)auStack_90,pFVar5);
  }
  FMemScope::~FMemScope(aFStack_a8);
  FLLMScope::~FLLMScope(&FStack_128);
  return;
}

// RHIUpdateTexture3D @ 145bba500

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
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */

void __thiscall
FVulkanDynamicRHI::RHIUpdateTexture3D
          (FVulkanDynamicRHI *this,FRHICommandListBase *param_1,FRHITexture *param_2,uint param_3,
          FUpdateTextureRegion3D *param_4,uint param_5,uint param_6,uchar *param_7)

{
  char cVar1;
  int iVar2;
  FVulkanDevice *pFVar3;
  ulonglong uVar4;
  code *pcVar5;
  FVulkanDynamicRHI *pFVar6;
  FRHITexture *pFVar7;
  FVulkanTexture *pFVar8;
  bool bVar9;
  longlong lVar10;
  void *_Dst;
  FRHICommandBase *pFVar11;
  IRHICommandContext *pIVar12;
  byte bVar13;
  FVulkanContextCommon *pFVar14;
  uchar *_Src;
  ulonglong _Size;
  int iVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  ulonglong uVar21;
  undefined1 auStackY_148 [32];
  FLLMScope FStack_114;
  uint uStack_110;
  uint uStack_10c;
  FVulkanDynamicRHI *pFStack_108;
  FRHICommandBase *pFStack_100;
  longlong lStack_f8;
  undefined4 uStack_f0;
  uint uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  uint uStack_e0;
  uint uStack_dc;
  uint uStack_d8;
  uint uStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  uchar *puStack_c8;
  FUpdateTextureRegion3D *pFStack_c0;
  FRHICommandListBase *pFStack_b8;
  FRHITexture *pFStack_b0;
  FVulkanTexture *pFStack_a8;
  FMemScope FStack_a0;
  FVulkanTexture *pFStack_98;
  undefined1 auStack_90 [24];
  longlong lStack_78;
  FRHICommandBase *pFStack_70;
  longlong lStack_68;
  FRHICommandBase *pFStack_60;
  FStagingBuffer *pFStack_58;
  ulonglong uStack_48;
  
  uStack_48 = __security_cookie.value ^ (ulonglong)auStackY_148;
  puStack_c8 = param_7;
  pFStack_c0 = param_4;
  uStack_10c = param_3;
  pFStack_108 = this;
  pFStack_b8 = param_1;
  pFStack_b0 = param_2;
  FLLMScope::FLLMScope(&FStack_114,VideoRecording|ThreadStackPlatform,false,None,Default,true);
  FMemScope::FMemScope(&FStack_a0,VideoRecording|ThreadStackPlatform,true);
  pFStack_a8 = (FVulkanTexture *)(**(code **)(param_2->_padding_ + 0x48))(param_2);
  lVar10 = (**(code **)(pFStack_a8->_padding_ + 0x20))(pFStack_a8);
  bVar13 = *(byte *)(lVar10 + 0x33);
  iVar15 = GPixelFormats[bVar13].BlockSizeX;
  iVar18 = GPixelFormats[bVar13].BlockSizeY;
  iVar2 = GPixelFormats[bVar13].BlockBytes;
  if ((GPixelFormats[bVar13].BlockSizeZ != 1) &&
     (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_5704882760083044580>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                         ,0x71c,"BlockSizeZ == 1"), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar3 = this->Device;
  pFStack_100 = (FRHICommandBase *)0x0;
  lStack_f8 = 0;
  uStack_e8 = 0;
  iVar15 = (int)((param_4->Width - 1) + iVar15) / iVar15;
  uVar4 = (longlong)(int)((param_4->Height - 1) + iVar18) / (longlong)iVar18;
  uVar19 = iVar15 * iVar2;
  uStack_110 = uVar19;
  if ((param_5 < uVar19) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumBlocksX * BlockBytes <= SourceRowPitch",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                         ,0x725,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar18 = (int)uVar4;
  if ((param_6 < (uint)(iVar18 * iVar15 * iVar2)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumBlocksX * BlockBytes * NumBlocksY <= SourceDepthPitch",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                         ,0x726,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar15 = (int)(pFVar3->GpuProps).limits.minMemoryMapAlignment;
  pFStack_108 = (FVulkanDynamicRHI *)
                VulkanRHI::FStagingManager::AcquireBuffer
                          (&pFStack_108->Device->StagingManager,
                           iVar15 + -1 + uVar19 * param_4->Depth * iVar18 & -iVar15,1,
                           VK_MEMORY_PROPERTY_HOST_COHERENT_BIT);
  _Dst = VulkanRHI::FStagingBuffer::GetMappedPointer((FStagingBuffer *)pFStack_108);
  if ((param_4->SrcX != 0) &&
     (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_5704882760083044561>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                         ,0x72f,"UpdateRegion.SrcX == 0"), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((param_4->SrcY != 0) &&
     (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_5704882760083044560>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                         ,0x730,"UpdateRegion.SrcY == 0"), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar17 = 0;
  if (param_4->Depth != 0) {
    do {
      _Src = puStack_c8 + param_6 * uVar17;
      if (iVar18 != 0) {
        _Size = (ulonglong)uVar19;
        uVar21 = uVar4 & 0xffffffff;
        do {
          memcpy(_Dst,_Src,_Size);
          _Dst = (void *)((longlong)_Dst + _Size);
          _Src = _Src + param_5;
          uVar21 = uVar21 - 1;
          uVar19 = uStack_110;
        } while (uVar21 != 0);
      }
      uVar17 = uVar17 + 1;
      param_4 = pFStack_c0;
      param_1 = pFStack_b8;
    } while (uVar17 < pFStack_c0->Depth);
  }
  pFVar7 = pFStack_b0;
  lVar10 = (**(code **)(pFStack_b0->_padding_ + 0x20))(pFStack_b0);
  uVar19 = uStack_10c;
  bVar13 = (byte)uStack_10c;
  uVar17 = *(uint *)(lVar10 + 0x24) >> (bVar13 & 0x1f);
  if (uVar17 == 0) {
    uVar17 = 1;
  }
  lVar10 = (**(code **)(pFVar7->_padding_ + 0x20))(pFVar7);
  uVar20 = *(uint *)(lVar10 + 0x28) >> (bVar13 & 0x1f);
  if (uVar20 == 0) {
    uVar20 = 1;
  }
  lVar10 = (**(code **)(pFVar7->_padding_ + 0x20))(pFVar7);
  pFVar8 = pFStack_a8;
  pFVar6 = pFStack_108;
  cVar1 = *(char *)(lVar10 + 0x32);
  if (cVar1 == '\0') {
LAB_145bb1134:
    uVar16 = 1;
  }
  else {
    if (cVar1 != '\x01') {
      if (cVar1 == '\x02') {
        uVar16 = (uint)*(ushort *)(lVar10 + 0x2c);
        goto LAB_145bb113a;
      }
      if (cVar1 == '\x03') goto LAB_145bb1134;
      if (cVar1 != '\x04') {
        uVar16 = 0;
        goto LAB_145bb113a;
      }
    }
    uVar16 = (uint)*(ushort *)(lVar10 + 0x2e);
  }
LAB_145bb113a:
  uStack_e0 = param_4->DestX;
  uStack_dc = param_4->DestY;
  pFStack_70 = *(FRHICommandBase **)param_4;
  uStack_d8 = param_4->DestZ;
  uVar16 = uVar16 >> (bVar13 & 0x1f);
  uStack_d4 = param_4->Width;
  if ((int)(uVar17 - uStack_e0) < (int)param_4->Width) {
    uStack_d4 = uVar17 - uStack_e0;
  }
  uStack_f0 = 1;
  uStack_ec = uVar19;
  uStack_d0 = param_4->Height;
  if ((int)(uVar20 - uStack_dc) < (int)param_4->Height) {
    uStack_d0 = uVar20 - uStack_dc;
  }
  uStack_e4 = 1;
  auStack_90._16_8_ = CONCAT44(uVar19,1);
  lStack_78 = CONCAT44(1,uStack_e8);
  if (uVar16 == 0) {
    uVar16 = 1;
  }
  uStack_cc = param_4->Depth;
  if ((int)(uVar16 - uStack_d8) < (int)param_4->Depth) {
    uStack_cc = uVar16 - uStack_d8;
  }
  pFStack_98 = pFStack_a8;
  auStack_90._0_8_ = pFStack_100;
  auStack_90._8_8_ = lStack_f8;
  lStack_68 = CONCAT44(uStack_d4,uStack_d8);
  pFStack_58 = (FStagingBuffer *)pFStack_108;
  pFStack_60 = (FRHICommandBase *)CONCAT44(uStack_cc,uStack_d0);
  if (((GRHICommandList.bLatchedBypass == false) || ((param_1->PersistentState).bImmediate == '\0'))
     && (param_1->bExecuting == false)) {
    pFVar11 = FMemStackBase::Alloc(&param_1->MemManager,0x60,8);
    param_1->NumCommands = param_1->NumCommands + 1;
    *param_1->CommandLink = pFVar11;
    param_1->CommandLink = &pFVar11->Next;
    pFVar11->Next = (FRHICommandBase *)0x0;
    pFVar11->_padding_ =
         (longlong)
         &TRHILambdaCommand<FRHICommandListBase,`FVulkanDynamicRHI::InternalUpdateTexture3D'::`2'::<lambda_1>_>
          ::_vftable_;
    pFVar11[1]._padding_ = (longlong)pFStack_98;
    pFVar11[1].Next = (FRHICommandBase *)auStack_90._0_8_;
    pFVar11[2]._padding_ = auStack_90._8_8_;
    pFVar11[2].Next = (FRHICommandBase *)auStack_90._16_8_;
    pFVar11[3]._padding_ = lStack_78;
    pFVar11[3].Next = pFStack_70;
    pFVar11[4]._padding_ = lStack_68;
    pFVar11[4].Next = pFStack_60;
    pFVar11[5]._padding_ = (longlong)pFStack_58;
    pFVar11[5].Next = (FRHICommandBase *)L"FVulkanTexture::InternalLockWrite";
  }
  else {
    pIVar12 = FRHICommandListBase::GetContext(param_1);
    lVar10 = (**(code **)(pIVar12->_padding_ + 0x148))(pIVar12);
    pFVar14 = (FVulkanContextCommon *)(lVar10 + -0x50);
    if (lVar10 == 0) {
      pFVar14 = (FVulkanContextCommon *)0x0;
    }
    FVulkanTexture::InternalLockWrite
              (pFVar14,pFVar8,(VkBufferImageCopy *)auStack_90,(FStagingBuffer *)pFVar6);
  }
  FMemScope::~FMemScope(&FStack_a0);
  FLLMScope::~FLLMScope(&FStack_114);
  return;
}

// RHIUpdateTextureReference @ 145bba510

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
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */

void __thiscall
FVulkanDynamicRHI::RHIUpdateTextureReference
          (FVulkanDynamicRHI *this,FRHICommandListBase *param_1,FRHITextureReference *param_2,
          FRHITexture *param_3)

{
  bool bVar1;
  TRefCountPtr<FRHITexture> TVar2;
  ERHIPipeline EVar3;
  <lambda_1> local_18;
  
  bVar1 = FVulkanDevice::SupportsBindless(this->Device);
  if ((((bVar1) && (param_2 != (FRHITextureReference *)0x0)) &&
      ((param_2->BindlessHandle).Index != 0xffffffff)) &&
     ((param_2->BindlessHandle).Type != Invalid)) {
    FRHIResource::AddRef((FRHIResource *)param_2);
    TVar2 = FRHITextureReference::DefaultTexture;
    if (param_3 != (FRHITexture *)0x0) {
      TVar2.Reference = param_3;
    }
    local_18.TextureRef.Reference = (FVulkanTextureReference *)param_2;
    local_18.NewTexture = (FVulkanTexture *)(**(code **)((TVar2.Reference)->_padding_ + 0x48))();
    EVar3 = Graphics;
    if (GRHIGlobals.SupportsEfficientAsyncCompute != false) {
      EVar3 = All;
    }
    FRHICommandListBase::
    EnqueueLambdaMultiPipe<_FVulkanDynamicRHI::RHIUpdateTextureReference_::__l5::<lambda_1>_>
              (param_1,EVar3,Enabled,L"FVulkanDynamicRHI::RHIUpdateTextureReference",&local_18);
    if (local_18.TextureRef.Reference != (FVulkanTextureReference *)0x0) {
      FRHIResource::Release((FRHIResource *)local_18.TextureRef.Reference);
    }
  }
  FDynamicRHI::RHIUpdateTextureReference((FDynamicRHI *)this,param_1,param_2,param_3);
  return;
}

// RHIUpdateUniformBuffer @ 145bba5f0

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
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
FVulkanDynamicRHI::RHIUpdateUniformBuffer
          (FVulkanDynamicRHI *this,FRHICommandListBase *param_1,FRHIUniformBuffer *param_2,
          void *param_3)

{
  int *piVar1;
  FScriptContainerElement FVar2;
  int iVar3;
  int iVar4;
  FRHIUniformBufferLayout *pFVar5;
  FRDGResource *this_00;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  undefined8 *puVar13;
  bool bVar14;
  bool bVar15;
  uint uVar16;
  FName *pFVar17;
  FThreadSafeStaticStat<FStat_STAT_VulkanUpdateUniformBuffers> FVar18;
  FThreadSafeStaticStat<FStat_STAT_VulkanUpdateUniformBuffersRename> FVar19;
  void *pvVar20;
  FRHICommandBase *pFVar21;
  FRHIResource *pFVar22;
  FRHICommandBase *pFVar23;
  FRHICommandBase *pFVar24;
  IRHICommandContext *pIVar25;
  uint uVar26;
  undefined8 *puVar27;
  FVulkanCommandListContext *pFVar28;
  FColor_u_0 FVar29;
  FName FVar30;
  FName FVar31;
  longlong lVar32;
  uint uVar33;
  FColor_u_0 FStack_100;
  uint uStack_fc;
  FColor_u_0 aFStack_f8 [2];
  undefined8 *puStack_f0;
  FColor_u_0 FStack_e8;
  uint uStack_e4;
  FName FStack_e0;
  FName FStack_d8;
  FName FStack_d0;
  FName FStack_c0;
  undefined1 auStack_b0 [24];
  longlong lStack_98;
  FRHIUniformBufferLayout *pFStack_90;
  FRHIUniformBuffer *pFStack_88;
  undefined1 auStack_80 [24];
  longlong lStack_68;
  FRHICommandBase *pFStack_60;
  int iStack_58;
  undefined4 uStack_54;
  FName FStack_50;
  FName aFStack_48 [2];
  
  FVar18 = StatPtr_STAT_VulkanUpdateUniformBuffers;
  if (StatPtr_STAT_VulkanUpdateUniformBuffers ==
      (FThreadSafeStaticStat<FStat_STAT_VulkanUpdateUniformBuffers>)0x0) {
    pFVar17 = ::FName::FName(&FStack_50,"STAT_VulkanUpdateUniformBuffers");
    FVar18 = (FThreadSafeStaticStat<FStat_STAT_VulkanUpdateUniformBuffers>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanUpdateUniformBuffers,
                        *pFVar17,L"UpdateUniformBuffers","STATGROUP_VulkanRHI","STATCAT_Advanced",
                        L"Vulkan RHI",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar31 = *(FName *)FVar18;
  bVar8 = false;
  bVar12 = false;
  FStack_d0.ComparisonIndex.Value = 0;
  FStack_d0.Number = 0;
  bVar14 = false;
  bVar9 = false;
  FVar29.Bits = (uint)FVar31.ComparisonIndex.Value;
  uVar26 = FVar31.Number;
  if ((FVar29.Bits == 0) && (uVar26 == 0)) {
LAB_145bc0a26:
    bVar12 = bVar9;
    bVar8 = bVar14;
    bVar14 = false;
    FStack_d8 = FStack_d0;
    FVar31 = FStack_d0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      aFStack_f8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&aFStack_f8[0]._s_0,(char *)*(FName *)((longlong)FVar18 + 0x10));
      bVar8 = false;
      bVar12 = true;
      bVar14 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        FStack_e8.Bits = FVar29.Bits;
        uStack_e4 = uVar26;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&FStack_e8._s_0,(wchar_t *)*(FName *)((longlong)FVar18 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanUniformBuffer.cpp"
                   ,0x115);
        bVar8 = true;
        bVar12 = true;
        bVar14 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_145bc0a26;
    FStack_100.Bits = FVar29.Bits;
    uStack_fc = uVar26;
    FStack_d8 = FVar31;
    FThreadStats::AddMessage(FVar31,CycleScopeStart);
    bVar14 = true;
  }
  pFVar5 = (param_2->Layout).Reference;
  uVar26 = pFVar5->ConstantBufferSize;
  iVar3 = (pFVar5->Resources).ArrayNum;
  pFStack_90 = pFVar5;
  VulkanRHI::FVulkanAllocation::FVulkanAllocation((FVulkanAllocation *)auStack_b0);
  if ((GVulkanAllowUniformUpload == 0) || ((param_1->PersistentState).bInsideRenderPass != '\0')) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  iVar4 = (int)param_2[1]._padding_;
  if ((iVar4 == 0) || (iVar4 == 1)) {
    bVar10 = true;
  }
  else {
    bVar10 = false;
  }
  if (((bVar9) || (bVar10)) || ((int)uVar26 < 1)) goto LAB_145bc0c52;
  FVar19 = StatPtr_STAT_VulkanUpdateUniformBuffersRename;
  if (StatPtr_STAT_VulkanUpdateUniformBuffersRename ==
      (FThreadSafeStaticStat<FStat_STAT_VulkanUpdateUniformBuffersRename>)0x0) {
    pFVar17 = ::FName::FName(aFStack_48,"STAT_VulkanUpdateUniformBuffersRename");
    FVar19 = (FThreadSafeStaticStat<FStat_STAT_VulkanUpdateUniformBuffersRename>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanUpdateUniformBuffersRename,
                        *pFVar17,L"UpdateUniformBuffersRename","STATGROUP_VulkanRHI",
                        "STATCAT_Advanced",L"Vulkan RHI",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar30 = *(FName *)FVar19;
  bVar15 = false;
  bVar11 = false;
  FStack_c0.ComparisonIndex.Value = 0;
  FStack_c0.Number = 0;
  if ((FVar30.ComparisonIndex.Value.Value == 0) && (FVar30.Number == 0)) {
LAB_145bc0bb8:
    bVar7 = false;
    FVar30 = FStack_c0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      FStack_100.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&FStack_100._s_0,(char *)*(FName *)((longlong)FVar19 + 0x10));
      bVar15 = false;
      bVar11 = true;
      if (-1 < CpuChannel->Enabled) {
        FStack_e0.ComparisonIndex.Value = FVar30.ComparisonIndex.Value.Value;
        FStack_e0.Number = FVar30.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&FStack_e0,(wchar_t *)*(FName *)((longlong)FVar19 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanUniformBuffer.cpp"
                   ,0x124);
        bVar15 = true;
        bVar11 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_145bc0bb8;
    FThreadStats::AddMessage(FVar30,CycleScopeStart);
    bVar7 = true;
  }
  VulkanRHI::FMemoryManager::AllocUniformBuffer
            (&this->Device->MemoryManager,(FVulkanAllocation *)auStack_b0,uVar26);
  if (param_3 != (void *)0x0) {
    pvVar20 = VulkanRHI::FVulkanAllocation::GetMappedPointer
                        ((FVulkanAllocation *)auStack_b0,this->Device);
    UpdateUniformBufferConstants(this->Device,pvVar20,param_3,pFVar5);
    VulkanRHI::FVulkanAllocation::FlushMappedMemory((FVulkanAllocation *)auStack_b0,this->Device);
  }
  if (bVar11) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar15) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar7) {
    FThreadStats::AddMessage(FVar30,CycleScopeEnd);
  }
LAB_145bc0c52:
  if ((GRHICommandList.bLatchedBypass == false) || ((param_1->PersistentState).bImmediate == '\0'))
  {
    pFVar23 = (FRHICommandBase *)0x0;
    pFVar21 = pFVar23;
    if (0 < iVar3) {
      puStack_f0 = (undefined8 *)(longlong)iVar3;
      pFVar21 = FMemStackBase::Alloc(&param_1->MemManager,(longlong)iVar3 * 8,8);
      pFVar5 = pFStack_90;
      puVar13 = puStack_f0;
      lVar32 = 0;
      if (0 < iVar3) {
        do {
          uVar33 = (uint)pFVar23;
          uVar16 = 0;
          if ((int)uVar33 < (pFVar5->Resources).ArrayNum) {
            uVar16 = ~uVar33 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          FVar2 = (pFVar5->Resources).AllocatorInstance.Data[lVar32 * 4 + 2];
          uVar16 = 0;
          if ((int)uVar33 < (pFVar5->Resources).ArrayNum) {
            uVar16 = ~uVar33 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar22 = (FRHIResource *)0x0;
          if ((0x17 < (byte)FVar2) || ((0xc98c00U >> ((byte)FVar2 & 0x1f) & 1) == 0)) {
            puVar27 = (undefined8 *)
                      ((ulonglong)
                       *(ushort *)((pFVar5->Resources).AllocatorInstance.Data + lVar32 * 4) +
                      (longlong)param_3);
            if (((byte)FVar2 < 0x13) && ((0x67200U >> ((byte)FVar2 & 0x1f) & 1) != 0)) {
              this_00 = (FRDGResource *)*puVar27;
              if (this_00 != (FRDGResource *)0x0) {
                FRDGResource::ValidateRHIAccess(this_00);
                pFVar22 = this_00->ResourceRHI;
              }
            }
            else {
              pFVar22 = (FRHIResource *)*puVar27;
            }
          }
          (&pFVar21->_padding_)[lVar32] = (longlong)pFVar22;
          pFVar23 = (FRHICommandBase *)(ulonglong)(uVar33 + 1);
          lVar32 = lVar32 + 1;
          FVar31 = FStack_d8;
        } while (lVar32 < (longlong)puVar13);
      }
    }
    if ((bVar9) || (bVar10)) {
      pFVar23 = FMemStackBase::Alloc(&param_1->MemManager,(longlong)(int)uVar26,0x10);
      memcpy(pFVar23,param_3,(longlong)(int)uVar26);
      if (((GRHICommandList.bLatchedBypass == false) ||
          ((param_1->PersistentState).bImmediate == '\0')) && (param_1->bExecuting == false)) {
        pFVar24 = FMemStackBase::Alloc(&param_1->MemManager,0x38,8);
        param_1->NumCommands = param_1->NumCommands + 1;
        *param_1->CommandLink = pFVar24;
        param_1->CommandLink = &pFVar24->Next;
        pFVar24->Next = (FRHICommandBase *)0x0;
        pFVar24->_padding_ =
             (longlong)
             &
             ___7__TRHILambdaCommand_VFRHICommandListBase__V<lambda_1>__CA___UpdateUniformBuffer_FVulkanDynamicRHI__IEAAXAEAV1_PEAVFVulkanUniformBuffer__PEBX_Z___6B_
        ;
        pFVar24[1]._padding_ = (longlong)param_2;
        pFVar24[1].Next = pFVar21;
        *(int *)&pFVar24[2]._padding_ = iVar3;
        *(uint *)((longlong)&pFVar24[2]._padding_ + 4) = uVar26;
        pFVar24[2].Next = pFVar23;
        pFVar24[3]._padding_ = (longlong)L"TRHILambdaCommand";
      }
      else {
        pIVar25 = FRHICommandListBase::GetContext(param_1);
        lVar32 = (**(code **)(pIVar25->_padding_ + 0x148))(pIVar25);
        pFVar28 = (FVulkanCommandListContext *)(lVar32 + -0x50);
        if (lVar32 == 0) {
          pFVar28 = (FVulkanCommandListContext *)0x0;
        }
        UpdateUniformBufferHelper(pFVar28,(FVulkanUniformBuffer *)param_2,pFVar23,true);
        FVulkanUniformBuffer::UpdateResourceTable
                  ((FVulkanUniformBuffer *)param_2,(FRHIResource **)pFVar21,iVar3);
      }
    }
    else {
      VulkanRHI::FVulkanAllocation::Disown((FVulkanAllocation *)auStack_b0);
      auStack_80._0_8_ = auStack_b0._0_8_;
      auStack_80._8_8_ = auStack_b0._8_8_;
      auStack_80._16_8_ = auStack_b0._16_8_;
      lStack_68 = lStack_98;
      pFStack_88 = param_2;
      pFStack_60 = pFVar21;
      iStack_58 = iVar3;
      if (((GRHICommandList.bLatchedBypass == false) ||
          ((param_1->PersistentState).bImmediate == '\0')) && (param_1->bExecuting == false)) {
        pFVar21 = FMemStackBase::Alloc(&param_1->MemManager,0x50,8);
        param_1->NumCommands = param_1->NumCommands + 1;
        *param_1->CommandLink = pFVar21;
        param_1->CommandLink = &pFVar21->Next;
        pFVar21->Next = (FRHICommandBase *)0x0;
        pFVar21->_padding_ =
             (longlong)
             &
             ___7__TRHILambdaCommand_VFRHICommandListBase__V<lambda_2>__CC___UpdateUniformBuffer_FVulkanDynamicRHI__IEAAXAEAV1_PEAVFVulkanUniformBuffer__PEBX_Z___6B_
        ;
        pFVar21[1]._padding_ = (longlong)pFStack_88;
        pFVar21[1].Next = (FRHICommandBase *)auStack_80._0_8_;
        pFVar21[2]._padding_ = auStack_80._8_8_;
        pFVar21[2].Next = (FRHICommandBase *)auStack_80._16_8_;
        pFVar21[3]._padding_ = lStack_68;
        pFVar21[3].Next = pFStack_60;
        pFVar21[4].Next = (FRHICommandBase *)L"TRHILambdaCommand";
        pFVar21[4]._padding_ = CONCAT44(uStack_54,iStack_58);
        VulkanRHI::FVulkanAllocation::~FVulkanAllocation((FVulkanAllocation *)auStack_80);
      }
      else {
        `FVulkanDynamicRHI::UpdateUniformBuffer'::__l34::<lambda_2>::operator()(&pFStack_88,param_1)
        ;
        VulkanRHI::FVulkanAllocation::~FVulkanAllocation((FVulkanAllocation *)auStack_80);
      }
    }
    FRHICommandListBase::RHIThreadFence(param_1,SUB81(&puStack_f0,0));
    if (puStack_f0 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puStack_f0 + 6);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar3 == 1) && (puStack_f0 != (undefined8 *)0x0)) {
        (**(code **)*puStack_f0)(puStack_f0,1);
      }
    }
  }
  else {
    if (0 < (int)uVar26) {
      if ((bVar9) || (bVar10)) {
        UpdateUniformBufferHelper
                  ((FVulkanCommandListContext *)this->Device->ImmediateContext,
                   (FVulkanUniformBuffer *)param_2,param_3,true);
      }
      else {
        VulkanRHI::FVulkanAllocation::Swap
                  ((FVulkanAllocation *)auStack_b0,(FVulkanAllocation *)&param_2[1]._padding_);
        VulkanRHI::FMemoryManager::FreeUniformBuffer
                  (&this->Device->MemoryManager,(FVulkanAllocation *)auStack_b0);
      }
    }
    FVulkanUniformBuffer::UpdateResourceTable((FVulkanUniformBuffer *)param_2,pFVar5,param_3,iVar3);
  }
  VulkanRHI::FVulkanAllocation::~FVulkanAllocation((FVulkanAllocation *)auStack_b0);
  if (bVar12) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar14) {
    FThreadStats::AddMessage(FVar31,CycleScopeEnd);
  }
  return;
}

// RHIVerifyResult @ 145bba600

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

void __thiscall
FVulkanDynamicRHI::RHIVerifyResult
          (FVulkanDynamicRHI *this,VkResult param_1,char *param_2,char *param_3,uint param_4)

{
  VulkanRHI::VerifyVulkanResult(param_1,param_2,param_3,param_4);
  return;
}

// RHIWriteGPUFence_TopOfPipe @ 145bba620

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
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FVulkanDynamicRHI::RHIWriteGPUFence_TopOfPipe
          (FVulkanDynamicRHI *this,FRHICommandListBase *param_1,FRHIGPUFence *param_2)

{
  FThreadSafeCounter *pFVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 *puVar5;
  code *pcVar6;
  bool bVar7;
  TRefCountPtr<FVulkanSyncPoint> TVar8;
  TRefCountPtr<FBaseGraphTask> TVar9;
  FRHICommandBase *pFVar10;
  FRHICommandBase **ppFVar11;
  undefined8 *local_res8;
  undefined8 *local_res18;
  FRHIGPUFence *local_38;
  FRHICommandBase *local_30;
  undefined8 *local_28;
  
  if (param_2 == (FRHIGPUFence *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Fence",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanUtil.cpp"
                       ,0x2b2,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar1 = &param_2[1].NumPendingWriteCommands;
  if ((param_2[1]._padding_ != 0) || (*(longlong *)&pFVar1->Counter != 0)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Fence->SubmittedSyncPoint.IsValid() && !Fence->CompletedSyncPoint.IsValid()"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanUtil.cpp"
                       ,0x2b4,L"The fence for the current GPU node has already been issued.");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  bVar7 = FVulkanDevice::UseMinimalSubmits(this->Device);
  TVar8 = FVulkanSyncPoint::Create((EVulkanSyncPointType)&local_res8,(wchar_t *)(ulonglong)bVar7);
  if ((FVulkanSyncPoint *)pFVar1 != TVar8.Reference) {
    puVar5 = *(undefined8 **)&pFVar1->Counter;
    *(longlong *)&pFVar1->Counter = (TVar8.Reference)->_padding_;
    (TVar8.Reference)->_padding_ = 0;
    if (puVar5 != (undefined8 *)0x0) {
      piVar2 = (int *)(puVar5 + 1);
      LOCK();
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if ((iVar4 == 1) && (piVar2 != (int *)0x0)) {
        (**(code **)*puVar5)(puVar5,1);
      }
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    piVar2 = (int *)(local_res8 + 1);
    LOCK();
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (((iVar4 == 1) && (piVar2 != (int *)0x0)) && (local_res8 != (undefined8 *)0x0)) {
      (**(code **)*local_res8)(local_res8,1);
    }
  }
  if (param_2[1]._padding_ != 0) {
    TVar9 = FBaseGraphTask::CreateGraphEvent();
    plVar3 = &param_2[1]._padding_;
    if ((FBaseGraphTask *)plVar3 != TVar9.Reference) {
      puVar5 = (undefined8 *)*plVar3;
      *plVar3 = *(longlong *)TVar9.Reference;
      *(undefined8 *)TVar9.Reference = 0;
      if (puVar5 != (undefined8 *)0x0) {
        LOCK();
        piVar2 = (int *)(puVar5 + 6);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)*puVar5)(puVar5,1);
        }
      }
    }
    if (local_res18 != (undefined8 *)0x0) {
      LOCK();
      piVar2 = (int *)(local_res18 + 6);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if ((iVar4 == 1) && (local_res18 != (undefined8 *)0x0)) {
        (**(code **)*local_res18)(local_res18,1);
      }
    }
  }
  LOCK();
  (param_2->NumPendingWriteCommands).Counter = (param_2->NumPendingWriteCommands).Counter + 1;
  UNLOCK();
  FRHIResource::AddRef((FRHIResource *)param_2);
  local_30 = *(FRHICommandBase **)&param_2[1].NumPendingWriteCommands;
  if (local_30 != (FRHICommandBase *)0x0) {
    LOCK();
    *(int *)&local_30->Next = *(int *)&local_30->Next + 1;
    UNLOCK();
  }
  local_28 = (undefined8 *)param_2[1]._padding_;
  if (local_28 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(local_28 + 6) = *(int *)(local_28 + 6) + 1;
    UNLOCK();
  }
  local_38 = param_2;
  if (((GRHICommandList.bLatchedBypass == false) || ((param_1->PersistentState).bImmediate == '\0'))
     && (param_1->bExecuting == false)) {
    pFVar10 = FMemStackBase::Alloc(&param_1->MemManager,0x30,8);
    param_1->NumCommands = param_1->NumCommands + 1;
    *param_1->CommandLink = pFVar10;
    param_1->CommandLink = &pFVar10->Next;
    pFVar10->_padding_ =
         (longlong)
         &TRHILambdaCommand<FRHICommandListBase,`FVulkanDynamicRHI::RHIWriteGPUFence_TopOfPipe'::`2'::<lambda_1>_>
          ::_vftable_;
    pFVar10[1]._padding_ = 0;
    pFVar10->Next = (FRHICommandBase *)0x0;
    pFVar10[1]._padding_ = (longlong)local_38;
    local_38 = (FRHIGPUFence *)0x0;
    pFVar10[1].Next = (FRHICommandBase *)0x0;
    pFVar10[1].Next = local_30;
    local_30 = (FRHICommandBase *)0x0;
    pFVar10[2]._padding_ = 0;
    pFVar10[2]._padding_ = (longlong)local_28;
    local_28 = (undefined8 *)0x0;
    pFVar10[2].Next = (FRHICommandBase *)L"TRHILambdaCommand";
  }
  else {
    `FVulkanDynamicRHI::RHIWriteGPUFence_TopOfPipe'::__l2::<lambda_1>::operator()(&local_38,param_1)
    ;
  }
  if (local_28 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(local_28 + 6);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)*local_28)(local_28,1);
    }
  }
  if (local_30 != (FRHICommandBase *)0x0) {
    ppFVar11 = &local_30->Next;
    LOCK();
    iVar4 = *(int *)ppFVar11;
    *(int *)ppFVar11 = *(int *)ppFVar11 + -1;
    UNLOCK();
    if (((iVar4 == 1) && (ppFVar11 != (FRHICommandBase **)0x0)) &&
       (local_30 != (FRHICommandBase *)0x0)) {
      (**(code **)local_30->_padding_)(local_30,1);
    }
  }
  if (local_38 != (FRHIGPUFence *)0x0) {
    FRHIResource::Release((FRHIResource *)local_38);
  }
  return;
}

// RebuildPipelineCache @ 145bba8e0

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

void __cdecl FVulkanDynamicRHI::RebuildPipelineCache(void)

{
  FVulkanPipelineStateCacheManager::RebuildCache(GVulkanRHI->Device->PipelineStateCache);
  return;
}

// SavePipelineCache @ 145bbc4b0

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

void __cdecl FVulkanDynamicRHI::SavePipelineCache(void)

{
  FString *pFVar1;
  FString local_18;
  
  pFVar1 = FPaths::ProjectSavedDir();
  ::operator/(&local_18,pFVar1,L"VulkanPSO.cache");
  FVulkanPipelineStateCacheManager::Save(GVulkanRHI->Device->PipelineStateCache,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// SaveValidationCache @ 145bbc510

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

void __cdecl FVulkanDynamicRHI::SaveValidationCache(void)

{
  VkValidationCacheEXT_T *pVVar1;
  VkDevice_T *pVVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  _func___cdecl_void *p_Var6;
  FString *pFVar7;
  IFileManager *pIVar8;
  ForAnyElementType FVar9;
  longlong local_res8;
  ForAnyElementType local_48;
  int local_40 [2];
  FString local_38;
  TArrayView<unsigned_char_const_,__int64> local_28;
  
  pVVar1 = GVulkanRHI->Device->ValidationCache;
  if (pVVar1 != (VkValidationCacheEXT_T *)0x0) {
    pVVar2 = GVulkanRHI->Device->Device;
    p_Var6 = (*VulkanDynamicAPI::vkGetDeviceProcAddr)(pVVar2,"vkGetValidationCacheDataEXT");
    if ((p_Var6 == (_func___cdecl_void *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("vkGetValidationCacheData",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRHI.cpp"
                           ,0x739,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_res8 = 0;
    iVar5 = (*p_Var6)(pVVar2,pVVar1,&local_res8,0);
    if (iVar5 == 0) {
      if (local_res8 != 0) {
        local_48.Data = (FScriptContainerElement *)0x0;
        local_40[0] = 0;
        local_40[1] = 0;
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,(int)local_res8,&local_48,local_40,local_40 + 1);
        iVar5 = (*p_Var6)(pVVar2,pVVar1,&local_res8);
        if (iVar5 == 0) {
          pFVar7 = FPaths::ProjectSavedDir();
          ::operator/(&local_38,pFVar7,L"VulkanValidation.cache");
          pIVar8 = IFileManager::Get();
          local_28.DataPtr = (uchar *)local_48.Data;
          local_28.ArrayNum = (long64)local_40[0];
          FVar9.Data = (FScriptContainerElement *)L"";
          if (local_38.Data.ArrayNum != 0) {
            FVar9.Data = local_38.Data.AllocatorInstance.Data;
          }
          if ((local_40[0] < 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          bVar4 = FFileHelper::SaveArrayToFile(&local_28,(wchar_t *)FVar9.Data,pIVar8,0);
          if ((bVar4) && (3 < (byte)LogVulkanRHI._0_1_)) {
            UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
          }
          if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_38.Data.AllocatorInstance.Data);
          }
        }
        else if (2 < (byte)LogVulkanRHI._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
        }
        if (local_48.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data);
        }
      }
    }
    else if (2 < (byte)LogVulkanRHI._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
    }
  }
  return;
}

// SelectDevice @ 145bbc730

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
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FVulkanDynamicRHI::SelectDevice(FVulkanDynamicRHI *this)

{
  char *_Str;
  uint uVar1;
  VkPhysicalDevice_T *pVVar2;
  FVulkanDevice *this_00;
  FVulkanDevice *pFVar3;
  size_t sVar4;
  undefined1 auStack_168 [32];
  uint local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_168;
  pVVar2 = SelectPhysicalDevice(this->Instance);
  if (pVVar2 == (VkPhysicalDevice_T *)0x0) {
    FWindowsPlatformMisc::MessageBoxExt
              (Ok,L"Vulkan failed to select physical device after passing profile checks.",
               L"No Vulkan driver found!");
    FWindowsPlatformMisc::RequestExitWithStatus(true,'\x01',(wchar_t *)0x0);
  }
  else {
    if (4 < (byte)LogVulkanRHI._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
    }
    this_00 = ::operator_new(0x2740);
    pFVar3 = (FVulkanDevice *)0x0;
    if (this_00 != (FVulkanDevice *)0x0) {
      pFVar3 = FVulkanDevice::FVulkanDevice(this_00,this,pVVar2);
    }
    this->Device = pFVar3;
    uVar1 = (pFVar3->GpuProps).vendorID;
    if (0xffff < uVar1) {
      if (uVar1 == 0x10001) {
        GRHIGlobals.GpuInfo.VendorId = 0x7a05;
        uVar1 = GRHIGlobals.GpuInfo.VendorId;
      }
      else if (uVar1 == 0x10002) {
        GRHIGlobals.GpuInfo.VendorId = 0x1eb1;
        uVar1 = GRHIGlobals.GpuInfo.VendorId;
      }
      else if (uVar1 == 0x10003) {
        GRHIGlobals.GpuInfo.VendorId = 0x10003;
        uVar1 = GRHIGlobals.GpuInfo.VendorId;
      }
      else if (uVar1 == 0x10004) {
        GRHIGlobals.GpuInfo.VendorId = 0x10004;
        uVar1 = GRHIGlobals.GpuInfo.VendorId;
      }
      else if (uVar1 == 0x10005) {
        GRHIGlobals.GpuInfo.VendorId = 0x10005;
        uVar1 = GRHIGlobals.GpuInfo.VendorId;
      }
      else if (2 < (byte)LogVulkanRHI._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
        uVar1 = (pFVar3->GpuProps).vendorID;
      }
    }
    GRHIGlobals.GpuInfo.VendorId = uVar1;
    _Str = (pFVar3->GpuProps).deviceName;
    local_138._padding_ = 0;
    if (_Str == (char *)0x0) {
      local_138.Ptr = (wchar_t *)0x0;
      local_138.StringLength = 0;
    }
    else {
      sVar4 = strlen(_Str);
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_138,_Str,(int)sVar4,Yes);
    }
    ::FString::operator=(&GRHIGlobals.GpuInfo.AdapterName,local_138.Ptr);
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
    GRHIGlobals.GpuInfo.DeviceId = (pFVar3->GpuProps).deviceID;
    if (4 < (byte)LogVulkanRHI._0_1_) {
      local_148 = (pFVar3->GpuProps).apiVersion & 0xfff;
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
    }
    GRHIGlobals.PersistentThreadGroupCount = 0x5a0;
    GRHIGlobals.SupportsTimestampRenderQueries =
         0.0 < (this->Device->GpuProps).limits.timestampPeriod;
  }
  return;
}

// Shutdown @ 145bbdb50

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
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FVulkanDynamicRHI::Shutdown(FVulkanDynamicRHI *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  FVulkanDevice *pFVar5;
  FBaseGraphTask *pFVar6;
  FVulkanSemaphore *pFVar7;
  code *pcVar8;
  TMap<unsigned_int,TRefCountPtr<FRHISamplerState>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TRefCountPtr<FRHISamplerState>,0>_>
  *pTVar9;
  bool bVar10;
  wchar_t *pwVar11;
  FString *pFVar12;
  longlong lVar13;
  uint uVar14;
  int iVar15;
  TMap<unsigned_int,TRefCountPtr<FRHISamplerState>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TRefCountPtr<FRHISamplerState>,0>_>
  *pTVar16;
  int iVar17;
  undefined1 *puVar18;
  uint *puVar19;
  uint uVar20;
  undefined1 local_res8 [8];
  int local_res10;
  int local_res18;
  FSharedReferencer<1> local_d0;
  TMap<unsigned_int,TRefCountPtr<FRHISamplerState>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TRefCountPtr<FRHISamplerState>,0>_>
  *local_c8;
  int iStack_c0;
  uint uStack_bc;
  undefined1 *local_b8;
  undefined4 uStack_b0;
  int iStack_ac;
  int local_a8;
  undefined4 uStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  TMap<unsigned_int,TRefCountPtr<FRHISamplerState>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TRefCountPtr<FRHISamplerState>,0>_>
  *local_98;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_90;
  undefined8 uStack_70;
  FString local_68 [2];
  undefined4 local_3c;
  
  pwVar11 = FCommandLine::Get();
  bVar10 = FParse::Param(pwVar11,L"savevulkanpsocacheonexit");
  if (bVar10) {
    pFVar12 = FPaths::ProjectSavedDir();
    ::operator/(local_68,pFVar12,L"VulkanPSO.cache");
    FVulkanPipelineStateCacheManager::Save(GVulkanRHI->Device->PipelineStateCache,local_68);
    if (local_68[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68[0].Data.AllocatorInstance.Data);
    }
  }
  bVar10 = IsInGameThread();
  if (((!bVar10) || (bVar10 = IsInRenderingThread(), !bVar10)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInGameThread() && IsInRenderingThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRHI.cpp"
                          ,0x207,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if ((this->Device == (FVulkanDevice *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Device",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRHI.cpp"
                          ,0x208,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  FVulkanDevice::PrepareForDestroy(this->Device);
  EmptyCachedBoundShaderStates();
  bVar10 = 1 < (int)GVertexDeclarationCache._72_4_;
  if (!bVar10) {
    TSet<TTuple<FVulkanVertexDeclarationKey,TRefCountPtr<FRHIVertexDeclaration>_>,TDefaultMapHashableKeyFuncs<FVulkanVertexDeclarationKey,TRefCountPtr<FRHIVertexDeclaration>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FVulkanVertexDeclarationKey,TRefCountPtr<FRHIVertexDeclaration>_>,TDefaultMapHashableKeyFuncs<FVulkanVertexDeclarationKey,TRefCountPtr<FRHIVertexDeclaration>,0>,FDefaultSetAllocator>
                      *)&GVertexDeclarationCache);
  }
  TSparseArray<TSparseSetElement<TTuple<FVulkanVertexDeclarationKey,TRefCountPtr<FRHIVertexDeclaration>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FVulkanVertexDeclarationKey,TRefCountPtr<FRHIVertexDeclaration>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)&GVertexDeclarationCache,0,GVertexDeclarationCache._8_4_);
  iVar17 = 0;
  GVertexDeclarationCache._8_4_ = 0;
  if (GVertexDeclarationCache._12_4_ != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xa8,8,0,(ForAnyElementType *)&GVertexDeclarationCache,0,
               (int *)&GVertexDeclarationCache.field_0xc);
  }
  GVertexDeclarationCache._48_4_ = 0xffffffff;
  GVertexDeclarationCache._52_4_ = 0;
  GVertexDeclarationCache._40_4_ = 0;
  if (0x80 < (uint)GVertexDeclarationCache._44_4_) {
    GVertexDeclarationCache._44_4_ = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&GVertexDeclarationCache.field_0x10,0);
  }
  if (bVar10) {
    GVertexDeclarationCache._72_4_ = 1;
    TSet<TTuple<FVulkanVertexDeclarationKey,TRefCountPtr<FRHIVertexDeclaration>_>,TDefaultMapHashableKeyFuncs<FVulkanVertexDeclarationKey,TRefCountPtr<FRHIVertexDeclaration>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FVulkanVertexDeclarationKey,TRefCountPtr<FRHIVertexDeclaration>_>,TDefaultMapHashableKeyFuncs<FVulkanVertexDeclarationKey,TRefCountPtr<FRHIVertexDeclaration>,0>,FDefaultSetAllocator>
              *)&GVertexDeclarationCache);
  }
  if (GRHIGlobals.IsRHIInitialized != false) {
    GRHIGlobals.IsRHIInitialized = false;
    GRHIGlobals.NeedsExtraDeletionLatency = false;
    if ((GIsCriticalError != false) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("!GIsCriticalError",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRHI.cpp"
                            ,0x219,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    FRenderResource::ReleaseRHIForAllResources();
    pFVar5 = this->Device;
    local_a8 = 0;
    uStack_bc = 1;
    puVar1 = &(pFVar5->SamplerMap).field_0x10;
    iVar3 = *(int *)&(pFVar5->SamplerMap).field_0x28;
    pTVar16 = &pFVar5->SamplerMap;
    iStack_ac = 0;
    if (iVar3 != 0) {
      puVar19 = *(uint **)&(pFVar5->SamplerMap).field_0x20;
      if (puVar19 == (uint *)0x0) {
        puVar19 = (uint *)puVar1;
      }
      uVar14 = *puVar19;
      iVar17 = 0;
      while (uVar14 == 0) {
        lVar13 = (longlong)iVar17;
        local_a8 = local_a8 + 0x20;
        iVar17 = iVar17 + 1;
        iStack_ac = iVar3;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_145bbde0e;
        uVar14 = puVar19[lVar13 + 1];
      }
      uStack_bc = -uVar14 & uVar14;
      uVar2 = (ulonglong)uStack_bc * 2 + 1;
      lVar13 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      local_res10 = (int)lVar13;
      iStack_ac = local_a8 + -1 + local_res10;
      if (iVar3 < iStack_ac) {
        iStack_ac = iVar3;
      }
    }
LAB_145bbde0e:
    uStack_a4 = local_3c;
    iStack_a0 = *(int *)&(pFVar5->SamplerMap).field_0x8 - *(int *)&(pFVar5->SamplerMap).field_0x34;
    uVar14 = *(uint *)&(pFVar5->SamplerMap).field_0x28;
    uStack_b0 = 0xffffffff;
    uVar20 = uVar14 & 0xffffffe0;
    TStack_90._padding_ = CONCAT44(uStack_bc,iVar17);
    TStack_90.CurrentBitIndex = iStack_ac;
    TStack_90.UnvisitedBitMask = 0xffffffff;
    iVar15 = (int)uVar14 >> 5;
    TStack_90._28_4_ = local_3c;
    TStack_90.BaseBitIndex = local_a8;
    uStack_70 = CONCAT44(uStack_9c,iStack_a0);
    local_c8 = pTVar16;
    iStack_c0 = iVar17;
    local_b8 = puVar1;
    local_98 = pTVar16;
    TStack_90.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar14 < 0) || (iVar3 < (int)uVar14)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    uVar4 = *(uint *)&(pFVar5->SamplerMap).field_0x28;
    if (uVar14 != uVar4) {
      puVar18 = *(undefined1 **)&(pFVar5->SamplerMap).field_0x20;
      if (puVar18 == (undefined1 *)0x0) {
        puVar18 = puVar1;
      }
      uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar15 * 4);
      while (uVar14 == 0) {
        lVar13 = (longlong)iVar15;
        uVar20 = uVar20 + 0x20;
        iVar15 = iVar15 + 1;
        uVar14 = uVar4;
        if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
        goto LAB_145bbdf10;
        uVar14 = *(uint *)(puVar18 + lVar13 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
      lVar13 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      local_res18 = (int)lVar13;
      uVar14 = local_res18 + -1 + uVar20;
      if ((int)uVar4 < (int)uVar14) {
        uVar14 = uVar4;
      }
    }
LAB_145bbdf10:
    while( true ) {
      pTVar9 = local_98;
      if (*(int *)&local_98->field_0x8 - *(int *)&local_98->field_0x34 != (int)uStack_70) {
        local_res8[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<unsigned_int,TRefCountPtr<FRHISamplerState>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (((TStack_90.CurrentBitIndex == uVar14) &&
          (TStack_90.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
         (pTVar9 == pTVar16)) break;
      (*VulkanDynamicAPI::vkDestroySampler)
                (this->Device->Device,
                 *(VkSampler_T **)
                  (*(longlong *)
                    (*(longlong *)pTVar9 + 8 + (longlong)TStack_90.CurrentBitIndex * 0x18) + 0x18),
                 &VulkanRHI::GAllocationCallbacks);
      TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_90);
    }
    pFVar5 = this->Device;
    pTVar16 = &pFVar5->SamplerMap;
    bVar10 = 1 < *(int *)&(pFVar5->SamplerMap).field_0x48;
    if (!bVar10) {
      TSet<TTuple<unsigned_int,TRefCountPtr<FRHISamplerState>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TRefCountPtr<FRHISamplerState>,0>,FDefaultSetAllocator>
      ::UnhashElements((TSet<TTuple<unsigned_int,TRefCountPtr<FRHISamplerState>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TRefCountPtr<FRHISamplerState>,0>,FDefaultSetAllocator>
                        *)pTVar16);
    }
    TSparseArray<TSparseSetElement<TTuple<unsigned_int,TRefCountPtr<FRHISamplerState>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<unsigned_int,TRefCountPtr<FRHISamplerState>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)pTVar16,0,*(int *)&(pFVar5->SamplerMap).field_0x8);
    puVar1 = &(pFVar5->SamplerMap).field_0xc;
    *(undefined4 *)&(pFVar5->SamplerMap).field_0x8 = 0;
    if (*(int *)puVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)pTVar16,0,(int *)puVar1);
    }
    *(undefined4 *)&(pFVar5->SamplerMap).field_0x34 = 0;
    *(undefined4 *)&(pFVar5->SamplerMap).field_0x28 = 0;
    *(undefined4 *)&(pFVar5->SamplerMap).field_0x30 = 0xffffffff;
    iVar17 = *(int *)&(pFVar5->SamplerMap).field_0x2c;
    if ((iVar17 < 0) || (0x80 < iVar17)) {
      *(undefined4 *)&(pFVar5->SamplerMap).field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&(pFVar5->SamplerMap).field_0x10,0);
    }
    if (bVar10) {
      *(undefined4 *)&(pFVar5->SamplerMap).field_0x48 = 1;
      TSet<TTuple<unsigned_int,TRefCountPtr<FRHISamplerState>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TRefCountPtr<FRHISamplerState>,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TTuple<unsigned_int,TRefCountPtr<FRHISamplerState>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TRefCountPtr<FRHISamplerState>,0>,FDefaultSetAllocator>
                *)pTVar16);
    }
    FVulkanDevice::CleanUpRayTracing(this->Device);
    bVar10 = IsInRenderingThread();
    if ((!bVar10) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsInRenderingThread()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                            ,0x1594,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    FRHICommandListImmediate::ImmediateFlush
              (&GRHICommandList.CommandListImmediate,FlushRHIThreadFlushResources,None);
    if (this->SubmissionThread != (FVulkanThread *)0x0) {
      FVulkanThread::_scalar_deleting_destructor_(this->SubmissionThread,1);
      this->SubmissionThread = (FVulkanThread *)0x0;
    }
    if (this->InterruptThread != (FVulkanThread *)0x0) {
      FVulkanThread::_scalar_deleting_destructor_(this->InterruptThread,1);
      this->InterruptThread = (FVulkanThread *)0x0;
    }
    pFVar6 = (this->EopTask).Reference;
    if (pFVar6 != (FBaseGraphTask *)0x0) {
      ProcessInterruptQueueUntil(this,pFVar6);
      pFVar6 = (this->EopTask).Reference;
      if (pFVar6 != (FBaseGraphTask *)0x0) {
        (this->EopTask).Reference = (FBaseGraphTask *)0x0;
        LOCK();
        puVar1 = &pFVar6->field_0x30;
        iVar17 = *(int *)puVar1;
        *(int *)puVar1 = *(int *)puVar1 + -1;
        UNLOCK();
        if (iVar17 == 1) {
          (*(code *)**(undefined8 **)pFVar6)(pFVar6,1);
        }
      }
    }
    pFVar7 = this->CPUTimelineSemaphore;
    if (pFVar7 != (FVulkanSemaphore *)0x0) {
      (**(code **)pFVar7->_padding_)(pFVar7,1);
      this->CPUTimelineSemaphore = (FVulkanSemaphore *)0x0;
    }
  }
  FVulkanDevice::Destroy(this->Device);
  pFVar5 = this->Device;
  if (pFVar5 != (FVulkanDevice *)0x0) {
    FVulkanDevice::~FVulkanDevice(pFVar5);
    ::operator_delete(pFVar5,0x2740);
  }
  this->Device = (FVulkanDevice *)0x0;
  HMDVulkanExtensions.Object = (IHeadMountedDisplayVulkanExtensions *)0x0;
  local_d0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  SharedPointerInternals::FSharedReferencer<1>::operator=
            (&HMDVulkanExtensions.SharedReferenceCount,&local_d0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d0.ReferenceController);
  RemoveDebugLayerCallback(this);
  (*VulkanDynamicAPI::vkDestroyInstance)(this->Instance,&VulkanRHI::GAllocationCallbacks);
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Singleton != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x4fb,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,this->SavePipelineCacheCmd,1);
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Singleton != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x4fb,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,this->RebuildPipelineCacheCmd,1);
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Singleton != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x4fb,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,this->DumpMemoryCmd,1);
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Singleton != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x4fb,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,this->DumpMemoryFullCmd,1);
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Singleton != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x4fb,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,this->DumpStagingMemoryCmd,1);
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Singleton != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x4fb,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,this->DumpLRUCmd,1);
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Singleton != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x4fb,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,this->TrimLRUCmd,1);
  FVulkanWindowsPlatform::FreeVulkanLibrary();
  return;
}

// ShutdownSubmissionPipe @ 145bbe440

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

void __thiscall FVulkanDynamicRHI::ShutdownSubmissionPipe(FVulkanDynamicRHI *this)

{
  undefined1 *puVar1;
  int iVar2;
  FBaseGraphTask *pFVar3;
  FVulkanSemaphore *pFVar4;
  
  if (this->SubmissionThread != (FVulkanThread *)0x0) {
    FVulkanThread::_scalar_deleting_destructor_(this->SubmissionThread,1);
    this->SubmissionThread = (FVulkanThread *)0x0;
  }
  if (this->InterruptThread != (FVulkanThread *)0x0) {
    FVulkanThread::_scalar_deleting_destructor_(this->InterruptThread,1);
    this->InterruptThread = (FVulkanThread *)0x0;
  }
  pFVar3 = (this->EopTask).Reference;
  if (pFVar3 != (FBaseGraphTask *)0x0) {
    ProcessInterruptQueueUntil(this,pFVar3);
    pFVar3 = (this->EopTask).Reference;
    if (pFVar3 != (FBaseGraphTask *)0x0) {
      (this->EopTask).Reference = (FBaseGraphTask *)0x0;
      LOCK();
      puVar1 = &pFVar3->field_0x30;
      iVar2 = *(int *)puVar1;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (*(code *)**(undefined8 **)pFVar3)(pFVar3,1);
      }
    }
  }
  pFVar4 = this->CPUTimelineSemaphore;
  if (pFVar4 != (FVulkanSemaphore *)0x0) {
    (**(code **)pFVar4->_padding_)(pFVar4,1);
    this->CPUTimelineSemaphore = (FVulkanSemaphore *)0x0;
  }
  return;
}

// TerminateOnGPUCrash @ 145bbe660

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
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FVulkanDynamicRHI::TerminateOnGPUCrash(FVulkanDynamicRHI *this,wchar_t *param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  UEngine *this_00;
  bool bVar4;
  UClass *pUVar5;
  TArray<UE::RHICore::Nvidia::Aftermath::FCrashResult,TSizedDefaultAllocator<32>_> local_18;
  
  DumpCrashMarkers(this);
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  UE::RHICore::Nvidia::Aftermath::OnGPUCrash(&local_18);
  this_00 = GEngine;
  if (GEngine != (UEngine *)0x0) {
    pUVar5 = Z_Construct_UClass_UGameEngine_NoRegister();
    lVar2 = this_00->_padding_;
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(lVar2 + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) {
      UGameEngine::OnGPUCrash((UGameEngine *)this_00);
    }
  }
  bVar4 = FWindowsPlatformMisc::IsDebuggerPresent();
  if (bVar4) {
    bVar4 = FWindowsPlatformMisc::IsDebuggerPresent();
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FWindowsPlatformMisc::RequestExit(true,L"FVulkanDynamicRHI.TerminateOnGPUCrash");
  DestructItems<UE::RHICore::Nvidia::Aftermath::FCrashResult,int>
            ((FCrashResult *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if ((FCrashResult *)local_18.AllocatorInstance.Data != (FCrashResult *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// TrimLRU @ 145bbe800

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

void __cdecl FVulkanDynamicRHI::TrimLRU(void)

{
  FVulkanPipelineStateCacheManager::LRUDebugEvictAll(GVulkanRHI->Device->PipelineStateCache);
  return;
}

// UpdateUniformBuffer @ 145bc08c0

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
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
FVulkanDynamicRHI::UpdateUniformBuffer
          (FVulkanDynamicRHI *this,FRHICommandListBase *param_1,FVulkanUniformBuffer *param_2,
          void *param_3)

{
  int *piVar1;
  FScriptContainerElement FVar2;
  int iVar3;
  FRHIUniformBufferLayout *pFVar4;
  FRDGResource *this_00;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  undefined8 *puVar12;
  bool bVar13;
  bool bVar14;
  uint uVar15;
  FName *pFVar16;
  FThreadSafeStaticStat<FStat_STAT_VulkanUpdateUniformBuffers> FVar17;
  FThreadSafeStaticStat<FStat_STAT_VulkanUpdateUniformBuffersRename> FVar18;
  void *pvVar19;
  FRHICommandBase *pFVar20;
  FRHIResource *pFVar21;
  FRHICommandBase *pFVar22;
  FRHICommandBase *pFVar23;
  IRHICommandContext *pIVar24;
  uint uVar25;
  undefined8 *puVar26;
  FVulkanCommandListContext *pFVar27;
  FColor_u_0 FVar28;
  FName FVar29;
  FName FVar30;
  longlong lVar31;
  uint uVar32;
  FColor_u_0 local_100;
  uint uStack_fc;
  FColor_u_0 local_f8 [2];
  undefined8 *local_f0;
  FColor_u_0 local_e8;
  uint local_e4;
  FName local_e0;
  FName local_d8;
  FName local_d0;
  FName local_c0;
  undefined1 local_b0 [24];
  longlong lStack_98;
  FRHIUniformBufferLayout *local_90;
  FVulkanUniformBuffer *local_88;
  undefined1 auStack_80 [24];
  longlong lStack_68;
  FRHICommandBase *local_60;
  int local_58;
  undefined4 uStack_54;
  FName local_50;
  FName local_48 [2];
  
  FVar17 = StatPtr_STAT_VulkanUpdateUniformBuffers;
  if (StatPtr_STAT_VulkanUpdateUniformBuffers ==
      (FThreadSafeStaticStat<FStat_STAT_VulkanUpdateUniformBuffers>)0x0) {
    pFVar16 = ::FName::FName(&local_50,"STAT_VulkanUpdateUniformBuffers");
    FVar17 = (FThreadSafeStaticStat<FStat_STAT_VulkanUpdateUniformBuffers>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanUpdateUniformBuffers,
                        *pFVar16,L"UpdateUniformBuffers","STATGROUP_VulkanRHI","STATCAT_Advanced",
                        L"Vulkan RHI",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar30 = *(FName *)FVar17;
  bVar7 = false;
  bVar11 = false;
  local_d0.ComparisonIndex.Value = 0;
  local_d0.Number = 0;
  bVar13 = false;
  bVar8 = false;
  FVar28.Bits = (uint)FVar30.ComparisonIndex.Value;
  uVar25 = FVar30.Number;
  if ((FVar28.Bits == 0) && (uVar25 == 0)) {
LAB_145bc0a26:
    bVar11 = bVar8;
    bVar7 = bVar13;
    bVar13 = false;
    local_d8 = local_d0;
    FVar30 = local_d0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_f8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_f8[0]._s_0,(char *)*(FName *)((longlong)FVar17 + 0x10));
      bVar7 = false;
      bVar11 = true;
      bVar13 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_e8.Bits = FVar28.Bits;
        local_e4 = uVar25;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_e8._s_0,(wchar_t *)*(FName *)((longlong)FVar17 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanUniformBuffer.cpp"
                   ,0x115);
        bVar7 = true;
        bVar11 = true;
        bVar13 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_145bc0a26;
    local_100.Bits = FVar28.Bits;
    uStack_fc = uVar25;
    local_d8 = FVar30;
    FThreadStats::AddMessage(FVar30,CycleScopeStart);
    bVar13 = true;
  }
  pFVar4 = (FRHIUniformBufferLayout *)param_2->_padding_;
  uVar25 = pFVar4->ConstantBufferSize;
  iVar3 = (pFVar4->Resources).ArrayNum;
  local_90 = pFVar4;
  VulkanRHI::FVulkanAllocation::FVulkanAllocation((FVulkanAllocation *)local_b0);
  if ((GVulkanAllowUniformUpload == 0) || ((param_1->PersistentState).bInsideRenderPass != '\0')) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
  }
  if ((param_2->Usage == UniformBuffer_SingleDraw) || (param_2->Usage == UniformBuffer_SingleFrame))
  {
    bVar9 = true;
  }
  else {
    bVar9 = false;
  }
  if (((bVar8) || (bVar9)) || ((int)uVar25 < 1)) goto LAB_145bc0c52;
  FVar18 = StatPtr_STAT_VulkanUpdateUniformBuffersRename;
  if (StatPtr_STAT_VulkanUpdateUniformBuffersRename ==
      (FThreadSafeStaticStat<FStat_STAT_VulkanUpdateUniformBuffersRename>)0x0) {
    pFVar16 = ::FName::FName(local_48,"STAT_VulkanUpdateUniformBuffersRename");
    FVar18 = (FThreadSafeStaticStat<FStat_STAT_VulkanUpdateUniformBuffersRename>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanUpdateUniformBuffersRename,
                        *pFVar16,L"UpdateUniformBuffersRename","STATGROUP_VulkanRHI",
                        "STATCAT_Advanced",L"Vulkan RHI",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar29 = *(FName *)FVar18;
  bVar14 = false;
  bVar10 = false;
  local_c0.ComparisonIndex.Value = 0;
  local_c0.Number = 0;
  if ((FVar29.ComparisonIndex.Value.Value == 0) && (FVar29.Number == 0)) {
LAB_145bc0bb8:
    bVar6 = false;
    FVar29 = local_c0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_100.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_100._s_0,(char *)*(FName *)((longlong)FVar18 + 0x10));
      bVar14 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_e0.ComparisonIndex.Value = FVar29.ComparisonIndex.Value.Value;
        local_e0.Number = FVar29.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_e0,(wchar_t *)*(FName *)((longlong)FVar18 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanUniformBuffer.cpp"
                   ,0x124);
        bVar14 = true;
        bVar10 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_145bc0bb8;
    FThreadStats::AddMessage(FVar29,CycleScopeStart);
    bVar6 = true;
  }
  VulkanRHI::FMemoryManager::AllocUniformBuffer
            (&this->Device->MemoryManager,(FVulkanAllocation *)local_b0,uVar25);
  if (param_3 != (void *)0x0) {
    pvVar19 = VulkanRHI::FVulkanAllocation::GetMappedPointer
                        ((FVulkanAllocation *)local_b0,this->Device);
    UpdateUniformBufferConstants(this->Device,pvVar19,param_3,pFVar4);
    VulkanRHI::FVulkanAllocation::FlushMappedMemory((FVulkanAllocation *)local_b0,this->Device);
  }
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar6) {
    FThreadStats::AddMessage(FVar29,CycleScopeEnd);
  }
LAB_145bc0c52:
  if ((GRHICommandList.bLatchedBypass == false) || ((param_1->PersistentState).bImmediate == '\0'))
  {
    pFVar22 = (FRHICommandBase *)0x0;
    pFVar20 = pFVar22;
    if (0 < iVar3) {
      local_f0 = (undefined8 *)(longlong)iVar3;
      pFVar20 = FMemStackBase::Alloc(&param_1->MemManager,(longlong)iVar3 * 8,8);
      pFVar4 = local_90;
      puVar12 = local_f0;
      lVar31 = 0;
      if (0 < iVar3) {
        do {
          uVar32 = (uint)pFVar22;
          uVar15 = 0;
          if ((int)uVar32 < (pFVar4->Resources).ArrayNum) {
            uVar15 = ~uVar32 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          FVar2 = (pFVar4->Resources).AllocatorInstance.Data[lVar31 * 4 + 2];
          uVar15 = 0;
          if ((int)uVar32 < (pFVar4->Resources).ArrayNum) {
            uVar15 = ~uVar32 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar21 = (FRHIResource *)0x0;
          if ((0x17 < (byte)FVar2) || ((0xc98c00U >> ((byte)FVar2 & 0x1f) & 1) == 0)) {
            puVar26 = (undefined8 *)
                      ((ulonglong)
                       *(ushort *)((pFVar4->Resources).AllocatorInstance.Data + lVar31 * 4) +
                      (longlong)param_3);
            if (((byte)FVar2 < 0x13) && ((0x67200U >> ((byte)FVar2 & 0x1f) & 1) != 0)) {
              this_00 = (FRDGResource *)*puVar26;
              if (this_00 != (FRDGResource *)0x0) {
                FRDGResource::ValidateRHIAccess(this_00);
                pFVar21 = this_00->ResourceRHI;
              }
            }
            else {
              pFVar21 = (FRHIResource *)*puVar26;
            }
          }
          (&pFVar20->_padding_)[lVar31] = (longlong)pFVar21;
          pFVar22 = (FRHICommandBase *)(ulonglong)(uVar32 + 1);
          lVar31 = lVar31 + 1;
          FVar30 = local_d8;
        } while (lVar31 < (longlong)puVar12);
      }
    }
    if ((bVar8) || (bVar9)) {
      pFVar22 = FMemStackBase::Alloc(&param_1->MemManager,(longlong)(int)uVar25,0x10);
      memcpy(pFVar22,param_3,(longlong)(int)uVar25);
      if (((GRHICommandList.bLatchedBypass == false) ||
          ((param_1->PersistentState).bImmediate == '\0')) && (param_1->bExecuting == false)) {
        pFVar23 = FMemStackBase::Alloc(&param_1->MemManager,0x38,8);
        param_1->NumCommands = param_1->NumCommands + 1;
        *param_1->CommandLink = pFVar23;
        param_1->CommandLink = &pFVar23->Next;
        pFVar23->Next = (FRHICommandBase *)0x0;
        pFVar23->_padding_ =
             (longlong)
             &
             ___7__TRHILambdaCommand_VFRHICommandListBase__V<lambda_1>__CA___UpdateUniformBuffer_FVulkanDynamicRHI__IEAAXAEAV1_PEAVFVulkanUniformBuffer__PEBX_Z___6B_
        ;
        pFVar23[1]._padding_ = (longlong)param_2;
        pFVar23[1].Next = pFVar20;
        *(int *)&pFVar23[2]._padding_ = iVar3;
        *(uint *)((longlong)&pFVar23[2]._padding_ + 4) = uVar25;
        pFVar23[2].Next = pFVar22;
        pFVar23[3]._padding_ = (longlong)L"TRHILambdaCommand";
      }
      else {
        pIVar24 = FRHICommandListBase::GetContext(param_1);
        lVar31 = (**(code **)(pIVar24->_padding_ + 0x148))(pIVar24);
        pFVar27 = (FVulkanCommandListContext *)(lVar31 + -0x50);
        if (lVar31 == 0) {
          pFVar27 = (FVulkanCommandListContext *)0x0;
        }
        UpdateUniformBufferHelper(pFVar27,param_2,pFVar22,true);
        FVulkanUniformBuffer::UpdateResourceTable(param_2,(FRHIResource **)pFVar20,iVar3);
      }
    }
    else {
      VulkanRHI::FVulkanAllocation::Disown((FVulkanAllocation *)local_b0);
      auStack_80._0_8_ = local_b0._0_8_;
      auStack_80._8_8_ = local_b0._8_8_;
      auStack_80._16_8_ = local_b0._16_8_;
      lStack_68 = lStack_98;
      local_88 = param_2;
      local_60 = pFVar20;
      local_58 = iVar3;
      if (((GRHICommandList.bLatchedBypass == false) ||
          ((param_1->PersistentState).bImmediate == '\0')) && (param_1->bExecuting == false)) {
        pFVar20 = FMemStackBase::Alloc(&param_1->MemManager,0x50,8);
        param_1->NumCommands = param_1->NumCommands + 1;
        *param_1->CommandLink = pFVar20;
        param_1->CommandLink = &pFVar20->Next;
        pFVar20->Next = (FRHICommandBase *)0x0;
        pFVar20->_padding_ =
             (longlong)
             &
             ___7__TRHILambdaCommand_VFRHICommandListBase__V<lambda_2>__CC___UpdateUniformBuffer_FVulkanDynamicRHI__IEAAXAEAV1_PEAVFVulkanUniformBuffer__PEBX_Z___6B_
        ;
        pFVar20[1]._padding_ = (longlong)local_88;
        pFVar20[1].Next = (FRHICommandBase *)auStack_80._0_8_;
        pFVar20[2]._padding_ = auStack_80._8_8_;
        pFVar20[2].Next = (FRHICommandBase *)auStack_80._16_8_;
        pFVar20[3]._padding_ = lStack_68;
        pFVar20[3].Next = local_60;
        pFVar20[4].Next = (FRHICommandBase *)L"TRHILambdaCommand";
        pFVar20[4]._padding_ = CONCAT44(uStack_54,local_58);
        VulkanRHI::FVulkanAllocation::~FVulkanAllocation((FVulkanAllocation *)auStack_80);
      }
      else {
        `FVulkanDynamicRHI::UpdateUniformBuffer'::__l34::<lambda_2>::operator()(&local_88,param_1);
        VulkanRHI::FVulkanAllocation::~FVulkanAllocation((FVulkanAllocation *)auStack_80);
      }
    }
    FRHICommandListBase::RHIThreadFence(param_1,SUB81(&local_f0,0));
    if (local_f0 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_f0 + 6);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar3 == 1) && (local_f0 != (undefined8 *)0x0)) {
        (**(code **)*local_f0)(local_f0,1);
      }
    }
  }
  else {
    if (0 < (int)uVar25) {
      if ((bVar8) || (bVar9)) {
        UpdateUniformBufferHelper
                  ((FVulkanCommandListContext *)this->Device->ImmediateContext,param_2,param_3,true)
        ;
      }
      else {
        VulkanRHI::FVulkanAllocation::Swap((FVulkanAllocation *)local_b0,&param_2->Allocation);
        VulkanRHI::FMemoryManager::FreeUniformBuffer
                  (&this->Device->MemoryManager,(FVulkanAllocation *)local_b0);
      }
    }
    FVulkanUniformBuffer::UpdateResourceTable(param_2,pFVar4,param_3,iVar3);
  }
  VulkanRHI::FVulkanAllocation::~FVulkanAllocation((FVulkanAllocation *)local_b0);
  if (bVar11) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar13) {
    FThreadStats::AddMessage(FVar30,CycleScopeEnd);
  }
  return;
}

// VulkanSetImageLayout @ 145bc2450

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

void __thiscall
FVulkanDynamicRHI::VulkanSetImageLayout
          (FVulkanDynamicRHI *this,VkCommandBuffer_T *param_1,VkImage_T *param_2,
          VkImageLayout param_3,VkImageLayout param_4,VkImageSubresourceRange *param_5)

{
  undefined1 auStackY_168 [32];
  FVulkanPipelineBarrier local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  local_138.MemoryBarriers.AllocatorInstance.SecondaryData = (ForElementType<VkMemoryBarrier2>)0x0;
  local_138.MemoryBarriers.ArrayNum = 0;
  local_138.ImageBarriers.AllocatorInstance.SecondaryData =
       (ForElementType<VkImageMemoryBarrier2>)0x0;
  local_138.ImageBarriers.ArrayNum = 0;
  local_138.BufferBarriers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.BufferBarriers.ArrayNum = 0;
  local_138.BufferBarriers.ArrayMax = 0;
  local_138.MemoryBarriers.ArrayMax = 1;
  local_138.ImageBarriers.ArrayMax = 2;
  FVulkanPipelineBarrier::AddImageLayoutTransition(&local_138,param_2,param_3,param_4,param_5);
  FVulkanPipelineBarrier::Execute(&local_138,param_1);
  if (local_138.BufferBarriers.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.BufferBarriers.AllocatorInstance.Data);
  }
  if (local_138.ImageBarriers.AllocatorInstance.SecondaryData !=
      (ForElementType<VkImageMemoryBarrier2>)0x0) {
    FMemory::Free((void *)local_138.ImageBarriers.AllocatorInstance.SecondaryData);
  }
  if (local_138.MemoryBarriers.AllocatorInstance.SecondaryData !=
      (ForElementType<VkMemoryBarrier2>)0x0) {
    FMemory::Free((void *)local_138.MemoryBarriers.AllocatorInstance.SecondaryData);
  }
  return;
}

// WaitAndProcessInterruptQueue @ 145bc2820

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
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

bool __thiscall FVulkanDynamicRHI::WaitAndProcessInterruptQueue(FVulkanDynamicRHI *this)

{
  FVulkanFence *pFVar1;
  FVulkanDevice *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  VkResult VVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar11;
  FVulkanFence **ppFVar12;
  bool bVar13;
  undefined1 auStack_148 [32];
  char local_128 [4];
  uint local_124 [7];
  undefined8 uStack_108;
  undefined8 uStack_100;
  code *local_f8;
  uint **local_f0;
  FVulkanFence **local_e8;
  uint uStack_e0;
  undefined4 uStack_dc;
  uint *local_d8;
  longlong *local_d0;
  char *local_c8;
  TArrayView<FVulkanFence_*,int> local_b8;
  longlong local_a8 [7];
  atomic<unsigned___int64> local_70 [4];
  FVulkanFence *local_50 [3];
  ulonglong local_38;
  ulonglong uVar10;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_148;
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Orange,"WaitAndProcessInterruptQueue");
  bVar13 = -1 < CpuChannel->Enabled;
  if (bVar13) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId390,"WaitAndProcessInterruptQueue",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanSubmission.cpp"
               ,0x186);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId390);
  }
  local_d8 = local_124;
  local_d0 = local_a8;
  local_128[0] = '\0';
  uVar10 = 0;
  local_c8 = local_128;
  uVar9 = 0;
  local_124[0] = 0;
  local_f0 = &local_d8;
  local_f8 = UE::Core::Private::Function::
             TFunctionRefCaller<`FVulkanDynamicRHI::WaitAndProcessInterruptQueue'::__l3::<lambda_1>,void,FVulkanQueue_&>
             ::Call;
  FVulkanDevice::ForEachQueue(this->Device,(TFunctionRef<void___cdecl(FVulkanQueue_&)> *)&local_f8);
  if (local_124[0] == 0) {
    if (local_128[0] == '\0') {
      bVar5 = ProcessInterruptQueue(this);
      if (!bVar5) goto LAB_145bc2b3d;
    }
  }
  else {
    if (*(longlong *)(local_a8[0] + 0x60) == 0) {
      uVar11 = uVar10;
      if (local_124[0] != 0) {
        do {
          plVar3 = (longlong *)local_a8[uVar10];
          if (plVar3[0xb] == 0) {
            if (((int)plVar3[6] != 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("NextPayloads[Index]->CommandBuffers.Num() == 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanSubmission.cpp"
                                   ,0x1c8,
                                   L"TimelineSemaphoreValue should only be 0 on unused queues."),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              uVar6 = (*pcVar4)();
              return (bool)uVar6;
            }
          }
          else {
            local_a8[uVar11 + 3] = *(longlong *)(*(longlong *)(*plVar3 + 0x80) + 0x18);
            local_70[uVar11] = *(atomic<unsigned___int64> *)(plVar3 + 0xb);
            uVar11 = (ulonglong)((int)uVar11 + 1);
          }
          uVar9 = (int)uVar10 + 1;
          uVar10 = (ulonglong)uVar9;
        } while (uVar9 < local_124[0]);
      }
      uVar10 = uVar11;
      if (this->CPUTimelineSemaphore != (FVulkanSemaphore *)0x0) {
        local_a8[uVar11 + 3] = (longlong)this->CPUTimelineSemaphore->SemaphoreHandle;
        uVar10 = (ulonglong)((int)uVar11 + 1);
        local_70[uVar11] = this->CPUTimelineSemaphoreValue;
      }
      uStack_108 = local_a8 + 3;
      local_124[1] = 0x3b9df29c;
      local_124[2] = 0;
      local_124[3] = 0;
      uStack_100 = local_70;
      local_124[4] = 0;
      local_124[5] = 1;
      local_124[6] = (uint)uVar10;
      VVar7 = (*VulkanDynamicAPI::vkWaitSemaphoresKHR)
                        (this->Device->Device,(VkSemaphoreWaitInfo *)(local_124 + 1),10000000);
      if ((int)VVar7 < 0) {
        VulkanRHI::VerifyVulkanResult
                  (VVar7,
                   "VulkanRHI::vkWaitSemaphoresKHR(Device->GetHandle(), &WaitInfo, (uint64_t)Timeout)"
                   ,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanSubmission.cpp"
                   ,0x1d9);
      }
    }
    else {
      if (local_124[0] != 0) {
        ppFVar12 = local_50;
        uVar11 = uVar10;
        do {
          pFVar1 = *(FVulkanFence **)(local_a8[uVar10] + 0x60);
          if ((pFVar1 == (FVulkanFence *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Fence",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanSubmission.cpp"
                                 ,0x1ab,L"Payloads should all use the same types of syncs!"), bVar5)
             ) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          if (pFVar1->State != Signaled) {
            uVar11 = (ulonglong)((int)uVar11 + 1);
            *ppFVar12 = pFVar1;
            ppFVar12 = ppFVar12 + 1;
          }
          uVar9 = (uint)uVar11;
          uVar8 = (int)uVar10 + 1;
          uVar10 = (ulonglong)uVar8;
        } while (uVar8 < local_124[0]);
      }
      if (uVar9 == local_124[0]) {
        pFVar2 = this->Device;
        local_e8 = local_50;
        uStack_e0 = uVar9;
        if (((int)uVar9 < 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("ArrayNum >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xfe,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        local_b8._12_4_ = uStack_dc;
        local_b8.ArrayNum = uStack_e0;
        local_b8.DataPtr = local_e8;
        FVulkanFenceManager::WaitForAnyFence(&pFVar2->FenceManager,&local_b8,10000000);
        local_128[0] = '\x01';
        goto LAB_145bc2b3a;
      }
    }
    local_128[0] = '\x01';
  }
LAB_145bc2b3a:
  uVar10 = 1;
LAB_145bc2b3d:
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return SUB81(uVar10,0);
}

// RHIAdvanceFrameForGetViewportBackBuffer @ 145bd43a0

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

void __thiscall
FVulkanDynamicRHI::RHIAdvanceFrameForGetViewportBackBuffer
          (FVulkanDynamicRHI *this,FRHIViewport *param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 *puVar4;
  FRHIViewport *local_res10 [3];
  
  bVar2 = IsInRenderingThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x1594,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_1 == (FRHIViewport *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ViewportRHI",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanViewport.cpp"
                       ,0x3aa,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  bVar2 = IsInRenderingThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanViewport.cpp"
                       ,0x10f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_1[0xd].field_0x4 == '\0') {
    lVar3 = (**(code **)(GDynamicRHI->_padding_ + 0x30))();
    if ((*(char *)(lVar3 + 0x1c0) == '\0') && (GVulkanDelayAcquireImage != DelayAcquire)) {
      if (*(longlong *)&param_1[9].field_0x8 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("RHIBackBuffer",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanViewport.cpp"
                           ,0x113,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      local_res10[0] = param_1;
      if (((GRHICommandList.bLatchedBypass != false) &&
          ((GRHICommandList.CommandListImmediate._667_1_ & 0x20) != 0)) ||
         (GRHICommandList.CommandListImmediate._100_1_ != '\0')) {
        `FVulkanViewport::AdvanceBackBufferFrame'::__l12::<lambda_1>::operator()
                  (local_res10,&GRHICommandList.CommandListImmediate);
        return;
      }
      puVar4 = FMemStackBase::Alloc((FMemStackBase *)&GRHICommandList.CommandListImmediate,0x20,8);
      GRHICommandList.CommandListImmediate._96_4_ = GRHICommandList.CommandListImmediate._96_4_ + 1;
      *(undefined8 **)GRHICommandList.CommandListImmediate._48_8_ = puVar4;
      GRHICommandList.CommandListImmediate._48_8_ = puVar4 + 1;
      *(undefined8 *)GRHICommandList.CommandListImmediate._48_8_ = 0;
      *puVar4 = &TRHILambdaCommand<FRHICommandListImmediate,`FVulkanViewport::AdvanceBackBufferFrame'::`12'::<lambda_1>_>
                 ::_vftable_;
      puVar4[3] = L"TRHILambdaCommand";
      puVar4[2] = param_1;
    }
  }
  return;
}

// RHICreateViewport @ 145bd4530

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

TRefCountPtr<FRHIViewport> __thiscall
FVulkanDynamicRHI::RHICreateViewport
          (FVulkanDynamicRHI *this,void *param_1,uint param_2,uint param_3,bool param_4,
          EPixelFormat param_5)

{
  code *pcVar1;
  bool bVar2;
  Type TVar3;
  TRefCountPtr<FRHIViewport> TVar4;
  FVulkanViewport *pFVar5;
  IConsoleManager *pIVar6;
  longlong *plVar7;
  TConsoleVariableData<int> *pTVar8;
  longlong lVar9;
  undefined4 in_register_00000084;
  undefined3 in_stack_00000029;
  EPixelFormat in_stack_00000038;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanViewport.cpp"
                       ,0x35b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar4.Reference = (FRHIViewport *)(*pcVar1)();
      return (TRefCountPtr<FRHIViewport>)TVar4.Reference;
    }
  }
  if (in_stack_00000038 != PF_Unknown) goto LAB_145bd45ed;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pIVar6 = IConsoleManager::Get();
      plVar7 = (longlong *)
               (**(code **)((longlong)*pIVar6 + 0xc0))(pIVar6,L"r.DefaultBackBufferPixelFormat",1);
      pTVar8 = (TConsoleVariableData<int> *)0x0;
      if (plVar7 != (longlong *)0x0) {
        pTVar8 = (TConsoleVariableData<int> *)(**(code **)(*plVar7 + 0x68))(plVar7);
      }
      CVarDefaultBackBufferPixelFormat = pTVar8;
      _Init_thread_footer(&::_TSS0);
    }
  }
  pTVar8 = CVarDefaultBackBufferPixelFormat;
  bVar2 = IsInParallelGameThread();
  if (bVar2) {
LAB_145bd45d9:
    lVar9 = 0;
  }
  else {
    bVar2 = IsInGameThread();
    if (bVar2) goto LAB_145bd45d9;
    lVar9 = 4;
  }
  TVar3 = EDefaultBackBufferPixelFormat::FromInt(*(int *)((longlong)pTVar8->ShadowedValue + lVar9));
  in_stack_00000038 = EDefaultBackBufferPixelFormat::Convert2PixelFormat(TVar3);
LAB_145bd45ed:
  pFVar5 = ::operator_new(0x160);
  if (pFVar5 == (FVulkanViewport *)0x0) {
    *(undefined8 *)param_1 = 0;
  }
  else {
    pFVar5 = FVulkanViewport::FVulkanViewport
                       (pFVar5,this->Device,(void *)CONCAT44(in_register_00000084,param_2),param_3,
                        _param_4,(bool)param_5,in_stack_00000038);
    *(FVulkanViewport **)param_1 = pFVar5;
    if (pFVar5 != (FVulkanViewport *)0x0) {
      FRHIResource::AddRef((FRHIResource *)pFVar5);
    }
  }
  return (TRefCountPtr<FRHIViewport>)param_1;
}

// RHIGetViewportBackBuffer @ 145bd46d0

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

TRefCountPtr<FRHITexture> __thiscall
FVulkanDynamicRHI::RHIGetViewportBackBuffer(FVulkanDynamicRHI *this,FRHIViewport *param_1)

{
  code *pcVar1;
  bool bVar2;
  TRefCountPtr<FRHITexture> TVar3;
  FVulkanViewport *in_R8;
  
  bVar2 = IsInRenderingThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x1594,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar3.Reference = (FRHITexture *)(*pcVar1)();
      return (TRefCountPtr<FRHITexture>)TVar3.Reference;
    }
  }
  if (in_R8 == (FVulkanViewport *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ViewportRHI",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanViewport.cpp"
                       ,0x39b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar3.Reference = (FRHITexture *)(*pcVar1)();
      return (TRefCountPtr<FRHITexture>)TVar3.Reference;
    }
  }
  if (in_R8->SwapChain != (FVulkanSwapChain *)0x0) {
    FVulkanSwapChain::RenderThreadPacing(in_R8->SwapChain);
  }
  FVulkanViewport::GetBackBuffer(in_R8,(FRHICommandListImmediate *)param_1);
  return (TRefCountPtr<FRHITexture>)(FRHITexture *)param_1;
}

// RHIResizeViewport @ 145bd4780

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

void __thiscall
FVulkanDynamicRHI::RHIResizeViewport
          (FVulkanDynamicRHI *this,FRHIViewport *param_1,uint param_2,uint param_3,bool param_4)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar3;
  code **ppcVar4;
  ulonglong uVar5;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  FRHIViewport *local_b0;
  uint uStack_a8;
  uint uStack_a4;
  bool local_a0;
  undefined7 uStack_9f;
  code *pcStack_98;
  code *local_88 [2];
  code *local_78 [3];
  code **local_60;
  undefined1 local_58 [40];
  code **local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanViewport.cpp"
                       ,0x382,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((*(uint *)&param_1[0xb].field_0x10 != param_2) ||
     (*(uint *)&param_1[0xb].field_0x14 != param_3)) {
    local_b8 = *(undefined8 *)&param_1[0xc].field_0x10;
    local_a0 = param_4;
    pcStack_98 = (code *)&local_b8;
    local_88[0] = (code *)0x0;
    local_b0 = param_1;
    uStack_a8 = param_2;
    uStack_a4 = param_3;
    local_60 = FMemory::Malloc(0x28,8);
    *local_60 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`FVulkanDynamicRHI::RHIResizeViewport'::`12'::<lambda_1>,1,1>
                         ::_vftable_;
    local_60[1] = (code *)local_b0;
    local_60[2] = (code *)CONCAT44(uStack_a4,uStack_a8);
    local_60[3] = (code *)CONCAT71(uStack_9f,local_a0);
    local_60[4] = pcStack_98;
    if (local_60 + 1 != (code **)0x0) {
      local_88[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FVulkanDynamicRHI::RHIResizeViewport'::__l12::<lambda_1>,void,FRHICommandListImmediate_&>
                    ::Call;
    }
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FVulkanDynamicRHI::RHIResizeViewport_::__l12::TSTR_ResizeViewport905>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_58._0_8_ = local_88[0];
      local_30 = local_60;
      local_60 = (code **)0x0;
      local_58._16_8_ = local_78[0];
      local_58._24_8_ = local_78[1];
      local_58._32_8_ = local_78[2];
      local_88[0] = (code *)0x0;
      local_28 = 2;
      pFVar3 = (FRenderCommandTag *)
               TRenderCommandTag<`FVulkanDynamicRHI::RHIResizeViewport'::__l12::TSTR_ResizeViewport905>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_58,pFVar3);
      uVar5 = (ulonglong)local_28;
      if (2 < uVar5) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar5] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_58._0_8_ != (code *)0x0) {
          ppcVar4 = (code **)(local_58 + 0x10);
          if (local_30 != (code **)0x0) {
            ppcVar4 = local_30;
          }
          (**(code **)(*ppcVar4 + 0x10))();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar5])(local_58);
      }
    }
    if (local_88[0] != (code *)0x0) {
      ppcVar4 = local_88 + 2;
      if (local_60 != (code **)0x0) {
        ppcVar4 = local_60;
      }
      (**(code **)(*ppcVar4 + 0x10))();
    }
    FlushRenderingCommands();
  }
  return;
}

// RHIResizeViewport @ 145bd4990

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

void __thiscall
FVulkanDynamicRHI::RHIResizeViewport
          (FVulkanDynamicRHI *this,FRHIViewport *param_1,uint param_2,uint param_3,bool param_4,
          EPixelFormat param_5)

{
  code *pcVar1;
  bool bVar2;
  Type TVar3;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar4;
  IConsoleManager *pIVar5;
  longlong *plVar6;
  TConsoleVariableData<int> *pTVar7;
  longlong lVar8;
  code **ppcVar9;
  ulonglong uVar10;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  FRHIViewport *local_b0;
  uint uStack_a8;
  uint uStack_a4;
  bool local_a0;
  EPixelFormat EStack_9f;
  undefined6 uStack_9e;
  code *pcStack_98;
  code *local_88 [2];
  code *local_78 [3];
  code **local_60;
  undefined1 local_58 [40];
  code **local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanViewport.cpp"
                       ,0x369,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_5 != PF_Unknown) goto LAB_145bd4a65;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pIVar5 = IConsoleManager::Get();
      plVar6 = (longlong *)
               (**(code **)((longlong)*pIVar5 + 0xc0))(pIVar5,L"r.DefaultBackBufferPixelFormat",1);
      pTVar7 = (TConsoleVariableData<int> *)0x0;
      if (plVar6 != (longlong *)0x0) {
        pTVar7 = (TConsoleVariableData<int> *)(**(code **)(*plVar6 + 0x68))(plVar6);
      }
      CVarDefaultBackBufferPixelFormat = pTVar7;
      _Init_thread_footer(&::_TSS0);
    }
  }
  pTVar7 = CVarDefaultBackBufferPixelFormat;
  bVar2 = IsInParallelGameThread();
  if (bVar2) {
LAB_145bd4a49:
    lVar8 = 0;
  }
  else {
    bVar2 = IsInGameThread();
    if (bVar2) goto LAB_145bd4a49;
    lVar8 = 4;
  }
  TVar3 = EDefaultBackBufferPixelFormat::FromInt(*(int *)((longlong)pTVar7->ShadowedValue + lVar8));
  param_5 = EDefaultBackBufferPixelFormat::Convert2PixelFormat(TVar3);
LAB_145bd4a65:
  if (((*(uint *)&param_1[0xb].field_0x10 != param_2) ||
      (*(uint *)&param_1[0xb].field_0x14 != param_3)) || ((bool)*(char *)(param_1 + 0xc) != param_4)
     ) {
    local_b8 = *(undefined8 *)&param_1[0xc].field_0x10;
    pcStack_98 = (code *)&local_b8;
    local_a0 = param_4;
    local_88[0] = (code *)0x0;
    local_b0 = param_1;
    uStack_a8 = param_2;
    uStack_a4 = param_3;
    EStack_9f = param_5;
    local_60 = FMemory::Malloc(0x28,8);
    *local_60 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`FVulkanDynamicRHI::RHIResizeViewport'::`15'::<lambda_1>,1,1>
                         ::_vftable_;
    local_60[1] = (code *)local_b0;
    local_60[2] = (code *)CONCAT44(uStack_a4,uStack_a8);
    local_60[3] = (code *)CONCAT62(uStack_9e,CONCAT11(EStack_9f,local_a0));
    local_60[4] = pcStack_98;
    if (local_60 + 1 != (code **)0x0) {
      local_88[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FVulkanDynamicRHI::RHIResizeViewport'::__l15::<lambda_1>,void,FRHICommandListImmediate_&>
                    ::Call;
    }
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FVulkanDynamicRHI::RHIResizeViewport_::__l15::TSTR_ResizeViewport887>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_58._0_8_ = local_88[0];
      local_30 = local_60;
      local_60 = (code **)0x0;
      local_58._16_8_ = local_78[0];
      local_58._24_8_ = local_78[1];
      local_58._32_8_ = local_78[2];
      local_88[0] = (code *)0x0;
      local_28 = 2;
      pFVar4 = (FRenderCommandTag *)
               TRenderCommandTag<`FVulkanDynamicRHI::RHIResizeViewport'::__l15::TSTR_ResizeViewport887>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_58,pFVar4);
      uVar10 = (ulonglong)local_28;
      if (2 < uVar10) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar10] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_58._0_8_ != (code *)0x0) {
          ppcVar9 = (code **)(local_58 + 0x10);
          if (local_30 != (code **)0x0) {
            ppcVar9 = local_30;
          }
          (**(code **)(*ppcVar9 + 0x10))();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar10])(local_58);
      }
    }
    if (local_88[0] != (code *)0x0) {
      ppcVar9 = local_88 + 2;
      if (local_60 != (code **)0x0) {
        ppcVar9 = local_60;
      }
      (**(code **)(*ppcVar9 + 0x10))();
    }
    FlushRenderingCommands();
  }
  return;
}

// RHITick @ 145bd4f50

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

void __thiscall FVulkanDynamicRHI::RHITick(FVulkanDynamicRHI *this,float param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanViewport.cpp"
                       ,0x394,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// operator() @ 1504d8e70

bool __thiscall `FVulkanDynamicRHI::RHICreateRenderQuery'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<8816365267845120211>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<8816365267845120211>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504d8ec0

bool __thiscall
`FVulkanDynamicRHI::RHIGetRenderQueryResult'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<8816365267845120219>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<8816365267845120219>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

